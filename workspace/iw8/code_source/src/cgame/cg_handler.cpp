/*
==============
CgHandler::GetScriptableDimensions
==============
*/

void __fastcall CgHandler::GetScriptableDimensions(CgHandler *this, unsigned int scriptableIndex, float *outInitialAngle, vec3_t *outOrigin, Bounds *outBounds)
{
  ?GetScriptableDimensions@CgHandler@@UEBAXIAEAMAEATvec3_t@@AEAUBounds@@@Z(this, scriptableIndex, outInitialAngle, outOrigin, outBounds);
}

/*
==============
CgHandler::GetVehicleDef
==============
*/

const VehicleDef *__fastcall CgHandler::GetVehicleDef(CgHandler *this, const playerState_s *ps)
{
  return ?GetVehicleDef@CgHandler@@UEBAPEBUVehicleDef@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::AcquirePhysicsReadLock
==============
*/

void __fastcall CgHandler::AcquirePhysicsReadLock(CgHandler *this, Physics_WorldId worldId)
{
  ?AcquirePhysicsReadLock@CgHandler@@UEBAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
CgHandler::GetVehicleSystem
==============
*/

BGVehicles *__fastcall CgHandler::GetVehicleSystem(CgHandler *this)
{
  return ?GetVehicleSystem@CgHandler@@UEAAPEAVBGVehicles@@XZ(this);
}

/*
==============
CgHandler::GetGroundPersistentState
==============
*/

const BgGroundPersistentState *__fastcall CgHandler::GetGroundPersistentState(CgHandler *this, const playerState_s *ps)
{
  return ?GetGroundPersistentState@CgHandler@@UEBAPEBUBgGroundPersistentState@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::ProfEndAnimUpdate
==============
*/

void __fastcall CgHandler::ProfEndAnimUpdate(CgHandler *this)
{
  ?ProfEndAnimUpdate@CgHandler@@UEBAXXZ(this);
}

/*
==============
CgHandler::DebugBox
==============
*/

void __fastcall CgHandler::DebugBox(CgHandler *this, const vec3_t *origin, const Bounds *bounds, float yaw, const vec4_t *color, int depthTest, int duration)
{
  ?DebugBox@CgHandler@@UEBAXAEBTvec3_t@@PEBUBounds@@MAEBTvec4_t@@HH@Z(this, origin, bounds, yaw, color, depthTest, duration);
}

/*
==============
CgHandler::GetScriptablePhysicsInstanceId
==============
*/

unsigned int __fastcall CgHandler::GetScriptablePhysicsInstanceId(CgHandler *this, unsigned int scriptableIndex)
{
  return ?GetScriptablePhysicsInstanceId@CgHandler@@UEBAII@Z(this, scriptableIndex);
}

/*
==============
CgHandler::GetGameTypeQuick
==============
*/

GameTypeQuick_t __fastcall CgHandler::GetGameTypeQuick(CgHandler *this)
{
  return ?GetGameTypeQuick@CgHandler@@UEBA?AW4GameTypeQuick_t@@XZ(this);
}

/*
==============
CgHandler::CgHandler
==============
*/

void __fastcall CgHandler::CgHandler(CgHandler *this, const LocalClientNum_t _localClientNum)
{
  ??0CgHandler@@QEAA@W4LocalClientNum_t@@@Z(this, _localClientNum);
}

/*
==============
CgHandler::PlayerWeaponAnims
==============
*/

PlayerWeaponAnimArrays *__fastcall CgHandler::PlayerWeaponAnims(CgHandler *this, playerState_s *ps)
{
  return ?PlayerWeaponAnims@CgHandler@@UEBAPEAVPlayerWeaponAnimArrays@@PEAUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::DebugCone
==============
*/

void __fastcall CgHandler::DebugCone(CgHandler *this, const vec3_t *origin, const vec3_t *direction, float radius, float length, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCone@CgHandler@@UEBAXAEBTvec3_t@@0MMAEBTvec4_t@@HH@Z(this, origin, direction, radius, length, color, depthTest, duration);
}

/*
==============
CgHandler::PlayerTurretEnt
==============
*/

const entityState_t *__fastcall CgHandler::PlayerTurretEnt(CgHandler *this, const playerState_s *ps)
{
  return ?PlayerTurretEnt@CgHandler@@UEBAPEBUentityState_t@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::DebugSphereAll
==============
*/

void __fastcall CgHandler::DebugSphereAll(CgHandler *this, const vec3_t *center, float radius, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugSphereAll@CgHandler@@UEBAXAEBTvec3_t@@MAEBTvec4_t@@1HH@Z(this, center, radius, colorServer, colorClient, depthTest, duration);
}

/*
==============
CgHandler::DebugAxisAll
==============
*/

void __fastcall CgHandler::DebugAxisAll(CgHandler *this, const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
{
  ?DebugAxisAll@CgHandler@@UEBAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@MHH@Z(this, axes, pos, length, depthTest, duration);
}

/*
==============
CgHandler::getHandler
==============
*/

CgHandler *__fastcall CgHandler::getHandler(LocalClientNum_t _localClientNum)
{
  return ?getHandler@CgHandler@@SAPEAV1@W4LocalClientNum_t@@@Z(_localClientNum);
}

/*
==============
CgHandler::DebugLine
==============
*/

void __fastcall CgHandler::DebugLine(CgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  ?DebugLine@CgHandler@@UEBAXAEBTvec3_t@@0AEBTvec4_t@@HH@Z(this, start, end, color, depthTest, duration);
}

/*
==============
CgHandler::GetWeaponMap
==============
*/

const BgWeaponMap *__fastcall CgHandler::GetWeaponMap(CgHandler *this)
{
  return ?GetWeaponMap@CgHandler@@UEBAPEBVBgWeaponMap@@XZ(this);
}

/*
==============
CgHandler::GetScriptablePartDef
==============
*/

const ScriptablePartDef *__fastcall CgHandler::GetScriptablePartDef(CgHandler *this, unsigned int scriptableIndex, const scr_string_t partName)
{
  return ?GetScriptablePartDef@CgHandler@@UEBAPEBUScriptablePartDef@@IW4scr_string_t@@@Z(this, scriptableIndex, partName);
}

/*
==============
CgHandler::ReleasePhysicsReadLock
==============
*/

void __fastcall CgHandler::ReleasePhysicsReadLock(CgHandler *this, Physics_WorldId worldId)
{
  ?ReleasePhysicsReadLock@CgHandler@@UEBAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
CgHandler::GetPhysicsWorldId
==============
*/

Physics_WorldId __fastcall CgHandler::GetPhysicsWorldId(CgHandler *this)
{
  return ?GetPhysicsWorldId@CgHandler@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
CgHandler::DebugCylinder
==============
*/

void __fastcall CgHandler::DebugCylinder(CgHandler *this, const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCylinder@CgHandler@@UEBAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(this, start, end, radius, color, depthTest, duration);
}

/*
==============
CgHandler::DebugString
==============
*/

void __fastcall CgHandler::DebugString(CgHandler *this, const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  ?DebugString@CgHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(this, point, color, scale, text, duration);
}

/*
==============
CgHandler::SetEntityAngles
==============
*/

void __fastcall CgHandler::SetEntityAngles(CgHandler *this, int entIndex, const vec3_t *angles)
{
  ?SetEntityAngles@CgHandler@@UEAAXHAEBTvec3_t@@@Z(this, entIndex, angles);
}

/*
==============
CgHandler::PlayerWeaponAnimsConst
==============
*/

const PlayerWeaponAnimArrays *__fastcall CgHandler::PlayerWeaponAnimsConst(CgHandler *this, const playerState_s *ps)
{
  return ?PlayerWeaponAnimsConst@CgHandler@@UEBAPEBVPlayerWeaponAnimArrays@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::PlayerTurret
==============
*/

const Weapon *__fastcall CgHandler::PlayerTurret(CgHandler *this, const playerState_s *ps)
{
  return ?PlayerTurret@CgHandler@@UEBAAEBUWeapon@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgHandler::IsPointInVolume
==============
*/

int __fastcall CgHandler::IsPointInVolume(CgHandler *this, const vec3_t *point, int entNum)
{
  return ?IsPointInVolume@CgHandler@@UEBAHAEBTvec3_t@@H@Z(this, point, entNum);
}

/*
==============
CgHandler::GetEntIndexByImpulseFieldIndex
==============
*/

int __fastcall CgHandler::GetEntIndexByImpulseFieldIndex(CgHandler *this, LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  return ?GetEntIndexByImpulseFieldIndex@CgHandler@@UEBAHW4LocalClientNum_t@@H@Z(this, localClientNum, impulseFieldIndex);
}

/*
==============
CgHandler::DebugStar
==============
*/

void __fastcall CgHandler::DebugStar(CgHandler *this, const vec3_t *point, const vec4_t *color, int duration)
{
  ?DebugStar@CgHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@H@Z(this, point, color, duration);
}

/*
==============
CgHandler::PlayerWeaponHeatIterate
==============
*/

void __fastcall CgHandler::PlayerWeaponHeatIterate(CgHandler *this, const playerState_s *ps, void (__fastcall *weaponHeatCb)(WeaponHeat *const, const Weapon *, const int))
{
  ?PlayerWeaponHeatIterate@CgHandler@@UEBAXPEBUplayerState_s@@P6AXQEAUWeaponHeat@@AEBUWeapon@@H@Z@Z(this, ps, weaponHeatCb);
}

/*
==============
CgHandler::PlayerWeaponOffsetPatternCache
==============
*/

WeaponOffsetPatternCache *__fastcall CgHandler::PlayerWeaponOffsetPatternCache(CgHandler *this, const playerState_s *ps, const int patternIndex)
{
  return ?PlayerWeaponOffsetPatternCache@CgHandler@@UEBAPEAUWeaponOffsetPatternCache@@PEBUplayerState_s@@H@Z(this, ps, patternIndex);
}

/*
==============
CgHandler::GetLootTable
==============
*/

const BG_SpawnGroup_Loot_Table *__fastcall CgHandler::GetLootTable(CgHandler *this)
{
  return ?GetLootTable@CgHandler@@UEBAPEBUBG_SpawnGroup_Loot_Table@@XZ(this);
}

/*
==============
CgHandler::SetEntityOrigin
==============
*/

void __fastcall CgHandler::SetEntityOrigin(CgHandler *this, int entIndex, const vec3_t *origin)
{
  ?SetEntityOrigin@CgHandler@@UEAAXHAEBTvec3_t@@@Z(this, entIndex, origin);
}

/*
==============
CgHandler::GetPlayerASM
==============
*/

BgPlayer_Asm *__fastcall CgHandler::GetPlayerASM(CgHandler *this)
{
  return ?GetPlayerASM@CgHandler@@UEBAPEAVBgPlayer_Asm@@XZ(this);
}

/*
==============
CgHandler::DebugEdgeQueryResults
==============
*/

void __fastcall CgHandler::DebugEdgeQueryResults(CgHandler *this, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  ?DebugEdgeQueryResults@CgHandler@@UEBAX_KQEBUEdgeId@@QEBM2MH@Z(this, edgeCount, edgeIdPool, edgeFractionPool, edgeDistPool, maxQueryDistance, edgeFlagIndex);
}

/*
==============
CgHandler::FindBestConeTarget
==============
*/

bool __fastcall CgHandler::FindBestConeTarget(CgHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin, const vec3_t *dir, float range, float angle, unsigned int hitMask, int time, int *outentIndex, ConeTargetHitInfo *outHitInfo)
{
  return ?FindBestConeTarget@CgHandler@@UEBA_NW4LocalClientNum_t@@HAEBTvec3_t@@1MMIHPEAHPEAUConeTargetHitInfo@@@Z(this, localClientNum, attackerentIndex, origin, dir, range, angle, hitMask, time, outentIndex, outHitInfo);
}

/*
==============
CgHandler::GetOmnvarDataAtPmoveTime
==============
*/

void __fastcall CgHandler::GetOmnvarDataAtPmoveTime(CgHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime, OmnvarData *outData)
{
  ?GetOmnvarDataAtPmoveTime@CgHandler@@UEBAXIIHPEAUOmnvarData@@@Z(this, clientEntNum, omnInx, pmoveTime, outData);
}

/*
==============
CgHandler::IsEntAttachedToVehicle
==============
*/

bool __fastcall CgHandler::IsEntAttachedToVehicle(CgHandler *this, int entNum, int *outVehicleEntNum)
{
  return ?IsEntAttachedToVehicle@CgHandler@@UEBA_NHAEAH@Z(this, entNum, outVehicleEntNum);
}

/*
==============
CgHandler::IsClient
==============
*/

bool __fastcall CgHandler::IsClient(CgHandler *this)
{
  return ?IsClient@CgHandler@@UEBA_NXZ(this);
}

/*
==============
CgHandler::DebugCapsule
==============
*/

void __fastcall CgHandler::DebugCapsule(CgHandler *this, const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugCapsule@CgHandler@@UEBAXAEBTvec3_t@@0MAEBTvec4_t@@HH@Z(this, start, end, radius, color, depthTest, duration);
}

/*
==============
CgHandler::GetEdgeQueryCache
==============
*/

EdgeQueryCache *__fastcall CgHandler::GetEdgeQueryCache(CgHandler *this, int entityIndex)
{
  return ?GetEdgeQueryCache@CgHandler@@UEBAPEAUEdgeQueryCache@@H@Z(this, entityIndex);
}

/*
==============
CgHandler::GetEntityAngles
==============
*/

int __fastcall CgHandler::GetEntityAngles(CgHandler *this, int entIndex, vec3_t *outAngles)
{
  return ?GetEntityAngles@CgHandler@@UEBAHHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
CgHandler::GetParentAxis
==============
*/

bool __fastcall CgHandler::GetParentAxis(CgHandler *this, int entNum, tmat43_t<vec3_t> *outParentAxis)
{
  return ?GetParentAxis@CgHandler@@UEBA_NHAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, entNum, outParentAxis);
}

/*
==============
CgHandler::ProfBeginAnimUpdate
==============
*/

void __fastcall CgHandler::ProfBeginAnimUpdate(CgHandler *this)
{
  ?ProfBeginAnimUpdate@CgHandler@@UEBAXXZ(this);
}

/*
==============
CgHandler::GetPlayerWeaponHeat
==============
*/

WeaponHeat *__fastcall CgHandler::GetPlayerWeaponHeat(CgHandler *this, const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  return ?GetPlayerWeaponHeat@CgHandler@@UEBAPEAUWeaponHeat@@PEBUplayerState_s@@AEBUWeapon@@W4PlayerHandIndex@@@Z(this, ps, r_weapon, hand);
}

/*
==============
CgHandler::GetEntityAntilagVelocity
==============
*/

int __fastcall CgHandler::GetEntityAntilagVelocity(CgHandler *this, int entNum, const playerState_s *ps, vec3_t *outVelocity)
{
  return ?GetEntityAntilagVelocity@CgHandler@@UEBAHHPEBUplayerState_s@@AEATvec3_t@@@Z(this, entNum, ps, outVelocity);
}

/*
==============
CgHandler::DebugLineAll
==============
*/

void __fastcall CgHandler::DebugLineAll(CgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugLineAll@CgHandler@@UEBAXAEBTvec3_t@@0AEBTvec4_t@@1HH@Z(this, start, end, colorServer, colorClient, depthTest, duration);
}

/*
==============
CgHandler::GetPhysicsObject
==============
*/

PhysicsObject *__fastcall CgHandler::GetPhysicsObject(CgHandler *this, int entNum, LocalClientNum_t localClientNum)
{
  return ?GetPhysicsObject@CgHandler@@UEBAPEAVPhysicsObject@@HW4LocalClientNum_t@@@Z(this, entNum, localClientNum);
}

/*
==============
CgHandler::GetDetailWorldId
==============
*/

Physics_WorldId __fastcall CgHandler::GetDetailWorldId(CgHandler *this)
{
  return ?GetDetailWorldId@CgHandler@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
CgHandler::GetPlayerTraceInfo
==============
*/

BgPlayerTraceInfo *__fastcall CgHandler::GetPlayerTraceInfo(CgHandler *this, int playerNumber)
{
  return ?GetPlayerTraceInfo@CgHandler@@UEBAPEAVBgPlayerTraceInfo@@H@Z(this, playerNumber);
}

/*
==============
CgHandler::RequiresScriptMoverLadderChecks
==============
*/

bool __fastcall CgHandler::RequiresScriptMoverLadderChecks(CgHandler *this)
{
  return ?RequiresScriptMoverLadderChecks@CgHandler@@UEBA_NXZ(this);
}

/*
==============
CgHandler::DebugStringAll
==============
*/

void __fastcall CgHandler::DebugStringAll(CgHandler *this, const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  ?DebugStringAll@CgHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(this, point, color, scale, text, duration);
}

/*
==============
CgHandler::GetImpulseFieldCount
==============
*/

int __fastcall CgHandler::GetImpulseFieldCount(CgHandler *this, LocalClientNum_t localClientNum)
{
  return ?GetImpulseFieldCount@CgHandler@@UEBAHW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgHandler::GetEntityTeam
==============
*/

void __fastcall CgHandler::GetEntityTeam(CgHandler *this, team_t *teamOut, unsigned int entityNum, unsigned int *entityNumOut)
{
  ?GetEntityTeam@CgHandler@@UEBAXAEAW4team_t@@IAEAI@Z(this, teamOut, entityNum, entityNumOut);
}

/*
==============
CgHandler::GetPlayerPerks
==============
*/

bool __fastcall CgHandler::GetPlayerPerks(CgHandler *this, __int16 entityIndex, bitarray<64> *outPerks)
{
  return ?GetPlayerPerks@CgHandler@@UEBA_NFPEAV?$bitarray@$0EA@@@@Z(this, entityIndex, outPerks);
}

/*
==============
CgHandler::InCameraOrTransition
==============
*/

bool __fastcall CgHandler::InCameraOrTransition(CgHandler *this, int clientNum)
{
  return ?InCameraOrTransition@CgHandler@@UEBA_NH@Z(this, clientNum);
}

/*
==============
CgHandler::DebugSphere
==============
*/

void __fastcall CgHandler::DebugSphere(CgHandler *this, const vec3_t *center, float radius, const vec4_t *color, int depthTest, int duration)
{
  ?DebugSphere@CgHandler@@UEBAXAEBTvec3_t@@MAEBTvec4_t@@HH@Z(this, center, radius, color, depthTest, duration);
}

/*
==============
CgHandler::GetVehicleSystemConst
==============
*/

const BGVehicles *__fastcall CgHandler::GetVehicleSystemConst(CgHandler *this)
{
  return ?GetVehicleSystemConst@CgHandler@@UEBAPEBVBGVehicles@@XZ(this);
}

/*
==============
CgHandler::DebugBoxOriented
==============
*/

void __fastcall CgHandler::DebugBoxOriented(CgHandler *this, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *axis, const vec4_t *color, int depthTest, int duration)
{
  ?DebugBoxOriented@CgHandler@@UEBAXAEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@HH@Z(this, origin, bounds, axis, color, depthTest, duration);
}

/*
==============
CgHandler::CgHandler
==============
*/
void CgHandler::CgHandler(CgHandler *this, const LocalClientNum_t _localClientNum)
{
  this->m_localClientNum = _localClientNum;
  this->__vftable = (CgHandler_vtbl *)&CgHandler::`vftable';
}

/*
==============
CgHandler::AcquirePhysicsReadLock
==============
*/
void CgHandler::AcquirePhysicsReadLock(CgHandler *this, Physics_WorldId worldId)
{
  CG_EntityWorkers_AcquireReadLock_Physics(BASE);
}

/*
==============
CgHandler::DebugAxisAll
==============
*/

void __fastcall CgHandler::DebugAxisAll(CgHandler *this, const tmat33_t<vec3_t> *axes, const vec3_t *pos, double length, const int depthTest, int duration)
{
  __asm { vmovaps xmm2, xmm3; length }
  CG_DebugAxis(axes, pos, *(float *)&_XMM2, depthTest, duration);
}

/*
==============
CgHandler::DebugBox
==============
*/

void __fastcall CgHandler::DebugBox(CgHandler *this, const vec3_t *origin, const Bounds *bounds, double yaw, const vec4_t *color, int depthTest, int duration)
{
  __asm { vmovaps xmm2, xmm3; yaw }
  CG_DebugBox(origin, bounds, *(float *)&_XMM2, color, depthTest, duration);
}

/*
==============
CgHandler::DebugBoxOriented
==============
*/
void CgHandler::DebugBoxOriented(CgHandler *this, const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *axis, const vec4_t *color, int depthTest, int duration)
{
  CG_DebugBoxOriented(origin, bounds, axis, color, depthTest, duration);
}

/*
==============
CgHandler::DebugCapsule
==============
*/

void __fastcall CgHandler::DebugCapsule(CgHandler *this, const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
{
  __asm { vmovaps xmm2, xmm3; radius }
  CG_DebugCapsule(start, end, *(float *)&_XMM2, color, depthTest, duration);
}

/*
==============
CgHandler::DebugCone
==============
*/

void __fastcall CgHandler::DebugCone(CgHandler *this, const vec3_t *origin, const vec3_t *direction, double radius, float length, const vec4_t *color, int depthTest, int duration)
{
  __asm
  {
    vmovaps xmm2, xmm3; radius
    vmovss  xmm3, [rsp+48h+length]; length
  }
  CG_DebugCone(origin, direction, *(float *)&_XMM2, *(float *)&_XMM3, color, depthTest, duration);
}

/*
==============
CgHandler::DebugCylinder
==============
*/

void __fastcall CgHandler::DebugCylinder(CgHandler *this, const vec3_t *start, const vec3_t *end, double radius, const vec4_t *color, int depthTest, int duration)
{
  __asm { vmovaps xmm2, xmm3; radius }
  CG_DebugCylinder(start, end, *(float *)&_XMM2, color, depthTest, duration);
}

/*
==============
CgHandler::DebugEdgeQueryResults
==============
*/

void __fastcall CgHandler::DebugEdgeQueryResults(CgHandler *this, unsigned __int64 edgeCount, const EdgeId *edgeIdPool, const float *edgeFractionPool, const float *edgeDistPool, float maxQueryDistance, int edgeFlagIndex)
{
  CG_Edge_DrawQueryResults(this, edgeCount, edgeIdPool, edgeFractionPool, edgeDistPool, maxQueryDistance, edgeFlagIndex);
}

/*
==============
CgHandler::DebugLine
==============
*/
void CgHandler::DebugLine(CgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *color, int depthTest, int duration)
{
  CG_DebugLine(start, end, color, depthTest, duration);
}

/*
==============
CgHandler::DebugLineAll
==============
*/
void CgHandler::DebugLineAll(CgHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  CG_DebugLine(start, end, colorClient, depthTest, duration);
}

/*
==============
CgHandler::DebugSphere
==============
*/

void __fastcall CgHandler::DebugSphere(CgHandler *this, const vec3_t *center, double radius, const vec4_t *color, int depthTest, int duration)
{
  __asm { vmovaps xmm1, xmm2; radius }
  CG_DebugSphere(center, *(float *)&_XMM1, color, depthTest, duration);
}

/*
==============
CgHandler::DebugSphereAll
==============
*/

void __fastcall CgHandler::DebugSphereAll(CgHandler *this, const vec3_t *center, double radius, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  __asm { vmovaps xmm1, xmm2; radius }
  CG_DebugSphere(center, *(float *)&_XMM1, colorClient, depthTest, duration);
}

/*
==============
CgHandler::DebugStar
==============
*/
void CgHandler::DebugStar(CgHandler *this, const vec3_t *point, const vec4_t *color, int duration)
{
  CG_DebugStar(point, color, 0, duration);
}

/*
==============
CgHandler::DebugString
==============
*/

void __fastcall CgHandler::DebugString(CgHandler *this, const vec3_t *point, const vec4_t *color, double scale, const char *text, int duration)
{
  __asm { vmovaps xmm2, xmm3; scale }
  CG_DebugString(point, color, *(float *)&_XMM2, text, 0, duration);
}

/*
==============
CgHandler::DebugStringAll
==============
*/

void __fastcall CgHandler::DebugStringAll(CgHandler *this, const vec3_t *point, const vec4_t *color, double scale, const char *text, int duration)
{
  __asm { vmovaps xmm2, xmm3; scale }
  CG_DebugString(point, color, *(float *)&_XMM2, text, 0, duration);
}

/*
==============
CgHandler::FindBestConeTarget
==============
*/
char CgHandler::FindBestConeTarget(CgHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin, const vec3_t *dir, float range, float angle, unsigned int hitMask, int time, int *outentIndex, ConeTargetHitInfo *outHitInfo)
{
  __int64 v13; 
  centity_t *Entity; 
  CTargetEvaluator *TargetEvaluator; 
  char v20; 
  ConeTargetHitResults *HitResults; 
  const centity_t *Target; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  int v29; 
  CAssistTarget ptr[20]; 

  v13 = localClientNum;
  _RDI = outHitInfo;
  if ( !outentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 575, ASSERT_TYPE_ASSERT, "(outentIndex)", (const char *)&queryFormat, "outentIndex") )
    __debugbreak();
  if ( !outHitInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 576, ASSERT_TYPE_ASSERT, "(outHitInfo)", (const char *)&queryFormat, "outHitInfo") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)v13, attackerentIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 579, ASSERT_TYPE_ASSERT, "(attacker)", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    return 0;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", v13) )
    __debugbreak();
  if ( (unsigned int)v13 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v27) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v26) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v13] )
  {
    LODWORD(v27) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v27) )
      __debugbreak();
  }
  TargetEvaluator = CgWeaponSystem::GetTargetEvaluator(TARGET_ASSISTTYPPE_CONE);
  if ( !TargetEvaluator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 587, ASSERT_TYPE_ASSERT, "(targetEvaluator)", (const char *)&queryFormat, "targetEvaluator") )
    __debugbreak();
  `eh vector constructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))CAssistTarget::CAssistTarget, (void (__fastcall *)(void *))CAssistTarget::~CAssistTarget);
  __asm
  {
    vmovss  xmm0, [rsp+4318h+arg_30]
    vmovss  [rsp+4318h+var_42D8], xmm0
    vmovss  xmm1, [rsp+4318h+arg_28]
    vmovss  [rsp+4318h+var_42E0], xmm1
  }
  if ( ((__int64 (__fastcall *)(CTargetEvaluator *, _QWORD, Weapon *, _QWORD, centity_t *, const vec3_t *, const vec3_t *, int, int, int, _BYTE, unsigned int, int, _BYTE, CAssistTarget *))TargetEvaluator->FindTargets)(TargetEvaluator, (unsigned int)v13, &NULL_WEAPON, 0i64, Entity, origin, dir, v28, v29, 1, 0, hitMask, time, 0, ptr) > 0 )
  {
    HitResults = ConeTargetInfo::GetHitResults(ptr);
    _RBX = ConeTargetHitResults::GetFirstVisibleHit(HitResults);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 597, ASSERT_TYPE_ASSERT, "(hitInfo != 0)", (const char *)&queryFormat, "hitInfo != NULL") )
      __debugbreak();
    Target = CAssistTarget::GetTarget(ptr);
    if ( !Target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 600, ASSERT_TYPE_ASSERT, "(targetEnt)", (const char *)&queryFormat, "targetEnt") )
      __debugbreak();
    *outentIndex = Target->nextState.number;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rdi], ymm0
      vmovups ymm1, ymmword ptr [rbx+20h]
      vmovups ymmword ptr [rdi+20h], ymm1
    }
    outHitInfo->priority = _RBX->priority;
    v20 = 1;
  }
  else
  {
    v20 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))CAssistTarget::~CAssistTarget);
  return v20;
}

/*
==============
CgHandler::GetDetailWorldId
==============
*/
__int64 CgHandler::GetDetailWorldId(CgHandler *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 4);
}

/*
==============
CgHandler::GetEdgeQueryCache
==============
*/
__int64 CgHandler::GetEdgeQueryCache(CgHandler *this, int entityIndex)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals )
    return (__int64)&LocalClientGlobals->edgeQueryCache;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 659, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return 368496i64;
}

/*
==============
CgHandler::GetEntIndexByImpulseFieldIndex
==============
*/
__int64 CgHandler::GetEntIndexByImpulseFieldIndex(CgHandler *this, LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  __int64 v3; 
  CgEntitySystem *EntitySystem; 
  CgEntitySystem *v5; 

  v3 = impulseFieldIndex;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  v5 = EntitySystem;
  if ( (int)v3 < EntitySystem->m_impulseFieldEntityCount )
    return (unsigned int)EntitySystem->m_impulseFieldEntities[v3];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 556, ASSERT_TYPE_ASSERT, "(impulseFieldIndex < m_impulseFieldEntityCount)", (const char *)&queryFormat, "impulseFieldIndex < m_impulseFieldEntityCount") )
    __debugbreak();
  return (unsigned int)v5->m_impulseFieldEntities[v3];
}

/*
==============
CgHandler::GetEntityAngles
==============
*/
__int64 CgHandler::GetEntityAngles(CgHandler *this, int entIndex, vec3_t *outAngles)
{
  const dvar_t *v3; 
  CgAntiLag *Instance; 
  cg_t *LocalClientGlobals; 
  int m_sceneAntiLagTime; 
  __int64 result; 
  BgAntiLagEntityInfo outInfo; 

  v3 = DCONST_DVARBOOL_useBgTraceSystem;
  _RBX = outAngles;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    goto LABEL_17;
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 53, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  if ( Instance->m_sceneAntiLagRefCount <= 0 )
    goto LABEL_17;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 58, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( Instance->m_sceneAntiLagRefCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 657, ASSERT_TYPE_ASSERT, "(IsSceneAntilagged())", "%s\n\tThis function is intended to be used while the scene is antilagged", "IsSceneAntilagged()") )
    __debugbreak();
  m_sceneAntiLagTime = Instance->m_sceneAntiLagTime;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  if ( BgAntiLag::GetEntityInfoAtTime(Instance, LocalClientGlobals->predictedPlayerState.clientNum, entIndex, 2u, m_sceneAntiLagTime, &outInfo) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+108h+var_C8.baseclass_0.angles]
      vmovss  xmm1, dword ptr [rsp+108h+var_C8.baseclass_0.angles+4]
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm0, dword ptr [rsp+108h+var_C8.baseclass_0.angles+8]
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx+4], xmm1
    }
    return 1i64;
  }
  else
  {
LABEL_17:
    result = (__int64)CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
    if ( result )
    {
      _RBX->v[0] = *(float *)(result + 72);
      _RBX->v[1] = *(float *)(result + 76);
      _RBX->v[2] = *(float *)(result + 80);
      return 1i64;
    }
  }
  return result;
}

/*
==============
CgHandler::GetEntityAntilagVelocity
==============
*/
__int64 CgHandler::GetEntityAntilagVelocity(CgHandler *this, int entNum, const playerState_s *ps, vec3_t *outVelocity)
{
  CgAntiLag *Instance; 
  int clientNum; 
  BgAntiLagEntityInfo outInfo; 

  _RBX = outVelocity;
  Instance = CgAntiLag::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 85, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  clientNum = ps->clientNum;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  if ( !BgAntiLag::GetEntityInfoAtTime(Instance, clientNum, entNum, 8u, ps->serverTime, &outInfo) )
    return 0i64;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+var_C8.velocity]
    vmovss  xmm1, dword ptr [rsp+0F8h+var_C8.velocity+4]
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+var_C8.velocity+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  dword ptr [rbx+4], xmm1
  }
  return 1i64;
}

/*
==============
CgHandler::GetEntityTeam
==============
*/
void CgHandler::GetEntityTeam(CgHandler *this, team_t *teamOut, unsigned int entityNum, unsigned int *entityNumOut)
{
  centity_t *Entity; 
  __int16 otherEntityNum; 
  unsigned int v10; 
  unsigned __int8 playerIndex; 
  CgVehicleSystem *VehicleSystem; 
  __int16 v13; 
  __int64 v14; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 206, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  switch ( Entity->nextState.eType )
  {
    case ET_PLAYER:
    case ET_INVISIBLE:
    case ET_AGENT:
    case ET_ACTOR:
      if ( Entity->nextState.eType != ET_AGENT || (otherEntityNum = Entity->nextState.otherEntityNum, v10 = otherEntityNum, otherEntityNum == 2047) )
        v10 = entityNum;
      *entityNumOut = v10;
      CgHandler::GetPlayerTeam(this, entityNum, teamOut);
      break;
    case ET_HELICOPTER:
    case ET_PLANE:
    case ET_VEHICLE:
      playerIndex = Entity->nextState.staticState.vehiclePlayer.playerIndex;
      if ( !playerIndex )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
        *teamOut = (__int64)VehicleSystem->GetTeam(VehicleSystem, &Entity->nextState);
        goto LABEL_16;
      }
      this->GetEntityTeam(this, teamOut, playerIndex - 1, entityNumOut);
      break;
    default:
      v13 = Entity->nextState.otherEntityNum;
      if ( v13 == 2047 || (v14 = (unsigned int)v13, (_DWORD)v14 == entityNum) )
      {
        *teamOut = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? TEAM_FOUR : TEAM_ZERO;
LABEL_16:
        *entityNumOut = entityNum;
      }
      else
      {
        this->GetEntityTeam(this, teamOut, v14, entityNumOut);
      }
      break;
  }
}

/*
==============
CgHandler::GetGameTypeQuick
==============
*/
GameTypeQuick_t CgHandler::GetGameTypeQuick(CgHandler *this)
{
  return ClStatic::GetActiveGameTypeQuick(&cls);
}

/*
==============
CgHandler::GetGroundPersistentState
==============
*/
BgGroundPersistentState *CgHandler::GetGroundPersistentState(CgHandler *this, const playerState_s *ps)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( LocalClientGlobals->predictedPlayerState.clientNum == ps->clientNum )
    return &LocalClientGlobals->playerGroundPersistent;
  else
    return 0i64;
}

/*
==============
CgHandler::GetImpulseFieldCount
==============
*/
__int64 CgHandler::GetImpulseFieldCount(CgHandler *this, LocalClientNum_t localClientNum)
{
  return (unsigned int)CgEntitySystem::GetEntitySystem(localClientNum)->m_impulseFieldEntityCount;
}

/*
==============
CgHandler::GetLootTable
==============
*/
const BG_SpawnGroup_Loot_Table *CgHandler::GetLootTable(CgHandler *this)
{
  return ScriptableCl_GetLootTable((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgHandler::GetOmnvarDataAtPmoveTime
==============
*/
void CgHandler::GetOmnvarDataAtPmoveTime(CgHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime, OmnvarData *outData)
{
  cg_t *LocalClientGlobalsForEnt; 

  LocalClientGlobalsForEnt = CG_GetLocalClientGlobalsForEnt(clientEntNum);
  if ( LocalClientGlobalsForEnt )
  {
    if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 619, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
      __debugbreak();
    BG_Omnvar_GetDataAtPmoveTime(&LocalClientGlobalsForEnt->omnvarPmoveData, omnInx, pmoveTime, outData);
  }
  else
  {
    *outData = 0i64;
  }
}

/*
==============
CgHandler::GetParentAxis
==============
*/
char CgHandler::GetParentAxis(CgHandler *this, int entNum, tmat43_t<vec3_t> *outParentAxis)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  int number; 
  int clientNum; 
  centity_t *LinkToParent; 
  __int16 linkEnt; 
  const clientLinkInfo_t *p_clientLinkInfo; 
  CgEntitySystem *EntitySystem; 
  const DObj *DObj_General; 
  int WorldTagMatrix; 

  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 514, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  MatrixIdentity43(outParentAxis);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( (Entity->flags & 1) != 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 526, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    number = Entity->nextState.number;
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    LinkToParent = CG_Entity_GetLinkToParent(this->m_localClientNum, Entity);
    if ( clientNum == number )
    {
      linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
      if ( linkEnt != 2047 )
        LinkToParent = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, linkEnt);
    }
    if ( LinkToParent && (LinkToParent->flags & 1) != 0 )
    {
      p_clientLinkInfo = &Entity->nextState.clientLinkInfo;
      if ( clientNum == number )
      {
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( EntitySystem->IsMP(EntitySystem) )
          DObj_General = CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, LinkToParent, NULL);
        else
          DObj_General = Com_GetClientDObj(LinkToParent->nextState.number, EntitySystem->m_localClientNum);
        if ( !DObj_General )
          goto LABEL_22;
        WorldTagMatrix = CG_DObjGetWorldTagMatrix(&LinkToParent->pose, DObj_General, scr_const.tag_player, (tmat33_t<vec3_t> *)outParentAxis, &outParentAxis->m[3]);
      }
      else
      {
        if ( (*(_DWORD *)p_clientLinkInfo & 0x100000) != 0 )
          goto LABEL_22;
        WorldTagMatrix = CG_Entity_GetParentAxis(this->m_localClientNum, Entity->nextState.number, p_clientLinkInfo, LinkToParent, outParentAxis);
      }
      if ( WorldTagMatrix )
        return 1;
LABEL_22:
      CG_GetPoseOrigin(&LinkToParent->pose, &outParentAxis->m[3]);
      AnglesToAxis(&LinkToParent->pose.angles, (tmat33_t<vec3_t> *)outParentAxis);
      return 1;
    }
  }
  return 0;
}

/*
==============
CgHandler::GetPhysicsObject
==============
*/
PhysicsObject *CgHandler::GetPhysicsObject(CgHandler *this, int entNum, LocalClientNum_t localClientNum)
{
  return CG_PhysicsObject_GetBase(entNum, localClientNum);
}

/*
==============
CgHandler::GetPhysicsWorldId
==============
*/
__int64 CgHandler::GetPhysicsWorldId(CgHandler *this)
{
  return (unsigned int)(3 * this->m_localClientNum + 2);
}

/*
==============
CgHandler::GetPlayerASM
==============
*/
CgPlayer_Asm *CgHandler::GetPlayerASM(CgHandler *this)
{
  return CgPlayer_Asm::Singleton((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgHandler::GetPlayerPerks
==============
*/
bool CgHandler::GetPlayerPerks(CgHandler *this, __int16 entityIndex, bitarray<64> *outPerks)
{
  return CG_GetPerks(this->m_localClientNum, entityIndex, outPerks);
}

/*
==============
CgHandler::GetPlayerTraceInfo
==============
*/
CgPlayerTraceInfo *CgHandler::GetPlayerTraceInfo(CgHandler *this, int playerNumber)
{
  return CgPlayerTraceInfo::GetPlayerTraceInfo(this->m_localClientNum);
}

/*
==============
CgHandler::GetPlayerWeaponHeat
==============
*/
WeaponHeat *CgHandler::GetPlayerWeaponHeat(CgHandler *this, const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  __int64 v4; 
  playerState_s *p_predictedPlayerState; 
  __int64 m_localClientNum; 
  int EquippedWeaponIndex; 
  __int64 v11; 
  cg_t *LocalClientGlobals; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  int v19; 
  int clientNum; 

  v4 = hand;
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    v19 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 311, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", hand, v19) )
      __debugbreak();
  }
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState;
  if ( ps != p_predictedPlayerState )
  {
    clientNum = ps->clientNum;
    LODWORD(v18) = p_predictedPlayerState->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 315, ASSERT_TYPE_ASSERT, "(ps == predictedPlayerState)", "%s\n\tCgHandler::GetPlayerWeaponHeat should only be invoked for the local player (expected: %i, encountered %i).", "ps == predictedPlayerState", v18, clientNum) )
      __debugbreak();
  }
  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(CgWeaponMap::ms_instance[m_localClientNum], ps, r_weapon);
  v11 = EquippedWeaponIndex;
  if ( EquippedWeaponIndex < 0 )
    return 0i64;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( (unsigned int)v11 >= 0xF )
  {
    LODWORD(v18) = 15;
    LODWORD(v16) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 326, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->weaponHeat ) ) + 0 ) )", "weaponIndex doesn't index ARRAY_COUNT( cgameGlob->weaponHeat )\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->weaponHeat[0] ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( cgameGlob->weaponHeat[0] )\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  v14 = v4 + 2 * v11;
  v15 = (__int64)LocalClientGlobals->weaponHeat + 72 * v14;
  if ( (cg_t *)((char *)LocalClientGlobals + 72 * v14) == (cg_t *)-480848i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 330, ASSERT_TYPE_ASSERT, "(weaponHeat != nullptr)", (const char *)&queryFormat, "weaponHeat != nullptr") )
    __debugbreak();
  return (WeaponHeat *)v15;
}

/*
==============
CgHandler::GetScriptableDimensions
==============
*/
void CgHandler::GetScriptableDimensions(CgHandler *this, unsigned int scriptableIndex, float *outInitialAngle, vec3_t *outOrigin, Bounds *outBounds)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)this->m_localClientNum, scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, outOrigin);
  *outInitialAngle = InstanceCommonContext->anglesInitial.v[1];
  _RAX = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  _RCX = outBounds;
  if ( _RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax+2Ch]
      vmovups xmmword ptr [rcx], xmm0
      vmovsd  xmm1, qword ptr [rax+3Ch]
      vmovsd  qword ptr [rcx+10h], xmm1
    }
  }
  else
  {
    *(_QWORD *)outBounds->midPoint.v = *(_QWORD *)outOrigin->v;
    outBounds->midPoint.v[2] = outOrigin->v[2];
    outBounds->halfSize.v[0] = 1.0;
    outBounds->halfSize.v[1] = 1.0;
    outBounds->halfSize.v[2] = 1.0;
  }
}

/*
==============
CgHandler::GetScriptablePartDef
==============
*/
ScriptablePartDef *CgHandler::GetScriptablePartDef(CgHandler *this, unsigned int scriptableIndex, const scr_string_t partName)
{
  ScriptableContext v5; 

  v5 = ScriptableCl_LocalClientToContext((const LocalClientNum_t)this->m_localClientNum);
  return ScriptableCl_GetPartScriptedDefFromName(v5, scriptableIndex, partName);
}

/*
==============
CgHandler::GetScriptablePhysicsInstanceId
==============
*/
__int64 CgHandler::GetScriptablePhysicsInstanceId(CgHandler *this, unsigned int scriptableIndex)
{
  __int64 m_localClientNum; 
  __int64 v3; 
  bool v4; 
  ScriptableInstanceClientContext **v5; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned int totalInstanceCount; 

  m_localClientNum = this->m_localClientNum;
  v3 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v3 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)m_localClientNum >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v7) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 124, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v4 = g_scriptableCl_instanceContexts[m_localClientNum] == NULL;
  v5 = &g_scriptableCl_instanceContexts[m_localClientNum];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  return (*v5)[v3].collisionContext.scriptableCollisionPredictive;
}

/*
==============
CgHandler::GetVehicleDef
==============
*/
const VehicleDef *CgHandler::GetVehicleDef(CgHandler *this, const playerState_s *ps)
{
  return CG_Vehicle_GetDef(this->m_localClientNum, ps);
}

/*
==============
CgHandler::GetVehicleSystem
==============
*/
CgVehicleSystem *CgHandler::GetVehicleSystem(CgHandler *this)
{
  return CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgHandler::GetVehicleSystemConst
==============
*/
CgVehicleSystem *CgHandler::GetVehicleSystemConst(CgHandler *this)
{
  return CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgHandler::GetWeaponMap
==============
*/
CgWeaponMap *CgHandler::GetWeaponMap(CgHandler *this)
{
  __int64 m_localClientNum; 

  m_localClientNum = this->m_localClientNum;
  if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return CgWeaponMap::ms_instance[m_localClientNum];
}

/*
==============
CgHandler::InCameraOrTransition
==============
*/
bool CgHandler::InCameraOrTransition(CgHandler *this, int clientNum)
{
  return CG_Camera_InCameraOrTransition(this->m_localClientNum);
}

/*
==============
CgHandler::IsClient
==============
*/
char CgHandler::IsClient(CgHandler *this)
{
  return 1;
}

/*
==============
CgHandler::IsEntAttachedToVehicle
==============
*/
bool CgHandler::IsEntAttachedToVehicle(CgHandler *this, int entNum, int *outVehicleEntNum)
{
  centity_t *Entity; 
  bool result; 
  int number; 

  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entNum);
  if ( !Entity )
    return 0;
  while ( Entity->nextState.eType != ET_VEHICLE )
  {
    Entity = CG_Entity_GetLinkToParent(this->m_localClientNum, Entity);
    if ( !Entity )
      return 0;
  }
  number = Entity->nextState.number;
  result = 1;
  *outVehicleEntNum = number;
  return result;
}

/*
==============
CgHandler::IsPointInVolume
==============
*/
int CgHandler::IsPointInVolume(CgHandler *this, const vec3_t *point, int entNum)
{
  LocalClientNum_t m_localClientNum; 
  int v7; 
  unsigned int Instance; 

  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 460, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  v7 = 3 * m_localClientNum + 2;
  Instance = CG_PhysicsObject_GetInstance((Physics_WorldId)v7, entNum, m_localClientNum);
  return PhysicsQuery_LegacyEntityContactPointPhysicsOnly((Physics_WorldId)v7, point, Instance);
}

/*
==============
CgHandler::PlayerTurret
==============
*/
Weapon *CgHandler::PlayerTurret(CgHandler *this, const playerState_s *ps)
{
  const entityState_t *v4; 
  CgWeaponMap *Instance; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 99, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = this->PlayerTurretEnt(this, ps);
  if ( !v4 )
    return &NULL_WEAPON;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  return (Weapon *)BgWeaponMap::GetWeapon(Instance, v4->weaponHandle);
}

/*
==============
CgHandler::PlayerTurretEnt
==============
*/
entityState_t *CgHandler::PlayerTurretEnt(CgHandler *this, const playerState_s *ps)
{
  __int16 remoteTurretEnt; 
  int v5; 
  centity_t *Entity; 
  __int64 v8; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 113, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x18u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 125, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
        remoteTurretEnt = ps->remoteTurretEnt;
      }
      else
      {
        if ( !CG_VehicleCam_IsRemoteDriveCam(this->m_localClientNum) )
          return 0i64;
        remoteTurretEnt = CG_Vehicle_GetRemoteDriveEnt(this->m_localClientNum)->number;
      }
      goto LABEL_17;
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
  }
  if ( ps->viewlocked == PLAYERVIEWLOCK_NONE )
    return 0i64;
  remoteTurretEnt = ps->viewlocked_entNum;
LABEL_17:
  v5 = remoteTurretEnt;
  if ( remoteTurretEnt != 2047 )
  {
    if ( (unsigned int)remoteTurretEnt >= 0x800 )
    {
      LODWORD(v8) = remoteTurretEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( turretEntNum ) < (unsigned)( ( 2048 ) )", "turretEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
        __debugbreak();
    }
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, v5);
    if ( (Entity->flags & 1) != 0 )
      return &Entity->nextState;
  }
  return 0i64;
}

/*
==============
CgHandler::PlayerWeaponAnims
==============
*/
PlayerWeaponAnimArrays *CgHandler::PlayerWeaponAnims(CgHandler *this, playerState_s *ps)
{
  return &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_weaponAnimArrays;
}

/*
==============
CgHandler::PlayerWeaponAnimsConst
==============
*/
PlayerWeaponAnimArrays *CgHandler::PlayerWeaponAnimsConst(CgHandler *this, const playerState_s *ps)
{
  return &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->m_weaponAnimArrays;
}

/*
==============
CgHandler::PlayerWeaponHeatIterate
==============
*/
void CgHandler::PlayerWeaponHeatIterate(CgHandler *this, const playerState_s *ps, void (*weaponHeatCb)(WeaponHeat *const, const Weapon *, const int))
{
  CgHandler *v5; 
  playerState_s *p_predictedPlayerState; 
  unsigned __int64 v7; 
  WeaponHeat (*weaponHeat)[2]; 
  __int64 m_localClientNum; 
  CgWeaponMap *v10; 
  const Weapon *Weapon; 
  unsigned __int64 i; 

  v5 = this;
  if ( !weaponHeatCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 337, ASSERT_TYPE_ASSERT, "(weaponHeatCb)", (const char *)&queryFormat, "weaponHeatCb") )
    __debugbreak();
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v5->m_localClientNum)->predictedPlayerState;
  if ( ps != p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 341, ASSERT_TYPE_ASSERT, "(ps == predictedPlayerState)", "%s\n\tCgHandler::PlayerWeaponHeatIterate should only be invoked for the local player (expected: %i, encountered %i).", "ps == predictedPlayerState", p_predictedPlayerState->clientNum, ps->clientNum) )
    __debugbreak();
  v7 = 0i64;
  weaponHeat = CG_GetLocalClientGlobals((const LocalClientNum_t)v5->m_localClientNum)->weaponHeat;
  do
  {
    if ( v7 + 0x80000000 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v7, "unsigned", v7) )
      __debugbreak();
    m_localClientNum = v5->m_localClientNum;
    if ( !CgWeaponMap::ms_instance[m_localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v10 = CgWeaponMap::ms_instance[m_localClientNum];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v10, ps->weaponsEquipped[(int)v7]);
    for ( i = 0i64; i < 2; ++i )
    {
      weaponHeatCb((WeaponHeat *const)weaponHeat, Weapon, ps->serverTime);
      weaponHeat = (WeaponHeat (*)[2])((char *)weaponHeat + 72);
    }
    v5 = this;
    ++v7;
  }
  while ( v7 < 0xF );
}

/*
==============
CgHandler::PlayerWeaponOffsetPatternCache
==============
*/
WeaponOffsetPatternCache *CgHandler::PlayerWeaponOffsetPatternCache(CgHandler *this, const playerState_s *ps, const int patternIndex)
{
  __int64 v3; 
  __int64 v6; 
  int v7; 

  v3 = patternIndex;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 193, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC )
  {
    v7 = 12;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 194, ASSERT_TYPE_ASSERT, "(unsigned)( patternIndex ) < (unsigned)( 12 )", "patternIndex doesn't index MAX_WEAPON_OFFSET_PATTERNS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->patternCacheList[v3];
}

/*
==============
CgHandler::ProfBeginAnimUpdate
==============
*/
void CgHandler::ProfBeginAnimUpdate(CgHandler *this)
{
  ;
}

/*
==============
CgHandler::ProfEndAnimUpdate
==============
*/
void CgHandler::ProfEndAnimUpdate(CgHandler *this)
{
  ;
}

/*
==============
CgHandler::ReleasePhysicsReadLock
==============
*/
void CgHandler::ReleasePhysicsReadLock(CgHandler *this, Physics_WorldId worldId)
{
  CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
}

/*
==============
CgHandler::RequiresScriptMoverLadderChecks
==============
*/
char CgHandler::RequiresScriptMoverLadderChecks(CgHandler *this)
{
  unsigned int IndexByName; 
  OmnvarData *Data; 

  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)260) )
    return 1;
  IndexByName = BG_Omnvar_GetIndexByName("requires_scriptmover_ladder_checks");
  if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 168, ASSERT_TYPE_ASSERT, "(omnvarIdx != ((uint)-1))", (const char *)&queryFormat, "omnvarIdx != OMNVAR_NONE") )
    __debugbreak();
  Data = CG_Omnvar_GetData(this->m_localClientNum, IndexByName);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 170, ASSERT_TYPE_ASSERT, "(omnvarData)", (const char *)&queryFormat, "omnvarData") )
    __debugbreak();
  return Data->current.enabled;
}

/*
==============
CgHandler::SetEntityAngles
==============
*/
void CgHandler::SetEntityAngles(CgHandler *this, int entIndex, const vec3_t *angles)
{
  centity_t *Entity; 
  __int64 v7; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetEntityAngles");
  if ( (unsigned int)entIndex > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 496, ASSERT_TYPE_ASSERT, "(entIndex >= 0 && entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex >= 0 && entIndex < MAX_GENTITIES") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( Entity )
  {
    Entity->pose.angles.v[0] = angles->v[0];
    Entity->pose.angles.v[1] = angles->v[1];
    Entity->pose.angles.v[2] = angles->v[2];
  }
  memset(&v7, 0, sizeof(v7));
  Sys_ProfEndNamedEvent();
}

/*
==============
CgHandler::SetEntityOrigin
==============
*/
void CgHandler::SetEntityOrigin(CgHandler *this, int entIndex, const vec3_t *origin)
{
  centity_t *Entity; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetEntityOrigin");
  if ( (unsigned int)entIndex > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 477, ASSERT_TYPE_ASSERT, "(entIndex >= 0 && entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex >= 0 && entIndex < MAX_GENTITIES") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  if ( Entity )
    CG_SetPoseOrigin(&Entity->pose, origin);
  Sys_ProfEndNamedEvent();
}

/*
==============
CgHandler::getHandler
==============
*/
__int64 CgHandler::getHandler(LocalClientNum_t _localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(_localClientNum);
  if ( LocalClientGlobals )
    return (__int64)&LocalClientGlobals->m_bgHandler;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_handler.cpp", 37, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return 25696i64;
}

