/*
==============
G_Vehicle_UpdateBody
==============
*/

void __fastcall G_Vehicle_UpdateBody(Vehicle *veh)
{
  ?G_Vehicle_UpdateBody@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
GVehicles::GetUsableInfo
==============
*/

void __fastcall GVehicles::GetUsableInfo(GVehicles *this, const gentity_s *ent, unsigned __int8 *outUsableScriptablePartCount, const VehicleUsableParts **outUsableScriptableParts)
{
  ?GetUsableInfo@GVehicles@@QEBAXPEBUgentity_s@@PEAEPEAPEBUVehicleUsableParts@@@Z(this, ent, outUsableScriptablePartCount, outUsableScriptableParts);
}

/*
==============
G_Vehicle_GetDef
==============
*/

const VehicleDef *__fastcall G_Vehicle_GetDef(const playerState_s *ps)
{
  return ?G_Vehicle_GetDef@@YAPEBUVehicleDef@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
G_Vehicle_NotifyDestroySuspended
==============
*/

void __fastcall G_Vehicle_NotifyDestroySuspended(gentity_s *ent)
{
  ?G_Vehicle_NotifyDestroySuspended@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_IsSuspended
==============
*/

bool __fastcall G_Vehicle_IsSuspended(const gentity_s *ent)
{
  return ?G_Vehicle_IsSuspended@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_GetPlayer
==============
*/

gentity_s *__fastcall G_Vehicle_GetPlayer(gentity_s *vehicleEnt)
{
  return ?G_Vehicle_GetPlayer@@YAPEAUgentity_s@@PEAU1@@Z(vehicleEnt);
}

/*
==============
G_Vehicle_Knockback
==============
*/

void __fastcall G_Vehicle_Knockback(Vehicle *veh, const vec3_t *dir, meansOfDeath_t mod, float forceScale, const vec3_t *origin)
{
  ?G_Vehicle_Knockback@@YAXPEAUVehicle@@AEBTvec3_t@@W4meansOfDeath_t@@MPEBT2@@Z(veh, dir, mod, forceScale, origin);
}

/*
==============
G_Vehicle_UpdatePhysicsLinkEntity
==============
*/

void __fastcall G_Vehicle_UpdatePhysicsLinkEntity(gentity_s *pSelf)
{
  ?G_Vehicle_UpdatePhysicsLinkEntity@@YAXPEAUgentity_s@@@Z(pSelf);
}

/*
==============
GVehicles::UpdateSpaceshipAnimscriptedMove
==============
*/

bool __fastcall GVehicles::UpdateSpaceshipAnimscriptedMove(GVehicles *this, Vehicle *veh)
{
  return ?UpdateSpaceshipAnimscriptedMove@GVehicles@@UEBA_NPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_Vehicle_UpdatePathScript
==============
*/

void __fastcall G_Vehicle_UpdatePathScript(const Vehicle *veh, float prevSpeed, bool waitNodeHit)
{
  ?G_Vehicle_UpdatePathScript@@YAXPEBUVehicle@@M_N@Z(veh, prevSpeed, waitNodeHit);
}

/*
==============
G_Vehicle_GetNetcodeTypeForOwner
==============
*/

VehiclePhysicsNetcodeType __fastcall G_Vehicle_GetNetcodeTypeForOwner(const BgVehiclePhysics *vehObj, const int ownerClientNum)
{
  return ?G_Vehicle_GetNetcodeTypeForOwner@@YA?AW4VehiclePhysicsNetcodeType@@PEBVBgVehiclePhysics@@H@Z(vehObj, ownerClientNum);
}

/*
==============
G_Vehicle_SlideMove
==============
*/

int __fastcall G_Vehicle_SlideMove(gentity_s *ent, int gravity, float frameTime, unsigned int *bumpEntityNum)
{
  return ?G_Vehicle_SlideMove@@YAHPEAUgentity_s@@HMPEAI@Z(ent, gravity, frameTime, bumpEntityNum);
}

/*
==============
G_Vehicle_IsRemoteDrive
==============
*/

int __fastcall G_Vehicle_IsRemoteDrive(const gentity_s *vehEnt)
{
  return ?G_Vehicle_IsRemoteDrive@@YAHPEBUgentity_s@@@Z(vehEnt);
}

/*
==============
G_Vehicle_CanPlayerEnterVehicle
==============
*/

bool __fastcall G_Vehicle_CanPlayerEnterVehicle(const gentity_s *player)
{
  return ?G_Vehicle_CanPlayerEnterVehicle@@YA_NPEBUgentity_s@@@Z(player);
}

/*
==============
G_Vehicle_GetServerDef
==============
*/

const VehicleDef *__fastcall G_Vehicle_GetServerDef(unsigned int vehDefIndex)
{
  return ?G_Vehicle_GetServerDef@@YAPEBUVehicleDef@@I@Z(vehDefIndex);
}

/*
==============
G_Vehicle_Die
==============
*/

void __fastcall G_Vehicle_Die(gentity_s *pSelf, const gentity_s *pInflictor, gentity_s *pAttacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *dir, const hitLocation_t hitLoc, int psTimeOffset)
{
  ?G_Vehicle_Die@@YAXPEAUgentity_s@@PEBU1@0HHHAEBUWeapon@@_NPEBTvec3_t@@W4hitLocation_t@@H@Z(pSelf, pInflictor, pAttacker, damage, damageFlags, mod, r_weapon, isAlternate, dir, hitLoc, psTimeOffset);
}

/*
==============
G_Vehicle_UpdatePlayerControlledWeapon
==============
*/

void __fastcall G_Vehicle_UpdatePlayerControlledWeapon(gentity_s *ent)
{
  ?G_Vehicle_UpdatePlayerControlledWeapon@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_PlayerRemoteControlOff
==============
*/

void __fastcall G_Vehicle_PlayerRemoteControlOff(gentity_s *vehEnt, gentity_s *player)
{
  ?G_Vehicle_PlayerRemoteControlOff@@YAXPEAUgentity_s@@0@Z(vehEnt, player);
}

/*
==============
G_Vehicle_UpdateDefaultMove_Physics
==============
*/

void __fastcall G_Vehicle_UpdateDefaultMove_Physics(Vehicle *veh)
{
  ?G_Vehicle_UpdateDefaultMove_Physics@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
GVehicles::GetLocalClientNum
==============
*/

LocalClientNum_t __fastcall GVehicles::GetLocalClientNum(GVehicles *this)
{
  return ?GetLocalClientNum@GVehicles@@UEBA?AW4LocalClientNum_t@@XZ(this);
}

/*
==============
G_Vehicle_UpdatePathSpeed
==============
*/

void __fastcall G_Vehicle_UpdatePathSpeed(Vehicle *veh)
{
  ?G_Vehicle_UpdatePathSpeed@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_VehicleTraceCapsule
==============
*/

void __fastcall G_VehicleTraceCapsule(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask)
{
  ?G_VehicleTraceCapsule@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HH@Z(worldId, results, start, end, bounds, skipEntity, contentMask);
}

/*
==============
G_Vehicle_IsPlayerProtected
==============
*/

bool __fastcall G_Vehicle_IsPlayerProtected(const gentity_s *player)
{
  return ?G_Vehicle_IsPlayerProtected@@YA_NPEBUgentity_s@@@Z(player);
}

/*
==============
GVehicles::BgIsDobjValidForVehicle
==============
*/

bool __fastcall GVehicles::BgIsDobjValidForVehicle(GVehicles *this, const DObj *dobj)
{
  return ?BgIsDobjValidForVehicle@GVehicles@@UEBA_NPEBUDObj@@@Z(this, dobj);
}

/*
==============
GVehicles::GetTeam
==============
*/

team_t __fastcall GVehicles::GetTeam(GVehicles *this, const entityState_t *es)
{
  return ?GetTeam@GVehicles@@UEBA?AW4team_t@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
G_Vehicle_TransformInputCamRelative
==============
*/

void __fastcall G_Vehicle_TransformInputCamRelative(const vec3_t *viewAngles, const vec3_t *vehicleAngles, const vec3_t *input, vec3_t *output)
{
  ?G_Vehicle_TransformInputCamRelative@@YAXAEBTvec3_t@@00AEAT1@@Z(viewAngles, vehicleAngles, input, output);
}

/*
==============
G_Vehicle_ValidateLinkedOwner
==============
*/

bool __fastcall G_Vehicle_ValidateLinkedOwner(const gentity_s *vehicle, const gentity_s *vehicleOwner)
{
  return ?G_Vehicle_ValidateLinkedOwner@@YA_NPEBUgentity_s@@0@Z(vehicle, vehicleOwner);
}

/*
==============
G_Vehicle_TouchEntities
==============
*/

void __fastcall G_Vehicle_TouchEntities(gentity_s *ent)
{
  ?G_Vehicle_TouchEntities@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GVehicles::UpdatePathScriptedMove
==============
*/

void __fastcall GVehicles::UpdatePathScriptedMove(GVehicles *this, Vehicle *veh)
{
  ?UpdatePathScriptedMove@GVehicles@@UEAAXPEAUVehicle@@@Z(this, veh);
}

/*
==============
G_Vehicle_WriteVehiclePhysics
==============
*/

void __fastcall G_Vehicle_WriteVehiclePhysics(MemoryFile *memFile, const Vehicle *veh)
{
  ?G_Vehicle_WriteVehiclePhysics@@YAXPEAUMemoryFile@@PEBUVehicle@@@Z(memFile, veh);
}

/*
==============
GVehicles::GetBone
==============
*/

int __fastcall GVehicles::GetBone(GVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  return ?GetBone@GVehicles@@UEBAHW4LocalClientNum_t@@HW4VehicleBone@@@Z(this, localClientNum, entityIndex, bone);
}

/*
==============
G_Vehicle_SetPosition
==============
*/

void __fastcall G_Vehicle_SetPosition(gentity_s *ent, const vec3_t *origin, const vec3_t *vel, const vec3_t *angles, const bool warpPhysics)
{
  ?G_Vehicle_SetPosition@@YAXPEAUgentity_s@@AEBTvec3_t@@11_N@Z(ent, origin, vel, angles, warpPhysics);
}

/*
==============
G_Vehicle_NotifyTurretFire
==============
*/

void __fastcall G_Vehicle_NotifyTurretFire(Vehicle *veh)
{
  ?G_Vehicle_NotifyTurretFire@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_CanAllocateVehicle
==============
*/

int __fastcall G_Vehicle_CanAllocateVehicle()
{
  return ?G_Vehicle_CanAllocateVehicle@@YAHXZ();
}

/*
==============
GVehicles::PathComputeLookAhead
==============
*/

void __fastcall GVehicles::PathComputeLookAhead(GVehicles *this, const float manualSpeed, const VehiclePathPos *vpp, const float manualTime, vec3_t *outLookAheadOrigin, vec3_t *outLookAheadAngles)
{
  ?PathComputeLookAhead@GVehicles@@UEBAXMPEBUVehiclePathPos@@MAEATvec3_t@@1@Z(this, manualSpeed, vpp, manualTime, outLookAheadOrigin, outLookAheadAngles);
}

/*
==============
GVehicles::SetEntityAnimTree
==============
*/

void __fastcall GVehicles::SetEntityAnimTree(GVehicles *this, const entityState_t *es, XAnim_s *anims)
{
  ?SetEntityAnimTree@GVehicles@@UEAAXPEBUentityState_t@@PEAUXAnim_s@@@Z(this, es, anims);
}

/*
==============
G_Vehicle_UpdateDefaultMove_NonPhysics
==============
*/

void __fastcall G_Vehicle_UpdateDefaultMove_NonPhysics(Vehicle *veh)
{
  ?G_Vehicle_UpdateDefaultMove_NonPhysics@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_FreeEntity
==============
*/

void __fastcall G_Vehicle_FreeEntity(gentity_s *ent)
{
  ?G_Vehicle_FreeEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
GVehicles::PathReset
==============
*/

void __fastcall GVehicles::PathReset(GVehicles *this, VehiclePathPos *vpp)
{
  ?PathReset@GVehicles@@UEBAXPEAUVehiclePathPos@@@Z(this, vpp);
}

/*
==============
GVehicles::GetVehicleOwner
==============
*/

gentity_s *__fastcall GVehicles::GetVehicleOwner(GVehicles *this, const gentity_s *vehicleEnt)
{
  return ?GetVehicleOwner@GVehicles@@UEAAPEAUgentity_s@@PEBU2@@Z(this, vehicleEnt);
}

/*
==============
G_Vehicle_MyChanges
==============
*/

void G_Vehicle_MyChanges(void)
{
  ?G_Vehicle_MyChanges@@YAXXZ();
}

/*
==============
GVehicles::PathComputeLookAhead
==============
*/

void __fastcall GVehicles::PathComputeLookAhead(GVehicles *this, __int16 nodeIdx, const vec3_t *curPos, float lookAheadDist, vec3_t *outLookAhead)
{
  ?PathComputeLookAhead@GVehicles@@UEBAXFAEBTvec3_t@@MAEAT2@@Z(this, nodeIdx, curPos, lookAheadDist, outLookAhead);
}

/*
==============
G_Vehicle_ClipVelocity
==============
*/

void __fastcall G_Vehicle_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  ?G_Vehicle_ClipVelocity@@YAXAEBTvec3_t@@0AEAT1@@Z(in, normal, out);
}

/*
==============
G_Vehicle_PlayerRemoteControl
==============
*/

void __fastcall G_Vehicle_PlayerRemoteControl(gentity_s *vehEnt, gentity_s *player)
{
  ?G_Vehicle_PlayerRemoteControl@@YAXPEAUgentity_s@@0@Z(vehEnt, player);
}

/*
==============
G_Vehicle_DamageScriptable
==============
*/

void __fastcall G_Vehicle_DamageScriptable(gentity_s *vehEnt, unsigned int scriptableIndex, int damage, const vec3_t *damageDir)
{
  ?G_Vehicle_DamageScriptable@@YAXPEAUgentity_s@@IHAEBTvec3_t@@@Z(vehEnt, scriptableIndex, damage, damageDir);
}

/*
==============
G_Vehicle_ValidateAssetContents
==============
*/

void __fastcall G_Vehicle_ValidateAssetContents(gentity_s *ent, const VehicleDef *vehDef)
{
  ?G_Vehicle_ValidateAssetContents@@YAXPEAUgentity_s@@PEBUVehicleDef@@@Z(ent, vehDef);
}

/*
==============
GVehicles::AimTurret
==============
*/

bool __fastcall GVehicles::AimTurret(GVehicles *this, const Weapon *r_turretWeapon, int turretEntityNum)
{
  return ?AimTurret@GVehicles@@UEAA_NAEBUWeapon@@H@Z(this, r_turretWeapon, turretEntityNum);
}

/*
==============
G_GetVehicleBoatPlayerMove
==============
*/

void __fastcall G_GetVehicleBoatPlayerMove(const usercmd_s *cmd, char *move)
{
  ?G_GetVehicleBoatPlayerMove@@YAXPEBUusercmd_s@@QEAD@Z(cmd, move);
}

/*
==============
G_Vehicle_TrophyTestMissile
==============
*/

void __fastcall G_Vehicle_TrophyTestMissile(gentity_s *missileEnt, const vec3_t *start, const vec3_t *end)
{
  ?G_Vehicle_TrophyTestMissile@@YAXPEAUgentity_s@@AEBTvec3_t@@1@Z(missileEnt, start, end);
}

/*
==============
G_Vehicle_DebugCapsule
==============
*/

void __fastcall G_Vehicle_DebugCapsule(const vec3_t *pos, float rad, float height, float r, float g, float b)
{
  ?G_Vehicle_DebugCapsule@@YAXAEBTvec3_t@@MMMMM@Z(pos, rad, height, r, g, b);
}

/*
==============
G_Vehicle_SetEntityStateTeam
==============
*/

void __fastcall G_Vehicle_SetEntityStateTeam(gentity_s *vehicle, team_t team)
{
  ?G_Vehicle_SetEntityStateTeam@@YAXPEAUgentity_s@@W4team_t@@@Z(vehicle, team);
}

/*
==============
G_Vehicle_Touch
==============
*/

void __fastcall G_Vehicle_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  ?G_Vehicle_Touch@@YAXPEAUgentity_s@@0H@Z(pSelf, pOther, bTouched);
}

/*
==============
G_Vehicle_UpdateRemoteDriveTurret
==============
*/

void __fastcall G_Vehicle_UpdateRemoteDriveTurret(gentity_s *vehicleEntity)
{
  ?G_Vehicle_UpdateRemoteDriveTurret@@YAXPEAUgentity_s@@@Z(vehicleEntity);
}

/*
==============
G_Vehicle_UpdateAvoidanceForAllVehicles
==============
*/

void G_Vehicle_UpdateAvoidanceForAllVehicles(void)
{
  ?G_Vehicle_UpdateAvoidanceForAllVehicles@@YAXXZ();
}

/*
==============
G_Vehicle_FreeScriptableUsabilityMasks
==============
*/

void __fastcall G_Vehicle_FreeScriptableUsabilityMasks(const Vehicle *const veh)
{
  ?G_Vehicle_FreeScriptableUsabilityMasks@@YAXQEBUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_UpdateAim
==============
*/

void __fastcall G_Vehicle_UpdateAim(gentity_s *ent)
{
  ?G_Vehicle_UpdateAim@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_FreeReferences
==============
*/

void __fastcall G_Vehicle_FreeReferences(gentity_s *ent)
{
  ?G_Vehicle_FreeReferences@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_Get
==============
*/

Vehicle *__fastcall G_Vehicle_Get(int vehIndex)
{
  return ?G_Vehicle_Get@@YAPEAUVehicle@@H@Z(vehIndex);
}

/*
==============
GVehicles::SetVehicleCorpse
==============
*/

void __fastcall GVehicles::SetVehicleCorpse(GVehicles *this, gentity_s *ent, unsigned int vehDefIndex)
{
  ?SetVehicleCorpse@GVehicles@@UEAAXPEAUgentity_s@@I@Z(this, ent, vehDefIndex);
}

/*
==============
G_Vehicle_CalcImpactDamageForScriptable
==============
*/

int __fastcall G_Vehicle_CalcImpactDamageForScriptable(const Vehicle *veh, unsigned int scriptableIndex, float collDmg, float collSpeed, vec3_t *outDmgDir)
{
  return ?G_Vehicle_CalcImpactDamageForScriptable@@YAHPEBUVehicle@@IMMAEATvec3_t@@@Z(veh, scriptableIndex, collDmg, collSpeed, outDmgDir);
}

/*
==============
G_Vehicle_IsUnusable
==============
*/

gentity_s *__fastcall G_Vehicle_IsUnusable(const gentity_s *player)
{
  return ?G_Vehicle_IsUnusable@@YAPEAUgentity_s@@PEBU1@@Z(player);
}

/*
==============
G_Vehicle_IsTouching
==============
*/

bool __fastcall G_Vehicle_IsTouching(scrContext_t *scrContext, const gentity_s *ent1, const gentity_s *ent2, bool *result)
{
  return ?G_Vehicle_IsTouching@@YA_NAEAUscrContext_t@@PEBUgentity_s@@1AEA_N@Z(scrContext, ent1, ent2, result);
}

/*
==============
G_Vehicle_UpdatePathPosition
==============
*/

bool __fastcall G_Vehicle_UpdatePathPosition(Vehicle *veh)
{
  return ?G_Vehicle_UpdatePathPosition@@YA_NPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_Pain
==============
*/

void __fastcall G_Vehicle_Pain(gentity_s *pSelf, gentity_s *pAttacker, int damage, const vec3_t *point, const int mod, const vec3_t *dir, const hitLocation_t hitLoc, const Weapon *r_weapon, bool isAlternate)
{
  ?G_Vehicle_Pain@@YAXPEAUgentity_s@@0HPEBTvec3_t@@H1W4hitLocation_t@@AEBUWeapon@@_N@Z(pSelf, pAttacker, damage, point, mod, dir, hitLoc, r_weapon, isAlternate);
}

/*
==============
GVehicles::PathCountNodes
==============
*/

__int16 __fastcall GVehicles::PathCountNodes(GVehicles *this, __int16 nodeIndex)
{
  return ?PathCountNodes@GVehicles@@UEBAFF@Z(this, nodeIndex);
}

/*
==============
GVehicles::PathIsEnd
==============
*/

bool __fastcall GVehicles::PathIsEnd(GVehicles *this, VehiclePathPos *vpp)
{
  return ?PathIsEnd@GVehicles@@UEBA_NPEAUVehiclePathPos@@@Z(this, vpp);
}

/*
==============
G_Vehicle_UpdateSteering
==============
*/

void __fastcall G_Vehicle_UpdateSteering(gentity_s *ent)
{
  ?G_Vehicle_UpdateSteering@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_IsUsable
==============
*/

bool __fastcall G_Vehicle_IsUsable(const gentity_s *ent, const gentity_s *player)
{
  return ?G_Vehicle_IsUsable@@YA_NPEBUgentity_s@@0@Z(ent, player);
}

/*
==============
GVehicles::GetSuspendManager
==============
*/

const GVehicleSuspendManager *__fastcall GVehicles::GetSuspendManager(GVehicles *this)
{
  return ?GetSuspendManager@GVehicles@@QEBAAEBVGVehicleSuspendManager@@XZ(this);
}

/*
==============
G_Vehicle_ExplosionEvent
==============
*/

void __fastcall G_Vehicle_ExplosionEvent(const vec3_t *origin, float innerRadius, float outerRadius, bool isCylinder, float forceScale, const vec3_t *impulse)
{
  ?G_Vehicle_ExplosionEvent@@YAXAEBTvec3_t@@MM_NMPEBT1@@Z(origin, innerRadius, outerRadius, isCylinder, forceScale, impulse);
}

/*
==============
G_Vehicle_SetupSystem
==============
*/

void G_Vehicle_SetupSystem(void)
{
  ?G_Vehicle_SetupSystem@@YAXXZ();
}

/*
==============
G_Vehicle_Use
==============
*/

void __fastcall G_Vehicle_Use(gentity_s *vehEnt, gentity_s *playerEnt, gentity_s *pActivator)
{
  ?G_Vehicle_Use@@YAXPEAUgentity_s@@00@Z(vehEnt, playerEnt, pActivator);
}

/*
==============
G_Vehicle_DrawDebugOrigin
==============
*/

void __fastcall G_Vehicle_DrawDebugOrigin(const VehicleDef *vehDef, vehicle_physic_t *phys)
{
  ?G_Vehicle_DrawDebugOrigin@@YAXPEBUVehicleDef@@PEAUvehicle_physic_t@@@Z(vehDef, phys);
}

/*
==============
GVehicles::GetSuspendManager
==============
*/

GVehicleSuspendManager *__fastcall GVehicles::GetSuspendManager(GVehicles *this)
{
  return ?GetSuspendManager@GVehicles@@QEAAAEAVGVehicleSuspendManager@@XZ(this);
}

/*
==============
G_Vehicle_GroundPlant
==============
*/

void __fastcall G_Vehicle_GroundPlant(gentity_s *ent, vehicle_physic_t *phys, int gravity)
{
  ?G_Vehicle_GroundPlant@@YAXPEAUgentity_s@@PEAUvehicle_physic_t@@H@Z(ent, phys, gravity);
}

/*
==============
G_Vehicle_UpdateCameraState
==============
*/

void __fastcall G_Vehicle_UpdateCameraState(Vehicle *veh)
{
  ?G_Vehicle_UpdateCameraState@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
GVehicles::BuildDObjFromVehicleInfo
==============
*/

void __fastcall GVehicles::BuildDObjFromVehicleInfo(GVehicles *this, int entityNum)
{
  ?BuildDObjFromVehicleInfo@GVehicles@@UEAAXH@Z(this, entityNum);
}

/*
==============
VehicleTurret::VehicleTurret
==============
*/

void __fastcall VehicleTurret::VehicleTurret(VehicleTurret *this)
{
  ??0VehicleTurret@@QEAA@XZ(this);
}

/*
==============
G_Vehicle_UpdatePosition
==============
*/

void __fastcall G_Vehicle_UpdatePosition(gentity_s *pSelf, gentity_s *player)
{
  ?G_Vehicle_UpdatePosition@@YAXPEAUgentity_s@@0@Z(pSelf, player);
}

/*
==============
G_Vehicle_ShutdownSystem
==============
*/

void G_Vehicle_ShutdownSystem(void)
{
  ?G_Vehicle_ShutdownSystem@@YAXXZ();
}

/*
==============
GVehicles::PathInit
==============
*/

void __fastcall GVehicles::PathInit(GVehicles *this, __int16 nodeIndex, VehiclePathPos *vpp)
{
  ?PathInit@GVehicles@@UEBAXFPEAUVehiclePathPos@@@Z(this, nodeIndex, vpp);
}

/*
==============
G_Vehicle_Create
==============
*/

void __fastcall G_Vehicle_Create(gentity_s *ent, const char *typeName, const gentity_s *player, int load)
{
  ?G_Vehicle_Create@@YAXPEAUgentity_s@@PEBDPEBU1@H@Z(ent, typeName, player, load);
}

/*
==============
G_Vehicle_GetWorldBoneMatrix
==============
*/

int __fastcall G_Vehicle_GetWorldBoneMatrix(const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  return ?G_Vehicle_GetWorldBoneMatrix@@YAHW4LocalClientNum_t@@HHAEAT?$tmat43_t@Tvec3_t@@@@@Z(localClientNum, entityIndex, boneIndex, result);
}

/*
==============
G_Vehicle_InUseByPlayer
==============
*/

bool __fastcall G_Vehicle_InUseByPlayer(const gentity_s *vehEnt, const gentity_s *playerEnt)
{
  return ?G_Vehicle_InUseByPlayer@@YA_NPEBUgentity_s@@0@Z(vehEnt, playerEnt);
}

/*
==============
G_Vehicle_ClearGround
==============
*/

void __fastcall G_Vehicle_ClearGround(const gentity_s *ent)
{
  ?G_Vehicle_ClearGround@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
GVehicles::GetVehicleDef
==============
*/

const VehicleDef *__fastcall GVehicles::GetVehicleDef(GVehicles *this, const entityState_t *es)
{
  return ?GetVehicleDef@GVehicles@@UEAAPEBUVehicleDef@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
G_Vehicle_SpawnEntity
==============
*/

void __fastcall G_Vehicle_SpawnEntity(gentity_s *ent)
{
  ?G_Vehicle_SpawnEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_FinishDamage
==============
*/

void __fastcall G_Vehicle_FinishDamage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  ?G_Vehicle_FinishDamage@@YAXPEAUgentity_s@@PEBU1@0AEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H@Z(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset);
}

/*
==============
G_Vehicle_UnlinkPlayer
==============
*/

void __fastcall G_Vehicle_UnlinkPlayer(gentity_s *vehEnt, gentity_s *player)
{
  ?G_Vehicle_UnlinkPlayer@@YAXPEAUgentity_s@@0@Z(vehEnt, player);
}

/*
==============
G_Vehicle_CalcPhysVelFromPrevState
==============
*/

void __fastcall G_Vehicle_CalcPhysVelFromPrevState(Vehicle *veh)
{
  ?G_Vehicle_CalcPhysVelFromPrevState@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_UpdateVehicleControlledWeapon
==============
*/

void __fastcall G_Vehicle_UpdateVehicleControlledWeapon(gentity_s *player)
{
  ?G_Vehicle_UpdateVehicleControlledWeapon@@YAXPEAUgentity_s@@@Z(player);
}

/*
==============
G_Vehicle_ResetWheels
==============
*/

void __fastcall G_Vehicle_ResetWheels(const gentity_s *ent, vehicle_physic_t *phys)
{
  ?G_Vehicle_ResetWheels@@YAXPEBUgentity_s@@PEAUvehicle_physic_t@@@Z(ent, phys);
}

/*
==============
G_Vehicle_Damage
==============
*/

damageReturnCode_t __fastcall G_Vehicle_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  return ?G_Vehicle_Damage@@YA?AW4damageReturnCode_t@@PEAUgentity_s@@PEBU2@0PEBTvec3_t@@2HHHAEBUWeapon@@_NW4hitLocation_t@@IW4scr_string_t@@H@Z(targ, inflictor, attacker, dir, point, damage, dFlags, mod, r_weapon, isAlternate, hitLoc, modelIndex, partName, timeOffset);
}

/*
==============
G_Vehicle_ClearServerDefs
==============
*/

void G_Vehicle_ClearServerDefs(void)
{
  ?G_Vehicle_ClearServerDefs@@YAXXZ();
}

/*
==============
GVehicles::PathGetNode
==============
*/

const VehiclePathNode *__fastcall GVehicles::PathGetNode(GVehicles *this, __int16 nodeIndex)
{
  return ?PathGetNode@GVehicles@@UEBAPEBUVehiclePathNode@@F@Z(this, nodeIndex);
}

/*
==============
G_Vehicle_LinkPlayerTurretControlOnly
==============
*/

void __fastcall G_Vehicle_LinkPlayerTurretControlOnly(gentity_s *vehEnt, gentity_s *player)
{
  ?G_Vehicle_LinkPlayerTurretControlOnly@@YAXPEAUgentity_s@@0@Z(vehEnt, player);
}

/*
==============
G_Vehicle_UpdatePlayerMove_Physics
==============
*/

void __fastcall G_Vehicle_UpdatePlayerMove_Physics(Vehicle *veh)
{
  ?G_Vehicle_UpdatePlayerMove_Physics@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_InitBoneTags
==============
*/

void __fastcall G_Vehicle_InitBoneTags(Vehicle *veh)
{
  ?G_Vehicle_InitBoneTags@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
GVehicles::PathUpdatePos
==============
*/

void __fastcall GVehicles::PathUpdatePos(GVehicles *this, const int entNum, const float deltaTime, const float manualSpeed, VehiclePathPos *vpp, float *inOutManualTime, vec3_t *outNextOrigin, vec3_t *outNextAngles)
{
  ?PathUpdatePos@GVehicles@@UEBAXHMMPEAUVehiclePathPos@@AEAMAEATvec3_t@@2@Z(this, entNum, deltaTime, manualSpeed, vpp, inOutManualTime, outNextOrigin, outNextAngles);
}

/*
==============
GVehicles::UpdateAnimScriptedMove
==============
*/

void __fastcall GVehicles::UpdateAnimScriptedMove(GVehicles *this, gentity_s *vehEnt)
{
  ?UpdateAnimScriptedMove@GVehicles@@UEAAXPEAUgentity_s@@@Z(this, vehEnt);
}

/*
==============
G_Vehicle_GetPlayerVehicle
==============
*/

gentity_s *__fastcall G_Vehicle_GetPlayerVehicle(const gentity_s *player)
{
  return ?G_Vehicle_GetPlayerVehicle@@YAPEAUgentity_s@@PEBU1@@Z(player);
}

/*
==============
G_Vehicle_DrawDebugLookahead
==============
*/

void __fastcall G_Vehicle_DrawDebugLookahead(Vehicle *veh)
{
  ?G_Vehicle_DrawDebugLookahead@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_HandleOwnerChange
==============
*/

void __fastcall G_Vehicle_HandleOwnerChange(gentity_s *vehEnt, const gentity_s *owner)
{
  ?G_Vehicle_HandleOwnerChange@@YAXPEAUgentity_s@@PEBU1@@Z(vehEnt, owner);
}

/*
==============
GVehicles::GetDObjFromEntityNumber
==============
*/

DObj *__fastcall GVehicles::GetDObjFromEntityNumber(GVehicles *this, int entityNum)
{
  return ?GetDObjFromEntityNumber@GVehicles@@QEBAPEAUDObj@@H@Z(this, entityNum);
}

/*
==============
G_Vehicle_GetBone
==============
*/

int __fastcall G_Vehicle_GetBone(const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  return ?G_Vehicle_GetBone@@YAHW4LocalClientNum_t@@HW4VehicleBone@@@Z(localClientNum, entityIndex, bone);
}

/*
==============
G_Vehicle_GetVehicleViewOrigin
==============
*/

void __fastcall G_Vehicle_GetVehicleViewOrigin(const playerState_s *playerState, vec3_t *outViewOrigin)
{
  ?G_Vehicle_GetVehicleViewOrigin@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(playerState, outViewOrigin);
}

/*
==============
G_Vehicle_UpdateVehicleControlledEntity
==============
*/

void __fastcall G_Vehicle_UpdateVehicleControlledEntity(gentity_s *player, const unsigned int vehicleEntIndex)
{
  ?G_Vehicle_UpdateVehicleControlledEntity@@YAXPEAUgentity_s@@I@Z(player, vehicleEntIndex);
}

/*
==============
G_Vehicle_ReadVehiclePhysics
==============
*/

void __fastcall G_Vehicle_ReadVehiclePhysics(SaveGame *save, Vehicle *veh)
{
  ?G_Vehicle_ReadVehiclePhysics@@YAXPEAUSaveGame@@PEAUVehicle@@@Z(save, veh);
}

/*
==============
GVehicles::SetUsableInfo
==============
*/

void __fastcall GVehicles::SetUsableInfo(GVehicles *this, const gentity_s *ent, unsigned __int8 usableScriptablePartCount, const VehicleUsableParts *usableScriptableParts)
{
  ?SetUsableInfo@GVehicles@@QEAAXPEBUgentity_s@@EPEBUVehicleUsableParts@@@Z(this, ent, usableScriptablePartCount, usableScriptableParts);
}

/*
==============
G_Vehicle_JoltBody
==============
*/

void __fastcall G_Vehicle_JoltBody(gentity_s *ent, const vec3_t *dir, float intensity, float speedFrac, float decel)
{
  ?G_Vehicle_JoltBody@@YAXPEAUgentity_s@@AEBTvec3_t@@MMM@Z(ent, dir, intensity, speedFrac, decel);
}

/*
==============
G_Vehicle_UpdatePhysics
==============
*/

void __fastcall G_Vehicle_UpdatePhysics(gentity_s *pSelf, gentity_s *player)
{
  ?G_Vehicle_UpdatePhysics@@YAXPEAUgentity_s@@0@Z(pSelf, player);
}

/*
==============
G_Vehicle_GetServerDefIndex
==============
*/

bool __fastcall G_Vehicle_GetServerDefIndex(const char *name, unsigned int *outIndex)
{
  return ?G_Vehicle_GetServerDefIndex@@YA_NPEBDPEAI@Z(name, outIndex);
}

/*
==============
G_Vehicle_UpdateSounds
==============
*/

void __fastcall G_Vehicle_UpdateSounds(gentity_s *ent)
{
  ?G_Vehicle_UpdateSounds@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Vehicle_GetWheelOrigin
==============
*/

void __fastcall G_Vehicle_GetWheelOrigin(const gentity_s *ent, int idx, vec3_t *outOrigin)
{
  ?G_Vehicle_GetWheelOrigin@@YAXPEBUgentity_s@@HAEATvec3_t@@@Z(ent, idx, outOrigin);
}

/*
==============
GVehicles::UpdateGameModeSpecificVehicleInfo
==============
*/

void __fastcall GVehicles::UpdateGameModeSpecificVehicleInfo(GVehicles *this, const entityState_t *es, BGVehicleInfo *info)
{
  ?UpdateGameModeSpecificVehicleInfo@GVehicles@@UEAAXPEBUentityState_t@@PEAVBGVehicleInfo@@@Z(this, es, info);
}

/*
==============
G_Vehicle_InitSystem
==============
*/

void G_Vehicle_InitSystem(void)
{
  ?G_Vehicle_InitSystem@@YAXXZ();
}

/*
==============
G_Vehicle_Controller
==============
*/

void __fastcall G_Vehicle_Controller(const gentity_s *pSelf, DObjPartBits *partBits)
{
  ?G_Vehicle_Controller@@YAXPEBUgentity_s@@PEAUDObjPartBits@@@Z(pSelf, partBits);
}

/*
==============
G_Vehicle_RunPreThinkForAllVehicles
==============
*/

void G_Vehicle_RunPreThinkForAllVehicles(void)
{
  ?G_Vehicle_RunPreThinkForAllVehicles@@YAXXZ();
}

/*
==============
G_Vehicle_MoveToLookAhead_Physics
==============
*/

void __fastcall G_Vehicle_MoveToLookAhead_Physics(Vehicle *veh, const vec3_t *lookAheadOrigin, float steeringOffsetFrac, float throttle, float brake)
{
  ?G_Vehicle_MoveToLookAhead_Physics@@YAXPEAUVehicle@@AEBTvec3_t@@MMM@Z(veh, lookAheadOrigin, steeringOffsetFrac, throttle, brake);
}

/*
==============
G_Vehicle_ClearPlayerVehicles
==============
*/

void __fastcall G_Vehicle_ClearPlayerVehicles(const int entityNum, playerState_s *const ps)
{
  ?G_Vehicle_ClearPlayerVehicles@@YAXHQEAUplayerState_s@@@Z(entityNum, ps);
}

/*
==============
G_Vehicle_GetPhysics
==============
*/

BgVehiclePhysics *__fastcall G_Vehicle_GetPhysics(const Vehicle *veh)
{
  return ?G_Vehicle_GetPhysics@@YAPEAVBgVehiclePhysics@@PEBUVehicle@@@Z(veh);
}

/*
==============
GVehicles::IsSuspended
==============
*/

bool __fastcall GVehicles::IsSuspended(GVehicles *this, const gentity_s *ent)
{
  return ?IsSuspended@GVehicles@@QEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
GVehicles::GetWorldBoneMatrix
==============
*/

int __fastcall GVehicles::GetWorldBoneMatrix(GVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  return ?GetWorldBoneMatrix@GVehicles@@UEBAHW4LocalClientNum_t@@HHAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, localClientNum, entityIndex, boneIndex, result);
}

/*
==============
G_Vehicle_UpdatePathFollowMove_Physics
==============
*/

void __fastcall G_Vehicle_UpdatePathFollowMove_Physics(Vehicle *veh)
{
  ?G_Vehicle_UpdatePathFollowMove_Physics@@YAXPEAUVehicle@@@Z(veh);
}

/*
==============
G_Vehicle_CollideAllVehicles
==============
*/

void __fastcall G_Vehicle_CollideAllVehicles(float stepSize)
{
  ?G_Vehicle_CollideAllVehicles@@YAXM@Z(stepSize);
}

/*
==============
G_Vehicle_SlideMoveIgnoreLinkedChildren
==============
*/

void __fastcall G_Vehicle_SlideMoveIgnoreLinkedChildren(const gentity_s *vehEnt, GStepSlideMove *stepSlide)
{
  ?G_Vehicle_SlideMoveIgnoreLinkedChildren@@YAXPEBUgentity_s@@PEAVGStepSlideMove@@@Z(vehEnt, stepSlide);
}

/*
==============
G_Vehicle_CanPlayerPlaceTank
==============
*/

int __fastcall G_Vehicle_CanPlayerPlaceTank(const gentity_s *player, const float boundingRadius, const float boundingHeight, const float startForward, const float startUp, const float sweepDistance, const float plancementMinNormal, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?G_Vehicle_CanPlayerPlaceTank@@YAHPEBUgentity_s@@MMMMMMAEATvec3_t@@1@Z(player, boundingRadius, boundingHeight, startForward, startUp, sweepDistance, plancementMinNormal, outOrigin, outAngles);
}

/*
==============
G_Vehicle_UpdateGroundTarget
==============
*/

void __fastcall G_Vehicle_UpdateGroundTarget(const playerState_s *playerState, const gentity_s *vehicleEntity)
{
  ?G_Vehicle_UpdateGroundTarget@@YAXPEBUplayerState_s@@PEBUgentity_s@@@Z(playerState, vehicleEntity);
}

/*
==============
G_Vehicle_UpdateScriptablePlayerUseCache
==============
*/

void __fastcall G_Vehicle_UpdateScriptablePlayerUseCache(const gentity_s *const vehEnt)
{
  ?G_Vehicle_UpdateScriptablePlayerUseCache@@YAXQEBUgentity_s@@@Z(vehEnt);
}

/*
==============
G_Vehicle_GetServerDefSafe
==============
*/

const VehicleDef *__fastcall G_Vehicle_GetServerDefSafe(unsigned int vehDefIndex)
{
  return ?G_Vehicle_GetServerDefSafe@@YAPEBUVehicleDef@@I@Z(vehDefIndex);
}

/*
==============
G_Vehicle_HasTurret
==============
*/

int __fastcall G_Vehicle_HasTurret(const gentity_s *vehEnt)
{
  return ?G_Vehicle_HasTurret@@YAHPEBUgentity_s@@@Z(vehEnt);
}

/*
==============
GVehicles::GetVehicleDef
==============
*/

const VehicleDef *__fastcall GVehicles::GetVehicleDef(GVehicles *this, const playerState_s *ps)
{
  return ?GetVehicleDef@GVehicles@@UEBAPEBUVehicleDef@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
G_Vehicle_Create
==============
*/

void __fastcall G_Vehicle_Create(gentity_s *ent, unsigned int vehDefIndex, const gentity_s *player, int load)
{
  ?G_Vehicle_Create@@YAXPEAUgentity_s@@IPEBU1@H@Z(ent, vehDefIndex, player, load);
}

/*
==============
G_Vehicle_UpdateAnimScriptedMove
==============
*/
void G_Vehicle_UpdateAnimScriptedMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdatePathScriptedMove(GVehicles::ms_gVehiclesSystem, veh);
}

/*
==============
G_Vehicle_UpdatePathConstrainedMove
==============
*/
void G_Vehicle_UpdatePathConstrainedMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdatePathConstrainedMove(GVehicles::ms_gVehiclesSystem, veh);
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    if ( EntHandle::isDefined(&veh->ent->remoteControlledOwner) )
      G_Vehicle_UpdatePlayerMove(veh);
  }
}

/*
==============
G_Vehicle_UpdatePathFollowMove
==============
*/
void G_Vehicle_UpdatePathFollowMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdatePathFollowMove(GVehicles::ms_gVehiclesSystem, veh);
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    if ( EntHandle::isDefined(&veh->ent->remoteControlledOwner) )
      G_Vehicle_UpdatePlayerMove(veh);
  }
}

/*
==============
G_Vehicle_UpdateAiMove
==============
*/
void G_Vehicle_UpdateAiMove(Vehicle *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5823, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( veh->drivingState != VEH_DRIVE_AI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5824, ASSERT_TYPE_ASSERT, "( veh->drivingState == VEH_DRIVE_AI )", (const char *)&queryFormat, "veh->drivingState == VEH_DRIVE_AI") )
    __debugbreak();
  BGVehicles::PhysicsIsValid(veh->physicsVehicle);
}

/*
==============
G_Vehicle_UpdatePlayerMove
==============
*/
void G_Vehicle_UpdatePlayerMove(Vehicle *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3294, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
    G_Vehicle_UpdatePlayerMove_Physics(veh);
  else
    G_Vehicle_UpdatePlayerMove_NonPhysics(veh);
}

/*
==============
G_Vehicle_UpdateDefaultMove
==============
*/
void G_Vehicle_UpdateDefaultMove(Vehicle *veh)
{
  gentity_s *ent; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3609, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    G_Vehicle_UpdateDefaultMove_Physics(veh);
  }
  else
  {
    if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3568, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
      __debugbreak();
    ent = veh->ent;
    *(_QWORD *)&veh->speed = 0i64;
    *(_QWORD *)veh->phys.vel.v = 0i64;
    *(_QWORD *)&veh->phys.vel.z = 0i64;
    *(_QWORD *)&veh->phys.bodyVel.y = 0i64;
    *(_QWORD *)veh->phys.accel.v = 0i64;
    *(_QWORD *)&veh->phys.accel.z = 0i64;
    *(_QWORD *)&veh->phys.bodyAccel.y = 0i64;
    *(_QWORD *)veh->phys.rotVel.v = 0i64;
    veh->phys.rotVel.v[2] = 0.0;
    if ( ent->scripted )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      GVehicles::ms_gVehiclesSystem->UpdateAnimScriptedMove(GVehicles::ms_gVehiclesSystem, ent);
      veh->phys.origin.v[0] = ent->r.currentOrigin.v[0];
      veh->phys.origin.v[1] = ent->r.currentOrigin.v[1];
      veh->phys.origin.v[2] = ent->r.currentOrigin.v[2];
      veh->phys.angles.v[0] = ent->r.currentAngles.v[0];
      veh->phys.angles.v[1] = ent->r.currentAngles.v[1];
      veh->phys.angles.v[2] = ent->r.currentAngles.v[2];
    }
  }
}

/*
==============
G_Vehicle_UpdateSubmarineMove
==============
*/
void G_Vehicle_UpdateSubmarineMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdateSubmarinePlayerMove(GVehicles::ms_gVehiclesSystem, veh);
}

/*
==============
G_Vehicle_UpdateUGVPlayerMove
==============
*/
void G_Vehicle_UpdateUGVPlayerMove(Vehicle *veh)
{
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->UpdateUGVPlayerMove(GVehicles::ms_gVehiclesSystem, veh);
}

/*
==============
VehicleTurret::VehicleTurret
==============
*/
void VehicleTurret::VehicleTurret(VehicleTurret *this)
{
  *(_QWORD *)&this->fireTime = 0i64;
  *(_QWORD *)&this->barrelOffset = 0i64;
  *(_WORD *)&this->turretMoving = 0;
  this->isFiring = 0;
}

/*
==============
GVehicles::AimTurret
==============
*/
bool GVehicles::AimTurret(GVehicles *this, const Weapon *r_turretWeapon, int turretEntityNum)
{
  EntityTagInfo *tagInfo; 
  const gentity_s *parent; 
  const VehicleDef *ServerDef; 
  gentity_s *v16; 
  gentity_s *v17; 
  bool result; 
  GVehicles *VehicleSystem; 
  char v69; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm13
  }
  if ( !BG_WeaponDef(r_turretWeapon, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7524, ASSERT_TYPE_ASSERT, "( turretWeapDef )", (const char *)&queryFormat, "turretWeapDef", -2i64) )
    __debugbreak();
  _RSI = G_GetGEntity(turretEntityNum);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7527, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !G_Turret_IsMountedOnVehicle(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7529, ASSERT_TYPE_ASSERT, "(G_Turret_IsMountedOnVehicle( turretEnt ))", (const char *)&queryFormat, "G_Turret_IsMountedOnVehicle( turretEnt )") )
    __debugbreak();
  tagInfo = _RSI->tagInfo;
  parent = tagInfo->parent;
  if ( !tagInfo->parent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7531, ASSERT_TYPE_ASSERT, "(vehEnt->vehicle)", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(parent->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7534, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v16 = this->GetVehicleOwner(this, parent);
  v17 = v16;
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled && v16 )
  {
    result = 0;
    if ( ServerDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
    {
      if ( !BGVehicles::PhysicsIsValid(parent->vehicle->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7549, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehEnt->vehicle->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehEnt->vehicle->physicsVehicle )") )
        __debugbreak();
      _RDI = v17->client;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1DCh]
        vsubss  xmm1, xmm0, dword ptr [rbx+140h]
        vmulss  xmm3, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm3, cs:__real@3f000000
        vxorps  xmm13, xmm13, xmm13
        vroundss xmm0, xmm13, xmm2, 1
        vsubss  xmm0, xmm3, xmm0
        vmulss  xmm6, xmm0, cs:__real@43b40000
        vxorps  xmm7, xmm7, xmm7
      }
      if ( _RDI->sess.cmd.remoteControlAngles[1] )
      {
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vcvtsi2ss xmm8, xmm8, eax
          vmulss  xmm0, xmm8, xmm6
          vcomiss xmm0, xmm7
          vcomiss xmm6, xmm7
          vdivss  xmm0, xmm6, dword ptr [rbp+0C48h]
          vmovss  xmm9, cs:__real@3f800000
          vmovaps xmm2, xmm9; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm10, xmm0 }
        Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonSteerFactor, "bg_wheelsonSteerFactor");
        __asm
        {
          vmulss  xmm1, xmm8, cs:__real@3c010204
          vmulss  xmm8, xmm1, xmm0
        }
        if ( dword_14AD45458 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_14AD45458);
          if ( dword_14AD45458 == -1 )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonSteerExp, "bg_wheelsonSteerExp");
            __asm { vmovss  cs:steerExp, xmm0 }
            j__Init_thread_footer(&dword_14AD45458);
          }
        }
        __asm
        {
          vmulss  xmm0, xmm8, xmm10
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; X
          vmovss  xmm1, cs:steerExp; Y
        }
        *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm2, cs:__real@3f666666; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vcmpless xmm2, xmm7, xmm6
          vmovss  xmm1, cs:__real@bf800000
          vblendvps xmm2, xmm1, xmm9, xmm2
          vmulss  xmm7, xmm0, xmm2
        }
      }
      VehicleSystem = GVehicles::GetVehicleSystem();
      __asm { vmovaps xmm3, xmm7; value }
      GVehicles::PhysicsSetInputControl(VehicleSystem, parent->vehicle->physicsVehicle, 2u, *(float *)&_XMM3);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1D8h]
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm13, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, cs:__real@43b40000
        vmovss  dword ptr [rsi+58h], xmm0
        vmovss  xmm2, dword ptr [rdi+1DCh]
        vmulss  xmm3, xmm2, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vroundss xmm2, xmm13, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rsi+5Ch], xmm1
      }
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  _R11 = &v69;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
GVehicles::BgIsDobjValidForVehicle
==============
*/
bool GVehicles::BgIsDobjValidForVehicle(GVehicles *this, const DObj *dobj)
{
  const dvar_t *v2; 
  bool v4; 

  v2 = DVARBOOL_bg_vehHandleVehicleNullPtr;
  if ( !DVARBOOL_bg_vehHandleVehicleNullPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehHandleVehicleNullPtr") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return 1;
  v4 = dobj == NULL;
  if ( !dobj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8165, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    v4 = 1;
  }
  return !v4;
}

/*
==============
GVehicles::BuildDObjFromVehicleInfo
==============
*/
void GVehicles::BuildDObjFromVehicleInfo(GVehicles *this, int entityNum)
{
  __int64 v2; 
  gentity_s *v3; 
  Vehicle *vehicle; 
  const DObj *ServerDObjForEnt; 
  const DObj *v6; 
  const XModel *Model; 
  unsigned __int16 *attachModelNames; 
  unsigned __int16 v9; 
  unsigned int v10; 
  int v11; 
  char *v12; 
  scr_string_t v13; 
  const XModel *v14; 
  int v16; 
  scr_string_t *attachTagNames; 
  DObjModel dobjModels[2]; 

  v2 = entityNum;
  if ( (unsigned int)entityNum >= 0x7FE )
  {
    v16 = 2046;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7100, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entityNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", entityNum, v16) )
      __debugbreak();
  }
  v3 = &g_entities[v2];
  if ( !v3->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7104, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  vehicle = v3->vehicle;
  if ( vehicle->vehicleAnimInfo.m_dobjDirty )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v3);
    v6 = ServerDObjForEnt;
    if ( ServerDObjForEnt && ServerDObjForEnt->tree )
    {
      XAnimClearTree(ServerDObjForEnt);
      v6->tree = NULL;
    }
    G_Utils_DObjSafeFree(v3);
    G_Utils_DObjScriptableSafeFree(v3);
    if ( Com_GetServerDObjForEnt(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7123, ASSERT_TYPE_ASSERT, "( Com_GetServerDObjForEnt( vehEnt ) == 0 )", (const char *)&queryFormat, "Com_GetServerDObjForEnt( vehEnt ) == NULL") )
      __debugbreak();
    memset_0(dobjModels, 0, sizeof(dobjModels));
    Model = G_Utils_GetModel(v3->model);
    DObjInitModel(Model, (scr_string_t)0, 0, 0, NULL, dobjModels);
    attachModelNames = v3->attachModelNames;
    *(_QWORD *)v3->attachModelNames = 0i64;
    v9 = 1;
    *(_QWORD *)&v3->attachModelNames[4] = 0i64;
    v10 = 0;
    *(_QWORD *)&v3->attachModelNames[8] = 0i64;
    v11 = 1;
    *(_QWORD *)&v3->attachModelNames[12] = 0i64;
    *(_QWORD *)&v3->attachModelNames[16] = 0i64;
    *(_QWORD *)&v3->attachModelNames[20] = 0i64;
    *(_QWORD *)&v3->attachModelNames[24] = 0i64;
    attachTagNames = v3->attachTagNames;
    v3->attachModelIsOnBack = 0;
    v12 = vehicle->vehicleAnimInfo.m_attachModels[0];
    do
    {
      if ( !*v12 )
        break;
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      *attachModelNames = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, vehicle->vehicleAnimInfo.m_attachModels[(unsigned __int64)v10]);
      Scr_SetString(&v3->attachTagNames[v10], *(scr_string_t *)((char *)attachTagNames + (char *)&vehicle->vehicleAnimInfo - (char *)v3 - 648));
      v3->attachIgnoreCollision = v11;
      v13 = *attachTagNames;
      v14 = G_Utils_GetModel(*attachModelNames);
      DObjInitModel(v14, v13, 1, 0, NULL, &dobjModels[v9]);
      ++attachTagNames;
      ++v9;
      v11 = __ROL4__(v11, 1);
      ++v10;
      ++attachModelNames;
      v12 += 64;
    }
    while ( v10 < 2 );
    Com_ServerDObjCreate(dobjModels, v9, NULL, v3->s.number, 0);
    G_Vehicle_InitBoneTags(v3->vehicle);
    G_Utils_CreateEntityPhysics(v3);
    G_Utils_CreateEntityDObjScriptable(v3);
    G_Vehicle_UpdateScriptablePlayerUseCache(v3);
    vehicle->vehicleAnimInfo.m_dobjDirty = 0;
  }
}

/*
==============
G_GetVehicleBoatPlayerMove
==============
*/
void G_GetVehicleBoatPlayerMove(const usercmd_s *cmd, char *move)
{
  const dvar_t *v4; 
  int integer; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3156, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3157, ASSERT_TYPE_ASSERT, "( move )", (const char *)&queryFormat, "move") )
    __debugbreak();
  v4 = DVARINT_vehBoatControls;
  if ( !DVARINT_vehBoatControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehBoatControls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer )
  {
    if ( integer != 1 )
      return;
    if ( (cmd->buttons & 0x200) != 0 )
    {
      *move = -127;
    }
    else if ( (cmd->buttons & 1) != 0 )
    {
      *move = 127;
    }
  }
  else
  {
    *move = cmd->forwardmove;
  }
  move[1] = cmd->rightmove;
}

/*
==============
G_VehicleTraceCapsule
==============
*/
void G_VehicleTraceCapsule(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask)
{
  PhysicsQuery_LegacyCapsuleTrace(worldId, results, start, end, bounds, &skipEntity, 1, contentMask, NULL, 0, NULL, NULL);
}

/*
==============
G_Vehicle_Allocate
==============
*/
Vehicle *G_Vehicle_Allocate()
{
  int v0; 
  Vehicle *i; 
  Vehicle *v2; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v0 = 0;
  for ( i = &s_vehicleServers[1]; (__int64)i < (__int64)&s_devGuiRegisterInfo.registeredName[0][72]; i += 4 )
  {
    v2 = i - 1;
    if ( !i[-1].ent )
      break;
    v2 = i;
    if ( !i->ent )
    {
      ++v0;
      break;
    }
    v2 = i + 1;
    if ( !i[1].ent )
    {
      v0 += 2;
      break;
    }
    v2 = i + 2;
    if ( !i[2].ent )
    {
      v0 += 3;
      break;
    }
    v0 += 4;
  }
  if ( v0 == 128 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36360, 1243i64, 128i64);
  if ( !G_Vehicle_CanAllocateVehicle() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4100, ASSERT_TYPE_ASSERT, "( G_Vehicle_CanAllocateVehicle() )", (const char *)&queryFormat, "G_Vehicle_CanAllocateVehicle()") )
    __debugbreak();
  number = v2->lookAtEnt.number;
  if ( number )
  {
    v4 = number;
    v5 = number - 1;
    if ( v5 >= 0x800 )
    {
      LODWORD(v8) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v8, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v6 = v4 - 1;
    if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v6] )
    {
      LODWORD(v9) = v2->lookAtEnt.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v9) )
        __debugbreak();
    }
    if ( v2->lookAtEnt.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4101, ASSERT_TYPE_ASSERT, "( !veh->lookAtEnt.isDefined() )", (const char *)&queryFormat, "!veh->lookAtEnt.isDefined()") )
      __debugbreak();
  }
  memset_0(v2, 0, sizeof(Vehicle));
  s_vehicleDamageTime[v0] = 0;
  return v2;
}

/*
==============
G_Vehicle_AllowTouchLinkedPlayer
==============
*/
bool G_Vehicle_AllowTouchLinkedPlayer(gentity_s *pVehicleEnt, const VehicleDef *vehDef, gentity_s *pPlayerEnt)
{
  entityType_s eType; 
  const dvar_t *v7; 
  char v9; 
  Vehicle *vehicle; 
  bool v11; 
  const characterInfo_t *v12; 
  GHandler *Handler; 
  int LinkedVehicle; 
  gentity_s *GEntity; 
  gentity_s *v16; 
  Vehicle *v17; 
  const VehicleDef *ServerDef; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 

  _RBX = vehDef;
  if ( (!pVehicleEnt || !pPlayerEnt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2097, ASSERT_TYPE_ASSERT, "( pVehicleEnt && pPlayerEnt )", (const char *)&queryFormat, "pVehicleEnt && pPlayerEnt") )
    __debugbreak();
  if ( !pVehicleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((pVehicleEnt->s.eType - 12) & 0xFFFD) != 0 )
    goto LABEL_55;
  if ( !pPlayerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = pPlayerEnt->s.eType;
  if ( ((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2098, ASSERT_TYPE_ASSERT, "( BG_IsVehicleEntity( &pVehicleEnt->s ) && BG_IsCharacterEntity( &pPlayerEnt->s ) )", (const char *)&queryFormat, "BG_IsVehicleEntity( &pVehicleEnt->s ) && BG_IsCharacterEntity( &pPlayerEnt->s )") )
      __debugbreak();
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2099, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !pPlayerEnt->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2100, ASSERT_TYPE_ASSERT, "( pPlayerEnt->tagInfo )", (const char *)&queryFormat, "pPlayerEnt->tagInfo") )
    __debugbreak();
  v7 = DVARBOOL_vehLegacyHeliRotorsDamage;
  if ( !DVARBOOL_vehLegacyHeliRotorsDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehLegacyHeliRotorsDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
    goto LABEL_29;
  if ( pVehicleEnt->s.eType != ET_HELICOPTER )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, cs:__real@3a83126f
    vcomiss xmm0, dword ptr [rbx+0EF4h]
  }
  if ( pVehicleEnt->s.eType < ET_HELICOPTER )
    v9 = 1;
  else
LABEL_29:
    v9 = 0;
  v11 = 0;
  if ( _RBX->vehiclePhysicsDef.physicsEnabled )
  {
    if ( _RBX->type == VEH_AIRCRAFT && _RBX->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_ROTARYWING )
    {
      vehicle = pVehicleEnt->vehicle;
      if ( vehicle )
      {
        if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
          v11 = 1;
      }
    }
  }
  if ( !v9 && !v11 )
    return 0;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v12 = (const characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)pPlayerEnt->s.number);
  Handler = GHandler::getHandler();
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &pPlayerEnt->s, v12, &outVehicleType, &outVehicleSeat);
  if ( LinkedVehicle == 2047 )
    return 0;
  GEntity = G_GetGEntity(LinkedVehicle);
  v16 = GEntity;
  if ( !GEntity )
    return 0;
  if ( !BG_IsVehicleEntity(&GEntity->s) )
    return 0;
  v17 = v16->vehicle;
  if ( !v17 )
    return 0;
  ServerDef = G_Vehicle_GetServerDef(v17->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2136, ASSERT_TYPE_ASSERT, "(otherVehDef)", (const char *)&queryFormat, "otherVehDef") )
    __debugbreak();
  return ServerDef->vehiclePhysicsDef.physicsEnabled && ServerDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_ATANGO;
}

/*
==============
G_Vehicle_BoatGetRockingAngles
==============
*/
void G_Vehicle_BoatGetRockingAngles(Vehicle *const veh, float *const targetPitch, float *const targetRoll)
{
  bool v11; 
  bool v12; 
  GVehicles *v14; 
  char v22; 
  const dvar_t *v62; 
  float s; 
  int v82; 
  float v83; 
  float v84; 
  float c; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 

  _RSI = targetRoll;
  _R14 = targetPitch;
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2831, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2832, ASSERT_TYPE_ASSERT, "( targetPitch )", (const char *)&queryFormat, "targetPitch") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2833, ASSERT_TYPE_ASSERT, "( targetRoll )", (const char *)&queryFormat, "targetRoll") )
    __debugbreak();
  _RBX = G_Vehicle_GetServerDef(_RDI->defIndex);
  v11 = _RBX->type <= VEH_BOAT;
  if ( _RBX->type != VEH_BOAT )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2836, ASSERT_TYPE_ASSERT, "( vehDef->type == VEH_BOAT )", (const char *)&queryFormat, "vehDef->type == VEH_BOAT");
    v11 = !v12;
    if ( v12 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0A8h]
    vcomiss xmm0, dword ptr [rdi+588h]
  }
  if ( v11 )
  {
    *_R14 = 0.0;
    *_RSI = 0.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm6
      vmovaps [rsp+108h+var_48], xmm7
      vmovaps [rsp+108h+var_58], xmm8
      vmovaps [rsp+108h+var_68], xmm9
    }
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v14 = GVehicles::ms_gVehiclesSystem;
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vcomiss xmm8, dword ptr [rbx+0A8h]
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2848, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingFadeoutSpeed > 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingFadeoutSpeed > 0") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+588h]
      vdivss  xmm2, xmm0, dword ptr [rbx+0A8h]
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm6, xmm2, dword ptr [rbx+9Ch]
    }
    v14->GetVehicleBoatRockingScale(v14);
    __asm
    {
      vucomiss xmm8, dword ptr [rbx+0A4h]
      vmulss  xmm9, xmm6, xmm0
    }
    if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2852, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingRotationPeriod != 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingRotationPeriod != 0") )
      __debugbreak();
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vdivss  xmm0, xmm1, dword ptr [rbx+0A4h]
      vaddss  xmm2, xmm0, dword ptr [rdi+600h]
      vmulss  xmm3, xmm2, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rdi+600h], xmm1
      vsubss  xmm1, xmm1, dword ptr [rdi+10Ch]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm7, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm0, xmm0, cs:__real@40c90fdb; radians
    }
    FastSinCos(*(const float *)&_XMM0, &s, &c);
    __asm
    {
      vmovss  xmm0, [rsp+108h+s]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  [rsp+108h+s], xmm1
      vucomiss xmm8, dword ptr [rbx+0A0h]
      vmovaps xmm8, [rsp+108h+var_58]
    }
    if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2858, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingPeriod != 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingPeriod != 0") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.time; level_locals_t level
      vmulss  xmm1, xmm0, cs:__real@3bcde32f
      vdivss  xmm0, xmm1, dword ptr [rbx+0A0h]; radians
    }
    FastSinCos(*(const float *)&_XMM0, &v84, &v83);
    __asm
    {
      vmulss  xmm1, xmm9, cs:__real@3e99999a
      vmulss  xmm5, xmm1, [rsp+108h+var_BC]
      vmulss  xmm6, xmm9, [rsp+108h+var_C0]
      vmulss  xmm0, xmm5, [rsp+108h+s]
      vmulss  xmm2, xmm6, [rsp+108h+c]
      vmovaps xmm9, [rsp+108h+var_68]
      vsubss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm6, [rsp+108h+s]
      vmulss  xmm0, xmm5, [rsp+108h+c]
      vmovss  dword ptr [r14], xmm1
      vaddss  xmm1, xmm2, xmm0
      vmulss  xmm2, xmm1, cs:__real@3fc00000
      vmovss  dword ptr [rsi], xmm2
      vmovss  xmm0, dword ptr [r14]
      vmovss  [rsp+108h+var_C4], xmm0
    }
    if ( (v82 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2868, ASSERT_TYPE_SANITY, "( !IS_NAN( *targetPitch ) )", (const char *)&queryFormat, "!IS_NAN( *targetPitch )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+108h+var_C4], xmm0
    }
    if ( (v82 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2869, ASSERT_TYPE_SANITY, "( !IS_NAN( *targetRoll ) )", (const char *)&queryFormat, "!IS_NAN( *targetRoll )") )
      __debugbreak();
    v62 = DCONST_DVARINT_bg_vehicleDebug;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v62);
    if ( v62->current.integer )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14]
        vmovss  xmm1, dword ptr [rsi]
        vmulss  xmm6, xmm0, cs:__real@41200000
        vmulss  xmm7, xmm1, cs:__real@c1200000
      }
      AnglesToAxis(&_RDI->phys.angles, &axis);
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+108h+axis]
        vmulss  xmm0, xmm7, dword ptr [rsp+108h+axis+0Ch]
        vmulss  xmm3, xmm6, dword ptr [rsp+108h+axis+4]
        vaddss  xmm1, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rsp+108h+axis+10h]
        vaddss  xmm2, xmm1, dword ptr [rcx]
        vaddss  xmm1, xmm3, xmm0
        vmulss  xmm3, xmm6, dword ptr [rsp+108h+axis+8]
        vmovss  dword ptr [rsp+108h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rcx+4]
        vmovss  dword ptr [rsp+108h+end+4], xmm2
        vmulss  xmm2, xmm7, dword ptr [rsp+108h+axis+14h]
        vaddss  xmm0, xmm3, xmm2
        vaddss  xmm3, xmm0, dword ptr [rcx+8]
        vmovss  dword ptr [rsp+108h+end+8], xmm3
      }
      G_DebugLine(&_RDI->phys.origin, &end, &colorBlue, 0);
    }
    __asm
    {
      vmovaps xmm6, [rsp+108h+var_38]
      vmovaps xmm7, [rsp+108h+var_48]
    }
  }
}

/*
==============
G_Vehicle_CalcAccel
==============
*/
void G_Vehicle_CalcAccel(const gentity_s *ent, const char *move, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  char v21; 
  const VehicleDef *v24; 
  unsigned __int16 number; 
  __int64 v44; 
  unsigned int v45; 
  __int64 v46; 
  gentity_s *v47; 
  bool v48; 
  bool v49; 
  int v61; 
  BOOL v65; 
  unsigned int v83; 
  bool v85; 
  bool v86; 
  bool v89; 
  bool v97; 
  bool v98; 
  unsigned __int16 v105; 
  __int64 v106; 
  unsigned int v107; 
  __int64 v108; 
  gentity_s *v109; 
  unsigned __int16 v174; 
  __int64 v175; 
  unsigned int v176; 
  __int64 v177; 
  gentity_s *v178; 
  char v193; 
  __int64 v223; 
  double v224; 
  __int64 v225; 
  double v226; 
  __int64 v227; 
  double v228; 
  __int64 v229; 
  double v230; 
  const VehicleDef *v234; 
  int v237[4]; 
  vec2_t vec; 
  char v239; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1114, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1115, ASSERT_TYPE_ASSERT, "( move )", (const char *)&queryFormat, "move") )
    __debugbreak();
  _RSI = ent->vehicle;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1118, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RAX = G_Vehicle_GetServerDef(_RSI->defIndex);
  __asm
  {
    vxorps  xmm10, xmm10, xmm10
    vcomiss xmm10, dword ptr [rsi+6B8h]
  }
  v24 = _RAX;
  v234 = _RAX;
  if ( v21 )
  {
    __asm
    {
      vmovss  xmm12, dword ptr [rsi+6C0h]
      vmovss  xmm8, dword ptr [rsi+6C4h]
    }
  }
  else
  {
    _RDX = ent->vehicle;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vcomiss xmm0, xmm10
    }
    if ( v21 )
      __asm { vmovss  xmm12, dword ptr [rdx+5A8h] }
    else
      __asm { vmovss  xmm12, dword ptr [rdx+5A4h] }
    __asm { vmovss  xmm8, dword ptr [rax+60h] }
  }
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vandps  xmm0, xmm0, xmm15
    vmulss  xmm6, xmm0, cs:__real@3c010204
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vandps  xmm0, xmm0, xmm15
    vmulss  xmm7, xmm0, cs:__real@3c010204
    vmovss  [rsp+168h+var_128], xmm7
    vmovss  [rsp+168h+var_124], xmm6
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm13, xmm0, cs:__real@3a83126f
    vdivss  xmm14, xmm1, xmm13
  }
  if ( !v24->camRelativeControl )
  {
    if ( *move > 0 )
    {
      __asm
      {
        vmulss  xmm0, xmm13, xmm8
        vaddss  xmm1, xmm0, dword ptr [rsi+144h]
        vmulss  xmm2, xmm1, xmm6
        vmovss  [rsp+168h+var_100], xmm2
      }
      goto LABEL_60;
    }
    if ( *move >= 0 )
    {
      __asm { vmovss  [rsp+168h+var_100], xmm10 }
      goto LABEL_60;
    }
LABEL_58:
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+144h]
      vmulss  xmm1, xmm13, xmm8
      vsubss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm6
      vmovss  [rsp+168h+var_100], xmm2
    }
    goto LABEL_60;
  }
  number = ent->r.ownerNum.number;
  if ( !number )
    goto LABEL_142;
  v44 = number;
  v45 = number - 1;
  if ( v45 >= 0x800 )
  {
    LODWORD(v223) = v45;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v223, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v46 = v44 - 1;
  if ( g_entities[v46].r.isInUse != g_entityIsInUse[v46] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v46] )
  {
    LODWORD(v227) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v227) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_142:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1150, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v47 = EntHandle::ent(&ent->r.ownerNum);
  v48 = v47->client == NULL;
  if ( !v47->client )
  {
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1154, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client");
    v48 = !v49;
    if ( v49 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm7 }
  _RAX = v47->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1DCh]
    vsubss  xmm1, xmm0, dword ptr [rsi+118h]
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
  }
  if ( v48 )
  {
    __asm { vcomiss xmm1, xmm10 }
    v65 = v48 && move[1] < 0;
    __asm { vcomiss xmm1, xmm10 }
    if ( v65 || move[1] > 0 )
    {
      __asm
      {
        vmulss  xmm0, xmm13, xmm8
        vaddss  xmm1, xmm0, dword ptr [rsi+144h]
        vmulss  xmm2, xmm1, xmm7
        vmovss  [rsp+168h+var_100], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+144h]
        vmulss  xmm1, xmm13, xmm8
        vsubss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm7
        vmovss  [rsp+168h+var_100], xmm2
      }
    }
    goto LABEL_60;
  }
  if ( *move > 0 )
  {
    __asm
    {
      vandps  xmm0, xmm1, xmm15
      vcomiss xmm0, cs:__real@42d20000
    }
  }
  if ( *move >= 0 )
  {
    v61 = 0;
  }
  else
  {
    __asm
    {
      vandps  xmm1, xmm1, xmm15
      vcomiss xmm1, cs:__real@42b40000
    }
    v61 = 1;
  }
  if ( !v61 )
    goto LABEL_58;
  __asm
  {
    vmulss  xmm0, xmm13, xmm8
    vaddss  xmm1, xmm0, dword ptr [rsi+144h]
    vmulss  xmm2, xmm1, xmm6
    vmovss  [rsp+168h+var_100], xmm2
  }
LABEL_60:
  __asm
  {
    vmovss  xmm11, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rsi+14Ch]
  }
  _RDI = v237;
  v83 = 0;
  _R12 = (char *)outBodyAccel - (char *)v237;
  v85 = 1;
  v86 = 1;
  __asm
  {
    vmovss  [rsp+168h+var_FC], xmm10
    vmovss  [rsp+168h+var_F8], xmm0
    vxorps  xmm7, xmm12, xmm11
    vxorps  xmm9, xmm8, xmm11
  }
  do
  {
    if ( !v85 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      v89 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227);
      v86 = !v89;
      if ( v89 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm7, xmm12
      vmovss  xmm6, dword ptr [rdi]
    }
    if ( !v86 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm12, xmm12
        vmovsd  [rsp+168h+var_138], xmm0
        vcvtss2sd xmm1, xmm7, xmm7
        vmovsd  [rsp+168h+var_140], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v224, v228) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vminss  xmm6, xmm0, xmm12
    }
    if ( v83 >= 3 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [rdi], xmm6 }
    if ( v83 >= 3 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227) )
        __debugbreak();
      LODWORD(v229) = 3;
      LODWORD(v225) = v83;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v225, v229) )
        __debugbreak();
    }
    __asm
    {
      vsubss  xmm1, xmm6, dword ptr [r15+rdi+144h]
      vmulss  xmm6, xmm1, xmm14
    }
    if ( v83 >= 3 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r12+rdi], xmm6 }
    v97 = v83 <= 3;
    if ( v83 >= 3 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      v98 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227);
      v97 = !v98;
      if ( v98 )
        __debugbreak();
    }
    __asm
    {
      vcomiss xmm9, xmm8
      vmovss  xmm6, dword ptr [r12+rdi]
    }
    if ( !v97 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  [rsp+168h+var_138], xmm0
        vcvtss2sd xmm1, xmm9, xmm9
        vmovsd  [rsp+168h+var_140], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v226, v230) )
        __debugbreak();
    }
    __asm
    {
      vmaxss  xmm0, xmm6, xmm9
      vminss  xmm6, xmm0, xmm8
    }
    if ( v83 >= 3 )
    {
      LODWORD(v227) = 3;
      LODWORD(v223) = v83;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v223, v227) )
        __debugbreak();
    }
    __asm { vmovss  dword ptr [r12+rdi], xmm6 }
    ++_RDI;
    v85 = ++v83 < 3;
    v86 = v83 <= 3;
  }
  while ( (int)v83 < 3 );
  _R15 = v234;
  if ( !v234->camRelativeControl )
  {
    if ( move[2] > 0 )
    {
      v174 = ent->r.ownerNum.number;
      if ( !v174 )
        goto LABEL_143;
      v175 = v174;
      v176 = v174 - 1;
      if ( v176 >= 0x800 )
      {
        LODWORD(v227) = 2048;
        LODWORD(v223) = v176;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v223, v227) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v177 = v175 - 1;
      if ( g_entities[v177].r.isInUse != g_entityIsInUse[v177] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v177] )
      {
        LODWORD(v227) = ent->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v227) )
          __debugbreak();
      }
      if ( !ent->r.ownerNum.number )
      {
LABEL_143:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1246, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
          __debugbreak();
      }
      v178 = EntHandle::ent(&ent->r.ownerNum);
      if ( !v178->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1250, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
        __debugbreak();
      _RAX = v178->client;
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vmovss  xmm0, dword ptr [rax+1DCh]
        vsubss  xmm1, xmm0, dword ptr [rsi+118h]
        vmulss  xmm6, xmm1, cs:__real@3b360b61
        vaddss  xmm4, xmm6, cs:__real@3f000000
        vroundss xmm5, xmm3, xmm4, 1
        vsubss  xmm0, xmm6, xmm5
        vmulss  xmm3, xmm0, cs:__real@43b40000
        vmulss  xmm0, xmm3, xmm14; val
      }
      goto LABEL_132;
    }
    v193 = move[1];
    if ( v193 >= 0 )
    {
      if ( v193 <= 0 )
      {
LABEL_138:
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+5ACh]; max
          vxorps  xmm1, xmm2, xmm11; min
          vmovaps xmm0, xmm10; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vsubss  xmm1, xmm0, dword ptr [rsi+16Ch] }
        _RBX = outRotAccel;
        __asm
        {
          vmulss  xmm0, xmm1, xmm14; val
          vmovss  dword ptr [rbx+4], xmm0
          vmovss  xmm2, dword ptr [r15+68h]; max
          vxorps  xmm1, xmm2, xmm11; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        goto LABEL_139;
      }
      __asm
      {
        vmulss  xmm1, xmm13, dword ptr [r15+68h]
        vmovss  xmm0, dword ptr [rsi+16Ch]
        vsubss  xmm1, xmm0, xmm1
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm13, dword ptr [r15+68h]
        vaddss  xmm1, xmm0, dword ptr [rsi+16Ch]
      }
    }
    __asm { vmulss  xmm10, xmm1, [rsp+168h+var_128] }
    goto LABEL_138;
  }
  v105 = ent->r.ownerNum.number;
  if ( !v105 )
    goto LABEL_144;
  v106 = v105;
  v107 = v105 - 1;
  if ( v107 >= 0x800 )
  {
    LODWORD(v227) = 2048;
    LODWORD(v223) = v107;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v223, v227) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v108 = v106 - 1;
  if ( g_entities[v108].r.isInUse != g_entityIsInUse[v108] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v108] )
  {
    LODWORD(v227) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v227) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_144:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1209, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v109 = EntHandle::ent(&ent->r.ownerNum);
  if ( !v109->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1213, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  _RAX = v109->client;
  __asm
  {
    vmovss  xmm5, dword ptr [rsi+118h]
    vmovss  xmm12, cs:__real@3b360b61
    vmovss  xmm13, cs:__real@3f000000
    vmovss  xmm4, dword ptr [rax+1DCh]
    vmovss  xmm6, cs:__real@43b40000
    vsubss  xmm0, xmm4, xmm5
    vmulss  xmm3, xmm0, xmm12
    vaddss  xmm1, xmm3, xmm13
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm2, xmm7, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm8, xmm0, xmm6
    vandps  xmm1, xmm8, xmm15
    vcomiss xmm1, cs:__real@42d20000
    vcomiss xmm1, cs:__real@42b40000
    vmovss  xmm9, cs:__real@43340000
    vmovss  xmm2, dword ptr [rsi+5ACh]; max
    vaddss  xmm0, xmm4, xmm9
    vsubss  xmm1, xmm0, xmm5
    vmulss  xmm5, xmm1, xmm12
    vaddss  xmm3, xmm5, xmm13
    vroundss xmm4, xmm7, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, xmm6
    vmulss  xmm4, xmm3, xmm14
    vmulss  xmm0, xmm4, [rsp+168h+var_124]; val
    vxorps  xmm1, xmm2, xmm11; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm10, xmm0 }
  _EAX = *move;
  __asm { vmovd   xmm0, eax }
  _EAX = move[1];
  __asm
  {
    vmovd   xmm1, eax
    vcvtdq2ps xmm1, xmm1
    vcvtdq2ps xmm0, xmm0
    vmovss  dword ptr [rsp+168h+vec+4], xmm1
    vmovss  dword ptr [rsp+168h+vec], xmm0
  }
  *(double *)&_XMM0 = vectosignedyaw(&vec);
  __asm
  {
    vsubss  xmm1, xmm8, xmm0
    vmovss  xmm8, cs:__real@43b40000
    vmulss  xmm5, xmm1, xmm12
    vaddss  xmm3, xmm5, xmm13
    vroundss xmm4, xmm7, xmm3, 1
    vsubss  xmm2, xmm5, xmm4
    vmulss  xmm1, xmm2, xmm8
    vandps  xmm1, xmm1, xmm15
    vcomiss xmm1, cs:__real@42b40000
    vmovaps xmm6, xmm0
  }
  if ( !(v21 | v48) )
  {
    __asm
    {
      vsubss  xmm0, xmm0, xmm9
      vmulss  xmm4, xmm0, xmm12
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm13
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm7, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm8
    }
  }
  _RAX = v109->client;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+5ACh]; max
    vmovss  xmm0, dword ptr [rax+1DCh]
    vsubss  xmm1, xmm0, xmm6
    vsubss  xmm3, xmm1, dword ptr [rsi+118h]
    vmulss  xmm6, xmm3, xmm12
    vaddss  xmm4, xmm6, xmm13
    vroundss xmm5, xmm7, xmm4, 1
    vsubss  xmm0, xmm6, xmm5
    vmulss  xmm0, xmm0, xmm8; val
    vxorps  xmm1, xmm2, xmm11; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm14
    vmulss  xmm2, xmm1, [rsp+168h+var_128]
    vaddss  xmm0, xmm10, xmm2
  }
LABEL_132:
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+5ACh]; max
    vxorps  xmm1, xmm2, xmm11; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vsubss  xmm1, xmm0, dword ptr [rsi+16Ch] }
  _RBX = outRotAccel;
  __asm { vmulss  xmm0, xmm1, xmm14 }
LABEL_139:
  __asm
  {
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm0, xmm14, dword ptr [rsi+168h]
    vxorps  xmm0, xmm0, xmm11; val
    vmovss  dword ptr [rbx], xmm0
    vmovss  xmm2, dword ptr [r15+68h]; max
    vxorps  xmm1, xmm2, xmm11; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbx], xmm0
    vmulss  xmm1, xmm14, dword ptr [rsi+170h]
    vxorps  xmm0, xmm1, xmm11; val
    vmovss  dword ptr [rbx+8], xmm0
    vmovss  xmm2, dword ptr [r15+68h]; max
    vxorps  xmm1, xmm2, xmm11; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  _R11 = &v239;
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
G_Vehicle_CalcImpactDamageForScriptable
==============
*/

int __fastcall G_Vehicle_CalcImpactDamageForScriptable(const Vehicle *veh, unsigned int scriptableIndex, double collDmg, double collSpeed, vec3_t *outDmgDir)
{
  bool v12; 
  bool IsValid; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v15; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v17; 
  bool v18; 
  int result; 
  int v46; 
  float v48; 
  __int16 v51; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  _RSI = outDmgDir;
  _RBX = veh;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2594, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v12 = _RBX == NULL;
  if ( !_RBX )
    goto LABEL_10;
  IsValid = BGVehicles::PhysicsIsValid(_RBX->physicsVehicle);
  v12 = !IsValid;
  if ( !IsValid )
    goto LABEL_10;
  v12 = GVehicles::ms_gVehiclesSystem == NULL;
  if ( !GVehicles::ms_gVehiclesSystem )
    goto LABEL_10;
  VehicleSystem = GVehicles::GetVehicleSystem();
  v15 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v15, _RBX->physicsVehicle);
  v17 = ObjectById;
  v12 = ObjectById == NULL;
  if ( ObjectById && (v18 = ObjectById->SupportsFeature(ObjectById, VPFEAT_DAMAGE_CALCULATION), v12 = !v18, v18) )
  {
    v46 = 0;
    __asm
    {
      vmovss  [rsp+0A8h+var_68], xmm7
      vmovss  [rsp+0A8h+var_64], xmm6
    }
    v51 = 1;
    _RAX = ScriptableSv_GetInstanceOrigin(scriptableIndex);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax]
      vmovsd  [rsp+0A8h+var_74], xmm0
    }
    v48 = _RAX->v[2];
    result = v17->CalcDamage(v17, (const BgVehiclePhysicsDamageSetup *)&v46, outDmgDir);
  }
  else
  {
LABEL_10:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+13Ch]
      vmovss  xmm4, dword ptr [rbx+138h]
      vmovss  xmm3, dword ptr [rbx+140h]
      vmulss  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm5, xmm2, xmm2
      vcmpless xmm0, xmm5, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000; max
      vblendvps xmm0, xmm5, xmm2, xmm0
      vdivss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rsi], xmm0
      vmulss  xmm1, xmm3, dword ptr [rbx+13Ch]
      vmovss  dword ptr [rsi+4], xmm1
      vmovss  xmm1, cs:__real@3a83126f
      vcomiss xmm5, xmm1
      vmulss  xmm0, xmm3, dword ptr [rbx+140h]
      vmovss  dword ptr [rsi+8], xmm0
    }
    if ( v12 )
    {
      result = 0;
    }
    else
    {
      __asm
      {
        vcomiss xmm6, xmm1
        vmovss  xmm0, dword ptr [rbx+588h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vdivss  xmm0, xmm0, xmm6; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm7
        vcvttss2si eax, xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
  return result;
}

/*
==============
G_Vehicle_CalcPhysVelFromPrevState
==============
*/
void G_Vehicle_CalcPhysVelFromPrevState(Vehicle *veh)
{
  tmat33_t<vec3_t> axis; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovaps [rsp+118h+var_A8], xmm15
  }
  _RDI = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3313, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  AnglesToAxis(&_RDI->phys.angles, &axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+140h]
    vmovss  xmm14, dword ptr [rdi+138h]
    vmovss  xmm15, dword ptr [rdi+13Ch]
    vmovss  [rsp+118h+var_E8], xmm0
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovd   xmm1, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovss  xmm0, cs:__real@447a0000
    vmovss  xmm10, dword ptr [rsp+118h+axis+10h]
    vmovss  xmm7, dword ptr [rsp+118h+axis+0Ch]
    vmovss  xmm8, dword ptr [rsp+118h+axis+14h]
    vmovss  xmm6, dword ptr [rsp+118h+axis+1Ch]
    vmovss  xmm4, dword ptr [rsp+118h+axis+18h]
    vmovss  xmm5, dword ptr [rsp+118h+axis+20h]
    vcvtdq2ps xmm1, xmm1
    vdivss  xmm13, xmm0, xmm1
    vmovss  xmm0, dword ptr [rdi+0F0h]
    vsubss  xmm3, xmm0, dword ptr [rdi+0FCh]
    vmovss  dword ptr [rdi+138h], xmm3
    vmovss  xmm1, dword ptr [rdi+0F4h]
    vsubss  xmm0, xmm1, dword ptr [rdi+100h]
    vmovss  dword ptr [rdi+13Ch], xmm0
    vmovss  xmm2, dword ptr [rdi+0F8h]
    vsubss  xmm1, xmm2, dword ptr [rdi+104h]
    vmovss  dword ptr [rdi+140h], xmm1
    vmulss  xmm2, xmm3, xmm13
    vmulss  xmm1, xmm2, dword ptr [rsp+118h+axis]
    vmovss  dword ptr [rdi+138h], xmm2
    vmulss  xmm0, xmm13, dword ptr [rdi+13Ch]
    vmovss  dword ptr [rdi+13Ch], xmm0
    vmulss  xmm3, xmm13, dword ptr [rdi+140h]
    vmulss  xmm0, xmm0, dword ptr [rsp+118h+axis+4]
    vmovss  dword ptr [rdi+140h], xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rsp+118h+axis+8]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+144h], xmm0
    vmulss  xmm1, xmm10, dword ptr [rdi+13Ch]
    vmulss  xmm0, xmm7, dword ptr [rdi+138h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm8, dword ptr [rdi+140h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+148h], xmm1
    vmulss  xmm1, xmm6, dword ptr [rdi+13Ch]
    vmulss  xmm0, xmm4, dword ptr [rdi+138h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [rdi+140h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [rdi+14Ch], xmm1
    vmovss  xmm0, dword ptr [rdi+138h]
    vsubss  xmm3, xmm0, xmm14
    vmovss  dword ptr [rdi+150h], xmm3
    vmovss  xmm1, dword ptr [rdi+13Ch]
    vsubss  xmm0, xmm1, xmm15
    vmovss  dword ptr [rdi+154h], xmm0
    vmovss  xmm2, dword ptr [rdi+140h]
    vsubss  xmm1, xmm2, [rsp+118h+var_E8]
    vmovss  dword ptr [rdi+158h], xmm1
    vmulss  xmm2, xmm3, xmm13
    vmulss  xmm1, xmm2, dword ptr [rsp+118h+axis]
    vmovss  dword ptr [rdi+150h], xmm2
    vmulss  xmm0, xmm13, dword ptr [rdi+154h]
    vmovss  dword ptr [rdi+154h], xmm0
    vmulss  xmm0, xmm0, dword ptr [rsp+118h+axis+4]
    vmulss  xmm3, xmm13, dword ptr [rdi+158h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, dword ptr [rsp+118h+axis+8]
    vmovss  dword ptr [rdi+158h], xmm3
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rdi+15Ch], xmm2
    vmulss  xmm1, xmm10, dword ptr [rdi+154h]
    vmulss  xmm0, xmm7, dword ptr [rdi+150h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rdi+158h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+160h], xmm0
    vmulss  xmm1, xmm6, dword ptr [rdi+154h]
    vmulss  xmm0, xmm4, dword ptr [rdi+150h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rdi+158h]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rdi+164h], xmm0
  }
  AnglesSubtract(&_RDI->phys.angles, &_RDI->phys.prevAngles, &_RDI->phys.rotVel);
  __asm
  {
    vmulss  xmm0, xmm13, dword ptr [rdi+168h]
    vmovss  dword ptr [rdi+168h], xmm0
    vmulss  xmm1, xmm13, dword ptr [rdi+16Ch]
    vmovss  dword ptr [rdi+16Ch], xmm1
    vmulss  xmm0, xmm13, dword ptr [rdi+170h]
    vmovss  dword ptr [rdi+170h], xmm0
  }
  _R11 = &v91;
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
    vmovaps xmm15, [rsp+118h+var_A8]
  }
}

/*
==============
G_Vehicle_CanAllocateVehicle
==============
*/
__int64 G_Vehicle_CanAllocateVehicle()
{
  int v0; 
  Vehicle *i; 

  v0 = 0;
  for ( i = s_vehicleServers; i->ent; ++i )
  {
    if ( (unsigned int)++v0 >= 0x80 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
G_Vehicle_CanPlayerEnterVehicle
==============
*/
bool G_Vehicle_CanPlayerEnterVehicle(const gentity_s *player)
{
  gclient_s *client; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  gclient_s *v5; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4382, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( EntHandle::isDefined(&player->r.ownerNum) )
    return 0;
  client = player->client;
  if ( !client )
    return 0;
  if ( client->sess.unusableVehicles )
    return 0;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    return 0;
  p_otherFlags = &client->ps.otherFlags;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xBu) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Bu) )
    return 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    return 0;
  }
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4352, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( player->health <= 0 )
    return 0;
  v5 = player->client;
  return (v5->flags & 4) == 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v5->ps.otherFlags, ACTIVE, 1u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v5->ps.pm_flags, ACTIVE, 5u);
}

/*
==============
G_Vehicle_CanPlayerPlaceTank
==============
*/

__int64 __fastcall G_Vehicle_CanPlayerPlaceTank(const gentity_s *player, double boundingRadius, double boundingHeight, double startForward, const float startUp, const float sweepDistance, const float plancementMinNormal, vec3_t *outOrigin, vec3_t *outAngles)
{
  signed __int64 v9; 
  void *v20; 
  __int64 result; 
  GUtils *v61; 
  unsigned int v63; 
  unsigned int v64; 
  gentity_s *v66; 
  gclient_s *client; 
  const dvar_t *v90; 
  const dvar_t *v93; 
  const dvar_t *v109; 
  unsigned __int16 EntityHitId; 
  bool v127; 
  bool v128; 
  unsigned int v138; 
  char v164; 
  char v165; 
  char v210; 
  char v211; 
  int *skipEntities; 
  int *skipEntitiesa; 
  int *skipEntitiesb; 
  __int64 numSkipEntities; 
  __int64 numSkipEntitiesa; 
  int clientNum; 
  unsigned int outNumPlayers; 
  float c; 
  float s; 
  vec3_t v222; 
  vec3_t forward; 
  vec3_t v224; 
  vec3_t v225; 
  Bounds box; 
  vec3_t start; 
  vec3_t v228; 
  vec3_t cross; 
  vec3_t v230; 
  vec3_t v231; 
  vec3_t angles; 
  tmat33_t<vec3_t> v233; 
  vec3_t end; 
  vec3_t v235; 
  vec3_t origin; 
  vec3_t v237; 
  trace_t results; 
  vec3_t v0; 
  vec3_t v1; 
  int v243[4]; 
  unsigned __int16 outPlayerEntIds[2048]; 
  char v255; 

  v20 = alloca(v9);
  __asm
  {
    vmovaps [rsp+1320h+var_30], xmm6
    vmovaps [rsp+1320h+var_40], xmm7
    vmovaps [rsp+1320h+var_50], xmm8
    vmovaps [rsp+1320h+var_70], xmm10
    vmovaps [rsp+1320h+var_A0], xmm13
    vmovaps [rsp+1320h+var_B0], xmm14
    vmovaps [rsp+1320h+var_C0], xmm15
  }
  _RDI = outOrigin;
  _R13 = outAngles;
  __asm
  {
    vmovss  xmm14, [rbp+1220h+sweepDistance]
    vmovaps xmm7, xmm3
    vmovaps xmm13, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6036, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6037, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  _R14 = player->client;
  if ( _R14->ps.clientNum >= (unsigned int)level.maxclients )
  {
    LODWORD(skipEntities) = _R14->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6040, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( level.maxclients )", "ps->clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", skipEntities, level.maxclients) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+30h]
    vmovss  dword ptr [rbp+1220h+start], xmm0
    vmovss  xmm1, dword ptr [r14+34h]
    vmovss  dword ptr [rbp+1220h+start+4], xmm1
    vmovss  xmm0, dword ptr [r14+38h]
    vmovss  dword ptr [rbp+1220h+start+8], xmm0
    vaddss  xmm0, xmm0, dword ptr [r14+1E8h]
    vmovss  dword ptr [rbp+1220h+start+8], xmm0
    vmovss  xmm15, dword ptr [r14+1DCh]
    vxorps  xmm10, xmm10, xmm10
  }
  outAngles->v[0] = 0.0;
  outAngles->v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [r13+4], xmm15
    vmovss  dword ptr [rbp+1220h+angles+4], xmm15
    vmovss  dword ptr [rbp+1220h+angles], xmm10
    vmovss  dword ptr [rbp+1220h+angles+8], xmm10
  }
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+30h]
    vmulss  xmm1, xmm7, dword ptr [rbp+1220h+forward]
    vmovss  dword ptr [rsp+1320h+var_12A8], xmm2
    vmovss  xmm3, dword ptr [r14+34h]
    vaddss  xmm6, xmm1, xmm2
    vmulss  xmm1, xmm7, dword ptr [rbp+1220h+forward+4]
    vmulss  xmm2, xmm7, dword ptr [rbp+1220h+forward+8]
    vmovss  dword ptr [rsp+1320h+var_12A8+4], xmm3
    vmovss  xmm5, dword ptr [r14+38h]
    vaddss  xmm4, xmm1, xmm3
    vaddss  xmm1, xmm5, [rbp+1220h+startUp]
    vaddss  xmm3, xmm2, xmm1
    vmovss  dword ptr [rsp+1320h+var_12A8], xmm6
    vmovss  dword ptr [rsp+1320h+var_12A8+4], xmm4
    vmovss  dword ptr [rbp+1220h+var_12A8+8], xmm3
    vmovss  dword ptr [rbp+1220h+var_1288], xmm6
    vmovss  dword ptr [rbp+1220h+var_1288+4], xmm4
    vsubss  xmm0, xmm3, xmm14
    vmovss  dword ptr [rbp+1220h+var_1288+8], xmm0
    vmovss  xmm1, dword ptr [r14+30h]
    vmovss  dword ptr [rbp+1220h+end], xmm1
    vmovss  xmm0, dword ptr [r14+34h]
    vmovss  dword ptr [rbp+1220h+end+4], xmm0
    vmovss  xmm1, dword ptr [r14+38h]
    vsubss  xmm2, xmm1, cs:__real@42f00000
    vmovss  dword ptr [rbp+1220h+end+8], xmm2
  }
  clientNum = _R14->ps.clientNum;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, &clientNum, 1, 33636369, NULL, 0, NULL, NULL);
  if ( Trace_GetGlassHitId(&results) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [r14+38h]
      vmovss  xmm0, dword ptr [rsp+1320h+var_12A8]
      vmovss  xmm1, dword ptr [rsp+1320h+var_12A8+4]
      vmovss  dword ptr [rdi], xmm0
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  dword ptr [rdi+8], xmm2
    }
    result = 0i64;
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm7, dword ptr [rbp+1220h+forward]
      vmulss  xmm0, xmm7, dword ptr [rbp+1220h+forward+4]
      vmulss  xmm2, xmm7, dword ptr [rbp+1220h+forward+8]
      vmovaps [rsp+1320h+var_60], xmm9
      vaddss  xmm9, xmm1, dword ptr [r14+30h]
      vmovaps [rsp+1320h+var_80], xmm11
      vaddss  xmm11, xmm0, dword ptr [r14+34h]
      vmovaps [rsp+1320h+var_90], xmm12
      vaddss  xmm12, xmm2, dword ptr [r14+38h]
    }
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    v61 = GUtils::ms_gUtils;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6079, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
      __debugbreak();
    __asm { vmovss  xmm2, cs:__real@43000000; radius }
    GUtils::GetPlayersInRadius(v61, &_R14->ps.origin, *(float *)&_XMM2, 0x800u, &outNumPlayers, outPlayerEntIds);
    v63 = outNumPlayers;
    v64 = 0;
    if ( outNumPlayers )
    {
      __asm { vmovss  xmm6, cs:__real@40800000 }
      do
      {
        v66 = &g_entities[outPlayerEntIds[v64]];
        if ( v66->s.number != _R14->ps.clientNum )
        {
          client = v66->client;
          if ( client )
          {
            if ( client->ps.clientNum >= (unsigned int)level.maxclients )
            {
              LODWORD(numSkipEntities) = level.maxclients;
              LODWORD(skipEntitiesa) = client->ps.clientNum;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6092, ASSERT_TYPE_ASSERT, "(unsigned)( hit->client->ps.clientNum ) < (unsigned)( level.maxclients )", "hit->client->ps.clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", skipEntitiesa, numSkipEntities) )
                __debugbreak();
            }
            __asm { vmovss  dword ptr [rbp+1220h+var_1220], xmm10 }
            _RAX = v66->client;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+1DCh]
              vmovss  dword ptr [rbp+1220h+var_1220+4], xmm0
              vmovss  dword ptr [rbp+1220h+var_1220+8], xmm10
            }
            AngleVectors(&v230, &v235, NULL, NULL);
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rbp+1220h+var_11B8]
              vaddss  xmm3, xmm1, dword ptr [rax+30h]
              vmulss  xmm1, xmm7, dword ptr [rbp+1220h+var_11B8+4]
              vmovss  dword ptr [rbp+1220h+origin], xmm3
              vaddss  xmm4, xmm1, dword ptr [rax+34h]
              vmulss  xmm1, xmm7, dword ptr [rbp+1220h+var_11B8+8]
              vsubss  xmm0, xmm11, xmm4
              vmovss  dword ptr [rbp+1220h+origin+4], xmm4
              vaddss  xmm2, xmm1, dword ptr [rax+38h]
              vmulss  xmm1, xmm0, xmm0
              vsubss  xmm4, xmm12, xmm2
              vsubss  xmm3, xmm9, xmm3
              vmulss  xmm0, xmm3, xmm3
              vmovss  dword ptr [rbp+1220h+origin+8], xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm8, xmm6
              vmulss  xmm2, xmm0, xmm8
              vcomiss xmm3, xmm2
            }
            if ( v164 )
            {
              v93 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
              if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v93);
              if ( v93->current.enabled )
              {
                __asm { vmovss  xmm2, dword ptr [rbp+1220h+var_1220+4]; yaw }
                G_DebugBox(&origin, &box, *(float *)&_XMM2, &colorRed, 1, 0);
              }
LABEL_38:
              __asm
              {
                vmovss  xmm2, dword ptr [r14+38h]
                vmovss  xmm1, dword ptr [rsp+1320h+var_12A8+4]
                vmovss  xmm0, dword ptr [rsp+1320h+var_12A8]
                vmovss  dword ptr [rdi+8], xmm2
                vmovss  dword ptr [rdi+4], xmm1
                vmovss  dword ptr [rdi], xmm0
              }
              goto LABEL_39;
            }
            v63 = outNumPlayers;
          }
        }
        ++v64;
      }
      while ( v64 < v63 );
    }
    __asm
    {
      vmulss  xmm1, xmm8, dword ptr [rbp+1220h+forward]
      vaddss  xmm2, xmm1, dword ptr [rsp+1320h+var_12A8]
      vmulss  xmm1, xmm8, dword ptr [rbp+1220h+forward+4]
      vmovss  xmm0, dword ptr [rbp+1220h+var_12A8+8]
    }
    *(_QWORD *)outAngles->v = 0i64;
    outAngles->v[2] = 0.0;
    v90 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
    __asm
    {
      vmovss  dword ptr [rbp+1220h+var_1210], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+1320h+var_12A8+4]
      vxorps  xmm1, xmm1, xmm1
      vmovups xmmword ptr [rbp+1220h+box.midPoint], xmm1
      vmovss  dword ptr [rbp+1220h+var_1210+4], xmm2
      vmovss  dword ptr [rbp+1220h+var_1210+8], xmm0
      vmovss  dword ptr [rbp+1220h+box.halfSize+4], xmm10
      vmovss  dword ptr [rbp+1220h+box.halfSize+8], xmm10
    }
    if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v90);
    if ( v90->current.enabled )
      G_DebugLineWithDuration(&start, &v231, &colorLtBlue, 1, 0);
    clientNum = _R14->ps.clientNum;
    PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &v231, &bounds_origin, &clientNum, 1, 33636369, NULL, 0, NULL, NULL);
    if ( results.startsolid || results.allsolid || Trace_GetEntityHitId(&results) != 2047 )
      goto LABEL_38;
    v109 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
    __asm
    {
      vmovss  dword ptr [rbp+1220h+box.midPoint+8], xmm13
      vmovss  dword ptr [rbp+1220h+box.halfSize], xmm8
      vmovss  dword ptr [rbp+1220h+box.halfSize+4], xmm8
      vmovss  dword ptr [rbp+1220h+box.halfSize+8], xmm13
    }
    if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v109);
    _ER12 = 0;
    if ( v109->current.enabled )
    {
      G_DebugLineWithDuration(&v222, &v224, &colorBlue, 1, 0);
      __asm { vmovaps xmm2, xmm15; yaw }
      G_DebugBox(&v222, &box, *(float *)&_XMM2, &colorYellow, 1, 0);
      __asm { vmovaps xmm2, xmm15; yaw }
      G_DebugBox(&v224, &box, *(float *)&_XMM2, &colorRed, 1, 0);
    }
    clientNum = _R14->ps.clientNum;
    PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &v222, &v224, &box, &clientNum, 1, 33636881, NULL, 0, NULL, NULL);
    v127 = !results.startsolid;
    __asm
    {
      vmovss  xmm5, [rbp+1220h+results.fraction]
      vmovss  xmm0, dword ptr [rbp+1220h+var_1288]
      vsubss  xmm1, xmm0, dword ptr [rsp+1320h+var_12A8]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+1320h+var_12A8]
      vmovss  xmm1, dword ptr [rbp+1220h+var_1288+4]
      vmovss  dword ptr [rdi], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+1320h+var_12A8+4]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+1320h+var_12A8+4]
      vmovss  xmm0, dword ptr [rbp+1220h+var_1288+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+1220h+var_12A8+8]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rdi+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rbp+1220h+var_12A8+8]
      vmovss  dword ptr [rdi+8], xmm3
    }
    if ( !v127 || results.allsolid )
    {
      outOrigin->v[2] = _R14->ps.origin.v[2];
      goto LABEL_39;
    }
    EntityHitId = Trace_GetEntityHitId(&results);
    v127 = EntityHitId == 2048;
    if ( EntityHitId >= 0x800u )
    {
      LODWORD(numSkipEntitiesa) = 2048;
      LODWORD(skipEntitiesb) = EntityHitId;
      v128 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6171, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ( 2048 ) )", "hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntitiesb, numSkipEntitiesa);
      v127 = !v128;
      if ( v128 )
        __debugbreak();
    }
    __asm { vucomiss xmm14, xmm10 }
    if ( v127 || EntityHitId == 2046 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1220h+angles+4]
        vmovss  xmm9, cs:__real@3f800000
        vmulss  xmm0, xmm0, cs:__real@3c8efa35; radians
        vmovaps xmm7, xmm10
        vmovaps xmm6, xmm10
        vmovss  dword ptr [rbp+1220h+cross], xmm7
        vmovss  dword ptr [rbp+1220h+cross+4], xmm6
        vmovss  dword ptr [rbp+1220h+cross+8], xmm9
      }
      FastSinCos(*(const float *)&_XMM0, &s, &c);
      __asm
      {
        vucomiss xmm14, xmm10
        vmovaps xmm8, xmm10
        vmovaps xmm11, xmm9
      }
      if ( !v127 )
      {
        __asm
        {
          vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovss  xmm12, cs:__real@bf800000
        }
        v138 = 0;
        _RSI = v243;
        while ( 1 )
        {
          __asm { vmovd   xmm1, r12d }
          _EAX = v138 & 1;
          __asm
          {
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm12, xmm2
            vmulss  xmm1, xmm0, dword ptr [rbp+1220h+box.halfSize]
            vaddss  xmm7, xmm1, dword ptr [rbp+1220h+box.midPoint]
            vmovd   xmm1, r12d
          }
          _EAX = v138 & 2;
          __asm
          {
            vmovd   xmm0, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm12, xmm2
            vmulss  xmm1, xmm0, dword ptr [rbp+1220h+box.halfSize+4]
            vaddss  xmm5, xmm1, dword ptr [rbp+1220h+box.midPoint+4]
            vmulss  xmm0, xmm5, [rsp+1320h+s]
            vmulss  xmm2, xmm7, [rsp+1320h+c]
            vsubss  xmm1, xmm2, xmm0
            vaddss  xmm6, xmm1, dword ptr [rsp+1320h+var_12A8]
            vmulss  xmm0, xmm7, [rsp+1320h+s]
            vmulss  xmm2, xmm5, [rsp+1320h+c]
            vaddss  xmm1, xmm2, xmm0
            vmovss  xmm0, dword ptr [rbp+1220h+var_12A8+8]
            vaddss  xmm3, xmm1, dword ptr [rsp+1320h+var_12A8+4]
            vmovss  dword ptr [rbp+1220h+var_1278+8], xmm0
            vsubss  xmm0, xmm0, xmm14
            vmovss  dword ptr [rbp+1220h+var_1240+8], xmm0
            vmovss  dword ptr [rbp+1220h+var_1278], xmm6
            vmovss  dword ptr [rbp+1220h+var_1278+4], xmm3
            vmovss  dword ptr [rbp+1220h+var_1240], xmm6
            vmovss  dword ptr [rbp+1220h+var_1240+4], xmm3
          }
          clientNum = _R14->ps.clientNum;
          PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &v225, &v228, &bounds_origin, &clientNum, 1, 33636881, NULL, 0, NULL, NULL);
          __asm
          {
            vmovss  xmm7, [rbp+1220h+results.fraction]
            vucomiss xmm7, xmm9
          }
          if ( v165 )
            goto LABEL_39;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1220h+var_1240]
            vsubss  xmm1, xmm0, dword ptr [rbp+1220h+var_1278]
            vmovss  xmm0, dword ptr [rbp+1220h+var_1240+4]
            vmulss  xmm2, xmm1, xmm7
            vsubss  xmm1, xmm0, dword ptr [rbp+1220h+var_1278+4]
            vaddss  xmm6, xmm2, dword ptr [rbp+1220h+var_1278]
            vmovss  xmm0, dword ptr [rbp+1220h+var_1240+8]
            vmulss  xmm2, xmm1, xmm7
            vsubss  xmm1, xmm0, dword ptr [rbp+1220h+var_1278+8]
            vaddss  xmm5, xmm2, dword ptr [rbp+1220h+var_1278+4]
            vmulss  xmm2, xmm1, xmm7
            vaddss  xmm4, xmm2, dword ptr [rbp+1220h+var_1278+8]
            vcomiss xmm4, dword ptr [rdi+8]
            vsubss  xmm1, xmm4, dword ptr [rdi+8]
            vandps  xmm1, xmm1, xmm11
            vcmpltss xmm0, xmm8, xmm1
            vblendvps xmm0, xmm8, xmm1, xmm0
            vmovss  [rsp+1320h+var_12C0], xmm0
            vmovss  dword ptr [rbp+1220h+var_1198], xmm6
            vmovss  dword ptr [rbp+1220h+var_1198+4], xmm5
            vmovss  dword ptr [rbp+1220h+var_1198+8], xmm4
            vmovss  dword ptr [rsi-8], xmm6
            vmovss  dword ptr [rsi-4], xmm5
            vmovss  dword ptr [rsi], xmm4
          }
          if ( !(v164 | v165) )
            __asm { vmovss  dword ptr [rdi+8], xmm4 }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicle_placement_debug, "bg_vehicle_placement_debug") )
            G_DebugLineWithDuration(&v225, &v237, &colorLtBlue, 1, 0);
          ++v138;
          _RSI += 3;
          if ( v138 >= 4 )
          {
            __asm
            {
              vmovss  xmm0, [rbp+1220h+var_1108]
              vsubss  xmm1, xmm0, [rbp+1220h+var_10E4]
              vmovss  xmm2, [rbp+1220h+var_1104]
              vsubss  xmm0, xmm2, [rbp+1220h+var_10E0]
              vmovss  dword ptr [rbp+1220h+v0], xmm1
              vmovss  xmm1, [rbp+1220h+var_1100]
              vsubss  xmm2, xmm1, [rbp+1220h+var_10DC]
              vmovss  dword ptr [rbp+1220h+v0+4], xmm0
              vmovss  xmm0, [rbp+1220h+var_10FC]
              vsubss  xmm1, xmm0, [rbp+1220h+var_10F0]
              vmovss  dword ptr [rbp+1220h+v0+8], xmm2
              vmovss  xmm2, [rbp+1220h+var_10F8]
              vsubss  xmm0, xmm2, [rbp+1220h+var_10EC]
              vmovss  dword ptr [rbp+1220h+v1], xmm1
              vmovss  xmm1, [rbp+1220h+var_10F4]
              vsubss  xmm2, xmm1, [rbp+1220h+var_10E8]
              vmovss  dword ptr [rbp+1220h+v1+8], xmm2
              vmovss  dword ptr [rbp+1220h+v1+4], xmm0
            }
            Vec3Cross(&v0, &v1, &cross);
            __asm
            {
              vmovss  xmm5, dword ptr [rbp+1220h+cross]
              vmovss  xmm6, dword ptr [rbp+1220h+cross+4]
              vmovss  xmm4, dword ptr [rbp+1220h+cross+8]
              vmovss  xmm8, [rsp+1320h+var_12C0]
              vmulss  xmm1, xmm6, xmm6
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm0, xmm2, xmm1
              vsqrtss xmm3, xmm0, xmm0
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm9, xmm0
              vdivss  xmm1, xmm9, xmm0
              vmulss  xmm9, xmm4, xmm1
              vmovaps xmm11, xmm9
              vmulss  xmm7, xmm5, xmm1
              vmulss  xmm6, xmm6, xmm1
            }
            break;
          }
          __asm { vmovss  xmm8, [rsp+1320h+var_12C0] }
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+1220h+forward]
        vmovss  xmm1, dword ptr [rbp+1220h+forward+4]
        vmovss  dword ptr [rbp+1220h+var_11F0], xmm0
        vmovss  xmm0, dword ptr [rbp+1220h+forward+8]
        vmovss  dword ptr [rbp+1220h+var_11F0+8], xmm0
        vmovss  dword ptr [rbp+1220h+var_11F0+4], xmm1
        vmovss  dword ptr [rbp+1220h+var_11D8], xmm7
        vmovss  dword ptr [rbp+1220h+var_11D8+4], xmm6
        vmovss  dword ptr [rbp+1220h+var_11D8+8], xmm9
      }
      Vec3Cross(&v233.m[2], v233.m, &v233.m[1]);
      Vec3Cross(&v233.m[1], &v233.m[2], v233.m);
      AxisToAngles(&v233, outAngles);
      __asm { vcomiss xmm11, [rbp+1220h+plancementMinNormal] }
      if ( v210 )
        goto LABEL_39;
      __asm { vucomiss xmm14, xmm10 }
      if ( !v211 )
      {
        __asm { vcomiss xmm8, cs:__real@41a00000 }
        if ( !(v210 | v211) )
          goto LABEL_39;
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicle_placement_debug, "bg_vehicle_placement_debug") )
      {
        __asm { vmovaps xmm2, xmm15; yaw }
        G_DebugBox(outOrigin, &box, *(float *)&_XMM2, &colorGreen, 1, 0);
      }
      result = 1i64;
    }
    else
    {
LABEL_39:
      result = 0i64;
    }
    __asm
    {
      vmovaps xmm11, [rsp+1320h+var_80]
      vmovaps xmm9, [rsp+1320h+var_60]
      vmovaps xmm12, [rsp+1320h+var_90]
    }
  }
  _R11 = &v255;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
G_Vehicle_ClearGround
==============
*/
void G_Vehicle_ClearGround(const gentity_s *ent)
{
  s_phys.hasGround = 0;
}

/*
==============
G_Vehicle_ClearPlayerVehicles
==============
*/
void G_Vehicle_ClearPlayerVehicles(const int entityNum, playerState_s *const ps)
{
  BgVehiclePhysicsManager *v4; 
  int entity; 
  BgVehiclePhysicsManager *v6; 
  gentity_s *GEntity; 
  unsigned int v8; 
  Vehicle *vehicle; 
  BgVehiclePhysics *ObjectById; 
  __int16 remoteControlEnt; 
  gentity_s *v12; 
  unsigned int v13; 
  Vehicle *v14; 
  BgVehiclePhysics *v15; 

  if ( entityNum == ps->clientNum )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v4 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
    entity = ps->vehicleState.entity;
    v6 = v4;
    if ( entity && entity != 2047 )
    {
      GEntity = G_GetGEntity(entity);
      if ( !GEntity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7622, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
        __debugbreak();
      if ( EntHandle::isDefined(&GEntity->r.ownerNum) )
        v8 = EntHandle::entnum(&GEntity->r.ownerNum);
      else
        v8 = 2047;
      if ( truncate_cast<int,unsigned int>(v8) == entityNum )
      {
        if ( entityNum != ps->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7627, ASSERT_TYPE_ASSERT, "(entityNum == ps->clientNum)", (const char *)&queryFormat, "entityNum == ps->clientNum") )
          __debugbreak();
        EntHandle::setEnt(&GEntity->r.ownerNum, NULL);
        ps->vehicleState.entity = 2047;
      }
      vehicle = GEntity->vehicle;
      if ( vehicle && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
      {
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v6, GEntity->vehicle->physicsVehicle);
        BgVehiclePhysics::SetPlayerControlled(ObjectById, 0);
      }
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) )
    {
      remoteControlEnt = ps->remoteControlEnt;
      if ( remoteControlEnt )
      {
        if ( remoteControlEnt != 2047 )
        {
          v12 = G_GetGEntity(remoteControlEnt);
          v13 = EntHandle::isDefined(&v12->remoteControlledOwner) ? EntHandle::entnum(&v12->remoteControlledOwner) : 2047;
          if ( truncate_cast<int,unsigned int>(v13) == entityNum )
          {
            if ( EntHandle::isDefined(&v12->r.ownerNum) )
            {
              if ( EntHandle::ent(&v12->r.ownerNum)->s.number != entityNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7652, ASSERT_TYPE_ASSERT, "(ownerEnt->s.number == entityNum)", (const char *)&queryFormat, "ownerEnt->s.number == entityNum") )
                __debugbreak();
              EntHandle::setEnt(&v12->r.ownerNum, NULL);
              v14 = v12->vehicle;
              if ( v14 )
              {
                v14->drivingState = VEH_DRIVE_NONE;
                if ( BGVehicles::PhysicsIsValid(v12->vehicle->physicsVehicle) )
                {
                  v15 = BgVehiclePhysicsManager::GetObjectById(v6, v12->vehicle->physicsVehicle);
                  BgVehiclePhysics::SetPlayerControlled(v15, 0);
                }
              }
            }
            if ( entityNum != ps->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7667, ASSERT_TYPE_ASSERT, "(entityNum == ps->clientNum)", (const char *)&queryFormat, "entityNum == ps->clientNum") )
              __debugbreak();
            EntHandle::setEnt(&v12->remoteControlledOwner, NULL);
            ps->remoteControlEnt = 2047;
          }
        }
      }
    }
  }
}

/*
==============
G_Vehicle_ClearServerDefs
==============
*/
void G_Vehicle_ClearServerDefs(void)
{
  s_vehicleServerDefaultIndex = 128;
  memset_0(s_vehicleServerDefs, 0, sizeof(s_vehicleServerDefs));
}

/*
==============
G_Vehicle_ClipVelocity
==============
*/
void G_Vehicle_ClipVelocity(const vec3_t *in, const vec3_t *normal, vec3_t *out)
{
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovss  xmm6, dword ptr [rdx+8]
    vcomiss xmm6, cs:__real@3f333333
    vmovss  xmm5, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vcomiss xmm2, xmm1
    vmulss  xmm0, xmm4, dword ptr [rdx]
    vmulss  xmm1, xmm5, dword ptr [rdx+4]
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vsubss  xmm0, xmm2, xmm1
    vmovss  dword ptr [r8+8], xmm0
    vmovss  xmm2, dword ptr [rcx]
    vmulss  xmm1, xmm2, dword ptr [rdx+8]
    vmovss  dword ptr [r8], xmm1
    vmovss  xmm0, dword ptr [rcx+4]
    vmulss  xmm2, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [r8+4], xmm2
    vmovaps xmm6, [rsp+68h+var_18]
  }
}

/*
==============
G_Vehicle_CollideAllVehicles
==============
*/

void __fastcall G_Vehicle_CollideAllVehicles(double stepSize)
{
  Vehicle *v16; 
  __int64 v17; 
  gentity_s *ent; 
  bool v27; 
  bool v28; 
  scrContext_t *v31; 
  char v48; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-98h], xmm12
    vmovaps [rsp+118h+var_A8], xmm13
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm12, cs:__real@3e4ccccd
    vmovss  xmm13, cs:__real@bf400000
    vmovss  xmm9, cs:__real@3d68ba2f
    vmovaps xmm11, xmm0
  }
  v16 = s_vehicleServers;
  __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
  v17 = 128i64;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  do
  {
    ent = v16->ent;
    if ( v16->ent )
    {
      if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5150, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( BGVehicles::PhysicsIsValid(ent->vehicle->physicsVehicle) )
      {
        _RBX = ent->vehicle;
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5081, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
          __debugbreak();
        if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5082, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsValid( veh->physicsVehicle ) )", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
          __debugbreak();
        _RAX = G_Vehicle_GetServerDef(_RBX->defIndex);
        _RDI = _RAX;
        if ( _RAX->type == VEH_BOAT )
        {
          __asm
          {
            vmovss  xmm1, dword ptr [rax+0B8h]
            vucomiss xmm1, xmm8
          }
          if ( _RAX->type == VEH_BOAT )
          {
            __asm { vmovaps xmm6, xmm7 }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+588h]
              vdivss  xmm1, xmm0, xmm1
              vminss  xmm6, xmm1, xmm7
            }
          }
          v27 = GVehicles::ms_gVehiclesSystem == NULL;
          if ( !GVehicles::ms_gVehiclesSystem )
          {
            v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem");
            v27 = !v28;
            if ( v28 )
              __debugbreak();
          }
          __asm
          {
            vcomiss xmm8, dword ptr [rdi+0BCh]
            vmovss  xmm0, dword ptr [rbx+604h]
            vucomiss xmm0, xmm8
            vmulss  xmm6, xmm6, dword ptr [rbx+608h]
          }
          if ( !v27 )
          {
            __asm { vcomiss xmm0, xmm6 }
            v31 = ScriptContext_Server();
            __asm { vmulss  xmm1, xmm9, dword ptr [rbx+604h]; value }
            Scr_AddFloat(v31, *(float *)&_XMM1);
            GScr_Notify(_RBX->ent, scr_const.veh_boatbounce, 1u);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0B0h]
            vsubss  xmm6, xmm0, dword ptr [rdi+0ACh]
          }
          _RBX->boat.bounceCurrentForce = 0.0;
          *(double *)&_XMM0 = G_random();
          __asm
          {
            vmulss  xmm1, xmm0, xmm6
            vaddss  xmm1, xmm1, dword ptr [rdi+0ACh]
            vmovss  dword ptr [rbx+608h], xmm1
          }
        }
      }
    }
    ++v16;
    --v17;
  }
  while ( v17 );
  __asm { vmovaps xmm6, [rsp+118h+var_38] }
  _R11 = &v48;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
G_Vehicle_Controller
==============
*/
void G_Vehicle_Controller(const gentity_s *pSelf, DObjPartBits *partBits)
{
  Vehicle *vehicle; 
  DObj *ServerDObjForEnt; 
  int body; 
  int turret; 
  int barrel; 
  int turretBaseLeft; 
  int turretBaseRight; 
  vec3_t v22; 
  vec3_t angles; 
  vec3_t v24; 
  vec3_t v25; 
  char v27; 

  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4731, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4732, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  _RDI = vehicle->ent;
  ServerDObjForEnt = Com_GetServerDObjForEnt(pSelf);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4739, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+60h]
    vmovss  dword ptr [rsp+0A8h+angles], xmm0
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rsp+0A8h+angles+4], xmm6
    vmovss  xmm0, dword ptr [rdi+64h]
    vmovss  dword ptr [rsp+0A8h+angles+8], xmm0
  }
  body = vehicle->boneIndex.body;
  if ( body >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, body, &vec3_origin, &angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+70h]
    vmovss  dword ptr [rsp+0A8h+var_58+4], xmm0
    vmovss  dword ptr [rsp+0A8h+var_58], xmm6
    vmovss  dword ptr [rsp+0A8h+var_58+8], xmm6
    vmovss  xmm0, dword ptr [rdi+6Ch]
    vmovss  dword ptr [rsp+0A8h+var_48], xmm0
    vmovss  dword ptr [rsp+0A8h+var_48+4], xmm6
    vmovss  dword ptr [rsp+0A8h+var_48+8], xmm6
  }
  turret = vehicle->boneIndex.turret;
  if ( turret >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turret, &vec3_origin, &v24);
  barrel = vehicle->boneIndex.barrel;
  if ( barrel >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, barrel, &vec3_origin, &v25);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+70h]
    vmovss  xmm0, dword ptr [rdi+6Ch]
    vmovss  dword ptr [rsp+0A8h+var_78], xmm0
    vmovss  dword ptr [rsp+0A8h+var_78+4], xmm1
    vmovss  dword ptr [rsp+0A8h+var_78+8], xmm6
  }
  turretBaseLeft = vehicle->boneIndex.turretBaseLeft;
  if ( turretBaseLeft >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turretBaseLeft, &vec3_origin, &v22);
  turretBaseRight = vehicle->boneIndex.turretBaseRight;
  if ( turretBaseRight >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turretBaseRight, &vec3_origin, &v22);
  _R11 = &v27;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
G_Vehicle_Create
==============
*/
void G_Vehicle_Create(gentity_s *ent, unsigned int vehDefIndex, const gentity_s *player, int load)
{
  const VehicleDef *ServerDef; 
  GVehicles *v8; 
  Vehicle *v9; 
  unsigned int v10; 
  int v11; 
  const char **p_szInternalName; 
  GWeaponMap *Instance; 
  const Weapon *v18; 
  unsigned __int16 model; 
  PhysicsAsset *physicsAsset; 
  const char *ModelName; 
  const char *useHintString; 
  GConfigStrings *ConfigStringSystem; 
  unsigned int v24; 
  gentity_s *v25; 
  gentity_s *v26; 
  gentity_s *v27; 
  gentity_s *v28; 
  const char *name; 
  scr_string_t FlashTag; 
  const char *v37; 
  __int64 v38; 
  scr_string_t v39; 
  GHandler *Handler; 
  __int64 v41; 
  Weapon result; 
  vec3_t linearVelocity; 
  __m256i v45; 
  int v48; 

  _RDI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4173, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (_RDI->spawnflags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4174, ASSERT_TYPE_ASSERT, "( !(ent->spawnflags & (1<<1)) )", (const char *)&queryFormat, "!(ent->spawnflags & VEH_SF_SPAWNER)") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehDefIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4177, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v8 = GVehicles::ms_gVehiclesSystem;
  GVehicles::ms_gVehiclesSystem->SetVehicleType(GVehicles::ms_gVehiclesSystem, _RDI, ServerDef);
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    _RDI->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    _RDI->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
  }
  G_Vehicle_InitModelAndValidateTags(_RDI, vehDefIndex);
  v9 = G_Vehicle_Allocate();
  v10 = truncate_cast<int,__int64>(v9 - s_vehicleServers);
  v11 = v10;
  if ( v10 >= 0x80 )
  {
    LODWORD(v41) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4195, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v41, 128) )
      __debugbreak();
  }
  _RDI->vehicle = v9;
  _RDI->health = ServerDef->health;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  _RDI->nextthink = level.time + level.frameDuration;
  _RDI->active = 1;
  _RDI->clipmask = 8454673;
  _RDI->s.lerp.eFlags.m_flags[0] = 0;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0x10u);
  _RDI->s.lerp.pos.trType = TR_INTERPOLATE;
  _RDI->s.lerp.apos.trType = TR_INTERPOLATE;
  _RDI->s.time2 = 0;
  p_szInternalName = &ServerDef->turretWeapon->szInternalName;
  if ( p_szInternalName )
  {
    _RAX = G_Weapon_GetWeaponForName(&result, *p_szInternalName);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rsp+118h+var_80], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups [rsp+118h+var_60], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  [rsp+118h+var_50], xmm0
    }
    v48 = *(_DWORD *)&_RAX->weaponCamo;
    Instance = GWeaponMap::GetInstance();
    v18 = (const Weapon *)&v45;
  }
  else
  {
    Instance = GWeaponMap::GetInstance();
    v18 = &NULL_WEAPON;
  }
  BG_SetWeaponForEntity(Instance, &_RDI->s, v18);
  if ( ServerDef->type == VEH_TREADED )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RDI->s.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x1Bu);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&_RDI->s.lerp.eFlags, ACTIVE, 0xDu);
  model = _RDI->model;
  _RDI->r.svFlags = 4;
  if ( model )
  {
    physicsAsset = G_Utils_GetModel(model)->physicsAsset;
    if ( physicsAsset )
    {
      if ( (Physics_GetPhysicsAssetContents(physicsAsset) & 0x800000) == 0 )
      {
        ModelName = G_CString_GetModelName(_RDI->model);
        Com_PrintError(1, "Vehicle %s with Model %s does not have CONTENTS_VEHICLE set on its collision asset. This will cause collision errors, because the client and server will not agree.\n", ServerDef->name, ModelName);
      }
    }
  }
  if ( (_RDI->spawnflags & 1) != 0 )
    G_PlayerUse_SetEntityUsable(_RDI, 1);
  SV_Game_DObjGetBounds(_RDI, &_RDI->r.box);
  SV_LinkEntity(_RDI);
  v9->ent = _RDI;
  v9->drivingState = VEH_DRIVE_NONE;
  v9->heliPathPos.moveState = VEH_MOVESTATE_STOP;
  v9->waitNode = -1;
  v9->defIndex = vehDefIndex;
  v9->targetEnt = 2047;
  v9->waitSpeed = -1.0;
  v9->topSpeedForward = ServerDef->topSpeed;
  v9->topSpeedReverse = ServerDef->topSpeed;
  v9->topSpeedYawRate = ServerDef->rotRate;
  v9->heliPathPos.maxDragSpeed = 1056.0;
  v9->heliPathPos.turningAbility = 0.5;
  v9->heliPathPos.hover.hoverRadius = 30.0;
  v9->heliPathPos.hover.hoverSpeed = 14.08;
  v9->heliPathPos.hover.hoverAccel = 8.8000002;
  v9->heliPathPos.yawOverShoot = 0.1;
  v9->heliPathPos.prevGoalYaw = -1.0;
  v9->heliPathPos.dronePathMaxSlowTargetSpeed = 20.0;
  v9->heliPathPos.dronePathSlowThreshold = 1.3;
  v9->heliPathPos.dronePathMaxDistToSlow = 24.0;
  v9->heliPathPos.dronePathMinSpeedToSlow = 20.0;
  if ( v11 >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4254, ASSERT_TYPE_ASSERT, "( vehIndex < ( 1 << 7 ) )", (const char *)&queryFormat, "vehIndex < ( 1 << VEHICLE_BITS )") )
    __debugbreak();
  if ( vehDefIndex >= 0x2000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4255, ASSERT_TYPE_ASSERT, "( vehDefIndex < ( 1 << (32 - 7) ) )", (const char *)&queryFormat, "vehDefIndex < ( 1 << VEHICLE_DEF_MAX_BITS )") )
    __debugbreak();
  *(_QWORD *)_RDI->s.lerp.u.actor.threatSight = 0i64;
  *(_QWORD *)&_RDI->s.lerp.u.scriptMover.animIndex = 0i64;
  *(_QWORD *)((char *)&_RDI->s.lerp.u.infoVolumeGrapple + 20) = 0i64;
  _RDI->s.lerp.u.anonymous.data[0] = v11 | (vehDefIndex << 7);
  G_Vehicle_HandleOwnerChange(_RDI, player);
  useHintString = ServerDef->useHintString;
  if ( useHintString && *useHintString )
  {
    ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
    v24 = ConfigStringSystem->GetHintStringIndex(ConfigStringSystem, ServerDef->useHintString);
    v9->useHintStringIndex = v24;
    if ( !v24 )
      Com_PrintError(15, "Could not find or allocate hint string '%s' for vehicle. See console log for details.\n", ServerDef->useHintString);
  }
  else
  {
    v9->useHintStringIndex = 0;
  }
  v9->trophyAmmo = ServerDef->trophyAmmoCount;
  v9->trophyReloadEndTime = level.time;
  G_Vehicle_InitBoneTags(v9);
  if ( !v9->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4060, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  memset_0(&v9->phys, 0, sizeof(v9->phys));
  v25 = v9->ent;
  v9->phys.origin.v[0] = v9->ent->r.currentOrigin.v[0];
  v9->phys.origin.v[1] = v25->r.currentOrigin.v[1];
  v9->phys.origin.v[2] = v25->r.currentOrigin.v[2];
  v26 = v9->ent;
  v9->phys.prevOrigin.v[0] = v9->ent->r.currentOrigin.v[0];
  v9->phys.prevOrigin.v[1] = v26->r.currentOrigin.v[1];
  v9->phys.prevOrigin.v[2] = v26->r.currentOrigin.v[2];
  v27 = v9->ent;
  v9->phys.angles.v[0] = v9->ent->r.currentAngles.v[0];
  v9->phys.angles.v[1] = v27->r.currentAngles.v[1];
  v9->phys.angles.v[2] = v27->r.currentAngles.v[2];
  v28 = v9->ent;
  v9->phys.prevAngles.v[0] = v9->ent->r.currentAngles.v[0];
  v9->phys.prevAngles.v[1] = v28->r.currentAngles.v[1];
  v9->phys.prevAngles.v[2] = v28->r.currentAngles.v[2];
  v9->heliPathPos.maxAngleVel.v[0] = 45.0;
  v9->heliPathPos.maxAngleVel.v[1] = 90.0;
  v9->heliPathPos.maxAngleVel.v[2] = 45.0;
  v9->heliPathPos.yawAccel = 25.0;
  v9->heliPathPos.yawDecel = 15.0;
  v9->heliPathPos.maxPitchAngle = 25.0;
  v9->heliPathPos.maxRollAngle = 25.0;
  *(_QWORD *)v9->phys.wheelSurfType = 0i64;
  *(_QWORD *)&v9->phys.wheelSurfType[2] = 0i64;
  *(_QWORD *)&v9->phys.wheelSurfType[4] = 0i64;
  *(_QWORD *)&v9->phys.wheelSurfType[6] = 0i64;
  *(_QWORD *)&v9->phys.wheelSurfType[8] = 0i64;
  *(_QWORD *)&v9->phys.wheelSurfType[10] = 0i64;
  G_VehiclePath_InitPathPos(&v9->pathPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsp+118h+linearVelocity], xmm0
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+118h+linearVelocity+8], xmm0
    vmovss  dword ptr [rsp+118h+linearVelocity+4], xmm1
  }
  G_Vehicle_SetPosition(_RDI, &_RDI->r.currentOrigin, &_RDI->s.lerp.pos.trDelta, &_RDI->r.currentAngles, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+118h+linearVelocity]
    vmovss  xmm1, dword ptr [rsp+118h+linearVelocity+4]
    vmovss  dword ptr [rdi+28h], xmm0
    vmovss  xmm0, dword ptr [rsp+118h+linearVelocity+8]
    vmovss  dword ptr [rdi+30h], xmm0
    vmovss  dword ptr [rdi+2Ch], xmm1
  }
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( !G_Main_ExitAfterToolComplete() )
    {
      v9->physicsVehicle = v8->PhysicsCreateVehicle(v8, _RDI->s.number, vehDefIndex, ServerDef);
      G_Utils_DestroyEntityPhysics(_RDI);
      G_Utils_CreateEntityPhysics(_RDI);
      if ( !BGVehicles::PhysicsIsValid(v9->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4305, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsValid( veh->physicsVehicle ) )", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
        __debugbreak();
    }
  }
  if ( (unsigned int)(ServerDef->turretFireType - 1) <= 1 )
  {
    if ( v9->boneIndex.flash[0] == -1 )
    {
      name = ServerDef->name;
      FlashTag = BG_Vehicle_GetFlashTag(0);
      v37 = SL_ConvertToString(FlashTag);
      v38 = 1245i64;
    }
    else
    {
      if ( v9->boneIndex.flash[1] != -1 )
        goto LABEL_57;
      name = ServerDef->name;
      v39 = BG_Vehicle_GetFlashTag(1);
      v37 = SL_ConvertToString(v39);
      v38 = 1246i64;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36780, v38, v37, name);
  }
LABEL_57:
  if ( !load )
    G_Vehicle_SetupCollmap(_RDI);
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( !G_Main_ExitAfterToolComplete() && !GVehicles::PhysicsCreateRigidBodyResources(v8, v9->physicsVehicle) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E367E0, 1247i64, (unsigned int)_RDI->s.number, ServerDef->name);
    GVehicles::PhysicsSetLinearVelocity(v8, v9->physicsVehicle, &linearVelocity);
  }
  v9->canPushEntities = 1;
  Handler = GHandler::getHandler();
  BG_VehicleAnim_Reset(v8, &_RDI->s, &v9->vehicleAnimInfo, Handler);
  G_Vehicle_UpdateScriptablePlayerUseCache(_RDI);
}

/*
==============
G_Vehicle_Create
==============
*/
void G_Vehicle_Create(gentity_s *ent, const char *typeName, const gentity_s *player, int load)
{
  unsigned int outIndex; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4153, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !typeName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4154, ASSERT_TYPE_ASSERT, "( typeName )", (const char *)&queryFormat, "typeName") )
    __debugbreak();
  if ( (ent->spawnflags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4155, ASSERT_TYPE_ASSERT, "( !(ent->spawnflags & (1<<1)) )", (const char *)&queryFormat, "!(ent->spawnflags & VEH_SF_SPAWNER)") )
    __debugbreak();
  if ( !G_Vehicle_GetServerDefIndex(typeName, &outIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36570, 1244i64, typeName);
  G_Vehicle_Create(ent, outIndex, player, load);
}

/*
==============
G_Vehicle_Damage
==============
*/
__int64 G_Vehicle_Damage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  const Weapon *v16; 
  bool v18; 
  gentity_s *v19; 
  int v21; 
  signed __int64 v22; 
  __int64 v23; 
  Vehicle *vehicle; 
  const GVehicleSuspendManager::SuspendInfo *SavedInfoConst; 
  unsigned int defIndex; 
  const VehicleDef *ServerDef; 
  const dvar_t *v50; 
  const char *v51; 
  const char *WeaponBaseName; 
  bool v53; 
  __int64 result; 
  int number; 
  const char *v56; 
  const char *v57; 
  int health; 
  const char *v59; 
  char *fmt; 
  __int64 v61; 
  __int64 v62; 
  int v63; 
  BOOL v64; 
  int v65; 
  int v68; 
  int v71; 

  v16 = r_weapon;
  _R14 = dir;
  v18 = isAlternate;
  v19 = attacker;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4578, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !targ->vehicle && !G_Vehicle_IsSuspended(targ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4579, ASSERT_TYPE_ASSERT, "( targ->vehicle || G_Vehicle_IsSuspended( targ ) )", (const char *)&queryFormat, "targ->vehicle || G_Vehicle_IsSuspended( targ )") )
    __debugbreak();
  v21 = 1;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->s.lerp.eFlags, ACTIVE, 0x10u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4580, ASSERT_TYPE_ASSERT, "( targ->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::TAKE_DAMAGE ) )", (const char *)&queryFormat, "targ->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::TAKE_DAMAGE )") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v22 = targ - g_entities;
  if ( (unsigned int)v22 >= 0x800 )
  {
    LODWORD(v61) = targ - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, 2048) )
      __debugbreak();
  }
  v22 = (__int16)v22;
  if ( (unsigned int)(__int16)v22 >= 0x800 )
  {
    LODWORD(v62) = 2048;
    LODWORD(v61) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v22] )
  {
    LODWORD(v62) = targ->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4581, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "%s\n\t( targ->s.number ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( targ ) ) )", v62) )
      __debugbreak();
  }
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4582, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4583, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v23 = v19 - g_entities;
  if ( (unsigned int)v23 >= 0x800 )
  {
    LODWORD(v62) = 2048;
    LODWORD(v61) = v19 - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
      __debugbreak();
  }
  v23 = (__int16)v23;
  if ( (unsigned int)(__int16)v23 >= 0x800 )
  {
    LODWORD(v62) = 2048;
    LODWORD(v61) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v23] )
  {
    LODWORD(v62) = v19->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4584, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "%s\n\t( attacker->s.number ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) )", v62) )
      __debugbreak();
  }
  vehicle = targ->vehicle;
  if ( vehicle )
  {
    defIndex = vehicle->defIndex;
  }
  else
  {
    if ( !G_Vehicle_IsSuspended(targ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4524, ASSERT_TYPE_ASSERT, "( veh || G_Vehicle_IsSuspended( ent ) )", (const char *)&queryFormat, "veh || G_Vehicle_IsSuspended( ent )") )
      __debugbreak();
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    SavedInfoConst = GVehicleSuspendManager::GetSavedInfoConst(&GVehicles::ms_gVehiclesSystem->m_suspendManager, targ);
    if ( !SavedInfoConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4534, ASSERT_TYPE_ASSERT, "(suspendInfo)", (const char *)&queryFormat, "suspendInfo") )
      __debugbreak();
    defIndex = SavedInfoConst->vehDefIndex;
  }
  ServerDef = G_Vehicle_GetServerDef(defIndex);
  switch ( mod )
  {
    case 1:
    case 2:
      if ( !ServerDef->bulletDamage && ((dFlags & 2) == 0 || !ServerDef->armorPiercingDamage) )
        goto LABEL_87;
      goto LABEL_69;
    case 4:
    case 5:
      if ( BG_ProjExplosionType(r_weapon, isAlternate) == WEAPPROJEXP_HEAVY )
        v53 = ServerDef->heavyExplosiveDamage == 0;
      else
        v53 = ServerDef->grenadeDamage == 0;
      goto LABEL_86;
    case 6:
      v53 = ServerDef->projectileDamage == 0;
      goto LABEL_86;
    case 7:
      v53 = ServerDef->projectileSplashDamage == 0;
LABEL_86:
      if ( !v53 )
        goto LABEL_69;
LABEL_87:
      result = 5i64;
      break;
    default:
LABEL_69:
      __asm
      {
        vxorps  xmm0, xmm0, xmm0; jumptable 0000000140D14FC4 default case, cases 3,8-16
        vmovss  [rsp+118h+var_60], xmm0
        vmovss  [rsp+118h+var_5C], xmm0
        vmovss  [rsp+118h+var_58], xmm0
        vmovss  [rsp+118h+var_70], xmm0
        vmovss  [rsp+118h+var_6C], xmm0
        vmovss  [rsp+118h+var_68], xmm0
      }
      if ( _R14 )
      {
        __asm
        {
          vmovss  xmm5, dword ptr [r14+4]
          vmovss  xmm4, dword ptr [r14]
          vmulss  xmm0, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm2, xmm1, xmm0
          vmovaps [rsp+118h+var_48], xmm6
          vmovss  xmm6, dword ptr [r14+8]
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, cs:__real@3f800000
          vsqrtss xmm3, xmm2, xmm2
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
          vdivss  xmm2, xmm1, xmm0
          vmulss  xmm0, xmm2, xmm4
          vmovss  [rsp+118h+var_60], xmm0
          vmulss  xmm0, xmm2, xmm6
          vmovaps xmm6, [rsp+118h+var_48]
          vmulss  xmm1, xmm2, xmm5
          vmovss  [rsp+118h+var_58], xmm0
          vmovss  [rsp+118h+var_5C], xmm1
        }
      }
      _RAX = point;
      if ( point )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  xmm1, dword ptr [rax+4]
          vmovss  [rsp+118h+var_70], xmm0
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  [rsp+118h+var_68], xmm0
          vmovss  [rsp+118h+var_6C], xmm1
        }
      }
      v50 = DVARBOOL_g_debugDamage;
      if ( damage > 1 )
        v21 = damage;
      v65 = v21;
      if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v50);
      if ( v50->current.enabled )
      {
        v51 = SL_ConvertToString(partName);
        if ( r_weapon->weaponIdx )
          WeaponBaseName = BG_GetWeaponBaseName(r_weapon, isAlternate);
        else
          WeaponBaseName = "none";
        if ( v19 )
        {
          number = v19->s.number;
          v56 = SL_ConvertToString(v19->script_classname);
        }
        else
        {
          number = 0;
          v56 = "null";
        }
        v57 = SL_ConvertToString(*g_combat_modNames[mod]);
        health = targ->health;
        v59 = SL_ConvertToString(targ->script_classname);
        v63 = number;
        v21 = v65;
        LODWORD(v61) = v65;
        LODWORD(fmt) = health;
        Com_Printf(15, "$e%d(%s) take damage: orig_hp(%d) dam(%d)type(%s) attacker(%s$e%d) weapon(%s) partname(%s)\n", (unsigned int)targ->s.number, v59, fmt, v61, v57, v56, v63, WeaponBaseName, v51);
        v19 = attacker;
        v16 = r_weapon;
        v18 = isAlternate;
      }
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      LOBYTE(v64) = v18;
      GVehicles::ms_gVehiclesSystem->FinishVehicleDamage(GVehicles::ms_gVehiclesSystem, targ, inflictor, v19, (const vec3_t *)&v71, (const vec3_t *)&v68, v21, dFlags, mod, v16, v64, hitLoc, modelIndex, partName, timeOffset);
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
G_Vehicle_DamageScriptable
==============
*/
void G_Vehicle_DamageScriptable(gentity_s *vehEnt, unsigned int scriptableIndex, int damage, const vec3_t *damageDir)
{
  const ScriptableDef *def; 
  int flags; 

  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2634, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( damage > 0 )
  {
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 324, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    flags = def->flags;
    if ( (flags & 0x80) != 0 && (flags & 0x180000) == 0 )
      ScriptableSv_Damage(vehEnt, vehEnt, scriptableIndex, NULL, damageDir, 12, &NULL_WEAPON, 0, (const scr_string_t)0, damage, 0, 0);
  }
}

/*
==============
G_Vehicle_DebugBox
==============
*/

void __fastcall G_Vehicle_DebugBox(const vec3_t *pos, double width, double r, double g, float b)
{
  vec4_t color; 
  Bounds box; 

  __asm
  {
    vmovss  xmm0, [rsp+68h+b]
    vmovss  dword ptr [rsp+68h+color], xmm2
    vmovss  xmm2, cs:__real@3f800000
    vmovss  dword ptr [rsp+68h+color+0Ch], xmm2
    vxorps  xmm2, xmm2, xmm2; yaw
    vmovss  dword ptr [rsp+68h+color+8], xmm0
    vmulss  xmm0, xmm1, cs:__real@3f000000
    vmovss  dword ptr [rsp+68h+box.midPoint], xmm2
    vmovss  dword ptr [rsp+68h+box.midPoint+4], xmm2
    vmovss  dword ptr [rsp+68h+box.midPoint+8], xmm2
    vmovss  dword ptr [rsp+68h+color+4], xmm3
    vmovss  dword ptr [rsp+68h+box.halfSize], xmm0
    vmovss  dword ptr [rsp+68h+box.halfSize+4], xmm0
    vmovss  dword ptr [rsp+68h+box.halfSize+8], xmm0
  }
  G_DebugBox(pos, &box, *(float *)&_XMM2, &color, 1, 0);
}

/*
==============
G_Vehicle_DebugCapsule
==============
*/

void __fastcall G_Vehicle_DebugCapsule(const vec3_t *pos, double rad, double height, double r, float g, float b)
{
  char v6; 
  vec3_t end; 
  vec4_t color; 

  __asm
  {
    vmovss  xmm0, [rsp+68h+g]
    vmovaps xmm5, xmm1
    vmovss  xmm1, [rsp+68h+b]
    vmovss  dword ptr [rsp+68h+color+8], xmm1
    vmovss  xmm1, dword ptr [rcx]
    vmovss  dword ptr [rsp+68h+color+4], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovaps xmm4, xmm2
    vmovss  xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+68h+end], xmm1
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm4, xmm1
    vmovss  dword ptr [rsp+68h+color+0Ch], xmm0
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+68h+color], xmm3
    vmovss  dword ptr [rsp+68h+end+4], xmm0
  }
  if ( v6 )
    __asm { vaddss  xmm0, xmm2, cs:__real@3c23d70a }
  else
    __asm { vaddss  xmm0, xmm2, xmm4 }
  __asm
  {
    vmovaps xmm2, xmm5; radius
    vmovss  dword ptr [rsp+68h+end+8], xmm0
  }
  G_DebugCylinder(pos, &end, *(float *)&_XMM2, &color, 0, 0);
}

/*
==============
G_Vehicle_Die
==============
*/
void G_Vehicle_Die(gentity_s *pSelf, const gentity_s *pInflictor, gentity_s *pAttacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *dir)
{
  const gentity_s *v12; 
  gentity_s *v13; 
  GWeaponMap *Instance; 
  GWeaponMap *v15; 
  const Weapon *WeaponForEntity; 
  float fmt; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5622, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( EntHandle::isDefined(&pSelf->r.ownerNum) && (v12 = EntHandle::ent(&pSelf->r.ownerNum), G_Vehicle_InUseByPlayer(pSelf, v12)) )
  {
    v13 = EntHandle::ent(&pSelf->r.ownerNum);
    G_Vehicle_UnlinkPlayer(pSelf, v13);
  }
  else
  {
    Com_PrintWarning(15, "G_Vehicle_Die(). Vehicle and player are not linked, it won't unlink player from vehicle");
  }
  if ( pAttacker )
  {
    Instance = GWeaponMap::GetInstance();
    if ( BG_GetWeaponForEntity(Instance, &pAttacker->s)->weaponIdx )
    {
      v15 = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(v15, &pAttacker->s);
      if ( (unsigned int)(BG_GetWeaponType(WeaponForEntity, pAttacker->s.inAltWeaponMode) - 3) <= 1 )
      {
        if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5641, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
          __debugbreak();
        if ( pSelf->vehicle )
        {
          __asm
          {
            vmovss  xmm2, cs:__real@3f800000; intensity
            vxorps  xmm3, xmm3, xmm3; speedFrac
            vmovss  dword ptr [rsp+38h+fmt], xmm3
          }
          G_Vehicle_JoltBody(pSelf, dir, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
        }
      }
    }
  }
}

/*
==============
G_Vehicle_DrawDebugLookahead
==============
*/

void __fastcall G_Vehicle_DrawDebugLookahead(Vehicle *veh, __int64 a2, double _XMM2_8)
{
  const dvar_t *v5; 
  float fmt; 
  float fmta; 

  v5 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@41000000; width
      vmovaps [rsp+58h+var_18], xmm7
      vmovss  xmm7, cs:__real@3f800000
      vmovaps xmm3, xmm7; g
      vxorps  xmm2, xmm2, xmm2; r
      vmovss  dword ptr [rsp+58h+fmt], xmm7
    }
    G_Vehicle_DebugBox(&veh->pathPos.lookPos, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    __asm
    {
      vmovss  xmm1, cs:__real@41000000; width
      vxorps  xmm3, xmm3, xmm3; g
      vmovaps xmm2, xmm7; r
      vmovss  dword ptr [rsp+58h+fmt], xmm7
    }
    G_Vehicle_DebugBox(&veh->pathPos.origin, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta);
    __asm { vmovaps xmm7, [rsp+58h+var_18] }
  }
}

/*
==============
G_Vehicle_DrawDebugOrigin
==============
*/
void G_Vehicle_DrawDebugOrigin(const VehicleDef *vehDef, vehicle_physic_t *phys)
{
  const dvar_t *v3; 
  float fmt; 

  v3 = DCONST_DVARINT_bg_vehicleDebug;
  _RSI = vehDef;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; r
      vmovss  xmm1, cs:__real@40800000; width
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm2; g
      vmovss  dword ptr [rsp+48h+fmt], xmm0
    }
    G_Vehicle_DebugBox(&phys->origin, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
    if ( _RSI->trophyEnabled )
    {
      __asm { vmovss  xmm1, dword ptr [rsi+0CBCh]; radius }
      G_DebugCircle(&phys->origin, *(float *)&_XMM1, &colorGreen, 1, 0, 1);
    }
  }
}

/*
==============
G_Vehicle_ExplosionEvent
==============
*/

void __fastcall G_Vehicle_ExplosionEvent(const vec3_t *origin, double innerRadius, double outerRadius, bool isCylinder, float forceScale)
{
  Vehicle *v17; 
  __int64 v24; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 
  _BYTE v70[32]; 
  char v71; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = v70;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v17 = s_vehicleServers;
  __asm
  {
    vmovss  xmm14, [rbp+50h+forceScale]
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm15, cs:__real@41c00000
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmm12, xmm2
    vmovaps xmm13, xmm1
  }
  _R14 = origin;
  v24 = 128i64;
  __asm
  {
    vmulss  xmm11, xmm2, xmm2
    vxorps  xmm9, xmm9, xmm9
  }
  do
  {
    _RBX = v17->ent;
    if ( v17->ent )
    {
      if ( !_RBX->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5919, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( BGVehicles::PhysicsIsValid(_RBX->vehicle->physicsVehicle) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+118h]
          vmovss  xmm6, dword ptr [r14]
          vmovss  xmm8, dword ptr [r14+4]
          vmovss  xmm10, dword ptr [r14+8]
        }
        HIDWORD(v65) = 0;
        __asm { vmovups xmm5, xmmword ptr [rsp+40h] }
        HIDWORD(v66) = 0;
        __asm
        {
          vmovups xmm4, xmmword ptr [rsp+50h]
          vmovss  xmm4, xmm4, xmm0
          vmovss  xmm0, dword ptr [rbx+124h]
          vinsertps xmm4, xmm4, dword ptr [rbx+11Ch], 10h
          vinsertps xmm4, xmm4, dword ptr [rbx+120h], 20h ; ' '
          vmovss  xmm5, xmm5, xmm6
        }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+60h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbx+128h], 10h
          vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vinsertps xmm3, xmm3, dword ptr [rbx+12Ch], 20h ; ' '
          vinsertps xmm5, xmm5, xmm8, 10h
          vinsertps xmm5, xmm5, xmm10, 20h ; ' '
          vsubps  xmm1, xmm5, xmm4
          vandnps xmm2, xmm0, xmm1
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rsp+60h], xmm3
          vsubps  xmm3, xmm2, xmm3
          vmaxps  xmm1, xmm3, xmm0
          vmulps  xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm1, xmm0, xmm0
          vcomiss xmm1, xmm11
          vmovups xmmword ptr [rsp+40h], xmm5
          vmovups xmmword ptr [rsp+50h], xmm4
        }
      }
    }
    ++v17;
    --v24;
  }
  while ( v24 );
  __asm
  {
    vmovaps xmm10, xmmword ptr [rsp+150h+var_88+8]
    vmovaps xmm8, xmmword ptr [rsp+150h+var_68+8]
    vmovaps xmm6, [rsp+150h+var_48+8]
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
G_Vehicle_FinishDamage
==============
*/
void G_Vehicle_FinishDamage(gentity_s *targ, const gentity_s *inflictor, gentity_s *attacker, const vec3_t *dir, const vec3_t *point, int damage, int dFlags, int mod, const Weapon *r_weapon, bool isAlternate, hitLocation_t hitLoc, unsigned int modelIndex, scr_string_t partName, int timeOffset)
{
  unsigned __int8 handler; 
  const GEntityHandlerList *EntHandlerList; 
  int health; 
  scrContext_t *v20; 
  void (__fastcall *pain)(gentity_s *, gentity_s *, int, const vec3_t *, const int, const vec3_t *, const hitLocation_t, const Weapon *, bool); 
  int v22; 
  int v23; 

  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4627, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !targ->vehicle && !G_Vehicle_IsSuspended(targ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4628, ASSERT_TYPE_ASSERT, "( targ->vehicle || G_Vehicle_IsSuspended( targ ) )", (const char *)&queryFormat, "targ->vehicle || G_Vehicle_IsSuspended( targ )") )
    __debugbreak();
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4629, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4630, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  handler = targ->handler;
  if ( G_Vehicle_IsSuspended(targ) )
    targ->handler = 24;
  EntHandlerList = G_Main_GetEntHandlerList(targ);
  targ->health -= damage;
  targ->handler = handler;
  G_Combat_DamageNotify(scr_const.damage, targ, attacker, inflictor, dir, point, damage, mod, dFlags, modelIndex, partName, r_weapon, isAlternate, NULL);
  health = targ->health;
  if ( health > 0 )
  {
    pain = EntHandlerList->pain;
    if ( pain )
    {
      LOBYTE(v23) = isAlternate;
      pain(targ, attacker, damage, point, mod, dir, hitLoc, r_weapon, v23);
    }
  }
  else
  {
    if ( health < -999 )
      targ->health = -999;
    v20 = ScriptContext_Server();
    Scr_AddVector(v20, point->v);
    if ( r_weapon->weaponIdx )
      GScr_Weapon_AddParam(v20, r_weapon, isAlternate);
    else
      Scr_AddUndefined(v20);
    Scr_AddConstString(v20, *g_combat_modNames[mod]);
    GScr_AddEntity(attacker);
    GScr_Notify(targ, scr_const.death, 4u);
    GScr_Notify(targ, scr_const.death_or_disconnect, 0);
    if ( EntHandlerList->die )
    {
      if ( timeOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4672, ASSERT_TYPE_ASSERT, "(timeOffset >= 0)", (const char *)&queryFormat, "timeOffset >= 0") )
        __debugbreak();
      LOBYTE(v22) = isAlternate;
      EntHandlerList->die(targ, inflictor, attacker, damage, dFlags, mod, r_weapon, v22, dir, hitLoc, timeOffset);
    }
  }
}

/*
==============
G_Vehicle_FireRemoteDriveTurret
==============
*/
void G_Vehicle_FireRemoteDriveTurret(gentity_s *playerEntity, gentity_s *vehicleEntity, const tmat33_t<vec3_t> *orientation)
{
  Vehicle *vehicle; 
  int player; 
  GWeaponMap *Instance; 
  const WeaponDef *v22; 
  int gameTime; 
  VehicleTurretFireType v24; 
  Vehicle *v25; 
  __int32 v26; 
  const VehicleDef *ServerDef; 
  __int64 v28; 
  int v49; 
  weapType_t WeaponType; 
  VehicleTurretFireType v109; 
  Vehicle *v110; 
  const VehicleDef *v111; 
  __int64 v112; 
  const VehicleDef *v131; 
  __int64 v132; 
  Vehicle *v134; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  BgWeaponParms wp; 
  vec3_t outPos; 
  vec3_t v146; 

  _RBX = orientation;
  if ( !playerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6364, ASSERT_TYPE_ASSERT, "( playerEntity )", (const char *)&queryFormat, "playerEntity") )
    __debugbreak();
  if ( (!vehicleEntity || !vehicleEntity->vehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6365, ASSERT_TYPE_ASSERT, "( vehicleEntity && vehicleEntity->vehicle )", (const char *)&queryFormat, "vehicleEntity && vehicleEntity->vehicle") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+0Ch]
    vmovss  xmm4, dword ptr [rbx]
    vmovss  xmm3, dword ptr [rbx+4]
    vmovss  xmm2, dword ptr [rbx+8]
  }
  vehicle = vehicleEntity->vehicle;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+20h]
    vmovups xmmword ptr [rsp+160h+wp.right], xmm0
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rsp+160h+wp.up+4], xmm0
    vmovss  dword ptr [rsp+160h+wp.forward], xmm4
    vmovss  dword ptr [rsp+160h+wp.forward+4], xmm3
    vmovss  dword ptr [rsp+160h+wp.forward+8], xmm2
    vmovss  dword ptr [rsp+160h+wp.up+8], xmm1
    vmovss  dword ptr [rbp+60h+wp.gunForward], xmm4
    vmovss  dword ptr [rbp+60h+wp.gunForward+4], xmm3
    vmovss  dword ptr [rbp+60h+wp.gunForward+8], xmm2
  }
  player = vehicle->boneIndex.player;
  __asm
  {
    vmovaps [rsp+160h+var_30], xmm6
    vmovaps [rsp+160h+var_40], xmm7
    vmovaps [rsp+160h+var_50], xmm8
  }
  G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, player, &outPos);
  Instance = GWeaponMap::GetInstance();
  _RSI = BG_GetWeaponForEntity(Instance, &vehicleEntity->s);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+60h+wp.weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+60h+wp.weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+60h+wp.weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&wp.weapon.weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
  wp.isAlternate = 0;
  v22 = BG_WeaponDef(_RSI, 0);
  gameTime = level.time;
  wp.weapDef = v22;
  if ( BG_GetWeaponType(&wp.weapon, 0) == WEAPTYPE_BULLET )
  {
    v24 = G_Vehicle_TurretFireType(vehicleEntity);
    v25 = vehicleEntity->vehicle;
    if ( v24 )
    {
      v26 = v24 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
          ServerDef = G_Vehicle_GetServerDef(v25->defIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6444, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", ServerDef->name) )
            goto LABEL_35;
          goto LABEL_42;
        }
        v28 = 1780i64;
        if ( v25->turret.fireBarrel )
          v28 = 1784i64;
        G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, *(_DWORD *)((char *)&v25->ent + v28), &v146);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+60h+var_70]
          vsubss  xmm3, xmm0, dword ptr [rbp+60h+outPos]
          vmovss  xmm1, dword ptr [rbp+60h+var_70+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+60h+outPos+4]
          vmovss  xmm0, dword ptr [rbp+60h+var_70+8]
          vsubss  xmm4, xmm0, dword ptr [rbp+60h+outPos+8]
        }
        _RAX = wp.weapDef;
        __asm
        {
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm5, xmm2, xmm2
          vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward]
          vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos]
          vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward+4]
          vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward+8]
          vmovss  dword ptr [rsp+160h+wp.muzzleTrace], xmm2
          vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos+4]
          vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos+8]
          vmovss  dword ptr [rsp+160h+wp.muzzleTrace+8], xmm0
          vmovss  dword ptr [rsp+160h+wp.muzzleTrace+4], xmm2
          vmovss  xmm1, dword ptr [rax+0C6Ch]; spread
        }
        v49 = 0;
        G_Bullet_Fire(playerEntity, *(float *)&_XMM1, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
LABEL_39:
        v134 = vehicleEntity->vehicle;
        LOBYTE(v49) = v134->turret.fireBarrel == 0;
        v134->turret.fireBarrel = v49;
        goto LABEL_42;
      }
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, v25->boneIndex.flash[0], &v146);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+60h+var_70]
        vsubss  xmm3, xmm0, dword ptr [rbp+60h+outPos]
        vmovss  xmm1, dword ptr [rbp+60h+var_70+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+60h+outPos+4]
        vmovss  xmm0, dword ptr [rbp+60h+var_70+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+60h+outPos+8]
      }
      _RAX = wp.weapDef;
      __asm
      {
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm5, xmm2, xmm2
        vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward]
        vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos]
        vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward+4]
        vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace], xmm2
        vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos+4]
        vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+8], xmm0
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+4], xmm2
        vmovss  xmm1, dword ptr [rax+0C6Ch]; spread
      }
      G_Bullet_Fire(playerEntity, *(float *)&_XMM1, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, vehicleEntity->vehicle->boneIndex.flash[1], &v146);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+60h+var_70]
        vsubss  xmm3, xmm0, dword ptr [rbp+60h+outPos]
        vmovss  xmm1, dword ptr [rbp+60h+var_70+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+60h+outPos+4]
        vmovss  xmm0, dword ptr [rbp+60h+var_70+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+60h+outPos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm5, xmm2, xmm2
        vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward]
        vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos]
        vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward+4]
        vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace], xmm2
        vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos+4]
        vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+8], xmm0
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+4], xmm2
      }
    }
    else
    {
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, v25->boneIndex.flash[0], &v146);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+60h+var_70]
        vsubss  xmm3, xmm0, dword ptr [rbp+60h+outPos]
        vmovss  xmm1, dword ptr [rbp+60h+var_70+4]
        vsubss  xmm2, xmm1, dword ptr [rbp+60h+outPos+4]
        vmovss  xmm0, dword ptr [rbp+60h+var_70+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+60h+outPos+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm5, xmm2, xmm2
        vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward]
        vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos]
        vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward+4]
        vmulss  xmm2, xmm5, dword ptr [rsp+160h+wp.forward+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace], xmm0
        vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos+4]
        vaddss  xmm1, xmm2, dword ptr [rbp+60h+outPos+8]
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+8], xmm1
        vmovss  dword ptr [rsp+160h+wp.muzzleTrace+4], xmm0
      }
    }
    _RAX = wp.weapDef;
    __asm { vmovss  xmm1, dword ptr [rax+0C6Ch]; spread }
    G_Bullet_Fire(playerEntity, *(float *)&_XMM1, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
    goto LABEL_42;
  }
  WeaponType = BG_GetWeaponType(&wp.weapon, wp.isAlternate);
  v109 = G_Vehicle_TurretFireType(vehicleEntity);
  v110 = vehicleEntity->vehicle;
  if ( WeaponType == WEAPTYPE_GRENADE )
  {
    if ( v109 == VEH_TURRET_SINGLE_FIRE )
    {
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v110->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, _RSI, WEAPON_HAND_DEFAULT, gameTime, &wp);
      goto LABEL_42;
    }
    if ( v109 == VEH_TURRET_DUAL_FIRE )
    {
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v110->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, _RSI, WEAPON_HAND_DEFAULT, gameTime, &wp);
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, vehicleEntity->vehicle->boneIndex.flash[1], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, _RSI, WEAPON_HAND_DEFAULT, gameTime, &wp);
      goto LABEL_42;
    }
    if ( v109 != VEH_TURRET_ALT_FIRE )
    {
      v111 = G_Vehicle_GetServerDef(v110->defIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6475, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", v111->name) )
        goto LABEL_35;
      goto LABEL_42;
    }
    v112 = 1780i64;
    if ( v110->turret.fireBarrel )
      v112 = 1784i64;
    G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, *(_DWORD *)((char *)&v110->ent + v112), &v146);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+60h+var_70]
      vsubss  xmm3, xmm0, dword ptr [rbp+60h+outPos]
      vmovss  xmm1, dword ptr [rbp+60h+var_70+4]
      vsubss  xmm2, xmm1, dword ptr [rbp+60h+outPos+4]
      vmovss  xmm0, dword ptr [rbp+60h+var_70+8]
      vsubss  xmm4, xmm0, dword ptr [rbp+60h+outPos+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm5, xmm2, xmm2
      vmulss  xmm1, xmm5, dword ptr [rsp+160h+wp.forward]
      vaddss  xmm0, xmm1, dword ptr [rbp+60h+outPos]
      vmulss  xmm2, xmm5, dword ptr [rsp+160h+wp.forward+4]
      vaddss  xmm1, xmm2, dword ptr [rbp+60h+outPos+4]
      vmovss  dword ptr [rsp+160h+wp.muzzleTrace], xmm0
      vmulss  xmm0, xmm5, dword ptr [rsp+160h+wp.forward+8]
      vaddss  xmm2, xmm0, dword ptr [rbp+60h+outPos+8]
      vmovss  dword ptr [rsp+160h+wp.muzzleTrace+8], xmm2
      vmovss  dword ptr [rsp+160h+wp.muzzleTrace+4], xmm1
    }
    G_Weapon_GrenadeLauncher_Fire(playerEntity, _RSI, WEAPON_HAND_DEFAULT, gameTime, &wp);
    v49 = 0;
    goto LABEL_39;
  }
  switch ( v109 )
  {
    case VEH_TURRET_SINGLE_FIRE:
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v110->boneIndex.flash[0], &wp.muzzleTrace);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+160h+fmt], xmm0
      }
      G_Weapon_RocketLauncher_Fire(vehicleEntity, _RSI, wp.isAlternate, WEAPON_HAND_DEFAULT, fmtc, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_42;
    case VEH_TURRET_DUAL_FIRE:
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v110->boneIndex.flash[0], &wp.muzzleTrace);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vmovss  dword ptr [rsp+160h+fmt], xmm6
      }
      G_Weapon_RocketLauncher_Fire(vehicleEntity, _RSI, wp.isAlternate, WEAPON_HAND_DEFAULT, fmta, &wp, &vec3_origin, gameTime, NULL, 0);
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, vehicleEntity->vehicle->boneIndex.flash[1], &wp.muzzleTrace);
      __asm { vmovss  dword ptr [rsp+160h+fmt], xmm6 }
      G_Weapon_RocketLauncher_Fire(vehicleEntity, _RSI, wp.isAlternate, WEAPON_HAND_DEFAULT, fmtb, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_42;
    case VEH_TURRET_ALT_FIRE:
      v132 = 1780i64;
      if ( v110->turret.fireBarrel )
        v132 = 1784i64;
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, *(_DWORD *)((char *)&v110->ent + v132), &wp.muzzleTrace);
      v49 = 0;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+160h+fmt], xmm0
      }
      G_Weapon_RocketLauncher_Fire(vehicleEntity, _RSI, wp.isAlternate, WEAPON_HAND_DEFAULT, fmt, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_39;
  }
  v131 = G_Vehicle_GetServerDef(v110->defIndex);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6513, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", v131->name) )
LABEL_35:
    __debugbreak();
LABEL_42:
  G_Utils_AddEvent(vehicleEntity, 0x59u, 0);
  G_Vehicle_NotifyTurretFire(vehicleEntity->vehicle);
  __asm
  {
    vmovaps xmm8, [rsp+160h+var_50]
    vmovaps xmm7, [rsp+160h+var_40]
    vmovaps xmm6, [rsp+160h+var_30]
  }
}

/*
==============
G_Vehicle_FreeEntity
==============
*/
void G_Vehicle_FreeEntity(gentity_s *ent)
{
  Vehicle *vehicle; 
  GVehicles *v3; 
  gentity_s *v4; 
  playerState_s *EntityPlayerState; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v7; 
  BgVehiclePhysics *ObjectById; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 705, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 706, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  vehicle = ent->vehicle;
  v3 = GVehicles::ms_gVehiclesSystem;
  if ( !vehicle->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 711, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  ent->health = 0;
  G_Vehicle_UpdateSounds(ent);
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v4 = EntHandle::ent(&ent->r.ownerNum);
    EntityPlayerState = G_GetEntityPlayerState(v4);
    if ( EntityPlayerState )
      BG_InitPlayerstateVehicle(EntityPlayerState);
  }
  Scr_SetString(&vehicle->lookAtText0, (scr_string_t)0);
  Scr_SetString(&vehicle->lookAtText1, (scr_string_t)0);
  EntHandle::setEnt(&vehicle->lookAtEnt, NULL);
  v3->FreeVehicle(v3, ent);
  ent->nextthink = 0;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x10u);
  ent->active = 0;
  *(_QWORD *)ent->s.lerp.eFlags.m_flags = 0i64;
  ent->s.lerp.apos.trType = TR_STATIONARY;
  G_VehiclePath_FreePathPos(&vehicle->pathPos);
  if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    if ( GVehicles::ms_gVehiclesSystem )
    {
      VehicleSystem = GVehicles::GetVehicleSystem();
      v7 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
      ObjectById = BgVehiclePhysicsManager::GetObjectById(v7, vehicle->physicsVehicle);
      if ( ObjectById )
      {
        if ( !ObjectById->m_playerControlled )
        {
          ObjectById->m_forcedKeyframe = 1;
          BgVehiclePhysics::SetKeyframed(ObjectById, 1);
        }
        GVehicles::PhysicsDestroyRigidBodyResources(v3, vehicle->physicsVehicle);
        v3->PhysicsDestroyVehicle(v3, &vehicle->physicsVehicle);
      }
    }
  }
  vehicle->usableScriptablePartCount = 0;
  vehicle->ent = NULL;
  ent->vehicle = NULL;
}

/*
==============
G_Vehicle_FreeReferences
==============
*/
void G_Vehicle_FreeReferences(gentity_s *ent)
{
  int *p_targetEnt; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 786, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags.m_flags[0] & 0x400000) != 0 )
  {
    p_targetEnt = &s_vehicleServers[1].targetEnt;
    do
    {
      if ( *(_QWORD *)(p_targetEnt - 979) && *(p_targetEnt - 562) == ent->s.number )
      {
        *(p_targetEnt - 562) = 2047;
        *(p_targetEnt - 563) = 0;
      }
      if ( *(_QWORD *)(p_targetEnt - 417) && *p_targetEnt == ent->s.number )
      {
        *p_targetEnt = 2047;
        *(p_targetEnt - 1) = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 145) && p_targetEnt[562] == ent->s.number )
      {
        p_targetEnt[562] = 2047;
        p_targetEnt[561] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 707) && p_targetEnt[1124] == ent->s.number )
      {
        p_targetEnt[1124] = 2047;
        p_targetEnt[1123] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 1269) && p_targetEnt[1686] == ent->s.number )
      {
        p_targetEnt[1686] = 2047;
        p_targetEnt[1685] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 1831) && p_targetEnt[2248] == ent->s.number )
      {
        p_targetEnt[2248] = 2047;
        p_targetEnt[2247] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 2393) && p_targetEnt[2810] == ent->s.number )
      {
        p_targetEnt[2810] = 2047;
        p_targetEnt[2809] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 2955) && p_targetEnt[3372] == ent->s.number )
      {
        p_targetEnt[3372] = 2047;
        p_targetEnt[3371] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 3517) && p_targetEnt[3934] == ent->s.number )
      {
        p_targetEnt[3934] = 2047;
        p_targetEnt[3933] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 4079) && p_targetEnt[4496] == ent->s.number )
      {
        p_targetEnt[4496] = 2047;
        p_targetEnt[4495] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 4641) && p_targetEnt[5058] == ent->s.number )
      {
        p_targetEnt[5058] = 2047;
        p_targetEnt[5057] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 5203) && p_targetEnt[5620] == ent->s.number )
      {
        p_targetEnt[5620] = 2047;
        p_targetEnt[5619] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 5765) && p_targetEnt[6182] == ent->s.number )
      {
        p_targetEnt[6182] = 2047;
        p_targetEnt[6181] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 6327) && p_targetEnt[6744] == ent->s.number )
      {
        p_targetEnt[6744] = 2047;
        p_targetEnt[6743] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 6889) && p_targetEnt[7306] == ent->s.number )
      {
        p_targetEnt[7306] = 2047;
        p_targetEnt[7305] = 0;
      }
      if ( *(_QWORD *)(p_targetEnt + 7451) )
      {
        if ( p_targetEnt[7868] == ent->s.number )
        {
          p_targetEnt[7868] = 2047;
          p_targetEnt[7867] = 0;
        }
      }
      p_targetEnt += 8992;
    }
    while ( (__int64)p_targetEnt < (__int64)&s_devGuiRegisterInfo.registeredName[13][76] );
  }
}

/*
==============
G_Vehicle_FreeScriptableUsabilityMasks
==============
*/
void G_Vehicle_FreeScriptableUsabilityMasks(const Vehicle *const veh)
{
  __int64 v2; 
  unsigned int v3; 
  unsigned __int16 serverInstanceFlatId; 
  unsigned int scriptableIndex; 
  ClientBits clientMask; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 678, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( ScriptableSv_TryGetIndexForEntity(veh->ent, &scriptableIndex) )
  {
    v2 = 0i64;
    v3 = scriptableIndex;
    memset(&clientMask, 255, sizeof(clientMask));
    if ( veh->usableScriptablePartCount )
    {
      do
      {
        serverInstanceFlatId = veh->usableScriptableParts[v2].serverInstanceFlatId;
        if ( serverInstanceFlatId > 0xFFu && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned short>(unsigned short)", "unsigned", (unsigned __int8)serverInstanceFlatId, "unsigned", serverInstanceFlatId) )
          __debugbreak();
        G_PlayerUse_SetObjectUsableForClientMask(v3, USE_CLASS_SCRIPTABLE, serverInstanceFlatId, 1, &clientMask);
        v2 = (unsigned int)(v2 + 1);
      }
      while ( (unsigned int)v2 < veh->usableScriptablePartCount );
    }
  }
}

/*
==============
G_Vehicle_Get
==============
*/
Vehicle *G_Vehicle_Get(int vehIndex)
{
  __int64 v1; 
  int v4; 

  v1 = vehIndex;
  if ( (unsigned int)vehIndex >= 0x80 )
  {
    v4 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 808, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", vehIndex, v4) )
      __debugbreak();
  }
  return &s_vehicleServers[v1];
}

/*
==============
G_Vehicle_GetBone
==============
*/
__int64 G_Vehicle_GetBone(const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  __int64 v3; 
  __int64 v4; 
  bool v5; 
  gentity_s *v6; 
  unsigned int *vehicle; 
  __int64 result; 

  v3 = entityIndex;
  v4 = bone;
  if ( entityIndex == 2047 )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6856, ASSERT_TYPE_ASSERT, "( entityIndex != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6857, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v5 )
    __debugbreak();
LABEL_7:
  v6 = &g_entities[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6860, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = (unsigned int *)v6->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6863, ASSERT_TYPE_ASSERT, "( vehicle )", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  if ( !Com_GetServerDObjForEnt(v6) )
    return 0xFFFFFFFFi64;
  switch ( (int)v4 )
  {
    case 0:
      return vehicle[435];
    case 1:
      return vehicle[442];
    case 2:
      return vehicle[436];
    case 3:
      return vehicle[437];
    case 4:
      return vehicle[438];
    case 5:
      return vehicle[441];
    case 6:
      return vehicle[439];
    case 7:
      return vehicle[440];
    default:
      if ( (int)v4 < 8 )
      {
        if ( (int)v4 < 10 )
          return 0xFFFFFFFFi64;
      }
      else if ( (int)v4 < 10 )
      {
        goto LABEL_25;
      }
      if ( (int)v4 >= BGVehicles::GetWheelCount(NULL) + 10 )
        return 0xFFFFFFFFi64;
LABEL_25:
      result = vehicle[v4 + 437];
      break;
  }
  return result;
}

/*
==============
G_Vehicle_GetCameraOrigin
==============
*/
void G_Vehicle_GetCameraOrigin(const playerState_s *playerState, const gentity_s *vehicleEntity, vec3_t *outOrigin)
{
  int v7; 
  const scr_string_t *PlayerBoneTags; 
  scr_string_t *v9; 
  bool v10; 
  int v11; 
  int outCountTags; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  _RSI = vehicleEntity;
  _R15 = G_Vehicle_GetServerDef(vehicleEntity->vehicle->defIndex);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6668, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  v7 = 0;
  outCountTags = 0;
  PlayerBoneTags = BGVehicles::GetPlayerBoneTags(&outCountTags);
  v9 = (scr_string_t *)PlayerBoneTags;
  if ( (outCountTags <= 0 || !PlayerBoneTags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6672, ASSERT_TYPE_ASSERT, "(vehPlayerTagCount > 0 && vehPlayerTags != 0)", (const char *)&queryFormat, "vehPlayerTagCount > 0 && vehPlayerTags != NULL") )
    __debugbreak();
  if ( _R15->camRemoteDrive )
  {
    if ( !G_Utils_DObjGetWorldTagPos(_RSI, scr_const.tag_camera, outOrigin) )
    {
      v11 = outCountTags;
      if ( outCountTags > 0 )
      {
        do
        {
          v10 = G_Utils_DObjGetWorldTagMatrix(_RSI, *v9, &outTagMat) == 0;
          v11 = outCountTags;
          if ( !v10 )
            break;
          ++v7;
          ++v9;
        }
        while ( v7 < outCountTags );
      }
      if ( v7 == v11 )
      {
        AnglesToAxis(&_RSI->r.currentAngles, (tmat33_t<vec3_t> *)&outTagMat);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+130h]
          vmovss  xmm1, dword ptr [rsi+134h]
          vmovss  dword ptr [rbp+outTagMat+24h], xmm0
          vmovss  xmm0, dword ptr [rsi+138h]
          vmovss  dword ptr [rbp+outTagMat+2Ch], xmm0
          vmovss  dword ptr [rbp+outTagMat+28h], xmm1
        }
      }
      if ( !BG_GetSuitDef(playerState->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6718, ASSERT_TYPE_ASSERT, "( suitDef )", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [r15+0C14h]
        vmovss  xmm1, dword ptr [r15+0C18h]
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, dword ptr [rbx+200h]
        vmulss  xmm3, xmm4, dword ptr [rbp+outTagMat+1Ch]
        vmulss  xmm2, xmm4, dword ptr [rbp+outTagMat+18h]
        vaddss  xmm2, xmm2, dword ptr [rbp+outTagMat+24h]
        vmovss  dword ptr [rbp+outTagMat+24h], xmm2
        vaddss  xmm2, xmm3, dword ptr [rbp+outTagMat+28h]
        vmulss  xmm3, xmm4, dword ptr [rbp+outTagMat+20h]
        vmovss  dword ptr [rbp+outTagMat+28h], xmm2
        vaddss  xmm2, xmm3, dword ptr [rbp+outTagMat+2Ch]
        vmovss  dword ptr [rbp+in1], xmm0
        vmovss  xmm0, dword ptr [r15+0C1Ch]
        vmovss  dword ptr [rbp+outTagMat+2Ch], xmm2
        vmovss  dword ptr [rbp+in1+4], xmm1
        vmovss  dword ptr [rbp+in1+8], xmm0
      }
      MatrixTransformVector43(&in1, &outTagMat, outOrigin);
    }
  }
  else
  {
    v10 = outCountTags == 0;
    if ( outCountTags > 0 )
    {
      do
      {
        if ( G_Utils_DObjGetWorldTagPos(_RSI, *v9, outOrigin) )
          break;
        ++v7;
        ++v9;
      }
      while ( v7 < outCountTags );
      v10 = v7 == outCountTags;
    }
    if ( v10 )
    {
      outOrigin->v[0] = _RSI->r.currentOrigin.v[0];
      outOrigin->v[1] = _RSI->r.currentOrigin.v[1];
      outOrigin->v[2] = _RSI->r.currentOrigin.v[2];
    }
  }
}

/*
==============
G_Vehicle_GetCollMapBrushIndex
==============
*/
__int64 G_Vehicle_GetCollMapBrushIndex(const char *modelname)
{
  signed int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  const char *targetName; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( !modelname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 482, ASSERT_TYPE_ASSERT, "( modelname )", (const char *)&queryFormat, "modelname") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 483, ASSERT_TYPE_ASSERT, "( cm.mapEnts )", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  v2 = cm.mapEnts->numCollmaps - 1;
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v2;
    do
    {
      v5 = v3;
      v6 = 0x7FFFFFFFi64;
      v7 = modelname;
      targetName = cm.mapEnts->collmapLookups[v4].targetName;
      if ( !targetName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !modelname && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = targetName - modelname;
      while ( 1 )
      {
        v10 = (unsigned __int8)v7[v9];
        v11 = v6;
        v12 = *(unsigned __int8 *)v7++;
        --v6;
        if ( !v11 )
          return (unsigned int)cm.mapEnts->collmapLookups[v2].brushIndex;
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            break;
        }
        if ( !v10 )
          return (unsigned int)cm.mapEnts->collmapLookups[v2].brushIndex;
      }
      --v2;
      --v3;
      --v4;
    }
    while ( v5 > 0 );
  }
  return 0xFFFFFFFFi64;
}

/*
==============
G_Vehicle_GetDef
==============
*/
const VehicleDef *G_Vehicle_GetDef(const playerState_s *ps)
{
  gentity_s *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6839, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6840, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  v2 = &g_entities[ps->vehicleState.entity];
  if ( !v2->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6843, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  return G_Vehicle_GetServerDef(v2->vehicle->defIndex);
}

/*
==============
G_Vehicle_GetMuzzleTrace
==============
*/
void G_Vehicle_GetMuzzleTrace(gentity_s *vehicleEntity, const vec3_t *gunOrigin, const vec3_t *gunForward, const int muzzleBone, vec3_t *outMuzzleTrace)
{
  vec3_t outPos; 

  _RBX = outMuzzleTrace;
  G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, muzzleBone, &outPos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+outPos]
    vsubss  xmm2, xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsp+48h+outPos+4]
    vsubss  xmm3, xmm1, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsp+48h+outPos+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm0, xmm5, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+4]
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm5, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
}

/*
==============
G_Vehicle_GetNetcodeTypeForOwner
==============
*/
__int64 G_Vehicle_GetNetcodeTypeForOwner(const BgVehiclePhysics *vehObj, const int ownerClientNum)
{
  VehiclePhysicsNetcodeType m_netcodeType; 
  const PartyData *PartyForSession; 

  if ( vehObj )
    m_netcodeType = vehObj->m_netcodeType;
  else
    m_netcodeType = VEH_NETCODE_CLIENT_PRED_SB;
  PartyForSession = Party_GetPartyForSession(&g_serverSession);
  if ( PartyForSession && Party_IsMemberHeadless(PartyForSession, ownerClientNum) )
    return 2;
  return (unsigned int)m_netcodeType;
}

/*
==============
G_Vehicle_GetPhysics
==============
*/
BgVehiclePhysics *G_Vehicle_GetPhysics(const Vehicle *veh)
{
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v3; 

  if ( !veh || !BGVehicles::PhysicsIsValid(veh->physicsVehicle) || !GVehicles::ms_gVehiclesSystem )
    return 0i64;
  VehicleSystem = GVehicles::GetVehicleSystem();
  v3 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  return BgVehiclePhysicsManager::GetObjectById(v3, veh->physicsVehicle);
}

/*
==============
G_Vehicle_GetPlayer
==============
*/
gentity_s *G_Vehicle_GetPlayer(gentity_s *vehicleEnt)
{
  gentity_s *result; 
  gentity_s *v3; 

  if ( !vehicleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5163, ASSERT_TYPE_ASSERT, "( vehicleEnt )", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( !vehicleEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5164, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
    __debugbreak();
  if ( !EntHandle::isDefined(&vehicleEnt->r.ownerNum) )
    return 0i64;
  result = EntHandle::ent(&vehicleEnt->r.ownerNum);
  v3 = result;
  if ( !result->client )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5169, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    return v3;
  }
  return result;
}

/*
==============
G_Vehicle_GetPlayerVehicle
==============
*/
gentity_s *G_Vehicle_GetPlayerVehicle(const gentity_s *player)
{
  gclient_s *client; 
  EntHandle *p_ownerNum; 
  unsigned __int16 number; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  gentity_s *v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4496, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4499, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    return 0i64;
  p_ownerNum = &player->r.ownerNum;
  number = player->r.ownerNum.number;
  if ( !number )
    goto LABEL_47;
  v6 = number;
  v7 = number - 1;
  if ( v7 >= 0x800 )
  {
    LODWORD(v14) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v8 = v6 - 1;
  if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v8] )
  {
    LODWORD(v15) = p_ownerNum->number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  if ( !p_ownerNum->number )
  {
LABEL_47:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4504, ASSERT_TYPE_ASSERT, "( player->r.ownerNum.isDefined() )", (const char *)&queryFormat, "player->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v9 = EntHandle::ent(p_ownerNum);
  if ( !v9->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4508, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  v10 = v9->r.ownerNum.number;
  if ( !v10 )
    goto LABEL_48;
  v11 = v10;
  v12 = v10 - 1;
  if ( v12 >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v13 = v11 - 1;
  if ( g_entities[v13].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v13] )
  {
    LODWORD(v15) = v9->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v15) )
      __debugbreak();
  }
  if ( !v9->r.ownerNum.number )
  {
LABEL_48:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4509, ASSERT_TYPE_ASSERT, "( vehEnt->r.ownerNum.isDefined() )", (const char *)&queryFormat, "vehEnt->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  return v9;
}

/*
==============
G_Vehicle_GetServerDef
==============
*/
const VehicleDef *G_Vehicle_GetServerDef(unsigned int vehDefIndex)
{
  __int64 v1; 
  __int64 v4; 
  int v5; 

  v1 = vehDefIndex;
  if ( vehDefIndex >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( ( sizeof( *array_counter( s_vehicleServerDefs ) ) + 0 ) )", "vehDefIndex doesn't index ARRAY_COUNT( s_vehicleServerDefs )\n\t%i not in [0, %i)", vehDefIndex, v5) )
      __debugbreak();
  }
  if ( !s_vehicleServerDefs[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 385, ASSERT_TYPE_ASSERT, "(s_vehicleServerDefs[vehDefIndex])", "%s\n\tVehicle at index %i has not been registered", "s_vehicleServerDefs[vehDefIndex]", v4) )
      __debugbreak();
  }
  return s_vehicleServerDefs[v1];
}

/*
==============
G_Vehicle_GetServerDefIndex
==============
*/
bool G_Vehicle_GetServerDefIndex(const char *name, unsigned int *outIndex)
{
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  bool result; 
  __int64 v11; 

  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 364, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !outIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 365, ASSERT_TYPE_ASSERT, "( outIndex )", (const char *)&queryFormat, "outIndex") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_VEHICLES, name, outIndex) )
  {
    if ( *outIndex >= 0x80 )
    {
      LODWORD(v11) = *outIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 369, ASSERT_TYPE_ASSERT, "(unsigned)( *outIndex ) < (unsigned)( ( sizeof( *array_counter( s_vehicleServerDefs ) ) + 0 ) )", "*outIndex doesn't index ARRAY_COUNT( s_vehicleServerDefs )\n\t%i not in [0, %i)", v11, 128) )
        __debugbreak();
    }
    if ( !s_vehicleServerDefs[*outIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 370, ASSERT_TYPE_ASSERT, "( s_vehicleServerDefs[*outIndex] != nullptr )", (const char *)&queryFormat, "s_vehicleServerDefs[*outIndex] != nullptr") )
      __debugbreak();
    v4 = 0x7FFFFFFFi64;
    v5 = s_vehicleServerDefs[*outIndex]->name;
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(name - v5);
    while ( 1 )
    {
      v7 = v5[(_QWORD)v6];
      v8 = v4;
      v9 = *v5++;
      --v4;
      if ( !v8 )
        break;
      if ( v7 != v9 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 371, ASSERT_TYPE_ASSERT, "( !I_strcmp( name, s_vehicleServerDefs[*outIndex]->name ) )", (const char *)&queryFormat, "!I_strcmp( name, s_vehicleServerDefs[*outIndex]->name )") )
          __debugbreak();
        return 1;
      }
      if ( !v7 )
        return 1;
    }
    return 1;
  }
  else
  {
    Com_PrintError(15, "G_Vehicle_GetServerDefIndex: Unknown vehicle definition '%s'\n", name);
    result = 0;
    *outIndex = 0;
  }
  return result;
}

/*
==============
G_Vehicle_GetServerDefSafe
==============
*/
const VehicleDef *G_Vehicle_GetServerDefSafe(unsigned int vehDefIndex)
{
  if ( vehDefIndex < 0x80 )
    return s_vehicleServerDefs[vehDefIndex];
  else
    return 0i64;
}

/*
==============
G_Vehicle_GetVehicleViewOrigin
==============
*/
void G_Vehicle_GetVehicleViewOrigin(const playerState_s *playerState, vec3_t *outViewOrigin)
{
  gentity_s *v7; 
  unsigned int vehCam_zOffsetMode3P; 
  VehCamZOffsetMode v28; 
  __int32 v29; 
  float fmt; 
  trace_t *trace; 
  __int64 v49; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> v52; 
  trace_t v53; 

  _RBX = outViewOrigin;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6736, ASSERT_TYPE_ASSERT, "( playerState )", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( playerState->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6737, ASSERT_TYPE_ASSERT, "( playerState->vehicleState.entity != ENTITYNUM_NONE )", (const char *)&queryFormat, "playerState->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( playerState->vehicleState.entity >= 0x800u )
  {
    LODWORD(trace) = playerState->vehicleState.entity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6738, ASSERT_TYPE_ASSERT, "(unsigned)( playerState->vehicleState.entity ) < (unsigned)( ( 2048 ) )", "playerState->vehicleState.entity doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", trace, 2048) )
      __debugbreak();
  }
  v7 = &g_entities[playerState->vehicleState.entity];
  if ( !v7->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6741, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
    __debugbreak();
  _RDI = G_Vehicle_GetServerDef(v7->vehicle->defIndex);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6744, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  G_Vehicle_GetCameraOrigin(playerState, v7, &axis.m[3]);
  AnglesToAxis(&v7->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  if ( _RDI->camRemoteDrive )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0C1Ch]
      vmovss  xmm1, dword ptr [rdi+0C18h]
      vmovss  xmm0, dword ptr [rdi+0C14h]
      vmovss  dword ptr [rsp+170h+in1], xmm0
      vmovss  dword ptr [rsp+170h+in1+4], xmm1
      vmovss  dword ptr [rsp+170h+in1+8], xmm2
    }
    MatrixTransformVector43(&in1, &axis, _RBX);
  }
  else
  {
    vehCam_zOffsetMode3P = _RDI->vehCam_zOffsetMode3P;
    __asm
    {
      vmovaps [rsp+170h+var_38+8], xmm6
      vmovaps [rsp+170h+var_48+8], xmm7
      vmovaps [rsp+170h+var_58+8], xmm8
    }
    if ( vehCam_zOffsetMode3P >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(trace) = vehCam_zOffsetMode3P;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6760, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleDef->vehCam_zOffsetMode3P ) < (unsigned)( VEHCAM_ZMODE_COUNT )", "vehicleDef->vehCam_zOffsetMode3P doesn't index VEHCAM_ZMODE_COUNT\n\t%i not in [0, %i)", trace, v49) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0C48h]
      vmovss  xmm5, dword ptr [rdi+0C4Ch]
      vmovss  xmm6, dword ptr [rdi+0C50h]
      vmulss  xmm1, xmm4, dword ptr [rsp+170h+axis]
      vaddss  xmm3, xmm1, dword ptr [rsp+170h+outOrigin]
      vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+0Ch]
      vmulss  xmm1, xmm5, dword ptr [rsp+170h+axis+10h]
      vaddss  xmm7, xmm3, xmm0
      vmulss  xmm0, xmm4, dword ptr [rsp+170h+axis+4]
      vaddss  xmm3, xmm0, dword ptr [rsp+170h+outOrigin+4]
      vmulss  xmm0, xmm5, dword ptr [rsp+170h+axis+14h]
      vaddss  xmm8, xmm3, xmm1
      vmulss  xmm1, xmm4, dword ptr [rsp+170h+axis+8]
      vaddss  xmm3, xmm1, dword ptr [rsp+170h+outOrigin+8]
      vmovss  dword ptr [rsp+170h+in1], xmm4
      vaddss  xmm4, xmm3, xmm0
      vmovss  dword ptr [rbx+8], xmm4
      vmovss  dword ptr [rsp+170h+in1+4], xmm5
      vmovss  dword ptr [rsp+170h+in1+8], xmm6
      vmovss  dword ptr [rbx], xmm7
      vmovss  dword ptr [rbx+4], xmm8
    }
    v28 = _RDI->vehCam_zOffsetMode3P;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 == 1 )
        {
          AnglesToAxis(&playerState->viewangles, &v52);
          __asm
          {
            vmovss  xmm3, dword ptr [rsp+170h+in1+8]
            vmulss  xmm1, xmm3, dword ptr [rbp+70h+var_F0+18h]
            vaddss  xmm2, xmm1, dword ptr [rbx]
            vmulss  xmm1, xmm3, dword ptr [rbp+70h+var_F0+1Ch]
            vmovss  dword ptr [rbx], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbx+4]
            vmulss  xmm1, xmm3, dword ptr [rbp+70h+var_F0+20h]
            vmovss  dword ptr [rbx+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm2
          }
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+18h]
          vaddss  xmm2, xmm1, xmm7
          vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+1Ch]
          vmovss  dword ptr [rbx], xmm2
          vaddss  xmm2, xmm1, xmm8
          vmulss  xmm1, xmm6, dword ptr [rsp+170h+axis+20h]
          vmovss  dword ptr [rbx+4], xmm2
          vaddss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbx+8], xmm2
        }
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm4, xmm6
        vmovss  dword ptr [rbx+8], xmm0
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+170h+fmt], xmm0
    }
    G_Active_ThirdPersonViewTrace(playerState, &axis.m[3], _RBX, 41951761, fmt, &v53, _RBX);
    __asm
    {
      vmovaps xmm8, [rsp+170h+var_58+8]
      vmovaps xmm7, [rsp+170h+var_48+8]
      vmovaps xmm6, [rsp+170h+var_38+8]
    }
  }
}

/*
==============
G_Vehicle_GetWheelOrigin
==============
*/
void G_Vehicle_GetWheelOrigin(const gentity_s *ent, int idx, vec3_t *outOrigin)
{
  __int64 v3; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  scr_string_t WheelBoneTag; 
  const char *v9; 
  const char *v10; 
  DObjAnimMat *LocalBoneIndexMatrix; 

  v3 = idx;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 864, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 865, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( vehicle->boneIndex.wheel[v3] < 0 )
  {
    ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
    if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 872, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    WheelBoneTag = BGVehicles::GetWheelBoneTag(ServerDef, v3);
    if ( WheelBoneTag )
    {
      v9 = SL_ConvertToString(WheelBoneTag);
      v10 = SL_ConvertToString(ent->targetname);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34918, 1233i64, v10, v9);
    }
  }
  LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(ent, vehicle->boneIndex.wheel[v3]);
  if ( !LocalBoneIndexMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 879, ASSERT_TYPE_ASSERT, "( mtx )", (const char *)&queryFormat, "mtx") )
    __debugbreak();
  outOrigin->v[0] = LocalBoneIndexMatrix->trans.v[0];
  outOrigin->v[1] = LocalBoneIndexMatrix->trans.v[1];
  outOrigin->v[2] = LocalBoneIndexMatrix->trans.v[2];
}

/*
==============
G_Vehicle_GetWorldBoneMatrix
==============
*/
__int64 G_Vehicle_GetWorldBoneMatrix(const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  __int64 v4; 
  bool v7; 

  v4 = entityIndex;
  if ( entityIndex == 2047 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6903, ASSERT_TYPE_ASSERT, "( entityIndex != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6904, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v7 )
    __debugbreak();
LABEL_7:
  G_Utils_DObjGetWorldBoneIndexMatrix(&g_entities[v4], boneIndex, result);
  return 1i64;
}

/*
==============
G_Vehicle_GroundPlant
==============
*/
void G_Vehicle_GroundPlant(gentity_s *ent, vehicle_physic_t *phys, int gravity)
{
  Vehicle *vehicle; 
  VehicleType type; 
  int WheelCount; 
  __int64 v20; 
  unsigned int model; 
  const char *v22; 
  scr_string_t target; 
  const char *v24; 
  const char *v25; 
  scr_string_t script_classname; 
  const char *v27; 
  int v30; 
  gentity_s *i; 
  int v37; 
  int v38; 
  signed __int64 v47; 
  __int64 v49; 
  Vehicle *v51; 
  const VehicleDef *ServerDef; 
  scr_string_t WheelBoneTag; 
  const char *v54; 
  const char *v55; 
  const dvar_t *v60; 
  const dvar_t *v66; 
  unsigned __int16 hitId; 
  bool v72; 
  unsigned int number; 
  unsigned __int16 v74; 
  unsigned int v75; 
  int v77; 
  int v105; 
  const dvar_t *v115; 
  __int64 v193; 
  int *v195; 
  bool v196; 
  unsigned __int64 v197; 
  bool v223; 
  __int64 v224; 
  float *v225; 
  bool v289; 
  float fmt; 
  __int64 duration; 
  __int64 durationa; 
  __int64 v314; 
  __int64 v315; 
  int wheelIndex; 
  int v318; 
  Vehicle *v320; 
  signed __int64 v321; 
  int contentmask; 
  __int64 v325; 
  vec3_t *p_pos; 
  __int64 v327; 
  __int64 v328; 
  const VehicleDef *v330; 
  VehicleDrivingState *p_drivingState; 
  vec3_t out; 
  vec3_t start; 
  vec3_t end; 
  vec3_t cross; 
  tmat43_t<vec3_t> axis; 
  vec3_t v0; 
  vec3_t in1; 
  vec3_t v1; 
  vec3_t v341; 
  vec3_t v342; 
  vec3_t v343; 
  vec3_t v344; 
  vec3_t angles; 
  Bounds box; 
  vec4_t color; 
  vec4_t v348; 
  vec4_t v349; 
  vec4_t v350; 
  vec4_t v351; 
  vec4_t v352; 
  trace_t results; 
  trace_t v354; 
  vec3_t pos; 
  int v357[31]; 
  char v358; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  _R12 = phys;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1541, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1542, ASSERT_TYPE_ASSERT, "( phys )", (const char *)&queryFormat, "phys") )
    __debugbreak();
  vehicle = ent->vehicle;
  v320 = vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1545, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _R15 = G_Vehicle_GetServerDef(vehicle->defIndex);
  v330 = _R15;
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1548, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  type = _R15->type;
  if ( type && type != VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1549, ASSERT_TYPE_ASSERT, "( (vehDef->type == VEH_WHEELS_4) || (vehDef->type == VEH_TREADED) )", (const char *)&queryFormat, "(vehDef->type == VEH_WHEELS_4) || (vehDef->type == VEH_TREADED)") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(_R15);
  v20 = WheelCount;
  if ( WheelCount < 4 )
  {
    model = ent->model;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v22 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, model);
    target = ent->target;
    v24 = v22;
    if ( target )
      v25 = SL_ConvertToString(target);
    else
      v25 = (char *)&queryFormat.fmt + 3;
    script_classname = ent->script_classname;
    if ( script_classname )
      v27 = SL_ConvertToString(script_classname);
    else
      v27 = (char *)&queryFormat.fmt + 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1559, ASSERT_TYPE_ASSERT, "(numWheels >= 4)", "%s\n\tVehicle '%s' on entity '%s:%s', using model '%s' only has %d wheels.\nThis is likely due to not deleting an entity that uses this vehicle, before its xmodel has unloaded", "numWheels >= 4", _R15->name, v27, v25, v24, v20) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  xmm1, dword ptr [r12+4]
  }
  v30 = 66065;
  p_drivingState = &vehicle->drivingState;
  if ( vehicle->drivingState != VEH_DRIVE_PLAYER )
    v30 = 529;
  __asm
  {
    vmovss  [rbp+350h+var_32C], xmm0
    vmovss  xmm0, dword ptr [r12+14h]
  }
  contentmask = v30;
  __asm
  {
    vmovss  [rbp+350h+var_328], xmm1
    vmovss  [rbp+350h+var_324], xmm0
  }
  AnglesToAxis(&_R12->angles, (tmat33_t<vec3_t> *)&axis);
  for ( i = ent->tagChildren; i; i = i->tagInfo->next )
  {
    if ( i->s.index.brushModel )
      break;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm10, xmm0, cs:__real@3a83126f
  }
  v37 = 0;
  v328 = v20;
  v38 = 0;
  wheelIndex = 0;
  __asm
  {
    vdivss  xmm0, xmm8, xmm10
    vmovss  [rbp+350h+var_3D0], xmm0
    vmovss  [rsp+450h+var_3EC], xmm10
    vmovss  dword ptr [rsp+450h+var_3E8], xmm8
  }
  if ( v20 > 0 )
  {
    _R15 = &pos;
    __asm
    {
      vmovss  xmm9, cs:__real@40000000
      vmovss  xmm12, cs:__real@42800000
      vmovss  xmm13, cs:__real@43800000
      vmovss  xmm15, cs:__real@3e000000
      vmovss  xmm14, cs:__real@44480000
      vmovss  xmm11, cs:__real@40800000
    }
    v47 = (char *)v320 - (char *)_R12;
    p_pos = &pos;
    v321 = (char *)v320 - (char *)_R12;
    v325 = v20;
    v327 = 1600i64 - (_QWORD)_R12;
    _RSI = _R12->wheelZPos;
    v49 = v20;
    __asm { vxorps  xmm7, xmm7, xmm7 }
    do
    {
      if ( *(int *)((char *)_RSI + v47 + 1600) >= 0 )
      {
        if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 865, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
          __debugbreak();
        v51 = ent->vehicle;
        if ( *(int *)((char *)&v51->ent + (_QWORD)_RSI + v327) < 0 )
        {
          ServerDef = G_Vehicle_GetServerDef(v51->defIndex);
          if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 872, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
            __debugbreak();
          WheelBoneTag = BGVehicles::GetWheelBoneTag(ServerDef, wheelIndex);
          if ( WheelBoneTag )
          {
            v54 = SL_ConvertToString(WheelBoneTag);
            v55 = SL_ConvertToString(ent->targetname);
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34918, 1233i64, v55, v54);
          }
        }
        _RBX = G_Utils_DObjGetLocalBoneIndexMatrix(ent, *(_DWORD *)((char *)&v51->ent + (_QWORD)_RSI + v327));
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 879, ASSERT_TYPE_ASSERT, "( mtx )", (const char *)&queryFormat, "mtx") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  dword ptr [rbp+350h+in1], xmm0
          vmovss  xmm1, dword ptr [rbx+14h]
          vmovss  dword ptr [rbp+350h+in1+4], xmm1
          vmovss  xmm0, dword ptr [rbx+18h]
          vmovss  dword ptr [rbp+350h+in1+8], xmm0
        }
        MatrixTransformVector43(&in1, &axis, &out);
        v60 = DCONST_DVARINT_bg_vehicleDebug;
        if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v60);
        if ( v60->current.integer )
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000
            vmovups xmm1, cs:__xmm@40000000000000000000000000000000
            vmovaps xmm2, xmm7; yaw
            vmovups xmmword ptr [rbp+350h+color], xmm0
            vmovups xmmword ptr [rbp+350h+box.midPoint], xmm1
            vmovss  dword ptr [rbp+350h+box.halfSize+4], xmm9
            vmovss  dword ptr [rbp+350h+box.halfSize+8], xmm9
          }
          G_DebugBox(&out, &box, *(float *)&_XMM2, &color, 1, 0);
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+350h+out]
          vmovss  xmm0, dword ptr [rbp+350h+out+4]
        }
        v66 = DCONST_DVARINT_bg_vehicleDebug;
        __asm
        {
          vmovss  dword ptr [rbp+350h+start], xmm1
          vmovss  dword ptr [rbp+350h+end], xmm1
          vmovss  xmm1, dword ptr [rbp+350h+out+8]
          vmovss  dword ptr [rbp+350h+start+4], xmm0
          vmovss  dword ptr [rbp+350h+end+4], xmm0
          vaddss  xmm0, xmm12, xmm1
          vsubss  xmm1, xmm1, xmm13
          vmovss  dword ptr [rbp+350h+end+8], xmm1
          vmovss  dword ptr [rbp+350h+start+8], xmm0
        }
        if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v66);
        if ( v66->current.integer )
        {
          __asm
          {
            vmovups xmm0, cs:__xmm@3f8000003f8000000000000000000000
            vmovups xmmword ptr [rbp+350h+var_288], xmm0
          }
          G_DebugLine(&start, &end, &v348, 1);
        }
        G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, ent->s.number, contentmask);
        hitId = results.hitId;
        if ( results.hitId > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(results.hitId), "unsigned", results.hitId) )
          __debugbreak();
        v72 = 0;
        if ( i )
        {
          number = i->s.number;
          v72 = hitId < number;
          if ( hitId == number )
          {
            G_Main_TraceCapsule(&v354, &out, &start, &bounds_origin, ent->s.number, contentmask);
            v74 = truncate_cast<unsigned short,unsigned int>(v354.hitId);
            v75 = i->s.number;
            v72 = v74 < v75;
            if ( v74 == v75 )
            {
              __asm { vmovss  xmm0, [rbp+350h+var_1D0.fraction] }
              v77 = ent->s.number;
              __asm
              {
                vsubss  xmm1, xmm0, xmm15
                vmovss  xmm0, dword ptr [rbp+350h+start]
                vmaxss  xmm6, xmm1, xmm7
                vsubss  xmm1, xmm0, dword ptr [rbp+350h+out]
                vmovss  xmm0, dword ptr [rbp+350h+start+4]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [rbp+350h+out]
                vsubss  xmm1, xmm0, dword ptr [rbp+350h+out+4]
                vmovss  xmm0, dword ptr [rbp+350h+start+8]
                vmulss  xmm2, xmm1, xmm6
                vsubss  xmm1, xmm0, dword ptr [rbp+350h+out+8]
                vmovss  dword ptr [rbp+350h+start], xmm3
                vaddss  xmm3, xmm2, dword ptr [rbp+350h+out+4]
                vmulss  xmm2, xmm1, xmm6
                vmovss  dword ptr [rbp+350h+start+4], xmm3
                vaddss  xmm3, xmm2, dword ptr [rbp+350h+out+8]
                vmovss  dword ptr [rbp+350h+start+8], xmm3
              }
              G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, v77, contentmask);
            }
          }
        }
        __asm
        {
          vmovss  xmm6, [rbp+350h+results.fraction]
          vcomiss xmm6, xmm8
        }
        if ( v72 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+350h+end]
            vsubss  xmm1, xmm0, dword ptr [rbp+350h+start]
            vmovss  xmm0, dword ptr [rbp+350h+end+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+350h+start]
            vsubss  xmm1, xmm0, dword ptr [rbp+350h+start+4]
            vmovss  xmm0, dword ptr [rbp+350h+end+8]
            vmulss  xmm2, xmm1, xmm6
            vsubss  xmm1, xmm0, dword ptr [rbp+350h+start+8]
            vmovss  dword ptr [rbp+350h+out], xmm3
            vaddss  xmm3, xmm2, dword ptr [rbp+350h+start+4]
            vmulss  xmm2, xmm1, xmm6
            vmovss  dword ptr [rbp+350h+out+4], xmm3
            vaddss  xmm3, xmm2, dword ptr [rbp+350h+start+8]
            vmovss  dword ptr [rbp+350h+out+8], xmm3
          }
          v105 = (results.surfaceFlags >> 19) & 0x3F;
        }
        else
        {
          __asm { vmovsd  xmm0, qword ptr [rbp+350h+end] }
          out.v[2] = end.v[2];
          v105 = 0;
          __asm { vmovsd  qword ptr [rbp+350h+out], xmm0 }
        }
        *((_DWORD *)_RSI + 12) = v105;
        if ( gravity )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsi-30h]
            vmulss  xmm1, xmm10, xmm14
            vsubss  xmm2, xmm0, xmm1
            vmulss  xmm0, xmm2, xmm10
            vaddss  xmm3, xmm0, dword ptr [rsi]
            vmovss  xmm0, dword ptr [rbp+350h+out+8]
            vcomiss xmm3, xmm0
            vmovss  dword ptr [rsi-30h], xmm2
            vmovss  dword ptr [rsi], xmm3
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm3, dword ptr [rbp+350h+out+8]
            vmovss  dword ptr [rsi], xmm3
          }
          *(_RSI - 12) = 0.0;
        }
        _R15 = p_pos;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+350h+out]
          vmovss  xmm1, dword ptr [rbp+350h+out+4]
        }
        v115 = DCONST_DVARINT_bg_vehicleDebug;
        __asm
        {
          vmovss  dword ptr [r15], xmm0
          vmovss  dword ptr [r15+4], xmm1
          vmovss  dword ptr [r15+8], xmm3
        }
        if ( !v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v115);
        if ( v115->current.integer )
        {
          __asm
          {
            vmovaps xmm3, xmm8; g
            vmovaps xmm2, xmm7; r
            vmovaps xmm1, xmm11; width
            vmovss  dword ptr [rsp+450h+fmt], xmm7
          }
          G_Vehicle_DebugBox(&pos + wheelIndex, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmt);
        }
        v49 = v325;
        v47 = v321;
        v38 = wheelIndex;
      }
      else
      {
        *(_QWORD *)_R15->v = 0i64;
        _R15->v[2] = 0.0;
      }
      ++v38;
      ++_R15;
      ++_RSI;
      wheelIndex = v38;
      --v49;
      p_pos = _R15;
      v325 = v49;
    }
    while ( v49 );
    v20 = v328;
    _R12 = phys;
    _R15 = v330;
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vmovss  xmm12, [rbp+350h+var_154]
    vmovss  xmm0, [rbp+350h+var_14C]
    vaddss  xmm0, xmm0, [rbp+350h+var_164]
    vmovss  xmm15, dword ptr [rbp+350h+pos]
    vmovss  xmm14, [rbp+350h+var_160]
    vmovss  xmm13, [rbp+350h+var_144]
    vmovss  xmm8, dword ptr [rbp+350h+pos+8]
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm15, [rbp+350h+var_158]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm14, [rbp+350h+var_148]
    vsubss  xmm7, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm12, dword ptr [rbp+350h+pos+4]
    vmulss  xmm1, xmm0, xmm3
    vaddss  xmm0, xmm13, [rbp+350h+var_15C]
    vsubss  xmm6, xmm2, xmm1
    vmulss  xmm2, xmm0, xmm3
    vaddss  xmm0, xmm8, [rbp+350h+var_150]
    vmulss  xmm1, xmm0, xmm3
    vsubss  xmm5, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm3, xmm1
    vmovss  xmm1, dword ptr [rsp+450h+var_3E8]
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm2, xmm7
    vmovss  xmm7, cs:__real@3f000000
    vmovss  dword ptr [rbp+350h+v0], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbp+350h+v0+8], xmm0
    vmovss  xmm0, [rbp+350h+var_158]
    vaddss  xmm0, xmm0, [rbp+350h+var_14C]
    vmulss  xmm1, xmm2, xmm6
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm0, xmm12, [rbp+350h+var_148]
    vmovss  xmm12, dword ptr [rsp+450h+var_3E8]
    vmovss  dword ptr [rbp+350h+v0+4], xmm1
    vaddss  xmm1, xmm15, [rbp+350h+var_164]
    vmulss  xmm3, xmm1, xmm7
    vaddss  xmm1, xmm14, dword ptr [rbp+350h+pos+4]
    vsubss  xmm6, xmm3, xmm2
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm0, xmm13, [rbp+350h+var_150]
    vmulss  xmm4, xmm1, xmm7
    vaddss  xmm1, xmm8, [rbp+350h+var_15C]
    vsubss  xmm5, xmm4, xmm2
    vmulss  xmm2, xmm0, xmm7
    vmulss  xmm3, xmm1, xmm7
    vmovss  xmm7, cs:__real@80000000
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbp+350h+v1], xmm0
    vmulss  xmm0, xmm2, xmm4
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rbp+350h+v1+8], xmm0
    vmovss  dword ptr [rbp+350h+v1+4], xmm1
  }
  Vec3Cross(&v0, &v1, &cross);
  __asm
  {
    vmovss  xmm10, dword ptr [rbp+350h+cross+4]
    vmovss  xmm11, dword ptr [rbp+350h+cross]
    vmulss  xmm2, xmm10, dword ptr [rbp+350h+pos+4]
    vmulss  xmm0, xmm11, dword ptr [rbp+350h+pos]
    vaddss  xmm3, xmm2, xmm0
    vmovss  xmm9, dword ptr [rbp+350h+cross+8]
    vmulss  xmm0, xmm9, dword ptr [rbp+350h+pos+8]
    vaddss  xmm8, xmm3, xmm0
    vmovss  [rbp+350h+var_354], xmm8
  }
  if ( v20 > 1 )
  {
    v193 = 1i64;
    if ( v20 >= 5 )
    {
      __asm { vmovss  xmm3, dword ptr [r15+2E4h] }
      v195 = v357;
      v197 = ((unsigned __int64)(v20 - 5) >> 2) + 1;
      v196 = __CFSHR__(v20 - 5, 2) || v197 == 0;
      v193 = 4 * v197 + 1;
      do
      {
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rax-8]
          vmulss  xmm0, xmm10, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v196 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+350h+var_354], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rax+4]
          vmulss  xmm0, xmm10, dword ptr [rax+8]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+0Ch]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v196 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+350h+var_354], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rax+10h]
          vmulss  xmm0, xmm10, dword ptr [rax+14h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+18h]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v196 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+350h+var_354], xmm8
          }
        }
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rax+1Ch]
          vmulss  xmm0, xmm10, dword ptr [rax+20h]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rax+24h]
          vaddss  xmm4, xmm2, xmm1
          vsubss  xmm0, xmm4, xmm8
          vcomiss xmm0, xmm3
        }
        if ( !v196 )
        {
          __asm
          {
            vsubss  xmm8, xmm4, xmm3
            vmovss  [rbp+350h+var_354], xmm8
          }
        }
        v195 += 12;
        v72 = v197-- == 0;
        v196 = v72 || v197 == 0;
      }
      while ( v197 );
    }
    if ( v193 < v20 )
    {
      __asm { vmovss  xmm4, dword ptr [r15+2E4h] }
      v72 = v20 < (unsigned __int64)v193;
      v224 = v20 - v193;
      v223 = v72 || v224 == 0;
      v225 = &pos.v[3 * v193 + 2];
      do
      {
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rcx-8]
          vmulss  xmm0, xmm10, dword ptr [rcx-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, dword ptr [rcx]
          vaddss  xmm3, xmm2, xmm1
          vsubss  xmm0, xmm3, xmm8
          vcomiss xmm0, xmm4
        }
        if ( !v223 )
          __asm { vsubss  xmm8, xmm3, xmm4 }
        v225 += 3;
        v72 = v224-- == 0;
        v223 = v72 || v224 == 0;
      }
      while ( v224 );
      __asm { vmovss  [rbp+350h+var_354], xmm8 }
    }
  }
  Vec3Cross(&cross, axis.m, &axis.m[1]);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+350h+axis+0Ch]
    vmovss  xmm6, dword ptr [rbp+350h+axis+10h]
    vmovss  xmm4, dword ptr [rbp+350h+axis+14h]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+350h+axis+0Ch], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+350h+axis+14h], xmm0
    vmovss  dword ptr [rbp+350h+axis+10h], xmm1
  }
  Vec3Cross(&axis.m[1], &cross, axis.m);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+350h+axis]
    vmovss  xmm6, dword ptr [rbp+350h+axis+4]
    vmovss  xmm4, dword ptr [rbp+350h+axis+8]
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
    vdivss  xmm2, xmm12, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+350h+axis], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+350h+axis+8], xmm0
    vmovss  dword ptr [rbp+350h+axis+4], xmm1
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
  __asm
  {
    vmovss  xmm3, [rsp+450h+var_3EC]; deltaTime
    vmovss  xmm2, cs:__real@40c00000; rate
    vmovss  xmm1, dword ptr [r12+24h]; cur
    vmovss  xmm0, dword ptr [rbp+350h+angles]; tgt
  }
  *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm3, [rsp+450h+var_3EC]; deltaTime
    vmovss  xmm2, cs:__real@40c00000; rate
    vmovss  dword ptr [r12+18h], xmm0
    vmovss  xmm1, dword ptr [r12+2Ch]; cur
    vmovss  xmm0, dword ptr [rbp+350h+angles+8]; tgt
  }
  *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm2, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@c2700000; min
    vmovss  dword ptr [r12+20h], xmm0
    vmovss  xmm0, dword ptr [r12+18h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@c2700000; min
    vmovss  dword ptr [r12+18h], xmm0
    vmovss  xmm0, dword ptr [r12+20h]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm7, cs:__real@bf800000
    vmovss  dword ptr [r12+20h], xmm0
  }
  if ( *p_drivingState != VEH_DRIVE_PLAYER )
  {
    __asm
    {
      vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( *p_drivingState <= (unsigned int)VEH_DRIVE_PLAYER )
    {
      __asm { vmovss  xmm1, dword ptr [r12+8] }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm11, dword ptr [r12]
        vmulss  xmm0, xmm10, dword ptr [r12+4]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm8
        vdivss  xmm0, xmm7, xmm9
        vmulss  xmm1, xmm2, xmm0
        vmovss  dword ptr [r12+8], xmm1
      }
    }
    __asm { vmovss  [rsp+450h+var_3EC], xmm1 }
    if ( (v318 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1714, ASSERT_TYPE_SANITY, "( !IS_NAN( phys->origin[2] ) )", (const char *)&queryFormat, "!IS_NAN( phys->origin[2] )") )
      __debugbreak();
  }
  AnglesSubtract(&_R12->angles, &_R12->prevAngles, &_R12->rotVel);
  __asm
  {
    vmovss  xmm2, [rbp+350h+var_3D0]
    vmulss  xmm0, xmm2, dword ptr [r12+78h]
    vmovss  dword ptr [r12+78h], xmm0
    vmulss  xmm1, xmm2, dword ptr [r12+7Ch]
    vmovss  dword ptr [r12+7Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [r12+80h]
    vmovss  dword ptr [r12+80h], xmm0
  }
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    _RBX = 0i64;
    v289 = 1;
    do
    {
      if ( !v289 )
      {
        LODWORD(v314) = 4;
        LODWORD(duration) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v314) )
          __debugbreak();
      }
      v341.v[_RBX] = pos.v[_RBX];
      v341.v[_RBX + 1] = pos.v[_RBX + 1];
      v341.v[_RBX + 2] = pos.v[_RBX + 2];
      if ( (unsigned int)v37 >= 4 )
      {
        LODWORD(v314) = 4;
        LODWORD(duration) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v314) )
          __debugbreak();
        LODWORD(v315) = 4;
        LODWORD(durationa) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", durationa, v315) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm0, xmm10, dword ptr [rbp+rbx+350h+var_2F0+4]
        vmulss  xmm1, xmm11, dword ptr [rbp+rbx+350h+var_2F0]
        vaddss  xmm1, xmm1, xmm0
        vsubss  xmm2, xmm1, xmm8
        vdivss  xmm0, xmm7, xmm9
        vmulss  xmm6, xmm2, xmm0
      }
      if ( (unsigned int)v37 >= 4 )
      {
        LODWORD(v314) = 4;
        LODWORD(duration) = v37;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v314) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbp+rbx+350h+var_2F0+8], xmm6 }
      _RBX += 3i64;
      v289 = (unsigned int)++v37 < 4;
    }
    while ( v37 < 4 );
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+350h+var_278], xmm0
    }
    G_DebugLine(&v341, &v342, &v349, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+350h+var_268], xmm0
    }
    G_DebugLine(&v342, &v344, &v350, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+350h+var_258], xmm0
    }
    G_DebugLine(&v344, &v343, &v351, 1);
    __asm
    {
      vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000
      vmovups xmmword ptr [rbp+350h+var_248], xmm0
    }
    G_DebugLine(&v343, &v341, &v352, 1);
  }
  _R11 = &v358;
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
G_Vehicle_GroundTrace
==============
*/
void G_Vehicle_GroundTrace(gentity_s *ent)
{
  int number; 
  int v16; 
  char v19; 
  bool v20; 
  int v26; 
  int clipmask; 
  int v35; 
  int v36; 
  int contentmask; 
  vec3_t v68; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1362, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1363, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _R15 = ent->vehicle;
  number = ent->s.number;
  contentmask = ent->clipmask;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+0F0h]
    vmovss  dword ptr [rbp+57h+start], xmm0
    vmovss  xmm1, dword ptr [r15+0F4h]
    vmovss  dword ptr [rbp+57h+start+4], xmm1
    vmovss  xmm0, dword ptr [r15+0F8h]
    vaddss  xmm0, xmm0, cs:__real@3e800000
    vmovss  dword ptr [rbp+57h+start+8], xmm0
    vmovss  xmm1, dword ptr [r15+0F0h]
    vmovss  dword ptr [rbp+57h+end], xmm1
    vmovss  xmm0, dword ptr [r15+0F4h]
    vmovss  dword ptr [rbp+57h+end+4], xmm0
    vmovss  xmm1, dword ptr [r15+0F8h]
    vsubss  xmm2, xmm1, cs:__real@3e800000
    vmovss  dword ptr [rbp+57h+end+8], xmm2
  }
  G_Main_TraceCapsule(&results, &start, &end, &_R15->phys.bounds, number, contentmask);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+57h+results.fraction]
    vmovups xmm2, xmmword ptr [rbp+57h+results.allsolid]
    vmovups ymm1, ymmword ptr [rbp+57h+results.contents]
  }
  v16 = 0;
  __asm
  {
    vmovups ymmword ptr cs:s_phys.groundTrace.fraction, ymm0
    vmovsd  xmm0, [rbp+57h+results.debugHitName]
    vmovd   eax, xmm2
  }
  *(_QWORD *)&s_phys.hasGround = 0i64;
  __asm
  {
    vmovsd  cs:s_phys.groundTrace.debugHitName, xmm0
    vmovups ymmword ptr cs:s_phys.groundTrace.contents, ymm1
    vmovups xmmword ptr cs:s_phys.groundTrace.allsolid, xmm2
  }
  v19 = 0;
  v20 = (_BYTE)_EAX == 0;
  if ( (_BYTE)_EAX )
  {
    _RDI = ent->vehicle;
    for ( _RBX = &s_correctSolidDeltas[0].v[2]; ; _RBX += 3 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx-8]
        vaddss  xmm1, xmm0, dword ptr [rdi+0F0h]
        vmovss  xmm2, dword ptr [rbx-4]
      }
      v26 = ent->s.number;
      clipmask = ent->clipmask;
      __asm
      {
        vmovss  dword ptr [rbp+57h+var_D0], xmm1
        vaddss  xmm0, xmm2, dword ptr [rdi+0F4h]
        vmovss  dword ptr [rbp+57h+var_D0+4], xmm0
        vmovss  xmm1, dword ptr [rdi+0F8h]
        vaddss  xmm2, xmm1, dword ptr [rbx]
        vmovss  dword ptr [rbp+57h+var_D0+8], xmm2
      }
      G_Main_TraceCapsule(&results, &v68, &v68, &_RDI->phys.bounds, v26, clipmask);
      if ( !results.startsolid )
        break;
      if ( (unsigned int)++v16 >= 0x1A )
        return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+var_D0]
      vmovss  dword ptr [rdi+0F0h], xmm0
      vmovss  xmm1, dword ptr [rbp+57h+var_D0+4]
      vmovss  dword ptr [rdi+0F4h], xmm1
      vmovss  xmm1, dword ptr [rdi+0F0h]
      vmovss  xmm0, dword ptr [rbp+57h+var_D0+8]
      vmovss  dword ptr [rdi+0F8h], xmm0
    }
    v35 = ent->s.number;
    v36 = ent->clipmask;
    __asm
    {
      vmovss  dword ptr [rbp+57h+var_D0], xmm1
      vmovss  xmm0, dword ptr [rdi+0F4h]
      vmovss  dword ptr [rbp+57h+var_D0+4], xmm0
      vmovss  xmm1, dword ptr [rdi+0F8h]
      vsubss  xmm2, xmm1, cs:__real@3f800000
      vmovss  dword ptr [rbp+57h+var_D0+8], xmm2
      vmovaps [rsp+100h+var_30], xmm6
    }
    G_Main_TraceCapsule(&results, &_RDI->phys.origin, &v68, &_RDI->phys.bounds, v35, v36);
    __asm
    {
      vmovups ymm6, ymmword ptr [rbp+57h+results.fraction]
      vmovups ymm0, ymmword ptr [rbp+57h+results.contents]
      vmovups xmm1, xmmword ptr [rbp+57h+results.allsolid]
      vmovups ymmword ptr cs:s_phys.groundTrace.contents, ymm0
      vmovsd  xmm0, [rbp+57h+results.debugHitName]
      vmovsd  cs:s_phys.groundTrace.debugHitName, xmm0
      vmovss  xmm0, dword ptr [rbp+57h+var_D0]
      vmovups ymmword ptr cs:s_phys.groundTrace.fraction, ymm6
      vmovups xmmword ptr cs:s_phys.groundTrace.allsolid, xmm1
      vsubss  xmm1, xmm0, dword ptr [rdi+0F0h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F0h]
      vmovss  dword ptr [rdi+0F0h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+var_D0+4]
      vsubss  xmm1, xmm0, dword ptr [rdi+0F4h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F4h]
      vmovss  dword ptr [rdi+0F4h], xmm3
      vmovss  xmm0, dword ptr [rbp+57h+var_D0+8]
      vsubss  xmm1, xmm0, dword ptr [rdi+0F8h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rdi+0F8h]
      vmovaps xmm6, [rsp+100h+var_30]
      vmovss  dword ptr [rdi+0F8h], xmm3
    }
  }
  __asm
  {
    vmovss  xmm0, [rbp+57h+results.fraction]
    vucomiss xmm0, cs:__real@3f800000
  }
  if ( !v20 )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+57h+results.normal+8]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [r15+140h]
    }
    if ( !v19 )
      goto LABEL_16;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+results.normal+4]
      vmovss  xmm1, dword ptr [rbp+57h+results.normal]
      vmulss  xmm3, xmm0, dword ptr [r15+13Ch]
      vmulss  xmm2, xmm1, dword ptr [r15+138h]
      vmulss  xmm0, xmm5, dword ptr [r15+140h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm1, xmm4, xmm0
      vcomiss xmm1, cs:__real@41200000
    }
    if ( v19 | v20 )
    {
LABEL_16:
      __asm { vcomiss xmm5, cs:__real@3f333333 }
      s_phys.hasGround = 1;
      if ( !v19 )
        s_phys.onGround = 1;
    }
  }
}

/*
==============
G_Vehicle_HandleOwnerChange
==============
*/
void G_Vehicle_HandleOwnerChange(gentity_s *vehEnt, const gentity_s *owner)
{
  signed __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int8 v6; 
  BgVehiclePhysics *ObjectById; 
  unsigned int physicsVehicle; 
  BgVehiclePhysicsManager *v9; 
  gclient_s *client; 
  gclient_s *v11; 
  __int64 entity; 
  unsigned int clientNum; 
  VehiclePhysicsNetcodeType m_netcodeType; 
  const PartyData *PartyForSession; 
  DObj *ServerDObjForEnt; 
  int v17; 
  gentity_s *v18; 
  playerState_s *p_ps; 
  __int64 v20; 
  __int64 v21; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7305, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7306, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
      __debugbreak();
    if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7282, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
      __debugbreak();
  }
  if ( owner )
  {
    v4 = (char *)owner->client - (char *)level.clients;
    v5 = v4 / 64592;
    if ( (v4 / 64592 < 0 || v5 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v5, "signed", v4 / 64592) )
      __debugbreak();
    if ( (unsigned int)(unsigned __int8)v5 >= level.maxclients )
    {
      LODWORD(v21) = level.maxclients;
      LODWORD(v20) = (unsigned __int8)v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7293, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( level.maxclients )", "client doesn't index level.maxclients\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v6 = v5 + 1;
  }
  else
  {
    v6 = 0;
  }
  vehEnt->s.staticState.vehiclePlayer.playerIndex = v6;
  ObjectById = NULL;
  physicsVehicle = vehEnt->vehicle->physicsVehicle;
  if ( BGVehicles::PhysicsIsValid(physicsVehicle) )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v9 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v9, physicsVehicle);
  }
  vehEnt->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
  vehEnt->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
  if ( ObjectById )
  {
    if ( owner )
    {
      if ( owner->s.eType == ET_PLAYER )
      {
        BgVehiclePhysics::SetPlayerControlled(ObjectById, 1);
        EntHandle::setEnt(&vehEnt->r.ownerNum, owner);
        if ( !owner->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7334, ASSERT_TYPE_ASSERT, "(owner->client)", (const char *)&queryFormat, "owner->client") )
          __debugbreak();
        client = owner->client;
        v11 = client;
        entity = client->ps.vehicleState.entity;
        if ( (_DWORD)entity != 2047 )
        {
          EntHandle::setEnt(&g_entities[entity].r.ownerNum, NULL);
          v11 = owner->client;
        }
        clientNum = v11->ps.clientNum;
        m_netcodeType = ObjectById->m_netcodeType;
        PartyForSession = Party_GetPartyForSession(&g_serverSession);
        if ( (!PartyForSession || !Party_IsMemberHeadless(PartyForSession, clientNum)) && m_netcodeType != VEH_NETCODE_SERVER_AUTH )
        {
          memset_0(&client->ps.vehicleState, 0, sizeof(client->ps.vehicleState));
          client->ps.vehicleState.targetEntity = 2047;
          client->ps.vehicleState.entity = vehEnt->s.number;
          client->ps.vehicleState.origin.v[0] = vehEnt->r.currentOrigin.v[0];
          client->ps.vehicleState.origin.v[1] = vehEnt->r.currentOrigin.v[1];
          client->ps.vehicleState.origin.v[2] = vehEnt->r.currentOrigin.v[2];
          client->ps.vehicleState.angles.v[0] = vehEnt->r.currentAngles.v[0];
          client->ps.vehicleState.angles.v[1] = vehEnt->r.currentAngles.v[1];
          client->ps.vehicleState.angles.v[2] = vehEnt->r.currentAngles.v[2];
          ServerDObjForEnt = Com_GetServerDObjForEnt(vehEnt);
          v17 = XAnimIKGetCacheKey(ServerDObjForEnt);
          XAnimIKPreCacheDObj(ServerDObjForEnt, ServerDObjForEnt->entnum, v17);
        }
      }
    }
    else
    {
      BgVehiclePhysics::SetPlayerControlled(ObjectById, 0);
      if ( EntHandle::isDefined(&vehEnt->r.ownerNum) )
      {
        v18 = EntHandle::ent(&vehEnt->r.ownerNum);
        if ( v18 )
        {
          p_ps = &v18->client->ps;
          if ( p_ps )
            BG_InitPlayerstateVehicle(p_ps);
        }
      }
    }
  }
}

/*
==============
G_Vehicle_HasTurret
==============
*/
_BOOL8 G_Vehicle_HasTurret(const gentity_s *vehEnt)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6286, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6287, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  return G_Vehicle_GetServerDef(vehEnt->vehicle->defIndex)->turretWeapon != NULL;
}

/*
==============
G_Vehicle_InUseByPlayer
==============
*/
bool G_Vehicle_InUseByPlayer(const gentity_s *vehEnt, const gentity_s *playerEnt)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5592, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5593, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  return EntHandle::isDefined(&playerEnt->r.ownerNum) && EntHandle::isDefined(&vehEnt->r.ownerNum) && EntHandle::entnum(&playerEnt->r.ownerNum) == vehEnt->s.number && EntHandle::entnum(&vehEnt->r.ownerNum) == playerEnt->s.number;
}

/*
==============
G_Vehicle_InitBoneTags
==============
*/
void G_Vehicle_InitBoneTags(Vehicle *veh)
{
  int v2; 
  const scr_string_t *PlayerBoneTags; 
  scr_string_t *v4; 
  int i; 
  int BoneIndex; 
  int v7; 
  gentity_s *ent; 
  int v9; 
  gentity_s *v10; 
  int v11; 
  gentity_s *v12; 
  int v13; 
  gentity_s *v14; 
  int v15; 
  gentity_s *v16; 
  int v17; 
  unsigned int defIndex; 
  const VehicleDef *ServerDef; 
  int v20; 
  gentity_s *v21; 
  int v22; 
  gentity_s *v23; 
  int *flash; 
  int j; 
  scr_string_t FlashTag; 
  int *wheel; 
  int v28; 
  scr_string_t WheelBoneTag; 
  int outCountTags; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3986, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3987, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  v2 = 0;
  outCountTags = 0;
  PlayerBoneTags = BGVehicles::GetPlayerBoneTags(&outCountTags);
  v4 = (scr_string_t *)PlayerBoneTags;
  if ( (outCountTags <= 0 || !PlayerBoneTags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3992, ASSERT_TYPE_ASSERT, "(countTags > 0 && vehPlayerTags)", (const char *)&queryFormat, "countTags > 0 && vehPlayerTags") )
    __debugbreak();
  for ( i = 0; i < outCountTags; ++v4 )
  {
    BoneIndex = SV_Game_DObjGetBoneIndex(veh->ent, *v4);
    veh->boneIndex.player = BoneIndex;
    if ( BoneIndex != -1 )
      break;
    ++i;
  }
  v7 = SV_Game_DObjGetBoneIndex(veh->ent, scr_const.tag_detach);
  ent = veh->ent;
  veh->boneIndex.detach = v7;
  v9 = SV_Game_DObjGetBoneIndex(ent, scr_const.tag_popout);
  v10 = veh->ent;
  veh->boneIndex.popout = v9;
  v11 = SV_Game_DObjGetBoneIndex(v10, scr_const.tag_turret);
  v12 = veh->ent;
  veh->boneIndex.turret = v11;
  v13 = SV_Game_DObjGetBoneIndex(v12, scr_const.tag_barrel);
  v14 = veh->ent;
  veh->boneIndex.barrel = v13;
  v15 = SV_Game_DObjGetBoneIndex(v14, scr_const.tag_camera);
  v16 = veh->ent;
  veh->boneIndex.camera = v15;
  v17 = SV_Game_DObjGetBoneIndex(v16, scr_const.tag_turret_base);
  defIndex = veh->defIndex;
  veh->boneIndex.turret_base = v17;
  ServerDef = G_Vehicle_GetServerDef(defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4009, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v20 = SV_Game_DObjGetBoneIndex(veh->ent, scr_const.tag_body_animate);
  v21 = veh->ent;
  veh->boneIndex.body = v20;
  v22 = SV_Game_DObjGetBoneIndex(v21, scr_const.tag_gun_pivot_le);
  v23 = veh->ent;
  veh->boneIndex.turretBaseLeft = v22;
  veh->boneIndex.turretBaseRight = SV_Game_DObjGetBoneIndex(v23, scr_const.tag_gun_pivot_ri);
  flash = veh->boneIndex.flash;
  for ( j = 0; j < 2; ++j )
  {
    FlashTag = BG_Vehicle_GetFlashTag(j);
    *flash++ = SV_Game_DObjGetBoneIndex(veh->ent, FlashTag);
  }
  wheel = veh->boneIndex.wheel;
  do
  {
    v28 = -1;
    if ( v2 < BGVehicles::GetWheelCount(ServerDef) )
    {
      WheelBoneTag = BGVehicles::GetWheelBoneTag(ServerDef, v2);
      if ( WheelBoneTag )
        v28 = SV_Game_DObjGetBoneIndex(veh->ent, WheelBoneTag);
    }
    *wheel = v28;
    ++v2;
    ++wheel;
  }
  while ( v2 < 12 );
}

/*
==============
G_Vehicle_InitModelAndValidateTags
==============
*/
void G_Vehicle_InitModelAndValidateTags(gentity_s *ent, unsigned int vehDefIndex)
{
  unsigned __int16 model; 
  DObj *ServerDObjForEnt; 
  DObj *v6; 
  const VehicleDef *ServerDef; 
  VehicleType type; 
  unsigned int physics_numWheels; 
  int i; 
  scr_string_t WheelBoneTag; 
  unsigned int WheelCount; 
  const char *v13; 
  const char *name; 
  const VehicleDef *v15; 
  const VehicleDef *v16; 
  const char *ModelName; 
  const char *ValidWheelBoneTagNames; 
  char *fmt; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1005, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( s_vehicleServerDefaultIndex == 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1006, ASSERT_TYPE_ASSERT, "( s_vehicleServerDefaultIndex != 128 )", (const char *)&queryFormat, "s_vehicleServerDefaultIndex != MAX_VEHICLE_DEF_GAME_CACHE") )
    __debugbreak();
  if ( vehDefIndex == s_vehicleServerDefaultIndex )
  {
    G_Utils_SetModel(ent, "defaultvehicle");
  }
  else
  {
    model = ent->model;
    if ( model && G_Utils_IsModelBad(model) )
      G_Utils_OverrideModel(ent->model, "defaultvehicle");
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, ent, 1);
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  v6 = ServerDObjForEnt;
  if ( ServerDObjForEnt && ServerDObjForEnt->numModels && XModelIsDefaultAsset(*ServerDObjForEnt->models) && DB_IsXAssetTransient(ASSET_TYPE_XMODEL, **(const char ***)v6->models) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1032, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, dobj->models[0]->name ) ) )", "( dobj->models[0]->name ) = %s", **(const char ***)v6->models) )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 971, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehDefIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 974, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  type = ServerDef->type;
  if ( (unsigned __int8)(type - 9) <= 2u || type == VEH_WHEELS_4 )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 932, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    physics_numWheels = 0;
    if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
    {
      physics_numWheels = ServerDef->vehiclePhysicsDef.physics_numWheels;
    }
    else
    {
      for ( i = 0; i < 12; ++i )
      {
        WheelBoneTag = BGVehicles::GetWheelBoneTag(ServerDef, i);
        if ( WheelBoneTag && SV_Game_DObjGetBoneIndex(ent, WheelBoneTag) >= 0 )
          ++physics_numWheels;
      }
    }
    WheelCount = BGVehicles::GetWheelCount(ServerDef);
    v13 = "?";
    if ( physics_numWheels != WheelCount )
    {
      name = "?";
      if ( ServerDef->name )
        name = ServerDef->name;
      Com_PrintWarning(15, "G_Vehicle_DObjHasRequiredTags: Warning - Expected wheel count = %d != Valid Wheel Tag Count =%d. Vehicle '%s' \n", WheelCount, physics_numWheels, name);
    }
    if ( type )
    {
      if ( type != VEH_TREADED || physics_numWheels - 4 <= 8 )
        return;
    }
    else if ( ((physics_numWheels - 4) & 0xFFFFFFFD) == 0 )
    {
      return;
    }
    v15 = G_Vehicle_GetServerDef(vehDefIndex);
    v16 = v15;
    if ( v15->name )
      v13 = v15->name;
    ModelName = G_CString_GetModelName(ent->model);
    ValidWheelBoneTagNames = BGVehicles::GetValidWheelBoneTagNames(v16);
    if ( v16->vehiclePhysicsDef.physicsEnabled )
    {
      LODWORD(fmt) = (unsigned __int8)v16->type;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34B10, 1234i64, v13, fmt, ModelName, ValidWheelBoneTagNames);
    }
    else
    {
      Com_PrintWarning(15, "Vehicle '%s' type '%d' with xmodel '%s' is missing a required wheel tag! Valid tags are: \n%s\n", v13, (unsigned __int8)v16->type, ModelName, ValidWheelBoneTagNames);
    }
  }
}

/*
==============
G_Vehicle_InitSystem
==============
*/
void G_Vehicle_InitSystem(void)
{
  __int64 v0; 
  Vehicle *v1; 
  VehiclePathPos *p_pathPos; 

  memset_0(&s_devGuiRegisterInfo, 0, sizeof(s_devGuiRegisterInfo));
  v0 = 128i64;
  s_vehicleServerDefaultIndex = 128;
  memset_0(s_vehicleServerDefs, 0, sizeof(s_vehicleServerDefs));
  NetConstStrings_CallForAllVehicleStrings(G_Vehicle_RegisterServerDefAtIndex);
  if ( !G_Vehicle_GetServerDefIndex("defaultvehicle", &s_vehicleServerDefaultIndex) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E343C0, 1232i64, "defaultvehicle");
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, "defaultvehicle");
  v1 = s_vehicleServers;
  p_pathPos = &s_vehicleServers[0].pathPos;
  do
  {
    G_VehiclePath_InitPathPos(p_pathPos);
    p_pathPos = (VehiclePathPos *)((char *)p_pathPos + 2248);
    v1->ent = NULL;
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( GVehicles::ms_gVehiclesSystem )
    GVehicleSuspendManager::Reset(&GVehicles::ms_gVehiclesSystem->m_suspendManager);
  level.vehicles = s_vehicleServers;
  memset_0(s_vehicleDamageTime, 0, sizeof(s_vehicleDamageTime));
  G_VehiclePath_Init();
}

/*
==============
G_Vehicle_IsPlayerProtected
==============
*/
bool G_Vehicle_IsPlayerProtected(const gentity_s *player)
{
  gclient_s *client; 
  unsigned __int16 number; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  Vehicle *vehicle; 
  __int64 v9; 
  __int64 v10; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4693, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( !client )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4696, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2184, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    return 0;
  number = player->r.ownerNum.number;
  if ( !number )
    goto LABEL_35;
  v4 = number;
  v5 = number - 1;
  if ( v5 >= 0x800 )
  {
    LODWORD(v9) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v6 = v4 - 1;
  if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v6] )
  {
    LODWORD(v10) = player->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v10) )
      __debugbreak();
  }
  if ( !player->r.ownerNum.number )
  {
LABEL_35:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4701, ASSERT_TYPE_ASSERT, "( player->r.ownerNum.isDefined() )", (const char *)&queryFormat, "player->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  vehicle = EntHandle::ent(&player->r.ownerNum)->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4706, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  return vehicle->drivingState == VEH_DRIVE_PLAYER && G_Vehicle_GetServerDef(vehicle->defIndex)->playerProtected;
}

/*
==============
G_Vehicle_IsRemoteDrive
==============
*/
__int64 G_Vehicle_IsRemoteDrive(const gentity_s *vehEnt)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6273, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6274, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  return (unsigned int)G_Vehicle_GetServerDef(vehEnt->vehicle->defIndex)->camRemoteDrive;
}

/*
==============
G_Vehicle_IsSuspended
==============
*/
bool G_Vehicle_IsSuspended(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8242, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  return GVehicleSuspendManager::IsSuspended(&GVehicles::ms_gVehiclesSystem->m_suspendManager, ent);
}

/*
==============
G_Vehicle_IsTouching
==============
*/
char G_Vehicle_IsTouching(scrContext_t *scrContext, const gentity_s *ent1, const gentity_s *ent2, bool *result)
{
  const gentity_s *v6; 
  Vehicle *v7; 
  Vehicle *vehicle; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int otherBodyId; 
  vec3_t position; 
  vec4_t orientation; 

  v6 = ent1;
  if ( ent1->s.eType == ET_FIRST && (v7 = ent2->vehicle) != NULL && G_Vehicle_GetServerDef(v7->defIndex)->accurateShapeOverlap )
  {
    _RBX = ent2;
  }
  else
  {
    if ( ent2->s.eType )
      return 0;
    vehicle = v6->vehicle;
    if ( !vehicle || !G_Vehicle_GetServerDef(vehicle->defIndex)->accurateShapeOverlap )
      return 0;
    _RBX = v6;
    v6 = ent2;
  }
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rsp+78h+position], xmm0
    vmovups xmm0, xmmword ptr cs:?vec4_origin@@3Tvec4_t@@B; vec4_t const vec4_origin
  }
  position.v[2] = vec3_origin.v[2];
  __asm { vmovups xmmword ptr [rsp+78h+orientation], xmm0 }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBX);
  if ( Instance == -1 )
    RigidBodyID = 0xFFFFFF;
  else
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
  {
    Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+130h]
      vmovss  xmm1, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+78h+position], xmm0
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+78h+position+8], xmm0
      vmovss  dword ptr [rsp+78h+position+4], xmm1
    }
    AnglesToQuat(&_RBX->r.currentAngles, &orientation);
  }
  v17 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RBX);
  v18 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v17, 0);
  v19 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v6);
  otherBodyId = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v19, 0);
  *result = PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v18, &position, &orientation, otherBodyId);
  return 1;
}

/*
==============
G_Vehicle_IsUnusable
==============
*/
gentity_s *G_Vehicle_IsUnusable(const gentity_s *player)
{
  gclient_s *client; 
  gentity_s *result; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4469, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( !client )
    return 0i64;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    return 0i64;
  if ( !EntHandle::isDefined(&player->r.ownerNum) )
    return 0i64;
  result = EntHandle::ent(&player->r.ownerNum);
  if ( (result->flags.m_flags[0] & 0x20000000) == 0 )
    return 0i64;
  return result;
}

/*
==============
G_Vehicle_IsUsable
==============
*/
bool G_Vehicle_IsUsable(const gentity_s *ent, const gentity_s *player)
{
  gclient_s *client; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  gclient_s *v8; 
  char v10; 
  char v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4434, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !player )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4435, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4382, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
  }
  if ( EntHandle::isDefined(&player->r.ownerNum) )
    return 0;
  client = player->client;
  if ( !client )
    return 0;
  if ( client->sess.unusableVehicles )
    return 0;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    return 0;
  p_otherFlags = &client->ps.otherFlags;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0xBu) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x1Bu) )
    return 0;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, GameModeFlagValues::ms_mpValue, 0x38u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2514, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MELEE_EXECUTION )") )
      __debugbreak();
    return 0;
  }
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4352, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( player->health <= 0 )
    return 0;
  v8 = player->client;
  if ( (v8->flags & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v8->ps.otherFlags, ACTIVE, 1u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v8->ps.pm_flags, ACTIVE, 5u) || EntHandle::isDefined(&ent->r.ownerNum) || ent->health <= 0 )
    return 0;
  _RBX = DVARFLT_player_use_vehicle_speed;
  if ( !DVARFLT_player_use_vehicle_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_use_vehicle_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm2, xmm0, cs:__real@418ccccd
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm2, xmm1
  }
  if ( !(v10 | v14) )
  {
    _RAX = ent->vehicle;
    __asm { vcomiss xmm2, dword ptr [rax+588h] }
    if ( v10 )
      return 0;
  }
  return (ent->flags.m_flags[0] & 0x20000000) != 0;
}

/*
==============
G_Vehicle_JoltBody
==============
*/

void __fastcall G_Vehicle_JoltBody(gentity_s *ent, const vec3_t *dir, double intensity, double speedFrac, float decel)
{
  tmat33_t<vec3_t> axis; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1064, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RDI = ent->vehicle;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1067, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  G_Vehicle_GetServerDef(_RDI->defIndex);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm0, xmm7; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm7, xmm0 }
  AnglesToAxis(&_RDI->phys.angles, &axis);
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+98h+axis+4]
    vmulss  xmm4, xmm1, dword ptr [rsi+4]
    vmovss  xmm2, dword ptr [rsp+98h+axis]
    vmulss  xmm3, xmm2, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsp+98h+axis+8]
    vmulss  xmm2, xmm1, dword ptr [rsi+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm3, xmm5, xmm2
    vmovss  dword ptr [rdi+6B0h], xmm3
    vmovss  xmm0, dword ptr [rsp+98h+axis+10h]
    vmulss  xmm3, xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsp+98h+axis+0Ch]
    vmulss  xmm2, xmm1, dword ptr [rsi]
    vmovss  xmm0, dword ptr [rsp+98h+axis+14h]
    vmulss  xmm1, xmm0, dword ptr [rsi+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
    vmovss  dword ptr [rdi+6B4h], xmm3
  }
  *(_QWORD *)&_RDI->joltTime = 1065353216i64;
  __asm
  {
    vmovaps xmm0, xmm3
    vmovss  xmm3, dword ptr [rdi+6B0h]
    vmulss  xmm0, xmm0, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm6, xmm0
    vdivss  xmm1, xmm6, xmm0
    vmulss  xmm0, xmm3, xmm1
    vmovss  dword ptr [rdi+6B0h], xmm0
    vmulss  xmm1, xmm1, dword ptr [rdi+6B4h]
    vmovss  dword ptr [rdi+6B4h], xmm1
    vmulss  xmm0, xmm7, dword ptr [rbx+6Ch]
    vmulss  xmm1, xmm0, dword ptr [rdi+6B0h]
    vmovss  dword ptr [rdi+6B0h], xmm1
    vmulss  xmm0, xmm7, dword ptr [rbx+70h]
    vmulss  xmm1, xmm0, dword ptr [rdi+6B4h]
    vmovss  dword ptr [rdi+6B4h], xmm1
    vmulss  xmm0, xmm8, dword ptr [rdi+588h]
    vmovss  xmm1, [rsp+98h+decel]
    vmovss  dword ptr [rdi+6C0h], xmm0
    vmovss  dword ptr [rdi+6C4h], xmm1
  }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
G_Vehicle_Knockback
==============
*/
void G_Vehicle_Knockback(Vehicle *veh, const vec3_t *dir, meansOfDeath_t mod, float forceScale, const vec3_t *origin)
{
  G_Vehicle_Knockback_Internal(veh, dir, mod, forceScale, origin, 0);
}

/*
==============
G_Vehicle_Knockback_Internal
==============
*/

void __fastcall G_Vehicle_Knockback_Internal(Vehicle *veh, const vec3_t *dir, meansOfDeath_t mod, double forceScale, const vec3_t *origin, bool onlyAngular)
{
  GVehicles *v10; 
  const VehicleDef *ServerDef; 
  const dvar_t *v13; 
  const char *v14; 
  unsigned int physicsVehicle; 
  __int64 v26; 
  vec3_t v27; 
  vec3_t impulse; 
  tmat43_t<vec3_t> transform; 

  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5838, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v10 = GVehicles::ms_gVehiclesSystem;
    if ( GVehicles::PhysicsIsCrashingEnabled(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle) )
    {
      if ( (unsigned int)mod >= MOD_NUM )
      {
        LODWORD(v26) = mod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v26, 25) )
          __debugbreak();
      }
      if ( (unsigned int)(mod - 3) <= 4 || mod == MOD_EXPLOSIVE )
      {
        ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
        __asm { vmovss  xmm0, cs:__real@46fa0000 }
        if ( ServerDef->vehiclePhysicsDef.physics_gameProfile )
        {
          if ( ServerDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_WHEELSON )
          {
LABEL_19:
            _RAX = origin;
            __asm
            {
              vmulss  xmm2, xmm0, xmm6
              vmulss  xmm0, xmm2, dword ptr [rbp+0]
              vmulss  xmm1, xmm2, dword ptr [rbp+4]
              vmovss  dword ptr [rsp+0C8h+impulse], xmm0
              vmulss  xmm0, xmm2, dword ptr [rbp+8]
              vmovss  dword ptr [rsp+0C8h+impulse+8], xmm0
              vmovss  dword ptr [rsp+0C8h+impulse+4], xmm1
            }
            if ( origin )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  dword ptr [rsp+0C8h+var_88], xmm0
                vmovss  xmm0, dword ptr [rax+8]
              }
            }
            else
            {
              GVehicles::PhysicsGetChassisTransform(v10, veh->physicsVehicle, &transform);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+0C8h+transform+24h]
                vmovss  xmm1, dword ptr [rsp+0C8h+transform+28h]
                vmovss  dword ptr [rsp+0C8h+var_88], xmm0
                vmovss  xmm0, dword ptr [rsp+0C8h+transform+2Ch]
              }
            }
            physicsVehicle = veh->physicsVehicle;
            __asm
            {
              vmovss  dword ptr [rsp+0C8h+var_88+8], xmm0
              vmovss  dword ptr [rsp+0C8h+var_88+4], xmm1
            }
            if ( onlyAngular )
              GVehicles::PhysicsAddAngularImpulse(v10, physicsVehicle, &impulse, &v27);
            else
              GVehicles::PhysicsAddImpulse(v10, physicsVehicle, &impulse, &v27);
            goto LABEL_25;
          }
          v13 = DCONST_DVARFLT_bg_wheelsonKickBackForce;
          v14 = "bg_wheelsonKickBackForce";
        }
        else
        {
          v13 = DCONST_DVARFLT_vehTankFireForce;
          v14 = "vehTankFireForce";
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v13, v14);
        goto LABEL_19;
      }
    }
  }
LABEL_25:
  __asm { vmovaps xmm6, [rsp+0C8h+var_28] }
}

/*
==============
G_Vehicle_LinkCommonChecks
==============
*/
void G_Vehicle_LinkCommonChecks(const gentity_s *vehEnt, const gentity_s *player)
{
  Vehicle *vehicle; 
  gclient_s *client; 
  EntHandle *p_ownerNum; 
  unsigned __int16 number; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3641, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3642, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  vehicle = vehEnt->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3645, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3648, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E35B00, 1235i64);
  if ( EntHandle::isDefined(&player->r.ownerNum) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E35B60, 1236i64);
  if ( EntHandle::isDefined(&vehEnt->r.ownerNum) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E35BC0, 1237i64);
  if ( vehicle->boneIndex.player < 0 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E35C20, 1238i64);
  if ( BG_IsTurretActive(&client->ps) )
  {
    if ( client->ps.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3664, ASSERT_TYPE_ASSERT, "( client->ps.viewlocked_entNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "client->ps.viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    p_ownerNum = &level.gentities[client->ps.viewlocked_entNum].r.ownerNum;
    number = p_ownerNum->number;
    if ( !p_ownerNum->number )
      goto LABEL_44;
    v8 = number;
    v9 = number - 1;
    if ( v9 >= 0x800 )
    {
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v10 = v8 - 1;
    if ( g_entities[v10].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v10] )
    {
      LODWORD(v12) = p_ownerNum->number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v12) )
        __debugbreak();
    }
    if ( !p_ownerNum->number )
    {
LABEL_44:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3665, ASSERT_TYPE_ASSERT, "( level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined() )", (const char *)&queryFormat, "level.gentities[client->ps.viewlocked_entNum].r.ownerNum.isDefined()") )
        __debugbreak();
    }
    G_Turret_ClientStopUsingTurret(&level.gentities[client->ps.viewlocked_entNum]);
  }
}

/*
==============
G_Vehicle_LinkPlayer
==============
*/
void G_Vehicle_LinkPlayer(gentity_s *vehEnt, gentity_s *player)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  gclient_s *client; 
  const VehicleDef *v8; 
  int barrel; 
  tmat43_t<vec3_t> *p_outTagMat; 
  VehicleType type; 
  const scr_string_t *PlayerBoneTags; 
  scr_string_t *v14; 
  int v15; 
  bool v16; 
  __int64 drivingState; 
  char v18; 
  int outCountTags; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v22; 
  char outErrorMessage[256]; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3740, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3741, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3742, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  vehicle = vehEnt->vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  client = player->client;
  v8 = ServerDef;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3748, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  G_Vehicle_LinkCommonChecks(vehEnt, player);
  G_Utils_DObjGetWorldBoneIndexMatrix(vehEnt, vehicle->boneIndex.player, &outTagMat);
  barrel = vehicle->boneIndex.barrel;
  if ( barrel < 0 )
  {
    p_outTagMat = &outTagMat;
  }
  else
  {
    G_Utils_DObjGetWorldBoneIndexMatrix(vehEnt, barrel, &v22);
    p_outTagMat = &v22;
  }
  AxisToAngles((const tmat33_t<vec3_t> *)p_outTagMat, &angles);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+208h+angles+8], xmm0
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  type = v8->type;
  if ( (unsigned __int8)(type - 5) <= 1u || type == VEH_BOAT )
    GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, player, &vec3_origin);
  else
    GUtils::ms_gUtils->SetPlayerOrigin(GUtils::ms_gUtils, player, &outTagMat.row3, 1, 1);
  outCountTags = 0;
  PlayerBoneTags = BGVehicles::GetPlayerBoneTags(&outCountTags);
  v14 = (scr_string_t *)PlayerBoneTags;
  if ( (outCountTags <= 0 || !PlayerBoneTags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3778, ASSERT_TYPE_ASSERT, "(vehPlayerTagCount > 0 && vehPlayerTags != 0)", (const char *)&queryFormat, "vehPlayerTagCount > 0 && vehPlayerTags != NULL") )
    __debugbreak();
  v15 = 0;
  v16 = outCountTags == 0;
  if ( outCountTags > 0 )
  {
    do
    {
      if ( G_EntLinkToWithOffset(player, vehEnt, *v14, &vec3_origin, &vec3_origin, 256, outErrorMessage) )
        break;
      ++v15;
      ++v14;
    }
    while ( v15 < outCountTags );
    v16 = v15 == outCountTags;
  }
  if ( v16 )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E35F50, 1239i64, outErrorMessage);
  if ( vehicle->targetEnt == player->s.number )
  {
    vehicle->hasTarget = 0;
    vehicle->targetEnt = 2047;
    EntHandle::setEnt(&vehicle->lookAtEnt, NULL);
  }
  drivingState = (unsigned int)vehicle->drivingState;
  if ( (_DWORD)drivingState )
    Com_PrintWarning(15, "WARNING: G_Vehicle_LinkPlayer() called to a vehicle with a driving state (%d).", drivingState);
  else
    vehicle->drivingState = VEH_DRIVE_PLAYER;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&vehEnt->s.lerp.eFlags, ACTIVE, 0xBu);
  EntHandle::setEnt(&vehEnt->r.ownerNum, player);
  EntHandle::setEnt(&player->r.ownerNum, vehEnt);
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2191, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
  client->ps.viewlocked_entNum = vehEnt->s.number;
  client->link_useTagScriptedCamera = 0;
  if ( v8->type == VEH_UGV )
  {
    client->link_useTagAnglesForViewAngles = 1;
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
  client->link_rotationMovesEyePos = v18;
  if ( v8->type == VEH_SUBMARINE )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_spValue, 0x24u);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->SetPlayerVehicleType(GVehicles::ms_gVehiclesSystem, (playerState_s *)client, v8->type);
  G_DefaultViewAngleClampGoal(&client->link_viewClamp);
  G_SnapToViewAngleClampGoal(&client->link_viewClamp);
  G_UpdateViewAngleClamp(client, &angles);
  GScr_AddEntity(player);
  GScr_Notify(vehicle->ent, scr_const.vehicle_mount, 1u);
}

/*
==============
G_Vehicle_LinkPlayerTurretControlOnly
==============
*/
void G_Vehicle_LinkPlayerTurretControlOnly(gentity_s *vehEnt, gentity_s *player)
{
  Vehicle *vehicle; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3676, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  G_Vehicle_LinkCommonChecks(vehEnt, player);
  vehicle = vehEnt->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3681, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  vehEnt->s.lerp.u.anonymous.data[1] |= 0x10000000u;
  if ( vehicle->targetEnt == player->s.number )
  {
    vehicle->hasTarget = 0;
    vehicle->targetEnt = 2047;
    EntHandle::setEnt(&vehicle->lookAtEnt, NULL);
  }
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&vehEnt->s.lerp.eFlags, ACTIVE, 0xBu);
  EntHandle::setEnt(&vehEnt->r.ownerNum, player);
  EntHandle::setEnt(&player->r.ownerNum, vehEnt);
}

/*
==============
G_Vehicle_MoveToLookAhead_Physics
==============
*/

void __fastcall G_Vehicle_MoveToLookAhead_Physics(Vehicle *veh, const vec3_t *lookAheadOrigin, double steeringOffsetFrac, double throttle, float brake)
{
  GVehicles *v23; 
  unsigned int physicsVehicle; 
  const dvar_t *v25; 
  GVehicles *v34; 
  unsigned int transMode; 
  bool v44; 
  bool v45; 
  bool v46; 
  const dvar_t *v76; 
  bool v81; 
  int v107; 
  vec2_t forward; 
  vec2_t right; 
  vec3_t centerWS; 
  char v112; 
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
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps [rsp+158h+var_E8], xmm15
  }
  _RBP = lookAheadOrigin;
  _RDI = veh;
  __asm
  {
    vmovaps xmm15, xmm3
    vmovaps xmm14, xmm2
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7911, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RDI->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7912, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(_RDI->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7913, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  _R14 = G_Vehicle_GetServerDef(_RDI->defIndex);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7917, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  _RAX = _RDI->ent;
  __asm { vmovss  xmm0, dword ptr [rax+140h]; yaw }
  YawVectors2D(*(float *)&_XMM0, &forward, &right);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v23 = GVehicles::ms_gVehiclesSystem;
  physicsVehicle = _RDI->physicsVehicle;
  if ( _RDI->pathDir == VEH_PATH_REVERSE )
  {
    if ( _RDI->transMode == VEH_TRANS_REVERSE )
      GVehicles::PhysicsGetRearWheelCenterWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
    else
      GVehicles::PhysicsGetFrontWheelCenterWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
  }
  else
  {
    GVehicles::PhysicsGetSteeringPointWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
  }
  v25 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.integer )
    G_DebugLine(&centerWS, _RBP, &colorGreen, 0);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm11, xmm0, dword ptr [rsp+158h+centerWS]
    vmovss  xmm0, dword ptr [rbp+4]
    vsubss  xmm12, xmm0, dword ptr [rsp+158h+centerWS+4]
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm9, xmm9, xmm9
  }
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  __asm
  {
    vmulss  xmm2, xmm12, dword ptr [rsp+158h+forward+4]
    vmulss  xmm3, xmm11, dword ptr [rsp+158h+forward]
  }
  v34 = GVehicles::ms_gVehiclesSystem;
  __asm
  {
    vmulss  xmm4, xmm11, dword ptr [rsp+158h+right]
    vaddss  xmm10, xmm3, xmm2
    vmulss  xmm2, xmm12, dword ptr [rsp+158h+right+4]
    vaddss  xmm7, xmm4, xmm2
  }
  *(double *)&_XMM0 = GVehicles::PhysicsGetWheelBaseLength(GVehicles::ms_gVehiclesSystem, _RDI->physicsVehicle);
  __asm { vmovaps xmm13, xmm0 }
  *(double *)&_XMM0 = GVehicles::PhysicsGetWheelBaseWidth(v34, _RDI->physicsVehicle);
  transMode = _RDI->transMode;
  _EBP = 1;
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  v44 = 0;
  v45 = transMode == 0;
  if ( transMode )
  {
    v44 = transMode == 0;
    v45 = transMode <= 1;
    if ( transMode != 1 )
    {
      v46 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7902, ASSERT_TYPE_ASSERT, "(veh->transMode == VEH_TRANS_REVERSE)", (const char *)&queryFormat, "veh->transMode == VEH_TRANS_REVERSE");
      v44 = 0;
      v45 = !v46;
      if ( v46 )
        __debugbreak();
    }
  }
  else
  {
    __asm { vcomiss xmm10, xmm6 }
  }
  __asm { vcomiss xmm6, dword ptr [r14+2E8h] }
  _EAX = _RDI->transMode;
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm3, xmm11, xmm8
    vmovd   xmm0, eax
    vmovd   xmm1, ebp
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm11, xmm3, xmm2
    vmovd   xmm1, ebp
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmulss  xmm1, xmm5, xmm5
    vxorps  xmm4, xmm12, xmm8
    vblendvps xmm3, xmm12, xmm4, xmm2
    vmovss  xmm12, cs:__real@bf800000
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmovss  [rsp+158h+var_118], xmm5
    vmulss  xmm10, xmm5, xmm1
    vmulss  xmm11, xmm3, xmm1
    vmovss  [rsp+158h+var_118], xmm3
  }
  if ( v44 )
  {
    __asm
    {
      vmulss  xmm1, xmm11, dword ptr [rsp+158h+forward+4]
      vmulss  xmm0, xmm10, dword ptr [rsp+158h+forward]
      vaddss  xmm0, xmm1, xmm0; val
      vmovaps xmm1, xmm12; min
      vmovaps xmm2, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v76 = DVARFLT_veh_aiOverSteerScale;
    __asm { vmovaps xmm7, xmm0 }
    if ( !DVARFLT_veh_aiOverSteerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "veh_aiOverSteerScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v76);
    __asm { vmovaps xmm0, xmm7; X }
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vmulss  xmm7, xmm1, dword ptr [rbx+28h]
      vmovss  [rsp+158h+var_118], xmm7
    }
    v45 = (v107 & 0x7F800000u) <= 0x7F800000;
    if ( (v107 & 0x7F800000) == 2139095040 )
    {
      v81 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7975, ASSERT_TYPE_SANITY, "( !IS_NAN( steering ) )", (const char *)&queryFormat, "!IS_NAN( steering )");
      v45 = !v81;
      if ( v81 )
        __debugbreak();
    }
    __asm { vdivss  xmm4, xmm7, dword ptr [r14+2E8h] }
  }
  else
  {
    __asm { vxorps  xmm4, xmm4, xmm4 }
  }
  __asm
  {
    vmulss  xmm3, xmm10, dword ptr [rsp+158h+right]
    vmulss  xmm2, xmm11, dword ptr [rsp+158h+right+4]
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, xmm6
  }
  if ( !v45 )
    __asm { vxorps  xmm4, xmm4, xmm8 }
  __asm
  {
    vmovss  xmm0, cs:__real@c10ccccd
    vcomiss xmm0, dword ptr [rdi+144h]
  }
  if ( !v45 )
    __asm { vxorps  xmm4, xmm4, xmm8 }
  __asm
  {
    vaddss  xmm0, xmm14, xmm4; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm12; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm9, xmm0
    vmovaps xmm3, xmm9; value
  }
  GVehicles::PhysicsSetInputControl(v23, _RDI->physicsVehicle, 2u, *(float *)&_XMM3);
  __asm { vmovaps xmm3, xmm15; value }
  GVehicles::PhysicsSetInputControl(v23, _RDI->physicsVehicle, 0, *(float *)&_XMM3);
  __asm { vmovss  xmm3, [rsp+158h+brake]; value }
  GVehicles::PhysicsSetInputControl(v23, _RDI->physicsVehicle, 1u, *(float *)&_XMM3);
  __asm { vxorps  xmm3, xmm3, xmm3; value }
  GVehicles::PhysicsSetInputControl(v23, _RDI->physicsVehicle, 3u, *(float *)&_XMM3);
  _R11 = &v112;
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
    vmovaps xmm15, [rsp+158h+var_E8]
  }
}

/*
==============
G_Vehicle_MyChanges
==============
*/
void G_Vehicle_MyChanges(void)
{
  unsigned int *p_physicsVehicle; 

  p_physicsVehicle = &s_vehicleServers[0].physicsVehicle;
  do
  {
    if ( *(_QWORD *)(p_physicsVehicle - 161) && BGVehicles::PhysicsIsValid(*p_physicsVehicle) )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      GVehicles::PhysicsMyChanges(GVehicles::ms_gVehiclesSystem, *p_physicsVehicle, p_physicsVehicle[2]);
    }
    p_physicsVehicle += 562;
  }
  while ( (__int64)p_physicsVehicle < (__int64)&s_vehicleServerDefs[80] + 4 );
}

/*
==============
G_Vehicle_NotifyDestroySuspended
==============
*/
void G_Vehicle_NotifyDestroySuspended(gentity_s *ent)
{
  GVehicles *VehicleSystem; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8249, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( GVehicles::ms_gVehiclesSystem )
  {
    if ( G_Vehicle_IsSuspended(ent) )
    {
      VehicleSystem = GVehicles::GetVehicleSystem();
      GVehicleSuspendManager::RemoveSavedInfo(&VehicleSystem->m_suspendManager, ent);
    }
  }
}

/*
==============
G_Vehicle_NotifyTurretFire
==============
*/
void G_Vehicle_NotifyTurretFire(Vehicle *veh)
{
  scrContext_t *v2; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3059, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  GScr_Notify(veh->ent, scr_const.turret_fire, 0);
  v2 = ScriptContext_Server();
  Scr_AddInt(v2, veh->turret.fireBarrel);
  GScr_Notify(veh->ent, scr_const.vehicle_turret_fire, 1u);
}

/*
==============
G_Vehicle_Pain
==============
*/
void G_Vehicle_Pain(gentity_s *pSelf, gentity_s *pAttacker, int damage, const vec3_t *point, const int mod, const vec3_t *dir)
{
  GWeaponMap *Instance; 
  GWeaponMap *v13; 
  const Weapon *WeaponForEntity; 
  weapType_t WeaponType; 
  gentity_s *v16; 
  const playerState_s *EntityPlayerStateConst; 
  gclient_s *client; 
  bool v22; 
  float *p_commandTime; 
  float fmt; 
  __int64 v44; 

  if ( pAttacker )
  {
    Instance = GWeaponMap::GetInstance();
    if ( BG_GetWeaponForEntity(Instance, &pAttacker->s)->weaponIdx )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovaps [rsp+88h+var_48], xmm7
      }
      v13 = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(v13, &pAttacker->s);
      WeaponType = BG_GetWeaponType(WeaponForEntity, pAttacker->s.inAltWeaponMode);
      v16 = NULL;
      if ( EntHandle::isDefined(&pSelf->r.ownerNum) )
        v16 = EntHandle::ent(&pSelf->r.ownerNum);
      _RSI = dir;
      __asm
      {
        vmovss  xmm7, cs:__real@3f800000
        vxorps  xmm6, xmm6, xmm6
      }
      if ( pSelf && v16 && v16->client )
      {
        EntityPlayerStateConst = G_GetEntityPlayerStateConst(v16);
        if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5349, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
          __debugbreak();
        if ( EntityPlayerStateConst->linkEnt == pSelf->s.number || G_EntIsLinkedToAncestor(v16, pSelf) )
        {
          if ( !v16->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5380, ASSERT_TYPE_ASSERT, "( vehicleOwner->client )", (const char *)&queryFormat, "vehicleOwner->client") )
            __debugbreak();
          if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5381, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
            __debugbreak();
          if ( (unsigned int)mod >= 0x19 )
          {
            LODWORD(v44) = mod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5383, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v44, 25) )
              __debugbreak();
          }
          v16->client->damage_mod_flags |= 1 << mod;
          client = v16->client;
          v22 = damage + client->damage_blood == 0;
          client->damage_blood += damage;
          v16->client->damage_armor = v16->client->damage_blood;
          __asm
          {
            vmovss  xmm5, dword ptr [rsi]
            vucomiss xmm5, xmm6
          }
          if ( !v22 )
            goto LABEL_26;
          __asm { vucomiss xmm6, dword ptr [rsi+4] }
          if ( !v22 )
            goto LABEL_26;
          __asm { vucomiss xmm6, dword ptr [rsi+8] }
          if ( v22 )
          {
            p_commandTime = (float *)&v16->client->ps.commandTime;
            p_commandTime[6050] = pSelf->r.currentOrigin.v[0];
            p_commandTime[6051] = pSelf->r.currentOrigin.v[1];
            p_commandTime[6052] = pSelf->r.currentOrigin.v[2];
            v16->client->damage_fromWorld = 1;
          }
          else
          {
LABEL_26:
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+4]
              vmovss  xmm3, dword ptr [rsi+8]
            }
            _RAX = v16->client;
            __asm
            {
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm4, xmm2, xmm2
              vcmpless xmm0, xmm4, cs:__real@80000000
              vblendvps xmm0, xmm4, xmm7, xmm0
              vdivss  xmm2, xmm7, xmm0
              vmulss  xmm0, xmm5, xmm2
              vmovss  dword ptr [rax+5E88h], xmm0
              vmulss  xmm1, xmm2, dword ptr [rsi+4]
              vmovss  dword ptr [rax+5E8Ch], xmm1
              vmulss  xmm0, xmm2, dword ptr [rsi+8]
              vmovss  dword ptr [rax+5E90h], xmm0
            }
            v16->client->damage_fromWorld = 0;
          }
          v16->client->damage_vehicle = 1;
        }
      }
      if ( (unsigned int)(WeaponType - 3) <= 1 )
      {
        if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5404, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
          __debugbreak();
        if ( pSelf->vehicle )
        {
          __asm
          {
            vxorps  xmm3, xmm3, xmm3; speedFrac
            vmovaps xmm2, xmm7; intensity
            vmovss  dword ptr [rsp+88h+fmt], xmm6
          }
          G_Vehicle_JoltBody(pSelf, dir, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+88h+var_38]
        vmovaps xmm7, [rsp+88h+var_48]
      }
    }
  }
}

/*
==============
G_Vehicle_PlayerRemoteControl
==============
*/
void G_Vehicle_PlayerRemoteControl(gentity_s *vehEnt, gentity_s *player)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3703, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3704, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3705, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3706, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3707, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  vehEnt->vehicle->drivingState = VEH_DRIVE_PLAYER;
}

/*
==============
G_Vehicle_PlayerRemoteControlOff
==============
*/
void G_Vehicle_PlayerRemoteControlOff(gentity_s *vehEnt, gentity_s *player)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3718, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3719, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  vehEnt->vehicle->drivingState = VEH_DRIVE_NONE;
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3725, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
}

/*
==============
G_Vehicle_PreThink
==============
*/
void G_Vehicle_PreThink(gentity_s *pSelf)
{
  Vehicle *vehicle; 
  LerpEntityStateVehicle *p_u; 
  const VehicleDef *ServerDef; 
  const VehicleDef *v11; 
  DObj *ServerDObjForEnt; 
  DObj *v13; 
  unsigned __int8 v14; 
  int v31; 
  __int64 v33; 
  gentity_s *v43; 
  gentity_s *v44; 
  gentity_s *v45; 
  VehicleType type; 
  VehicleHandler *v47; 
  const VehicleDef *v48; 
  int drivingState; 
  unsigned int v50; 
  BOOL v51; 
  void (__fastcall *UpdateAnimScriptedMove)(Vehicle *); 
  void (__fastcall *UpdatePlayerMove)(Vehicle *); 
  GVehicles *v54; 
  GHandler *Handler; 
  gentity_s *v57; 
  __int64 v69; 
  unsigned int physicsVehicle; 
  __int64 v71; 
  unsigned int v72; 
  BOOL v76; 
  bool v77; 
  BOOL v99; 
  bool v100; 
  int v103; 
  bool v104; 
  bool v105; 
  bool v106; 
  unsigned int v107; 
  unsigned int v108; 
  int v109; 
  int v110; 
  int v111; 
  unsigned int v112; 
  bool v131; 
  char v133; 
  bool v134; 
  bool v135; 
  __int64 v141; 
  __int64 v142; 

  _RSI = pSelf;
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4874, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !_RSI->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4875, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  vehicle = _RSI->vehicle;
  p_u = (LerpEntityStateVehicle *)&_RSI->s.lerp.u;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  _RSI->s.lerp.u.anonymous.data[1] &= 0xFFFFFFF3;
  _R15 = &vehicle->phys.origin;
  v11 = ServerDef;
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RSI);
  v13 = ServerDObjForEnt;
  v14 = 9;
  if ( ServerDObjForEnt && ServerDObjForEnt->numModels && XModelIsDefaultAsset(*ServerDObjForEnt->models) && DB_IsXAssetTransient(ASSET_TYPE_XMODEL, **(const char ***)v13->models) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4893, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, dobj->models[0]->name ) ) )", "( dobj->models[0]->name ) = %s", **(const char ***)v13->models) )
    __debugbreak();
  if ( !_RSI->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1747, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _R8 = _RSI->vehicle;
  _RDX = &s_backup;
  _RCX = &s_backup.phys;
  _R8->phys.prevOrigin.v[0] = _RSI->r.currentOrigin.v[0];
  _R8->phys.prevOrigin.v[1] = _RSI->r.currentOrigin.v[1];
  _R8->phys.prevOrigin.v[2] = _RSI->r.currentOrigin.v[2];
  _R8->phys.prevAngles.v[0] = _RSI->r.currentAngles.v[0];
  _R8->phys.prevAngles.v[1] = _RSI->r.currentAngles.v[1];
  _R8->phys.prevAngles.v[2] = _RSI->r.currentAngles.v[2];
  __asm
  {
    vmovups xmm0, xmmword ptr [r8+10h]
    vmovups xmmword ptr [rdx], xmm0
    vmovups xmm1, xmmword ptr [r8+20h]
    vmovups xmmword ptr [rdx+10h], xmm1
    vmovups xmm0, xmmword ptr [r8+30h]
    vmovups xmmword ptr [rdx+20h], xmm0
    vmovups xmm1, xmmword ptr [r8+40h]
    vmovups xmmword ptr [rdx+30h], xmm1
    vmovups xmm0, xmmword ptr [r8+50h]
    vmovups xmmword ptr [rdx+40h], xmm0
    vmovups xmm1, xmmword ptr [r8+60h]
    vmovups xmmword ptr [rdx+50h], xmm1
    vmovups xmm0, xmmword ptr [r8+70h]
    vmovups xmmword ptr [rdx+60h], xmm0
    vmovups xmm0, xmmword ptr [r8+80h]
    vmovups xmmword ptr [rdx+70h], xmm0
    vmovups xmm1, xmmword ptr [r8+90h]
    vmovups xmmword ptr [rdx+80h], xmm1
    vmovups xmm0, xmmword ptr [r8+0A0h]
    vmovups xmmword ptr [rdx+90h], xmm0
    vmovups xmm1, xmmword ptr [r8+0B0h]
    vmovups xmmword ptr [rdx+0A0h], xmm1
    vmovups xmm0, xmmword ptr [r8+0C0h]
    vmovups xmmword ptr [rdx+0B0h], xmm0
    vmovups xmm1, xmmword ptr [r8+0D0h]
    vmovups xmmword ptr [rdx+0C0h], xmm1
  }
  *(_QWORD *)&s_backup.pathPos.switchNode[1].length = *(_QWORD *)&_R8->pathPos.switchNode[1].length;
  v31 = *(_DWORD *)&_R8->pathPos.switchNode[1].notifyIdx;
  _R8 = &_R8->phys;
  *(_DWORD *)&s_backup.pathPos.switchNode[1].notifyIdx = v31;
  v33 = 3i64;
  do
  {
    _RCX = (vehicle_physic_t *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [r8] }
    _R8 = (vehicle_physic_t *)((char *)_R8 + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [r8-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [r8-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [r8-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [r8-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [r8-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [r8-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [r8-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v33;
  }
  while ( v33 );
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rcx], xmm0
  }
  _RCX->prevOrigin.v[1] = _R8->prevOrigin.v[1];
  memset_0(&s_phys, 0, sizeof(s_phys));
  if ( EntHandle::isDefined(&_RSI->r.ownerNum) )
  {
    v43 = EntHandle::ent(&_RSI->r.ownerNum);
    v44 = v43;
    if ( v43 )
    {
      if ( EntHandle::isDefined(&v43->r.ownerNum) && EntHandle::ent(&v44->r.ownerNum) == _RSI && v44->health <= 0 )
      {
        v45 = EntHandle::ent(&_RSI->r.ownerNum);
        G_Vehicle_UnlinkPlayer(_RSI, v45);
      }
      _R15 = &vehicle->phys.origin;
    }
  }
  type = G_Vehicle_GetServerDef(vehicle->defIndex)->type;
  if ( (unsigned __int8)type < VEH_TREADED )
    v14 = type;
  if ( v14 >= 0xAu )
  {
    LODWORD(v141) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( handlerIndex ) < (unsigned)( ( sizeof( *array_counter( s_vehicleHandlers ) ) + 0 ) )", "handlerIndex doesn't index ARRAY_COUNT( s_vehicleHandlers )\n\t%i not in [0, %i)", v141, 10) )
      __debugbreak();
  }
  v47 = &s_vehicleHandlers[v14];
  if ( G_Main_ExitAfterToolComplete() && v11->vehiclePhysicsDef.physicsEnabled )
    return;
  if ( vehicle->ent->scripted && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4924, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    v48 = G_Vehicle_GetServerDef(vehicle->defIndex);
    drivingState = vehicle->drivingState;
    v105 = v48->type == VEH_HELICOPTER;
    v50 = drivingState - 2;
    if ( v105 )
      v51 = (v50 & 0xFFFFFFFD) == 0;
    else
      v51 = v50 <= 1;
    if ( !v51 )
    {
      vehicle->drivingState = VEH_DRIVE_ANIMSCRIPTED;
      drivingState = 1;
    }
  }
  else
  {
    drivingState = vehicle->drivingState;
    if ( drivingState == 1 )
    {
      vehicle->drivingState = VEH_DRIVE_NONE;
      drivingState = 0;
    }
  }
  switch ( drivingState )
  {
    case 1:
      if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4939, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
        __debugbreak();
      UpdateAnimScriptedMove = v47->UpdateAnimScriptedMove;
      goto LABEL_63;
    case 2:
      UpdateAnimScriptedMove = v47->UpdatePathConstrainedMove;
LABEL_63:
      if ( UpdateAnimScriptedMove )
        UpdateAnimScriptedMove(vehicle);
      goto LABEL_65;
    case 3:
      UpdateAnimScriptedMove = v47->UpdatePathFollowMove;
      goto LABEL_63;
    case 4:
      UpdateAnimScriptedMove = v47->UpdateAiMove;
      goto LABEL_63;
  }
  if ( drivingState != 5 )
  {
    if ( drivingState )
    {
      LODWORD(v141) = drivingState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4968, ASSERT_TYPE_ASSERT, "( ( veh->drivingState == VEH_DRIVE_NONE ) )", "( veh->drivingState ) = %i", v141) )
        __debugbreak();
    }
    UpdateAnimScriptedMove = v47->UpdateDefaultMove;
    goto LABEL_63;
  }
  UpdatePlayerMove = v47->UpdatePlayerMove;
  if ( UpdatePlayerMove )
    UpdatePlayerMove(vehicle);
  G_Vehicle_UpdateCameraState(vehicle);
LABEL_65:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v54 = GVehicles::ms_gVehiclesSystem;
  *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
  __asm { vmovaps xmm3, xmm0; deltaTime }
  BG_VehicleAnim_Update(v54, &_RSI->s, &vehicle->vehicleAnimInfo, *(float *)&_XMM3);
  Handler = GHandler::getHandler();
  BG_VehicleAnim_UpdateDObj(v54, &_RSI->s, &vehicle->vehicleAnimInfo, Handler);
  if ( !_RSI->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5164, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
    __debugbreak();
  if ( !EntHandle::isDefined(&_RSI->r.ownerNum) )
    goto LABEL_129;
  v57 = EntHandle::ent(&_RSI->r.ownerNum);
  if ( !v57->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5169, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( v57->client->ps.vehicleState.entity != _RSI->s.number )
  {
LABEL_129:
    if ( !_RSI->tagInfo )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+130h]
        vsubss  xmm3, xmm0, dword ptr [r15]
        vmovss  xmm1, dword ptr [rsi+134h]
        vsubss  xmm2, xmm1, dword ptr [r15+4]
        vmovss  xmm0, dword ptr [rsi+138h]
        vsubss  xmm4, xmm0, dword ptr [r15+8]
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vcomiss xmm2, cs:__real@461c4000
      }
      G_Vehicle_SetPosition(_RSI, _R15, _R15 + 6, _R15 + 2, _RSI->tagInfo != NULL);
    }
  }
  if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
      vmovaps [rsp+0C8h+var_58], xmm8
      vmovaps [rsp+0C8h+var_68], xmm9
      vmovaps [rsp+0C8h+var_78], xmm10
    }
    v69 = (__int64)v54->PhysicsGetVehiclePhysicsManager(v54);
    physicsVehicle = vehicle->physicsVehicle;
    v71 = v69;
    if ( !BGVehicles::PhysicsIsValid(physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    v72 = physicsVehicle - 1;
    if ( v72 >= 0x80 )
    {
      LODWORD(v142) = 128;
      LODWORD(v141) = v72;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v141, v142) )
        __debugbreak();
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+11Ch]
      vmovups ymmword ptr [r15+14Ch], ymm0
      vmovups xmm1, xmmword ptr [r15+13Ch]
      vmovups xmmword ptr [r15+16Ch], xmm1
    }
    vehicle->impactSpeed = 0.0;
    _RSI = 3360i64 * v72 + v71 + 8;
    v76 = Com_BitCheckAssert((const unsigned int *)(_RSI + 264), 1, 4);
    v77 = Com_BitCheckAssert((const unsigned int *)(_RSI + 268), 1, 4);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+0CCh]
      vmovss  xmm6, dword ptr [rsi+0ECh]
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@3f000000
      vxorps  xmm8, xmm8, xmm8
    }
    switch ( v76 + 3 * v77 )
    {
      case 1:
        __asm { vmovaps xmm6, xmm3 }
        break;
      case 3:
        break;
      case 4:
        switch ( *(_BYTE *)(_RSI + 273) )
        {
          case 0:
            __asm
            {
              vandps  xmm0, xmm6, xmm7
              vandps  xmm1, xmm3, xmm7
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_100;
          case 1:
            __asm
            {
              vandps  xmm0, xmm6, xmm7
              vandps  xmm1, xmm3, xmm7
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_100;
          case 2:
            __asm
            {
              vaddss  xmm0, xmm6, xmm3
              vmulss  xmm6, xmm0, xmm10
            }
            goto LABEL_100;
          case 3:
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+118h]
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, xmm6
              vmulss  xmm1, xmm3, xmm1
              vaddss  xmm6, xmm2, xmm1
            }
            goto LABEL_100;
          case 4:
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+118h]
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm6, xmm1
              vaddss  xmm6, xmm2, xmm1
            }
            goto LABEL_100;
        }
      default:
        __asm { vxorps  xmm6, xmm6, xmm6 }
        break;
    }
LABEL_100:
    v99 = Com_BitCheckAssert((const unsigned int *)(_RSI + 264), 0, 4);
    v100 = Com_BitCheckAssert((const unsigned int *)(_RSI + 268), 0, 4);
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+0C8h]
      vmovss  xmm3, dword ptr [rsi+0E8h]
    }
    v103 = v99 + 3 * v100;
    v104 = v103 == 0;
    v107 = v103 - 1;
    v105 = v107 == 0;
    v106 = v104 || v107 == 0;
    if ( v107 )
    {
      v104 = v107 < 2;
      v108 = v107 - 2;
      v105 = v108 == 0;
      v106 = v104 || v108 == 0;
      if ( !v108 )
        goto LABEL_115;
      v104 = v108 == 0;
      v105 = v108 == 1;
      v106 = v108 <= 1;
      if ( v108 != 1 )
        goto LABEL_113;
      v109 = *(unsigned __int8 *)(_RSI + 272);
      v104 = 0;
      v105 = v109 == 0;
      v106 = v109 == 0;
      if ( *(_BYTE *)(_RSI + 272) )
      {
        v104 = v109 == 0;
        v110 = v109 - 1;
        v105 = v110 == 0;
        v106 = v104 || v110 == 0;
        if ( v110 )
        {
          v104 = v110 == 0;
          v111 = v110 - 1;
          v105 = v111 == 0;
          v106 = v104 || v111 == 0;
          if ( v111 )
          {
            v104 = v111 == 0;
            v112 = v111 - 1;
            v105 = v112 == 0;
            v106 = v104 || v112 == 0;
            if ( v112 )
            {
              v104 = v112 == 0;
              v105 = v112 == 1;
              v106 = v112 <= 1;
              if ( v112 == 1 )
              {
                __asm
                {
                  vmovss  xmm1, dword ptr [rsi+118h]
                  vsubss  xmm0, xmm9, xmm1
                  vmulss  xmm2, xmm0, xmm4
                  vmulss  xmm1, xmm3, xmm1
                  vaddss  xmm3, xmm2, xmm1
                }
                goto LABEL_115;
              }
LABEL_113:
              __asm { vxorps  xmm3, xmm3, xmm3 }
LABEL_117:
              __asm
              {
                vcomiss xmm6, xmm8
                vmovaps xmm10, [rsp+0C8h+var_78]
                vmovaps xmm9, [rsp+0C8h+var_68]
              }
              if ( !v106 )
              {
                v104 = 0;
                v105 = 0;
                p_u->flags |= 8u;
              }
              __asm
              {
                vcomiss xmm6, xmm3
                vmaxss  xmm7, xmm3, xmm6
              }
              v131 = !v104 && !v105;
              __asm { vxorps  xmm6, xmm6, xmm6 }
              if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)_RSI) && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)_RSI + 72i64))(_RSI, 14i64) )
              {
                v133 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)_RSI + 72i64))(_RSI, 3i64);
                v134 = v133 == 0;
                if ( !v133 )
                {
                  v135 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5016, ASSERT_TYPE_ASSERT, "(physics->SupportsFeature( VPFEAT_GROUND_VEHICLE ))", (const char *)&queryFormat, "physics->SupportsFeature( VPFEAT_GROUND_VEHICLE )");
                  v134 = !v135;
                  if ( v135 )
                    __debugbreak();
                }
                __asm
                {
                  vmovss  xmm6, dword ptr [rsi+0C7Ch]
                  vcomiss xmm6, xmm8
                }
                if ( !v134 )
                  p_u->flags |= 0x100u;
              }
              __asm
              {
                vmovaps xmm3, xmm6; wheelAveSpinSpeed
                vmovaps xmm1, xmm7; throttle
              }
              BG_Vehicle_PackPhysicsParams(p_u, *(float *)&_XMM1, v131, *(float *)&_XMM3);
              __asm
              {
                vmovaps xmm8, [rsp+0C8h+var_58]
                vmovaps xmm7, [rsp+0C8h+var_48]
                vmovaps xmm6, [rsp+0C8h+var_38]
              }
              return;
            }
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+118h]
              vsubss  xmm0, xmm9, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm4, xmm1
              vaddss  xmm3, xmm2, xmm1
            }
          }
          else
          {
            __asm
            {
              vaddss  xmm0, xmm3, xmm4
              vmulss  xmm3, xmm0, xmm10
            }
          }
        }
        else
        {
          __asm
          {
            vandps  xmm0, xmm3, xmm7
            vandps  xmm1, xmm4, xmm7
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm3, xmm3, xmm4, xmm1
          }
        }
      }
      else
      {
        __asm
        {
          vandps  xmm0, xmm3, xmm7
          vandps  xmm1, xmm4, xmm7
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm3, xmm3, xmm4, xmm1
        }
      }
    }
    else
    {
      __asm { vmovaps xmm3, xmm4 }
    }
LABEL_115:
    __asm { vcomiss xmm3, xmm8 }
    if ( !v106 )
    {
      v104 = 0;
      v105 = 0;
      v106 = 0;
      p_u->flags |= 4u;
    }
    goto LABEL_117;
  }
}

/*
==============
G_Vehicle_PushAttachedStickyMissile
==============
*/
void G_Vehicle_PushAttachedStickyMissile(const gentity_s *ent, gentity_s *missile)
{
  Vehicle *vehicle; 
  vec3_t trBase; 
  __int64 v45; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v51; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  v45 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RBX = missile;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1867, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1868, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1869, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  vehicle = ent->vehicle;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vsubss  xmm7, xmm0, dword ptr [rdi+0FCh]
    vmovss  xmm1, dword ptr [rbx+134h]
    vsubss  xmm8, xmm1, dword ptr [rdi+100h]
    vmovss  xmm0, dword ptr [rbx+138h]
    vsubss  xmm9, xmm0, dword ptr [rdi+104h]
  }
  AnglesToAxis(&vehicle->phys.angles, &axis);
  AnglesToAxis(&vehicle->phys.prevAngles, &in);
  MatrixTranspose(&in, &out);
  MatrixMultiply(&out, &axis, &in2);
  __asm
  {
    vmulss  xmm3, xmm7, dword ptr [rsp+190h+in2]
    vmulss  xmm2, xmm8, dword ptr [rsp+190h+in2+0Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm9, dword ptr [rsp+190h+in2+18h]
    vaddss  xmm6, xmm4, xmm1
    vmovss  dword ptr [rsp+190h+trBase], xmm6
    vmulss  xmm3, xmm7, dword ptr [rsp+190h+in2+4]
    vmulss  xmm2, xmm8, dword ptr [rsp+190h+in2+10h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm9, dword ptr [rsp+190h+in2+1Ch]
    vaddss  xmm5, xmm4, xmm1
    vmovss  dword ptr [rsp+190h+trBase+4], xmm5
    vmulss  xmm3, xmm7, dword ptr [rsp+190h+in2+8]
    vmulss  xmm2, xmm8, dword ptr [rsp+190h+in2+14h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm9, dword ptr [rsp+190h+in2+20h]
    vaddss  xmm3, xmm4, xmm1
    vmovss  dword ptr [rsp+190h+trBase+8], xmm3
    vaddss  xmm2, xmm6, dword ptr [rdi+0F0h]
    vmovss  dword ptr [rsp+190h+trBase], xmm2
    vaddss  xmm1, xmm5, dword ptr [rdi+0F4h]
    vmovss  dword ptr [rsp+190h+trBase+4], xmm1
    vaddss  xmm0, xmm3, dword ptr [rdi+0F8h]
    vmovss  dword ptr [rsp+190h+trBase+8], xmm0
    vmovss  dword ptr [rbx+130h], xmm2
    vmovss  dword ptr [rbx+134h], xmm1
    vmovss  dword ptr [rbx+138h], xmm0
  }
  Trajectory_SetTrBase(&_RBX->s.lerp.pos, &trBase);
  AnglesToAxis(&_RBX->r.currentAngles, &in1);
  MatrixMultiply(&in1, &in2, &v51);
  AxisToAngles(&v51, &_RBX->r.currentAngles);
  _RBX->s.lerp.apos.trBase.v[0] = _RBX->r.currentAngles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+140h]
    vmovss  dword ptr [rbx+44h], xmm0
    vmovss  xmm1, dword ptr [rbx+144h]
    vmovss  dword ptr [rbx+48h], xmm1
  }
  memset(&trBase, 0, sizeof(trBase));
  _R11 = &v52;
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
G_Vehicle_PushEntity
==============
*/
void G_Vehicle_PushEntity(gentity_s *ent, gentity_s *target, const vec3_t *pushDir, const vec3_t *deltaOrigin, const vec3_t *deltaAngles)
{
  actor_s *actor; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  WeapStickinessType v13; 
  GMovingPlatformClient *ClientFromGEntity; 
  AIActorInterface v15; 
  AIActorInterface *v16; 

  _RBP = deltaOrigin;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1913, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1914, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !target->tagInfo )
  {
    AIActorInterface::AIActorInterface(&v15);
    actor = target->actor;
    v16 = NULL;
    if ( !actor || (AIActorInterface::SetActor(&v15, actor), v16 = &v15, !AIScriptedInterface::InNonDamageableScriptedState(&v15)) )
    {
      if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm0, dword ptr [rbp+0]
        }
      }
      else if ( Vec3ZeroEpsilon(_RBP) && Vec3ZeroEpsilon(deltaAngles) )
      {
        return;
      }
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1834, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( target->s.groundEntityNum != ent->s.number || target->s.eType != ET_MISSILE )
        goto LABEL_32;
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &target->s);
      if ( !BG_WeaponDef(WeaponForEntity, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1844, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      v13 = BG_WeaponStickinessType(WeaponForEntity, 0);
      if ( ((v13 - 1) & 0xFFFFFFFA) != 0 || v13 == WEAPSTICKINESS_GROUND_ORIENT )
      {
LABEL_32:
        if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1897, ASSERT_TYPE_ASSERT, "( pusher->vehicle )", (const char *)&queryFormat, "pusher->vehicle") )
          __debugbreak();
        ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(target);
        if ( ClientFromGEntity )
          GMovingPlatformClient::DeferredAddCharacter(ClientFromGEntity, target, ent, _RBP, deltaAngles);
      }
      else
      {
        G_Vehicle_PushAttachedStickyMissile(ent, target);
      }
    }
  }
}

/*
==============
G_Vehicle_ReadVehiclePhysics
==============
*/
void G_Vehicle_ReadVehiclePhysics(SaveGame *save, Vehicle *veh)
{
  unsigned int v4; 
  unsigned int p; 

  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 638, ASSERT_TYPE_ASSERT, "( save )", (const char *)&queryFormat, "save") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 639, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  veh->heliPathPos.ent = NULL;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v4 = p;
  veh->physicsVehicle = p;
  if ( BGVehicles::PhysicsIsValid(v4) )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    GVehicles::PhysicsSetDefFromLoad(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle, veh->defIndex);
  }
}

/*
==============
G_Vehicle_RegisterServerDefAtIndex
==============
*/
void G_Vehicle_RegisterServerDefAtIndex(const unsigned int vehDefIndex, const char *name)
{
  __int64 v2; 
  bool v4; 
  const VehicleDef **v5; 
  __int64 v6; 

  v2 = vehDefIndex;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 325, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 326, ASSERT_TYPE_ASSERT, "( name[0] != '\\0' )", (const char *)&queryFormat, "name[0] != '\\0'") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x80 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 327, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( ( sizeof( *array_counter( s_vehicleServerDefs ) ) + 0 ) )", "vehDefIndex doesn't index ARRAY_COUNT( s_vehicleServerDefs )\n\t%i not in [0, %i)", v6, 128) )
      __debugbreak();
  }
  v4 = s_vehicleServerDefs[v2] == NULL;
  v5 = &s_vehicleServerDefs[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 328, ASSERT_TYPE_ASSERT, "( s_vehicleServerDefs[vehDefIndex] == nullptr )", (const char *)&queryFormat, "s_vehicleServerDefs[vehDefIndex] == nullptr") )
    __debugbreak();
  *v5 = BG_Vehicle_Register(name);
}

/*
==============
G_Vehicle_ResetWheels
==============
*/
void G_Vehicle_ResetWheels(const gentity_s *ent, vehicle_physic_t *phys)
{
  signed __int64 v5; 
  __int64 v6; 
  int v7; 
  vec3_t outPos; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 891, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 892, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  if ( !phys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 893, ASSERT_TYPE_ASSERT, "( phys )", (const char *)&queryFormat, "phys") )
    __debugbreak();
  _RBX = phys->wheelZPos;
  v5 = (char *)ent->vehicle - (char *)phys;
  v6 = 12i64;
  do
  {
    v7 = *(_DWORD *)((char *)_RBX + v5 + 1600);
    if ( v7 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(ent, v7, &outPos);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+68h+outPos+8]
        vmovss  dword ptr [rbx], xmm0
      }
    }
    ++_RBX;
    --v6;
  }
  while ( v6 );
}

/*
==============
G_Vehicle_RunPreThinkForAllVehicles
==============
*/
void G_Vehicle_RunPreThinkForAllVehicles(void)
{
  Vehicle *v0; 
  __int64 v1; 

  v0 = s_vehicleServers;
  v1 = 128i64;
  do
  {
    if ( v0->ent )
      G_Vehicle_PreThink(v0->ent);
    ++v0;
    --v1;
  }
  while ( v1 );
}

/*
==============
G_Vehicle_SetEntityStateTeam
==============
*/
void G_Vehicle_SetEntityStateTeam(gentity_s *vehicle, team_t team)
{
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7249, ASSERT_TYPE_ASSERT, "( vehicle )", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  if ( (team < TEAM_ZERO || (unsigned int)team > (TEAM_MP_NUM_TEAMS|TEAM_FIFTY_TWO)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum team_t>(enum team_t)", "unsigned", (unsigned __int8)team, "signed", team) )
    __debugbreak();
  vehicle->s.staticState.vehiclePlayer.teamId = team;
}

/*
==============
G_Vehicle_SetPosition
==============
*/
void G_Vehicle_SetPosition(gentity_s *ent, const vec3_t *origin, const vec3_t *vel, const vec3_t *angles, const bool warpPhysics)
{
  bool v10; 
  bool v14; 
  BOOL v27; 
  int v28[6]; 
  int *v29; 

  _RSI = angles;
  _RBP = origin;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 911, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  _RDI = &_RBX->s.lerp.pos;
  if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  v10 = _RDI->trType == TR_LINEAR_STOP_SECURE;
  if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
  {
    v29 = v28;
    v28[2] = LODWORD(_RBX->s.lerp.pos.trBase.v[1]) ^ LODWORD(_RBX->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
    v28[1] = LODWORD(_RBX->s.lerp.pos.trBase.v[0]) ^ LODWORD(_RBX->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
    v28[0] = LODWORD(_RBX->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(&v29, 0, sizeof(v29));
    __asm
    {
      vmovss  xmm0, [rsp+68h+var_30]
      vmovss  dword ptr [rsp+68h+arg_0], xmm0
    }
    if ( ((unsigned int)v29 & 0x7F800000) == 2139095040 )
      goto LABEL_37;
    __asm
    {
      vmovss  xmm0, [rsp+68h+var_2C]
      vmovss  dword ptr [rsp+68h+arg_0], xmm0
    }
    if ( ((unsigned int)v29 & 0x7F800000) == 2139095040 )
      goto LABEL_37;
    __asm
    {
      vmovss  xmm0, [rsp+68h+var_28]
      vmovss  dword ptr [rsp+68h+arg_0], xmm0
    }
    v10 = ((unsigned int)v29 & 0x7F800000) == 2139095040;
    if ( ((unsigned int)v29 & 0x7F800000) == 2139095040 )
    {
LABEL_37:
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )");
      v10 = !v14;
      if ( v14 )
        __debugbreak();
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0Ch]
      vmovss  [rsp+68h+var_30], xmm0
      vmovss  xmm1, dword ptr [rdi+10h]
      vmovss  [rsp+68h+var_2C], xmm1
      vmovss  xmm0, dword ptr [rdi+14h]
      vmovss  [rsp+68h+var_28], xmm0
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbp+0]
    vucomiss xmm1, dword ptr [rbx+130h]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+4]
    vucomiss xmm2, dword ptr [rbx+134h]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+8]
    vucomiss xmm3, dword ptr [rbx+138h]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_30]
    vucomiss xmm0, xmm1
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_2C]
    vucomiss xmm0, xmm2
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_28]
    vucomiss xmm0, xmm3
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vucomiss xmm0, dword ptr [rbx+13Ch]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+4]
    vucomiss xmm1, dword ptr [rbx+140h]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+8]
    vucomiss xmm2, dword ptr [rbx+144h]
  }
  if ( !v10 )
    goto LABEL_38;
  __asm { vucomiss xmm0, dword ptr [rbx+40h] }
  if ( !v10 )
    goto LABEL_38;
  __asm { vucomiss xmm1, dword ptr [rbx+44h] }
  if ( !v10 )
    goto LABEL_38;
  __asm { vucomiss xmm2, dword ptr [rbx+48h] }
  if ( !v10 )
  {
LABEL_38:
    if ( !_RBX->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 917, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    if ( !BGVehicles::PhysicsIsValid(_RBX->vehicle->physicsVehicle) )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      LOBYTE(v27) = warpPhysics;
      GVehicles::ms_gVehiclesSystem->SetVehiclePosition(GVehicles::ms_gVehiclesSystem, _RBX, _RBP, _RSI, vel, v27);
    }
  }
  memset(v28, 0, 0xCui64);
}

/*
==============
G_Vehicle_SetupCollmap
==============
*/
void G_Vehicle_SetupCollmap(gentity_s *ent)
{
  int Index; 
  const XCompositeModelDef *CompositeModel; 
  const char *ModelName; 
  entityState_t::<unnamed_type_index> v5; 
  unsigned __int8 modelType; 
  __int64 v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 503, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Index = G_XCompositeModel_GetIndex(ent);
  if ( Index <= 0 )
  {
    ModelName = G_CString_GetModelName(ent->model);
  }
  else
  {
    CompositeModel = G_Utils_GetCompositeModel(Index);
    ModelName = G_XCompositeModel_GetName(CompositeModel);
  }
  v5.brushModel = G_Vehicle_GetCollMapBrushIndex(ModelName);
  if ( v5.brushModel != -1 )
  {
    SV_UnlinkEntity(ent);
    G_Utils_DestroyEntityPhysics(ent);
    modelType = ent->r.modelType;
    ent->s.index = v5;
    if ( modelType )
    {
      LODWORD(v7) = modelType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 529, ASSERT_TYPE_SANITY, "( ent->r.modelType ) == ( MODELTYPE_CAPSULE )", "ent->r.modelType == MODELTYPE_CAPSULE\n\t%i, %i", v7, 0i64) )
        __debugbreak();
    }
    ent->r.modelType = 5;
    SV_Game_SetBrushModel(ent);
    if ( (ent->spawnflags & 1) != 0 )
      G_PlayerUse_SetEntityUsable(ent, 1);
    SV_LinkEntity(ent);
  }
}

/*
==============
G_Vehicle_SetupSystem
==============
*/
void G_Vehicle_SetupSystem(void)
{
  Vehicle *v0; 
  __int64 v1; 

  G_VehiclePath_Setup();
  v0 = s_vehicleServers;
  v1 = 128i64;
  do
  {
    if ( v0->ent )
    {
      if ( ((v0->ent->s.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 558, ASSERT_TYPE_ASSERT, "( BG_IsVehicleEntity( &veh->ent->s ) )", (const char *)&queryFormat, "BG_IsVehicleEntity( &veh->ent->s )") )
        __debugbreak();
      if ( v0->ent->classname != scr_const.script_vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 559, ASSERT_TYPE_ASSERT, "( veh->ent->classname == scr_const.script_vehicle )", (const char *)&queryFormat, "veh->ent->classname == scr_const.script_vehicle") )
        __debugbreak();
      if ( !v0->ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 560, ASSERT_TYPE_ASSERT, "( veh->ent->vehicle )", (const char *)&queryFormat, "veh->ent->vehicle") )
        __debugbreak();
      G_Vehicle_SetupCollmap(v0->ent);
    }
    ++v0;
    --v1;
  }
  while ( v1 );
  memset_0(s_vehicleDamageTime, 0, sizeof(s_vehicleDamageTime));
}

/*
==============
G_Vehicle_ShutdownSystem
==============
*/
void G_Vehicle_ShutdownSystem(void)
{
  unsigned int i; 
  VehiclePathPos *p_pathPos; 
  __int64 v2; 

  if ( !G_Main_ExitAfterToolComplete() )
  {
    for ( i = 0; i < s_devGuiRegisterInfo.registeredCount; ++i )
      DevGui_RemoveMenu(s_devGuiRegisterInfo.registeredName[(unsigned __int64)i]);
    s_devGuiRegisterInfo.registeredCount = 0;
  }
  p_pathPos = &s_vehicleServers[0].pathPos;
  v2 = 128i64;
  do
  {
    G_VehiclePath_FreePathPos(p_pathPos);
    p_pathPos = (VehiclePathPos *)((char *)p_pathPos + 2248);
    --v2;
  }
  while ( v2 );
  if ( GVehicles::ms_gVehiclesSystem )
    GVehicleSuspendManager::Reset(&GVehicles::ms_gVehiclesSystem->m_suspendManager);
  G_VehiclePath_Free();
  memset_0(s_vehicleDamageTime, 0, sizeof(s_vehicleDamageTime));
  VelocityObstacle3Manager::Shutdown();
}

/*
==============
G_Vehicle_SlideMove
==============
*/

_BOOL8 __fastcall G_Vehicle_SlideMove(gentity_s *ent, int gravity, double frameTime, unsigned int *bumpEntityNum)
{
  vehicle_physic_t *p_phys; 
  bool v10; 
  BOOL v11; 
  _BOOL8 result; 
  GStepSlideMove stepSlide; 

  __asm
  {
    vmovaps [rsp+108h+var_38], xmm6
    vmovaps xmm6, xmm2
  }
  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1414, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1415, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  p_phys = &ent->vehicle->phys;
  __asm { vmovss  [rsp+108h+stepSlide.baseclass_0.deltaTime], xmm6 }
  stepSlide.origin = &p_phys->origin;
  stepSlide.velocity = &p_phys->vel;
  stepSlide.bounds = &p_phys->bounds;
  stepSlide.gravity = gravity != 0;
  stepSlide.hasGround = s_phys.hasGround != 0;
  stepSlide.zerog = 0;
  stepSlide.inSolid = NULL;
  stepSlide.groundNormal = &s_phys.groundTrace.normal;
  stepSlide.passEntities[0] = ent->s.number;
  stepSlide.passEntityCount = 1;
  stepSlide.clipMask = ent->clipmask;
  stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE;
  G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
  v10 = BgStepSlideMove::SlideMove(&stepSlide);
  if ( bumpEntityNum )
    *bumpEntityNum = stepSlide.bumpEntityNum;
  v11 = v10;
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
  result = v11;
  __asm { vmovaps xmm6, [rsp+108h+var_38] }
  return result;
}

/*
==============
G_Vehicle_SlideMoveIgnoreLinkedChildren
==============
*/
void G_Vehicle_SlideMoveIgnoreLinkedChildren(const gentity_s *vehEnt, GStepSlideMove *stepSlide)
{
  gentity_s *i; 
  unsigned int Instance; 
  int RigidBodyContents; 
  __int64 passEntityCount; 
  const char *v8; 

  for ( i = vehEnt->tagChildren; i; i = i->tagInfo->next )
  {
    Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, i->s.number);
    RigidBodyContents = 0;
    if ( Instance != -1 )
      RigidBodyContents = Physics_GetRigidBodyContents(PHYSICS_WORLD_ID_FIRST, Instance, 0);
    if ( (RigidBodyContents & vehEnt->clipmask) != 0 )
    {
      passEntityCount = stepSlide->passEntityCount;
      if ( (int)passEntityCount >= 8 )
      {
        v8 = SL_ConvertToString(vehEnt->classname);
        Com_PrintWarning(24, "Player-driven non-physics Vehicle '$e%d %s' has more than %d linked ents. Some children might collide with the vehicle capsule, preventing movement. Reduce number of linked ents or ask programmer to increase BG_STEP_SLIDE_MOVE_MAX_IGNORE_ENTS", (unsigned int)vehEnt->s.number, v8, 8);
        return;
      }
      stepSlide->passEntities[passEntityCount] = i->s.number;
      ++stepSlide->passEntityCount;
    }
  }
}

/*
==============
G_Vehicle_SpawnEntity
==============
*/
void G_Vehicle_SpawnEntity(gentity_s *ent)
{
  const char *v2; 
  __int64 v3; 
  const char *v4; 
  signed __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  const char *v9; 
  char *v16; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 
  unsigned int outIndex; 
  char *out; 
  char *v22; 
  char *compositeModelName; 

  _RSI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5657, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RSI->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5658, ASSERT_TYPE_ASSERT, "( ent->classname != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "ent->classname != NULL_SCR_STRING") )
    __debugbreak();
  v2 = "script_vehicle";
  v3 = 0x7FFFFFFFi64;
  v4 = SL_ConvertToString(_RSI->classname);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v5 = v4 - "script_vehicle";
  do
  {
    v6 = v2[v5];
    v7 = v3;
    v8 = *v2++;
    --v3;
    if ( !v7 )
      break;
    if ( v6 != v8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5659, ASSERT_TYPE_ASSERT, "( !I_strcmp( SL_ConvertToString( ent->classname ), \"script_vehicle\" ) )", (const char *)&queryFormat, "!I_strcmp( SL_ConvertToString( ent->classname ), \"script_vehicle\" )") )
        __debugbreak();
      break;
    }
  }
  while ( v6 );
  G_LevelSpawnString(0x487u, NULL, (const char **)&out);
  if ( !out )
  {
    v9 = SL_ConvertToString(_RSI->script_classname);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+138h]
      vmovss  xmm1, dword ptr [rsi+134h]
      vmovss  xmm2, dword ptr [rsi+130h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+68h+var_38], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+68h+var_40], xmm1
      vmovsd  [rsp+68h+fmt], xmm2
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E371E0, 1248i64, v9, fmt, v18, v19);
  }
  G_LevelSpawnString(0xF7u, "0", (const char **)&v22);
  if ( atoi(v22) )
  {
    G_LevelSpawnString(0x28Cu, "0", (const char **)&compositeModelName);
    G_Utils_SetCompositeModel(_RSI, ET_VEHICLE, compositeModelName);
  }
  if ( (_RSI->spawnflags & 2) != 0 )
  {
    G_VehicleSpawner_Create(_RSI, out);
  }
  else
  {
    v16 = out;
    if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4154, ASSERT_TYPE_ASSERT, "( typeName )", (const char *)&queryFormat, "typeName") )
      __debugbreak();
    if ( (_RSI->spawnflags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4155, ASSERT_TYPE_ASSERT, "( !(ent->spawnflags & (1<<1)) )", (const char *)&queryFormat, "!(ent->spawnflags & VEH_SF_SPAWNER)") )
      __debugbreak();
    if ( !G_Vehicle_GetServerDefIndex(v16, &outIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36570, 1244i64, v16);
    G_Vehicle_Create(_RSI, outIndex, NULL, 1);
  }
}

/*
==============
G_Vehicle_StepSlideMove
==============
*/

void __fastcall G_Vehicle_StepSlideMove(gentity_s *ent, int gravity, double frameTime)
{
  vehicle_physic_t *p_phys; 
  GStepSlideMove stepSlide; 

  __asm
  {
    vmovaps [rsp+0F8h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1452, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1453, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  p_phys = &ent->vehicle->phys;
  __asm { vmovss  [rsp+0F8h+stepSlide.baseclass_0.deltaTime], xmm6 }
  stepSlide.origin = &p_phys->origin;
  stepSlide.velocity = &p_phys->vel;
  stepSlide.bounds = &p_phys->bounds;
  stepSlide.gravity = gravity != 0;
  stepSlide.hasGround = s_phys.hasGround != 0;
  stepSlide.zerog = 0;
  stepSlide.inSolid = NULL;
  stepSlide.groundNormal = &s_phys.groundTrace.normal;
  stepSlide.passEntities[0] = ent->s.number;
  stepSlide.passEntityCount = 1;
  stepSlide.clipMask = ent->clipmask;
  stepSlide.velocityClipType = VELOCITY_CLIP_VEHICLE;
  G_Vehicle_SlideMoveIgnoreLinkedChildren(ent, &stepSlide);
  BgStepSlideMove::StepSlideMove(&stepSlide);
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
  __asm { vmovaps xmm6, [rsp+0F8h+var_28] }
}

/*
==============
G_Vehicle_Touch
==============
*/
void G_Vehicle_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  Vehicle *vehicle; 
  gentity_s *PlayerVehicle; 
  gentity_s *v9; 
  GVehicles *VehicleSystem; 
  __int64 v11; 
  bool outPlayerLinked[2]; 
  bool outPlayerPredicted; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5463, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pOther && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5464, ASSERT_TYPE_ASSERT, "( pOther )", (const char *)&queryFormat, "pOther") )
    __debugbreak();
  if ( pSelf->s.eType == ET_VEHICLE )
  {
    if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5469, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
      __debugbreak();
    vehicle = pSelf->vehicle;
    if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5471, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
      __debugbreak();
    _R13 = G_Vehicle_GetServerDef(vehicle->defIndex);
    truncate_cast<int,__int64>(vehicle - s_vehicleServers);
    if ( (BG_IsCharacterEntity(&pOther->s) || pOther->s.eType == ET_SCRIPTMOVER) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&pOther->s.lerp.eFlags, ACTIVE, 0x10u) )
    {
      if ( !pOther->tagInfo || pOther->s.eType == ET_PLAYER && (outPlayerLinked[0] = 0, outPlayerPredicted = 0, PlayerVehicle = G_ActiveMP_GetPlayerVehicle(pOther, outPlayerLinked, &outPlayerPredicted), (v9 = PlayerVehicle) != NULL) && PlayerVehicle->vehicle && (VehicleSystem = GVehicles::GetVehicleSystem(), (v11 = (__int64)VehicleSystem->PhysicsGetVehicleObject(VehicleSystem, v9->s.number)) != 0) && !*(_DWORD *)(v11 + 40) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm0, dword ptr [r13+0C0h]
        }
      }
    }
  }
}

/*
==============
G_Vehicle_TouchEntities
==============
*/
void G_Vehicle_TouchEntities(gentity_s *ent)
{
  signed __int64 v1; 
  void *v11; 
  bool v17; 
  char v18; 
  unsigned int physicsVehicle; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v21; 
  bool IsDynamic; 
  int m_driverEntNum; 
  gentity_s *GEntity; 
  char v58; 
  bool v59; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int v94; 
  const dvar_t *v100; 
  int Int_Internal_DebugName; 
  unsigned int i; 
  __int64 v184; 
  const dvar_t *v185; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const ScriptableDef *def; 
  unsigned int scriptableCollisionMain; 
  unsigned int v189; 
  unsigned int v190; 
  unsigned int v191; 
  int providedDmg; 
  const ScriptableDef *v197; 
  int v199; 
  __int64 v200; 
  gentity_s *v201; 
  __int64 v202; 
  unsigned int v203; 
  int v204; 
  __int64 v205; 
  EntityTagInfo *tagInfo; 
  entityType_s eType; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v210; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  GHandler *Handler; 
  team_t v213; 
  entityType_s v214; 
  __int64 v215; 
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v217; 
  __int64 otherEntityNum; 
  __int64 m_movingPlatformEntity; 
  BgVehiclePhysics *Physics; 
  BgVehiclePhysicsDeferredActionManager *p_m_deferActionMgr; 
  scr_string_t classname; 
  const DObj *ServerDObjForEnt; 
  int v230; 
  bool v242; 
  unsigned int v243; 
  unsigned int v244; 
  unsigned int v245; 
  unsigned int v246; 
  unsigned int v247; 
  unsigned int v248; 
  bool v249; 
  bool v251; 
  bool v253; 
  const scrContext_t *v258; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v260)(gentity_s *, gentity_s *, int); 
  void *v261; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  bool v264; 
  char v265; 
  const playerState_s *v266; 
  unsigned int number; 
  vec3_t *angVel; 
  vec3_t *newOrigin; 
  vec4_t *newOrient; 
  __int64 removeDuplicates; 
  int dFlags; 
  bool outPerformCapsuleTest; 
  unsigned int physicsInstanceId; 
  __int16 v291; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  team_t outTeam[2]; 
  BgVehiclePhysics *vehObj; 
  PhysicsQuery_Collected<unsigned int> collectedScriptables; 
  const Vehicle *v296; 
  const VehicleDef *v297; 
  GVehicles *v298; 
  const GEntityHandlerList *EntHandlerList; 
  AIActorInterface v300; 
  AIAgentInterface v301; 
  void *v302; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  Bounds bounds; 
  vec3_t deltaOrigin; 
  Bounds out; 
  vec4_t orientation; 
  vec3_t v3; 
  char v311; 
  __int16 v312[2048]; 
  char v322; 

  v11 = alloca(v1);
  __asm { vmovaps [rsp+3290h+var_70], xmm10 }
  *(_QWORD *)outTeam = ent;
  _R15 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2163, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_R15->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2164, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _R13 = _R15->vehicle;
  v296 = _R13;
  __asm { vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
  _R12 = G_Vehicle_GetServerDef(_R13->defIndex);
  __asm
  {
    vmovsd  qword ptr [rbp+3180h+position], xmm0
    vmovups xmm0, xmmword ptr cs:?vec4_origin@@3Tvec4_t@@B; vec4_t const vec4_origin
  }
  position.v[2] = vec3_origin.v[2];
  __asm { vmovups xmmword ptr [rbp+3180h+orientation], xmm0 }
  v297 = _R12;
  v17 = 0;
  EntHandlerList = G_Main_GetEntHandlerList(_R15);
  v18 = 1;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  physicsVehicle = _R13->physicsVehicle;
  __asm
  {
    vmovaps [rsp+3290h+var_30], xmm6
    vmovaps [rsp+3290h+var_40], xmm7
    vmovaps [rsp+3290h+var_50], xmm8
    vmovaps [rsp+3290h+var_60], xmm9
  }
  v298 = GVehicles::ms_gVehiclesSystem;
  __asm
  {
    vmovaps [rsp+3290h+var_90], xmm12
    vmovaps [rsp+3290h+var_A0], xmm13
    vmovaps [rsp+3290h+var_B0], xmm14
  }
  vehObj = NULL;
  if ( BGVehicles::PhysicsIsValid(physicsVehicle) && GVehicles::ms_gVehiclesSystem && (VehicleSystem = GVehicles::GetVehicleSystem(), v21 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), (vehObj = BgVehiclePhysicsManager::GetObjectById(v21, _R13->physicsVehicle)) != NULL) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vsubss  xmm1, xmm0, dword ptr [r13+0FCh]
      vmovss  xmm2, dword ptr [r15+134h]
      vmovss  dword ptr [rbp+3180h+deltaOrigin], xmm1
      vsubss  xmm0, xmm2, dword ptr [r13+100h]
      vmovss  xmm1, dword ptr [r15+138h]
      vmovss  dword ptr [rbp+3180h+deltaOrigin+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [r13+104h]
      vmovss  dword ptr [rbp+3180h+deltaOrigin+8], xmm2
    }
    AnglesSubtract(&_R15->r.currentAngles, &_R13->phys.prevAngles, &v3);
    _RDI = &vehObj->m_linearVelocityWs;
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm4, dword ptr [rdi]
      vmovss  xmm5, dword ptr [rdi+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm12, xmm4, xmm1
      vmulss  xmm13, xmm6, xmm1
      vmulss  xmm14, xmm5, xmm1
    }
    IsDynamic = BgVehiclePhysics::IsDynamic(vehObj);
    v17 = IsDynamic;
    if ( _R12->accurateShapeOverlap && IsDynamic )
    {
      _RBX = DCONST_DVARFLT_bg_vehScrLookAheadTimeServer;
      if ( !DCONST_DVARFLT_bg_vehScrLookAheadTimeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehScrLookAheadTimeServer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
      __asm { vmovaps xmm6, xmm0 }
      AxisToQuat((const tmat33_t<vec3_t> *)&vehObj->m_transform, (vec4_t *)&out);
      __asm { vmaxss  xmm1, xmm7, xmm6; deltaTime }
      BgVehiclePhysics::IntegrateVelocities(vehObj, *(float *)&_XMM1, &vehObj->m_transform.m[3], (const vec4_t *)&out, _RDI, &vehObj->m_angularVelocityWs, &position, &orientation);
      m_driverEntNum = vehObj->m_driverEntNum;
      if ( m_driverEntNum != 2047 )
      {
        GEntity = G_GetGEntity(m_driverEntNum);
        if ( GEntity )
        {
          if ( GEntity->client )
          {
            __asm
            {
              vmovss  xmm9, dword ptr [rax+5474h]
              vmovss  xmm10, dword ptr [rax+5478h]
              vmovaps [rsp+3290h+var_80], xmm11
              vmovss  xmm11, dword ptr [rax+5470h]
              vmovss  [rbp+3180h+physicsInstanceId], xmm11
            }
            if ( (physicsInstanceId & 0x7F800000) == 2139095040 )
              goto LABEL_251;
            __asm { vmovss  [rbp+3180h+physicsInstanceId], xmm9 }
            if ( (physicsInstanceId & 0x7F800000) == 2139095040 )
              goto LABEL_251;
            __asm { vmovss  [rbp+3180h+physicsInstanceId], xmm10 }
            if ( (physicsInstanceId & 0x7F800000) == 2139095040 )
            {
LABEL_251:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2218, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm6, dword ptr [r15+130h]
              vmovss  xmm7, dword ptr [r15+134h]
              vmovss  xmm8, dword ptr [r15+138h]
            }
            Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehPlayerCollAhead, "bg_vehPlayerCollAhead");
            __asm
            {
              vsubss  xmm1, xmm11, xmm6
              vmulss  xmm2, xmm1, xmm0
              vaddss  xmm4, xmm2, xmm11
              vcomiss xmm4, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
              vmovaps xmm11, [rsp+3290h+var_80]
              vsubss  xmm1, xmm9, xmm7
              vmulss  xmm2, xmm1, xmm0
              vsubss  xmm1, xmm10, xmm8
              vmulss  xmm0, xmm1, xmm0
              vaddss  xmm3, xmm2, xmm9
              vaddss  xmm2, xmm0, xmm10
            }
            if ( !(v58 | v59) )
            {
              __asm { vcomiss xmm4, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm }
              if ( v58 )
              {
                __asm { vcomiss xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm }
                if ( !(v58 | v59) )
                {
                  __asm { vcomiss xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm }
                  if ( v58 )
                  {
                    __asm { vcomiss xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+8; clipMap_t cm }
                    if ( !(v58 | v59) )
                    {
                      __asm { vcomiss xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+8; clipMap_t cm }
                      if ( v58 )
                      {
                        __asm
                        {
                          vmovss  dword ptr [rbp+3180h+position], xmm4
                          vmovss  dword ptr [rbp+3180h+position+4], xmm3
                          vmovss  dword ptr [rbp+3180h+position+8], xmm2
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v18 = 0;
    }
  }
  else
  {
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [r13+138h]
      vmovss  dword ptr [rbp+3180h+deltaOrigin], xmm1
      vmulss  xmm2, xmm0, dword ptr [r13+13Ch]
      vmovss  dword ptr [rbp+3180h+deltaOrigin+4], xmm2
      vmulss  xmm0, xmm0, dword ptr [r13+140h]
      vmovss  dword ptr [rbp+3180h+deltaOrigin+8], xmm0
      vmovss  xmm6, dword ptr [r13+13Ch]
      vmovss  xmm4, dword ptr [r13+138h]
      vmovss  xmm5, dword ptr [r13+140h]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmulss  xmm12, xmm4, xmm1
      vmulss  xmm13, xmm6, xmm1
      vmulss  xmm14, xmm5, xmm1
    }
    AnglesSubtract(&_R13->phys.angles, &_R13->phys.prevAngles, &v3);
  }
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _R15);
  physicsInstanceId = Instance;
  if ( Instance == -1 )
    RigidBodyID = 0xFFFFFF;
  else
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && _R12->accurateShapeOverlap && v17 )
  {
    if ( v18 )
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vmovss  xmm1, dword ptr [r15+134h]
      vmovss  dword ptr [rbp+3180h+position], xmm0
      vmovss  xmm0, dword ptr [r15+138h]
      vmovss  dword ptr [rbp+3180h+position+8], xmm0
      vmovss  dword ptr [rbp+3180h+position+4], xmm1
    }
    AnglesToQuat(&_R15->r.currentAngles, &orientation);
  }
  v94 = 8321;
  if ( (_R15->clipmask & 0x10000) != 0 )
    v94 = 33579137;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
  {
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm0, dword ptr [r15+100h]
      vmovss  xmm1, dword ptr [r15+108h]
      vandps  xmm1, xmm1, xmm8
      vaddss  xmm4, xmm1, dword ptr [r15+114h]
      vandps  xmm0, xmm0, xmm8
      vaddss  xmm3, xmm0, dword ptr [r15+10Ch]
      vmovss  xmm0, dword ptr [r15+104h]
      vandps  xmm0, xmm0, xmm8
      vaddss  xmm2, xmm0, dword ptr [r15+110h]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm1
      vmulss  xmm1, xmm9, dword ptr [rbp+3180h+deltaOrigin]
      vaddss  xmm7, xmm1, dword ptr [r13+0FCh]
      vandps  xmm1, xmm1, xmm8
      vsqrtss xmm2, xmm2, xmm2
      vaddss  xmm6, xmm1, xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+3180h+deltaOrigin+4]
      vaddss  xmm5, xmm1, dword ptr [r13+100h]
      vandps  xmm1, xmm1, xmm8
      vaddss  xmm4, xmm1, xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+3180h+deltaOrigin+8]
      vaddss  xmm3, xmm1, dword ptr [r13+104h]
      vandps  xmm1, xmm1, xmm8
      vaddss  xmm2, xmm1, xmm2
      vsubss  xmm1, xmm5, xmm4
      vmovss  dword ptr [rbp+3180h+aabbMin+4], xmm1
      vsubss  xmm0, xmm7, xmm6
      vaddss  xmm1, xmm7, xmm6
      vmovss  dword ptr [rbp+3180h+aabbMin], xmm0
      vsubss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rbp+3180h+aabbMax], xmm1
      vaddss  xmm1, xmm3, xmm2
      vmovss  dword ptr [rbp+3180h+aabbMin+8], xmm0
      vmovss  dword ptr [rbp+3180h+aabbMax+8], xmm1
      vmovss  dword ptr [rbp+3180h+out], xmm7
      vmovss  dword ptr [rbp+3180h+out+0Ch], xmm6
      vmovss  dword ptr [rbp+3180h+out+4], xmm5
      vmovss  [rbp+3180h+var_30E8], xmm4
      vmovss  dword ptr [rbp+3180h+out+8], xmm3
      vmovss  [rbp+3180h+var_30E4], xmm2
      vaddss  xmm0, xmm5, xmm4
    }
    goto LABEL_55;
  }
  Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &aabbMin, &aabbMax);
  __asm
  {
    vmovss  xmm8, dword ptr [rbp+3180h+aabbMax]
    vaddss  xmm0, xmm8, dword ptr [rbp+3180h+aabbMin]
    vmovss  xmm7, dword ptr [rbp+3180h+aabbMax+4]
    vmovss  xmm9, cs:__real@3f000000
  }
  v100 = DVARBOOL_vehLegacyHeliRotorsDamage;
  __asm
  {
    vmulss  xmm1, xmm0, xmm9
    vmovss  xmm0, dword ptr [rbp+3180h+position]
    vsubss  xmm5, xmm0, xmm1
    vaddss  xmm0, xmm7, dword ptr [rbp+3180h+aabbMin+4]
    vmovss  xmm1, dword ptr [rbp+3180h+position+4]
    vmulss  xmm2, xmm0, xmm9
    vaddss  xmm0, xmm5, dword ptr [rbp+3180h+aabbMin]
    vsubss  xmm4, xmm1, xmm2
    vaddss  xmm1, xmm4, dword ptr [rbp+3180h+aabbMin+4]
    vmovss  dword ptr [rbp+3180h+aabbMin], xmm0
    vmovss  dword ptr [rbp+3180h+aabbMin+4], xmm1
    vaddss  xmm0, xmm5, xmm8
    vaddss  xmm1, xmm4, xmm7
    vmovss  dword ptr [rbp+3180h+aabbMax], xmm0
    vmovss  xmm0, dword ptr [rbp+3180h+aabbMin+8]
    vaddss  xmm2, xmm0, cs:__real@c2480000
    vmovss  dword ptr [rbp+3180h+aabbMax+4], xmm1
    vmovss  xmm1, dword ptr [rbp+3180h+aabbMax+8]
    vaddss  xmm0, xmm1, cs:__real@41c80000
    vmovss  dword ptr [rbp+3180h+aabbMax+8], xmm0
    vmovss  dword ptr [rbp+3180h+aabbMin+8], xmm2
  }
  if ( !DVARBOOL_vehLegacyHeliRotorsDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehLegacyHeliRotorsDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v100);
  if ( v100->current.enabled && _R15->s.eType == ET_HELICOPTER )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3a83126f
      vcomiss xmm0, dword ptr [r12+0EF4h]
    }
    if ( _R15->s.eType < ET_HELICOPTER )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_vehLegacyHeliRotorsExpand, "vehLegacyHeliRotorsExpand");
      __asm
      {
        vmovss  xmm2, cs:__real@45000000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+3180h+aabbMin]
        vmovss  xmm3, dword ptr [rbp+3180h+aabbMin+4]
        vsubss  xmm2, xmm1, xmm0
        vsubss  xmm1, xmm3, xmm0
        vaddss  xmm3, xmm0, dword ptr [rbp+3180h+aabbMax]
        vaddss  xmm0, xmm0, dword ptr [rbp+3180h+aabbMax+4]
        vmovss  dword ptr [rbp+3180h+aabbMax], xmm3
        vmovss  dword ptr [rbp+3180h+aabbMin], xmm2
        vmovss  dword ptr [rbp+3180h+aabbMin+4], xmm1
      }
LABEL_55:
      __asm { vmovss  dword ptr [rbp+3180h+aabbMax+4], xmm0 }
    }
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug");
  __asm { vmovaps xmm8, [rsp+3290h+var_50] }
  if ( Int_Internal_DebugName == 1 )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbp+3180h+aabbMax]
      vmovss  xmm6, dword ptr [rbp+3180h+aabbMin]
    }
    _RAX = vec3_t::operator[](&out.midPoint, 0);
    __asm
    {
      vaddss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rax], xmm1
    }
    _RAX = vec3_t::operator[](&out.halfSize, 0);
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rax], xmm1
      vmovss  xmm7, dword ptr [rbp+3180h+aabbMax+4]
      vmovss  xmm6, dword ptr [rbp+3180h+aabbMin+4]
    }
    _RAX = vec3_t::operator[](&out.midPoint, 1);
    __asm
    {
      vaddss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rax], xmm1
    }
    _RAX = vec3_t::operator[](&out.halfSize, 1);
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rax], xmm1
      vmovss  xmm7, dword ptr [rbp+3180h+aabbMax+8]
      vmovss  xmm6, dword ptr [rbp+3180h+aabbMin+8]
    }
    _RAX = vec3_t::operator[](&out.midPoint, 2);
    __asm
    {
      vaddss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm9
      vmovss  dword ptr [rax], xmm1
    }
    _RAX = vec3_t::operator[](&out.halfSize, 2);
    __asm
    {
      vsubss  xmm0, xmm7, xmm6
      vmulss  xmm1, xmm0, xmm9
      vxorps  xmm2, xmm2, xmm2; yaw
      vmovss  dword ptr [rax], xmm1
    }
    G_DebugBox(&vec3_origin, &out, *(float *)&_XMM2, &colorGreen, 0, 0);
  }
  collectedEnts.ids = (unsigned __int16 *)v312;
  collectedEnts.count = 0;
  collectedScriptables.ids = (unsigned int *)&v311;
  collectedEnts.countMax = 2048;
  collectedScriptables.count = 0;
  collectedScriptables.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, v94, 0, NULL, &collectedEnts, &collectedScriptables, 1);
  __asm
  {
    vcomiss xmm10, dword ptr [r12+0C0h]
    vmovaps xmm9, [rsp+3290h+var_60]
    vmovaps xmm7, [rsp+3290h+var_40]
  }
  if ( v58 )
  {
    for ( i = 0; i < collectedScriptables.count; ++i )
    {
      v184 = collectedScriptables.ids[i];
      if ( ScriptableSv_GetInstanceCommonContext(collectedScriptables.ids[i])->linkedObjectType == SCRIPTABLE_LINK_NONE )
      {
        v185 = DVARBOOL_scriptable_sv_accurate_vehicle;
        if ( !DVARBOOL_scriptable_sv_accurate_vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_accurate_vehicle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v185);
        if ( !v185->current.enabled )
          goto LABEL_78;
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v184);
        def = InstanceCommonContext->def;
        if ( !InstanceCommonContext->def || ScriptableDef_HasHealth(InstanceCommonContext->def) && (def->flags & 0x180000) == 0 )
        {
          if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)v184 >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(newOrigin) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(angVel) = v184;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", angVel, newOrigin) )
              __debugbreak();
          }
          scriptableCollisionMain = g_scriptableSv_instanceContexts[v184].collisionContext.scriptableCollisionMain;
          if ( physicsInstanceId == -1 || scriptableCollisionMain == -1 || !_R12->accurateShapeOverlap || (v189 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _R15), v190 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v189, 0), v191 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, scriptableCollisionMain, 0), PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v190, &position, &orientation, v191)) )
          {
LABEL_78:
            __asm { vmovss  xmm6, dword ptr [r12+0C4h] }
            Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleScriptableDamageMult, "bg_vehicleScriptableDamageMult");
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm2, xmm0, dword ptr [r12+0C0h]; collDmg
              vmovaps xmm3, xmm6; collSpeed
            }
            providedDmg = G_Vehicle_CalcImpactDamageForScriptable(_R13, v184, *(float *)&_XMM2, *(float *)&_XMM3, &out.midPoint);
            if ( providedDmg > 0 )
            {
              v197 = ScriptableSv_GetInstanceCommonContext(v184)->def;
              if ( !v197 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2634, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
                __debugbreak();
              if ( ScriptableDef_HasHealth(v197) && (v197->flags & 0x180000) == 0 )
                ScriptableSv_Damage(_R15, _R15, v184, NULL, &out.midPoint, 12, &NULL_WEAPON, 0, (const scr_string_t)0, providedDmg, 0, 0);
            }
          }
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+3290h+var_30] }
  v199 = 0;
  if ( level.maxclients > 0 )
  {
    do
    {
      if ( (unsigned int)v199 >= 0x800 )
      {
        LODWORD(newOrigin) = 2048;
        LODWORD(angVel) = v199;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v200 = v199;
      if ( g_entities[v200].r.isInUse != g_entityIsInUse[v199] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v199] )
      {
        v201 = g_entities;
        if ( !g_entities[v200].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2369, ASSERT_TYPE_ASSERT, "( check->client )", (const char *)&queryFormat, "check->client") )
          __debugbreak();
        if ( BGMovingPlatforms::IsOnMovingPlatform(&v201[v200].client->ps) )
        {
          v202 = 0i64;
          if ( collectedEnts.count )
          {
            while ( (unsigned __int16)v312[v202] != v199 )
            {
              v202 = (unsigned int)(v202 + 1);
              if ( (unsigned int)v202 >= collectedEnts.count )
                goto LABEL_104;
            }
          }
          else
          {
LABEL_104:
            if ( (v199 < 0 || (unsigned int)v199 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v199, "signed", v199) )
              __debugbreak();
            v312[collectedEnts.count] = v199;
            if ( ++collectedEnts.count > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2386, ASSERT_TYPE_ASSERT, "( results.count <= ( 2048 ) )", (const char *)&queryFormat, "results.count <= MAX_GENTITIES") )
              __debugbreak();
          }
        }
      }
      ++v199;
    }
    while ( v199 < level.maxclients );
    _R15 = *(gentity_s **)outTeam;
    _R13 = v296;
    _R12 = v297;
  }
  v203 = 0;
  if ( collectedEnts.count )
  {
    v204 = 655442;
    do
    {
      v205 = (unsigned __int16)v312[v203];
      _RDI = &g_entities[v205];
      if ( _RDI->s.number == _R15->s.number )
        goto LABEL_247;
      tagInfo = _RDI->tagInfo;
      if ( tagInfo )
      {
        if ( tagInfo->parent == _R15 )
          goto LABEL_247;
      }
      eType = _RDI->s.eType;
      if ( (unsigned __int16)eType > ET_ACTOR || !_bittest(&v204, eType) )
        goto LABEL_247;
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(&g_entities[v205]);
      v210 = EntityPlayerStateConst;
      if ( EntityPlayerStateConst )
      {
        p_eFlags = &EntityPlayerStateConst->eFlags;
        if ( EntityPlayerStateConst == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 6u) )
        {
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
            goto LABEL_133;
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
        }
        if ( !_R12->hitRemoteControllers && _RDI->s.eType == ET_PLAYER )
        {
          Handler = GHandler::getHandler();
          GHandler::GetPlayerTeam(Handler, _RDI->s.number, outTeam);
          v213 = v298->GetTeam(v298, &_R15->s);
          if ( v213 == outTeam[0] )
            goto LABEL_246;
        }
      }
LABEL_133:
      v214 = _RDI->s.eType;
      if ( ((v214 - 1) & 0xFFED) == 0 && v214 != ET_ITEM && (!_RDI->tagInfo || G_Vehicle_AllowTouchLinkedPlayer(_R15, _R12, _RDI)) && G_VehicleHeli_ContactRotors(_R15, _RDI) )
      {
        if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
          __debugbreak();
        v291 = 0;
        LOBYTE(dFlags) = 0;
        LODWORD(removeDuplicates) = 12;
        LODWORD(newOrient) = 0;
        LODWORD(newOrigin) = 999999;
        GCombat::ms_gCombatSystem->Damage(GCombat::ms_gCombatSystem, _RDI, _R15, _R15, &vec3_origin, &_RDI->r.currentOrigin, (int)newOrigin, (int)newOrient, removeDuplicates, &NULL_WEAPON, dFlags, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)&v291);
        v215 = _R13 - s_vehicleServers;
        if ( (unsigned __int64)(v215 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v215, "signed", _R13 - s_vehicleServers) )
          __debugbreak();
        if ( (int)v215 > 127 )
          LODWORD(v215) = 127;
        if ( (int)v215 < 0 )
          LODWORD(v215) = 0;
        s_vehicleDamageTime[(int)v215] = level.time;
        goto LABEL_246;
      }
      if ( _RDI->s.groundEntityNum == _R15->s.number || v210 && v210->movingPlatforms.m_movingPlatformEntity == _R15->s.number )
      {
LABEL_245:
        G_Vehicle_PushEntity(_R15, _RDI, &out.midPoint, &deltaOrigin, &v3);
        goto LABEL_246;
      }
      client = _RDI->client;
      if ( client )
      {
        v217 = &client->ps.eFlags;
        if ( !v217 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v217, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v217, ACTIVE, 6u) )
        {
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v217, ACTIVE, 7u) )
            goto LABEL_173;
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
        }
        otherEntityNum = _RDI->s.otherEntityNum;
        if ( (unsigned int)otherEntityNum >= 0x800 )
        {
          LODWORD(newOrigin) = 2048;
          LODWORD(angVel) = _RDI->s.otherEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[otherEntityNum].r.isInUse != g_entityIsInUse[otherEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[otherEntityNum] && G_EntIsLinkedToAncestor(&g_entities[_RDI->s.otherEntityNum], _R15) )
          goto LABEL_246;
      }
LABEL_173:
      if ( v210 && BGMovingPlatforms::IsOnMovingPlatform(v210) )
      {
        m_movingPlatformEntity = v210->movingPlatforms.m_movingPlatformEntity;
        if ( (unsigned int)m_movingPlatformEntity >= 0x800 )
        {
          LODWORD(newOrigin) = 2048;
          LODWORD(angVel) = v210->movingPlatforms.m_movingPlatformEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2458, ASSERT_TYPE_ASSERT, "(unsigned)( moverIndex ) < (unsigned)( ( 2048 ) )", "moverIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        if ( GUtils::AreEntsInSameLinkTree(&g_entities[m_movingPlatformEntity], _R15) )
          goto LABEL_246;
      }
      if ( _RDI->s.eType == ET_VEHICLE )
      {
        Physics = G_Vehicle_GetPhysics(_RDI->vehicle);
        if ( Physics )
        {
          p_m_deferActionMgr = &Physics->m_deferActionMgr;
          if ( Physics == (BgVehiclePhysics *)-152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", 20, ASSERT_TYPE_SANITY, "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          p_m_deferActionMgr->actionBits[0] |= 8u;
        }
      }
      classname = _RDI->classname;
      if ( classname == scr_const.script_model )
      {
        if ( !_RDI->model )
          goto LABEL_246;
        ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
        DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+3180h+bounds.midPoint]
          vaddss  xmm1, xmm0, dword ptr [rdi+130h]
          vmovss  xmm2, dword ptr [rbp+3180h+bounds.midPoint+4]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint], xmm1
          vaddss  xmm0, xmm2, dword ptr [rdi+134h]
          vmovss  xmm1, dword ptr [rbp+3180h+bounds.midPoint+8]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+4], xmm0
          vaddss  xmm2, xmm1, dword ptr [rdi+138h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+8], xmm2
        }
      }
      else if ( classname == scr_const.script_brushmodel )
      {
        v230 = Vec3MajorAxis(&_RDI->r.box.halfSize);
        _RBX = v230;
        if ( (unsigned int)v230 >= 3 )
        {
          LODWORD(newOrigin) = 3;
          LODWORD(angVel) = v230;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+100h]
          vmovss  xmm0, dword ptr [rdi+rbx*4+10Ch]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint], xmm1
          vmovss  xmm2, dword ptr [rdi+104h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+4], xmm2
          vmovss  xmm3, dword ptr [rdi+108h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+8], xmm3
          vmovss  dword ptr [rbp+3180h+bounds.halfSize], xmm0
          vmovss  dword ptr [rbp+3180h+bounds.halfSize+4], xmm0
          vmovss  dword ptr [rbp+3180h+bounds.halfSize+8], xmm0
          vaddss  xmm0, xmm1, dword ptr [rdi+130h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint], xmm0
          vaddss  xmm1, xmm2, dword ptr [rdi+134h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+4], xmm1
          vaddss  xmm0, xmm3, dword ptr [rdi+138h]
          vmovss  dword ptr [rbp+3180h+bounds.midPoint+8], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rdi+118h]
          vmovups xmmword ptr [rbp+3180h+bounds.midPoint], xmm0
          vmovsd  xmm1, qword ptr [rdi+128h]
          vmovsd  qword ptr [rbp+3180h+bounds.halfSize+4], xmm1
        }
      }
      v242 = 0;
      v59 = _R12->accurateShapeOverlap == 0;
      v243 = physicsInstanceId;
      outPerformCapsuleTest = 1;
      if ( v59 )
        goto LABEL_203;
      v242 = physicsInstanceId != -1;
      if ( physicsInstanceId == -1 )
        goto LABEL_203;
      if ( _RDI->s.eType != ET_PLAYER )
      {
        v244 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RDI);
        v242 = v244 != -1;
        if ( v244 == -1 )
        {
LABEL_203:
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3180h+bounds.halfSize]
            vcomiss xmm0, xmm10
          }
          if ( v242 )
          {
            v251 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f");
            v242 = 0;
            if ( v251 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3180h+bounds.halfSize+4]
            vcomiss xmm0, xmm10
          }
          if ( v242 )
          {
            v253 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f");
            v242 = 0;
            if ( v253 )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3180h+bounds.halfSize+8]
            vcomiss xmm0, xmm10
          }
          if ( v242 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+3180h+bounds.halfSize+4]
            vmaxss  xmm1, xmm0, dword ptr [rbp+3180h+bounds.halfSize]
            vmaxss  xmm0, xmm1, dword ptr [rbp+3180h+bounds.halfSize+8]
            vmovss  dword ptr [rbp+3180h+bounds.halfSize+8], xmm0
            vmovss  dword ptr [rbp+3180h+bounds.halfSize], xmm1
            vmovss  dword ptr [rbp+3180h+bounds.halfSize+4], xmm1
          }
          v249 = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, v243, _R15) == 0;
        }
        else
        {
          outPerformCapsuleTest = 0;
          v245 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _R15);
          v246 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v245, 0);
          v247 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, _RDI);
          v248 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v247, 0);
          v249 = !PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v246, &position, &orientation, v248);
        }
        if ( v249 )
          goto LABEL_246;
        goto LABEL_214;
      }
      v242 = 0;
      if ( !vehObj )
        goto LABEL_203;
      v242 = 0;
      if ( !vehObj->m_playerControlled )
        goto LABEL_203;
      outPerformCapsuleTest = 0;
      if ( !G_Vehicle_TouchEntities_Player(PHYSICS_WORLD_ID_FIRST, vehObj, _RDI, &outPerformCapsuleTest) )
        goto LABEL_246;
      v242 = 0;
      if ( outPerformCapsuleTest )
        goto LABEL_203;
LABEL_214:
      v258 = ScriptContext_Server();
      if ( Scr_IsSystemActive(v258, 1u) )
      {
        GScr_AddEntity(_R15);
        GScr_Notify(_RDI, scr_const.touch, 1u);
        GScr_AddEntity(_RDI);
        GScr_Notify(_R15, scr_const.touch, 1u);
      }
      touch = G_Main_GetEntHandlerList(_RDI)->touch;
      if ( touch )
        touch(_RDI, _R15, 1);
      v260 = EntHandlerList->touch;
      if ( v260 )
        v260(_R15, _RDI, 1);
      if ( !_R13->canPushEntities )
        goto LABEL_246;
      AIActorInterface::AIActorInterface(&v300);
      AIAgentInterface::AIAgentInterface(&v301);
      v301.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v261 = NULL;
      v302 = NULL;
      if ( _RDI->agent )
      {
        if ( SV_Agent_IsScripted(_RDI->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RDI);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v301, ScriptedAgentInfo);
          v261 = &v301;
LABEL_236:
          v302 = v261;
          goto LABEL_237;
        }
        v261 = v302;
      }
      actor = _RDI->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v300, _RDI->actor);
        v261 = &v300;
        goto LABEL_236;
      }
LABEL_237:
      v264 = 0;
      if ( ((_RDI->s.eType - 1) & 0xFFEF) != 0 )
      {
        if ( !v261 || (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v261 + 224i64))(v261) )
        {
          v266 = G_GetEntityPlayerStateConst(_RDI);
          if ( !v266 )
            goto LABEL_246;
          number = _R15->s.number;
          v264 = v266->movingPlatforms.m_movingPlatformEntity < number;
          if ( v266->movingPlatforms.m_movingPlatformEntity != number )
            goto LABEL_246;
        }
        else
        {
          v265 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v261 + 128i64))(v261);
          v264 = 0;
          if ( !v265 )
            goto LABEL_246;
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+134h]
        vsubss  xmm1, xmm0, dword ptr [r15+134h]
        vmovss  xmm2, dword ptr [rdi+130h]
        vsubss  xmm0, xmm2, dword ptr [r15+130h]
        vmovss  xmm2, dword ptr [rdi+138h]
        vmulss  xmm3, xmm1, xmm13
        vmulss  xmm1, xmm0, xmm12
        vsubss  xmm0, xmm2, dword ptr [r15+138h]
        vaddss  xmm4, xmm3, xmm1
        vmulss  xmm1, xmm0, xmm14
        vaddss  xmm3, xmm4, xmm1
        vcomiss xmm3, xmm10
      }
      if ( !v264 )
        goto LABEL_245;
LABEL_246:
      v204 = 655442;
LABEL_247:
      ++v203;
    }
    while ( v203 < collectedEnts.count );
  }
  __asm
  {
    vmovaps xmm14, [rsp+3290h+var_B0]
    vmovaps xmm13, [rsp+3290h+var_A0]
    vmovaps xmm12, [rsp+3290h+var_90]
  }
  _R11 = &v322;
  __asm { vmovaps xmm10, xmmword ptr [r11-50h] }
}

/*
==============
G_Vehicle_TouchEntities_Player
==============
*/
bool G_Vehicle_TouchEntities_Player(Physics_WorldId worldId, const BgVehiclePhysics *vehObj, gentity_s *playerEnt, bool *outPerformCapsuleTest)
{
  int m_entityNumber; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  char v20; 
  char v21; 
  int m_driverEntNum; 
  gentity_s *GEntity; 
  char v38; 
  char v39; 
  unsigned int v49; 
  hknpShape *ShapeCapsuleUpAxis; 
  HavokPhysics_CollisionQueryResult *ResultContainer; 
  HavokPhysics_CollisionQueryResult *v54; 
  bool result; 
  int optionalInplaceBufferSize; 
  int v60; 
  int v61; 
  int v62; 
  Physics_GetClosestPointsExtendedData extendedData; 
  vec3_t point; 

  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1973, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  if ( (!playerEnt || playerEnt->s.eType != ET_PLAYER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1974, ASSERT_TYPE_ASSERT, "(playerEnt && playerEnt->s.eType == ET_PLAYER)", (const char *)&queryFormat, "playerEnt && playerEnt->s.eType == ET_PLAYER") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+128h+var_48], xmm6
    vmovaps [rsp+128h+var_78], xmm9
    vmovaps [rsp+128h+var_98], xmm11
  }
  if ( !vehObj )
    goto LABEL_38;
  if ( !playerEnt )
    goto LABEL_38;
  if ( playerEnt->s.eType != ET_PLAYER )
    goto LABEL_38;
  m_entityNumber = vehObj->m_entityNumber;
  if ( m_entityNumber == 2047 )
    goto LABEL_38;
  _RBP = G_GetGEntity(m_entityNumber);
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1986, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  Instance = G_PhysicsObject_GetInstance(worldId, _RBP);
  if ( Instance == -1 )
    goto LABEL_38;
  RigidBodyID = Physics_GetRigidBodyID(worldId, Instance, 0);
  if ( RigidBodyID == 0xFFFFFF )
    goto LABEL_38;
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapHeight, "bg_vehHeliPlayerCapHeight");
  __asm { vmulss  xmm11, xmm0, cs:__real@3f000000 }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapRadius, "bg_vehHeliPlayerCapRadius");
  __asm
  {
    vmovss  xmm1, cs:__real@3a83126f
    vcomiss xmm11, xmm1
    vmovaps xmm9, xmm0
  }
  if ( v20 | v21 )
    goto LABEL_38;
  __asm { vcomiss xmm0, xmm1 }
  if ( v20 | v21 )
    goto LABEL_38;
  __asm { vmovsd  xmm1, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin }
  m_driverEntNum = vehObj->m_driverEntNum;
  point.v[2] = vec3_origin.v[2];
  __asm
  {
    vmovsd  qword ptr [rsp+128h+point], xmm1
    vxorps  xmm6, xmm6, xmm6
  }
  if ( m_driverEntNum != 2047 )
  {
    GEntity = G_GetGEntity(m_driverEntNum);
    if ( GEntity )
    {
      if ( GEntity->client )
      {
        __asm
        {
          vmovaps [rsp+128h+var_58], xmm7
          vmovss  xmm7, dword ptr [rax+5474h]
          vmovaps [rsp+128h+var_68], xmm8
          vmovss  xmm8, dword ptr [rax+5478h]
          vmovaps [rsp+128h+var_88], xmm10
          vmovss  xmm10, dword ptr [rax+5470h]
          vmovss  [rsp+128h+var_E8], xmm10
        }
        if ( (v60 & 0x7F800000) == 2139095040 )
          goto LABEL_42;
        __asm { vmovss  [rsp+128h+var_E8], xmm7 }
        if ( (v61 & 0x7F800000) == 2139095040 )
          goto LABEL_42;
        __asm { vmovss  [rsp+128h+var_E8], xmm8 }
        if ( (v62 & 0x7F800000) == 2139095040 )
        {
LABEL_42:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2030, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+130h]
          vsubss  xmm1, xmm0, xmm10
          vmovss  dword ptr [rsp+128h+point], xmm1
          vmovss  xmm2, dword ptr [rbp+134h]
          vsubss  xmm0, xmm2, xmm7
          vmovss  dword ptr [rsp+128h+point+4], xmm0
          vmovss  xmm1, dword ptr [rbp+138h]
          vsubss  xmm2, xmm1, xmm8
          vmovss  dword ptr [rsp+128h+point+8], xmm2
        }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehPlayerCollAhead, "bg_vehPlayerCollAhead");
        __asm
        {
          vmulss  xmm2, xmm0, dword ptr [rsp+128h+point]
          vaddss  xmm4, xmm2, dword ptr [rbx+118h]
          vcomiss xmm4, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
          vmulss  xmm2, xmm0, dword ptr [rsp+128h+point+4]
          vmulss  xmm0, xmm0, dword ptr [rsp+128h+point+8]
          vaddss  xmm3, xmm2, dword ptr [rbx+11Ch]
          vaddss  xmm2, xmm0, dword ptr [rbx+120h]
          vmovaps xmm10, [rsp+128h+var_88]
          vmovaps xmm8, [rsp+128h+var_68]
          vmovaps xmm7, [rsp+128h+var_58]
          vmovss  dword ptr [rsp+128h+point+8], xmm2
          vmovss  dword ptr [rsp+128h+point], xmm4
          vmovss  dword ptr [rsp+128h+point+4], xmm3
        }
        if ( v38 | v39 )
          goto LABEL_33;
        __asm { vcomiss xmm4, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm }
        if ( !v38 )
          goto LABEL_33;
        __asm { vcomiss xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm }
        if ( v38 | v39 )
          goto LABEL_33;
        __asm { vcomiss xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm }
        if ( !v38 )
          goto LABEL_33;
        __asm { vcomiss xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+8; clipMap_t cm }
        if ( v38 | v39 )
          goto LABEL_33;
        __asm { vcomiss xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+8; clipMap_t cm }
        if ( !v38 )
        {
LABEL_33:
          __asm
          {
            vmovss  dword ptr [rsp+128h+point], xmm6
            vmovss  dword ptr [rsp+128h+point+4], xmm6
            vmovss  dword ptr [rsp+128h+point+8], xmm6
          }
        }
      }
    }
  }
  v49 = Physics_GetThreadId() + 28 * worldId;
  if ( v49 > 0xDF )
    goto LABEL_38;
  __asm
  {
    vmovaps xmm3, xmm9; radius
    vmovaps xmm2, xmm11; halfHeight
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(worldId, &vec3_origin, *(float *)&_XMM2, *(float *)&_XMM3, g_player_capsule_shape_buffer[v49], 432, Temporary);
  if ( !ShapeCapsuleUpAxis )
    goto LABEL_38;
  extendedData.contents = -1;
  extendedData.simplify = 0;
  __asm { vmovss  [rsp+128h+extendedData.collisionBuffer], xmm6 }
  extendedData.ignoreBodies = NULL;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  ResultContainer = PhysicsQuery_GetResultContainer(PQ_TYPE_LEGACYANY, v49);
  v54 = ResultContainer;
  if ( !ResultContainer )
  {
LABEL_38:
    *outPerformCapsuleTest = 1;
    result = 1;
  }
  else
  {
    HavokPhysics_CollisionQueryResult::Reset(ResultContainer, 1);
    __asm { vmovss  [rsp+128h+optionalInplaceBufferSize], xmm6 }
    Physics_GetClosestPoints(worldId, RigidBodyID, ShapeCapsuleUpAxis, &point, &quat_identity, *(float *)&optionalInplaceBufferSize, &extendedData, v54);
    result = HavokPhysics_CollisionQueryResult::HasHit(v54);
  }
  __asm
  {
    vmovaps xmm11, [rsp+128h+var_98]
    vmovaps xmm9, [rsp+128h+var_78]
    vmovaps xmm6, [rsp+128h+var_48]
  }
  return result;
}

/*
==============
G_Vehicle_TransformInputCamRelative
==============
*/
void G_Vehicle_TransformInputCamRelative(const vec3_t *viewAngles, const vec3_t *vehicleAngles, const vec3_t *input, vec3_t *output)
{
  vec3_t angles; 
  vec3_t v57; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  char v60; 
  tmat33_t<vec3_t> in; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = output;
  _RBX = (char *)input;
  _R14 = vehicleAngles;
  _RSI = viewAngles;
  if ( input == output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5971, ASSERT_TYPE_ASSERT, "( &input != &output )", (const char *)&queryFormat, "&input != &output") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vxorps  xmm10, xmm10, xmm10
    vmovss  dword ptr [rsp+140h+angles+4], xmm0
    vmovss  dword ptr [rsp+140h+angles], xmm10
    vmovss  dword ptr [rsp+140h+angles+8], xmm10
  }
  AnglesToAxis(&angles, &axis);
  if ( _RBX == &v60 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+8]
    vmovss  xmm6, dword ptr [rbx+4]
    vmovss  xmm5, dword ptr [rbx]
    vmulss  xmm1, xmm7, dword ptr [rsp+140h+axis+18h]
    vmulss  xmm3, xmm5, dword ptr [rsp+140h+axis]
    vmulss  xmm2, xmm6, dword ptr [rsp+140h+axis+0Ch]
    vmulss  xmm0, xmm7, dword ptr [rsp+140h+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rsp+140h+axis+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+140h+axis+10h]
    vaddss  xmm9, xmm4, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+140h+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm5, dword ptr [rsp+140h+axis+8]
    vaddss  xmm8, xmm4, xmm1
    vmulss  xmm1, xmm6, dword ptr [rsp+140h+axis+14h]
    vaddss  xmm4, xmm3, xmm1
    vaddss  xmm7, xmm4, xmm0
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rsp+140h+var_100+4], xmm0
    vmovss  dword ptr [rsp+140h+var_100], xmm10
    vmovss  dword ptr [rsp+140h+var_100+8], xmm10
  }
  AnglesToAxis(&v57, &in);
  MatrixInverse(&in, &out);
  __asm
  {
    vmulss  xmm2, xmm8, dword ptr [rbp+40h+out+0Ch]
    vmulss  xmm1, xmm9, dword ptr [rsp+140h+out]
    vmulss  xmm0, xmm7, dword ptr [rbp+40h+out+18h]
    vmulss  xmm4, xmm8, dword ptr [rbp+40h+out+14h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm2, xmm8, dword ptr [rbp+40h+out+10h]
    vmulss  xmm1, xmm7, dword ptr [rbp+40h+out+1Ch]
    vaddss  xmm6, xmm3, xmm0
    vmulss  xmm0, xmm9, dword ptr [rsp+140h+out+4]
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm2, xmm9, dword ptr [rbp+40h+out+8]
    vaddss  xmm5, xmm3, xmm1
    vmulss  xmm1, xmm7, dword ptr [rbp+40h+out+20h]
    vaddss  xmm3, xmm4, xmm2
    vaddss  xmm2, xmm3, xmm1
    vmovss  dword ptr [rdi+8], xmm2
    vmovss  dword ptr [rdi], xmm6
    vmovss  dword ptr [rdi+4], xmm5
  }
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
G_Vehicle_TrophyTestMissile
==============
*/
void G_Vehicle_TrophyTestMissile(gentity_s *missileEnt, const vec3_t *start, const vec3_t *end)
{
  unsigned int v14; 
  __int64 v15; 
  unsigned int trophyReloadEndTime; 
  vec3_t normalOverride; 

  _R12 = start;
  _R14 = missileEnt;
  _R15 = end;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Vehicle_TrophyTestMissile");
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5712, ASSERT_TYPE_ASSERT, "( missileEnt )", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  if ( G_Missile_IsGrenade(_R14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5713, ASSERT_TYPE_ASSERT, "( !G_Missile_IsGrenade( missileEnt ) )", (const char *)&queryFormat, "!G_Missile_IsGrenade( missileEnt )") )
    __debugbreak();
  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  v14 = 0;
  __asm { vmovaps [rsp+0F8h+var_48], xmm7 }
  v15 = 0i64;
  __asm
  {
    vmovaps [rsp+0F8h+var_58], xmm8
    vmovaps [rsp+0F8h+var_68], xmm9
    vmovaps [rsp+0F8h+var_78], xmm10
    vmovaps [rsp+0F8h+var_88], xmm11
  }
  while ( 1 )
  {
    _RSI = s_vehicleServers[v15].ent;
    if ( _RSI )
    {
      _RAX = G_Vehicle_GetServerDef(s_vehicleServers[v15].defIndex);
      _RBP = _RAX;
      if ( _RAX->trophyEnabled )
      {
        if ( s_vehicleServers[v15].trophyAmmo )
        {
          trophyReloadEndTime = s_vehicleServers[v15].trophyReloadEndTime;
          if ( level.time >= (int)trophyReloadEndTime )
          {
            __asm
            {
              vmovss  xmm6, dword ptr [rsi+134h]
              vsubss  xmm0, xmm6, dword ptr [r14+224h]
              vmovss  xmm5, dword ptr [rsi+130h]
              vsubss  xmm2, xmm5, dword ptr [r14+220h]
              vmovss  xmm7, dword ptr [rsi+138h]
              vsubss  xmm3, xmm7, dword ptr [r14+228h]
              vmovss  xmm4, dword ptr [rax+0CC0h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vcomiss xmm3, xmm0
            }
            if ( level.time >= trophyReloadEndTime )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rax+0CBCh]
                vmovss  xmm9, dword ptr [r15+4]
                vmovss  xmm8, dword ptr [r15]
                vmovss  xmm10, dword ptr [r15+8]
                vsubss  xmm1, xmm6, xmm9
                vmulss  xmm2, xmm1, xmm1
                vsubss  xmm3, xmm5, xmm8
                vmulss  xmm11, xmm0, xmm0
                vmulss  xmm1, xmm3, xmm3
                vsubss  xmm4, xmm7, xmm10
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm3, xmm0
                vcomiss xmm2, xmm11
              }
              if ( level.time <= trophyReloadEndTime )
                break;
            }
          }
        }
      }
    }
    ++v14;
    ++v15;
    if ( v14 >= 0x80 )
      goto LABEL_20;
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r12+4]
    vmovaps [rsp+0F8h+var_98], xmm12
    vmovss  xmm12, dword ptr [r12]
    vsubss  xmm4, xmm9, xmm3
    vmulss  xmm1, xmm4, xmm4
    vsubss  xmm8, xmm8, xmm12
    vmovaps [rsp+0F8h+var_A8], xmm13
    vmovss  xmm13, dword ptr [r12+8]
    vsubss  xmm9, xmm10, xmm13
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm10, xmm2, xmm1
    vcomiss xmm10, cs:__real@3c23d70a
  }
  if ( level.time > trophyReloadEndTime )
  {
    __asm
    {
      vsubss  xmm3, xmm3, xmm6
      vmulss  xmm1, xmm3, xmm4
      vsubss  xmm5, xmm12, xmm5
      vmulss  xmm0, xmm5, xmm8
      vaddss  xmm2, xmm1, xmm0
      vsubss  xmm6, xmm13, xmm7
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm9
      vaddss  xmm7, xmm2, xmm1
      vmulss  xmm3, xmm3, xmm3
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsubss  xmm0, xmm2, xmm11
      vmulss  xmm3, xmm0, xmm10
      vmulss  xmm4, xmm7, xmm7
      vsubss  xmm5, xmm4, xmm3
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm5, xmm1
    }
    if ( level.time >= trophyReloadEndTime )
    {
      __asm
      {
        vxorps  xmm1, xmm7, cs:__xmm@80000000800000008000000080000000
        vsqrtss xmm0, xmm5, xmm5
        vsubss  xmm1, xmm1, xmm0
        vdivss  xmm5, xmm1, xmm10
        vmulss  xmm0, xmm8, xmm5
        vaddss  xmm1, xmm0, xmm12
        vmovss  dword ptr [r14+130h], xmm1
        vmovss  xmm0, dword ptr [r15+4]
        vsubss  xmm1, xmm0, dword ptr [r12+4]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [r12+4]
        vmovss  dword ptr [r14+134h], xmm3
        vmovss  xmm0, dword ptr [r15+8]
        vsubss  xmm1, xmm0, dword ptr [r12+8]
        vmulss  xmm2, xmm1, xmm5
        vaddss  xmm3, xmm2, dword ptr [r12+8]
        vmovss  dword ptr [r14+138h], xmm3
      }
    }
  }
  G_SetOrigin(_R14, &_R14->r.currentOrigin, 1, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+130h]
    vsubss  xmm7, xmm0, dword ptr [rsi+130h]
    vmovss  xmm0, dword ptr [r14+134h]
    vmovss  dword ptr [rsp+0F8h+normalOverride], xmm7
    vsubss  xmm6, xmm0, dword ptr [rsi+134h]
    vmovss  xmm0, dword ptr [r14+138h]
    vmovss  dword ptr [rsp+0F8h+normalOverride+4], xmm6
    vsubss  xmm5, xmm0, dword ptr [rsi+138h]
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm7, xmm2
    vmovss  dword ptr [rsp+0F8h+normalOverride], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+0F8h+normalOverride+8], xmm0
    vmovss  dword ptr [rsp+0F8h+normalOverride+4], xmm1
  }
  G_Missile_ExplodeInternal(_R14, EXPLOSION_TYPE_TROPHY, &normalOverride, _RSI);
  --s_vehicleServers[v15].trophyAmmo;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0CC8h]
    vmulss  xmm1, xmm0, cs:__real@c47a0000
    vmovaps xmm13, [rsp+0F8h+var_A8]
    vmovaps xmm12, [rsp+0F8h+var_98]
    vcvttss2si eax, xmm1
  }
  s_vehicleServers[v15].trophyReloadEndTime = level.time - _EAX;
LABEL_20:
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovaps xmm11, [rsp+0F8h+var_88]
    vmovaps xmm10, [rsp+0F8h+var_78]
    vmovaps xmm9, [rsp+0F8h+var_68]
    vmovaps xmm8, [rsp+0F8h+var_58]
    vmovaps xmm7, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_38]
  }
}

/*
==============
G_Vehicle_TurretFireType
==============
*/
__int64 G_Vehicle_TurretFireType(const gentity_s *vehEnt)
{
  const VehicleDef *ServerDef; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6299, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6300, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehEnt->vehicle->defIndex);
  if ( ServerDef->turretWeapon )
    return (unsigned int)ServerDef->turretFireType;
  else
    return 0i64;
}

/*
==============
G_Vehicle_UnlinkPlayer
==============
*/
void G_Vehicle_UnlinkPlayer(gentity_s *vehEnt, gentity_s *player)
{
  gclient_s *client; 
  int v10; 
  unsigned __int16 number; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  int detach; 
  GUtils *Utils; 
  GVehicles *VehicleSystem; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  vec3_t outPos; 
  int v30[4]; 

  _RBX = vehEnt;
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3871, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3872, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3875, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  _R14 = _RBX->vehicle;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3878, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3852, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  _RAX = player->client;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1D8h]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm1, dword ptr [rax+1DCh]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+var_54], xmm1
    vmovss  [rsp+0A8h+var_50], xmm0
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, player, (const vec3_t *)v30);
  v10 = _RBX->s.lerp.u.anonymous.data[1];
  if ( (v10 & 0x10000000) != 0 )
  {
    _RBX->s.lerp.u.anonymous.data[1] = v10 & 0xEFFFFFFF;
    EntHandle::setEnt(&_RBX->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
  }
  else if ( client->ps.vehicleState.entity == _RBX->s.number )
  {
    EntHandle::setEnt(&_RBX->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
    BG_InitPlayerstateVehicle(&client->ps);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0xBu);
  }
  else
  {
    number = player->r.ownerNum.number;
    if ( !number )
      goto LABEL_37;
    v12 = number;
    v13 = number - 1;
    if ( v13 >= 0x800 )
    {
      LODWORD(v26) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v14 = v12 - 1;
    if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v14] )
    {
      LODWORD(v27) = player->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v27) )
        __debugbreak();
    }
    if ( !player->r.ownerNum.number )
    {
LABEL_37:
      LODWORD(v27) = player->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3909, ASSERT_TYPE_ASSERT, "(player->r.ownerNum.isDefined())", "%s\n\tVEH_UnlinkPlayer: Player %i doesn't have an owner, when unlinking from vehicle %i\n", "player->r.ownerNum.isDefined()", v27, _RBX->s.number) )
        __debugbreak();
    }
    v15 = player->r.ownerNum.number;
    if ( (unsigned int)(v15 - 1) >= 0x7FF )
    {
      LODWORD(v27) = 2047;
      LODWORD(v26) = v15 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v16 = player->r.ownerNum.number;
    if ( (unsigned int)(v16 - 1) >= 0x800 )
    {
      LODWORD(v27) = 2048;
      LODWORD(v26) = v16 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v17 = v16 - 1;
    if ( g_entities[v17].r.isInUse != g_entityIsInUse[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v17] )
    {
      LODWORD(v27) = player->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v27) )
        __debugbreak();
    }
    if ( &g_entities[player->r.ownerNum.number - 1] != _RBX )
    {
      LODWORD(v28) = player->s.number;
      LODWORD(v27) = _RBX->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3910, ASSERT_TYPE_ASSERT, "(player->r.ownerNum.ent() == vehEnt)", "%s\n\tVEH_UnlinkPlayer: Vehicle %i is not player %i 's owner\n", "player->r.ownerNum.ent() == vehEnt", v27, v28) )
        __debugbreak();
    }
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    {
      LODWORD(v28) = _RBX->s.number;
      LODWORD(v27) = player->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3911, ASSERT_TYPE_ASSERT, "(client->ps.eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE ))", "%s\n\tVEH_UnlinkPlayer: Player %i is not using a vehicle (trying to unlink from vehicle %i)\n", "client->ps.eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE )", v27, v28) )
        __debugbreak();
    }
    G_EntUnlink(player);
    detach = _R14->boneIndex.detach;
    if ( detach >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(_RBX, detach, &outPos);
    }
    else
    {
      Com_PrintWarning(15, "VEH_UnlinkPlayer: Warning - no [tag_detach] on vehicle\n");
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+130h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  dword ptr [rsp+0A8h+outPos+4], xmm1
        vmovss  dword ptr [rsp+0A8h+outPos], xmm0
        vmovss  xmm0, dword ptr [r14+134h]
        vaddss  xmm2, xmm0, dword ptr [r14+128h]
        vaddss  xmm1, xmm2, dword ptr [rbx+138h]
        vmovss  dword ptr [rsp+0A8h+outPos+8], xmm1
      }
    }
    if ( _R14->drivingState == VEH_DRIVE_PLAYER )
      _R14->drivingState = VEH_DRIVE_NONE;
    Utils = GUtils::GetUtils();
    Utils->SetPlayerOrigin(Utils, player, &outPos, 1, 1);
    _RBX->r.currentAngles.v[0] = 0.0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&_RBX->s.lerp.eFlags, ACTIVE, 0xBu);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_spValue, 0x24u);
    VehicleSystem = GVehicles::GetVehicleSystem();
    VehicleSystem->ResetMouseSensitivity(VehicleSystem);
    EntHandle::setEnt(&_RBX->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    player->client->linkAnglesFrac = 0.0;
    client->ps.viewlocked_entNum = 2047;
    GScr_AddEntity(player);
    GScr_Notify(_R14->ent, scr_const.vehicle_dismount, 1u);
  }
}

/*
==============
G_Vehicle_UpdateAim
==============
*/
void G_Vehicle_UpdateAim(gentity_s *ent)
{
  __int64 targetEnt; 
  int barrel; 
  int turret_base; 
  gentity_s *v27; 
  GVehicles *VehicleSystem; 
  char v82; 
  char v83; 
  int v119; 
  const gentity_s *v120; 
  scr_string_t turret_no_vis; 
  vec3_t vec; 
  vec3_t end; 
  vec3_t v1; 
  vec3_t v3; 
  vec3_t outPos; 
  vec3_t angles; 
  vec3_t v2; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> outTagMat; 

  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2659, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RDI = _RBX->vehicle;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2662, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _R14 = G_Vehicle_GetServerDef(_RDI->defIndex);
  if ( !_RDI->hasTarget || _RBX->health <= 0 )
  {
    _RDI->turret.turretMoving = 0;
    return;
  }
  targetEnt = _RDI->targetEnt;
  if ( (_DWORD)targetEnt == 2047 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+68Ch]
      vmovss  dword ptr [rsp+1E0h+end], xmm0
      vmovss  xmm1, dword ptr [rdi+690h]
      vmovss  dword ptr [rsp+1E0h+end+4], xmm1
      vmovss  xmm0, dword ptr [rdi+694h]
      vmovss  dword ptr [rsp+1E0h+end+8], xmm0
    }
    _RSI = NULL;
  }
  else
  {
    _RSI = &g_entities[targetEnt];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+130h]
      vaddss  xmm1, xmm0, dword ptr [rdi+698h]
      vmovss  dword ptr [rsp+1E0h+end], xmm1
      vmovss  xmm2, dword ptr [rsi+134h]
      vaddss  xmm0, xmm2, dword ptr [rdi+69Ch]
      vmovss  dword ptr [rsp+1E0h+end+4], xmm0
      vmovss  xmm1, dword ptr [rsi+138h]
      vaddss  xmm2, xmm1, dword ptr [rdi+6A0h]
      vmovss  dword ptr [rsp+1E0h+end+8], xmm2
    }
  }
  barrel = _RDI->boneIndex.barrel;
  if ( barrel >= 0 )
  {
    __asm
    {
      vmovaps [rsp+1E0h+var_30], xmm6
      vmovaps [rsp+1E0h+var_40], xmm7
      vmovaps [rsp+1E0h+var_50], xmm8
      vmovaps [rsp+1E0h+var_60], xmm9
      vmovaps [rsp+1E0h+var_70], xmm10
      vmovaps [rsp+1E0h+var_80], xmm11
    }
    G_Utils_DObjGetWorldBoneIndexPos(_RBX, barrel, &outPos);
    turret_base = _RDI->boneIndex.turret_base;
    if ( turret_base == -1 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+108h]
        vmovss  dword ptr [rbp+0E0h+angles], xmm0
        vmovss  xmm1, dword ptr [rdi+10Ch]
        vmovss  dword ptr [rbp+0E0h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rdi+110h]
        vmovss  dword ptr [rbp+0E0h+angles+8], xmm0
      }
    }
    else
    {
      G_Utils_DObjGetWorldBoneIndexMatrix(_RBX, turret_base, &outTagMat);
      AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &angles);
    }
    __asm { vxorps  xmm9, xmm9, xmm9 }
    if ( EntHandle::isDefined(&_RBX->r.ownerNum) && _RDI->targetEnt == 2047 )
    {
      v27 = EntHandle::ent(&_RBX->r.ownerNum);
      if ( !v27->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2707, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
        __debugbreak();
      VehicleSystem = GVehicles::GetVehicleSystem();
      VehicleSystem->GetVehicleViewlockAngles(VehicleSystem, v27, _R14, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+68Ch]
        vsubss  xmm6, xmm0, dword ptr [rbp+0E0h+outPos]
        vmovss  xmm8, cs:__real@3f800000
        vmovss  dword ptr [rsp+1E0h+vec], xmm6
        vmovss  xmm0, dword ptr [rdi+690h]
        vsubss  xmm5, xmm0, dword ptr [rbp+0E0h+outPos+4]
        vmovss  dword ptr [rsp+1E0h+vec+4], xmm5
        vmovss  xmm0, dword ptr [rdi+694h]
        vsubss  xmm4, xmm0, dword ptr [rbp+0E0h+outPos+8]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rsp+1E0h+vec], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+1E0h+vec+8], xmm0
        vmovss  dword ptr [rsp+1E0h+vec+4], xmm1
      }
      vectoangles(&vec, &v1);
      _RAX = v27->client;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+1DCh]
        vmovss  dword ptr [rsp+1E0h+v1+4], xmm0
        vmovss  dword ptr [rsp+1E0h+v1+8], xmm9
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1E0h+end]
        vsubss  xmm4, xmm0, dword ptr [rbp+0E0h+outPos]
        vmovss  xmm1, dword ptr [rsp+1E0h+end+4]
        vsubss  xmm5, xmm1, dword ptr [rbp+0E0h+outPos+4]
        vmovss  xmm0, dword ptr [rsp+1E0h+end+8]
        vsubss  xmm6, xmm0, dword ptr [rbp+0E0h+outPos+8]
        vmovss  xmm8, cs:__real@3f800000
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
        vdivss  xmm2, xmm8, xmm0
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsp+1E0h+vec], xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rsp+1E0h+vec+8], xmm0
        vmovss  dword ptr [rsp+1E0h+vec+4], xmm1
      }
      vectoangles(&vec, &v1);
    }
    AnglesToAxis(&v1, &axis);
    AnglesToAxis(&angles, &in);
    MatrixTranspose(&in, &out);
    MatrixMultiply(&axis, &out, &in);
    AxisToAngles(&in, &v1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6Ch]
      vmovss  xmm1, dword ptr [rbx+70h]
      vmovss  dword ptr [rbp+0E0h+v2], xmm0
      vmovss  dword ptr [rbp+0E0h+v2+4], xmm1
      vmovss  dword ptr [rbp+0E0h+v2+8], xmm9
    }
    AnglesSubtract(&v1, &v2, &v3);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+v3]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  dword ptr [rsp+1E0h+v3], xmm0
      vmovss  xmm0, dword ptr [rsp+1E0h+v3+4]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovss  dword ptr [rsp+1E0h+v3+4], xmm0
    }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm2, dword ptr [r14+0CA0h]; rate
      vmovss  xmm1, dword ptr [rbp+0E0h+v2]; cur
      vmovaps xmm3, xmm0; deltaTime
      vmovss  xmm0, dword ptr [rsp+1E0h+v1]; tgt
    }
    *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm2, dword ptr [r14+0CA0h]; rate
      vmovss  xmm1, dword ptr [rbp+0E0h+v2+4]; cur
      vmovaps xmm3, xmm0; deltaTime
      vmovss  xmm0, dword ptr [rsp+1E0h+v1+4]; tgt
    }
    *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vmovss  xmm6, dword ptr [rbx+6Ch]
      vmovss  dword ptr [rbx+70h], xmm0
      vmovss  xmm1, dword ptr [r14+0C88h]
      vxorps  xmm2, xmm1, xmm7
      vcomiss xmm6, xmm2
      vmovaps xmm11, xmm0
    }
    if ( v82 )
    {
      __asm { vmovss  dword ptr [rbx+6Ch], xmm2 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+0C8Ch]
        vcomiss xmm6, xmm0
      }
      if ( v82 | v83 )
        goto LABEL_28;
      __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
    }
    GScr_Notify(_RBX, scr_const.turret_pitch_clamped, 0);
LABEL_28:
    __asm
    {
      vmovss  xmm0, dword ptr [r14+0C84h]
      vmovss  xmm1, dword ptr [rbx+70h]
      vxorps  xmm2, xmm0, xmm7
      vcomiss xmm1, xmm2
    }
    if ( v82 )
    {
      __asm { vmovss  dword ptr [rbx+70h], xmm2 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+0C80h]
        vcomiss xmm1, xmm0
      }
      if ( v82 | v83 )
        goto LABEL_33;
      __asm { vmovss  dword ptr [rbx+70h], xmm0 }
    }
    GScr_Notify(_RBX, scr_const.turret_yaw_clamped, 0);
LABEL_33:
    __asm
    {
      vsubss  xmm0, xmm6, dword ptr [rbx+6Ch]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vmovaps xmm6, [rsp+1E0h+var_30]
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm10, xmm0, cs:__real@43b40000
      vsubss  xmm0, xmm11, dword ptr [rbx+70h]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vmovaps xmm11, [rsp+1E0h+var_80]
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vmovss  xmm2, cs:__real@40000000
      vroundss xmm3, xmm7, xmm0, 1
      vmovss  xmm0, dword ptr [rsp+1E0h+v3]
      vcomiss xmm0, xmm2
      vmovaps xmm7, [rsp+1E0h+var_40]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm3, xmm1, cs:__real@43b40000
    }
    if ( !v82 )
    {
      __asm { vucomiss xmm10, xmm9 }
      if ( v83 )
        goto LABEL_37;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+v3+4]
      vcomiss xmm0, xmm2
    }
    if ( v82 )
      goto LABEL_38;
    __asm { vucomiss xmm3, xmm9 }
    if ( !v83 )
    {
LABEL_38:
      v82 = 0;
      if ( _RDI->turret.turretMoving )
      {
        GScr_Notify(_RBX, scr_const.turret_rotate_stopped, 0);
        _RDI->turret.turretMoving = 0;
      }
    }
    else
    {
LABEL_37:
      _RDI->turret.turretMoving = 1;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+v3]
      vcomiss xmm0, xmm8
      vmovaps xmm10, [rsp+1E0h+var_70]
      vmovaps xmm9, [rsp+1E0h+var_60]
    }
    if ( !v82 )
      goto LABEL_48;
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1E0h+v3+4]
      vcomiss xmm0, xmm8
    }
    if ( v82 )
    {
      GScr_Notify(_RBX, scr_const.turret_on_target, 0);
      if ( _RSI )
      {
        v119 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &outPos, &end, &bounds_origin, _RBX->s.number, _RSI->s.number, 2049);
        v120 = _RBX;
        if ( v119 )
          turret_no_vis = scr_const.turret_no_vis;
        else
          turret_no_vis = scr_const.turret_on_vistarget;
        goto LABEL_45;
      }
    }
    else
    {
LABEL_48:
      GScr_Notify(_RBX, scr_const.turret_not_on_target, 0);
    }
    turret_no_vis = scr_const.turret_no_vis;
    v120 = _RBX;
LABEL_45:
    GScr_Notify(v120, turret_no_vis, 0);
    __asm { vmovaps xmm8, [rsp+1E0h+var_50] }
  }
}

/*
==============
G_Vehicle_UpdateAvoidanceForAllVehicles
==============
*/

void G_Vehicle_UpdateAvoidanceForAllVehicles(void)
{
  VelocityObstacle3Manager::CalculateAllSafeVelocities();
}

/*
==============
G_Vehicle_UpdateBody
==============
*/
void G_Vehicle_UpdateBody(Vehicle *veh)
{
  char v14; 
  char v15; 
  VehicleType type; 
  float targetRoll; 
  float targetPitch; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2901, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2902, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) )
  {
    _RDI = _RBX->ent;
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm6
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
    }
    _RSI = G_Vehicle_GetServerDef(_RBX->defIndex);
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+6B8h]
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
      vmovaps xmm8, xmm0
    }
    if ( !(v14 | v15) )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+6BCh]
        vmulss  xmm0, xmm1, cs:__real@3c8efa35; X
      }
      *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm1, xmm2, dword ptr [rbx+6B0h]
        vmovss  dword ptr [rdi+60h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rbx+6B4h]
        vmovss  dword ptr [rdi+64h], xmm0
        vmovss  xmm1, dword ptr [rbx+6B8h]
        vmulss  xmm0, xmm8, cs:__real@44340000
        vsubss  xmm2, xmm1, xmm8
        vaddss  xmm1, xmm0, dword ptr [rbx+6BCh]
        vmovss  dword ptr [rbx+6BCh], xmm1
        vmovss  dword ptr [rbx+6B8h], xmm2
      }
    }
    type = _RSI->type;
    __asm { vmovaps [rsp+98h+var_58], xmm9 }
    if ( type == VEH_BOAT )
    {
      G_Vehicle_BoatGetRockingAngles(_RBX, &targetPitch, &targetRoll);
      type = _RSI->type;
      __asm
      {
        vmovss  xmm4, [rsp+98h+targetRoll]
        vmovss  xmm9, [rsp+98h+targetPitch]
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm4, xmm4, xmm4
      }
    }
    if ( type != VEH_HELICOPTER && type != VEH_PLANE )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+144h]
        vcomiss xmm1, xmm7
        vmovaps [rsp+98h+var_68], xmm10
      }
      if ( (unsigned __int8)type <= VEH_PLANE )
      {
        __asm { vmovss  xmm3, dword ptr [rbx+148h] }
      }
      else
      {
        if ( type == VEH_BOAT )
        {
          __asm { vcomiss xmm7, dword ptr [rbx+15Ch] }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+15Ch]
            vmulss  xmm7, xmm0, dword ptr [rsi+78h]
          }
        }
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+148h]
          vandps  xmm0, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm2, xmm0, dword ptr [rsi+88h]
          vmulss  xmm0, xmm1, dword ptr [rsi+80h]
          vaddss  xmm1, xmm0, xmm7
          vaddss  xmm7, xmm2, xmm1
        }
      }
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rsi+84h]
        vmovss  xmm0, dword ptr [rbx+160h]
        vmulss  xmm2, xmm0, dword ptr [rsi+7Ch]
        vmovss  xmm0, dword ptr [rdi+64h]
        vmovss  xmm6, dword ptr [rbx+178h]
        vaddss  xmm3, xmm2, xmm1
        vsubss  xmm2, xmm0, xmm4
        vmulss  xmm1, xmm2, dword ptr [rsi+90h]
        vmulss  xmm0, xmm6, dword ptr [rsi+98h]
        vmovss  xmm4, dword ptr [rbx+174h]
        vaddss  xmm1, xmm1, xmm0
        vmovss  xmm0, dword ptr [rdi+60h]
        vsubss  xmm5, xmm3, xmm1
        vsubss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, dword ptr [rsi+8Ch]
        vmulss  xmm0, xmm4, dword ptr [rsi+94h]
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm3, xmm2, xmm9
        vsubss  xmm1, xmm3, xmm0
        vsubss  xmm2, xmm1, xmm7
        vmulss  xmm3, xmm2, xmm8
        vaddss  xmm4, xmm3, xmm4
        vmovss  dword ptr [rbx+174h], xmm4
        vmulss  xmm2, xmm4, xmm8
        vmulss  xmm0, xmm5, xmm8
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rbx+178h], xmm1
        vaddss  xmm0, xmm2, dword ptr [rdi+60h]
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm10, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+60h], xmm10
        vmulss  xmm0, xmm8, dword ptr [rbx+178h]
        vaddss  xmm1, xmm0, dword ptr [rdi+64h]
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm2
        vroundss xmm3, xmm7, xmm1, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+64h], xmm1
        vmovss  xmm2, dword ptr [rsi+6Ch]
        vcomiss xmm10, xmm2
        vxorps  xmm0, xmm2, xmm9
        vcomiss xmm10, xmm0
        vmovss  xmm2, dword ptr [rdi+64h]
        vmovss  xmm0, dword ptr [rsi+70h]
        vcomiss xmm2, xmm0
        vmovaps xmm10, [rsp+98h+var_68]
        vxorps  xmm1, xmm0, xmm9
        vcomiss xmm2, xmm1
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+60h]
      vmovaps xmm9, [rsp+98h+var_58]
      vmovaps xmm8, [rsp+98h+var_48]
      vmovaps xmm7, [rsp+98h+var_38]
      vmovaps xmm6, [rsp+98h+var_28]
      vmovss  [rsp+98h+targetRoll], xmm0
    }
    if ( (LODWORD(targetRoll) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2984, ASSERT_TYPE_SANITY, "( !IS_NAN( lerp->bodyPitch ) )", (const char *)&queryFormat, "!IS_NAN( lerp->bodyPitch )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+64h]
      vmovss  [rsp+98h+targetRoll], xmm0
    }
    if ( (LODWORD(targetRoll) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2985, ASSERT_TYPE_SANITY, "( !IS_NAN( lerp->bodyRoll ) )", (const char *)&queryFormat, "!IS_NAN( lerp->bodyRoll )") )
      __debugbreak();
  }
}

/*
==============
G_Vehicle_UpdateCameraState
==============
*/
void G_Vehicle_UpdateCameraState(Vehicle *veh)
{
  gentity_s *ent; 
  gentity_s *v3; 
  gentity_s *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  VehicleCameraState cameraState; 
  gclient_s *client; 
  gentity_s *v10; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4790, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4791, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  ent = veh->ent;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v3 = GVehicles::ms_gVehiclesSystem->GetVehicleOwner(GVehicles::ms_gVehiclesSystem, ent);
  v4 = v3;
  if ( v3 )
  {
    if ( !v3->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4805, ASSERT_TYPE_ASSERT, "( playerEnt->client )", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    v5 = DVARINT_vehCam_mode;
    if ( !DVARINT_vehCam_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.integer )
    {
      ent->s.lerp.u.anonymous.data[1] &= ~1u;
LABEL_19:
      veh->cameraState = VEH_CAMERA_DEFAULT;
      return;
    }
    v6 = DVARINT_vehCam_mode;
    if ( !DVARINT_vehCam_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer == 1 )
    {
      ent->s.lerp.u.anonymous.data[1] |= 1u;
      goto LABEL_19;
    }
    v7 = DVARINT_vehCam_mode;
    if ( !DVARINT_vehCam_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehCam_mode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4821, ASSERT_TYPE_ASSERT, "( Dvar_GetInt_Internal_DebugName( DVARINT_vehCam_mode, \"vehCam_mode\" ) == VEHICLE_CAMERA_MODE_BOTH )", (const char *)&queryFormat, "Dvar_GetInt( vehCam_mode ) == VEHICLE_CAMERA_MODE_BOTH") )
      __debugbreak();
    cameraState = veh->cameraState;
    client = v4->client;
    if ( cameraState == VEH_CAMERA_DELAYED )
    {
      ent->s.lerp.u.anonymous.data[1] ^= 1u;
      cameraState = VEH_CAMERA_CHANGED;
      veh->cameraState = VEH_CAMERA_CHANGED;
    }
    if ( (client->sess.cmd.buttons & 4) == 0 )
      goto LABEL_19;
    if ( cameraState == VEH_CAMERA_DEFAULT )
    {
      v10 = veh->ent;
      veh->cameraState = VEH_CAMERA_DELAYED;
      if ( (*(_BYTE *)ent->s.lerp.u.actor.threatSight & 1) != 0 )
        GScr_Notify(v10, scr_const.first_person, 0);
      else
        GScr_Notify(v10, scr_const.third_person, 0);
    }
  }
}

/*
==============
G_Vehicle_UpdateDefaultMove_NonPhysics
==============
*/
void G_Vehicle_UpdateDefaultMove_NonPhysics(Vehicle *veh)
{
  gentity_s *ent; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3567, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3568, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  ent = veh->ent;
  *(_QWORD *)&veh->speed = 0i64;
  *(_QWORD *)veh->phys.vel.v = 0i64;
  *(_QWORD *)&veh->phys.vel.z = 0i64;
  *(_QWORD *)&veh->phys.bodyVel.y = 0i64;
  *(_QWORD *)veh->phys.accel.v = 0i64;
  *(_QWORD *)&veh->phys.accel.z = 0i64;
  *(_QWORD *)&veh->phys.bodyAccel.y = 0i64;
  *(_QWORD *)veh->phys.rotVel.v = 0i64;
  veh->phys.rotVel.v[2] = 0.0;
  if ( ent->scripted )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    GVehicles::ms_gVehiclesSystem->UpdateAnimScriptedMove(GVehicles::ms_gVehiclesSystem, ent);
    veh->phys.origin.v[0] = ent->r.currentOrigin.v[0];
    veh->phys.origin.v[1] = ent->r.currentOrigin.v[1];
    veh->phys.origin.v[2] = ent->r.currentOrigin.v[2];
    veh->phys.angles.v[0] = ent->r.currentAngles.v[0];
    veh->phys.angles.v[1] = ent->r.currentAngles.v[1];
    veh->phys.angles.v[2] = ent->r.currentAngles.v[2];
  }
}

/*
==============
G_Vehicle_UpdateDefaultMove_Physics
==============
*/
void G_Vehicle_UpdateDefaultMove_Physics(Vehicle *veh)
{
  const VehicleDef *ServerDef; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7855, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7856, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7860, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( ServerDef->type != VEH_AIRCRAFT )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    GVehicles::PhysicsResetInputControls(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle);
  }
}

/*
==============
G_Vehicle_UpdateGroundTarget
==============
*/
void G_Vehicle_UpdateGroundTarget(const playerState_s *playerState, const gentity_s *vehicleEntity)
{
  signed __int64 v4; 
  __int64 otherEntityNum; 
  int number; 
  unsigned __int8 *priorityMap; 
  __int64 v34; 
  vec3_t end; 
  vec3_t outViewOrigin; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6794, ASSERT_TYPE_ASSERT, "( playerState )", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6795, ASSERT_TYPE_ASSERT, "( vehicleEntity )", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = vehicleEntity - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(priorityMap) = vehicleEntity - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v34) = 2048;
    LODWORD(priorityMap) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, v34) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6796, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( vehicleEntity ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( vehicleEntity ) )") )
    __debugbreak();
  otherEntityNum = vehicleEntity->s.otherEntityNum;
  if ( (_DWORD)otherEntityNum != 2047 )
  {
    if ( (unsigned int)otherEntityNum >= 0x800 )
    {
      LODWORD(v34) = 2048;
      LODWORD(priorityMap) = vehicleEntity->s.otherEntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6801, ASSERT_TYPE_ASSERT, "(unsigned)( groundEntityIndex ) < (unsigned)( ( 2048 ) )", "groundEntityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, v34) )
        __debugbreak();
    }
    _RBX = &g_entities[otherEntityNum];
    if ( G_IsEntityInUse(otherEntityNum) && _RBX->s.eType == ET_SCRIPTMOVER )
    {
      G_Vehicle_GetVehicleViewOrigin(playerState, &outViewOrigin);
      AnglesToAxis(&playerState->viewangles, &axis);
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
      {
        _RDI = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
        if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vmovss  xmm3, dword ptr [rdi+28h] }
      }
      else
      {
        __asm { vmovss  xmm3, cs:__real@46000000 }
      }
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis]
        vaddss  xmm2, xmm1, dword ptr [rbp+57h+outViewOrigin]
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+4]
      }
      number = vehicleEntity->s.number;
      __asm
      {
        vmovss  dword ptr [rsp+120h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+57h+outViewOrigin+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+8]
        vmovss  dword ptr [rsp+120h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+57h+outViewOrigin+8]
        vmovss  dword ptr [rsp+120h+end+8], xmm2
      }
      G_Main_LocationalTrace(&results, &outViewOrigin, &end, number, 41969969, NULL);
      if ( results.startsolid || results.allsolid )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rbp+57h+outViewOrigin]
          vmovsd  qword ptr [rsp+120h+end], xmm0
        }
        end.v[2] = outViewOrigin.v[2];
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+120h+end]
          vsubss  xmm1, xmm0, dword ptr [rbp+57h+outViewOrigin]
          vmovss  xmm5, [rbp+57h+results.fraction]
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm0, xmm1, dword ptr [rbp+57h+outViewOrigin]
          vmovss  xmm1, dword ptr [rsp+120h+end+4]
          vmovss  dword ptr [rsp+120h+end], xmm0
          vsubss  xmm0, xmm1, dword ptr [rbp+57h+outViewOrigin+4]
          vmulss  xmm2, xmm0, xmm5
          vaddss  xmm3, xmm2, dword ptr [rbp+57h+outViewOrigin+4]
          vmovss  xmm0, dword ptr [rsp+120h+end+8]
          vsubss  xmm1, xmm0, dword ptr [rbp+57h+outViewOrigin+8]
          vmulss  xmm2, xmm1, xmm5
          vmovss  dword ptr [rsp+120h+end+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rbp+57h+outViewOrigin+8]
          vmovss  dword ptr [rsp+120h+end+8], xmm3
        }
      }
      _RBX->s.lerp.pos.trType = TR_INTERPOLATE;
      *(_QWORD *)&_RBX->s.lerp.pos.trTime = 0i64;
      *(_QWORD *)_RBX->s.lerp.pos.trDelta.v = 0i64;
      _RBX->s.lerp.pos.trDelta.v[2] = 0.0;
      Trajectory_SetTrBase(&_RBX->s.lerp.pos, &end);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+120h+end]
        vmovss  xmm1, dword ptr [rsp+120h+end+4]
        vmovss  dword ptr [rbx+130h], xmm0
        vmovss  xmm0, dword ptr [rsp+120h+end+8]
        vmovss  dword ptr [rbx+138h], xmm0
        vmovss  dword ptr [rbx+134h], xmm1
      }
    }
  }
}

/*
==============
G_Vehicle_UpdatePathFollowMove_Physics
==============
*/

void __fastcall G_Vehicle_UpdatePathFollowMove_Physics(Vehicle *veh, __int64 a2, double _XMM2_8)
{
  GVehicles *VehicleSystem; 
  unsigned int physicsVehicle; 
  const dvar_t *v31; 
  float fmt; 
  float fmta; 
  float fmtb; 
  vec3_t velocity; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7680, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7681, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  if ( _RBX->drivingState != VEH_DRIVE_PATH_FOLLOW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7682, ASSERT_TYPE_ASSERT, "(veh->drivingState == VEH_DRIVE_PATH_FOLLOW)", (const char *)&queryFormat, "veh->drivingState == VEH_DRIVE_PATH_FOLLOW") )
    __debugbreak();
  if ( _RBX->pathPos.nodeIdx < 0 || G_VehiclePath_IsEndOfPath(&_RBX->pathPos) )
  {
    G_Vehicle_UpdateDefaultMove_Physics(_RBX);
    return;
  }
  __asm
  {
    vmovaps [rsp+0C8h+var_28], xmm6
    vmovaps [rsp+0C8h+var_38], xmm7
    vmovaps [rsp+0C8h+var_48], xmm8
    vmovaps [rsp+0C8h+var_58], xmm9
    vmovaps [rsp+0C8h+var_68], xmm10
  }
  VehicleSystem = GVehicles::GetVehicleSystem();
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  if ( GVehicles::PhysicsIsWrecked(VehicleSystem, _RBX->physicsVehicle) )
  {
    _RBX->manualMode = VEH_MANUAL_OFF;
    __asm { vxorps  xmm10, xmm10, xmm10 }
LABEL_28:
    __asm { vxorps  xmm9, xmm9, xmm9 }
    goto LABEL_29;
  }
  if ( _RBX->manualMode == VEH_MANUAL_ON )
  {
    __asm { vmovss  xmm7, dword ptr [rbx+61Ch] }
  }
  else
  {
    __asm { vmovss  xmm7, dword ptr [rbx+18h] }
    _RBX->manualMode = VEH_MANUAL_OFF;
  }
  GVehicles::PhysicsGetLocalVelocity(VehicleSystem, _RBX->physicsVehicle, &velocity);
  __asm { vmovss  xmm9, dword ptr [rsp+0C8h+velocity] }
  *(double *)&_XMM0 = GVehicles::PhysicsGetInputControl(VehicleSystem, _RBX->physicsVehicle, 0);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = GVehicles::PhysicsGetInputControl(VehicleSystem, _RBX->physicsVehicle, 1u);
  __asm
  {
    vmovaps xmm1, xmm0
    vmovaps xmm2, xmm8; max
  }
  if ( _RBX->transMode == VEH_TRANS_REVERSE )
  {
    __asm
    {
      vxorps  xmm0, xmm9, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm0, xmm7
    }
    if ( _RBX->transMode )
    {
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm6, xmm7
      }
      if ( _RBX->transMode <= (unsigned int)VEH_TRANS_REVERSE )
      {
        __asm
        {
          vaddss  xmm0, xmm1, cs:__real@3dcccccd; val
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
        __asm
        {
          vmovaps xmm9, xmm0
          vxorps  xmm10, xmm10, xmm10
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm6, cs:__real@3dcccccd; val
          vxorps  xmm1, xmm1, xmm1; min
          vxorps  xmm9, xmm9, xmm9
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
        __asm { vmovaps xmm10, xmm0 }
      }
    }
    else
    {
      __asm
      {
        vaddss  xmm0, xmm6, cs:__real@3dcccccd; val
        vxorps  xmm1, xmm1, xmm1; min
        vxorps  xmm9, xmm9, xmm9
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
      __asm { vmovaps xmm10, xmm0 }
    }
    goto LABEL_29;
  }
  __asm { vcomiss xmm9, xmm7 }
  if ( _RBX->transMode )
  {
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
    }
    if ( _RBX->transMode <= (unsigned int)VEH_TRANS_REVERSE )
    {
      __asm
      {
        vaddss  xmm0, xmm1, cs:__real@3dcccccd; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
      __asm { vmovaps xmm10, xmm0 }
      goto LABEL_28;
    }
    __asm
    {
      vsubss  xmm0, xmm6, cs:__real@3dcccccd; val
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm10, xmm10, xmm10
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
    __asm { vmovaps xmm9, xmm0 }
  }
  else
  {
    __asm
    {
      vaddss  xmm0, xmm6, cs:__real@3dcccccd; val
      vxorps  xmm1, xmm1, xmm1; min
      vxorps  xmm10, xmm10, xmm10
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
    __asm { vmovaps xmm9, xmm0 }
  }
LABEL_29:
  if ( _RBX->pathDir == VEH_PATH_REVERSE )
  {
    physicsVehicle = _RBX->physicsVehicle;
    if ( _RBX->transMode == VEH_TRANS_REVERSE )
    {
      *(double *)&_XMM0 = GVehicles::PhysicsGetRearAxleOffset(VehicleSystem, physicsVehicle);
      __asm { vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000 }
    }
    else
    {
      *(double *)&_XMM0 = GVehicles::PhysicsGetFrontAxleOffset(VehicleSystem, physicsVehicle);
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_bg_vehiclePathLookAheadOffset;
    if ( !DCONST_DVARFLT_bg_vehiclePathLookAheadOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehiclePathLookAheadOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  }
  __asm { vmovaps xmm1, xmm0; lookAheadOffset }
  G_VehiclePath_UpdatePathPosLookAhead(&_RBX->pathPos, *(float *)&_XMM1, _RBX->pathDir);
  __asm
  {
    vmovaps xmm3, xmm9; throttle
    vxorps  xmm2, xmm2, xmm2; steeringOffsetFrac
    vmovss  dword ptr [rsp+0C8h+fmt], xmm10
  }
  G_Vehicle_MoveToLookAhead_Physics(_RBX, &_RBX->pathPos.lookPos, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
  v31 = DCONST_DVARINT_bg_vehicleDebug;
  __asm
  {
    vmovaps xmm10, [rsp+0C8h+var_68]
    vmovaps xmm9, [rsp+0C8h+var_58]
  }
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.integer )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@41000000; width
      vmovaps xmm3, xmm8; g
      vxorps  xmm2, xmm2, xmm2; r
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
    }
    G_Vehicle_DebugBox(&_RBX->pathPos.lookPos, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta);
    __asm
    {
      vmovss  xmm1, cs:__real@41000000; width
      vxorps  xmm3, xmm3, xmm3; g
      vmovaps xmm2, xmm8; r
      vmovss  dword ptr [rsp+0C8h+fmt], xmm8
    }
    G_Vehicle_DebugBox(&_RBX->pathPos.origin, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmtb);
  }
  G_VehiclePath_DrawCurrentPath();
  __asm
  {
    vmovaps xmm8, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_38]
    vmovaps xmm6, [rsp+0C8h+var_28]
  }
}

/*
==============
G_Vehicle_UpdatePathPosition
==============
*/
_BOOL8 G_Vehicle_UpdatePathPosition(Vehicle *veh)
{
  gentity_s *ent; 
  char v8; 
  const VehicleDef *ServerDef; 
  const VehicleDef *v14; 
  __int64 v15; 
  char v23; 
  char v29; 
  bool updated; 
  bool v32; 
  __int64 v34; 
  VehicleType type; 
  VehiclePathPos vpp; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = veh;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm10
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3441, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = _RBX->ent;
  if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3444, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(_RBX->defIndex);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+10h]
    vmovups ymm1, ymmword ptr [rbx+90h]
    vmovss  xmm6, cs:__real@3f800000
  }
  _RDX = &vpp;
  v14 = ServerDef;
  v15 = *(_QWORD *)&_RBX->pathPos.switchNode[1].length;
  __asm
  {
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rbx+30h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+50h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+70h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovups ymmword ptr [rdx+80h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0B0h]
    vmovups ymmword ptr [rdx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rbx+0D0h]
    vmovups xmmword ptr [rdx+0C0h], xmm1
    vmovss  xmm1, dword ptr [rbx+18h]
  }
  *(_QWORD *)&vpp.switchNode[1].length = v15;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
  }
  *(_DWORD *)&vpp.switchNode[1].notifyIdx = *(_DWORD *)&_RBX->pathPos.switchNode[1].notifyIdx;
  if ( v8 | v23 )
  {
    _RBX->manualTime = 0.0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+58Ch]
      vdivss  xmm1, xmm0, xmm1
      vaddss  xmm2, xmm1, dword ptr [rbx+628h]
      vcomiss xmm2, xmm6
      vmovss  dword ptr [rbx+628h], xmm2
    }
    while ( !v8 )
    {
      G_VehiclePath_UpdatePathPos(&vpp, _RBX->pathDir);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+628h]
        vsubss  xmm1, xmm0, xmm6
        vcomiss xmm1, xmm6
        vmovss  dword ptr [rbx+628h], xmm1
      }
    }
  }
  updated = G_VehiclePath_UpdatePathPosNotifies(&_RBX->pathPos, &vpp, ent->s.number, _RBX->waitNode, VEH_PATH_NOTIFY_SCRIPT, _RBX->pathDir);
  _RCX = &vpp;
  v32 = updated;
  __asm { vmovups ymm0, ymmword ptr [rcx] }
  v34 = *(_QWORD *)&vpp.switchNode[1].length;
  __asm
  {
    vmovups ymmword ptr [rbx+10h], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rbx+30h], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rbx+50h], ymm0
    vmovups ymm0, ymmword ptr [rcx+60h]
    vmovups ymmword ptr [rbx+70h], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups ymmword ptr [rbx+90h], ymm0
    vmovups ymm0, ymmword ptr [rcx+0A0h]
    vmovups ymmword ptr [rbx+0B0h], ymm0
    vmovups xmm0, xmmword ptr [rcx+0C0h]
    vmovups xmmword ptr [rbx+0D0h], xmm0
    vmovss  xmm0, dword ptr [rbx+628h]
    vcomiss xmm0, xmm7
  }
  *(_QWORD *)&_RBX->pathPos.switchNode[1].length = v34;
  *(_DWORD *)&_RBX->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&vpp.switchNode[1].notifyIdx;
  if ( !(v29 | v23) )
  {
    __asm { vcomiss xmm0, xmm6 }
    if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3468, ASSERT_TYPE_ASSERT, "( veh->manualTime < 1.0f )", (const char *)&queryFormat, "veh->manualTime < 1.0f") )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&vpp, _RBX->pathDir);
  }
  if ( G_VehiclePath_IsEndOfPath(&_RBX->pathPos) )
    _RBX->pathSpeed = 0.0;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovd   xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm10, xmm0, cs:__real@3a83126f
    vmulss  xmm0, xmm10, dword ptr [rbx+590h]
    vaddss  xmm4, xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rbx+48h], xmm4
    vmulss  xmm0, xmm10, dword ptr [rbx+594h]
    vaddss  xmm1, xmm0, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rbx+4Ch], xmm1
    vmulss  xmm0, xmm10, dword ptr [rbx+598h]
    vaddss  xmm1, xmm0, dword ptr [rbx+50h]
    vmovss  xmm0, dword ptr [rsp+188h+vpp.origin]
    vmovss  dword ptr [rbx+50h], xmm1
    vsubss  xmm1, xmm0, dword ptr [rbx+24h]
    vmulss  xmm2, xmm1, dword ptr [rbx+628h]
    vaddss  xmm3, xmm2, dword ptr [rbx+24h]
    vmovss  xmm1, dword ptr [rsp+188h+vpp.origin+4]
    vaddss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rbx+0F0h], xmm0
    vsubss  xmm0, xmm1, dword ptr [rbx+28h]
    vmulss  xmm2, xmm0, dword ptr [rbx+628h]
    vaddss  xmm3, xmm2, dword ptr [rbx+28h]
    vaddss  xmm1, xmm3, dword ptr [rbx+4Ch]
    vmovss  xmm0, dword ptr [rsp+188h+vpp.origin+8]
    vmovss  dword ptr [rbx+0F4h], xmm1
    vsubss  xmm1, xmm0, dword ptr [rbx+2Ch]
    vmulss  xmm2, xmm1, dword ptr [rbx+628h]
    vaddss  xmm3, xmm2, dword ptr [rbx+2Ch]
    vaddss  xmm0, xmm3, dword ptr [rbx+50h]
    vmovss  dword ptr [rbx+0F8h], xmm0
  }
  if ( v14->type == VEH_TREADED && _RBX->rotateToYawMode )
  {
    G_Vehicle_UpdateRotateToYaw(_RBX, v14);
  }
  else
  {
    __asm
    {
      vmovss  xmm7, cs:__real@3f000000
      vmovss  xmm6, cs:__real@43b40000
      vmovss  xmm0, dword ptr [rsp+188h+vpp.angles]
      vsubss  xmm1, xmm0, dword ptr [rbx+30h]
      vmulss  xmm3, xmm1, cs:__real@3b360b61
      vaddss  xmm1, xmm3, xmm7
      vmovaps [rsp+188h+var_58], xmm9
      vxorps  xmm9, xmm9, xmm9
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm6
      vmulss  xmm1, xmm0, dword ptr [rbx+628h]
      vaddss  xmm2, xmm1, dword ptr [rbx+30h]
      vmovss  xmm0, dword ptr [rsp+188h+vpp.angles+4]
      vmovss  dword ptr [rbx+108h], xmm2
      vsubss  xmm1, xmm0, dword ptr [rbx+34h]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm9, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, dword ptr [rbx+628h]
      vaddss  xmm3, xmm2, dword ptr [rbx+34h]
      vmovss  xmm0, dword ptr [rsp+188h+vpp.angles+8]
      vmovss  dword ptr [rbx+10Ch], xmm3
      vsubss  xmm1, xmm0, dword ptr [rbx+38h]
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm9, xmm2, 1
      vmovaps xmm9, [rsp+188h+var_58]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, dword ptr [rbx+628h]
      vaddss  xmm3, xmm2, dword ptr [rbx+38h]
      vmovss  dword ptr [rbx+110h], xmm3
    }
    if ( _RBX->transMode == VEH_TRANS_REVERSE )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10Ch]
        vaddss  xmm1, xmm0, cs:__real@43340000
        vmovss  dword ptr [rbx+10Ch], xmm1
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@40c00000; rate
      vmovss  xmm1, dword ptr [rbx+114h]; cur
      vmovss  xmm0, dword ptr [rbx+108h]; tgt
      vmovaps xmm3, xmm10; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm2, cs:__real@40800000; rate
      vmovss  dword ptr [rbx+108h], xmm0
      vmovss  xmm1, dword ptr [rbx+118h]; cur
      vmovss  xmm0, dword ptr [rbx+10Ch]; tgt
      vmovaps xmm3, xmm10; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm2, cs:__real@40c00000; rate
      vmovss  dword ptr [rbx+10Ch], xmm0
      vmovss  xmm1, dword ptr [rbx+11Ch]; cur
      vmovss  xmm0, dword ptr [rbx+110h]; tgt
      vmovaps xmm3, xmm10; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm { vmovss  dword ptr [rbx+110h], xmm0 }
  }
  type = v14->type;
  __asm
  {
    vmovaps xmm10, [rsp+188h+var_68]
    vmovaps xmm7, [rsp+188h+var_48]
    vmovaps xmm6, [rsp+188h+var_38]
  }
  if ( (type == VEH_WHEELS_4 || type == VEH_TREADED) && !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) )
    G_Vehicle_GroundPlant(ent, &_RBX->phys, 1);
  return v32;
}

/*
==============
G_Vehicle_UpdatePathScript
==============
*/

void __fastcall G_Vehicle_UpdatePathScript(const Vehicle *veh, double prevSpeed, bool waitNodeHit)
{
  const gentity_s *ent; 
  bool IsEndOfPath; 
  char v10; 
  bool v11; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = veh;
  __asm { vmovaps xmm6, xmm1 }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3511, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = _RBX->ent;
  if ( !_RBX->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3514, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( waitNodeHit && _RBX->waitNode > -1 )
    GScr_Notify(ent, scr_const.reached_wait_node, 0);
  IsEndOfPath = G_VehiclePath_IsEndOfPath(&_RBX->pathPos);
  v10 = 0;
  v11 = !IsEndOfPath;
  if ( IsEndOfPath )
    GScr_Notify(ent, scr_const.reached_end_node, 0);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+5A0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( !v10 )
  {
    __asm { vcomiss xmm6, xmm1 }
    if ( v10 | v11 )
    {
      __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
      if ( v10 | v11 )
      {
LABEL_17:
        GScr_Notify(ent, scr_const.reached_wait_speed, 0);
        goto LABEL_18;
      }
      __asm { vcomiss xmm6, xmm1 }
    }
    __asm { vcomiss xmm1, dword ptr [rbx+58Ch] }
    goto LABEL_17;
  }
LABEL_18:
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
G_Vehicle_UpdatePathSpeed
==============
*/
void G_Vehicle_UpdatePathSpeed(Vehicle *veh)
{
  bool v4; 
  bool v5; 
  bool v7; 
  unsigned int manualMode; 
  bool v10; 
  bool v15; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = veh;
  v4 = veh == NULL;
  if ( !veh )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3415, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh");
    v4 = !v5;
    if ( v5 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rdi+18h]
  }
  if ( !v4 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3416, ASSERT_TYPE_ASSERT, "( veh->pathPos.speed >= 0.0f )", (const char *)&queryFormat, "veh->pathPos.speed >= 0.0f");
    v4 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, dword ptr [rdi+61Ch] }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3417, ASSERT_TYPE_ASSERT, "( veh->manualSpeed >= 0.0f )", (const char *)&queryFormat, "veh->manualSpeed >= 0.0f") )
    __debugbreak();
  manualMode = _RDI->manualMode;
  if ( manualMode )
  {
    if ( manualMode == 2 )
      __asm { vmovss  xmm6, dword ptr [rdi+18h] }
    else
      __asm { vmovss  xmm6, dword ptr [rdi+61Ch] }
    __asm { vcomiss xmm6, dword ptr [rdi+58Ch] }
    v10 = manualMode > 2;
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    if ( v10 )
      __asm { vmovss  xmm2, dword ptr [rdi+620h] }
    else
      __asm { vmovss  xmm2, dword ptr [rdi+624h]; accel }
    __asm
    {
      vmovaps xmm3, xmm0; dt
      vmovss  xmm0, dword ptr [rdi+58Ch]; speed
      vmovaps xmm1, xmm6; tgtSpeed
    }
    *(double *)&_XMM0 = Vehicle_AccelerateSpeed(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    v15 = _RDI->manualMode == VEH_MANUAL_TRANS;
    __asm { vmovss  dword ptr [rdi+58Ch], xmm0 }
    if ( v15 )
    {
      __asm { vucomiss xmm0, xmm6 }
      if ( v15 )
      {
        _RDI->manualMode = VEH_MANUAL_OFF;
        __asm { vmovaps xmm6, [rsp+48h+var_18] }
        return;
      }
    }
  }
  else
  {
    _RDI->pathSpeed = _RDI->pathPos.speed;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
G_Vehicle_UpdatePhysics
==============
*/
void G_Vehicle_UpdatePhysics(gentity_s *pSelf, gentity_s *player)
{
  const VehicleDef *ServerDef; 
  GVehicles *v7; 
  VehicleType type; 
  bool v21; 
  __int64 v25; 
  VehiclePathDir pathDir; 
  vec3_t *p_origin; 
  vec3_t pointWS; 
  tmat43_t<vec3_t> transform; 
  VehiclePathPos prevVpp; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5182, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5183, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  _RBX = pSelf->vehicle;
  ServerDef = G_Vehicle_GetServerDef(_RBX->defIndex);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v7 = GVehicles::ms_gVehiclesSystem;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmulss  xmm2, xmm0, cs:__real@3a83126f; deltaTime
  }
  GVehicles::PhysicsPostThinkUpdate(v7, _RBX->physicsVehicle, *(float *)&_XMM2);
  if ( _RBX->ent->scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5215, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
  }
  else
  {
    GVehicles::PhysicsGetChassisTransform(v7, _RBX->physicsVehicle, &transform);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+198h+transform+24h]
      vmovss  xmm1, dword ptr [rsp+198h+transform+28h]
      vmovss  dword ptr [rbx+0F0h], xmm0
      vmovss  xmm0, dword ptr [rsp+198h+transform+2Ch]
      vmovss  dword ptr [rbx+0F8h], xmm0
      vmovss  dword ptr [rbx+0F4h], xmm1
    }
    AxisToAngles((const tmat33_t<vec3_t> *)&transform, &_RBX->phys.angles);
    GVehicles::PhysicsGetLinearVelocity(v7, _RBX->physicsVehicle, &_RBX->phys.vel);
    GVehicles::PhysicsGetLocalVelocity(v7, _RBX->physicsVehicle, &_RBX->phys.bodyVel);
    GVehicles::PhysicsGetLocalAcceleration(v7, _RBX->physicsVehicle, &_RBX->phys.bodyAccel);
    type = ServerDef->type;
    if ( type == VEH_TREADED )
    {
      if ( !ServerDef->camRelativeControl )
        goto LABEL_23;
      AnglesSubtract(&_RBX->phys.angles, &_RBX->phys.prevAngles, &_RBX->phys.rotVel);
      type = ServerDef->type;
    }
    if ( type == VEH_BOAT && _RBX->drivingState == VEH_DRIVE_PATH_CONSTRAINED )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+148h]
        vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  dword ptr [rbx+148h], xmm1
      }
    }
  }
LABEL_23:
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+144h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rbx+588h], xmm0
  }
  if ( ServerDef->collisionSnd.name )
  {
    __asm
    {
      vmovaps [rsp+198h+var_38], xmm6
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rbx+6C8h]
      vmovaps xmm6, [rsp+198h+var_38]
    }
  }
  if ( GVehicles::PhysicsIsInAir(v7, _RBX->physicsVehicle) )
    pSelf->s.lerp.u.anonymous.data[1] |= 2u;
  if ( _RBX->drivingState == VEH_DRIVE_PATH_FOLLOW && !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) )
  {
    v21 = _RBX->pathDir == VEH_PATH_REVERSE;
    _R8 = &prevVpp;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+10h]
      vmovups ymm1, ymmword ptr [rbx+90h]
    }
    v25 = *(_QWORD *)&_RBX->pathPos.switchNode[1].length;
    __asm
    {
      vmovups ymmword ptr [r8], ymm0
      vmovups ymm0, ymmword ptr [rbx+30h]
      vmovups ymmword ptr [r8+20h], ymm0
      vmovups ymm0, ymmword ptr [rbx+50h]
      vmovups ymmword ptr [r8+40h], ymm0
      vmovups ymm0, ymmword ptr [rbx+70h]
      vmovups ymmword ptr [r8+60h], ymm0
      vmovups ymmword ptr [r8+80h], ymm1
      vmovups ymm1, ymmword ptr [rbx+0B0h]
      vmovups ymmword ptr [r8+0A0h], ymm1
      vmovups xmm1, xmmword ptr [rbx+0D0h]
      vmovups xmmword ptr [r8+0C0h], xmm1
    }
    *(_QWORD *)&prevVpp.switchNode[1].length = v25;
    *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&_RBX->pathPos.switchNode[1].notifyIdx;
    if ( v21 )
    {
      pathDir = VEH_PATH_REVERSE;
      p_origin = &_RBX->phys.origin;
    }
    else
    {
      GVehicles::PhysicsGetSteeringPointWS(v7, _RBX->physicsVehicle, &pointWS);
      pathDir = _RBX->pathDir;
      p_origin = &pointWS;
    }
    G_VehiclePath_UpdatePathPosPhysics(&_RBX->pathPos, p_origin, &_RBX->phys.angles, pathDir);
    G_VehiclePath_UpdatePathPosNotifies(&prevVpp, &_RBX->pathPos, pSelf->s.number, -1, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
    if ( G_VehiclePath_IsEndOfPath(&_RBX->pathPos) )
      GScr_Notify(pSelf, scr_const.reached_end_node, 0);
  }
}

/*
==============
G_Vehicle_UpdatePhysicsLinkEntity
==============
*/
void G_Vehicle_UpdatePhysicsLinkEntity(gentity_s *pSelf)
{
  tmat33_t<vec3_t> axis; 
  vec3_t out; 
  tmat43_t<vec3_t> parentAxis; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5279, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  _RSI = pSelf->vehicle;
  if ( pSelf->tagInfo )
  {
    G_CalcTagParentAxis(pSelf, &parentAxis);
    MatrixTransformVector(&pSelf->tagInfo->axis.m[3], (const tmat33_t<vec3_t> *)&parentAxis, &out);
    MatrixMultiply((const tmat33_t<vec3_t> *)&parentAxis, (const tmat33_t<vec3_t> *)&pSelf->tagInfo->axis, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+out]
      vaddss  xmm3, xmm0, dword ptr [rsp+0A8h+parentAxis+24h]
      vmovss  xmm0, dword ptr [rsp+0A8h+out+4]
      vaddss  xmm2, xmm0, dword ptr [rsp+0A8h+parentAxis+28h]
      vmovss  xmm0, dword ptr [rsp+0A8h+out+8]
      vaddss  xmm1, xmm0, dword ptr [rsp+0A8h+parentAxis+2Ch]
      vmovss  dword ptr [rsp+0A8h+out+8], xmm1
      vmovss  dword ptr [rsi+0F8h], xmm1
      vmovss  dword ptr [rsp+0A8h+out], xmm3
      vmovss  dword ptr [rsp+0A8h+out+4], xmm2
      vmovss  dword ptr [rsi+0F0h], xmm3
      vmovss  dword ptr [rsi+0F4h], xmm2
    }
    AxisToAngles(&axis, &_RSI->phys.angles);
    *(_QWORD *)_RSI->phys.vel.v = 0i64;
    _RSI->phys.vel.v[2] = 0.0;
    pSelf->r.currentOrigin.v[0] = _RSI->phys.origin.v[0];
    pSelf->r.currentOrigin.v[1] = _RSI->phys.origin.v[1];
    pSelf->r.currentOrigin.v[2] = _RSI->phys.origin.v[2];
    pSelf->r.currentAngles.v[0] = _RSI->phys.angles.v[0];
    pSelf->r.currentAngles.v[1] = _RSI->phys.angles.v[1];
    pSelf->r.currentAngles.v[2] = _RSI->phys.angles.v[2];
  }
}

/*
==============
G_Vehicle_UpdatePlayerControlledWeapon
==============
*/
void G_Vehicle_UpdatePlayerControlledWeapon(gentity_s *ent)
{
  GWeaponMap *Instance; 
  GVehicles *VehicleSystem; 
  __int64 v6; 
  const gentity_s *v7; 
  __int64 v8; 
  bool v9; 
  char v20; 
  int v33; 
  int passEntityNum; 
  vec3_t end; 
  vec3_t start; 
  int v38; 
  vec3_t outPos; 
  vec3_t v40; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3082, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( BG_GetWeaponForEntity(Instance, &ent->s)->weaponIdx )
  {
    _RBX = ent->vehicle;
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3089, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
      __debugbreak();
    if ( _RBX->boneIndex.flash[0] >= 0 )
    {
      if ( _RBX->boneIndex.barrel >= 0 )
      {
        G_Vehicle_GetServerDef(_RBX->defIndex);
        VehicleSystem = GVehicles::GetVehicleSystem();
        v6 = (__int64)VehicleSystem->GetVehicleOwner(VehicleSystem, ent);
        v7 = (const gentity_s *)v6;
        if ( v6 )
        {
          v8 = *(_QWORD *)(v6 + 336);
          __asm { vmovaps [rsp+130h+var_30], xmm6 }
          if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3111, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
            __debugbreak();
          if ( _RBX->turret.fireTime > 0 )
          {
            _RBX->turret.fireTime -= G_Level_GetFrameDuration();
          }
          else if ( (*(_BYTE *)(v8 + 21424) & 1) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v8 + 20), ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v8 + 20), ACTIVE, 0xFu) )
          {
            G_Vehicle_NotifyTurretFire(_RBX);
          }
          v9 = _RBX->boneIndex.flash[0] < 0;
          _RBX->hasTarget = 1;
          if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3131, ASSERT_TYPE_ASSERT, "( veh->boneIndex.flash[VEH_TURRET_BARREL_TAG_FLASH] >= 0 )", (const char *)&queryFormat, "veh->boneIndex.flash[VEH_TURRET_BARREL_TAG_FLASH] >= 0") )
            __debugbreak();
          if ( _RBX->boneIndex.barrel < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3132, ASSERT_TYPE_ASSERT, "( veh->boneIndex.barrel >= 0 )", (const char *)&queryFormat, "veh->boneIndex.barrel >= 0") )
            __debugbreak();
          G_Utils_DObjGetWorldBoneIndexPos(ent, _RBX->boneIndex.flash[0], &outPos);
          G_Utils_DObjGetWorldBoneIndexPos(ent, _RBX->boneIndex.barrel, &v40);
          VehicleSystem->GetVehicleTurretTrace(VehicleSystem, ent, v7, &start, (vec3_t *)&v38, &passEntityNum);
          __asm
          {
            vmovss  xmm3, cs:__real@46200000
            vmulss  xmm1, xmm3, [rsp+130h+var_D8]
            vaddss  xmm4, xmm1, dword ptr [rsp+130h+start]
            vmulss  xmm1, xmm3, [rsp+130h+var_D4]
            vaddss  xmm2, xmm1, dword ptr [rsp+130h+start+4]
            vmulss  xmm1, xmm3, [rsp+130h+var_D0]
            vmovss  dword ptr [rsp+130h+end+4], xmm2
            vaddss  xmm2, xmm1, dword ptr [rsp+130h+start+8]
            vmovss  dword ptr [rsp+130h+end+8], xmm2
            vmovss  dword ptr [rsp+130h+end], xmm4
            vmovss  dword ptr [rbx+68Ch], xmm4
            vmovss  xmm0, dword ptr [rsp+130h+end+4]
            vmovss  dword ptr [rbx+690h], xmm0
            vmovss  xmm1, dword ptr [rsp+130h+end+8]
            vmovss  dword ptr [rbx+694h], xmm1
          }
          G_Main_LocationalTrace(&results, &start, &end, passEntityNum, 41968017, NULL);
          __asm
          {
            vmovss  xmm6, [rbp+30h+results.fraction]
            vcomiss xmm6, cs:__real@3f800000
          }
          if ( v20 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+130h+end]
              vsubss  xmm1, xmm0, dword ptr [rsp+130h+start]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rsp+130h+start]
              vmovss  dword ptr [rbx+68Ch], xmm3
              vmovss  xmm0, dword ptr [rsp+130h+end+4]
              vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+4]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+4]
              vmovss  dword ptr [rbx+690h], xmm3
              vmovss  xmm0, dword ptr [rsp+130h+end+8]
              vsubss  xmm1, xmm0, dword ptr [rsp+130h+start+8]
              vmulss  xmm2, xmm1, xmm6
              vaddss  xmm3, xmm2, dword ptr [rsp+130h+start+8]
              vmovss  dword ptr [rbx+694h], xmm3
            }
          }
          v33 = G_Main_TraceCapsuleComplete(&v40, &outPos, &bounds_origin, ent->s.number, 2047, ent->clipmask);
          __asm { vmovaps xmm6, [rsp+130h+var_30] }
          if ( !v33 )
            _RBX->turret.barrelBlocked = 1;
        }
      }
      else
      {
        Com_PrintWarning(15, "VEH_UpdatePlayerControlledWeapon: Warning - no [tag_barrel] on vehicle\n");
      }
    }
    else
    {
      Com_PrintWarning(15, "VEH_UpdatePlayerControlledWeapon: Warning - no [tag_flash] on vehicle\n");
    }
  }
}

/*
==============
G_Vehicle_UpdatePlayerMove_NonPhysics
==============
*/
void G_Vehicle_UpdatePlayerMove_NonPhysics(Vehicle *veh)
{
  char v10; 
  const VehicleDef *ServerDef; 
  gentity_s *ent; 
  const VehicleDef *v14; 
  gentity_s *v15; 
  __int64 p_cmd; 
  const dvar_t *v17; 
  int integer; 
  char v19; 
  char v40; 
  char v60; 
  char v70; 
  int v89; 
  VehicleType type; 
  const dvar_t *v97; 
  bool v98; 
  char move[8]; 
  vec3_t outRotAccel; 
  vec4_t color; 
  tmat43_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-68h], xmm9 }
  _R12 = veh;
  v10 = 0;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-98h], xmm12
  }
  *(_WORD *)move = 0;
  move[2] = 0;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3193, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(_R12->defIndex);
  ent = _R12->ent;
  _RSI = &_R12->phys.origin;
  *(_QWORD *)outRotAccel.v = ServerDef;
  v14 = ServerDef;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3199, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v15 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v15->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3205, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v15->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v15->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v15->client->ps.pm_flags, ACTIVE, 0xFu) )
    {
      p_cmd = (__int64)&v15->client->sess.cmd;
      if ( v14->type != VEH_BOAT )
      {
        move[0] = v15->client->sess.cmd.forwardmove;
        move[1] = *(_BYTE *)(p_cmd + 157);
        v10 = (*(_DWORD *)p_cmd & 0x200) != 0i64 ? 0x7F : 0;
        move[2] = v10;
        goto LABEL_29;
      }
      if ( v15->client == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3156, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
        __debugbreak();
      v17 = DVARINT_vehBoatControls;
      if ( !DVARINT_vehBoatControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehBoatControls") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      integer = v17->current.integer;
      if ( integer )
      {
        if ( integer != 1 )
        {
LABEL_28:
          v14 = *(const VehicleDef **)outRotAccel.v;
LABEL_29:
          if ( v10 > 0 && !v14->camRelativeControl )
            GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v15->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
          goto LABEL_32;
        }
        if ( (*(_QWORD *)p_cmd & 0x200i64) != 0 )
        {
          move[0] = -127;
LABEL_27:
          move[1] = *(_BYTE *)(p_cmd + 157);
          goto LABEL_28;
        }
        v19 = 0;
        if ( (*(_QWORD *)p_cmd & 1) != 0 )
          v19 = 127;
      }
      else
      {
        v19 = *(_BYTE *)(p_cmd + 156);
      }
      move[0] = v19;
      goto LABEL_27;
    }
  }
LABEL_32:
  G_Vehicle_CalcAccel(ent, move, &_R12->phys.bodyAccel, &outRotAccel);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  __asm
  {
    vmovd   xmm7, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vmovss  xmm6, cs:__real@3a83126f
    vcvtdq2ps xmm7, xmm7
    vmulss  xmm12, xmm7, xmm6
    vmulss  xmm1, xmm12, dword ptr [rsp+130h+outRotAccel]
    vaddss  xmm2, xmm1, dword ptr [rsi+78h]
    vmulss  xmm1, xmm12, dword ptr [rsp+130h+outRotAccel+4]
    vmovss  dword ptr [rsi+78h], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+7Ch]
    vmulss  xmm1, xmm12, dword ptr [rsp+130h+outRotAccel+8]
    vmovss  dword ptr [rsi+7Ch], xmm2
    vaddss  xmm2, xmm1, dword ptr [rsi+80h]
    vmovss  dword ptr [rsi+80h], xmm2
    vmulss  xmm0, xmm7, dword ptr [rsi+7Ch]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, dword ptr [rsi+28h]
    vmulss  xmm5, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rsi+1Ch], xmm1
  }
  _R12->phys.angles.v[0] = 0.0;
  _R12->phys.angles.v[2] = 0.0;
  AnglesToAxis(&_R12->phys.angles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  [rbp+30h+var_A4], xmm9
    vmovss  [rbp+30h+var_A0], xmm9
    vmovss  [rbp+30h+var_9C], xmm9
  }
  MatrixTransformVector(&_R12->phys.bodyAccel, (const tmat33_t<vec3_t> *)&axis, &_R12->phys.accel);
  __asm
  {
    vmulss  xmm0, xmm7, dword ptr [rsi+60h]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm2, xmm1, dword ptr [rsi+48h]
    vmovss  dword ptr [rsi+48h], xmm2
    vmulss  xmm0, xmm7, dword ptr [rsi+64h]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm3, xmm1, dword ptr [rsi+4Ch]
    vmovss  dword ptr [rsi+4Ch], xmm3
    vmulss  xmm0, xmm7, dword ptr [rsi+68h]
    vmulss  xmm1, xmm0, xmm6
    vaddss  xmm4, xmm1, dword ptr [rsi+50h]
    vmovss  dword ptr [rsi+50h], xmm4
    vucomiss xmm2, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
  }
  if ( !v40 )
    goto LABEL_38;
  __asm { vucomiss xmm3, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin }
  if ( !v40 )
    goto LABEL_38;
  __asm { vucomiss xmm4, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin }
  if ( !v40 )
  {
LABEL_38:
    G_Vehicle_GroundTrace(ent);
    if ( !s_phys.onGround )
    {
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1512, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1513, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( s_phys.hasGround )
        G_Vehicle_ClipVelocity(&ent->vehicle->phys.vel, &s_phys.groundTrace.normal, &ent->vehicle->phys.vel);
      v89 = 1;
      goto LABEL_61;
    }
    __asm
    {
      vmovaps [rsp+130h+var_58+8], xmm8
      vmovaps [rsp+130h+var_78+8], xmm10
      vmovaps [rsp+130h+var_88+8], xmm11
    }
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1484, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1485, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    _R14 = (vec3_t *)ent->vehicle;
    __asm
    {
      vmovss  xmm7, dword ptr [r14+13Ch]
      vmovss  xmm6, dword ptr [r14+138h]
      vmovss  xmm8, dword ptr [r14+140h]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm11, xmm2, xmm2
    }
    G_Vehicle_ClipVelocity(_R14 + 26, &s_phys.groundTrace.normal, _R14 + 26);
    __asm
    {
      vmovss  xmm5, dword ptr [r14+13Ch]
      vmovss  xmm4, dword ptr [r14+138h]
      vmovss  xmm10, dword ptr [r14+140h]
      vmulss  xmm1, xmm4, xmm6
      vmulss  xmm0, xmm5, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm10, xmm8
      vmovaps xmm8, [rsp+130h+var_58+8]
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm9
    }
    if ( !(v70 | v60) )
    {
      __asm
      {
        vmulss  xmm1, xmm4, xmm4
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm10
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm4, xmm2
        vmovss  dword ptr [r14+138h], xmm0
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [r14+13Ch], xmm1
        vmulss  xmm0, xmm2, xmm10
        vmovss  dword ptr [r14+140h], xmm0
        vmulss  xmm1, xmm11, dword ptr [r14+138h]
        vmovss  dword ptr [r14+138h], xmm1
        vmulss  xmm0, xmm11, dword ptr [r14+13Ch]
        vmovss  dword ptr [r14+13Ch], xmm0
        vmulss  xmm1, xmm11, dword ptr [r14+140h]
        vmovss  dword ptr [r14+140h], xmm1
        vmovss  xmm4, dword ptr [r14+138h]
      }
    }
    __asm
    {
      vucomiss xmm4, xmm9
      vmovaps xmm11, [rsp+130h+var_88+8]
      vmovaps xmm10, [rsp+130h+var_78+8]
    }
    if ( !v60 )
      goto LABEL_49;
    __asm { vucomiss xmm9, dword ptr [r14+13Ch] }
    if ( !v60 )
    {
LABEL_49:
      v89 = 0;
LABEL_61:
      __asm { vmovaps xmm2, xmm12; frameTime }
      G_Vehicle_StepSlideMove(ent, v89, *(double *)&_XMM2);
    }
  }
  type = v14->type;
  __asm
  {
    vmovaps xmm12, [rsp+130h+var_98+8]
    vmovaps xmm7, [rsp+130h+var_48+8]
    vmovaps xmm6, [rsp+130h+var_38+8]
  }
  if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
    G_Vehicle_GroundPlant(ent, &_R12->phys, 1);
  MatrixTransposeTransformVector43(&_R12->phys.vel, &axis, &_R12->phys.bodyVel);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+54h]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [r12+588h], xmm0
  }
  v97 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v97);
  v98 = v97->current.integer == 0;
  if ( v97->current.integer )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+44h]
      vmulss  xmm2, xmm0, cs:__real@40000000
      vucomiss xmm2, xmm9
      vmovups xmm1, cs:__xmm@3f800000000000003f8000003f800000
      vmovss  xmm0, dword ptr [rsi]
      vmovups xmmword ptr [rsp+130h+color], xmm1
      vmovss  xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rsp+130h+outRotAccel], xmm0
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rsp+130h+outRotAccel+4], xmm1
    }
    if ( v98 )
      __asm { vaddss  xmm0, xmm0, cs:__real@3c23d70a }
    else
      __asm { vaddss  xmm0, xmm0, xmm2 }
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+3Ch]; radius
      vmovss  dword ptr [rsp+130h+outRotAccel+8], xmm0
    }
    G_DebugCylinder(_RSI, &outRotAccel, *(float *)&_XMM2, &color, 0, 0);
  }
  __asm { vmovaps xmm9, [rsp+130h+var_68+8] }
}

/*
==============
G_Vehicle_UpdatePlayerMove_Physics
==============
*/
void G_Vehicle_UpdatePlayerMove_Physics(Vehicle *veh)
{
  gentity_s *v2; 
  gclient_s *client; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7817, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7818, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7819, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && EntHandle::isDefined(&veh->ent->remoteControlledOwner) )
  {
    v2 = EntHandle::ent(&veh->ent->remoteControlledOwner);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7826, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
      __debugbreak();
    if ( !v2->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7827, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    if ( v2->client->ps.remoteControlEnt != veh->ent->s.number )
    {
      Com_PrintWarning(20, "Vehicle is remote controlled by player but the player ps.remoteControlEnt is != than the vehicle");
      return;
    }
  }
  else
  {
    if ( !EntHandle::isDefined(&veh->ent->r.ownerNum) )
      return;
    v2 = EntHandle::ent(&veh->ent->r.ownerNum);
  }
  if ( v2 )
  {
    if ( !v2->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7842, ASSERT_TYPE_ASSERT, "(playerEnt->client)", (const char *)&queryFormat, "playerEnt->client") )
      __debugbreak();
    client = v2->client;
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    GVehicles::PhysicsUpdateInputControls(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle, &client->sess.cmd, &v2->client->ps);
  }
}

/*
==============
G_Vehicle_UpdatePosition
==============
*/
void G_Vehicle_UpdatePosition(gentity_s *pSelf, gentity_s *player)
{
  Vehicle *vehicle; 
  gclient_s *client; 
  gclient_s *v6; 
  bool NoBroadphaseQueriesAllowed; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5306, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  if ( G_Vehicle_GetServerDef(vehicle->defIndex)->type != VEH_ARTILLERY && (unsigned int)(vehicle->drivingState - 2) <= 1 && !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
    G_Vehicle_VerifyPosition(pSelf);
  if ( player )
  {
    client = player->client;
    if ( (client->ps.linkFlags.m_flags[0] & 4) == 0 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&client->ps.otherFlags, ACTIVE, 1u) && !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
    {
      v6 = player->client;
      v6->ps.velocity.v[0] = vehicle->phys.vel.v[0];
      v6->ps.velocity.v[1] = vehicle->phys.vel.v[1];
      v6->ps.velocity.v[2] = vehicle->phys.vel.v[2];
    }
  }
  NoBroadphaseQueriesAllowed = Physics_GetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST);
  if ( NoBroadphaseQueriesAllowed )
  {
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
  }
  G_Vehicle_TouchEntities(pSelf);
  if ( NoBroadphaseQueriesAllowed )
  {
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
}

/*
==============
G_Vehicle_UpdateRemoteDriveTurret
==============
*/
void G_Vehicle_UpdateRemoteDriveTurret(gentity_s *vehicleEntity)
{
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  Vehicle *vehicle; 
  gentity_s *v5; 
  playerState_s *EntityPlayerState; 
  const playerState_s *v7; 
  const VehicleDef *ServerDef; 
  GUtils *Utils; 
  Vehicle *v10; 
  GWeaponMap *v11; 
  GHandler *Handler; 
  Vehicle *v13; 
  int fireTime; 
  int fireDelay; 
  tmat33_t<vec3_t> forward; 

  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6556, ASSERT_TYPE_ASSERT, "( vehicleEntity )", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( !vehicleEntity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6557, ASSERT_TYPE_ASSERT, "( vehicleEntity->vehicle )", (const char *)&queryFormat, "vehicleEntity->vehicle") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &vehicleEntity->s);
  if ( WeaponForEntity->weaponIdx )
  {
    if ( EntHandle::isDefined(&vehicleEntity->r.ownerNum) )
    {
      vehicle = vehicleEntity->vehicle;
      v5 = EntHandle::ent(&vehicleEntity->r.ownerNum);
      EntityPlayerState = G_GetEntityPlayerState(v5);
      v7 = EntityPlayerState;
      if ( EntityPlayerState )
      {
        if ( EntityPlayerState->pm_type != 3 )
        {
          ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
          if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6583, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
            __debugbreak();
          if ( vehicle->boneIndex.flash[0] >= 0 )
          {
            if ( vehicle->boneIndex.barrel >= 0 )
            {
              Utils = GUtils::GetUtils();
              if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->pm_flags, ACTIVE, 0x10u) || Utils->PlayerButtonsPressed(Utils, v5, 0x40000ui64) || !Utils->PlayerButtonsPressed(Utils, v5, 1ui64) )
              {
                v13 = vehicleEntity->vehicle;
                if ( v13->turret.isFiring && v13->turret.fireTime <= 0 )
                {
                  G_Utils_AddEvent(vehicleEntity, 0x58u, 0);
                  v13->turret.isFiring = 0;
                }
                vehicle->turret.triggerDown = 0;
              }
              else if ( vehicle->turret.fireTime > 0 )
              {
                vehicle->turret.fireTime -= G_Level_GetFrameDuration();
                vehicle->turret.isFiring = 1;
              }
              else if ( BG_GetWeaponFireType(WeaponForEntity, 0) == WEAPON_FIRETYPE_SINGLESHOT && vehicle->turret.triggerDown )
              {
                v10 = vehicleEntity->vehicle;
                if ( v10->turret.isFiring && v10->turret.fireTime <= 0 )
                {
                  G_Utils_AddEvent(vehicleEntity, 0x58u, 0);
                  v10->turret.isFiring = 0;
                }
              }
              else
              {
                vehicle->turret.triggerDown = 1;
                v11 = GWeaponMap::GetInstance();
                BG_GetFireTime(v11, v7, WeaponForEntity, 0, 0, 0, &fireTime, &fireDelay);
                vehicle->turret.fireTime = fireTime;
                Handler = GHandler::getHandler();
                BG_GetPlayerViewDirection(v7, forward.m, &forward.m[1], &forward.m[2], Handler, 1);
                G_Vehicle_FireRemoteDriveTurret(v5, vehicleEntity, &forward);
                vehicle->turret.isFiring = 1;
              }
            }
            else if ( !ServerDef->ssTerrainModeMovement )
            {
              Com_PrintWarning(15, "Vehicle_UpdateRemoteDriveTurret: Warning - no [tag_barrel] on vehicle\n");
            }
          }
          else if ( !ServerDef->ssTerrainModeMovement )
          {
            Com_PrintWarning(15, "Vehicle_UpdateRemoteDriveTurret: Warning - no [tag_flash] on vehicle\n");
          }
        }
      }
    }
  }
}

/*
==============
G_Vehicle_UpdateRotateToYaw
==============
*/
void G_Vehicle_UpdateRotateToYaw(Vehicle *veh, const VehicleDef *vehDef)
{
  bool v9; 
  bool v10; 
  bool v11; 
  bool v13; 
  const gentity_s *v22; 
  char v23; 
  char v34; 
  const gentity_s *ent; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = veh;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm12
  }
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3355, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3356, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( _RBX->rotateToYawMode == VEH_ROTATE_TO_OFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3357, ASSERT_TYPE_ASSERT, "( veh->rotateToYawMode != VEH_ROTATE_TO_OFF )", (const char *)&queryFormat, "veh->rotateToYawMode != VEH_ROTATE_TO_OFF") )
    __debugbreak();
  v9 = vehDef->type == VEH_TREADED;
  v10 = vehDef->type <= VEH_TREADED;
  if ( vehDef->type != VEH_TREADED )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3358, ASSERT_TYPE_ASSERT, "( vehDef->type == VEH_TREADED )", (const char *)&queryFormat, "vehDef->type == VEH_TREADED");
    v9 = !v11;
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm6, dword ptr [rbx+67Ch]
  }
  if ( !v10 )
  {
    v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3362, ASSERT_TYPE_ASSERT, "( veh->rotateToYawAccel >= 0.0f )", (const char *)&queryFormat, "veh->rotateToYawAccel >= 0.0f");
    v9 = !v13;
    if ( v13 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+678h]
    vsubss  xmm1, xmm0, dword ptr [rbx+10Ch]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm12, xmm12, xmm12
    vroundss xmm2, xmm12, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm7, xmm0, cs:__real@43b40000
    vucomiss xmm7, xmm6
  }
  if ( !v9 )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm9 }
    *(double *)&_XMM0 = G_Vehicle_GetDeltaTime();
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+67Ch]
      vucomiss xmm5, xmm6
      vmovaps xmm9, xmm0
    }
    if ( v9 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+5ACh]
        vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
        vcmpless xmm1, xmm6, xmm7
        vblendvps xmm1, xmm2, xmm3, xmm1
        vmovss  dword ptr [rbx+16Ch], xmm1
        vmovss  xmm2, dword ptr [rbx+5ACh]; rate
        vmovss  xmm1, dword ptr [rbx+10Ch]; cur
        vmovaps xmm3, xmm0; deltaTime
        vmovss  xmm0, dword ptr [rbx+678h]; tgt
      }
      *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovss  dword ptr [rbx+10Ch], xmm0
        vucomiss xmm0, dword ptr [rbx+678h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+16Ch]; cur
        vmulss  xmm3, xmm5, cs:__real@3f000000
        vandps  xmm2, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vdivss  xmm0, xmm1, xmm5
        vmulss  xmm4, xmm0, xmm0
        vmulss  xmm4, xmm4, xmm3
        vcomiss xmm4, xmm2
      }
      if ( v23 )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+5ACh]
          vxorps  xmm3, xmm4, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm6, xmm7
          vblendvps xmm0, xmm3, xmm4, xmm0; tgt
          vmovaps xmm3, xmm9; deltaTime
          vmovaps xmm2, xmm5; rate
        }
        *(double *)&_XMM0 = LinearTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
        __asm
        {
          vmovss  dword ptr [rbx+16Ch], xmm0
          vmulss  xmm0, xmm0, xmm9
          vaddss  xmm1, xmm0, dword ptr [rbx+10Ch]
          vmulss  xmm4, xmm1, cs:__real@3b360b61
          vaddss  xmm2, xmm4, cs:__real@3f000000
          vxorps  xmm0, xmm0, xmm0
          vmovss  xmm1, xmm0, xmm2
          vroundss xmm3, xmm12, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmovss  dword ptr [rbx+10Ch], xmm1
        }
        goto LABEL_26;
      }
      __asm
      {
        vmulss  xmm0, xmm2, cs:__real@40000000
        vdivss  xmm1, xmm0, xmm5
        vsqrtss xmm2, xmm1, xmm1
        vmulss  xmm3, xmm2, xmm5
        vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
        vcmpless xmm0, xmm6, xmm7
        vblendvps xmm2, xmm1, xmm3, xmm0
        vmovss  dword ptr [rbx+16Ch], xmm2
        vmovss  xmm1, dword ptr [rbx+10Ch]; cur
        vmovss  xmm0, dword ptr [rbx+678h]; tgt
        vmovss  [rsp+78h+arg_0], xmm2
        vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; rate
        vmovaps xmm3, xmm9; deltaTime
      }
      *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
      __asm
      {
        vmovss  dword ptr [rbx+10Ch], xmm0
        vucomiss xmm0, dword ptr [rbx+678h]
      }
      if ( v34 )
      {
LABEL_25:
        ent = _RBX->ent;
        _RBX->rotateToYawMode = VEH_ROTATE_TO_OFF;
        GScr_Notify(ent, scr_const.rotatedone, 0);
        goto LABEL_26;
      }
      __asm { vucomiss xmm6, dword ptr [rbx+16Ch] }
    }
    if ( v34 )
      goto LABEL_25;
LABEL_26:
    __asm { vmovaps xmm9, [rsp+78h+var_38] }
    goto LABEL_27;
  }
  v22 = _RBX->ent;
  _RBX->rotateToYawMode = VEH_ROTATE_TO_OFF;
  GScr_Notify(v22, scr_const.rotatedone, 0);
LABEL_27:
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm12, [rsp+78h+var_48]
  }
}

/*
==============
G_Vehicle_UpdateScriptablePlayerUseCache
==============
*/
void G_Vehicle_UpdateScriptablePlayerUseCache(const gentity_s *const vehEnt)
{
  unsigned __int8 v2; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char **p_name; 
  const char *name; 
  unsigned int i; 
  const char **v7; 
  __int64 v8; 
  VehicleUsableParts *v9; 
  const char *v10; 
  const char *v11; 
  GVehicles *v12; 
  __int64 v17; 
  unsigned int scriptableIndex; 
  ScriptableStateUsableDef *outUsableDef; 
  VehicleUsableParts usableScriptableParts[4]; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7039, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehEnt->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7040, ASSERT_TYPE_ASSERT, "( vehEnt->vehicle )", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  v2 = 0;
  if ( ScriptableSv_TryGetIndexForEntity(vehEnt, &scriptableIndex) )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    p_name = &InstanceCommonContext->def->name;
    name = InstanceCommonContext->def->name;
    if ( InstanceCommonContext->def->usablePartCount )
    {
      Com_Printf(29, "[Vehicle Use]  Initializing usable scriptable %s\n", name);
      for ( i = 0; i < *((_DWORD *)p_name + 5); ++i )
      {
        v7 = (const char **)&p_name[3][104 * i];
        if ( ScriptableCommon_GetPartHasUsableState((const ScriptablePartDef *)v7) )
        {
          if ( v2 == 10 )
          {
            Com_PrintError(29, "[Vehicle Use] Scriptable %s has more usable parts than the maximum allowed for vehicles (%i)\n", *p_name, 10i64);
            break;
          }
          v8 = v2++;
          v9 = &usableScriptableParts[v8];
          v9->serverInstanceFlatId = truncate_cast<unsigned short,unsigned int>(*((_DWORD *)v7 + 5));
          v9->partName = *((_DWORD *)v7 + 2);
          if ( !ScriptableCommon_GetPartFirstUsableState((const ScriptablePartDef *)v7, (const ScriptableStateUsableDef **)&outUsableDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7085, ASSERT_TYPE_ASSERT, "(ScriptableCommon_GetPartFirstUsableState( partDef, usableDef ))", (const char *)&queryFormat, "ScriptableCommon_GetPartFirstUsableState( partDef, usableDef )") )
            __debugbreak();
          if ( !outUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7086, ASSERT_TYPE_ASSERT, "(usableDef)", (const char *)&queryFormat, "usableDef") )
            __debugbreak();
          v10 = v7[4];
          v11 = SL_ConvertToString(outUsableDef->hintTag);
          Com_Printf(29, "[Vehicle Use]  Seat %i: %s (tag '%s' or '%s')\n", v2, *v7, v11, v10);
        }
      }
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      v12 = GVehicles::ms_gVehiclesSystem;
      if ( GVehicleSuspendManager::IsSuspended(&GVehicles::ms_gVehiclesSystem->m_suspendManager, vehEnt) )
      {
        GVehicleSuspendManager::SetUsableInfo(&v12->m_suspendManager, vehEnt, v2, usableScriptableParts);
      }
      else
      {
        _RAX = vehEnt->vehicle;
        if ( _RAX )
        {
          _RAX->usableScriptablePartCount = v2;
          __asm
          {
            vmovups ymm0, ymmword ptr [rsp+0D8h+usableScriptableParts.serverInstanceFlatId]
            vmovups ymmword ptr [rax+74Ch], ymm0
            vmovups ymm1, [rsp+0D8h+var_68]
            vmovups ymmword ptr [rax+76Ch], ymm1
            vmovups xmm0, [rsp+0D8h+var_48]
            vmovups xmmword ptr [rax+78Ch], xmm0
          }
        }
        else
        {
          LODWORD(v17) = vehEnt->s.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported case for SetUsableInfo (Ent %i, Type %i)", v17, vehEnt->s.eType) )
            __debugbreak();
        }
      }
    }
    else
    {
      Com_Printf(29, "[Vehicle Use] Initializing vehicle scriptable %s, no usable parts found.\n", name);
    }
  }
}

/*
==============
G_Vehicle_UpdateSounds
==============
*/
void G_Vehicle_UpdateSounds(gentity_s *ent)
{
  Vehicle *vehicle; 
  signed __int64 v4; 
  char v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v14; 
  __int64 v15; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 409, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 412, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RSI = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = ent - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v14) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v15) = 2048;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 417, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( G_GetEntityIndex( ent ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  v5 = 0;
  v6 = 0i64;
  if ( _RSI->suspensionHardSnd.name )
  {
    _RAX = vehicle->phys.wheelCompression;
    v8 = 0i64;
    while ( *((int *)_RAX + 316) < 0 )
    {
      ++v8;
      ++_RAX;
      if ( v8 >= 12 )
        goto LABEL_32;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, dword ptr [rax+30h]
      vcomiss xmm1, dword ptr [rsi+0E78h]
    }
    G_Utils_AddEvent(ent, 0xA8u, 0);
    v5 = 1;
  }
LABEL_32:
  if ( _RSI->suspensionSoftSnd.name && !v5 )
  {
    for ( _RAX = vehicle->phys.wheelCompression; *((int *)_RAX + 316) < 0; ++_RAX )
    {
      if ( ++v6 >= 12 )
        return;
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, dword ptr [rax+30h]
      vcomiss xmm1, dword ptr [rsi+0E68h]
    }
    G_Utils_AddEvent(ent, 0xA7u, 0);
  }
}

/*
==============
G_Vehicle_UpdateSteering
==============
*/
void G_Vehicle_UpdateSteering(gentity_s *ent)
{
  char v8; 
  GVehicles *VehicleSystem; 
  VehicleDrivingState drivingState; 
  BgVehiclePhysicsManager *v19; 
  BgVehiclePhysics *ObjectById; 

  __asm { vmovaps [rsp+0A8h+var_28], xmm6 }
  _RDI = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2999, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RDI->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3000, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  _RBX = _RDI->vehicle;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  _RBP = G_Vehicle_GetServerDef(_RBX->defIndex);
  __asm { vucomiss xmm6, dword ptr [rax+2E8h] }
  if ( v8 )
  {
    __asm { vmovss  dword ptr [rdi+68h], xmm6 }
  }
  else
  {
    if ( _RDI->scripted && !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3014, ASSERT_TYPE_ASSERT, "( !ent->scripted || Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "!ent->scripted || Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  xmm2, dword ptr [rbx+13Ch]
      vmovss  xmm3, dword ptr [rbx+140h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vucomiss xmm3, xmm6
    }
    if ( !BGVehicles::PhysicsIsValid(_RBX->physicsVehicle) || _RDI->scripted )
    {
      _RSI = DVARFLT_veh_nonPhysicsSteerScale;
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm8
        vmovaps [rsp+0A8h+var_48], xmm9
      }
      if ( !DVARFLT_veh_nonPhysicsSteerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "veh_nonPhysicsSteerScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10Ch]
        vsubss  xmm1, xmm0, dword ptr [rbx+118h]
        vmulss  xmm6, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm6, cs:__real@3f000000
        vmovss  xmm9, dword ptr [rsi+28h]
        vmovss  xmm8, dword ptr [rbp+2E8h]
        vxorps  xmm1, xmm8, cs:__xmm@80000000800000008000000080000000; min
        vxorps  xmm3, xmm3, xmm3
        vroundss xmm5, xmm3, xmm2, 1
        vsubss  xmm6, xmm6, xmm5
        vxorps  xmm5, xmm9, cs:__xmm@80000000800000008000000080000000
      }
      _EAX = 0;
      _ECX = 0;
      __asm
      {
        vmovd   xmm3, ecx
        vmovd   xmm0, eax
        vpcmpeqd xmm4, xmm0, xmm3
        vblendvps xmm3, xmm5, xmm9, xmm4
        vmulss  xmm0, xmm6, xmm3
        vmulss  xmm0, xmm0, cs:__real@43b40000; val
        vmovaps xmm2, xmm8; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rdi+68h], xmm0
        vmovaps xmm9, [rsp+0A8h+var_48]
        vmovaps xmm8, [rsp+0A8h+var_38]
      }
    }
    else
    {
      VehicleSystem = GVehicles::GetVehicleSystem();
      drivingState = _RBX->drivingState;
      if ( (drivingState == VEH_DRIVE_PATH_CONSTRAINED || drivingState == VEH_DRIVE_PLAYER) && (v19 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), ObjectById = BgVehiclePhysicsManager::GetObjectById(v19, _RBX->physicsVehicle), BgVehiclePhysics::IsDynamic(ObjectById)) )
      {
        *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))ObjectById->GetSteeringAngle)(ObjectById);
        __asm { vmovss  dword ptr [rdi+68h], xmm0 }
      }
      else
      {
        *(double *)&_XMM0 = GVehicles::PhysicsGetInputControl(VehicleSystem, _RBX->physicsVehicle, 2u);
        __asm
        {
          vmulss  xmm0, xmm0, dword ptr [rbp+2E8h]
          vmovss  dword ptr [rdi+68h], xmm0
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_28] }
}

/*
==============
G_Vehicle_UpdateVehicleControlledEntity
==============
*/
void G_Vehicle_UpdateVehicleControlledEntity(gentity_s *player, const unsigned int vehicleEntIndex)
{
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  bool IsValid; 
  GVehicles *v11; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  __int64 targetEntity; 
  char v17; 
  char v32; 
  GVehicles *v50; 
  BgVehiclePhysics *v51; 
  unsigned int PhysicsBodyId; 
  BGVehicles *vehicleSystem; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6951, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6952, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  _RSI = player->client;
  if ( _RSI->ps.vehicleState.entity == vehicleEntIndex )
  {
    GEntity = G_GetGEntity(vehicleEntIndex);
    vehicle = GEntity->vehicle;
    if ( vehicle )
    {
      IsValid = BGVehicles::PhysicsIsValid(vehicle->physicsVehicle);
      if ( !IsValid )
      {
        v11 = GVehicles::GetVehicleSystem();
        Instance = GWeaponMap::GetInstance();
        Handler = GHandler::getHandler();
        BG_PlayerStateToVehicleState(&_RSI->ps, &GEntity->s, 0, Handler, Instance, v11);
        G_Vehicle_SetPosition(GEntity, &_RSI->ps.vehicleState.origin, &_RSI->ps.vehicleState.velocity, &_RSI->ps.vehicleState.angles, 1);
      }
      targetEntity = _RSI->ps.vehicleState.targetEntity;
      if ( (_DWORD)targetEntity != 2047 )
      {
        __asm
        {
          vmovaps [rsp+0B8h+var_38], xmm6
          vmovaps [rsp+0B8h+var_48], xmm7
          vmovaps [rsp+0B8h+var_58], xmm8
        }
        if ( (unsigned int)targetEntity >= 0x7FE )
        {
          LODWORD(vehicleSystem) = targetEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6931, ASSERT_TYPE_ASSERT, "(unsigned)( targetEntityNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "targetEntityNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", vehicleSystem, 2046) )
            __debugbreak();
        }
        _RDI = DCONST_DVARFLT_bg_vehicle_target_min_speed;
        _RBX = &g_entities[targetEntity];
        if ( !DCONST_DVARFLT_bg_vehicle_target_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_min_speed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vsubss  xmm6, xmm0, dword ptr [rbp+130h]
          vmovss  xmm0, dword ptr [rbx+138h]
          vmovss  xmm1, dword ptr [rbx+134h]
          vsubss  xmm7, xmm1, dword ptr [rbp+134h]
          vmovss  xmm3, dword ptr [rsi+148h]
          vmovss  xmm4, dword ptr [rsi+144h]
          vsubss  xmm8, xmm0, dword ptr [rbp+138h]
          vmovss  xmm5, dword ptr [rsi+14Ch]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm5, xmm5
          vaddss  xmm2, xmm2, xmm1
          vcomiss xmm2, dword ptr [rdi+28h]
        }
        if ( !(v17 | v32) )
        {
          __asm
          {
            vmulss  xmm1, xmm3, xmm7
            vmulss  xmm0, xmm4, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm5, xmm8
            vaddss  xmm3, xmm2, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm3, xmm0
          }
          if ( v17 )
            goto LABEL_25;
        }
        _RBX = DCONST_DVARFLT_bg_vehicle_target_radius;
        if ( !DCONST_DVARFLT_bg_vehicle_target_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_radius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+28h]
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vcomiss xmm3, xmm0
        }
        if ( v17 )
        {
LABEL_25:
          _RSI->ps.vehicleState.targetEntity = 2047;
          GScr_Notify(GEntity, scr_const.goal_reached, 0);
        }
        __asm
        {
          vmovaps xmm7, [rsp+0B8h+var_48]
          vmovaps xmm6, [rsp+0B8h+var_38]
          vmovaps xmm8, [rsp+0B8h+var_58]
        }
      }
      if ( IsValid )
      {
        v50 = GVehicles::GetVehicleSystem();
        v51 = (BgVehiclePhysics *)v50->PhysicsGetVehicleObject(v50, GEntity->s.number);
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v51);
        Physics_GetRigidBodyAABB(v51->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
        v50->PhysicsUpdateEntityBounds(v50, GEntity->s.number, (const ExtentBounds *)&aabbMin);
      }
    }
    else if ( G_Vehicle_InUseByPlayer(GEntity, player) )
    {
      G_Vehicle_UnlinkPlayer(GEntity, player);
      BG_InitPlayerstateVehicle(&_RSI->ps);
    }
  }
  else
  {
    Com_Printf(15, "G_Vehicle_UpdateVehicleControlledEntity: Skipping because PS vehicle (%i) does not match supplied vehicle (%u)\n", (unsigned int)_RSI->ps.vehicleState.targetEntity, vehicleEntIndex);
  }
}

/*
==============
G_Vehicle_UpdateVehicleControlledWeapon
==============
*/
void G_Vehicle_UpdateVehicleControlledWeapon(gentity_s *player)
{
  gclient_s *client; 
  int entity; 
  __int64 v4; 
  gentity_s *v5; 
  __int64 v6; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7008, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7009, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  client = player->client;
  if ( client->ps.vehicleState.entity != 2047 && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 7u) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    entity = client->ps.vehicleState.entity;
    if ( (int)ComCharacterLimits::ms_gameData.m_staticEntityCount > entity || (unsigned int)entity > 0x7FE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v6) = client->ps.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7021, ASSERT_TYPE_ASSERT, "( static_cast<int>( ComCharacterLimits::GetStaticEntitiesMaxCount() ) ) <= ( ps->vehicleState.entity ) && ( ps->vehicleState.entity ) <= ( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity not in [static_cast<int>( ComCharacterLimits::GetStaticEntitiesMaxCount() ), ENTITYNUM_ORDINARY_END]\n\t%i not in [%i, %i]", v6, ComCharacterLimits::ms_gameData.m_staticEntityCount, 2046) )
        __debugbreak();
    }
    v4 = client->ps.vehicleState.entity;
    v5 = &g_entities[v4];
    if ( v5->vehicle )
    {
      G_Vehicle_UpdateRemoteDriveTurret(&g_entities[v4]);
      if ( v5->vehicle )
        G_Vehicle_UpdateGroundTarget(&client->ps, v5);
    }
  }
}

/*
==============
G_Vehicle_Use
==============
*/
void G_Vehicle_Use(gentity_s *vehEnt, gentity_s *playerEnt, gentity_s *pActivator)
{
  gclient_s *client; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5604, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5605, ASSERT_TYPE_ASSERT, "( playerEnt )", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  client = playerEnt->client;
  if ( client )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) && G_Vehicle_InUseByPlayer(vehEnt, playerEnt) )
      G_Vehicle_UnlinkPlayer(vehEnt, playerEnt);
    else
      G_Vehicle_LinkPlayer(vehEnt, playerEnt);
  }
}

/*
==============
G_Vehicle_ValidateAssetContents
==============
*/
void G_Vehicle_ValidateAssetContents(gentity_s *ent, const VehicleDef *vehDef)
{
  unsigned __int16 model; 
  PhysicsAsset *physicsAsset; 
  const char *ModelName; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4130, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  model = ent->model;
  if ( model )
  {
    physicsAsset = G_Utils_GetModel(model)->physicsAsset;
    if ( physicsAsset )
    {
      if ( (Physics_GetPhysicsAssetContents(physicsAsset) & 0x800000) == 0 )
      {
        ModelName = G_CString_GetModelName(ent->model);
        Com_PrintError(1, "Vehicle %s with Model %s does not have CONTENTS_VEHICLE set on its collision asset. This will cause collision errors, because the client and server will not agree.\n", vehDef->name, ModelName);
      }
    }
  }
}

/*
==============
G_Vehicle_ValidateLinkedOwner
==============
*/
bool G_Vehicle_ValidateLinkedOwner(const gentity_s *vehicle, const gentity_s *vehicleOwner)
{
  const playerState_s *EntityPlayerStateConst; 

  if ( !vehicle || !vehicleOwner || !vehicleOwner->client )
    return 0;
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(vehicleOwner);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5349, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
    __debugbreak();
  return EntityPlayerStateConst->linkEnt == vehicle->s.number || G_EntIsLinkedToAncestor(vehicleOwner, vehicle);
}

/*
==============
G_Vehicle_VerifyPosition
==============
*/
void G_Vehicle_VerifyPosition(gentity_s *ent)
{
  __int64 v4; 
  char *Value; 
  unsigned int *v6; 
  unsigned int v7; 
  _QWORD *v8; 
  char *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  ThreadContext CurrentThreadContext; 
  unsigned __int8 modelType; 
  unsigned int Instance; 
  __int64 v55; 
  __int64 v56; 
  Bounds bounds; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1768, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RDI = ent->vehicle;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1771, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v4 = 3i64;
  Value = (char *)Sys_GetValue(0);
  v6 = (unsigned int *)(Value + 4016);
  if ( (unsigned int)(*((_DWORD *)Value + 1004) + 1) >= 3 )
  {
    LODWORD(v55) = *((_DWORD *)Value + 1004) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v55, 3) )
      __debugbreak();
  }
  v7 = *v6 + 1;
  *v6 = v7;
  if ( v7 >= 3 )
  {
    LODWORD(v56) = 3;
    LODWORD(v55) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v55, v56) )
      __debugbreak();
  }
  v8 = Value + 2088;
  v9 = Value + 40;
  if ( *v8 < (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v8 += 8i64;
  if ( *v8 >= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v8 = v6;
  if ( *v8 <= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v10 = (int)*v6;
  v11 = __rdtsc();
  v6[v10 + 2] = v11;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 48, NULL, 0);
  modelType = ent->r.modelType;
  if ( modelType == 5 )
  {
    __asm { vmovaps [rsp+98h+var_38], xmm6 }
    _RBX = s_vehicleServers;
    __asm { vmovss  xmm6, cs:__real@42800000 }
    while ( 1 )
    {
      if ( _RBX->ent )
      {
        if ( _RBX->ent != ent && _RDI->drivingState == VEH_DRIVE_PLAYER )
        {
          __asm
          {
            vmovsd  xmm1, qword ptr [rbx+130h]
            vmovups xmm0, xmmword ptr [rbx+120h]
            vmovups xmmword ptr [rsp+98h+bounds.midPoint], xmm0
            vmovss  xmm2, dword ptr [rsp+98h+bounds.midPoint+4]
            vmovsd  qword ptr [rsp+98h+bounds.halfSize+4], xmm1
          }
          bounds.halfSize.v[2] = *((float *)&_RT0 + 1);
          __asm
          {
            vshufps xmm0, xmm0, xmm0, 0FFh
            vaddss  xmm0, xmm0, xmm6
            vmovss  dword ptr [rsp+98h+bounds.halfSize], xmm0
            vaddss  xmm0, xmm1, xmm6
            vmovss  xmm1, dword ptr [rsp+98h+bounds.midPoint]
            vmovss  dword ptr [rsp+98h+bounds.halfSize+4], xmm0
            vaddss  xmm0, xmm1, dword ptr [rax+130h]
            vmovss  dword ptr [rsp+98h+bounds.midPoint], xmm0
            vaddss  xmm1, xmm2, dword ptr [rax+134h]
            vmovss  xmm0, dword ptr [rsp+98h+bounds.midPoint+8]
            vmovss  dword ptr [rsp+98h+bounds.midPoint+4], xmm1
            vaddss  xmm2, xmm0, dword ptr [rax+138h]
            vmovss  dword ptr [rsp+98h+bounds.midPoint+8], xmm2
          }
          Bounds_ExpandToWidth(&bounds);
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent);
          if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, ent) )
            break;
        }
      }
      if ( (__int64)++_RBX >= (__int64)s_vehicleServerDefs )
        goto LABEL_39;
    }
    _RCX = &s_backup;
    __asm
    {
      vmovups xmm0, xmmword ptr [rcx]
      vmovups xmmword ptr [rdi+10h], xmm0
      vmovups xmm1, xmmword ptr [rcx+10h]
      vmovups xmmword ptr [rdi+20h], xmm1
      vmovups xmm0, xmmword ptr [rcx+20h]
      vmovups xmmword ptr [rdi+30h], xmm0
      vmovups xmm1, xmmword ptr [rcx+30h]
      vmovups xmmword ptr [rdi+40h], xmm1
      vmovups xmm0, xmmword ptr [rcx+40h]
      vmovups xmmword ptr [rdi+50h], xmm0
      vmovups xmm1, xmmword ptr [rcx+50h]
      vmovups xmmword ptr [rdi+60h], xmm1
      vmovups xmm0, xmmword ptr [rcx+60h]
      vmovups xmmword ptr [rdi+70h], xmm0
      vmovups xmm0, xmmword ptr [rcx+70h]
      vmovups xmmword ptr [rdi+80h], xmm0
      vmovups xmm1, xmmword ptr [rcx+80h]
      vmovups xmmword ptr [rdi+90h], xmm1
      vmovups xmm0, xmmword ptr [rcx+90h]
      vmovups xmmword ptr [rdi+0A0h], xmm0
      vmovups xmm1, xmmword ptr [rcx+0A0h]
      vmovups xmmword ptr [rdi+0B0h], xmm1
      vmovups xmm0, xmmword ptr [rcx+0B0h]
      vmovups xmmword ptr [rdi+0C0h], xmm0
      vmovups xmm1, xmmword ptr [rcx+0C0h]
      vmovups xmmword ptr [rdi+0D0h], xmm1
    }
    *(_QWORD *)&_RDI->pathPos.switchNode[1].length = *(_QWORD *)&s_backup.pathPos.switchNode[1].length;
    _R8 = &_RDI->phys;
    *(_DWORD *)&_RDI->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&s_backup.pathPos.switchNode[1].notifyIdx;
    _RAX = &s_backup.phys;
    do
    {
      _R8 = (vehicle_physic_t *)((char *)_R8 + 128);
      __asm { vmovups xmm0, xmmword ptr [rax] }
      _RAX = (vehicle_physic_t *)((char *)_RAX + 128);
      __asm
      {
        vmovups xmmword ptr [r8-80h], xmm0
        vmovups xmm1, xmmword ptr [rax-70h]
        vmovups xmmword ptr [r8-70h], xmm1
        vmovups xmm0, xmmword ptr [rax-60h]
        vmovups xmmword ptr [r8-60h], xmm0
        vmovups xmm1, xmmword ptr [rax-50h]
        vmovups xmmword ptr [r8-50h], xmm1
        vmovups xmm0, xmmword ptr [rax-40h]
        vmovups xmmword ptr [r8-40h], xmm0
        vmovups xmm1, xmmword ptr [rax-30h]
        vmovups xmmword ptr [r8-30h], xmm1
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [r8-20h], xmm0
        vmovups xmm1, xmmword ptr [rax-10h]
        vmovups xmmword ptr [r8-10h], xmm1
      }
      --v4;
    }
    while ( v4 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [r8], xmm0
    }
    _R8->prevOrigin.v[1] = _RAX->prevOrigin.v[1];
    G_Vehicle_SetPosition(ent, &_RDI->phys.origin, &_RDI->phys.vel, &_RDI->phys.angles, 1);
    *(_QWORD *)&_RDI->speed = 0i64;
LABEL_39:
    __asm { vmovaps xmm6, [rsp+98h+var_38] }
  }
  else if ( modelType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1777, ASSERT_TYPE_ASSERT, "( ent->r.modelType == MODELTYPE_CAPSULE )", (const char *)&queryFormat, "ent->r.modelType == MODELTYPE_CAPSULE") )
  {
    __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
G_Vehicle_WriteVehiclePhysics
==============
*/
void G_Vehicle_WriteVehiclePhysics(MemoryFile *memFile, const Vehicle *veh)
{
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 629, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 630, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  p = veh->physicsVehicle;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
GVehicles::GetBone
==============
*/
__int64 GVehicles::GetBone(GVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  gentity_s *v7; 
  unsigned int *vehicle; 
  __int64 result; 

  v4 = entityIndex;
  v5 = bone;
  if ( entityIndex == 2047 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7457, ASSERT_TYPE_ASSERT, "( entityIndex != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7458, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v6 )
    __debugbreak();
LABEL_7:
  v7 = &g_entities[v4];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7461, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = (unsigned int *)v7->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7464, ASSERT_TYPE_ASSERT, "( vehicle )", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  if ( !Com_GetServerDObjForEnt(v7) )
    return 0xFFFFFFFFi64;
  switch ( (int)v5 )
  {
    case 0:
      return vehicle[435];
    case 1:
      return vehicle[442];
    case 2:
      return vehicle[436];
    case 3:
      return vehicle[437];
    case 4:
      return vehicle[438];
    case 5:
      return vehicle[441];
    case 6:
      return vehicle[439];
    case 7:
      return vehicle[440];
    default:
      if ( (int)v5 < 8 )
      {
        if ( (int)v5 < 10 )
          return 0xFFFFFFFFi64;
      }
      else if ( (int)v5 < 10 )
      {
        goto LABEL_25;
      }
      if ( (int)v5 >= BGVehicles::GetWheelCount(NULL) + 10 )
        return 0xFFFFFFFFi64;
LABEL_25:
      result = vehicle[v5 + 437];
      break;
  }
  return result;
}

/*
==============
GVehicles::GetDObjFromEntityNumber
==============
*/
DObj *GVehicles::GetDObjFromEntityNumber(GVehicles *this, int entityNum)
{
  __int64 v2; 
  int v5; 

  v2 = entityNum;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, v5) )
      __debugbreak();
  }
  if ( G_IsEntityInUse(v2) )
    return Com_GetServerDObjForEnt(&g_entities[v2]);
  else
    return 0i64;
}

/*
==============
GVehicles::GetLocalClientNum
==============
*/
__int64 GVehicles::GetLocalClientNum(GVehicles *this)
{
  return 0i64;
}

/*
==============
GVehicles::GetSuspendManager
==============
*/
GVehicleSuspendManager *GVehicles::GetSuspendManager(GVehicles *this)
{
  return &this->m_suspendManager;
}

/*
==============
GVehicles::GetSuspendManager
==============
*/
GVehicleSuspendManager *GVehicles::GetSuspendManager(GVehicles *this)
{
  return &this->m_suspendManager;
}

/*
==============
GVehicles::GetTeam
==============
*/
playerState_s *GVehicles::GetTeam(GVehicles *this, const entityState_t *es)
{
  __int64 number; 
  gentity_s *v4; 
  unsigned __int8 playerIndex; 
  unsigned __int8 v6; 
  playerState_s *result; 
  playerState_s *v8; 
  GHandler *Handler; 
  __int64 v10; 
  __int64 v11; 
  team_t outTeam; 

  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7378, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((es->eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7379, ASSERT_TYPE_ASSERT, "( BG_IsVehicleEntity( es ) )", (const char *)&queryFormat, "BG_IsVehicleEntity( es )") )
    __debugbreak();
  number = es->number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v10) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7380, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( es->number ) )", (const char *)&queryFormat, "G_IsEntityInUse( es->number )") )
    __debugbreak();
  v4 = &g_entities[es->number];
  playerIndex = v4->s.staticState.vehiclePlayer.playerIndex;
  if ( !playerIndex )
    return (playerState_s *)v4->s.staticState.vehiclePlayer.teamId;
  v6 = playerIndex - 1;
  if ( (unsigned int)v6 >= level.maxclients )
  {
    LODWORD(v11) = level.maxclients;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7388, ASSERT_TYPE_ASSERT, "(unsigned)( playerIndex ) < (unsigned)( level.maxclients )", "playerIndex doesn't index level.maxclients\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  result = G_GetEntityPlayerState(&g_entities[v6]);
  v8 = result;
  if ( result )
  {
    Handler = GHandler::getHandler();
    GHandler::GetPlayerTeam(Handler, v8->clientNum, &outTeam);
    return (playerState_s *)(unsigned int)outTeam;
  }
  return result;
}

/*
==============
GVehicles::GetUsableInfo
==============
*/
void GVehicles::GetUsableInfo(GVehicles *this, const gentity_s *ent, unsigned __int8 *outUsableScriptablePartCount, const VehicleUsableParts **outUsableScriptableParts)
{
  GVehicleSuspendManager *p_m_suspendManager; 
  Vehicle *vehicle; 
  int number; 
  int eType; 

  p_m_suspendManager = &this->m_suspendManager;
  if ( GVehicleSuspendManager::IsSuspended(&this->m_suspendManager, ent) )
  {
    GVehicleSuspendManager::GetUsableInfo(p_m_suspendManager, ent, outUsableScriptablePartCount, outUsableScriptableParts);
  }
  else
  {
    vehicle = ent->vehicle;
    if ( vehicle )
    {
      *outUsableScriptablePartCount = vehicle->usableScriptablePartCount;
      *outUsableScriptableParts = vehicle->usableScriptableParts;
    }
    else
    {
      *outUsableScriptablePartCount = 0;
      *outUsableScriptableParts = NULL;
      eType = ent->s.eType;
      number = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8229, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported case for GetUsableInfo (Ent %i, Type %i)", number, eType) )
        __debugbreak();
    }
  }
}

/*
==============
GVehicles::GetVehicleDef
==============
*/
const VehicleDef *GVehicles::GetVehicleDef(GVehicles *this, const entityState_t *es)
{
  __int64 v4; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 284, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( es->number >= 0x800u )
  {
    LODWORD(v4) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( 2048 ) )", "es->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( !g_entities[es->number].vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 286, ASSERT_TYPE_ASSERT, "( g_entities[es->number].vehicle )", (const char *)&queryFormat, "g_entities[es->number].vehicle") )
    __debugbreak();
  return G_Vehicle_GetServerDef(g_entities[es->number].vehicle->defIndex);
}

/*
==============
GVehicles::GetVehicleDef
==============
*/
const VehicleDef *GVehicles::GetVehicleDef(GVehicles *this, const playerState_s *ps)
{
  gentity_s *v3; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6839, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6840, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  v3 = &g_entities[ps->vehicleState.entity];
  if ( !v3->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6843, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  return G_Vehicle_GetServerDef(v3->vehicle->defIndex);
}

/*
==============
GVehicles::GetVehicleOwner
==============
*/
gentity_s *GVehicles::GetVehicleOwner(GVehicles *this, const gentity_s *vehicleEnt)
{
  if ( EntHandle::isDefined(&vehicleEnt->remoteControlledOwner) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7428, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
      __debugbreak();
    return EntHandle::ent(&vehicleEnt->remoteControlledOwner);
  }
  else if ( EntHandle::isDefined(&vehicleEnt->r.ownerNum) )
  {
    return EntHandle::ent(&vehicleEnt->r.ownerNum);
  }
  else
  {
    return 0i64;
  }
}

/*
==============
GVehicles::GetWorldBoneMatrix
==============
*/
__int64 GVehicles::GetWorldBoneMatrix(GVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  __int64 v5; 
  bool v7; 

  v5 = entityIndex;
  if ( entityIndex == 2047 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7504, ASSERT_TYPE_ASSERT, "( entityIndex != ENTITYNUM_NONE )", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7505, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v7 )
    __debugbreak();
LABEL_7:
  G_Utils_DObjGetWorldBoneIndexMatrix(&g_entities[v5], boneIndex, result);
  return 1i64;
}

/*
==============
GVehicles::IsSuspended
==============
*/
bool GVehicles::IsSuspended(GVehicles *this, const gentity_s *ent)
{
  return GVehicleSuspendManager::IsSuspended(&this->m_suspendManager, ent);
}

/*
==============
GVehicles::PathComputeLookAhead
==============
*/

void __fastcall GVehicles::PathComputeLookAhead(GVehicles *this, __int16 nodeIdx, const vec3_t *curPos, double lookAheadDist, vec3_t *outLookAhead)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !BGVehicles::PathIsValidNode(nodeIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8045, ASSERT_TYPE_ASSERT, "(BGVehicles::PathIsValidNode( nodeIdx ))", (const char *)&queryFormat, "BGVehicles::PathIsValidNode( nodeIdx )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm6; lookAheadDist
    vmovaps xmm6, [rsp+48h+var_18]
  }
  G_VehiclePath_ComputeLookAhead(nodeIdx, curPos, *(float *)&_XMM2, outLookAhead);
}

/*
==============
GVehicles::PathComputeLookAhead
==============
*/

void __fastcall GVehicles::PathComputeLookAhead(GVehicles *this, double manualSpeed, const VehiclePathPos *vpp, double manualTime, vec3_t *outLookAheadOrigin, vec3_t *outLookAheadAngles)
{
  char v17; 
  bool v18; 
  bool v19; 
  __int64 v22; 
  __int64 v86; 
  __int64 v87; 
  VehiclePathPos vppa; 
  char v89; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RDI = outLookAheadOrigin;
  _RBX = vpp;
  _RSI = outLookAheadAngles;
  __asm
  {
    vmovaps xmm7, xmm3
    vmovaps xmm9, xmm1
  }
  v17 = 0;
  v18 = vpp == NULL;
  if ( !vpp )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8054, ASSERT_TYPE_ASSERT, "(vpp)", (const char *)&queryFormat, "vpp");
    v17 = 0;
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymm1, ymmword ptr [rbx+80h]
  }
  v22 = *(_QWORD *)&_RBX->switchNode[1].length;
  _RDX = &vppa;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rbx+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rbx+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rbx+60h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovups ymmword ptr [rdx+80h], ymm1
    vmovups ymm1, ymmword ptr [rbx+0A0h]
    vmovups ymmword ptr [rdx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rbx+0C0h]
    vmovups xmmword ptr [rdx+0C0h], xmm1
  }
  *(_QWORD *)&vppa.switchNode[1].length = v22;
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm0, xmm8
  }
  *(_DWORD *)&vppa.switchNode[1].notifyIdx = *(_DWORD *)&_RBX->switchNode[1].notifyIdx;
  if ( v18 )
  {
    __asm { vxorps  xmm10, xmm10, xmm10 }
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm9, xmm0
      vaddss  xmm10, xmm0, xmm7
      vcomiss xmm10, xmm6
      vmovss  xmm7, cs:__real@bf800000
    }
    do
    {
      G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD);
      __asm
      {
        vaddss  xmm10, xmm10, xmm7
        vcomiss xmm10, xmm6
      }
    }
    while ( !v17 );
  }
  __asm
  {
    vcomiss xmm10, xmm8
    vmovsd  xmm0, qword ptr [rsp+1A0h+vpp.lookPos]
    vmovsd  qword ptr [rsp+1A0h+var_170], xmm0
    vmovsd  xmm0, qword ptr [rsp+1A0h+vpp.angles]
    vmovsd  qword ptr [rsp+1A0h+var_160], xmm0
  }
  if ( !(v17 | v18) )
  {
    __asm { vcomiss xmm10, xmm6 }
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8078, ASSERT_TYPE_ASSERT, "( manualTimeInternal < 1.0f )", (const char *)&queryFormat, "manualTimeInternal < 1.0f", v86, vppa.lookPos.v[2], v87, vppa.angles.v[2]) )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD);
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3b360b61
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm6, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rsp+1A0h+vpp.lookPos]
    vsubss  xmm1, xmm0, [rsp+1A0h+var_170]
    vmovss  xmm0, dword ptr [rbp+0A0h+vpp.lookPos+4]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, [rsp+1A0h+var_16C]
    vaddss  xmm3, xmm2, [rsp+1A0h+var_170]
    vmovss  xmm0, dword ptr [rbp+0A0h+vpp.lookPos+8]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+var_168]
    vmovss  xmm0, dword ptr [rsp+1A0h+vpp.angles]
    vmovss  dword ptr [rdi], xmm3
    vaddss  xmm3, xmm2, [rsp+1A0h+var_16C]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, [rsp+1A0h+var_160]
    vmovss  dword ptr [rdi+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_168]
    vmovss  dword ptr [rdi+8], xmm3
    vmulss  xmm3, xmm1, xmm8
    vaddss  xmm1, xmm3, xmm7
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, [rsp+1A0h+var_160]
    vmovss  xmm0, dword ptr [rsp+1A0h+vpp.angles+4]
    vsubss  xmm1, xmm0, [rsp+1A0h+var_15C]
    vmulss  xmm4, xmm1, xmm8
    vmovss  dword ptr [rsi], xmm2
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  xmm0, dword ptr [rsp+1A0h+vpp.angles+8]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, [rsp+1A0h+var_15C]
    vsubss  xmm1, xmm0, [rsp+1A0h+var_158]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vmovss  dword ptr [rsi+4], xmm3
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, [rsp+1A0h+var_158]
    vmovss  dword ptr [rsi+8], xmm3
  }
  _R11 = &v89;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
GVehicles::PathCountNodes
==============
*/
__int16 GVehicles::PathCountNodes(GVehicles *this, __int16 nodeIndex)
{
  return G_VehiclePath_CountNumNodesForPath(nodeIndex);
}

/*
==============
GVehicles::PathGetNode
==============
*/
const VehiclePathNode *GVehicles::PathGetNode(GVehicles *this, __int16 nodeIndex)
{
  if ( !BGVehicles::PathIsValidNode(nodeIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8037, ASSERT_TYPE_ASSERT, "(BGVehicles::PathIsValidNode( nodeIndex ))", (const char *)&queryFormat, "BGVehicles::PathIsValidNode( nodeIndex )") )
    __debugbreak();
  return G_VehiclePath_GetNode(nodeIndex);
}

/*
==============
GVehicles::PathInit
==============
*/
void GVehicles::PathInit(GVehicles *this, __int16 nodeIndex, VehiclePathPos *vpp)
{
  G_VehiclePath_AttachPathPos(vpp, nodeIndex);
}

/*
==============
GVehicles::PathIsEnd
==============
*/
bool GVehicles::PathIsEnd(GVehicles *this, VehiclePathPos *vpp)
{
  return G_VehiclePath_IsEndOfPath(vpp);
}

/*
==============
GVehicles::PathReset
==============
*/
void GVehicles::PathReset(GVehicles *this, VehiclePathPos *vpp)
{
  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8100, ASSERT_TYPE_SANITY, "( vpp )", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  G_VehiclePath_FreePathPos(vpp);
}

/*
==============
GVehicles::PathUpdatePos
==============
*/

void __fastcall GVehicles::PathUpdatePos(GVehicles *this, const int entNum, double deltaTime, double manualSpeed, VehiclePathPos *vpp, float *inOutManualTime, vec3_t *outNextOrigin, vec3_t *outNextAngles)
{
  bool v20; 
  bool v21; 
  __int64 v24; 
  char v39; 
  __int64 v42; 
  __int64 v102; 
  __int64 v103; 
  VehiclePathPos nextVpp; 
  char v105; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RDI = vpp;
  _RBX = inOutManualTime;
  _R14 = outNextOrigin;
  _R15 = outNextAngles;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
  }
  v20 = vpp == NULL;
  if ( !vpp )
  {
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8107, ASSERT_TYPE_ASSERT, "(vpp)", (const char *)&queryFormat, "vpp");
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymm1, ymmword ptr [rdi+80h]
  }
  v24 = *(_QWORD *)&vpp->switchNode[1].length;
  _RDX = &nextVpp;
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rdx+20h], ymm0
    vmovups ymm0, ymmword ptr [rdi+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups ymm0, ymmword ptr [rdi+60h]
    vmovups ymmword ptr [rdx+60h], ymm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovups ymmword ptr [rdx+80h], ymm1
    vmovups ymm1, ymmword ptr [rdi+0A0h]
    vmovups ymmword ptr [rdx+0A0h], ymm1
    vmovups xmm1, xmmword ptr [rdi+0C0h]
    vmovups xmmword ptr [rdx+0C0h], xmm1
  }
  *(_QWORD *)&nextVpp.switchNode[1].length = v24;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm0, xmm9
  }
  *(_DWORD *)&nextVpp.switchNode[1].notifyIdx = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  if ( v20 )
  {
    *inOutManualTime = 0.0;
  }
  else
  {
    __asm
    {
      vdivss  xmm0, xmm8, xmm0
      vaddss  xmm1, xmm0, dword ptr [rbx]
      vcomiss xmm1, xmm6
      vmovss  dword ptr [rbx], xmm1
    }
    do
    {
      __asm { vmovaps xmm2, xmm7; deltaTime }
      G_VehiclePath_UpdatePathPos(&nextVpp, VEH_PATH_FORWARD, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, xmm6
        vcomiss xmm1, xmm6
        vmovss  dword ptr [rbx], xmm1
      }
    }
    while ( !v39 );
  }
  G_VehiclePath_UpdatePathPosNotifies(vpp, &nextVpp, entNum, -1, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
  _RCX = &nextVpp;
  __asm { vmovups ymm0, ymmword ptr [rcx] }
  v42 = *(_QWORD *)&nextVpp.switchNode[1].length;
  __asm
  {
    vmovups ymmword ptr [rdi], ymm0
    vmovups ymm0, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rdi+20h], ymm0
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rdi+40h], ymm0
    vmovups ymm0, ymmword ptr [rcx+60h]
    vmovups ymmword ptr [rdi+60h], ymm0
    vmovups ymm0, ymmword ptr [rcx+80h]
    vmovups ymmword ptr [rdi+80h], ymm0
    vmovups ymm0, ymmword ptr [rcx+0A0h]
    vmovups ymmword ptr [rdi+0A0h], ymm0
    vmovups xmm0, xmmword ptr [rcx+0C0h]
    vmovups xmmword ptr [rdi+0C0h], xmm0
    vmovsd  xmm0, qword ptr [rsp+1A0h+nextVpp.origin]
  }
  *(_QWORD *)&vpp->switchNode[1].length = v42;
  *(_DWORD *)&vpp->switchNode[1].notifyIdx = *(_DWORD *)&nextVpp.switchNode[1].notifyIdx;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vcomiss xmm2, xmm9
    vmovsd  [rsp+1A0h+var_170], xmm0
    vmovsd  xmm0, qword ptr [rsp+1A0h+nextVpp.angles]
    vmovsd  [rsp+1A0h+var_160], xmm0
  }
  if ( !(v39 | v20) )
  {
    __asm { vcomiss xmm2, xmm6 }
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8133, ASSERT_TYPE_ASSERT, "( inOutManualTime < 1.0f )", (const char *)&queryFormat, "inOutManualTime < 1.0f", v102, nextVpp.origin.v[2], v103, nextVpp.angles.v[2]) )
      __debugbreak();
    __asm { vmovaps xmm2, xmm7; deltaTime }
    G_VehiclePath_UpdatePathPos(&nextVpp, VEH_PATH_FORWARD, *(float *)&_XMM2);
    __asm { vmovss  xmm2, dword ptr [rbx] }
  }
  __asm
  {
    vmovss  xmm8, cs:__real@3b360b61
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm6, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.origin]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+var_170]
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.origin+4]
    vmulss  xmm2, xmm1, xmm2
    vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_170]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+var_170+4]
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.origin+8]
    vmovss  dword ptr [r14], xmm3
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_170+4]
    vsubss  xmm1, xmm0, [rsp+1A0h+var_168]
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.angles]
    vmovss  dword ptr [r14+4], xmm3
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm3, xmm2, [rsp+1A0h+var_168]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+var_160]
    vmovss  dword ptr [r14+8], xmm3
    vmulss  xmm3, xmm1, xmm8
    vaddss  xmm1, xmm3, xmm7
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, dword ptr [rbx]
    vaddss  xmm2, xmm1, dword ptr [rsp+1A0h+var_160]
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.angles+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+var_160+4]
    vmulss  xmm4, xmm1, xmm8
    vmovss  dword ptr [r15], xmm2
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_160+4]
    vmovss  xmm0, dword ptr [rsp+1A0h+nextVpp.angles+8]
    vsubss  xmm1, xmm0, [rsp+1A0h+var_158]
    vmulss  xmm4, xmm1, xmm8
    vmovss  dword ptr [r15+4], xmm3
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, dword ptr [rbx]
    vaddss  xmm3, xmm2, [rsp+1A0h+var_158]
    vmovss  dword ptr [r15+8], xmm3
  }
  _R11 = &v105;
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
GVehicles::SetEntityAnimTree
==============
*/
void GVehicles::SetEntityAnimTree(GVehicles *this, const entityState_t *es, XAnim_s *anims)
{
  __int64 number; 
  __int64 v6; 
  DObj *ServerDObjForEnt; 
  XAnimTree *SmallTree; 
  __int64 v9; 
  __int64 v10; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 261, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  number = es->number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v9) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 262, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( es->number ) )", (const char *)&queryFormat, "G_IsEntityInUse( es->number )") )
    __debugbreak();
  v6 = es->number;
  if ( (unsigned int)v6 >= 0x800 )
  {
    LODWORD(v10) = 2048;
    LODWORD(v9) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 248, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( G_IsEntityInUse(v6) )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(&g_entities[v6]);
    if ( ServerDObjForEnt )
      goto LABEL_24;
  }
  else
  {
    ServerDObjForEnt = NULL;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 265, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
LABEL_24:
  if ( ServerDObjForEnt->tree )
  {
    Com_XAnimFreeSmallTree(ServerDObjForEnt->tree);
    ServerDObjForEnt->tree = NULL;
  }
  SmallTree = Com_XAnimCreateSmallTree(anims, MOVEMENT);
  if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 274, ASSERT_TYPE_ASSERT, "( tree )", (const char *)&queryFormat, "tree") )
    __debugbreak();
  g_entities[es->number].pAnimTree = SmallTree;
  DObjSetTree(ServerDObjForEnt, SmallTree);
}

/*
==============
GVehicles::SetUsableInfo
==============
*/
void GVehicles::SetUsableInfo(GVehicles *this, const gentity_s *ent, unsigned __int8 usableScriptablePartCount, const VehicleUsableParts *usableScriptableParts)
{
  GVehicleSuspendManager *p_m_suspendManager; 
  int number; 
  int eType; 

  p_m_suspendManager = &this->m_suspendManager;
  _RDI = usableScriptableParts;
  if ( GVehicleSuspendManager::IsSuspended(&this->m_suspendManager, ent) )
  {
    GVehicleSuspendManager::SetUsableInfo(p_m_suspendManager, ent, usableScriptablePartCount, _RDI);
  }
  else
  {
    _RAX = ent->vehicle;
    if ( _RAX )
    {
      _RAX->usableScriptablePartCount = usableScriptablePartCount;
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rax+74Ch], ymm0
        vmovups ymm1, ymmword ptr [rdi+20h]
        vmovups ymmword ptr [rax+76Ch], ymm1
        vmovups xmm0, xmmword ptr [rdi+40h]
        vmovups xmmword ptr [rax+78Ch], xmm0
      }
    }
    else
    {
      eType = ent->s.eType;
      number = ent->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported case for SetUsableInfo (Ent %i, Type %i)", number, eType) )
        __debugbreak();
    }
  }
}

/*
==============
GVehicles::SetVehicleCorpse
==============
*/
void GVehicles::SetVehicleCorpse(GVehicles *this, gentity_s *ent, unsigned int vehDefIndex)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 294, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ent->s.eType = ET_VEHICLE_CORPSE;
  Scr_SetString(&ent->classname, scr_const.script_vehicle_corpse);
  Scr_SetString(&ent->script_classname, scr_const.script_vehicle_corpse);
  ent->s.animInfo = 0i64;
  ent->handler = 0;
  GScr_Notify(ent, scr_const.death, 0);
  GScr_Notify(ent, scr_const.death_or_disconnect, 0);
}

/*
==============
GVehicles::UpdateAnimScriptedMove
==============
*/
void GVehicles::UpdateAnimScriptedMove(GVehicles *this, gentity_s *vehEnt)
{
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5776, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  G_Animscripted_Think(vehEnt);
}

/*
==============
GVehicles::UpdateGameModeSpecificVehicleInfo
==============
*/
void GVehicles::UpdateGameModeSpecificVehicleInfo(GVehicles *this, const entityState_t *es, BGVehicleInfo *info)
{
  gentity_s *v5; 
  gentity_s *v6; 
  unsigned int animData; 
  unsigned int v8; 
  int v9; 
  __int64 v10; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7177, ASSERT_TYPE_ASSERT, "( es )", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7178, ASSERT_TYPE_ASSERT, "( info )", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( es->number >= 0x800u )
  {
    LODWORD(v10) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7180, ASSERT_TYPE_ASSERT, "(unsigned)( es->number ) < (unsigned)( ( 2048 ) )", "es->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  v5 = &g_entities[es->number];
  info->m_hasPlayerState = 0;
  if ( EntHandle::isDefined(&v5->r.ownerNum) )
  {
    v6 = EntHandle::ent(&v5->r.ownerNum);
    if ( G_GetEntityPlayerState(v6) )
      info->m_hasPlayerState = 1;
    *(_QWORD *)info->m_desiredAim.v = 0i64;
    *(_QWORD *)&info->m_desiredAim.z = 0i64;
    *(_QWORD *)&info->m_desiredMove.y = 0i64;
  }
  animData = info->m_animInfo.animData;
  v8 = es->animInfo.animData;
  if ( ((v8 ^ animData) & 0xFFFFFFFE) != 0 )
  {
    v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)animData) & 1;
    info->m_animInfo.animData = v9;
    info->m_animInfo.animData = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)es->animInfo.animData) & 1;
  }
}

/*
==============
GVehicles::UpdatePathScriptedMove
==============
*/
void GVehicles::UpdatePathScriptedMove(GVehicles *this, Vehicle *veh)
{
  gentity_s *ent; 
  GVehicles *v4; 
  bool IsKeyframed; 
  unsigned int physicsVehicle; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5787, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5788, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( veh->drivingState != VEH_DRIVE_ANIMSCRIPTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5789, ASSERT_TYPE_ASSERT, "( veh->drivingState == VEH_DRIVE_ANIMSCRIPTED )", (const char *)&queryFormat, "veh->drivingState == VEH_DRIVE_ANIMSCRIPTED") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5790, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
    __debugbreak();
  ent = veh->ent;
  if ( !veh->ent->scripted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5795, ASSERT_TYPE_ASSERT, "( ent->scripted )", (const char *)&queryFormat, "ent->scripted") )
    __debugbreak();
  G_Animscripted_Think(ent);
  veh->phys.origin.v[0] = ent->r.currentOrigin.v[0];
  veh->phys.origin.v[1] = ent->r.currentOrigin.v[1];
  veh->phys.origin.v[2] = ent->r.currentOrigin.v[2];
  veh->phys.angles.v[0] = ent->r.currentAngles.v[0];
  veh->phys.angles.v[1] = ent->r.currentAngles.v[1];
  veh->phys.angles.v[2] = ent->r.currentAngles.v[2];
  G_Vehicle_CalcPhysVelFromPrevState(veh);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v4 = GVehicles::ms_gVehiclesSystem;
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    IsKeyframed = GVehicles::PhysicsIsKeyframed(v4, veh->physicsVehicle);
    physicsVehicle = veh->physicsVehicle;
    if ( IsKeyframed )
    {
      GVehicles::PhysicsSetKeyframeTransform(v4, physicsVehicle, &veh->phys.origin, &veh->phys.angles);
    }
    else
    {
      GVehicles::PhysicsSetLinearVelocity(v4, physicsVehicle, &veh->phys.vel);
      GVehicles::PhysicsSetAngularVelocity(v4, veh->physicsVehicle, &veh->phys.rotVel);
      GVehicles::PhysicsResetInputControls(v4, veh->physicsVehicle);
    }
  }
}

/*
==============
GVehicles::UpdateSpaceshipAnimscriptedMove
==============
*/
bool GVehicles::UpdateSpaceshipAnimscriptedMove(GVehicles *this, Vehicle *veh)
{
  return 0;
}

