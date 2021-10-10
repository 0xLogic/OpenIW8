/*
==============
BgMissile::StuckToDoorUpdate
==============
*/

bool __fastcall BgMissile::StuckToDoorUpdate(BgMissile *this, BgEntityData *entityData, const int simulationTime)
{
  return ?StuckToDoorUpdate@BgMissile@@IEBA_NPEAVBgEntityData@@H@Z(this, entityData, simulationTime);
}

/*
==============
BgMissile::JavelinRotateDir
==============
*/

double __fastcall BgMissile::JavelinRotateDir(BgMissile *this, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentDir, const vec3_t *targetDir, vec3_t *resultDir)
{
  double result; 

  *(float *)&result = ?JavelinRotateDir@BgMissile@@IEBAMPEAVBgEntityData@@HAEBTvec3_t@@1AEAT3@@Z(this, entityData, timeDeltaMsec, currentDir, targetDir, resultDir);
  return result;
}

/*
==============
BgMissile::HorzSteerToTarget
==============
*/

void __fastcall BgMissile::HorzSteerToTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const vec2_t *currentRight, const vec2_t *toTargetRelative, float currentHorzSpeed, vec3_t *inOutSteer)
{
  ?HorzSteerToTarget@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@AEBTvec2_t@@2MAEATvec3_t@@@Z(this, weaponMap, entityData, currentRight, toTargetRelative, currentHorzSpeed, inOutSteer);
}

/*
==============
BgMissile::UseOffhand
==============
*/

void __fastcall BgMissile::UseOffhand(BgMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  ?UseOffhand@BgMissile@@QEAAXHHPEBUBgWeaponParms@@@Z(this, creatorEntNum, gameTime, wp);
}

/*
==============
BgMissile::Rand
==============
*/

double __fastcall BgMissile::Rand(BgMissile *this, float min, float max)
{
  double result; 

  *(float *)&result = ?Rand@BgMissile@@IEAAMMM@Z(this, min, max);
  return result;
}

/*
==============
BgMissile::GrenadeDud
==============
*/

bool __fastcall BgMissile::GrenadeDud(BgMissile *this, BgEntityData *entityData, const Weapon *weapon, bool isAlternate)
{
  return ?GrenadeDud@BgMissile@@IEBA_NPEAVBgEntityData@@AEBUWeapon@@_N@Z(this, entityData, weapon, isAlternate);
}

/*
==============
BgMissile::IRand
==============
*/

int __fastcall BgMissile::IRand(BgMissile *this, int min, int max)
{
  return ?IRand@BgMissile@@IEAAHHH@Z(this, min, max);
}

/*
==============
BgMissile::GetPerturbation
==============
*/

double __fastcall BgMissile::GetPerturbation(BgMissile *this, float destabilizationCurvatureMax)
{
  double result; 

  *(float *)&result = ?GetPerturbation@BgMissile@@IEBAMM@Z(this, destabilizationCurvatureMax);
  return result;
}

/*
==============
BgMissile::BgMissile
==============
*/

void __fastcall BgMissile::BgMissile(BgMissile *this)
{
  ??0BgMissile@@IEAA@XZ(this);
}

/*
==============
BgMissile::MissileTrace
==============
*/

void __fastcall BgMissile::MissileTrace(BgMissile *this, const BgEntityData *missileEntData, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum2, int contentmask, bool detailTrace)
{
  ?MissileTrace@BgMissile@@IEBAXPEBVBgEntityData@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HHH_N@Z(this, missileEntData, results, start, end, bounds, passEntityNum, passEntityNum2, contentmask, detailTrace);
}

/*
==============
BgMissile::GetTargetPosition
==============
*/

void __fastcall BgMissile::GetTargetPosition(BgMissile *this, BgEntityData *entityData, vec3_t *outResult)
{
  ?GetTargetPosition@BgMissile@@IEBAXPEAVBgEntityData@@AEATvec3_t@@@Z(this, entityData, outResult);
}

/*
==============
BgMissile::AddVelocityForLinkedMover
==============
*/

void __fastcall BgMissile::AddVelocityForLinkedMover(BgMissile *this, const BgAntiLag *const antiLag, const playerState_s *ownerPs, const entityState_t *moverEnt, const int gameTime, const vec3_t *missileDir, vec3_t *inOutVel)
{
  ?AddVelocityForLinkedMover@BgMissile@@QEBAXQEBVBgAntiLag@@PEBUplayerState_s@@PEBUentityState_t@@HAEBTvec3_t@@AEAT5@@Z(this, antiLag, ownerPs, moverEnt, gameTime, missileDir, inOutVel);
}

/*
==============
BgMissile::MissileDestabilize
==============
*/

void __fastcall BgMissile::MissileDestabilize(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime, const int timeDeltaMsec)
{
  ?MissileDestabilize@BgMissile@@IEAAXPEBVBgWeaponMap@@PEAVBgEntityData@@HH@Z(this, weaponMap, entityData, simulationTime, timeDeltaMsec);
}

/*
==============
BgMissile::RobotechSteering
==============
*/

void __fastcall BgMissile::RobotechSteering(BgMissile *this, BgEntityData *entityData, const WeaponDef *weapDef, const int simulationTime, const int timeDeltaMsec)
{
  ?RobotechSteering@BgMissile@@IEBAXPEAVBgEntityData@@PEBUWeaponDef@@HH@Z(this, entityData, weapDef, simulationTime, timeDeltaMsec);
}

/*
==============
BgMissile::FireGrenade
==============
*/

void __fastcall BgMissile::FireGrenade(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, bool rotate, const int serverTime, const int fuseTime, const bool applyNoDrawTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  ?FireGrenade@BgMissile@@QEAAXPEAVBgWeaponMap@@HAEBTvec3_t@@1AEBUWeapon@@_NW4PlayerHandIndex@@_NHH3PEAVBgEntityData@@PEAVBgEntityComponentData@@@Z(this, weaponMap, parentEntNum, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, serverTime, fuseTime, applyNoDrawTime, outEntityData, outComponentData);
}

/*
==============
BgMissile::VerticalSteerToTarget
==============
*/

void __fastcall BgMissile::VerticalSteerToTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec2_t *toTargetHorzRelDir, float horzDistToTarg, float vertDistToTarg, float currentHorzSpeed, const bool usePersistentTracking, vec3_t *inOutSteer)
{
  ?VerticalSteerToTarget@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@HAEBTvec2_t@@MMM_NAEATvec3_t@@@Z(this, weaponMap, entityData, timeDeltaMsec, toTargetHorzRelDir, horzDistToTarg, vertDistToTarg, currentHorzSpeed, usePersistentTracking, inOutSteer);
}

/*
==============
BgMissile::CheckCrumpleMissile
==============
*/

int __fastcall BgMissile::CheckCrumpleMissile(BgMissile *this, const BgWeaponMap *weaponMap, const WeaponDef *weapDef, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace)
{
  return ?CheckCrumpleMissile@BgMissile@@IEBAHPEBVBgWeaponMap@@PEBUWeaponDef@@PEAVBgEntityData@@HHHAEBTvec3_t@@PEAUtrace_t@@@Z(this, weaponMap, weapDef, entityData, lastSimulationTime, simulationTime, timeDeltaMsec, originAtSimStart, trace);
}

/*
==============
BgMissile::PenetrateGlass
==============
*/

void __fastcall BgMissile::PenetrateGlass(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const int missileClipMask, const int simulationTime, const int timeDeltaMsec, trace_t *results, const vec3_t *start, const vec3_t *end, int damage, bool predicted, bool alwaysShatterOnImpact)
{
  ?PenetrateGlass@BgMissile@@QEBAXPEBVBgWeaponMap@@PEBVBgEntityData@@HHHPEAUtrace_t@@AEBTvec3_t@@3H_N4@Z(this, weaponMap, entityData, missileClipMask, simulationTime, timeDeltaMsec, results, start, end, damage, predicted, alwaysShatterOnImpact);
}

/*
==============
BgMissile::Tick
==============
*/

void __fastcall BgMissile::Tick(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  ?Tick@BgMissile@@QEAAXPEAVBgWeaponMap@@PEAVBgEntityData@@HHH@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
}

/*
==============
BgMissile::Random
==============
*/

double __fastcall BgMissile::Random(BgMissile *this)
{
  double result; 

  *(float *)&result = ?Random@BgMissile@@IEAAMXZ(this);
  return result;
}

/*
==============
BgMissile::GetPointContents
==============
*/

int __fastcall BgMissile::GetPointContents(BgMissile *this, const vec3_t *pos, int skipEntity, int contentMask)
{
  return ?GetPointContents@BgMissile@@IEBAHAEBTvec3_t@@HH@Z(this, pos, skipEntity, contentMask);
}

/*
==============
BgMissile::InitGrenadeEntity
==============
*/

void __fastcall BgMissile::InitGrenadeEntity(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  ?InitGrenadeEntity@BgMissile@@QEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@HH@Z(this, weaponMap, entityData, parentEntNum, serverTime);
}

/*
==============
BgMissile::IsDebugDrawEnabled
==============
*/

bool __fastcall BgMissile::IsDebugDrawEnabled(BgMissile *this)
{
  return ?IsDebugDrawEnabled@BgMissile@@QEBA_NXZ(this);
}

/*
==============
BgMissile::AddVelocityForMover
==============
*/

void __fastcall BgMissile::AddVelocityForMover(BgMissile *this, const BgAntiLag *const antiLag, const playerState_s *ownerPs, const entityState_t *moverEnt, const int gameTime, vec3_t *inOutVel)
{
  ?AddVelocityForMover@BgMissile@@QEBAXQEBVBgAntiLag@@PEBUplayerState_s@@PEBUentityState_t@@HAEATvec3_t@@@Z(this, antiLag, ownerPs, moverEnt, gameTime, inOutVel);
}

/*
==============
BgMissile::RandomPointInUnitCircle
==============
*/

void __fastcall BgMissile::RandomPointInUnitCircle(BgMissile *this, const unsigned int seed, float *outX, float *outY)
{
  ?RandomPointInUnitCircle@BgMissile@@QEBAXIPEAM0@Z(this, seed, outX, outY);
}

/*
==============
BgMissile::JavelinProjectile
==============
*/

bool __fastcall BgMissile::JavelinProjectile(BgMissile *this, BgEntityData *entityData, const WeaponDef *weapDef)
{
  return ?JavelinProjectile@BgMissile@@IEBA_NPEAVBgEntityData@@PEBUWeaponDef@@@Z(this, entityData, weapDef);
}

/*
==============
BgMissile::MissileImpact
==============
*/

void __fastcall BgMissile::MissileImpact(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace, vec3_t *dir, vec3_t *endpos)
{
  ?MissileImpact@BgMissile@@IEAAXPEBVBgWeaponMap@@PEAVBgEntityData@@HHHAEBTvec3_t@@PEAUtrace_t@@AEAT4@4@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec, originAtSimStart, trace, dir, endpos);
}

/*
==============
BgMissile::JavelinRotateDir_Legacy
==============
*/

double __fastcall BgMissile::JavelinRotateDir_Legacy(BgMissile *this, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentDir, const vec3_t *targetDir, vec3_t *resultDir)
{
  double result; 

  *(float *)&result = ?JavelinRotateDir_Legacy@BgMissile@@IEBAMPEAVBgEntityData@@HAEBTvec3_t@@1AEAT3@@Z(this, entityData, timeDeltaMsec, currentDir, targetDir, resultDir);
  return result;
}

/*
==============
BgMissile::VecToQuat
==============
*/

void __fastcall BgMissile::VecToQuat(const vec3_t *vec, vec4_t *quat)
{
  ?VecToQuat@BgMissile@@KAXAEBTvec3_t@@AEATvec4_t@@@Z(vec, quat);
}

/*
==============
BgMissile::TraceHitMovingPlatform
==============
*/

bool __fastcall BgMissile::TraceHitMovingPlatform(BgMissile *this, const trace_t *trace)
{
  return ?TraceHitMovingPlatform@BgMissile@@IEBA_NPEBUtrace_t@@@Z(this, trace);
}

/*
==============
BgMissile::GetGrenadeTrType
==============
*/

trType_t __fastcall BgMissile::GetGrenadeTrType(BgMissile *this, BgEntityData *entityData)
{
  return ?GetGrenadeTrType@BgMissile@@IEBA?AW4trType_t@@PEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::JavelinClimbCeiling
==============
*/

double __fastcall BgMissile::JavelinClimbCeiling(BgMissile *this, BgEntityData *entityData)
{
  double result; 

  *(float *)&result = ?JavelinClimbCeiling@BgMissile@@IEBAMPEAVBgEntityData@@@Z(this, entityData);
  return result;
}

/*
==============
BgMissile::BounceMissile
==============
*/

BounceMissileResult __fastcall BgMissile::BounceMissile(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace, vec3_t *endPos)
{
  return ?BounceMissile@BgMissile@@IEAA?AW4BounceMissileResult@@PEBVBgWeaponMap@@PEAVBgEntityData@@HHHAEBTvec3_t@@PEAUtrace_t@@AEAT5@@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec, originAtSimStart, trace, endPos);
}

/*
==============
BgMissile::JavelinClimbWithin2DDistance
==============
*/

bool __fastcall BgMissile::JavelinClimbWithin2DDistance(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  return ?JavelinClimbWithin2DDistance@BgMissile@@IEBA_NPEAVBgEntityData@@AEBTvec3_t@@@Z(this, entityData, targetPos);
}

/*
==============
BgMissile::JavelinClimbOffset
==============
*/

void __fastcall BgMissile::JavelinClimbOffset(BgMissile *this, BgEntityData *entityData, vec3_t *inOutTargetPos)
{
  ?JavelinClimbOffset@BgMissile@@IEBAXPEAVBgEntityData@@AEATvec3_t@@@Z(this, entityData, inOutTargetPos);
}

/*
==============
BgMissile::FireRocket
==============
*/

void __fastcall BgMissile::FireRocket(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, PlayerHandIndex hand, const vec3_t *start, const vec3_t *dir, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  ?FireRocket@BgMissile@@QEBAXPEAVBgWeaponMap@@HAEBUWeapon@@_NW4PlayerHandIndex@@AEBTvec3_t@@44PEBUBgMissileFireParms@@_NHPEAVBgEntityData@@PEAVBgEntityComponentData@@@Z(this, weaponMap, parentEntNum, r_weapon, isAlternate, hand, start, dir, gunVel, fireParms, magicBullet, serverTime, outEntityData, outComponentData);
}

/*
==============
BgMissile::JavelinSteering
==============
*/

void __fastcall BgMissile::JavelinSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon, const int simulationTime, const int timeDeltaMsec)
{
  ?JavelinSteering@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@AEBUWeapon@@HH@Z(this, weaponMap, entityData, weapon, simulationTime, timeDeltaMsec);
}

/*
==============
BgMissile::Rand
==============
*/

int __fastcall BgMissile::Rand(BgMissile *this)
{
  return ?Rand@BgMissile@@IEAAHXZ(this);
}

/*
==============
BgMissile::GetLastHitCharacter
==============
*/

int __fastcall BgMissile::GetLastHitCharacter(BgMissile *this, BgEntityData *entityData)
{
  return ?GetLastHitCharacter@BgMissile@@IEBAHPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::Simulate
==============
*/

void __fastcall BgMissile::Simulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  ?Simulate@BgMissile@@IEAAXPEAVBgWeaponMap@@PEAVBgEntityData@@HHH@Z(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
}

/*
==============
BgMissile::FireGrenadeRethrow
==============
*/

void __fastcall BgMissile::FireGrenadeRethrow(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, bool rotate, const int serverTime, const int fuseTime, const bool applyNoDrawTime, BgEntityData *rethrowEntityData, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  ?FireGrenadeRethrow@BgMissile@@QEAAXPEAVBgWeaponMap@@HAEBTvec3_t@@1AEBUWeapon@@_NW4PlayerHandIndex@@_NHH3PEAVBgEntityData@@6PEAVBgEntityComponentData@@@Z(this, weaponMap, parentEntNum, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, serverTime, fuseTime, applyNoDrawTime, rethrowEntityData, outEntityData, outComponentData);
}

/*
==============
BgMissile::JavelinClimbEnd
==============
*/

bool __fastcall BgMissile::JavelinClimbEnd(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  return ?JavelinClimbEnd@BgMissile@@IEBA_NPEAVBgEntityData@@AEBTvec3_t@@@Z(this, entityData, targetPos);
}

/*
==============
BgMissile::SetDoorScriptable
==============
*/

void __fastcall BgMissile::SetDoorScriptable(BgMissile *this, BgEntityData *entityData, unsigned int scriptableIndex)
{
  ?SetDoorScriptable@BgMissile@@IEBAXPEAVBgEntityData@@I@Z(this, entityData, scriptableIndex);
}

/*
==============
BgMissile::AllowBoltForVehicles
==============
*/

bool __fastcall BgMissile::AllowBoltForVehicles(BgMissile *this)
{
  return ?AllowBoltForVehicles@BgMissile@@UEBA_NXZ(this);
}

/*
==============
BgMissile::MissileLandAnglesKnife
==============
*/

BounceMissileResult __fastcall BgMissile::MissileLandAnglesKnife(BgMissile *this, const BgEntityData *entityData, const Weapon *weapon, const bool isAlternate, trace_t *trace, vec3_t *angles, vec3_t *origin, const int lastSimulationTime, const int simulationTime)
{
  return ?MissileLandAnglesKnife@BgMissile@@IEAA?AW4BounceMissileResult@@PEBVBgEntityData@@AEBUWeapon@@_NPEAUtrace_t@@AEATvec3_t@@4HH@Z(this, entityData, weapon, isAlternate, trace, angles, origin, lastSimulationTime, simulationTime);
}

/*
==============
BgMissile::PostSimulate
==============
*/

void __fastcall BgMissile::PostSimulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const bool restoreAntiLag)
{
  ?PostSimulate@BgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@_N@Z(this, weaponMap, entityData, restoreAntiLag);
}

/*
==============
BgMissile::IsMissileLockedOn
==============
*/

bool __fastcall BgMissile::IsMissileLockedOn(BgMissile *this, const BgEntityData *entityData)
{
  return ?IsMissileLockedOn@BgMissile@@IEBA_NPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::VerticalSteering
==============
*/

void __fastcall BgMissile::VerticalSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *toTargetRelative, float currentHorzSpeed, const bool usePersistentTracking, vec3_t *inOutSteer)
{
  ?VerticalSteering@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@HAEBTvec3_t@@M_NAEAT4@@Z(this, weaponMap, entityData, timeDeltaMsec, toTargetRelative, currentHorzSpeed, usePersistentTracking, inOutSteer);
}

/*
==============
BgMissile::JavelinDud
==============
*/

bool __fastcall BgMissile::JavelinDud(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const WeaponDef *weapDef)
{
  return ?JavelinDud@BgMissile@@IEBA_NPEBVBgWeaponMap@@PEAVBgEntityData@@PEBUWeaponDef@@@Z(this, weaponMap, entityData, weapDef);
}

/*
==============
BgMissile::MissileRollAngles
==============
*/

void __fastcall BgMissile::MissileRollAngles(BgMissile *this, const BgEntityData *entityData, const trace_t *trace, trajectory_t *outAngleTraj, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, vec3_t *outAngles)
{
  ?MissileRollAngles@BgMissile@@IEBAXPEBVBgEntityData@@PEBUtrace_t@@PEAUtrajectory_t@@HHHAEATvec3_t@@@Z(this, entityData, trace, outAngleTraj, lastSimulationTime, simulationTime, timeDeltaMsec, outAngles);
}

/*
==============
BgMissile::JavelinMaxDPS
==============
*/

double __fastcall BgMissile::JavelinMaxDPS(BgMissile *this, BgEntityData *entityData)
{
  double result; 

  *(float *)&result = ?JavelinMaxDPS@BgMissile@@IEBAMPEAVBgEntityData@@@Z(this, entityData);
  return result;
}

/*
==============
BgMissile::SetEntityWeapon
==============
*/

void __fastcall BgMissile::SetEntityWeapon(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon)
{
  ?SetEntityWeapon@BgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@AEBUWeapon@@@Z(this, weaponMap, entityData, weapon);
}

/*
==============
BgMissile::CalculateRocketLaunchTransform
==============
*/

void __fastcall BgMissile::CalculateRocketLaunchTransform(BgMissile *this, const BgWeaponParms *wp, const int seed, const float spread, vec3_t *outLaunchPos, vec3_t *outLaunchDir)
{
  ?CalculateRocketLaunchTransform@BgMissile@@QEBAXPEBUBgWeaponParms@@HMAEATvec3_t@@1@Z(this, wp, seed, spread, outLaunchPos, outLaunchDir);
}

/*
==============
BgMissile::GetGrenadeTrType
==============
*/

trType_t __fastcall BgMissile::GetGrenadeTrType(BgMissile *this, const BgEntityData *entityData)
{
  return ?GetGrenadeTrType@BgMissile@@IEBA?AW4trType_t@@PEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::MissileShouldStopAtImpact
==============
*/

bool __fastcall BgMissile::MissileShouldStopAtImpact(BgMissile *this, const Weapon *weapon, bool isAlternate, const trace_t *trace, const vec3_t *velocity, const BgEntityData *entityData)
{
  return ?MissileShouldStopAtImpact@BgMissile@@QEBA_NAEBUWeapon@@_NPEBUtrace_t@@AEBTvec3_t@@PEBVBgEntityData@@@Z(this, weapon, isAlternate, trace, velocity, entityData);
}

/*
==============
BgMissile::JavelinClimbIsAboveCeiling
==============
*/

bool __fastcall BgMissile::JavelinClimbIsAboveCeiling(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  return ?JavelinClimbIsAboveCeiling@BgMissile@@IEBA_NPEAVBgEntityData@@AEBTvec3_t@@@Z(this, entityData, targetPos);
}

/*
==============
BgMissile::GrenadeBounceVelocity
==============
*/

bool __fastcall BgMissile::GrenadeBounceVelocity(BgMissile *this, const vec3_t *preBounceVelocity, float dot, const vec3_t *normal, int surfType, const WeaponDef *weapDef, trajectory_t_secure *pos, float *outRollSlideSpeed, vec3_t *outRollSlideDir, const int hitEntNum)
{
  return ?GrenadeBounceVelocity@BgMissile@@QEBA_NAEBTvec3_t@@M0HPEBUWeaponDef@@PEAUtrajectory_t_secure@@AEAMAEAT2@H@Z(this, preBounceVelocity, dot, normal, surfType, weapDef, pos, outRollSlideSpeed, outRollSlideDir, hitEntNum);
}

/*
==============
BgMissile::MissileLandAnglesFlat
==============
*/

void __fastcall BgMissile::MissileLandAnglesFlat(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime, const int simulationTime)
{
  ?MissileLandAnglesFlat@BgMissile@@IEBAXPEBVBgEntityData@@PEAUtrace_t@@AEATvec3_t@@HH@Z(this, entityData, trace, angles, lastSimulationTime, simulationTime);
}

/*
==============
BgMissile::CharactersOnSameTeam
==============
*/

bool __fastcall BgMissile::CharactersOnSameTeam(BgMissile *this, const int firstCharEntNum, const int secondCharEntNum)
{
  return ?CharactersOnSameTeam@BgMissile@@IEBA_NHH@Z(this, firstCharEntNum, secondCharEntNum);
}

/*
==============
BgMissile::MissileIsReadyForSteering
==============
*/

bool __fastcall BgMissile::MissileIsReadyForSteering(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const int simulationTime)
{
  return ?MissileIsReadyForSteering@BgMissile@@IEBA_NPEBVBgWeaponMap@@PEBVBgEntityData@@H@Z(this, weaponMap, entityData, simulationTime);
}

/*
==============
BgMissile::TraceCapsule
==============
*/

void __fastcall BgMissile::TraceCapsule(BgMissile *this, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  ?TraceCapsule@BgMissile@@IEBAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@HH@Z(this, results, start, end, bounds, passEntityNum, contentmask);
}

/*
==============
BgMissile::IsGrenade
==============
*/

bool __fastcall BgMissile::IsGrenade(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData)
{
  return ?IsGrenade@BgMissile@@QEBA_NPEBVBgWeaponMap@@PEBVBgEntityData@@@Z(this, weaponMap, entityData);
}

/*
==============
BgMissile::TraceHitCharacter
==============
*/

bool __fastcall BgMissile::TraceHitCharacter(BgMissile *this, const trace_t *trace)
{
  return ?TraceHitCharacter@BgMissile@@IEBA_NPEBUtrace_t@@@Z(this, trace);
}

/*
==============
BgMissile::CalcTargetPosition
==============
*/

void __fastcall BgMissile::CalcTargetPosition(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData)
{
  ?CalcTargetPosition@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@@Z(this, weaponMap, entityData);
}

/*
==============
BgMissile::FlushInvalidTargets
==============
*/

void __fastcall BgMissile::FlushInvalidTargets(BgMissile *this, BgEntityData *entityData)
{
  ?FlushInvalidTargets@BgMissile@@IEBAXPEAVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::MissilePassedTarget
==============
*/

bool __fastcall BgMissile::MissilePassedTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData)
{
  return ?MissilePassedTarget@BgMissile@@IEBA_NPEBVBgWeaponMap@@PEAVBgEntityData@@@Z(this, weaponMap, entityData);
}

/*
==============
BgMissile::TraceHitType
==============
*/

bool __fastcall BgMissile::TraceHitType(BgMissile *this, const trace_t *trace, int entType)
{
  return ?TraceHitType@BgMissile@@IEBA_NPEBUtrace_t@@H@Z(this, trace, entType);
}

/*
==============
BgMissile::PreSimulate
==============
*/

void __fastcall BgMissile::PreSimulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, bool *outRestoreAntiLag)
{
  ?PreSimulate@BgMissile@@MEBAXPEAVBgWeaponMap@@PEAVBgEntityData@@PEA_N@Z(this, weaponMap, entityData, outRestoreAntiLag);
}

/*
==============
BgMissile::CalculateMissileVelocity
==============
*/

void __fastcall BgMissile::CalculateMissileVelocity(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const vec3_t *originAtSimStart, const int hitTime, const float hitFraction, const int timeDeltaMsec, vec3_t *outVelocity)
{
  ?CalculateMissileVelocity@BgMissile@@IEBAXPEBVBgWeaponMap@@PEBVBgEntityData@@AEBTvec3_t@@HMHAEAT4@@Z(this, weaponMap, entityData, originAtSimStart, hitTime, hitFraction, timeDeltaMsec, outVelocity);
}

/*
==============
BgMissile::TraceHitCharacterOrCorpse
==============
*/

bool __fastcall BgMissile::TraceHitCharacterOrCorpse(BgMissile *this, const trace_t *trace)
{
  return ?TraceHitCharacterOrCorpse@BgMissile@@IEBA_NPEBUtrace_t@@@Z(this, trace);
}

/*
==============
BgMissile::GrenadeBounceMirrorVelocity
==============
*/

double __fastcall BgMissile::GrenadeBounceMirrorVelocity(BgMissile *this, const vec3_t *velocity, const vec3_t *normal, const WeaponDef *weapDef, vec3_t *result)
{
  double v5; 

  *(float *)&v5 = ?GrenadeBounceMirrorVelocity@BgMissile@@QEBAMAEBTvec3_t@@0PEBUWeaponDef@@AEAT2@@Z(this, velocity, normal, weapDef, result);
  return v5;
}

/*
==============
BgMissile::GetLastHitCharacterConst
==============
*/

int __fastcall BgMissile::GetLastHitCharacterConst(BgMissile *this, const BgEntityData *entityData)
{
  return ?GetLastHitCharacterConst@BgMissile@@IEBAHPEBVBgEntityData@@@Z(this, entityData);
}

/*
==============
BgMissile::GetDamageCalcType
==============
*/

WeaponDamageCalcType __fastcall BgMissile::GetDamageCalcType(BgMissile *this, entityState_t *missileOwnerEnt, entityState_t *hitEnt)
{
  return ?GetDamageCalcType@BgMissile@@MEBA?AW4WeaponDamageCalcType@@PEAUentityState_t@@0@Z(this, missileOwnerEnt, hitEnt);
}

/*
==============
BgMissile::GuidedMissileSteering
==============
*/

void __fastcall BgMissile::GuidedMissileSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime, const int timeDeltaMsec, int *outMissileClipMask)
{
  ?GuidedMissileSteering@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@HHPEAH@Z(this, weaponMap, entityData, simulationTime, timeDeltaMsec, outMissileClipMask);
}

/*
==============
BgMissile::JavelinClimbExceededAngle
==============
*/

bool __fastcall BgMissile::JavelinClimbExceededAngle(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  return ?JavelinClimbExceededAngle@BgMissile@@IEBA_NPEAVBgEntityData@@AEBTvec3_t@@@Z(this, entityData, targetPos);
}

/*
==============
BgMissile::ShouldBePredicted
==============
*/

bool __fastcall BgMissile::ShouldBePredicted(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_grenadeWeapon, const bool isAlternate)
{
  return ?ShouldBePredicted@BgMissile@@SA_NPEBVBgWeaponMap@@PEBUplayerState_s@@AEBUWeapon@@_N@Z(weaponMap, ps, r_grenadeWeapon, isAlternate);
}

/*
==============
BgMissile::JavelinRotateVelocity
==============
*/

void __fastcall BgMissile::JavelinRotateVelocity(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentVel, const vec3_t *targetDir, vec3_t *resultVel)
{
  ?JavelinRotateVelocity@BgMissile@@IEBAXPEBVBgWeaponMap@@PEAVBgEntityData@@HAEBTvec3_t@@2AEAT4@@Z(this, weaponMap, entityData, timeDeltaMsec, currentVel, targetDir, resultVel);
}

/*
==============
BgMissile::MissileLandAnglesFlatMaintainingDirection
==============
*/

void __fastcall BgMissile::MissileLandAnglesFlatMaintainingDirection(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime, const int simulationTime)
{
  ?MissileLandAnglesFlatMaintainingDirection@BgMissile@@IEBAXPEBVBgEntityData@@PEAUtrace_t@@AEATvec3_t@@HH@Z(this, entityData, trace, angles, lastSimulationTime, simulationTime);
}

/*
==============
BgMissile::MissileTrajectory
==============
*/

void __fastcall BgMissile::MissileTrajectory(BgMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec, BgEntityData *entityData, vec3_t *outResult, int *outMissileClipMask)
{
  ?MissileTrajectory@BgMissile@@IEBAXPEBVBgWeaponMap@@HHPEAVBgEntityData@@AEATvec3_t@@PEAH@Z(this, weaponMap, simulationTime, timeDeltaMsec, entityData, outResult, outMissileClipMask);
}

/*
==============
BgMissile::SetMissileLastHitCharacter
==============
*/

void __fastcall BgMissile::SetMissileLastHitCharacter(BgMissile *this, BgEntityData *entityData, const int lastHitCharacterEntNum)
{
  ?SetMissileLastHitCharacter@BgMissile@@IEBAXPEAVBgEntityData@@H@Z(this, entityData, lastHitCharacterEntNum);
}

/*
==============
BgMissile::StickToDoor
==============
*/

void __fastcall BgMissile::StickToDoor(BgMissile *this, BgEntityData *entityData, unsigned int scriptableIndex)
{
  ?StickToDoor@BgMissile@@IEBAXPEAVBgEntityData@@I@Z(this, entityData, scriptableIndex);
}

/*
==============
BgMissile::SRand
==============
*/

void __fastcall BgMissile::SRand(BgMissile *this, unsigned int seed)
{
  ?SRand@BgMissile@@QEAAXI@Z(this, seed);
}

/*
==============
BgMissile::GetRotationDirMultiplier
==============
*/

double __fastcall BgMissile::GetRotationDirMultiplier(BgMissile *this, GrenadeRotationDirection rotationDir)
{
  double result; 

  *(float *)&result = ?GetRotationDirMultiplier@BgMissile@@IEAAMW4GrenadeRotationDirection@@@Z(this, rotationDir);
  return result;
}

/*
==============
BgMissile::MissileLandAngles
==============
*/

void __fastcall BgMissile::MissileLandAngles(BgMissile *this, BgEntityData *entityData, trace_t *trace, vec3_t *vAngles, int bForceAlign, int rotateDir, const int lastSimulationTime, const int simulationTime)
{
  ?MissileLandAngles@BgMissile@@IEAAXPEAVBgEntityData@@PEAUtrace_t@@AEATvec3_t@@HHHH@Z(this, entityData, trace, vAngles, bForceAlign, rotateDir, lastSimulationTime, simulationTime);
}

/*
==============
BgMissile::InitGrenadeMovement
==============
*/

void __fastcall BgMissile::InitGrenadeMovement(BgMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *dir, const Weapon *weapon, bool rotate, const int serverTime)
{
  ?InitGrenadeMovement@BgMissile@@QEAAXPEAVBgEntityData@@AEBTvec3_t@@1AEBUWeapon@@_NH@Z(this, entityData, start, dir, weapon, rotate, serverTime);
}

/*
==============
BgMissile::BgMissile
==============
*/
void BgMissile::BgMissile(BgMissile *this)
{
  *(_DWORD *)&this->m_grenadeLinkToMovingPlatformUsesTag = 0;
  this->__vftable = (BgMissile_vtbl *)&BgMissile::`vftable';
  *(_WORD *)&this->m_remoteCameraCollisionPrediction = 0;
  this->m_javelinOffsetRight = 0.0;
  this->m_holdRand = -1985229329;
}

/*
==============
BgMissile::AddVelocityForLinkedMover
==============
*/
void BgMissile::AddVelocityForLinkedMover(BgMissile *this, const BgAntiLag *const antiLag, const playerState_s *ownerPs, const entityState_t *moverEnt, const int gameTime, const vec3_t *missileDir, vec3_t *inOutVel)
{
  const dvar_t *v10; 
  int number; 
  int clientNum; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  float v20; 
  float v21; 
  __int128 v22; 
  float v23; 
  BgAntiLagEntityInfo outInfo; 

  if ( !antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4524, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( !ownerPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4525, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
    __debugbreak();
  if ( !moverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4526, ASSERT_TYPE_ASSERT, "(moverEnt)", (const char *)&queryFormat, "moverEnt") )
    __debugbreak();
  v10 = DVARBOOL_addlinkedmovervelocitytomissile;
  if ( !DVARBOOL_addlinkedmovervelocitytomissile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addlinkedmovervelocitytomissile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    number = moverEnt->number;
    clientNum = ownerPs->clientNum;
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)antiLag, clientNum, number, 8u, gameTime, &outInfo) )
    {
      v13 = missileDir->v[1];
      v14 = LODWORD(missileDir->v[0]);
      v15 = missileDir->v[2];
      v16 = v14;
      *(float *)&v16 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13)) + (float)(v15 * v15));
      _XMM3 = v16;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      v20 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
      v22 = LODWORD(v13);
      v21 = v13 * (float)(1.0 / *(float *)&_XMM0);
      v23 = v15 * (float)(1.0 / *(float *)&_XMM0);
      *(float *)&v22 = (float)((float)(v21 * outInfo.velocity.v[1]) + (float)(v20 * outInfo.velocity.v[0])) + (float)(v23 * outInfo.velocity.v[2]);
      _XMM3 = v22;
      __asm { vmaxss  xmm4, xmm3, xmm0 }
      inOutVel->v[0] = (float)(*(float *)&_XMM4 * v20) + inOutVel->v[0];
      inOutVel->v[1] = (float)(v21 * *(float *)&_XMM4) + inOutVel->v[1];
      inOutVel->v[2] = (float)(v23 * *(float *)&_XMM4) + inOutVel->v[2];
    }
  }
}

/*
==============
BgMissile::AddVelocityForMover
==============
*/
void BgMissile::AddVelocityForMover(BgMissile *this, const BgAntiLag *const antiLag, const playerState_s *ownerPs, const entityState_t *moverEnt, const int gameTime, vec3_t *inOutVel)
{
  int number; 
  int clientNum; 
  float v11; 
  float v12; 
  float v13; 
  BgAntiLagEntityInfo outInfo; 

  if ( !antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4495, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( !ownerPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4496, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
    __debugbreak();
  if ( !moverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4497, ASSERT_TYPE_ASSERT, "(moverEnt)", (const char *)&queryFormat, "moverEnt") )
    __debugbreak();
  if ( BGMovingPlatforms::IsMovingPlatform(moverEnt->number) && (moverEnt->staticState.vehiclePlayer.playerIndex & 4) != 0 )
  {
    number = moverEnt->number;
    clientNum = ownerPs->clientNum;
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)antiLag, clientNum, number, 8u, gameTime, &outInfo) )
    {
      v11 = outInfo.velocity.v[1];
      inOutVel->v[0] = outInfo.velocity.v[0] + inOutVel->v[0];
      v12 = v11 + inOutVel->v[1];
      v13 = outInfo.velocity.v[2];
      inOutVel->v[1] = v12;
      inOutVel->v[2] = v13 + inOutVel->v[2];
    }
  }
}

/*
==============
BgMissile::AllowBoltForVehicles
==============
*/
bool BgMissile::AllowBoltForVehicles(BgMissile *this)
{
  return 0;
}

/*
==============
BG_Missile_SticksToPlayer
==============
*/
bool BG_Missile_SticksToPlayer(const BgEntityComponents *c, const Weapon *weapon, const bool isUsingAlternate)
{
  if ( !c && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 34, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  return (c->missile.flags & 0x4000) == 0 && BG_WeaponSticksToPlayers(weapon, isUsingAlternate);
}

/*
==============
BgMissile::BounceMissile
==============
*/
__int64 BgMissile::BounceMissile(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace)
{
  __int128 v8; 
  __int128 v9; 
  trace_t *v10; 
  const entityState_t *v15; 
  __int64 v16; 
  Weapon *WeaponForEntity; 
  const vec3_t *Origin; 
  Physics_WorldId v19; 
  int PointContents; 
  float fraction; 
  float v22; 
  const dvar_t *v23; 
  vec3_t *p_normal; 
  vec3_t *p_trDelta; 
  float v26; 
  float v28; 
  signed __int16 EntityHitId; 
  unsigned __int16 v31; 
  float v32; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  float v44; 
  float v45; 
  double Float_Internal_DebugName; 
  float v47; 
  double v48; 
  float v49; 
  float v50; 
  float v51; 
  __int128 v53; 
  double v55; 
  float v56; 
  vec3_t *v57; 
  int LastHitCharacter; 
  bool v59; 
  int ClipMask; 
  int OwnerEntNum; 
  const Bounds *Box; 
  const vec3_t *v63; 
  vec3_t *v64; 
  vec3_t *v65; 
  float v66; 
  double v67; 
  double v68; 
  float v69; 
  WeapStickinessType v70; 
  double v71; 
  vec3_t *v72; 
  Weapon *v73; 
  bool (__fastcall *SetEntityOriginAndAngles)(BgMissile *, BgEntityData *, const vec3_t *, const vec3_t *, const bool, const bool); 
  vec3_t *v75; 
  unsigned __int16 v76; 
  bool v77; 
  unsigned int hitId; 
  char v79; 
  bool v80; 
  unsigned __int16 v81; 
  void (*DebugText)(BgMissile *, const char *, ...); 
  const char *v83; 
  BgEntityComponents *v84; 
  float v86; 
  __int128 v87; 
  float v88; 
  __int128 v89; 
  __int128 v94; 
  float v95; 
  vec3_t *v98; 
  int v99; 
  bool v100; 
  int v101; 
  int v102; 
  const Bounds *v103; 
  const vec3_t *v104; 
  vec3_t *v105; 
  vec3_t *v106; 
  const vec3_t *v107; 
  const entityState_t *v108; 
  vec3_t *v109; 
  trace_t *v110; 
  unsigned __int16 v111; 
  float v112; 
  float v113; 
  float v114; 
  BOOL fmt; 
  BOOL hitFraction; 
  __int64 hitFractiona; 
  trajectory_t_secure *pos; 
  bool inAltWeaponMode; 
  bool v120; 
  char v121; 
  WeapStickinessType v122; 
  unsigned int v123; 
  unsigned __int16 lastSimulationTimeb; 
  float outRollSlideSpeed[2]; 
  Weapon *r_weapon; 
  int surfType[2]; 
  trace_t *v129; 
  int v130; 
  WeaponDef *weapDef; 
  BgWeaponMap *weaponMapa; 
  const entityState_t *EntityState; 
  vec3_t *v134; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  vec3_t *v136; 
  BgEntityComponents *Components; 
  vec3_t preBounceVelocity; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t v141; 
  vec3_t cross; 
  vec3_t right; 
  vec3_t up; 
  vec2_t vec; 
  float v146; 
  vec3_t v0; 
  trace_t results; 
  trace_t v149; 
  _QWORD v150[3]; 
  _QWORD v151[3]; 

  v10 = trace;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v129 = trace;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BounceMissile");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2936, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  v15 = EntityState;
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2939, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  v16 = (__int64)Components;
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2942, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(entityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2945, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2947, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, EntityState);
  r_weapon = WeaponForEntity;
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2950, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = EntityState->inAltWeaponMode;
  weapDef = (WeaponDef *)BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2955, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Origin = BgEntityData::GetOrigin(entityData);
  v19 = this->GetPhysicsMainWorldId(this);
  PointContents = PhysicsQuery_LegacyGetPointContents(v19, Origin, -1, 32);
  fraction = trace->fraction;
  v130 = PointContents;
  surfType[0] = (trace->surfaceFlags >> 19) & 0x3F;
  v22 = (float)(simulationTime - lastSimulationTime);
  BgMissile::CalculateMissileVelocity(this, weaponMapa, entityData, originAtSimStart, lastSimulationTime + (int)(float)(v22 * fraction), fraction, timeDeltaMsec, &preBounceVelocity);
  v23 = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  p_normal = &trace->normal;
  v134 = &trace->normal;
  p_trDelta = &EntityState->lerp.pos.trDelta;
  v136 = &EntityState->lerp.pos.trDelta;
  *(_QWORD *)outRollSlideSpeed = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  v26 = (float)((float)(preBounceVelocity.v[0] * trace->normal.v[0]) + (float)(preBounceVelocity.v[1] * trace->normal.v[1])) + (float)(preBounceVelocity.v[2] * trace->normal.v[2]);
  if ( !DCONST_DVARBOOL_bg_grenadeRollingEnabled )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRollingEnabled") )
      __debugbreak();
    v23 = *(const dvar_t **)outRollSlideSpeed;
  }
  Dvar_CheckFrontendServerThread(v23);
  if ( *(_BYTE *)(*(_QWORD *)outRollSlideSpeed + 40i64) && weapDef->isRollingGrenade )
    LODWORD(v28) = LODWORD(v26) ^ _xmm;
  else
    v28 = v26 * -2.0;
  p_trDelta->v[0] = (float)(v28 * p_normal->v[0]) + preBounceVelocity.v[0];
  v15->lerp.pos.trDelta.v[1] = (float)(v28 * trace->normal.v[1]) + preBounceVelocity.v[1];
  v15->lerp.pos.trDelta.v[2] = (float)(v28 * trace->normal.v[2]) + preBounceVelocity.v[2];
  if ( ((LODWORD(p_trDelta->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v15->lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v15->lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3197, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
    __debugbreak();
  if ( BG_WeaponSticksToWalls(r_weapon, inAltWeaponMode) || trace->normal.v[2] > 0.69999999 )
  {
    EntityHitId = Trace_GetEntityHitId(trace);
    v15->groundEntityNum = EntityHitId;
    this->SetEntityFlag(this, EntityHitId, DEAD|PRONE);
  }
  v120 = 0;
  _XMM11 = 0i64;
  if ( (Flags->m_flags[0] & 0x40000) != 0 )
  {
    v31 = Trace_GetEntityHitId(trace);
    v120 = BgMissile::GrenadeBounceVelocity(this, &preBounceVelocity, v26, &trace->normal, surfType[0], weapDef, &v15->lerp.pos, outRollSlideSpeed, &v0, v31);
    if ( v120 && BgMissile::IsGrenade(this, weaponMapa, entityData) )
    {
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(_OWORD *)&v151[1] = v8;
      v32 = (float)timeDeltaMsec * 0.001;
      *(double *)&_XMM0 = BG_random(&this->m_holdRand);
      v34 = DCONST_DVARFLT_bg_grenadeBumpFreq;
      *(_QWORD *)surfType = DCONST_DVARFLT_bg_grenadeBumpFreq;
      if ( !DCONST_DVARFLT_bg_grenadeBumpFreq )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeBumpFreq") )
          __debugbreak();
        v34 = *(const dvar_t **)surfType;
      }
      Dvar_CheckFrontendServerThread(v34);
      v35 = outRollSlideSpeed[0];
      if ( *(float *)&_XMM0 < *(float *)(*(_QWORD *)surfType + 40i64) )
      {
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeBumpMag, "bg_grenadeBumpMag");
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeBumpMax, "bg_grenadeBumpMax");
        __asm { vminss  xmm6, xmm0, xmm6 }
        if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
        {
          v37 = DVARFLT_bg_gravity;
          *(_QWORD *)outRollSlideSpeed = DVARFLT_bg_gravity;
          if ( !DVARFLT_bg_gravity )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
              __debugbreak();
            v37 = *(const dvar_t **)outRollSlideSpeed;
          }
          Dvar_CheckFrontendServerThread(v37);
          v38 = *(float *)(*(_QWORD *)outRollSlideSpeed + 40i64);
        }
        else
        {
          v38 = FLOAT_800_0;
        }
        if ( *(float *)&_XMM6 > (float)(v38 * v32) )
        {
          p_trDelta->v[0] = (float)(*(float *)&_XMM6 * p_normal->v[0]) + p_trDelta->v[0];
          v15->lerp.pos.trDelta.v[1] = (float)(*(float *)&_XMM6 * trace->normal.v[1]) + v15->lerp.pos.trDelta.v[1];
          v15->lerp.pos.trDelta.v[2] = (float)(*(float *)&_XMM6 * trace->normal.v[2]) + v15->lerp.pos.trDelta.v[2];
        }
      }
      v39 = LODWORD(v0.v[2]);
      if ( v0.v[2] < 25.0 && trace->normal.v[2] > 0.69999999 )
      {
        *(_OWORD *)&v150[1] = v9;
        *(double *)&v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleFreq, "bg_grenadeWobbleFreq");
        v40 = *(float *)(v16 + 76);
        v41 = v39;
        *(float *)&v41 = (float)((float)((float)(*(float *)&v39 * v35) * v32) * 6.2831855) + v40;
        v42 = v41;
        *(float *)(v16 + 76) = *(float *)&v41;
        if ( *(float *)&v41 > 6.2831855 )
        {
          do
          {
            v43 = v42;
            *(float *)&v43 = *(float *)&v42 + -6.2831855;
            v42 = v43;
          }
          while ( *(float *)&v43 > 6.2831855 );
          *(float *)(v16 + 76) = *(float *)&v43;
        }
        v44 = sinf_0(*(float *)&v42);
        v45 = v44 - sinf_0(v40);
        if ( v35 > 0.0099999998 )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleFwdMag, "bg_grenadeWobbleFwdMag");
          v47 = (float)((float)(*(float *)&Float_Internal_DebugName * v45) + v35) / v35;
          p_trDelta->v[0] = v47 * p_trDelta->v[0];
          v15->lerp.pos.trDelta.v[1] = v47 * v15->lerp.pos.trDelta.v[1];
          v15->lerp.pos.trDelta.v[2] = v47 * v15->lerp.pos.trDelta.v[2];
        }
        Vec3Cross(&v0, &trace->normal, &cross);
        v48 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleSideDamp, "bg_grenadeWobbleSideDamp");
        v49 = cross.v[2];
        v50 = cross.v[1];
        v51 = cross.v[0];
        v53 = LODWORD(FLOAT_1_0);
        *(float *)&v53 = 1.0 - (float)(*(float *)&v48 * v35);
        _XMM2 = v53;
        __asm { vmaxss  xmm7, xmm2, xmm11 }
        if ( *(float *)&_XMM7 > 0.0 )
        {
          v55 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleSideMag, "bg_grenadeWobbleSideMag");
          v56 = (float)(*(float *)&v55 * v45) * *(float *)&_XMM7;
          v57 = BgEntityData::GetOrigin(entityData);
          end.v[0] = (float)(v56 * v51) + v57->v[0];
          end.v[1] = (float)(v56 * v50) + v57->v[1];
          end.v[2] = (float)(v56 * v49) + v57->v[2];
          LastHitCharacter = BgMissile::GetLastHitCharacter(this, entityData);
          v59 = BG_WeaponRadiusDamageDetailTrace(r_weapon, v15->inAltWeaponMode);
          ClipMask = BgEntityData::GetClipMask(entityData);
          OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
          Box = BgEntityData::GetBox(entityData);
          v63 = BgEntityData::GetOrigin(entityData);
          BgMissile::MissileTrace(this, entityData, &results, v63, &end, Box, OwnerEntNum, LastHitCharacter, ClipMask, v59);
          v64 = BgEntityData::GetOrigin(entityData);
          v65 = BgEntityData::GetOrigin(entityData);
          v66 = results.fraction;
          v10 = v129;
          p_normal = v134;
          v15 = EntityState;
          v16 = (__int64)Components;
          v64->v[0] = (float)((float)(end.v[0] - v65->v[0]) * results.fraction) + v65->v[0];
          v64->v[1] = (float)((float)(end.v[1] - v65->v[1]) * v66) + v65->v[1];
          v64->v[2] = (float)((float)(end.v[2] - v65->v[2]) * v66) + v65->v[2];
          p_trDelta = v136;
        }
        if ( *(float *)(v16 + 80) == 0.0 )
        {
          v67 = BG_random(&this->m_holdRand);
          *(float *)(v16 + 80) = (float)(*(float *)&v67 * 2.0) - 1.0;
        }
        v68 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeCurveMax, "bg_grenadeCurveMax");
        v69 = *(float *)&v68 * *(float *)(v16 + 80);
        p_trDelta->v[0] = (float)(v69 * v51) + p_trDelta->v[0];
        p_trDelta->v[1] = (float)(v69 * v50) + p_trDelta->v[1];
        p_trDelta->v[2] = (float)(v69 * v49) + p_trDelta->v[2];
      }
      outRollSlideSpeed[0] = BgEntityData::GetOrigin(entityData)->v[0];
      if ( (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040 || (outRollSlideSpeed[0] = BgEntityData::GetOrigin(entityData)->v[1], (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040) || (outRollSlideSpeed[0] = BgEntityData::GetOrigin(entityData)->v[2], (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3030, ASSERT_TYPE_SANITY, "( !IS_NAN( ( entityData->GetOrigin() )[0] ) && !IS_NAN( ( entityData->GetOrigin() )[1] ) && !IS_NAN( ( entityData->GetOrigin() )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( entityData->GetOrigin() )[0] ) && !IS_NAN( ( entityData->GetOrigin() )[1] ) && !IS_NAN( ( entityData->GetOrigin() )[2] )") )
          __debugbreak();
      }
    }
    v122 = BG_WeaponStickinessType(r_weapon, inAltWeaponMode);
    if ( BgMissile::MissileShouldStopAtImpact(this, r_weapon, inAltWeaponMode, v10, p_trDelta, entityData) )
    {
      v70 = v122;
      v123 = (v122 != WEAPSTICKINESS_NONE) + 2;
      switch ( v70 )
      {
        case WEAPSTICKINESS_GROUND_WITH_YAW:
          if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3406, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
            __debugbreak();
          this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + (int)(float)(v22 * v10->fraction), &angles);
          v71 = PitchForYawOnNormal(angles.v[1], p_normal);
          angles.v[0] = *(float *)&v71;
          angles.v[2] = 0.0;
          AngleVectors(&angles, NULL, &right, &up);
          angles.v[2] = atan2f_0((float)((float)(p_normal->v[0] * right.v[0]) + (float)(p_normal->v[1] * right.v[1])) + (float)(p_normal->v[2] * right.v[2]), (float)((float)(p_normal->v[0] * up.v[0]) + (float)(p_normal->v[1] * up.v[1])) + (float)(p_normal->v[2] * up.v[2])) * 57.295776;
          break;
        case WEAPSTICKINESS_KNIFE:
          v72 = BgEntityData::GetOrigin(entityData);
          v73 = r_weapon;
          v123 = BgMissile::MissileLandAnglesKnife(this, entityData, r_weapon, inAltWeaponMode, v10, &angles, v72, lastSimulationTime, simulationTime);
LABEL_90:
          SetEntityOriginAndAngles = this->SetEntityOriginAndAngles;
          v75 = BgEntityData::GetOrigin(entityData);
          LOBYTE(hitFraction) = 1;
          LOBYTE(fmt) = 1;
          SetEntityOriginAndAngles(this, entityData, v75, &angles, fmt, hitFraction);
          *(float *)(v16 + 16) = p_normal->v[0];
          *(float *)(v16 + 20) = p_normal->v[1];
          *(float *)(v16 + 24) = p_normal->v[2];
          v76 = Trace_GetEntityHitId(v10);
          v77 = v10->hitType == TRACE_HITTYPE_SCRIPTABLE;
          hitId = v10->hitId;
          lastSimulationTimeb = v76;
          LODWORD(outRollSlideSpeed[0]) = hitId;
          if ( v77 && this->ScriptableIsDoor(this, hitId) )
          {
            v79 = 1;
            if ( *(_DWORD *)(v16 + 36) != hitId )
            {
              v121 = 1;
LABEL_98:
              v80 = inAltWeaponMode;
              if ( BG_Missile_SticksToPlayer((const BgEntityComponents *)v16, v73, inAltWeaponMode) && BgMissile::TraceHitCharacter(this, v10) || BG_WeaponSticksToVehicles(v73, inAltWeaponMode) && BgMissile::TraceHitType(this, v10, 14) || BG_WeaponSticksToVehicles(v73, inAltWeaponMode) && BgMissile::TraceHitType(this, v10, 12) || BG_WeaponSticksToTurrets(v73, inAltWeaponMode) && BgMissile::TraceHitType(this, v10, 11) )
              {
                v81 = lastSimulationTimeb;
                if ( lastSimulationTimeb >= 0x7FEu )
                {
                  LODWORD(pos) = 2046;
                  LODWORD(hitFractiona) = lastSimulationTimeb;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3086, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "hitEntId doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", hitFractiona, pos) )
                    __debugbreak();
                }
                this->LinkTo(this, entityData, lastSimulationTimeb, v10->partName, 0, NULL);
                if ( this->IsDebugTextEnabled(this) )
                {
                  DebugText = this->DebugText;
                  v83 = SL_ConvertToString(v10->partName);
                  DebugText(this, "Linked missile to tag %s on entity %i\n", v83, lastSimulationTimeb);
                  v80 = inAltWeaponMode;
                }
              }
              else
              {
                if ( v121 )
                {
                  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 498, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
                    __debugbreak();
                  v84 = BgEntityData::GetComponents(entityData);
                  if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 501, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
                    __debugbreak();
                  v84->mover.pos.pos3.v[0] = outRollSlideSpeed[0];
                  v84->mover.pos.pos3.v[1] = this->GetDoorAngle(this, entityData);
                }
                else
                {
                  this->MovingPlatformAttemptGrenadeLink(this, entityData, v10);
                }
                v81 = lastSimulationTimeb;
              }
              if ( !BG_TimedDetonation(v73, v80) )
                this->SetEntityNextThink(this, entityData, 0);
              this->CheckGrenadeDanger(this, entityData);
              this->StuckNotify(this, entityData, v81, v10->partName, v10->surfaceFlags, &preBounceVelocity, &v10->position, p_normal);
              Sys_ProfEndNamedEvent();
              return v123;
            }
          }
          else
          {
            v79 = 0;
          }
          v121 = 0;
          if ( !v79 && *(_DWORD *)(v16 + 36) != -1 )
            BgMissile::SetDoorScriptable(this, entityData, 0xFFFFFFFF);
          goto LABEL_98;
        case WEAPSTICKINESS_ALL_ORIENT:
        case WEAPSTICKINESS_GROUND_ORIENT:
          BgMissile::MissileLandAnglesFlat(this, entityData, v10, &angles, lastSimulationTime, simulationTime);
          break;
        case WEAPSTICKINESS_ALL:
          angles = *BgEntityData::GetAngles(entityData);
          break;
        default:
          BgMissile::MissileLandAngles(this, entityData, v10, &angles, 1, weapDef->thrownSideways ? 2 : 0, lastSimulationTime, simulationTime);
          break;
      }
      v73 = r_weapon;
      goto LABEL_90;
    }
    if ( v122 == WEAPSTICKINESS_KNIFE )
    {
      v86 = p_trDelta->v[1];
      v87 = LODWORD(p_trDelta->v[0]);
      v88 = p_trDelta->v[2];
      v89 = v87;
      *(float *)&v89 = fsqrt((float)((float)(*(float *)&v87 * *(float *)&v87) + (float)(v86 * v86)) + (float)(v88 * v88));
      _XMM3 = v89;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
      }
      vec.v[0] = *(float *)&v87 * (float)(1.0 / *(float *)&_XMM0);
      v146 = v88 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[1] = v86 * (float)(1.0 / *(float *)&_XMM0);
      *(double *)&_XMM0 = vectoyaw(&vec);
      v15->lerp.apos.trBase.v[1] = *(float *)&_XMM0;
    }
  }
  v94 = LODWORD(FLOAT_0_1);
  *(float *)&v94 = 0.1 * p_normal->v[2];
  _XMM3 = v94;
  v95 = 0.1 * p_normal->v[0];
  *(float *)&v94 = 0.1 * p_normal->v[1];
  __asm
  {
    vcmpltss xmm0, xmm11, xmm3
    vblendvps xmm6, xmm3, xmm11, xmm0
  }
  v98 = BgEntityData::GetOrigin(entityData);
  v141.v[0] = v95 + v98->v[0];
  v141.v[1] = *(float *)&v94 + v98->v[1];
  v141.v[2] = *(float *)&_XMM6 + v98->v[2];
  v99 = BgMissile::GetLastHitCharacter(this, entityData);
  v100 = BG_WeaponRadiusDamageDetailTrace(r_weapon, v15->inAltWeaponMode);
  v101 = BgEntityData::GetClipMask(entityData);
  v102 = BgEntityData::GetOwnerEntNum(entityData);
  v103 = BgEntityData::GetBox(entityData);
  v104 = BgEntityData::GetOrigin(entityData);
  BgMissile::MissileTrace(this, entityData, &v149, v104, &v141, v103, v102, v99, v101, v100);
  v105 = BgEntityData::GetOrigin(entityData);
  v106 = BgEntityData::GetOrigin(entityData);
  *(float *)&_XMM6 = v149.fraction;
  v105->v[0] = (float)((float)(v141.v[0] - v106->v[0]) * v149.fraction) + v106->v[0];
  v105->v[1] = (float)((float)(v141.v[1] - v106->v[1]) * *(float *)&_XMM6) + v106->v[1];
  v105->v[2] = (float)((float)(v141.v[2] - v106->v[2]) * *(float *)&_XMM6) + v106->v[2];
  v107 = BgEntityData::GetOrigin(entityData);
  v108 = EntityState;
  Trajectory_SetTrBase(&EntityState->lerp.pos, v107);
  v108->lerp.pos.trTime = simulationTime;
  if ( v120 )
  {
    v109 = BgEntityData::GetAngles(entityData);
    v110 = v129;
    BgMissile::MissileRollAngles(this, entityData, v129, &v108->lerp.apos, lastSimulationTime, simulationTime, timeDeltaMsec, v109);
  }
  else
  {
    v110 = v129;
    if ( (float)((float)((float)(v108->lerp.pos.trDelta.v[1] * v134->v[1]) + (float)(v134->v[0] * v108->lerp.pos.trDelta.v[0])) + (float)(v108->lerp.pos.trDelta.v[2] * v134->v[2])) > 25.0 )
    {
      BgMissile::MissileLandAngles(this, entityData, v129, &angles, 0, 0, lastSimulationTime, simulationTime);
      v108->lerp.apos.trBase = angles;
      v108->lerp.apos.trTime = simulationTime;
    }
  }
  if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && BG_ActorOrAgentSystemEnabled() )
  {
    v111 = Trace_GetEntityHitId(v110);
    this->AIGrenadeBounced(this, entityData, v111);
  }
  if ( v130 )
  {
    Sys_ProfEndNamedEvent();
    return 0i64;
  }
  else
  {
    preBounceVelocity.v[0] = v108->lerp.pos.trDelta.v[0] - preBounceVelocity.v[0];
    v112 = preBounceVelocity.v[0];
    preBounceVelocity.v[1] = v108->lerp.pos.trDelta.v[1] - preBounceVelocity.v[1];
    v113 = preBounceVelocity.v[1];
    preBounceVelocity.v[2] = v108->lerp.pos.trDelta.v[2] - preBounceVelocity.v[2];
    v114 = preBounceVelocity.v[2];
    Sys_ProfEndNamedEvent();
    if ( (float)((float)((float)(v113 * v113) + (float)(v112 * v112)) + (float)(v114 * v114)) <= 10000.0 )
      return v120 ? 4 : 0;
    else
      return 1i64;
  }
}

/*
==============
BgMissile::CalcTargetPosition
==============
*/
void BgMissile::CalcTargetPosition(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  BgEntityMissileComponentData *ComponentData; 
  int MissileTargetEnt; 
  int flags; 
  float *v; 
  float v12; 
  int v13[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1102, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1106, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1108, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1112, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  ComponentData = (BgEntityMissileComponentData *)BgEntityData::GetComponentData(entityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1115, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  MissileTargetEnt = BgEntityMissileComponentData::GetMissileTargetEnt(ComponentData);
  if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1119, ASSERT_TYPE_ASSERT, "(components->missile.flags & MISSILEFLAG_LOCKED)", (const char *)&queryFormat, "components->missile.flags & MISSILEFLAG_LOCKED") )
    __debugbreak();
  flags = Components->missile.flags;
  if ( (flags & 4) != 0 )
  {
    if ( MissileTargetEnt == 2047 )
    {
      Components->missile.flags = flags & 0xFFFFDFFB;
    }
    else if ( this->GetEntityTransform(this, MissileTargetEnt, (vec3_t *)v13, &angles) )
    {
      AnglesToAxis(&angles, &axis);
      if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1140, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
        __debugbreak();
      v = Components->mover.angle.pos3.v;
      if ( &Components->beam + 18 == &Components->beam + 21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v12 = (float)((float)(axis.m[0].v[0] * Components->mover.angle.pos2.v[0]) + (float)(axis.m[1].v[0] * Components->mover.angle.pos2.v[1])) + (float)(axis.m[2].v[0] * Components->mover.angle.pos2.v[2]);
      *v = v12;
      Components->mover.angle.pos3.v[1] = (float)((float)(axis.m[0].v[1] * Components->mover.angle.pos2.v[0]) + (float)(axis.m[1].v[1] * Components->mover.angle.pos2.v[1])) + (float)(axis.m[2].v[1] * Components->mover.angle.pos2.v[2]);
      Components->mover.angle.pos3.v[2] = (float)((float)(axis.m[0].v[2] * Components->mover.angle.pos2.v[0]) + (float)(axis.m[1].v[2] * Components->mover.angle.pos2.v[1])) + (float)(axis.m[2].v[2] * Components->mover.angle.pos2.v[2]);
      *v = v12 + *(float *)v13;
      Components->mover.angle.pos3.v[1] = *(float *)&v13[1] + Components->mover.angle.pos3.v[1];
      Components->mover.angle.pos3.v[2] = *(float *)&v13[2] + Components->mover.angle.pos3.v[2];
    }
    else
    {
      Components->missile.flags &= 0xFFFFDFFB;
    }
  }
}

/*
==============
BgMissile::CalculateMissileVelocity
==============
*/
void BgMissile::CalculateMissileVelocity(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const vec3_t *originAtSimStart, const int hitTime, const float hitFraction, const int timeDeltaMsec, vec3_t *outVelocity)
{
  const entityState_t *EntityState; 
  const vec3_t *Origin; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  __int128 v26; 
  int projectileSpeed; 
  int projectileSpeedUp[3]; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2866, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2869, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->lerp.pos.trType == TR_INTERPOLATE )
  {
    Origin = BgEntityData::GetOrigin((BgEntityData *)entityData);
    v14 = Origin->v[0] - originAtSimStart->v[0];
    v15 = Origin->v[2] - originAtSimStart->v[2];
    v16 = Origin->v[1] - originAtSimStart->v[1];
    v17 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)timeDeltaMsec).m128_f32[0] * 0.001) * hitFraction;
    if ( v17 > 0.000001 )
    {
      v15 = v15 * (float)(1.0 / v17);
      v16 = (float)(Origin->v[1] - originAtSimStart->v[1]) * (float)(1.0 / v17);
      v14 = v14 * (float)(1.0 / v17);
    }
    outVelocity->v[0] = v14;
    outVelocity->v[1] = v16;
    outVelocity->v[2] = v15;
    WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
    if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2888, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
      __debugbreak();
    inAltWeaponMode = EntityState->inAltWeaponMode;
    v20 = outVelocity->v[1];
    v21 = outVelocity->v[0];
    v22 = outVelocity->v[2];
    projectileSpeed = 0;
    projectileSpeedUp[0] = 0;
    BG_GetProjectileSpeed(WeaponForEntity, inAltWeaponMode, &projectileSpeed, projectileSpeedUp);
    if ( (float)((float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v22 * v22)) > (float)(projectileSpeed * projectileSpeed) )
    {
      v23 = outVelocity->v[1];
      v24 = LODWORD(outVelocity->v[0]);
      v25 = outVelocity->v[2];
      v26 = v24;
      *(float *)&v26 = fsqrt((float)((float)(*(float *)&v24 * *(float *)&v24) + (float)(v23 * v23)) + (float)(v25 * v25));
      _XMM3 = v26;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      *(float *)&_XMM3 = _mm_cvtepi32_ps((__m128i)(unsigned int)projectileSpeed).m128_f32[0];
      outVelocity->v[0] = (float)(*(float *)&v24 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
      outVelocity->v[2] = (float)(v25 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
      outVelocity->v[1] = (float)(v23 * (float)(1.0 / *(float *)&_XMM0)) * *(float *)&_XMM3;
    }
  }
  else
  {
    this->EvaluatePosTrajectoryDelta(this, entityData, hitTime, outVelocity);
  }
}

/*
==============
BgMissile::CalculateRocketLaunchTransform
==============
*/

void __fastcall BgMissile::CalculateRocketLaunchTransform(BgMissile *this, const BgWeaponParms *wp, const int seed, double spread, vec3_t *outLaunchPos, vec3_t *outLaunchDir)
{
  __int128 v8; 
  float v9; 
  float v10; 
  double v11; 
  float v12; 
  vec3_t *v13; 
  __int128 v14; 
  vec3_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float s; 
  unsigned int pHoldrand; 
  float c; 

  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3757, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  *((double *)&v8 + 1) = *(&spread + 1);
  v9 = tanf_0(*(float *)&spread * 0.017453292);
  pHoldrand = seed;
  v10 = v9 * 16.0;
  BG_srand(&pHoldrand);
  v11 = BG_random(&pHoldrand);
  v12 = *(float *)&v11 * 360.0;
  *(double *)&v8 = BG_random(&pHoldrand);
  FastSinCos(v12 * 0.017453292, &s, &c);
  v13 = outLaunchDir;
  v14 = v8;
  v15 = outLaunchPos;
  v16 = (float)(*(float *)&v8 * s) * v10;
  v17 = (float)(*(float *)&v8 * c) * v10;
  v18 = 16.0 * wp->forward.v[0];
  outLaunchDir->v[0] = v18;
  v19 = 16.0 * wp->forward.v[1];
  v13->v[1] = v19;
  v20 = 16.0 * wp->forward.v[2];
  v13->v[2] = v20;
  v21 = (float)(v17 * wp->right.v[0]) + v18;
  v13->v[0] = v21;
  v22 = (float)(v17 * wp->right.v[1]) + v19;
  v13->v[1] = v22;
  v23 = (float)(v17 * wp->right.v[2]) + v20;
  v13->v[2] = v23;
  v24 = (float)(v16 * wp->up.v[0]) + v21;
  v13->v[0] = v24;
  v25 = (float)(v16 * wp->up.v[1]) + v22;
  v13->v[1] = v25;
  v26 = (float)(v16 * wp->up.v[2]) + v23;
  *(float *)&v14 = fsqrt((float)((float)(v25 * v25) + (float)(v24 * v24)) + (float)(v26 * v26));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v13->v[0] = v24 * (float)(1.0 / *(float *)&_XMM0);
  v13->v[1] = v25 * (float)(1.0 / *(float *)&_XMM0);
  v13->v[2] = v26 * (float)(1.0 / *(float *)&_XMM0);
  *v15 = wp->muzzleTrace;
}

/*
==============
BgMissile::CharactersOnSameTeam
==============
*/
bool BgMissile::CharactersOnSameTeam(BgMissile *this, const int firstCharEntNum, const int secondCharEntNum)
{
  entityState_t *v6; 
  entityState_t *v7; 
  entityState_t *v8; 
  BgStatic *ActiveStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v11; 
  team_t team; 
  __int64 v14; 
  __int64 v15; 

  if ( (unsigned int)firstCharEntNum >= 0x7FE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4460, ASSERT_TYPE_ASSERT, "(unsigned)( firstCharEntNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "firstCharEntNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", firstCharEntNum, 2046) )
    __debugbreak();
  if ( (unsigned int)secondCharEntNum >= 0x7FE )
  {
    LODWORD(v15) = 2046;
    LODWORD(v14) = secondCharEntNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4461, ASSERT_TYPE_ASSERT, "(unsigned)( secondCharEntNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "secondCharEntNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v6 = this->GetEntityState(this, (unsigned int)firstCharEntNum);
  v7 = this->GetEntityState(this, (unsigned int)secondCharEntNum);
  v8 = v7;
  if ( !v6 || !v7 )
    return 0;
  if ( ((v6->eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4471, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentEntity( firstEs ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentEntity( firstEs )") )
    __debugbreak();
  if ( ((v8->eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4472, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentEntity( secondEs ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentEntity( secondEs )") )
    __debugbreak();
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) )
    return 0;
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4480, ASSERT_TYPE_ASSERT, "(bgStatic)", (const char *)&queryFormat, "bgStatic") )
    __debugbreak();
  CharacterInfo = BG_GetCharacterInfo(ActiveStatics, firstCharEntNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4484, ASSERT_TYPE_ASSERT, "(firstCharInfo)", (const char *)&queryFormat, "firstCharInfo") )
    __debugbreak();
  v11 = BG_GetCharacterInfo(ActiveStatics, secondCharEntNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4487, ASSERT_TYPE_ASSERT, "(secondCharInfo)", (const char *)&queryFormat, "secondCharInfo") )
    __debugbreak();
  team = CharacterInfo->team;
  return team && team == v11->team;
}

/*
==============
BgMissile::CheckCrumpleMissile
==============
*/
__int64 BgMissile::CheckCrumpleMissile(BgMissile *this, const BgWeaponMap *weaponMap, const WeaponDef *weapDef, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace)
{
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  const dvar_t *v16; 
  unsigned int v17; 
  float v18; 
  float v19; 
  float v20; 
  BgMissile_vtbl *v21; 
  float v22; 
  float v23; 
  float v24; 
  BgMissile_vtbl *v25; 
  unsigned __int128 v26; 
  unsigned __int128 v27; 
  bool enableMissileRicochet; 
  float v32; 
  float missileCrumpleMinSpeed; 
  float v34; 
  float v35; 
  float v37; 
  float v38; 
  float v39; 
  vec3_t outVelocity; 
  int v41[4]; 
  int v42[4]; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2767, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2768, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2771, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2773, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2776, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = EntityState->inAltWeaponMode;
  if ( BG_DisableProjectileCrumpleCheck(WeaponForEntity, inAltWeaponMode) || BG_GetWeaponType(WeaponForEntity, inAltWeaponMode) != WEAPTYPE_PROJECTILE )
    return 0i64;
  if ( trace->surfaceFlags == 3670016 )
    return 1i64;
  BgMissile::CalculateMissileVelocity(this, weaponMap, entityData, originAtSimStart, lastSimulationTime + (int)(float)((float)(simulationTime - lastSimulationTime) * trace->fraction), trace->fraction, timeDeltaMsec, &outVelocity);
  v16 = DCONST_DVARBOOL_bg_missileCrumpleDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileCrumpleDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileCrumpleDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 0;
  if ( v16->current.enabled )
  {
    v18 = DEBUG_LINE_LENGTH * trace->normal.v[0];
    v19 = trace->position.v[1];
    v20 = trace->position.v[2];
    v21 = this->__vftable;
    v37 = trace->position.v[0];
    v22 = v18 + v37;
    v23 = DEBUG_LINE_LENGTH * trace->normal.v[1];
    *(float *)v41 = v22;
    v24 = DEBUG_LINE_LENGTH * trace->normal.v[2];
    *(float *)&v41[1] = v23 + v19;
    *(float *)&v41[2] = v24 + v20;
    v38 = v19;
    v39 = v20;
    v21->DebugLineWithDuration(this, entityData, (const vec3_t *)&v37, (const vec3_t *)v41, &colorCyan, 0, DEBUG_LINE_DURATION);
    v25 = this->__vftable;
    v26 = LODWORD(outVelocity.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
    v27 = v26;
    *(float *)&v27 = fsqrt((float)((float)(*(float *)&v26 * *(float *)&v26) + (float)(COERCE_FLOAT(LODWORD(outVelocity.v[0]) ^ _xmm) * COERCE_FLOAT(LODWORD(outVelocity.v[0]) ^ _xmm))) + (float)(COERCE_FLOAT(LODWORD(outVelocity.v[2]) ^ _xmm) * COERCE_FLOAT(LODWORD(outVelocity.v[2]) ^ _xmm)));
    _XMM4 = v27;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm1, xmm0
    }
    *(float *)v42 = (float)((float)(COERCE_FLOAT(LODWORD(outVelocity.v[0]) ^ _xmm) * (float)(1.0 / *(float *)&_XMM0)) * DEBUG_LINE_LENGTH) + v37;
    *(float *)&v42[1] = (float)((float)(*(float *)&v26 * (float)(1.0 / *(float *)&_XMM0)) * DEBUG_LINE_LENGTH) + v38;
    *(float *)&v42[2] = (float)((float)(COERCE_FLOAT(LODWORD(outVelocity.v[2]) ^ _xmm) * (float)(1.0 / *(float *)&_XMM0)) * DEBUG_LINE_LENGTH) + v39;
    v25->DebugLineWithDuration(this, entityData, (const vec3_t *)&v37, (const vec3_t *)v42, &colorYellow, 0, DEBUG_LINE_DURATION);
  }
  enableMissileRicochet = weapDef->enableMissileRicochet;
  v32 = fsqrt((float)((float)(outVelocity.v[1] * outVelocity.v[1]) + (float)(outVelocity.v[0] * outVelocity.v[0])) + (float)(outVelocity.v[2] * outVelocity.v[2]));
  if ( enableMissileRicochet )
  {
    if ( v32 > 0.000001 )
    {
      missileCrumpleMinSpeed = weapDef->missileCrumpleMinSpeed;
      goto LABEL_28;
    }
    return 1i64;
  }
  missileCrumpleMinSpeed = FLOAT_500_0;
LABEL_28:
  if ( v32 < missileCrumpleMinSpeed )
    return 0i64;
  v34 = (float)((float)(outVelocity.v[1] * (float)(-1.0 / v32)) * trace->normal.v[1]) + (float)((float)(outVelocity.v[0] * (float)(-1.0 / v32)) * trace->normal.v[0]);
  v35 = (float)(outVelocity.v[2] * (float)(-1.0 / v32)) * trace->normal.v[2];
  if ( enableMissileRicochet )
    LOBYTE(v17) = (float)(v34 + v35) > cosf_0(weapDef->missileRicochetMinAngleOfIncidence * 0.017453292);
  else
    LOBYTE(v17) = (float)(v34 + v35) > 0.70700002;
  return v17;
}

/*
==============
BgMissile::FireGrenade
==============
*/
void BgMissile::FireGrenade(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, const bool isAlternate, const PlayerHandIndex hand, bool rotate, const int serverTime, const int fuseTime, const bool applyNoDrawTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  BgMissile::FireGrenadeRethrow(this, weaponMap, parentEntNum, start, dir, r_grenadeWeapon, isAlternate, hand, rotate, serverTime, fuseTime, applyNoDrawTime, NULL, outEntityData, outComponentData);
}

/*
==============
BgMissile::FireGrenadeRethrow
==============
*/
void BgMissile::FireGrenadeRethrow(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const vec3_t *start, const vec3_t *dir, const Weapon *r_grenadeWeapon, _BOOL8 isAlternate, __int64 hand, bool rotate, __int64 serverTime, const int fuseTime, const bool applyNoDrawTime, BgEntityData *rethrowEntityData, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  bool v15; 
  unsigned int v18; 
  BgEntityData *v19; 
  entityState_t *EntityState; 
  int v21; 
  int ServerTimeFromPredictionKey; 
  const dvar_t *v23; 
  int integer; 
  bool v25; 
  entityState_t *v26; 
  entityState_t *v27; 
  int v28; 
  int v29; 
  bool v30; 
  int v31; 
  const playerState_s *v32; 
  double CookingGrenadeCookPercentage; 
  float v34; 
  const Weapon *v35; 
  int v36; 
  BOOL fmt; 
  BOOL fmta; 
  const WeaponDef *v39; 
  XModel *v40; 
  char isAlternatea; 

  v15 = isAlternate;
  v18 = parentEntNum;
  v39 = BG_WeaponDef(r_grenadeWeapon, isAlternate);
  if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4060, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( this->m_setProjectileModel )
    v40 = BG_ProjectileModel(r_grenadeWeapon, isAlternate);
  else
    v40 = NULL;
  isAlternatea = 0;
  if ( rethrowEntityData )
  {
    if ( BgEntityData::GetEntityState(rethrowEntityData)->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4079, ASSERT_TYPE_ASSERT, "(rethrowEntityData->GetEntityState()->eType == ET_MISSILE)", "%s\n\tBgMissile::FireGrenadeRethrow(): provided rethrow entity type is not ET_MISSILE.", "rethrowEntityData->GetEntityState()->eType == ET_MISSILE") )
      __debugbreak();
    v19 = outEntityData;
    this->CopyEntityData(this, outEntityData, rethrowEntityData);
  }
  else
  {
    v19 = outEntityData;
    LOBYTE(fmt) = 0;
    this->SpawnMissileEntity(this, v18, r_grenadeWeapon, v15, fmt, serverTime, outEntityData, outComponentData);
    isAlternatea = 1;
  }
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4083, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(v19);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4086, ASSERT_TYPE_ASSERT, "(grenadeEs)", (const char *)&queryFormat, "grenadeEs") )
    __debugbreak();
  this->SetEntityWeapon(this, weaponMap, v19, r_grenadeWeapon);
  EntityState->inAltWeaponMode = v15;
  BgMissile::InitGrenadeEntity(this, weaponMap, v19, v18, serverTime);
  v21 = serverTime;
  if ( isAlternatea )
  {
    if ( BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&EntityState->lerp.u) )
    {
      v18 = parentEntNum;
    }
    else
    {
      ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&EntityState->lerp.u);
      v23 = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
      v21 = ServerTimeFromPredictionKey;
      if ( !DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missilePredictionMaxFastForwardTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      integer = v23->current.integer;
      v18 = parentEntNum;
      if ( (int)serverTime - v21 > integer )
        v21 = serverTime - integer;
    }
  }
  v25 = rotate && v39->rotationParams.rotate;
  BgMissile::InitGrenadeMovement(this, v19, start, dir, r_grenadeWeapon, v25, v21);
  v26 = this->GetEntityState(this, v18);
  v27 = v26;
  if ( applyNoDrawTime && v26 && ((v26->eType - 1) & 0xFFEF) == 0 )
  {
    v28 = (int)(float)(85.0 - (float)(fsqrt((float)((float)(dir->v[0] * dir->v[0]) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2])) * 0.058333334));
    if ( v28 > 50 )
      v28 = 50;
    if ( v28 < 20 )
      v28 = 20;
    EntityState->lerp.u.anonymous.data[2] += v28;
  }
  v29 = BG_ProjectileActivateDist(r_grenadeWeapon, v15);
  v30 = v29 != 0;
  if ( !v27 || v29 )
  {
    v31 = parentEntNum;
    goto LABEL_44;
  }
  v31 = parentEntNum;
  v32 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  if ( !v32 )
  {
LABEL_44:
    v34 = 0.0;
    goto LABEL_45;
  }
  CookingGrenadeCookPercentage = BG_GetCookingGrenadeCookPercentage(r_grenadeWeapon, v15, v32);
  v34 = *(float *)&CookingGrenadeCookPercentage;
LABEL_45:
  LOBYTE(fmta) = v15;
  this->InitGrenadeTimer(this, v19, v31, r_grenadeWeapon, fmta, serverTime, fuseTime);
  v35 = r_grenadeWeapon;
  LOBYTE(serverTime) = v30;
  v36 = hand;
  *(float *)&hand = v34;
  LODWORD(isAlternate) = v31;
  LODWORD(r_grenadeWeapon) = v36;
  LOBYTE(dir) = v15;
  ((void (__fastcall *)(BgMissile *, BgWeaponMap *, BgEntityData *, const Weapon *, const vec3_t *, const Weapon *, _BOOL8, __int64, XModel *, __int64, BgEntityData *))this->FinalizeGrenadeThrow)(this, weaponMap, v19, v35, dir, r_grenadeWeapon, isAlternate, hand, v40, serverTime, rethrowEntityData);
}

/*
==============
BgMissile::FireRocket
==============
*/
void BgMissile::FireRocket(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, PlayerHandIndex hand, const vec3_t *start, const vec3_t *dir, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  const WeaponDef *v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  BgEntityComponentData *ComponentData; 
  const dvar_t *v28; 
  int v29; 
  int v30; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *v31; 
  int v32; 
  int v33; 
  const playerState_s *v34; 
  float m_javelinOffsetRight; 
  __int128 v36; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  vec3_t *Origin; 
  vec3_t *Angles; 
  bool (__fastcall *SetEntityAngles)(BgMissile *, BgEntityData *, const vec3_t *, const bool, const bool); 
  vec3_t *v47; 
  _BOOL8 v48; 
  unsigned int v49; 
  const vec3_t *v50; 
  double v51; 
  float v52; 
  double v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  guidedMissileType_t guidedMissileType; 
  const BgMissileFireParms *v62; 
  double v63; 
  float v64; 
  int v65; 
  bool v66; 
  bool v67; 
  double v68; 
  double v69; 
  double v70; 
  Weapon *v71; 
  float v72; 
  double v73; 
  int v74; 
  BOOL fmt; 
  BOOL fmta; 
  BOOL v77; 
  char v78; 
  unsigned int pHoldrand; 
  int val; 
  float c; 
  int ServerTimeFromPredictionKey; 
  vec3_t trBase; 
  int v84; 
  PlayerHandIndex v85; 
  float s[2]; 
  const BgMissileFireParms *v87; 
  BgWeaponMap *weaponMapa; 
  Weapon *r_weapona; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  XModel *v91; 
  char v92[8]; 
  __int64 v93; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t v96; 
  vec3_t up; 

  v93 = -2i64;
  r_weapona = (Weapon *)r_weapon;
  val = parentEntNum;
  weaponMapa = weaponMap;
  v85 = hand;
  v87 = fireParms;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgMissile::FireRocket");
  if ( parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4141, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  v17 = BG_WeaponDef(r_weapon, isAlternate);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4144, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  this->GetScaledProjectileSpeed(this, parentEntNum, r_weapon, isAlternate, &v84, (int *)v92);
  if ( this->m_setProjectileModel )
    v91 = BG_ProjectileModel(r_weapon, isAlternate);
  else
    v91 = NULL;
  trBase = *start;
  v18 = dir->v[1];
  v19 = LODWORD(dir->v[0]);
  v20 = dir->v[2];
  v21 = v19;
  *(float *)&v21 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18)) + (float)(v20 * v20));
  _XMM3 = v21;
  __asm
  {
    vcmpless xmm0, xmm3, xmm9
    vblendvps xmm1, xmm3, xmm8, xmm0
  }
  right.v[0] = *(float *)&_XMM1;
  vec.v[0] = *(float *)&v19 * (float)(1.0 / *(float *)&_XMM1);
  vec.v[1] = v18 * (float)(1.0 / *(float *)&_XMM1);
  vec.v[2] = v20 * (float)(1.0 / *(float *)&_XMM1);
  LOBYTE(fmt) = 1;
  this->SpawnMissileEntity(this, parentEntNum, r_weapon, isAlternate, fmt, serverTime, outEntityData, outComponentData);
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4168, ASSERT_TYPE_ASSERT, "(bolt)", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(outEntityData);
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4171, ASSERT_TYPE_ASSERT, "(bolt)", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  Components = BgEntityData::GetComponents(outEntityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4174, ASSERT_TYPE_ASSERT, "(boltComps)", (const char *)&queryFormat, "boltComps") )
    __debugbreak();
  ComponentData = BgEntityData::GetComponentData(outEntityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4177, ASSERT_TYPE_ASSERT, "(boltCompData)", (const char *)&queryFormat, "boltCompData") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(outEntityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4180, ASSERT_TYPE_ASSERT, "(boltFlags)", (const char *)&queryFormat, "boltFlags") )
    __debugbreak();
  *(_QWORD *)s = this->GetEntityState(this, (unsigned int)val);
  if ( !*(_QWORD *)s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4183, ASSERT_TYPE_ASSERT, "(parentEs)", (const char *)&queryFormat, "parentEs") )
    __debugbreak();
  ServerTimeFromPredictionKey = serverTime;
  v78 = 0;
  if ( !BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&EntityState->lerp.u) )
  {
    ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&EntityState->lerp.u);
    v28 = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
    *(_QWORD *)right.v = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
    if ( !DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missilePredictionMaxFastForwardTimeMs") )
        __debugbreak();
      v28 = *(const dvar_t **)right.v;
    }
    Dvar_CheckFrontendServerThread(v28);
    v29 = *(_DWORD *)(*(_QWORD *)right.v + 40i64);
    if ( serverTime - ServerTimeFromPredictionKey > v29 )
      ServerTimeFromPredictionKey = serverTime - v29;
    v78 = 1;
  }
  EntityState->eType = ET_MISSILE;
  this->SetEntityWeapon(this, weaponMapa, outEntityData, r_weapona);
  EntityState->inAltWeaponMode = isAlternate;
  EntityState->lerp.u.anonymous.data[2] = serverTime;
  EntityState->lerp.u.anonymous.data[5] = 2047;
  if ( *(_WORD *)(*(_QWORD *)s + 8i64) == 1 && !magicBullet && !v78 )
  {
    v30 = (int)(float)(85.0 - (float)((float)v84 * 0.058333334));
    if ( v30 > 50 )
      v30 = 50;
    if ( v30 < 20 )
      v30 = 20;
    EntityState->lerp.u.anonymous.data[2] = serverTime + v30;
  }
  outEntityData->SetOwnerEntNum(outEntityData, val);
  outEntityData->SetParentEntNum(outEntityData, val);
  BgEntityData::SetClipMask(outEntityData, 41968017);
  BgEntityData::SetHandler(outEntityData, 0xCu);
  if ( ((*(_WORD *)(*(_QWORD *)s + 8i64) - 1) & 0xFFEF) == 0 )
    EntityState->otherEntityNum = truncate_cast<short,int>(val);
  EntityState->staticState.general.xmodel = val;
  if ( v17->projEnableMissileStickiness || v17->enableMissileRicochet )
  {
    v31 = Flags;
    v32 = Flags->m_flags[0] | 0x40000;
    Flags->m_flags[0] = v32;
    if ( v17->projEnableMissileStickiness )
      v31->m_flags[0] = v32 | 0x200;
  }
  Components->spawner.count = 0;
  if ( this->m_canPlayerBoostRockets )
    Components->missile.flags |= 0x200u;
  if ( BgMissile::IsGrenade(this, weaponMapa, outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4241, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, bolt ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, bolt )") )
    __debugbreak();
  if ( fireParms && fireParms->lockon )
  {
    v33 = Components->missile.flags | 2;
    Components->missile.flags = v33;
    if ( fireParms->targetEntNum == 2047 )
    {
      Components->missile.flags = v33 & 0xFFFFFFFB;
      ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
      *((_QWORD *)&Components->beam + 9) = 0i64;
      Components->item[1].ammoCount = 0;
      Components->mover.angle.pos3 = fireParms->targetPosOrOffset;
    }
    else
    {
      if ( !((__int64 (__fastcall *)(BgMissile *))this->GetEntityState)(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4248, ASSERT_TYPE_ASSERT, "(GetEntityState( fireParms->targetEntNum ))", (const char *)&queryFormat, "GetEntityState( fireParms->targetEntNum )") )
        __debugbreak();
      Components->missile.flags |= 4u;
      ((void (__fastcall *)(BgEntityComponentData *, _QWORD))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, (unsigned int)fireParms->targetEntNum);
      Components->mover.angle.pos2 = fireParms->targetPosOrOffset;
      if ( this->GetEntityTransform(this, fireParms->targetEntNum, &v96, &up) )
        Components->mover.angle.pos3 = v96;
    }
  }
  else if ( v17->guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
  {
    Components->missile.flags = Components->missile.flags & 0xFFFFFFF1 | 0xA;
    ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
    *((_QWORD *)&Components->beam + 9) = 0i64;
    Components->item[1].ammoCount = 0;
    Components->mover.angle.pos3.v[0] = (float)(10000.0 * vec.v[0]) + trBase.v[0];
    Components->mover.angle.pos3.v[1] = (float)(10000.0 * vec.v[1]) + trBase.v[1];
    Components->mover.angle.pos3.v[2] = (float)(10000.0 * vec.v[2]) + trBase.v[2];
  }
  else
  {
    Components->missile.flags &= 0xFFFFFFF9;
    ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
  }
  v34 = this->GetPlayerState(this, (unsigned int)val);
  *(_QWORD *)v96.v = v34;
  if ( v34 && v34->weapState[v85].weaponFiredAtMaxCharge )
    Components->missile.flags |= 0x1000u;
  if ( v17->guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
  {
    m_javelinOffsetRight = this->m_javelinOffsetRight;
    v36 = LODWORD(vec.v[1]);
    *(float *)&v36 = fsqrt((float)((float)(*(float *)&v36 * *(float *)&v36) + (float)(vec.v[0] * vec.v[0])) + (float)((float)(vec.v[2] + 0.30000001) * (float)(vec.v[2] + 0.30000001)));
    _XMM3 = v36;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm8, xmm0
    }
    right.v[0] = *(float *)&_XMM1;
    vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[2] = (float)(1.0 / *(float *)&_XMM1) * (float)(vec.v[2] + 0.30000001);
    AngleVectors((const vec3_t *)(*(_QWORD *)s + 64i64), NULL, &right, NULL);
    trBase.v[0] = (float)(m_javelinOffsetRight * right.v[0]) + trBase.v[0];
    trBase.v[1] = (float)(m_javelinOffsetRight * right.v[1]) + trBase.v[1];
    trBase.v[2] = (float)(m_javelinOffsetRight * right.v[2]) + trBase.v[2];
  }
  EntityState->lerp.pos.trType = TR_LINEAR;
  if ( v17->timeToAccelerate <= 0.0 )
  {
    v40 = (float)v84;
    EntityState->lerp.pos.trDelta.v[0] = (float)v84 * vec.v[0];
    EntityState->lerp.pos.trDelta.v[1] = v40 * vec.v[1];
    EntityState->lerp.pos.trDelta.v[2] = v40 * vec.v[2];
  }
  else
  {
    EntityState->lerp.pos.trType = TR_INTERPOLATE;
    *(_QWORD *)EntityState->lerp.pos.trDelta.v = 0i64;
    EntityState->lerp.pos.trDelta.v[2] = 0.0;
  }
  EntityState->lerp.pos.trTime = ServerTimeFromPredictionKey;
  Trajectory_SetTrBase(&EntityState->lerp.pos, &trBase);
  v41 = EntityState->lerp.pos.trDelta.v[0] + gunVel->v[0];
  EntityState->lerp.pos.trDelta.v[0] = v41;
  v42 = EntityState->lerp.pos.trDelta.v[1] + gunVel->v[1];
  EntityState->lerp.pos.trDelta.v[1] = v42;
  v43 = EntityState->lerp.pos.trDelta.v[2] + gunVel->v[2];
  EntityState->lerp.pos.trDelta.v[2] = v43;
  c = v41;
  if ( (LODWORD(v41) & 0x7F800000) == 2139095040 || (c = v42, (LODWORD(v42) & 0x7F800000) == 2139095040) || (c = v43, (LODWORD(v43) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4318, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boltEs->lerp.pos.trDelta )[0] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[1] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boltEs->lerp.pos.trDelta )[0] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[1] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    EntityState->lerp.pos.trDelta.v[0] = (float)(int)EntityState->lerp.pos.trDelta.v[0];
    EntityState->lerp.pos.trDelta.v[1] = (float)(int)EntityState->lerp.pos.trDelta.v[1];
    EntityState->lerp.pos.trDelta.v[2] = (float)(int)EntityState->lerp.pos.trDelta.v[2];
  }
  Origin = BgEntityData::GetOrigin(outEntityData);
  *Origin = trBase;
  Angles = BgEntityData::GetAngles(outEntityData);
  vectoangles(&vec, Angles);
  SetEntityAngles = this->SetEntityAngles;
  v47 = BgEntityData::GetAngles(outEntityData);
  LOBYTE(fmta) = 1;
  LOBYTE(v48) = 1;
  SetEntityAngles(this, outEntityData, v47, v48, fmta);
  if ( *(_QWORD *)v96.v )
    v49 = *(_DWORD *)(*(_QWORD *)v96.v + 4i64);
  else
    v49 = serverTime;
  pHoldrand = v49;
  BG_srand(&pHoldrand);
  if ( v17->projectileCurvature > 0.0 )
  {
    EntityState->lerp.pos.trType = TR_INTERPOLATE;
    v50 = BgEntityData::GetAngles(outEntityData);
    AngleVectors(v50, NULL, &v96, &up);
    v51 = BG_random(&pHoldrand);
    v52 = *(float *)&v51 * 360.0;
    v53 = BG_random(&pHoldrand);
    v54 = *(float *)&v53 * v17->projectileCurvature;
    FastSinCos(v52 * 0.017453292, s, &c);
    v55 = v54 * c;
    v56 = (float)(v54 * c) * v96.v[0];
    Components->mover.angle.pos1.v[1] = (float)(v54 * c) * v96.v[1];
    Components->mover.angle.pos1.v[2] = v55 * v96.v[2];
    v57 = v54 * s[0];
    v58 = (float)((float)(v54 * s[0]) * up.v[0]) + v56;
    Components->mover.angle.pos1.v[0] = v58;
    v59 = (float)(v57 * up.v[1]) + Components->mover.angle.pos1.v[1];
    Components->mover.angle.pos1.v[1] = v59;
    v60 = (float)(v57 * up.v[2]) + Components->mover.angle.pos1.v[2];
    Components->mover.angle.pos1.v[2] = v60;
    right.v[0] = v58;
    if ( (LODWORD(v58) & 0x7F800000) == 2139095040 || (right.v[0] = v59, (LODWORD(v59) & 0x7F800000) == 2139095040) || (right.v[0] = v60, (LODWORD(v60) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4350, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[0] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[1] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boltComps->missile.nonGrenade.curvature )[0] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[1] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[2] )") )
        __debugbreak();
    }
  }
  if ( v17->guidedMissileType == MISSILE_GUIDANCE_NONE )
    goto LABEL_111;
  EntityState->lerp.pos.trType = TR_INTERPOLATE;
  EntityState->lerp.apos.trType = TR_INTERPOLATE;
  EntityState->lerp.pos.trDuration = 0;
  guidedMissileType = v17->guidedMissileType;
  if ( guidedMissileType != MISSILE_GUIDANCE_JAVELIN )
  {
    if ( guidedMissileType == MISSILE_GUIDANCE_ROBOTECH )
    {
      v63 = BG_random(&pHoldrand);
      v64 = *(float *)&v63 * 360.0;
      v65 = (int)(float)(*(float *)&v63 * 360.0);
      v66 = (float)(*(float *)&v63 * 360.0) >= -16777216.0 && v64 <= 16777216.0;
      v67 = v64 >= -2147483600.0 && v64 <= 2147483600.0;
      if ( (!v66 || !v67) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", v65, (float)(*(float *)&v63 * 360.0)) )
        __debugbreak();
      Components->item[0].ammoCount = v65;
      v68 = BG_flrand(COERCE_FLOAT(LODWORD(v17->robotechVarianceFrequency) ^ _xmm), v17->robotechVarianceFrequency, &pHoldrand);
      Components->missile.nonGrenade.robotechVariance.frequency = *(float *)&v68;
      v69 = BG_flrand(COERCE_FLOAT(LODWORD(v17->robotechVariancePitch) ^ _xmm), v17->robotechVariancePitch, &pHoldrand);
      Components->missile.nonGrenade.robotechVariance.pitch = *(float *)&v69;
      v70 = BG_flrand(COERCE_FLOAT(LODWORD(v17->robotechVarianceYaw) ^ _xmm), v17->robotechVarianceYaw, &pHoldrand);
      Components->missile.nonGrenade.robotechVariance.yaw = *(float *)&v70;
    }
LABEL_111:
    v62 = v87;
    goto LABEL_112;
  }
  EntityState->lerp.pos.trType = TR_GRAVITY;
  EntityState->lerp.pos.trTime = ServerTimeFromPredictionKey;
  Components->missile.nonGrenade.stage = MISSILESTAGE_SOFTLAUNCH;
  v62 = v87;
  EntityState->lerp.u.anonymous.data[3] = !v87 || !v87->topFire;
LABEL_112:
  if ( !v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4383, ASSERT_TYPE_ASSERT, "(projectileSpeed)", (const char *)&queryFormat, "projectileSpeed") )
    __debugbreak();
  v71 = r_weapona;
  v72 = (float)BG_DestabilizeDistance(r_weapona, isAlternate);
  Components->mover.pos.speed = (float)(v72 / (float)v84) * 1000.0;
  Components->item[0].clipAmmoCount[1] = serverTime;
  v73 = BG_DestabilizationRateTime(v71, isAlternate);
  v74 = val;
  if ( *(float *)&v73 == 0.0 || this->TestEntityFlag(this, val, THERMAL_DRAW) )
    Flags->m_flags[0] |= 0x4000u;
  LOBYTE(v77) = isAlternate;
  this->FinalizeRocketFire(this, weaponMapa, outEntityData, v74, v71, v77, v85, v62, v91);
  Components->missile.nonGrenade.launchOrigin = *BgEntityData::GetOrigin(outEntityData);
  Components->missile.nonGrenade.launchDir = vec;
  Sys_ProfEndNamedEvent();
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgMissile::FlushInvalidTargets
==============
*/
void BgMissile::FlushInvalidTargets(BgMissile *this, BgEntityData *entityData)
{
  entityState_t *EntityState; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 143, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 146, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 148, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  if ( EntityState->lerp.u.anonymous.data[5] != 2047 && !((unsigned __int8 (__fastcall *)(BgMissile *))this->IsEntityValid)(this) )
    EntityState->lerp.u.anonymous.data[5] = 2047;
}

/*
==============
BgMissile::GetDamageCalcType
==============
*/
__int64 BgMissile::GetDamageCalcType(BgMissile *this, entityState_t *missileOwnerEnt, entityState_t *hitEnt)
{
  return 0i64;
}

/*
==============
BgMissile::GetGrenadeTrType
==============
*/
__int64 BgMissile::GetGrenadeTrType(BgMissile *this, BgEntityData *entityData)
{
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int ParentEntNum; 
  __int64 v6; 
  bool v7; 
  __int64 result; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3791, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  GetEntityState = this->GetEntityState;
  ParentEntNum = BgEntityData::GetParentEntNum(entityData);
  v6 = (__int64)GetEntityState(this, ParentEntNum);
  if ( !v6 )
    return 6i64;
  v7 = *(_WORD *)(v6 + 8) == 19;
  result = 7i64;
  if ( !v7 )
    return 6i64;
  return result;
}

/*
==============
BgMissile::GetGrenadeTrType
==============
*/
__int64 BgMissile::GetGrenadeTrType(BgMissile *this, const BgEntityData *entityData)
{
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int ParentEntNum; 
  __int64 v6; 
  bool v7; 
  __int64 result; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 713, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  GetEntityState = this->GetEntityState;
  ParentEntNum = BgEntityData::GetParentEntNum((BgEntityData *)entityData);
  v6 = (__int64)GetEntityState(this, ParentEntNum);
  if ( !v6 )
    return 6i64;
  v7 = *(_WORD *)(v6 + 8) == 19;
  result = 7i64;
  if ( !v7 )
    return 6i64;
  return result;
}

/*
==============
BgMissile::GetLastHitCharacter
==============
*/
__int64 BgMissile::GetLastHitCharacter(BgMissile *this, BgEntityData *entityData)
{
  BgEntityComponents *Components; 
  int lastHitCharacter; 
  unsigned int v6; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 445, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 448, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  lastHitCharacter = Components->missile.lastHitCharacter;
  if ( !lastHitCharacter )
    return 2047i64;
  v6 = lastHitCharacter - 1;
  if ( !this->IsEntityValid(this, lastHitCharacter - 1) )
  {
    Components->missile.lastHitCharacter = 0;
    return 2047i64;
  }
  return v6;
}

/*
==============
BgMissile::GetLastHitCharacterConst
==============
*/
__int64 BgMissile::GetLastHitCharacterConst(BgMissile *this, const BgEntityData *entityData)
{
  const BgEntityComponents *Components; 
  int lastHitCharacter; 
  unsigned int v6; 
  bool v7; 
  __int64 result; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 467, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents((BgEntityData *)entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 470, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  lastHitCharacter = Components->missile.lastHitCharacter;
  if ( !lastHitCharacter )
    return 2047i64;
  v6 = lastHitCharacter - 1;
  v7 = !this->IsEntityValid(this, lastHitCharacter - 1);
  result = v6;
  if ( v7 )
    return 2047i64;
  return result;
}

/*
==============
BgMissile::GetPerturbation
==============
*/
float BgMissile::GetPerturbation(BgMissile *this, float destabilizationCurvatureMax)
{
  if ( (destabilizationCurvatureMax >= 1000000000.0 || destabilizationCurvatureMax < 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2203, ASSERT_TYPE_ASSERT, "( ( destabilizationCurvatureMax < 1000000000.0f && destabilizationCurvatureMax >= 0.0f ) )", "( destabilizationCurvatureMax ) = %g", destabilizationCurvatureMax) )
    __debugbreak();
  return destabilizationCurvatureMax;
}

/*
==============
BgMissile::GetPointContents
==============
*/
int BgMissile::GetPointContents(BgMissile *this, const vec3_t *pos, int skipEntity, int contentMask)
{
  Physics_WorldId v7; 

  v7 = this->GetPhysicsMainWorldId(this);
  return PhysicsQuery_LegacyGetPointContents(v7, pos, skipEntity, contentMask);
}

/*
==============
BgMissile::GetRotationDirMultiplier
==============
*/
float BgMissile::GetRotationDirMultiplier(BgMissile *this, GrenadeRotationDirection rotationDir)
{
  if ( rotationDir >= GRD_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3841, ASSERT_TYPE_ASSERT, "(rotationDir < GRD_COUNT)", (const char *)&queryFormat, "rotationDir < GRD_COUNT") )
    __debugbreak();
  switch ( rotationDir )
  {
    case GRD_RANDOM:
      return (float)(2 * BG_irand(0, 2, &this->m_holdRand) - 1);
    case GRD_CLOCKWISE:
      return FLOAT_N1_0;
    case GRD_COUNTERCLOCKWISE:
      return FLOAT_1_0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3852, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnknown rotationDir: %d", "0", rotationDir) )
    __debugbreak();
  return 0.0;
}

/*
==============
BgMissile::GetTargetPosition
==============
*/
void BgMissile::GetTargetPosition(BgMissile *this, BgEntityData *entityData, vec3_t *outResult)
{
  entityState_t *EntityState; 
  BgEntityMissileComponentData *ComponentData; 
  BgEntityComponents *Components; 
  int MissileTargetEnt; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  int v26[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1790, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1794, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1796, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  ComponentData = (BgEntityMissileComponentData *)BgEntityData::GetComponentData(entityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1800, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1803, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  MissileTargetEnt = BgEntityMissileComponentData::GetMissileTargetEnt(ComponentData);
  if ( MissileTargetEnt == 2047 || !this->GetEntityTransform(this, MissileTargetEnt, (vec3_t *)v26, &angles) )
  {
    LODWORD(outResult->v[0]) = Components->item[1].clipAmmoCount[0];
    LODWORD(outResult->v[1]) = Components->item[1].clipAmmoCount[1];
    outResult->v[2] = Components->mover.angle.pos3.v[2];
  }
  else
  {
    AnglesToAxis(&angles, &axis);
    v10 = *(float *)v26;
    v11 = *(float *)&v26[1];
    v12 = *(float *)&v26[2];
    outResult->v[0] = *(float *)v26;
    outResult->v[1] = v11;
    outResult->v[2] = v12;
    v13 = Components->mover.angle.pos2.v[0];
    v14 = (float)(v13 * axis.m[0].v[0]) + v10;
    v15 = v13 * axis.m[0].v[2];
    v16 = (float)(v13 * axis.m[0].v[1]) + v11;
    outResult->v[0] = v14;
    outResult->v[1] = v16;
    v17 = v15 + v12;
    outResult->v[2] = v17;
    v18 = Components->mover.angle.pos2.v[1];
    v19 = v18 * axis.m[1].v[0];
    v20 = (float)(v18 * axis.m[1].v[1]) + v16;
    v21 = (float)(v18 * axis.m[1].v[2]) + v17;
    outResult->v[1] = v20;
    v22 = v19 + v14;
    outResult->v[0] = v22;
    outResult->v[2] = v21;
    v23 = Components->mover.angle.pos2.v[2];
    v24 = v23 * axis.m[2].v[1];
    outResult->v[0] = (float)(v23 * axis.m[2].v[0]) + v22;
    v25 = v23 * axis.m[2].v[2];
    outResult->v[1] = v24 + v20;
    outResult->v[2] = v25 + v21;
  }
}

/*
==============
BgMissile::GrenadeBounceMirrorVelocity
==============
*/
float BgMissile::GrenadeBounceMirrorVelocity(BgMissile *this, const vec3_t *velocity, const vec3_t *normal, const WeaponDef *weapDef, vec3_t *result)
{
  const dvar_t *v5; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 

  v5 = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  v10 = (float)((float)(velocity->v[0] * normal->v[0]) + (float)(normal->v[1] * velocity->v[1])) + (float)(normal->v[2] * velocity->v[2]);
  v9 = v10;
  if ( !DCONST_DVARBOOL_bg_grenadeRollingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRollingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && weapDef->isRollingGrenade )
    LODWORD(v12) = LODWORD(v10) ^ _xmm;
  else
    v12 = v10 * -2.0;
  result->v[0] = (float)(normal->v[0] * v12) + velocity->v[0];
  result->v[1] = (float)(v12 * normal->v[1]) + velocity->v[1];
  v13 = (float)(v12 * normal->v[2]) + velocity->v[2];
  result->v[2] = v13;
  if ( ((LODWORD(result->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(result->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v13) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3197, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
    __debugbreak();
  return v9;
}

/*
==============
BgMissile::GrenadeBounceVelocity
==============
*/
char BgMissile::GrenadeBounceVelocity(BgMissile *this, const vec3_t *preBounceVelocity, float dot, const vec3_t *normal, int surfType, const WeaponDef *weapDef, trajectory_t_secure *pos, float *outRollSlideSpeed, vec3_t *outRollSlideDir, const int hitEntNum)
{
  float v12; 
  const dvar_t *v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  const dvar_t *v17; 
  __int128 v19; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  const char *v26; 
  double Float_Internal_DebugName; 
  float v32; 
  float v33; 
  float v34; 
  const entityState_t *v35; 

  v12 = fsqrt((float)((float)(preBounceVelocity->v[0] * preBounceVelocity->v[0]) + (float)(preBounceVelocity->v[1] * preBounceVelocity->v[1])) + (float)(preBounceVelocity->v[2] * preBounceVelocity->v[2]));
  if ( v12 <= 0.0 || dot > 0.0 )
  {
    if ( (unsigned int)hitEntNum < 0x7FE && this->IsEntityValid(this, hitEntNum) )
    {
      v35 = this->GetEntityState(this, (unsigned int)hitEntNum);
      if ( v35 )
      {
        if ( BG_IsCharacterEntity(v35) )
        {
          *(_QWORD *)pos->trDelta.v = 0i64;
          pos->trDelta.v[2] = 0.0;
        }
      }
    }
  }
  else
  {
    v13 = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
    if ( !DCONST_DVARBOOL_bg_grenadeRollingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRollingEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && weapDef->isRollingGrenade )
    {
      v14 = pos->trDelta.v[1];
      v15 = LODWORD(pos->trDelta.v[0]);
      v16 = pos->trDelta.v[2];
      v17 = DCONST_DVARMPFLT_bg_grenadeFrictionThresh;
      v19 = v15;
      *(float *)&v19 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14)) + (float)(v16 * v16));
      _XMM6 = v19;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm9, xmm0
      }
      v22 = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM0);
      v23 = v14 * (float)(1.0 / *(float *)&_XMM0);
      v24 = v16 * (float)(1.0 / *(float *)&_XMM0);
      if ( !DCONST_DVARMPFLT_bg_grenadeFrictionThresh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeFrictionThresh") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( *(float *)&v19 <= v17->current.value )
      {
        v25 = DCONST_DVARMPFLT_bg_grenadeFrictionLow;
        v26 = "bg_grenadeFrictionLow";
      }
      else
      {
        v25 = DCONST_DVARMPFLT_bg_grenadeFrictionHigh;
        v26 = "bg_grenadeFrictionHigh";
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v25, v26);
      pos->trDelta.v[0] = (float)(1.0 - *(float *)&Float_Internal_DebugName) * pos->trDelta.v[0];
      pos->trDelta.v[1] = (float)(1.0 - *(float *)&Float_Internal_DebugName) * pos->trDelta.v[1];
      pos->trDelta.v[2] = (float)(1.0 - *(float *)&Float_Internal_DebugName) * pos->trDelta.v[2];
      if ( COERCE_FLOAT(LODWORD(dot) & _xmm) < 25.0 )
      {
        *outRollSlideSpeed = *(float *)&v19;
        outRollSlideDir->v[0] = v22;
        outRollSlideDir->v[1] = v23;
        outRollSlideDir->v[2] = v24;
        return 1;
      }
      *((_QWORD *)&_XMM0 + 1) = 0i64;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeBounceRestitutionMax, "bg_grenadeBounceRestitutionMax");
      __asm
      {
        vmaxss  xmm0, xmm0, xmm7
        vminss  xmm1, xmm0, xmm6
      }
      LODWORD(v32) = COERCE_UNSIGNED_INT(*(float *)&_XMM1 * dot) ^ _xmm;
      pos->trDelta.v[0] = (float)(v32 * normal->v[0]) + pos->trDelta.v[0];
      pos->trDelta.v[1] = (float)(v32 * normal->v[1]) + pos->trDelta.v[1];
      pos->trDelta.v[2] = (float)(v32 * normal->v[2]) + pos->trDelta.v[2];
    }
    else
    {
      v33 = weapDef->parallelBounce[surfType];
      v34 = (float)((float)(v33 - weapDef->perpendicularBounce[surfType]) * (float)(dot / v12)) + v33;
      pos->trDelta.v[0] = v34 * pos->trDelta.v[0];
      pos->trDelta.v[1] = v34 * pos->trDelta.v[1];
      pos->trDelta.v[2] = v34 * pos->trDelta.v[2];
    }
  }
  if ( ((LODWORD(pos->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(pos->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(pos->trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3264, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos->trDelta )[0] ) && !IS_NAN( ( pos->trDelta )[1] ) && !IS_NAN( ( pos->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos->trDelta )[0] ) && !IS_NAN( ( pos->trDelta )[1] ) && !IS_NAN( ( pos->trDelta )[2] )") )
    __debugbreak();
  return 0;
}

/*
==============
BgMissile::GrenadeDud
==============
*/
bool BgMissile::GrenadeDud(BgMissile *this, BgEntityData *entityData, const Weapon *weapon, bool isAlternate)
{
  BgEntityComponents *Components; 
  int v8; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2704, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2707, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  v8 = BG_ProjectileActivateDist(weapon, isAlternate);
  return v8 > 0 && (float)v8 > Components->mover.pos.pos1.v[0];
}

/*
==============
BgMissile::GuidedMissileSteering
==============
*/
void BgMissile::GuidedMissileSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime, const int timeDeltaMsec, int *outMissileClipMask)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  Weapon *WeaponForEntity; 
  __int64 weaponIdx; 
  const char *szInternalName; 
  __int64 v15; 
  const char *v16; 
  int v17; 
  signed __int64 v18; 
  char v19; 
  char v20; 
  BgWeaponMap *v22; 
  WeaponDef *v23; 
  guidedMissileType_t guidedMissileType; 
  float v25; 
  __int128 v26; 
  __int128 v27; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v43; 
  float v44; 
  float v45; 
  double Float_Internal_DebugName; 
  float v47; 
  double v48; 
  int passEntityNum2; 
  int contentmask; 
  int passEntityNum; 
  const Bounds *Box; 
  int v53; 
  int v54; 
  float v55; 
  int missileLerpTime; 
  int v57; 
  float v58; 
  float v59; 
  float v60; 
  Bounds *bounds; 
  bool simulationTime_4; 
  bool simulationTime_5; 
  signed __int64 v65; 
  bool v66; 
  vec3_t trBase; 
  BgWeaponMap *weaponMapa; 
  WeaponDef *weapDef; 
  Weapon *weapon; 
  int *v71; 
  __int64 v72; 
  vec3_t inOutSteer; 
  vec3_t toTargetRelative; 
  vec2_t currentRight; 
  trace_t results; 

  v72 = -2i64;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v71 = outMissileClipMask;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 891, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !outMissileClipMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 892, ASSERT_TYPE_ASSERT, "(outMissileClipMask)", (const char *)&queryFormat, "outMissileClipMask") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 895, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 898, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  *(_QWORD *)inOutSteer.v = BgEntityData::GetComponentData(entityData);
  if ( !*(_QWORD *)inOutSteer.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 901, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, EntityState);
  weapon = WeaponForEntity;
  weapDef = (WeaponDef *)BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  if ( weapDef->guidedMissileType && BgMissile::IsMissileLockedOn(this, entityData) && BgMissile::MissileIsReadyForSteering(this, weaponMap, entityData, simulationTime) && (Components->item[0].weapon.attachmentVariationIndices[5] & 0x10) == 0 )
  {
    weaponIdx = WeaponForEntity->weaponIdx;
    if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(bounds) = WeaponForEntity->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", bounds, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    szInternalName = bg_weaponCompleteDefs[weaponIdx]->szInternalName;
    v15 = 0x7FFFFFFFi64;
    v16 = "uplinkball_tracking_mp";
    v17 = 1;
    if ( !szInternalName )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      szInternalName = NULL;
    }
    v18 = szInternalName - "uplinkball_tracking_mp";
    v65 = v18;
    while ( 1 )
    {
      v19 = v16[v18];
      v20 = *v16++;
      if ( !v15-- )
      {
LABEL_34:
        v17 = 0;
        goto LABEL_35;
      }
      if ( v19 != v20 )
        break;
      v18 = v65;
      if ( !v19 )
        goto LABEL_34;
    }
    if ( v19 < v20 )
      v17 = -1;
LABEL_35:
    simulationTime_5 = v17 == 0;
    v22 = weaponMapa;
    BgMissile::CalcTargetPosition(this, weaponMapa, entityData);
    if ( v17 && BgMissile::MissilePassedTarget(this, weaponMapa, entityData) )
    {
      Components->missile.flags |= 0x10u;
      return;
    }
    v23 = weapDef;
    guidedMissileType = weapDef->guidedMissileType;
    if ( guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
    {
      BgMissile::JavelinSteering(this, weaponMapa, entityData, weapon, simulationTime, timeDeltaMsec);
      return;
    }
    if ( guidedMissileType == MISSILE_GUIDANCE_ROBOTECH )
    {
      BgMissile::RobotechSteering(this, entityData, weapDef, simulationTime, timeDeltaMsec);
      return;
    }
    if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 950, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
      __debugbreak();
    v25 = EntityState->lerp.pos.trDelta.v[1];
    v26 = LODWORD(EntityState->lerp.pos.trDelta.v[0]);
    v27 = v26;
    *(float *)&v27 = fsqrt((float)(*(float *)&v26 * *(float *)&v26) + (float)(v25 * v25));
    _XMM10 = v27;
    __asm
    {
      vcmpless xmm0, xmm10, xmm11
      vblendvps xmm1, xmm10, xmm8, xmm0
    }
    v31 = *(float *)&v26 * (float)(1.0 / *(float *)&_XMM1);
    v32 = v25 * (float)(1.0 / *(float *)&_XMM1);
    currentRight.v[0] = v32;
    LODWORD(currentRight.v[1]) = LODWORD(v31) ^ _xmm;
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    if ( BgMissile::IsDebugDrawEnabled(this) )
      this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)(&Components->beam + 21), &colorGreen, 0, 200);
    v33 = Components->mover.angle.pos3.v[0] - trBase.v[0];
    v35 = (unsigned int)Components->item[1].clipAmmoCount[1];
    v34 = Components->mover.angle.pos3.v[1] - trBase.v[1];
    v36 = Components->mover.angle.pos3.v[2] - trBase.v[2];
    v37 = (float)(v32 * v34) + (float)(v31 * v33);
    toTargetRelative.v[0] = v37;
    v38 = (float)(COERCE_FLOAT(LODWORD(v31) ^ _xmm) * v34) + (float)(v32 * v33);
    toTargetRelative.v[1] = v38;
    toTargetRelative.v[2] = v36;
    v39 = v36 * v36;
    *(float *)&v35 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v36 * v36));
    _XMM9 = v35;
    __asm
    {
      vcmpless xmm0, xmm9, xmm11
      vblendvps xmm1, xmm9, xmm8, xmm0
    }
    v43 = (float)(1.0 / *(float *)&_XMM1) * v33;
    v44 = (float)(1.0 / *(float *)&_XMM1) * v36;
    v66 = (Components->missile.flags & 0x2000) != 0;
    if ( (Components->missile.flags & 0x2000) == 0 && !v17 )
    {
      v45 = (float)(v37 * v37) + (float)(v38 * v38);
      if ( this->IsDebugTextEnabled(this) )
        this->DebugText(this, "Missile distances: h: %.4f v: %.4f d: %.4f\n", fsqrt(v45), COERCE_FLOAT(LODWORD(v36) & _xmm), *(float *)&_XMM9);
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHorDistToTargetToStartLerp, "bg_missileHorDistToTargetToStartLerp");
      v47 = *(float *)&Float_Internal_DebugName;
      v48 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileVerDistToTargetToStartLerp, "bg_missileVerDistToTargetToStartLerp");
      if ( v45 <= (float)(v47 * v47) && v39 <= (float)(*(float *)&v48 * *(float *)&v48) )
      {
        simulationTime_4 = BG_WeaponRadiusDamageDetailTrace(weapon, EntityState->inAltWeaponMode);
        passEntityNum2 = BgEntityMissileComponentData::GetMissileTargetEnt(*(BgEntityMissileComponentData **)inOutSteer.v);
        if ( passEntityNum2 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 996, ASSERT_TYPE_ASSERT, "(targetEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "targetEntNum != ENTITYNUM_NONE") )
          __debugbreak();
        Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
        contentmask = *v71;
        passEntityNum = BgEntityData::GetOwnerEntNum(entityData);
        Box = BgEntityData::GetBox(entityData);
        BgMissile::MissileTrace(this, entityData, &results, &trBase, &Components->mover.angle.pos3, Box, passEntityNum, passEntityNum2, contentmask, simulationTime_4);
        if ( this->IsDebugTextEnabled(this) )
          this->DebugText(this, "Line of sight result: ss: %d as: %d f: %.4f\n", results.startsolid, results.allsolid, results.fraction);
        if ( !results.startsolid && !results.allsolid && results.fraction == 1.0 )
        {
          Components->missile.flags |= 0x2000u;
          v53 = simulationTime;
          v54 = timeDeltaMsec;
          Components->missile.missileLerpToTargetStartTime = simulationTime - timeDeltaMsec;
          v66 = 1;
          Components->missile.missileLerpTime = (int)(float)((float)(1000.0 / fsqrt((float)((float)(EntityState->lerp.pos.trDelta.v[0] * EntityState->lerp.pos.trDelta.v[0]) + (float)(EntityState->lerp.pos.trDelta.v[1] * EntityState->lerp.pos.trDelta.v[1])) + (float)(EntityState->lerp.pos.trDelta.v[2] * EntityState->lerp.pos.trDelta.v[2]))) * *(float *)&_XMM9);
          v22 = weaponMapa;
          v23 = weapDef;
LABEL_69:
          v55 = (float)v54 * 0.001;
          if ( v66 )
          {
            *v71 = 33570816;
            missileLerpTime = Components->missile.missileLerpTime;
            v57 = v53 - Components->missile.missileLerpToTargetStartTime;
            v58 = FLOAT_1_0;
            if ( missileLerpTime > 0 )
              v58 = (float)v57 / (float)missileLerpTime;
            if ( this->IsDebugTextEnabled(this) )
              this->DebugText(this, "Lerping to target ratio: %.4f. Total lerp time: %d\n", v58, (unsigned int)missileLerpTime);
            Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
            v59 = (float)((float)((float)(*(float *)&_XMM9 * v58) * (float)((float)(1.0 / *(float *)&_XMM1) * v34)) + trBase.v[1]) - trBase.v[1];
            v60 = (float)((float)(v44 * (float)(*(float *)&_XMM9 * v58)) + trBase.v[2]) - trBase.v[2];
            EntityState->lerp.pos.trDelta.v[0] = (float)((float)((float)(v43 * (float)(*(float *)&_XMM9 * v58)) + trBase.v[0]) - trBase.v[0]) * (float)(1.0 / v55);
            EntityState->lerp.pos.trDelta.v[1] = v59 * (float)(1.0 / v55);
            EntityState->lerp.pos.trDelta.v[2] = (float)(1.0 / v55) * v60;
          }
          else
          {
            inOutSteer.v[0] = 0.0;
            inOutSteer.v[1] = 0.0;
            inOutSteer.v[2] = 0.0;
            BgMissile::HorzSteerToTarget(this, v22, entityData, &currentRight, (const vec2_t *)&toTargetRelative, *(float *)&_XMM10, &inOutSteer);
            BgMissile::VerticalSteering(this, v22, entityData, v54, &toTargetRelative, *(float *)&_XMM10, simulationTime_5, &inOutSteer);
            EntityState->lerp.pos.trDelta.v[0] = (float)(v55 * inOutSteer.v[0]) + EntityState->lerp.pos.trDelta.v[0];
            EntityState->lerp.pos.trDelta.v[1] = (float)(v55 * inOutSteer.v[1]) + EntityState->lerp.pos.trDelta.v[1];
            EntityState->lerp.pos.trDelta.v[2] = (float)(v55 * inOutSteer.v[2]) + EntityState->lerp.pos.trDelta.v[2];
          }
          if ( *(float *)&_XMM9 < (float)v23->iProjectileDetonationRadius )
            this->Explode(this, entityData);
          memset(&trBase, 0, sizeof(trBase));
          return;
        }
        if ( BgMissile::IsDebugDrawEnabled(this) )
          this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)(&Components->beam + 21), &colorCyan, 0, 1000);
        v23 = weapDef;
        v22 = weaponMapa;
      }
    }
    v54 = timeDeltaMsec;
    v53 = simulationTime;
    goto LABEL_69;
  }
}

/*
==============
BgMissile::HorzSteerToTarget
==============
*/
void BgMissile::HorzSteerToTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const vec2_t *currentRight, const vec2_t *toTargetRelative, float currentHorzSpeed, vec3_t *inOutSteer)
{
  vec3_t *v7; 
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v13; 
  const vec2_t *v14; 
  float v15; 
  float v16; 
  float maxSteeringAccel; 
  double v18; 
  int projectileSpeedUp[4]; 
  int projectileSpeed; 

  v7 = inOutSteer;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1834, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1837, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  v13 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  BG_GetProjectileSpeed(WeaponForEntity, EntityState->inAltWeaponMode, &projectileSpeed, projectileSpeedUp);
  v14 = toTargetRelative;
  v15 = toTargetRelative->v[1];
  if ( v15 == 0.0 )
    v16 = FLOAT_3_4028235e38;
  else
    v16 = (float)((float)(toTargetRelative->v[0] * toTargetRelative->v[0]) + (float)(v15 * v15)) * (float)(0.5 / v15);
  if ( v13->maxSteeringAccel <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1852, ASSERT_TYPE_ASSERT, "(weapDef->maxSteeringAccel > 0)", (const char *)&queryFormat, "weapDef->maxSteeringAccel > 0") )
    __debugbreak();
  maxSteeringAccel = v13->maxSteeringAccel;
  if ( v14->v[0] <= 0.0 )
  {
    if ( COERCE_FLOAT(LODWORD(v16) & _xmm) >= (float)((float)((float)((float)projectileSpeed * (float)projectileSpeed) / maxSteeringAccel) + 60.0) )
    {
      if ( v14->v[1] <= 0.0 )
        LODWORD(maxSteeringAccel) ^= _xmm;
      v7->v[0] = currentRight->v[0] * maxSteeringAccel;
      v7->v[1] = maxSteeringAccel * currentRight->v[1];
    }
  }
  else if ( v14->v[1] != 0.0 && COERCE_FLOAT(LODWORD(v16) & _xmm) >= (float)((float)((float)projectileSpeed * (float)projectileSpeed) / maxSteeringAccel) )
  {
    if ( v16 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1863, ASSERT_TYPE_ASSERT, "(radius != 0)", (const char *)&queryFormat, "radius != 0") )
      __debugbreak();
    v18 = I_fclamp((float)((float)(currentHorzSpeed * currentHorzSpeed) * 2.0) / v16, COERCE_FLOAT(LODWORD(v13->maxSteeringAccel) ^ _xmm), v13->maxSteeringAccel);
    v7->v[0] = *(float *)&v18 * currentRight->v[0];
    v7->v[1] = *(float *)&v18 * currentRight->v[1];
  }
}

/*
==============
BgMissile::IRand
==============
*/
int BgMissile::IRand(BgMissile *this, int min, int max)
{
  return BG_irand(min, max, &this->m_holdRand);
}

/*
==============
BgMissile::InitGrenadeEntity
==============
*/
void BgMissile::InitGrenadeEntity(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int parentEntNum, const int serverTime)
{
  entityState_t *EntityState; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  Bounds *Box; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v14; 
  XModel *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v20; 
  float v21; 
  const playerState_s *v26; 
  entityState_t *v27; 
  __int16 throwbackGrenadeOwner; 
  BgEntityComponents *Components; 
  BgEntityComponentData *ComponentData; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgMissile::InitGrenadeEntity");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3862, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3865, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3868, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(entityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3871, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  Box = BgEntityData::GetBox(entityData);
  if ( !Box && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3874, ASSERT_TYPE_ASSERT, "(entBox)", (const char *)&queryFormat, "entBox") )
    __debugbreak();
  ComponentData = BgEntityData::GetComponentData(entityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3877, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3883, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  v14 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3886, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v15 = BG_ProjectileModel(WeaponForEntity, EntityState->inAltWeaponMode);
  EntityState->eType = ET_MISSILE;
  EntityState->lerp.eFlags.m_flags[0] = 0;
  EntityState->lerp.u.anonymous.data[2] = serverTime;
  EntityState->lerp.u.anonymous.data[5] = 2047;
  EntityState->staticState.general.xmodel = parentEntNum;
  Flags->m_flags[0] |= 0x40200u;
  if ( v14->offhandClass || !v15 )
  {
    *(_QWORD *)Box->midPoint.v = 0i64;
    Box->midPoint.v[2] = 0.0;
    Box->halfSize.v[0] = 4.5;
    Box->halfSize.v[1] = 4.5;
    Box->halfSize.v[2] = 4.5;
  }
  else
  {
    *(_OWORD *)Box->midPoint.v = *(_OWORD *)v15->bounds.midPoint.v;
    *(double *)&Box->halfSize.y = *(double *)&v15->bounds.halfSize.y;
    v16 = Box->midPoint.v[2];
    v17 = v16 - Box->halfSize.v[2];
    if ( v17 < 0.0 )
    {
      Box->midPoint.v[2] = (float)(v17 * -0.5) + v16;
      Box->halfSize.v[2] = Box->halfSize.v[2] - (float)(v17 * -0.5);
    }
    v18 = Box->halfSize.v[0];
    __asm { vxorpd  xmm7, xmm7, xmm7 }
    if ( v18 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 855, ASSERT_TYPE_ASSERT, "( bounds->halfSize[0] ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "bounds->halfSize[0]", "0.0f", v18, *(double *)&_XMM7) )
      __debugbreak();
    v20 = Box->halfSize.v[1];
    if ( v20 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 856, ASSERT_TYPE_ASSERT, "( bounds->halfSize[1] ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "bounds->halfSize[1]", "0.0f", v20, *(double *)&_XMM7) )
      __debugbreak();
    v21 = Box->halfSize.v[2];
    if ( v21 < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 857, ASSERT_TYPE_ASSERT, "( bounds->halfSize[2] ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "bounds->halfSize[2]", "0.0f", v21, *(double *)&_XMM7) )
      __debugbreak();
    _XMM0 = LODWORD(Box->halfSize.v[0]);
    __asm { vminss  xmm1, xmm0, dword ptr [rbx+14h] }
    Box->halfSize.v[0] = *(float *)&_XMM1;
    _XMM2 = LODWORD(Box->halfSize.v[1]);
    __asm { vminss  xmm0, xmm2, dword ptr [rbx+14h] }
    Box->halfSize.v[1] = *(float *)&_XMM0;
  }
  Components->missile.antilagTimeOffset = 0;
  BgMissile::SetMissileLastHitCharacter(this, entityData, 2048);
  this->InitGrenadeSetAntiLagOffset(this, entityData, parentEntNum, serverTime);
  BgMissile::SetDoorScriptable(this, entityData, 0xFFFFFFFF);
  v26 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  v27 = this->GetEntityState(this, (unsigned int)parentEntNum);
  if ( !v26 || v26->grenadeTimeLeft >= 0 || (throwbackGrenadeOwner = v26->throwbackGrenadeOwner, throwbackGrenadeOwner == 2047) )
  {
    entityData->SetOwnerEntNum(entityData, parentEntNum);
    entityData->SetParentEntNum(entityData, parentEntNum);
    if ( v27 && v27->eType == ET_PLAYER )
      EntityState->otherEntityNum = truncate_cast<short,int>(parentEntNum);
    else
      EntityState->otherEntityNum = 2047;
  }
  else
  {
    entityData->SetOwnerEntNum(entityData, throwbackGrenadeOwner);
    entityData->SetParentEntNum(entityData, v26->throwbackGrenadeOwner);
  }
  this->InitGrenadePlatformTracking(this, entityData, parentEntNum);
  BgEntityData::SetClipMask(entityData, 41968017);
  BgEntityData::SetHandler(entityData, 0xAu);
  ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
  this->FinalizeGrenadeSpawn(this, entityData, parentEntNum, v14);
  Sys_ProfEndNamedEvent();
}

/*
==============
BgMissile::InitGrenadeMovement
==============
*/
void BgMissile::InitGrenadeMovement(BgMissile *this, BgEntityData *entityData, const vec3_t *start, const vec3_t *dir, const Weapon *weapon, bool rotate, const int serverTime)
{
  BgEntityComponents *Components; 
  entityState_t *EntityState; 
  const WeaponDef *v13; 
  float v14; 
  vec3_t *Angles; 
  GrenadeRotationParams *p_rotationParams; 
  int v17; 
  float v18; 
  int v19; 
  bool IsThrowingAxe; 
  _BOOL8 v21; 
  _DWORD *p_initialPitch; 
  int v23; 
  double RotationDirMultiplier; 
  int v25; 
  double v26; 
  int v27; 
  double v28; 
  int v29; 
  float v30; 
  int v31; 
  BOOL fmt; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgMissile::InitGrenadeMovement");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3964, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3967, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3970, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v13 = BG_WeaponDef(weapon, EntityState->inAltWeaponMode);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3973, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Components->spawner.count = 0;
  EntityState->lerp.pos.trType = BgMissile::GetGrenadeTrType(this, entityData);
  EntityState->lerp.pos.trTime = serverTime;
  *BgEntityData::GetOrigin(entityData) = *start;
  Trajectory_SetTrBase(&EntityState->lerp.pos, start);
  v14 = dir->v[0];
  EntityState->lerp.pos.trDelta.v[0] = dir->v[0];
  EntityState->lerp.pos.trDelta.v[1] = dir->v[1];
  EntityState->lerp.pos.trDelta.v[2] = dir->v[2];
  if ( ((LODWORD(v14) & 0x7F800000) == 2139095040 || (LODWORD(EntityState->lerp.pos.trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(EntityState->lerp.pos.trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3983, ASSERT_TYPE_SANITY, "( !IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] )") )
    __debugbreak();
  Angles = BgEntityData::GetAngles(entityData);
  vectoangles(dir, Angles);
  Angles->v[1] = v13->rotationParams.initialYaw + Angles->v[1];
  p_rotationParams = &v13->rotationParams;
  Angles->v[0] = v13->rotationParams.initialPitch;
  Angles->v[2] = v13->rotationParams.initialRoll;
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    v17 = (int)EntityState->lerp.pos.trDelta.v[1];
    EntityState->lerp.pos.trDelta.v[0] = (float)(int)EntityState->lerp.pos.trDelta.v[0];
    v18 = (float)v17;
    v19 = (int)EntityState->lerp.pos.trDelta.v[2];
    EntityState->lerp.pos.trDelta.v[1] = v18;
    EntityState->lerp.pos.trDelta.v[2] = (float)v19;
  }
  IsThrowingAxe = BG_IsThrowingAxe(weapon);
  if ( IsThrowingAxe || rotate )
  {
    p_initialPitch = &unk_143CC4038;
    EntityState->lerp.apos.trTime = serverTime;
    EntityState->lerp.apos.trType = TR_LINEAR;
    EntityState->lerp.apos.trBase.v[0] = Angles->v[0];
    if ( !IsThrowingAxe )
      p_initialPitch = (_DWORD *)&p_rotationParams->initialPitch;
    EntityState->lerp.apos.trBase.v[1] = Angles->v[1];
    EntityState->lerp.apos.trBase.v[2] = Angles->v[2];
    v23 = BG_irand(p_initialPitch[4], p_initialPitch[5], &this->m_holdRand);
    RotationDirMultiplier = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[3]);
    EntityState->lerp.apos.trDelta.v[0] = *(float *)&RotationDirMultiplier * (float)v23;
    v25 = BG_irand(p_initialPitch[7], p_initialPitch[8], &this->m_holdRand);
    v26 = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[6]);
    EntityState->lerp.apos.trDelta.v[1] = *(float *)&v26 * (float)v25;
    v27 = BG_irand(p_initialPitch[10], p_initialPitch[11], &this->m_holdRand);
    v28 = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[9]);
    EntityState->lerp.apos.trDelta.v[2] = *(float *)&v28 * (float)v27;
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
    {
      v29 = (int)EntityState->lerp.apos.trDelta.v[1];
      EntityState->lerp.apos.trDelta.v[0] = (float)(int)EntityState->lerp.apos.trDelta.v[0];
      v30 = (float)v29;
      v31 = (int)EntityState->lerp.apos.trDelta.v[2];
      EntityState->lerp.apos.trDelta.v[1] = v30;
      EntityState->lerp.apos.trDelta.v[2] = (float)v31;
    }
    Angles->v[0] = EntityState->lerp.apos.trBase.v[0];
    Angles->v[1] = EntityState->lerp.apos.trBase.v[1];
    Angles->v[2] = EntityState->lerp.apos.trBase.v[2];
  }
  else
  {
    LOBYTE(v21) = 1;
    LOBYTE(fmt) = 1;
    this->SetEntityAngles(this, entityData, Angles, v21, fmt);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BgMissile::IsDebugDrawEnabled
==============
*/
__int64 BgMissile::IsDebugDrawEnabled(BgMissile *this)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_bg_missileDebugDraw;
  if ( !DCONST_DVARBOOL_bg_missileDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileDebugDraw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
BgMissile::IsGrenade
==============
*/
bool BgMissile::IsGrenade(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData)
{
  const entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 848, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 851, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 853, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  return BG_GetWeaponClass(WeaponForEntity, EntityState->inAltWeaponMode) == WEAPCLASS_GRENADE;
}

/*
==============
BgMissile::IsMissileLockedOn
==============
*/
bool BgMissile::IsMissileLockedOn(BgMissile *this, const BgEntityData *entityData)
{
  const BgEntityComponents *Components; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1084, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents((BgEntityData *)entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1087, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  return (Components->item[0].weapon.attachmentVariationIndices[5] & 2) != 0;
}

/*
==============
BgMissile::JavelinClimbCeiling
==============
*/
float BgMissile::JavelinClimbCeiling(BgMissile *this, BgEntityData *entityData)
{
  entityState_t *EntityState; 
  int v4; 
  const dvar_t *v5; 
  const char *v6; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1336, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1339, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1341, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v4 = EntityState->lerp.u.anonymous.data[3];
  if ( v4 == 1 )
  {
    v5 = DCONST_DVARFLT_bg_missileJavClimbCeilingDirect;
    if ( DCONST_DVARFLT_bg_missileJavClimbCeilingDirect )
      goto LABEL_20;
    v6 = "bg_missileJavClimbCeilingDirect";
    goto LABEL_18;
  }
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1349, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_TOP)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_TOP") )
    __debugbreak();
  v5 = DCONST_DVARFLT_bg_missileJavClimbCeilingTop;
  if ( !DCONST_DVARFLT_bg_missileJavClimbCeilingTop )
  {
    v6 = "bg_missileJavClimbCeilingTop";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
  }
LABEL_20:
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.value;
}

/*
==============
BgMissile::JavelinClimbEnd
==============
*/
bool BgMissile::JavelinClimbEnd(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  BgEntityComponents *Components; 
  entityState_t *EntityState; 
  float v8; 
  double v9; 
  bool result; 
  entityState_t *v11; 
  vec3_t trBase; 
  __int64 v13; 

  v13 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1290, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1293, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 8) != 0 )
    return 1;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1315, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1318, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1320, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  v8 = trBase.v[2] - targetPos->v[2];
  v9 = BgMissile::JavelinClimbCeiling(this, entityData);
  result = 0;
  memset(&trBase, 0, sizeof(trBase));
  if ( v8 > *(float *)&v9 )
  {
    if ( BgMissile::JavelinClimbExceededAngle(this, entityData, targetPos) )
      return 1;
    if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1407, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
      __debugbreak();
    v11 = BgEntityData::GetEntityState(entityData);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1410, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( v11->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1412, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
      __debugbreak();
    Trajectory_GetTrBase(&v11->lerp.pos, &trBase);
    if ( (float)((float)((float)(targetPos->v[1] - trBase.v[1]) * (float)(targetPos->v[1] - trBase.v[1])) + (float)((float)(targetPos->v[0] - trBase.v[0]) * (float)(targetPos->v[0] - trBase.v[0]))) < 160000.0 )
    {
      if ( this->IsDebugTextEnabled(this) )
        this->DebugText(this, "Javelin: *** Exceeded climb distance ***\n");
      memset(&trBase, 0, sizeof(trBase));
      return 1;
    }
    result = 0;
    memset(&trBase, 0, sizeof(trBase));
  }
  return result;
}

/*
==============
BgMissile::JavelinClimbExceededAngle
==============
*/
__int64 BgMissile::JavelinClimbExceededAngle(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  entityState_t *EntityState; 
  int v7; 
  const dvar_t *v8; 
  const char *v9; 
  float value; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  float v17; 
  float v18; 
  unsigned __int8 v19; 
  vec3_t trBase; 
  __int64 v22; 

  v22 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1363, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1366, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1368, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v7 = EntityState->lerp.u.anonymous.data[3];
  if ( !v7 )
  {
    v8 = DCONST_DVARFLT_bg_missileJavClimbAngleTop;
    if ( DCONST_DVARFLT_bg_missileJavClimbAngleTop )
      goto LABEL_20;
    v9 = "bg_missileJavClimbAngleTop";
    goto LABEL_18;
  }
  if ( v7 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1376, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
    __debugbreak();
  v8 = DCONST_DVARFLT_bg_missileJavClimbAngleDirect;
  if ( !DCONST_DVARFLT_bg_missileJavClimbAngleDirect )
  {
    v9 = "bg_missileJavClimbAngleDirect";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
      __debugbreak();
  }
LABEL_20:
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v11 = EntityState->lerp.pos.trDelta.v[1];
  v12 = LODWORD(EntityState->lerp.pos.trDelta.v[0]);
  v13 = v12;
  *(float *)&v13 = fsqrt((float)(*(float *)&v12 * *(float *)&v12) + (float)(v11 * v11));
  _XMM2 = v13;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm3, xmm0
  }
  v17 = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM1);
  v18 = v11 * (float)(1.0 / *(float *)&_XMM1);
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(atanf_0((float)((float)((float)(targetPos->v[1] - trBase.v[1]) * v18) + (float)((float)(targetPos->v[0] - trBase.v[0]) * v17)) / (float)(targetPos->v[2] - trBase.v[2])) * 57.295776) & _xmm) >= value )
  {
    v19 = 0;
  }
  else
  {
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "Javelin: *** Exceeded climb angle ***\n");
    v19 = 1;
  }
  memset(&trBase, 0, sizeof(trBase));
  return v19;
}

/*
==============
BgMissile::JavelinClimbIsAboveCeiling
==============
*/
_BOOL8 BgMissile::JavelinClimbIsAboveCeiling(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  entityState_t *EntityState; 
  float v7; 
  double v8; 
  vec3_t trBase; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1315, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData", -2i64) )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1318, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1320, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  v7 = trBase.v[2] - targetPos->v[2];
  v8 = BgMissile::JavelinClimbCeiling(this, entityData);
  memset(&trBase, 0, sizeof(trBase));
  return v7 > *(float *)&v8;
}

/*
==============
BgMissile::JavelinClimbOffset
==============
*/
void BgMissile::JavelinClimbOffset(BgMissile *this, BgEntityData *entityData, vec3_t *inOutTargetPos)
{
  entityState_t *EntityState; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int OwnerEntNum; 
  unsigned int v11; 
  entityState_t *v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  vec3_t trBase; 
  __int64 v24; 

  v24 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1435, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1438, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1440, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v7 = EntityState->lerp.u.anonymous.data[3];
  if ( v7 )
  {
    if ( v7 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1448, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
      __debugbreak();
    v9 = DCONST_DVARFLT_bg_missileJavClimbHeightDirect;
    if ( !DCONST_DVARFLT_bg_missileJavClimbHeightDirect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbHeightDirect") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    inOutTargetPos->v[2] = v9->current.value + inOutTargetPos->v[2];
    trBase.v[0] = 0.0;
    trBase.v[1] = 0.0;
    trBase.v[2] = 0.0;
    OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
    v11 = OwnerEntNum;
    if ( OwnerEntNum != 2047 && this->IsEntityValid(this, OwnerEntNum) )
    {
      v12 = this->GetEntityState(this, v11);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1457, ASSERT_TYPE_ASSERT, "(esOwner)", (const char *)&queryFormat, "esOwner") )
        __debugbreak();
      Trajectory_GetTrBase(&v12->lerp.pos, &trBase);
    }
    v13 = trBase.v[0] - inOutTargetPos->v[0];
    v15 = LODWORD(trBase.v[1]);
    v14 = trBase.v[1] - inOutTargetPos->v[1];
    *(float *)&v15 = fsqrt((float)(v14 * v14) + (float)(v13 * v13));
    _XMM3 = v15;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    v19 = v13 * (float)(1.0 / *(float *)&_XMM1);
    v20 = v14 * (float)(1.0 / *(float *)&_XMM1);
    v21 = DCONST_DVARFLT_bg_missileJavClimbToOwner;
    if ( !DCONST_DVARFLT_bg_missileJavClimbToOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbToOwner") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = v20 * v21->current.value;
    inOutTargetPos->v[0] = (float)(v19 * v21->current.value) + inOutTargetPos->v[0];
    inOutTargetPos->v[1] = v22 + inOutTargetPos->v[1];
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    v8 = DCONST_DVARFLT_bg_missileJavClimbHeightTop;
    if ( !DCONST_DVARFLT_bg_missileJavClimbHeightTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbHeightTop") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    inOutTargetPos->v[2] = v8->current.value + inOutTargetPos->v[2];
  }
}

/*
==============
BgMissile::JavelinClimbWithin2DDistance
==============
*/
__int64 BgMissile::JavelinClimbWithin2DDistance(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  entityState_t *EntityState; 
  unsigned __int8 v7; 
  vec3_t trBase; 
  __int64 v10; 

  v10 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1407, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1410, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1412, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  if ( (float)((float)((float)(targetPos->v[1] - trBase.v[1]) * (float)(targetPos->v[1] - trBase.v[1])) + (float)((float)(targetPos->v[0] - trBase.v[0]) * (float)(targetPos->v[0] - trBase.v[0]))) >= 160000.0 )
  {
    v7 = 0;
  }
  else
  {
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "Javelin: *** Exceeded climb distance ***\n");
    v7 = 1;
  }
  memset(&trBase, 0, sizeof(trBase));
  return v7;
}

/*
==============
BgMissile::JavelinDud
==============
*/
bool BgMissile::JavelinDud(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const WeaponDef *weapDef)
{
  BgEntityComponents *Components; 
  const dvar_t *v9; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2723, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2726, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2728, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v9 = DCONST_DVARBOOL_bg_missileJavDuds;
  if ( !DCONST_DVARBOOL_bg_missileJavDuds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavDuds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled || !BgMissile::JavelinProjectile(this, entityData, weapDef) )
    return 0;
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2735, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  return Components->missile.nonGrenade.stage == MISSILESTAGE_SOFTLAUNCH;
}

/*
==============
BgMissile::JavelinMaxDPS
==============
*/
float BgMissile::JavelinMaxDPS(BgMissile *this, BgEntityData *entityData)
{
  entityState_t *EntityState; 
  int v4; 
  const dvar_t *v5; 
  const char *v6; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1695, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1698, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1700, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v4 = EntityState->lerp.u.anonymous.data[3];
  if ( !v4 )
  {
    if ( UseJavelinSteeringRewrite() )
    {
      v5 = DCONST_DVARFLT_bg_missileJavTurnRateTop;
      if ( DCONST_DVARFLT_bg_missileJavTurnRateTop )
        goto LABEL_23;
      v6 = "bg_missileJavTurnRateTop";
    }
    else
    {
      v5 = DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy;
      if ( DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy )
        goto LABEL_23;
      v6 = "bg_missileJavTurnRateTop_legacy";
    }
    goto LABEL_21;
  }
  if ( v4 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1707, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
    __debugbreak();
  v5 = DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect;
  if ( !DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect )
  {
    v6 = "bg_missileJavTurnRateDirect";
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
  }
LABEL_23:
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.value;
}

/*
==============
BgMissile::JavelinProjectile
==============
*/
bool BgMissile::JavelinProjectile(BgMissile *this, BgEntityData *entityData, const WeaponDef *weapDef)
{
  entityState_t *EntityState; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2745, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2748, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2750, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return EntityState->eType == ET_MISSILE && weapDef->guidedMissileType == MISSILE_GUIDANCE_JAVELIN;
}

/*
==============
BgMissile::JavelinRotateDir
==============
*/
float BgMissile::JavelinRotateDir(BgMissile *this, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentDir, const vec3_t *targetDir, vec3_t *resultDir)
{
  double v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  BgEntityComponents *Components; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v28; 
  double v32; 
  float v33; 
  double v34; 
  float v35; 
  float v36; 
  entityState_t *EntityState; 
  vec3_t trBase; 
  __int64 v40; 
  vec3_t cross; 
  float v42; 
  float v43; 
  float v44; 
  vec4_t quat; 

  v40 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1604, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( UseJavelinSteeringRewrite() )
  {
    v11 = currentDir->v[1];
    v12 = currentDir->v[0];
    v13 = currentDir->v[2];
    v14 = (float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1613, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( currentDir ) )", "(%g, %g, %g) len %g", v12, v11, v13, fsqrt(v14)) )
      __debugbreak();
    v15 = targetDir->v[1];
    v16 = targetDir->v[0];
    v17 = targetDir->v[2];
    v18 = (float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1614, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( targetDir ) )", "(%g, %g, %g) len %g", v16, v15, v17, fsqrt(v18)) )
      __debugbreak();
    v20 = (float)((float)(targetDir->v[0] * currentDir->v[0]) + (float)(currentDir->v[1] * targetDir->v[1])) + (float)(currentDir->v[2] * targetDir->v[2]);
    v19 = v20;
    if ( v20 < 0.99900001 )
    {
      if ( v20 <= -0.99900001 )
      {
        if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1634, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
          __debugbreak();
        Components = BgEntityData::GetComponents(entityData);
        if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1636, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
          __debugbreak();
        v22 = targetDir->v[1];
        v23 = targetDir->v[0];
        v24 = targetDir->v[2];
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v22 * Components->missile.nonGrenade.launchDir.v[1]) + (float)(targetDir->v[0] * Components->missile.nonGrenade.launchDir.v[0])) + (float)(v24 * Components->missile.nonGrenade.launchDir.v[2])) & _xmm) >= 0.99900001 )
        {
          v25 = currentDir->v[0];
          cross.v[1] = currentDir->v[1];
          v26 = currentDir->v[2];
          cross.v[2] = v25;
          cross.v[0] = v26;
          v27 = (float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24);
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v27 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1651, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( targetDir ) )", "(%g, %g, %g) len %g", v23, v22, v24, fsqrt(v27)) )
            __debugbreak();
        }
        else
        {
          Vec3Cross(&Components->missile.nonGrenade.launchDir, targetDir, &cross);
        }
      }
      else
      {
        Vec3Cross(currentDir, targetDir, &cross);
      }
      v28 = LODWORD(cross.v[1]);
      *(float *)&v28 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(cross.v[0] * cross.v[0])) + (float)(cross.v[2] * cross.v[2]));
      _XMM3 = v28;
      __asm
      {
        vcmpless xmm1, xmm3, cs:__real@80000000
        vblendvps xmm2, xmm3, xmm7, xmm1
      }
      cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM2);
      cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM2);
      cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM2);
      v32 = I_fclamp(v19, -1.0, 1.0);
      v33 = acosf_0(*(float *)&v32);
      v34 = BgMissile::JavelinMaxDPS(this, entityData);
      v35 = (float)(*(float *)&v34 * 0.017453292) * (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)timeDeltaMsec).m128_f32[0] * 0.001);
      if ( COERCE_FLOAT(LODWORD(v33) & _xmm) <= 0.000001 )
      {
        v36 = 0.0;
      }
      else
      {
        I_fclamp(v35 / v33, 0.0, 1.0);
        v36 = v35 / v33;
      }
      AngleRadAxisToQuat(v33, &cross, &quat);
      QuatSlerp(&quat_identity, &quat, v36, &quat);
      QuatTransform(&quat, currentDir, resultDir);
      if ( BgMissile::IsDebugDrawEnabled(this) )
      {
        EntityState = BgEntityData::GetEntityState(entityData);
        if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1672, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
        v42 = (float)(100.0 * currentDir->v[0]) + trBase.v[0];
        v43 = (float)(100.0 * currentDir->v[1]) + trBase.v[1];
        v44 = (float)(100.0 * currentDir->v[2]) + trBase.v[2];
        this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)&v42, &colorBlue, 0, 200);
        v42 = (float)(100.0 * targetDir->v[0]) + trBase.v[0];
        v43 = (float)(100.0 * targetDir->v[1]) + trBase.v[1];
        v44 = (float)(100.0 * targetDir->v[2]) + trBase.v[2];
        this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)&v42, &colorLtGrey, 0, 200);
        v42 = (float)(100.0 * resultDir->v[0]) + trBase.v[0];
        v43 = (float)(100.0 * resultDir->v[1]) + trBase.v[1];
        v44 = (float)(100.0 * resultDir->v[2]) + trBase.v[2];
        this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)&v42, &colorGreen, 0, 200);
        memset(&trBase, 0, sizeof(trBase));
      }
      *(float *)&v10 = v33 * 57.295776;
    }
    else
    {
      *resultDir = *targetDir;
      LODWORD(v10) = 0;
    }
  }
  else
  {
    v10 = BgMissile::JavelinRotateDir_Legacy(this, entityData, timeDeltaMsec, currentDir, targetDir, resultDir);
  }
  return *(float *)&v10;
}

/*
==============
BgMissile::JavelinRotateDir_Legacy
==============
*/
float BgMissile::JavelinRotateDir_Legacy(BgMissile *this, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentDir, const vec3_t *targetDir, vec3_t *resultDir)
{
  entityState_t *EntityState; 
  double v11; 
  float v12; 
  float v13; 
  float v14; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t trBase; 
  __int64 v20; 
  vec3_t angles; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  v20 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1530, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1534, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v11 = BgMissile::JavelinMaxDPS(this, entityData);
  v12 = targetDir->v[0];
  v14 = 90.0 - (float)((float)((float)((float)(currentDir->v[1] * targetDir->v[1]) + (float)(targetDir->v[0] * currentDir->v[0])) + (float)(currentDir->v[2] * targetDir->v[2])) * 90.0);
  v13 = v14;
  if ( v14 <= 0.1 )
  {
    resultDir->v[0] = v12;
    *(_QWORD *)&resultDir->y = *(_QWORD *)&targetDir->y;
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "dot:%.2f ", v14);
    return 0.0;
  }
  v17 = (float)(1000.0 / (float)timeDeltaMsec) * v14;
  v16 = v17;
  if ( v17 >= *(float *)&v11 )
  {
    v18 = *(float *)&v11 / v17;
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "dot:%.2f frac:%.2f =%.0f/%.0f ", v13, v18, *(float *)&v11, v16);
    vectoangles(currentDir, &angles);
    AnglesToAxis(&angles, &axis);
    AxisToQuat(&axis, &out);
    vectoangles(targetDir, &angles);
    AnglesToAxis(&angles, &axis);
    AxisToQuat(&axis, &to);
    QuatSlerp(&out, &to, v18, &result);
    UnitQuatToForward(&result, resultDir);
    if ( BgMissile::IsDebugDrawEnabled(this) )
    {
      Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
      angles.v[0] = (float)(100.0 * currentDir->v[0]) + trBase.v[0];
      angles.v[1] = (float)(100.0 * currentDir->v[1]) + trBase.v[1];
      angles.v[2] = (float)(100.0 * currentDir->v[2]) + trBase.v[2];
      this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorBlue, 0, 200);
      angles.v[0] = (float)(100.0 * targetDir->v[0]) + trBase.v[0];
      angles.v[1] = (float)(100.0 * targetDir->v[1]) + trBase.v[1];
      angles.v[2] = (float)(100.0 * targetDir->v[2]) + trBase.v[2];
      this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorLtGrey, 0, 200);
      angles.v[0] = (float)(100.0 * resultDir->v[0]) + trBase.v[0];
      angles.v[1] = (float)(100.0 * resultDir->v[1]) + trBase.v[1];
      angles.v[2] = (float)(100.0 * resultDir->v[2]) + trBase.v[2];
      this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorGreen, 0, 200);
      memset(&trBase, 0, sizeof(trBase));
    }
    return v13;
  }
  else
  {
    resultDir->v[0] = v12;
    *(_QWORD *)&resultDir->y = *(_QWORD *)&targetDir->y;
    if ( !this->IsDebugTextEnabled(this) )
      return 0.0;
    this->DebugText(this, "dot:%.2f (%.0f > %.0f) ", v13, *(float *)&v11, v17);
    return 0.0;
  }
}

/*
==============
BgMissile::JavelinRotateVelocity
==============
*/
void BgMissile::JavelinRotateVelocity(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentVel, const vec3_t *targetDir, vec3_t *resultVel)
{
  BgEntityComponents *Components; 
  float v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  float v19; 
  MissileStage stage; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  double Float_Internal_DebugName; 
  const dvar_t *v27; 
  float v28; 
  const dvar_t *v29; 
  float v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  float value; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  float v37; 
  vec3_t currentDir; 
  vec3_t resultDir; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1477, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1480, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1482, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  v12 = currentVel->v[1];
  v13 = LODWORD(currentVel->v[0]);
  v14 = currentVel->v[2];
  v15 = v13;
  *(float *)&v15 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v12 * v12)) + (float)(v14 * v14));
  _XMM6 = v15;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm8, xmm0
  }
  currentDir.v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  currentDir.v[2] = v14 * (float)(1.0 / *(float *)&_XMM0);
  currentDir.v[1] = v12 * (float)(1.0 / *(float *)&_XMM0);
  *(double *)&_XMM0 = BgMissile::JavelinRotateDir(this, entityData, timeDeltaMsec, &currentDir, targetDir, &resultDir);
  v19 = *(float *)&_XMM0;
  if ( *(float *)&_XMM0 < 30.0 )
  {
    stage = Components->missile.nonGrenade.stage;
    v21 = (float)timeDeltaMsec * 0.001;
    if ( stage == MISSILESTAGE_ASCENT || currentVel->v[2] > 0.0 )
    {
      v27 = DCONST_DVARFLT_bg_missileJavAccelClimb;
      if ( !DCONST_DVARFLT_bg_missileJavAccelClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelClimb") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      v28 = v21 * v27->current.value;
      v29 = DCONST_DVARFLT_bg_missileJavSpeedLimitClimb;
      v30 = v28 + *(float *)&_XMM6;
      *(float *)&_XMM6 = v30;
      if ( !DCONST_DVARFLT_bg_missileJavSpeedLimitClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitClimb") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v30 > v29->current.value )
      {
        v31 = DCONST_DVARFLT_bg_missileJavSpeedLimitClimb;
        if ( !DCONST_DVARFLT_bg_missileJavSpeedLimitClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitClimb") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        LODWORD(_XMM6) = v31->current.integer;
      }
    }
    else
    {
      if ( stage != MISSILESTAGE_DESCENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1499, ASSERT_TYPE_ASSERT, "(components->missile.nonGrenade.stage == MISSILESTAGE_DESCENT)", (const char *)&queryFormat, "components->missile.nonGrenade.stage == MISSILESTAGE_DESCENT") )
        __debugbreak();
      v22 = DCONST_DVARFLT_bg_missileJavAccelDescend;
      if ( !DCONST_DVARFLT_bg_missileJavAccelDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelDescend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      v23 = v21 * v22->current.value;
      v24 = DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend;
      v25 = v23 + *(float *)&_XMM6;
      *(float *)&_XMM6 = v25;
      if ( !DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitDescend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( v25 > v24->current.value )
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend, "bg_missileJavSpeedLimitDescend");
        LODWORD(_XMM6) = LODWORD(Float_Internal_DebugName);
      }
    }
  }
  v32 = DCONST_DVARFLT_bg_missileJavTurnDecelDescend;
  if ( !DCONST_DVARFLT_bg_missileJavTurnDecelDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavTurnDecelDescend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  value = v32->current.value;
  if ( UseJavelinSteeringRewrite() && Components->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
  {
    v34 = DCONST_DVARFLT_bg_missileJavTurnDecelAscend;
    if ( !DCONST_DVARFLT_bg_missileJavTurnDecelAscend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavTurnDecelAscend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    value = v34->current.value;
  }
  v35 = *(float *)&_XMM6 * (float)(1.0 - (float)((float)(v19 * 0.0055555557) * value));
  v36 = v35 * resultDir.v[1];
  v37 = v35 * resultDir.v[2];
  resultVel->v[0] = v35 * resultDir.v[0];
  resultVel->v[1] = v36;
  resultVel->v[2] = v37;
}

/*
==============
BgMissile::JavelinSteering
==============
*/
void BgMissile::JavelinSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon, const int simulationTime, const int timeDeltaMsec)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  const vec3_t *Origin; 
  const dvar_t *v13; 
  float v16; 
  __int128 v17; 
  float v18; 
  __int128 v19; 
  float v23; 
  double v24; 
  float v25; 
  float v26; 
  double v27; 
  double v28; 
  const char *v29; 
  vec3_t trBase; 
  __int64 v31; 
  vec3_t targetPos; 
  vec3_t targetDir; 

  v31 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1219, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1222, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1225, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1227, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  if ( Components->missile.nonGrenade.stage == MISSILESTAGE_SOFTLAUNCH )
  {
    if ( simulationTime - EntityState->lerp.u.anonymous.data[2] < BG_ProjIgnitionDelay(weapon, 0) )
    {
      if ( this->IsDebugTextEnabled(this) )
        this->DebugText(this, "Javelin: softlaunch\n");
      return;
    }
    Components->missile.nonGrenade.stage = MISSILESTAGE_ASCENT;
    EntityState->lerp.pos.trType = TR_INTERPOLATE;
    Origin = BgEntityData::GetOrigin(entityData);
    Trajectory_SetTrBase(&EntityState->lerp.pos, Origin);
    if ( UseJavelinSteeringRewrite() )
    {
      v13 = DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel;
      if ( !DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelMinInitialUpVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      _XMM0 = v13->current.unsignedInt;
      __asm { vmaxss  xmm0, xmm0, dword ptr [r15+30h] }
      EntityState->lerp.pos.trDelta.v[2] = *(float *)&_XMM0;
    }
  }
  v16 = Components->mover.angle.pos3.v[0];
  targetPos.v[0] = v16;
  v17 = (unsigned int)Components->item[1].clipAmmoCount[1];
  LODWORD(targetPos.v[1]) = Components->item[1].clipAmmoCount[1];
  v18 = Components->mover.angle.pos3.v[2];
  targetPos.v[2] = v18;
  if ( Components->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
  {
    if ( BgMissile::JavelinClimbEnd(this, entityData, &targetPos) )
      Components->missile.nonGrenade.stage = MISSILESTAGE_DESCENT;
    else
      BgMissile::JavelinClimbOffset(this, entityData, &targetPos);
    v16 = targetPos.v[0];
    v17 = LODWORD(targetPos.v[1]);
    v18 = targetPos.v[2];
  }
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  v19 = v17;
  *(float *)&v19 = fsqrt((float)((float)((float)(*(float *)&v17 - trBase.v[1]) * (float)(*(float *)&v17 - trBase.v[1])) + (float)((float)(v16 - trBase.v[0]) * (float)(v16 - trBase.v[0]))) + (float)((float)(v18 - trBase.v[2]) * (float)(v18 - trBase.v[2])));
  _XMM3 = v19;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm2, xmm0
  }
  targetDir.v[0] = (float)(v16 - trBase.v[0]) * (float)(1.0 / *(float *)&_XMM1);
  targetDir.v[1] = (float)(*(float *)&v17 - trBase.v[1]) * (float)(1.0 / *(float *)&_XMM1);
  targetDir.v[2] = (float)(v18 - trBase.v[2]) * (float)(1.0 / *(float *)&_XMM1);
  BgMissile::JavelinRotateVelocity(this, weaponMap, entityData, timeDeltaMsec, &EntityState->lerp.pos.trDelta, &targetDir, &EntityState->lerp.pos.trDelta);
  if ( this->IsDebugTextEnabled(this) )
  {
    v23 = trBase.v[2] - v18;
    v24 = BgMissile::JavelinClimbCeiling(this, entityData);
    v25 = *(float *)&v24;
    v26 = (float)((float)(*(float *)&v17 - trBase.v[1]) * (float)(*(float *)&v17 - trBase.v[1])) + (float)((float)(v16 - trBase.v[0]) * (float)(v16 - trBase.v[0]));
    v27 = fsqrt((float)((float)(v18 - trBase.v[2]) * (float)(v18 - trBase.v[2])) + v26);
    v28 = fsqrt(v26);
    v29 = "D";
    if ( Components->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
      v29 = "A";
    this->DebugText(this, "Jav:%s h:%.0f/%.0f dist 2d:%.0f 3d:%.0f\n", v29, v23, v25, v28, v27);
  }
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgMissile::MissileDestabilize
==============
*/
void BgMissile::MissileDestabilize(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime, const int timeDeltaMsec)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  BgMissile *v10; 
  BgEntityData *v12; 
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  float v16; 
  Weapon *WeaponForEntity; 
  _BOOL8 v18; 
  bool IsEmptyPredictionKey; 
  bool v20; 
  double v21; 
  float v22; 
  BgMissile *v23; 
  float *v24; 
  int v25; 
  bool v26; 
  unsigned int *p_m_holdRand; 
  double v28; 
  float v29; 
  float v30; 
  unsigned int *p_pHoldrand; 
  double v32; 
  Weapon *v33; 
  double v34; 
  BgMissile_vtbl *v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  const vec3_t *Origin; 
  BOOL fmt; 
  __int64 v42; 
  __int64 v43; 
  bool inAltWeaponMode; 
  unsigned int pHoldrand; 
  int projectileSpeed; 
  BgMissile *v48; 
  BgEntityData *v49; 
  int projectileSpeedUp; 
  Weapon *r_weapon; 
  float v52; 
  float v53; 
  float v54; 
  vec3_t angles; 
  vec3_t forward; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 

  v48 = this;
  v10 = this;
  v49 = entityData;
  v12 = entityData;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "MissileDestabilize");
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2099, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2100, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(v12);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2103, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(v12);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2106, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(v10, weaponMap, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2108, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2109, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(v12);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2113, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  if ( (Flags->m_flags[0] & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2115, ASSERT_TYPE_ASSERT, "(!entFlags->TestFlag( BgEntityFlagsCommon::STABLE_MISSILES ))", (const char *)&queryFormat, "!entFlags->TestFlag( BgEntityFlagsCommon::STABLE_MISSILES )") )
    __debugbreak();
  v16 = (float)timeDeltaMsec * 0.001;
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, EntityState);
  r_weapon = WeaponForEntity;
  inAltWeaponMode = EntityState->inAltWeaponMode;
  BG_GetProjectileSpeed(WeaponForEntity, inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  if ( EntityState->lerp.pos.trTime + (int)Components->mover.pos.speed >= simulationTime )
  {
    if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 1) == 0 )
      goto LABEL_60;
    goto LABEL_54;
  }
  v59 = v6;
  v58 = v7;
  IsEmptyPredictionKey = BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&EntityState->lerp.u);
  v20 = !IsEmptyPredictionKey;
  if ( !IsEmptyPredictionKey )
  {
    pHoldrand = 47843 * Components->missile.nonGrenade.destabilizationIndex + BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&EntityState->lerp.u);
    BG_srand(&pHoldrand);
  }
  v21 = BG_DestabilizationCurvatureMax(WeaponForEntity, inAltWeaponMode);
  v22 = *(float *)&v21;
  if ( (*(float *)&v21 >= 1000000000.0 || *(float *)&v21 < 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2203, ASSERT_TYPE_ASSERT, "( ( destabilizationCurvatureMax < 1000000000.0f && destabilizationCurvatureMax >= 0.0f ) )", "( destabilizationCurvatureMax ) = %g", *(float *)&v21) )
    __debugbreak();
  v23 = v48;
  v24 = &v52;
  v25 = 0;
  v60 = v5;
  v26 = (Components->item[0].weapon.attachmentVariationIndices[5] & 1) == 0;
  v57 = v8;
  if ( v26 )
  {
    do
    {
      p_pHoldrand = &pHoldrand;
      if ( !v20 )
        p_pHoldrand = &v23->m_holdRand;
      v32 = BG_flrand(-1.0, 1.0, p_pHoldrand);
      if ( (unsigned int)v25 >= 3 )
      {
        LODWORD(v43) = 3;
        LODWORD(v42) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v43) )
          __debugbreak();
      }
      *v24++ = *(float *)&v32 * v22;
      ++v25;
    }
    while ( v25 < 3 );
    v29 = v52;
    v12 = v49;
    goto LABEL_51;
  }
  do
  {
    p_m_holdRand = &pHoldrand;
    if ( !v20 )
      p_m_holdRand = &v23->m_holdRand;
    v28 = BG_flrand(0.0, 1.0, p_m_holdRand);
    if ( (unsigned int)v25 >= 3 )
    {
      LODWORD(v43) = 3;
      LODWORD(v42) = v25;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v42, v43) )
        __debugbreak();
    }
    *v24++ = *(float *)&v28 * v22;
    ++v25;
  }
  while ( v25 < 3 );
  if ( Components->mover.angle.pos1.v[1] >= 0.0 )
    v29 = v52;
  else
    LODWORD(v29) = LODWORD(v52) ^ _xmm;
  v12 = v49;
  if ( Components->mover.angle.pos1.v[0] <= 0.0 )
  {
LABEL_51:
    v30 = v53;
    goto LABEL_52;
  }
  LODWORD(v30) = LODWORD(v53) ^ _xmm;
LABEL_52:
  v33 = r_weapon;
  Components->mover.angle.pos1.v[2] = v54;
  Components->mover.angle.pos1.v[0] = v29;
  Components->mover.angle.pos1.v[1] = v30;
  EntityState->lerp.pos.trTime = simulationTime;
  v34 = BG_DestabilizationRateTime(v33, inAltWeaponMode);
  Components->missile.flags |= 1u;
  ++Components->missile.nonGrenade.destabilizationIndex;
  v10 = v48;
  Components->mover.pos.speed = *(float *)&v34 * 1000.0;
LABEL_54:
  v35 = v10->__vftable;
  angles.v[0] = (float)(v16 * Components->mover.angle.pos1.v[0]) + EntityState->lerp.apos.trBase.v[0];
  angles.v[1] = (float)(v16 * Components->mover.angle.pos1.v[1]) + EntityState->lerp.apos.trBase.v[1];
  LOBYTE(v18) = 1;
  LOBYTE(fmt) = 1;
  angles.v[2] = (float)(v16 * Components->mover.angle.pos1.v[2]) + EntityState->lerp.apos.trBase.v[2];
  v35->SetEntityAngles(v10, v12, &angles, v18, fmt);
  AngleVectors(&angles, &forward, NULL, NULL);
  v36 = (float)projectileSpeed;
  v37 = (float)projectileSpeed * forward.v[0];
  EntityState->lerp.pos.trDelta.v[0] = v37;
  v38 = v36 * forward.v[1];
  EntityState->lerp.pos.trDelta.v[1] = v36 * forward.v[1];
  v39 = v36 * forward.v[2];
  EntityState->lerp.pos.trDelta.v[2] = v36 * forward.v[2];
  if ( ((LODWORD(v37) & 0x7F800000) == 2139095040 || (LODWORD(v38) & 0x7F800000) == 2139095040 || (LODWORD(v39) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] )") )
    __debugbreak();
  Origin = BgEntityData::GetOrigin(v12);
  Trajectory_SetTrBase(&EntityState->lerp.pos, Origin);
  EntityState->lerp.pos.trType = TR_INTERPOLATE;
  EntityState->lerp.apos.trType = TR_INTERPOLATE;
LABEL_60:
  Sys_ProfEndNamedEvent();
}

/*
==============
BgMissile::MissileImpact
==============
*/
void BgMissile::MissileImpact(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace, vec3_t *dir, vec3_t *endpos)
{
  vec3_t *v13; 
  entityState_t *EntityState; 
  Weapon *WeaponForEntity; 
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int OwnerEntNum; 
  int v18; 
  entityState_t *v19; 
  double ADSDamageRangeScale; 
  bool inAltWeaponMode; 
  BgEntityComponents *v22; 
  int v23; 
  BgEntityComponents *v24; 
  const dvar_t *v25; 
  WeaponDamageCalcType v26; 
  float ImpactDamageAndModForProjectile; 
  float v28; 
  float value; 
  float v30; 
  float v31; 
  double v32; 
  float v33; 
  void (__fastcall *BroadcastActorProjectileEvents)(BgMissile *, const int, const Weapon *, const bool, const meansOfDeath_t, const vec3_t *, const vec3_t *); 
  meansOfDeath_t v35; 
  bool v36; 
  unsigned int v37; 
  char v38; 
  __int128 v39; 
  __int128 v40; 
  const vec3_t *Origin; 
  Physics_WorldId v45; 
  trace_t *v46; 
  int v47; 
  BounceMissileResult v48; 
  trace_t *v49; 
  unsigned int hitId; 
  entityState_t *v51; 
  int v52; 
  weapClass_t WeaponClass; 
  WeaponDamageCalcType v54; 
  float v55; 
  double Float_Internal_DebugName; 
  int v57; 
  double v58; 
  __int32 v59; 
  __int32 v60; 
  unsigned int v61; 
  int v62; 
  int v63; 
  int v64; 
  entityState_t *v65; 
  Weapon *v66; 
  void (__fastcall *AddEvent)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  unsigned __int8 v68; 
  char v69; 
  int v70; 
  BgMissile_vtbl *v71; 
  int v72; 
  double FireAtMaxDamageMultiplier; 
  void (__fastcall *TriggerDamageCheckHit)(BgMissile *, const int, bool, const vec3_t *, const vec3_t *, int, int); 
  meansOfDeath_t v75; 
  vec3_t *v76; 
  _BOOL8 v77; 
  char v78; 
  const dvar_t *v79; 
  int number; 
  Physics_WorldId v81; 
  int MissileTargetEnt; 
  vec3_t *p_normal; 
  float v84; 
  __int128 v85; 
  float v86; 
  _BOOL8 v87; 
  const vec3_t *v88; 
  bool v89; 
  void (__fastcall *v90)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  __int64 v91; 
  __int64 v92; 
  Weapon *v93; 
  char v94; 
  void (__fastcall *v95)(BgMissile *, BgEntityData *, const trace_t *, unsigned int, unsigned int, int); 
  unsigned __int8 v96; 
  __int64 v97; 
  void (__fastcall *v98)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  unsigned __int8 v99; 
  bool v100; 
  __int128 v101; 
  void (__fastcall *AddImpactEvent)(BgMissile *, BgEntityData *, const trace_t *, unsigned int, unsigned int, int); 
  unsigned __int8 v106; 
  const dvar_t *v107; 
  float v108; 
  float v109; 
  float v110; 
  int ClipMask; 
  int v112; 
  Physics_WorldId v113; 
  float v114; 
  float v115; 
  int ParentEntNum; 
  unsigned int v117; 
  __int128 outerRadius_low; 
  float v119; 
  meansOfDeath_t v120; 
  __int128 v122; 
  int v126; 
  void (__fastcall *KeepPointInPlayableBounds)(BgMissile *, vec3_t *); 
  vec3_t *v128; 
  BOOL fmt; 
  int hitPos; 
  BOOL v131; 
  Physics_QueryPhaseSelection phaseSelection; 
  char v133; 
  bool v134; 
  WeaponDamageCalcType damageCalcType; 
  char v136[4]; 
  float minDamageRange; 
  Weapon *r_weapon; 
  int lastSimulationTimea; 
  trace_t *v140; 
  meansOfDeath_t outMOD; 
  int v142; 
  int v143; 
  int outMinDamage; 
  int outMaxDamage; 
  int v146; 
  weapProjExposion_t v147; 
  WeaponDef *weapDef; 
  BgEntityComponents *Components; 
  BgWeaponMap *weaponMapa; 
  vec3_t *endPos; 
  vec3_t *v152; 
  vec3_t v153; 
  vec3_t trBase; 
  vec3_t normal; 
  entityState_t *v156; 
  vec3_t v157; 
  __int64 v158; 
  vec3_t end; 
  vec3_t start; 
  float v161; 
  float v162; 
  float v163; 
  int v164[4]; 
  vec3_t v165; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  trace_t results; 
  trace_t v168; 

  v158 = -2i64;
  lastSimulationTimea = lastSimulationTime;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v140 = trace;
  v152 = dir;
  v13 = endpos;
  endPos = endpos;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Missile_Impact");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2237, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2240, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2243, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  *(_QWORD *)normal.v = BgEntityData::GetFlags(entityData);
  if ( !*(_QWORD *)normal.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2246, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  *(_QWORD *)end.v = BgEntityData::GetComponentData(entityData);
  if ( !*(_QWORD *)end.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2249, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2251, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, EntityState);
  r_weapon = WeaponForEntity;
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2254, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  GetEntityState = this->GetEntityState;
  OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
  *(_QWORD *)v153.v = GetEntityState(this, OwnerEntNum);
  LOWORD(v18) = Trace_GetEntityHitId(trace);
  v142 = v18;
  v19 = this->GetEntityState(this, (unsigned __int16)v18);
  v156 = v19;
  weapDef = (WeaponDef *)BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2262, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v143 = BG_ProjImpactExplode(WeaponForEntity, EntityState->inAltWeaponMode);
  v147 = BG_ProjExplosionType(WeaponForEntity, EntityState->inAltWeaponMode);
  EntityState->surfType = (trace->surfaceFlags >> 19) & 0x3F;
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  if ( BgMissile::IsGrenade(this, weaponMapa, entityData) || (v133 = 0, BG_GetWeaponType(WeaponForEntity, EntityState->inAltWeaponMode) == WEAPTYPE_GRENADE) )
    v133 = 1;
  ADSDamageRangeScale = BG_GetADSDamageRangeScale(NULL, NULL, WeaponForEntity, EntityState->inAltWeaponMode);
  damageCalcType = this->GetDamageCalcType(this, *(entityState_t **)v153.v, v19);
  outMinDamage = 0;
  outMaxDamage = 0;
  inAltWeaponMode = EntityState->inAltWeaponMode;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2704, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  v22 = BgEntityData::GetComponents(entityData);
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2707, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  v23 = BG_ProjectileActivateDist(WeaponForEntity, inAltWeaponMode);
  if ( v23 > 0 && (float)v23 > v22->mover.pos.pos1.v[0] )
    goto LABEL_54;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2723, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  v24 = BgEntityData::GetComponents(entityData);
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2726, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2728, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v25 = DCONST_DVARBOOL_bg_missileJavDuds;
  if ( !DCONST_DVARBOOL_bg_missileJavDuds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavDuds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled || !BgMissile::JavelinProjectile(this, entityData, weapDef) )
    goto LABEL_55;
  if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2735, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  if ( v24->missile.nonGrenade.stage == MISSILESTAGE_SOFTLAUNCH )
  {
LABEL_54:
    v147 = WEAPPROJEXP_DUD;
    v143 = 0;
    Components->spawner.count = -803929351;
    outMOD = MOD_IMPACT;
    v26 = damageCalcType;
    BG_GetMinMaxDamage(damageCalcType, WeaponForEntity, EntityState->inAltWeaponMode, &outMinDamage, &outMaxDamage);
    ImpactDamageAndModForProjectile = (float)outMinDamage;
    v28 = (float)outMaxDamage;
  }
  else
  {
LABEL_55:
    if ( v143 )
    {
      outMOD = this->GetMeansOfDeath(this, entityData);
      v26 = damageCalcType;
      BG_GetMinMaxDamage(damageCalcType, WeaponForEntity, EntityState->inAltWeaponMode, &outMinDamage, &outMaxDamage);
      ImpactDamageAndModForProjectile = (float)outMinDamage;
      v28 = (float)outMaxDamage;
    }
    else
    {
      v26 = damageCalcType;
      ImpactDamageAndModForProjectile = (float)BG_GetImpactDamageAndModForProjectile(damageCalcType, WeaponForEntity, EntityState->inAltWeaponMode, *(float *)&ADSDamageRangeScale, &trBase, endpos, &outMOD);
      v28 = ImpactDamageAndModForProjectile;
    }
  }
  value = FLOAT_1_0;
  if ( !v133 )
  {
    *(float *)&damageCalcType = 0.0;
    minDamageRange = 0.0;
    BG_GetDamageRange(v26, WeaponForEntity, EntityState->inAltWeaponMode, *(float *)&ADSDamageRangeScale, &minDamageRange, (float *)&damageCalcType);
    v30 = fsqrt((float)((float)((float)(endpos->v[1] - trBase.v[1]) * (float)(endpos->v[1] - trBase.v[1])) + (float)((float)(endpos->v[0] - trBase.v[0]) * (float)(endpos->v[0] - trBase.v[0]))) + (float)((float)(endpos->v[2] - trBase.v[2]) * (float)(endpos->v[2] - trBase.v[2])));
    if ( *(float *)&damageCalcType < minDamageRange )
      v31 = (float)(v30 - *(float *)&damageCalcType) / (float)(minDamageRange - *(float *)&damageCalcType);
    else
      v31 = FLOAT_1_0;
    v32 = I_fclamp(v31, 0.0, 1.0);
    v28 = (float)((float)(1.0 - (float)(1.0 - *(float *)&v32)) * ImpactDamageAndModForProjectile) + (float)((float)(1.0 - *(float *)&v32) * v28);
  }
  v146 = (int)v28;
  LODWORD(v33) = v140->partGroup;
  minDamageRange = v33;
  if ( outMOD == MOD_IMPACT )
  {
    if ( LODWORD(v33) != 19 )
      v33 = 0.0;
    minDamageRange = v33;
  }
  if ( *(_QWORD *)v153.v )
  {
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)v153.v + 16i64), &v153);
    BroadcastActorProjectileEvents = this->BroadcastActorProjectileEvents;
    v35 = outMOD;
    v36 = EntityState->inAltWeaponMode;
    v37 = BgEntityData::GetOwnerEntNum(entityData);
    BroadcastActorProjectileEvents(this, v37, r_weapon, v36, v35, &v153, endpos);
    memset(&v153, 0, sizeof(v153));
  }
  v38 = 1;
  if ( EntityState->lerp.pos.trType == TR_INTERPOLATE )
  {
    v39 = LODWORD(EntityState->lerp.pos.trDelta.v[0]);
    v40 = v39;
    *(float *)&v40 = fsqrt((float)((float)(*(float *)&v39 * *(float *)&v39) + (float)(EntityState->lerp.pos.trDelta.v[1] * EntityState->lerp.pos.trDelta.v[1])) + (float)(EntityState->lerp.pos.trDelta.v[2] * EntityState->lerp.pos.trDelta.v[2]));
    _XMM4 = v40;
    __asm
    {
      vcmpless xmm0, xmm4, xmm10
      vblendvps xmm1, xmm4, xmm9, xmm0
    }
    damageCalcType = _XMM1;
    v161 = *(float *)&v39 * (float)(1.0 / *(float *)&_XMM1);
    v162 = (float)(1.0 / *(float *)&_XMM1) * EntityState->lerp.pos.trDelta.v[1];
    v163 = (float)(1.0 / *(float *)&_XMM1) * EntityState->lerp.pos.trDelta.v[2];
  }
  else
  {
    this->EvaluatePosTrajectoryDelta(this, entityData, simulationTime, (vec3_t *)&v161);
  }
  Origin = BgEntityData::GetOrigin(entityData);
  v45 = this->GetPhysicsMainWorldId(this);
  v134 = PhysicsQuery_LegacyGetPointContents(v45, Origin, -1, 32) != 0;
  LOBYTE(damageCalcType) = 0;
  if ( (**(_DWORD **)normal.v & 0x40000) == 0 || !weapDef->enableMissileRicochet && v143 )
    goto LABEL_127;
  if ( BgMissile::CheckCrumpleMissile(this, weaponMapa, weapDef, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, originAtSimStart, v140) )
  {
    v13 = endPos;
LABEL_127:
    v66 = r_weapon;
    goto LABEL_128;
  }
  v46 = v140;
  if ( !v140->surfaceFlags && this->ShouldImpactBounceCopySurfaceFlags(this, (unsigned __int16)v142) )
  {
    if ( LODWORD(minDamageRange) == 19 )
    {
      v46->surfaceFlags = 15204352;
    }
    else
    {
      v47 = (int)v156;
      if ( v156 )
        v47 = v156->surfType << 19;
      v46->surfaceFlags = v47;
    }
  }
  v48 = BgMissile::BounceMissile(this, weaponMapa, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, originAtSimStart, v46, endPos);
  if ( v48 == BOUNCE_RESULT_BOUNCE )
  {
    v49 = v140;
    if ( v140->hitType != TRACE_HITTYPE_ENTITY )
    {
      BgMissile::SetMissileLastHitCharacter(this, entityData, 2048);
      goto LABEL_99;
    }
    hitId = v140->hitId;
    v51 = this->GetEntityState(this, hitId);
    if ( this->IsEntityClientOrActorOrAgent(this, hitId) || v51 && v51->eType == ET_SCRIPTMOVER && v51->un.scriptMoverType == (_WORD)v48 )
    {
      v52 = hitId;
LABEL_97:
      BgMissile::SetMissileLastHitCharacter(this, entityData, v52);
      goto LABEL_98;
    }
LABEL_96:
    v52 = 2048;
    goto LABEL_97;
  }
  if ( v48 )
  {
    if ( v48 == BOUNCE_RESULT_STICK )
    {
      WeaponClass = BG_GetWeaponClass(r_weapon, EntityState->inAltWeaponMode);
      v54 = (unsigned __int8)damageCalcType;
      if ( WeaponClass == WEAPCLASS_THROWINGKNIFE )
        v54 = WEAP_DMG_CALC_TYPE_PLAYER_TO_AI;
      damageCalcType = v54;
    }
    goto LABEL_96;
  }
LABEL_98:
  v49 = v140;
LABEL_99:
  if ( !v134 && v48 && !v49->startsolid )
  {
    LODWORD(v55) = COERCE_UNSIGNED_INT((float)((float)(v162 * v49->normal.v[1]) + (float)(v161 * v49->normal.v[0])) + (float)(v163 * v49->normal.v[2])) & _xmm;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_bounceIntensityHeavy, "bg_bounceIntensityHeavy");
    if ( v55 <= *(float *)&Float_Internal_DebugName )
    {
      v58 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_bounceIntensityMedium, "bg_bounceIntensityMedium");
      v57 = v55 > *(float *)&v58;
    }
    else
    {
      v57 = 2;
    }
    v59 = v48 - 1;
    if ( v59 )
    {
      v60 = v59 - 2;
      if ( v60 )
      {
        if ( v60 == 1 )
          v61 = 106;
        else
          v61 = 105;
      }
      else
      {
        v61 = 104;
      }
    }
    else
    {
      v61 = 103;
    }
    normal = v49->normal;
    v62 = DirToByte(&normal);
    v63 = v57 << 8;
    if ( v61 != 103 )
      v63 = 0;
    v64 = v63 | v62;
    if ( v61 - 103 <= 2 )
    {
      if ( v49->partGroup == 19 )
      {
        v65 = BgEntityData::GetEntityState(entityData);
        if ( !v65 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2451, ASSERT_TYPE_ASSERT, "(entityDataEntityState)", (const char *)&queryFormat, "entityDataEntityState") )
          __debugbreak();
        v65->surfType = 29;
      }
      this->AddImpactEvent(this, entityData, v49, v61, v64, 1);
    }
    else
    {
      this->AddEvent(this, entityData, v61, v64);
    }
  }
  v66 = r_weapon;
  if ( BG_ProjectileActivateDist(r_weapon, EntityState->inAltWeaponMode) > 0 && EntityState->lerp.pos.trType == TR_STATIONARY )
  {
    AddEvent = this->AddEvent;
    v68 = DirToByte(&v49->normal);
    AddEvent(this, entityData, 117u, v68);
    this->FreeEntityAfterEvent(this, entityData);
  }
  v38 = 0;
  v13 = endPos;
LABEL_128:
  v69 = (char)v156;
  if ( v156 )
    v69 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v156->lerp.eFlags, ACTIVE, 0x10u);
  v136[0] = 0;
  if ( v69 )
  {
    v70 = (unsigned __int16)v142;
    EntityState->lerp.u.anonymous.data[5] = (unsigned __int16)v142;
    LOBYTE(v131) = v38;
    this->DirectImpactDamage(this, entityData, v70, SLODWORD(minDamageRange), outMOD, (vec3_t *)&v161, v146, weapDef, v131, v143, v140, v152, (bool *)v136);
  }
  if ( !this->GetEntityState(this, (unsigned __int16)v142) )
    v142 = 2047;
  v71 = this->__vftable;
  LODWORD(minDamageRange) = (unsigned __int16)v142;
  v71->OnImpact(this, entityData, (unsigned __int16)v142);
  if ( !v38 )
  {
    if ( (_BYTE)damageCalcType )
      Components->missile.flags |= 0x4000u;
    Sys_ProfEndNamedEvent();
    goto LABEL_219;
  }
  lastSimulationTimea = BgEntityData::GetOwnerEntNum(entityData);
  v72 = v146;
  if ( v146 )
  {
    if ( BG_IsChargeShotWeapon(v66, EntityState->inAltWeaponMode) && (Components->missile.flags & 0x1000) != 0 )
    {
      FireAtMaxDamageMultiplier = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(v66, EntityState->inAltWeaponMode);
      v146 = (int)(float)(*(float *)&FireAtMaxDamageMultiplier * (float)v72);
    }
    TriggerDamageCheckHit = this->TriggerDamageCheckHit;
    v75 = outMOD;
    v76 = BgEntityData::GetOrigin(entityData);
    LOBYTE(v77) = 1;
    TriggerDamageCheckHit(this, lastSimulationTimea, v77, v76, v13, v146, v75);
  }
  v78 = 1;
  if ( v134 )
  {
    start = *v13;
    v79 = DCONST_DVARFLT_bg_missileWaterMaxDepth;
    if ( !DCONST_DVARFLT_bg_missileWaterMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileWaterMaxDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v79);
    start.v[2] = start.v[2] + v79->current.value;
    number = EntityState->number;
    v81 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyTrace(v81, &results, &start, v13, &bounds_origin, number, 1, 32, 0, NULL, All);
    if ( results.startsolid || results.fraction >= 1.0 )
    {
      v78 = 0;
    }
    else
    {
      v165 = results.normal;
      *(float *)v164 = (float)((float)(v13->v[0] - start.v[0]) * results.fraction) + start.v[0];
      *(float *)&v164[1] = (float)((float)(v13->v[1] - start.v[1]) * results.fraction) + start.v[1];
      *(float *)&v164[2] = (float)((float)(v13->v[2] - start.v[2]) * results.fraction) + start.v[2];
    }
  }
  MissileTargetEnt = BgEntityMissileComponentData::GetMissileTargetEnt(*(BgEntityMissileComponentData **)end.v);
  if ( v134 && v78 )
  {
    p_normal = &v165;
  }
  else if ( EntityState->eType == ET_MISSILE && weapDef->guidedMissileType == MISSILE_GUIDANCE_JAVELIN && !EntityState->lerp.u.anonymous.data[3] && (Components->item[0].weapon.attachmentVariationIndices[5] & 2) != 0 && MissileTargetEnt != 2047 && MissileTargetEnt == LODWORD(minDamageRange) )
  {
    p_normal = &MY_STRAIGHTUPNORMAL;
  }
  else if ( BG_ProjExplosionEffectForceNormalUp(v66, EntityState->inAltWeaponMode) )
  {
    p_normal = &MY_STRAIGHTUPNORMAL;
  }
  else if ( BG_ProjExplosionEffectInheritParentDirection(v66, EntityState->inAltWeaponMode) )
  {
    p_normal = v152;
  }
  else
  {
    p_normal = &v140->normal;
  }
  BG_GetExplosionDamageRangeInfo(r_weapon, EntityState->inAltWeaponMode, &outDamageRangeInfo);
  v84 = EntityState->lerp.pos.trDelta.v[0];
  v85 = LODWORD(EntityState->lerp.pos.trDelta.v[1]);
  v86 = EntityState->lerp.pos.trDelta.v[2];
  if ( v134 && v78 )
  {
    this->AddMissileTrajectoryEvent(this, entityData, (const vec3_t *)v164, 2046u, (const scr_string_t)0);
    v88 = (const vec3_t *)v164;
  }
  else
  {
    this->AddMissileTrajectoryEvent(this, entityData, v13, v142, v140->partName);
    v88 = v13;
  }
  LOBYTE(fmt) = 1;
  LOBYTE(v87) = 1;
  this->SetEntityOrigin(this, entityData, v88, v87, fmt);
  v89 = v134;
  if ( v134 && !v78 )
  {
    v90 = this->AddEvent;
    v91 = DirToByte(p_normal);
    v92 = 118i64;
    goto LABEL_173;
  }
  switch ( v147 )
  {
    case WEAPPROJEXP_GRENADE:
    case WEAPPROJEXP_HEAVY:
      AddImpactEvent = this->AddImpactEvent;
      v106 = DirToByte(p_normal);
      AddImpactEvent(this, entityData, v140, 109u, v106, 0);
      goto LABEL_183;
    case WEAPPROJEXP_ROCKET:
      v95 = this->AddImpactEvent;
      v96 = DirToByte(p_normal);
      v95(this, entityData, v140, 113u, v96, 1);
LABEL_183:
      LOBYTE(hitPos) = EntityState->inAltWeaponMode;
      v93 = r_weapon;
      ((void (__fastcall *)(BgMissile *, vec3_t *, __int64, _QWORD, Weapon *, int))this->NotifyRadiusDamage)(this, v13, v97, (unsigned int)lastSimulationTimea, r_weapon, hitPos);
      v89 = v134;
      goto LABEL_175;
    case WEAPPROJEXP_NONE:
      v98 = this->AddEvent;
      v99 = DirToByte(p_normal);
      v98(this, entityData, 116u, v99);
      goto LABEL_183;
    case WEAPPROJEXP_FLASHBANG:
      v90 = this->AddEvent;
      v91 = DirToByte(p_normal);
      v92 = 115i64;
      break;
    case WEAPPROJEXP_DUD:
      v100 = BgMissile::JavelinProjectile(this, entityData, weapDef);
      v90 = this->AddEvent;
      if ( v100 )
      {
        v101 = v85;
        *(float *)&v101 = fsqrt((float)((float)(*(float *)&v85 * *(float *)&v85) + (float)(v84 * v84)) + (float)(v86 * v86));
        _XMM3 = v101;
        __asm
        {
          vcmpless xmm0, xmm3, xmm10
          vblendvps xmm1, xmm3, xmm9, xmm0
        }
        LODWORD(end.v[0]) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * v84) ^ _xmm;
        LODWORD(end.v[1]) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * *(float *)&v85) ^ _xmm;
        LODWORD(end.v[2]) = COERCE_UNSIGNED_INT((float)(1.0 / *(float *)&_XMM1) * v86) ^ _xmm;
        v91 = DirToByte(&end);
      }
      else
      {
        v91 = DirToByte(p_normal);
      }
      v92 = 119i64;
      break;
    default:
      goto LABEL_174;
  }
LABEL_173:
  v90(this, entityData, v92, v91);
  v89 = v134;
LABEL_174:
  v93 = r_weapon;
LABEL_175:
  if ( v89 )
    v94 = 21;
  else
    v94 = (v140->surfaceFlags >> 19) & 0x3F;
  EntityState->surfType = v94;
  this->DeathNotify(this, entityData);
  this->FreeEntityAfterEvent(this, entityData);
  if ( this->m_changeEntityTypeOnImpact )
    EntityState->eType = ET_FIRST;
  if ( BG_GetWeaponType(v93, EntityState->inAltWeaponMode) == WEAPTYPE_GRENADE && BG_ActorOrAgentSystemEnabled() )
    this->DissociateGrenadeFromAI(this, entityData);
  EntityState->lerp.eFlags.m_flags[0] ^= 4u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&EntityState->lerp.eFlags, ACTIVE, 0xCu);
  if ( v143 )
  {
    if ( weapDef->bigExplosion )
    {
      v107 = DCONST_DVARFLT_bg_missileExplosionLiftDistance;
      if ( !DCONST_DVARFLT_bg_missileExplosionLiftDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileExplosionLiftDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v107);
      value = v107->current.value;
    }
    v108 = v140->normal.v[1];
    if ( v108 <= 0.5 )
    {
      end.v[0] = (float)((float)(value * 2.0) * v140->normal.v[0]) + v13->v[0];
      end.v[1] = (float)((float)(value * 2.0) * v108) + v13->v[1];
      v109 = (float)((float)(value * 2.0) * v140->normal.v[2]) + v13->v[2];
    }
    else
    {
      v109 = (float)(value * 2.0) + v13->v[2];
      v110 = v13->v[1];
      end.v[0] = v13->v[0];
      end.v[1] = v110;
    }
    end.v[2] = v109;
    ClipMask = BgEntityData::GetClipMask(entityData);
    v112 = EntityState->number;
    v113 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyTrace(v113, &v168, v13, &end, &bounds_origin, v112, 1, ClipMask, 0, NULL, All);
    v114 = 0.5 * v168.fraction;
    v13->v[0] = (float)((float)(end.v[0] - v13->v[0]) * (float)(0.5 * v168.fraction)) + v13->v[0];
    v13->v[1] = (float)((float)(end.v[1] - v13->v[1]) * v114) + v13->v[1];
    v13->v[2] = (float)((float)(end.v[2] - v13->v[2]) * v114) + v13->v[2];
    v115 = minDamageRange;
    this->ExplodeNotify(this, entityData, LODWORD(minDamageRange), (const vec3_t *)&v161, v13, p_normal);
    v93 = r_weapon;
  }
  else
  {
    v115 = minDamageRange;
  }
  ParentEntNum = BgEntityData::GetParentEntNum(entityData);
  v117 = ParentEntNum;
  if ( v143 && ParentEntNum != 2047 )
  {
    outerRadius_low = LODWORD(outDamageRangeInfo.outerRadius);
    if ( outDamageRangeInfo.outerRadius > 0.0 )
    {
      *(double *)&outerRadius_low = BG_DamageConeAngle(v93, EntityState->inAltWeaponMode);
      v119 = *(float *)&outerRadius_low;
      v120 = this->GetSplashMethodOfDeath(this, entityData);
      v122 = outerRadius_low;
      *(float *)&v122 = *(float *)&outerRadius_low * 0.017453292;
      _XMM0 = v122;
      *(float *)&_XMM0 = cosf_0(v119 * 0.017453292);
      _XMM1 = LODWORD(FLOAT_180_0);
      __asm
      {
        vcmpless xmm3, xmm1, xmm6
        vblendvps xmm4, xmm0, xmm2, xmm3
      }
      v126 = LODWORD(v115);
      if ( v136[0] )
        v126 = 2047;
      LOBYTE(phaseSelection) = EntityState->inAltWeaponMode;
      ((void (__fastcall *)(BgMissile *, vec3_t *, _QWORD, _QWORD, BgExplosionDamageRangeInfo *, _DWORD, vec3_t *, int, meansOfDeath_t, Weapon *, Physics_QueryPhaseSelection))this->RadiusDamage)(this, v13, (unsigned int)EntityState->number, v117, &outDamageRangeInfo, _XMM4, v152, v126, v120, r_weapon, phaseSelection);
      *(float *)&outerRadius_low = outDamageRangeInfo.outerRadius;
    }
    this->ProjectileImpactSplashNotify(this, v117, r_weapon, v13, (int)*(float *)&outerRadius_low, LODWORD(minDamageRange));
  }
  KeepPointInPlayableBounds = this->KeepPointInPlayableBounds;
  v128 = BgEntityData::GetOrigin(entityData);
  KeepPointInPlayableBounds(this, v128);
  Trajectory_GetTrBase(&EntityState->lerp.pos, &v157);
  this->KeepPointInPlayableBounds(this, &v157);
  Trajectory_SetTrBase(&EntityState->lerp.pos, &v157);
  this->LinkEntity(this, EntityState->number);
  if ( (_BYTE)damageCalcType )
    Components->missile.flags |= 0x4000u;
  Sys_ProfEndNamedEvent();
  memset(&v157, 0, sizeof(v157));
LABEL_219:
  memset(&trBase, 0, sizeof(trBase));
}

/*
==============
BgMissile::MissileIsReadyForSteering
==============
*/
bool BgMissile::MissileIsReadyForSteering(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const int simulationTime)
{
  const entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 866, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 869, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  return (float)(BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode)->timeToAccelerate - (float)((float)(simulationTime - EntityState->lerp.pos.trTime) * 0.001)) <= 0.0;
}

/*
==============
BgMissile::MissileLandAngles
==============
*/
void BgMissile::MissileLandAngles(BgMissile *this, BgEntityData *entityData, trace_t *trace, vec3_t *vAngles, int bForceAlign, int rotateDir, const int lastSimulationTime, const int simulationTime)
{
  entityState_t *EntityState; 
  int v13; 
  double v14; 
  float v15; 
  float v18; 
  float v19; 
  double v20; 
  float *v21; 
  float v22; 
  float v23; 
  float v24; 
  float v26; 
  float *v27; 
  float v28; 
  double v29; 
  char v30; 
  float v31; 
  __int64 v32; 
  __int64 v33; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3501, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3504, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v13 = lastSimulationTime + (int)(float)((float)(simulationTime - lastSimulationTime) * trace->fraction);
  this->EvaluateAngTrajectory(this, entityData, v13, vAngles);
  if ( trace->normal.v[2] <= 0.1 )
  {
    if ( !bForceAlign && EntityState->lerp.apos.trType != TR_SLERP )
    {
      v30 = BG_rand(&this->m_holdRand);
      v31 = (float)((v30 & 0x7F) - 63) + *vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir);
      AngleNormalize360(v31);
      *vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir) = v31;
    }
  }
  else
  {
    v14 = PitchForYawOnNormal(vAngles->v[1], &trace->normal);
    v15 = *(float *)&v14;
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v32) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, 3) )
        __debugbreak();
    }
    _XMM13 = 0i64;
    __asm { vroundss xmm2, xmm13, xmm1, 1 }
    v18 = (float)((float)((float)(*(float *)&v14 - vAngles->v[rotateDir]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    LODWORD(v19) = LODWORD(v18) & _xmm;
    if ( !bForceAlign && EntityState->lerp.apos.trType != TR_SLERP )
    {
      EntityState->lerp.apos.trBase.v[0] = vAngles->v[0];
      EntityState->lerp.apos.trBase.v[1] = vAngles->v[1];
      EntityState->lerp.apos.trBase.v[2] = vAngles->v[2];
      EntityState->lerp.apos.trTime = v13;
      v20 = BG_random(&this->m_holdRand);
      v21 = vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir);
      v22 = *(float *)&v20 * 0.30000001;
      v23 = *v21;
      if ( v19 >= 80.0 )
        v24 = (float)(v22 + 0.85000002) * v23;
      else
        v24 = (float)(-0.85000002 - v22) * v23;
      *v21 = v24;
    }
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v33) = 3;
      LODWORD(v32) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    __asm { vroundss xmm3, xmm13, xmm2, 1 }
    v26 = (float)((float)(vAngles->v[rotateDir] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v33) = 3;
      LODWORD(v32) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    vAngles->v[rotateDir] = v26;
    if ( bForceAlign || v19 < 45.0 )
    {
      if ( COERCE_FLOAT(*(_DWORD *)vec3_t::operator[](vAngles, rotateDir) & _xmm) <= 90.0 )
        v28 = v15;
      else
        v28 = v15 + 180.0;
    }
    else
    {
      v27 = vec3_t::operator[](vAngles, rotateDir);
      if ( v19 >= 80.0 )
        v28 = *v27;
      else
        v28 = (float)(v18 * 0.25) + *v27;
    }
    v29 = AngleNormalize360(v28);
    *vec3_t::operator[](vAngles, rotateDir) = *(float *)&v29;
  }
}

/*
==============
BgMissile::MissileLandAnglesFlat
==============
*/
void BgMissile::MissileLandAnglesFlat(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime, const int simulationTime)
{
  vec3_t right; 
  vec3_t up; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3473, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3474, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + (int)(float)((float)(simulationTime - lastSimulationTime) * trace->fraction), angles);
  NearestPitchAndYawOnPlane(angles, &trace->normal, angles);
  if ( angles->v[2] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3484, ASSERT_TYPE_ASSERT, "(angles[ROLL] == 0.f)", (const char *)&queryFormat, "angles[ROLL] == 0.f") )
    __debugbreak();
  AngleVectors(angles, NULL, &right, &up);
  angles->v[2] = atan2f_0((float)((float)(trace->normal.v[0] * right.v[0]) + (float)(trace->normal.v[1] * right.v[1])) + (float)(trace->normal.v[2] * right.v[2]), (float)((float)(trace->normal.v[0] * up.v[0]) + (float)(trace->normal.v[1] * up.v[1])) + (float)(trace->normal.v[2] * up.v[2])) * 57.295776;
}

/*
==============
BgMissile::MissileLandAnglesFlatMaintainingDirection
==============
*/
void BgMissile::MissileLandAnglesFlatMaintainingDirection(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime, const int simulationTime)
{
  double v10; 
  vec3_t right; 
  vec3_t up; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3406, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3407, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + (int)(float)((float)(simulationTime - lastSimulationTime) * trace->fraction), angles);
  v10 = PitchForYawOnNormal(angles->v[1], &trace->normal);
  angles->v[2] = 0.0;
  angles->v[0] = *(float *)&v10;
  AngleVectors(angles, NULL, &right, &up);
  angles->v[2] = atan2f_0((float)((float)(trace->normal.v[0] * right.v[0]) + (float)(trace->normal.v[1] * right.v[1])) + (float)(trace->normal.v[2] * right.v[2]), (float)((float)(trace->normal.v[0] * up.v[0]) + (float)(trace->normal.v[1] * up.v[1])) + (float)(trace->normal.v[2] * up.v[2])) * 57.295776;
}

/*
==============
BgMissile::MissileLandAnglesKnife
==============
*/
__int64 BgMissile::MissileLandAnglesKnife(BgMissile *this, const BgEntityData *entityData, const Weapon *weapon, const bool isAlternate, trace_t *trace, vec3_t *angles, vec3_t *origin, const int lastSimulationTime, const int simulationTime)
{
  const entityState_t *EntityState; 
  unsigned __int16 EntityHitId; 
  const entityState_t *v13; 
  const BgEntityComponents *Components; 
  __int128 v15; 
  bool v16; 
  __int128 v18; 
  const dvar_t *v21; 
  float v23; 
  float v24; 
  double v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  vec3_t forward; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3431, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3434, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3436, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + (int)(float)((float)(simulationTime - lastSimulationTime) * trace->fraction), angles);
  EntityHitId = Trace_GetEntityHitId(trace);
  v13 = this->GetEntityState(this, EntityHitId);
  if ( v13 )
  {
    if ( BG_IsCharacterEntity(v13) )
    {
      Components = BgEntityData::GetComponents((BgEntityData *)entityData);
      if ( BG_Missile_SticksToPlayer(Components, weapon, isAlternate) )
        goto LABEL_20;
    }
  }
  v15 = LODWORD(EntityState->lerp.pos.trDelta.v[0]);
  v16 = trace->normal.v[2] > 0.69999999;
  v18 = v15;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(EntityState->lerp.pos.trDelta.v[1] * EntityState->lerp.pos.trDelta.v[1])) + (float)(EntityState->lerp.pos.trDelta.v[2] * EntityState->lerp.pos.trDelta.v[2]));
  _XMM6 = v18;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm7, xmm0
  }
  forward.v[0] = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM0);
  forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * EntityState->lerp.pos.trDelta.v[1];
  forward.v[2] = (float)(1.0 / *(float *)&_XMM0) * EntityState->lerp.pos.trDelta.v[2];
  if ( !v16 )
    goto LABEL_20;
  v21 = DCONST_DVARMPFLT_bg_grenadeRestThreshold;
  if ( !DCONST_DVARMPFLT_bg_grenadeRestThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRestThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( *(float *)&v18 >= v21->current.value && (float)((float)((float)(forward.v[1] * trace->normal.v[1]) + (float)(forward.v[0] * trace->normal.v[0])) + (float)(forward.v[2] * trace->normal.v[2])) >= 0.69999999 )
  {
LABEL_20:
    v23 = trace->normal.v[1];
    v24 = trace->normal.v[0];
    v25 = BG_random(&this->m_holdRand);
    angles->v[0] = (float)((float)(atan2f_0(trace->normal.v[2], fsqrt((float)(v23 * v23) + (float)(v24 * v24))) * 57.295776) + (float)(*(float *)&v25 * 30.0)) - 15.0;
    AngleVectors(angles, &forward, NULL, NULL);
    v26 = origin->v[0] - (float)(1.5 * trace->normal.v[0]);
    v27 = origin->v[1];
    *(float *)&v25 = origin->v[2];
    origin->v[0] = v26;
    v28 = v27 - (float)(1.5 * trace->normal.v[1]);
    v29 = v26 - (float)(4.5 * forward.v[0]);
    v30 = 4.5 * forward.v[1];
    origin->v[1] = v28;
    v31 = trace->normal.v[2];
    origin->v[0] = v29;
    origin->v[1] = v28 - v30;
    origin->v[2] = (float)(*(float *)&v25 - (float)(1.5 * v31)) - (float)(4.5 * forward.v[2]);
    return 3i64;
  }
  else
  {
    BgMissile::MissileLandAnglesFlat(this, entityData, trace, angles, lastSimulationTime, simulationTime);
    origin->v[2] = origin->v[2] - 1.0;
    angles->v[2] = angles->v[2] + 90.0;
    return 2i64;
  }
}

/*
==============
BgMissile::MissilePassedTarget
==============
*/
__int64 BgMissile::MissilePassedTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  const Weapon *WeaponForEntity; 
  guidedMissileType_t guidedMissileType; 
  float v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  const vec3_t *Angles; 
  unsigned __int8 v22; 
  vec3_t trBase; 
  __int64 v25; 
  vec3_t forward; 

  v25 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1158, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1161, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1164, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1166, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1167, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  guidedMissileType = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode)->guidedMissileType;
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  v10 = Components->mover.angle.pos3.v[0] - trBase.v[0];
  v13 = (unsigned int)Components->item[1].clipAmmoCount[1];
  v11 = Components->mover.angle.pos3.v[1] - trBase.v[1];
  v12 = Components->mover.angle.pos3.v[2] - trBase.v[2];
  *(float *)&v13 = (float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12);
  _XMM0 = (unsigned int)guidedMissileType;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_40000_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  if ( *(float *)&v13 > *(float *)&_XMM0 )
    goto LABEL_19;
  Angles = BgEntityData::GetAngles(entityData);
  AngleVectors(Angles, &forward, NULL, NULL);
  *(float *)&v13 = fsqrt(*(float *)&v13);
  _XMM1 = v13;
  __asm
  {
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm1, xmm1, xmm2, xmm0
  }
  if ( (float)((float)((float)((float)(v11 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[1]) + (float)((float)(v10 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[0])) + (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM1)) * forward.v[2])) >= -0.2 )
LABEL_19:
    v22 = 0;
  else
    v22 = 1;
  memset(&trBase, 0, sizeof(trBase));
  return v22;
}

/*
==============
BgMissile::MissileRollAngles
==============
*/
void BgMissile::MissileRollAngles(BgMissile *this, const BgEntityData *entityData, const trace_t *trace, trajectory_t *outAngleTraj, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, vec3_t *outAngles)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  const entityState_t *EntityState; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 v31; 
  float v35; 
  float v36; 
  float v37; 
  const vec3_t *Angles; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  int v48; 
  __int128 v49; 
  float v50; 
  float v51; 
  float v52; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  __int128 v60; 
  float v64; 
  float v65; 
  float v66; 
  const dvar_t *v67; 
  __int128 v68; 
  float v72; 
  float v73; 
  double v74; 
  const Bounds *Box; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  __int128 v80; 
  float v84; 
  vec3_t *v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  vec4_t quat; 
  vec4_t in1; 
  vec3_t v95; 
  vec4_t result; 
  vec3_t v1; 
  vec3_t cross; 
  vec3_t v99; 
  tmat33_t<vec3_t> axis; 
  vec4_t v101; 
  vec4_t in2; 
  vec4_t out; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 
  __int128 v110; 
  __int128 v111; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3559, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3562, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3564, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->fraction >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3565, ASSERT_TYPE_ASSERT, "(trace->fraction < 1.0f)", (const char *)&queryFormat, "trace->fraction < 1.0f") )
    __debugbreak();
  if ( !outAngleTraj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3566, ASSERT_TYPE_ASSERT, "(outAngleTraj)", (const char *)&queryFormat, "outAngleTraj") )
    __debugbreak();
  if ( ((LODWORD(BgEntityData::GetAngles((BgEntityData *)entityData)->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(BgEntityData::GetAngles((BgEntityData *)entityData)->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(BgEntityData::GetAngles((BgEntityData *)entityData)->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3571, ASSERT_TYPE_SANITY, "( !IS_NAN( ( entityData->GetAngles() )[0] ) && !IS_NAN( ( entityData->GetAngles() )[1] ) && !IS_NAN( ( entityData->GetAngles() )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( entityData->GetAngles() )[0] ) && !IS_NAN( ( entityData->GetAngles() )[1] ) && !IS_NAN( ( entityData->GetAngles() )[2] )") )
    __debugbreak();
  outAngleTraj->trTime = simulationTime;
  outAngleTraj->trType = TR_INTERPOLATE;
  outAngleTraj->trBase = *BgEntityData::GetAngles((BgEntityData *)entityData);
  *(_QWORD *)outAngleTraj->trDelta.v = 0i64;
  outAngleTraj->trDelta.v[2] = 0.0;
  v20 = EntityState->lerp.pos.trDelta.v[1];
  v21 = EntityState->lerp.pos.trDelta.v[0];
  v22 = EntityState->lerp.pos.trDelta.v[2];
  v23 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22));
  v91 = v23;
  if ( v23 <= 0.000001 || (v1.v[1] = v20 * (float)(1.0 / v23), v24 = v1.v[1] * trace->normal.v[1], v25 = (float)(v21 * (float)(1.0 / v23)) * trace->normal.v[0], v1.v[0] = v21 * (float)(1.0 / v23), v26 = (float)(v24 + v25) + (float)((float)(v22 * (float)(1.0 / v23)) * trace->normal.v[2]), v1.v[2] = v22 * (float)(1.0 / v23), COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v26) & _xmm) - 1.0) & _xmm) < 0.001) )
  {
    outAngleTraj->trType = TR_STATIONARY;
  }
  else
  {
    v111 = v8;
    v110 = v9;
    v109 = v10;
    v108 = v11;
    v107 = v12;
    v106 = v13;
    v105 = v14;
    v104 = v15;
    Vec3Cross(&trace->normal, &v1, &cross);
    v27 = LODWORD(cross.v[0]);
    *(float *)&v27 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + (float)(cross.v[1] * cross.v[1])) + (float)(cross.v[2] * cross.v[2]));
    _XMM3 = v27;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    cross.v[0] = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
    cross.v[2] = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
    cross.v[1] = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
    Vec3Cross(&v1, &cross, &v99);
    v31 = LODWORD(v99.v[0]);
    *(float *)&v31 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(v99.v[1] * v99.v[1])) + (float)(v99.v[2] * v99.v[2]));
    _XMM3 = v31;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v35 = v99.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v36 = v99.v[1] * (float)(1.0 / *(float *)&_XMM0);
    v37 = v99.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v99.v[0] = v35;
    v99.v[1] = v36;
    v99.v[2] = v37;
    Angles = BgEntityData::GetAngles((BgEntityData *)entityData);
    AnglesToQuat(Angles, &quat);
    v101 = quat;
    if ( ((LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3604, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] )") )
      __debugbreak();
    QuatToAxis(&quat, &axis);
    v39 = axis.m[2].v[0];
    v40 = axis.m[2].v[1];
    v41 = axis.m[2].v[2];
    v42 = cross.v[1];
    v43 = cross.v[0];
    v49 = LODWORD(axis.m[2].v[0]);
    v44 = axis.m[2].v[1] * v36;
    v45 = FLOAT_0_001;
    v46 = axis.m[2].v[2] * v37;
    v47 = cross.v[2];
    *(float *)&v49 = (float)((float)(axis.m[2].v[0] * v35) + v44) + v46;
    v48 = v49;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(v49 & _xmm) - 1.0) & _xmm) >= 0.001 )
    {
      v53 = v49 ^ (unsigned int)_xmm;
      v54 = (float)(COERCE_FLOAT(v48 ^ _xmm) * v99.v[0]) + axis.m[2].v[0];
      v55 = (float)(COERCE_FLOAT(v48 ^ _xmm) * v99.v[2]) + axis.m[2].v[2];
      v56 = (float)(COERCE_FLOAT(v48 ^ _xmm) * v99.v[1]) + axis.m[2].v[1];
      *(float *)&v53 = fsqrt((float)((float)(v56 * v56) + (float)(v54 * v54)) + (float)(v55 * v55));
      _XMM1 = v53;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
      }
      v52 = (float)(1.0 / *(float *)&_XMM0) * v55;
      v45 = FLOAT_0_001;
      v51 = (float)(1.0 / *(float *)&_XMM0) * v54;
      v50 = (float)(1.0 / *(float *)&_XMM0) * v56;
      in1.v[0] = v51;
      in1.v[1] = v50;
      in1.v[2] = v52;
    }
    else
    {
      in1.xyz = cross;
      v50 = cross.v[1];
      v51 = cross.v[0];
      v52 = cross.v[2];
    }
    v92 = (float)((float)(axis.m[2].v[0] * v51) + (float)(axis.m[2].v[1] * v50)) + (float)(axis.m[2].v[2] * v52);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v92) & _xmm) - 1.0) & _xmm) >= v45 )
    {
      Vec3Cross(&axis.m[2], (const vec3_t *)&in1, &v95);
      v60 = LODWORD(v95.v[0]);
      *(float *)&v60 = fsqrt((float)((float)(*(float *)&v60 * *(float *)&v60) + (float)(v95.v[1] * v95.v[1])) + (float)(v95.v[2] * v95.v[2]));
      _XMM3 = v60;
      __asm
      {
        vcmpless xmm1, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm8, xmm1
      }
      v95.v[0] = v95.v[0] * (float)(1.0 / *(float *)&_XMM1);
      v95.v[2] = v95.v[2] * (float)(1.0 / *(float *)&_XMM1);
      v95.v[1] = v95.v[1] * (float)(1.0 / *(float *)&_XMM1);
      v64 = acosf_0(v92);
      AngleRadAxisToQuat(v64, &v95, &in2);
      in1 = quat;
      QuatMultiply(&in1, &in2, &quat);
      QuatToAxis(&quat, &axis);
      v41 = axis.m[2].v[2];
      v40 = axis.m[2].v[1];
      v39 = axis.m[2].v[0];
      v45 = FLOAT_0_001;
    }
    if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3644, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] )") )
        __debugbreak();
      v39 = axis.m[2].v[0];
      v40 = axis.m[2].v[1];
      v41 = axis.m[2].v[2];
    }
    v66 = (float)((float)(v39 * v43) + (float)(v40 * v42)) + (float)(v41 * v47);
    v65 = v66;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v66) & _xmm) - 1.0) & _xmm) >= v45 )
    {
      in1.v[0] = v43;
      in1.v[1] = v42;
      in1.v[2] = v47;
      if ( v66 < 0.0 )
      {
        LODWORD(in1.v[0]) = LODWORD(v43) ^ _xmm;
        LODWORD(in1.v[2]) = LODWORD(v47) ^ _xmm;
        LODWORD(in1.v[1]) = LODWORD(v42) ^ _xmm;
        LODWORD(v65) = LODWORD(v66) ^ _xmm;
      }
      Vec3Cross(&axis.m[2], (const vec3_t *)&in1, &v95);
      v67 = DCONST_DVARFLT_bg_grenadeMaxTurnRate;
      v68 = LODWORD(v95.v[0]);
      *(float *)&v68 = fsqrt((float)((float)(*(float *)&v68 * *(float *)&v68) + (float)(v95.v[1] * v95.v[1])) + (float)(v95.v[2] * v95.v[2]));
      _XMM3 = v68;
      __asm
      {
        vcmpless xmm0, xmm3, xmm13
        vblendvps xmm0, xmm3, xmm8, xmm0
      }
      v95.v[0] = v95.v[0] * (float)(1.0 / *(float *)&_XMM0);
      v95.v[2] = v95.v[2] * (float)(1.0 / *(float *)&_XMM0);
      v95.v[1] = v95.v[1] * (float)(1.0 / *(float *)&_XMM0);
      if ( !DCONST_DVARFLT_bg_grenadeMaxTurnRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeMaxTurnRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v67);
      v72 = (float)((float)timeDeltaMsec * v67->current.value) * 0.000017453292;
      v73 = acosf_0(v65);
      v74 = I_fclamp(v73, COERCE_FLOAT(LODWORD(v72) ^ _xmm), v72);
      AngleRadAxisToQuat(*(float *)&v74, &v95, &in2);
      in1 = quat;
      QuatMultiply(&in1, &in2, &quat);
      QuatToAxis(&quat, &axis);
    }
    if ( ((LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3680, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] )") )
      __debugbreak();
    Box = BgEntityData::GetBox((BgEntityData *)entityData);
    v76 = COERCE_FLOAT(LODWORD(Box->midPoint.v[0]) & _xmm) + Box->halfSize.v[0];
    v77 = COERCE_FLOAT(LODWORD(Box->midPoint.v[1]) & _xmm) + Box->halfSize.v[1];
    v78 = COERCE_FLOAT(LODWORD(Box->midPoint.v[2]) & _xmm) + Box->halfSize.v[2];
    v79 = fsqrt((float)((float)(v77 * v77) + (float)(v76 * v76)) + (float)(v78 * v78));
    if ( v79 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3686, ASSERT_TYPE_SANITY, "( radius > 0.0f )", (const char *)&queryFormat, "radius > 0.0f") )
      __debugbreak();
    Vec3Cross(&axis.m[2], &v99, (vec3_t *)&in1);
    v80 = LODWORD(in1.v[0]);
    *(float *)&v80 = fsqrt((float)((float)(*(float *)&v80 * *(float *)&v80) + (float)(in1.v[1] * in1.v[1])) + (float)(in1.v[2] * in1.v[2]));
    _XMM3 = v80;
    __asm
    {
      vcmpless xmm0, xmm3, xmm13
      vblendvps xmm0, xmm3, xmm8, xmm0
    }
    v84 = _mm_cvtepi32_ps((__m128i)(unsigned int)timeDeltaMsec).m128_f32[0];
    AngleRadAxisToQuat((float)((float)((float)((float)((float)(v1.v[0] / v79) * v91) * (float)(in1.v[0] * (float)(1.0 / *(float *)&_XMM0))) + (float)((float)((float)((float)(in1.v[1] * (float)(1.0 / *(float *)&_XMM0)) / v79) * v91) * v1.v[1])) + (float)((float)((float)((float)(in1.v[2] * (float)(1.0 / *(float *)&_XMM0)) / v79) * v91) * v1.v[2])) * (float)(v84 * 0.001), &axis.m[2], &in2);
    in1 = quat;
    QuatMultiply(&in1, &in2, &quat);
    QuatToAxis(&quat, &axis);
    if ( ((LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3707, ASSERT_TYPE_SANITY, "( !IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( missileQuat )[0] ) && !IS_NAN( ( missileQuat )[1] ) && !IS_NAN( ( missileQuat )[2] ) && !IS_NAN( ( missileQuat )[3] )") )
      __debugbreak();
    LODWORD(v101.v[0]) ^= _xmm;
    LODWORD(v101.v[2]) ^= _xmm;
    LODWORD(v101.v[1]) ^= _xmm;
    QuatMultiply(&v101, &quat, &out);
    QuatSlerp(&quat_identity, &out, 50.0 / v84, &result);
    if ( ((LODWORD(result.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(result.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(result.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(result.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3719, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trSlerpDeltaQuat )[0] ) && !IS_NAN( ( trSlerpDeltaQuat )[1] ) && !IS_NAN( ( trSlerpDeltaQuat )[2] ) && !IS_NAN( ( trSlerpDeltaQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( trSlerpDeltaQuat )[0] ) && !IS_NAN( ( trSlerpDeltaQuat )[1] ) && !IS_NAN( ( trSlerpDeltaQuat )[2] ) && !IS_NAN( ( trSlerpDeltaQuat )[3] )") )
      __debugbreak();
    if ( simulationTime < timeDeltaMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3725, ASSERT_TYPE_ASSERT, "(simulationTime >= frameDuration)", (const char *)&queryFormat, "simulationTime >= frameDuration") )
      __debugbreak();
    outAngleTraj->trType = TR_SLERP;
    outAngleTraj->trTime = simulationTime - timeDeltaMsec;
    v85 = (vec3_t *)BgEntityData::GetAngles((BgEntityData *)entityData);
    v86 = result.v[0];
    v87 = result.v[1];
    v88 = result.v[2];
    v89 = result.v[3];
    outAngleTraj->trBase = *v85;
    v90 = (float)((float)((float)(v86 * v86) + (float)(v87 * v87)) + (float)(v88 * v88)) + (float)(v89 * v89);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v90 - 1.0) & _xmm) >= 0.0020000001 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_quat_inline.h", 58, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v86, v87, v88, v89, fsqrt(v90)) )
        __debugbreak();
      v86 = result.v[0];
      v87 = result.v[1];
      v88 = result.v[2];
      v89 = result.v[3];
    }
    outAngleTraj->trDelta.v[2] = v88;
    outAngleTraj->trDelta.v[0] = v86;
    outAngleTraj->trDelta.v[1] = v87;
    if ( v89 < 0.0 )
      outAngleTraj->trDelta.v[0] = v86 + 4.0;
    if ( ((LODWORD(outAngleTraj->trBase.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAngleTraj->trBase.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAngleTraj->trBase.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3730, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAngleTraj->trBase )[0] ) && !IS_NAN( ( outAngleTraj->trBase )[1] ) && !IS_NAN( ( outAngleTraj->trBase )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAngleTraj->trBase )[0] ) && !IS_NAN( ( outAngleTraj->trBase )[1] ) && !IS_NAN( ( outAngleTraj->trBase )[2] )") )
      __debugbreak();
    if ( ((LODWORD(outAngleTraj->trDelta.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAngleTraj->trDelta.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAngleTraj->trDelta.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3731, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAngleTraj->trDelta )[0] ) && !IS_NAN( ( outAngleTraj->trDelta )[1] ) && !IS_NAN( ( outAngleTraj->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAngleTraj->trDelta )[0] ) && !IS_NAN( ( outAngleTraj->trDelta )[1] ) && !IS_NAN( ( outAngleTraj->trDelta )[2] )") )
      __debugbreak();
    AxisToAngles(&axis, outAngles);
    if ( ((LODWORD(outAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3735, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] )") )
      __debugbreak();
  }
}

/*
==============
BgMissile::MissileShouldStopAtImpact
==============
*/
bool BgMissile::MissileShouldStopAtImpact(BgMissile *this, const Weapon *weapon, bool isAlternate, const trace_t *trace, const vec3_t *velocity, const BgEntityData *entityData)
{
  const BgEntityComponents *Components; 
  unsigned int EntityHitId; 
  unsigned __int16 v12; 
  const entityState_t *v13; 
  int OwnerEntNum; 
  unsigned int v15; 
  const entityState_t *v16; 
  unsigned __int16 v18; 
  entityState_t *v19; 
  unsigned __int16 v20; 
  entityState_t *v21; 
  unsigned __int16 v22; 
  entityState_t *v23; 
  unsigned __int16 v24; 
  entityState_t *v25; 
  WeapStickinessType v26; 
  float v27; 
  __int128 v28; 
  float v29; 
  __int128 v30; 
  float v34; 
  float v35; 
  float v36; 
  double Float_Internal_DebugName; 
  float v38; 
  double v39; 
  __int64 v40; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3271, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents((BgEntityData *)entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3274, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  EntityHitId = Trace_GetEntityHitId(trace);
  if ( EntityHitId >= 0x800 )
  {
    LODWORD(v40) = EntityHitId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3277, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v40, 2048) )
      __debugbreak();
  }
  if ( !this->TestEntityFlag(this, EntityHitId, NODRAW) || BG_WeaponSticksToNonStick(weapon, isAlternate) )
  {
    v12 = Trace_GetEntityHitId(trace);
    v13 = this->GetEntityState(this, v12);
    if ( v13 && BG_IsCharacterEntity(v13) )
    {
      if ( !BG_IsThrowingAxe(weapon) )
        return BG_Missile_SticksToPlayer(Components, weapon, isAlternate);
      OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)entityData);
      v15 = OwnerEntNum;
      if ( OwnerEntNum == 2047 )
        return BG_Missile_SticksToPlayer(Components, weapon, isAlternate);
      if ( !this->IsEntityValid(this, OwnerEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3295, ASSERT_TYPE_ASSERT, "(IsEntityValid( attackerEntNum ))", (const char *)&queryFormat, "IsEntityValid( attackerEntNum )") )
        __debugbreak();
      v16 = this->GetEntityState(this, v15);
      if ( !BG_IsCharacterEntity(v16) || !BgMissile::CharactersOnSameTeam(this, v15, EntityHitId) )
        return BG_Missile_SticksToPlayer(Components, weapon, isAlternate);
      return 0;
    }
    v18 = Trace_GetEntityHitId(trace);
    v19 = this->GetEntityState(this, v18);
    if ( !v19 || v19->eType != ET_VEHICLE || BG_WeaponSticksToVehicles(weapon, isAlternate) )
    {
      v20 = Trace_GetEntityHitId(trace);
      v21 = this->GetEntityState(this, v20);
      if ( !v21 || v21->eType != ET_TURRET || BG_WeaponSticksToTurrets(weapon, isAlternate) )
      {
        v22 = Trace_GetEntityHitId(trace);
        v23 = this->GetEntityState(this, v22);
        if ( !v23 || v23->eType != ET_HELICOPTER || BG_WeaponSticksToVehicles(weapon, isAlternate) )
        {
          v24 = Trace_GetEntityHitId(trace);
          v25 = this->GetEntityState(this, v24);
          if ( (!v25 || v25->eType != ET_SCRIPTMOVER || !this->TestEntityFlag(this, EntityHitId, (BgEntityFlagsMP)33i64)) && trace->hitId != Components->missile.doorScriptableIndex )
          {
            v26 = BG_WeaponStickinessType(weapon, isAlternate);
            if ( (unsigned int)(v26 - 1) <= 1 )
              return 1;
            if ( v26 == WEAPSTICKINESS_KNIFE )
            {
              v27 = velocity->v[1];
              v28 = LODWORD(velocity->v[0]);
              v29 = velocity->v[2];
              v30 = v28;
              *(float *)&v30 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v27 * v27)) + (float)(v29 * v29));
              _XMM6 = v30;
              __asm
              {
                vcmpless xmm0, xmm6, cs:__real@80000000
                vblendvps xmm0, xmm6, xmm1, xmm0
              }
              v34 = *(float *)&v28 * (float)(1.0 / *(float *)&_XMM0);
              v35 = v27 * (float)(1.0 / *(float *)&_XMM0);
              v36 = v29 * (float)(1.0 / *(float *)&_XMM0);
              if ( trace->normal.v[2] <= 0.69999999 || (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_grenadeRestThreshold, "bg_grenadeRestThreshold"), *(float *)&_XMM6 >= *(float *)&Float_Internal_DebugName) )
              {
                if ( (float)((float)((float)(v35 * trace->normal.v[1]) + (float)(v34 * trace->normal.v[0])) + (float)(v36 * trace->normal.v[2])) <= 0.69999999 )
                  return 0;
              }
              return 1;
            }
            if ( trace->normal.v[2] > 0.69999999 )
            {
              if ( BG_WeaponSticksToFloors(weapon, isAlternate) )
                return 1;
              v38 = fsqrt((float)((float)(velocity->v[0] * velocity->v[0]) + (float)(velocity->v[1] * velocity->v[1])) + (float)(velocity->v[2] * velocity->v[2]));
              v39 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_grenadeRestThreshold, "bg_grenadeRestThreshold");
              if ( v38 < *(float *)&v39 )
                return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
BgMissile::MissileTrace
==============
*/
void BgMissile::MissileTrace(BgMissile *this, const BgEntityData *missileEntData, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum2, int contentmask, bool detailTrace)
{
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  const entityState_t *EntityState; 
  BgStatic *ActiveStatics; 
  int OwnerEntNum; 
  __int64 v24; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  __int64 v27; 
  team_t skipTeamCharacters; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  float v32; 
  __int128 unsignedInt; 
  __int128 v34; 
  int v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  Physics_WorldId detailWorldId; 
  Physics_WorldId mainWorldId; 
  __int128 v50; 
  __m256i v51; 
  const char *debugHitName; 
  __int128 v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  Physics_WorldId v58; 
  Physics_WorldId v59; 
  float v60; 
  float v61; 
  __int128 v62; 
  float v63; 
  unsigned __int16 EntityHitId; 
  const entityState_t *v68; 
  const entityState_t *v69; 
  unsigned int eType; 
  int v71; 
  entityState_t *v72; 
  unsigned __int8 surfType; 
  int *skipEntities; 
  int *skipEntitiesa; 
  __int64 skipEntityCount; 
  int grenadeEntity; 
  vec3_t v78; 
  vec3_t starta; 
  trace_t resultsa; 
  int v81[4]; 
  __int128 v82; 
  __int128 v83; 
  __int128 v84; 
  __int128 v85; 
  __int128 v86; 
  __int128 v87; 
  __int128 v88; 

  if ( end->v[0] == start->v[0] && end->v[1] == start->v[1] && end->v[2] == start->v[2] )
  {
    memset_0(&results->position, 0, 0x54ui64);
    results->fraction = 1.0;
    return;
  }
  v88 = v10;
  v87 = v11;
  v85 = v13;
  grenadeEntity = 2047;
  if ( missileEntData )
  {
    EntityState = BgEntityData::GetEntityState((BgEntityData *)missileEntData);
    if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 584, ASSERT_TYPE_ASSERT, "(missileEntState)", (const char *)&queryFormat, "missileEntState") )
      __debugbreak();
    grenadeEntity = EntityState->number;
  }
  v81[0] = passEntityNum;
  v81[1] = passEntityNum2;
  v81[2] = this->GetExtraSkipEntityForTraces(this, missileEntData);
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 594, ASSERT_TYPE_ASSERT, "(bgStatic)", (const char *)&queryFormat, "bgStatic") )
    __debugbreak();
  OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)missileEntData);
  v24 = OwnerEntNum;
  if ( ActiveStatics->HasCharacterInfo(ActiveStatics, OwnerEntNum) )
  {
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v24 >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
        {
          LODWORD(skipEntities) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", skipEntities, *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28]) )
            __debugbreak();
        }
        v27 = *(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * v24;
        goto LABEL_26;
      }
      CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, v24);
    }
    else
    {
      CharacterInfo = (const characterInfo_t *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].GetAnimStatics)(ActiveStatics, (unsigned int)v24);
    }
    v27 = (__int64)CharacterInfo;
LABEL_26:
    if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 600, ASSERT_TYPE_ASSERT, "(ownerCharacterInfo)", (const char *)&queryFormat, "ownerCharacterInfo") )
      __debugbreak();
    skipTeamCharacters = *(_DWORD *)(v27 + 12);
    goto LABEL_31;
  }
  skipTeamCharacters = TEAM_ZERO;
LABEL_31:
  v29 = DCONST_DVARFLT_bg_missileMaxShapeCastDistance;
  if ( !DCONST_DVARFLT_bg_missileMaxShapeCastDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileMaxShapeCastDistance") )
    __debugbreak();
  v86 = v12;
  v84 = v14;
  v83 = v15;
  v82 = v16;
  Dvar_CheckFrontendServerThread(v29);
  v30 = end->v[0] - start->v[0];
  v34 = LODWORD(end->v[1]);
  v31 = end->v[1] - start->v[1];
  v32 = end->v[2] - start->v[2];
  unsignedInt = v29->current.unsignedInt;
  *(float *)&v34 = (float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32);
  if ( *(float *)&v34 <= (float)(*(float *)&unsignedInt * *(float *)&unsignedInt) )
  {
    v58 = this->GetPhysicsDetailWorldId(this);
    v59 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyGrenadeTrace(results, start, end, bounds, grenadeEntity, v81, 3, skipTeamCharacters, contentmask, All, detailTrace, v59, v58);
  }
  else
  {
    *(float *)&v34 = fsqrt(*(float *)&v34);
    _XMM8 = v34;
    __asm
    {
      vcmpless xmm0, xmm8, cs:__real@80000000
      vblendvps xmm0, xmm8, xmm9, xmm0
    }
    v38 = 0;
    v39 = v30 * (float)(1.0 / *(float *)&_XMM0);
    v40 = v31 * (float)(1.0 / *(float *)&_XMM0);
    v42 = v32 * (float)(1.0 / *(float *)&_XMM0);
    v41 = v42;
    if ( *(float *)&_XMM8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 621, ASSERT_TYPE_ASSERT, "(traceLength > 0.0f)", (const char *)&queryFormat, "traceLength > 0.0f") )
      __debugbreak();
    v43 = start->v[1];
    v44 = start->v[2];
    starta.v[0] = start->v[0];
    v78.v[0] = (float)(v39 * *(float *)&unsignedInt) + starta.v[0];
    v45 = (float)(v40 * *(float *)&unsignedInt) + v43;
    v46 = (float)(v42 * *(float *)&unsignedInt) + v44;
    starta.v[1] = v43;
    starta.v[2] = v44;
    v47 = unsignedInt;
LABEL_39:
    v78.v[2] = v46;
    v78.v[1] = v45;
    while ( 1 )
    {
      detailWorldId = this->GetPhysicsDetailWorldId(this);
      mainWorldId = this->GetPhysicsMainWorldId(this);
      PhysicsQuery_LegacyGrenadeTrace(&resultsa, &starta, &v78, bounds, grenadeEntity, v81, 3, skipTeamCharacters, contentmask, All, detailTrace, mainWorldId, detailWorldId);
      if ( ++v38 > MAX_STEPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 634, ASSERT_TYPE_ASSERT, "(stepCount <= MAX_STEPS)", (const char *)&queryFormat, "stepCount <= MAX_STEPS") )
        __debugbreak();
      v50 = *(_OWORD *)&resultsa.allsolid;
      v51 = *(__m256i *)&resultsa.contents;
      *(__m256i *)&results->fraction = *(__m256i *)&resultsa.fraction;
      debugHitName = resultsa.debugHitName;
      *(__m256i *)&results->contents = v51;
      *(_OWORD *)&results->allsolid = v50;
      results->debugHitName = debugHitName;
      if ( (_BYTE)v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 643, ASSERT_TYPE_ASSERT, "(!segmentedTrace.allsolid)", (const char *)&queryFormat, "!segmentedTrace.allsolid") )
        __debugbreak();
      if ( resultsa.startsolid )
        break;
      if ( resultsa.fraction < 1.0 )
      {
        v55 = start->v[0] - (float)((float)((float)(v78.v[0] - starta.v[0]) * resultsa.fraction) + starta.v[0]);
        v56 = start->v[1] - (float)((float)((float)(v78.v[1] - starta.v[1]) * resultsa.fraction) + starta.v[1]);
        v57 = start->v[2] - (float)((float)((float)(v78.v[2] - starta.v[2]) * resultsa.fraction) + starta.v[2]);
        results->fraction = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57)) * (float)(1.0 / *(float *)&_XMM8);
        break;
      }
      if ( *(float *)&v47 >= *(float *)&_XMM8 )
      {
        results->fraction = 1.0;
        break;
      }
      starta = v78;
      v53 = v47;
      *(float *)&v53 = *(float *)&v47 + *(float *)&unsignedInt;
      v47 = v53;
      if ( v38 + 1 < MAX_STEPS && *(float *)&v53 <= *(float *)&_XMM8 )
      {
        v45 = (float)(v40 * *(float *)&v53) + start->v[1];
        v78.v[0] = (float)(v39 * *(float *)&v53) + start->v[0];
        v46 = (float)(v41 * *(float *)&v53) + start->v[2];
        goto LABEL_39;
      }
      v54 = end->v[1];
      v78.v[0] = end->v[0];
      v78.v[2] = end->v[2];
      v78.v[1] = v54;
      v47 = _XMM8;
    }
  }
  if ( results->startsolid )
  {
    results->fraction = 0.0;
    v60 = start->v[0] - end->v[0];
    v62 = LODWORD(start->v[1]);
    v61 = start->v[1] - end->v[1];
    v63 = start->v[2] - end->v[2];
    *(float *)&v62 = fsqrt((float)((float)(v61 * v61) + (float)(v60 * v60)) + (float)(v63 * v63));
    _XMM3 = v62;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    results->normal.v[0] = (float)(1.0 / *(float *)&_XMM0) * v60;
    results->normal.v[2] = (float)(1.0 / *(float *)&_XMM0) * v63;
    results->normal.v[1] = (float)(1.0 / *(float *)&_XMM0) * v61;
  }
  if ( results->fraction < 1.0 )
  {
    EntityHitId = Trace_GetEntityHitId(results);
    v68 = this->GetEntityState(this, EntityHitId);
    v69 = v68;
    if ( v68 )
    {
      if ( BG_IsCharacterEntity(v68) || (eType = (unsigned __int16)v69->eType, (unsigned __int16)eType <= 0x15u) && (v71 = 2359300, _bittest(&v71, eType)) )
      {
        v72 = this->GetEntityState(this, results->hitId);
        surfType = v72->surfType;
        if ( surfType >= 0x40u )
        {
          LODWORD(skipEntityCount) = 64;
          LODWORD(skipEntitiesa) = surfType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 705, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntState->surfType ) < (unsigned)( 64 )", "hitEntState->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntitiesa, skipEntityCount) )
            __debugbreak();
        }
        results->surfaceFlags = (v72->surfType & 0x3F) << 19;
      }
    }
  }
}

/*
==============
BgMissile::MissileTrajectory
==============
*/
void BgMissile::MissileTrajectory(BgMissile *this, const BgWeaponMap *weaponMap, const int simulationTime, const int timeDeltaMsec, BgEntityData *entityData, vec3_t *outResult, int *outMissileClipMask)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  const WeaponDef *v12; 
  float v13; 
  const vec3_t *Angles; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float *v; 
  int v20; 
  vec3_t *v21; 
  bool (__fastcall *SetEntityAngles)(BgMissile *, BgEntityData *, const vec3_t *, const bool, const bool); 
  vec3_t *v23; 
  _BOOL8 v24; 
  const vec4_t *v25; 
  BOOL fmt; 
  bool v27; 
  vec3_t trBase; 
  int timeDeltaMseca; 
  int simulationTimea; 
  BgWeaponMap *weaponMapa; 
  int projectileSpeed; 
  int projectileSpeedUp; 
  Weapon *r_weapon; 
  const WeaponDef *v35; 
  __int64 v36; 
  vec3_t forward; 
  vec3_t v38; 

  v36 = -2i64;
  timeDeltaMseca = timeDeltaMsec;
  simulationTimea = simulationTime;
  weaponMapa = (BgWeaponMap *)weaponMap;
  *(_QWORD *)trBase.v = outMissileClipMask;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "MissileTrajectory");
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 739, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 740, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !outMissileClipMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 741, ASSERT_TYPE_ASSERT, "(outMissileClipMask)", (const char *)&queryFormat, "outMissileClipMask") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 744, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 747, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  r_weapon = (Weapon *)BG_GetWeaponForEntity(weaponMap, EntityState);
  v12 = BG_WeaponDef(r_weapon, EntityState->inAltWeaponMode);
  v35 = v12;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 752, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  BG_GetProjectileSpeed(r_weapon, EntityState->inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  v27 = BgEntityData::GetHandler(entityData) == 12;
  if ( simulationTime <= EntityState->lerp.u.anonymous.data[2] || BgTrajectory::IsTrackingTrajectory(&EntityState->lerp.pos) || EntityState->lerp.pos.trType == TR_LINEAR || !v27 )
  {
    this->EvaluatePosTrajectory(this, entityData, simulationTime, outResult);
  }
  else if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 0x80u) == 0 )
  {
    v13 = (float)timeDeltaMseca * 0.001;
    if ( v12->timeToAccelerate > 0.0 )
    {
      Angles = BgEntityData::GetAngles(entityData);
      AngleVectors(Angles, &forward, NULL, NULL);
      v15 = EntityState->lerp.pos.trDelta.v[0];
      v16 = (float)((float)(forward.v[1] * EntityState->lerp.pos.trDelta.v[1]) + (float)(v15 * forward.v[0])) + (float)(forward.v[2] * EntityState->lerp.pos.trDelta.v[2]);
      v17 = (float)projectileSpeed;
      if ( v16 < v17 )
        v18 = (float)(v17 / v12->timeToAccelerate) * v13;
      else
        v18 = v17 - v16;
      EntityState->lerp.pos.trDelta.v[0] = (float)(forward.v[0] * v18) + v15;
      EntityState->lerp.pos.trDelta.v[1] = (float)(v18 * forward.v[1]) + EntityState->lerp.pos.trDelta.v[1];
      EntityState->lerp.pos.trDelta.v[2] = (float)(v18 * forward.v[2]) + EntityState->lerp.pos.trDelta.v[2];
    }
    if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 789, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
      __debugbreak();
    v = EntityState->lerp.pos.trDelta.v;
    if ( v12->projectileCurvature > 0.0 )
    {
      *v = (float)(v13 * Components->mover.angle.pos1.v[0]) + *v;
      EntityState->lerp.pos.trDelta.v[1] = (float)(v13 * Components->mover.angle.pos1.v[1]) + EntityState->lerp.pos.trDelta.v[1];
      EntityState->lerp.pos.trDelta.v[2] = (float)(v13 * Components->mover.angle.pos1.v[2]) + EntityState->lerp.pos.trDelta.v[2];
    }
    if ( BgMissile::IsDebugDrawEnabled(this) )
      v38 = *BgEntityData::GetOrigin(entityData);
    BgMissile::GuidedMissileSteering(this, weaponMapa, entityData, simulationTimea, timeDeltaMseca, *(int **)trBase.v);
    if ( v12->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || Components->missile.nonGrenade.stage )
    {
      Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
      trBase.v[0] = (float)(v13 * *v) + trBase.v[0];
      trBase.v[1] = (float)(v13 * EntityState->lerp.pos.trDelta.v[1]) + trBase.v[1];
      trBase.v[2] = (float)(v13 * EntityState->lerp.pos.trDelta.v[2]) + trBase.v[2];
      Trajectory_SetTrBase(&EntityState->lerp.pos, &trBase);
      *outResult = trBase;
      memset(&trBase, 0, sizeof(trBase));
      v20 = simulationTimea;
    }
    else
    {
      v20 = simulationTimea;
      this->EvaluatePosTrajectory(this, entityData, simulationTimea, outResult);
    }
    if ( EntityState->lerp.apos.trType == TR_INTERPOLATE && BgMissile::MissileIsReadyForSteering(this, weaponMapa, entityData, v20) )
    {
      v21 = BgEntityData::GetAngles(entityData);
      vectoangles(&EntityState->lerp.pos.trDelta, v21);
      SetEntityAngles = this->SetEntityAngles;
      v23 = BgEntityData::GetAngles(entityData);
      LOBYTE(fmt) = 1;
      LOBYTE(v24) = 1;
      SetEntityAngles(this, entityData, v23, v24, fmt);
      EntityState->lerp.apos.trType = TR_INTERPOLATE;
    }
    if ( BgMissile::IsDebugDrawEnabled(this) )
    {
      if ( v35->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (v25 = &colorOrange, Components->missile.nonGrenade.stage != MISSILESTAGE_ASCENT) )
        v25 = &colorRed;
      this->DebugLineWithDuration(this, entityData, &v38, outResult, v25, 0, 200);
    }
  }
  else
  {
    this->MissileTrajectoryClientControlled(this, weaponMapa, simulationTime, timeDeltaMseca, entityData, outResult);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
BgMissile::PenetrateGlass
==============
*/
void BgMissile::PenetrateGlass(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const int missileClipMask, const int simulationTime, const int timeDeltaMsec, trace_t *results, const vec3_t *start, const vec3_t *end, int damage, bool predicted, bool alwaysShatterOnImpact)
{
  const vec3_t *v13; 
  BgEntityData *v14; 
  const vec3_t *v15; 
  const entityState_t *v17; 
  const Weapon *WeaponForEntity; 
  double FireAtMaxDamageMultiplier; 
  int v20; 
  unsigned __int16 EntityHitId; 
  float v22; 
  __int128 v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  const dvar_t *v27; 
  __int128 v28; 
  int v32; 
  float fraction; 
  BgMissile_vtbl *v34; 
  float v35; 
  unsigned __int16 v36; 
  int passEntityNum2; 
  bool detailTrace; 
  int passEntityNum; 
  const Bounds *bounds; 
  entityState_t *v41; 
  hitLocation_t partGroup; 
  scr_string_t partName; 
  unsigned int modelIndex; 
  damageReturnCode_t (__fastcall *ApplyDamage)(BgMissile *, const int, const int, const int, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *); 
  bool inAltWeaponMode; 
  const vec3_t *Origin; 
  unsigned int OwnerEntNum; 
  const Weapon *v49; 
  int LastHitCharacterConst; 
  bool v51; 
  int v52; 
  const Bounds *Box; 
  unsigned int v54; 
  unsigned __int16 v55; 
  unsigned __int16 GlassHitId; 
  const BgEntityComponents *Components; 
  int v59; 
  const entityState_t *EntityState; 
  Weapon *r_weapon; 
  float v63; 
  float v64; 
  float v65; 
  int v66[4]; 
  int v67[4]; 

  v13 = start;
  v14 = (BgEntityData *)entityData;
  v15 = end;
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1996, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1997, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(v14);
  v17 = EntityState;
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2000, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(v14);
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  r_weapon = (Weapon *)WeaponForEntity;
  if ( BG_IsChargeShotWeapon(WeaponForEntity, EntityState->inAltWeaponMode) && (Components->missile.flags & 0x1000) != 0 )
  {
    FireAtMaxDamageMultiplier = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(WeaponForEntity, EntityState->inAltWeaponMode);
    v20 = (int)(float)(*(float *)&FireAtMaxDamageMultiplier * (float)damage);
  }
  else
  {
    v20 = damage;
  }
  v59 = v20;
  EntityHitId = Trace_GetEntityHitId(results);
  v55 = EntityHitId;
  if ( EntityHitId < 0x7FEu )
  {
    v41 = this->GetEntityState(this, EntityHitId);
    if ( !v41 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v41->lerp.eFlags, ACTIVE, 0x10u) )
    {
      if ( v20 )
      {
        if ( !this->IsScriptableEntity(this, v55) )
        {
          this->EvaluatePosTrajectoryDelta(this, v14, simulationTime, (vec3_t *)&v63);
          if ( (float)((float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65)) >= 1.0 )
          {
            if ( predicted )
            {
              v49 = r_weapon;
            }
            else
            {
              partGroup = results->partGroup;
              partName = results->partName;
              modelIndex = results->modelIndex;
              ApplyDamage = this->ApplyDamage;
              inAltWeaponMode = EntityState->inAltWeaponMode;
              Origin = BgEntityData::GetOrigin(v14);
              OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)entityData);
              v54 = modelIndex;
              v49 = r_weapon;
              ApplyDamage(this, v55, EntityState->number, OwnerEntNum, (const vec3_t *)&v63, Origin, v59, 0, 17, r_weapon, inAltWeaponMode, partGroup, v54, partName, 0, &results->normal);
              v14 = (BgEntityData *)entityData;
              v17 = EntityState;
              v13 = start;
              v15 = end;
            }
            LastHitCharacterConst = BgMissile::GetLastHitCharacterConst(this, v14);
            v51 = BG_WeaponRadiusDamageDetailTrace(v49, v17->inAltWeaponMode);
            v52 = BgEntityData::GetOwnerEntNum(v14);
            Box = BgEntityData::GetBox(v14);
            BgMissile::MissileTrace(this, v14, results, v13, v15, Box, v52, LastHitCharacterConst, missileClipMask, v51);
          }
        }
      }
    }
  }
  else
  {
    GlassHitId = Trace_GetGlassHitId(results);
    if ( !GlassHitId )
      return;
    if ( EntityState->lerp.pos.trType == TR_INTERPOLATE )
    {
      v22 = end->v[0] - start->v[0];
      v24 = LODWORD(end->v[1]);
      *(float *)&v24 = end->v[1] - start->v[1];
      v23 = v24;
      v25 = end->v[2] - start->v[2];
      *(float *)&v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)timeDeltaMsec).m128_f32[0];
      v26 = (float)((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v22 * v22)) + (float)(v25 * v25)) * (float)(1000000.0 / (float)(*(float *)&v24 * *(float *)&v24));
      v63 = v22;
      v64 = *(float *)&v23;
      v65 = v25;
    }
    else
    {
      this->EvaluatePosTrajectoryDelta(this, v14, simulationTime, (vec3_t *)&v63);
      v22 = v63;
      v23 = LODWORD(v64);
      v25 = v65;
      v26 = (float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v22 * v22)) + (float)(v25 * v25);
    }
    if ( alwaysShatterOnImpact )
      goto LABEL_25;
    v27 = DCONST_DVARFLT_bg_missileGlassShatterVel;
    if ( !DCONST_DVARFLT_bg_missileGlassShatterVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileGlassShatterVel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v26 >= (float)(v27->current.value * v27->current.value) )
    {
      v25 = v65;
      v23 = LODWORD(v64);
      v22 = v63;
LABEL_25:
      if ( predicted )
      {
        v36 = this->GlassTempDestroyPiece(this, GlassHitId - 1);
      }
      else
      {
        v28 = v23;
        *(float *)&v28 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v22 * v22)) + (float)(v25 * v25));
        _XMM3 = v28;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        *(float *)&v32 = *(float *)&v23 * (float)(1.0 / *(float *)&_XMM0);
        fraction = results->fraction;
        *(float *)v66 = v22 * (float)(1.0 / *(float *)&_XMM0);
        *(float *)&v66[2] = v25 * (float)(1.0 / *(float *)&_XMM0);
        *(float *)&_XMM0 = end->v[0];
        v66[1] = v32;
        v34 = this->__vftable;
        v35 = (float)(end->v[1] - start->v[1]) * fraction;
        *(float *)&v28 = end->v[2] - start->v[2];
        *(float *)v67 = (float)((float)(*(float *)&_XMM0 - start->v[0]) * fraction) + start->v[0];
        *(float *)&v67[1] = v35 + start->v[1];
        *(float *)&v67[2] = (float)(*(float *)&v28 * fraction) + start->v[2];
        v34->GlassDestroyPiece(this, GlassHitId - 1, (const vec3_t *)v67, (const vec3_t *)v66);
        v36 = 0;
      }
      passEntityNum2 = BgMissile::GetLastHitCharacterConst(this, v14);
      detailTrace = BG_WeaponRadiusDamageDetailTrace(r_weapon, EntityState->inAltWeaponMode);
      passEntityNum = BgEntityData::GetOwnerEntNum(v14);
      bounds = BgEntityData::GetBox(v14);
      BgMissile::MissileTrace(this, v14, results, start, end, bounds, passEntityNum, passEntityNum2, missileClipMask, detailTrace);
      if ( predicted )
        this->GlassRestorePiece(this, GlassHitId - 1, v36);
    }
  }
}

/*
==============
BgMissile::PostSimulate
==============
*/
void BgMissile::PostSimulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const bool restoreAntiLag)
{
  ;
}

/*
==============
BgMissile::PreSimulate
==============
*/
void BgMissile::PreSimulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, bool *outRestoreAntiLag)
{
  ;
}

/*
==============
BgMissile::Rand
==============
*/
int BgMissile::Rand(BgMissile *this)
{
  return BG_rand(&this->m_holdRand);
}

/*
==============
BgMissile::Rand
==============
*/
double BgMissile::Rand(BgMissile *this, float min, float max)
{
  return BG_flrand(min, max, &this->m_holdRand);
}

/*
==============
BgMissile::Random
==============
*/
double BgMissile::Random(BgMissile *this)
{
  return BG_random(&this->m_holdRand);
}

/*
==============
BgMissile::RandomPointInUnitCircle
==============
*/
void BgMissile::RandomPointInUnitCircle(BgMissile *this, const unsigned int seed, float *outX, float *outY)
{
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  unsigned int pHoldrand; 
  float c; 
  float s; 

  if ( !outX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4403, ASSERT_TYPE_ASSERT, "(outX)", (const char *)&queryFormat, "outX") )
    __debugbreak();
  if ( !outY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4404, ASSERT_TYPE_ASSERT, "(outY)", (const char *)&queryFormat, "outY") )
    __debugbreak();
  pHoldrand = seed;
  BG_srand(&pHoldrand);
  v7 = BG_random(&pHoldrand);
  v8 = *(float *)&v7 * 360.0;
  v9 = BG_random(&pHoldrand);
  FastSinCos(v8 * 0.017453292, &s, &c);
  v10 = *(float *)&v9 * s;
  *outX = *(float *)&v9 * c;
  *outY = v10;
}

/*
==============
BgMissile::RobotechSteering
==============
*/
void BgMissile::RobotechSteering(BgMissile *this, BgEntityData *entityData, const WeaponDef *weapDef, const int simulationTime, const int timeDeltaMsec)
{
  entityState_t *EntityState; 
  BgEntityComponents *Components; 
  float v11; 
  float v12; 
  float v13; 
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int ParentEntNum; 
  __int64 v16; 
  __int128 v17; 
  float v19; 
  float v22; 
  vec3_t trBase; 
  float s; 
  float c[3]; 
  __int64 v26; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t angles; 
  vec3_t outResult; 

  v26 = -2i64;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1725, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1728, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1731, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  BgMissile::GetTargetPosition(this, entityData, &outResult);
  v11 = outResult.v[2];
  v12 = outResult.v[1];
  v13 = outResult.v[0];
  if ( outResult.v[0] != 0.0 || outResult.v[1] != 0.0 || outResult.v[2] != 0.0 )
  {
    if ( BgEntityData::GetParentEntNum(entityData) == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1742, ASSERT_TYPE_ASSERT, "(entityData->GetParentEntNum() != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityData->GetParentEntNum() != ENTITYNUM_NONE") )
      __debugbreak();
    GetEntityState = this->GetEntityState;
    ParentEntNum = BgEntityData::GetParentEntNum(entityData);
    v16 = (__int64)GetEntityState(this, ParentEntNum);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1745, ASSERT_TYPE_ASSERT, "(esParent)", (const char *)&queryFormat, "esParent") )
      __debugbreak();
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    vec.v[0] = v13 - trBase.v[0];
    vec.v[1] = v12 - trBase.v[1];
    vec.v[2] = v11 - trBase.v[2];
    Trajectory_GetTrBase((const trajectory_t_secure *)(v16 + 16), &trBase);
    v17 = LODWORD(vec.v[1]);
    *(float *)&v17 = fsqrt((float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
    _XMM11 = v17;
    v19 = fsqrt((float)((float)((float)(trBase.v[0] - v13) * (float)(trBase.v[0] - v13)) + (float)((float)(trBase.v[1] - v12) * (float)(trBase.v[1] - v12))) + (float)((float)(trBase.v[2] - v11) * (float)(trBase.v[2] - v11)));
    __asm
    {
      vcmpless xmm0, xmm11, cs:__real@80000000
      vblendvps xmm1, xmm11, xmm10, xmm0
    }
    vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
    vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM1);
    vectoangles(&vec, &angles);
    FastSinCos((float)((float)((float)(weapDef->robotechFrequency + Components->missile.nonGrenade.robotechVariance.frequency) * (float)(simulationTime - Components->item[0].clipAmmoCount[1])) + (float)(Components->item[0].ammoCount % 360)) * 0.017453292, &s, c);
    angles.v[0] = (float)((float)((float)(weapDef->robotechMaxPitch + Components->missile.nonGrenade.robotechVariance.pitch) * (float)(*(float *)&v17 / v19)) * s) + angles.v[0];
    angles.v[1] = (float)((float)((float)(weapDef->robotechMaxYaw + Components->missile.nonGrenade.robotechVariance.yaw) * (float)(*(float *)&v17 / v19)) * c[0]) + angles.v[1];
    AngleVectors(&angles, &forward, NULL, NULL);
    *(float *)&v17 = (float)weapDef->iProjectileSpeed;
    forward.v[0] = *(float *)&v17 * forward.v[0];
    forward.v[1] = *(float *)&v17 * forward.v[1];
    forward.v[2] = *(float *)&v17 * forward.v[2];
    v22 = (float)timeDeltaMsec * 0.001;
    *(double *)&_XMM0 = I_fclamp((float)((float)(simulationTime - Components->item[0].clipAmmoCount[1]) - v22) * 0.0099999998, 0.0, 1.0);
    *(float *)&v17 = *(float *)&_XMM0 * 10.0;
    *(double *)&_XMM0 = DiffTrack(forward.v[1], EntityState->lerp.pos.trDelta.v[1], *(float *)&_XMM0 * 10.0, v22);
    EntityState->lerp.pos.trDelta.v[1] = *(float *)&_XMM0;
    *(double *)&_XMM0 = DiffTrack(forward.v[0], EntityState->lerp.pos.trDelta.v[0], *(float *)&v17, v22);
    EntityState->lerp.pos.trDelta.v[0] = *(float *)&_XMM0;
    *(double *)&_XMM0 = DiffTrack(forward.v[2], EntityState->lerp.pos.trDelta.v[2], *(float *)&v17, v22);
    EntityState->lerp.pos.trDelta.v[2] = *(float *)&_XMM0;
    if ( *(float *)&_XMM11 < (float)weapDef->iProjectileDetonationRadius )
      this->Explode(this, entityData);
    memset(&trBase, 0, sizeof(trBase));
  }
}

/*
==============
BgMissile::SRand
==============
*/
void BgMissile::SRand(BgMissile *this, unsigned int seed)
{
  this->m_holdRand = 159719620 - 570470319 * seed;
}

/*
==============
BgMissile::SetDoorScriptable
==============
*/
void BgMissile::SetDoorScriptable(BgMissile *this, BgEntityData *entityData, unsigned int scriptableIndex)
{
  BgEntityComponents *Components; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 488, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( Components )
  {
    Components->missile.doorScriptableIndex = scriptableIndex;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 491, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
      __debugbreak();
    MEMORY[0x24] = scriptableIndex;
  }
}

/*
==============
BgMissile::SetEntityWeapon
==============
*/
void BgMissile::SetEntityWeapon(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon)
{
  entityState_t *EntityState; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 131, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 132, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 135, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 448, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  weaponMap->SetWeapon(weaponMap, &EntityState->weaponHandle, weapon);
}

/*
==============
BgMissile::SetMissileLastHitCharacter
==============
*/
void BgMissile::SetMissileLastHitCharacter(BgMissile *this, BgEntityData *entityData, const int lastHitCharacterEntNum)
{
  BgEntityComponents *Components; 
  int v6; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2852, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2855, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  v6 = 0;
  if ( lastHitCharacterEntNum < 2048 )
    v6 = lastHitCharacterEntNum + 1;
  Components->missile.lastHitCharacter = v6;
}

/*
==============
BgMissile::ShouldBePredicted
==============
*/
bool BgMissile::ShouldBePredicted(const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_grenadeWeapon, const bool isAlternate)
{
  const dvar_t *v8; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 53, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps || BG_IsThirdPersonMode(weaponMap, ps) )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) )
    return BG_IsPredictedProjectileWeapon(r_grenadeWeapon, isAlternate);
  v8 = DCONST_DVARBOOL_bg_thirdPerson;
  if ( !DCONST_DVARBOOL_bg_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  return !v8->current.enabled && BG_IsPredictedProjectileWeapon(r_grenadeWeapon, isAlternate);
}

/*
==============
BgMissile::Simulate
==============
*/
void BgMissile::Simulate(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  entityState_t *EntityState; 
  bool inAltWeaponMode; 
  const Weapon *WeaponForEntity; 
  BgEntityComponents *v12; 
  entityState_t *v13; 
  float v14; 
  float v15; 
  double v16; 
  int passEntityNum; 
  int ParentEntNum; 
  trType_t trType; 
  const Bounds *Box; 
  const vec3_t *v21; 
  const vec3_t *v22; 
  vec3_t *v23; 
  __int128 v24; 
  float v25; 
  const Bounds *v29; 
  const vec3_t *v30; 
  float fraction; 
  vec3_t *v32; 
  const vec3_t *v33; 
  Physics_WorldId v34; 
  int v35; 
  const Bounds *v36; 
  const vec3_t *v37; 
  const vec3_t *Origin; 
  const Bounds *v39; 
  const vec3_t *v40; 
  int surfaceFlags; 
  const Bounds *v42; 
  const vec3_t *v43; 
  bool alwaysShatterGlassOnImpact; 
  int Damage; 
  const vec3_t *v46; 
  int v47; 
  float v48; 
  vec3_t *v49; 
  vec3_t *v50; 
  vec3_t *v51; 
  float v52; 
  vec3_t *v53; 
  vec3_t *v54; 
  vec3_t *v55; 
  vec3_t *v56; 
  const Bounds *v57; 
  int v58; 
  float v59; 
  float v60; 
  float v61; 
  vec3_t *v62; 
  const Bounds *v63; 
  const vec3_t *v64; 
  vec3_t *v65; 
  void (__fastcall *TriggerDamageGrenadeTouch)(BgMissile *, const int, const vec3_t *, const vec3_t *, int); 
  vec3_t *v67; 
  void (__fastcall *VehicleTrophyTestMissile)(BgMissile *, BgEntityData *, const vec3_t *, const vec3_t *); 
  vec3_t *v69; 
  trType_t v70; 
  const vec3_t *v71; 
  guidedMissileType_t guidedMissileType; 
  void (__fastcall *DrawMissileDebug)(BgMissile *, const BgEntityData *, const vec3_t *, const vec3_t *, const vec4_t *); 
  vec3_t *v74; 
  Bounds *bounds; 
  int contentmask; 
  int contentmaska; 
  bool alwaysShatterOnImpact; 
  bool detailTrace; 
  bool v80; 
  int outMissileClipMask; 
  int passEntityNum2; 
  int v83; 
  vec3_t trBase; 
  int v85; 
  const WeaponDef *v86; 
  BgWeaponMap *weaponMapa; 
  int lastSimulationTimea; 
  vec3_t v89; 
  BgEntityComponents *Components; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  __int64 v92; 
  vec3_t end; 
  vec3_t endpos; 
  vec3_t start; 
  vec3_t originAtSimStart; 
  vec3_t v97; 
  vec3_t v98; 
  vec3_t dir; 
  trace_t results; 
  trace_t v101; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 

  v92 = -2i64;
  lastSimulationTimea = lastSimulationTime;
  weaponMapa = weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 174, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 175, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  this->UpdatePlatformTracking(this, entityData);
  this->BroadcastActorEvents(this, entityData);
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 182, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 185, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(entityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 188, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  inAltWeaponMode = EntityState->inAltWeaponMode;
  v80 = inAltWeaponMode;
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  v86 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  if ( !v86 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 194, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, inAltWeaponMode);
  BG_GetExplosionDamageRangeInfo(WeaponForEntity, inAltWeaponMode, &outDamageRangeInfo);
  passEntityNum2 = BgMissile::GetLastHitCharacter(this, entityData);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 510, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  v12 = BgEntityData::GetComponents(entityData);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 513, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  if ( v12->missile.doorScriptableIndex == -1 || (v13 = BgEntityData::GetEntityState(entityData), v13->lerp.pos.trType) )
  {
    outMissileClipMask = BgEntityData::GetClipMask(entityData);
    passEntityNum = BgEntityData::GetOwnerEntNum(entityData);
    v85 = passEntityNum;
    ParentEntNum = BgEntityData::GetParentEntNum(entityData);
    v83 = ParentEntNum;
    trType = EntityState->lerp.pos.trType;
    if ( trType || EntityState->groundEntityNum == 2046 )
    {
      if ( v86->isRollingGrenade && trType == TR_INTERPOLATE )
      {
        EntityState->lerp.pos.trType = BgMissile::GetGrenadeTrType(this, entityData);
        Origin = BgEntityData::GetOrigin(entityData);
        Trajectory_SetTrBase(&EntityState->lerp.pos, Origin);
      }
    }
    else
    {
      end = *BgEntityData::GetOrigin(entityData);
      end.v[0] = end.v[0] - (float)(4.6350002 * Components->mover.pos.pos1.v[1]);
      end.v[1] = end.v[1] - (float)(4.6350002 * Components->mover.pos.pos1.v[2]);
      end.v[2] = end.v[2] - (float)(4.6350002 * Components->mover.pos.pos2.v[0]);
      Box = BgEntityData::GetBox(entityData);
      v21 = BgEntityData::GetOrigin(entityData);
      BgMissile::MissileTrace(this, entityData, &results, v21, &end, Box, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
      if ( results.fraction == 1.0 )
      {
        EntityState->lerp.pos.trType = TR_GRAVITY;
        EntityState->lerp.pos.trTime = simulationTime;
        EntityState->lerp.pos.trDuration = 0;
        v22 = BgEntityData::GetOrigin(entityData);
        Trajectory_SetTrBase(&EntityState->lerp.pos, v22);
        *(_QWORD *)EntityState->lerp.pos.trDelta.v = 0i64;
        EntityState->lerp.pos.trDelta.v[2] = 0.0;
      }
      ParentEntNum = v83;
    }
    originAtSimStart = *BgEntityData::GetOrigin(entityData);
    BgMissile::MissileTrajectory(this, weaponMapa, simulationTime, timeDeltaMsec, entityData, &end, &outMissileClipMask);
    this->KeepPointInPlayableBounds(this, &end);
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    this->KeepPointInPlayableBounds(this, &trBase);
    Trajectory_SetTrBase(&EntityState->lerp.pos, &trBase);
    v23 = BgEntityData::GetOrigin(entityData);
    dir.v[0] = end.v[0] - v23->v[0];
    v24 = LODWORD(end.v[1]);
    dir.v[1] = end.v[1] - v23->v[1];
    v25 = end.v[2] - v23->v[2];
    v97.v[0] = dir.v[0] + end.v[0];
    v97.v[1] = dir.v[1] + end.v[1];
    v97.v[2] = v25 + end.v[2];
    *(float *)&v24 = fsqrt((float)((float)(dir.v[1] * dir.v[1]) + (float)(dir.v[0] * dir.v[0])) + (float)(v25 * v25));
    _XMM4 = v24;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm12, xmm0
    }
    dir.v[0] = (float)(1.0 / *(float *)&_XMM1) * dir.v[0];
    dir.v[1] = (float)(1.0 / *(float *)&_XMM1) * dir.v[1];
    dir.v[2] = (float)(1.0 / *(float *)&_XMM1) * v25;
    if ( *(float *)&v24 >= 0.001 )
    {
      if ( this->m_remoteCameraCollisionPrediction && passEntityNum != 2047 && ParentEntNum != 2047 && this->IsEntityClient(this, ParentEntNum) && this->EntityHasRemoteEyes(this, ParentEntNum) )
      {
        v29 = BgEntityData::GetBox(entityData);
        v30 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v30, &v97, v29, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
        fraction = results.fraction;
        if ( results.fraction < 1.0 )
        {
          v32 = BgEntityData::GetOrigin(entityData);
          endpos.v[0] = (float)((float)(v97.v[0] - v32->v[0]) * fraction) + v32->v[0];
          endpos.v[1] = (float)((float)(v97.v[1] - v32->v[1]) * fraction) + v32->v[1];
          endpos.v[2] = (float)((float)(v97.v[2] - v32->v[2]) * fraction) + v32->v[2];
          this->ProjectileImpactRemoteEyesNotify(this, v83, WeaponForEntity, &endpos);
        }
      }
      if ( v86->bProjImpactExplode || COERCE_FLOAT(LODWORD(EntityState->lerp.pos.trDelta.v[2]) & _xmm) <= 30.0 || (v33 = BgEntityData::GetOrigin(entityData), v34 = this->GetPhysicsMainWorldId(this), PhysicsQuery_LegacyGetPointContents(v34, v33, -1, 32)) )
      {
        v39 = BgEntityData::GetBox(entityData);
        v40 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v40, &end, v39, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
      }
      else
      {
        v35 = outMissileClipMask | 0x20;
        v36 = BgEntityData::GetBox(entityData);
        v37 = BgEntityData::GetOrigin(entityData);
        contentmask = v35;
        passEntityNum = v85;
        BgMissile::MissileTrace(this, entityData, &results, v37, &end, v36, v85, passEntityNum2, contentmask, detailTrace);
      }
      surfaceFlags = results.surfaceFlags;
      if ( (results.surfaceFlags & 0x1F80000) == 11010048 )
      {
        this->CreateWaterSplash(this, entityData, &results, &end);
        v42 = BgEntityData::GetBox(entityData);
        v43 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v43, &end, v42, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
        surfaceFlags = results.surfaceFlags;
      }
      if ( Com_IsSurfaceTypeBreakableGlass(surfaceFlags) )
      {
        alwaysShatterGlassOnImpact = v86->alwaysShatterGlassOnImpact;
        Damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, v80);
        v46 = BgEntityData::GetOrigin(entityData);
        alwaysShatterOnImpact = alwaysShatterGlassOnImpact;
        v47 = outMissileClipMask;
        BgMissile::PenetrateGlass(this, weaponMapa, entityData, outMissileClipMask, simulationTime, timeDeltaMsec, &results, v46, &end, Damage, 0, alwaysShatterOnImpact);
      }
      else
      {
        v47 = outMissileClipMask;
      }
      v48 = results.fraction;
      v49 = BgEntityData::GetOrigin(entityData);
      endpos.v[0] = (float)((float)(end.v[0] - v49->v[0]) * v48) + v49->v[0];
      endpos.v[1] = (float)((float)(end.v[1] - v49->v[1]) * v48) + v49->v[1];
      endpos.v[2] = (float)((float)(end.v[2] - v49->v[2]) * v48) + v49->v[2];
      v50 = BgEntityData::GetOrigin(entityData);
      *v50 = endpos;
      if ( (Flags->m_flags[0] & 0x40000) != 0 )
      {
        if ( results.fraction == 1.0 )
        {
          start = *BgEntityData::GetOrigin(entityData);
          v51 = BgEntityData::GetOrigin(entityData);
          *(_QWORD *)end.v = *(_QWORD *)v51->v;
          v52 = v51->v[2];
          start.v[2] = start.v[2] + 0.13500001;
          end.v[2] = v52 - 1.5;
        }
        else
        {
          v53 = BgEntityData::GetOrigin(entityData);
          start.v[0] = (float)(0.13500001 * results.normal.v[0]) + v53->v[0];
          start.v[1] = (float)(0.13500001 * results.normal.v[1]) + v53->v[1];
          start.v[2] = (float)(0.13500001 * results.normal.v[2]) + v53->v[2];
          v54 = BgEntityData::GetOrigin(entityData);
          end.v[0] = v54->v[0] - (float)(1.5 * results.normal.v[0]);
          end.v[1] = v54->v[1] - (float)(1.5 * results.normal.v[1]);
          end.v[2] = v54->v[2] - (float)(1.5 * results.normal.v[2]);
          if ( results.hitType == TRACE_HITTYPE_SCRIPTABLE && this->ScriptableIsDoor(this, results.hitId) )
          {
            v55 = BgEntityData::GetOrigin(entityData);
            v56 = BgEntityData::GetOrigin(entityData);
            v55->v[0] = (float)(0.000099999997 * results.normal.v[0]) + v56->v[0];
            v55->v[1] = (float)(0.000099999997 * results.normal.v[1]) + v56->v[1];
            v55->v[2] = (float)(0.000099999997 * results.normal.v[2]) + v56->v[2];
          }
        }
        if ( results.fraction != 1.0 || !BG_WeaponSticksToWalls(WeaponForEntity, v80) && !BG_WeaponSticksToFloors(WeaponForEntity, v80) )
        {
          v57 = BgEntityData::GetBox(entityData);
          contentmaska = v47;
          v58 = v85;
          BgMissile::MissileTrace(this, entityData, &v101, &start, &end, v57, v85, passEntityNum2, contentmaska, detailTrace);
          if ( v101.fraction != 1.0 )
          {
            results = v101;
            v98 = *BgEntityData::GetOrigin(entityData);
            Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
            v89 = trBase;
            endpos.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
            endpos.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
            endpos.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
            v59 = endpos.v[0] - end.v[0];
            v60 = endpos.v[1] - end.v[1];
            v61 = endpos.v[2] - end.v[2];
            trBase.v[0] = trBase.v[0] + (float)(endpos.v[0] - end.v[0]);
            trBase.v[1] = trBase.v[1] + (float)(endpos.v[1] - end.v[1]);
            trBase.v[2] = trBase.v[2] + (float)(endpos.v[2] - end.v[2]);
            Trajectory_SetTrBase(&EntityState->lerp.pos, &trBase);
            v62 = BgEntityData::GetOrigin(entityData);
            v62->v[0] = v59 + endpos.v[0];
            v62->v[1] = v60 + endpos.v[1];
            v62->v[2] = v61 + endpos.v[2];
            v63 = BgEntityData::GetBox(entityData);
            v64 = BgEntityData::GetOrigin(entityData);
            BgMissile::MissileTrace(this, entityData, &v101, &v98, v64, v63, v58, passEntityNum2, outMissileClipMask, detailTrace);
            if ( v101.fraction != 1.0 || v101.startsolid || v101.allsolid )
            {
              v65 = BgEntityData::GetOrigin(entityData);
              *v65 = v98;
              Trajectory_SetTrBase(&EntityState->lerp.pos, &v89);
            }
            memset(&v89, 0, sizeof(v89));
          }
        }
      }
      this->LinkEntity(this, EntityState->number);
      if ( BG_ProjectileActivateDist(WeaponForEntity, v80) > 0 )
        Components->mover.pos.pos1.v[0] = fsqrt((float)((float)((float)(endpos.v[1] - originAtSimStart.v[1]) * (float)(endpos.v[1] - originAtSimStart.v[1])) + (float)((float)(endpos.v[0] - originAtSimStart.v[0]) * (float)(endpos.v[0] - originAtSimStart.v[0]))) + (float)((float)(endpos.v[2] - originAtSimStart.v[2]) * (float)(endpos.v[2] - originAtSimStart.v[2]))) + Components->mover.pos.pos1.v[0];
      TriggerDamageGrenadeTouch = this->TriggerDamageGrenadeTouch;
      v67 = BgEntityData::GetOrigin(entityData);
      TriggerDamageGrenadeTouch(this, EntityState->number, &originAtSimStart, v67, (int)outDamageRangeInfo.innerDamage);
      if ( BG_GetWeaponClass(WeaponForEntity, v80) == WEAPCLASS_ROCKETLAUNCHER )
      {
        VehicleTrophyTestMissile = this->VehicleTrophyTestMissile;
        v69 = BgEntityData::GetOrigin(entityData);
        VehicleTrophyTestMissile(this, entityData, &originAtSimStart, v69);
        if ( EntityState->eType != ET_MISSILE )
          goto LABEL_99;
      }
      if ( results.fraction == 1.0 )
      {
        if ( fsqrt((float)((float)(EntityState->lerp.pos.trDelta.v[0] * EntityState->lerp.pos.trDelta.v[0]) + (float)(EntityState->lerp.pos.trDelta.v[1] * EntityState->lerp.pos.trDelta.v[1])) + (float)(EntityState->lerp.pos.trDelta.v[2] * EntityState->lerp.pos.trDelta.v[2])) != 0.0 )
        {
          EntityState->groundEntityNum = 2047;
          if ( BG_GetWeaponClass(WeaponForEntity, v80) == WEAPCLASS_ROCKETLAUNCHER )
          {
            guidedMissileType = v86->guidedMissileType;
            if ( guidedMissileType == MISSILE_GUIDANCE_NONE || guidedMissileType == MISSILE_GUIDANCE_SOFTLOCKON && !BgMissile::IsMissileLockedOn(this, entityData) )
            {
              if ( BG_GetWeaponType(WeaponForEntity, v80) != WEAPTYPE_PROJECTILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 422, ASSERT_TYPE_ASSERT, "(BG_GetWeaponType( weapon, isUsingAlternate ) == WEAPTYPE_PROJECTILE)", (const char *)&queryFormat, "BG_GetWeaponType( weapon, isUsingAlternate ) == WEAPTYPE_PROJECTILE") )
                __debugbreak();
              if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlag(Flags, THERMAL_DRAW) )
                BgMissile::MissileDestabilize(this, weaponMapa, entityData, simulationTime, timeDeltaMsec);
              this->ApplyAttractorsRepulsors(this, entityData);
            }
          }
        }
      }
      else
      {
        if ( (results.surfaceFlags & 4) != 0 )
        {
          this->DeathNotify(this, entityData);
          this->FreeEntity(this, entityData);
LABEL_99:
          memset(&trBase, 0, sizeof(trBase));
          return;
        }
        BgMissile::MissileImpact(this, weaponMapa, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, &originAtSimStart, &results, &dir, &endpos);
        if ( EntityState->eType != ET_MISSILE )
          goto LABEL_99;
        if ( v86->isRollingGrenade && results.normal.v[2] > 0.69999999 )
        {
          v70 = EntityState->lerp.pos.trType;
          if ( v70 )
          {
            if ( (unsigned int)(v70 - 6) > 1 )
            {
              LODWORD(bounds) = EntityState->lerp.pos.trType;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 410, ASSERT_TYPE_ASSERT, "( ( es->lerp.pos.trType == TR_GRAVITY || es->lerp.pos.trType == TR_LOW_GRAVITY ) )", "( es->lerp.pos.trType ) = %i", bounds) )
                __debugbreak();
            }
            EntityState->lerp.pos.trType = TR_INTERPOLATE;
            v71 = BgEntityData::GetOrigin(entityData);
            Trajectory_SetTrBase(&EntityState->lerp.pos, v71);
          }
        }
      }
      DrawMissileDebug = this->DrawMissileDebug;
      v74 = BgEntityData::GetOrigin(entityData);
      DrawMissileDebug(this, entityData, &originAtSimStart, v74, &colorBlue);
      this->DrawAttractorDebug(this);
    }
    this->RunThink(this, entityData);
    goto LABEL_99;
  }
  v14 = v12->mover.pos.pos3.v[1];
  v15 = this->GetDoorAngle(this, entityData);
  v16 = AngleDelta(v15, v14);
  if ( COERCE_FLOAT(LODWORD(v16) & _xmm) > 0.1 )
  {
    v13->lerp.pos.trTime = simulationTime;
    v13->lerp.pos.trType = TR_GRAVITY;
  }
  this->RunThink(this, entityData);
}

/*
==============
BgMissile::StickToDoor
==============
*/
void BgMissile::StickToDoor(BgMissile *this, BgEntityData *entityData, unsigned int scriptableIndex)
{
  BgEntityComponents *Components; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 498, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 501, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  Components->missile.doorScriptableIndex = scriptableIndex;
  Components->mover.pos.pos3.v[1] = this->GetDoorAngle(this, entityData);
}

/*
==============
BgMissile::StuckToDoorUpdate
==============
*/
char BgMissile::StuckToDoorUpdate(BgMissile *this, BgEntityData *entityData, const int simulationTime)
{
  BgEntityComponents *Components; 
  entityState_t *EntityState; 
  float v8; 
  float v9; 
  double v10; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 510, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 513, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  if ( Components->missile.doorScriptableIndex == -1 )
    return 0;
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( EntityState->lerp.pos.trType )
    return 0;
  v8 = Components->mover.pos.pos3.v[1];
  v9 = this->GetDoorAngle(this, entityData);
  v10 = AngleDelta(v9, v8);
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) > 0.1 )
  {
    EntityState->lerp.pos.trTime = simulationTime;
    EntityState->lerp.pos.trType = TR_GRAVITY;
  }
  this->RunThink(this, entityData);
  return 1;
}

/*
==============
BgMissile::Tick
==============
*/
void BgMissile::Tick(BgMissile *this, BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec)
{
  entityState_t *EntityState; 
  bool v11; 
  BgMissile_vtbl *v12; 
  bool v13; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 143, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 146, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 148, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  if ( EntityState->lerp.u.anonymous.data[5] != 2047 && !((unsigned __int8 (__fastcall *)(BgMissile *))this->IsEntityValid)(this) )
    EntityState->lerp.u.anonymous.data[5] = 2047;
  v11 = entityData->IsLinked(entityData);
  v12 = this->__vftable;
  if ( v11 )
  {
    v12->LinkedSimulate(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
  }
  else
  {
    v13 = 0;
    v12->PreSimulate(this, weaponMap, entityData, &v13);
    BgMissile::Simulate(this, weaponMap, entityData, lastSimulationTime, simulationTime, timeDeltaMsec);
    this->PostSimulate(this, weaponMap, entityData, v13);
  }
}

/*
==============
BgMissile::TraceCapsule
==============
*/
void BgMissile::TraceCapsule(BgMissile *this, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentmask)
{
  Physics_WorldId v10; 

  v10 = this->GetPhysicsMainWorldId(this);
  PhysicsQuery_LegacyTrace(v10, results, start, end, bounds, passEntityNum, 1, contentmask, 0, NULL, All);
}

/*
==============
BgMissile::TraceHitCharacter
==============
*/
bool BgMissile::TraceHitCharacter(BgMissile *this, const trace_t *trace)
{
  unsigned __int16 EntityHitId; 
  const entityState_t *v4; 

  EntityHitId = Trace_GetEntityHitId(trace);
  v4 = this->GetEntityState(this, EntityHitId);
  return v4 && BG_IsCharacterEntity(v4);
}

/*
==============
BgMissile::TraceHitCharacterOrCorpse
==============
*/
bool BgMissile::TraceHitCharacterOrCorpse(BgMissile *this, const trace_t *trace)
{
  unsigned __int16 EntityHitId; 
  const entityState_t *v4; 
  const entityState_t *v5; 
  entityType_s eType; 
  int v7; 
  bool result; 

  EntityHitId = Trace_GetEntityHitId(trace);
  v4 = this->GetEntityState(this, EntityHitId);
  v5 = v4;
  result = 0;
  if ( v4 )
  {
    if ( BG_IsCharacterEntity(v4) )
      return 1;
    eType = v5->eType;
    if ( (unsigned __int16)eType <= ET_ACTOR_CORPSE )
    {
      v7 = 2359300;
      if ( _bittest(&v7, eType) )
        return 1;
    }
  }
  return result;
}

/*
==============
BgMissile::TraceHitMovingPlatform
==============
*/
bool BgMissile::TraceHitMovingPlatform(BgMissile *this, const trace_t *trace)
{
  unsigned __int16 EntityHitId; 
  entityState_t *v5; 

  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3366, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  if ( trace->fraction >= 1.0 || trace->hitType != TRACE_HITTYPE_ENTITY || !BGMovingPlatforms::IsMovingPlatform(trace->hitId) )
    return 0;
  EntityHitId = Trace_GetEntityHitId(trace);
  v5 = this->GetEntityState(this, EntityHitId);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3372, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BGMovingPlatforms::IsPlatformType(v5->eType) != 0;
}

/*
==============
BgMissile::TraceHitType
==============
*/
bool BgMissile::TraceHitType(BgMissile *this, const trace_t *trace, int entType)
{
  unsigned __int16 EntityHitId; 
  entityState_t *v6; 

  EntityHitId = Trace_GetEntityHitId(trace);
  v6 = this->GetEntityState(this, EntityHitId);
  return v6 && v6->eType == entType;
}

/*
==============
UseJavelinSteeringRewrite
==============
*/
bool UseJavelinSteeringRewrite()
{
  const dvar_t *v0; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    return 0;
  v0 = DVARBOOL_killswitch_javeling_steering_rewrite_enabled;
  if ( !DVARBOOL_killswitch_javeling_steering_rewrite_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_javeling_steering_rewrite_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
BgMissile::UseOffhand
==============
*/
void BgMissile::UseOffhand(BgMissile *this, const int creatorEntNum, const int gameTime, const BgWeaponParms *wp)
{
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3744, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  if ( !wp->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3745, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( wp->weapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( wp->weapon )") )
    __debugbreak();
  if ( !BG_IsOffhandWeaponType(&wp->weapon, wp->isAlternate) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3746, ASSERT_TYPE_ASSERT, "(BG_IsOffhandWeaponType( wp->weapon, wp->isAlternate ))", (const char *)&queryFormat, "BG_IsOffhandWeaponType( wp->weapon, wp->isAlternate )") )
    __debugbreak();
  if ( BG_GetWeaponType(&wp->weapon, wp->isAlternate) == WEAPTYPE_GRENADE )
    this->ThrowGrenade(this, creatorEntNum, gameTime, wp);
}

/*
==============
BgMissile::VecToQuat
==============
*/
void BgMissile::VecToQuat(const vec3_t *vec, vec4_t *quat)
{
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  vectoangles(vec, &angles);
  AnglesToAxis(&angles, &axis);
  AxisToQuat(&axis, quat);
}

/*
==============
BgMissile::VerticalSteerToTarget
==============
*/
void BgMissile::VerticalSteerToTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec2_t *toTargetHorzRelDir, float horzDistToTarg, float vertDistToTarg, float currentHorzSpeed, const bool usePersistentTracking, vec3_t *inOutSteer)
{
  float v11; 
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v16; 
  float v17; 
  double v18; 

  v11 = 0.0;
  if ( horzDistToTarg <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1889, ASSERT_TYPE_ASSERT, "(horzDistToTarg > 0)", (const char *)&queryFormat, "horzDistToTarg > 0") )
    __debugbreak();
  if ( usePersistentTracking || toTargetHorzRelDir->v[0] >= 0.0 )
  {
    if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1894, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
      __debugbreak();
    EntityState = BgEntityData::GetEntityState(entityData);
    if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1897, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
    v16 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
    if ( timeDeltaMsec > 0 )
      v11 = 1000.0 / (float)timeDeltaMsec;
    v17 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(currentHorzSpeed * toTargetHorzRelDir->v[0]) & _xmm) * vertDistToTarg) / horzDistToTarg) - EntityState->lerp.pos.trDelta.v[2]) * v11;
    inOutSteer->v[2] = v17;
    v18 = I_fclamp(v17, COERCE_FLOAT(LODWORD(v16->maxSteeringAccel) ^ _xmm), v16->maxSteeringAccel);
    inOutSteer->v[2] = *(float *)&v18;
  }
}

/*
==============
BgMissile::VerticalSteering
==============
*/
void BgMissile::VerticalSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *toTargetRelative, float currentHorzSpeed, const bool usePersistentTracking, vec3_t *inOutSteer)
{
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  __int128 horzDistToTarg; 
  float v22; 
  double Float_Internal_DebugName; 
  float v24; 
  __int128 v26; 
  double v28; 
  double v29; 
  int projectileSpeed; 
  int projectileSpeedUp; 
  vec2_t toTargetHorzRelDir; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1920, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1923, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  v14 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  BG_GetProjectileSpeed(WeaponForEntity, EntityState->inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  v15 = 0.0;
  v16 = toTargetRelative->v[1];
  v17 = LODWORD(toTargetRelative->v[0]);
  horzDistToTarg = v17;
  *(float *)&horzDistToTarg = fsqrt((float)(*(float *)&v17 * *(float *)&v17) + (float)(v16 * v16));
  _XMM6 = horzDistToTarg;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  toTargetHorzRelDir.v[1] = v16 * (float)(1.0 / *(float *)&_XMM0);
  toTargetHorzRelDir.v[0] = *(float *)&v17 * (float)(1.0 / *(float *)&_XMM0);
  inOutSteer->v[2] = 0.0;
  if ( *(float *)&horzDistToTarg != 0.0 )
  {
    if ( v14->guidedMissileType == MISSILE_GUIDANCE_SIDEWINDER )
      goto LABEL_11;
    if ( v14->guidedMissileType != MISSILE_GUIDANCE_HELLFIRE )
    {
      if ( v14->guidedMissileType != MISSILE_GUIDANCE_SOFTLOCKON )
        return;
      goto LABEL_11;
    }
    if ( EntityState->lerp.pos.trDuration )
    {
LABEL_11:
      BgMissile::VerticalSteerToTarget(this, weaponMap, entityData, timeDeltaMsec, &toTargetHorzRelDir, *(float *)&horzDistToTarg, toTargetRelative->v[2], currentHorzSpeed, usePersistentTracking, inOutSteer);
      return;
    }
    if ( toTargetRelative->v[0] <= 0.0 || currentHorzSpeed == 0.0 )
    {
      if ( !projectileSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1954, ASSERT_TYPE_ASSERT, "(projectileSpeed != 0)", (const char *)&queryFormat, "projectileSpeed != 0") )
        __debugbreak();
      v22 = *(float *)&horzDistToTarg / (float)projectileSpeed;
    }
    else
    {
      v22 = toTargetRelative->v[0] / (float)projectileSpeed;
    }
    if ( v22 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1958, ASSERT_TYPE_ASSERT, "(minTimeToTarg > 0)", (const char *)&queryFormat, "minTimeToTarg > 0") )
      __debugbreak();
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHellfireMaxSlope, "bg_missileHellfireMaxSlope");
    v24 = EntityState->lerp.pos.trDelta.v[2];
    v26 = *(unsigned __int64 *)&Float_Internal_DebugName;
    *(float *)&v26 = *(float *)&Float_Internal_DebugName * currentHorzSpeed;
    _XMM1 = v26;
    __asm { vminss  xmm2, xmm1, xmm6 }
    if ( *(float *)&_XMM2 <= v24 )
    {
      EntityState->lerp.pos.trDuration = 1;
    }
    else
    {
      if ( timeDeltaMsec > 0 )
        v15 = 1000.0 / (float)timeDeltaMsec;
      inOutSteer->v[2] = (float)(*(float *)&_XMM2 - v24) * v15;
      v28 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHellfireUpAccel, "bg_missileHellfireUpAccel");
      v29 = I_fclamp(inOutSteer->v[2], COERCE_FLOAT(LODWORD(v14->maxSteeringAccel) ^ _xmm), *(float *)&v28);
      inOutSteer->v[2] = *(float *)&v29;
    }
  }
}

