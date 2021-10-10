/*
==============
GHandler::GetEdgeQueryCache
==============
*/

EdgeQueryCache *__fastcall GHandler::GetEdgeQueryCache(GHandler *this, int entityIndex)
{
  return ?GetEdgeQueryCache@GHandler@@UEBAPEAUEdgeQueryCache@@H@Z(this, entityIndex);
}

/*
==============
GHandler::GetParentAxis
==============
*/

bool __fastcall GHandler::GetParentAxis(GHandler *this, int entNum, tmat43_t<vec3_t> *outParentAxis)
{
  return ?GetParentAxis@GHandler@@UEBA_NHAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, entNum, outParentAxis);
}

/*
==============
GHandler::GetEntityTeam
==============
*/

void __fastcall GHandler::GetEntityTeam(GHandler *this, team_t *teamOut, unsigned int entityNum, unsigned int *entityNumOut)
{
  ?GetEntityTeam@GHandler@@UEBAXAEAW4team_t@@IAEAI@Z(this, teamOut, entityNum, entityNumOut);
}

/*
==============
GHandler::GetEntityWorldTagPosition
==============
*/

int __fastcall GHandler::GetEntityWorldTagPosition(GHandler *this, int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  return ?GetEntityWorldTagPosition@GHandler@@QEBAHHW4scr_string_t@@AEATvec3_t@@@Z(this, entIndex, tagName, outPosition);
}

/*
==============
GHandler::GetEntityOrigin
==============
*/

int __fastcall GHandler::GetEntityOrigin(GHandler *this, int entIndex, vec3_t *outPosition)
{
  return ?GetEntityOrigin@GHandler@@UEBAHHAEATvec3_t@@@Z(this, entIndex, outPosition);
}

/*
==============
GHandler::EntUnlink
==============
*/

void __fastcall GHandler::EntUnlink(GHandler *this, LocalClientNum_t localClientNum, int entIndex)
{
  ?EntUnlink@GHandler@@UEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, entIndex);
}

/*
==============
GHandler::IsServer
==============
*/

bool __fastcall GHandler::IsServer(GHandler *this)
{
  return ?IsServer@GHandler@@UEBA_NXZ(this);
}

/*
==============
GHandler::GetDetailWorldId
==============
*/

Physics_WorldId __fastcall GHandler::GetDetailWorldId(GHandler *this)
{
  return ?GetDetailWorldId@GHandler@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
GHandler::GetEntityState
==============
*/

const entityState_t *__fastcall GHandler::GetEntityState(GHandler *this, int entIndex)
{
  return ?GetEntityState@GHandler@@QEBAPEBUentityState_t@@H@Z(this, entIndex);
}

/*
==============
GHandler::GetScriptablePhysicsInstanceId
==============
*/

unsigned int __fastcall GHandler::GetScriptablePhysicsInstanceId(GHandler *this, unsigned int scriptableIndex)
{
  return ?GetScriptablePhysicsInstanceId@GHandler@@UEBAII@Z(this, scriptableIndex);
}

/*
==============
GHandler::DebugLineAll
==============
*/

void __fastcall GHandler::DebugLineAll(GHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugLineAll@GHandler@@UEBAXAEBTvec3_t@@0AEBTvec4_t@@1HH@Z(this, start, end, colorServer, colorClient, depthTest, duration);
}

/*
==============
GHandler::GetVehicleDef
==============
*/

const VehicleDef *__fastcall GHandler::GetVehicleDef(GHandler *this, const playerState_s *ps)
{
  return ?GetVehicleDef@GHandler@@UEBAPEBUVehicleDef@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::BotStuckCheck
==============
*/

void __fastcall GHandler::BotStuckCheck(GHandler *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, float frametime, bool body)
{
  ?BotStuckCheck@GHandler@@UEBAXAEBTvec3_t@@0PEBUplayerState_s@@M_N@Z(this, startVel, startOrigin, ps, frametime, body);
}

/*
==============
GHandler::SetEntityOrigin
==============
*/

void __fastcall GHandler::SetEntityOrigin(GHandler *this, int entIndex, const vec3_t *origin)
{
  ?SetEntityOrigin@GHandler@@UEAAXHAEBTvec3_t@@@Z(this, entIndex, origin);
}

/*
==============
GHandler::GetEntityAntilagVelocity
==============
*/

int __fastcall GHandler::GetEntityAntilagVelocity(GHandler *this, int entNum, const playerState_s *ps, vec3_t *outVelocity)
{
  return ?GetEntityAntilagVelocity@GHandler@@UEBAHHPEBUplayerState_s@@AEATvec3_t@@@Z(this, entNum, ps, outVelocity);
}

/*
==============
GHandler::GetGroundPersistentState
==============
*/

const BgGroundPersistentState *__fastcall GHandler::GetGroundPersistentState(GHandler *this, const playerState_s *ps)
{
  return ?GetGroundPersistentState@GHandler@@UEBAPEBUBgGroundPersistentState@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::GetEntityVelocity
==============
*/

int __fastcall GHandler::GetEntityVelocity(GHandler *this, int entIndex, vec3_t *outVelocity)
{
  return ?GetEntityVelocity@GHandler@@QEBAHHAEATvec3_t@@@Z(this, entIndex, outVelocity);
}

/*
==============
GHandler::PlayerTurretEnt
==============
*/

const entityState_t *__fastcall GHandler::PlayerTurretEnt(GHandler *this, const playerState_s *ps)
{
  return ?PlayerTurretEnt@GHandler@@UEBAPEBUentityState_t@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::BotSetAlmostGroundPlane
==============
*/

void __fastcall GHandler::BotSetAlmostGroundPlane(GHandler *this, const playerState_s *ps, bool newValue)
{
  ?BotSetAlmostGroundPlane@GHandler@@UEBAXPEBUplayerState_s@@_N@Z(this, ps, newValue);
}

/*
==============
GHandler::GetImpulseFieldCount
==============
*/

int __fastcall GHandler::GetImpulseFieldCount(GHandler *this, LocalClientNum_t localClientNum)
{
  return ?GetImpulseFieldCount@GHandler@@UEBAHW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
GHandler::GetScriptablePartDef
==============
*/

const ScriptablePartDef *__fastcall GHandler::GetScriptablePartDef(GHandler *this, unsigned int scriptableIndex, const scr_string_t partName)
{
  return ?GetScriptablePartDef@GHandler@@UEBAPEBUScriptablePartDef@@IW4scr_string_t@@@Z(this, scriptableIndex, partName);
}

/*
==============
GHandler::RequiresScriptMoverLadderChecks
==============
*/

bool __fastcall GHandler::RequiresScriptMoverLadderChecks(GHandler *this)
{
  return ?RequiresScriptMoverLadderChecks@GHandler@@UEBA_NXZ(this);
}

/*
==============
GHandler::PlayerWeaponOffsetPatternCache
==============
*/

WeaponOffsetPatternCache *__fastcall GHandler::PlayerWeaponOffsetPatternCache(GHandler *this, const playerState_s *ps, const int patternIndex)
{
  return ?PlayerWeaponOffsetPatternCache@GHandler@@UEBAPEAUWeaponOffsetPatternCache@@PEBUplayerState_s@@H@Z(this, ps, patternIndex);
}

/*
==============
GHandler::DebugStringAll
==============
*/

void __fastcall GHandler::DebugStringAll(GHandler *this, const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  ?DebugStringAll@GHandler@@UEBAXAEBTvec3_t@@AEBTvec4_t@@MPEBDH@Z(this, point, color, scale, text, duration);
}

/*
==============
GHandler::GetPhysicsObject
==============
*/

PhysicsObject *__fastcall GHandler::GetPhysicsObject(GHandler *this, int entNum, LocalClientNum_t localClientNum)
{
  return ?GetPhysicsObject@GHandler@@UEBAPEAVPhysicsObject@@HW4LocalClientNum_t@@@Z(this, entNum, localClientNum);
}

/*
==============
GHandler::GetVehicleSystemConst
==============
*/

const BGVehicles *__fastcall GHandler::GetVehicleSystemConst(GHandler *this)
{
  return ?GetVehicleSystemConst@GHandler@@UEBAPEBVBGVehicles@@XZ(this);
}

/*
==============
GHandler::GetPlayerWeaponHeat
==============
*/

WeaponHeat *__fastcall GHandler::GetPlayerWeaponHeat(GHandler *this, const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  return ?GetPlayerWeaponHeat@GHandler@@UEBAPEAUWeaponHeat@@PEBUplayerState_s@@AEBUWeapon@@W4PlayerHandIndex@@@Z(this, ps, r_weapon, hand);
}

/*
==============
GHandler::GetOmnvarDataAtPmoveTime
==============
*/

void __fastcall GHandler::GetOmnvarDataAtPmoveTime(GHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime, OmnvarData *outData)
{
  ?GetOmnvarDataAtPmoveTime@GHandler@@UEBAXIIHPEAUOmnvarData@@@Z(this, clientEntNum, omnInx, pmoveTime, outData);
}

/*
==============
GHandler::GetPlayerTraceInfo
==============
*/

BgPlayerTraceInfo *__fastcall GHandler::GetPlayerTraceInfo(GHandler *this, int playerNumber)
{
  return ?GetPlayerTraceInfo@GHandler@@UEBAPEAVBgPlayerTraceInfo@@H@Z(this, playerNumber);
}

/*
==============
GHandler::FindBestConeTarget
==============
*/

bool __fastcall GHandler::FindBestConeTarget(GHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin, const vec3_t *dir, float range, float angle, unsigned int hitMask, int time, int *outentIndex, ConeTargetHitInfo *outHitInfo)
{
  return ?FindBestConeTarget@GHandler@@UEBA_NW4LocalClientNum_t@@HAEBTvec3_t@@1MMIHPEAHPEAUConeTargetHitInfo@@@Z(this, localClientNum, attackerentIndex, origin, dir, range, angle, hitMask, time, outentIndex, outHitInfo);
}

/*
==============
GHandler::PlayerWeaponHeatIterate
==============
*/

void __fastcall GHandler::PlayerWeaponHeatIterate(GHandler *this, const playerState_s *ps, void (__fastcall *weaponHeatCb)(WeaponHeat *const, const Weapon *, const int))
{
  ?PlayerWeaponHeatIterate@GHandler@@UEBAXPEBUplayerState_s@@P6AXQEAUWeaponHeat@@AEBUWeapon@@H@Z@Z(this, ps, weaponHeatCb);
}

/*
==============
GHandler::GetVehicleSystem
==============
*/

BGVehicles *__fastcall GHandler::GetVehicleSystem(GHandler *this)
{
  return ?GetVehicleSystem@GHandler@@UEAAPEAVBGVehicles@@XZ(this);
}

/*
==============
GHandler::GetGameTypeQuick
==============
*/

GameTypeQuick_t __fastcall GHandler::GetGameTypeQuick(GHandler *this)
{
  return ?GetGameTypeQuick@GHandler@@UEBA?AW4GameTypeQuick_t@@XZ(this);
}

/*
==============
GHandler::GetLootTable
==============
*/

const BG_SpawnGroup_Loot_Table *__fastcall GHandler::GetLootTable(GHandler *this)
{
  return ?GetLootTable@GHandler@@UEBAPEBUBG_SpawnGroup_Loot_Table@@XZ(this);
}

/*
==============
GHandler::InCameraOrTransition
==============
*/

bool __fastcall GHandler::InCameraOrTransition(GHandler *this, int clientNum)
{
  return ?InCameraOrTransition@GHandler@@UEBA_NH@Z(this, clientNum);
}

/*
==============
GHandler::GetPlayerPerks
==============
*/

bool __fastcall GHandler::GetPlayerPerks(GHandler *this, __int16 entityIndex, bitarray<64> *outPerks)
{
  return ?GetPlayerPerks@GHandler@@UEBA_NFPEAV?$bitarray@$0EA@@@@Z(this, entityIndex, outPerks);
}

/*
==============
GHandler::PlayerTurret
==============
*/

const Weapon *__fastcall GHandler::PlayerTurret(GHandler *this, const playerState_s *ps)
{
  return ?PlayerTurret@GHandler@@UEBAAEBUWeapon@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::DebugSphereAll
==============
*/

void __fastcall GHandler::DebugSphereAll(GHandler *this, const vec3_t *center, float radius, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  ?DebugSphereAll@GHandler@@UEBAXAEBTvec3_t@@MAEBTvec4_t@@1HH@Z(this, center, radius, colorServer, colorClient, depthTest, duration);
}

/*
==============
GHandler::PlayerWeaponAnimsConst
==============
*/

const PlayerWeaponAnimArrays *__fastcall GHandler::PlayerWeaponAnimsConst(GHandler *this, const playerState_s *ps)
{
  return ?PlayerWeaponAnimsConst@GHandler@@UEBAPEBVPlayerWeaponAnimArrays@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::GetPlayerTeam
==============
*/

int __fastcall GHandler::GetPlayerTeam(GHandler *this, int entIndex, team_t *outTeam)
{
  return ?GetPlayerTeam@GHandler@@QEBAHHPEAW4team_t@@@Z(this, entIndex, outTeam);
}

/*
==============
GHandler::SetEntityAngles
==============
*/

void __fastcall GHandler::SetEntityAngles(GHandler *this, int entIndex, const vec3_t *angles)
{
  ?SetEntityAngles@GHandler@@UEAAXHAEBTvec3_t@@@Z(this, entIndex, angles);
}

/*
==============
GHandler::PlayerWeaponAnims
==============
*/

PlayerWeaponAnimArrays *__fastcall GHandler::PlayerWeaponAnims(GHandler *this, playerState_s *ps)
{
  return ?PlayerWeaponAnims@GHandler@@UEBAPEAVPlayerWeaponAnimArrays@@PEAUplayerState_s@@@Z(this, ps);
}

/*
==============
GHandler::DebugAxisAll
==============
*/

void __fastcall GHandler::DebugAxisAll(GHandler *this, const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
{
  ?DebugAxisAll@GHandler@@UEBAXAEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@MHH@Z(this, axes, pos, length, depthTest, duration);
}

/*
==============
GHandler::getHandler
==============
*/

GHandler *__fastcall GHandler::getHandler()
{
  return ?getHandler@GHandler@@SAPEAV1@XZ();
}

/*
==============
GHandler::ReleasePhysicsReadLock
==============
*/

void __fastcall GHandler::ReleasePhysicsReadLock(GHandler *this, Physics_WorldId worldId)
{
  ?ReleasePhysicsReadLock@GHandler@@UEBAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
GHandler::GetScriptableDimensions
==============
*/

void __fastcall GHandler::GetScriptableDimensions(GHandler *this, unsigned int scriptableIndex, float *outInitialAngle, vec3_t *outOrigin, Bounds *outBounds)
{
  ?GetScriptableDimensions@GHandler@@UEBAXIAEAMAEATvec3_t@@AEAUBounds@@@Z(this, scriptableIndex, outInitialAngle, outOrigin, outBounds);
}

/*
==============
GHandler::GetEntIndexByImpulseFieldIndex
==============
*/

int __fastcall GHandler::GetEntIndexByImpulseFieldIndex(GHandler *this, LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  return ?GetEntIndexByImpulseFieldIndex@GHandler@@UEBAHW4LocalClientNum_t@@H@Z(this, localClientNum, impulseFieldIndex);
}

/*
==============
GHandler::ProfEndAnimUpdate
==============
*/

void __fastcall GHandler::ProfEndAnimUpdate(GHandler *this)
{
  ?ProfEndAnimUpdate@GHandler@@UEBAXXZ(this);
}

/*
==============
GHandler::IsPointInVolume
==============
*/

int __fastcall GHandler::IsPointInVolume(GHandler *this, const vec3_t *point, int entNum)
{
  return ?IsPointInVolume@GHandler@@UEBAHAEBTvec3_t@@H@Z(this, point, entNum);
}

/*
==============
GHandler::GetWeaponMap
==============
*/

const BgWeaponMap *__fastcall GHandler::GetWeaponMap(GHandler *this)
{
  return ?GetWeaponMap@GHandler@@UEBAPEBVBgWeaponMap@@XZ(this);
}

/*
==============
GHandler::IsEntAttachedToVehicle
==============
*/

bool __fastcall GHandler::IsEntAttachedToVehicle(GHandler *this, int entNum, int *outVehicleEntNum)
{
  return ?IsEntAttachedToVehicle@GHandler@@UEBA_NHAEAH@Z(this, entNum, outVehicleEntNum);
}

/*
==============
GHandler::AcquirePhysicsReadLock
==============
*/

void __fastcall GHandler::AcquirePhysicsReadLock(GHandler *this, Physics_WorldId worldId)
{
  ?AcquirePhysicsReadLock@GHandler@@UEBAXW4Physics_WorldId@@@Z(this, worldId);
}

/*
==============
GHandler::OnMountCancel
==============
*/

void __fastcall GHandler::OnMountCancel(GHandler *this, int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  ?OnMountCancel@GHandler@@UEBAXHHHHAEBTvec3_t@@0@Z(this, clientIndex, startTime, endTime, type, pos, angles);
}

/*
==============
GHandler::GetWorldTagMatrix
==============
*/

bool __fastcall GHandler::GetWorldTagMatrix(GHandler *this, const int entNum, const scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  return ?GetWorldTagMatrix@GHandler@@UEBA_NHW4scr_string_t@@AEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(this, entNum, tagName, outTagMat, outOrigin);
}

/*
==============
GHandler::GetPlayerASM
==============
*/

BgPlayer_Asm *__fastcall GHandler::GetPlayerASM(GHandler *this)
{
  return ?GetPlayerASM@GHandler@@UEBAPEAVBgPlayer_Asm@@XZ(this);
}

/*
==============
GHandler::GetEntityAngles
==============
*/

int __fastcall GHandler::GetEntityAngles(GHandler *this, int entIndex, vec3_t *outAngles)
{
  return ?GetEntityAngles@GHandler@@UEBAHHAEATvec3_t@@@Z(this, entIndex, outAngles);
}

/*
==============
GHandler::GetPhysicsWorldId
==============
*/

Physics_WorldId __fastcall GHandler::GetPhysicsWorldId(GHandler *this)
{
  return ?GetPhysicsWorldId@GHandler@@UEBA?AW4Physics_WorldId@@XZ(this);
}

/*
==============
GHandler::ProfBeginAnimUpdate
==============
*/

void __fastcall GHandler::ProfBeginAnimUpdate(GHandler *this)
{
  ?ProfBeginAnimUpdate@GHandler@@UEBAXXZ(this);
}

/*
==============
GHandler::GetPhysicsObject
==============
*/
PhysicsObject *GHandler::GetPhysicsObject(GHandler *this, int entNum, LocalClientNum_t localClientNum)
{
  return G_PhysicsObject_GetBase(entNum, localClientNum);
}

/*
==============
GHandler::GetEntityOrigin
==============
*/
__int64 GHandler::GetEntityOrigin(GHandler *this, int entIndex, vec3_t *outPosition)
{
  __int64 v3; 
  gentity_s *v5; 

  v3 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 47, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  v5 = g_entities;
  outPosition->v[0] = g_entities[v3].r.currentOrigin.v[0];
  outPosition->v[1] = v5[v3].r.currentOrigin.v[1];
  outPosition->v[2] = v5[v3].r.currentOrigin.v[2];
  return 1i64;
}

/*
==============
GHandler::GetEntityAngles
==============
*/
__int64 GHandler::GetEntityAngles(GHandler *this, int entIndex, vec3_t *outAngles)
{
  __int64 v3; 
  gentity_s *v5; 

  v3 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 59, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  v5 = g_entities;
  outAngles->v[0] = g_entities[v3].r.currentAngles.v[0];
  outAngles->v[1] = v5[v3].r.currentAngles.v[1];
  outAngles->v[2] = v5[v3].r.currentAngles.v[2];
  return 1i64;
}

/*
==============
GHandler::GetEntityAntilagVelocity
==============
*/
__int64 GHandler::GetEntityAntilagVelocity(GHandler *this, int entNum, const playerState_s *ps, vec3_t *outVelocity)
{
  GAntiLag *v7; 
  int clientNum; 
  float v9; 
  BgAntiLagEntityInfo outInfo; 

  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v7 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", (_DWORD)GAntiLag::ms_gAntiLagData + 82, ASSERT_TYPE_ASSERT, "(antiLag)", (const char *)&queryFormat, "antiLag") )
    __debugbreak();
  clientNum = ps->clientNum;
  outInfo.boneInfo.boneList.m_usedSize = 0;
  outInfo.boneInfo.boneList.m_maxSize = 0;
  if ( !BgAntiLag::GetEntityInfoAtTime(v7, clientNum, entNum, 8u, ps->serverTime, &outInfo) )
    return 0i64;
  v9 = outInfo.velocity.v[1];
  outVelocity->v[0] = outInfo.velocity.v[0];
  outVelocity->v[2] = outInfo.velocity.v[2];
  outVelocity->v[1] = v9;
  return 1i64;
}

/*
==============
GHandler::GetWorldTagMatrix
==============
*/
_BOOL8 GHandler::GetWorldTagMatrix(GHandler *this, const int entNum, const scr_string_t tagName, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  __int64 v6; 
  gentity_s *v8; 
  entityType_s eType; 
  int WorldTagMatrix; 
  bool v11; 
  float v12; 
  __int64 v14; 
  tmat43_t<vec3_t> outTagMata; 

  v6 = entNum;
  if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 107, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( 2048 ) )", "entNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entNum, 2048) )
    __debugbreak();
  v8 = &g_entities[v6];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = v8->s.eType;
  if ( ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM )
  {
    LODWORD(v14) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 111, ASSERT_TYPE_ASSERT, "( !BG_IsCharacterEntity( &ent->s ) )", "BgHandler::GetWorldTagMatrix cannot be used with character entities due to multi-threading concerns. Entity num: %d", v14) )
      __debugbreak();
  }
  WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(v8, tagName, &outTagMata);
  v11 = WorldTagMatrix == 1;
  if ( WorldTagMatrix == 1 )
  {
    v12 = outTagMata.m[3].v[1];
    outOrigin->v[0] = outTagMata.m[3].v[0];
    outOrigin->v[2] = outTagMata.m[3].v[2];
    outOrigin->v[1] = v12;
    MatrixCopy33((const tmat33_t<vec3_t> *)&outTagMata, outTagMat);
  }
  return v11;
}

/*
==============
GHandler::GetPlayerTraceInfo
==============
*/
GPlayerTraceInfo *GHandler::GetPlayerTraceInfo(GHandler *this, int playerNumber)
{
  return GPlayerTraceInfo::GetPlayerTraceInfo(playerNumber);
}

/*
==============
GHandler::GetWeaponMap
==============
*/

GWeaponMap *__fastcall GHandler::GetWeaponMap(GHandler *this)
{
  return GWeaponMap::GetInstance();
}

/*
==============
GHandler::GetPlayerASM
==============
*/

GPlayer_Asm *__fastcall GHandler::GetPlayerASM(GHandler *this)
{
  return GPlayer_Asm::Singleton();
}

/*
==============
GHandler::GetVehicleSystem
==============
*/
GVehicles *GHandler::GetVehicleSystem(GHandler *this)
{
  GVehicles *result; 

  result = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    return GVehicles::ms_gVehiclesSystem;
  }
  return result;
}

/*
==============
GHandler::GetVehicleSystemConst
==============
*/
GVehicles *GHandler::GetVehicleSystemConst(GHandler *this)
{
  GVehicles *result; 

  result = GVehicles::ms_gVehiclesSystem;
  if ( !GVehicles::ms_gVehiclesSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    return GVehicles::ms_gVehiclesSystem;
  }
  return result;
}

/*
==============
GHandler::PlayerTurret
==============
*/
Weapon *GHandler::PlayerTurret(GHandler *this, const playerState_s *ps)
{
  const entityState_t *v2; 
  GWeaponMap *Instance; 

  v2 = this->PlayerTurretEnt(this, ps);
  if ( !v2 )
    return &NULL_WEAPON;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  return (Weapon *)BgWeaponMap::GetWeapon(Instance, v2->weaponHandle);
}

/*
==============
GHandler::PlayerTurretEnt
==============
*/
gentity_s *GHandler::PlayerTurretEnt(GHandler *this, const playerState_s *ps)
{
  __int16 remoteTurretEnt; 
  __int64 v4; 
  __int64 v6; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
    {
      if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x18u) )
        return 0i64;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 153, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      remoteTurretEnt = ps->remoteTurretEnt;
      goto LABEL_15;
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
  }
  if ( ps->viewlocked == PLAYERVIEWLOCK_NONE )
    return 0i64;
  remoteTurretEnt = ps->viewlocked_entNum;
LABEL_15:
  v4 = remoteTurretEnt;
  if ( remoteTurretEnt == 2047 )
    return 0i64;
  if ( (unsigned int)remoteTurretEnt >= 0x800 )
  {
    LODWORD(v6) = remoteTurretEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 162, ASSERT_TYPE_ASSERT, "(unsigned)( turretEntNum ) < (unsigned)( ( 2048 ) )", "turretEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  return &level.gentities[v4];
}

/*
==============
GHandler::GetGroundPersistentState
==============
*/
BgGroundPersistentState *GHandler::GetGroundPersistentState(GHandler *this, const playerState_s *ps)
{
  gentity_s *GEntity; 
  gclient_s *client; 
  gagent_s *agent; 

  GEntity = G_GetGEntity(ps->clientNum);
  if ( !GEntity )
    return 0i64;
  client = GEntity->client;
  if ( client )
    return &client->playerGroundPersistent;
  agent = GEntity->agent;
  if ( agent )
    return &agent->playerGroundPersistent;
  else
    return 0i64;
}

/*
==============
GHandler::BotStuckCheck
==============
*/
void GHandler::BotStuckCheck(GHandler *this, const vec3_t *startVel, const vec3_t *startOrigin, const playerState_s *ps, float frametime, bool body)
{
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  ((void (__fastcall *)(GUtils *, const vec3_t *, const vec3_t *, const playerState_s *))GUtils::ms_gUtils->BotStuckCheck)(GUtils::ms_gUtils, startVel, startOrigin, ps);
}

/*
==============
GHandler::BotSetAlmostGroundPlane
==============
*/
void GHandler::BotSetAlmostGroundPlane(GHandler *this, const playerState_s *ps, bool newValue)
{
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->BotSetAlmostGroundPlane(GUtils::ms_gUtils, ps, newValue);
}

/*
==============
GHandler::RequiresScriptMoverLadderChecks
==============
*/
char GHandler::RequiresScriptMoverLadderChecks(GHandler *this)
{
  unsigned int IndexByName; 
  OmnvarData *Data; 

  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)260) )
    return 1;
  IndexByName = BG_Omnvar_GetIndexByName("requires_scriptmover_ladder_checks");
  if ( IndexByName == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 216, ASSERT_TYPE_ASSERT, "( omnvarIdx != ((uint)-1) )", (const char *)&queryFormat, "omnvarIdx != OMNVAR_NONE") )
    __debugbreak();
  Data = G_Omnvar_GetData(IndexByName, -1, NULL);
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 218, ASSERT_TYPE_ASSERT, "( omnvarData )", (const char *)&queryFormat, "omnvarData") )
    __debugbreak();
  return Data->current.enabled;
}

/*
==============
GHandler::PlayerWeaponAnims
==============
*/
PlayerWeaponAnimArrays *GHandler::PlayerWeaponAnims(GHandler *this, playerState_s *ps)
{
  gentity_s *GEntity; 
  gagent_s *agent; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 230, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GEntity = G_GetGEntity(ps->clientNum);
  agent = GEntity->agent;
  if ( agent )
    return &agent->weaponAnimArrays;
  if ( !GEntity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 240, ASSERT_TYPE_ASSERT, "( entity->client != nullptr )", (const char *)&queryFormat, "entity->client != nullptr") )
    __debugbreak();
  return &GEntity->client->weaponAnimArrays;
}

/*
==============
GHandler::PlayerWeaponAnimsConst
==============
*/
PlayerWeaponAnimArrays *GHandler::PlayerWeaponAnimsConst(GHandler *this, const playerState_s *ps)
{
  gentity_s *GEntity; 
  gagent_s *agent; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 252, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GEntity = G_GetGEntity(ps->clientNum);
  agent = GEntity->agent;
  if ( agent )
    return &agent->weaponAnimArrays;
  if ( !GEntity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 262, ASSERT_TYPE_ASSERT, "( entity->client != nullptr )", (const char *)&queryFormat, "entity->client != nullptr") )
    __debugbreak();
  return &GEntity->client->weaponAnimArrays;
}

/*
==============
GHandler::PlayerWeaponOffsetPatternCache
==============
*/
WeaponOffsetPatternCache *GHandler::PlayerWeaponOffsetPatternCache(GHandler *this, const playerState_s *ps, const int patternIndex)
{
  __int64 v3; 
  gentity_s *GEntity; 
  gentity_s *v6; 
  gagent_s *agent; 
  __int64 v9; 

  v3 = patternIndex;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 272, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( patternIndex ) < (unsigned)( 12 )", "patternIndex doesn't index MAX_WEAPON_OFFSET_PATTERNS\n\t%i not in [0, %i)", v9, 12) )
      __debugbreak();
  }
  GEntity = G_GetGEntity(ps->clientNum);
  v6 = GEntity;
  agent = GEntity->agent;
  if ( agent )
    return &agent->patternCacheList[v3];
  if ( !GEntity->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 283, ASSERT_TYPE_ASSERT, "( entity->client )", (const char *)&queryFormat, "entity->client") )
    __debugbreak();
  return &v6->client->patternCacheList[v3];
}

/*
==============
GHandler::GetEntityTeam
==============
*/
void GHandler::GetEntityTeam(GHandler *this, team_t *teamOut, unsigned int entityNum, unsigned int *entityNumOut)
{
  __int64 v4; 
  GUtils *v8; 
  gentity_s *v9; 
  __int16 otherEntityNum; 
  unsigned __int8 playerIndex; 
  GVehicles *VehicleSystem; 
  __int16 v13; 
  __int64 v14; 

  v4 = entityNum;
  if ( entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 312, ASSERT_TYPE_ASSERT, "( entityNum < ( 2048 ) )", (const char *)&queryFormat, "entityNum < MAX_GENTITIES") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v8 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 316, ASSERT_TYPE_ASSERT, "( utils )", (const char *)&queryFormat, "utils") )
    __debugbreak();
  v9 = &g_entities[v4];
  switch ( v9->s.eType )
  {
    case ET_PLAYER:
    case ET_INVISIBLE:
    case ET_AGENT:
    case ET_ACTOR:
      if ( v9->s.eType == ET_AGENT )
      {
        otherEntityNum = v9->s.otherEntityNum;
        if ( otherEntityNum != 2047 )
          LODWORD(v4) = otherEntityNum;
      }
      *entityNumOut = v4;
      *teamOut = (__int64)v8->GetEntityTeam(v8, v9);
      break;
    case ET_HELICOPTER:
    case ET_PLANE:
    case ET_VEHICLE:
      playerIndex = v9->s.staticState.vehiclePlayer.playerIndex;
      if ( !playerIndex )
      {
        VehicleSystem = GVehicles::GetVehicleSystem();
        *teamOut = (__int64)VehicleSystem->GetTeam(VehicleSystem, &v9->s);
        goto LABEL_22;
      }
      this->GetEntityTeam(this, teamOut, playerIndex - 1, entityNumOut);
      break;
    default:
      v13 = v9->s.otherEntityNum;
      if ( v13 == 2047 || (v14 = (unsigned int)v13, (_DWORD)v14 == (_DWORD)v4) )
      {
        *teamOut = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? TEAM_FOUR : TEAM_ZERO;
LABEL_22:
        *entityNumOut = v4;
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
GHandler::GetPlayerPerks
==============
*/
bool GHandler::GetPlayerPerks(GHandler *this, __int16 entityIndex, bitarray<64> *outPerks)
{
  gentity_s *v5; 
  gclient_s *client; 
  bool result; 
  gagent_s *agent; 

  if ( !outPerks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 380, ASSERT_TYPE_ASSERT, "(outPerks)", (const char *)&queryFormat, "outPerks") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( entityIndex >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    goto LABEL_15;
  v5 = &g_entities[entityIndex];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 390, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = v5->client;
  if ( client )
  {
    outPerks->array[0] = client->sess.cs.perks.array[0];
    outPerks->array[1] = client->sess.cs.perks.array[1];
    return 1;
  }
  agent = v5->agent;
  if ( agent )
  {
    outPerks->array[0] = agent->agentState.perks.array[0];
    outPerks->array[1] = agent->agentState.perks.array[1];
    return 1;
  }
  else
  {
LABEL_15:
    result = 0;
    *outPerks = 0i64;
  }
  return result;
}

/*
==============
GHandler::GetScriptableDimensions
==============
*/
void GHandler::GetScriptableDimensions(GHandler *this, unsigned int scriptableIndex, float *outInitialAngle, vec3_t *outOrigin, Bounds *outBounds)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  const XModel *ScriptableModel; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, outOrigin);
  *outInitialAngle = InstanceCommonContext->anglesInitial.v[1];
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( ScriptableModel )
  {
    *outBounds = ScriptableModel->bounds;
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
GHandler::GetScriptablePartDef
==============
*/
ScriptablePartDef *GHandler::GetScriptablePartDef(GHandler *this, unsigned int scriptableIndex, const scr_string_t partName)
{
  return ScriptableSv_GetPartScriptedDefFromName(scriptableIndex, (const scr_string_t)scr_const.door, 1);
}

/*
==============
GHandler::GetScriptablePhysicsInstanceId
==============
*/
__int64 GHandler::GetScriptablePhysicsInstanceId(GHandler *this, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v4; 
  unsigned int serverInstanceCount; 

  v2 = scriptableIndex;
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v4, serverInstanceCount) )
      __debugbreak();
  }
  return g_scriptableSv_instanceContexts[v2].collisionContext.scriptableCollisionMain;
}

/*
==============
GHandler::GetPlayerWeaponHeat
==============
*/
WeaponHeat *GHandler::GetPlayerWeaponHeat(GHandler *this, const playerState_s *ps, const Weapon *r_weapon, PlayerHandIndex hand)
{
  __int64 v4; 
  GWeaponMap *Instance; 
  int EquippedWeaponIndex; 
  __int64 v9; 
  gentity_s *GEntity; 
  __int64 v12; 
  gentity_s *v13; 
  __int64 v14; 
  __int64 v16; 
  int v17; 

  v4 = hand;
  if ( (unsigned int)hand >= NUM_WEAPON_HANDS )
  {
    v17 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 446, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", hand, v17) )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  EquippedWeaponIndex = BG_GetEquippedWeaponIndex(Instance, ps, r_weapon);
  v9 = EquippedWeaponIndex;
  if ( EquippedWeaponIndex < 0 )
    return 0i64;
  GEntity = G_GetGEntity(ps->clientNum);
  v12 = 0i64;
  v13 = GEntity;
  if ( GEntity->client )
  {
    if ( (unsigned int)v9 >= 0xF )
    {
      LODWORD(v16) = 15;
      LODWORD(v14) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 458, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( entity->client->weaponHeat ) ) + 0 ) )", "weaponIndex doesn't index ARRAY_COUNT( entity->client->weaponHeat )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( entity->client->weaponHeat[0] ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( entity->client->weaponHeat[0] )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    v12 = (__int64)&v13->client->weaponHeat[v9][v4];
  }
  else
  {
    if ( !GEntity->agent )
      goto LABEL_23;
    if ( (unsigned int)v9 >= 0xF )
    {
      LODWORD(v16) = 15;
      LODWORD(v14) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 464, ASSERT_TYPE_ASSERT, "(unsigned)( weaponIndex ) < (unsigned)( ( sizeof( *array_counter( entity->agent->weaponHeat ) ) + 0 ) )", "weaponIndex doesn't index ARRAY_COUNT( entity->agent->weaponHeat )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v14) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 465, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( ( sizeof( *array_counter( entity->agent->weaponHeat[0] ) ) + 0 ) )", "hand doesn't index ARRAY_COUNT( entity->agent->weaponHeat[0] )\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    v12 = (__int64)&v13->agent->weaponHeat[v9][v4];
  }
  if ( !v12 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 469, ASSERT_TYPE_ASSERT, "(weaponHeat != nullptr)", (const char *)&queryFormat, "weaponHeat != nullptr") )
      __debugbreak();
  }
  return (WeaponHeat *)v12;
}

/*
==============
GHandler::PlayerWeaponHeatIterate
==============
*/
void GHandler::PlayerWeaponHeatIterate(GHandler *this, const playerState_s *ps, void (*weaponHeatCb)(WeaponHeat *const, const Weapon *, const int))
{
  gentity_s *GEntity; 
  unsigned __int64 i; 
  GWeaponMap *Instance; 
  const Weapon *Weapon; 
  unsigned __int64 j; 
  WeaponHeat *v10; 
  gagent_s *agent; 

  if ( !weaponHeatCb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 476, ASSERT_TYPE_ASSERT, "(weaponHeatCb)", (const char *)&queryFormat, "weaponHeatCb") )
    __debugbreak();
  GEntity = G_GetGEntity(ps->clientNum);
  for ( i = 0i64; i < 0xF; ++i )
  {
    if ( i + 0x80000000 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)i, "unsigned", i) )
      __debugbreak();
    Instance = GWeaponMap::GetInstance();
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, ps->weaponsEquipped[(int)i]);
    for ( j = 0i64; j < 2; ++j )
    {
      v10 = NULL;
      if ( GEntity->client )
      {
        v10 = &GEntity->client->weaponHeat[i][j];
        goto LABEL_16;
      }
      agent = GEntity->agent;
      if ( agent )
      {
        v10 = &agent->weaponHeat[i][j];
LABEL_16:
        if ( v10 )
          goto LABEL_19;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 499, ASSERT_TYPE_ASSERT, "(weaponHeat != nullptr)", (const char *)&queryFormat, "weaponHeat != nullptr") )
        __debugbreak();
LABEL_19:
      weaponHeatCb(v10, Weapon, ps->serverTime);
    }
  }
}

/*
==============
GHandler::GetImpulseFieldCount
==============
*/
int GHandler::GetImpulseFieldCount(GHandler *this, LocalClientNum_t localClientNum)
{
  return G_MainMP_GetImpulseFieldEntityCount(localClientNum);
}

/*
==============
GHandler::GetEntIndexByImpulseFieldIndex
==============
*/
int GHandler::GetEntIndexByImpulseFieldIndex(GHandler *this, LocalClientNum_t localClientNum, int impulseFieldIndex)
{
  return G_MainMP_GetEntIndexByImpulseFieldIndex(localClientNum, impulseFieldIndex);
}

/*
==============
GHandler::IsPointInVolume
==============
*/
int GHandler::IsPointInVolume(GHandler *this, const vec3_t *point, int entNum)
{
  __int64 v3; 
  unsigned int Instance; 

  v3 = entNum;
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 632, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES") )
    __debugbreak();
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v3);
  return PhysicsQuery_LegacyEntityContactPoint(PHYSICS_WORLD_ID_FIRST, point, Instance, &g_entities[v3]);
}

/*
==============
GHandler::FindBestConeTarget
==============
*/
__int64 GHandler::FindBestConeTarget(GHandler *this, LocalClientNum_t localClientNum, int attackerentIndex, const vec3_t *origin, const vec3_t *dir, float range, float angle, unsigned int hitMask, int time, int *outentIndex, ConeTargetHitInfo *outHitInfo)
{
  __int64 v12; 
  gentity_s *v13; 
  GTargetEvaluator *TargetEvaluator; 
  unsigned __int8 v15; 
  ConeTargetHitResults *HitResults; 
  ConeTargetHitInfo *FirstVisibleHit; 
  gentity_s *Target; 
  GAssistTarget ptr[20]; 

  v12 = attackerentIndex;
  if ( !outentIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 678, ASSERT_TYPE_ASSERT, "( outentIndex )", (const char *)&queryFormat, "outentIndex") )
    __debugbreak();
  if ( !outHitInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 679, ASSERT_TYPE_ASSERT, "( outHitInfo )", (const char *)&queryFormat, "outHitInfo") )
    __debugbreak();
  v13 = &g_entities[v12];
  if ( !GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 188, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem )", (const char *)&queryFormat, "ms_gBulletSystem") )
    __debugbreak();
  TargetEvaluator = GBullet::GetTargetEvaluator(TARGET_ASSISTTYPPE_CONE);
  if ( !TargetEvaluator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 684, ASSERT_TYPE_ASSERT, "( targetEvaluator )", (const char *)&queryFormat, "targetEvaluator") )
    __debugbreak();
  `eh vector constructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::GAssistTarget, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  if ( ((__int64 (__fastcall *)(GTargetEvaluator *, Weapon *, _QWORD, gentity_s *, const vec3_t *, const vec3_t *, _DWORD, _DWORD, int, _BYTE, unsigned int, int, _BYTE, GAssistTarget *, __int64))TargetEvaluator->FindTargets)(TargetEvaluator, &NULL_WEAPON, 0i64, v13, origin, dir, LODWORD(range), LODWORD(angle), 1, 0, hitMask, time, 0, ptr, -2i64) > 0 )
  {
    HitResults = ConeTargetInfo::GetHitResults(ptr);
    FirstVisibleHit = ConeTargetHitResults::GetFirstVisibleHit(HitResults);
    if ( !FirstVisibleHit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 694, ASSERT_TYPE_ASSERT, "( hitInfo != 0 )", (const char *)&queryFormat, "hitInfo != NULL") )
      __debugbreak();
    Target = GAssistTarget::GetTarget(ptr);
    if ( !Target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 697, ASSERT_TYPE_ASSERT, "( targetEnt )", (const char *)&queryFormat, "targetEnt") )
      __debugbreak();
    *outentIndex = Target->s.number;
    *outHitInfo = *FirstVisibleHit;
    v15 = 1;
  }
  else
  {
    v15 = 0;
  }
  `eh vector destructor iterator'(ptr, 0x350ui64, 0x14ui64, (void (__fastcall *)(void *))GAssistTarget::~GAssistTarget);
  return v15;
}

/*
==============
GHandler::GetOmnvarDataAtPmoveTime
==============
*/
void GHandler::GetOmnvarDataAtPmoveTime(GHandler *this, unsigned int clientEntNum, unsigned int omnInx, int pmoveTime, OmnvarData *outData)
{
  gclient_s *client; 

  if ( !outData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 708, ASSERT_TYPE_ASSERT, "(outData)", (const char *)&queryFormat, "outData") )
    __debugbreak();
  client = G_GetGEntity(clientEntNum)->client;
  if ( client )
    BG_Omnvar_GetDataAtPmoveTime(&client->omnvarPmoveData, omnInx, pmoveTime, outData);
  else
    *outData = *G_Omnvar_GetData(omnInx, -1, NULL);
}

/*
==============
GHandler::GetPhysicsWorldId
==============
*/
__int64 GHandler::GetPhysicsWorldId(GHandler *this)
{
  return 0i64;
}

/*
==============
GHandler::GetDetailWorldId
==============
*/
__int64 GHandler::GetDetailWorldId(GHandler *this)
{
  return 1i64;
}

/*
==============
GHandler::AcquirePhysicsReadLock
==============
*/
void GHandler::AcquirePhysicsReadLock(GHandler *this, Physics_WorldId worldId)
{
  ;
}

/*
==============
GHandler::ReleasePhysicsReadLock
==============
*/
void GHandler::ReleasePhysicsReadLock(GHandler *this, Physics_WorldId worldId)
{
  ;
}

/*
==============
GHandler::IsEntAttachedToVehicle
==============
*/
char GHandler::IsEntAttachedToVehicle(GHandler *this, int entNum, int *outVehicleEntNum)
{
  __int64 v3; 
  gentity_s *v5; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = entNum;
  if ( entNum >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 838, ASSERT_TYPE_ASSERT, "(entNum < ( 2048 ))", (const char *)&queryFormat, "entNum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[v3];
  if ( !v5 )
    return 0;
  *outVehicleEntNum = v3;
  while ( v5->handler != 24 )
  {
    number = v5->parent.number;
    if ( number )
    {
      v8 = number;
      v9 = number - 1;
      if ( v9 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v10 = v8 - 1;
      if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v10] )
      {
        LODWORD(v19) = v5->parent.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
          __debugbreak();
      }
      v11 = v5->parent.number;
      if ( v11 )
      {
        if ( (unsigned int)v11 - 1 >= 0x7FF )
        {
          LODWORD(v19) = 2047;
          LODWORD(v18) = v11 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 231, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v12 = v5->parent.number;
        if ( (unsigned int)(v12 - 1) >= 0x800 )
        {
          LODWORD(v19) = 2048;
          LODWORD(v18) = v12 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v13 = v12 - 1;
        if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v13] )
        {
          LODWORD(v19) = v5->parent.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 232, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v19) )
            __debugbreak();
        }
        *outVehicleEntNum = (__int16)(v5->parent.number - 1);
        v14 = v5->parent.number;
        if ( (unsigned int)(v14 - 1) >= 0x7FF )
        {
          LODWORD(v19) = 2047;
          LODWORD(v18) = v14 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        v15 = v5->parent.number;
        if ( (unsigned int)(v15 - 1) >= 0x800 )
        {
          LODWORD(v19) = 2048;
          LODWORD(v18) = v15 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v16 = v15 - 1;
        if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v16] )
        {
          LODWORD(v19) = v5->parent.number - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v19) )
            __debugbreak();
        }
        v17 = v5->parent.number;
        v5 = &g_entities[v17 - 1];
        if ( &g_entities[v17] != (gentity_s *)1456 )
          continue;
      }
    }
    *outVehicleEntNum = 2047;
    return 0;
  }
  return 1;
}

/*
==============
GHandler::DebugLineAll
==============
*/
void GHandler::DebugLineAll(GHandler *this, const vec3_t *start, const vec3_t *end, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  G_DebugLineWithDuration(start, end, colorServer, depthTest, duration);
}

/*
==============
GHandler::DebugSphereAll
==============
*/
void GHandler::DebugSphereAll(GHandler *this, const vec3_t *center, float radius, const vec4_t *colorServer, const vec4_t *colorClient, int depthTest, int duration)
{
  G_DebugSphere(center, radius, colorServer, depthTest, duration);
}

/*
==============
GHandler::DebugAxisAll
==============
*/
void GHandler::DebugAxisAll(GHandler *this, const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
{
  G_DebugAxis(axes, pos, length, depthTest, duration);
}

/*
==============
GHandler::DebugStringAll
==============
*/
void GHandler::DebugStringAll(GHandler *this, const vec3_t *point, const vec4_t *color, float scale, const char *text, int duration)
{
  G_DebugString(point, color, scale, text, duration);
}

/*
==============
GHandler::OnMountCancel
==============
*/
void GHandler::OnMountCancel(GHandler *this, int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  BG_ContextMount_BBPrintCancel(clientIndex, startTime, endTime, type, pos, angles);
}

/*
==============
GHandler::GetVehicleDef
==============
*/
const VehicleDef *GHandler::GetVehicleDef(GHandler *this, const playerState_s *ps)
{
  return G_Vehicle_GetDef(ps);
}

/*
==============
GHandler::GetEdgeQueryCache
==============
*/
EdgeQueryCache *GHandler::GetEdgeQueryCache(GHandler *this, int entityIndex)
{
  __int64 v2; 
  int v4; 
  int v5; 

  v2 = entityIndex;
  if ( entityIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 790, ASSERT_TYPE_ASSERT, "(entityIndex < ( 2048 ))", (const char *)&queryFormat, "entityIndex < MAX_GENTITIES") )
    __debugbreak();
  if ( (int)v2 >= 248 )
  {
    v5 = 248;
    v4 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 793, ASSERT_TYPE_ASSERT, "( entityIndex ) < ( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "%s < %s\n\t%i, %i", "entityIndex", "MAX_CHARACTERS_STATIC", v4, v5) )
      __debugbreak();
  }
  return &s_edgeQueryCache[v2];
}

/*
==============
GHandler::ProfBeginAnimUpdate
==============
*/
void GHandler::ProfBeginAnimUpdate(GHandler *this)
{
  SV_Profile_BeginEvent(SVPROF_CLIENT_UPDATE_ANIM);
}

/*
==============
GHandler::ProfEndAnimUpdate
==============
*/
void GHandler::ProfEndAnimUpdate(GHandler *this)
{
  SV_Profile_EndEvent(SVPROF_CLIENT_UPDATE_ANIM);
}

/*
==============
GHandler::IsServer
==============
*/
char GHandler::IsServer(GHandler *this)
{
  return 1;
}

/*
==============
GHandler::SetEntityOrigin
==============
*/
void GHandler::SetEntityOrigin(GHandler *this, int entIndex, const vec3_t *origin)
{
  __int64 v3; 

  v3 = entIndex;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetEntityOrigin");
  if ( (unsigned int)v3 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 650, ASSERT_TYPE_ASSERT, "(entIndex >= 0 && entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex >= 0 && entIndex < MAX_GENTITIES") )
    __debugbreak();
  G_SetOrigin(&g_entities[v3], origin, 1, 1);
  Sys_ProfEndNamedEvent();
}

/*
==============
GHandler::SetEntityAngles
==============
*/
void GHandler::SetEntityAngles(GHandler *this, int entIndex, const vec3_t *angles)
{
  __int64 v3; 

  v3 = entIndex;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "SetEntityAngles");
  if ( (unsigned int)v3 > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 666, ASSERT_TYPE_ASSERT, "(entIndex >= 0 && entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex >= 0 && entIndex < MAX_GENTITIES") )
    __debugbreak();
  G_SetAngle(&g_entities[v3], angles, 1, 1);
  Sys_ProfEndNamedEvent();
}

/*
==============
GHandler::EntUnlink
==============
*/
void GHandler::EntUnlink(GHandler *this, LocalClientNum_t localClientNum, int entIndex)
{
  __int64 v3; 

  v3 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 521, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  G_EntUnlink(&g_entities[v3]);
}

/*
==============
GHandler::GetParentAxis
==============
*/
char GHandler::GetParentAxis(GHandler *this, int entNum, tmat43_t<vec3_t> *outParentAxis)
{
  __int64 v3; 
  gentity_s *v5; 

  v3 = entNum;
  if ( entNum >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 531, ASSERT_TYPE_ASSERT, "(entNum < ( 2048 ))", (const char *)&queryFormat, "entNum < MAX_GENTITIES") )
    __debugbreak();
  v5 = &g_entities[v3];
  if ( !v5->tagInfo )
    return 0;
  G_CalcTagParentAxis(v5, outParentAxis);
  return 1;
}

/*
==============
GHandler::GetGameTypeQuick
==============
*/
__int64 GHandler::GetGameTypeQuick(GHandler *this)
{
  return (unsigned __int8)level.gameTypeQuick[0];
}

/*
==============
GHandler::GetLootTable
==============
*/

const BG_SpawnGroup_Loot_Table *__fastcall GHandler::GetLootTable(GHandler *this)
{
  return ScriptableSv_GetLootTable();
}

/*
==============
GHandler::InCameraOrTransition
==============
*/
bool GHandler::InCameraOrTransition(GHandler *this, int clientNum)
{
  bool result; 

  if ( G_IsCameraActive(clientNum) )
    return 1;
  result = G_IsCameraTransitionActive(clientNum);
  if ( result )
    return 1;
  return result;
}

/*
==============
GHandler::GetEntityState
==============
*/
gentity_s *GHandler::GetEntityState(GHandler *this, int entIndex)
{
  __int64 v2; 

  v2 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 192, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  return &g_entities[v2];
}

/*
==============
GHandler::GetEntityVelocity
==============
*/
__int64 GHandler::GetEntityVelocity(GHandler *this, int entIndex, vec3_t *outVelocity)
{
  __int64 v3; 
  gentity_s *v5; 

  v3 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 71, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  v5 = g_entities;
  outVelocity->v[0] = g_entities[v3].s.lerp.pos.trDelta.v[0];
  outVelocity->v[1] = v5[v3].s.lerp.pos.trDelta.v[1];
  outVelocity->v[2] = v5[v3].s.lerp.pos.trDelta.v[2];
  return 1i64;
}

/*
==============
GHandler::GetEntityWorldTagPosition
==============
*/
int GHandler::GetEntityWorldTagPosition(GHandler *this, int entIndex, scr_string_t tagName, vec3_t *outPosition)
{
  __int64 v4; 
  int v9; 

  v4 = entIndex;
  if ( (unsigned int)entIndex >= 0x800 )
  {
    v9 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( entIndex ) < (unsigned)( ( 2048 ) )", "entIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entIndex, v9) )
      __debugbreak();
  }
  return G_Utils_DObjGetWorldTagPos(&g_entities[v4], tagName, outPosition);
}

/*
==============
GHandler::GetPlayerTeam
==============
*/
_BOOL8 GHandler::GetPlayerTeam(GHandler *this, int entIndex, team_t *outTeam)
{
  __int64 v3; 
  gentity_s *v5; 
  playerState_s *EntityPlayerState; 

  v3 = entIndex;
  if ( entIndex >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 293, ASSERT_TYPE_ASSERT, "(entIndex < ( 2048 ))", (const char *)&queryFormat, "entIndex < MAX_GENTITIES") )
    __debugbreak();
  if ( !outTeam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_handler.cpp", 294, ASSERT_TYPE_ASSERT, "(outTeam)", (const char *)&queryFormat, "outTeam") )
    __debugbreak();
  v5 = &g_entities[v3];
  EntityPlayerState = G_GetEntityPlayerState(v5);
  if ( EntityPlayerState )
  {
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    *outTeam = (__int64)GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, v5);
  }
  return EntityPlayerState != NULL;
}

/*
==============
GHandler::getHandler
==============
*/
GHandler *GHandler::getHandler()
{
  return &g_GHandler;
}

