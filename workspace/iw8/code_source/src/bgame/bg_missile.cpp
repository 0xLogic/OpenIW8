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
  const dvar_t *v13; 
  int number; 
  int clientNum; 
  BgAntiLagEntityInfo outInfo; 

  _R14 = inOutVel;
  if ( !antiLag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4524, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( !ownerPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4525, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
    __debugbreak();
  if ( !moverEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4526, ASSERT_TYPE_ASSERT, "(moverEnt)", (const char *)&queryFormat, "moverEnt") )
    __debugbreak();
  v13 = DVARBOOL_addlinkedmovervelocitytomissile;
  if ( !DVARBOOL_addlinkedmovervelocitytomissile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "addlinkedmovervelocitytomissile") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    number = moverEnt->number;
    clientNum = ownerPs->clientNum;
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)antiLag, clientNum, number, 8u, gameTime, &outInfo) )
    {
      _RAX = missileDir;
      __asm
      {
        vmovaps [rsp+128h+var_38], xmm6
        vmovaps [rsp+128h+var_48], xmm7
        vmovss  xmm6, dword ptr [rax+4]
        vmovss  xmm4, dword ptr [rax]
        vmovss  xmm7, dword ptr [rax+8]
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm5, xmm4, xmm1
        vmulss  xmm0, xmm5, dword ptr [rsp+128h+var_E8.velocity]
        vmulss  xmm6, xmm6, xmm1
        vmulss  xmm7, xmm7, xmm1
        vmulss  xmm1, xmm6, dword ptr [rsp+128h+var_E8.velocity+4]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, dword ptr [rsp+128h+var_E8.velocity+8]
        vaddss  xmm3, xmm2, xmm1
        vxorps  xmm0, xmm0, xmm0
        vmaxss  xmm4, xmm3, xmm0
        vmulss  xmm1, xmm4, xmm5
        vaddss  xmm0, xmm1, dword ptr [r14]
        vmulss  xmm1, xmm6, xmm4
        vmovaps xmm6, [rsp+128h+var_38]
        vmovss  dword ptr [r14], xmm0
        vaddss  xmm0, xmm1, dword ptr [r14+4]
        vmulss  xmm1, xmm7, xmm4
        vmovaps xmm7, [rsp+128h+var_48]
        vmovss  dword ptr [r14+4], xmm0
        vaddss  xmm0, xmm1, dword ptr [r14+8]
        vmovss  dword ptr [r14+8], xmm0
      }
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
  BgAntiLagEntityInfo outInfo; 

  _RBX = inOutVel;
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
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+var_C8.velocity]
        vaddss  xmm1, xmm0, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+0F8h+var_C8.velocity+4]
        vmovss  dword ptr [rbx], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rsp+0F8h+var_C8.velocity+8]
        vmovss  dword ptr [rbx+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm1
      }
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
  Weapon *WeaponForEntity; 
  const vec3_t *Origin; 
  Physics_WorldId v27; 
  int PointContents; 
  const dvar_t *v36; 
  bool v45; 
  signed __int16 EntityHitId; 
  unsigned __int16 v59; 
  const dvar_t *v65; 
  char v67; 
  bool v72; 
  bool v73; 
  const dvar_t *v74; 
  char v85; 
  char v86; 
  char v102; 
  int LastHitCharacter; 
  bool v118; 
  int ClipMask; 
  int OwnerEntNum; 
  const Bounds *Box; 
  const vec3_t *v122; 
  WeapStickinessType v150; 
  vec3_t *v167; 
  Weapon *v168; 
  bool (__fastcall *SetEntityOriginAndAngles)(BgMissile *, BgEntityData *, const vec3_t *, const vec3_t *, const bool, const bool); 
  vec3_t *v173; 
  unsigned __int16 v174; 
  unsigned int hitId; 
  char v176; 
  bool v177; 
  unsigned __int16 v178; 
  void (*DebugText)(BgMissile *, const char *, ...); 
  const char *v180; 
  __int64 result; 
  int v207; 
  bool v208; 
  int v209; 
  int v210; 
  const Bounds *v211; 
  const vec3_t *v212; 
  const vec3_t *v227; 
  vec3_t *v229; 
  trace_t *v230; 
  unsigned __int16 v240; 
  BOOL fmt; 
  float hitFractionb; 
  BOOL hitFraction; 
  __int64 hitFractiona; 
  trajectory_t_secure *pos; 
  bool inAltWeaponMode; 
  bool v266; 
  char v267; 
  int v268; 
  int v269; 
  int v270; 
  WeapStickinessType v271; 
  unsigned int v272; 
  unsigned __int16 lastSimulationTimeb; 
  float outRollSlideSpeed[2]; 
  Weapon *r_weapon; 
  int surfType[2]; 
  trace_t *v278; 
  int v279; 
  WeaponDef *weapDef; 
  BgWeaponMap *weaponMapa; 
  const entityState_t *EntityState; 
  vec3_t *p_normal; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  vec3_t *p_trDelta; 
  BgEntityComponents *Components; 
  vec3_t preBounceVelocity; 
  vec3_t angles; 
  vec3_t end; 
  vec3_t v290; 
  vec3_t cross; 
  vec3_t right; 
  vec3_t up; 
  vec2_t vec; 
  vec3_t v0; 
  trace_t results; 
  trace_t v298; 
  char v303; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  _RDI = trace;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v278 = trace;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BounceMissile");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2936, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  _R14 = EntityState;
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2939, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  _R15 = (__int64)Components;
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
  v27 = this->GetPhysicsMainWorldId(this);
  PointContents = PhysicsQuery_LegacyGetPointContents(v27, Origin, -1, 32);
  __asm { vmovss  xmm1, dword ptr [rdi] }
  v279 = PointContents;
  surfType[0] = (trace->surfaceFlags >> 19) & 0x3F;
  __asm
  {
    vmovss  [rsp+2F0h+hitFraction], xmm1
    vxorps  xmm14, xmm14, xmm14
    vcvtsi2ss xmm14, xmm14, ecx
    vmulss  xmm0, xmm14, xmm1
    vcvttss2si ecx, xmm0
  }
  BgMissile::CalculateMissileVelocity(this, weaponMapa, entityData, originAtSimStart, lastSimulationTime + _ECX, hitFractionb, timeDeltaMsec, &preBounceVelocity);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+1F0h+preBounceVelocity]
    vmovss  xmm1, dword ptr [rbp+1F0h+preBounceVelocity+4]
  }
  v36 = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  _RSI = &trace->normal;
  p_normal = &trace->normal;
  _RBX = &EntityState->lerp.pos.trDelta;
  p_trDelta = &EntityState->lerp.pos.trDelta;
  *(_QWORD *)outRollSlideSpeed = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  __asm
  {
    vmulss  xmm3, xmm0, dword ptr [rsi]
    vmulss  xmm2, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rbp+1F0h+preBounceVelocity+8]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  if ( !DCONST_DVARBOOL_bg_grenadeRollingEnabled )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRollingEnabled") )
      __debugbreak();
    v36 = *(const dvar_t **)outRollSlideSpeed;
  }
  Dvar_CheckFrontendServerThread(v36);
  v45 = *(_BYTE *)(*(_QWORD *)outRollSlideSpeed + 40i64) && weapDef->isRollingGrenade;
  __asm { vmovss  xmm0, dword ptr [rsi] }
  if ( v45 )
    __asm { vxorps  xmm3, xmm6, cs:__xmm@80000000800000008000000080000000 }
  else
    __asm { vmulss  xmm3, xmm6, cs:__real@c0000000 }
  __asm
  {
    vmulss  xmm0, xmm3, xmm0
    vaddss  xmm1, xmm0, dword ptr [rbp+1F0h+preBounceVelocity]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm2, xmm3, dword ptr [rsi+4]
    vaddss  xmm0, xmm2, dword ptr [rbp+1F0h+preBounceVelocity+4]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm1, xmm3, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, dword ptr [rbp+1F0h+preBounceVelocity+8]
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+2F0h+var_29C], xmm0
  }
  if ( (v268 & 0x7F800000) == 2139095040 )
    goto LABEL_141;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+2F0h+var_29C], xmm0
  }
  if ( (v269 & 0x7F800000) == 2139095040 )
    goto LABEL_141;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+2F0h+var_29C], xmm0
  }
  if ( (v270 & 0x7F800000) == 2139095040 )
  {
LABEL_141:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3197, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  xmm8, cs:__real@3f333333 }
  if ( BG_WeaponSticksToWalls(r_weapon, inAltWeaponMode) )
  {
    EntityHitId = Trace_GetEntityHitId(trace);
    _R14->groundEntityNum = EntityHitId;
    this->SetEntityFlag(this, EntityHitId, DEAD|PRONE);
  }
  else
  {
    __asm { vcomiss xmm8, dword ptr [rdi+18h] }
  }
  __asm
  {
    vmovss  xmm13, cs:__real@41c80000
    vmovaps xmmword ptr [rsp+2F0h+var_68+8], xmm7
    vmovaps [rsp+2F0h+var_98+8], xmm10
  }
  v266 = 0;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( (Flags->m_flags[0] & 0x40000) != 0 )
  {
    v59 = Trace_GetEntityHitId(trace);
    __asm { vmovaps xmm2, xmm6; dot }
    v266 = BgMissile::GrenadeBounceVelocity(this, &preBounceVelocity, *(float *)&_XMM2, &trace->normal, surfType[0], weapDef, &_R14->lerp.pos, outRollSlideSpeed, &v0, v59);
    __asm { vmovss  xmm10, cs:__real@3f800000 }
    if ( v266 && BgMissile::IsGrenade(this, weaponMapa, entityData) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rbp+1F0h+timeDeltaMsec]
        vmovaps xmmword ptr [rsp+2F0h+var_88+8], xmm9
        vmulss  xmm9, xmm0, cs:__real@3a83126f
      }
      *(double *)&_XMM0 = BG_random(&this->m_holdRand);
      v65 = DCONST_DVARFLT_bg_grenadeBumpFreq;
      *(_QWORD *)surfType = DCONST_DVARFLT_bg_grenadeBumpFreq;
      __asm { vmovaps xmm6, xmm0 }
      if ( !DCONST_DVARFLT_bg_grenadeBumpFreq )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeBumpFreq") )
          __debugbreak();
        v65 = *(const dvar_t **)surfType;
      }
      Dvar_CheckFrontendServerThread(v65);
      _RAX = *(const dvar_t **)surfType;
      __asm
      {
        vmovss  xmm7, [rsp+2F0h+outRollSlideSpeed]
        vcomiss xmm6, dword ptr [rax+28h]
      }
      if ( v67 )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeBumpMag, "bg_grenadeBumpMag");
        __asm { vmulss  xmm6, xmm0, xmm7 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeBumpMax, "bg_grenadeBumpMax");
        __asm { vminss  xmm6, xmm0, xmm6 }
        v72 = Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE);
        v67 = 0;
        v73 = !v72;
        if ( v72 )
        {
          v74 = DVARFLT_bg_gravity;
          *(_QWORD *)outRollSlideSpeed = DVARFLT_bg_gravity;
          if ( !DVARFLT_bg_gravity )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_gravity") )
              __debugbreak();
            v74 = *(const dvar_t **)outRollSlideSpeed;
          }
          Dvar_CheckFrontendServerThread(v74);
          _RAX = *(const dvar_t **)outRollSlideSpeed;
          __asm { vmovss  xmm0, dword ptr [rax+28h] }
        }
        else
        {
          __asm { vmovss  xmm0, cs:__real@44480000 }
        }
        __asm
        {
          vmulss  xmm0, xmm0, xmm9
          vcomiss xmm6, xmm0
        }
        if ( !(v67 | v73) )
        {
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [rsi]
            vaddss  xmm1, xmm0, dword ptr [rbx]
            vmovss  dword ptr [rbx], xmm1
            vmulss  xmm0, xmm6, dword ptr [rsi+4]
            vaddss  xmm1, xmm0, dword ptr [rbx+4]
            vmovss  dword ptr [rbx+4], xmm1
            vmulss  xmm0, xmm6, dword ptr [rsi+8]
            vaddss  xmm1, xmm0, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm1
          }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1F0h+v0+8]
        vcomiss xmm0, xmm13
      }
      if ( v67 )
      {
        __asm { vcomiss xmm8, dword ptr [rdi+18h] }
        if ( v67 )
        {
          __asm { vmovaps xmmword ptr [rsp+2F0h+var_B8+8], xmm12 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleFreq, "bg_grenadeWobbleFreq");
          __asm
          {
            vmovss  xmm2, cs:__real@40c90fdb
            vmovss  xmm8, dword ptr [r15+4Ch]
            vmulss  xmm1, xmm0, xmm7
            vmulss  xmm0, xmm1, xmm9
            vmulss  xmm0, xmm0, xmm2
            vaddss  xmm0, xmm0, xmm8
            vcomiss xmm0, xmm2
            vmovss  dword ptr [r15+4Ch], xmm0
          }
          if ( !(v85 | v86) )
          {
            __asm { vmovss  xmm1, cs:__real@c0c90fdb }
            do
            {
              __asm
              {
                vaddss  xmm0, xmm0, xmm1; X
                vcomiss xmm0, xmm2
              }
            }
            while ( !(v85 | v86) );
            __asm { vmovss  dword ptr [r15+4Ch], xmm0 }
          }
          *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
          __asm
          {
            vmovaps xmm6, xmm0
            vmovaps xmm0, xmm8; X
          }
          sinf_0(*(float *)&_XMM0);
          __asm
          {
            vcomiss xmm7, cs:__real@3c23d70a
            vsubss  xmm6, xmm6, xmm0
          }
          if ( !(v67 | v73) )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleFwdMag, "bg_grenadeWobbleFwdMag");
            __asm
            {
              vmulss  xmm1, xmm0, xmm6
              vaddss  xmm2, xmm1, xmm7
              vdivss  xmm3, xmm2, xmm7
              vmulss  xmm0, xmm3, dword ptr [rbx]
              vmovss  dword ptr [rbx], xmm0
              vmulss  xmm1, xmm3, dword ptr [rbx+4]
              vmovss  dword ptr [rbx+4], xmm1
              vmulss  xmm0, xmm3, dword ptr [rbx+8]
              vmovss  dword ptr [rbx+8], xmm0
            }
          }
          Vec3Cross(&v0, &trace->normal, &cross);
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleSideDamp, "bg_grenadeWobbleSideDamp");
          __asm
          {
            vmovss  xmm8, dword ptr [rbp+1F0h+cross+8]
            vmovss  xmm9, dword ptr [rbp+1F0h+cross+4]
            vmovss  xmm12, dword ptr [rbp+1F0h+cross]
            vmulss  xmm1, xmm0, xmm7
            vsubss  xmm2, xmm10, xmm1
            vmaxss  xmm7, xmm2, xmm11
            vcomiss xmm7, xmm11
          }
          if ( !(v67 | v102) )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeWobbleSideMag, "bg_grenadeWobbleSideMag");
            __asm
            {
              vmulss  xmm1, xmm0, xmm6
              vmulss  xmm6, xmm1, xmm7
            }
            BgEntityData::GetOrigin(entityData);
            __asm
            {
              vmulss  xmm0, xmm6, xmm12
              vmulss  xmm2, xmm6, xmm9
              vaddss  xmm1, xmm0, dword ptr [rax]
              vmovss  dword ptr [rbp+1F0h+end], xmm1
              vaddss  xmm0, xmm2, dword ptr [rax+4]
              vmulss  xmm1, xmm6, xmm8
              vmovss  dword ptr [rbp+1F0h+end+4], xmm0
              vaddss  xmm2, xmm1, dword ptr [rax+8]
              vmovss  dword ptr [rbp+1F0h+end+8], xmm2
            }
            LastHitCharacter = BgMissile::GetLastHitCharacter(this, entityData);
            v118 = BG_WeaponRadiusDamageDetailTrace(r_weapon, _R14->inAltWeaponMode);
            ClipMask = BgEntityData::GetClipMask(entityData);
            OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
            Box = BgEntityData::GetBox(entityData);
            v122 = BgEntityData::GetOrigin(entityData);
            BgMissile::MissileTrace(this, entityData, &results, v122, &end, Box, OwnerEntNum, LastHitCharacter, ClipMask, v118);
            _RBX = BgEntityData::GetOrigin(entityData);
            BgEntityData::GetOrigin(entityData);
            __asm
            {
              vmovss  xmm6, [rbp+1F0h+results.fraction]
              vmovss  xmm0, dword ptr [rbp+1F0h+end]
            }
            _RDI = v278;
            __asm { vsubss  xmm1, xmm0, dword ptr [rax] }
            _RSI = p_normal;
            _R14 = EntityState;
            _R15 = (__int64)Components;
            __asm
            {
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax]
              vmovss  dword ptr [rbx], xmm3
              vmovss  xmm0, dword ptr [rbp+1F0h+end+4]
              vsubss  xmm1, xmm0, dword ptr [rax+4]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+4]
              vmovss  dword ptr [rbx+4], xmm3
              vmovss  xmm0, dword ptr [rbp+1F0h+end+8]
              vsubss  xmm1, xmm0, dword ptr [rax+8]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rax+8]
              vmovss  dword ptr [rbx+8], xmm3
            }
            _RBX = p_trDelta;
          }
          __asm { vucomiss xmm11, dword ptr [r15+50h] }
          if ( v102 )
          {
            *(double *)&_XMM0 = BG_random(&this->m_holdRand);
            __asm
            {
              vmulss  xmm1, xmm0, cs:__real@40000000
              vsubss  xmm2, xmm1, xmm10
              vmovss  dword ptr [r15+50h], xmm2
            }
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_grenadeCurveMax, "bg_grenadeCurveMax");
          __asm
          {
            vmulss  xmm3, xmm0, dword ptr [r15+50h]
            vmulss  xmm1, xmm3, xmm12
            vaddss  xmm0, xmm1, dword ptr [rbx]
            vmovaps xmm12, xmmword ptr [rsp+2F0h+var_B8+8]
            vmovss  dword ptr [rbx], xmm0
            vmulss  xmm2, xmm3, xmm9
            vaddss  xmm1, xmm2, dword ptr [rbx+4]
            vmulss  xmm0, xmm3, xmm8
            vmovss  dword ptr [rbx+4], xmm1
            vaddss  xmm2, xmm0, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm2
          }
        }
      }
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovaps xmm9, xmmword ptr [rsp+2F0h+var_88+8]
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rsp+2F0h+outRollSlideSpeed], xmm0
      }
      if ( (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_142;
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+4]
        vmovss  [rsp+2F0h+outRollSlideSpeed], xmm0
      }
      if ( (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_142;
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  [rsp+2F0h+outRollSlideSpeed], xmm0
      }
      if ( (LODWORD(outRollSlideSpeed[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_142:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3030, ASSERT_TYPE_SANITY, "( !IS_NAN( ( entityData->GetOrigin() )[0] ) && !IS_NAN( ( entityData->GetOrigin() )[1] ) && !IS_NAN( ( entityData->GetOrigin() )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( entityData->GetOrigin() )[0] ) && !IS_NAN( ( entityData->GetOrigin() )[1] ) && !IS_NAN( ( entityData->GetOrigin() )[2] )") )
          __debugbreak();
      }
    }
    v271 = BG_WeaponStickinessType(r_weapon, inAltWeaponMode);
    if ( BgMissile::MissileShouldStopAtImpact(this, r_weapon, inAltWeaponMode, _RDI, _RBX, entityData) )
    {
      v150 = v271;
      v272 = (v271 != WEAPSTICKINESS_NONE) + 2;
      switch ( v150 )
      {
        case WEAPSTICKINESS_GROUND_WITH_YAW:
          if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3406, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
            __debugbreak();
          __asm
          {
            vmulss  xmm0, xmm14, dword ptr [rdi]
            vcvttss2si r8d, xmm0
          }
          this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + _ER8, &angles);
          __asm { vmovss  xmm0, dword ptr [rbp+1F0h+angles+4]; fYaw }
          *(double *)&_XMM0 = PitchForYawOnNormal(*(const float *)&_XMM0, _RSI);
          __asm
          {
            vmovss  dword ptr [rbp+1F0h+angles], xmm0
            vmovss  dword ptr [rbp+1F0h+angles+8], xmm11
          }
          AngleVectors(&angles, NULL, &right, &up);
          __asm
          {
            vmovss  xmm4, dword ptr [rsi+4]
            vmulss  xmm0, xmm4, dword ptr [rbp+1F0h+right+4]
            vmovss  xmm3, dword ptr [rsi]
            vmulss  xmm1, xmm3, dword ptr [rbp+1F0h+right]
            vmovss  xmm5, dword ptr [rsi+8]
            vmulss  xmm3, xmm3, dword ptr [rbp+1F0h+up]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, dword ptr [rbp+1F0h+right+8]
            vaddss  xmm0, xmm2, xmm1; Y
            vmulss  xmm2, xmm4, dword ptr [rbp+1F0h+up+4]
            vmulss  xmm1, xmm5, dword ptr [rbp+1F0h+up+8]
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm1, xmm4, xmm1; X
          }
          *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
          __asm
          {
            vmulss  xmm1, xmm0, cs:__real@42652ee0
            vmovss  dword ptr [rbp+1F0h+angles+8], xmm1
          }
          break;
        case WEAPSTICKINESS_KNIFE:
          v167 = BgEntityData::GetOrigin(entityData);
          v168 = r_weapon;
          v272 = BgMissile::MissileLandAnglesKnife(this, entityData, r_weapon, inAltWeaponMode, _RDI, &angles, v167, lastSimulationTime, simulationTime);
LABEL_91:
          SetEntityOriginAndAngles = this->SetEntityOriginAndAngles;
          v173 = BgEntityData::GetOrigin(entityData);
          LOBYTE(hitFraction) = 1;
          LOBYTE(fmt) = 1;
          SetEntityOriginAndAngles(this, entityData, v173, &angles, fmt, hitFraction);
          *(float *)(_R15 + 16) = _RSI->v[0];
          *(float *)(_R15 + 20) = _RSI->v[1];
          *(float *)(_R15 + 24) = _RSI->v[2];
          v174 = Trace_GetEntityHitId(_RDI);
          v73 = _RDI->hitType == TRACE_HITTYPE_SCRIPTABLE;
          hitId = _RDI->hitId;
          lastSimulationTimeb = v174;
          LODWORD(outRollSlideSpeed[0]) = hitId;
          if ( v73 && this->ScriptableIsDoor(this, hitId) )
          {
            v176 = 1;
            if ( *(_DWORD *)(_R15 + 36) != hitId )
            {
              v267 = 1;
LABEL_99:
              v177 = inAltWeaponMode;
              if ( BG_Missile_SticksToPlayer((const BgEntityComponents *)_R15, v168, inAltWeaponMode) && BgMissile::TraceHitCharacter(this, _RDI) || BG_WeaponSticksToVehicles(v168, inAltWeaponMode) && BgMissile::TraceHitType(this, _RDI, 14) || BG_WeaponSticksToVehicles(v168, inAltWeaponMode) && BgMissile::TraceHitType(this, _RDI, 12) || BG_WeaponSticksToTurrets(v168, inAltWeaponMode) && BgMissile::TraceHitType(this, _RDI, 11) )
              {
                v178 = lastSimulationTimeb;
                if ( lastSimulationTimeb >= 0x7FEu )
                {
                  LODWORD(pos) = 2046;
                  LODWORD(hitFractiona) = lastSimulationTimeb;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3086, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "hitEntId doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", hitFractiona, pos) )
                    __debugbreak();
                }
                this->LinkTo(this, entityData, lastSimulationTimeb, _RDI->partName, 0, NULL);
                if ( this->IsDebugTextEnabled(this) )
                {
                  DebugText = this->DebugText;
                  v180 = SL_ConvertToString(_RDI->partName);
                  DebugText(this, "Linked missile to tag %s on entity %i\n", v180, lastSimulationTimeb);
                  v177 = inAltWeaponMode;
                }
              }
              else
              {
                if ( v267 )
                {
                  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 498, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
                    __debugbreak();
                  _R15 = BgEntityData::GetComponents(entityData);
                  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 501, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
                    __debugbreak();
                  _R15->mover.pos.pos3.v[0] = outRollSlideSpeed[0];
                  *(double *)&_XMM0 = ((double (__fastcall *)(BgMissile *, BgEntityData *))this->GetDoorAngle)(this, entityData);
                  __asm { vmovss  dword ptr [r15+28h], xmm0 }
                }
                else
                {
                  this->MovingPlatformAttemptGrenadeLink(this, entityData, _RDI);
                }
                v178 = lastSimulationTimeb;
              }
              if ( !BG_TimedDetonation(v168, v177) )
                this->SetEntityNextThink(this, entityData, 0);
              this->CheckGrenadeDanger(this, entityData);
              this->StuckNotify(this, entityData, v178, _RDI->partName, _RDI->surfaceFlags, &preBounceVelocity, &_RDI->position, _RSI);
              Sys_ProfEndNamedEvent();
              result = v272;
              goto LABEL_138;
            }
          }
          else
          {
            v176 = 0;
          }
          v267 = 0;
          if ( !v176 && *(_DWORD *)(_R15 + 36) != -1 )
            BgMissile::SetDoorScriptable(this, entityData, 0xFFFFFFFF);
          goto LABEL_99;
        case WEAPSTICKINESS_ALL_ORIENT:
        case WEAPSTICKINESS_GROUND_ORIENT:
          BgMissile::MissileLandAnglesFlat(this, entityData, _RDI, &angles, lastSimulationTime, simulationTime);
          break;
        case WEAPSTICKINESS_ALL:
          _RAX = BgEntityData::GetAngles(entityData);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  dword ptr [rbp+1F0h+angles], xmm0
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rbp+1F0h+angles+4], xmm1
            vmovss  xmm0, dword ptr [rax+8]
            vmovss  dword ptr [rbp+1F0h+angles+8], xmm0
          }
          break;
        default:
          BgMissile::MissileLandAngles(this, entityData, _RDI, &angles, 1, weapDef->thrownSideways ? 2 : 0, lastSimulationTime, simulationTime);
          break;
      }
      v168 = r_weapon;
      goto LABEL_91;
    }
    if ( v271 == WEAPSTICKINESS_KNIFE )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+4]
        vmovss  xmm4, dword ptr [rbx]
        vmovss  xmm6, dword ptr [rbx+8]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm10, xmm0
        vdivss  xmm2, xmm10, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [rbp+1F0h+vec], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  [rbp+1F0h+var_1B8], xmm0
        vmovss  dword ptr [rbp+1F0h+vec+4], xmm1
      }
      *(double *)&_XMM0 = vectoyaw(&vec);
      __asm { vmovss  dword ptr [r14+44h], xmm0 }
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd
    vmulss  xmm3, xmm2, dword ptr [rsi+8]
    vmulss  xmm7, xmm2, dword ptr [rsi]
    vmulss  xmm8, xmm2, dword ptr [rsi+4]
    vcmpltss xmm0, xmm11, xmm3
    vblendvps xmm6, xmm3, xmm11, xmm0
  }
  BgEntityData::GetOrigin(entityData);
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rax]
    vmovss  dword ptr [rbp+1F0h+var_200], xmm0
    vaddss  xmm1, xmm8, dword ptr [rax+4]
    vmovss  dword ptr [rbp+1F0h+var_200+4], xmm1
    vaddss  xmm0, xmm6, dword ptr [rax+8]
    vmovss  dword ptr [rbp+1F0h+var_200+8], xmm0
  }
  v207 = BgMissile::GetLastHitCharacter(this, entityData);
  v208 = BG_WeaponRadiusDamageDetailTrace(r_weapon, _R14->inAltWeaponMode);
  v209 = BgEntityData::GetClipMask(entityData);
  v210 = BgEntityData::GetOwnerEntNum(entityData);
  v211 = BgEntityData::GetBox(entityData);
  v212 = BgEntityData::GetOrigin(entityData);
  BgMissile::MissileTrace(this, entityData, &v298, v212, &v290, v211, v210, v207, v209, v208);
  _RBX = BgEntityData::GetOrigin(entityData);
  BgEntityData::GetOrigin(entityData);
  __asm
  {
    vmovss  xmm6, [rbp+1F0h+var_140.fraction]
    vmovss  xmm0, dword ptr [rbp+1F0h+var_200]
    vsubss  xmm1, xmm0, dword ptr [rax]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rax]
    vmovss  dword ptr [rbx], xmm3
    vmovss  xmm0, dword ptr [rbp+1F0h+var_200+4]
    vsubss  xmm1, xmm0, dword ptr [rax+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rax+4]
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  xmm0, dword ptr [rbp+1F0h+var_200+8]
    vsubss  xmm1, xmm0, dword ptr [rax+8]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rax+8]
    vmovss  dword ptr [rbx+8], xmm3
  }
  v227 = BgEntityData::GetOrigin(entityData);
  _RDI = EntityState;
  Trajectory_SetTrBase(&EntityState->lerp.pos, v227);
  _RDI->lerp.pos.trTime = simulationTime;
  if ( v266 )
  {
    v229 = BgEntityData::GetAngles(entityData);
    v230 = v278;
    BgMissile::MissileRollAngles(this, entityData, v278, &_RDI->lerp.apos, lastSimulationTime, simulationTime, timeDeltaMsec, v229);
  }
  else
  {
    _RAX = p_normal;
    __asm { vmovss  xmm0, dword ptr [rdi+2Ch] }
    v230 = v278;
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vmulss  xmm2, xmm1, dword ptr [rdi+28h]
      vmulss  xmm3, xmm0, dword ptr [rax+4]
      vmovss  xmm0, dword ptr [rdi+30h]
      vmulss  xmm1, xmm0, dword ptr [rax+8]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vcomiss xmm2, xmm13
    }
  }
  if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && BG_ActorOrAgentSystemEnabled() )
  {
    v240 = Trace_GetEntityHitId(v230);
    this->AIGrenadeBounced(this, entityData, v240);
  }
  if ( v279 )
  {
    Sys_ProfEndNamedEvent();
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vsubss  xmm8, xmm0, dword ptr [rbp+1F0h+preBounceVelocity]
      vmovss  dword ptr [rbp+1F0h+preBounceVelocity], xmm8
      vmovss  xmm0, dword ptr [rdi+2Ch]
      vsubss  xmm7, xmm0, dword ptr [rbp+1F0h+preBounceVelocity+4]
      vmovss  dword ptr [rbp+1F0h+preBounceVelocity+4], xmm7
      vmovss  xmm0, dword ptr [rdi+30h]
      vsubss  xmm6, xmm0, dword ptr [rbp+1F0h+preBounceVelocity+8]
      vmovss  dword ptr [rbp+1F0h+preBounceVelocity+8], xmm6
    }
    Sys_ProfEndNamedEvent();
    __asm
    {
      vmulss  xmm1, xmm7, xmm7
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@461c4000
    }
    if ( v67 | v73 )
      result = v266 ? 4 : 0;
    else
      result = 1i64;
  }
LABEL_138:
  __asm
  {
    vmovaps xmm10, [rsp+2F0h+var_98+8]
    vmovaps xmm7, xmmword ptr [rsp+2F0h+var_68+8]
  }
  _R11 = &v303;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
  return result;
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
  int v41[4]; 
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
    else if ( this->GetEntityTransform(this, MissileTargetEnt, (vec3_t *)v41, &angles) )
    {
      AnglesToAxis(&angles, &axis);
      if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1140, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
        __debugbreak();
      _RSI = &Components->beam + 21;
      if ( &Components->beam + 18 == &Components->beam + 21 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0A8h+axis]
        vmulss  xmm3, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rsp+0A8h+axis+0Ch]
        vmulss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsp+0A8h+axis+18h]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm5, xmm4, xmm1
        vmovss  dword ptr [rsi], xmm5
        vmovss  xmm0, dword ptr [rsp+0A8h+axis+4]
        vmulss  xmm3, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rsp+0A8h+axis+10h]
        vmulss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsp+0A8h+axis+1Ch]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rsi+4], xmm2
        vmovss  xmm0, dword ptr [rsp+0A8h+axis+8]
        vmulss  xmm3, xmm0, dword ptr [rdi]
        vmovss  xmm1, dword ptr [rsp+0A8h+axis+14h]
        vmulss  xmm2, xmm1, dword ptr [rdi+4]
        vmovss  xmm0, dword ptr [rsp+0A8h+axis+20h]
        vmulss  xmm1, xmm0, dword ptr [rdi+8]
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vmovss  dword ptr [rsi+8], xmm2
        vaddss  xmm0, xmm5, [rsp+0A8h+var_78]
        vmovss  dword ptr [rsi], xmm0
        vmovss  xmm1, [rsp+0A8h+var_74]
        vaddss  xmm2, xmm1, dword ptr [rbx+58h]
        vmovss  dword ptr [rsi+4], xmm2
        vmovss  xmm0, [rsp+0A8h+var_70]
        vaddss  xmm1, xmm0, dword ptr [rbx+5Ch]
        vmovss  dword ptr [rsi+8], xmm1
      }
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
  char v30; 
  char v31; 
  const Weapon *WeaponForEntity; 
  bool inAltWeaponMode; 
  int projectileSpeed; 
  int projectileSpeedUp[3]; 

  _RBX = outVelocity;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2866, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2869, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->lerp.pos.trType == TR_INTERPOLATE )
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_48], xmm6
      vmovaps [rsp+0B8h+var_58], xmm7
      vmovaps [rsp+0B8h+var_68], xmm8
      vmovaps [rsp+0B8h+var_78], xmm9
    }
    _RAX = BgEntityData::GetOrigin((BgEntityData *)entityData);
    __asm
    {
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm4, xmm0, dword ptr [rbp+0]
      vmovss  xmm0, dword ptr [rax+8]
      vsubss  xmm2, xmm0, dword ptr [rbp+8]
      vmovss  xmm1, dword ptr [rax+4]
      vmovd   xmm0, [rsp+0B8h+timeDeltaMsec]
      vsubss  xmm3, xmm1, dword ptr [rbp+4]
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm5, xmm1, [rsp+0B8h+hitFraction]
      vcvtss2sd xmm0, xmm5, xmm5
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( !(v30 | v31) )
    {
      __asm
      {
        vdivss  xmm0, xmm9, xmm5
        vmulss  xmm2, xmm2, xmm0
        vmulss  xmm3, xmm3, xmm0
        vmulss  xmm4, xmm4, xmm0
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx], xmm4
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  dword ptr [rbx+8], xmm2
    }
    WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
    if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2888, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
      __debugbreak();
    inAltWeaponMode = EntityState->inAltWeaponMode;
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+4]
      vmovss  xmm7, dword ptr [rbx]
      vmovss  xmm8, dword ptr [rbx+8]
    }
    projectileSpeed = 0;
    projectileSpeedUp[0] = 0;
    BG_GetProjectileSpeed(WeaponForEntity, inAltWeaponMode, &projectileSpeed, projectileSpeedUp);
    _ECX = projectileSpeed;
    __asm
    {
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vmovaps xmm8, [rsp+0B8h+var_68]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm0
    }
    if ( !(((unsigned __int64)(_ECX * (__int64)_ECX) >> 32 != 0) | v31) )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+4]
        vmovss  xmm5, dword ptr [rbx]
        vmovss  xmm7, dword ptr [rbx+8]
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm4, xmm9, xmm0
        vmulss  xmm0, xmm5, xmm4
        vmulss  xmm2, xmm6, xmm4
        vmovd   xmm3, ecx
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm1, xmm0, xmm3
        vmulss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rbx], xmm1
        vmulss  xmm1, xmm7, xmm4
        vmulss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rbx+8], xmm2
        vmovss  dword ptr [rbx+4], xmm0
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+0B8h+var_58]
      vmovaps xmm6, [rsp+0B8h+var_48]
      vmovaps xmm9, [rsp+0B8h+var_78]
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
  vec3_t *v23; 
  float s; 
  unsigned int pHoldrand; 
  float c; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps [rsp+88h+var_58], xmm10
    vmovaps xmm6, xmm3
  }
  if ( !wp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3757, ASSERT_TYPE_ASSERT, "(wp)", (const char *)&queryFormat, "wp") )
    __debugbreak();
  __asm { vmulss  xmm0, xmm6, cs:__real@3c8efa35; X }
  *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
  __asm { vmovss  xmm10, cs:__real@41800000 }
  pHoldrand = seed;
  __asm { vmulss  xmm9, xmm0, xmm10 }
  BG_srand(&pHoldrand);
  *(double *)&_XMM0 = BG_random(&pHoldrand);
  __asm { vmulss  xmm6, xmm0, cs:__real@43b40000 }
  *(double *)&_XMM0 = BG_random(&pHoldrand);
  __asm
  {
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm6, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  _RAX = outLaunchDir;
  __asm
  {
    vmulss  xmm2, xmm7, [rsp+88h+c]
    vmulss  xmm0, xmm7, [rsp+88h+s]
  }
  v23 = outLaunchPos;
  __asm
  {
    vmulss  xmm8, xmm0, xmm9
    vmulss  xmm5, xmm2, xmm9
    vmulss  xmm2, xmm10, dword ptr [rbx]
    vmovaps xmm9, [rsp+88h+var_48]
    vmovss  dword ptr [rax], xmm2
    vmulss  xmm3, xmm10, dword ptr [rbx+4]
    vmovss  dword ptr [rax+4], xmm3
    vmulss  xmm4, xmm10, dword ptr [rbx+8]
    vmovaps xmm10, [rsp+88h+var_58]
    vmovss  dword ptr [rax+8], xmm4
    vmulss  xmm0, xmm5, dword ptr [rbx+0Ch]
    vaddss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rax], xmm1
    vmulss  xmm0, xmm5, dword ptr [rbx+10h]
    vaddss  xmm2, xmm0, xmm3
    vmovss  dword ptr [rax+4], xmm2
    vmulss  xmm0, xmm5, dword ptr [rbx+14h]
    vaddss  xmm3, xmm0, xmm4
    vmovss  dword ptr [rax+8], xmm3
    vmulss  xmm0, xmm8, dword ptr [rbx+18h]
    vaddss  xmm7, xmm0, xmm1
    vmovss  dword ptr [rax], xmm7
    vmulss  xmm0, xmm8, dword ptr [rbx+1Ch]
    vaddss  xmm6, xmm0, xmm2
    vmovss  dword ptr [rax+4], xmm6
    vmulss  xmm0, xmm8, dword ptr [rbx+20h]
    vmovaps xmm8, [rsp+88h+var_38]
    vaddss  xmm5, xmm0, xmm3
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovaps xmm7, [rsp+88h+var_28]
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovaps xmm6, [rsp+88h+var_18]
    vmovss  dword ptr [rax+4], xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rax+8], xmm0
  }
  *v23 = wp->muzzleTrace;
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
  const dvar_t *v26; 
  unsigned int v27; 
  BgMissile_vtbl *v33; 
  BgMissile_vtbl *v42; 
  bool enableMissileRicochet; 
  char v93; 
  char v94; 
  __int64 result; 
  float hitFraction; 
  int v99[4]; 
  vec3_t outVelocity; 
  int v101[4]; 
  int v102[4]; 

  _RSI = weapDef;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2767, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2768, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2771, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RBX = trace;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2773, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2776, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  inAltWeaponMode = EntityState->inAltWeaponMode;
  __asm { vmovaps [rsp+0F0h+var_40], xmm6 }
  if ( BG_DisableProjectileCrumpleCheck(WeaponForEntity, inAltWeaponMode) || BG_GetWeaponType(WeaponForEntity, inAltWeaponMode) != WEAPTYPE_PROJECTILE )
  {
    result = 0i64;
  }
  else if ( trace->surfaceFlags == 3670016 )
  {
    result = 1i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm2
      vcvttss2si r8d, xmm1
      vmovss  [rsp+0F0h+hitFraction], xmm2
    }
    BgMissile::CalculateMissileVelocity(this, weaponMap, entityData, originAtSimStart, lastSimulationTime + _ER8, hitFraction, timeDeltaMsec, &outVelocity);
    v26 = DCONST_DVARBOOL_bg_missileCrumpleDebugDraw;
    if ( !DCONST_DVARBOOL_bg_missileCrumpleDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileCrumpleDebugDraw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = 0;
    if ( v26->current.enabled )
    {
      __asm
      {
        vmovss  xmm2, cs:DEBUG_LINE_LENGTH
        vmovss  xmm1, dword ptr [rbx+4]
        vmulss  xmm0, xmm2, dword ptr [rbx+10h]
        vmovss  xmm3, dword ptr [rbx+8]
        vmovss  xmm4, dword ptr [rbx+0Ch]
      }
      v33 = this->__vftable;
      __asm
      {
        vmovss  [rbp+37h+var_B0], xmm1
        vaddss  xmm1, xmm0, xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+14h]
        vmovss  [rbp+37h+var_90], xmm1
        vaddss  xmm1, xmm0, xmm3
        vmulss  xmm0, xmm2, dword ptr [rbx+18h]
        vmovss  [rbp+37h+var_8C], xmm1
        vaddss  xmm1, xmm0, xmm4
        vmovaps [rsp+0F0h+var_50], xmm7
        vmovss  [rbp+37h+var_88], xmm1
        vmovss  [rbp+37h+var_AC], xmm3
        vmovss  [rbp+37h+var_A8], xmm4
        vmovaps [rsp+0F0h+var_60], xmm8
      }
      v33->DebugLineWithDuration(this, entityData, (const vec3_t *)v99, (const vec3_t *)v101, &colorCyan, 0, DEBUG_LINE_DURATION);
      __asm
      {
        vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [rbp+37h+var_A0]
        vmovss  xmm1, dword ptr [rbp+37h+var_A0+4]
      }
      v42 = this->__vftable;
      __asm
      {
        vxorps  xmm6, xmm0, xmm2
        vmovss  xmm0, dword ptr [rbp+37h+var_A0+8]
        vxorps  xmm7, xmm1, xmm2
        vxorps  xmm8, xmm0, xmm2
        vmulss  xmm0, xmm8, xmm8
        vmulss  xmm2, xmm7, xmm7
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm3, cs:DEBUG_LINE_LENGTH
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm4, xmm1, xmm0
        vdivss  xmm5, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm5
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm1, xmm0, [rbp+37h+var_B0]
        vmulss  xmm2, xmm7, xmm5
        vmulss  xmm0, xmm2, xmm3
        vmovss  [rbp+37h+var_80], xmm1
        vaddss  xmm1, xmm0, [rbp+37h+var_AC]
        vmulss  xmm2, xmm8, xmm5
        vmulss  xmm0, xmm2, xmm3
        vmovss  [rbp+37h+var_7C], xmm1
        vaddss  xmm1, xmm0, [rbp+37h+var_A8]
        vmovss  [rbp+37h+var_78], xmm1
      }
      v42->DebugLineWithDuration(this, entityData, (const vec3_t *)v99, (const vec3_t *)v102, &colorYellow, 0, DEBUG_LINE_DURATION);
      __asm
      {
        vmovaps xmm8, [rsp+0F0h+var_60]
        vmovaps xmm7, [rsp+0F0h+var_50]
      }
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+37h+var_A0+4]
      vmovss  xmm5, dword ptr [rbp+37h+var_A0]
      vmovss  xmm6, dword ptr [rbp+37h+var_A0+8]
    }
    enableMissileRicochet = _RSI->enableMissileRicochet;
    __asm
    {
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcvtss2sd xmm0, xmm3, xmm3
    }
    if ( enableMissileRicochet )
    {
      __asm
      {
        vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
        vmovss  xmm0, dword ptr [rsi+0FC0h]
      }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@43fa0000 }
    }
    __asm
    {
      vcomiss xmm3, xmm0
      vmovss  xmm0, cs:__real@bf800000
      vdivss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm5, xmm1
      vmulss  xmm0, xmm0, dword ptr [rbx+10h]
      vmulss  xmm2, xmm4, xmm1
      vmulss  xmm3, xmm6, xmm1
      vmulss  xmm1, xmm2, dword ptr [rbx+14h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, dword ptr [rbx+18h]
    }
    if ( enableMissileRicochet )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0FBCh]
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; X
        vaddss  xmm6, xmm2, xmm1
      }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm { vcomiss xmm6, xmm0 }
      LOBYTE(v27) = !(v93 | v94);
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, cs:__real@3f34fdf4
      }
      LOBYTE(v27) = enableMissileRicochet;
    }
    result = v27;
  }
  __asm { vmovaps xmm6, [rsp+0F0h+var_40] }
  return result;
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
  bool v17; 
  unsigned int v20; 
  BgEntityData *v21; 
  entityState_t *EntityState; 
  int v23; 
  int ServerTimeFromPredictionKey; 
  const dvar_t *v25; 
  int integer; 
  bool v27; 
  entityState_t *v28; 
  entityState_t *v29; 
  int v43; 
  bool v44; 
  int v45; 
  const playerState_s *v46; 
  const Weapon *v48; 
  int v49; 
  BOOL fmt; 
  BOOL fmta; 
  const WeaponDef *v53; 
  XModel *v55; 
  char isAlternatea; 

  v17 = isAlternate;
  __asm { vmovaps [rsp+0C8h+var_58], xmm6 }
  v20 = parentEntNum;
  v53 = BG_WeaponDef(r_grenadeWeapon, isAlternate);
  if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4060, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( this->m_setProjectileModel )
    v55 = BG_ProjectileModel(r_grenadeWeapon, isAlternate);
  else
    v55 = NULL;
  isAlternatea = 0;
  if ( rethrowEntityData )
  {
    if ( BgEntityData::GetEntityState(rethrowEntityData)->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4079, ASSERT_TYPE_ASSERT, "(rethrowEntityData->GetEntityState()->eType == ET_MISSILE)", "%s\n\tBgMissile::FireGrenadeRethrow(): provided rethrow entity type is not ET_MISSILE.", "rethrowEntityData->GetEntityState()->eType == ET_MISSILE") )
      __debugbreak();
    v21 = outEntityData;
    this->CopyEntityData(this, outEntityData, rethrowEntityData);
  }
  else
  {
    v21 = outEntityData;
    LOBYTE(fmt) = 0;
    this->SpawnMissileEntity(this, v20, r_grenadeWeapon, v17, fmt, serverTime, outEntityData, outComponentData);
    isAlternatea = 1;
  }
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4083, ASSERT_TYPE_ASSERT, "(grenade)", (const char *)&queryFormat, "grenade") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(v21);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4086, ASSERT_TYPE_ASSERT, "(grenadeEs)", (const char *)&queryFormat, "grenadeEs") )
    __debugbreak();
  this->SetEntityWeapon(this, weaponMap, v21, r_grenadeWeapon);
  EntityState->inAltWeaponMode = v17;
  BgMissile::InitGrenadeEntity(this, weaponMap, v21, v20, serverTime);
  v23 = serverTime;
  if ( isAlternatea )
  {
    if ( BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&EntityState->lerp.u) )
    {
      v20 = parentEntNum;
    }
    else
    {
      ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&EntityState->lerp.u);
      v25 = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
      v23 = ServerTimeFromPredictionKey;
      if ( !DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missilePredictionMaxFastForwardTimeMs") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      integer = v25->current.integer;
      v20 = parentEntNum;
      if ( (int)serverTime - v23 > integer )
        v23 = serverTime - integer;
    }
  }
  v27 = rotate && v53->rotationParams.rotate;
  BgMissile::InitGrenadeMovement(this, v21, start, dir, r_grenadeWeapon, v27, v23);
  v28 = this->GetEntityState(this, v20);
  v29 = v28;
  if ( applyNoDrawTime && v28 && ((v28->eType - 1) & 0xFFEF) == 0 )
  {
    _RAX = dir;
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  xmm2, dword ptr [rax+4]
      vmovss  xmm3, dword ptr [rax+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@42aa0000
      vsqrtss xmm0, xmm2, xmm2
      vmulss  xmm3, xmm0, cs:__real@3d6eeeef
      vsubss  xmm2, xmm1, xmm3
      vcvttss2si eax, xmm2
    }
    if ( _EAX > 50 )
      _EAX = 50;
    if ( _EAX < 20 )
      _EAX = 20;
    EntityState->lerp.u.anonymous.data[2] += _EAX;
  }
  v43 = BG_ProjectileActivateDist(r_grenadeWeapon, v17);
  v44 = v43 != 0;
  if ( !v29 || v43 )
  {
    v45 = parentEntNum;
    goto LABEL_44;
  }
  v45 = parentEntNum;
  v46 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  if ( !v46 )
  {
LABEL_44:
    __asm { vxorps  xmm6, xmm6, xmm6 }
    goto LABEL_45;
  }
  *(double *)&_XMM0 = BG_GetCookingGrenadeCookPercentage(r_grenadeWeapon, v17, v46);
  __asm { vmovaps xmm6, xmm0 }
LABEL_45:
  LOBYTE(fmta) = v17;
  this->InitGrenadeTimer(this, v21, v45, r_grenadeWeapon, fmta, serverTime, fuseTime);
  v48 = r_grenadeWeapon;
  LOBYTE(serverTime) = v44;
  v49 = hand;
  __asm { vmovss  dword ptr [rsp+0C8h+hand], xmm6 }
  LODWORD(isAlternate) = v45;
  LODWORD(r_grenadeWeapon) = v49;
  LOBYTE(dir) = v17;
  __asm { vmovaps xmm6, [rsp+0C8h+var_58] }
  ((void (__fastcall *)(BgMissile *, BgWeaponMap *, BgEntityData *, const Weapon *, const vec3_t *, const Weapon *, _BOOL8, __int64, XModel *, __int64, BgEntityData *))this->FinalizeGrenadeThrow)(this, weaponMap, v21, v48, dir, r_grenadeWeapon, isAlternate, hand, v55, serverTime, rethrowEntityData);
}

/*
==============
BgMissile::FireRocket
==============
*/
void BgMissile::FireRocket(BgMissile *this, BgWeaponMap *weaponMap, const int parentEntNum, const Weapon *r_weapon, const bool isAlternate, PlayerHandIndex hand, const vec3_t *start, const vec3_t *dir, const vec3_t *gunVel, const BgMissileFireParms *fireParms, bool magicBullet, const int serverTime, BgEntityData *outEntityData, BgEntityComponentData *outComponentData)
{
  BgEntityComponentData *ComponentData; 
  const dvar_t *v49; 
  int v50; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *v56; 
  int v57; 
  int v58; 
  __int64 v72; 
  bool v73; 
  vec3_t *Angles; 
  bool (__fastcall *SetEntityAngles)(BgMissile *, BgEntityData *, const vec3_t *, const bool, const bool); 
  vec3_t *v123; 
  _BOOL8 v124; 
  unsigned int v125; 
  const vec3_t *v127; 
  guidedMissileType_t guidedMissileType; 
  const BgMissileFireParms *v141; 
  char v142; 
  char v143; 
  char v146; 
  char v147; 
  Weapon *v154; 
  unsigned int v161; 
  BOOL fmt; 
  BOOL fmta; 
  BOOL v175; 
  double v176; 
  char v177; 
  unsigned int pHoldrand; 
  int val; 
  float c; 
  int ServerTimeFromPredictionKey; 
  vec3_t trBase; 
  int v183; 
  PlayerHandIndex v184; 
  float s[2]; 
  const BgMissileFireParms *v186; 
  BgWeaponMap *weaponMapa; 
  Weapon *r_weapona; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  XModel *v190; 
  char v191; 
  __int64 v192; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t v195; 
  vec3_t up; 
  char v197; 
  void *retaddr; 

  _RAX = &retaddr;
  v192 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  r_weapona = (Weapon *)r_weapon;
  val = parentEntNum;
  weaponMapa = weaponMap;
  _R14 = this;
  v184 = hand;
  _R12 = fireParms;
  v186 = fireParms;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgMissile::FireRocket");
  if ( parentEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4141, ASSERT_TYPE_ASSERT, "(parentEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "parentEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  _R13 = BG_WeaponDef(r_weapon, isAlternate);
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4144, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  _R14->GetScaledProjectileSpeed(_R14, parentEntNum, r_weapon, isAlternate, &v183, (int *)&v191);
  if ( _R14->m_setProjectileModel )
    v190 = BG_ProjectileModel(r_weapon, isAlternate);
  else
    v190 = NULL;
  _RAX = start;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rsp+190h+trBase], xmm0
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rsp+190h+trBase+4], xmm1
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  dword ptr [rsp+190h+trBase+8], xmm0
  }
  _RAX = dir;
  __asm
  {
    vmovss  xmm5, dword ptr [rax+4]
    vmovss  xmm4, dword ptr [rax]
    vmovss  xmm6, dword ptr [rax+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmovss  xmm9, cs:__real@80000000
    vcmpless xmm0, xmm3, xmm9
    vmovss  xmm8, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm8, xmm0
    vmovss  dword ptr [rbp+90h+right], xmm1
    vdivss  xmm2, xmm8, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+90h+vec], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+90h+vec+4], xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+90h+vec+8], xmm0
  }
  LOBYTE(fmt) = 1;
  _R14->SpawnMissileEntity(_R14, parentEntNum, r_weapon, isAlternate, fmt, serverTime, outEntityData, outComponentData);
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4168, ASSERT_TYPE_ASSERT, "(bolt)", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  _RSI = BgEntityData::GetEntityState(outEntityData);
  if ( !outEntityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4171, ASSERT_TYPE_ASSERT, "(bolt)", (const char *)&queryFormat, "bolt") )
    __debugbreak();
  _RBX = BgEntityData::GetComponents(outEntityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4174, ASSERT_TYPE_ASSERT, "(boltComps)", (const char *)&queryFormat, "boltComps") )
    __debugbreak();
  ComponentData = BgEntityData::GetComponentData(outEntityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4177, ASSERT_TYPE_ASSERT, "(boltCompData)", (const char *)&queryFormat, "boltCompData") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(outEntityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4180, ASSERT_TYPE_ASSERT, "(boltFlags)", (const char *)&queryFormat, "boltFlags") )
    __debugbreak();
  *(_QWORD *)s = _R14->GetEntityState(_R14, val);
  if ( !*(_QWORD *)s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4183, ASSERT_TYPE_ASSERT, "(parentEs)", (const char *)&queryFormat, "parentEs") )
    __debugbreak();
  ServerTimeFromPredictionKey = serverTime;
  v177 = 0;
  if ( !BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&_RSI->lerp.u) )
  {
    ServerTimeFromPredictionKey = BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&_RSI->lerp.u);
    v49 = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
    *(_QWORD *)right.v = DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs;
    if ( !DCONST_DVARINT_bg_missilePredictionMaxFastForwardTimeMs )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missilePredictionMaxFastForwardTimeMs") )
        __debugbreak();
      v49 = *(const dvar_t **)right.v;
    }
    Dvar_CheckFrontendServerThread(v49);
    v50 = *(_DWORD *)(*(_QWORD *)right.v + 40i64);
    if ( serverTime - ServerTimeFromPredictionKey > v50 )
      ServerTimeFromPredictionKey = serverTime - v50;
    v177 = 1;
  }
  _RSI->eType = ET_MISSILE;
  _R14->SetEntityWeapon(_R14, weaponMapa, outEntityData, r_weapona);
  _RSI->inAltWeaponMode = isAlternate;
  _RSI->lerp.u.anonymous.data[2] = serverTime;
  _RSI->lerp.u.anonymous.data[5] = 2047;
  if ( *(_WORD *)(*(_QWORD *)s + 8i64) == 1 && !magicBullet && !v177 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+190h+var_118]
      vmulss  xmm2, xmm0, cs:__real@3d6eeeef
      vmovss  xmm1, cs:__real@42aa0000
      vsubss  xmm2, xmm1, xmm2
      vcvttss2si eax, xmm2
    }
    if ( _EAX > 50 )
      _EAX = 50;
    if ( _EAX < 20 )
      _EAX = 20;
    _RSI->lerp.u.anonymous.data[2] = serverTime + _EAX;
  }
  outEntityData->SetOwnerEntNum(outEntityData, val);
  outEntityData->SetParentEntNum(outEntityData, val);
  BgEntityData::SetClipMask(outEntityData, 41968017);
  BgEntityData::SetHandler(outEntityData, 0xCu);
  if ( ((*(_WORD *)(*(_QWORD *)s + 8i64) - 1) & 0xFFEF) == 0 )
    _RSI->otherEntityNum = truncate_cast<short,int>(val);
  _RSI->staticState.general.xmodel = val;
  if ( _R13->projEnableMissileStickiness || _R13->enableMissileRicochet )
  {
    v56 = Flags;
    v57 = Flags->m_flags[0] | 0x40000;
    Flags->m_flags[0] = v57;
    if ( _R13->projEnableMissileStickiness )
      v56->m_flags[0] = v57 | 0x200;
  }
  _RBX->spawner.count = 0;
  if ( _R14->m_canPlayerBoostRockets )
    _RBX->missile.flags |= 0x200u;
  if ( BgMissile::IsGrenade(_R14, weaponMapa, outEntityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4241, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, bolt ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, bolt )") )
    __debugbreak();
  if ( fireParms && fireParms->lockon )
  {
    v58 = _RBX->missile.flags | 2;
    _RBX->missile.flags = v58;
    if ( fireParms->targetEntNum == 2047 )
    {
      _RBX->missile.flags = v58 & 0xFFFFFFFB;
      ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
      *((_QWORD *)&_RBX->beam + 9) = 0i64;
      _RBX->item[1].ammoCount = 0;
      _RBX->item[1].clipAmmoCount[0] = LODWORD(fireParms->targetPosOrOffset.v[0]);
      __asm
      {
        vmovss  xmm0, dword ptr [r12+8]
        vmovss  dword ptr [rbx+58h], xmm0
        vmovss  xmm1, dword ptr [r12+0Ch]
        vmovss  dword ptr [rbx+5Ch], xmm1
      }
    }
    else
    {
      if ( !((__int64 (__fastcall *)(BgMissile *))_R14->GetEntityState)(_R14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4248, ASSERT_TYPE_ASSERT, "(GetEntityState( fireParms->targetEntNum ))", (const char *)&queryFormat, "GetEntityState( fireParms->targetEntNum )") )
        __debugbreak();
      _RBX->missile.flags |= 4u;
      ((void (__fastcall *)(BgEntityComponentData *, _QWORD))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, (unsigned int)fireParms->targetEntNum);
      _RBX->missile.grenade.predictLandTime = LODWORD(fireParms->targetPosOrOffset.v[0]);
      __asm
      {
        vmovss  xmm0, dword ptr [r12+8]
        vmovss  dword ptr [rbx+4Ch], xmm0
        vmovss  xmm1, dword ptr [r12+0Ch]
        vmovss  dword ptr [rbx+50h], xmm1
      }
      if ( _R14->GetEntityTransform(_R14, fireParms->targetEntNum, &v195, &up) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+var_B0]
          vmovss  dword ptr [rbx+54h], xmm0
          vmovss  xmm1, dword ptr [rbp+90h+var_B0+4]
          vmovss  dword ptr [rbx+58h], xmm1
          vmovss  xmm0, dword ptr [rbp+90h+var_B0+8]
          vmovss  dword ptr [rbx+5Ch], xmm0
        }
      }
    }
  }
  else if ( _R13->guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
  {
    _RBX->missile.flags = _RBX->missile.flags & 0xFFFFFFF1 | 0xA;
    ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
    *((_QWORD *)&_RBX->beam + 9) = 0i64;
    _RBX->item[1].ammoCount = 0;
    __asm
    {
      vmovss  xmm3, cs:__real@461c4000
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+vec]
      vaddss  xmm2, xmm1, dword ptr [rsp+190h+trBase]
      vmovss  dword ptr [rbx+54h], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+vec+4]
      vaddss  xmm2, xmm1, dword ptr [rsp+190h+trBase+4]
      vmovss  dword ptr [rbx+58h], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+90h+vec+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+190h+trBase+8]
      vmovss  dword ptr [rbx+5Ch], xmm2
    }
  }
  else
  {
    _RBX->missile.flags &= 0xFFFFFFF9;
    ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
  }
  v72 = (__int64)_R14->GetPlayerState(_R14, val);
  *(_QWORD *)v195.v = v72;
  if ( v72 && *(_DWORD *)(v72 + 80i64 * (int)v184 + 1392) )
    _RBX->missile.flags |= 0x1000u;
  v73 = _R13->guidedMissileType < (unsigned int)MISSILE_GUIDANCE_JAVELIN;
  if ( _R13->guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [r14+10h]
      vmovss  xmm0, dword ptr [rbp+90h+vec+8]
      vaddss  xmm6, xmm0, cs:__real@3e99999a
      vmovss  xmm5, dword ptr [rbp+90h+vec+4]
      vmulss  xmm1, xmm5, xmm5
      vmovss  xmm4, dword ptr [rbp+90h+vec]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm1, xmm3, xmm8, xmm0
      vmovss  dword ptr [rbp+90h+right], xmm1
      vdivss  xmm2, xmm8, xmm1
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+90h+vec], xmm0
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+90h+vec+4], xmm1
      vmulss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbp+90h+vec+8], xmm0
    }
    AngleVectors((const vec3_t *)(*(_QWORD *)s + 64i64), NULL, &right, NULL);
    __asm
    {
      vmulss  xmm2, xmm7, dword ptr [rbp+90h+right]
      vaddss  xmm2, xmm2, dword ptr [rsp+190h+trBase]
      vmovss  dword ptr [rsp+190h+trBase], xmm2
      vmulss  xmm3, xmm7, dword ptr [rbp+90h+right+4]
      vaddss  xmm2, xmm3, dword ptr [rsp+190h+trBase+4]
      vmovss  dword ptr [rsp+190h+trBase+4], xmm2
      vmulss  xmm3, xmm7, dword ptr [rbp+90h+right+8]
      vaddss  xmm2, xmm3, dword ptr [rsp+190h+trBase+8]
      vmovss  dword ptr [rsp+190h+trBase+8], xmm2
    }
  }
  _RSI->lerp.pos.trType = TR_LINEAR;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [r13+728h]
  }
  if ( v73 )
  {
    _RSI->lerp.pos.trType = TR_INTERPOLATE;
    *(_QWORD *)_RSI->lerp.pos.trDelta.v = 0i64;
    _RSI->lerp.pos.trDelta.v[2] = 0.0;
  }
  else
  {
    __asm
    {
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, [rsp+190h+var_118]
      vmulss  xmm0, xmm2, dword ptr [rbp+90h+vec]
      vmovss  dword ptr [rsi+28h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+90h+vec+4]
      vmovss  dword ptr [rsi+2Ch], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbp+90h+vec+8]
      vmovss  dword ptr [rsi+30h], xmm0
    }
  }
  _RSI->lerp.pos.trTime = ServerTimeFromPredictionKey;
  Trajectory_SetTrBase(&_RSI->lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+28h]
    vaddss  xmm2, xmm0, dword ptr [rax]
    vmovss  dword ptr [rsi+28h], xmm2
    vmovss  xmm0, dword ptr [rsi+2Ch]
    vaddss  xmm3, xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rsi+2Ch], xmm3
    vmovss  xmm1, dword ptr [rsi+30h]
    vaddss  xmm0, xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rsi+30h], xmm0
    vmovss  [rsp+190h+c], xmm2
  }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 )
    goto LABEL_121;
  __asm { vmovss  [rsp+190h+c], xmm3 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 )
    goto LABEL_121;
  __asm { vmovss  [rsp+190h+c], xmm0 }
  if ( (LODWORD(c) & 0x7F800000) == 2139095040 )
  {
LABEL_121:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4318, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boltEs->lerp.pos.trDelta )[0] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[1] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boltEs->lerp.pos.trDelta )[0] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[1] ) && !IS_NAN( ( boltEs->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    __asm
    {
      vcvttss2si eax, dword ptr [rsi+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsi+28h], xmm0
      vcvttss2si eax, dword ptr [rsi+2Ch]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsi+2Ch], xmm0
      vcvttss2si eax, dword ptr [rsi+30h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rsi+30h], xmm0
    }
  }
  _RAX = BgEntityData::GetOrigin(outEntityData);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+190h+trBase]
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm1, dword ptr [rsp+190h+trBase+4]
    vmovss  dword ptr [rax+4], xmm1
    vmovss  xmm0, dword ptr [rsp+190h+trBase+8]
    vmovss  dword ptr [rax+8], xmm0
  }
  Angles = BgEntityData::GetAngles(outEntityData);
  vectoangles(&vec, Angles);
  SetEntityAngles = _R14->SetEntityAngles;
  v123 = BgEntityData::GetAngles(outEntityData);
  LOBYTE(fmta) = 1;
  LOBYTE(v124) = 1;
  SetEntityAngles(_R14, outEntityData, v123, v124, fmta);
  if ( *(_QWORD *)v195.v )
    v125 = *(_DWORD *)(*(_QWORD *)v195.v + 4i64);
  else
    v125 = serverTime;
  pHoldrand = v125;
  BG_srand(&pHoldrand);
  __asm
  {
    vmovss  xmm8, cs:__real@43b40000
    vcomiss xmm9, dword ptr [r13+72Ch]
  }
  if ( v73 )
  {
    _RSI->lerp.pos.trType = TR_INTERPOLATE;
    v127 = BgEntityData::GetAngles(outEntityData);
    AngleVectors(v127, NULL, &v195, &up);
    *(double *)&_XMM0 = BG_random(&pHoldrand);
    __asm { vmulss  xmm6, xmm0, xmm8 }
    *(double *)&_XMM0 = BG_random(&pHoldrand);
    __asm
    {
      vmulss  xmm7, xmm0, dword ptr [r13+72Ch]
      vmulss  xmm0, xmm6, cs:__real@3c8efa35; radians
    }
    FastSinCos(*(const float *)&_XMM0, s, &c);
    __asm
    {
      vmulss  xmm2, xmm7, [rsp+190h+c]
      vmulss  xmm3, xmm2, dword ptr [rbp+90h+var_B0]
      vmulss  xmm1, xmm2, dword ptr [rbp+90h+var_B0+4]
      vmovss  dword ptr [rbx+40h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbp+90h+var_B0+8]
      vmovss  dword ptr [rbx+44h], xmm0
      vmulss  xmm2, xmm7, [rbp+90h+s]
      vmulss  xmm0, xmm2, dword ptr [rbp+90h+up]
      vaddss  xmm3, xmm0, xmm3
      vmovss  dword ptr [rbx+3Ch], xmm3
      vmulss  xmm1, xmm2, dword ptr [rbp+90h+up+4]
      vaddss  xmm4, xmm1, dword ptr [rbx+40h]
      vmovss  dword ptr [rbx+40h], xmm4
      vmulss  xmm0, xmm2, dword ptr [rbp+90h+up+8]
      vaddss  xmm1, xmm0, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+44h], xmm1
      vmovss  dword ptr [rbp+90h+right], xmm3
    }
    if ( (LODWORD(right.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_122;
    __asm { vmovss  dword ptr [rbp+90h+right], xmm4 }
    if ( (LODWORD(right.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_122;
    __asm { vmovss  dword ptr [rbp+90h+right], xmm1 }
    if ( (LODWORD(right.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_122:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4350, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[0] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[1] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boltComps->missile.nonGrenade.curvature )[0] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[1] ) && !IS_NAN( ( boltComps->missile.nonGrenade.curvature )[2] )") )
        __debugbreak();
    }
  }
  if ( _R13->guidedMissileType == MISSILE_GUIDANCE_NONE )
    goto LABEL_111;
  _RSI->lerp.pos.trType = TR_INTERPOLATE;
  _RSI->lerp.apos.trType = TR_INTERPOLATE;
  _RSI->lerp.pos.trDuration = 0;
  guidedMissileType = _R13->guidedMissileType;
  if ( guidedMissileType != MISSILE_GUIDANCE_JAVELIN )
  {
    if ( guidedMissileType == MISSILE_GUIDANCE_ROBOTECH )
    {
      *(double *)&_XMM0 = BG_random(&pHoldrand);
      __asm
      {
        vmulss  xmm1, xmm0, xmm8
        vcvttss2si edi, xmm1
        vcomiss xmm1, cs:__real@cb800000
      }
      if ( v142 )
        goto LABEL_101;
      __asm { vcomiss xmm1, cs:__real@4b800000 }
      if ( !(v142 | v143) )
      {
LABEL_101:
        v146 = 0;
        v142 = 0;
        v143 = 1;
      }
      else
      {
        v146 = 1;
      }
      __asm
      {
        vcomiss xmm1, cs:__real@cf000000
        vcomiss xmm1, cs:__real@4f000000
      }
      if ( v142 | v143 )
        v147 = 1;
      else
        v147 = 0;
      if ( !v146 || !v147 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm1, xmm1
          vmovsd  [rsp+190h+var_158], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "int __cdecl float_to_integral_cast<int,float>(float)", _EDI, v176) )
          __debugbreak();
      }
      _RBX->item[0].ammoCount = _EDI;
      __asm
      {
        vmovss  xmm1, dword ptr [r13+0D24h]; max
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm1, xmm6; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
      __asm
      {
        vmovss  dword ptr [rbx+80h], xmm0
        vmovss  xmm1, dword ptr [r13+0D1Ch]; max
        vxorps  xmm0, xmm1, xmm6; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
      __asm
      {
        vmovss  dword ptr [rbx+78h], xmm0
        vmovss  xmm1, dword ptr [r13+0D20h]; max
        vxorps  xmm0, xmm1, xmm6; min
      }
      *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &pHoldrand);
      __asm { vmovss  dword ptr [rbx+7Ch], xmm0 }
    }
LABEL_111:
    v141 = v186;
    goto LABEL_112;
  }
  _RSI->lerp.pos.trType = TR_GRAVITY;
  _RSI->lerp.pos.trTime = ServerTimeFromPredictionKey;
  _RBX->missile.nonGrenade.stage = MISSILESTAGE_SOFTLAUNCH;
  v141 = v186;
  _RSI->lerp.u.anonymous.data[3] = !v186 || !v186->topFire;
LABEL_112:
  if ( !v183 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4383, ASSERT_TYPE_ASSERT, "(projectileSpeed)", (const char *)&queryFormat, "projectileSpeed") )
    __debugbreak();
  v154 = r_weapona;
  BG_DestabilizeDistance(r_weapona, isAlternate);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+190h+var_118]
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@447a0000
    vmovss  dword ptr [rbx+4], xmm2
  }
  _RBX->item[0].clipAmmoCount[1] = serverTime;
  *(double *)&_XMM0 = BG_DestabilizationRateTime(v154, isAlternate);
  v161 = val;
  __asm { vucomiss xmm0, xmm9 }
  if ( v143 || _R14->TestEntityFlag(_R14, val, THERMAL_DRAW) )
    Flags->m_flags[0] |= 0x4000u;
  LOBYTE(v175) = isAlternate;
  _R14->FinalizeRocketFire(_R14, weaponMapa, outEntityData, v161, v154, v175, v184, v141, v190);
  _RAX = BgEntityData::GetOrigin(outEntityData);
  _RBX->missile.nonGrenade.launchOrigin.v[0] = _RAX->v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  dword ptr [rbx+64h], xmm0
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rbx+68h], xmm1
    vmovss  xmm0, dword ptr [rbp+90h+vec]
    vmovss  dword ptr [rbx+6Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+90h+vec+4]
    vmovss  dword ptr [rbx+70h], xmm1
    vmovss  xmm0, dword ptr [rbp+90h+vec+8]
    vmovss  dword ptr [rbx+74h], xmm0
  }
  Sys_ProfEndNamedEvent();
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v197;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
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

float __fastcall BgMissile::GetPerturbation(BgMissile *this, double destabilizationCurvatureMax)
{
  double v8; 

  __asm
  {
    vcomiss xmm1, cs:__real@4e6e6b28
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  [rsp+48h+var_20], xmm0
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2203, ASSERT_TYPE_ASSERT, "( ( destabilizationCurvatureMax < 1000000000.0f && destabilizationCurvatureMax >= 0.0f ) )", "( destabilizationCurvatureMax ) = %g", v8) )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return *(float *)&_XMM0;
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
  if ( rotationDir )
  {
    if ( rotationDir == GRD_CLOCKWISE )
    {
      __asm { vmovss  xmm0, cs:__real@bf800000 }
    }
    else if ( rotationDir == GRD_COUNTERCLOCKWISE )
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3852, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnknown rotationDir: %d", "0", rotationDir) )
        __debugbreak();
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    BG_irand(0, 2, &this->m_holdRand);
    __asm { vcvtsi2ss xmm0, xmm0, eax }
  }
  return *(float *)&_XMM0;
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
  int MissileTargetEnt; 
  int v37[4]; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  _RDI = outResult;
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
  _RBX = BgEntityData::GetComponents(entityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1803, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  MissileTargetEnt = BgEntityMissileComponentData::GetMissileTargetEnt(ComponentData);
  if ( MissileTargetEnt == 2047 || !this->GetEntityTransform(this, MissileTargetEnt, (vec3_t *)v37, &angles) )
  {
    LODWORD(_RDI->v[0]) = _RBX->item[1].clipAmmoCount[0];
    LODWORD(_RDI->v[1]) = _RBX->item[1].clipAmmoCount[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+5Ch]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
    AnglesToAxis(&angles, &axis);
    __asm
    {
      vmovss  xmm1, [rsp+0B8h+var_88]
      vmovss  xmm3, [rsp+0B8h+var_84]
      vmovss  xmm4, [rsp+0B8h+var_80]
      vmovss  dword ptr [rdi], xmm1
      vmovss  dword ptr [rdi+4], xmm3
      vmovss  dword ptr [rdi+8], xmm4
      vmovss  xmm2, dword ptr [rbx+48h]
      vmulss  xmm0, xmm2, dword ptr [rsp+0B8h+axis]
      vaddss  xmm5, xmm0, xmm1
      vmulss  xmm1, xmm2, dword ptr [rsp+0B8h+axis+4]
      vmulss  xmm0, xmm2, dword ptr [rsp+0B8h+axis+8]
      vaddss  xmm3, xmm1, xmm3
      vmovss  dword ptr [rdi], xmm5
      vmovss  dword ptr [rdi+4], xmm3
      vaddss  xmm4, xmm0, xmm4
      vmovss  dword ptr [rdi+8], xmm4
      vmovss  xmm2, dword ptr [rbx+4Ch]
      vmulss  xmm1, xmm2, dword ptr [rsp+0B8h+axis+10h]
      vmulss  xmm0, xmm2, dword ptr [rsp+0B8h+axis+0Ch]
      vaddss  xmm6, xmm1, xmm3
      vmulss  xmm1, xmm2, dword ptr [rsp+0B8h+axis+14h]
      vaddss  xmm4, xmm1, xmm4
      vmovss  dword ptr [rdi+4], xmm6
      vaddss  xmm5, xmm0, xmm5
      vmovss  dword ptr [rdi], xmm5
      vmovss  dword ptr [rdi+8], xmm4
      vmovss  xmm3, dword ptr [rbx+50h]
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis+18h]
      vaddss  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis+1Ch]
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm1, xmm6
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+axis+20h]
      vmovss  dword ptr [rdi+4], xmm2
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rdi+8], xmm2
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
  }
}

/*
==============
BgMissile::GrenadeBounceMirrorVelocity
==============
*/
float BgMissile::GrenadeBounceMirrorVelocity(BgMissile *this, const vec3_t *velocity, const vec3_t *normal, const WeaponDef *weapDef, vec3_t *result)
{
  const dvar_t *v11; 
  bool v18; 
  int resulta; 
  int resultb; 
  int resultc; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8+4]
    vmulss  xmm3, xmm0, dword ptr [r8]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
  }
  v11 = DCONST_DVARBOOL_bg_grenadeRollingEnabled;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = normal;
  _RDI = velocity;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  if ( !DCONST_DVARBOOL_bg_grenadeRollingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_grenadeRollingEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v18 = v11->current.enabled && weapDef->isRollingGrenade;
  _RCX = result;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rdi]
  }
  if ( v18 )
    __asm { vxorps  xmm2, xmm6, cs:__xmm@80000000800000008000000080000000 }
  else
    __asm { vmulss  xmm2, xmm6, cs:__real@c0000000 }
  __asm
  {
    vmulss  xmm0, xmm0, xmm2
    vaddss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rcx], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+4]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rcx+4], xmm1
    vmulss  xmm0, xmm2, dword ptr [rbx+8]
    vaddss  xmm3, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rcx+8], xmm3
    vmovss  xmm0, dword ptr [rcx]
    vmovss  dword ptr [rsp+58h+result], xmm0
  }
  if ( (resulta & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+58h+result], xmm1
  }
  if ( (resultb & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm { vmovss  dword ptr [rsp+58h+result], xmm3 }
  if ( (resultc & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3197, ASSERT_TYPE_SANITY, "( !IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( result )[0] ) && !IS_NAN( ( result )[1] ) && !IS_NAN( ( result )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgMissile::GrenadeBounceVelocity
==============
*/

bool __fastcall BgMissile::GrenadeBounceVelocity(BgMissile *this, const vec3_t *preBounceVelocity, double dot, const vec3_t *normal, int surfType, const WeaponDef *weapDef, trajectory_t_secure *pos, float *outRollSlideSpeed, vec3_t *outRollSlideDir, const int hitEntNum)
{
  const entityState_t *v30; 
  bool result; 
  int v42; 
  int v43; 
  int v44; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx+8]
  }
  _RBX = pos;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmulss  xmm1, xmm0, xmm0
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmulss  xmm0, xmm3, xmm3
    vmovaps xmm8, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmovaps xmmword ptr [rax-68h], xmm9
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0D8h+var_88], xmm11
    vcomiss xmm8, xmm0
  }
  if ( (unsigned int)hitEntNum < 0x7FE && this->IsEntityValid(this, hitEntNum) )
  {
    v30 = this->GetEntityState(this, (unsigned int)hitEntNum);
    if ( v30 )
    {
      if ( BG_IsCharacterEntity(v30) )
      {
        *(_QWORD *)pos->trDelta.v = 0i64;
        pos->trDelta.v[2] = 0.0;
      }
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_14;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3264, ASSERT_TYPE_SANITY, "( !IS_NAN( ( pos->trDelta )[0] ) && !IS_NAN( ( pos->trDelta )[1] ) && !IS_NAN( ( pos->trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( pos->trDelta )[0] ) && !IS_NAN( ( pos->trDelta )[1] ) && !IS_NAN( ( pos->trDelta )[2] )") )
      __debugbreak();
  }
  result = 0;
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
BgMissile::GrenadeDud
==============
*/
char BgMissile::GrenadeDud(BgMissile *this, BgEntityData *entityData, const Weapon *weapon, bool isAlternate)
{
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2704, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RBX = BgEntityData::GetComponents(entityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2707, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BG_ProjectileActivateDist(weapon, isAlternate) <= 0 )
    return 0;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vcomiss xmm0, dword ptr [rbx+0Ch]
  }
  return 1;
}

/*
==============
BgMissile::GuidedMissileSteering
==============
*/
void BgMissile::GuidedMissileSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime, const int timeDeltaMsec, int *outMissileClipMask)
{
  Weapon *WeaponForEntity; 
  __int64 weaponIdx; 
  const char *szInternalName; 
  __int64 v25; 
  const char *v26; 
  int v27; 
  signed __int64 v28; 
  char v29; 
  char v30; 
  BgWeaponMap *v32; 
  guidedMissileType_t guidedMissileType; 
  char v81; 
  char v82; 
  int passEntityNum2; 
  int contentmask; 
  int passEntityNum; 
  const Bounds *Box; 
  int v89; 
  int missileLerpTime; 
  char v112; 
  char *fmt; 
  char *fmta; 
  Bounds *bounds; 
  float boundsa; 
  float boundsb; 
  bool simulationTime_4; 
  bool simulationTime_5; 
  signed __int64 v153; 
  bool v156; 
  vec3_t trBase; 
  BgWeaponMap *weaponMapa; 
  WeaponDef *weapDef; 
  Weapon *weapon; 
  int *v161; 
  __int64 v162; 
  vec3_t inOutSteer; 
  vec3_t toTargetRelative; 
  vec2_t currentRight; 
  trace_t results; 
  char v167; 
  void *retaddr; 

  _RAX = &retaddr;
  v162 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  weaponMapa = (BgWeaponMap *)weaponMap;
  v161 = outMissileClipMask;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 891, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !outMissileClipMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 892, ASSERT_TYPE_ASSERT, "(outMissileClipMask)", (const char *)&queryFormat, "outMissileClipMask") )
    __debugbreak();
  _R15 = BgEntityData::GetEntityState(entityData);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 895, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _R13 = BgEntityData::GetComponents(entityData);
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 898, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  *(_QWORD *)inOutSteer.v = BgEntityData::GetComponentData(entityData);
  if ( !*(_QWORD *)inOutSteer.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 901, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, _R15);
  weapon = WeaponForEntity;
  weapDef = (WeaponDef *)BG_WeaponDef(WeaponForEntity, _R15->inAltWeaponMode);
  if ( weapDef->guidedMissileType && BgMissile::IsMissileLockedOn(this, entityData) && BgMissile::MissileIsReadyForSteering(this, weaponMap, entityData, simulationTime) && (_R13->item[0].weapon.attachmentVariationIndices[5] & 0x10) == 0 )
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
    v25 = 0x7FFFFFFFi64;
    v26 = "uplinkball_tracking_mp";
    v27 = 1;
    if ( !szInternalName )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      szInternalName = NULL;
    }
    v28 = szInternalName - "uplinkball_tracking_mp";
    v153 = v28;
    while ( 1 )
    {
      v29 = v26[v28];
      v30 = *v26++;
      if ( !v25-- )
      {
LABEL_34:
        v27 = 0;
        goto LABEL_35;
      }
      if ( v29 != v30 )
        break;
      v28 = v153;
      if ( !v29 )
        goto LABEL_34;
    }
    if ( v29 < v30 )
      v27 = -1;
LABEL_35:
    simulationTime_5 = v27 == 0;
    v32 = weaponMapa;
    BgMissile::CalcTargetPosition(this, weaponMapa, entityData);
    if ( v27 && BgMissile::MissilePassedTarget(this, weaponMapa, entityData) )
    {
      _R13->missile.flags |= 0x10u;
      goto LABEL_79;
    }
    guidedMissileType = weapDef->guidedMissileType;
    if ( guidedMissileType == MISSILE_GUIDANCE_JAVELIN )
    {
      BgMissile::JavelinSteering(this, weaponMapa, entityData, weapon, simulationTime, timeDeltaMsec);
      goto LABEL_79;
    }
    if ( guidedMissileType == MISSILE_GUIDANCE_ROBOTECH )
    {
      BgMissile::RobotechSteering(this, entityData, weapDef, simulationTime, timeDeltaMsec);
      goto LABEL_79;
    }
    if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 950, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [r15+2Ch]
      vmovss  xmm2, dword ptr [r15+28h]
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm10, xmm1, xmm1
      vmovss  xmm11, cs:__real@80000000
      vcmpless xmm0, xmm10, xmm11
      vmovss  xmm8, cs:__real@3f800000
      vblendvps xmm1, xmm10, xmm8, xmm0
      vmovss  dword ptr [rsp+200h+var_1A8], xmm1
      vdivss  xmm0, xmm8, xmm1
      vmulss  xmm9, xmm2, xmm0
      vmulss  xmm7, xmm3, xmm0
      vxorps  xmm12, xmm9, cs:__xmm@80000000800000008000000080000000
      vmovss  dword ptr [rbp+100h+currentRight], xmm7
      vmovss  dword ptr [rbp+100h+currentRight+4], xmm12
    }
    Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
    if ( BgMissile::IsDebugDrawEnabled(this) )
      this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)(&_R13->beam + 21), &colorGreen, 0, 200);
    __asm
    {
      vmovss  xmm0, dword ptr [r13+54h]
      vsubss  xmm4, xmm0, dword ptr [rsp+200h+trBase]
      vmovss  xmm1, dword ptr [r13+58h]
      vsubss  xmm3, xmm1, dword ptr [rsp+200h+trBase+4]
      vmovss  xmm0, dword ptr [r13+5Ch]
      vsubss  xmm6, xmm0, dword ptr [rsp+200h+trBase+8]
      vmulss  xmm1, xmm7, xmm3
      vmulss  xmm0, xmm9, xmm4
      vaddss  xmm5, xmm1, xmm0
      vmovss  dword ptr [rbp+100h+toTargetRelative], xmm5
      vmulss  xmm1, xmm12, xmm3
      vmulss  xmm0, xmm7, xmm4
      vaddss  xmm7, xmm1, xmm0
      vmovss  dword ptr [rbp+100h+toTargetRelative+4], xmm7
      vmovss  [rbp+100h+var_150], xmm6
      vmulss  xmm12, xmm6, xmm6
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vaddss  xmm2, xmm1, xmm12
      vsqrtss xmm9, xmm2, xmm2
      vcmpless xmm0, xmm9, xmm11
      vblendvps xmm1, xmm9, xmm8, xmm0
      vmovss  dword ptr [rsp+200h+var_1A8], xmm1
      vdivss  xmm0, xmm8, xmm1
      vmulss  xmm11, xmm0, xmm4
      vmulss  xmm13, xmm0, xmm3
      vmulss  xmm14, xmm0, xmm6
    }
    v156 = (_R13->missile.flags & 0x2000) != 0;
    if ( (_R13->missile.flags & 0x2000) == 0 && !v27 )
    {
      __asm
      {
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm7, xmm1, xmm0
      }
      if ( this->IsDebugTextEnabled(this) )
      {
        __asm
        {
          vcvtss2sd xmm1, xmm9, xmm9
          vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcvtss2sd xmm3, xmm6, xmm6
          vsqrtss xmm0, xmm7, xmm7
          vcvtss2sd xmm2, xmm0, xmm0
          vmovsd  [rsp+200h+fmt], xmm1
          vmovq   r9, xmm3
          vmovq   r8, xmm2
        }
        this->DebugText(this, "Missile distances: h: %.4f v: %.4f d: %.4f\n", _R8, _R9, fmt);
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHorDistToTargetToStartLerp, "bg_missileHorDistToTargetToStartLerp");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileVerDistToTargetToStartLerp, "bg_missileVerDistToTargetToStartLerp");
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vcomiss xmm7, xmm1
      }
      if ( v81 | v82 )
      {
        __asm
        {
          vmulss  xmm0, xmm0, xmm0
          vcomiss xmm12, xmm0
        }
        if ( v81 | v82 )
        {
          simulationTime_4 = BG_WeaponRadiusDamageDetailTrace(weapon, _R15->inAltWeaponMode);
          passEntityNum2 = BgEntityMissileComponentData::GetMissileTargetEnt(*(BgEntityMissileComponentData **)inOutSteer.v);
          if ( passEntityNum2 == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 996, ASSERT_TYPE_ASSERT, "(targetEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "targetEntNum != ENTITYNUM_NONE") )
            __debugbreak();
          Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
          contentmask = *v161;
          passEntityNum = BgEntityData::GetOwnerEntNum(entityData);
          Box = BgEntityData::GetBox(entityData);
          BgMissile::MissileTrace(this, entityData, &results, &trBase, &_R13->mover.angle.pos3, Box, passEntityNum, passEntityNum2, contentmask, simulationTime_4);
          if ( this->IsDebugTextEnabled(this) )
          {
            __asm
            {
              vmovss  xmm0, [rbp+100h+results.fraction]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+200h+fmt], xmm0
            }
            this->DebugText(this, "Line of sight result: ss: %d as: %d f: %.4f\n", results.startsolid, results.allsolid, fmta);
          }
          if ( !results.startsolid && !results.allsolid )
          {
            __asm
            {
              vmovss  xmm0, [rbp+100h+results.fraction]
              vucomiss xmm0, xmm8
            }
            _R13->missile.flags |= 0x2000u;
            v89 = timeDeltaMsec;
            _R13->missile.missileLerpToTargetStartTime = simulationTime - timeDeltaMsec;
            v156 = 1;
            __asm
            {
              vmovss  xmm2, dword ptr [r15+2Ch]
              vmovss  xmm0, dword ptr [r15+28h]
              vmovss  xmm3, dword ptr [r15+30h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vmovss  xmm0, cs:__real@447a0000
              vdivss  xmm1, xmm0, xmm3
              vmulss  xmm2, xmm1, xmm9
              vcvttss2si eax, xmm2
            }
            _R13->missile.missileLerpTime = _EAX;
            v32 = weaponMapa;
            goto LABEL_69;
          }
          if ( BgMissile::IsDebugDrawEnabled(this) )
            this->DebugLineWithDuration(this, entityData, &trBase, (const vec3_t *)(&_R13->beam + 21), &colorCyan, 0, 1000);
          v32 = weaponMapa;
        }
      }
    }
    v89 = timeDeltaMsec;
LABEL_69:
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r12d
      vmulss  xmm7, xmm0, cs:__real@3a83126f
    }
    if ( v156 )
    {
      *v161 = 33570816;
      missileLerpTime = _R13->missile.missileLerpTime;
      __asm { vmovaps xmm6, xmm8 }
      if ( missileLerpTime > 0 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ecx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edi
          vdivss  xmm6, xmm1, xmm0
        }
      }
      if ( this->IsDebugTextEnabled(this) )
      {
        __asm
        {
          vcvtss2sd xmm2, xmm6, xmm6
          vmovq   r8, xmm2
        }
        this->DebugText(this, "Lerping to target ratio: %.4f. Total lerp time: %d\n", _R8, (unsigned int)missileLerpTime);
      }
      Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
      __asm
      {
        vmulss  xmm2, xmm9, xmm6
        vmulss  xmm0, xmm11, xmm2
        vaddss  xmm5, xmm0, dword ptr [rsp+200h+trBase]
        vmulss  xmm1, xmm2, xmm13
        vaddss  xmm3, xmm1, dword ptr [rsp+200h+trBase+4]
        vmulss  xmm0, xmm14, xmm2
        vaddss  xmm1, xmm0, dword ptr [rsp+200h+trBase+8]
        vsubss  xmm5, xmm5, dword ptr [rsp+200h+trBase]
        vsubss  xmm3, xmm3, dword ptr [rsp+200h+trBase+4]
        vsubss  xmm4, xmm1, dword ptr [rsp+200h+trBase+8]
        vdivss  xmm2, xmm8, xmm7
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [r15+28h], xmm0
        vmulss  xmm1, xmm3, xmm2
        vmovss  dword ptr [r15+2Ch], xmm1
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [r15+30h], xmm0
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+100h+inOutSteer], xmm0
        vmovss  dword ptr [rbp+100h+inOutSteer+4], xmm0
        vmovss  dword ptr [rbp+100h+inOutSteer+8], xmm0
        vmovss  dword ptr [rsp+200h+bounds], xmm10
      }
      BgMissile::HorzSteerToTarget(this, v32, entityData, &currentRight, (const vec2_t *)&toTargetRelative, boundsa, &inOutSteer);
      __asm { vmovss  dword ptr [rsp+200h+bounds], xmm10 }
      BgMissile::VerticalSteering(this, v32, entityData, v89, &toTargetRelative, boundsb, simulationTime_5, &inOutSteer);
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rbp+100h+inOutSteer]
        vaddss  xmm2, xmm1, dword ptr [r15+28h]
        vmovss  dword ptr [r15+28h], xmm2
        vmulss  xmm1, xmm7, dword ptr [rbp+100h+inOutSteer+4]
        vaddss  xmm2, xmm1, dword ptr [r15+2Ch]
        vmovss  dword ptr [r15+2Ch], xmm2
        vmulss  xmm1, xmm7, dword ptr [rbp+100h+inOutSteer+8]
        vaddss  xmm2, xmm1, dword ptr [r15+30h]
        vmovss  dword ptr [r15+30h], xmm2
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+71Ch]
      vcomiss xmm9, xmm0
    }
    if ( v112 )
      this->Explode(this, entityData);
    memset(&trBase, 0, sizeof(trBase));
  }
LABEL_79:
  _R11 = &v167;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
BgMissile::HorzSteerToTarget
==============
*/
void BgMissile::HorzSteerToTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const vec2_t *currentRight, const vec2_t *toTargetRelative, float currentHorzSpeed, vec3_t *inOutSteer)
{
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  char v17; 
  bool v18; 
  bool v28; 
  int projectileSpeedUp[4]; 
  int projectileSpeed; 

  _RDI = inOutSteer;
  _RSI = currentRight;
  __asm { vmovaps [rsp+78h+var_38], xmm7 }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1834, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1837, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  _R14 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  BG_GetProjectileSpeed(WeaponForEntity, EntityState->inAltWeaponMode, &projectileSpeed, projectileSpeedUp);
  _RBX = toTargetRelative;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm4, dword ptr [rbx+4]
    vucomiss xmm4, xmm7
  }
  if ( v18 )
  {
    __asm { vmovss  xmm6, cs:__real@7f7fffff }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmulss  xmm2, xmm0, xmm0
      vmovss  xmm0, cs:__real@3f000000
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vdivss  xmm2, xmm0, xmm4
      vmulss  xmm6, xmm3, xmm2
    }
  }
  __asm { vcomiss xmm7, dword ptr [r14+7C8h] }
  if ( !v17 )
  {
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1852, ASSERT_TYPE_ASSERT, "(weapDef->maxSteeringAccel > 0)", (const char *)&queryFormat, "weapDef->maxSteeringAccel > 0");
    v17 = 0;
    v18 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, dword ptr [rbx]
    vmovss  xmm1, dword ptr [r14+7C8h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+78h+projectileSpeed]
    vmulss  xmm0, xmm0, xmm0
    vdivss  xmm2, xmm0, xmm1
  }
  if ( v17 )
  {
    __asm { vucomiss xmm7, dword ptr [rbx+4] }
    if ( !v18 )
    {
      __asm
      {
        vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm2
      }
      if ( !v17 )
      {
        __asm { vucomiss xmm6, xmm7 }
        if ( v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1863, ASSERT_TYPE_ASSERT, "(radius != 0)", (const char *)&queryFormat, "radius != 0") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, [rsp+78h+currentHorzSpeed]
          vmovss  xmm2, dword ptr [r14+7C8h]; max
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
          vmulss  xmm3, xmm0, xmm0
          vmulss  xmm4, xmm3, cs:__real@40000000
          vdivss  xmm0, xmm4, xmm6; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm0, dword ptr [rsi]
          vmovss  dword ptr [rdi], xmm1
          vmulss  xmm0, xmm0, dword ptr [rsi+4]
          vmovss  dword ptr [rdi+4], xmm0
        }
      }
    }
  }
  else
  {
    __asm
    {
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm0, xmm2, cs:__real@42700000
      vcomiss xmm6, xmm0
    }
    if ( !v17 )
    {
      __asm
      {
        vcomiss xmm7, dword ptr [rbx+4]
        vmovss  xmm0, dword ptr [rsi]
        vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm0, xmm0, xmm1
        vmovss  dword ptr [rdi], xmm0
        vmulss  xmm1, xmm1, dword ptr [rsi+4]
        vmovss  dword ptr [rdi+4], xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
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
  const Weapon *WeaponForEntity; 
  const WeaponDef *v15; 
  const playerState_s *v32; 
  entityState_t *v33; 
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
  _RBX = BgEntityData::GetBox(entityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3874, ASSERT_TYPE_ASSERT, "(entBox)", (const char *)&queryFormat, "entBox") )
    __debugbreak();
  ComponentData = BgEntityData::GetComponentData(entityData);
  if ( !ComponentData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3877, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3883, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  v15 = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3886, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  _RAX = BG_ProjectileModel(WeaponForEntity, EntityState->inAltWeaponMode);
  EntityState->eType = ET_MISSILE;
  EntityState->lerp.eFlags.m_flags[0] = 0;
  EntityState->lerp.u.anonymous.data[2] = serverTime;
  EntityState->lerp.u.anonymous.data[5] = 2047;
  EntityState->staticState.general.xmodel = parentEntNum;
  Flags->m_flags[0] |= 0x40200u;
  if ( v15->offhandClass || !_RAX )
  {
    *(_QWORD *)_RBX->midPoint.v = 0i64;
    _RBX->midPoint.v[2] = 0.0;
    _RBX->halfSize.v[0] = 4.5;
    _RBX->halfSize.v[1] = 4.5;
    _RBX->halfSize.v[2] = 4.5;
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+2Ch]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+3Ch]
      vmovsd  qword ptr [rbx+10h], xmm1
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, dword ptr [rbx+14h]
      vmovaps [rsp+0A8h+var_48], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm1, xmm6
      vmovaps [rsp+0A8h+var_58], xmm7
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vcomiss xmm0, xmm6
      vxorpd  xmm7, xmm7, xmm7
      vmovss  xmm0, dword ptr [rbx+10h]
      vcomiss xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx+14h]
      vcomiss xmm0, xmm6
      vmovaps xmm6, [rsp+0A8h+var_48]
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vminss  xmm1, xmm0, dword ptr [rbx+14h]
      vmovaps xmm7, [rsp+0A8h+var_58]
      vmovss  dword ptr [rbx+0Ch], xmm1
      vmovss  xmm2, dword ptr [rbx+10h]
      vminss  xmm0, xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+10h], xmm0
    }
  }
  Components->missile.antilagTimeOffset = 0;
  BgMissile::SetMissileLastHitCharacter(this, entityData, 2048);
  this->InitGrenadeSetAntiLagOffset(this, entityData, parentEntNum, serverTime);
  BgMissile::SetDoorScriptable(this, entityData, 0xFFFFFFFF);
  v32 = this->GetPlayerState(this, (unsigned int)parentEntNum);
  v33 = this->GetEntityState(this, (unsigned int)parentEntNum);
  if ( !v32 || v32->grenadeTimeLeft >= 0 || (throwbackGrenadeOwner = v32->throwbackGrenadeOwner, throwbackGrenadeOwner == 2047) )
  {
    entityData->SetOwnerEntNum(entityData, parentEntNum);
    entityData->SetParentEntNum(entityData, parentEntNum);
    if ( v33 && v33->eType == ET_PLAYER )
      EntityState->otherEntityNum = truncate_cast<short,int>(parentEntNum);
    else
      EntityState->otherEntityNum = 2047;
  }
  else
  {
    entityData->SetOwnerEntNum(entityData, throwbackGrenadeOwner);
    entityData->SetParentEntNum(entityData, v32->throwbackGrenadeOwner);
  }
  this->InitGrenadePlatformTracking(this, entityData, parentEntNum);
  BgEntityData::SetClipMask(entityData, 41968017);
  BgEntityData::SetHandler(entityData, 0xAu);
  ((void (__fastcall *)(BgEntityComponentData *, __int64))ComponentData->__vftable[1].~BgEntityComponentData)(ComponentData, 2047i64);
  this->FinalizeGrenadeSpawn(this, entityData, parentEntNum, v15);
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
  GrenadeRotationParams *p_rotationParams; 
  bool IsThrowingAxe; 
  _BOOL8 v30; 
  _DWORD *p_initialPitch; 
  BOOL fmt; 
  int v51; 
  int v52; 
  int v53; 

  _R13 = dir;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "BgMissile::InitGrenadeMovement");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3964, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3967, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  _RBP = BgEntityData::GetEntityState(entityData);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3970, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RSI = BG_WeaponDef(weapon, _RBP->inAltWeaponMode);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3973, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  Components->spawner.count = 0;
  _RBP->lerp.pos.trType = BgMissile::GetGrenadeTrType(this, entityData);
  _RBP->lerp.pos.trTime = serverTime;
  *BgEntityData::GetOrigin(entityData) = *start;
  Trajectory_SetTrBase(&_RBP->lerp.pos, start);
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  dword ptr [rbp+28h], xmm0
  }
  _RBP->lerp.pos.trDelta.v[1] = _R13->v[1];
  _RBP->lerp.pos.trDelta.v[2] = _R13->v[2];
  __asm { vmovss  [rsp+58h+arg_8], xmm0 }
  if ( (v51 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+2Ch]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v52 & 0x7F800000) == 2139095040 )
    goto LABEL_31;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+30h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v53 & 0x7F800000) == 2139095040 )
  {
LABEL_31:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3983, ASSERT_TYPE_SANITY, "( !IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  _R14 = BgEntityData::GetAngles(entityData);
  vectoangles(_R13, _R14);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0FE4h]
    vaddss  xmm1, xmm0, dword ptr [r14+4]
    vmovss  dword ptr [r14+4], xmm1
  }
  p_rotationParams = &_RSI->rotationParams;
  _R14->v[0] = _RSI->rotationParams.initialPitch;
  _R14->v[2] = _RSI->rotationParams.initialRoll;
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
  {
    __asm
    {
      vcvttss2si eax, dword ptr [rbp+28h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvttss2si eax, dword ptr [rbp+2Ch]
      vmovss  dword ptr [rbp+28h], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvttss2si eax, dword ptr [rbp+30h]
      vmovss  dword ptr [rbp+2Ch], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  dword ptr [rbp+30h], xmm0
    }
  }
  IsThrowingAxe = BG_IsThrowingAxe(weapon);
  if ( IsThrowingAxe || rotate )
  {
    p_initialPitch = &unk_143CC4038;
    _RBP->lerp.apos.trTime = serverTime;
    _RBP->lerp.apos.trType = TR_LINEAR;
    _RBP->lerp.apos.trBase.v[0] = _R14->v[0];
    if ( !IsThrowingAxe )
      p_initialPitch = (_DWORD *)&p_rotationParams->initialPitch;
    _RBP->lerp.apos.trBase.v[1] = _R14->v[1];
    _RBP->lerp.apos.trBase.v[2] = _R14->v[2];
    BG_irand(p_initialPitch[4], p_initialPitch[5], &this->m_holdRand);
    *(double *)&_XMM0 = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[3]);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbp+4Ch], xmm0
    }
    BG_irand(p_initialPitch[7], p_initialPitch[8], &this->m_holdRand);
    *(double *)&_XMM0 = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[6]);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbp+50h], xmm0
    }
    BG_irand(p_initialPitch[10], p_initialPitch[11], &this->m_holdRand);
    *(double *)&_XMM0 = BgMissile::GetRotationDirMultiplier(this, (GrenadeRotationDirection)p_initialPitch[9]);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ebx
      vmulss  xmm0, xmm0, xmm1
      vmovss  dword ptr [rbp+54h], xmm0
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT) )
    {
      __asm
      {
        vcvttss2si eax, dword ptr [rbp+4Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvttss2si eax, dword ptr [rbp+50h]
        vmovss  dword ptr [rbp+4Ch], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvttss2si eax, dword ptr [rbp+54h]
        vmovss  dword ptr [rbp+50h], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbp+54h], xmm0
      }
    }
    _R14->v[0] = _RBP->lerp.apos.trBase.v[0];
    _R14->v[1] = _RBP->lerp.apos.trBase.v[1];
    _R14->v[2] = _RBP->lerp.apos.trBase.v[2];
  }
  else
  {
    LOBYTE(v30) = 1;
    LOBYTE(fmt) = 1;
    this->SetEntityAngles(this, entityData, _R14, v30, fmt);
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
    _RBX = DCONST_DVARFLT_bg_missileJavClimbCeilingDirect;
    if ( DCONST_DVARFLT_bg_missileJavClimbCeilingDirect )
      goto LABEL_20;
    v6 = "bg_missileJavClimbCeilingDirect";
    goto LABEL_18;
  }
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1349, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_TOP)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_TOP") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_bg_missileJavClimbCeilingTop;
  if ( !DCONST_DVARFLT_bg_missileJavClimbCeilingTop )
  {
    v6 = "bg_missileJavClimbCeilingTop";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
  }
LABEL_20:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
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
  bool result; 
  vec3_t trBase; 
  __int64 v14; 
  void *retaddr; 

  _RAX = &retaddr;
  v14 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1290, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1293, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 8) != 0 )
  {
    result = 1;
  }
  else
  {
    if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1315, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
      __debugbreak();
    EntityState = BgEntityData::GetEntityState(entityData);
    if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1318, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1320, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
      __debugbreak();
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+trBase+8]
      vsubss  xmm6, xmm0, dword ptr [rbp+8]
    }
    *(double *)&_XMM0 = BgMissile::JavelinClimbCeiling(this, entityData);
    result = 0;
    memset(&trBase, 0, sizeof(trBase));
    __asm { vcomiss xmm6, xmm0 }
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  return result;
}

/*
==============
BgMissile::JavelinClimbExceededAngle
==============
*/
__int64 BgMissile::JavelinClimbExceededAngle(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  int v11; 
  const char *v13; 
  char v39; 
  unsigned __int8 v40; 
  __int64 result; 
  vec3_t trBase; 
  __int64 v47; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  v47 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  _RBP = targetPos;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1363, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RSI = BgEntityData::GetEntityState(entityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1366, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( _RSI->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1368, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v11 = _RSI->lerp.u.anonymous.data[3];
  if ( !v11 )
  {
    _RBX = DCONST_DVARFLT_bg_missileJavClimbAngleTop;
    if ( DCONST_DVARFLT_bg_missileJavClimbAngleTop )
      goto LABEL_20;
    v13 = "bg_missileJavClimbAngleTop";
    goto LABEL_18;
  }
  if ( v11 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1376, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_bg_missileJavClimbAngleDirect;
  if ( !DCONST_DVARFLT_bg_missileJavClimbAngleDirect )
  {
    v13 = "bg_missileJavClimbAngleDirect";
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v13) )
      __debugbreak();
  }
LABEL_20:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovss  xmm5, dword ptr [rsi+2Ch]
    vmovss  xmm4, dword ptr [rsi+28h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vmovss  xmm3, cs:__real@3f800000
    vblendvps xmm1, xmm2, xmm3, xmm0
    vdivss  xmm0, xmm3, xmm1
    vmulss  xmm7, xmm4, xmm0
    vmulss  xmm6, xmm5, xmm0
  }
  Trajectory_GetTrBase(&_RSI->lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm4, xmm0, dword ptr [rsp+0A8h+trBase]
    vmovss  xmm1, dword ptr [rbp+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+0A8h+trBase+4]
    vmovss  xmm0, dword ptr [rbp+8]
    vsubss  xmm3, xmm0, dword ptr [rsp+0A8h+trBase+8]
    vmulss  xmm2, xmm2, xmm6
    vmulss  xmm1, xmm4, xmm7
    vaddss  xmm0, xmm2, xmm1
    vdivss  xmm0, xmm0, xmm3; X
  }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, xmm8
  }
  if ( v39 )
  {
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "Javelin: *** Exceeded climb angle ***\n");
    v40 = 1;
  }
  else
  {
    v40 = 0;
  }
  memset(&trBase, 0, sizeof(trBase));
  result = v40;
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0A8h+var_38]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
BgMissile::JavelinClimbIsAboveCeiling
==============
*/
_BOOL8 BgMissile::JavelinClimbIsAboveCeiling(BgMissile *this, BgEntityData *entityData, const vec3_t *targetPos)
{
  entityState_t *EntityState; 
  char v9; 
  char v10; 
  _BOOL8 result; 
  vec3_t trBase; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1315, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData", -2i64) )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1318, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1320, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+trBase+8]
    vsubss  xmm6, xmm0, dword ptr [rsi+8]
  }
  *(double *)&_XMM0 = BgMissile::JavelinClimbCeiling(this, entityData);
  __asm { vcomiss xmm6, xmm0 }
  memset(&trBase, 0, sizeof(trBase));
  result = !(v9 | v10);
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
  return result;
}

/*
==============
BgMissile::JavelinClimbOffset
==============
*/
void BgMissile::JavelinClimbOffset(BgMissile *this, BgEntityData *entityData, vec3_t *inOutTargetPos)
{
  entityState_t *EntityState; 
  int v9; 
  int OwnerEntNum; 
  unsigned int v18; 
  entityState_t *v19; 
  const dvar_t *v34; 
  vec3_t trBase; 
  __int64 v42; 

  v42 = -2i64;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  _RBX = inOutTargetPos;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1435, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1438, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1440, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  v9 = EntityState->lerp.u.anonymous.data[3];
  if ( v9 )
  {
    if ( v9 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1448, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
      __debugbreak();
    _RDI = DCONST_DVARFLT_bg_missileJavClimbHeightDirect;
    if ( !DCONST_DVARFLT_bg_missileJavClimbHeightDirect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbHeightDirect") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vaddss  xmm0, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+0B8h+trBase], xmm0
      vmovss  dword ptr [rsp+0B8h+trBase+4], xmm0
      vmovss  dword ptr [rsp+0B8h+trBase+8], xmm0
    }
    OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
    v18 = OwnerEntNum;
    if ( OwnerEntNum != 2047 && this->IsEntityValid(this, OwnerEntNum) )
    {
      v19 = this->GetEntityState(this, v18);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1457, ASSERT_TYPE_ASSERT, "(esOwner)", (const char *)&queryFormat, "esOwner") )
        __debugbreak();
      Trajectory_GetTrBase(&v19->lerp.pos, &trBase);
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0B8h+trBase]
      vsubss  xmm5, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rsp+0B8h+trBase+4]
      vsubss  xmm4, xmm1, dword ptr [rbx+4]
      vmulss  xmm2, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm2, xmm0
      vdivss  xmm0, xmm2, xmm1
      vmulss  xmm6, xmm5, xmm0
      vmulss  xmm7, xmm4, xmm0
    }
    v34 = DCONST_DVARFLT_bg_missileJavClimbToOwner;
    if ( !DCONST_DVARFLT_bg_missileJavClimbToOwner && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbToOwner") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rdi+28h]
      vmulss  xmm2, xmm7, dword ptr [rdi+28h]
      vaddss  xmm0, xmm1, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rbx+4], xmm1
    }
    memset(&trBase, 0, sizeof(trBase));
  }
  else
  {
    _RDI = DCONST_DVARFLT_bg_missileJavClimbHeightTop;
    if ( !DCONST_DVARFLT_bg_missileJavClimbHeightTop && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavClimbHeightTop") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vaddss  xmm1, xmm0, dword ptr [rbx+8]
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
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
  char v14; 
  unsigned __int8 v15; 
  vec3_t trBase; 
  __int64 v18; 

  v18 = -2i64;
  _RSI = targetPos;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1407, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1410, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1412, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm4, xmm0, dword ptr [rsp+68h+trBase]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, dword ptr [rsp+68h+trBase+4]
    vmulss  xmm3, xmm2, xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm3, xmm0
    vcomiss xmm1, cs:__real@481c4000
  }
  if ( v14 )
  {
    if ( this->IsDebugTextEnabled(this) )
      this->DebugText(this, "Javelin: *** Exceeded climb distance ***\n");
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  memset(&trBase, 0, sizeof(trBase));
  return v15;
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
      _RBX = DCONST_DVARFLT_bg_missileJavTurnRateTop;
      if ( DCONST_DVARFLT_bg_missileJavTurnRateTop )
        goto LABEL_23;
      v6 = "bg_missileJavTurnRateTop";
    }
    else
    {
      _RBX = DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy;
      if ( DCONST_DVARFLT_bg_missileJavTurnRateTop_legacy )
        goto LABEL_23;
      v6 = "bg_missileJavTurnRateTop_legacy";
    }
    goto LABEL_21;
  }
  if ( v4 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1707, ASSERT_TYPE_ASSERT, "(es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT)", (const char *)&queryFormat, "es->lerp.u.missile.flightMode == MISSILEFLIGHTMODE_DIRECT") )
    __debugbreak();
  _RBX = DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect;
  if ( !DCONST_DVARMPSPFLT_bg_missileJavTurnRateDirect )
  {
    v6 = "bg_missileJavTurnRateDirect";
LABEL_21:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
  }
LABEL_23:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
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
  vec3_t *v67; 
  vec3_t *v68; 
  double v69; 
  double v70; 
  double v71; 
  double v72; 
  double v73; 
  double v74; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  _RBX = currentDir;
  _RDI = targetDir;
  _RSI = resultDir;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1604, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( UseJavelinSteeringRewrite() )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+4]
      vmovss  xmm4, dword ptr [rbx]
      vmovss  xmm5, dword ptr [rbx+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vmovss  xmm7, cs:__real@3f800000
      vsubss  xmm0, xmm1, xmm7
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm0, xmm9
      vmovss  xmm8, cs:__real@3b03126f
      vcomiss xmm0, xmm8
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+140h+var_100], xmm1
      vmovsd  [rsp+140h+var_108], xmm2
      vmovsd  [rsp+140h+var_110], xmm3
      vmovsd  [rsp+140h+var_118], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1613, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( currentDir ) )", "(%g, %g, %g) len %g", *(double *)&v67, v69, v71, v73) )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rdi+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm1, xmm2, xmm1
      vsubss  xmm0, xmm1, xmm7
      vandps  xmm0, xmm0, xmm9
      vcomiss xmm0, xmm8
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vcvtss2sd xmm2, xmm5, xmm5
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+140h+var_100], xmm1
      vmovsd  [rsp+140h+var_108], xmm2
      vmovsd  [rsp+140h+var_110], xmm3
      vmovsd  [rsp+140h+var_118], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1614, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( targetDir ) )", "(%g, %g, %g) len %g", *(double *)&v68, v70, v72, v74) )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rdi]
      vmulss  xmm2, xmm4, dword ptr [rbx]
      vmovss  xmm0, dword ptr [rbx+4]
      vmulss  xmm1, xmm0, dword ptr [rdi+4]
      vaddss  xmm3, xmm2, xmm1
      vmovss  xmm2, dword ptr [rbx+8]
      vmulss  xmm0, xmm2, dword ptr [rdi+8]
      vaddss  xmm10, xmm3, xmm0
      vcomiss xmm10, cs:__real@3f7fbe77
      vmovss  dword ptr [rsi], xmm4
    }
    *(_QWORD *)&resultDir->y = *(_QWORD *)&targetDir->y;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    *(double *)&_XMM0 = BgMissile::JavelinRotateDir_Legacy(this, entityData, timeDeltaMsec, _RBX, targetDir, resultDir);
  }
  _R11 = &v75;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgMissile::JavelinRotateDir_Legacy
==============
*/
float BgMissile::JavelinRotateDir_Legacy(BgMissile *this, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentDir, const vec3_t *targetDir, vec3_t *resultDir)
{
  entityState_t *EntityState; 
  char v19; 
  char v32; 
  char *fmt; 
  char *fmta; 
  __int64 v80; 
  vec3_t trBase; 
  __int64 v82; 
  vec3_t angles; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 
  __int64 v88; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v88;
  v82 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
  }
  _R14 = currentDir;
  _RBX = targetDir;
  _RSI = resultDir;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1530, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1534, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  *(double *)&_XMM0 = BgMissile::JavelinMaxDPS(this, entityData);
  __asm
  {
    vmovaps xmm8, xmm0
    vmovss  xmm9, dword ptr [rbx]
    vmovss  xmm1, dword ptr [r14+4]
    vmulss  xmm3, xmm1, dword ptr [rbx+4]
    vmulss  xmm2, xmm9, dword ptr [r14]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm1, dword ptr [r14+8]
    vmulss  xmm3, xmm1, dword ptr [rbx+8]
    vaddss  xmm2, xmm4, xmm3
    vmovss  xmm5, cs:__real@42b40000
    vmulss  xmm1, xmm2, xmm5
    vsubss  xmm7, xmm5, xmm1
    vcomiss xmm7, cs:__real@3dcccccd
  }
  if ( v19 | v32 )
  {
    __asm { vmovss  dword ptr [rsi], xmm9 }
    *(_QWORD *)&resultDir->y = *(_QWORD *)&targetDir->y;
    if ( this->IsDebugTextEnabled(this) )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm7, xmm7
        vmovq   r8, xmm2
      }
      *(double *)&_XMM0 = ((double (*)(BgMissile *, const char *, ...))this->DebugText)(this, "dot:%.2f ", _R8);
    }
LABEL_10:
    __asm { vxorps  xmm0, xmm0, xmm0 }
    goto LABEL_19;
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r12d
    vmovss  xmm0, cs:__real@447a0000
    vdivss  xmm1, xmm0, xmm1
    vmulss  xmm6, xmm1, xmm7
    vcomiss xmm6, xmm8
  }
  if ( v19 )
  {
    __asm { vmovss  dword ptr [rsi], xmm9 }
    *(_QWORD *)&resultDir->y = *(_QWORD *)&targetDir->y;
    if ( this->IsDebugTextEnabled(this) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vcvtss2sd xmm3, xmm8, xmm8
        vcvtss2sd xmm2, xmm7, xmm7
        vmovsd  [rsp+150h+fmt], xmm0
        vmovq   r9, xmm3
        vmovq   r8, xmm2
      }
      *(double *)&_XMM0 = ((double (*)(BgMissile *, const char *, ...))this->DebugText)(this, "dot:%.2f (%.0f > %.0f) ", _R8, _R9, fmt);
      __asm { vxorps  xmm0, xmm0, xmm0 }
      goto LABEL_19;
    }
    goto LABEL_10;
  }
  __asm { vdivss  xmm9, xmm8, xmm6 }
  if ( this->IsDebugTextEnabled(this) )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vcvtss2sd xmm1, xmm8, xmm8
      vcvtss2sd xmm3, xmm9, xmm9
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+150h+var_128], xmm0
      vmovsd  [rsp+150h+fmt], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    this->DebugText(this, "dot:%.2f frac:%.2f =%.0f/%.0f ", _R8, _R9, fmta, v80);
  }
  vectoangles(_R14, &angles);
  AnglesToAxis(&angles, &axis);
  AxisToQuat(&axis, &out);
  vectoangles(targetDir, &angles);
  AnglesToAxis(&angles, &axis);
  AxisToQuat(&axis, &to);
  __asm { vmovaps xmm2, xmm9; frac }
  QuatSlerp(&out, &to, *(float *)&_XMM2, &result);
  UnitQuatToForward(&result, resultDir);
  if ( BgMissile::IsDebugDrawEnabled(this) )
  {
    Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
    __asm
    {
      vmovss  xmm6, cs:__real@42c80000
      vmulss  xmm0, xmm6, dword ptr [r14]
      vaddss  xmm1, xmm0, dword ptr [rsp+150h+trBase]
      vmovss  dword ptr [rsp+150h+angles], xmm1
      vmulss  xmm0, xmm6, dword ptr [r14+4]
      vaddss  xmm1, xmm0, dword ptr [rsp+150h+trBase+4]
      vmovss  dword ptr [rsp+150h+angles+4], xmm1
      vmulss  xmm0, xmm6, dword ptr [r14+8]
      vaddss  xmm1, xmm0, dword ptr [rsp+150h+trBase+8]
      vmovss  dword ptr [rsp+150h+angles+8], xmm1
    }
    this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorBlue, 0, 200);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rbx]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase]
      vmovss  dword ptr [rsp+150h+angles], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbx+4]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase+4]
      vmovss  dword ptr [rsp+150h+angles+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbx+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase+8]
      vmovss  dword ptr [rsp+150h+angles+8], xmm2
    }
    this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorLtGrey, 0, 200);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsi]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase]
      vmovss  dword ptr [rsp+150h+angles], xmm2
      vmulss  xmm1, xmm6, dword ptr [rsi+4]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase+4]
      vmovss  dword ptr [rsp+150h+angles+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rsi+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+150h+trBase+8]
      vmovss  dword ptr [rsp+150h+angles+8], xmm2
    }
    this->DebugLineWithDuration(this, entityData, &trBase, &angles, &colorGreen, 0, 200);
    memset(&trBase, 0, sizeof(trBase));
  }
  __asm { vmovaps xmm0, xmm7 }
LABEL_19:
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
  return *(float *)&_XMM0;
}

/*
==============
BgMissile::JavelinRotateVelocity
==============
*/
void BgMissile::JavelinRotateVelocity(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *currentVel, const vec3_t *targetDir, vec3_t *resultVel)
{
  BgEntityComponents *Components; 
  char v36; 
  MissileStage stage; 
  const dvar_t *v42; 
  char v45; 
  const dvar_t *v46; 
  vec3_t currentDir; 
  vec3_t resultDir; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0F8h+var_88], xmm9
  }
  _R15 = resultVel;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1477, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1480, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1482, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  _RBP = currentVel;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm5, dword ptr [rbp+4]
    vmovss  xmm3, dword ptr [rbp+0]
    vmovss  xmm4, dword ptr [rbp+8]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm8, xmm0
    vdivss  xmm2, xmm8, xmm0
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsp+0F8h+currentDir], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0F8h+currentDir+8], xmm0
    vmovss  dword ptr [rsp+0F8h+currentDir+4], xmm1
  }
  *(double *)&_XMM0 = BgMissile::JavelinRotateDir(this, entityData, timeDeltaMsec, &currentDir, targetDir, &resultDir);
  __asm
  {
    vcomiss xmm0, cs:__real@41f00000
    vmovaps xmm9, xmm0
  }
  if ( v36 )
  {
    stage = Components->missile.nonGrenade.stage;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vmulss  xmm7, xmm0, cs:__real@3a83126f
    }
    if ( stage == MISSILESTAGE_ASCENT )
      goto LABEL_24;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rbp+8]
    }
    if ( stage == MISSILESTAGE_SOFTLAUNCH )
    {
LABEL_24:
      v46 = DCONST_DVARFLT_bg_missileJavAccelClimb;
      if ( !DCONST_DVARFLT_bg_missileJavAccelClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelClimb") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      __asm { vmulss  xmm0, xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_missileJavSpeedLimitClimb;
      __asm { vaddss  xmm6, xmm0, xmm6 }
      if ( !DCONST_DVARFLT_bg_missileJavSpeedLimitClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitClimb") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !(v36 | v45) )
      {
        _RBX = DCONST_DVARFLT_bg_missileJavSpeedLimitClimb;
        if ( !DCONST_DVARFLT_bg_missileJavSpeedLimitClimb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitClimb") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      }
    }
    else
    {
      if ( stage != MISSILESTAGE_DESCENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1499, ASSERT_TYPE_ASSERT, "(components->missile.nonGrenade.stage == MISSILESTAGE_DESCENT)", (const char *)&queryFormat, "components->missile.nonGrenade.stage == MISSILESTAGE_DESCENT") )
        __debugbreak();
      v42 = DCONST_DVARFLT_bg_missileJavAccelDescend;
      if ( !DCONST_DVARFLT_bg_missileJavAccelDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelDescend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      __asm { vmulss  xmm0, xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend;
      __asm { vaddss  xmm6, xmm0, xmm6 }
      if ( !DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavSpeedLimitDescend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( !(v36 | v45) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPSPFLT_bg_missileJavSpeedLimitDescend, "bg_missileJavSpeedLimitDescend");
        __asm { vmovaps xmm6, xmm0 }
      }
    }
  }
  _RBX = DCONST_DVARFLT_bg_missileJavTurnDecelDescend;
  if ( !DCONST_DVARFLT_bg_missileJavTurnDecelDescend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavTurnDecelDescend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  if ( UseJavelinSteeringRewrite() && Components->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
  {
    _RBX = DCONST_DVARFLT_bg_missileJavTurnDecelAscend;
    if ( !DCONST_DVARFLT_bg_missileJavTurnDecelAscend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavTurnDecelAscend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  }
  __asm
  {
    vmulss  xmm0, xmm9, cs:__real@3bb60b61
    vmulss  xmm1, xmm0, xmm7
    vsubss  xmm1, xmm8, xmm1
    vmulss  xmm3, xmm6, xmm1
    vmulss  xmm2, xmm3, dword ptr [rsp+0F8h+var_A8]
    vmulss  xmm0, xmm3, dword ptr [rsp+0F8h+var_A8+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+var_A8+8]
    vmovss  dword ptr [r15], xmm2
    vmovss  dword ptr [r15+4], xmm0
    vmovss  dword ptr [r15+8], xmm1
  }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
BgMissile::JavelinSteering
==============
*/
void BgMissile::JavelinSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const Weapon *weapon, const int simulationTime, const int timeDeltaMsec)
{
  const vec3_t *Origin; 
  const char *v58; 
  char *fmt; 
  vec3_t *targetDir; 
  vec3_t *resultVel; 
  vec3_t trBase; 
  __int64 v70; 
  vec3_t targetPos; 
  vec3_t v72; 
  char v73; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
  }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1219, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _R15 = BgEntityData::GetEntityState(entityData);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1222, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RSI = BgEntityData::GetComponents(entityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1225, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1227, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  if ( _RSI->missile.nonGrenade.stage == MISSILESTAGE_SOFTLAUNCH )
  {
    if ( simulationTime - _R15->lerp.u.anonymous.data[2] < BG_ProjIgnitionDelay(weapon, 0) )
    {
      if ( this->IsDebugTextEnabled(this) )
        this->DebugText(this, "Javelin: softlaunch\n");
      goto LABEL_32;
    }
    _RSI->missile.nonGrenade.stage = MISSILESTAGE_ASCENT;
    _R15->lerp.pos.trType = TR_INTERPOLATE;
    Origin = BgEntityData::GetOrigin(entityData);
    Trajectory_SetTrBase(&_R15->lerp.pos, Origin);
    if ( UseJavelinSteeringRewrite() )
    {
      _RDI = DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel;
      if ( !DCONST_DVARFLT_bg_missileJavAccelMinInitialUpVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavAccelMinInitialUpVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vmaxss  xmm0, xmm0, dword ptr [r15+30h]
        vmovss  dword ptr [r15+30h], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm9, dword ptr [rsi+54h]
    vmovss  dword ptr [rbp+47h+targetPos], xmm9
    vmovss  xmm10, dword ptr [rsi+58h]
    vmovss  dword ptr [rbp+47h+targetPos+4], xmm10
    vmovss  xmm8, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rbp+47h+targetPos+8], xmm8
  }
  if ( _RSI->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
  {
    if ( BgMissile::JavelinClimbEnd(this, entityData, &targetPos) )
      _RSI->missile.nonGrenade.stage = MISSILESTAGE_DESCENT;
    else
      BgMissile::JavelinClimbOffset(this, entityData, &targetPos);
    __asm
    {
      vmovss  xmm9, dword ptr [rbp+47h+targetPos]
      vmovss  xmm10, dword ptr [rbp+47h+targetPos+4]
      vmovss  xmm8, dword ptr [rbp+47h+targetPos+8]
    }
  }
  Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
  __asm
  {
    vsubss  xmm4, xmm9, dword ptr [rsp+120h+trBase]
    vsubss  xmm5, xmm10, dword ptr [rsp+120h+trBase+4]
    vsubss  xmm6, xmm8, dword ptr [rsp+120h+trBase+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm3, xmm2, xmm0
    vdivss  xmm2, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+47h+var_B0], xmm0
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+47h+var_B0+4], xmm1
    vmulss  xmm0, xmm6, xmm2
    vmovss  dword ptr [rbp+47h+var_B0+8], xmm0
  }
  BgMissile::JavelinRotateVelocity(this, weaponMap, entityData, timeDeltaMsec, &_R15->lerp.pos.trDelta, &v72, &_R15->lerp.pos.trDelta);
  if ( this->IsDebugTextEnabled(this) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+120h+trBase+8]
      vsubss  xmm7, xmm0, xmm8
    }
    *(double *)&_XMM0 = BgMissile::JavelinClimbCeiling(this, entityData);
    __asm
    {
      vmovaps xmm6, xmm0
      vsubss  xmm2, xmm9, dword ptr [rsp+120h+trBase]
      vsubss  xmm1, xmm10, dword ptr [rsp+120h+trBase+4]
      vmulss  xmm3, xmm1, xmm1
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm4, xmm3, xmm2
      vsqrtss xmm5, xmm4, xmm4
      vsubss  xmm1, xmm8, dword ptr [rsp+120h+trBase+8]
      vmulss  xmm2, xmm1, xmm1
      vaddss  xmm3, xmm2, xmm4
      vsqrtss xmm4, xmm3, xmm3
      vcvtss2sd xmm1, xmm4, xmm4
      vcvtss2sd xmm0, xmm5, xmm5
      vcvtss2sd xmm2, xmm6, xmm6
      vcvtss2sd xmm3, xmm7, xmm7
    }
    v58 = "D";
    if ( _RSI->missile.nonGrenade.stage == MISSILESTAGE_ASCENT )
      v58 = "A";
    __asm
    {
      vmovsd  [rsp+120h+resultVel], xmm1
      vmovsd  [rsp+120h+targetDir], xmm0
      vmovsd  [rsp+120h+fmt], xmm2
      vmovq   r9, xmm3
    }
    this->DebugText(this, "Jav:%s h:%.0f/%.0f dist 2d:%.0f 3d:%.0f\n", v58, _R9, fmt, targetDir, resultVel);
  }
  memset(&trBase, 0, sizeof(trBase));
LABEL_32:
  _R11 = &v73;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
BgMissile::MissileDestabilize
==============
*/
void BgMissile::MissileDestabilize(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int simulationTime)
{
  BgMissile *v12; 
  BgEntityData *v14; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  Weapon *WeaponForEntity; 
  _BOOL8 v22; 
  bool IsEmptyPredictionKey; 
  bool v25; 
  char v26; 
  BgMissile *v30; 
  int v32; 
  bool v33; 
  unsigned int *p_m_holdRand; 
  unsigned int *p_pHoldrand; 
  Weapon *v50; 
  BgMissile_vtbl *v58; 
  const vec3_t *Origin; 
  BOOL fmt; 
  __int64 v72; 
  double v73; 
  __int64 v74; 
  bool inAltWeaponMode; 
  int v77; 
  int v78; 
  int v79; 
  unsigned int pHoldrand; 
  int projectileSpeed; 
  BgMissile *v82; 
  BgEntityData *v83; 
  int projectileSpeedUp; 
  Weapon *r_weapon; 
  int v86[4]; 
  vec3_t angles; 
  vec3_t forward; 
  char v94; 

  __asm { vmovaps [rsp+130h+var_80], xmm10 }
  v82 = this;
  v12 = this;
  v83 = entityData;
  v14 = entityData;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "MissileDestabilize");
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2099, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2100, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _R14 = BgEntityData::GetEntityState(v14);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2103, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RSI = BgEntityData::GetComponents(v14);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2106, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BgMissile::IsGrenade(v12, weaponMap, v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2108, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  if ( _R14->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2109, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(v14);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2113, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  if ( (Flags->m_flags[0] & 0x4000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2115, ASSERT_TYPE_ASSERT, "(!entFlags->TestFlag( BgEntityFlagsCommon::STABLE_MISSILES ))", (const char *)&queryFormat, "!entFlags->TestFlag( BgEntityFlagsCommon::STABLE_MISSILES )") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rbp+4Fh+timeDeltaMsec]
    vmulss  xmm10, xmm0, cs:__real@3a83126f
  }
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, _R14);
  r_weapon = WeaponForEntity;
  inAltWeaponMode = _R14->inAltWeaponMode;
  BG_GetProjectileSpeed(WeaponForEntity, inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  __asm { vcvttss2si ecx, dword ptr [rsi+4] }
  if ( _R14->lerp.pos.trTime + _ECX >= simulationTime )
  {
    if ( (_RSI->item[0].weapon.attachmentVariationIndices[5] & 1) == 0 )
      goto LABEL_60;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+130h+var_50], xmm7
      vmovaps [rsp+130h+var_60], xmm8
    }
    IsEmptyPredictionKey = BgPredictedEntitySystem::IsEmptyPredictionKey((const unsigned int *)&_R14->lerp.u);
    v25 = !IsEmptyPredictionKey;
    if ( !IsEmptyPredictionKey )
    {
      pHoldrand = 47843 * _RSI->missile.nonGrenade.destabilizationIndex + BgPredictedEntitySystem::GetServerTimeFromPredictionKey((const unsigned int *)&_R14->lerp.u);
      BG_srand(&pHoldrand);
    }
    *(double *)&_XMM0 = BG_DestabilizationCurvatureMax(WeaponForEntity, inAltWeaponMode);
    __asm
    {
      vcomiss xmm0, cs:__real@4e6e6b28
      vmovaps xmm8, xmm0
      vxorps  xmm7, xmm7, xmm7
    }
    if ( !v26 )
      goto LABEL_63;
    __asm { vcomiss xmm0, xmm7 }
    if ( v26 )
    {
LABEL_63:
      __asm
      {
        vcvtss2sd xmm1, xmm8, xmm8
        vmovsd  [rsp+130h+var_108], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2203, ASSERT_TYPE_ASSERT, "( ( destabilizationCurvatureMax < 1000000000.0f && destabilizationCurvatureMax >= 0.0f ) )", "( destabilizationCurvatureMax ) = %g", v73) )
        __debugbreak();
    }
    v30 = v82;
    _RDI = v86;
    v32 = 0;
    __asm { vmovaps [rsp+130h+var_40], xmm6 }
    v33 = (_RSI->item[0].weapon.attachmentVariationIndices[5] & 1) == 0;
    __asm { vmovaps [rsp+130h+var_70], xmm9 }
    if ( v33 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm9, cs:__real@bf800000
      }
      do
      {
        p_pHoldrand = &pHoldrand;
        __asm
        {
          vmovaps xmm1, xmm7; max
          vmovaps xmm0, xmm9; min
        }
        if ( !v25 )
          p_pHoldrand = &v30->m_holdRand;
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, p_pHoldrand);
        __asm { vmulss  xmm6, xmm0, xmm8 }
        if ( (unsigned int)v32 >= 3 )
        {
          LODWORD(v74) = 3;
          LODWORD(v72) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v74) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
        ++_RDI;
        ++v32;
      }
      while ( v32 < 3 );
      __asm { vmovss  xmm2, [rbp+4Fh+var_C0] }
      v14 = v83;
    }
    else
    {
      __asm { vmovss  xmm9, cs:__real@3f800000 }
      do
      {
        p_m_holdRand = &pHoldrand;
        __asm
        {
          vmovaps xmm1, xmm9; max
          vmovaps xmm0, xmm7; min
        }
        if ( !v25 )
          p_m_holdRand = &v30->m_holdRand;
        *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, p_m_holdRand);
        __asm { vmulss  xmm6, xmm0, xmm8 }
        if ( (unsigned int)v32 >= 3 )
        {
          LODWORD(v74) = 3;
          LODWORD(v72) = v32;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v72, v74) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [rdi], xmm6 }
        ++_RDI;
        ++v32;
      }
      while ( v32 < 3 );
      __asm
      {
        vcomiss xmm7, dword ptr [rsi+40h]
        vmovss  xmm1, dword ptr cs:__xmm@80000000800000008000000080000000
      }
      if ( (unsigned int)v32 <= 3 )
      {
        __asm { vmovss  xmm2, [rbp+4Fh+var_C0] }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, [rbp+4Fh+var_C0]
          vxorps  xmm2, xmm0, xmm1
        }
      }
      __asm { vcomiss xmm7, dword ptr [rsi+3Ch] }
      v14 = v83;
    }
    __asm
    {
      vmovss  xmm1, [rbp+4Fh+var_BC]
      vmovss  xmm0, [rbp+4Fh+var_B8]
    }
    v50 = r_weapon;
    __asm
    {
      vmovss  dword ptr [rsi+44h], xmm0
      vmovss  dword ptr [rsi+3Ch], xmm2
      vmovss  dword ptr [rsi+40h], xmm1
    }
    _R14->lerp.pos.trTime = simulationTime;
    *(double *)&_XMM0 = BG_DestabilizationRateTime(v50, inAltWeaponMode);
    __asm { vmulss  xmm1, xmm0, cs:__real@447a0000 }
    _RSI->missile.flags |= 1u;
    ++_RSI->missile.nonGrenade.destabilizationIndex;
    v12 = v82;
    __asm
    {
      vmovaps xmm9, [rsp+130h+var_70]
      vmovaps xmm8, [rsp+130h+var_60]
      vmovaps xmm7, [rsp+130h+var_50]
      vmovaps xmm6, [rsp+130h+var_40]
      vmovss  dword ptr [rsi+4], xmm1
    }
  }
  __asm
  {
    vmulss  xmm0, xmm10, dword ptr [rsi+3Ch]
    vaddss  xmm1, xmm0, dword ptr [r14+40h]
  }
  v58 = v12->__vftable;
  __asm
  {
    vmovss  dword ptr [rbp+4Fh+angles], xmm1
    vmulss  xmm0, xmm10, dword ptr [rsi+40h]
    vaddss  xmm1, xmm0, dword ptr [r14+44h]
    vmovss  dword ptr [rbp+4Fh+angles+4], xmm1
    vmulss  xmm0, xmm10, dword ptr [rsi+44h]
    vaddss  xmm1, xmm0, dword ptr [r14+48h]
  }
  LOBYTE(v22) = 1;
  LOBYTE(fmt) = 1;
  __asm { vmovss  dword ptr [rbp+4Fh+angles+8], xmm1 }
  v58->SetEntityAngles(v12, v14, &angles, v22, fmt);
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, [rsp+130h+projectileSpeed]
    vmulss  xmm4, xmm3, dword ptr [rbp+4Fh+forward]
    vmovss  dword ptr [r14+28h], xmm4
    vmulss  xmm0, xmm3, dword ptr [rbp+4Fh+forward+4]
    vmovss  [rsp+130h+var_EC], xmm4
    vmovss  dword ptr [r14+2Ch], xmm0
    vmulss  xmm1, xmm3, dword ptr [rbp+4Fh+forward+8]
    vmovss  dword ptr [r14+30h], xmm1
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm { vmovss  [rsp+130h+var_EC], xmm0 }
  if ( (v78 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm { vmovss  [rsp+130h+var_EC], xmm1 }
  if ( (v79 & 0x7F800000) == 2139095040 )
  {
LABEL_64:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( es->lerp.pos.trDelta )[0] ) && !IS_NAN( ( es->lerp.pos.trDelta )[1] ) && !IS_NAN( ( es->lerp.pos.trDelta )[2] )") )
      __debugbreak();
  }
  Origin = BgEntityData::GetOrigin(v14);
  Trajectory_SetTrBase(&_R14->lerp.pos, Origin);
  _R14->lerp.pos.trType = TR_INTERPOLATE;
  _R14->lerp.apos.trType = TR_INTERPOLATE;
LABEL_60:
  Sys_ProfEndNamedEvent();
  _R11 = &v94;
  __asm { vmovaps xmm10, xmmword ptr [r11-50h] }
}

/*
==============
BgMissile::MissileImpact
==============
*/
void BgMissile::MissileImpact(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int lastSimulationTime, const int simulationTime, const int timeDeltaMsec, const vec3_t *originAtSimStart, trace_t *trace, vec3_t *dir, vec3_t *endpos)
{
  Weapon *WeaponForEntity; 
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int OwnerEntNum; 
  int v27; 
  entityState_t *v28; 
  bool inAltWeaponMode; 
  BgEntityComponents *v33; 
  const dvar_t *v34; 
  WeaponDamageCalcType v35; 
  float v70; 
  void (__fastcall *BroadcastActorProjectileEvents)(BgMissile *, const int, const Weapon *, const bool, const meansOfDeath_t, const vec3_t *, const vec3_t *); 
  meansOfDeath_t v72; 
  bool v73; 
  unsigned int v74; 
  char v75; 
  const vec3_t *Origin; 
  Physics_WorldId v91; 
  trace_t *v92; 
  int v93; 
  BounceMissileResult v94; 
  unsigned int hitId; 
  entityState_t *v97; 
  int v98; 
  weapClass_t WeaponClass; 
  WeaponDamageCalcType v100; 
  int v109; 
  __int32 v110; 
  __int32 v111; 
  unsigned int v112; 
  int v113; 
  int v114; 
  int v115; 
  entityState_t *EntityState; 
  Weapon *v117; 
  void (__fastcall *AddEvent)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  unsigned __int8 v119; 
  char v120; 
  int v121; 
  BgMissile_vtbl *v122; 
  void (__fastcall *TriggerDamageCheckHit)(BgMissile *, const int, bool, const vec3_t *, const vec3_t *, int, int); 
  meansOfDeath_t v128; 
  vec3_t *v129; 
  _BOOL8 v130; 
  char v131; 
  const dvar_t *v135; 
  int number; 
  Physics_WorldId v139; 
  int MissileTargetEnt; 
  vec3_t *p_normal; 
  _BOOL8 v146; 
  const vec3_t *v147; 
  bool v148; 
  void (__fastcall *v149)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  __int64 v150; 
  __int64 v151; 
  Weapon *v152; 
  char v153; 
  void (__fastcall *v154)(BgMissile *, BgEntityData *, const trace_t *, unsigned int, unsigned int, int); 
  unsigned __int8 v155; 
  __int64 v156; 
  void (__fastcall *v157)(BgMissile *, BgEntityData *, unsigned int, unsigned int); 
  unsigned __int8 v158; 
  bool v160; 
  void (__fastcall *AddImpactEvent)(BgMissile *, BgEntityData *, const trace_t *, unsigned int, unsigned int, int); 
  unsigned __int8 v178; 
  char v179; 
  bool v180; 
  int ClipMask; 
  int v197; 
  Physics_WorldId v198; 
  float v212; 
  unsigned int ParentEntNum; 
  unsigned int v214; 
  meansOfDeath_t v217; 
  int v223; 
  void (__fastcall *KeepPointInPlayableBounds)(BgMissile *, vec3_t *); 
  vec3_t *v226; 
  BOOL fmt; 
  int hitPos; 
  int hitPosa; 
  BOOL v237; 
  Physics_QueryPhaseSelection phaseSelection; 
  char v239; 
  bool v240; 
  WeaponDamageCalcType damageCalcType; 
  char v242[4]; 
  float minDamageRange; 
  Weapon *r_weapon; 
  int lastSimulationTimea; 
  trace_t *v246; 
  meansOfDeath_t outMOD; 
  int v248; 
  int v249; 
  int outMinDamage; 
  int outMaxDamage; 
  int v252; 
  weapProjExposion_t v253; 
  WeaponDef *weapDef; 
  BgEntityComponents *Components; 
  BgWeaponMap *weaponMapa; 
  vec3_t *endPos; 
  vec3_t *v258; 
  vec3_t v259; 
  vec3_t trBase; 
  vec3_t v261; 
  entityState_t *v262; 
  vec3_t v263; 
  __int64 v264; 
  vec3_t end; 
  vec3_t start; 
  int v267; 
  int v270; 
  vec3_t v271; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  trace_t results; 
  trace_t v274; 
  char v275; 
  void *retaddr; 

  _RAX = &retaddr;
  v264 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  lastSimulationTimea = lastSimulationTime;
  weaponMapa = (BgWeaponMap *)weaponMap;
  v246 = trace;
  v258 = dir;
  _R12 = endpos;
  endPos = endpos;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "Missile_Impact");
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2237, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _R13 = BgEntityData::GetEntityState(entityData);
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2240, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2243, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  *(_QWORD *)v261.v = BgEntityData::GetFlags(entityData);
  if ( !*(_QWORD *)v261.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2246, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  *(_QWORD *)end.v = BgEntityData::GetComponentData(entityData);
  if ( !*(_QWORD *)end.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2249, ASSERT_TYPE_ASSERT, "(missileData)", (const char *)&queryFormat, "missileData") )
    __debugbreak();
  if ( _R13->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2251, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  WeaponForEntity = (Weapon *)BG_GetWeaponForEntity(weaponMap, _R13);
  r_weapon = WeaponForEntity;
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2254, ASSERT_TYPE_ASSERT, "(weapon.weaponIdx != 0)", (const char *)&queryFormat, "weapon.weaponIdx != WP_NONE") )
    __debugbreak();
  GetEntityState = this->GetEntityState;
  OwnerEntNum = BgEntityData::GetOwnerEntNum(entityData);
  *(_QWORD *)v259.v = GetEntityState(this, OwnerEntNum);
  LOWORD(v27) = Trace_GetEntityHitId(trace);
  v248 = v27;
  v28 = this->GetEntityState(this, (unsigned __int16)v27);
  v262 = v28;
  weapDef = (WeaponDef *)BG_WeaponDef(WeaponForEntity, _R13->inAltWeaponMode);
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2262, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v249 = BG_ProjImpactExplode(WeaponForEntity, _R13->inAltWeaponMode);
  v253 = BG_ProjExplosionType(WeaponForEntity, _R13->inAltWeaponMode);
  _R13->surfType = (trace->surfaceFlags >> 19) & 0x3F;
  Trajectory_GetTrBase(&_R13->lerp.pos, &trBase);
  if ( BgMissile::IsGrenade(this, weaponMapa, entityData) || (v239 = 0, BG_GetWeaponType(WeaponForEntity, _R13->inAltWeaponMode) == WEAPTYPE_GRENADE) )
    v239 = 1;
  *(double *)&_XMM0 = BG_GetADSDamageRangeScale(NULL, NULL, WeaponForEntity, _R13->inAltWeaponMode);
  __asm { vmovaps xmm8, xmm0 }
  damageCalcType = this->GetDamageCalcType(this, *(entityState_t **)v259.v, v28);
  outMinDamage = 0;
  outMaxDamage = 0;
  inAltWeaponMode = _R13->inAltWeaponMode;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2704, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RDI = BgEntityData::GetComponents(entityData);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2707, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( BG_ProjectileActivateDist(WeaponForEntity, inAltWeaponMode) > 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcomiss xmm0, dword ptr [rdi+0Ch]
    }
LABEL_54:
    v253 = WEAPPROJEXP_DUD;
    v249 = 0;
    Components->spawner.count = -803929351;
    outMOD = MOD_IMPACT;
    v35 = damageCalcType;
    BG_GetMinMaxDamage(damageCalcType, WeaponForEntity, _R13->inAltWeaponMode, &outMinDamage, &outMaxDamage);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, [rbp+210h+outMinDamage]
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, [rbp+210h+outMaxDamage]
    }
    goto LABEL_58;
  }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2723, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  v33 = BgEntityData::GetComponents(entityData);
  if ( !v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2726, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2728, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  v34 = DCONST_DVARBOOL_bg_missileJavDuds;
  if ( !DCONST_DVARBOOL_bg_missileJavDuds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileJavDuds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled && BgMissile::JavelinProjectile(this, entityData, weapDef) )
  {
    if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2735, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
      __debugbreak();
    if ( v33->missile.nonGrenade.stage == MISSILESTAGE_SOFTLAUNCH )
      goto LABEL_54;
  }
  if ( v249 )
  {
    outMOD = this->GetMeansOfDeath(this, entityData);
    v35 = damageCalcType;
    BG_GetMinMaxDamage(damageCalcType, WeaponForEntity, _R13->inAltWeaponMode, &outMinDamage, &outMaxDamage);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, [rbp+210h+outMinDamage]
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, [rbp+210h+outMaxDamage]
    }
  }
  else
  {
    __asm { vmovaps xmm3, xmm8; rangeScale }
    v35 = damageCalcType;
    BG_GetImpactDamageAndModForProjectile(damageCalcType, WeaponForEntity, _R13->inAltWeaponMode, *(float *)&_XMM3, &trBase, endpos, &outMOD);
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
      vmovaps xmm6, xmm7
    }
  }
LABEL_58:
  __asm
  {
    vxorps  xmm11, xmm11, xmm11
    vmovss  xmm9, cs:__real@3f800000
  }
  if ( !v239 )
  {
    __asm
    {
      vmovss  [rsp+310h+damageCalcType], xmm11
      vmovss  [rsp+310h+minDamageRange], xmm11
      vmovaps xmm3, xmm8; rangeScale
    }
    BG_GetDamageRange(v35, WeaponForEntity, _R13->inAltWeaponMode, *(float *)&_XMM3, &minDamageRange, (float *)&damageCalcType);
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vsubss  xmm3, xmm0, dword ptr [rbp+210h+trBase]
      vmovss  xmm1, dword ptr [r12+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+210h+trBase+4]
      vmovss  xmm0, dword ptr [r12+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+210h+trBase+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  xmm4, [rsp+310h+damageCalcType]
      vmovss  xmm0, [rsp+310h+minDamageRange]
      vcomiss xmm4, xmm0
    }
    if ( v179 )
    {
      __asm
      {
        vsubss  xmm1, xmm1, xmm4
        vsubss  xmm0, xmm0, xmm4
        vdivss  xmm0, xmm1, xmm0; val
      }
    }
    else
    {
      __asm { vmovaps xmm0, xmm9 }
    }
    __asm
    {
      vmovaps xmm2, xmm9; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm9, xmm0
      vsubss  xmm0, xmm9, xmm1
      vmulss  xmm2, xmm0, xmm7
      vmulss  xmm1, xmm1, xmm6
      vaddss  xmm6, xmm2, xmm1
    }
  }
  __asm { vcvttss2si eax, xmm6 }
  v252 = _EAX;
  LODWORD(v70) = v246->partGroup;
  minDamageRange = v70;
  if ( outMOD == MOD_IMPACT )
  {
    if ( LODWORD(v70) != 19 )
      v70 = 0.0;
    minDamageRange = v70;
  }
  if ( *(_QWORD *)v259.v )
  {
    Trajectory_GetTrBase((const trajectory_t_secure *)(*(_QWORD *)v259.v + 16i64), &v259);
    BroadcastActorProjectileEvents = this->BroadcastActorProjectileEvents;
    v72 = outMOD;
    v73 = _R13->inAltWeaponMode;
    v74 = BgEntityData::GetOwnerEntNum(entityData);
    BroadcastActorProjectileEvents(this, v74, r_weapon, v73, v72, &v259, endpos);
    memset(&v259, 0, sizeof(v259));
  }
  v75 = 1;
  __asm { vmovss  xmm10, cs:__real@80000000 }
  if ( _R13->lerp.pos.trType == TR_INTERPOLATE )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+2Ch]
      vmovss  xmm5, dword ptr [r13+28h]
      vmovss  xmm3, dword ptr [r13+30h]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm10
      vblendvps xmm1, xmm4, xmm9, xmm0
      vmovss  [rsp+310h+damageCalcType], xmm1
      vdivss  xmm2, xmm9, xmm1
      vmulss  xmm0, xmm5, xmm2
      vmovss  [rbp+210h+var_1C0], xmm0
      vmulss  xmm1, xmm2, dword ptr [r13+2Ch]
      vmovss  [rbp+210h+var_1BC], xmm1
      vmulss  xmm0, xmm2, dword ptr [r13+30h]
      vmovss  [rbp+210h+var_1B8], xmm0
    }
  }
  else
  {
    this->EvaluatePosTrajectoryDelta(this, entityData, simulationTime, (vec3_t *)&v267);
  }
  Origin = BgEntityData::GetOrigin(entityData);
  v91 = this->GetPhysicsMainWorldId(this);
  v240 = PhysicsQuery_LegacyGetPointContents(v91, Origin, -1, 32) != 0;
  LOBYTE(damageCalcType) = 0;
  if ( (**(_DWORD **)v261.v & 0x40000) == 0 || !weapDef->enableMissileRicochet && v249 )
    goto LABEL_127;
  if ( BgMissile::CheckCrumpleMissile(this, weaponMapa, weapDef, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, originAtSimStart, v246) )
  {
    _R12 = endPos;
LABEL_127:
    v117 = r_weapon;
    goto LABEL_128;
  }
  v92 = v246;
  if ( !v246->surfaceFlags && this->ShouldImpactBounceCopySurfaceFlags(this, (unsigned __int16)v248) )
  {
    if ( LODWORD(minDamageRange) == 19 )
    {
      v92->surfaceFlags = 15204352;
    }
    else
    {
      v93 = (int)v262;
      if ( v262 )
        v93 = v262->surfType << 19;
      v92->surfaceFlags = v93;
    }
  }
  v94 = BgMissile::BounceMissile(this, weaponMapa, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, originAtSimStart, v92, endPos);
  if ( v94 == BOUNCE_RESULT_BOUNCE )
  {
    _R12 = v246;
    if ( v246->hitType != TRACE_HITTYPE_ENTITY )
    {
      BgMissile::SetMissileLastHitCharacter(this, entityData, 2048);
      goto LABEL_99;
    }
    hitId = v246->hitId;
    v97 = this->GetEntityState(this, hitId);
    if ( this->IsEntityClientOrActorOrAgent(this, hitId) || v97 && v97->eType == ET_SCRIPTMOVER && v97->un.scriptMoverType == (_WORD)v94 )
    {
      v98 = hitId;
LABEL_97:
      BgMissile::SetMissileLastHitCharacter(this, entityData, v98);
      goto LABEL_98;
    }
LABEL_96:
    v98 = 2048;
    goto LABEL_97;
  }
  if ( v94 )
  {
    if ( v94 == BOUNCE_RESULT_STICK )
    {
      WeaponClass = BG_GetWeaponClass(r_weapon, _R13->inAltWeaponMode);
      v100 = (unsigned __int8)damageCalcType;
      if ( WeaponClass == WEAPCLASS_THROWINGKNIFE )
        v100 = WEAP_DMG_CALC_TYPE_PLAYER_TO_AI;
      damageCalcType = v100;
    }
    goto LABEL_96;
  }
LABEL_98:
  _R12 = v246;
LABEL_99:
  if ( !v240 && v94 && !_R12->startsolid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+210h+var_1BC]
      vmulss  xmm3, xmm0, dword ptr [r12+14h]
      vmovss  xmm1, [rbp+210h+var_1C0]
      vmulss  xmm2, xmm1, dword ptr [r12+10h]
      vaddss  xmm4, xmm3, xmm2
      vmovss  xmm0, [rbp+210h+var_1B8]
      vmulss  xmm1, xmm0, dword ptr [r12+18h]
      vaddss  xmm6, xmm4, xmm1
      vandps  xmm6, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_bounceIntensityHeavy, "bg_bounceIntensityHeavy");
    __asm { vcomiss xmm6, xmm0 }
    if ( v179 | v180 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_bg_bounceIntensityMedium, "bg_bounceIntensityMedium");
      v109 = 0;
      __asm { vcomiss xmm6, xmm0 }
    }
    else
    {
      v109 = 2;
    }
    v110 = v94 - 1;
    if ( v110 )
    {
      v111 = v110 - 2;
      if ( v111 )
      {
        if ( v111 == 1 )
          v112 = 106;
        else
          v112 = 105;
      }
      else
      {
        v112 = 104;
      }
    }
    else
    {
      v112 = 103;
    }
    __asm
    {
      vmovsd  xmm0, qword ptr [r12+10h]
      vmovsd  qword ptr [rbp+210h+var_210], xmm0
    }
    v261.v[2] = _R12->normal.v[2];
    v113 = DirToByte(&v261);
    v114 = v109 << 8;
    if ( v112 != 103 )
      v114 = 0;
    v115 = v114 | v113;
    if ( v112 - 103 <= 2 )
    {
      if ( _R12->partGroup == 19 )
      {
        EntityState = BgEntityData::GetEntityState(entityData);
        if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2451, ASSERT_TYPE_ASSERT, "(entityDataEntityState)", (const char *)&queryFormat, "entityDataEntityState") )
          __debugbreak();
        EntityState->surfType = 29;
      }
      this->AddImpactEvent(this, entityData, _R12, v112, v115, 1);
    }
    else
    {
      this->AddEvent(this, entityData, v112, v115);
    }
  }
  v117 = r_weapon;
  if ( BG_ProjectileActivateDist(r_weapon, _R13->inAltWeaponMode) > 0 && _R13->lerp.pos.trType == TR_STATIONARY )
  {
    AddEvent = this->AddEvent;
    v119 = DirToByte(&_R12->normal);
    AddEvent(this, entityData, 117u, v119);
    this->FreeEntityAfterEvent(this, entityData);
  }
  v75 = 0;
  _R12 = endPos;
LABEL_128:
  v120 = (char)v262;
  if ( v262 )
    v120 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v262->lerp.eFlags, ACTIVE, 0x10u);
  v242[0] = 0;
  if ( v120 )
  {
    v121 = (unsigned __int16)v248;
    _R13->lerp.u.anonymous.data[5] = (unsigned __int16)v248;
    LOBYTE(v237) = v75;
    this->DirectImpactDamage(this, entityData, v121, SLODWORD(minDamageRange), outMOD, (vec3_t *)&v267, v252, weapDef, v237, v249, v246, v258, (bool *)v242);
  }
  if ( !this->GetEntityState(this, (unsigned __int16)v248) )
    v248 = 2047;
  v122 = this->__vftable;
  LODWORD(minDamageRange) = (unsigned __int16)v248;
  v122->OnImpact(this, entityData, (unsigned __int16)v248);
  if ( !v75 )
  {
    if ( (_BYTE)damageCalcType )
      Components->missile.flags |= 0x4000u;
    Sys_ProfEndNamedEvent();
    goto LABEL_218;
  }
  lastSimulationTimea = BgEntityData::GetOwnerEntNum(entityData);
  if ( v252 )
  {
    if ( BG_IsChargeShotWeapon(v117, _R13->inAltWeaponMode) && (Components->missile.flags & 0x1000) != 0 )
    {
      *(double *)&_XMM0 = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(v117, _R13->inAltWeaponMode);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vmulss  xmm0, xmm0, xmm1
        vcvttss2si eax, xmm0
      }
      v252 = _EAX;
    }
    TriggerDamageCheckHit = this->TriggerDamageCheckHit;
    v128 = outMOD;
    v129 = BgEntityData::GetOrigin(entityData);
    LOBYTE(v130) = 1;
    TriggerDamageCheckHit(this, lastSimulationTimea, v130, v129, _R12, v252, v128);
  }
  v131 = 1;
  if ( v240 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12]
      vmovss  dword ptr [rbp+210h+start], xmm0
      vmovss  xmm1, dword ptr [r12+4]
      vmovss  dword ptr [rbp+210h+start+4], xmm1
      vmovss  xmm0, dword ptr [r12+8]
      vmovss  dword ptr [rbp+210h+start+8], xmm0
    }
    v135 = DCONST_DVARFLT_bg_missileWaterMaxDepth;
    if ( !DCONST_DVARFLT_bg_missileWaterMaxDepth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileWaterMaxDepth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v135);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+210h+start+8]
      vaddss  xmm1, xmm0, dword ptr [rdi+28h]
      vmovss  dword ptr [rbp+210h+start+8], xmm1
    }
    number = _R13->number;
    v139 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyTrace(v139, &results, &start, _R12, &bounds_origin, number, 1, 32, 0, NULL, All);
    if ( !results.startsolid )
    {
      __asm
      {
        vmovss  xmm4, [rbp+210h+results.fraction]
        vcomiss xmm4, xmm9
      }
    }
    v131 = 0;
  }
  MissileTargetEnt = BgEntityMissileComponentData::GetMissileTargetEnt(*(BgEntityMissileComponentData **)end.v);
  if ( v240 && v131 )
  {
    p_normal = &v271;
  }
  else if ( _R13->eType == ET_MISSILE && weapDef->guidedMissileType == MISSILE_GUIDANCE_JAVELIN && !_R13->lerp.u.anonymous.data[3] && (Components->item[0].weapon.attachmentVariationIndices[5] & 2) != 0 && MissileTargetEnt != 2047 && MissileTargetEnt == LODWORD(minDamageRange) )
  {
    p_normal = &MY_STRAIGHTUPNORMAL;
  }
  else if ( BG_ProjExplosionEffectForceNormalUp(v117, _R13->inAltWeaponMode) )
  {
    p_normal = &MY_STRAIGHTUPNORMAL;
  }
  else if ( BG_ProjExplosionEffectInheritParentDirection(v117, _R13->inAltWeaponMode) )
  {
    p_normal = v258;
  }
  else
  {
    p_normal = &v246->normal;
  }
  BG_GetExplosionDamageRangeInfo(r_weapon, _R13->inAltWeaponMode, &outDamageRangeInfo);
  __asm
  {
    vmovss  xmm6, dword ptr [r13+28h]
    vmovss  xmm7, dword ptr [r13+2Ch]
    vmovss  xmm8, dword ptr [r13+30h]
  }
  if ( v240 && v131 )
  {
    this->AddMissileTrajectoryEvent(this, entityData, (const vec3_t *)&v270, 2046u, (const scr_string_t)0);
    v147 = (const vec3_t *)&v270;
  }
  else
  {
    this->AddMissileTrajectoryEvent(this, entityData, _R12, v248, v246->partName);
    v147 = _R12;
  }
  LOBYTE(fmt) = 1;
  LOBYTE(v146) = 1;
  this->SetEntityOrigin(this, entityData, v147, v146, fmt);
  v148 = v240;
  if ( v240 && !v131 )
  {
    v149 = this->AddEvent;
    v150 = DirToByte(p_normal);
    v151 = 118i64;
    goto LABEL_172;
  }
  switch ( v253 )
  {
    case WEAPPROJEXP_GRENADE:
    case WEAPPROJEXP_HEAVY:
      AddImpactEvent = this->AddImpactEvent;
      v178 = DirToByte(p_normal);
      AddImpactEvent(this, entityData, v246, 109u, v178, 0);
      goto LABEL_182;
    case WEAPPROJEXP_ROCKET:
      v154 = this->AddImpactEvent;
      v155 = DirToByte(p_normal);
      v154(this, entityData, v246, 113u, v155, 1);
LABEL_182:
      LOBYTE(hitPos) = _R13->inAltWeaponMode;
      v152 = r_weapon;
      __asm { vmovss  xmm2, [rbp+210h+outDamageRangeInfo.outerRadius] }
      ((void (__fastcall *)(BgMissile *, vec3_t *, __int64, _QWORD, Weapon *, int))this->NotifyRadiusDamage)(this, _R12, v156, (unsigned int)lastSimulationTimea, r_weapon, hitPos);
      v148 = v240;
      goto LABEL_174;
    case WEAPPROJEXP_NONE:
      v157 = this->AddEvent;
      v158 = DirToByte(p_normal);
      v157(this, entityData, 116u, v158);
      goto LABEL_182;
    case WEAPPROJEXP_FLASHBANG:
      v149 = this->AddEvent;
      v150 = DirToByte(p_normal);
      v151 = 115i64;
      break;
    case WEAPPROJEXP_DUD:
      v160 = BgMissile::JavelinProjectile(this, entityData, weapDef);
      v149 = this->AddEvent;
      if ( v160 )
      {
        __asm
        {
          vmulss  xmm1, xmm7, xmm7
          vmulss  xmm0, xmm6, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, xmm10
          vblendvps xmm1, xmm3, xmm9, xmm0
          vdivss  xmm0, xmm9, xmm1
          vmulss  xmm2, xmm0, xmm6
          vmulss  xmm3, xmm0, xmm7
          vmulss  xmm5, xmm0, xmm8
          vmovss  xmm4, dword ptr cs:__xmm@80000000800000008000000080000000
          vxorps  xmm0, xmm2, xmm4
          vmovss  dword ptr [rbp+210h+end], xmm0
          vxorps  xmm1, xmm3, xmm4
          vmovss  dword ptr [rbp+210h+end+4], xmm1
          vxorps  xmm0, xmm5, xmm4
          vmovss  dword ptr [rbp+210h+end+8], xmm0
        }
        v150 = DirToByte(&end);
      }
      else
      {
        v150 = DirToByte(p_normal);
      }
      v151 = 119i64;
      break;
    default:
      goto LABEL_173;
  }
LABEL_172:
  v149(this, entityData, v151, v150);
  v148 = v240;
LABEL_173:
  v152 = r_weapon;
LABEL_174:
  if ( v148 )
    v153 = 21;
  else
    v153 = (v246->surfaceFlags >> 19) & 0x3F;
  _R13->surfType = v153;
  this->DeathNotify(this, entityData);
  this->FreeEntityAfterEvent(this, entityData);
  if ( this->m_changeEntityTypeOnImpact )
    _R13->eType = ET_FIRST;
  if ( BG_GetWeaponType(v152, _R13->inAltWeaponMode) == WEAPTYPE_GRENADE && BG_ActorOrAgentSystemEnabled() )
    this->DissociateGrenadeFromAI(this, entityData);
  _R13->lerp.eFlags.m_flags[0] ^= 4u;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_R13->lerp.eFlags, ACTIVE, 0xCu);
  if ( v249 )
  {
    v179 = 0;
    v180 = !weapDef->bigExplosion;
    if ( weapDef->bigExplosion )
    {
      _RDI = DCONST_DVARFLT_bg_missileExplosionLiftDistance;
      if ( !DCONST_DVARFLT_bg_missileExplosionLiftDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileExplosionLiftDistance") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    }
    _RAX = v246;
    __asm
    {
      vmovss  xmm3, dword ptr [rax+14h]
      vmovss  xmm6, cs:__real@3f000000
      vcomiss xmm3, xmm6
    }
    if ( v179 | v180 )
    {
      __asm
      {
        vmulss  xmm2, xmm9, cs:__real@40000000
        vmulss  xmm0, xmm2, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r12]
        vmovss  dword ptr [rbp+210h+end], xmm1
        vmulss  xmm0, xmm2, xmm3
        vaddss  xmm1, xmm0, dword ptr [r12+4]
        vmovss  dword ptr [rbp+210h+end+4], xmm1
        vmulss  xmm0, xmm2, dword ptr [rax+18h]
        vaddss  xmm1, xmm0, dword ptr [r12+8]
        vmovss  dword ptr [rbp+210h+end+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm9, cs:__real@40000000
        vaddss  xmm2, xmm0, dword ptr [r12+8]
        vmovss  xmm1, dword ptr [r12+4]
        vmovss  xmm0, dword ptr [r12]
        vmovss  dword ptr [rbp+210h+end], xmm0
        vmovss  dword ptr [rbp+210h+end+4], xmm1
        vmovss  dword ptr [rbp+210h+end+8], xmm2
      }
    }
    ClipMask = BgEntityData::GetClipMask(entityData);
    v197 = _R13->number;
    v198 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyTrace(v198, &v274, _R12, &end, &bounds_origin, v197, 1, ClipMask, 0, NULL, All);
    __asm
    {
      vmulss  xmm6, xmm6, [rbp+210h+var_110.fraction]
      vmovss  xmm1, dword ptr [rbp+210h+end]
      vsubss  xmm0, xmm1, dword ptr [r12]
      vmulss  xmm2, xmm0, xmm6
      vaddss  xmm3, xmm2, dword ptr [r12]
      vmovss  dword ptr [r12], xmm3
      vmovss  xmm0, dword ptr [rbp+210h+end+4]
      vsubss  xmm1, xmm0, dword ptr [r12+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [r12+4]
      vmovss  dword ptr [r12+4], xmm3
      vmovss  xmm0, dword ptr [rbp+210h+end+8]
      vsubss  xmm1, xmm0, dword ptr [r12+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [r12+8]
      vmovss  dword ptr [r12+8], xmm3
    }
    v212 = minDamageRange;
    this->ExplodeNotify(this, entityData, LODWORD(minDamageRange), (const vec3_t *)&v267, _R12, p_normal);
    v152 = r_weapon;
  }
  else
  {
    v212 = minDamageRange;
  }
  ParentEntNum = BgEntityData::GetParentEntNum(entityData);
  v214 = ParentEntNum;
  if ( v249 && ParentEntNum != 2047 )
  {
    __asm
    {
      vmovss  xmm0, [rbp+210h+outDamageRangeInfo.outerRadius]
      vcomiss xmm0, xmm11
    }
    if ( ParentEntNum > 0x7FF )
    {
      *(double *)&_XMM0 = BG_DamageConeAngle(v152, _R13->inAltWeaponMode);
      __asm { vmovaps xmm6, xmm0 }
      v217 = this->GetSplashMethodOfDeath(this, entityData);
      __asm { vmulss  xmm0, xmm6, cs:__real@3c8efa35; X }
      *(float *)&_XMM0 = cosf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, cs:__real@43340000
        vcmpless xmm3, xmm1, xmm6
        vmovss  xmm2, cs:__real@bf800000
        vblendvps xmm4, xmm0, xmm2, xmm3
      }
      v223 = LODWORD(v212);
      if ( v242[0] )
        v223 = 2047;
      LOBYTE(phaseSelection) = _R13->inAltWeaponMode;
      __asm { vmovss  dword ptr [rsp+310h+hitPos], xmm4 }
      ((void (__fastcall *)(BgMissile *, vec3_t *, _QWORD, _QWORD, BgExplosionDamageRangeInfo *, int, vec3_t *, int, meansOfDeath_t, Weapon *, Physics_QueryPhaseSelection))this->RadiusDamage)(this, _R12, (unsigned int)_R13->number, v214, &outDamageRangeInfo, hitPosa, v258, v223, v217, r_weapon, phaseSelection);
      __asm { vmovss  xmm0, [rbp+210h+outDamageRangeInfo.outerRadius] }
    }
    __asm { vcvttss2si eax, xmm0 }
    this->ProjectileImpactSplashNotify(this, v214, r_weapon, _R12, _EAX, LODWORD(minDamageRange));
  }
  KeepPointInPlayableBounds = this->KeepPointInPlayableBounds;
  v226 = BgEntityData::GetOrigin(entityData);
  KeepPointInPlayableBounds(this, v226);
  Trajectory_GetTrBase(&_R13->lerp.pos, &v263);
  this->KeepPointInPlayableBounds(this, &v263);
  Trajectory_SetTrBase(&_R13->lerp.pos, &v263);
  this->LinkEntity(this, _R13->number);
  if ( (_BYTE)damageCalcType )
    Components->missile.flags |= 0x4000u;
  Sys_ProfEndNamedEvent();
  memset(&v263, 0, sizeof(v263));
LABEL_218:
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v275;
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
  _RAX = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  __asm
  {
    vmovss  xmm1, dword ptr [rax+728h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, edi
    vmulss  xmm2, xmm0, cs:__real@3a83126f
    vsubss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm3, xmm0
  }
  return (unsigned int)simulationTime <= EntityState->lerp.pos.trTime;
}

/*
==============
BgMissile::MissileLandAngles
==============
*/
void BgMissile::MissileLandAngles(BgMissile *this, BgEntityData *entityData, trace_t *trace, vec3_t *vAngles, int bForceAlign, int rotateDir, const int lastSimulationTime)
{
  entityState_t *EntityState; 
  int v22; 
  char v24; 
  char v61; 
  __int64 v73; 
  __int64 v74; 

  _RDI = vAngles;
  _RBP = trace;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3501, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3504, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbp+0]
    vcvttss2si r14d, xmm1
  }
  v22 = lastSimulationTime + _ER14;
  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  this->EvaluateAngTrajectory(this, entityData, v22, _RDI);
  __asm
  {
    vmovss  xmm0, cs:__real@3dcccccd
    vcomiss xmm0, dword ptr [rbp+18h]
  }
  if ( v24 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]; fYaw
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
      vmovaps [rsp+0A8h+var_58], xmm11
      vmovaps [rsp+0A8h+var_68], xmm13
    }
    *(double *)&_XMM0 = PitchForYawOnNormal(*(const float *)&_XMM0, &_RBP->normal);
    _RBX = rotateDir;
    __asm { vmovaps xmm8, xmm0 }
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v73) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, 3) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr [rdi+rbx*4]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vxorps  xmm13, xmm13, xmm13
      vroundss xmm2, xmm13, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm11, xmm0, cs:__real@43b40000
      vandps  xmm7, xmm11, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    if ( !bForceAlign && EntityState->lerp.apos.trType != TR_SLERP )
    {
      EntityState->lerp.apos.trBase.v[0] = _RDI->v[0];
      EntityState->lerp.apos.trBase.v[1] = _RDI->v[1];
      EntityState->lerp.apos.trBase.v[2] = _RDI->v[2];
      EntityState->lerp.apos.trTime = v22;
      *(double *)&_XMM0 = BG_random(&this->m_holdRand);
      __asm { vmovaps xmm6, xmm0 }
      _RAX = vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir);
      __asm
      {
        vcomiss xmm7, cs:__real@42a00000
        vmulss  xmm1, xmm6, cs:__real@3e99999a
        vmovss  xmm2, dword ptr [rax]
      }
      if ( v24 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@bf59999a
          vsubss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm1, xmm2
          vmovss  dword ptr [rax], xmm2
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm0, xmm1, cs:__real@3f59999a
          vmulss  xmm1, xmm0, xmm2
          vmovss  dword ptr [rax], xmm1
        }
      }
    }
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v74) = 3;
      LODWORD(v73) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, v74) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rbx*4]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm13, xmm2, 1
      vmovaps xmm13, [rsp+0A8h+var_68]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, cs:__real@43b40000
    }
    if ( (unsigned int)rotateDir >= 3 )
    {
      LODWORD(v74) = 3;
      LODWORD(v73) = rotateDir;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v73, v74) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi+rbx*4], xmm6 }
    if ( bForceAlign )
    {
      _RAX = vec3_t::operator[](_RDI, rotateDir);
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@42b40000
      }
      if ( v24 | v61 )
        __asm { vmovaps xmm0, xmm8; angle }
      else
        __asm { vaddss  xmm0, xmm8, cs:__real@43340000 }
    }
    else
    {
      __asm { vcomiss xmm7, cs:__real@42340000 }
      _RAX = vec3_t::operator[](_RDI, rotateDir);
      __asm
      {
        vcomiss xmm7, cs:__real@42a00000
        vmovss  xmm1, dword ptr [rax]
      }
      if ( v24 )
      {
        __asm
        {
          vmulss  xmm0, xmm11, cs:__real@3e800000
          vaddss  xmm0, xmm0, xmm1
        }
      }
      else
      {
        __asm { vmovaps xmm0, xmm1 }
      }
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = vec3_t::operator[](_RDI, rotateDir);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_48]
      vmovaps xmm7, [rsp+0A8h+var_38]
      vmovaps xmm11, [rsp+0A8h+var_58]
      vmovss  dword ptr [rax], xmm6
    }
  }
  else if ( !bForceAlign && EntityState->lerp.apos.trType != TR_SLERP )
  {
    BG_rand(&this->m_holdRand);
    vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebx
      vaddss  xmm0, xmm0, dword ptr [rax]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = vec3_t::operator[](&EntityState->lerp.apos.trDelta, rotateDir);
    __asm { vmovss  dword ptr [rax], xmm6 }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
}

/*
==============
BgMissile::MissileLandAnglesFlat
==============
*/
void BgMissile::MissileLandAnglesFlat(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime)
{
  char v15; 
  vec3_t right; 
  vec3_t up; 

  _RDI = angles;
  _RBX = trace;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3473, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3474, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vcvttss2si r8d, xmm1
  }
  this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + _ER8, _RDI);
  NearestPitchAndYawOnPlane(_RDI, &_RBX->normal, _RDI);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rdi+8]
  }
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3484, ASSERT_TYPE_ASSERT, "(angles[ROLL] == 0.f)", (const char *)&queryFormat, "angles[ROLL] == 0.f") )
    __debugbreak();
  AngleVectors(_RDI, NULL, &right, &up);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+14h]
    vmulss  xmm0, xmm4, dword ptr [rsp+88h+right+4]
    vmovss  xmm3, dword ptr [rbx+10h]
    vmulss  xmm1, xmm3, dword ptr [rsp+88h+right]
    vmovss  xmm5, dword ptr [rbx+18h]
    vmulss  xmm3, xmm3, dword ptr [rsp+88h+up]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsp+88h+right+8]
    vaddss  xmm0, xmm2, xmm1; Y
    vmulss  xmm2, xmm4, dword ptr [rsp+88h+up+4]
    vmulss  xmm1, xmm5, dword ptr [rsp+88h+up+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm1; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
BgMissile::MissileLandAnglesFlatMaintainingDirection
==============
*/
void BgMissile::MissileLandAnglesFlatMaintainingDirection(BgMissile *this, const BgEntityData *entityData, trace_t *trace, vec3_t *angles, const int lastSimulationTime)
{
  vec3_t right; 
  vec3_t up; 

  _RSI = angles;
  _RBX = trace;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3406, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3407, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vcvttss2si r8d, xmm1
  }
  this->EvaluateAngTrajectory(this, entityData, lastSimulationTime + _ER8, _RSI);
  __asm { vmovss  xmm0, dword ptr [rsi+4]; fYaw }
  *(double *)&_XMM0 = PitchForYawOnNormal(*(const float *)&_XMM0, &_RBX->normal);
  _RSI->v[2] = 0.0;
  __asm { vmovss  dword ptr [rsi], xmm0 }
  AngleVectors(_RSI, NULL, &right, &up);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+14h]
    vmulss  xmm0, xmm4, dword ptr [rsp+88h+right+4]
    vmovss  xmm3, dword ptr [rbx+10h]
    vmulss  xmm1, xmm3, dword ptr [rsp+88h+right]
    vmovss  xmm5, dword ptr [rbx+18h]
    vmulss  xmm3, xmm3, dword ptr [rsp+88h+up]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rsp+88h+right+8]
    vaddss  xmm0, xmm2, xmm1; Y
    vmulss  xmm2, xmm4, dword ptr [rsp+88h+up+4]
    vmulss  xmm1, xmm5, dword ptr [rsp+88h+up+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm1, xmm4, xmm1; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmovss  dword ptr [rsi+8], xmm1
  }
}

/*
==============
BgMissile::MissileLandAnglesKnife
==============
*/
__int64 BgMissile::MissileLandAnglesKnife(BgMissile *this, const BgEntityData *entityData, const Weapon *weapon, const bool isAlternate, trace_t *trace, vec3_t *angles, vec3_t *origin, const int lastSimulationTime)
{
  BgMissile_vtbl *v18; 
  unsigned __int16 EntityHitId; 
  const entityState_t *v24; 
  const BgEntityComponents *Components; 
  __int64 result; 
  vec3_t forward; 

  _RBX = trace;
  _RBP = angles;
  _R15 = origin;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3431, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RSI = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3434, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3436, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  v18 = this->__vftable;
  __asm
  {
    vmovaps [rsp+0E8h+var_58], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vcvttss2si r8d, xmm1
    vmovaps [rsp+0E8h+var_68], xmm7
    vmovaps [rsp+0E8h+var_78], xmm8
  }
  v18->EvaluateAngTrajectory(this, entityData, lastSimulationTime + _ER8, angles);
  EntityHitId = Trace_GetEntityHitId(trace);
  v24 = this->GetEntityState(this, EntityHitId);
  if ( !v24 || !BG_IsCharacterEntity(v24) || (Components = BgEntityData::GetComponents((BgEntityData *)entityData), !BG_Missile_SticksToPlayer(Components, weapon, isAlternate)) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+2Ch]
      vmovss  xmm4, dword ptr [rsi+28h]
      vmovss  xmm3, dword ptr [rsi+30h]
      vmovss  xmm7, cs:__real@3f800000
      vmovss  xmm8, cs:__real@3f333333
      vcomiss xmm8, dword ptr [rbx+18h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm6, xmm2, xmm2
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm7, xmm0
      vdivss  xmm2, xmm7, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rsp+0E8h+forward], xmm0
      vmulss  xmm1, xmm2, dword ptr [rsi+2Ch]
      vmovss  dword ptr [rsp+0E8h+forward+4], xmm1
      vmulss  xmm0, xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rsp+0E8h+forward+8], xmm0
    }
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+14h]
    vmovss  xmm7, dword ptr [rbx+10h]
  }
  *(double *)&_XMM0 = BG_random(&this->m_holdRand);
  __asm
  {
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovaps xmm8, xmm0
    vmovss  xmm0, dword ptr [rbx+18h]; Y
    vsqrtss xmm1, xmm2, xmm2; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm2, xmm0, cs:__real@42652ee0
    vmulss  xmm1, xmm8, cs:__real@41f00000
    vaddss  xmm2, xmm2, xmm1
    vsubss  xmm0, xmm2, cs:__real@41700000
    vmovss  dword ptr [rbp+0], xmm0
  }
  AngleVectors(angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  xmm7, cs:__real@3fc00000
    vmulss  xmm1, xmm7, dword ptr [rbx+10h]
    vmovss  xmm6, cs:__real@40900000
    vsubss  xmm5, xmm0, xmm1
    vmovss  xmm1, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  dword ptr [r15], xmm5
    vmulss  xmm2, xmm7, dword ptr [rbx+14h]
    vsubss  xmm4, xmm1, xmm2
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+forward]
    vsubss  xmm2, xmm5, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+forward+4]
    vmovss  dword ptr [r15+4], xmm4
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  dword ptr [r15], xmm2
    vsubss  xmm2, xmm4, xmm1
    vmulss  xmm3, xmm7, xmm3
    vmovss  dword ptr [r15+4], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+forward+8]
    vsubss  xmm4, xmm0, xmm3
    vsubss  xmm0, xmm4, xmm2
    vmovss  dword ptr [r15+8], xmm0
  }
  result = 3i64;
  __asm
  {
    vmovaps xmm8, [rsp+0E8h+var_78]
    vmovaps xmm7, [rsp+0E8h+var_68]
    vmovaps xmm6, [rsp+0E8h+var_58]
  }
  return result;
}

/*
==============
BgMissile::MissilePassedTarget
==============
*/
__int64 BgMissile::MissilePassedTarget(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData)
{
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 
  char v33; 
  char v34; 
  const vec3_t *Angles; 
  unsigned __int8 v49; 
  __int64 result; 
  vec3_t trBase; 
  __int64 v57; 
  vec3_t forward; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1158, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1161, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RBP = BgEntityData::GetComponents(entityData);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1164, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  if ( EntityState->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1166, ASSERT_TYPE_ASSERT, "(es->eType == ET_MISSILE)", (const char *)&queryFormat, "es->eType == ET_MISSILE") )
    __debugbreak();
  if ( BgMissile::IsGrenade(this, weaponMap, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1167, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  _EDI = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode)->guidedMissileType;
  Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+54h]
    vsubss  xmm6, xmm0, dword ptr [rsp+0D8h+trBase]
    vmovss  xmm1, dword ptr [rbp+58h]
    vsubss  xmm7, xmm1, dword ptr [rsp+0D8h+trBase+4]
    vmovss  xmm0, dword ptr [rbp+5Ch]
    vsubss  xmm8, xmm0, dword ptr [rsp+0D8h+trBase+8]
    vmulss  xmm1, xmm7, xmm7
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm9, xmm2, xmm1
  }
  _EAX = 3;
  __asm
  {
    vmovd   xmm1, eax
    vmovd   xmm0, edi
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm2, cs:__real@47afc800
    vmovss  xmm1, cs:__real@471c4000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vcomiss xmm9, xmm0
  }
  if ( !(v33 | v34) )
    goto LABEL_19;
  Angles = BgEntityData::GetAngles(entityData);
  AngleVectors(Angles, &forward, NULL, NULL);
  __asm
  {
    vsqrtss xmm1, xmm9, xmm9
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm2, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm2, xmm0
    vdivss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm5
    vmulss  xmm3, xmm0, dword ptr [rsp+0D8h+forward+4]
    vmulss  xmm1, xmm6, xmm5
    vmulss  xmm2, xmm1, dword ptr [rsp+0D8h+forward]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm8, xmm5
    vmulss  xmm1, xmm0, dword ptr [rsp+0D8h+forward+8]
    vaddss  xmm2, xmm4, xmm1
    vcomiss xmm2, cs:__real@be4ccccd
  }
  if ( v33 )
    v49 = 1;
  else
LABEL_19:
    v49 = 0;
  memset(&trBase, 0, sizeof(trBase));
  result = v49;
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
BgMissile::MissileRollAngles
==============
*/
void BgMissile::MissileRollAngles(BgMissile *this, const BgEntityData *entityData, const trace_t *trace, trajectory_t *outAngleTraj, const int lastSimulationTime, const int simulationTime)
{
  bool v12; 
  bool v13; 
  int v35; 
  int v36; 
  int v37; 
  char v40; 

  __asm { vmovaps [rsp+200h+var_60], xmm8 }
  _R14 = trace;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3559, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RSI = BgEntityData::GetEntityState((BgEntityData *)entityData);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3562, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v12 = _R14 == NULL;
  if ( !_R14 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3564, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace");
    v12 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vcomiss xmm8, dword ptr [r14]
  }
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3565, ASSERT_TYPE_ASSERT, "(trace->fraction < 1.0f)", (const char *)&queryFormat, "trace->fraction < 1.0f") )
    __debugbreak();
  if ( !outAngleTraj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3566, ASSERT_TYPE_ASSERT, "(outAngleTraj)", (const char *)&queryFormat, "outAngleTraj") )
    __debugbreak();
  _RAX = BgEntityData::GetAngles((BgEntityData *)entityData);
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  [rsp+200h+var_1AC], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  _RAX = BgEntityData::GetAngles((BgEntityData *)entityData);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  [rsp+200h+var_1AC], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  _RAX = BgEntityData::GetAngles((BgEntityData *)entityData);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+8]
    vmovss  [rsp+200h+var_1AC], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3571, ASSERT_TYPE_SANITY, "( !IS_NAN( ( entityData->GetAngles() )[0] ) && !IS_NAN( ( entityData->GetAngles() )[1] ) && !IS_NAN( ( entityData->GetAngles() )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( entityData->GetAngles() )[0] ) && !IS_NAN( ( entityData->GetAngles() )[1] ) && !IS_NAN( ( entityData->GetAngles() )[2] )") )
      __debugbreak();
  }
  outAngleTraj->trTime = simulationTime;
  __asm { vmovaps [rsp+200h+var_70], xmm9 }
  outAngleTraj->trType = TR_INTERPOLATE;
  outAngleTraj->trBase = *BgEntityData::GetAngles((BgEntityData *)entityData);
  *(_QWORD *)outAngleTraj->trDelta.v = 0i64;
  outAngleTraj->trDelta.v[2] = 0.0;
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+2Ch]
    vmovss  xmm4, dword ptr [rsi+28h]
    vmovss  xmm5, dword ptr [rsi+30h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm1, xmm2, xmm2
    vcvtss2sd xmm0, xmm1, xmm1
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    vmovss  [rsp+200h+var_1B0], xmm1
  }
  outAngleTraj->trType = TR_STATIONARY;
  __asm { vmovaps xmm9, [rsp+200h+var_70] }
  _R11 = &v40;
  __asm { vmovaps xmm8, xmmword ptr [r11-30h] }
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
  unsigned __int16 v17; 
  const entityState_t *v18; 
  int OwnerEntNum; 
  unsigned int v20; 
  const entityState_t *v21; 
  bool result; 
  unsigned __int16 v23; 
  entityState_t *v24; 
  unsigned __int16 v25; 
  entityState_t *v26; 
  unsigned __int16 v27; 
  entityState_t *v28; 
  unsigned __int16 v29; 
  entityState_t *v30; 
  WeapStickinessType v31; 
  bool v32; 
  bool v33; 
  __int64 v73; 

  _RDI = trace;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3271, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  Components = BgEntityData::GetComponents((BgEntityData *)entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3274, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  EntityHitId = Trace_GetEntityHitId(_RDI);
  if ( EntityHitId >= 0x800 )
  {
    LODWORD(v73) = EntityHitId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3277, ASSERT_TYPE_ASSERT, "(unsigned)( entityId ) < (unsigned)( ( 2048 ) )", "entityId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v73, 2048) )
      __debugbreak();
  }
  __asm
  {
    vmovaps [rsp+0D8h+var_58], xmm6
    vmovaps [rsp+0D8h+var_68], xmm7
    vmovaps [rsp+0D8h+var_78], xmm8
    vmovaps [rsp+0D8h+var_88], xmm9
    vmovaps [rsp+0D8h+var_98], xmm10
  }
  if ( this->TestEntityFlag(this, EntityHitId, NODRAW) && !BG_WeaponSticksToNonStick(weapon, isAlternate) )
    goto LABEL_40;
  v17 = Trace_GetEntityHitId(_RDI);
  v18 = this->GetEntityState(this, v17);
  if ( !v18 || !BG_IsCharacterEntity(v18) )
  {
    v23 = Trace_GetEntityHitId(_RDI);
    v24 = this->GetEntityState(this, v23);
    if ( v24 && v24->eType == ET_VEHICLE && !BG_WeaponSticksToVehicles(weapon, isAlternate) )
      goto LABEL_40;
    v25 = Trace_GetEntityHitId(_RDI);
    v26 = this->GetEntityState(this, v25);
    if ( v26 )
    {
      if ( v26->eType == ET_TURRET && !BG_WeaponSticksToTurrets(weapon, isAlternate) )
        goto LABEL_40;
    }
    v27 = Trace_GetEntityHitId(_RDI);
    v28 = this->GetEntityState(this, v27);
    if ( v28 )
    {
      if ( v28->eType == ET_HELICOPTER && !BG_WeaponSticksToVehicles(weapon, isAlternate) )
        goto LABEL_40;
    }
    v29 = Trace_GetEntityHitId(_RDI);
    v30 = this->GetEntityState(this, v29);
    if ( v30 )
    {
      if ( v30->eType == ET_SCRIPTMOVER && this->TestEntityFlag(this, EntityHitId, (BgEntityFlagsMP)33i64) )
        goto LABEL_40;
    }
    if ( _RDI->hitId == Components->missile.doorScriptableIndex )
      goto LABEL_40;
    v31 = BG_WeaponStickinessType(weapon, isAlternate);
    if ( (unsigned int)(v31 - 1) > 1 )
    {
      v32 = (unsigned int)v31 < WEAPSTICKINESS_KNIFE;
      v33 = v31 == WEAPSTICKINESS_KNIFE;
      if ( v31 == WEAPSTICKINESS_KNIFE )
      {
        _RAX = velocity;
        __asm
        {
          vmovss  xmm7, cs:__real@3f333333
          vcomiss xmm7, dword ptr [rdi+18h]
          vmovss  xmm5, dword ptr [rax+4]
          vmovss  xmm3, dword ptr [rax]
          vmovss  xmm4, dword ptr [rax+8]
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm6, xmm2, xmm2
          vcmpless xmm0, xmm6, cs:__real@80000000
          vblendvps xmm0, xmm6, xmm1, xmm0
          vdivss  xmm1, xmm1, xmm0
          vmulss  xmm8, xmm3, xmm1
          vmulss  xmm9, xmm5, xmm1
          vmulss  xmm10, xmm4, xmm1
        }
        if ( !v32 )
          goto LABEL_48;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_grenadeRestThreshold, "bg_grenadeRestThreshold");
        __asm { vcomiss xmm6, xmm0 }
        if ( !v32 )
        {
LABEL_48:
          __asm
          {
            vmulss  xmm1, xmm9, dword ptr [rdi+14h]
            vmulss  xmm0, xmm8, dword ptr [rdi+10h]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm10, dword ptr [rdi+18h]
            vaddss  xmm0, xmm2, xmm1
            vcomiss xmm0, xmm7
          }
          if ( v32 || v33 )
            goto LABEL_40;
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f333333
          vcomiss xmm0, dword ptr [rdi+18h]
        }
        if ( (unsigned int)v31 >= WEAPSTICKINESS_KNIFE )
          goto LABEL_40;
        if ( !BG_WeaponSticksToFloors(weapon, isAlternate) )
        {
          _RAX = velocity;
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  xmm2, dword ptr [rax+4]
            vmovss  xmm3, dword ptr [rax+8]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm6, xmm2, xmm2
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_bg_grenadeRestThreshold, "bg_grenadeRestThreshold");
          __asm { vcomiss xmm6, xmm0 }
          if ( !v32 )
          {
LABEL_40:
            result = 0;
            goto LABEL_41;
          }
        }
      }
    }
    result = 1;
    goto LABEL_41;
  }
  if ( BG_IsThrowingAxe(weapon) )
  {
    OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)entityData);
    v20 = OwnerEntNum;
    if ( OwnerEntNum != 2047 )
    {
      if ( !this->IsEntityValid(this, OwnerEntNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3295, ASSERT_TYPE_ASSERT, "(IsEntityValid( attackerEntNum ))", (const char *)&queryFormat, "IsEntityValid( attackerEntNum )") )
        __debugbreak();
      v21 = this->GetEntityState(this, v20);
      if ( BG_IsCharacterEntity(v21) && BgMissile::CharactersOnSameTeam(this, v20, EntityHitId) )
        goto LABEL_40;
    }
  }
  result = BG_Missile_SticksToPlayer(Components, weapon, isAlternate);
LABEL_41:
  __asm
  {
    vmovaps xmm10, [rsp+0D8h+var_98]
    vmovaps xmm9, [rsp+0D8h+var_88]
    vmovaps xmm8, [rsp+0D8h+var_78]
    vmovaps xmm7, [rsp+0D8h+var_68]
    vmovaps xmm6, [rsp+0D8h+var_58]
  }
  return result;
}

/*
==============
BgMissile::MissileTrace
==============
*/
void BgMissile::MissileTrace(BgMissile *this, const BgEntityData *missileEntData, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int passEntityNum2, int contentmask, bool detailTrace)
{
  char v17; 
  const entityState_t *EntityState; 
  BgStatic *ActiveStatics; 
  int OwnerEntNum; 
  __int64 v29; 
  CgGlobalsSP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  __int64 v32; 
  team_t skipTeamCharacters; 
  char v49; 
  Physics_WorldId detailWorldId; 
  Physics_WorldId mainWorldId; 
  Physics_WorldId v76; 
  Physics_WorldId v77; 
  bool v78; 
  unsigned __int16 EntityHitId; 
  const entityState_t *v105; 
  const entityState_t *v106; 
  unsigned int eType; 
  int v108; 
  entityState_t *v109; 
  unsigned __int8 surfType; 
  int *skipEntities; 
  int *skipEntitiesa; 
  __int64 skipEntityCount; 
  int grenadeEntity; 
  vec3_t v115; 
  vec3_t starta; 
  trace_t resultsa; 
  int v118[4]; 

  _R12 = end;
  _R15 = start;
  _RDI = results;
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vucomiss xmm0, dword ptr [r9]
  }
  if ( v17 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r12+4]
      vucomiss xmm0, dword ptr [r9+4]
    }
    if ( v17 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r12+8]
        vucomiss xmm0, dword ptr [r9+8]
      }
      if ( v17 )
      {
        memset_0(&results->position, 0, 0x54ui64);
        _RDI->fraction = 1.0;
        return;
      }
    }
  }
  __asm
  {
    vmovaps [rsp+1D0h+var_50], xmm6
    vmovaps [rsp+1D0h+var_60], xmm7
    vmovaps [rsp+1D0h+var_80], xmm9
  }
  grenadeEntity = 2047;
  if ( missileEntData )
  {
    EntityState = BgEntityData::GetEntityState((BgEntityData *)missileEntData);
    if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 584, ASSERT_TYPE_ASSERT, "(missileEntState)", (const char *)&queryFormat, "missileEntState") )
      __debugbreak();
    grenadeEntity = EntityState->number;
  }
  v118[0] = passEntityNum;
  v118[1] = passEntityNum2;
  v118[2] = this->GetExtraSkipEntityForTraces(this, missileEntData);
  ActiveStatics = BgStatic::GetActiveStatics();
  if ( !ActiveStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 594, ASSERT_TYPE_ASSERT, "(bgStatic)", (const char *)&queryFormat, "bgStatic") )
    __debugbreak();
  OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)missileEntData);
  v29 = OwnerEntNum;
  if ( ActiveStatics->HasCharacterInfo(ActiveStatics, OwnerEntNum) )
  {
    if ( ActiveStatics->IsClient(ActiveStatics) )
    {
      LocalClientGlobals = (CgGlobalsSP *)CG_GetLocalClientGlobals((const LocalClientNum_t)LODWORD(ActiveStatics[1].__vftable));
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)v29 >= *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28] )
        {
          LODWORD(skipEntities) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", skipEntities, *(_DWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[28]) )
            __debugbreak();
        }
        v32 = *(_QWORD *)&LocalClientGlobals->pipViews[0].pipRefDef.radiantLiveLightsRaw[2].lightDef[12] + 14792 * v29;
        goto LABEL_26;
      }
      CharacterInfo = CgGlobalsSP::GetCharacterInfo(LocalClientGlobals, v29);
    }
    else
    {
      CharacterInfo = (const characterInfo_t *)((__int64 (__fastcall *)(BgStatic *, _QWORD))ActiveStatics->__vftable[1].GetAnimStatics)(ActiveStatics, (unsigned int)v29);
    }
    v32 = (__int64)CharacterInfo;
LABEL_26:
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 600, ASSERT_TYPE_ASSERT, "(ownerCharacterInfo)", (const char *)&queryFormat, "ownerCharacterInfo") )
      __debugbreak();
    skipTeamCharacters = *(_DWORD *)(v32 + 12);
    goto LABEL_31;
  }
  skipTeamCharacters = TEAM_ZERO;
LABEL_31:
  _RBX = DCONST_DVARFLT_bg_missileMaxShapeCastDistance;
  if ( !DCONST_DVARFLT_bg_missileMaxShapeCastDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileMaxShapeCastDistance") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+1D0h+var_70], xmm8
    vmovaps [rsp+1D0h+var_90], xmm10
    vmovaps [rsp+1D0h+var_A0], xmm11
    vmovaps [rsp+1D0h+var_B0], xmm12
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vsubss  xmm4, xmm0, dword ptr [r15]
    vmovss  xmm0, dword ptr [r12+4]
    vsubss  xmm5, xmm0, dword ptr [r15+4]
    vmovss  xmm0, dword ptr [r12+8]
    vsubss  xmm6, xmm0, dword ptr [r15+8]
    vmovss  xmm7, dword ptr [rbx+28h]
    vmovss  xmm9, cs:__real@3f800000
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm7, xmm7
    vcomiss xmm2, xmm1
  }
  if ( v49 | v17 )
  {
    v76 = this->GetPhysicsDetailWorldId(this);
    v77 = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyGrenadeTrace(_RDI, _R15, end, bounds, grenadeEntity, v118, 3, skipTeamCharacters, contentmask, All, detailTrace, v77, v76);
  }
  else
  {
    __asm
    {
      vsqrtss xmm8, xmm2, xmm2
      vcmpless xmm0, xmm8, cs:__real@80000000
      vblendvps xmm0, xmm8, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm8, xmm0
      vmulss  xmm10, xmm4, xmm1
      vmulss  xmm11, xmm5, xmm1
      vmulss  xmm12, xmm6, xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 621, ASSERT_TYPE_ASSERT, "(traceLength > 0.0f)", (const char *)&queryFormat, "traceLength > 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm1, dword ptr [r15]
      vmovss  xmm3, dword ptr [r15+4]
      vmovss  xmm4, dword ptr [r15+8]
      vmulss  xmm0, xmm10, xmm7
      vmovss  dword ptr [rbp+0D0h+start], xmm1
      vaddss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm11, xmm7
      vmovss  dword ptr [rbp+0D0h+var_150], xmm1
      vmulss  xmm1, xmm12, xmm7
      vaddss  xmm0, xmm2, xmm3
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+0D0h+start+4], xmm3
      vmovss  dword ptr [rbp+0D0h+start+8], xmm4
      vmovaps xmm6, xmm7
      vmovss  dword ptr [rbp+0D0h+var_150+8], xmm2
      vmovss  dword ptr [rbp+0D0h+var_150+4], xmm0
    }
    detailWorldId = this->GetPhysicsDetailWorldId(this);
    mainWorldId = this->GetPhysicsMainWorldId(this);
    PhysicsQuery_LegacyGrenadeTrace(&resultsa, &starta, &v115, bounds, grenadeEntity, v118, 3, skipTeamCharacters, contentmask, All, detailTrace, mainWorldId, detailWorldId);
    if ( MAX_STEPS < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 634, ASSERT_TYPE_ASSERT, "(stepCount <= MAX_STEPS)", (const char *)&queryFormat, "stepCount <= MAX_STEPS") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0D0h+results.fraction]
      vmovups xmm2, xmmword ptr [rbp+0D0h+results.allsolid]
      vmovups ymm1, ymmword ptr [rbp+0D0h+results.contents]
      vmovups ymmword ptr [rdi], ymm0
      vmovsd  xmm0, [rbp+0D0h+results.debugHitName]
      vmovups ymmword ptr [rdi+20h], ymm1
      vmovd   eax, xmm2
      vmovups xmmword ptr [rdi+40h], xmm2
      vmovsd  qword ptr [rdi+50h], xmm0
    }
    if ( (_BYTE)_EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 643, ASSERT_TYPE_ASSERT, "(!segmentedTrace.allsolid)", (const char *)&queryFormat, "!segmentedTrace.allsolid") )
      __debugbreak();
    if ( !resultsa.startsolid )
    {
      __asm
      {
        vmovss  xmm5, [rbp+0D0h+results.fraction]
        vcomiss xmm5, xmm9
        vcomiss xmm6, xmm8
      }
      _RDI->fraction = 1.0;
    }
  }
  v78 = !_RDI->startsolid;
  __asm
  {
    vmovaps xmm12, [rsp+1D0h+var_B0]
    vmovaps xmm11, [rsp+1D0h+var_A0]
    vmovaps xmm10, [rsp+1D0h+var_90]
    vmovaps xmm8, [rsp+1D0h+var_70]
    vmovaps xmm7, [rsp+1D0h+var_60]
  }
  if ( _RDI->startsolid )
  {
    _RDI->fraction = 0.0;
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vsubss  xmm4, xmm0, dword ptr [r12]
      vmovss  xmm1, dword ptr [r15+4]
      vsubss  xmm5, xmm1, dword ptr [r12+4]
      vmovss  xmm0, dword ptr [r15+8]
      vsubss  xmm6, xmm0, dword ptr [r12+8]
      vmulss  xmm0, xmm4, xmm4
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm2, xmm4
      vmovss  dword ptr [rdi+10h], xmm0
      vmulss  xmm0, xmm2, xmm6
      vmulss  xmm1, xmm2, xmm5
      vmovss  dword ptr [rdi+18h], xmm0
      vmovss  dword ptr [rdi+14h], xmm1
    }
  }
  __asm
  {
    vcomiss xmm9, dword ptr [rdi]
    vmovaps xmm9, [rsp+1D0h+var_80]
    vmovaps xmm6, [rsp+1D0h+var_50]
  }
  if ( !v78 )
  {
    EntityHitId = Trace_GetEntityHitId(_RDI);
    v105 = this->GetEntityState(this, EntityHitId);
    v106 = v105;
    if ( v105 )
    {
      if ( BG_IsCharacterEntity(v105) || (eType = (unsigned __int16)v106->eType, (unsigned __int16)eType <= 0x15u) && (v108 = 2359300, _bittest(&v108, eType)) )
      {
        v109 = this->GetEntityState(this, _RDI->hitId);
        surfType = v109->surfType;
        if ( surfType >= 0x40u )
        {
          LODWORD(skipEntityCount) = 64;
          LODWORD(skipEntitiesa) = surfType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 705, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntState->surfType ) < (unsigned)( 64 )", "hitEntState->surfType doesn't index SURF_TYPECOUNT\n\t%i not in [0, %i)", skipEntitiesa, skipEntityCount) )
            __debugbreak();
        }
        _RDI->surfaceFlags = (v109->surfType & 0x3F) << 19;
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
  int v26; 
  vec3_t *Angles; 
  bool (__fastcall *SetEntityAngles)(BgMissile *, BgEntityData *, const vec3_t *, const bool, const bool); 
  vec3_t *v38; 
  _BOOL8 v39; 
  const vec4_t *v40; 
  BOOL fmt; 
  bool v44; 
  vec3_t trBase; 
  int timeDeltaMseca; 
  int simulationTimea; 
  BgWeaponMap *weaponMapa; 
  int projectileSpeed; 
  int projectileSpeedUp; 
  Weapon *r_weapon; 
  const WeaponDef *v52; 
  __int64 v53; 
  int v54[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  v53 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  timeDeltaMseca = timeDeltaMsec;
  simulationTimea = simulationTime;
  weaponMapa = (BgWeaponMap *)weaponMap;
  _R13 = outResult;
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
  _RDI = BG_WeaponDef(r_weapon, EntityState->inAltWeaponMode);
  v52 = _RDI;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 752, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  BG_GetProjectileSpeed(r_weapon, EntityState->inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  v44 = BgEntityData::GetHandler(entityData) == 12;
  if ( simulationTime <= EntityState->lerp.u.anonymous.data[2] || BgTrajectory::IsTrackingTrajectory(&EntityState->lerp.pos) || EntityState->lerp.pos.trType == TR_LINEAR || !v44 )
  {
    this->EvaluatePosTrajectory(this, entityData, simulationTime, outResult);
  }
  else if ( (Components->item[0].weapon.attachmentVariationIndices[5] & 0x80u) == 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+3Fh+timeDeltaMsec]
      vmulss  xmm6, xmm0, cs:__real@3a83126f
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm7, dword ptr [rdi+728h]
    }
    if ( BgMissile::IsGrenade(this, weaponMapa, entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 789, ASSERT_TYPE_ASSERT, "(!IsGrenade( weaponMap, entityData ))", (const char *)&queryFormat, "!IsGrenade( weaponMap, entityData )") )
      __debugbreak();
    __asm { vcomiss xmm7, dword ptr [rdi+72Ch] }
    if ( BgMissile::IsDebugDrawEnabled(this) )
    {
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rbp+3Fh+var_78], xmm0
        vmovss  xmm1, dword ptr [rax+4]
        vmovss  [rbp+3Fh+var_74], xmm1
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  [rbp+3Fh+var_70], xmm0
      }
    }
    BgMissile::GuidedMissileSteering(this, weaponMapa, entityData, simulationTimea, timeDeltaMseca, *(int **)trBase.v);
    if ( _RDI->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || Components->missile.nonGrenade.stage )
    {
      Trajectory_GetTrBase(&EntityState->lerp.pos, &trBase);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [r15]
        vaddss  xmm1, xmm1, dword ptr [rsp+110h+trBase]
        vmovss  dword ptr [rsp+110h+trBase], xmm1
        vmulss  xmm2, xmm6, dword ptr [r15+4]
        vaddss  xmm1, xmm2, dword ptr [rsp+110h+trBase+4]
        vmovss  dword ptr [rsp+110h+trBase+4], xmm1
        vmulss  xmm2, xmm6, dword ptr [r15+8]
        vaddss  xmm1, xmm2, dword ptr [rsp+110h+trBase+8]
        vmovss  dword ptr [rsp+110h+trBase+8], xmm1
      }
      Trajectory_SetTrBase(&EntityState->lerp.pos, &trBase);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+trBase]
        vmovss  dword ptr [r13+0], xmm0
        vmovss  xmm1, dword ptr [rsp+110h+trBase+4]
        vmovss  dword ptr [r13+4], xmm1
        vmovss  xmm0, dword ptr [rsp+110h+trBase+8]
        vmovss  dword ptr [r13+8], xmm0
      }
      memset(&trBase, 0, sizeof(trBase));
      v26 = simulationTimea;
    }
    else
    {
      v26 = simulationTimea;
      this->EvaluatePosTrajectory(this, entityData, simulationTimea, outResult);
    }
    if ( EntityState->lerp.apos.trType == TR_INTERPOLATE && BgMissile::MissileIsReadyForSteering(this, weaponMapa, entityData, v26) )
    {
      Angles = BgEntityData::GetAngles(entityData);
      vectoangles(&EntityState->lerp.pos.trDelta, Angles);
      SetEntityAngles = this->SetEntityAngles;
      v38 = BgEntityData::GetAngles(entityData);
      LOBYTE(fmt) = 1;
      LOBYTE(v39) = 1;
      SetEntityAngles(this, entityData, v38, v39, fmt);
      EntityState->lerp.apos.trType = TR_INTERPOLATE;
    }
    if ( BgMissile::IsDebugDrawEnabled(this) )
    {
      if ( v52->guidedMissileType != MISSILE_GUIDANCE_JAVELIN || (v40 = &colorOrange, Components->missile.nonGrenade.stage != MISSILESTAGE_ASCENT) )
        v40 = &colorRed;
      this->DebugLineWithDuration(this, entityData, (const vec3_t *)v54, outResult, v40, 0, 200);
    }
  }
  else
  {
    this->MissileTrajectoryClientControlled(this, weaponMapa, simulationTime, timeDeltaMseca, entityData, outResult);
  }
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+110h+var_58+8]
    vmovaps xmm7, [rsp+110h+var_68+8]
  }
}

/*
==============
BgMissile::PenetrateGlass
==============
*/
void BgMissile::PenetrateGlass(BgMissile *this, const BgWeaponMap *weaponMap, const BgEntityData *entityData, const int missileClipMask, const int simulationTime, const int timeDeltaMsec, trace_t *results, const vec3_t *start, const vec3_t *end, int damage, bool predicted, bool alwaysShatterOnImpact)
{
  const vec3_t *v19; 
  BgEntityData *v20; 
  const entityState_t *v23; 
  const Weapon *WeaponForEntity; 
  unsigned __int16 EntityHitId; 
  bool v30; 
  char v55; 
  BgMissile_vtbl *v78; 
  unsigned __int16 v84; 
  int passEntityNum2; 
  bool detailTrace; 
  int passEntityNum; 
  const Bounds *bounds; 
  entityState_t *v92; 
  hitLocation_t partGroup; 
  scr_string_t partName; 
  unsigned int modelIndex; 
  damageReturnCode_t (__fastcall *ApplyDamage)(BgMissile *, const int, const int, const int, const vec3_t *, const vec3_t *, int, int, int, const Weapon *, bool, hitLocation_t, unsigned int, scr_string_t, int, const vec3_t *); 
  bool inAltWeaponMode; 
  const vec3_t *Origin; 
  unsigned int OwnerEntNum; 
  const Weapon *v108; 
  int LastHitCharacterConst; 
  bool v110; 
  int v111; 
  const Bounds *Box; 
  unsigned int v113; 
  unsigned __int16 v114; 
  unsigned __int16 GlassHitId; 
  const BgEntityComponents *Components; 
  int v118; 
  const entityState_t *EntityState; 
  Weapon *r_weapon; 
  int v122; 
  int v125[4]; 
  int v126[4]; 

  _RDI = results;
  v19 = start;
  v20 = (BgEntityData *)entityData;
  _R12 = end;
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1996, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1997, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(v20);
  v23 = EntityState;
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 2000, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(v20);
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  r_weapon = (Weapon *)WeaponForEntity;
  if ( BG_IsChargeShotWeapon(WeaponForEntity, EntityState->inAltWeaponMode) && (Components->missile.flags & 0x1000) != 0 )
  {
    *(double *)&_XMM0 = BG_WeaponCharge_GetFireAtMaxDamageMultiplier(WeaponForEntity, EntityState->inAltWeaponMode);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, [rbp+60h+damage]
      vmulss  xmm0, xmm0, xmm1
      vcvttss2si esi, xmm0
    }
  }
  else
  {
    _ESI = damage;
  }
  v118 = _ESI;
  EntityHitId = Trace_GetEntityHitId(results);
  v114 = EntityHitId;
  if ( EntityHitId >= 0x7FEu )
  {
    GlassHitId = Trace_GetGlassHitId(results);
    if ( !GlassHitId )
      return;
    v30 = EntityState->lerp.pos.trType == TR_INTERPOLATE;
    __asm
    {
      vmovaps [rsp+160h+var_40], xmm6
      vmovaps [rsp+160h+var_50], xmm7
      vmovaps [rsp+160h+var_60], xmm8
    }
    if ( v30 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r12]
        vsubss  xmm5, xmm0, dword ptr [r15]
        vmovss  xmm0, dword ptr [r12+4]
        vsubss  xmm6, xmm0, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [r12+8]
        vsubss  xmm7, xmm0, dword ptr [r15+8]
        vmovd   xmm3, [rbp+60h+timeDeltaMsec]
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmovss  xmm0, cs:__real@49742400
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm4, xmm2, xmm1
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm3, xmm3, xmm3
        vdivss  xmm1, xmm0, xmm3
        vmulss  xmm8, xmm4, xmm1
        vmovss  [rbp+60h+var_A0], xmm5
        vmovss  [rbp+60h+var_9C], xmm6
        vmovss  [rbp+60h+var_98], xmm7
      }
    }
    else
    {
      this->EvaluatePosTrajectoryDelta(this, v20, simulationTime, (vec3_t *)&v122);
      __asm
      {
        vmovss  xmm5, [rbp+60h+var_A0]
        vmovss  xmm6, [rbp+60h+var_9C]
        vmovss  xmm7, [rbp+60h+var_98]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm8, xmm2, xmm1
      }
    }
    if ( !alwaysShatterOnImpact )
    {
      _RSI = DCONST_DVARFLT_bg_missileGlassShatterVel;
      if ( !DCONST_DVARFLT_bg_missileGlassShatterVel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_missileGlassShatterVel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vmulss  xmm1, xmm0, xmm0
        vcomiss xmm8, xmm1
      }
      if ( v55 )
        goto LABEL_31;
      __asm
      {
        vmovss  xmm7, [rbp+60h+var_98]
        vmovss  xmm6, [rbp+60h+var_9C]
        vmovss  xmm5, [rbp+60h+var_A0]
      }
    }
    if ( predicted )
    {
      v84 = this->GlassTempDestroyPiece(this, GlassHitId - 1);
    }
    else
    {
      _RAX = end;
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm2
        vmovss  xmm6, dword ptr [rdi]
        vmulss  xmm0, xmm5, xmm2
        vmovss  [rbp+60h+var_90], xmm0
        vmulss  xmm0, xmm7, xmm2
        vmovss  [rbp+60h+var_88], xmm0
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rbp+60h+var_8C], xmm1
        vsubss  xmm1, xmm0, dword ptr [r15]
        vmovss  xmm0, dword ptr [rax+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [r15]
        vsubss  xmm1, xmm0, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [rax+8]
      }
      v78 = this->__vftable;
      __asm
      {
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [r15+8]
        vmovss  [rbp+60h+var_80], xmm3
        vaddss  xmm3, xmm2, dword ptr [r15+4]
        vmulss  xmm2, xmm1, xmm6
        vmovss  [rbp+60h+var_7C], xmm3
        vaddss  xmm3, xmm2, dword ptr [r15+8]
        vmovss  [rbp+60h+var_78], xmm3
      }
      v78->GlassDestroyPiece(this, GlassHitId - 1, (const vec3_t *)v126, (const vec3_t *)v125);
      v84 = 0;
    }
    passEntityNum2 = BgMissile::GetLastHitCharacterConst(this, v20);
    detailTrace = BG_WeaponRadiusDamageDetailTrace(r_weapon, EntityState->inAltWeaponMode);
    passEntityNum = BgEntityData::GetOwnerEntNum(v20);
    bounds = BgEntityData::GetBox(v20);
    BgMissile::MissileTrace(this, v20, results, start, end, bounds, passEntityNum, passEntityNum2, missileClipMask, detailTrace);
    if ( predicted )
      this->GlassRestorePiece(this, GlassHitId - 1, v84);
LABEL_31:
    __asm
    {
      vmovaps xmm7, [rsp+160h+var_50]
      vmovaps xmm6, [rsp+160h+var_40]
      vmovaps xmm8, [rsp+160h+var_60]
    }
    return;
  }
  v92 = this->GetEntityState(this, EntityHitId);
  if ( !v92 || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v92->lerp.eFlags, ACTIVE, 0x10u) )
  {
    if ( _ESI )
    {
      if ( !this->IsScriptableEntity(this, v114) )
      {
        this->EvaluatePosTrajectoryDelta(this, v20, simulationTime, (vec3_t *)&v122);
        __asm
        {
          vmovss  xmm0, [rbp+60h+var_9C]
          vmovss  xmm1, [rbp+60h+var_A0]
          vmulss  xmm2, xmm1, xmm1
          vmulss  xmm3, xmm0, xmm0
          vmovss  xmm0, [rbp+60h+var_98]
          vmulss  xmm1, xmm0, xmm0
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vcomiss xmm2, cs:__real@3f800000
        }
        if ( !v55 )
        {
          if ( predicted )
          {
            v108 = r_weapon;
          }
          else
          {
            partGroup = results->partGroup;
            partName = results->partName;
            modelIndex = results->modelIndex;
            ApplyDamage = this->ApplyDamage;
            inAltWeaponMode = EntityState->inAltWeaponMode;
            Origin = BgEntityData::GetOrigin(v20);
            OwnerEntNum = BgEntityData::GetOwnerEntNum((BgEntityData *)entityData);
            v113 = modelIndex;
            v108 = r_weapon;
            ApplyDamage(this, v114, EntityState->number, OwnerEntNum, (const vec3_t *)&v122, Origin, v118, 0, 17, r_weapon, inAltWeaponMode, partGroup, v113, partName, 0, &results->normal);
            v20 = (BgEntityData *)entityData;
            v23 = EntityState;
            v19 = start;
            _R12 = end;
          }
          LastHitCharacterConst = BgMissile::GetLastHitCharacterConst(this, v20);
          v110 = BG_WeaponRadiusDamageDetailTrace(v108, v23->inAltWeaponMode);
          v111 = BgEntityData::GetOwnerEntNum(v20);
          Box = BgEntityData::GetBox(v20);
          BgMissile::MissileTrace(this, v20, results, v19, _R12, Box, v111, LastHitCharacterConst, missileClipMask, v110);
        }
      }
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

double __fastcall BgMissile::Rand(BgMissile *this, double min, double max)
{
  __asm
  {
    vmovaps xmm0, xmm1; min
    vmovaps xmm1, xmm2; max
  }
  return BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, &this->m_holdRand);
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
  unsigned int pHoldrand; 
  float c; 
  float s; 

  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RBX = outY;
  __asm { vmovaps [rsp+68h+var_38], xmm7 }
  _RDI = outX;
  if ( !outX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4403, ASSERT_TYPE_ASSERT, "(outX)", (const char *)&queryFormat, "outX") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 4404, ASSERT_TYPE_ASSERT, "(outY)", (const char *)&queryFormat, "outY") )
    __debugbreak();
  pHoldrand = seed;
  BG_srand(&pHoldrand);
  *(double *)&_XMM0 = BG_random(&pHoldrand);
  __asm { vmulss  xmm6, xmm0, cs:__real@43b40000 }
  *(double *)&_XMM0 = BG_random(&pHoldrand);
  __asm
  {
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm6, cs:__real@3c8efa35; radians
  }
  FastSinCos(*(const float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm2, xmm7, [rsp+68h+c]
    vmulss  xmm0, xmm7, [rsp+68h+s]
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
    vmovss  dword ptr [rdi], xmm2
    vmovss  dword ptr [rbx], xmm0
  }
}

/*
==============
BgMissile::RobotechSteering
==============
*/
void BgMissile::RobotechSteering(BgMissile *this, BgEntityData *entityData, const WeaponDef *weapDef, const int simulationTime)
{
  char v17; 
  entityState_t *(__fastcall *GetEntityState)(BgMissile *, const int); 
  unsigned int ParentEntNum; 
  __int64 v24; 
  char v106; 
  vec3_t trBase; 
  float s; 
  float c[3]; 
  __int64 v118; 
  vec3_t vec; 
  vec3_t forward; 
  vec3_t angles; 
  vec3_t outResult; 
  __int64 v123; 
  char v124; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v123;
  v118 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  _R12 = weapDef;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1725, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _R14 = BgEntityData::GetEntityState(entityData);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1728, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !BgEntityData::GetComponents(entityData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1731, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  BgMissile::GetTargetPosition(this, entityData, &outResult);
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vmovss  xmm6, dword ptr [rbp+50h+outResult+8]
    vmovss  xmm7, dword ptr [rbp+50h+outResult+4]
    vmovss  xmm8, dword ptr [rbp+50h+outResult]
    vucomiss xmm8, xmm12
  }
  if ( !v17 )
    goto LABEL_25;
  __asm { vucomiss xmm7, xmm12 }
  if ( !v17 )
    goto LABEL_25;
  __asm { vucomiss xmm6, xmm12 }
  if ( !v17 )
  {
LABEL_25:
    if ( BgEntityData::GetParentEntNum(entityData) == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1742, ASSERT_TYPE_ASSERT, "(entityData->GetParentEntNum() != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityData->GetParentEntNum() != ENTITYNUM_NONE") )
      __debugbreak();
    GetEntityState = this->GetEntityState;
    ParentEntNum = BgEntityData::GetParentEntNum(entityData);
    v24 = (__int64)GetEntityState(this, ParentEntNum);
    if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1745, ASSERT_TYPE_ASSERT, "(esParent)", (const char *)&queryFormat, "esParent") )
      __debugbreak();
    Trajectory_GetTrBase(&_R14->lerp.pos, &trBase);
    __asm
    {
      vsubss  xmm0, xmm8, dword ptr [rsp+150h+trBase]
      vmovss  dword ptr [rsp+150h+vec], xmm0
      vsubss  xmm1, xmm7, dword ptr [rsp+150h+trBase+4]
      vmovss  dword ptr [rsp+150h+vec+4], xmm1
      vsubss  xmm0, xmm6, dword ptr [rsp+150h+trBase+8]
      vmovss  dword ptr [rsp+150h+vec+8], xmm0
    }
    Trajectory_GetTrBase((const trajectory_t_secure *)(v24 + 16), &trBase);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+150h+trBase]
      vsubss  xmm5, xmm0, xmm8
      vmovss  xmm1, dword ptr [rsp+150h+trBase+4]
      vsubss  xmm3, xmm1, xmm7
      vmovss  xmm0, dword ptr [rsp+150h+trBase+8]
      vsubss  xmm4, xmm0, xmm6
      vmovss  xmm8, dword ptr [rsp+150h+vec+4]
      vmulss  xmm1, xmm8, xmm8
      vmovss  xmm6, dword ptr [rsp+150h+vec]
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm7, dword ptr [rsp+150h+vec+8]
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm11, xmm0, xmm0
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm9, xmm2, xmm2
      vcmpless xmm0, xmm11, cs:__real@80000000
      vmovss  xmm10, cs:__real@3f800000
      vblendvps xmm1, xmm11, xmm10, xmm0
      vdivss  xmm2, xmm10, xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rsp+150h+vec], xmm0
      vmulss  xmm1, xmm8, xmm2
      vmovss  dword ptr [rsp+150h+vec+4], xmm1
      vmulss  xmm0, xmm7, xmm2
      vmovss  dword ptr [rsp+150h+vec+8], xmm0
    }
    vectoangles(&vec, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [r12+0D18h]
      vaddss  xmm1, xmm0, dword ptr [r15+80h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm1, xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm0, xmm1, cs:__real@3c8efa35; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, c);
    __asm
    {
      vdivss  xmm4, xmm11, xmm9
      vmovss  xmm0, dword ptr [r12+0D10h]
      vaddss  xmm1, xmm0, dword ptr [r15+78h]
      vmulss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm2, [rsp+150h+s]
      vaddss  xmm1, xmm3, dword ptr [rsp+150h+angles]
      vmovss  dword ptr [rsp+150h+angles], xmm1
      vmovss  xmm2, dword ptr [r12+0D14h]
      vaddss  xmm0, xmm2, dword ptr [r15+7Ch]
      vmulss  xmm1, xmm0, xmm4
      vmulss  xmm3, xmm1, [rsp+150h+c]
      vaddss  xmm0, xmm3, dword ptr [rsp+150h+angles+4]
      vmovss  dword ptr [rsp+150h+angles+4], xmm0
    }
    AngleVectors(&angles, &forward, NULL, NULL);
    __asm
    {
      vxorps  xmm5, xmm5, xmm5
      vcvtsi2ss xmm5, xmm5, dword ptr [r12+70Ch]
      vmulss  xmm1, xmm5, dword ptr [rsp+150h+forward]
      vmovss  dword ptr [rsp+150h+forward], xmm1
      vmulss  xmm0, xmm5, dword ptr [rsp+150h+forward+4]
      vmovss  dword ptr [rsp+150h+forward+4], xmm0
      vmulss  xmm3, xmm5, dword ptr [rsp+150h+forward+8]
      vmovss  dword ptr [rsp+150h+forward+8], xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+50h+timeDeltaMsec]
      vmulss  xmm7, xmm0, cs:__real@3a83126f
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r13d
      vsubss  xmm3, xmm0, xmm7
      vmulss  xmm0, xmm3, cs:__real@3c23d70a; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm6, xmm0, cs:__real@41200000
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
      vmovss  xmm1, dword ptr [r14+2Ch]; cur
      vmovss  xmm0, dword ptr [rsp+150h+forward+4]; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  dword ptr [r14+2Ch], xmm0
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
      vmovss  xmm1, dword ptr [r14+28h]; cur
      vmovss  xmm0, dword ptr [rsp+150h+forward]; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  dword ptr [r14+28h], xmm0
      vmovaps xmm3, xmm7; deltaTime
      vmovaps xmm2, xmm6; rate
      vmovss  xmm1, dword ptr [r14+30h]; cur
      vmovss  xmm0, dword ptr [rsp+150h+forward+8]; tgt
    }
    *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  dword ptr [r14+30h], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [r12+71Ch]
      vcomiss xmm11, xmm1
    }
    if ( v106 )
      this->Explode(this, entityData);
    memset(&trBase, 0, sizeof(trBase));
  }
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
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
  bool inAltWeaponMode; 
  const Weapon *WeaponForEntity; 
  entityState_t *EntityState; 
  char v26; 
  int passEntityNum; 
  int ParentEntNum; 
  trType_t trType; 
  const Bounds *Box; 
  const vec3_t *v44; 
  const vec3_t *v46; 
  const Bounds *v74; 
  const vec3_t *v75; 
  const vec3_t *v91; 
  Physics_WorldId v92; 
  int v93; 
  const Bounds *v94; 
  const vec3_t *v95; 
  const vec3_t *Origin; 
  const Bounds *v97; 
  const vec3_t *v98; 
  int surfaceFlags; 
  const Bounds *v100; 
  const vec3_t *v101; 
  bool alwaysShatterGlassOnImpact; 
  int Damage; 
  const vec3_t *v104; 
  int v105; 
  bool v128; 
  bool v154; 
  const Bounds *v164; 
  int v165; 
  const Bounds *v201; 
  const vec3_t *v202; 
  void (__fastcall *TriggerDamageGrenadeTouch)(BgMissile *, const int, const vec3_t *, const vec3_t *, int); 
  vec3_t *v223; 
  weapClass_t WeaponClass; 
  bool v226; 
  void (__fastcall *VehicleTrophyTestMissile)(BgMissile *, BgEntityData *, const vec3_t *, const vec3_t *); 
  vec3_t *v228; 
  trType_t v231; 
  const vec3_t *v232; 
  void (__fastcall *DrawMissileDebug)(BgMissile *, const BgEntityData *, const vec3_t *, const vec3_t *, const vec4_t *); 
  vec3_t *v244; 
  Bounds *bounds; 
  int contentmask; 
  int contentmaska; 
  bool alwaysShatterOnImpact; 
  bool detailTrace; 
  bool v258; 
  int outMissileClipMask; 
  int passEntityNum2; 
  int v261; 
  vec3_t trBase; 
  int v263; 
  const WeaponDef *v264; 
  BgWeaponMap *weaponMapa; 
  int lastSimulationTimea; 
  vec3_t v267; 
  BgEntityComponents *Components; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *Flags; 
  __int64 v270; 
  vec3_t end; 
  vec3_t endpos; 
  vec3_t start; 
  vec3_t originAtSimStart; 
  vec3_t v275; 
  vec3_t v276; 
  vec3_t dir; 
  trace_t results; 
  trace_t v279; 
  BgExplosionDamageRangeInfo outDamageRangeInfo; 
  char v281; 
  void *retaddr; 

  _RAX = &retaddr;
  v270 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
  }
  lastSimulationTimea = lastSimulationTime;
  weaponMapa = weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 174, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 175, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  this->UpdatePlatformTracking(this, entityData);
  this->BroadcastActorEvents(this, entityData);
  _R15 = BgEntityData::GetEntityState(entityData);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 182, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Components = BgEntityData::GetComponents(entityData);
  if ( !Components && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 185, ASSERT_TYPE_ASSERT, "(components)", (const char *)&queryFormat, "components") )
    __debugbreak();
  Flags = BgEntityData::GetFlags(entityData);
  if ( !Flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 188, ASSERT_TYPE_ASSERT, "(entFlags)", (const char *)&queryFormat, "entFlags") )
    __debugbreak();
  inAltWeaponMode = _R15->inAltWeaponMode;
  v258 = inAltWeaponMode;
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, _R15);
  v264 = BG_WeaponDef(WeaponForEntity, inAltWeaponMode);
  if ( !v264 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 194, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  detailTrace = BG_WeaponRadiusDamageDetailTrace(WeaponForEntity, inAltWeaponMode);
  BG_GetExplosionDamageRangeInfo(WeaponForEntity, inAltWeaponMode, &outDamageRangeInfo);
  passEntityNum2 = BgMissile::GetLastHitCharacter(this, entityData);
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 510, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RDI = BgEntityData::GetComponents(entityData);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 513, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  if ( _RDI->missile.doorScriptableIndex == -1 || (EntityState = BgEntityData::GetEntityState(entityData), EntityState->lerp.pos.trType) )
  {
    outMissileClipMask = BgEntityData::GetClipMask(entityData);
    passEntityNum = BgEntityData::GetOwnerEntNum(entityData);
    v263 = passEntityNum;
    ParentEntNum = BgEntityData::GetParentEntNum(entityData);
    v261 = ParentEntNum;
    trType = _R15->lerp.pos.trType;
    __asm { vmovss  xmm12, cs:__real@3f800000 }
    if ( trType || _R15->groundEntityNum == 2046 )
    {
      if ( v264->isRollingGrenade && trType == TR_INTERPOLATE )
      {
        _R15->lerp.pos.trType = BgMissile::GetGrenadeTrType(this, entityData);
        Origin = BgEntityData::GetOrigin(entityData);
        Trajectory_SetTrBase(&_R15->lerp.pos, Origin);
      }
    }
    else
    {
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm1, dword ptr [rax]
        vmovss  dword ptr [rbp+1E0h+end], xmm1
        vmovss  xmm4, dword ptr [rax+4]
        vmovss  dword ptr [rbp+1E0h+end+4], xmm4
        vmovss  xmm5, dword ptr [rax+8]
        vmovss  dword ptr [rbp+1E0h+end+8], xmm5
        vmovss  xmm3, cs:__real@409451ec
        vmulss  xmm0, xmm3, dword ptr [rax+10h]
        vsubss  xmm1, xmm1, xmm0
        vmovss  dword ptr [rbp+1E0h+end], xmm1
        vmulss  xmm0, xmm3, dword ptr [rax+14h]
        vsubss  xmm1, xmm4, xmm0
        vmovss  dword ptr [rbp+1E0h+end+4], xmm1
        vmulss  xmm0, xmm3, dword ptr [rax+18h]
        vsubss  xmm1, xmm5, xmm0
        vmovss  dword ptr [rbp+1E0h+end+8], xmm1
      }
      Box = BgEntityData::GetBox(entityData);
      v44 = BgEntityData::GetOrigin(entityData);
      BgMissile::MissileTrace(this, entityData, &results, v44, &end, Box, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
      __asm
      {
        vmovss  xmm0, [rbp+1E0h+results.fraction]
        vucomiss xmm0, xmm12
      }
      if ( v128 )
      {
        _R15->lerp.pos.trType = TR_GRAVITY;
        _R15->lerp.pos.trTime = simulationTime;
        _R15->lerp.pos.trDuration = 0;
        v46 = BgEntityData::GetOrigin(entityData);
        Trajectory_SetTrBase(&_R15->lerp.pos, v46);
        *(_QWORD *)_R15->lerp.pos.trDelta.v = 0i64;
        _R15->lerp.pos.trDelta.v[2] = 0.0;
      }
      ParentEntNum = v261;
    }
    _RAX = BgEntityData::GetOrigin(entityData);
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+1E0h+originAtSimStart], xmm0
      vmovss  xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+1E0h+originAtSimStart+4], xmm1
      vmovss  xmm0, dword ptr [rax+8]
      vmovss  dword ptr [rbp+1E0h+originAtSimStart+8], xmm0
    }
    BgMissile::MissileTrajectory(this, weaponMapa, simulationTime, timeDeltaMsec, entityData, &end, &outMissileClipMask);
    this->KeepPointInPlayableBounds(this, &end);
    Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
    this->KeepPointInPlayableBounds(this, &trBase);
    Trajectory_SetTrBase(&_R15->lerp.pos, &trBase);
    BgEntityData::GetOrigin(entityData);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+1E0h+end]
      vsubss  xmm7, xmm0, dword ptr [rax]
      vmovss  dword ptr [rbp+1E0h+dir], xmm7
      vmovss  xmm1, dword ptr [rbp+1E0h+end+4]
      vsubss  xmm6, xmm1, dword ptr [rax+4]
      vmovss  dword ptr [rbp+1E0h+dir+4], xmm6
      vmovss  xmm2, dword ptr [rbp+1E0h+end+8]
      vsubss  xmm5, xmm2, dword ptr [rax+8]
      vaddss  xmm0, xmm7, xmm0
      vmovss  dword ptr [rbp+1E0h+var_1D0], xmm0
      vaddss  xmm1, xmm6, xmm1
      vmovss  dword ptr [rbp+1E0h+var_1D0+4], xmm1
      vaddss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+1E0h+var_1D0+8], xmm0
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm1, xmm4, xmm12, xmm0
      vdivss  xmm2, xmm12, xmm1
      vmulss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rbp+1E0h+dir], xmm0
      vmulss  xmm1, xmm2, xmm6
      vmovss  dword ptr [rbp+1E0h+dir+4], xmm1
      vmulss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rbp+1E0h+dir+8], xmm0
      vcomiss xmm4, cs:__real@3a83126f
    }
    if ( !v26 )
    {
      if ( this->m_remoteCameraCollisionPrediction && passEntityNum != 2047 && ParentEntNum != 2047 && this->IsEntityClient(this, ParentEntNum) && this->EntityHasRemoteEyes(this, ParentEntNum) )
      {
        v74 = BgEntityData::GetBox(entityData);
        v75 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v75, &v275, v74, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
        __asm
        {
          vmovss  xmm6, [rbp+1E0h+results.fraction]
          vcomiss xmm6, xmm12
        }
        if ( v26 )
        {
          BgEntityData::GetOrigin(entityData);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1E0h+var_1D0]
            vsubss  xmm1, xmm0, dword ptr [rax]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax]
            vmovss  dword ptr [rbp+1E0h+endpos], xmm3
            vmovss  xmm0, dword ptr [rbp+1E0h+var_1D0+4]
            vsubss  xmm1, xmm0, dword ptr [rax+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+4]
            vmovss  dword ptr [rbp+1E0h+endpos+4], xmm3
            vmovss  xmm0, dword ptr [rbp+1E0h+var_1D0+8]
            vsubss  xmm1, xmm0, dword ptr [rax+8]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rax+8]
            vmovss  dword ptr [rbp+1E0h+endpos+8], xmm3
          }
          this->ProjectileImpactRemoteEyesNotify(this, v261, WeaponForEntity, &endpos);
        }
      }
      if ( v264->bProjImpactExplode )
        goto LABEL_50;
      __asm
      {
        vmovss  xmm0, dword ptr [r15+30h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@41f00000
      }
      if ( !v264->bProjImpactExplode || (v91 = BgEntityData::GetOrigin(entityData), v92 = this->GetPhysicsMainWorldId(this), PhysicsQuery_LegacyGetPointContents(v92, v91, -1, 32)) )
      {
LABEL_50:
        v97 = BgEntityData::GetBox(entityData);
        v98 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v98, &end, v97, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
      }
      else
      {
        v93 = outMissileClipMask | 0x20;
        v94 = BgEntityData::GetBox(entityData);
        v95 = BgEntityData::GetOrigin(entityData);
        contentmask = v93;
        passEntityNum = v263;
        BgMissile::MissileTrace(this, entityData, &results, v95, &end, v94, v263, passEntityNum2, contentmask, detailTrace);
      }
      surfaceFlags = results.surfaceFlags;
      if ( (results.surfaceFlags & 0x1F80000) == 11010048 )
      {
        this->CreateWaterSplash(this, entityData, &results, &end);
        v100 = BgEntityData::GetBox(entityData);
        v101 = BgEntityData::GetOrigin(entityData);
        BgMissile::MissileTrace(this, entityData, &results, v101, &end, v100, passEntityNum, passEntityNum2, outMissileClipMask, detailTrace);
        surfaceFlags = results.surfaceFlags;
      }
      if ( Com_IsSurfaceTypeBreakableGlass(surfaceFlags) )
      {
        alwaysShatterGlassOnImpact = v264->alwaysShatterGlassOnImpact;
        Damage = BG_GetDamage(WEAP_DMG_CALC_TYPE_DEFAULT, WeaponForEntity, v258);
        v104 = BgEntityData::GetOrigin(entityData);
        alwaysShatterOnImpact = alwaysShatterGlassOnImpact;
        v105 = outMissileClipMask;
        BgMissile::PenetrateGlass(this, weaponMapa, entityData, outMissileClipMask, simulationTime, timeDeltaMsec, &results, v104, &end, Damage, 0, alwaysShatterOnImpact);
      }
      else
      {
        v105 = outMissileClipMask;
      }
      __asm { vmovss  xmm6, [rbp+1E0h+results.fraction] }
      BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1E0h+end]
        vsubss  xmm1, xmm0, dword ptr [rax]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rax]
        vmovss  dword ptr [rbp+1E0h+endpos], xmm3
        vmovss  xmm0, dword ptr [rbp+1E0h+end+4]
        vsubss  xmm1, xmm0, dword ptr [rax+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rax+4]
        vmovss  dword ptr [rbp+1E0h+endpos+4], xmm3
        vmovss  xmm0, dword ptr [rbp+1E0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [rax+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rax+8]
        vmovss  dword ptr [rbp+1E0h+endpos+8], xmm3
      }
      _RAX = BgEntityData::GetOrigin(entityData);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1E0h+endpos]
        vmovss  dword ptr [rax], xmm0
        vmovss  xmm1, dword ptr [rbp+1E0h+endpos+4]
        vmovss  dword ptr [rax+4], xmm1
        vmovss  xmm0, dword ptr [rbp+1E0h+endpos+8]
        vmovss  dword ptr [rax+8], xmm0
      }
      if ( (Flags->m_flags[0] & 0x40000) != 0 )
      {
        __asm
        {
          vmovss  xmm0, [rbp+1E0h+results.fraction]
          vucomiss xmm0, xmm12
        }
        if ( (Flags->m_flags[0] & 0x40000) != 0 )
        {
          BgEntityData::GetOrigin(entityData);
          __asm
          {
            vmovss  xmm3, cs:__real@3e0a3d71
            vmulss  xmm1, xmm3, dword ptr [rbp+1E0h+results.normal]
            vaddss  xmm2, xmm1, dword ptr [rax]
            vmovss  dword ptr [rbp+1E0h+start], xmm2
            vmulss  xmm1, xmm3, dword ptr [rbp+1E0h+results.normal+4]
            vaddss  xmm1, xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rbp+1E0h+start+4], xmm1
            vmulss  xmm2, xmm3, dword ptr [rbp+1E0h+results.normal+8]
            vaddss  xmm1, xmm2, dword ptr [rax+8]
            vmovss  dword ptr [rbp+1E0h+start+8], xmm1
          }
          _RAX = BgEntityData::GetOrigin(entityData);
          __asm
          {
            vmovss  xmm4, cs:__real@3fc00000
            vmulss  xmm2, xmm4, dword ptr [rbp+1E0h+results.normal]
            vmovss  xmm1, dword ptr [rax]
            vsubss  xmm2, xmm1, xmm2
            vmovss  dword ptr [rbp+1E0h+end], xmm2
            vmulss  xmm3, xmm4, dword ptr [rbp+1E0h+results.normal+4]
            vmovss  xmm1, dword ptr [rax+4]
            vsubss  xmm2, xmm1, xmm3
            vmovss  dword ptr [rbp+1E0h+end+4], xmm2
            vmulss  xmm3, xmm4, dword ptr [rbp+1E0h+results.normal+8]
            vmovss  xmm1, dword ptr [rax+8]
            vsubss  xmm2, xmm1, xmm3
            vmovss  dword ptr [rbp+1E0h+end+8], xmm2
          }
          v128 = results.hitType == TRACE_HITTYPE_SCRIPTABLE;
          if ( results.hitType == TRACE_HITTYPE_SCRIPTABLE )
          {
            v154 = this->ScriptableIsDoor(this, results.hitId);
            v128 = !v154;
            if ( v154 )
            {
              _RDI = BgEntityData::GetOrigin(entityData);
              BgEntityData::GetOrigin(entityData);
              __asm
              {
                vmovss  xmm3, cs:__real@38d1b717
                vmulss  xmm1, xmm3, dword ptr [rbp+1E0h+results.normal]
                vaddss  xmm2, xmm1, dword ptr [rax]
                vmovss  dword ptr [rdi], xmm2
                vmulss  xmm1, xmm3, dword ptr [rbp+1E0h+results.normal+4]
                vaddss  xmm1, xmm1, dword ptr [rax+4]
                vmovss  dword ptr [rdi+4], xmm1
                vmulss  xmm2, xmm3, dword ptr [rbp+1E0h+results.normal+8]
                vaddss  xmm1, xmm2, dword ptr [rax+8]
                vmovss  dword ptr [rdi+8], xmm1
              }
            }
          }
        }
        else
        {
          _RAX = BgEntityData::GetOrigin(entityData);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  dword ptr [rbp+1E0h+start], xmm0
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rbp+1E0h+start+4], xmm1
            vmovss  xmm0, dword ptr [rax+8]
            vmovss  dword ptr [rbp+1E0h+start+8], xmm0
          }
          _RAX = BgEntityData::GetOrigin(entityData);
          __asm
          {
            vmovss  xmm0, dword ptr [rax]
            vmovss  dword ptr [rbp+1E0h+end], xmm0
            vmovss  xmm1, dword ptr [rax+4]
            vmovss  dword ptr [rbp+1E0h+end+4], xmm1
            vmovss  xmm2, dword ptr [rax+8]
            vmovss  xmm0, dword ptr [rbp+1E0h+start+8]
            vaddss  xmm1, xmm0, cs:__real@3e0a3d71
            vmovss  dword ptr [rbp+1E0h+start+8], xmm1
            vsubss  xmm2, xmm2, cs:__real@3fc00000
            vmovss  dword ptr [rbp+1E0h+end+8], xmm2
          }
        }
        __asm
        {
          vmovss  xmm0, [rbp+1E0h+results.fraction]
          vucomiss xmm0, xmm12
        }
        if ( !v128 || !BG_WeaponSticksToWalls(WeaponForEntity, v258) && !BG_WeaponSticksToFloors(WeaponForEntity, v258) )
        {
          v164 = BgEntityData::GetBox(entityData);
          contentmaska = v105;
          v165 = v263;
          BgMissile::MissileTrace(this, entityData, &v279, &start, &end, v164, v263, passEntityNum2, contentmaska, detailTrace);
          __asm
          {
            vmovss  xmm0, [rbp+1E0h+var_140.fraction]
            vucomiss xmm0, xmm12
          }
          if ( !v128 )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+1E0h+var_140.fraction]
              vmovups ymmword ptr [rbp+1E0h+results.fraction], ymm0
              vmovups ymm1, ymmword ptr [rbp+1E0h+var_140.contents]
              vmovups ymmword ptr [rbp+60h], ymm1
              vmovups xmm0, xmmword ptr [rbp+1E0h+var_140.allsolid]
              vmovups xmmword ptr [rbp+1E0h+results.allsolid], xmm0
              vmovsd  xmm1, [rbp+1E0h+var_140.debugHitName]
              vmovsd  [rbp+1E0h+results.debugHitName], xmm1
            }
            _RAX = BgEntityData::GetOrigin(entityData);
            __asm
            {
              vmovss  xmm0, dword ptr [rax]
              vmovss  dword ptr [rbp+1E0h+var_1C0], xmm0
              vmovss  xmm1, dword ptr [rax+4]
              vmovss  dword ptr [rbp+1E0h+var_1C0+4], xmm1
              vmovss  xmm0, dword ptr [rax+8]
              vmovss  dword ptr [rbp+1E0h+var_1C0+8], xmm0
            }
            Trajectory_GetTrBase(&_R15->lerp.pos, &trBase);
            __asm
            {
              vmovss  xmm9, dword ptr [rsp+2E0h+trBase]
              vmovss  dword ptr [rbp+1E0h+var_240], xmm9
              vmovss  xmm10, dword ptr [rsp+2E0h+trBase+4]
              vmovss  dword ptr [rbp+1E0h+var_240+4], xmm10
              vmovss  xmm11, dword ptr [rsp+2E0h+trBase+8]
              vmovss  dword ptr [rbp+1E0h+var_240+8], xmm11
              vmovss  xmm8, dword ptr [rbp+1E0h+end]
              vsubss  xmm0, xmm8, dword ptr [rbp+1E0h+start]
              vmovss  xmm3, [rbp+1E0h+results.fraction]
              vmulss  xmm0, xmm0, xmm3
              vaddss  xmm6, xmm0, dword ptr [rbp+1E0h+start]
              vmovss  dword ptr [rbp+1E0h+endpos], xmm6
              vmovss  xmm7, dword ptr [rbp+1E0h+end+4]
              vsubss  xmm0, xmm7, dword ptr [rbp+1E0h+start+4]
              vmulss  xmm1, xmm0, xmm3
              vaddss  xmm4, xmm1, dword ptr [rbp+1E0h+start+4]
              vmovss  dword ptr [rbp+1E0h+endpos+4], xmm4
              vmovss  xmm5, dword ptr [rbp+1E0h+end+8]
              vsubss  xmm0, xmm5, dword ptr [rbp+1E0h+start+8]
              vmulss  xmm1, xmm0, xmm3
              vaddss  xmm3, xmm1, dword ptr [rbp+1E0h+start+8]
              vmovss  dword ptr [rbp+1E0h+endpos+8], xmm3
              vsubss  xmm6, xmm6, xmm8
              vsubss  xmm7, xmm4, xmm7
              vsubss  xmm8, xmm3, xmm5
              vaddss  xmm0, xmm9, xmm6
              vmovss  dword ptr [rsp+2E0h+trBase], xmm0
              vaddss  xmm1, xmm10, xmm7
              vmovss  dword ptr [rsp+2E0h+trBase+4], xmm1
              vaddss  xmm0, xmm11, xmm8
              vmovss  dword ptr [rsp+2E0h+trBase+8], xmm0
            }
            Trajectory_SetTrBase(&_R15->lerp.pos, &trBase);
            _RAX = BgEntityData::GetOrigin(entityData);
            __asm
            {
              vaddss  xmm0, xmm6, dword ptr [rbp+1E0h+endpos]
              vmovss  dword ptr [rax], xmm0
              vaddss  xmm1, xmm7, dword ptr [rbp+1E0h+endpos+4]
              vmovss  dword ptr [rax+4], xmm1
              vaddss  xmm0, xmm8, dword ptr [rbp+1E0h+endpos+8]
              vmovss  dword ptr [rax+8], xmm0
            }
            v201 = BgEntityData::GetBox(entityData);
            v202 = BgEntityData::GetOrigin(entityData);
            BgMissile::MissileTrace(this, entityData, &v279, &v276, v202, v201, v165, passEntityNum2, outMissileClipMask, detailTrace);
            __asm
            {
              vmovss  xmm0, [rbp+1E0h+var_140.fraction]
              vucomiss xmm0, xmm12
            }
            if ( !v128 || v279.startsolid || v279.allsolid )
            {
              _RAX = BgEntityData::GetOrigin(entityData);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+1E0h+var_1C0]
                vmovss  dword ptr [rax], xmm0
                vmovss  xmm1, dword ptr [rbp+1E0h+var_1C0+4]
                vmovss  dword ptr [rax+4], xmm1
                vmovss  xmm0, dword ptr [rbp+1E0h+var_1C0+8]
                vmovss  dword ptr [rax+8], xmm0
              }
              Trajectory_SetTrBase(&_R15->lerp.pos, &v267);
            }
            memset(&v267, 0, sizeof(v267));
          }
        }
      }
      this->LinkEntity(this, _R15->number);
      if ( BG_ProjectileActivateDist(WeaponForEntity, v258) > 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1E0h+endpos]
          vsubss  xmm3, xmm0, dword ptr [rbp+1E0h+originAtSimStart]
          vmovss  xmm1, dword ptr [rbp+1E0h+endpos+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+1E0h+originAtSimStart+4]
          vmovss  xmm0, dword ptr [rbp+1E0h+endpos+8]
          vsubss  xmm4, xmm0, dword ptr [rbp+1E0h+originAtSimStart+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
        }
        _RAX = Components;
        __asm
        {
          vaddss  xmm0, xmm1, dword ptr [rax+0Ch]
          vmovss  dword ptr [rax+0Ch], xmm0
        }
      }
      TriggerDamageGrenadeTouch = this->TriggerDamageGrenadeTouch;
      v223 = BgEntityData::GetOrigin(entityData);
      __asm { vcvttss2si ecx, [rbp+1E0h+outDamageRangeInfo.innerDamage] }
      TriggerDamageGrenadeTouch(this, _R15->number, &originAtSimStart, v223, _ECX);
      WeaponClass = BG_GetWeaponClass(WeaponForEntity, v258);
      v226 = WeaponClass == WEAPCLASS_ROCKETLAUNCHER;
      if ( WeaponClass == WEAPCLASS_ROCKETLAUNCHER )
      {
        VehicleTrophyTestMissile = this->VehicleTrophyTestMissile;
        v228 = BgEntityData::GetOrigin(entityData);
        VehicleTrophyTestMissile(this, entityData, &originAtSimStart, v228);
        v226 = _R15->eType == ET_MISSILE;
        if ( _R15->eType != ET_MISSILE )
          goto LABEL_89;
      }
      __asm
      {
        vmovss  xmm0, [rbp+1E0h+results.fraction]
        vucomiss xmm0, xmm12
      }
      if ( v226 )
      {
        __asm
        {
          vmovss  xmm2, dword ptr [r15+2Ch]
          vmovss  xmm0, dword ptr [r15+28h]
          vmovss  xmm3, dword ptr [r15+30h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm3, xmm0
        }
      }
      else
      {
        if ( (results.surfaceFlags & 4) != 0 )
        {
          this->DeathNotify(this, entityData);
          this->FreeEntity(this, entityData);
LABEL_89:
          memset(&trBase, 0, sizeof(trBase));
          goto LABEL_90;
        }
        BgMissile::MissileImpact(this, weaponMapa, entityData, lastSimulationTimea, simulationTime, timeDeltaMsec, &originAtSimStart, &results, &dir, &endpos);
        if ( _R15->eType != ET_MISSILE )
          goto LABEL_89;
        if ( v264->isRollingGrenade )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1E0h+results.normal+8]
            vcomiss xmm0, cs:__real@3f333333
          }
          if ( v264->isRollingGrenade )
          {
            v231 = _R15->lerp.pos.trType;
            if ( v231 )
            {
              if ( (unsigned int)(v231 - 6) > 1 )
              {
                LODWORD(bounds) = _R15->lerp.pos.trType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 410, ASSERT_TYPE_ASSERT, "( ( es->lerp.pos.trType == TR_GRAVITY || es->lerp.pos.trType == TR_LOW_GRAVITY ) )", "( es->lerp.pos.trType ) = %i", bounds) )
                  __debugbreak();
              }
              _R15->lerp.pos.trType = TR_INTERPOLATE;
              v232 = BgEntityData::GetOrigin(entityData);
              Trajectory_SetTrBase(&_R15->lerp.pos, v232);
            }
          }
        }
      }
      DrawMissileDebug = this->DrawMissileDebug;
      v244 = BgEntityData::GetOrigin(entityData);
      DrawMissileDebug(this, entityData, &originAtSimStart, v244, &colorBlue);
      this->DrawAttractorDebug(this);
    }
    this->RunThink(this, entityData);
    goto LABEL_89;
  }
  __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  *(float *)&_XMM0 = this->GetDoorAngle(this, entityData);
  __asm { vmovaps xmm1, xmm6; angle2 }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3dcccccd
  }
  if ( !(v26 | v128) )
  {
    EntityState->lerp.pos.trTime = simulationTime;
    EntityState->lerp.pos.trType = TR_GRAVITY;
  }
  this->RunThink(this, entityData);
LABEL_90:
  _R11 = &v281;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
BgMissile::StickToDoor
==============
*/
void BgMissile::StickToDoor(BgMissile *this, BgEntityData *entityData, unsigned int scriptableIndex)
{
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 498, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RBX = BgEntityData::GetComponents(entityData);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 501, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  _RBX->missile.doorScriptableIndex = scriptableIndex;
  *(double *)&_XMM0 = ((double (__fastcall *)(BgMissile *, BgEntityData *))this->GetDoorAngle)(this, entityData);
  __asm { vmovss  dword ptr [rbx+28h], xmm0 }
}

/*
==============
BgMissile::StuckToDoorUpdate
==============
*/
char BgMissile::StuckToDoorUpdate(BgMissile *this, BgEntityData *entityData, const int simulationTime)
{
  entityState_t *EntityState; 
  char v14; 
  char v15; 

  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 510, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RBP = BgEntityData::GetComponents(entityData);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 513, ASSERT_TYPE_ASSERT, "(c)", (const char *)&queryFormat, "c") )
    __debugbreak();
  if ( _RBP->missile.doorScriptableIndex == -1 )
    return 0;
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( EntityState->lerp.pos.trType )
    return 0;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovss  xmm6, dword ptr [rbp+28h]
  }
  *(float *)&_XMM0 = this->GetDoorAngle(this, entityData);
  __asm { vmovaps xmm1, xmm6; angle2 }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3dcccccd
    vmovaps xmm6, [rsp+48h+var_18]
  }
  if ( !(v14 | v15) )
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
  bool v4; 
  bool v5; 
  unsigned __int16 EntityHitId; 
  entityState_t *v8; 

  _RBX = trace;
  v4 = trace == NULL;
  if ( !trace )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3366, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rbx]
  }
  if ( v4 || _RBX->hitType != TRACE_HITTYPE_ENTITY || !BGMovingPlatforms::IsMovingPlatform(_RBX->hitId) )
    return 0;
  EntityHitId = Trace_GetEntityHitId(_RBX);
  v8 = this->GetEntityState(this, EntityHitId);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 3372, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BGMovingPlatforms::IsPlatformType(v8->eType) != 0;
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
  entityState_t *EntityState; 
  const Weapon *WeaponForEntity; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, [rsp+58h+horzDistToTarg]
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
  }
  _RSI = toTargetHorzRelDir;
  if ( !usePersistentTracking )
    __asm { vcomiss xmm6, dword ptr [rsi] }
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1894, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  EntityState = BgEntityData::GetEntityState(entityData);
  if ( !EntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1897, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, EntityState);
  _RAX = BG_WeaponDef(WeaponForEntity, EntityState->inAltWeaponMode);
  if ( timeDeltaMsec > 0 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@447a0000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edi
      vdivss  xmm6, xmm0, xmm1
    }
  }
  __asm
  {
    vmovss  xmm0, [rsp+58h+currentHorzSpeed]
    vmulss  xmm1, xmm0, dword ptr [rsi]
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm1, [rsp+58h+vertDistToTarg]
    vdivss  xmm0, xmm1, xmm7
    vsubss  xmm2, xmm0, dword ptr [rbx+30h]
  }
  _RBX = inOutSteer;
  __asm
  {
    vmulss  xmm0, xmm2, xmm6; val
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm2, dword ptr [rax+7C8h]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
BgMissile::VerticalSteering
==============
*/
void BgMissile::VerticalSteering(BgMissile *this, const BgWeaponMap *weaponMap, BgEntityData *entityData, const int timeDeltaMsec, const vec3_t *toTargetRelative, float currentHorzSpeed, const bool usePersistentTracking, vec3_t *inOutSteer)
{
  const Weapon *WeaponForEntity; 
  bool v39; 
  bool v45; 
  char v59; 
  float horzDistToTarg; 
  float v71; 
  float v72; 
  int projectileSpeed; 
  int projectileSpeedUp; 
  vec2_t toTargetHorzRelDir; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBP = inOutSteer;
  if ( !entityData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1920, ASSERT_TYPE_ASSERT, "(entityData)", (const char *)&queryFormat, "entityData") )
    __debugbreak();
  _RDI = BgEntityData::GetEntityState(entityData);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1923, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  WeaponForEntity = BG_GetWeaponForEntity(weaponMap, _RDI);
  _R15 = BG_WeaponDef(WeaponForEntity, _RDI->inAltWeaponMode);
  BG_GetProjectileSpeed(WeaponForEntity, _RDI->inAltWeaponMode, &projectileSpeed, &projectileSpeedUp);
  _RBX = toTargetRelative;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rbx]
    vmulss  xmm1, xmm2, xmm2
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm6, xmm1, xmm1
    vucomiss xmm6, xmm7
    vmovss  xmm1, cs:__real@3f800000
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm1
    vmulss  xmm1, xmm3, xmm1
    vmovss  dword ptr [rsp+0D8h+toTargetHorzRelDir+4], xmm1
    vmovss  dword ptr [rsp+0D8h+toTargetHorzRelDir], xmm0
  }
  inOutSteer->v[2] = 0.0;
  if ( !v39 )
  {
    switch ( _R15->guidedMissileType )
    {
      case MISSILE_GUIDANCE_SIDEWINDER:
LABEL_11:
        __asm
        {
          vmovss  xmm0, [rsp+0D8h+currentHorzSpeed]
          vmovss  xmm1, dword ptr [rbx+8]
          vmovss  [rsp+0D8h+var_A0], xmm0
          vmovss  [rsp+0D8h+var_A8], xmm1
          vmovss  [rsp+0D8h+horzDistToTarg], xmm6
        }
        BgMissile::VerticalSteerToTarget(this, weaponMap, entityData, timeDeltaMsec, &toTargetHorzRelDir, horzDistToTarg, v71, v72, usePersistentTracking, inOutSteer);
        break;
      case MISSILE_GUIDANCE_HELLFIRE:
        v39 = _RDI->lerp.pos.trDuration == 0;
        if ( _RDI->lerp.pos.trDuration )
          goto LABEL_11;
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vcomiss xmm1, xmm7
          vmovaps [rsp+0D8h+var_68], xmm8
          vmovss  xmm8, [rsp+0D8h+currentHorzSpeed]
        }
        if ( v39 )
        {
          v39 = projectileSpeed == 0;
          if ( !projectileSpeed )
          {
            v45 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1954, ASSERT_TYPE_ASSERT, "(projectileSpeed != 0)", (const char *)&queryFormat, "projectileSpeed != 0");
            v39 = !v45;
            if ( v45 )
              __debugbreak();
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rsp+0D8h+projectileSpeed]
            vdivss  xmm6, xmm6, xmm0
          }
        }
        else
        {
          __asm
          {
            vucomiss xmm8, xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, [rsp+0D8h+projectileSpeed]
            vdivss  xmm6, xmm1, xmm0
          }
        }
        __asm { vcomiss xmm6, xmm7 }
        if ( v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_missile.cpp", 1958, ASSERT_TYPE_ASSERT, "(minTimeToTarg > 0)", (const char *)&queryFormat, "minTimeToTarg > 0") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  xmm1, dword ptr [r15+7C8h]
          vmulss  xmm2, xmm1, cs:__real@3f000000
          vdivss  xmm3, xmm0, xmm6
          vmulss  xmm0, xmm2, xmm6
          vaddss  xmm3, xmm3, xmm0
          vmulss  xmm6, xmm3, cs:__real@3f666666
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHellfireMaxSlope, "bg_missileHellfireMaxSlope");
        __asm
        {
          vmovss  xmm3, dword ptr [rdi+30h]
          vmulss  xmm1, xmm0, xmm8
          vmovaps xmm8, [rsp+0D8h+var_68]
          vminss  xmm2, xmm1, xmm6
          vcomiss xmm2, xmm3
        }
        if ( v59 | v39 )
        {
          _RDI->lerp.pos.trDuration = 1;
        }
        else
        {
          if ( timeDeltaMsec > 0 )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@447a0000
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, r14d
              vdivss  xmm7, xmm0, xmm1
            }
          }
          __asm
          {
            vsubss  xmm0, xmm2, xmm3
            vmulss  xmm1, xmm0, xmm7
            vmovss  dword ptr [rbp+8], xmm1
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_missileHellfireUpAccel, "bg_missileHellfireUpAccel");
          __asm
          {
            vmovss  xmm1, dword ptr [r15+7C8h]
            vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000; min
            vmovaps xmm2, xmm0; max
            vmovss  xmm0, dword ptr [rbp+8]; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rbp+8], xmm0 }
        }
        break;
      case MISSILE_GUIDANCE_SOFTLOCKON:
        goto LABEL_11;
    }
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

