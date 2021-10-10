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
char GVehicles::AimTurret(GVehicles *this, const Weapon *r_turretWeapon, int turretEntityNum)
{
  const WeaponDef *v5; 
  gentity_s *GEntity; 
  EntityTagInfo *tagInfo; 
  const gentity_s *parent; 
  const VehicleDef *ServerDef; 
  gentity_s *v10; 
  gentity_s *v11; 
  char result; 
  gclient_s *client; 
  float v16; 
  char v18; 
  float v19; 
  float v20; 
  double v21; 
  float v22; 
  double Float_Internal_DebugName; 
  float v24; 
  float v25; 
  double v26; 
  GVehicles *VehicleSystem; 
  double v33; 

  v5 = BG_WeaponDef(r_turretWeapon, 0);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7524, ASSERT_TYPE_ASSERT, "( turretWeapDef )", (const char *)&queryFormat, "turretWeapDef", -2i64) )
    __debugbreak();
  GEntity = G_GetGEntity(turretEntityNum);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7527, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !G_Turret_IsMountedOnVehicle(GEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7529, ASSERT_TYPE_ASSERT, "(G_Turret_IsMountedOnVehicle( turretEnt ))", (const char *)&queryFormat, "G_Turret_IsMountedOnVehicle( turretEnt )") )
    __debugbreak();
  tagInfo = GEntity->tagInfo;
  parent = tagInfo->parent;
  if ( !tagInfo->parent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7531, ASSERT_TYPE_ASSERT, "(vehEnt->vehicle)", (const char *)&queryFormat, "vehEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(parent->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7534, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v10 = this->GetVehicleOwner(this, parent);
  v11 = v10;
  if ( !ServerDef->vehiclePhysicsDef.physicsEnabled || !v10 )
    return 0;
  result = 0;
  if ( ServerDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
  {
    if ( !BGVehicles::PhysicsIsValid(parent->vehicle->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7549, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehEnt->vehicle->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehEnt->vehicle->physicsVehicle )") )
      __debugbreak();
    client = v11->client;
    _XMM13 = 0i64;
    __asm { vroundss xmm0, xmm13, xmm2, 1 }
    v16 = (float)((float)((float)(client->ps.viewangles.v[1] - parent->r.currentAngles.v[1]) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
    _XMM7 = 0i64;
    v18 = client->sess.cmd.remoteControlAngles[1];
    if ( v18 )
    {
      v19 = (float)v18;
      if ( (float)(v19 * v16) > 0.0 )
      {
        if ( v16 <= 0.0 )
          LODWORD(v20) = COERCE_UNSIGNED_INT(v16 / v5->rightArc) ^ _xmm;
        else
          v20 = v16 / v5->leftArc;
        v21 = I_fclamp(v20, 0.0, 1.0);
        v22 = *(float *)&v21;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonSteerFactor, "bg_wheelsonSteerFactor");
        v24 = (float)(v19 * 0.0078740157) * *(float *)&Float_Internal_DebugName;
        if ( dword_14AD45458 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
        {
          j__Init_thread_header(&dword_14AD45458);
          if ( dword_14AD45458 == -1 )
          {
            v33 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonSteerExp, "bg_wheelsonSteerExp");
            steerExp = *(float *)&v33;
            j__Init_thread_footer(&dword_14AD45458);
          }
        }
        v25 = powf_0(COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 * v22) & _xmm), steerExp);
        v26 = I_fclamp(v25, 0.0, 0.89999998);
        __asm { vcmpless xmm2, xmm7, xmm6 }
        _XMM1 = LODWORD(FLOAT_N1_0);
        __asm { vblendvps xmm2, xmm1, xmm9, xmm2 }
        *(float *)&_XMM7 = *(float *)&v26 * *(float *)&_XMM2;
      }
    }
    VehicleSystem = GVehicles::GetVehicleSystem();
    GVehicles::PhysicsSetInputControl(VehicleSystem, parent->vehicle->physicsVehicle, 2u, *(float *)&_XMM7);
    __asm { vroundss xmm3, xmm13, xmm2, 1 }
    GEntity->s.lerp.u.turret.gunAngles.v[0] = (float)((float)(client->ps.viewangles.v[0] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm2, xmm13, xmm1, 1 }
    GEntity->s.lerp.u.turret.gunAngles.v[1] = (float)((float)(client->ps.viewangles.v[1] * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    return 1;
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
  bool v8; 
  Vehicle *vehicle; 
  bool v10; 
  const characterInfo_t *v11; 
  GHandler *Handler; 
  int LinkedVehicle; 
  gentity_s *GEntity; 
  gentity_s *v15; 
  Vehicle *v16; 
  const VehicleDef *ServerDef; 
  animScriptVehicleSeat_t outVehicleSeat; 
  animScriptVehicleType_t outVehicleType; 

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
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2099, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !pPlayerEnt->tagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2100, ASSERT_TYPE_ASSERT, "( pPlayerEnt->tagInfo )", (const char *)&queryFormat, "pPlayerEnt->tagInfo") )
    __debugbreak();
  v7 = DVARBOOL_vehLegacyHeliRotorsDamage;
  if ( !DVARBOOL_vehLegacyHeliRotorsDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehLegacyHeliRotorsDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.enabled && pVehicleEnt->s.eType == ET_HELICOPTER && vehDef->dlcFloat[3] > 0.001;
  v10 = 0;
  if ( vehDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( vehDef->type == VEH_AIRCRAFT && vehDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_ROTARYWING )
    {
      vehicle = pVehicleEnt->vehicle;
      if ( vehicle )
      {
        if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
          v10 = 1;
      }
    }
  }
  if ( !v8 && !v10 )
    return 0;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v11 = (const characterInfo_t *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)pPlayerEnt->s.number);
  Handler = GHandler::getHandler();
  LinkedVehicle = BG_VehicleOccupancy_GetLinkedVehicle(Handler, &pPlayerEnt->s, v11, &outVehicleType, &outVehicleSeat);
  if ( LinkedVehicle == 2047 )
    return 0;
  GEntity = G_GetGEntity(LinkedVehicle);
  v15 = GEntity;
  if ( !GEntity )
    return 0;
  if ( !BG_IsVehicleEntity(&GEntity->s) )
    return 0;
  v16 = v15->vehicle;
  if ( !v16 )
    return 0;
  ServerDef = G_Vehicle_GetServerDef(v16->defIndex);
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
  __int128 v3; 
  __int128 v4; 
  const VehicleDef *ServerDef; 
  GVehicles *v9; 
  float v10; 
  float v11; 
  double DeltaTime; 
  float v15; 
  float v17; 
  float v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float s; 
  int v24; 
  float v25; 
  float v26; 
  float c; 
  vec3_t end; 
  tmat33_t<vec3_t> axis; 
  __int128 v30; 
  __int128 v31; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2831, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !targetPitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2832, ASSERT_TYPE_ASSERT, "( targetPitch )", (const char *)&queryFormat, "targetPitch") )
    __debugbreak();
  if ( !targetRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2833, ASSERT_TYPE_ASSERT, "( targetRoll )", (const char *)&queryFormat, "targetRoll") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  if ( ServerDef->type != VEH_BOAT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2836, ASSERT_TYPE_ASSERT, "( vehDef->type == VEH_BOAT )", (const char *)&queryFormat, "vehDef->type == VEH_BOAT") )
    __debugbreak();
  if ( ServerDef->fakeBodyBoatRockingFadeoutSpeed > veh->speed )
  {
    v31 = v3;
    v30 = v4;
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v9 = GVehicles::ms_gVehiclesSystem;
    if ( ServerDef->fakeBodyBoatRockingFadeoutSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2848, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingFadeoutSpeed > 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingFadeoutSpeed > 0") )
      __debugbreak();
    v10 = (float)(1.0 - (float)(veh->speed / ServerDef->fakeBodyBoatRockingFadeoutSpeed)) * ServerDef->fakeBodyBoatRockingAmplitude;
    v11 = v10 * v9->GetVehicleBoatRockingScale(v9);
    if ( ServerDef->fakeBodyBoatRockingRotationPeriod == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2852, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingRotationPeriod != 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingRotationPeriod != 0") )
      __debugbreak();
    DeltaTime = G_Vehicle_GetDeltaTime();
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    v15 = (float)((float)((float)((float)((float)(*(float *)&DeltaTime * 360.0) / ServerDef->fakeBodyBoatRockingRotationPeriod) + veh->boat.rockingDirYaw) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    veh->boat.rockingDirYaw = v15;
    __asm { vroundss xmm3, xmm7, xmm1, 1 }
    FastSinCos((float)((float)((float)(v15 - veh->phys.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 6.2831855, &s, &c);
    LODWORD(s) ^= _xmm;
    if ( ServerDef->fakeBodyBoatRockingPeriod == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2858, ASSERT_TYPE_ASSERT, "( vehDef->fakeBodyBoatRockingPeriod != 0 )", (const char *)&queryFormat, "vehDef->fakeBodyBoatRockingPeriod != 0") )
      __debugbreak();
    FastSinCos((float)((float)level.time * 0.0062831859) / ServerDef->fakeBodyBoatRockingPeriod, &v26, &v25);
    v17 = (float)(v11 * 0.30000001) * v26;
    v18 = (float)(v11 * v25) * s;
    v19 = v17 * c;
    *targetPitch = (float)((float)(v11 * v25) * c) - (float)(v17 * s);
    *targetRoll = (float)(v18 + v19) * 1.5;
    v24 = *(_DWORD *)targetPitch;
    if ( (v24 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2868, ASSERT_TYPE_SANITY, "( !IS_NAN( *targetPitch ) )", (const char *)&queryFormat, "!IS_NAN( *targetPitch )") )
      __debugbreak();
    v24 = *(_DWORD *)targetRoll;
    if ( (v24 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2869, ASSERT_TYPE_SANITY, "( !IS_NAN( *targetRoll ) )", (const char *)&queryFormat, "!IS_NAN( *targetRoll )") )
      __debugbreak();
    v20 = DCONST_DVARINT_bg_vehicleDebug;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.integer )
    {
      v21 = *targetPitch * 10.0;
      v22 = *targetRoll * -10.0;
      AnglesToAxis(&veh->phys.angles, &axis);
      end.v[0] = (float)((float)(v21 * axis.m[0].v[0]) + (float)(v22 * axis.m[1].v[0])) + veh->phys.origin.v[0];
      end.v[1] = (float)((float)(v21 * axis.m[0].v[1]) + (float)(v22 * axis.m[1].v[1])) + veh->phys.origin.v[1];
      end.v[2] = (float)((float)(v21 * axis.m[0].v[2]) + (float)(v22 * axis.m[1].v[2])) + veh->phys.origin.v[2];
      G_DebugLine(&veh->phys.origin, &end, &colorBlue, 0);
    }
  }
  else
  {
    *targetPitch = 0.0;
    *targetRoll = 0.0;
  }
}

/*
==============
G_Vehicle_CalcAccel
==============
*/
void G_Vehicle_CalcAccel(const gentity_s *ent, const char *move, vec3_t *outBodyAccel, vec3_t *outRotAccel)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  float v9; 
  const VehicleDef *v10; 
  float topSpeedReverse; 
  float accel; 
  int v13; 
  Vehicle *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  unsigned __int16 number; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  gentity_s *v24; 
  float v27; 
  BOOL v28; 
  BOOL v29; 
  BOOL v30; 
  BOOL v31; 
  float v32; 
  float *v33; 
  unsigned int v34; 
  signed __int64 v35; 
  bool v36; 
  float v37; 
  float v38; 
  float v42; 
  unsigned __int16 v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  gentity_s *v50; 
  float v51; 
  float v52; 
  char v53; 
  float v56; 
  float v57; 
  BOOL v58; 
  float v59; 
  float v61; 
  float v62; 
  double v63; 
  float v64; 
  double v65; 
  float v67; 
  double v70; 
  float v71; 
  unsigned __int16 v72; 
  __int64 v73; 
  unsigned int v74; 
  __int64 v75; 
  gentity_s *v76; 
  vec3_t *v79; 
  double v80; 
  char v81; 
  float v82; 
  double v83; 
  float v84; 
  float v85; 
  double v86; 
  float v87; 
  double v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  float v93; 
  float v94; 
  const VehicleDef *v96; 
  int v99[4]; 
  vec2_t vec; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1114, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !move && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1115, ASSERT_TYPE_ASSERT, "( move )", (const char *)&queryFormat, "move") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1118, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  v9 = 0.0;
  v10 = ServerDef;
  v96 = ServerDef;
  if ( vehicle->joltTime <= 0.0 )
  {
    v13 = *move;
    v14 = ent->vehicle;
    if ( (float)v13 < 0.0 )
      topSpeedReverse = v14->topSpeedReverse;
    else
      topSpeedReverse = v14->topSpeedForward;
    accel = ServerDef->accel;
  }
  else
  {
    topSpeedReverse = vehicle->joltSpeed;
    accel = vehicle->joltDecel;
    LOBYTE(v13) = *move;
  }
  v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(char)v13) & _xmm) * 0.0078740157;
  v16 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)move[1]) & _xmm) * 0.0078740157;
  v93 = v16;
  v94 = v15;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v17 = (float)level.frameDuration * 0.001;
  v18 = 1.0 / v17;
  v19 = 1;
  if ( v10->camRelativeControl )
  {
    number = ent->r.ownerNum.number;
    if ( !number )
      goto LABEL_161;
    v21 = number;
    v22 = number - 1;
    if ( v22 >= 0x800 )
    {
      LODWORD(v89) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v23 = v21 - 1;
    if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v23] )
    {
      LODWORD(v91) = ent->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v91) )
        __debugbreak();
    }
    if ( !ent->r.ownerNum.number )
    {
LABEL_161:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1150, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
        __debugbreak();
    }
    v24 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v24->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1154, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    v27 = (float)((float)((float)(v24->client->ps.viewangles.v[1] - vehicle->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    if ( v15 <= v16 )
    {
      v30 = v27 <= 0.0 && move[1] < 0;
      v31 = v27 >= 0.0 && move[1] > 0;
      if ( v30 || v31 )
        *(float *)v99 = (float)((float)(v17 * accel) + vehicle->phys.bodyVel.v[0]) * v16;
      else
        *(float *)v99 = (float)(vehicle->phys.bodyVel.v[0] - (float)(v17 * accel)) * v16;
      goto LABEL_68;
    }
    v28 = *move > 0 && COERCE_FLOAT(LODWORD(v27) & _xmm) < 105.0;
    v29 = *move < 0 && COERCE_FLOAT(LODWORD(v27) & _xmm) > 90.0;
    if ( v28 || v29 )
      goto LABEL_64;
LABEL_66:
    *(float *)v99 = (float)(vehicle->phys.bodyVel.v[0] - (float)(v17 * accel)) * v15;
    goto LABEL_68;
  }
  if ( *move <= 0 )
  {
    if ( *move >= 0 )
    {
      *(float *)v99 = 0.0;
      goto LABEL_68;
    }
    goto LABEL_66;
  }
LABEL_64:
  *(float *)v99 = (float)((float)(v17 * accel) + vehicle->phys.bodyVel.v[0]) * v15;
LABEL_68:
  v32 = vehicle->phys.bodyVel.v[2];
  v33 = (float *)v99;
  v34 = 0;
  v35 = (char *)outBodyAccel - (char *)v99;
  v36 = 1;
  *(float *)&v99[1] = 0.0;
  *(float *)&v99[2] = v32;
  LODWORD(v37) = LODWORD(topSpeedReverse) ^ _xmm;
  LODWORD(v38) = LODWORD(accel) ^ _xmm;
  do
  {
    if ( !v36 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
    }
    _XMM6 = *(unsigned int *)v33;
    if ( v37 > topSpeedReverse && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v37, topSpeedReverse) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm6, xmm7
      vminss  xmm6, xmm0, xmm12
    }
    if ( v34 >= 3 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
    }
    *v33 = *(float *)&_XMM6;
    if ( v34 >= 3 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
      LODWORD(v92) = 3;
      LODWORD(v90) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v90, v92) )
        __debugbreak();
    }
    v42 = (float)(*(float *)&_XMM6 - *(float *)((char *)v33 + (char *)vehicle - (char *)v99 + 324)) * v18;
    if ( v34 >= 3 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
    }
    *(float *)((char *)v33 + v35) = v42;
    if ( v34 >= 3 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
    }
    _XMM6 = *(unsigned int *)((char *)v33 + v35);
    if ( v38 > accel && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v38, accel) )
      __debugbreak();
    __asm
    {
      vmaxss  xmm0, xmm6, xmm9
      vminss  xmm6, xmm0, xmm8
    }
    if ( v34 >= 3 )
    {
      LODWORD(v91) = 3;
      LODWORD(v89) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v89, v91) )
        __debugbreak();
    }
    *(float *)((char *)v33++ + v35) = *(float *)&_XMM6;
    v36 = ++v34 < 3;
  }
  while ( (int)v34 < 3 );
  if ( !v96->camRelativeControl )
  {
    if ( move[2] > 0 )
    {
      v72 = ent->r.ownerNum.number;
      if ( !v72 )
        goto LABEL_162;
      v73 = v72;
      v74 = v72 - 1;
      if ( v74 >= 0x800 )
      {
        LODWORD(v91) = 2048;
        LODWORD(v89) = v74;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v91) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v75 = v73 - 1;
      if ( g_entities[v75].r.isInUse != g_entityIsInUse[v75] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v75] )
      {
        LODWORD(v91) = ent->r.ownerNum.number - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v91) )
          __debugbreak();
      }
      if ( !ent->r.ownerNum.number )
      {
LABEL_162:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1246, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
          __debugbreak();
      }
      v76 = EntHandle::ent(&ent->r.ownerNum);
      if ( !v76->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1250, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
        __debugbreak();
      _XMM3 = 0i64;
      __asm { vroundss xmm5, xmm3, xmm4, 1 }
      v71 = (float)((float)((float)((float)(v76->client->ps.viewangles.v[1] - vehicle->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM5) * 360.0) * v18;
      goto LABEL_151;
    }
    v81 = move[1];
    if ( v81 >= 0 )
    {
      if ( v81 <= 0 )
      {
LABEL_157:
        v83 = I_fclamp(v9, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
        v79 = outRotAccel;
        v84 = (float)(*(float *)&v83 - vehicle->phys.rotVel.v[1]) * v18;
        outRotAccel->v[1] = v84;
        v80 = I_fclamp(v84, COERCE_FLOAT(LODWORD(v96->rotAccel) ^ _xmm), v96->rotAccel);
        goto LABEL_158;
      }
      v82 = vehicle->phys.rotVel.v[1] - (float)(v17 * v96->rotAccel);
    }
    else
    {
      v82 = (float)(v17 * v96->rotAccel) + vehicle->phys.rotVel.v[1];
    }
    v9 = v82 * v93;
    goto LABEL_157;
  }
  v46 = ent->r.ownerNum.number;
  if ( !v46 )
    goto LABEL_163;
  v47 = v46;
  v48 = v46 - 1;
  if ( v48 >= 0x800 )
  {
    LODWORD(v91) = 2048;
    LODWORD(v89) = v48;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v89, v91) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v49 = v47 - 1;
  if ( g_entities[v49].r.isInUse != g_entityIsInUse[v49] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v49] )
  {
    LODWORD(v91) = ent->r.ownerNum.number - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v91) )
      __debugbreak();
  }
  if ( !ent->r.ownerNum.number )
  {
LABEL_163:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1209, ASSERT_TYPE_ASSERT, "( ent->r.ownerNum.isDefined() )", (const char *)&queryFormat, "ent->r.ownerNum.isDefined()") )
      __debugbreak();
  }
  v50 = EntHandle::ent(&ent->r.ownerNum);
  if ( !v50->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1213, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  v51 = vehicle->phys.prevAngles.v[1];
  v52 = v50->client->ps.viewangles.v[1];
  v53 = *move;
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  v57 = (float)((float)((float)(v52 - v51) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v56 = v57;
  v58 = COERCE_FLOAT(LODWORD(v57) & _xmm) < 105.0 && v53 > 0;
  if ( COERCE_FLOAT(LODWORD(v57) & _xmm) >= 90.0 || v53 >= 0 )
    v19 = 0;
  if ( v58 || v19 )
  {
    v63 = I_fclamp(v57, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
    v62 = (float)(*(float *)&v63 * v18) * v94;
  }
  else
  {
    v59 = (float)((float)(v52 + 180.0) - v51) * 0.0027777778;
    __asm { vroundss xmm4, xmm7, xmm3, 1 }
    v61 = (float)((float)((float)(v59 - *(float *)&_XMM4) * 360.0) * v18) * v94;
    I_fclamp(v61, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
    v62 = v61;
  }
  v64 = _mm_cvtepi32_ps((__m128i)(unsigned int)*move).m128_f32[0];
  LODWORD(vec.v[1]) = _mm_cvtepi32_ps((__m128i)(unsigned int)move[1]).m128_u32[0];
  vec.v[0] = v64;
  v65 = vectosignedyaw(&vec);
  __asm { vroundss xmm4, xmm7, xmm3, 1 }
  v67 = *(float *)&v65;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v56 - *(float *)&v65) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm) > 90.0 )
  {
    __asm { vroundss xmm3, xmm7, xmm0, 1 }
    v67 = (float)((float)((float)(*(float *)&v65 - 180.0) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
  __asm { vroundss xmm5, xmm7, xmm4, 1 }
  v70 = I_fclamp((float)((float)((float)((float)(v50->client->ps.viewangles.v[1] - v67) - vehicle->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM5) * 360.0, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
  v71 = v62 + (float)((float)(*(float *)&v70 * v18) * v93);
LABEL_151:
  v80 = I_fclamp(v71, COERCE_FLOAT(LODWORD(vehicle->topSpeedYawRate) ^ _xmm), vehicle->topSpeedYawRate);
  v79 = outRotAccel;
  *(float *)&v80 = (float)(*(float *)&v80 - vehicle->phys.rotVel.v[1]) * v18;
LABEL_158:
  v79->v[1] = *(float *)&v80;
  v85 = v18 * vehicle->phys.rotVel.v[0];
  v79->v[0] = COERCE_FLOAT(LODWORD(v85) ^ _xmm);
  v86 = I_fclamp(COERCE_FLOAT(LODWORD(v85) ^ _xmm), COERCE_FLOAT(LODWORD(v96->rotAccel) ^ _xmm), v96->rotAccel);
  v79->v[0] = *(float *)&v86;
  v87 = v18 * vehicle->phys.rotVel.v[2];
  v79->v[2] = COERCE_FLOAT(LODWORD(v87) ^ _xmm);
  v88 = I_fclamp(COERCE_FLOAT(LODWORD(v87) ^ _xmm), COERCE_FLOAT(LODWORD(v96->rotAccel) ^ _xmm), v96->rotAccel);
  v79->v[2] = *(float *)&v88;
}

/*
==============
G_Vehicle_CalcImpactDamageForScriptable
==============
*/
__int64 G_Vehicle_CalcImpactDamageForScriptable(const Vehicle *veh, unsigned int scriptableIndex, float collDmg, float collSpeed, vec3_t *outDmgDir)
{
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v8; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v10; 
  __int128 v12; 
  __int128 v13; 
  double v17; 
  int v18; 
  vec3_t v19; 
  float v20; 
  float v21; 
  __int16 v22; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2594, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( veh && BGVehicles::PhysicsIsValid(veh->physicsVehicle) && GVehicles::ms_gVehiclesSystem && (VehicleSystem = GVehicles::GetVehicleSystem(), v8 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), ObjectById = BgVehiclePhysicsManager::GetObjectById(v8, veh->physicsVehicle), (v10 = ObjectById) != NULL) && ObjectById->SupportsFeature(ObjectById, VPFEAT_DAMAGE_CALCULATION) )
  {
    v18 = 0;
    v20 = collDmg;
    v21 = collSpeed;
    v22 = 1;
    v19 = *ScriptableSv_GetInstanceOrigin(scriptableIndex);
    return ((__int64 (__fastcall *)(BgVehiclePhysics *, int *, vec3_t *))v10->CalcDamage)(v10, &v18, outDmgDir);
  }
  else
  {
    v12 = LODWORD(veh->phys.vel.v[0]);
    v13 = v12;
    *(float *)&v13 = fsqrt((float)((float)(*(float *)&v12 * *(float *)&v12) + (float)(veh->phys.vel.v[1] * veh->phys.vel.v[1])) + (float)(veh->phys.vel.v[2] * veh->phys.vel.v[2]));
    _XMM5 = v13;
    __asm
    {
      vcmpless xmm0, xmm5, cs:__real@80000000
      vblendvps xmm0, xmm5, xmm2, xmm0
    }
    outDmgDir->v[0] = *(float *)&v12 * (float)(1.0 / *(float *)&_XMM0);
    outDmgDir->v[1] = (float)(1.0 / *(float *)&_XMM0) * veh->phys.vel.v[1];
    outDmgDir->v[2] = (float)(1.0 / *(float *)&_XMM0) * veh->phys.vel.v[2];
    if ( *(float *)&v13 <= 0.001 || collSpeed <= 0.001 )
    {
      return 0i64;
    }
    else
    {
      v17 = I_fclamp(COERCE_FLOAT(LODWORD(veh->speed) & _xmm) / collSpeed, 0.0, 1.0);
      return (unsigned int)(int)(float)(*(float *)&v17 * collDmg);
    }
  }
}

/*
==============
G_Vehicle_CalcPhysVelFromPrevState
==============
*/
void G_Vehicle_CalcPhysVelFromPrevState(Vehicle *veh)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
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
  tmat33_t<vec3_t> axis; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3313, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  AnglesToAxis(&veh->phys.angles, &axis);
  v2 = veh->phys.vel.v[0];
  v3 = veh->phys.vel.v[1];
  v22 = veh->phys.vel.v[2];
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v4 = axis.m[1].v[1];
  v5 = axis.m[1].v[0];
  v6 = axis.m[1].v[2];
  v7 = axis.m[2].v[1];
  v8 = axis.m[2].v[0];
  v9 = axis.m[2].v[2];
  v10 = 1000.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration).m128_f32[0];
  v11 = veh->phys.origin.v[0] - veh->phys.prevOrigin.v[0];
  veh->phys.vel.v[0] = v11;
  veh->phys.vel.v[1] = veh->phys.origin.v[1] - veh->phys.prevOrigin.v[1];
  veh->phys.vel.v[2] = veh->phys.origin.v[2] - veh->phys.prevOrigin.v[2];
  v12 = (float)(v11 * v10) * axis.m[0].v[0];
  veh->phys.vel.v[0] = v11 * v10;
  v13 = v10 * veh->phys.vel.v[1];
  veh->phys.vel.v[1] = v13;
  v14 = v10 * veh->phys.vel.v[2];
  v15 = v13 * axis.m[0].v[1];
  veh->phys.vel.v[2] = v14;
  veh->phys.bodyVel.v[0] = (float)(v12 + v15) + (float)(v14 * axis.m[0].v[2]);
  veh->phys.bodyVel.v[1] = (float)((float)(v4 * veh->phys.vel.v[1]) + (float)(v5 * veh->phys.vel.v[0])) + (float)(v6 * veh->phys.vel.v[2]);
  veh->phys.bodyVel.v[2] = (float)((float)(v7 * veh->phys.vel.v[1]) + (float)(v8 * veh->phys.vel.v[0])) + (float)(v9 * veh->phys.vel.v[2]);
  v16 = veh->phys.vel.v[0] - v2;
  veh->phys.accel.v[0] = v16;
  veh->phys.accel.v[1] = veh->phys.vel.v[1] - v3;
  veh->phys.accel.v[2] = veh->phys.vel.v[2] - v22;
  v17 = (float)(v16 * v10) * axis.m[0].v[0];
  veh->phys.accel.v[0] = v16 * v10;
  v18 = v10 * veh->phys.accel.v[1];
  veh->phys.accel.v[1] = v18;
  v19 = v10 * veh->phys.accel.v[2];
  v20 = v17 + (float)(v18 * axis.m[0].v[1]);
  v21 = v19 * axis.m[0].v[2];
  veh->phys.accel.v[2] = v19;
  veh->phys.bodyAccel.v[0] = v20 + v21;
  veh->phys.bodyAccel.v[1] = (float)((float)(v4 * veh->phys.accel.v[1]) + (float)(v5 * veh->phys.accel.v[0])) + (float)(v6 * veh->phys.accel.v[2]);
  veh->phys.bodyAccel.v[2] = (float)((float)(v7 * veh->phys.accel.v[1]) + (float)(v8 * veh->phys.accel.v[0])) + (float)(v9 * veh->phys.accel.v[2]);
  AnglesSubtract(&veh->phys.angles, &veh->phys.prevAngles, &veh->phys.rotVel);
  veh->phys.rotVel.v[0] = v10 * veh->phys.rotVel.v[0];
  veh->phys.rotVel.v[1] = v10 * veh->phys.rotVel.v[1];
  veh->phys.rotVel.v[2] = v10 * veh->phys.rotVel.v[2];
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
__int64 G_Vehicle_CanPlayerPlaceTank(const gentity_s *player, const float boundingRadius, const float boundingHeight, const float startForward, const float startUp, const float sweepDistance, const float plancementMinNormal, vec3_t *outOrigin, vec3_t *outAngles)
{
  signed __int64 v9; 
  void *v10; 
  gclient_s *client; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v19; 
  float v20; 
  float v21; 
  GUtils *v22; 
  unsigned int v23; 
  unsigned int i; 
  gentity_s *v25; 
  gclient_s *v26; 
  float *p_commandTime; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  bool v38; 
  float fraction; 
  float v40; 
  float v41; 
  unsigned __int16 EntityHitId; 
  float v44; 
  float v45; 
  float v47; 
  unsigned int v48; 
  float *v49; 
  float v53; 
  float v57; 
  float v58; 
  float v59; 
  bool v60; 
  __int128 v63; 
  int *skipEntities; 
  int *skipEntitiesa; 
  int *skipEntitiesb; 
  __int64 numSkipEntities; 
  __int64 numSkipEntitiesa; 
  int clientNum; 
  unsigned int outNumPlayers; 
  float c; 
  float s; 
  vec3_t v76; 
  vec3_t forward; 
  vec3_t v78; 
  vec3_t v79; 
  Bounds box; 
  vec3_t start; 
  vec3_t v82; 
  vec3_t cross; 
  vec3_t v84; 
  vec3_t v85; 
  vec3_t angles; 
  tmat33_t<vec3_t> v87; 
  vec3_t end; 
  vec3_t v89; 
  vec3_t origin; 
  vec3_t v91; 
  trace_t results; 
  vec3_t v0; 
  vec3_t v1; 
  float v95; 
  float v96; 
  int v97[12]; 
  unsigned __int16 outPlayerEntIds[2048]; 

  v10 = alloca(v9);
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6036, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6037, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  client = player->client;
  if ( client->ps.clientNum >= (unsigned int)level.maxclients )
  {
    LODWORD(skipEntities) = client->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6040, ASSERT_TYPE_ASSERT, "(unsigned)( ps->clientNum ) < (unsigned)( level.maxclients )", "ps->clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", skipEntities, level.maxclients) )
      __debugbreak();
  }
  start = client->ps.origin;
  start.v[2] = start.v[2] + client->ps.viewHeightCurrent;
  v14 = client->ps.viewangles.v[1];
  outAngles->v[0] = 0.0;
  outAngles->v[2] = 0.0;
  outAngles->v[1] = v14;
  angles.v[1] = v14;
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AngleVectors(&angles, &forward, NULL, NULL);
  *(_QWORD *)v76.v = *(_QWORD *)client->ps.origin.v;
  v15 = (float)(startForward * forward.v[2]) + (float)(client->ps.origin.v[2] + startUp);
  v76.v[0] = (float)(startForward * forward.v[0]) + v76.v[0];
  v76.v[1] = (float)(startForward * forward.v[1]) + v76.v[1];
  v76.v[2] = v15;
  v78.v[0] = v76.v[0];
  v78.v[1] = v76.v[1];
  v78.v[2] = v15 - sweepDistance;
  *(_QWORD *)end.v = *(_QWORD *)client->ps.origin.v;
  end.v[2] = client->ps.origin.v[2] - 120.0;
  clientNum = client->ps.clientNum;
  PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &end, &bounds_origin, &clientNum, 1, 33636369, NULL, 0, NULL, NULL);
  if ( Trace_GetGlassHitId(&results) )
  {
    v16 = client->ps.origin.v[2];
    v17 = v76.v[1];
    outOrigin->v[0] = v76.v[0];
    outOrigin->v[1] = v17;
    outOrigin->v[2] = v16;
    return 0i64;
  }
  else
  {
    v19 = (float)(startForward * forward.v[0]) + client->ps.origin.v[0];
    v20 = (float)(startForward * forward.v[1]) + client->ps.origin.v[1];
    v21 = (float)(startForward * forward.v[2]) + client->ps.origin.v[2];
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    v22 = GUtils::ms_gUtils;
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6079, ASSERT_TYPE_ASSERT, "( gUtils )", (const char *)&queryFormat, "gUtils") )
      __debugbreak();
    GUtils::GetPlayersInRadius(v22, &client->ps.origin, 128.0, 0x800u, &outNumPlayers, outPlayerEntIds);
    v23 = outNumPlayers;
    for ( i = 0; i < v23; ++i )
    {
      v25 = &g_entities[outPlayerEntIds[i]];
      if ( v25->s.number != client->ps.clientNum )
      {
        v26 = v25->client;
        if ( v26 )
        {
          if ( v26->ps.clientNum >= (unsigned int)level.maxclients )
          {
            LODWORD(numSkipEntities) = level.maxclients;
            LODWORD(skipEntitiesa) = v26->ps.clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6092, ASSERT_TYPE_ASSERT, "(unsigned)( hit->client->ps.clientNum ) < (unsigned)( level.maxclients )", "hit->client->ps.clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", skipEntitiesa, numSkipEntities) )
              __debugbreak();
          }
          v84.v[0] = 0.0;
          v84.v[1] = v25->client->ps.viewangles.v[1];
          v84.v[2] = 0.0;
          AngleVectors(&v84, &v89, NULL, NULL);
          p_commandTime = (float *)&v25->client->ps.commandTime;
          origin.v[0] = (float)(startForward * v89.v[0]) + p_commandTime[12];
          v28 = v20 - (float)((float)(startForward * v89.v[1]) + p_commandTime[13]);
          origin.v[1] = (float)(startForward * v89.v[1]) + p_commandTime[13];
          v29 = v21 - (float)((float)(startForward * v89.v[2]) + p_commandTime[14]);
          origin.v[2] = (float)(startForward * v89.v[2]) + p_commandTime[14];
          if ( (float)((float)((float)(v28 * v28) + (float)((float)(v19 - origin.v[0]) * (float)(v19 - origin.v[0]))) + (float)(v29 * v29)) < (float)((float)(boundingRadius * 4.0) * boundingRadius) )
          {
            v34 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
            if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v34);
            if ( v34->current.enabled )
              G_DebugBox(&origin, &box, v84.v[1], &colorRed, 1, 0);
LABEL_37:
            v35 = v76.v[1];
            v36 = v76.v[0];
            outOrigin->v[2] = client->ps.origin.v[2];
            outOrigin->v[1] = v35;
            outOrigin->v[0] = v36;
            return 0i64;
          }
          v23 = outNumPlayers;
        }
      }
    }
    v30 = (float)(boundingRadius * forward.v[0]) + v76.v[0];
    v31 = boundingRadius * forward.v[1];
    v32 = v76.v[2];
    *(_QWORD *)outAngles->v = 0i64;
    outAngles->v[2] = 0.0;
    v33 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
    v85.v[0] = v30;
    *(_OWORD *)box.midPoint.v = 0i64;
    v85.v[1] = v31 + v76.v[1];
    v85.v[2] = v32;
    box.halfSize.v[1] = 0.0;
    box.halfSize.v[2] = 0.0;
    if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( v33->current.enabled )
      G_DebugLineWithDuration(&start, &v85, &colorLtBlue, 1, 0);
    clientNum = client->ps.clientNum;
    PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &start, &v85, &bounds_origin, &clientNum, 1, 33636369, NULL, 0, NULL, NULL);
    if ( results.startsolid || results.allsolid || Trace_GetEntityHitId(&results) != 2047 )
      goto LABEL_37;
    v37 = DCONST_DVARBOOL_bg_vehicle_placement_debug;
    box.midPoint.v[2] = boundingHeight;
    box.halfSize.v[0] = boundingRadius;
    box.halfSize.v[1] = boundingRadius;
    box.halfSize.v[2] = boundingHeight;
    if ( !DCONST_DVARBOOL_bg_vehicle_placement_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_placement_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      G_DebugLineWithDuration(&v76, &v78, &colorBlue, 1, 0);
      G_DebugBox(&v76, &box, v14, &colorYellow, 1, 0);
      G_DebugBox(&v78, &box, v14, &colorRed, 1, 0);
    }
    clientNum = client->ps.clientNum;
    PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &v76, &v78, &box, &clientNum, 1, 33636881, NULL, 0, NULL, NULL);
    v38 = !results.startsolid;
    fraction = results.fraction;
    v40 = v78.v[1];
    outOrigin->v[0] = (float)((float)(v78.v[0] - v76.v[0]) * results.fraction) + v76.v[0];
    v41 = (float)(v78.v[2] - v76.v[2]) * fraction;
    outOrigin->v[1] = (float)((float)(v40 - v76.v[1]) * fraction) + v76.v[1];
    outOrigin->v[2] = v41 + v76.v[2];
    if ( !v38 || results.allsolid )
    {
      outOrigin->v[2] = client->ps.origin.v[2];
      return 0i64;
    }
    EntityHitId = Trace_GetEntityHitId(&results);
    if ( EntityHitId >= 0x800u )
    {
      LODWORD(numSkipEntitiesa) = 2048;
      LODWORD(skipEntitiesb) = EntityHitId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6171, ASSERT_TYPE_ASSERT, "(unsigned)( hitEntId ) < (unsigned)( ( 2048 ) )", "hitEntId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntitiesb, numSkipEntitiesa) )
        __debugbreak();
    }
    if ( sweepDistance == 0.0 || EntityHitId == 2046 )
    {
      _XMM9 = LODWORD(FLOAT_1_0);
      v44 = 0.0;
      v45 = 0.0;
      cross.v[0] = 0.0;
      cross.v[1] = 0.0;
      cross.v[2] = FLOAT_1_0;
      FastSinCos(angles.v[1] * 0.017453292, &s, &c);
      _XMM8 = 0i64;
      v47 = FLOAT_1_0;
      if ( sweepDistance != 0.0 )
      {
        v48 = 0;
        v49 = (float *)v97;
        while ( 1 )
        {
          _XMM0 = v48 & 1;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm12, xmm2
          }
          v53 = (float)(*(float *)&_XMM0 * box.halfSize.v[0]) + box.midPoint.v[0];
          _XMM0 = v48 & 2;
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm9, xmm12, xmm2
          }
          v57 = (float)(*(float *)&_XMM0 * box.halfSize.v[1]) + box.midPoint.v[1];
          v79.v[2] = v76.v[2];
          v82.v[2] = v76.v[2] - sweepDistance;
          v79.v[0] = (float)((float)(v53 * c) - (float)(v57 * s)) + v76.v[0];
          v79.v[1] = (float)((float)(v57 * c) + (float)(v53 * s)) + v76.v[1];
          v82.v[0] = v79.v[0];
          v82.v[1] = v79.v[1];
          clientNum = client->ps.clientNum;
          PhysicsQuery_LegacyCapsuleTrace(PHYSICS_WORLD_ID_FIRST, &results, &v79, &v82, &bounds_origin, &clientNum, 1, 33636881, NULL, 0, NULL, NULL);
          if ( results.fraction == 1.0 )
            return 0i64;
          v58 = (float)((float)(v82.v[1] - v79.v[1]) * results.fraction) + v79.v[1];
          v59 = (float)((float)(v82.v[2] - v79.v[2]) * results.fraction) + v79.v[2];
          v60 = v59 <= outOrigin->v[2];
          __asm
          {
            vcmpltss xmm0, xmm8, xmm1
            vblendvps xmm0, xmm8, xmm1, xmm0
          }
          clientNum = _XMM0;
          v91.v[0] = (float)((float)(v82.v[0] - v79.v[0]) * results.fraction) + v79.v[0];
          v91.v[1] = v58;
          v91.v[2] = v59;
          *(v49 - 2) = v91.v[0];
          *(v49 - 1) = v58;
          *v49 = v59;
          if ( !v60 )
            outOrigin->v[2] = v59;
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicle_placement_debug, "bg_vehicle_placement_debug") )
            G_DebugLineWithDuration(&v79, &v91, &colorLtBlue, 1, 0);
          ++v48;
          v49 += 3;
          if ( v48 >= 4 )
          {
            v0.v[0] = v95 - *(float *)&v97[7];
            v0.v[1] = v96 - *(float *)&v97[8];
            v0.v[2] = *(float *)v97 - *(float *)&v97[9];
            v1.v[0] = *(float *)&v97[1] - *(float *)&v97[4];
            v1.v[2] = *(float *)&v97[3] - *(float *)&v97[6];
            v1.v[1] = *(float *)&v97[2] - *(float *)&v97[5];
            Vec3Cross(&v0, &v1, &cross);
            LODWORD(_XMM8) = clientNum;
            v63 = LODWORD(cross.v[1]);
            *(float *)&v63 = fsqrt((float)((float)(*(float *)&v63 * *(float *)&v63) + (float)(cross.v[0] * cross.v[0])) + (float)(cross.v[2] * cross.v[2]));
            _XMM3 = v63;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm9, xmm0
            }
            *(float *)&_XMM9 = cross.v[2] * (float)(1.0 / *(float *)&_XMM0);
            v47 = *(float *)&_XMM9;
            v44 = cross.v[0] * (float)(1.0 / *(float *)&_XMM0);
            v45 = cross.v[1] * (float)(1.0 / *(float *)&_XMM0);
            break;
          }
          _XMM8 = (unsigned int)clientNum;
        }
      }
      v87.m[0] = forward;
      v87.m[2].v[0] = v44;
      v87.m[2].v[1] = v45;
      v87.m[2].v[2] = *(float *)&_XMM9;
      Vec3Cross(&v87.m[2], v87.m, &v87.m[1]);
      Vec3Cross(&v87.m[1], &v87.m[2], v87.m);
      AxisToAngles(&v87, outAngles);
      if ( v47 < plancementMinNormal || sweepDistance != 0.0 && *(float *)&_XMM8 > 20.0 )
        return 0i64;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehicle_placement_debug, "bg_vehicle_placement_debug") )
        G_DebugBox(outOrigin, &box, v14, &colorGreen, 1, 0);
      return 1i64;
    }
    else
    {
      return 0i64;
    }
  }
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
  float v3; 
  const vec3_t *v4; 
  float v5; 
  float v6; 
  __int128 v7; 
  signed __int64 v10; 
  int v11; 
  signed __int64 v14; 
  float v15; 
  bool v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  __int64 v20; 

  v3 = normal->v[2];
  v4 = in;
  if ( v3 < 0.69999999 || (v5 = in->v[1], v6 = in->v[0], (float)((float)(v6 * v6) + (float)(v5 * v5)) < (float)(in->v[2] * in->v[2])) )
  {
    v7 = LODWORD(in->v[1]);
    *(float *)&v7 = (float)((float)(in->v[1] * normal->v[1]) + (float)(in->v[0] * normal->v[0])) + (float)(v3 * in->v[2]);
    _XMM5 = v7;
    _XMM0 = LODWORD(FLOAT_0_99009901);
    v10 = (char *)normal - (char *)in;
    v11 = 0;
    __asm
    {
      vcmpltss xmm3, xmm5, xmm1
      vblendvps xmm1, xmm0, xmm2, xmm3
    }
    v14 = (char *)out - (char *)in;
    v15 = *(float *)&_XMM1 * *(float *)&v7;
    v16 = 1;
    do
    {
      if ( !v16 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v17 = v15 * *(float *)((char *)v4->v + v10);
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      v18 = v4->v[0] - v17;
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v20) = 3;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      *(float *)((char *)v4->v + v14) = v18;
      v4 = (const vec3_t *)((char *)v4 + 4);
      v16 = (unsigned int)++v11 < 3;
    }
    while ( v11 < 3 );
  }
  else
  {
    out->v[2] = COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 * normal->v[0]) ^ _xmm) - (float)(v5 * normal->v[1]);
    out->v[0] = in->v[0] * normal->v[2];
    out->v[1] = in->v[1] * normal->v[2];
  }
}

/*
==============
G_Vehicle_CollideAllVehicles
==============
*/

void __fastcall G_Vehicle_CollideAllVehicles(double stepSize)
{
  float v1; 
  Vehicle *v2; 
  __int64 v3; 
  gentity_s *ent; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  const VehicleDef *v7; 
  float boatBouncingFadeinSpeed; 
  __int128 v11; 
  GVehicles *v12; 
  __int128 v14; 
  __int128 v16; 
  float bounceCurrentForce; 
  float v18; 
  double v19; 
  unsigned int physicsVehicle; 
  float v21; 
  unsigned int v22; 
  scrContext_t *v23; 
  float v24; 
  vec3_t pointWS; 
  vec3_t dir; 
  vec3_t impulse; 

  v1 = *(float *)&stepSize;
  v2 = s_vehicleServers;
  v3 = 128i64;
  do
  {
    ent = v2->ent;
    if ( v2->ent )
    {
      if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5150, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( BGVehicles::PhysicsIsValid(ent->vehicle->physicsVehicle) )
      {
        vehicle = ent->vehicle;
        if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5081, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
          __debugbreak();
        if ( !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5082, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsValid( veh->physicsVehicle ) )", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
          __debugbreak();
        ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
        v7 = ServerDef;
        if ( ServerDef->type == VEH_BOAT )
        {
          boatBouncingFadeinSpeed = ServerDef->boatBouncingFadeinSpeed;
          if ( boatBouncingFadeinSpeed == 0.0 )
          {
            _XMM6 = LODWORD(FLOAT_1_0);
          }
          else
          {
            *(_OWORD *)&stepSize = LODWORD(vehicle->speed);
            v11 = *(_OWORD *)&stepSize;
            *(float *)&v11 = *(float *)&stepSize / boatBouncingFadeinSpeed;
            _XMM1 = v11;
            __asm { vminss  xmm6, xmm1, xmm7 }
          }
          if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
            __debugbreak();
          v12 = GVehicles::ms_gVehiclesSystem;
          if ( v7->boatBouncingFadeoutSteeringAngle > 0.0 )
          {
            stepSize = GVehicles::PhysicsGetInputControl(GVehicles::ms_gVehiclesSystem, vehicle->physicsVehicle, 2u);
            v14 = *(_OWORD *)&stepSize & (unsigned int)_xmm;
            *(float *)&v14 = COERCE_FLOAT(LODWORD(stepSize) & _xmm) / v7->boatBouncingFadeoutSteeringAngle;
            _XMM0 = v14;
            __asm { vminss  xmm1, xmm0, xmm7 }
            v16 = _XMM6;
            *(float *)&v16 = *(float *)&_XMM6 * (float)(1.0 - *(float *)&_XMM1);
            _XMM6 = v16;
          }
          bounceCurrentForce = vehicle->boat.bounceCurrentForce;
          v18 = *(float *)&_XMM6 * vehicle->boat.bouncePeakForce;
          if ( bounceCurrentForce != 0.0 )
          {
            if ( bounceCurrentForce < v18 )
            {
              v19 = G_crandom();
              physicsVehicle = vehicle->physicsVehicle;
              *(&stepSize + 1) = *((double *)&_XMM6 + 1);
              v21 = (float)((float)((float)(v18 * v7->boatBouncingRate) * (float)((float)(*(float *)&v19 * 0.2) + 1.0)) * v1) + vehicle->boat.bounceCurrentForce;
              vehicle->boat.bounceCurrentForce = v21;
              impulse.v[2] = v21;
              impulse.v[0] = 0.0;
              impulse.v[1] = 0.0;
              GVehicles::PhysicsGetSteeringPointWS(v12, physicsVehicle, &pointWS);
              GVehicles::PhysicsGetChassisForwardDir(v12, vehicle->physicsVehicle, &dir);
              stepSize = GVehicles::PhysicsGetWheelBaseLength(v12, vehicle->physicsVehicle);
              v22 = vehicle->physicsVehicle;
              pointWS.v[0] = (float)((float)(*(float *)&stepSize * -0.75) * dir.v[0]) + pointWS.v[0];
              pointWS.v[1] = (float)((float)(*(float *)&stepSize * -0.75) * dir.v[1]) + pointWS.v[1];
              pointWS.v[2] = (float)((float)(*(float *)&stepSize * -0.75) * dir.v[2]) + pointWS.v[2];
              GVehicles::PhysicsAddImpulse(v12, v22, &impulse, &pointWS);
              goto LABEL_27;
            }
            v23 = ScriptContext_Server();
            Scr_AddFloat(v23, 0.056818184 * vehicle->boat.bounceCurrentForce);
            GScr_Notify(vehicle->ent, scr_const.veh_boatbounce, 1u);
          }
          *(_OWORD *)&stepSize = LODWORD(v7->boatBouncingMaxForce);
          v24 = *(float *)&stepSize - v7->boatBouncingMinForce;
          vehicle->boat.bounceCurrentForce = 0.0;
          stepSize = G_random();
          vehicle->boat.bouncePeakForce = (float)(*(float *)&stepSize * v24) + v7->boatBouncingMinForce;
        }
      }
    }
LABEL_27:
    ++v2;
    --v3;
  }
  while ( v3 );
}

/*
==============
G_Vehicle_Controller
==============
*/
void G_Vehicle_Controller(const gentity_s *pSelf, DObjPartBits *partBits)
{
  Vehicle *vehicle; 
  float *p_number; 
  DObj *ServerDObjForEnt; 
  int body; 
  int turret; 
  int barrel; 
  float v10; 
  int turretBaseLeft; 
  int turretBaseRight; 
  vec3_t v13; 
  vec3_t angles; 
  vec3_t v15; 
  vec3_t v16; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4731, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4732, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  p_number = (float *)&vehicle->ent->s.number;
  ServerDObjForEnt = Com_GetServerDObjForEnt(pSelf);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4739, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  angles.v[0] = p_number[24];
  angles.v[1] = 0.0;
  angles.v[2] = p_number[25];
  body = vehicle->boneIndex.body;
  if ( body >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, body, &vec3_origin, &angles);
  v15.v[1] = p_number[28];
  v15.v[0] = 0.0;
  v15.v[2] = 0.0;
  v16.v[0] = p_number[27];
  v16.v[1] = 0.0;
  v16.v[2] = 0.0;
  turret = vehicle->boneIndex.turret;
  if ( turret >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turret, &vec3_origin, &v15);
  barrel = vehicle->boneIndex.barrel;
  if ( barrel >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, barrel, &vec3_origin, &v16);
  v10 = p_number[28];
  v13.v[0] = p_number[27];
  v13.v[1] = v10;
  v13.v[2] = 0.0;
  turretBaseLeft = vehicle->boneIndex.turretBaseLeft;
  if ( turretBaseLeft >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turretBaseLeft, &vec3_origin, &v13);
  turretBaseRight = vehicle->boneIndex.turretBaseRight;
  if ( turretBaseRight >= 0 )
    DObjSetLocalBoneIndex(ServerDObjForEnt, partBits, turretBaseRight, &vec3_origin, &v13);
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
  Weapon *WeaponForName; 
  GWeaponMap *Instance; 
  const Weapon *v15; 
  unsigned __int16 model; 
  PhysicsAsset *physicsAsset; 
  const char *ModelName; 
  const char *useHintString; 
  GConfigStrings *ConfigStringSystem; 
  unsigned int v21; 
  gentity_s *v22; 
  gentity_s *v23; 
  gentity_s *v24; 
  gentity_s *v25; 
  float v26; 
  float v27; 
  const char *name; 
  scr_string_t FlashTag; 
  const char *v30; 
  __int64 v31; 
  scr_string_t v32; 
  GHandler *Handler; 
  __int64 v34; 
  Weapon result; 
  vec3_t linearVelocity; 
  __m256i v38; 
  __int128 v39; 
  __int64 v40; 
  int v41; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4173, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->spawnflags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4174, ASSERT_TYPE_ASSERT, "( !(ent->spawnflags & (1<<1)) )", (const char *)&queryFormat, "!(ent->spawnflags & VEH_SF_SPAWNER)") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehDefIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4177, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v8 = GVehicles::ms_gVehiclesSystem;
  GVehicles::ms_gVehiclesSystem->SetVehicleType(GVehicles::ms_gVehiclesSystem, ent, ServerDef);
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    ent->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    ent->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
  }
  G_Vehicle_InitModelAndValidateTags(ent, vehDefIndex);
  v9 = G_Vehicle_Allocate();
  v10 = truncate_cast<int,__int64>(v9 - s_vehicleServers);
  v11 = v10;
  if ( v10 >= 0x80 )
  {
    LODWORD(v34) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4195, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v34, 128) )
      __debugbreak();
  }
  ent->vehicle = v9;
  ent->health = ServerDef->health;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  ent->nextthink = level.time + level.frameDuration;
  ent->active = 1;
  ent->clipmask = 8454673;
  ent->s.lerp.eFlags.m_flags[0] = 0;
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x10u);
  ent->s.lerp.pos.trType = TR_INTERPOLATE;
  ent->s.lerp.apos.trType = TR_INTERPOLATE;
  ent->s.time2 = 0;
  p_szInternalName = &ServerDef->turretWeapon->szInternalName;
  if ( p_szInternalName )
  {
    WeaponForName = G_Weapon_GetWeaponForName(&result, *p_szInternalName);
    v38 = *(__m256i *)&WeaponForName->weaponIdx;
    v39 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
    v40 = *(_QWORD *)&WeaponForName->attachmentVariationIndices[21];
    v41 = *(_DWORD *)&WeaponForName->weaponCamo;
    Instance = GWeaponMap::GetInstance();
    v15 = (const Weapon *)&v38;
  }
  else
  {
    Instance = GWeaponMap::GetInstance();
    v15 = &NULL_WEAPON;
  }
  BG_SetWeaponForEntity(Instance, &ent->s, v15);
  if ( ServerDef->type == VEH_TREADED )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x1Bu);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xDu);
  model = ent->model;
  ent->r.svFlags = 4;
  if ( model )
  {
    physicsAsset = G_Utils_GetModel(model)->physicsAsset;
    if ( physicsAsset )
    {
      if ( (Physics_GetPhysicsAssetContents(physicsAsset) & 0x800000) == 0 )
      {
        ModelName = G_CString_GetModelName(ent->model);
        Com_PrintError(1, "Vehicle %s with Model %s does not have CONTENTS_VEHICLE set on its collision asset. This will cause collision errors, because the client and server will not agree.\n", ServerDef->name, ModelName);
      }
    }
  }
  if ( (ent->spawnflags & 1) != 0 )
    G_PlayerUse_SetEntityUsable(ent, 1);
  SV_Game_DObjGetBounds(ent, &ent->r.box);
  SV_LinkEntity(ent);
  v9->ent = ent;
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
  *(_QWORD *)ent->s.lerp.u.actor.threatSight = 0i64;
  *(_QWORD *)&ent->s.lerp.u.scriptMover.animIndex = 0i64;
  *(_QWORD *)((char *)&ent->s.lerp.u.infoVolumeGrapple + 20) = 0i64;
  ent->s.lerp.u.anonymous.data[0] = v11 | (vehDefIndex << 7);
  G_Vehicle_HandleOwnerChange(ent, player);
  useHintString = ServerDef->useHintString;
  if ( useHintString && *useHintString )
  {
    ConfigStringSystem = GConfigStrings::GetConfigStringSystem();
    v21 = ConfigStringSystem->GetHintStringIndex(ConfigStringSystem, ServerDef->useHintString);
    v9->useHintStringIndex = v21;
    if ( !v21 )
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
  v22 = v9->ent;
  v9->phys.origin.v[0] = v9->ent->r.currentOrigin.v[0];
  v9->phys.origin.v[1] = v22->r.currentOrigin.v[1];
  v9->phys.origin.v[2] = v22->r.currentOrigin.v[2];
  v23 = v9->ent;
  v9->phys.prevOrigin.v[0] = v9->ent->r.currentOrigin.v[0];
  v9->phys.prevOrigin.v[1] = v23->r.currentOrigin.v[1];
  v9->phys.prevOrigin.v[2] = v23->r.currentOrigin.v[2];
  v24 = v9->ent;
  v9->phys.angles.v[0] = v9->ent->r.currentAngles.v[0];
  v9->phys.angles.v[1] = v24->r.currentAngles.v[1];
  v9->phys.angles.v[2] = v24->r.currentAngles.v[2];
  v25 = v9->ent;
  v9->phys.prevAngles.v[0] = v9->ent->r.currentAngles.v[0];
  v9->phys.prevAngles.v[1] = v25->r.currentAngles.v[1];
  v9->phys.prevAngles.v[2] = v25->r.currentAngles.v[2];
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
  v26 = ent->s.lerp.pos.trDelta.v[1];
  linearVelocity.v[0] = ent->s.lerp.pos.trDelta.v[0];
  linearVelocity.v[2] = ent->s.lerp.pos.trDelta.v[2];
  linearVelocity.v[1] = v26;
  G_Vehicle_SetPosition(ent, &ent->r.currentOrigin, &ent->s.lerp.pos.trDelta, &ent->r.currentAngles, 1);
  v27 = linearVelocity.v[1];
  ent->s.lerp.pos.trDelta.v[0] = linearVelocity.v[0];
  ent->s.lerp.pos.trDelta.v[2] = linearVelocity.v[2];
  ent->s.lerp.pos.trDelta.v[1] = v27;
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( !G_Main_ExitAfterToolComplete() )
    {
      v9->physicsVehicle = v8->PhysicsCreateVehicle(v8, ent->s.number, vehDefIndex, ServerDef);
      G_Utils_DestroyEntityPhysics(ent);
      G_Utils_CreateEntityPhysics(ent);
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
      v30 = SL_ConvertToString(FlashTag);
      v31 = 1245i64;
    }
    else
    {
      if ( v9->boneIndex.flash[1] != -1 )
        goto LABEL_57;
      name = ServerDef->name;
      v32 = BG_Vehicle_GetFlashTag(1);
      v30 = SL_ConvertToString(v32);
      v31 = 1246i64;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36780, v31, v30, name);
  }
LABEL_57:
  if ( !load )
    G_Vehicle_SetupCollmap(ent);
  if ( ServerDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( !G_Main_ExitAfterToolComplete() && !GVehicles::PhysicsCreateRigidBodyResources(v8, v9->physicsVehicle) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E367E0, 1247i64, (unsigned int)ent->s.number, ServerDef->name);
    GVehicles::PhysicsSetLinearVelocity(v8, v9->physicsVehicle, &linearVelocity);
  }
  v9->canPushEntities = 1;
  Handler = GHandler::getHandler();
  BG_VehicleAnim_Reset(v8, &ent->s, &v9->vehicleAnimInfo, Handler);
  G_Vehicle_UpdateScriptablePlayerUseCache(ent);
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
  __int128 v14; 
  const Weapon *v15; 
  bool v17; 
  gentity_s *v18; 
  int v20; 
  signed __int64 v21; 
  __int64 v22; 
  Vehicle *vehicle; 
  const GVehicleSuspendManager::SuspendInfo *SavedInfoConst; 
  unsigned int defIndex; 
  const VehicleDef *ServerDef; 
  float v27; 
  __int128 v28; 
  __int128 v29; 
  float v30; 
  float v34; 
  const dvar_t *v35; 
  const char *v36; 
  const char *WeaponBaseName; 
  bool v38; 
  __int64 result; 
  int number; 
  const char *v41; 
  const char *v42; 
  int health; 
  const char *v44; 
  char *fmt; 
  __int64 v46; 
  __int64 v47; 
  int v48; 
  BOOL v49; 
  int v50; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  __int128 v59; 

  v15 = r_weapon;
  v17 = isAlternate;
  v18 = attacker;
  if ( !targ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4578, ASSERT_TYPE_ASSERT, "( targ )", (const char *)&queryFormat, "targ") )
    __debugbreak();
  if ( !targ->vehicle && !G_Vehicle_IsSuspended(targ) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4579, ASSERT_TYPE_ASSERT, "( targ->vehicle || G_Vehicle_IsSuspended( targ ) )", (const char *)&queryFormat, "targ->vehicle || G_Vehicle_IsSuspended( targ )") )
    __debugbreak();
  v20 = 1;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&targ->s.lerp.eFlags, ACTIVE, 0x10u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4580, ASSERT_TYPE_ASSERT, "( targ->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::TAKE_DAMAGE ) )", (const char *)&queryFormat, "targ->s.lerp.eFlags.TestFlag( EntityStateFlagsCommon::TAKE_DAMAGE )") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v21 = targ - g_entities;
  if ( (unsigned int)v21 >= 0x800 )
  {
    LODWORD(v46) = targ - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v46, 2048) )
      __debugbreak();
  }
  v21 = (__int16)v21;
  if ( (unsigned int)(__int16)v21 >= 0x800 )
  {
    LODWORD(v47) = 2048;
    LODWORD(v46) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v21] )
  {
    LODWORD(v47) = targ->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4581, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( targ ) ) ) )", "%s\n\t( targ->s.number ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( targ ) ) )", v47) )
      __debugbreak();
  }
  if ( !inflictor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4582, ASSERT_TYPE_ASSERT, "( inflictor )", (const char *)&queryFormat, "inflictor") )
    __debugbreak();
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4583, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v22 = v18 - g_entities;
  if ( (unsigned int)v22 >= 0x800 )
  {
    LODWORD(v47) = 2048;
    LODWORD(v46) = v18 - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  v22 = (__int16)v22;
  if ( (unsigned int)(__int16)v22 >= 0x800 )
  {
    LODWORD(v47) = 2048;
    LODWORD(v46) = v22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v22].r.isInUse != g_entityIsInUse[v22] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v22] )
  {
    LODWORD(v47) = v18->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4584, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) ) )", "%s\n\t( attacker->s.number ) = %i", "( G_IsEntityInUse( G_GetEntityIndex( attacker ) ) )", v47) )
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
        v38 = ServerDef->heavyExplosiveDamage == 0;
      else
        v38 = ServerDef->grenadeDamage == 0;
      goto LABEL_86;
    case 6:
      v38 = ServerDef->projectileDamage == 0;
      goto LABEL_86;
    case 7:
      v38 = ServerDef->projectileSplashDamage == 0;
LABEL_86:
      if ( !v38 )
        goto LABEL_69;
LABEL_87:
      result = 5i64;
      break;
    default:
LABEL_69:
      v56 = 0.0;
      v57 = 0.0;
      v58 = 0.0;
      v53 = 0.0;
      v54 = 0.0;
      v55 = 0.0;
      if ( dir )
      {
        v27 = dir->v[1];
        v28 = LODWORD(dir->v[0]);
        v29 = v28;
        v59 = v14;
        v30 = dir->v[2];
        *(float *)&v29 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v27 * v27)) + (float)(v30 * v30));
        _XMM3 = v29;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        v56 = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v28;
        v58 = (float)(1.0 / *(float *)&_XMM0) * v30;
        v57 = (float)(1.0 / *(float *)&_XMM0) * v27;
      }
      if ( point )
      {
        v34 = point->v[1];
        v53 = point->v[0];
        v55 = point->v[2];
        v54 = v34;
      }
      v35 = DVARBOOL_g_debugDamage;
      if ( damage > 1 )
        v20 = damage;
      v50 = v20;
      if ( !DVARBOOL_g_debugDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugDamage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      if ( v35->current.enabled )
      {
        v36 = SL_ConvertToString(partName);
        if ( r_weapon->weaponIdx )
          WeaponBaseName = BG_GetWeaponBaseName(r_weapon, isAlternate);
        else
          WeaponBaseName = "none";
        if ( v18 )
        {
          number = v18->s.number;
          v41 = SL_ConvertToString(v18->script_classname);
        }
        else
        {
          number = 0;
          v41 = "null";
        }
        v42 = SL_ConvertToString(*g_combat_modNames[mod]);
        health = targ->health;
        v44 = SL_ConvertToString(targ->script_classname);
        v48 = number;
        v20 = v50;
        LODWORD(v46) = v50;
        LODWORD(fmt) = health;
        Com_Printf(15, "$e%d(%s) take damage: orig_hp(%d) dam(%d)type(%s) attacker(%s$e%d) weapon(%s) partname(%s)\n", (unsigned int)targ->s.number, v44, fmt, v46, v42, v41, v48, WeaponBaseName, v36);
        v18 = attacker;
        v15 = r_weapon;
        v17 = isAlternate;
      }
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      LOBYTE(v49) = v17;
      GVehicles::ms_gVehiclesSystem->FinishVehicleDamage(GVehicles::ms_gVehiclesSystem, targ, inflictor, v18, (const vec3_t *)&v56, (const vec3_t *)&v53, v20, dFlags, mod, v15, v49, hitLoc, modelIndex, partName, timeOffset);
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
void G_Vehicle_DebugBox(const vec3_t *pos, float width, float r, float g, float b)
{
  vec4_t color; 
  Bounds box; 

  color.v[0] = r;
  color.v[3] = FLOAT_1_0;
  color.v[2] = b;
  box.midPoint.v[0] = 0.0;
  box.midPoint.v[1] = 0.0;
  box.midPoint.v[2] = 0.0;
  color.v[1] = g;
  box.halfSize.v[0] = width * 0.5;
  box.halfSize.v[1] = width * 0.5;
  box.halfSize.v[2] = width * 0.5;
  G_DebugBox(pos, &box, 0.0, &color, 1, 0);
}

/*
==============
G_Vehicle_DebugCapsule
==============
*/
void G_Vehicle_DebugCapsule(const vec3_t *pos, float rad, float height, float r, float g, float b)
{
  float v7; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t end; 
  vec4_t color; 

  color.v[2] = b;
  v7 = pos->v[0];
  color.v[1] = g;
  v9 = pos->v[2];
  end.v[0] = v7;
  color.v[3] = FLOAT_1_0;
  v10 = pos->v[1];
  color.v[0] = r;
  end.v[1] = v10;
  if ( height == 0.0 )
    v11 = v9 + 0.0099999998;
  else
    v11 = v9 + height;
  end.v[2] = v11;
  G_DebugCylinder(pos, &end, rad, &color, 0, 0);
}

/*
==============
G_Vehicle_Die
==============
*/
void G_Vehicle_Die(gentity_s *pSelf, const gentity_s *pInflictor, gentity_s *pAttacker, const int damage, const int damageFlags, const int mod, const Weapon *r_weapon, bool isAlternate, const vec3_t *dir)
{
  const gentity_s *v11; 
  gentity_s *v12; 
  GWeaponMap *Instance; 
  GWeaponMap *v14; 
  const Weapon *WeaponForEntity; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5622, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( EntHandle::isDefined(&pSelf->r.ownerNum) && (v11 = EntHandle::ent(&pSelf->r.ownerNum), G_Vehicle_InUseByPlayer(pSelf, v11)) )
  {
    v12 = EntHandle::ent(&pSelf->r.ownerNum);
    G_Vehicle_UnlinkPlayer(pSelf, v12);
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
      v14 = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(v14, &pAttacker->s);
      if ( (unsigned int)(BG_GetWeaponType(WeaponForEntity, pAttacker->s.inAltWeaponMode) - 3) <= 1 )
      {
        if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5641, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
          __debugbreak();
        if ( pSelf->vehicle )
          G_Vehicle_JoltBody(pSelf, dir, 1.0, 0.0, 0.0);
      }
    }
  }
}

/*
==============
G_Vehicle_DrawDebugLookahead
==============
*/
void G_Vehicle_DrawDebugLookahead(Vehicle *veh)
{
  const dvar_t *v2; 

  v2 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer )
  {
    G_Vehicle_DebugBox(&veh->pathPos.lookPos, 8.0, 0.0, 1.0, 1.0);
    G_Vehicle_DebugBox(&veh->pathPos.origin, 8.0, 1.0, 0.0, 1.0);
  }
}

/*
==============
G_Vehicle_DrawDebugOrigin
==============
*/
void G_Vehicle_DrawDebugOrigin(const VehicleDef *vehDef, vehicle_physic_t *phys)
{
  const dvar_t *v2; 

  v2 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer )
  {
    G_Vehicle_DebugBox(&phys->origin, 4.0, 1.0, 1.0, 0.0);
    if ( vehDef->trophyEnabled )
      G_DebugCircle(&phys->origin, vehDef->trophyRadius, &colorGreen, 1, 0, 1);
  }
}

/*
==============
G_Vehicle_ExplosionEvent
==============
*/
void G_Vehicle_ExplosionEvent(const vec3_t *origin, float innerRadius, float outerRadius, bool isCylinder, float forceScale, const vec3_t *impulse)
{
  Vehicle *v6; 
  __int64 v11; 
  float v12; 
  gentity_s *ent; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __m128 v19; 
  float v20; 
  __m128 v24; 
  __m128 v26; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  float v44; 
  vec3_t dir; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 

  v6 = s_vehicleServers;
  v11 = 128i64;
  v12 = outerRadius * outerRadius;
  do
  {
    ent = v6->ent;
    if ( v6->ent )
    {
      if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5919, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( BGVehicles::PhysicsIsValid(ent->vehicle->physicsVehicle) )
      {
        v14 = ent->r.absBox.midPoint.v[0];
        v15 = origin->v[0];
        v16 = origin->v[1];
        v17 = origin->v[2];
        v49.m128_i32[3] = 0;
        v50.m128_i32[3] = 0;
        v19 = v50;
        v19.m128_f32[0] = v14;
        _XMM4 = v19;
        v20 = ent->r.absBox.halfSize.v[0];
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rbx+11Ch], 10h
          vinsertps xmm4, xmm4, dword ptr [rbx+120h], 20h ; ' '
        }
        v24 = v49;
        v24.m128_f32[0] = v15;
        _XMM5 = v24;
        v51.m128_i32[3] = 0;
        v26 = v51;
        v26.m128_f32[0] = v20;
        _XMM3 = v26;
        __asm { vinsertps xmm3, xmm3, dword ptr [rbx+128h], 10h }
        _XMM0 = g_negativeZero.v;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbx+12Ch], 20h ; ' '
          vinsertps xmm5, xmm5, xmm8, 10h
          vinsertps xmm5, xmm5, xmm10, 20h ; ' '
        }
        _mm128_sub_ps(_XMM5, _XMM4);
        __asm { vandnps xmm2, xmm0, xmm1 }
        v51 = _XMM3;
        _XMM3 = _mm128_sub_ps(_XMM2, _XMM3);
        __asm { vmaxps  xmm1, xmm3, xmm0 }
        _XMM2 = _mm128_mul_ps(_XMM1, _XMM1);
        __asm
        {
          vhaddps xmm0, xmm2, xmm2
          vhaddps xmm1, xmm0, xmm0
        }
        v49 = _XMM5;
        v50 = _XMM4;
        if ( *(float *)&_XMM1 < v12 )
        {
          if ( impulse )
          {
            v38 = impulse->v[1];
            dir.v[0] = impulse->v[0];
            dir.v[2] = impulse->v[2];
            dir.v[1] = v38;
            v39 = FLOAT_1_0;
          }
          else
          {
            v40 = fsqrt(*(float *)&_XMM1);
            if ( *(float *)&_XMM1 > (float)(innerRadius * innerRadius) )
            {
              if ( (float)(outerRadius - innerRadius) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5942, ASSERT_TYPE_ASSERT, "( (outerRadius - innerRadius) > 0.0f )", (const char *)&queryFormat, "(outerRadius - innerRadius) > 0.0f") )
                __debugbreak();
              v16 = origin->v[1];
              v17 = origin->v[2];
              v39 = (float)(outerRadius - v40) / (float)(outerRadius - innerRadius);
              v15 = origin->v[0];
            }
            else
            {
              v39 = FLOAT_1_0;
            }
            v41 = ent->r.currentOrigin.v[0] - v15;
            v43 = LODWORD(ent->r.currentOrigin.v[1]);
            *(float *)&v43 = ent->r.currentOrigin.v[1] - v16;
            v42 = *(float *)&v43;
            if ( isCylinder )
              v44 = 0.0;
            else
              v44 = (float)(ent->r.currentOrigin.v[2] - v17) + 24.0;
            *(float *)&v43 = fsqrt((float)((float)(*(float *)&v43 * *(float *)&v43) + (float)(v41 * v41)) + (float)(v44 * v44));
            _XMM3 = v43;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm7, xmm0
            }
            dir.v[0] = v41 * (float)(1.0 / *(float *)&_XMM0);
            dir.v[2] = v44 * (float)(1.0 / *(float *)&_XMM0);
            dir.v[1] = v42 * (float)(1.0 / *(float *)&_XMM0);
            v12 = outerRadius * outerRadius;
            if ( *(float *)&v43 < 0.0099999998 )
            {
              dir.v[0] = FLOAT_1_0;
              dir.v[1] = 0.0;
              dir.v[2] = 0.0;
            }
          }
          G_Vehicle_Knockback_Internal(ent->vehicle, &dir, MOD_EXPLOSIVE, v39 * forceScale, NULL, 0);
        }
      }
    }
    ++v6;
    --v11;
  }
  while ( v11 );
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
  float v6; 
  float v7; 
  float v8; 
  Vehicle *vehicle; 
  float v10; 
  GWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v13; 
  int gameTime; 
  VehicleTurretFireType v15; 
  Vehicle *v16; 
  __int32 v17; 
  const VehicleDef *ServerDef; 
  __int64 v19; 
  float v20; 
  int v21; 
  float v22; 
  float v23; 
  float v24; 
  weapType_t WeaponType; 
  VehicleTurretFireType v26; 
  Vehicle *v27; 
  const VehicleDef *v28; 
  __int64 v29; 
  float v30; 
  const VehicleDef *v31; 
  __int64 v32; 
  Vehicle *v33; 
  BgWeaponParms wp; 
  vec3_t outPos; 
  vec3_t v36; 

  if ( !playerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6364, ASSERT_TYPE_ASSERT, "( playerEntity )", (const char *)&queryFormat, "playerEntity") )
    __debugbreak();
  if ( (!vehicleEntity || !vehicleEntity->vehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6365, ASSERT_TYPE_ASSERT, "( vehicleEntity && vehicleEntity->vehicle )", (const char *)&queryFormat, "vehicleEntity && vehicleEntity->vehicle") )
    __debugbreak();
  v6 = orientation->m[0].v[0];
  v7 = orientation->m[0].v[1];
  v8 = orientation->m[0].v[2];
  vehicle = vehicleEntity->vehicle;
  v10 = orientation->m[2].v[2];
  *(_OWORD *)wp.right.v = *(_OWORD *)orientation->row1.v;
  wp.up.v[1] = orientation->m[2].v[1];
  wp.forward.v[0] = v6;
  wp.forward.v[1] = v7;
  wp.forward.v[2] = v8;
  wp.up.v[2] = v10;
  wp.gunForward.v[0] = v6;
  wp.gunForward.v[1] = v7;
  wp.gunForward.v[2] = v8;
  G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, vehicle->boneIndex.player, &outPos);
  Instance = GWeaponMap::GetInstance();
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &vehicleEntity->s);
  wp.weapon = *WeaponForEntity;
  wp.isAlternate = 0;
  v13 = BG_WeaponDef(WeaponForEntity, 0);
  gameTime = level.time;
  wp.weapDef = v13;
  if ( BG_GetWeaponType(&wp.weapon, 0) == WEAPTYPE_BULLET )
  {
    v15 = G_Vehicle_TurretFireType(vehicleEntity);
    v16 = vehicleEntity->vehicle;
    if ( v15 )
    {
      v17 = v15 - 1;
      if ( v17 )
      {
        if ( v17 != 1 )
        {
          ServerDef = G_Vehicle_GetServerDef(v16->defIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6444, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", ServerDef->name) )
            goto LABEL_35;
          goto LABEL_42;
        }
        v19 = 1780i64;
        if ( v16->turret.fireBarrel )
          v19 = 1784i64;
        G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, *(_DWORD *)((char *)&v16->ent + v19), &v36);
        v20 = fsqrt((float)((float)((float)(v36.v[1] - outPos.v[1]) * (float)(v36.v[1] - outPos.v[1])) + (float)((float)(v36.v[0] - outPos.v[0]) * (float)(v36.v[0] - outPos.v[0]))) + (float)((float)(v36.v[2] - outPos.v[2]) * (float)(v36.v[2] - outPos.v[2])));
        wp.muzzleTrace.v[0] = (float)(v20 * wp.forward.v[0]) + outPos.v[0];
        wp.muzzleTrace.v[2] = (float)(v20 * wp.forward.v[2]) + outPos.v[2];
        wp.muzzleTrace.v[1] = (float)(v20 * wp.forward.v[1]) + outPos.v[1];
        v21 = 0;
        G_Bullet_Fire(playerEntity, wp.weapDef->playerSpread, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
LABEL_39:
        v33 = vehicleEntity->vehicle;
        LOBYTE(v21) = v33->turret.fireBarrel == 0;
        v33->turret.fireBarrel = v21;
        goto LABEL_42;
      }
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, v16->boneIndex.flash[0], &v36);
      v22 = fsqrt((float)((float)((float)(v36.v[1] - outPos.v[1]) * (float)(v36.v[1] - outPos.v[1])) + (float)((float)(v36.v[0] - outPos.v[0]) * (float)(v36.v[0] - outPos.v[0]))) + (float)((float)(v36.v[2] - outPos.v[2]) * (float)(v36.v[2] - outPos.v[2])));
      wp.muzzleTrace.v[0] = (float)(v22 * wp.forward.v[0]) + outPos.v[0];
      wp.muzzleTrace.v[2] = (float)(v22 * wp.forward.v[2]) + outPos.v[2];
      wp.muzzleTrace.v[1] = (float)(v22 * wp.forward.v[1]) + outPos.v[1];
      G_Bullet_Fire(playerEntity, wp.weapDef->playerSpread, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, vehicleEntity->vehicle->boneIndex.flash[1], &v36);
      v23 = fsqrt((float)((float)((float)(v36.v[1] - outPos.v[1]) * (float)(v36.v[1] - outPos.v[1])) + (float)((float)(v36.v[0] - outPos.v[0]) * (float)(v36.v[0] - outPos.v[0]))) + (float)((float)(v36.v[2] - outPos.v[2]) * (float)(v36.v[2] - outPos.v[2])));
      wp.muzzleTrace.v[0] = (float)(v23 * wp.forward.v[0]) + outPos.v[0];
      wp.muzzleTrace.v[2] = (float)(v23 * wp.forward.v[2]) + outPos.v[2];
      wp.muzzleTrace.v[1] = (float)(v23 * wp.forward.v[1]) + outPos.v[1];
    }
    else
    {
      G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, v16->boneIndex.flash[0], &v36);
      v24 = fsqrt((float)((float)((float)(v36.v[1] - outPos.v[1]) * (float)(v36.v[1] - outPos.v[1])) + (float)((float)(v36.v[0] - outPos.v[0]) * (float)(v36.v[0] - outPos.v[0]))) + (float)((float)(v36.v[2] - outPos.v[2]) * (float)(v36.v[2] - outPos.v[2])));
      wp.muzzleTrace.v[0] = (float)(v24 * wp.forward.v[0]) + outPos.v[0];
      wp.muzzleTrace.v[2] = (float)(v24 * wp.forward.v[2]) + outPos.v[2];
      wp.muzzleTrace.v[1] = (float)(v24 * wp.forward.v[1]) + outPos.v[1];
    }
    G_Bullet_Fire(playerEntity, wp.weapDef->playerSpread, &wp, vehicleEntity, WEAPON_HAND_DEFAULT, gameTime);
    goto LABEL_42;
  }
  WeaponType = BG_GetWeaponType(&wp.weapon, wp.isAlternate);
  v26 = G_Vehicle_TurretFireType(vehicleEntity);
  v27 = vehicleEntity->vehicle;
  if ( WeaponType == WEAPTYPE_GRENADE )
  {
    if ( v26 == VEH_TURRET_SINGLE_FIRE )
    {
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v27->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, WeaponForEntity, WEAPON_HAND_DEFAULT, gameTime, &wp);
      goto LABEL_42;
    }
    if ( v26 == VEH_TURRET_DUAL_FIRE )
    {
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v27->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, WeaponForEntity, WEAPON_HAND_DEFAULT, gameTime, &wp);
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, vehicleEntity->vehicle->boneIndex.flash[1], &wp.muzzleTrace);
      G_Weapon_GrenadeLauncher_Fire(vehicleEntity, WeaponForEntity, WEAPON_HAND_DEFAULT, gameTime, &wp);
      goto LABEL_42;
    }
    if ( v26 != VEH_TURRET_ALT_FIRE )
    {
      v28 = G_Vehicle_GetServerDef(v27->defIndex);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6475, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", v28->name) )
        goto LABEL_35;
      goto LABEL_42;
    }
    v29 = 1780i64;
    if ( v27->turret.fireBarrel )
      v29 = 1784i64;
    G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, *(_DWORD *)((char *)&v27->ent + v29), &v36);
    v30 = fsqrt((float)((float)((float)(v36.v[1] - outPos.v[1]) * (float)(v36.v[1] - outPos.v[1])) + (float)((float)(v36.v[0] - outPos.v[0]) * (float)(v36.v[0] - outPos.v[0]))) + (float)((float)(v36.v[2] - outPos.v[2]) * (float)(v36.v[2] - outPos.v[2])));
    wp.muzzleTrace.v[0] = (float)(v30 * wp.forward.v[0]) + outPos.v[0];
    wp.muzzleTrace.v[2] = (float)(v30 * wp.forward.v[2]) + outPos.v[2];
    wp.muzzleTrace.v[1] = (float)(v30 * wp.forward.v[1]) + outPos.v[1];
    G_Weapon_GrenadeLauncher_Fire(playerEntity, WeaponForEntity, WEAPON_HAND_DEFAULT, gameTime, &wp);
    v21 = 0;
    goto LABEL_39;
  }
  switch ( v26 )
  {
    case VEH_TURRET_SINGLE_FIRE:
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v27->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_RocketLauncher_Fire(vehicleEntity, WeaponForEntity, wp.isAlternate, WEAPON_HAND_DEFAULT, 0.0, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_42;
    case VEH_TURRET_DUAL_FIRE:
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, v27->boneIndex.flash[0], &wp.muzzleTrace);
      G_Weapon_RocketLauncher_Fire(vehicleEntity, WeaponForEntity, wp.isAlternate, WEAPON_HAND_DEFAULT, 0.0, &wp, &vec3_origin, gameTime, NULL, 0);
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, vehicleEntity->vehicle->boneIndex.flash[1], &wp.muzzleTrace);
      G_Weapon_RocketLauncher_Fire(vehicleEntity, WeaponForEntity, wp.isAlternate, WEAPON_HAND_DEFAULT, 0.0, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_42;
    case VEH_TURRET_ALT_FIRE:
      v32 = 1780i64;
      if ( v27->turret.fireBarrel )
        v32 = 1784i64;
      G_Vehicle_GetMuzzleTrace(vehicleEntity, &outPos, &wp.forward, *(_DWORD *)((char *)&v27->ent + v32), &wp.muzzleTrace);
      v21 = 0;
      G_Weapon_RocketLauncher_Fire(vehicleEntity, WeaponForEntity, wp.isAlternate, WEAPON_HAND_DEFAULT, 0.0, &wp, &vec3_origin, gameTime, NULL, 0);
      goto LABEL_39;
  }
  v31 = G_Vehicle_GetServerDef(v27->defIndex);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6513, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown turret fire type for vehicle %s", v31->name) )
LABEL_35:
    __debugbreak();
LABEL_42:
  G_Utils_AddEvent(vehicleEntity, 0x59u, 0);
  G_Vehicle_NotifyTurretFire(vehicleEntity->vehicle);
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
  const VehicleDef *ServerDef; 
  int v7; 
  const scr_string_t *PlayerBoneTags; 
  scr_string_t *v9; 
  bool v10; 
  int v11; 
  float v12; 
  const SuitDef *SuitDef; 
  float vehCam_offsetX; 
  float vehCam_offsetY; 
  float viewheight_stand; 
  float vehCam_offsetZ; 
  int outCountTags; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  ServerDef = G_Vehicle_GetServerDef(vehicleEntity->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6668, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  v7 = 0;
  outCountTags = 0;
  PlayerBoneTags = BGVehicles::GetPlayerBoneTags(&outCountTags);
  v9 = (scr_string_t *)PlayerBoneTags;
  if ( (outCountTags <= 0 || !PlayerBoneTags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6672, ASSERT_TYPE_ASSERT, "(vehPlayerTagCount > 0 && vehPlayerTags != 0)", (const char *)&queryFormat, "vehPlayerTagCount > 0 && vehPlayerTags != NULL") )
    __debugbreak();
  if ( ServerDef->camRemoteDrive )
  {
    if ( !G_Utils_DObjGetWorldTagPos(vehicleEntity, scr_const.tag_camera, outOrigin) )
    {
      v11 = outCountTags;
      if ( outCountTags > 0 )
      {
        do
        {
          v10 = G_Utils_DObjGetWorldTagMatrix(vehicleEntity, *v9, &outTagMat) == 0;
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
        AnglesToAxis(&vehicleEntity->r.currentAngles, (tmat33_t<vec3_t> *)&outTagMat);
        v12 = vehicleEntity->r.currentOrigin.v[1];
        outTagMat.m[3].v[0] = vehicleEntity->r.currentOrigin.v[0];
        outTagMat.m[3].v[2] = vehicleEntity->r.currentOrigin.v[2];
        outTagMat.m[3].v[1] = v12;
      }
      SuitDef = BG_GetSuitDef(playerState->suitIndex);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6718, ASSERT_TYPE_ASSERT, "( suitDef )", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      vehCam_offsetX = ServerDef->vehCam_offsetX;
      vehCam_offsetY = ServerDef->vehCam_offsetY;
      viewheight_stand = (float)SuitDef->viewheight_stand;
      outTagMat.m[3].v[0] = (float)(viewheight_stand * outTagMat.m[2].v[0]) + outTagMat.m[3].v[0];
      outTagMat.m[3].v[1] = (float)(viewheight_stand * outTagMat.m[2].v[1]) + outTagMat.m[3].v[1];
      in1.v[0] = vehCam_offsetX;
      vehCam_offsetZ = ServerDef->vehCam_offsetZ;
      outTagMat.m[3].v[2] = (float)(viewheight_stand * outTagMat.m[2].v[2]) + outTagMat.m[3].v[2];
      in1.v[1] = vehCam_offsetY;
      in1.v[2] = vehCam_offsetZ;
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
        if ( G_Utils_DObjGetWorldTagPos(vehicleEntity, *v9, outOrigin) )
          break;
        ++v7;
        ++v9;
      }
      while ( v7 < outCountTags );
      v10 = v7 == outCountTags;
    }
    if ( v10 )
    {
      outOrigin->v[0] = vehicleEntity->r.currentOrigin.v[0];
      outOrigin->v[1] = vehicleEntity->r.currentOrigin.v[1];
      outOrigin->v[2] = vehicleEntity->r.currentOrigin.v[2];
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
  float v7; 
  vec3_t outPos; 

  G_Utils_DObjGetWorldBoneIndexPos(vehicleEntity, muzzleBone, &outPos);
  v7 = fsqrt((float)((float)((float)(outPos.v[0] - gunOrigin->v[0]) * (float)(outPos.v[0] - gunOrigin->v[0])) + (float)((float)(outPos.v[1] - gunOrigin->v[1]) * (float)(outPos.v[1] - gunOrigin->v[1]))) + (float)((float)(outPos.v[2] - gunOrigin->v[2]) * (float)(outPos.v[2] - gunOrigin->v[2])));
  outMuzzleTrace->v[0] = (float)(v7 * gunForward->v[0]) + gunOrigin->v[0];
  outMuzzleTrace->v[1] = (float)(v7 * gunForward->v[1]) + gunOrigin->v[1];
  outMuzzleTrace->v[2] = (float)(v7 * gunForward->v[2]) + gunOrigin->v[2];
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
  gentity_s *v4; 
  const VehicleDef *ServerDef; 
  float vehCam_offsetZ; 
  float vehCam_offsetY; 
  float vehCam_offsetX3P; 
  float vehCam_offsetY3P; 
  float vehCam_offsetZ3P; 
  float v11; 
  float v12; 
  float v13; 
  VehCamZOffsetMode vehCam_zOffsetMode3P; 
  __int32 v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  trace_t *trace; 
  __int64 v22; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> v25; 
  trace_t v26; 

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
  v4 = &g_entities[playerState->vehicleState.entity];
  if ( !v4->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6741, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(v4->vehicle->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6744, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  G_Vehicle_GetCameraOrigin(playerState, v4, &axis.m[3]);
  AnglesToAxis(&v4->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  if ( ServerDef->camRemoteDrive )
  {
    vehCam_offsetZ = ServerDef->vehCam_offsetZ;
    vehCam_offsetY = ServerDef->vehCam_offsetY;
    in1.v[0] = ServerDef->vehCam_offsetX;
    in1.v[1] = vehCam_offsetY;
    in1.v[2] = vehCam_offsetZ;
    MatrixTransformVector43(&in1, &axis, outViewOrigin);
  }
  else
  {
    if ( ServerDef->vehCam_zOffsetMode3P >= (unsigned int)VEHCAM_ZMODE_COUNT )
    {
      LODWORD(v22) = 3;
      LODWORD(trace) = ServerDef->vehCam_zOffsetMode3P;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6760, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleDef->vehCam_zOffsetMode3P ) < (unsigned)( VEHCAM_ZMODE_COUNT )", "vehicleDef->vehCam_zOffsetMode3P doesn't index VEHCAM_ZMODE_COUNT\n\t%i not in [0, %i)", trace, v22) )
        __debugbreak();
    }
    vehCam_offsetX3P = ServerDef->vehCam_offsetX3P;
    vehCam_offsetY3P = ServerDef->vehCam_offsetY3P;
    vehCam_offsetZ3P = ServerDef->vehCam_offsetZ3P;
    v11 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[0]) + axis.m[3].v[0]) + (float)(vehCam_offsetY3P * axis.m[1].v[0]);
    v12 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[1]) + axis.m[3].v[1]) + (float)(vehCam_offsetY3P * axis.m[1].v[1]);
    in1.v[0] = vehCam_offsetX3P;
    v13 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[2]) + axis.m[3].v[2]) + (float)(vehCam_offsetY3P * axis.m[1].v[2]);
    outViewOrigin->v[2] = v13;
    in1.v[1] = vehCam_offsetY3P;
    in1.v[2] = vehCam_offsetZ3P;
    outViewOrigin->v[0] = v11;
    outViewOrigin->v[1] = v12;
    vehCam_zOffsetMode3P = ServerDef->vehCam_zOffsetMode3P;
    if ( vehCam_zOffsetMode3P )
    {
      v15 = vehCam_zOffsetMode3P - 1;
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          AnglesToAxis(&playerState->viewangles, &v25);
          v16 = in1.v[2];
          v17 = in1.v[2] * v25.m[2].v[1];
          outViewOrigin->v[0] = (float)(in1.v[2] * v25.m[2].v[0]) + outViewOrigin->v[0];
          v18 = v16 * v25.m[2].v[2];
          outViewOrigin->v[1] = v17 + outViewOrigin->v[1];
          outViewOrigin->v[2] = v18 + outViewOrigin->v[2];
        }
      }
      else
      {
        v19 = vehCam_offsetZ3P * axis.m[2].v[1];
        outViewOrigin->v[0] = (float)(vehCam_offsetZ3P * axis.m[2].v[0]) + v11;
        v20 = vehCam_offsetZ3P * axis.m[2].v[2];
        outViewOrigin->v[1] = v19 + v12;
        outViewOrigin->v[2] = v20 + v13;
      }
    }
    else
    {
      outViewOrigin->v[2] = v13 + vehCam_offsetZ3P;
    }
    G_Active_ThirdPersonViewTrace(playerState, &axis.m[3], outViewOrigin, 41951761, 0.0, &v26, outViewOrigin);
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
  vehicle_physic_t *v3; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  VehicleType type; 
  int WheelCount; 
  __int64 v9; 
  unsigned int model; 
  const char *v11; 
  scr_string_t target; 
  const char *v13; 
  const char *v14; 
  scr_string_t script_classname; 
  const char *v16; 
  float v17; 
  int v18; 
  float v19; 
  gentity_s *i; 
  float v21; 
  int v22; 
  int v23; 
  vec3_t *p_pos; 
  signed __int64 v25; 
  float *wheelZPos; 
  __int64 v27; 
  Vehicle *v28; 
  const VehicleDef *v29; 
  scr_string_t WheelBoneTag; 
  const char *v31; 
  const char *v32; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  unsigned __int16 hitId; 
  int number; 
  __int128 fraction_low; 
  int v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  const dvar_t *v46; 
  __int128 v47; 
  float v48; 
  float v49; 
  float v50; 
  __int128 v54; 
  float v55; 
  float v56; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __int64 v64; 
  float suspensionTravel; 
  float *v66; 
  unsigned __int64 v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  __int64 v73; 
  float *v74; 
  float v75; 
  __int128 v76; 
  __int128 v80; 
  float v84; 
  __int64 v85; 
  bool v86; 
  float v87; 
  __int64 duration; 
  __int64 durationa; 
  __int64 v90; 
  __int64 v91; 
  int wheelIndex; 
  float v93; 
  Vehicle *v94; 
  signed __int64 v95; 
  int contentmask; 
  float v98; 
  __int64 v99; 
  vec3_t *v100; 
  __int64 v101; 
  __int64 v102; 
  const VehicleDef *v104; 
  VehicleDrivingState *p_drivingState; 
  vec3_t out; 
  vec3_t start; 
  vec3_t end; 
  vec3_t cross; 
  float v110; 
  tmat43_t<vec3_t> axis; 
  vec3_t v0; 
  vec3_t in1; 
  vec3_t v1; 
  vec3_t v115; 
  vec3_t v116; 
  vec3_t v117; 
  vec3_t v118; 
  vec3_t angles; 
  Bounds box; 
  vec4_t color; 
  vec4_t v122; 
  vec4_t v123; 
  vec4_t v124; 
  vec4_t v125; 
  vec4_t v126; 
  trace_t results; 
  trace_t v128; 
  vec3_t pos; 
  float v130; 
  float v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
  float v138; 

  v3 = phys;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1541, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1542, ASSERT_TYPE_ASSERT, "( phys )", (const char *)&queryFormat, "phys") )
    __debugbreak();
  vehicle = ent->vehicle;
  v94 = vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1545, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  v104 = ServerDef;
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1548, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  type = ServerDef->type;
  if ( type && type != VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1549, ASSERT_TYPE_ASSERT, "( (vehDef->type == VEH_WHEELS_4) || (vehDef->type == VEH_TREADED) )", (const char *)&queryFormat, "(vehDef->type == VEH_WHEELS_4) || (vehDef->type == VEH_TREADED)") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(ServerDef);
  v9 = WheelCount;
  if ( WheelCount < 4 )
  {
    model = ent->model;
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    v11 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, model);
    target = ent->target;
    v13 = v11;
    if ( target )
      v14 = SL_ConvertToString(target);
    else
      v14 = (char *)&queryFormat.fmt + 3;
    script_classname = ent->script_classname;
    if ( script_classname )
      v16 = SL_ConvertToString(script_classname);
    else
      v16 = (char *)&queryFormat.fmt + 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1559, ASSERT_TYPE_ASSERT, "(numWheels >= 4)", "%s\n\tVehicle '%s' on entity '%s:%s', using model '%s' only has %d wheels.\nThis is likely due to not deleting an entity that uses this vehicle, before its xmodel has unloaded", "numWheels >= 4", ServerDef->name, v16, v14, v13, v9) )
      __debugbreak();
  }
  v17 = v3->origin.v[1];
  v18 = 66065;
  p_drivingState = &vehicle->drivingState;
  if ( vehicle->drivingState != VEH_DRIVE_PLAYER )
    v18 = 529;
  axis.m[3].v[0] = v3->origin.v[0];
  v19 = v3->prevOrigin.v[2];
  contentmask = v18;
  axis.m[3].v[1] = v17;
  axis.m[3].v[2] = v19;
  AnglesToAxis(&v3->angles, (tmat33_t<vec3_t> *)&axis);
  for ( i = ent->tagChildren; i; i = i->tagInfo->next )
  {
    if ( i->s.index.brushModel )
      break;
  }
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v21 = (float)level.frameDuration * 0.001;
  v22 = 0;
  v102 = v9;
  v23 = 0;
  wheelIndex = 0;
  v98 = 1.0 / v21;
  v93 = v21;
  if ( v9 > 0 )
  {
    p_pos = &pos;
    v25 = (char *)v94 - (char *)v3;
    v100 = &pos;
    v95 = (char *)v94 - (char *)v3;
    v99 = v9;
    v101 = 1600i64 - (_QWORD)v3;
    wheelZPos = v3->wheelZPos;
    v27 = v9;
    while ( *(int *)((char *)wheelZPos + v25 + 1600) < 0 )
    {
      *(_QWORD *)p_pos->v = 0i64;
      p_pos->v[2] = 0.0;
LABEL_84:
      ++v23;
      ++p_pos;
      ++wheelZPos;
      wheelIndex = v23;
      --v27;
      v100 = p_pos;
      v99 = v27;
      if ( !v27 )
      {
        v9 = v102;
        v3 = phys;
        ServerDef = v104;
        goto LABEL_86;
      }
    }
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 865, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    v28 = ent->vehicle;
    if ( *(int *)((char *)&v28->ent + (_QWORD)wheelZPos + v101) < 0 )
    {
      v29 = G_Vehicle_GetServerDef(v28->defIndex);
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 872, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
        __debugbreak();
      WheelBoneTag = BGVehicles::GetWheelBoneTag(v29, wheelIndex);
      if ( WheelBoneTag )
      {
        v31 = SL_ConvertToString(WheelBoneTag);
        v32 = SL_ConvertToString(ent->targetname);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E34918, 1233i64, v32, v31);
      }
    }
    LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(ent, *(_DWORD *)((char *)&v28->ent + (_QWORD)wheelZPos + v101));
    if ( !LocalBoneIndexMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 879, ASSERT_TYPE_ASSERT, "( mtx )", (const char *)&queryFormat, "mtx") )
      __debugbreak();
    in1 = LocalBoneIndexMatrix->trans;
    MatrixTransformVector43(&in1, &axis, &out);
    v34 = DCONST_DVARINT_bg_vehicleDebug;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.integer )
    {
      color = (vec4_t)_xmm;
      *(_OWORD *)box.midPoint.v = _xmm;
      box.halfSize.v[1] = FLOAT_2_0;
      box.halfSize.v[2] = FLOAT_2_0;
      G_DebugBox(&out, &box, 0.0, &color, 1, 0);
    }
    v35 = DCONST_DVARINT_bg_vehicleDebug;
    start.v[0] = out.v[0];
    end.v[0] = out.v[0];
    start.v[1] = out.v[1];
    end.v[1] = out.v[1];
    end.v[2] = out.v[2] - 256.0;
    start.v[2] = out.v[2] + 64.0;
    if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.integer )
    {
      v122 = (vec4_t)_xmm;
      G_DebugLine(&start, &end, &v122, 1);
    }
    G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, ent->s.number, contentmask);
    hitId = results.hitId;
    if ( results.hitId > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(results.hitId), "unsigned", results.hitId) )
      __debugbreak();
    if ( i )
    {
      if ( hitId == i->s.number )
      {
        G_Main_TraceCapsule(&v128, &out, &start, &bounds_origin, ent->s.number, contentmask);
        if ( truncate_cast<unsigned short,unsigned int>(v128.hitId) == i->s.number )
        {
          number = ent->s.number;
          fraction_low = LODWORD(v128.fraction);
          *(float *)&fraction_low = v128.fraction - 0.125;
          _XMM1 = fraction_low;
          __asm { vmaxss  xmm6, xmm1, xmm7 }
          start.v[0] = (float)((float)(start.v[0] - out.v[0]) * *(float *)&_XMM6) + out.v[0];
          start.v[1] = (float)((float)(start.v[1] - out.v[1]) * *(float *)&_XMM6) + out.v[1];
          start.v[2] = (float)((float)(start.v[2] - out.v[2]) * *(float *)&_XMM6) + out.v[2];
          G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, number, contentmask);
        }
      }
    }
    if ( results.fraction >= 1.0 )
    {
      out = end;
      v41 = 0;
    }
    else
    {
      out.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
      out.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
      out.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
      v41 = (results.surfaceFlags >> 19) & 0x3F;
    }
    *((_DWORD *)wheelZPos + 12) = v41;
    if ( gravity )
    {
      v42 = *(wheelZPos - 12) - (float)(v21 * 800.0);
      v43 = (float)(v42 * v21) + *wheelZPos;
      v44 = out.v[2];
      v86 = v43 < out.v[2];
      *(wheelZPos - 12) = v42;
      *wheelZPos = v43;
      if ( !v86 )
        goto LABEL_78;
      *wheelZPos = v44;
      v43 = v44;
    }
    else
    {
      v43 = out.v[2];
      *wheelZPos = out.v[2];
    }
    *(wheelZPos - 12) = 0.0;
LABEL_78:
    p_pos = v100;
    v45 = out.v[1];
    v46 = DCONST_DVARINT_bg_vehicleDebug;
    v100->v[0] = out.v[0];
    v100->v[1] = v45;
    v100->v[2] = v43;
    if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v46);
    if ( v46->current.integer )
      G_Vehicle_DebugBox(&pos + wheelIndex, 4.0, 0.0, 1.0, 0.0);
    v27 = v99;
    v25 = v95;
    v23 = wheelIndex;
    goto LABEL_84;
  }
LABEL_86:
  v47 = LODWORD(v131);
  v48 = (float)((float)(v136 + v130) * 0.5) - (float)((float)(pos.v[0] + v133) * 0.5);
  v49 = (float)((float)(v131 + v137) * 0.5) - (float)((float)(v134 + pos.v[1]) * 0.5);
  v50 = (float)((float)(v138 + v132) * 0.5) - (float)((float)(pos.v[2] + v135) * 0.5);
  *(float *)&v47 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
  _XMM4 = v47;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v0.v[0] = (float)(1.0 / *(float *)&_XMM0) * v48;
  v0.v[2] = (float)(1.0 / *(float *)&_XMM0) * v50;
  v0.v[1] = (float)(1.0 / *(float *)&_XMM0) * v49;
  v54 = LODWORD(v131);
  v55 = (float)((float)(pos.v[0] + v130) * 0.5) - (float)((float)(v133 + v136) * 0.5);
  v56 = (float)((float)(v131 + pos.v[1]) * 0.5) - (float)((float)(v134 + v137) * 0.5);
  *(float *)&_XMM4 = (float)((float)(pos.v[2] + v132) * 0.5) - (float)((float)(v138 + v135) * 0.5);
  *(float *)&v54 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(*(float *)&_XMM4 * *(float *)&_XMM4));
  _XMM3 = v54;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  v1.v[0] = (float)(1.0 / *(float *)&_XMM0) * v55;
  v1.v[2] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&_XMM4;
  v1.v[1] = (float)(1.0 / *(float *)&_XMM0) * v56;
  Vec3Cross(&v0, &v1, &cross);
  v60 = cross.v[1];
  v61 = cross.v[0];
  v62 = cross.v[2];
  v63 = (float)((float)(cross.v[1] * pos.v[1]) + (float)(cross.v[0] * pos.v[0])) + (float)(cross.v[2] * pos.v[2]);
  v110 = v63;
  if ( v9 > 1 )
  {
    v64 = 1i64;
    if ( v9 >= 5 )
    {
      suspensionTravel = ServerDef->vehiclePhysicsDef.suspensionTravel;
      v66 = &v132;
      v67 = ((unsigned __int64)(v9 - 5) >> 2) + 1;
      v64 = 4 * v67 + 1;
      do
      {
        v68 = (float)((float)(cross.v[0] * *(v66 - 2)) + (float)(cross.v[1] * *(v66 - 1))) + (float)(cross.v[2] * *v66);
        if ( (float)(v68 - v63) > suspensionTravel )
        {
          v63 = v68 - suspensionTravel;
          v110 = v68 - suspensionTravel;
        }
        v69 = (float)((float)(cross.v[0] * v66[1]) + (float)(cross.v[1] * v66[2])) + (float)(cross.v[2] * v66[3]);
        if ( (float)(v69 - v63) > suspensionTravel )
        {
          v63 = v69 - suspensionTravel;
          v110 = v69 - suspensionTravel;
        }
        v70 = (float)((float)(cross.v[0] * v66[4]) + (float)(cross.v[1] * v66[5])) + (float)(cross.v[2] * v66[6]);
        if ( (float)(v70 - v63) > suspensionTravel )
        {
          v63 = v70 - suspensionTravel;
          v110 = v70 - suspensionTravel;
        }
        v71 = (float)((float)(cross.v[0] * v66[7]) + (float)(cross.v[1] * v66[8])) + (float)(cross.v[2] * v66[9]);
        if ( (float)(v71 - v63) > suspensionTravel )
        {
          v63 = v71 - suspensionTravel;
          v110 = v71 - suspensionTravel;
        }
        v66 += 12;
        --v67;
      }
      while ( v67 );
    }
    if ( v64 < v9 )
    {
      v72 = ServerDef->vehiclePhysicsDef.suspensionTravel;
      v73 = v9 - v64;
      v74 = &pos.v[3 * v64 + 2];
      do
      {
        v75 = (float)((float)(cross.v[0] * *(v74 - 2)) + (float)(cross.v[1] * *(v74 - 1))) + (float)(cross.v[2] * *v74);
        if ( (float)(v75 - v63) > v72 )
          v63 = v75 - v72;
        v74 += 3;
        --v73;
      }
      while ( v73 );
      v110 = v63;
    }
  }
  Vec3Cross(&cross, axis.m, &axis.m[1]);
  v76 = LODWORD(axis.m[1].v[0]);
  *(float *)&v76 = fsqrt((float)((float)(*(float *)&v76 * *(float *)&v76) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]));
  _XMM3 = v76;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  axis.m[1].v[0] = axis.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[1].v[2] = axis.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[1].v[1] = axis.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
  Vec3Cross(&axis.m[1], &cross, axis.m);
  v80 = LODWORD(axis.m[0].v[0]);
  *(float *)&v80 = fsqrt((float)((float)(*(float *)&v80 * *(float *)&v80) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]));
  _XMM3 = v80;
  __asm
  {
    vcmpless xmm0, xmm3, xmm7
    vblendvps xmm0, xmm3, xmm12, xmm0
  }
  axis.m[0].v[0] = axis.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[0].v[2] = axis.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
  axis.m[0].v[1] = axis.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
  AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
  *(double *)&_XMM0 = DiffTrackAngle(angles.v[0], v3->prevAngles.v[0], 6.0, v93);
  v3->angles.v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = DiffTrackAngle(angles.v[2], v3->prevAngles.v[2], 6.0, v93);
  v3->angles.v[2] = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(v3->angles.v[0], -60.0, 60.0);
  v3->angles.v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = I_fclamp(v3->angles.v[2], -60.0, 60.0);
  v3->angles.v[2] = *(float *)&_XMM0;
  if ( *p_drivingState != VEH_DRIVE_PLAYER )
  {
    if ( COERCE_FLOAT(LODWORD(v62) & _xmm) <= 0.001 )
    {
      v84 = v3->origin.v[2];
    }
    else
    {
      v84 = (float)((float)((float)(v61 * v3->origin.v[0]) + (float)(v60 * v3->origin.v[1])) - v63) * (float)(-1.0 / v62);
      v3->origin.v[2] = v84;
    }
    if ( (LODWORD(v84) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1714, ASSERT_TYPE_SANITY, "( !IS_NAN( phys->origin[2] ) )", (const char *)&queryFormat, "!IS_NAN( phys->origin[2] )") )
      __debugbreak();
  }
  AnglesSubtract(&v3->angles, &v3->prevAngles, &v3->rotVel);
  v3->rotVel.v[0] = v98 * v3->rotVel.v[0];
  v3->rotVel.v[1] = v98 * v3->rotVel.v[1];
  v3->rotVel.v[2] = v98 * v3->rotVel.v[2];
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") )
  {
    v85 = 0i64;
    v86 = 1;
    do
    {
      if ( !v86 )
      {
        LODWORD(v90) = 4;
        LODWORD(duration) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v90) )
          __debugbreak();
      }
      v115.v[v85] = pos.v[v85];
      v115.v[v85 + 1] = pos.v[v85 + 1];
      v115.v[v85 + 2] = pos.v[v85 + 2];
      if ( (unsigned int)v22 >= 4 )
      {
        LODWORD(v90) = 4;
        LODWORD(duration) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v90) )
          __debugbreak();
        LODWORD(v91) = 4;
        LODWORD(durationa) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", durationa, v91) )
          __debugbreak();
      }
      v87 = (float)((float)((float)(v61 * v115.v[v85]) + (float)(v60 * v115.v[v85 + 1])) - v63) * (float)(-1.0 / v62);
      if ( (unsigned int)v22 >= 4 )
      {
        LODWORD(v90) = 4;
        LODWORD(duration) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", duration, v90) )
          __debugbreak();
      }
      v115.v[v85 + 2] = v87;
      v85 += 3i64;
      v86 = (unsigned int)++v22 < 4;
    }
    while ( v22 < 4 );
    v123 = (vec4_t)_xmm;
    G_DebugLine(&v115, &v116, &v123, 1);
    v124 = (vec4_t)_xmm;
    G_DebugLine(&v116, &v118, &v124, 1);
    v125 = (vec4_t)_xmm;
    G_DebugLine(&v118, &v117, &v125, 1);
    v126 = (vec4_t)_xmm;
    G_DebugLine(&v117, &v115, &v126, 1);
  }
}

/*
==============
G_Vehicle_GroundTrace
==============
*/
void G_Vehicle_GroundTrace(gentity_s *ent)
{
  __int128 v1; 
  Vehicle *vehicle; 
  int number; 
  int v5; 
  Vehicle *v6; 
  float *i; 
  float v8; 
  int v9; 
  int clipmask; 
  float v11; 
  int v12; 
  int v13; 
  int contentmask; 
  vec3_t v15; 
  vec3_t end; 
  vec3_t start; 
  trace_t results; 
  __int128 v19; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1362, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1363, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  number = ent->s.number;
  contentmask = ent->clipmask;
  *(_QWORD *)start.v = *(_QWORD *)vehicle->phys.origin.v;
  start.v[2] = vehicle->phys.origin.v[2] + 0.25;
  *(_QWORD *)end.v = *(_QWORD *)vehicle->phys.origin.v;
  end.v[2] = vehicle->phys.origin.v[2] - 0.25;
  G_Main_TraceCapsule(&results, &start, &end, &vehicle->phys.bounds, number, contentmask);
  v5 = 0;
  s_phys.groundTrace = results;
  *(_QWORD *)&s_phys.hasGround = 0i64;
  if ( results.allsolid )
  {
    v6 = ent->vehicle;
    for ( i = &s_correctSolidDeltas[0].v[2]; ; i += 3 )
    {
      v8 = *(i - 1);
      v9 = ent->s.number;
      clipmask = ent->clipmask;
      v15.v[0] = *(i - 2) + v6->phys.origin.v[0];
      v15.v[1] = v8 + v6->phys.origin.v[1];
      v15.v[2] = v6->phys.origin.v[2] + *i;
      G_Main_TraceCapsule(&results, &v15, &v15, &v6->phys.bounds, v9, clipmask);
      if ( !results.startsolid )
        break;
      if ( (unsigned int)++v5 >= 0x1A )
        return;
    }
    v6->phys.origin.v[0] = v15.v[0];
    v6->phys.origin.v[1] = v15.v[1];
    v11 = v6->phys.origin.v[0];
    v6->phys.origin.v[2] = v15.v[2];
    v12 = ent->s.number;
    v13 = ent->clipmask;
    v15.v[0] = v11;
    v15.v[1] = v6->phys.origin.v[1];
    v15.v[2] = v6->phys.origin.v[2] - 1.0;
    v19 = v1;
    G_Main_TraceCapsule(&results, &v6->phys.origin, &v15, &v6->phys.bounds, v12, v13);
    s_phys.groundTrace = results;
    v6->phys.origin.v[0] = (float)((float)(v15.v[0] - v6->phys.origin.v[0]) * *(float *)&v1) + v6->phys.origin.v[0];
    v6->phys.origin.v[1] = (float)((float)(v15.v[1] - v6->phys.origin.v[1]) * *(float *)&v1) + v6->phys.origin.v[1];
    v6->phys.origin.v[2] = (float)((float)(v15.v[2] - v6->phys.origin.v[2]) * *(float *)&v1) + v6->phys.origin.v[2];
  }
  if ( results.fraction != 1.0 && (vehicle->phys.vel.v[2] <= 0.0 || (float)((float)((float)(results.normal.v[1] * vehicle->phys.vel.v[1]) + (float)(results.normal.v[0] * vehicle->phys.vel.v[0])) + (float)(results.normal.v[2] * vehicle->phys.vel.v[2])) <= 10.0) )
  {
    s_phys.hasGround = 1;
    if ( results.normal.v[2] >= 0.69999999 )
      s_phys.onGround = 1;
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
  const gentity_s *v8; 
  Vehicle *vehicle; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  float v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int otherBodyId; 
  vec3_t position; 
  vec4_t orientation; 

  v6 = ent1;
  if ( ent1->s.eType == ET_FIRST && (v7 = ent2->vehicle) != NULL && G_Vehicle_GetServerDef(v7->defIndex)->accurateShapeOverlap )
  {
    v8 = ent2;
  }
  else
  {
    if ( ent2->s.eType )
      return 0;
    vehicle = v6->vehicle;
    if ( !vehicle || !G_Vehicle_GetServerDef(vehicle->defIndex)->accurateShapeOverlap )
      return 0;
    v8 = v6;
    v6 = ent2;
  }
  position = vec3_origin;
  orientation = vec4_origin;
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8);
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
    v12 = v8->r.currentOrigin.v[1];
    position.v[0] = v8->r.currentOrigin.v[0];
    position.v[2] = v8->r.currentOrigin.v[2];
    position.v[1] = v12;
    AnglesToQuat(&v8->r.currentAngles, &orientation);
  }
  v13 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8);
  v14 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v13, 0);
  v15 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v6);
  otherBodyId = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v15, 0);
  *result = PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v14, &position, &orientation, otherBodyId);
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
  gclient_s *v7; 
  const dvar_t *v8; 
  float v9; 

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
  v7 = player->client;
  if ( (v7->flags & 4) != 0 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->ps.otherFlags, ACTIVE, 1u) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->ps.pm_flags, ACTIVE, 5u) || EntHandle::isDefined(&ent->r.ownerNum) || ent->health <= 0 )
    return 0;
  v8 = DVARFLT_player_use_vehicle_speed;
  if ( !DVARFLT_player_use_vehicle_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_use_vehicle_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value * 17.6;
  if ( v9 > 0.0 && v9 < ent->vehicle->speed )
    return 0;
  return (ent->flags.m_flags[0] & 0x20000000) != 0;
}

/*
==============
G_Vehicle_JoltBody
==============
*/
void G_Vehicle_JoltBody(gentity_s *ent, const vec3_t *dir, float intensity, float speedFrac, float decel)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  double v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  __int128 v14; 
  tmat33_t<vec3_t> axis; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1064, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1067, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  v10 = I_fclamp(intensity, 0.0, 1.0);
  v11 = *(float *)&v10;
  AnglesToAxis(&vehicle->phys.angles, &axis);
  vehicle->joltDir.v[0] = (float)((float)(axis.m[0].v[1] * dir->v[1]) + (float)(axis.m[0].v[0] * dir->v[0])) + (float)(axis.m[0].v[2] * dir->v[2]);
  LODWORD(v12) = COERCE_UNSIGNED_INT((float)((float)(axis.m[1].v[1] * dir->v[1]) + (float)(axis.m[1].v[0] * dir->v[0])) + (float)(axis.m[1].v[2] * dir->v[2])) ^ _xmm;
  vehicle->joltDir.v[1] = v12;
  *(_QWORD *)&vehicle->joltTime = 1065353216i64;
  *(float *)&v10 = v12;
  v13 = LODWORD(vehicle->joltDir.v[0]);
  v14 = v13;
  *(float *)&v14 = fsqrt((float)(*(float *)&v13 * *(float *)&v13) + (float)(*(float *)&v10 * *(float *)&v10));
  _XMM2 = v14;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm6, xmm0
  }
  vehicle->joltDir.v[0] = *(float *)&v13 * (float)(1.0 / *(float *)&_XMM0);
  vehicle->joltDir.v[1] = (float)(1.0 / *(float *)&_XMM0) * vehicle->joltDir.v[1];
  vehicle->joltDir.v[0] = (float)(v11 * ServerDef->maxBodyPitch) * vehicle->joltDir.v[0];
  vehicle->joltDir.v[1] = (float)(v11 * ServerDef->maxBodyRoll) * vehicle->joltDir.v[1];
  vehicle->joltSpeed = speedFrac * vehicle->speed;
  vehicle->joltDecel = decel;
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
void G_Vehicle_Knockback_Internal(Vehicle *veh, const vec3_t *dir, meansOfDeath_t mod, float forceScale, const vec3_t *origin, bool onlyAngular)
{
  GVehicles *v9; 
  const VehicleDef *ServerDef; 
  double Float_Internal_DebugName; 
  const dvar_t *v12; 
  const char *v13; 
  float v14; 
  float v15; 
  float v16; 
  unsigned int physicsVehicle; 
  __int64 v18; 
  vec3_t v19; 
  vec3_t impulse; 
  tmat43_t<vec3_t> transform; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5838, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    v9 = GVehicles::ms_gVehiclesSystem;
    if ( GVehicles::PhysicsIsCrashingEnabled(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle) )
    {
      if ( (unsigned int)mod >= MOD_NUM )
      {
        LODWORD(v18) = mod;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1133, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v18, 25) )
          __debugbreak();
      }
      if ( (unsigned int)(mod - 3) <= 4 || mod == MOD_EXPLOSIVE )
      {
        ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
        *(float *)&Float_Internal_DebugName = FLOAT_32000_0;
        if ( ServerDef->vehiclePhysicsDef.physics_gameProfile )
        {
          if ( ServerDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_WHEELSON )
          {
LABEL_19:
            v14 = (float)(*(float *)&Float_Internal_DebugName * forceScale) * dir->v[1];
            impulse.v[0] = (float)(*(float *)&Float_Internal_DebugName * forceScale) * dir->v[0];
            impulse.v[2] = (float)(*(float *)&Float_Internal_DebugName * forceScale) * dir->v[2];
            impulse.v[1] = v14;
            if ( origin )
            {
              v15 = origin->v[1];
              v19.v[0] = origin->v[0];
              v16 = origin->v[2];
            }
            else
            {
              GVehicles::PhysicsGetChassisTransform(v9, veh->physicsVehicle, &transform);
              v15 = transform.m[3].v[1];
              v19.v[0] = transform.m[3].v[0];
              v16 = transform.m[3].v[2];
            }
            physicsVehicle = veh->physicsVehicle;
            v19.v[2] = v16;
            v19.v[1] = v15;
            if ( onlyAngular )
              GVehicles::PhysicsAddAngularImpulse(v9, physicsVehicle, &impulse, &v19);
            else
              GVehicles::PhysicsAddImpulse(v9, physicsVehicle, &impulse, &v19);
            return;
          }
          v12 = DCONST_DVARFLT_bg_wheelsonKickBackForce;
          v13 = "bg_wheelsonKickBackForce";
        }
        else
        {
          v12 = DCONST_DVARFLT_vehTankFireForce;
          v13 = "vehTankFireForce";
        }
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v12, v13);
        goto LABEL_19;
      }
    }
  }
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
  const VehicleDef *v7; 
  int barrel; 
  tmat43_t<vec3_t> *p_outTagMat; 
  VehicleType type; 
  const scr_string_t *PlayerBoneTags; 
  scr_string_t *v12; 
  int v13; 
  bool v14; 
  __int64 drivingState; 
  char v16; 
  int outCountTags; 
  vec3_t angles; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v20; 
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
  v7 = ServerDef;
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
    G_Utils_DObjGetWorldBoneIndexMatrix(vehEnt, barrel, &v20);
    p_outTagMat = &v20;
  }
  AxisToAngles((const tmat33_t<vec3_t> *)p_outTagMat, &angles);
  angles.v[2] = 0.0;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  type = v7->type;
  if ( (unsigned __int8)(type - 5) <= 1u || type == VEH_BOAT )
    GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, player, &vec3_origin);
  else
    GUtils::ms_gUtils->SetPlayerOrigin(GUtils::ms_gUtils, player, &outTagMat.row3, 1, 1);
  outCountTags = 0;
  PlayerBoneTags = BGVehicles::GetPlayerBoneTags(&outCountTags);
  v12 = (scr_string_t *)PlayerBoneTags;
  if ( (outCountTags <= 0 || !PlayerBoneTags) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3778, ASSERT_TYPE_ASSERT, "(vehPlayerTagCount > 0 && vehPlayerTags != 0)", (const char *)&queryFormat, "vehPlayerTagCount > 0 && vehPlayerTags != NULL") )
    __debugbreak();
  v13 = 0;
  v14 = outCountTags == 0;
  if ( outCountTags > 0 )
  {
    do
    {
      if ( G_EntLinkToWithOffset(player, vehEnt, *v12, &vec3_origin, &vec3_origin, 256, outErrorMessage) )
        break;
      ++v13;
      ++v12;
    }
    while ( v13 < outCountTags );
    v14 = v13 == outCountTags;
  }
  if ( v14 )
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
  if ( v7->type == VEH_UGV )
  {
    client->link_useTagAnglesForViewAngles = 1;
    v16 = 0;
  }
  else
  {
    v16 = 1;
  }
  client->link_rotationMovesEyePos = v16;
  if ( v7->type == VEH_SUBMARINE )
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_spValue, 0x24u);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  GVehicles::ms_gVehiclesSystem->SetPlayerVehicleType(GVehicles::ms_gVehiclesSystem, (playerState_s *)client, v7->type);
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
void G_Vehicle_MoveToLookAhead_Physics(Vehicle *veh, const vec3_t *lookAheadOrigin, float steeringOffsetFrac, float throttle, float brake)
{
  const VehicleDef *ServerDef; 
  GVehicles *v10; 
  unsigned int physicsVehicle; 
  const dvar_t *v12; 
  __int128 v14; 
  __int128 v16; 
  float v17; 
  GVehicles *v18; 
  float v19; 
  float v20; 
  double WheelBaseLength; 
  float v22; 
  double WheelBaseWidth; 
  VehicleTransmission transMode; 
  __int128 v29; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  const dvar_t *v38; 
  float v39; 
  float v40; 
  vec2_t forward; 
  vec2_t right; 
  vec3_t centerWS; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7911, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7912, ASSERT_TYPE_ASSERT, "(veh->ent)", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7913, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7917, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  YawVectors2D(veh->ent->r.currentAngles.v[1], &forward, &right);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v10 = GVehicles::ms_gVehiclesSystem;
  physicsVehicle = veh->physicsVehicle;
  if ( veh->pathDir == VEH_PATH_REVERSE )
  {
    if ( veh->transMode == VEH_TRANS_REVERSE )
      GVehicles::PhysicsGetRearWheelCenterWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
    else
      GVehicles::PhysicsGetFrontWheelCenterWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
  }
  else
  {
    GVehicles::PhysicsGetSteeringPointWS(GVehicles::ms_gVehiclesSystem, physicsVehicle, &centerWS);
  }
  v12 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer )
    G_DebugLine(&centerWS, lookAheadOrigin, &colorGreen, 0);
  v14 = LODWORD(lookAheadOrigin->v[0]);
  *(float *)&v14 = lookAheadOrigin->v[0] - centerWS.v[0];
  _XMM11 = v14;
  v16 = LODWORD(lookAheadOrigin->v[1]);
  *(float *)&v16 = lookAheadOrigin->v[1] - centerWS.v[1];
  _XMM12 = v16;
  v17 = 0.0;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v18 = GVehicles::ms_gVehiclesSystem;
  v19 = (float)(*(float *)&_XMM11 * forward.v[0]) + (float)(*(float *)&v16 * forward.v[1]);
  v20 = (float)(*(float *)&_XMM11 * right.v[0]) + (float)(*(float *)&_XMM12 * right.v[1]);
  WheelBaseLength = GVehicles::PhysicsGetWheelBaseLength(GVehicles::ms_gVehiclesSystem, veh->physicsVehicle);
  v22 = *(float *)&WheelBaseLength;
  WheelBaseWidth = GVehicles::PhysicsGetWheelBaseWidth(v18, veh->physicsVehicle);
  transMode = veh->transMode;
  if ( transMode )
  {
    if ( transMode != VEH_TRANS_REVERSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7902, ASSERT_TYPE_ASSERT, "(veh->transMode == VEH_TRANS_REVERSE)", (const char *)&queryFormat, "veh->transMode == VEH_TRANS_REVERSE") )
      __debugbreak();
  }
  else if ( v19 < 0.0 && COERCE_FLOAT(LODWORD(v19) ^ _xmm) < v22 && COERCE_FLOAT(LODWORD(v20) & _xmm) < (float)(*(float *)&WheelBaseWidth * 0.5) )
  {
    goto LABEL_51;
  }
  _XMM0 = (unsigned int)veh->transMode;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm5, xmm11, xmm3, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
  }
  v29 = _XMM5;
  __asm { vblendvps xmm3, xmm12, xmm4, xmm2 }
  *(float *)&v29 = fsqrt((float)(*(float *)&_XMM5 * *(float *)&_XMM5) + (float)(*(float *)&_XMM3 * *(float *)&_XMM3));
  _XMM2 = v29;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm0, xmm2, xmm9, xmm0
  }
  v34 = *(float *)&_XMM5 * (float)(1.0 / *(float *)&_XMM0);
  v35 = *(float *)&_XMM3 * (float)(1.0 / *(float *)&_XMM0);
  if ( ServerDef->vehiclePhysicsDef.maxSteeringAngle > 0.0 )
  {
    v37 = (float)((float)(*(float *)&_XMM3 * (float)(1.0 / *(float *)&_XMM0)) * forward.v[1]) + (float)(v34 * forward.v[0]);
    I_fclamp(v37, -1.0, 1.0);
    v38 = DVARFLT_veh_aiOverSteerScale;
    if ( !DVARFLT_veh_aiOverSteerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "veh_aiOverSteerScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = (float)(acosf_0(v37) * 57.295776) * v38->current.value;
    if ( (LODWORD(v39) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7975, ASSERT_TYPE_SANITY, "( !IS_NAN( steering ) )", (const char *)&queryFormat, "!IS_NAN( steering )") )
      __debugbreak();
    v36 = v39 / ServerDef->vehiclePhysicsDef.maxSteeringAngle;
  }
  else
  {
    v36 = 0.0;
  }
  if ( (float)((float)(v34 * right.v[0]) + (float)(v35 * right.v[1])) > 0.0 )
    LODWORD(v36) ^= _xmm;
  if ( veh->phys.bodyVel.v[0] < -8.8000002 )
    LODWORD(v36) ^= _xmm;
  v40 = steeringOffsetFrac + v36;
  I_fclamp(steeringOffsetFrac + v36, -1.0, 1.0);
  v17 = v40;
LABEL_51:
  GVehicles::PhysicsSetInputControl(v10, veh->physicsVehicle, 2u, v17);
  GVehicles::PhysicsSetInputControl(v10, veh->physicsVehicle, 0, throttle);
  GVehicles::PhysicsSetInputControl(v10, veh->physicsVehicle, 1u, brake);
  GVehicles::PhysicsSetInputControl(v10, veh->physicsVehicle, 3u, 0.0);
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
  GWeaponMap *v10; 
  const Weapon *WeaponForEntity; 
  weapType_t WeaponType; 
  gentity_s *v13; 
  const playerState_s *EntityPlayerStateConst; 
  float v15; 
  float *p_commandTime; 
  float *v17; 
  __int128 v18; 
  __int64 v22; 

  if ( pAttacker )
  {
    Instance = GWeaponMap::GetInstance();
    if ( BG_GetWeaponForEntity(Instance, &pAttacker->s)->weaponIdx )
    {
      v10 = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(v10, &pAttacker->s);
      WeaponType = BG_GetWeaponType(WeaponForEntity, pAttacker->s.inAltWeaponMode);
      v13 = NULL;
      if ( EntHandle::isDefined(&pSelf->r.ownerNum) )
        v13 = EntHandle::ent(&pSelf->r.ownerNum);
      if ( pSelf && v13 && v13->client )
      {
        EntityPlayerStateConst = G_GetEntityPlayerStateConst(v13);
        if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5349, ASSERT_TYPE_ASSERT, "(ownerPs)", (const char *)&queryFormat, "ownerPs") )
          __debugbreak();
        if ( EntityPlayerStateConst->linkEnt == pSelf->s.number || G_EntIsLinkedToAncestor(v13, pSelf) )
        {
          if ( !v13->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5380, ASSERT_TYPE_ASSERT, "( vehicleOwner->client )", (const char *)&queryFormat, "vehicleOwner->client") )
            __debugbreak();
          if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5381, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
            __debugbreak();
          if ( (unsigned int)mod >= 0x19 )
          {
            LODWORD(v22) = mod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5383, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", v22, 25) )
              __debugbreak();
          }
          v13->client->damage_mod_flags |= 1 << mod;
          v13->client->damage_blood += damage;
          v13->client->damage_armor = v13->client->damage_blood;
          v15 = dir->v[0];
          if ( dir->v[0] == 0.0 && dir->v[1] == 0.0 && dir->v[2] == 0.0 )
          {
            p_commandTime = (float *)&v13->client->ps.commandTime;
            p_commandTime[6050] = pSelf->r.currentOrigin.v[0];
            p_commandTime[6051] = pSelf->r.currentOrigin.v[1];
            p_commandTime[6052] = pSelf->r.currentOrigin.v[2];
            v13->client->damage_fromWorld = 1;
          }
          else
          {
            v17 = (float *)&v13->client->ps.commandTime;
            v18 = LODWORD(dir->v[1]);
            *(float *)&v18 = fsqrt((float)((float)(dir->v[1] * dir->v[1]) + (float)(v15 * v15)) + (float)(dir->v[2] * dir->v[2]));
            _XMM4 = v18;
            __asm
            {
              vcmpless xmm0, xmm4, cs:__real@80000000
              vblendvps xmm0, xmm4, xmm7, xmm0
            }
            v17[6050] = v15 * (float)(1.0 / *(float *)&_XMM0);
            v17[6051] = (float)(1.0 / *(float *)&_XMM0) * dir->v[1];
            v17[6052] = (float)(1.0 / *(float *)&_XMM0) * dir->v[2];
            v13->client->damage_fromWorld = 0;
          }
          v13->client->damage_vehicle = 1;
        }
      }
      if ( (unsigned int)(WeaponType - 3) <= 1 )
      {
        if ( !dir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5404, ASSERT_TYPE_ASSERT, "( dir )", (const char *)&queryFormat, "dir") )
          __debugbreak();
        if ( pSelf->vehicle )
          G_Vehicle_JoltBody(pSelf, dir, 1.0, 0.0, 0.0);
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
  LerpEntityStateTypeUnion *p_u; 
  const VehicleDef *ServerDef; 
  vehicle_physic_t *p_phys; 
  const VehicleDef *v6; 
  DObj *ServerDObjForEnt; 
  DObj *v8; 
  unsigned __int8 v9; 
  Vehicle *v10; 
  vehicle_physic_t *v11; 
  int v12; 
  vehicle_physic_t *v13; 
  __int64 v14; 
  __int128 v15; 
  gentity_s *v16; 
  gentity_s *v17; 
  gentity_s *v18; 
  VehicleType type; 
  VehicleHandler *v20; 
  const VehicleDef *v21; 
  int drivingState; 
  bool v23; 
  unsigned int v24; 
  BOOL v25; 
  void (__fastcall *UpdateAnimScriptedMove)(Vehicle *); 
  void (__fastcall *UpdatePlayerMove)(Vehicle *); 
  GVehicles *v28; 
  double DeltaTime; 
  GHandler *Handler; 
  gentity_s *v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  unsigned int physicsVehicle; 
  __int64 v36; 
  unsigned int v37; 
  __int64 v38; 
  BOOL v39; 
  bool v40; 
  __int128 v41; 
  BOOL v47; 
  bool v48; 
  __int128 v49; 
  __int128 v51; 
  __int128 v52; 
  __int128 v53; 
  bool v59; 
  float v60; 
  __int64 v61; 
  __int64 v62; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4874, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4875, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  p_u = &pSelf->s.lerp.u;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  pSelf->s.lerp.u.anonymous.data[1] &= 0xFFFFFFF3;
  p_phys = &vehicle->phys;
  v6 = ServerDef;
  ServerDObjForEnt = Com_GetServerDObjForEnt(pSelf);
  v8 = ServerDObjForEnt;
  v9 = 9;
  if ( ServerDObjForEnt && ServerDObjForEnt->numModels && XModelIsDefaultAsset(*ServerDObjForEnt->models) && DB_IsXAssetTransient(ASSET_TYPE_XMODEL, **(const char ***)v8->models) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4893, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, dobj->models[0]->name ) ) )", "( dobj->models[0]->name ) = %s", **(const char ***)v8->models) )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1747, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  v10 = pSelf->vehicle;
  v11 = &s_backup.phys;
  v10->phys.prevOrigin.v[0] = pSelf->r.currentOrigin.v[0];
  v10->phys.prevOrigin.v[1] = pSelf->r.currentOrigin.v[1];
  v10->phys.prevOrigin.v[2] = pSelf->r.currentOrigin.v[2];
  v10->phys.prevAngles.v[0] = pSelf->r.currentAngles.v[0];
  v10->phys.prevAngles.v[1] = pSelf->r.currentAngles.v[1];
  v10->phys.prevAngles.v[2] = pSelf->r.currentAngles.v[2];
  *(_OWORD *)&s_backup.pathPos.nodeIdx = *(_OWORD *)&v10->pathPos.nodeIdx;
  *(_OWORD *)&s_backup.pathPos.lookAhead = *(_OWORD *)&v10->pathPos.lookAhead;
  *(_OWORD *)s_backup.pathPos.angles.v = *(_OWORD *)v10->pathPos.angles.v;
  *(_OWORD *)&s_backup.pathPos.lookPos.y = *(_OWORD *)&v10->pathPos.lookPos.y;
  *(_OWORD *)&s_backup.pathPos.driftOffset.z = *(_OWORD *)&v10->pathPos.driftOffset.z;
  *(_OWORD *)&s_backup.pathPos.switchNode[0].script_noteworthy = *(_OWORD *)&v10->pathPos.switchNode[0].script_noteworthy;
  *(_OWORD *)s_backup.pathPos.switchNode[0].origin.v = *(_OWORD *)v10->pathPos.switchNode[0].origin.v;
  *(_OWORD *)&s_backup.pathPos.switchNode[0].dir.y = *(_OWORD *)&v10->pathPos.switchNode[0].dir.y;
  *(_OWORD *)&s_backup.pathPos.switchNode[0].angles.z = *(_OWORD *)&v10->pathPos.switchNode[0].angles.z;
  *(_OWORD *)&s_backup.pathPos.switchNode[1].name = *(_OWORD *)&v10->pathPos.switchNode[1].name;
  *(_OWORD *)&s_backup.pathPos.switchNode[1].index = *(_OWORD *)&v10->pathPos.switchNode[1].index;
  *(_OWORD *)&s_backup.pathPos.switchNode[1].origin.y = *(_OWORD *)&v10->pathPos.switchNode[1].origin.y;
  *(_OWORD *)&s_backup.pathPos.switchNode[1].dir.z = *(_OWORD *)&v10->pathPos.switchNode[1].dir.z;
  *(_QWORD *)&s_backup.pathPos.switchNode[1].length = *(_QWORD *)&v10->pathPos.switchNode[1].length;
  v12 = *(_DWORD *)&v10->pathPos.switchNode[1].notifyIdx;
  v13 = &v10->phys;
  *(_DWORD *)&s_backup.pathPos.switchNode[1].notifyIdx = v12;
  v14 = 3i64;
  do
  {
    v11 = (vehicle_physic_t *)((char *)v11 + 128);
    v15 = *(_OWORD *)v13->origin.v;
    v13 = (vehicle_physic_t *)((char *)v13 + 128);
    *(_OWORD *)&v11[-1].wheelSurfType[10] = v15;
    *(_OWORD *)&v11[-1].wheelCompression[2] = *(_OWORD *)&v13[-1].wheelCompression[2];
    *(_OWORD *)&v11[-1].wheelCompression[6] = *(_OWORD *)&v13[-1].wheelCompression[6];
    *(_OWORD *)&v11[-1].wheelCompression[10] = *(_OWORD *)&v13[-1].wheelCompression[10];
    *(_OWORD *)&v11[-1].wheelPrevCompression[2] = *(_OWORD *)&v13[-1].wheelPrevCompression[2];
    *(_OWORD *)&v11[-1].wheelPrevCompression[6] = *(_OWORD *)&v13[-1].wheelPrevCompression[6];
    *(_OWORD *)&v11[-1].wheelPrevCompression[10] = *(_OWORD *)&v13[-1].wheelPrevCompression[10];
    *(_OWORD *)&v11[-1].worldTilt.z = *(_OWORD *)&v13[-1].worldTilt.z;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)v11->origin.v = *(_OWORD *)v13->origin.v;
  v11->prevOrigin.v[1] = v13->prevOrigin.v[1];
  memset_0(&s_phys, 0, sizeof(s_phys));
  if ( EntHandle::isDefined(&pSelf->r.ownerNum) )
  {
    v16 = EntHandle::ent(&pSelf->r.ownerNum);
    v17 = v16;
    if ( v16 )
    {
      if ( EntHandle::isDefined(&v16->r.ownerNum) && EntHandle::ent(&v17->r.ownerNum) == pSelf && v17->health <= 0 )
      {
        v18 = EntHandle::ent(&pSelf->r.ownerNum);
        G_Vehicle_UnlinkPlayer(pSelf, v18);
      }
      p_phys = &vehicle->phys;
    }
  }
  type = G_Vehicle_GetServerDef(vehicle->defIndex)->type;
  if ( (unsigned __int8)type < VEH_TREADED )
    v9 = type;
  if ( v9 >= 0xAu )
  {
    LODWORD(v61) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( handlerIndex ) < (unsigned)( ( sizeof( *array_counter( s_vehicleHandlers ) ) + 0 ) )", "handlerIndex doesn't index ARRAY_COUNT( s_vehicleHandlers )\n\t%i not in [0, %i)", v61, 10) )
      __debugbreak();
  }
  v20 = &s_vehicleHandlers[v9];
  if ( G_Main_ExitAfterToolComplete() && v6->vehiclePhysicsDef.physicsEnabled )
    return;
  if ( vehicle->ent->scripted && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4924, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    v21 = G_Vehicle_GetServerDef(vehicle->defIndex);
    drivingState = vehicle->drivingState;
    v23 = v21->type == VEH_HELICOPTER;
    v24 = drivingState - 2;
    if ( v23 )
      v25 = (v24 & 0xFFFFFFFD) == 0;
    else
      v25 = v24 <= 1;
    if ( !v25 )
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
      UpdateAnimScriptedMove = v20->UpdateAnimScriptedMove;
      goto LABEL_63;
    case 2:
      UpdateAnimScriptedMove = v20->UpdatePathConstrainedMove;
LABEL_63:
      if ( UpdateAnimScriptedMove )
        UpdateAnimScriptedMove(vehicle);
      goto LABEL_65;
    case 3:
      UpdateAnimScriptedMove = v20->UpdatePathFollowMove;
      goto LABEL_63;
    case 4:
      UpdateAnimScriptedMove = v20->UpdateAiMove;
      goto LABEL_63;
  }
  if ( drivingState != 5 )
  {
    if ( drivingState )
    {
      LODWORD(v61) = drivingState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4968, ASSERT_TYPE_ASSERT, "( ( veh->drivingState == VEH_DRIVE_NONE ) )", "( veh->drivingState ) = %i", v61) )
        __debugbreak();
    }
    UpdateAnimScriptedMove = v20->UpdateDefaultMove;
    goto LABEL_63;
  }
  UpdatePlayerMove = v20->UpdatePlayerMove;
  if ( UpdatePlayerMove )
    UpdatePlayerMove(vehicle);
  G_Vehicle_UpdateCameraState(vehicle);
LABEL_65:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v28 = GVehicles::ms_gVehiclesSystem;
  DeltaTime = G_Vehicle_GetDeltaTime();
  BG_VehicleAnim_Update(v28, &pSelf->s, &vehicle->vehicleAnimInfo, *(float *)&DeltaTime);
  Handler = GHandler::getHandler();
  BG_VehicleAnim_UpdateDObj(v28, &pSelf->s, &vehicle->vehicleAnimInfo, Handler);
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5164, ASSERT_TYPE_ASSERT, "( vehicleEnt->vehicle )", (const char *)&queryFormat, "vehicleEnt->vehicle") )
    __debugbreak();
  if ( !EntHandle::isDefined(&pSelf->r.ownerNum) )
    goto LABEL_129;
  v31 = EntHandle::ent(&pSelf->r.ownerNum);
  if ( !v31->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5169, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  if ( v31->client->ps.vehicleState.entity != pSelf->s.number )
  {
LABEL_129:
    if ( !pSelf->tagInfo )
    {
      v32 = pSelf->r.currentOrigin.v[1] - p_phys->origin.v[1];
      v33 = pSelf->r.currentOrigin.v[2] - p_phys->origin.v[2];
      G_Vehicle_SetPosition(pSelf, &p_phys->origin, &p_phys->vel, &p_phys->angles, (float)((float)((float)(v32 * v32) + (float)((float)(pSelf->r.currentOrigin.v[0] - p_phys->origin.v[0]) * (float)(pSelf->r.currentOrigin.v[0] - p_phys->origin.v[0]))) + (float)(v33 * v33)) > 10000.0);
    }
  }
  if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    v34 = (__int64)v28->PhysicsGetVehiclePhysicsManager(v28);
    physicsVehicle = vehicle->physicsVehicle;
    v36 = v34;
    if ( !BGVehicles::PhysicsIsValid(physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    v37 = physicsVehicle - 1;
    if ( v37 >= 0x80 )
    {
      LODWORD(v62) = 128;
      LODWORD(v61) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    *(__m256i *)p_phys->wheelPrevCompression = *(__m256i *)p_phys->wheelCompression;
    *(_OWORD *)&p_phys->wheelPrevCompression[8] = *(_OWORD *)&p_phys->wheelCompression[8];
    vehicle->impactSpeed = 0.0;
    v38 = 3360i64 * v37 + v36 + 8;
    v39 = Com_BitCheckAssert((const unsigned int *)(v38 + 264), 1, 4);
    v40 = Com_BitCheckAssert((const unsigned int *)(v38 + 268), 1, 4);
    v41 = *(unsigned int *)(v38 + 204);
    _XMM6 = *(unsigned int *)(v38 + 236);
    switch ( v39 + 3 * v40 )
    {
      case 1:
        LODWORD(_XMM6) = *(_DWORD *)(v38 + 204);
        break;
      case 3:
        break;
      case 4:
        switch ( *(_BYTE *)(v38 + 273) )
        {
          case 0:
            _XMM0 = _XMM6 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_100;
          case 1:
            _XMM1 = v41 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm6, xmm6, xmm3, xmm1
            }
            goto LABEL_100;
          case 2:
            *(float *)&_XMM6 = (float)(*(float *)&_XMM6 + *(float *)&v41) * 0.5;
            goto LABEL_100;
          case 3:
            *(float *)&_XMM6 = (float)((float)(1.0 - *(float *)(v38 + 280)) * *(float *)&_XMM6) + (float)(*(float *)&v41 * *(float *)(v38 + 280));
            goto LABEL_100;
          case 4:
            *(float *)&_XMM6 = (float)((float)(1.0 - *(float *)(v38 + 280)) * *(float *)&v41) + (float)(*(float *)&_XMM6 * *(float *)(v38 + 280));
            goto LABEL_100;
        }
      default:
        LODWORD(_XMM6) = 0;
        break;
    }
LABEL_100:
    v47 = Com_BitCheckAssert((const unsigned int *)(v38 + 264), 0, 4);
    v48 = Com_BitCheckAssert((const unsigned int *)(v38 + 268), 0, 4);
    v49 = *(unsigned int *)(v38 + 200);
    _XMM3 = *(unsigned int *)(v38 + 232);
    switch ( v47 + 3 * v48 )
    {
      case 1:
        _XMM3 = *(unsigned int *)(v38 + 200);
        break;
      case 3:
        break;
      case 4:
        if ( *(_BYTE *)(v38 + 272) )
        {
          switch ( *(_BYTE *)(v38 + 272) )
          {
            case 1:
              _XMM1 = v49 & (unsigned int)_xmm;
              __asm
              {
                vcmpltss xmm1, xmm1, xmm0
                vblendvps xmm3, xmm3, xmm4, xmm1
              }
              break;
            case 2:
              v53 = *(unsigned int *)(v38 + 232);
              *(float *)&v53 = (float)(*(float *)&_XMM3 + *(float *)&v49) * 0.5;
              _XMM3 = v53;
              break;
            case 3:
              v52 = LODWORD(FLOAT_1_0);
              *(float *)&v52 = (float)((float)(1.0 - *(float *)(v38 + 280)) * *(float *)&_XMM3) + (float)(*(float *)&v49 * *(float *)(v38 + 280));
              _XMM3 = v52;
              break;
            case 4:
              v51 = LODWORD(FLOAT_1_0);
              *(float *)&v51 = (float)((float)(1.0 - *(float *)(v38 + 280)) * *(float *)&v49) + (float)(*(float *)&_XMM3 * *(float *)(v38 + 280));
              _XMM3 = v51;
              goto LABEL_115;
            default:
LABEL_113:
              _XMM3 = 0i64;
LABEL_117:
              if ( *(float *)&_XMM6 > 0.0 )
                p_u->anonymous.data[1] |= 8u;
              __asm { vmaxss  xmm7, xmm3, xmm6 }
              v59 = *(float *)&_XMM6 > *(float *)&_XMM3;
              v60 = 0.0;
              if ( BgVehiclePhysics::IsDynamic((BgVehiclePhysics *)v38) && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 72i64))(v38, 14i64) )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 72i64))(v38, 3i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5016, ASSERT_TYPE_ASSERT, "(physics->SupportsFeature( VPFEAT_GROUND_VEHICLE ))", (const char *)&queryFormat, "physics->SupportsFeature( VPFEAT_GROUND_VEHICLE )") )
                  __debugbreak();
                v60 = *(float *)(v38 + 3196);
                if ( v60 > 0.0 )
                  p_u->anonymous.data[1] |= 0x100u;
              }
              BG_Vehicle_PackPhysicsParams((LerpEntityStateVehicle *)p_u, *(float *)&_XMM7, v59, v60);
              return;
          }
        }
        else
        {
          _XMM0 = _XMM3 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm3, xmm3, xmm4, xmm1
          }
        }
        break;
      default:
        goto LABEL_113;
    }
LABEL_115:
    if ( *(float *)&_XMM3 > 0.0 )
      p_u->anonymous.data[1] |= 4u;
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
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  vec3_t trBase; 
  __int64 v11; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> v17; 

  v11 = -2i64;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1867, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1868, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  if ( !missile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1869, ASSERT_TYPE_ASSERT, "( missile )", (const char *)&queryFormat, "missile") )
    __debugbreak();
  vehicle = ent->vehicle;
  v5 = missile->r.currentOrigin.v[0] - vehicle->phys.prevOrigin.v[0];
  v6 = missile->r.currentOrigin.v[1] - vehicle->phys.prevOrigin.v[1];
  v7 = missile->r.currentOrigin.v[2] - vehicle->phys.prevOrigin.v[2];
  AnglesToAxis(&vehicle->phys.angles, &axis);
  AnglesToAxis(&vehicle->phys.prevAngles, &in);
  MatrixTranspose(&in, &out);
  MatrixMultiply(&out, &axis, &in2);
  trBase.v[0] = (float)((float)(v5 * in2.m[0].v[0]) + (float)(v6 * in2.m[1].v[0])) + (float)(v7 * in2.m[2].v[0]);
  trBase.v[1] = (float)((float)(v5 * in2.m[0].v[1]) + (float)(v6 * in2.m[1].v[1])) + (float)(v7 * in2.m[2].v[1]);
  trBase.v[2] = (float)((float)(v5 * in2.m[0].v[2]) + (float)(v6 * in2.m[1].v[2])) + (float)(v7 * in2.m[2].v[2]);
  trBase.v[0] = trBase.v[0] + vehicle->phys.origin.v[0];
  trBase.v[1] = trBase.v[1] + vehicle->phys.origin.v[1];
  v8 = trBase.v[1];
  trBase.v[2] = trBase.v[2] + vehicle->phys.origin.v[2];
  v9 = trBase.v[2];
  missile->r.currentOrigin.v[0] = trBase.v[0];
  missile->r.currentOrigin.v[1] = v8;
  missile->r.currentOrigin.v[2] = v9;
  Trajectory_SetTrBase(&missile->s.lerp.pos, &trBase);
  AnglesToAxis(&missile->r.currentAngles, &in1);
  MatrixMultiply(&in1, &in2, &v17);
  AxisToAngles(&v17, &missile->r.currentAngles);
  missile->s.lerp.apos.trBase.v[0] = missile->r.currentAngles.v[0];
  missile->s.lerp.apos.trBase.v[1] = missile->r.currentAngles.v[1];
  missile->s.lerp.apos.trBase.v[2] = missile->r.currentAngles.v[2];
  memset(&trBase, 0, sizeof(trBase));
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
  WeapStickinessType v11; 
  GMovingPlatformClient *ClientFromGEntity; 
  AIActorInterface v13; 
  AIActorInterface *v14; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1913, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !target && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1914, ASSERT_TYPE_ASSERT, "( target )", (const char *)&queryFormat, "target") )
    __debugbreak();
  if ( !target->tagInfo )
  {
    AIActorInterface::AIActorInterface(&v13);
    actor = target->actor;
    v14 = NULL;
    if ( !actor || (AIActorInterface::SetActor(&v13, actor), v14 = &v13, !AIScriptedInterface::InNonDamageableScriptedState(&v13)) )
    {
      if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
      {
        if ( deltaOrigin->v[0] == 0.0 && deltaOrigin->v[1] == 0.0 && deltaOrigin->v[2] == 0.0 && deltaAngles->v[0] == 0.0 && deltaAngles->v[1] == 0.0 && deltaAngles->v[2] == 0.0 )
          return;
      }
      else if ( Vec3ZeroEpsilon(deltaOrigin) && Vec3ZeroEpsilon(deltaAngles) )
      {
        return;
      }
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1834, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( target->s.groundEntityNum != ent->s.number || target->s.eType != ET_MISSILE )
        goto LABEL_38;
      Instance = GWeaponMap::GetInstance();
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &target->s);
      if ( !BG_WeaponDef(WeaponForEntity, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1844, ASSERT_TYPE_ASSERT, "( weapDef )", (const char *)&queryFormat, "weapDef") )
        __debugbreak();
      v11 = BG_WeaponStickinessType(WeaponForEntity, 0);
      if ( ((v11 - 1) & 0xFFFFFFFA) != 0 || v11 == WEAPSTICKINESS_GROUND_ORIENT )
      {
LABEL_38:
        if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1897, ASSERT_TYPE_ASSERT, "( pusher->vehicle )", (const char *)&queryFormat, "pusher->vehicle") )
          __debugbreak();
        ClientFromGEntity = GMovingPlatforms::GetClientFromGEntity(target);
        if ( ClientFromGEntity )
          GMovingPlatformClient::DeferredAddCharacter(ClientFromGEntity, target, ent, deltaOrigin, deltaAngles);
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
  float *wheelZPos; 
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
  wheelZPos = phys->wheelZPos;
  v5 = (char *)ent->vehicle - (char *)phys;
  v6 = 12i64;
  do
  {
    v7 = *(_DWORD *)((char *)wheelZPos + v5 + 1600);
    if ( v7 >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(ent, v7, &outPos);
      *wheelZPos = outPos.v[2];
    }
    ++wheelZPos;
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
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  BOOL v13; 
  int v14[6]; 
  int *v15; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 911, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
  {
    v15 = v14;
    v14[2] = LODWORD(ent->s.lerp.pos.trBase.v[1]) ^ LODWORD(ent->s.lerp.pos.trBase.v[2]) ^ s_trbase_aab_Z;
    v14[1] = LODWORD(ent->s.lerp.pos.trBase.v[0]) ^ LODWORD(ent->s.lerp.pos.trBase.v[1]) ^ s_trbase_aab_Y;
    v14[0] = LODWORD(ent->s.lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
    memset(&v15, 0, sizeof(v15));
    *(float *)&v15 = *(float *)v14;
    if ( (v14[0] & 0x7F800000) == 2139095040 || (*(float *)&v15 = *(float *)&v14[1], (v14[1] & 0x7F800000) == 2139095040) || (*(float *)&v15 = *(float *)&v14[2], (v14[2] & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
  else
  {
    v14[0] = LODWORD(ent->s.lerp.pos.trBase.v[0]);
    v14[1] = LODWORD(ent->s.lerp.pos.trBase.v[1]);
    v14[2] = LODWORD(ent->s.lerp.pos.trBase.v[2]);
  }
  if ( origin->v[0] != ent->r.currentOrigin.v[0] || (v9 = origin->v[1], v9 != ent->r.currentOrigin.v[1]) || (v10 = origin->v[2], v10 != ent->r.currentOrigin.v[2]) || *(float *)v14 != origin->v[0] || *(float *)&v14[1] != v9 || *(float *)&v14[2] != v10 || angles->v[0] != ent->r.currentAngles.v[0] || (v11 = angles->v[1], v11 != ent->r.currentAngles.v[1]) || (v12 = angles->v[2], v12 != ent->r.currentAngles.v[2]) || angles->v[0] != ent->s.lerp.apos.trBase.v[0] || v11 != ent->s.lerp.apos.trBase.v[1] || v12 != ent->s.lerp.apos.trBase.v[2] )
  {
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 917, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    if ( !BGVehicles::PhysicsIsValid(ent->vehicle->physicsVehicle) )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      LOBYTE(v13) = warpPhysics;
      GVehicles::ms_gVehiclesSystem->SetVehiclePosition(GVehicles::ms_gVehiclesSystem, ent, origin, angles, vel, v13);
    }
  }
  memset(v14, 0, 0xCui64);
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
_BOOL8 G_Vehicle_SlideMove(gentity_s *ent, int gravity, float frameTime, unsigned int *bumpEntityNum)
{
  vehicle_physic_t *p_phys; 
  bool v8; 
  BOOL v9; 
  GStepSlideMove stepSlide; 

  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1414, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1415, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  p_phys = &ent->vehicle->phys;
  stepSlide.deltaTime = frameTime;
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
  v8 = BgStepSlideMove::SlideMove(&stepSlide);
  if ( bumpEntityNum )
    *bumpEntityNum = stepSlide.bumpEntityNum;
  v9 = v8;
  BgStepSlideMove::~BgStepSlideMove(&stepSlide);
  return v9;
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
  char *v10; 
  unsigned int outIndex; 
  char *out; 
  char *v13; 
  char *compositeModelName; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5657, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5658, ASSERT_TYPE_ASSERT, "( ent->classname != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "ent->classname != NULL_SCR_STRING") )
    __debugbreak();
  v2 = "script_vehicle";
  v3 = 0x7FFFFFFFi64;
  v4 = SL_ConvertToString(ent->classname);
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
    v9 = SL_ConvertToString(ent->script_classname);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E371E0, 1248i64, v9, ent->r.currentOrigin.v[0], ent->r.currentOrigin.v[1], ent->r.currentOrigin.v[2]);
  }
  G_LevelSpawnString(0xF7u, "0", (const char **)&v13);
  if ( atoi(v13) )
  {
    G_LevelSpawnString(0x28Cu, "0", (const char **)&compositeModelName);
    G_Utils_SetCompositeModel(ent, ET_VEHICLE, compositeModelName);
  }
  if ( (ent->spawnflags & 2) != 0 )
  {
    G_VehicleSpawner_Create(ent, out);
  }
  else
  {
    v10 = out;
    if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4154, ASSERT_TYPE_ASSERT, "( typeName )", (const char *)&queryFormat, "typeName") )
      __debugbreak();
    if ( (ent->spawnflags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 4155, ASSERT_TYPE_ASSERT, "( !(ent->spawnflags & (1<<1)) )", (const char *)&queryFormat, "!(ent->spawnflags & VEH_SF_SPAWNER)") )
      __debugbreak();
    if ( !G_Vehicle_GetServerDefIndex(v10, &outIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E36570, 1244i64, v10);
    G_Vehicle_Create(ent, outIndex, NULL, 1);
  }
}

/*
==============
G_Vehicle_StepSlideMove
==============
*/
void G_Vehicle_StepSlideMove(gentity_s *ent, int gravity, float frameTime)
{
  vehicle_physic_t *p_phys; 
  GStepSlideMove stepSlide; 

  stepSlide.__vftable = (GStepSlideMove_vtbl *)&GStepSlideMove::`vftable';
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1452, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64) )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1453, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  p_phys = &ent->vehicle->phys;
  stepSlide.deltaTime = frameTime;
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
}

/*
==============
G_Vehicle_Touch
==============
*/
void G_Vehicle_Touch(gentity_s *pSelf, gentity_s *pOther, int bTouched)
{
  __int128 v3; 
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  int v8; 
  gentity_s *PlayerVehicle; 
  gentity_s *v10; 
  GVehicles *v11; 
  __int64 v12; 
  unsigned int physicsVehicle; 
  GVehicles *VehicleSystem; 
  double Speed; 
  float v16; 
  gentity_s *v17; 
  const playerState_s *EntityPlayerStateConst; 
  bool v19; 
  GCombat *CombatSystem; 
  __int128 v21; 
  GCombat *v25; 
  GCombat_vtbl *v26; 
  __int16 groundEntityNum; 
  gentity_s *v28; 
  EntityTagInfo *tagInfo; 
  gclient_s *client; 
  gclient_s *v31; 
  double Float_Internal_DebugName; 
  int v33; 
  vec3_t *p_currentOrigin; 
  int v35; 
  bool outPlayerLinked[2]; 
  bool outPlayerPredicted; 
  vec3_t linearVelocity; 
  int v39[4]; 
  __int128 v40; 

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
    ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
    v8 = truncate_cast<int,__int64>(vehicle - s_vehicleServers);
    if ( v8 > 127 )
      v8 = 127;
    if ( v8 < 0 )
      v8 = 0;
    if ( (BG_IsCharacterEntity(&pOther->s) || pOther->s.eType == ET_SCRIPTMOVER) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&pOther->s.lerp.eFlags, ACTIVE, 0x10u) )
    {
      if ( !pOther->tagInfo || pOther->s.eType == ET_PLAYER && (outPlayerLinked[0] = 0, outPlayerPredicted = 0, PlayerVehicle = G_ActiveMP_GetPlayerVehicle(pOther, outPlayerLinked, &outPlayerPredicted), (v10 = PlayerVehicle) != NULL) && PlayerVehicle->vehicle && (v11 = GVehicles::GetVehicleSystem(), (v12 = (__int64)v11->PhysicsGetVehicleObject(v11, v10->s.number)) != 0) && !*(_DWORD *)(v12 + 40) )
      {
        if ( ServerDef->collisionDamage > 0.0 )
        {
          physicsVehicle = vehicle->physicsVehicle;
          v40 = v3;
          if ( BGVehicles::PhysicsIsValid(physicsVehicle) )
          {
            VehicleSystem = GVehicles::GetVehicleSystem();
            GVehicles::PhysicsGetLinearVelocity(VehicleSystem, physicsVehicle, &linearVelocity);
            Speed = GVehicles::PhysicsGetSpeed(VehicleSystem, physicsVehicle);
            LODWORD(v16) = LODWORD(Speed) & _xmm;
          }
          else
          {
            linearVelocity = vehicle->phys.vel;
            v16 = vehicle->speed;
          }
          if ( EntHandle::isDefined(&pSelf->r.ownerNum) )
          {
            v17 = EntHandle::ent(&pSelf->r.ownerNum);
            if ( v17->client )
            {
              EntityPlayerStateConst = G_GetEntityPlayerStateConst(v17);
              if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5515, ASSERT_TYPE_ASSERT, "( ownerPs )", (const char *)&queryFormat, "ownerPs") )
                __debugbreak();
              v19 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&EntityPlayerStateConst->pm_flags, ACTIVE, 0x1Cu);
              if ( EntityPlayerStateConst->vehicleState.entity == pSelf->s.number && !v19 )
              {
                linearVelocity = EntityPlayerStateConst->vehicleState.velocity;
                v16 = fsqrt((float)((float)(EntityPlayerStateConst->vehicleState.velocity.v[0] * EntityPlayerStateConst->vehicleState.velocity.v[0]) + (float)(EntityPlayerStateConst->vehicleState.velocity.v[1] * EntityPlayerStateConst->vehicleState.velocity.v[1])) + (float)(EntityPlayerStateConst->vehicleState.velocity.v[2] * EntityPlayerStateConst->vehicleState.velocity.v[2]));
              }
            }
          }
          CombatSystem = GCombat::GetCombatSystem();
          v21 = LODWORD(linearVelocity.v[1]);
          *(float *)&v21 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(linearVelocity.v[0] * linearVelocity.v[0])) + (float)(linearVelocity.v[2] * linearVelocity.v[2]));
          _XMM4 = v21;
          __asm
          {
            vcmpless xmm0, xmm4, cs:__real@80000000
            vblendvps xmm0, xmm4, xmm1, xmm0
          }
          v25 = CombatSystem;
          *(float *)v39 = linearVelocity.v[0] * (float)(1.0 / *(float *)&_XMM0);
          *(float *)&v39[2] = linearVelocity.v[2] * (float)(1.0 / *(float *)&_XMM0);
          *(float *)&v39[1] = linearVelocity.v[1] * (float)(1.0 / *(float *)&_XMM0);
          if ( *(float *)&v21 >= 0.001 )
          {
            if ( pOther->s.eType == ET_SCRIPTMOVER )
            {
              v26 = CombatSystem->__vftable;
              v35 = 999999;
              p_currentOrigin = &pOther->r.currentOrigin;
LABEL_57:
              *(_WORD *)outPlayerLinked = 0;
              v26->Damage(v25, pOther, pSelf, pSelf, (const vec3_t *)v39, p_currentOrigin, v35, 0, 12, &NULL_WEAPON, 0, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)outPlayerLinked);
              s_vehicleDamageTime[v8] = level.time;
              return;
            }
            groundEntityNum = pOther->s.groundEntityNum;
            if ( groundEntityNum != pSelf->s.number )
            {
              v28 = &g_entities[groundEntityNum];
              if ( !v28->r.isInUse || (tagInfo = v28->tagInfo) == NULL || tagInfo->parent->s.number != pSelf->s.number )
              {
                client = pOther->client;
                if ( !client || !BG_IsTurretActive(&client->ps) || !G_IsEntityInUse(pOther->s.otherEntityNum) || !G_EntIsLinkedToAncestor(&g_entities[pOther->s.otherEntityNum], pSelf) )
                {
                  v31 = pOther->client;
                  if ( v31 && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v31->ps.pm_flags, ACTIVE, 0) && (Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehMinSpeedToKillProne, "bg_vehMinSpeedToKillProne"), v16 > *(float *)&Float_Internal_DebugName) )
                  {
                    v35 = 999999;
                    p_currentOrigin = &pOther->r.currentOrigin;
                  }
                  else
                  {
                    v33 = v25->CalcVehicleImpactDamage(v25, vehicle, ServerDef, pSelf, COERCE_FLOAT(LODWORD(v16)), pOther, (const vec3_t *)v39);
                    if ( v33 <= 0 )
                      return;
                    v35 = v33;
                    p_currentOrigin = &pOther->r.currentOrigin;
                  }
                  v26 = v25->__vftable;
                  goto LABEL_57;
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
G_Vehicle_TouchEntities
==============
*/
void G_Vehicle_TouchEntities(gentity_s *ent)
{
  signed __int64 v1; 
  __int128 v2; 
  __int128 xmm7_0; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  void *v7; 
  gentity_s *v8; 
  const Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  bool v11; 
  char v12; 
  unsigned int physicsVehicle; 
  GVehicles *VehicleSystem; 
  BgVehiclePhysicsManager *v15; 
  float v16; 
  float v17; 
  float v18; 
  __int128 v19; 
  float v20; 
  __int128 v21; 
  float v25; 
  float v26; 
  float v27; 
  bool IsDynamic; 
  const dvar_t *v29; 
  int m_driverEntNum; 
  gentity_s *GEntity; 
  float *p_commandTime; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  double Float_Internal_DebugName; 
  float v42; 
  float v43; 
  float v44; 
  double DeltaTime; 
  float v46; 
  __int128 v47; 
  float v48; 
  __int128 v49; 
  unsigned int v53; 
  unsigned int RigidBodyID; 
  float v55; 
  int v56; 
  float v57; 
  const dvar_t *v58; 
  float v59; 
  float v60; 
  double v61; 
  double v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  unsigned int i; 
  __int64 v84; 
  const dvar_t *v85; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const ScriptableDef *def; 
  unsigned int scriptableCollisionMain; 
  unsigned int Instance; 
  unsigned int v90; 
  unsigned int v91; 
  float collisionSpeed; 
  float v93; 
  int providedDmg; 
  const ScriptableDef *v95; 
  int v96; 
  __int64 v97; 
  gentity_s *v98; 
  __int64 v99; 
  unsigned int v100; 
  int v101; 
  __int64 v102; 
  gentity_s *v103; 
  EntityTagInfo *tagInfo; 
  entityType_s eType; 
  const playerState_s *EntityPlayerStateConst; 
  const playerState_s *v107; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  GHandler *Handler; 
  team_t v110; 
  entityType_s v111; 
  __int64 v112; 
  gclient_s *client; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v114; 
  __int64 otherEntityNum; 
  __int64 m_movingPlatformEntity; 
  BgVehiclePhysics *Physics; 
  BgVehiclePhysicsDeferredActionManager *p_m_deferActionMgr; 
  scr_string_t classname; 
  const DObj *ServerDObjForEnt; 
  int v121; 
  __int64 v122; 
  float v123; 
  unsigned int v124; 
  unsigned int v125; 
  unsigned int v126; 
  unsigned int v127; 
  unsigned int v128; 
  bool v129; 
  const scrContext_t *v133; 
  void (__fastcall *touch)(gentity_s *, gentity_s *, int); 
  void (__fastcall *v135)(gentity_s *, gentity_s *, int); 
  void *v136; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  const playerState_s *v139; 
  vec3_t *angVel; 
  vec3_t *newOrigin; 
  vec4_t *newOrient; 
  __int64 removeDuplicates; 
  int dFlags; 
  bool outPerformCapsuleTest; 
  unsigned int physicsInstanceId; 
  __int16 v147; 
  PhysicsQuery_Collected<unsigned short> collectedEnts; 
  team_t outTeam[2]; 
  BgVehiclePhysics *vehObj; 
  PhysicsQuery_Collected<unsigned int> collectedScriptables; 
  const Vehicle *v152; 
  const VehicleDef *v153; 
  GVehicles *v154; 
  const GEntityHandlerList *EntHandlerList; 
  AIActorInterface v156; 
  AIAgentInterface v157; 
  void *v158; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  vec3_t position; 
  Bounds bounds; 
  vec3_t deltaOrigin; 
  Bounds out; 
  vec4_t orientation; 
  vec3_t v3; 
  char v167; 
  __int16 v168[2048]; 
  __int128 v169; 
  __int128 v170; 
  __int128 v171; 
  __int128 v172; 
  __int128 v173; 

  v7 = alloca(v1);
  *(_QWORD *)outTeam = ent;
  v8 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2163, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !v8->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2164, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = v8->vehicle;
  v152 = vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  position = vec3_origin;
  orientation = vec4_origin;
  v153 = ServerDef;
  v11 = 0;
  EntHandlerList = G_Main_GetEntHandlerList(v8);
  v12 = 1;
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  physicsVehicle = vehicle->physicsVehicle;
  v173 = v2;
  v172 = xmm7_0;
  v171 = v4;
  v170 = v5;
  v154 = GVehicles::ms_gVehiclesSystem;
  vehObj = NULL;
  if ( BGVehicles::PhysicsIsValid(physicsVehicle) && GVehicles::ms_gVehiclesSystem && (VehicleSystem = GVehicles::GetVehicleSystem(), v15 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), (vehObj = BgVehiclePhysicsManager::GetObjectById(v15, vehicle->physicsVehicle)) != NULL) )
  {
    v16 = v8->r.currentOrigin.v[1];
    deltaOrigin.v[0] = v8->r.currentOrigin.v[0] - vehicle->phys.prevOrigin.v[0];
    v17 = v8->r.currentOrigin.v[2];
    deltaOrigin.v[1] = v16 - vehicle->phys.prevOrigin.v[1];
    deltaOrigin.v[2] = v17 - vehicle->phys.prevOrigin.v[2];
    AnglesSubtract(&v8->r.currentAngles, &vehicle->phys.prevAngles, &v3);
    v18 = vehObj->m_linearVelocityWs.v[1];
    v19 = LODWORD(vehObj->m_linearVelocityWs.v[0]);
    v20 = vehObj->m_linearVelocityWs.v[2];
    v21 = v19;
    *(float *)&v21 = fsqrt((float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(v18 * v18)) + (float)(v20 * v20));
    _XMM3 = v21;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v25 = *(float *)&v19 * (float)(1.0 / *(float *)&_XMM0);
    v26 = v18 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v20 * (float)(1.0 / *(float *)&_XMM0);
    IsDynamic = BgVehiclePhysics::IsDynamic(vehObj);
    v11 = IsDynamic;
    if ( ServerDef->accurateShapeOverlap && IsDynamic )
    {
      v29 = DCONST_DVARFLT_bg_vehScrLookAheadTimeServer;
      if ( !DCONST_DVARFLT_bg_vehScrLookAheadTimeServer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehScrLookAheadTimeServer") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      _XMM7 = v29->current.unsignedInt;
      G_Vehicle_GetDeltaTime();
      AxisToQuat((const tmat33_t<vec3_t> *)&vehObj->m_transform, (vec4_t *)&out);
      __asm { vmaxss  xmm1, xmm7, xmm6; deltaTime }
      BgVehiclePhysics::IntegrateVelocities(vehObj, *(float *)&_XMM1, &vehObj->m_transform.m[3], (const vec4_t *)&out, &vehObj->m_linearVelocityWs, &vehObj->m_angularVelocityWs, &position, &orientation);
      m_driverEntNum = vehObj->m_driverEntNum;
      if ( m_driverEntNum != 2047 )
      {
        GEntity = G_GetGEntity(m_driverEntNum);
        if ( GEntity )
        {
          p_commandTime = (float *)&GEntity->client->ps.commandTime;
          if ( p_commandTime )
          {
            v35 = p_commandTime[5405];
            v36 = p_commandTime[5406];
            v169 = v6;
            v37 = p_commandTime[5404];
            *(float *)&physicsInstanceId = v37;
            if ( (LODWORD(v37) & 0x7F800000) == 2139095040 || (*(float *)&physicsInstanceId = v35, (LODWORD(v35) & 0x7F800000) == 2139095040) || (*(float *)&physicsInstanceId = v36, (LODWORD(v36) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2218, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] )") )
                __debugbreak();
            }
            v38 = v8->r.currentOrigin.v[0];
            v39 = v8->r.currentOrigin.v[1];
            v40 = v8->r.currentOrigin.v[2];
            Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehPlayerCollAhead, "bg_vehPlayerCollAhead");
            v42 = (float)((float)(v37 - v38) * *(float *)&Float_Internal_DebugName) + v37;
            v43 = (float)((float)(v35 - v39) * *(float *)&Float_Internal_DebugName) + v35;
            v44 = (float)((float)(v36 - v40) * *(float *)&Float_Internal_DebugName) + v36;
            if ( v42 > cm.broadphaseMin.v[0] && v42 < cm.broadphaseMax.v[0] && v43 > cm.broadphaseMin.v[1] && v43 < cm.broadphaseMax.v[1] && v44 > cm.broadphaseMin.v[2] && v44 < cm.broadphaseMax.v[2] )
            {
              position.v[0] = (float)((float)(v37 - v38) * *(float *)&Float_Internal_DebugName) + v37;
              position.v[1] = (float)((float)(v35 - v39) * *(float *)&Float_Internal_DebugName) + v35;
              position.v[2] = (float)((float)(v36 - v40) * *(float *)&Float_Internal_DebugName) + v36;
            }
          }
        }
      }
      v12 = 0;
    }
  }
  else
  {
    DeltaTime = G_Vehicle_GetDeltaTime();
    deltaOrigin.v[0] = *(float *)&DeltaTime * vehicle->phys.vel.v[0];
    deltaOrigin.v[1] = *(float *)&DeltaTime * vehicle->phys.vel.v[1];
    deltaOrigin.v[2] = *(float *)&DeltaTime * vehicle->phys.vel.v[2];
    v46 = vehicle->phys.vel.v[1];
    v47 = LODWORD(vehicle->phys.vel.v[0]);
    v48 = vehicle->phys.vel.v[2];
    v49 = v47;
    *(float *)&v49 = fsqrt((float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(v46 * v46)) + (float)(v48 * v48));
    _XMM3 = v49;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm1, xmm0
    }
    v25 = *(float *)&v47 * (float)(1.0 / *(float *)&_XMM0);
    v26 = v46 * (float)(1.0 / *(float *)&_XMM0);
    v27 = v48 * (float)(1.0 / *(float *)&_XMM0);
    AnglesSubtract(&vehicle->phys.angles, &vehicle->phys.prevAngles, &v3);
  }
  *(float *)&v53 = COERCE_FLOAT(G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8));
  physicsInstanceId = v53;
  if ( *(float *)&v53 == NAN )
    RigidBodyID = 0xFFFFFF;
  else
    RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v53, 0);
  if ( Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) && ServerDef->accurateShapeOverlap && v11 )
  {
    if ( v12 )
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
  }
  else
  {
    v55 = v8->r.currentOrigin.v[1];
    position.v[0] = v8->r.currentOrigin.v[0];
    position.v[2] = v8->r.currentOrigin.v[2];
    position.v[1] = v55;
    AnglesToQuat(&v8->r.currentAngles, &orientation);
  }
  v56 = 8321;
  if ( (v8->clipmask & 0x10000) != 0 )
    v56 = 33579137;
  if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, RigidBodyID) )
  {
    v57 = FLOAT_0_5;
    v67 = COERCE_FLOAT(LODWORD(v8->r.box.midPoint.v[2]) & _xmm) + v8->r.box.halfSize.v[2];
    v68 = COERCE_FLOAT(LODWORD(v8->r.box.midPoint.v[0]) & _xmm) + v8->r.box.halfSize.v[0];
    v69 = COERCE_FLOAT(LODWORD(v8->r.box.midPoint.v[1]) & _xmm) + v8->r.box.halfSize.v[1];
    v70 = (float)(0.5 * deltaOrigin.v[0]) + vehicle->phys.prevOrigin.v[0];
    v71 = fsqrt((float)((float)(v69 * v69) + (float)(v68 * v68)) + (float)(v67 * v67));
    v72 = COERCE_FLOAT(COERCE_UNSIGNED_INT(0.5 * deltaOrigin.v[0]) & _xmm) + v71;
    v73 = (float)(0.5 * deltaOrigin.v[1]) + vehicle->phys.prevOrigin.v[1];
    v74 = COERCE_FLOAT(COERCE_UNSIGNED_INT(0.5 * deltaOrigin.v[1]) & _xmm) + v71;
    v75 = (float)(0.5 * deltaOrigin.v[2]) + vehicle->phys.prevOrigin.v[2];
    v76 = COERCE_FLOAT(COERCE_UNSIGNED_INT(0.5 * deltaOrigin.v[2]) & _xmm) + v71;
    aabbMin.v[1] = v73 - v74;
    aabbMin.v[0] = v70 - v72;
    aabbMax.v[0] = v70 + v72;
    aabbMin.v[2] = v75 - v76;
    aabbMax.v[2] = v75 + v76;
    out.midPoint.v[0] = v70;
    out.halfSize.v[0] = v72;
    out.midPoint.v[1] = v73;
    out.halfSize.v[1] = v74;
    out.midPoint.v[2] = v75;
    out.halfSize.v[2] = v76;
    v66 = v73 + v74;
    goto LABEL_55;
  }
  Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &aabbMin, &aabbMax);
  v57 = FLOAT_0_5;
  v58 = DVARBOOL_vehLegacyHeliRotorsDamage;
  v59 = position.v[0] - (float)((float)(aabbMax.v[0] + aabbMin.v[0]) * 0.5);
  v60 = position.v[1] - (float)((float)(aabbMax.v[1] + aabbMin.v[1]) * 0.5);
  aabbMin.v[0] = v59 + aabbMin.v[0];
  aabbMin.v[1] = v60 + aabbMin.v[1];
  aabbMax.v[0] = v59 + aabbMax.v[0];
  aabbMax.v[1] = v60 + aabbMax.v[1];
  aabbMax.v[2] = aabbMax.v[2] + 25.0;
  aabbMin.v[2] = aabbMin.v[2] + -50.0;
  if ( !DVARBOOL_vehLegacyHeliRotorsDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehLegacyHeliRotorsDamage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v58->current.enabled && v8->s.eType == ET_HELICOPTER && ServerDef->dlcFloat[3] > 0.001 )
  {
    v61 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_vehLegacyHeliRotorsExpand, "vehLegacyHeliRotorsExpand");
    v62 = I_fclamp(*(float *)&v61, 0.0, 2048.0);
    v63 = aabbMin.v[0] - *(float *)&v62;
    v64 = aabbMin.v[1] - *(float *)&v62;
    v65 = *(float *)&v62 + aabbMax.v[0];
    v66 = *(float *)&v62 + aabbMax.v[1];
    aabbMax.v[0] = v65;
    aabbMin.v[0] = v63;
    aabbMin.v[1] = v64;
LABEL_55:
    aabbMax.v[1] = v66;
  }
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleDebug, "bg_vehicleDebug") == 1 )
  {
    v77 = aabbMax.v[0];
    v78 = aabbMin.v[0];
    *vec3_t::operator[](&out.midPoint, 0) = (float)(v78 + v77) * v57;
    *vec3_t::operator[](&out.halfSize, 0) = (float)(v77 - v78) * v57;
    v79 = aabbMax.v[1];
    v80 = aabbMin.v[1];
    *vec3_t::operator[](&out.midPoint, 1) = (float)(v80 + v79) * v57;
    *vec3_t::operator[](&out.halfSize, 1) = (float)(v79 - v80) * v57;
    v81 = aabbMax.v[2];
    v82 = aabbMin.v[2];
    *vec3_t::operator[](&out.midPoint, 2) = (float)(v82 + v81) * v57;
    *vec3_t::operator[](&out.halfSize, 2) = (float)(v81 - v82) * v57;
    G_DebugBox(&vec3_origin, &out, 0.0, &colorGreen, 0, 0);
  }
  collectedEnts.ids = (unsigned __int16 *)v168;
  collectedEnts.count = 0;
  collectedScriptables.ids = (unsigned int *)&v167;
  collectedEnts.countMax = 2048;
  collectedScriptables.count = 0;
  collectedScriptables.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, v56, 0, NULL, &collectedEnts, &collectedScriptables, 1);
  if ( ServerDef->collisionDamage > 0.0 )
  {
    for ( i = 0; i < collectedScriptables.count; ++i )
    {
      v84 = collectedScriptables.ids[i];
      if ( ScriptableSv_GetInstanceCommonContext(collectedScriptables.ids[i])->linkedObjectType == SCRIPTABLE_LINK_NONE )
      {
        v85 = DVARBOOL_scriptable_sv_accurate_vehicle;
        if ( !DVARBOOL_scriptable_sv_accurate_vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_accurate_vehicle") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v85);
        if ( !v85->current.enabled )
          goto LABEL_78;
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v84);
        def = InstanceCommonContext->def;
        if ( !InstanceCommonContext->def || ScriptableDef_HasHealth(InstanceCommonContext->def) && (def->flags & 0x180000) == 0 )
        {
          if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)v84 >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(newOrigin) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(angVel) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", angVel, newOrigin) )
              __debugbreak();
          }
          scriptableCollisionMain = g_scriptableSv_instanceContexts[v84].collisionContext.scriptableCollisionMain;
          if ( *(float *)&physicsInstanceId == NAN || scriptableCollisionMain == -1 || !ServerDef->accurateShapeOverlap || (Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8), v90 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0), v91 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, scriptableCollisionMain, 0), PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v90, &position, &orientation, v91)) )
          {
LABEL_78:
            collisionSpeed = ServerDef->collisionSpeed;
            v93 = (float)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_bg_vehicleScriptableDamageMult, "bg_vehicleScriptableDamageMult") * ServerDef->collisionDamage;
            providedDmg = G_Vehicle_CalcImpactDamageForScriptable(vehicle, v84, v93, collisionSpeed, &out.midPoint);
            if ( providedDmg > 0 )
            {
              v95 = ScriptableSv_GetInstanceCommonContext(v84)->def;
              if ( !v95 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2634, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
                __debugbreak();
              if ( ScriptableDef_HasHealth(v95) && (v95->flags & 0x180000) == 0 )
                ScriptableSv_Damage(v8, v8, v84, NULL, &out.midPoint, 12, &NULL_WEAPON, 0, (const scr_string_t)0, providedDmg, 0, 0);
            }
          }
        }
      }
    }
  }
  v96 = 0;
  if ( level.maxclients > 0 )
  {
    do
    {
      if ( (unsigned int)v96 >= 0x800 )
      {
        LODWORD(newOrigin) = 2048;
        LODWORD(angVel) = v96;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v97 = v96;
      if ( g_entities[v97].r.isInUse != g_entityIsInUse[v96] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v96] )
      {
        v98 = g_entities;
        if ( !g_entities[v97].client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2369, ASSERT_TYPE_ASSERT, "( check->client )", (const char *)&queryFormat, "check->client") )
          __debugbreak();
        if ( BGMovingPlatforms::IsOnMovingPlatform(&v98[v97].client->ps) )
        {
          v99 = 0i64;
          if ( collectedEnts.count )
          {
            while ( (unsigned __int16)v168[v99] != v96 )
            {
              v99 = (unsigned int)(v99 + 1);
              if ( (unsigned int)v99 >= collectedEnts.count )
                goto LABEL_104;
            }
          }
          else
          {
LABEL_104:
            if ( (v96 < 0 || (unsigned int)v96 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v96, "signed", v96) )
              __debugbreak();
            v168[collectedEnts.count] = v96;
            if ( ++collectedEnts.count > 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2386, ASSERT_TYPE_ASSERT, "( results.count <= ( 2048 ) )", (const char *)&queryFormat, "results.count <= MAX_GENTITIES") )
              __debugbreak();
          }
        }
      }
      ++v96;
    }
    while ( v96 < level.maxclients );
    v8 = *(gentity_s **)outTeam;
    vehicle = v152;
    ServerDef = v153;
  }
  v100 = 0;
  if ( collectedEnts.count )
  {
    v101 = 655442;
    do
    {
      v102 = (unsigned __int16)v168[v100];
      v103 = &g_entities[v102];
      if ( v103->s.number == v8->s.number )
        goto LABEL_247;
      tagInfo = v103->tagInfo;
      if ( tagInfo )
      {
        if ( tagInfo->parent == v8 )
          goto LABEL_247;
      }
      eType = v103->s.eType;
      if ( (unsigned __int16)eType > ET_ACTOR || !_bittest(&v101, eType) )
        goto LABEL_247;
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(&g_entities[v102]);
      v107 = EntityPlayerStateConst;
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
        if ( !ServerDef->hitRemoteControllers && v103->s.eType == ET_PLAYER )
        {
          Handler = GHandler::getHandler();
          GHandler::GetPlayerTeam(Handler, v103->s.number, outTeam);
          v110 = v154->GetTeam(v154, &v8->s);
          if ( v110 == outTeam[0] )
            goto LABEL_246;
        }
      }
LABEL_133:
      v111 = v103->s.eType;
      if ( ((v111 - 1) & 0xFFED) == 0 && v111 != ET_ITEM && (!v103->tagInfo || G_Vehicle_AllowTouchLinkedPlayer(v8, ServerDef, v103)) && G_VehicleHeli_ContactRotors(v8, v103) )
      {
        if ( !GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 177, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem )", (const char *)&queryFormat, "ms_gCombatSystem") )
          __debugbreak();
        v147 = 0;
        LOBYTE(dFlags) = 0;
        LODWORD(removeDuplicates) = 12;
        LODWORD(newOrient) = 0;
        LODWORD(newOrigin) = 999999;
        GCombat::ms_gCombatSystem->Damage(GCombat::ms_gCombatSystem, v103, v8, v8, &vec3_origin, &v103->r.currentOrigin, (int)newOrigin, (int)newOrient, removeDuplicates, &NULL_WEAPON, dFlags, HITLOC_NONE, 0, (scr_string_t)0, 0, NULL, (const GExtraDamageParams *)&v147);
        v112 = vehicle - s_vehicleServers;
        if ( (unsigned __int64)(v112 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v112, "signed", vehicle - s_vehicleServers) )
          __debugbreak();
        if ( (int)v112 > 127 )
          LODWORD(v112) = 127;
        if ( (int)v112 < 0 )
          LODWORD(v112) = 0;
        s_vehicleDamageTime[(int)v112] = level.time;
        goto LABEL_246;
      }
      if ( v103->s.groundEntityNum == v8->s.number || v107 && v107->movingPlatforms.m_movingPlatformEntity == v8->s.number )
      {
LABEL_245:
        G_Vehicle_PushEntity(v8, v103, &out.midPoint, &deltaOrigin, &v3);
        goto LABEL_246;
      }
      client = v103->client;
      if ( client )
      {
        v114 = &client->ps.eFlags;
        if ( !v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v114, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v114, ACTIVE, 6u) )
        {
          if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v114, ACTIVE, 7u) )
            goto LABEL_173;
          if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
            __debugbreak();
        }
        otherEntityNum = v103->s.otherEntityNum;
        if ( (unsigned int)otherEntityNum >= 0x800 )
        {
          LODWORD(newOrigin) = 2048;
          LODWORD(angVel) = v103->s.otherEntityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[otherEntityNum].r.isInUse != g_entityIsInUse[otherEntityNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[otherEntityNum] && G_EntIsLinkedToAncestor(&g_entities[v103->s.otherEntityNum], v8) )
          goto LABEL_246;
      }
LABEL_173:
      if ( v107 && BGMovingPlatforms::IsOnMovingPlatform(v107) )
      {
        m_movingPlatformEntity = v107->movingPlatforms.m_movingPlatformEntity;
        if ( (unsigned int)m_movingPlatformEntity >= 0x800 )
        {
          LODWORD(newOrigin) = 2048;
          LODWORD(angVel) = v107->movingPlatforms.m_movingPlatformEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2458, ASSERT_TYPE_ASSERT, "(unsigned)( moverIndex ) < (unsigned)( ( 2048 ) )", "moverIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        if ( GUtils::AreEntsInSameLinkTree(&g_entities[m_movingPlatformEntity], v8) )
          goto LABEL_246;
      }
      if ( v103->s.eType == ET_VEHICLE )
      {
        Physics = G_Vehicle_GetPhysics(v103->vehicle);
        if ( Physics )
        {
          p_m_deferActionMgr = &Physics->m_deferActionMgr;
          if ( Physics == (BgVehiclePhysics *)-152i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_bitset.h", (_DWORD)Physics + 172, (AssertType)((_DWORD)Physics + 153), "( array )", (const char *)&queryFormat, "array") )
            __debugbreak();
          p_m_deferActionMgr->actionBits[0] |= 8u;
        }
      }
      classname = v103->classname;
      if ( classname == scr_const.script_model )
      {
        if ( !v103->model )
          goto LABEL_246;
        ServerDObjForEnt = Com_GetServerDObjForEnt(v103);
        DObjPhysicsGetBounds(ServerDObjForEnt, &bounds);
        bounds.midPoint.v[0] = bounds.midPoint.v[0] + v103->r.currentOrigin.v[0];
        bounds.midPoint.v[1] = bounds.midPoint.v[1] + v103->r.currentOrigin.v[1];
        bounds.midPoint.v[2] = bounds.midPoint.v[2] + v103->r.currentOrigin.v[2];
      }
      else if ( classname == scr_const.script_brushmodel )
      {
        v121 = Vec3MajorAxis(&v103->r.box.halfSize);
        v122 = v121;
        if ( (unsigned int)v121 >= 3 )
        {
          LODWORD(newOrigin) = 3;
          LODWORD(angVel) = v121;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", angVel, newOrigin) )
            __debugbreak();
        }
        v123 = v103->r.box.halfSize.v[v122];
        *(_QWORD *)bounds.midPoint.v = *(_QWORD *)v103->r.box.midPoint.v;
        bounds.midPoint.v[2] = v103->r.box.midPoint.v[2];
        bounds.halfSize.v[0] = v123;
        bounds.halfSize.v[1] = v123;
        bounds.halfSize.v[2] = v123;
        bounds.midPoint.v[0] = bounds.midPoint.v[0] + v103->r.currentOrigin.v[0];
        bounds.midPoint.v[1] = bounds.midPoint.v[1] + v103->r.currentOrigin.v[1];
        bounds.midPoint.v[2] = bounds.midPoint.v[2] + v103->r.currentOrigin.v[2];
      }
      else
      {
        bounds = v103->r.absBox;
      }
      v129 = ServerDef->accurateShapeOverlap == 0;
      v124 = physicsInstanceId;
      outPerformCapsuleTest = 1;
      if ( v129 || *(float *)&physicsInstanceId == NAN )
        goto LABEL_203;
      if ( v103->s.eType != ET_PLAYER )
      {
        if ( G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v103) == -1 )
        {
LABEL_203:
          if ( bounds.halfSize.v[0] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 824, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[0] >= 0.0f") )
            __debugbreak();
          if ( bounds.halfSize.v[1] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 825, ASSERT_TYPE_ASSERT, "(bounds->halfSize[1] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[1] >= 0.0f") )
            __debugbreak();
          if ( bounds.halfSize.v[2] < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 826, ASSERT_TYPE_ASSERT, "(bounds->halfSize[2] >= 0.0f)", (const char *)&queryFormat, "bounds->halfSize[2] >= 0.0f") )
            __debugbreak();
          _XMM0 = LODWORD(bounds.halfSize.v[1]);
          __asm
          {
            vmaxss  xmm1, xmm0, dword ptr [rbp+3180h+bounds.halfSize]
            vmaxss  xmm0, xmm1, dword ptr [rbp+3180h+bounds.halfSize+8]
          }
          bounds.halfSize.v[2] = *(float *)&_XMM0;
          bounds.halfSize.v[0] = *(float *)&_XMM1;
          bounds.halfSize.v[1] = *(float *)&_XMM1;
          v129 = PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, v124, v8) == 0;
        }
        else
        {
          outPerformCapsuleTest = 0;
          v125 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v8);
          v126 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v125, 0);
          v127 = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, v103);
          v128 = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v127, 0);
          v129 = !PhysicsVehicle_Overlap_Shapes(PHYSICS_WORLD_ID_FIRST, v126, &position, &orientation, v128);
        }
        if ( v129 )
          goto LABEL_246;
        goto LABEL_214;
      }
      if ( !vehObj || !vehObj->m_playerControlled )
        goto LABEL_203;
      outPerformCapsuleTest = 0;
      if ( !G_Vehicle_TouchEntities_Player(PHYSICS_WORLD_ID_FIRST, vehObj, v103, &outPerformCapsuleTest) )
        goto LABEL_246;
      if ( outPerformCapsuleTest )
        goto LABEL_203;
LABEL_214:
      v133 = ScriptContext_Server();
      if ( Scr_IsSystemActive(v133, 1u) )
      {
        GScr_AddEntity(v8);
        GScr_Notify(v103, scr_const.touch, 1u);
        GScr_AddEntity(v103);
        GScr_Notify(v8, scr_const.touch, 1u);
      }
      touch = G_Main_GetEntHandlerList(v103)->touch;
      if ( touch )
        touch(v103, v8, 1);
      v135 = EntHandlerList->touch;
      if ( v135 )
        v135(v8, v103, 1);
      if ( !vehicle->canPushEntities )
        goto LABEL_246;
      AIActorInterface::AIActorInterface(&v156);
      AIAgentInterface::AIAgentInterface(&v157);
      v157.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
      v136 = NULL;
      v158 = NULL;
      if ( v103->agent )
      {
        if ( SV_Agent_IsScripted(v103->s.number) )
        {
          ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v103);
          if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
            __debugbreak();
          if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
            __debugbreak();
          AINewAgentInterface::SetAgent((AINewAgentInterface *)&v157, ScriptedAgentInfo);
          v136 = &v157;
LABEL_236:
          v158 = v136;
          goto LABEL_237;
        }
        v136 = v158;
      }
      actor = v103->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v156, v103->actor);
        v136 = &v156;
        goto LABEL_236;
      }
LABEL_237:
      if ( ((v103->s.eType - 1) & 0xFFEF) != 0 )
      {
        if ( !v136 || (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v136 + 224i64))(v136) )
        {
          v139 = G_GetEntityPlayerStateConst(v103);
          if ( !v139 || v139->movingPlatforms.m_movingPlatformEntity != v8->s.number )
            goto LABEL_246;
        }
        else if ( !(*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v136 + 128i64))(v136) )
        {
          goto LABEL_246;
        }
      }
      if ( (float)((float)((float)((float)(v103->r.currentOrigin.v[1] - v8->r.currentOrigin.v[1]) * v26) + (float)((float)(v103->r.currentOrigin.v[0] - v8->r.currentOrigin.v[0]) * v25)) + (float)((float)(v103->r.currentOrigin.v[2] - v8->r.currentOrigin.v[2]) * v27)) >= 0.0 )
        goto LABEL_245;
LABEL_246:
      v101 = 655442;
LABEL_247:
      ++v100;
    }
    while ( v100 < collectedEnts.count );
  }
}

/*
==============
G_Vehicle_TouchEntities_Player
==============
*/
bool G_Vehicle_TouchEntities_Player(Physics_WorldId worldId, const BgVehiclePhysics *vehObj, gentity_s *playerEnt, bool *outPerformCapsuleTest)
{
  int m_entityNumber; 
  gentity_s *GEntity; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  double Float_Internal_DebugName; 
  float v13; 
  double v14; 
  float v15; 
  int m_driverEntNum; 
  gentity_s *v17; 
  float *p_commandTime; 
  float v19; 
  float v20; 
  float v21; 
  double v22; 
  float v23; 
  float v24; 
  float v25; 
  unsigned int v26; 
  hknpShape *ShapeCapsuleUpAxis; 
  HavokPhysics_CollisionQueryResult *ResultContainer; 
  HavokPhysics_CollisionQueryResult *v29; 
  Physics_GetClosestPointsExtendedData extendedData; 
  vec3_t point; 

  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1973, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  if ( (!playerEnt || playerEnt->s.eType != ET_PLAYER) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1974, ASSERT_TYPE_ASSERT, "(playerEnt && playerEnt->s.eType == ET_PLAYER)", (const char *)&queryFormat, "playerEnt && playerEnt->s.eType == ET_PLAYER") )
    __debugbreak();
  if ( !vehObj )
    goto LABEL_38;
  if ( !playerEnt )
    goto LABEL_38;
  if ( playerEnt->s.eType != ET_PLAYER )
    goto LABEL_38;
  m_entityNumber = vehObj->m_entityNumber;
  if ( m_entityNumber == 2047 )
    goto LABEL_38;
  GEntity = G_GetGEntity(m_entityNumber);
  if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1986, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  Instance = G_PhysicsObject_GetInstance(worldId, GEntity);
  if ( Instance == -1 )
    goto LABEL_38;
  RigidBodyID = Physics_GetRigidBodyID(worldId, Instance, 0);
  if ( RigidBodyID == 0xFFFFFF )
    goto LABEL_38;
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapHeight, "bg_vehHeliPlayerCapHeight");
  v13 = *(float *)&Float_Internal_DebugName * 0.5;
  v14 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehHeliPlayerCapRadius, "bg_vehHeliPlayerCapRadius");
  v15 = *(float *)&v14;
  if ( v13 <= 0.001 || *(float *)&v14 <= 0.001 )
    goto LABEL_38;
  m_driverEntNum = vehObj->m_driverEntNum;
  point = vec3_origin;
  if ( m_driverEntNum != 2047 )
  {
    v17 = G_GetGEntity(m_driverEntNum);
    if ( v17 )
    {
      p_commandTime = (float *)&v17->client->ps.commandTime;
      if ( p_commandTime )
      {
        v19 = p_commandTime[5405];
        v20 = p_commandTime[5406];
        v21 = p_commandTime[5404];
        if ( ((LODWORD(v21) & 0x7F800000) == 2139095040 || (LODWORD(v19) & 0x7F800000) == 2139095040 || (LODWORD(v20) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2030, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmdLastVehOrg )[0] ) && !IS_NAN( ( cmdLastVehOrg )[1] ) && !IS_NAN( ( cmdLastVehOrg )[2] )") )
          __debugbreak();
        point.v[0] = GEntity->r.currentOrigin.v[0] - v21;
        point.v[1] = GEntity->r.currentOrigin.v[1] - v19;
        point.v[2] = GEntity->r.currentOrigin.v[2] - v20;
        v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehPlayerCollAhead, "bg_vehPlayerCollAhead");
        v23 = (float)(*(float *)&v22 * point.v[0]) + playerEnt->r.absBox.midPoint.v[0];
        v24 = (float)(*(float *)&v22 * point.v[1]) + playerEnt->r.absBox.midPoint.v[1];
        v25 = (float)(*(float *)&v22 * point.v[2]) + playerEnt->r.absBox.midPoint.v[2];
        point.v[2] = v25;
        point.v[0] = v23;
        point.v[1] = v24;
        if ( v23 <= cm.broadphaseMin.v[0] || v23 >= cm.broadphaseMax.v[0] || v24 <= cm.broadphaseMin.v[1] || v24 >= cm.broadphaseMax.v[1] || v25 <= cm.broadphaseMin.v[2] || v25 >= cm.broadphaseMax.v[2] )
        {
          point.v[0] = 0.0;
          point.v[1] = 0.0;
          point.v[2] = 0.0;
        }
      }
    }
  }
  v26 = Physics_GetThreadId() + 28 * worldId;
  if ( v26 > 0xDF )
    goto LABEL_38;
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(worldId, &vec3_origin, v13, v15, g_player_capsule_shape_buffer[v26], 432, Temporary);
  if ( !ShapeCapsuleUpAxis )
    goto LABEL_38;
  extendedData.contents = -1;
  extendedData.simplify = 0;
  extendedData.collisionBuffer = 0.0;
  extendedData.ignoreBodies = NULL;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  ResultContainer = PhysicsQuery_GetResultContainer(PQ_TYPE_LEGACYANY, v26);
  v29 = ResultContainer;
  if ( ResultContainer )
  {
    HavokPhysics_CollisionQueryResult::Reset(ResultContainer, 1);
    Physics_GetClosestPoints(worldId, RigidBodyID, ShapeCapsuleUpAxis, &point, &quat_identity, 0.0, &extendedData, v29);
    return HavokPhysics_CollisionQueryResult::HasHit(v29);
  }
  else
  {
LABEL_38:
    *outPerformCapsuleTest = 1;
    return 1;
  }
}

/*
==============
G_Vehicle_TransformInputCamRelative
==============
*/
void G_Vehicle_TransformInputCamRelative(const vec3_t *viewAngles, const vec3_t *vehicleAngles, const vec3_t *input, vec3_t *output)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t angles; 
  vec3_t v16; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  char v19; 
  tmat33_t<vec3_t> in; 

  if ( input == output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5971, ASSERT_TYPE_ASSERT, "( &input != &output )", (const char *)&queryFormat, "&input != &output") )
    __debugbreak();
  angles.v[1] = viewAngles->v[1];
  angles.v[0] = 0.0;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  if ( input == (const vec3_t *)&v19 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v8 = input->v[2];
  v9 = input->v[1];
  v10 = (float)((float)(input->v[0] * axis.m[0].v[0]) + (float)(v9 * axis.m[1].v[0])) + (float)(v8 * axis.m[2].v[0]);
  v11 = (float)((float)(input->v[0] * axis.m[0].v[1]) + (float)(v9 * axis.m[1].v[1])) + (float)(v8 * axis.m[2].v[1]);
  v12 = (float)((float)(input->v[0] * axis.m[0].v[2]) + (float)(v9 * axis.m[1].v[2])) + (float)(v8 * axis.m[2].v[2]);
  v16.v[1] = vehicleAngles->v[1];
  v16.v[0] = 0.0;
  v16.v[2] = 0.0;
  AnglesToAxis(&v16, &in);
  MatrixInverse(&in, &out);
  v13 = (float)((float)(v11 * out.m[1].v[0]) + (float)(v10 * out.m[0].v[0])) + (float)(v12 * out.m[2].v[0]);
  v14 = (float)((float)(v11 * out.m[1].v[1]) + (float)(v10 * out.m[0].v[1])) + (float)(v12 * out.m[2].v[1]);
  output->v[2] = (float)((float)(v11 * out.m[1].v[2]) + (float)(v10 * out.m[0].v[2])) + (float)(v12 * out.m[2].v[2]);
  output->v[0] = v13;
  output->v[1] = v14;
}

/*
==============
G_Vehicle_TrophyTestMissile
==============
*/
void G_Vehicle_TrophyTestMissile(gentity_s *missileEnt, const vec3_t *start, const vec3_t *end)
{
  unsigned int v6; 
  __int64 v7; 
  gentity_s *ent; 
  const VehicleDef *ServerDef; 
  const VehicleDef *v10; 
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
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  float v32; 
  __int128 v33; 
  float v34; 
  vec3_t normalOverride; 

  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Vehicle_TrophyTestMissile");
  if ( !missileEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5712, ASSERT_TYPE_ASSERT, "( missileEnt )", (const char *)&queryFormat, "missileEnt") )
    __debugbreak();
  if ( G_Missile_IsGrenade(missileEnt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5713, ASSERT_TYPE_ASSERT, "( !G_Missile_IsGrenade( missileEnt ) )", (const char *)&queryFormat, "!G_Missile_IsGrenade( missileEnt )") )
    __debugbreak();
  v6 = 0;
  v7 = 0i64;
  while ( 1 )
  {
    ent = s_vehicleServers[v7].ent;
    if ( ent )
    {
      ServerDef = G_Vehicle_GetServerDef(s_vehicleServers[v7].defIndex);
      v10 = ServerDef;
      if ( ServerDef->trophyEnabled )
      {
        if ( s_vehicleServers[v7].trophyAmmo )
        {
          if ( level.time >= s_vehicleServers[v7].trophyReloadEndTime )
          {
            v11 = ent->r.currentOrigin.v[1];
            v12 = ent->r.currentOrigin.v[0];
            v13 = ent->r.currentOrigin.v[2];
            if ( (float)((float)((float)((float)(v11 - missileEnt->c.missile.nonGrenade.launchOrigin.v[1]) * (float)(v11 - missileEnt->c.missile.nonGrenade.launchOrigin.v[1])) + (float)((float)(v12 - missileEnt->c.missile.nonGrenade.launchOrigin.v[0]) * (float)(v12 - missileEnt->c.missile.nonGrenade.launchOrigin.v[0]))) + (float)((float)(v13 - missileEnt->c.missile.nonGrenade.launchOrigin.v[2]) * (float)(v13 - missileEnt->c.missile.nonGrenade.launchOrigin.v[2]))) >= (float)(ServerDef->trophyInactiveRadius * ServerDef->trophyInactiveRadius) )
            {
              v14 = end->v[1];
              v15 = end->v[0];
              v16 = end->v[2];
              v17 = ServerDef->trophyRadius * ServerDef->trophyRadius;
              if ( (float)((float)((float)((float)(v11 - v14) * (float)(v11 - v14)) + (float)((float)(v12 - v15) * (float)(v12 - v15))) + (float)((float)(v13 - v16) * (float)(v13 - v16))) <= v17 )
                break;
            }
          }
        }
      }
    }
    ++v6;
    ++v7;
    if ( v6 >= 0x80 )
      goto LABEL_20;
  }
  v18 = start->v[1];
  v19 = start->v[0];
  v20 = v14 - v18;
  v21 = v15 - start->v[0];
  v22 = start->v[2];
  v23 = v16 - v22;
  v24 = (float)((float)(v20 * v20) + (float)(v21 * v21)) + (float)(v23 * v23);
  if ( v24 > 0.0099999998 )
  {
    v25 = v18 - v11;
    v26 = v19 - v12;
    v27 = v22 - v13;
    v28 = (float)((float)(v25 * v20) + (float)(v26 * v21)) + (float)((float)(v22 - v13) * v23);
    v29 = (float)(v28 * v28) - (float)((float)((float)((float)((float)(v25 * v25) + (float)(v26 * v26)) + (float)(v27 * v27)) - v17) * v24);
    if ( v29 >= 0.0 )
    {
      v30 = (float)(COERCE_FLOAT(LODWORD(v28) ^ _xmm) - fsqrt(v29)) / v24;
      missileEnt->r.currentOrigin.v[0] = (float)(v21 * v30) + v19;
      missileEnt->r.currentOrigin.v[1] = (float)((float)(end->v[1] - start->v[1]) * v30) + start->v[1];
      missileEnt->r.currentOrigin.v[2] = (float)((float)(end->v[2] - start->v[2]) * v30) + start->v[2];
    }
  }
  G_SetOrigin(missileEnt, &missileEnt->r.currentOrigin, 1, 1);
  v31 = LODWORD(missileEnt->r.currentOrigin.v[1]);
  normalOverride.v[0] = missileEnt->r.currentOrigin.v[0] - ent->r.currentOrigin.v[0];
  v33 = v31;
  v32 = *(float *)&v31 - ent->r.currentOrigin.v[1];
  *(float *)&v31 = missileEnt->r.currentOrigin.v[2];
  normalOverride.v[1] = v32;
  v34 = *(float *)&v31 - ent->r.currentOrigin.v[2];
  *(float *)&v33 = fsqrt((float)((float)(v32 * v32) + (float)(normalOverride.v[0] * normalOverride.v[0])) + (float)(v34 * v34));
  _XMM4 = v33;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  normalOverride.v[0] = normalOverride.v[0] * (float)(1.0 / *(float *)&_XMM0);
  normalOverride.v[2] = (float)(1.0 / *(float *)&_XMM0) * v34;
  normalOverride.v[1] = v32 * (float)(1.0 / *(float *)&_XMM0);
  G_Missile_ExplodeInternal(missileEnt, EXPLOSION_TYPE_TROPHY, &normalOverride, ent);
  --s_vehicleServers[v7].trophyAmmo;
  s_vehicleServers[v7].trophyReloadEndTime = level.time - (int)(float)(v10->trophyReloadTime * -1000.0);
LABEL_20:
  Sys_ProfEndNamedEvent();
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
  Vehicle *vehicle; 
  gclient_s *v6; 
  int v7; 
  unsigned __int16 number; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int detach; 
  __int64 v16; 
  GUtils *Utils; 
  GVehicles *VehicleSystem; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  vec3_t outPos; 
  int v23[4]; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3871, ASSERT_TYPE_ASSERT, "( vehEnt )", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3872, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  client = player->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3875, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  vehicle = vehEnt->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3878, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3852, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  v6 = player->client;
  v23[0] = LODWORD(v6->ps.viewangles.v[0]);
  v23[1] = LODWORD(v6->ps.viewangles.v[1]);
  *(float *)&v23[2] = 0.0;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->SetPlayerViewAngles(GUtils::ms_gUtils, player, (const vec3_t *)v23);
  v7 = vehEnt->s.lerp.u.anonymous.data[1];
  if ( (v7 & 0x10000000) != 0 )
  {
    vehEnt->s.lerp.u.anonymous.data[1] = v7 & 0xEFFFFFFF;
    EntHandle::setEnt(&vehEnt->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
  }
  else if ( client->ps.vehicleState.entity == vehEnt->s.number )
  {
    EntHandle::setEnt(&vehEnt->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
    BG_InitPlayerstateVehicle(&client->ps);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&vehEnt->s.lerp.eFlags, ACTIVE, 0xBu);
  }
  else
  {
    number = player->r.ownerNum.number;
    if ( !number )
      goto LABEL_37;
    v9 = number;
    v10 = number - 1;
    if ( v10 >= 0x800 )
    {
      LODWORD(v19) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v11 = v9 - 1;
    if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v11] )
    {
      LODWORD(v20) = player->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v20) )
        __debugbreak();
    }
    if ( !player->r.ownerNum.number )
    {
LABEL_37:
      LODWORD(v20) = player->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3909, ASSERT_TYPE_ASSERT, "(player->r.ownerNum.isDefined())", "%s\n\tVEH_UnlinkPlayer: Player %i doesn't have an owner, when unlinking from vehicle %i\n", "player->r.ownerNum.isDefined()", v20, vehEnt->s.number) )
        __debugbreak();
    }
    v12 = player->r.ownerNum.number;
    if ( (unsigned int)(v12 - 1) >= 0x7FF )
    {
      LODWORD(v20) = 2047;
      LODWORD(v19) = v12 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v13 = player->r.ownerNum.number;
    if ( (unsigned int)(v13 - 1) >= 0x800 )
    {
      LODWORD(v20) = 2048;
      LODWORD(v19) = v13 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v14 = v13 - 1;
    if ( g_entities[v14].r.isInUse != g_entityIsInUse[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v14] )
    {
      LODWORD(v20) = player->r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v20) )
        __debugbreak();
    }
    if ( &g_entities[player->r.ownerNum.number - 1] != vehEnt )
    {
      LODWORD(v21) = player->s.number;
      LODWORD(v20) = vehEnt->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3910, ASSERT_TYPE_ASSERT, "(player->r.ownerNum.ent() == vehEnt)", "%s\n\tVEH_UnlinkPlayer: Vehicle %i is not player %i 's owner\n", "player->r.ownerNum.ent() == vehEnt", v20, v21) )
        __debugbreak();
    }
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu) )
    {
      LODWORD(v21) = vehEnt->s.number;
      LODWORD(v20) = player->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3911, ASSERT_TYPE_ASSERT, "(client->ps.eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE ))", "%s\n\tVEH_UnlinkPlayer: Player %i is not using a vehicle (trying to unlink from vehicle %i)\n", "client->ps.eFlags.TestFlag( EntityStateFlagsCommon::VEHICLE_ACTIVE )", v20, v21) )
        __debugbreak();
    }
    G_EntUnlink(player);
    detach = vehicle->boneIndex.detach;
    if ( detach >= 0 )
    {
      G_Utils_DObjGetWorldBoneIndexPos(vehEnt, detach, &outPos);
    }
    else
    {
      Com_PrintWarning(15, "VEH_UnlinkPlayer: Warning - no [tag_detach] on vehicle\n");
      v16 = *(_QWORD *)vehEnt->r.currentOrigin.v;
      outPos.v[1] = *((float *)&v16 + 1);
      outPos.v[0] = *(float *)&v16;
      outPos.v[2] = (float)(vehicle->phys.bounds.halfSize.v[2] + vehicle->phys.bounds.midPoint.v[2]) + vehEnt->r.currentOrigin.v[2];
    }
    if ( vehicle->drivingState == VEH_DRIVE_PLAYER )
      vehicle->drivingState = VEH_DRIVE_NONE;
    Utils = GUtils::GetUtils();
    Utils->SetPlayerOrigin(Utils, player, &outPos, 1, 1);
    vehEnt->r.currentAngles.v[0] = 0.0;
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&vehEnt->s.lerp.eFlags, ACTIVE, 0xBu);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&client->ps.otherFlags, GameModeFlagValues::ms_spValue, 0x24u);
    VehicleSystem = GVehicles::GetVehicleSystem();
    VehicleSystem->ResetMouseSensitivity(VehicleSystem);
    EntHandle::setEnt(&vehEnt->r.ownerNum, NULL);
    EntHandle::setEnt(&player->r.ownerNum, NULL);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, ACTIVE, 0xBu);
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    player->client->linkAnglesFrac = 0.0;
    client->ps.viewlocked_entNum = 2047;
    GScr_AddEntity(player);
    GScr_Notify(vehicle->ent, scr_const.vehicle_dismount, 1u);
  }
}

/*
==============
G_Vehicle_UpdateAim
==============
*/
void G_Vehicle_UpdateAim(gentity_s *ent)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  __int64 targetEnt; 
  gentity_s *v5; 
  int barrel; 
  int turret_base; 
  gentity_s *v8; 
  GVehicles *VehicleSystem; 
  float v10; 
  __int128 v11; 
  float v12; 
  __int128 v16; 
  float pupilDiameter; 
  double DeltaTime; 
  double v22; 
  double v23; 
  double v24; 
  float v25; 
  float v26; 
  float v27; 
  float turretVertSpanDown; 
  float v29; 
  float v30; 
  float turretHorizSpanLeft; 
  int v35; 
  gentity_s *v36; 
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

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2659, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2662, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !vehicle->hasTarget || ent->health <= 0 )
  {
    vehicle->turret.turretMoving = 0;
    return;
  }
  targetEnt = vehicle->targetEnt;
  if ( (_DWORD)targetEnt == 2047 )
  {
    end = vehicle->targetOrigin;
    v5 = NULL;
  }
  else
  {
    v5 = &g_entities[targetEnt];
    end.v[0] = v5->r.currentOrigin.v[0] + vehicle->targetOffset.v[0];
    end.v[1] = v5->r.currentOrigin.v[1] + vehicle->targetOffset.v[1];
    end.v[2] = v5->r.currentOrigin.v[2] + vehicle->targetOffset.v[2];
  }
  barrel = vehicle->boneIndex.barrel;
  if ( barrel >= 0 )
  {
    G_Utils_DObjGetWorldBoneIndexPos(ent, barrel, &outPos);
    turret_base = vehicle->boneIndex.turret_base;
    if ( turret_base == -1 )
    {
      angles = vehicle->phys.angles;
    }
    else
    {
      G_Utils_DObjGetWorldBoneIndexMatrix(ent, turret_base, &outTagMat);
      AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &angles);
    }
    if ( EntHandle::isDefined(&ent->r.ownerNum) && vehicle->targetEnt == 2047 )
    {
      v8 = EntHandle::ent(&ent->r.ownerNum);
      if ( !v8->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2707, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
        __debugbreak();
      VehicleSystem = GVehicles::GetVehicleSystem();
      VehicleSystem->GetVehicleViewlockAngles(VehicleSystem, v8, ServerDef, &angles);
      v10 = FLOAT_1_0;
      vec.v[0] = vehicle->targetOrigin.v[0] - outPos.v[0];
      v11 = LODWORD(vehicle->targetOrigin.v[1]);
      vec.v[1] = vehicle->targetOrigin.v[1] - outPos.v[1];
      v12 = vehicle->targetOrigin.v[2] - outPos.v[2];
      *(float *)&v11 = fsqrt((float)((float)(vec.v[1] * vec.v[1]) + (float)(vec.v[0] * vec.v[0])) + (float)(v12 * v12));
      _XMM1 = v11;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
      }
      vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM0);
      vec.v[2] = v12 * (float)(1.0 / *(float *)&_XMM0);
      vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM0);
      vectoangles(&vec, &v1);
      v1.v[1] = v8->client->ps.viewangles.v[1];
      v1.v[2] = 0.0;
    }
    else
    {
      v16 = LODWORD(end.v[1]);
      v10 = FLOAT_1_0;
      *(float *)&v16 = fsqrt((float)((float)((float)(end.v[1] - outPos.v[1]) * (float)(end.v[1] - outPos.v[1])) + (float)((float)(end.v[0] - outPos.v[0]) * (float)(end.v[0] - outPos.v[0]))) + (float)((float)(end.v[2] - outPos.v[2]) * (float)(end.v[2] - outPos.v[2])));
      _XMM1 = v16;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm8, xmm0
      }
      vec.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(end.v[0] - outPos.v[0]);
      vec.v[2] = (float)(1.0 / *(float *)&_XMM0) * (float)(end.v[2] - outPos.v[2]);
      vec.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(end.v[1] - outPos.v[1]);
      vectoangles(&vec, &v1);
    }
    AnglesToAxis(&v1, &axis);
    AnglesToAxis(&angles, &in);
    MatrixTranspose(&in, &out);
    MatrixMultiply(&axis, &out, &in);
    AxisToAngles(&in, &v1);
    pupilDiameter = ent->s.lerp.u.actor.pupilDiameter;
    LODWORD(v2.v[0]) = ent->s.lerp.u.anonymous.data[5];
    v2.v[1] = pupilDiameter;
    v2.v[2] = 0.0;
    AnglesSubtract(&v1, &v2, &v3);
    LODWORD(v3.v[0]) &= _xmm;
    LODWORD(v3.v[1]) &= _xmm;
    DeltaTime = G_Vehicle_GetDeltaTime();
    v22 = LinearTrackAngle(v1.v[0], v2.v[0], ServerDef->turretRotRate, *(float *)&DeltaTime);
    ent->s.lerp.u.actor.impactVector.v[2] = *(float *)&v22;
    v23 = G_Vehicle_GetDeltaTime();
    v24 = LinearTrackAngle(v1.v[1], v2.v[1], ServerDef->turretRotRate, *(float *)&v23);
    v25 = ent->s.lerp.u.actor.impactVector.v[2];
    ent->s.lerp.u.actor.pupilDiameter = *(float *)&v24;
    LODWORD(v26) = LODWORD(ServerDef->turretVertSpanUp) ^ _xmm;
    v27 = *(float *)&v24;
    if ( v25 >= v26 )
    {
      turretVertSpanDown = ServerDef->turretVertSpanDown;
      if ( v25 <= turretVertSpanDown )
        goto LABEL_28;
      ent->s.lerp.u.actor.impactVector.v[2] = turretVertSpanDown;
    }
    else
    {
      ent->s.lerp.u.actor.impactVector.v[2] = v26;
    }
    GScr_Notify(ent, scr_const.turret_pitch_clamped, 0);
LABEL_28:
    v29 = ent->s.lerp.u.actor.pupilDiameter;
    LODWORD(v30) = LODWORD(ServerDef->turretHorizSpanRight) ^ _xmm;
    if ( v29 >= v30 )
    {
      turretHorizSpanLeft = ServerDef->turretHorizSpanLeft;
      if ( v29 <= turretHorizSpanLeft )
        goto LABEL_33;
      ent->s.lerp.u.actor.pupilDiameter = turretHorizSpanLeft;
    }
    else
    {
      ent->s.lerp.u.actor.pupilDiameter = v30;
    }
    GScr_Notify(ent, scr_const.turret_yaw_clamped, 0);
LABEL_33:
    _XMM7 = 0i64;
    __asm
    {
      vroundss xmm2, xmm7, xmm1, 1
      vroundss xmm3, xmm7, xmm0, 1
    }
    if ( v3.v[0] >= 2.0 && (float)((float)((float)((float)(v25 - ent->s.lerp.u.actor.impactVector.v[2]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) == 0.0 || v3.v[1] >= 2.0 && (float)((float)((float)((float)(v27 - ent->s.lerp.u.actor.pupilDiameter) * 0.0027777778) - *(float *)&_XMM3) * 360.0) == 0.0 )
    {
      vehicle->turret.turretMoving = 1;
    }
    else if ( vehicle->turret.turretMoving )
    {
      GScr_Notify(ent, scr_const.turret_rotate_stopped, 0);
      vehicle->turret.turretMoving = 0;
    }
    if ( v3.v[0] >= v10 || v3.v[1] >= v10 )
    {
      GScr_Notify(ent, scr_const.turret_not_on_target, 0);
    }
    else
    {
      GScr_Notify(ent, scr_const.turret_on_target, 0);
      if ( v5 )
      {
        v35 = PhysicsQuery_LegacySightTrace(PHYSICS_WORLD_ID_FIRST, &outPos, &end, &bounds_origin, ent->s.number, v5->s.number, 2049);
        v36 = ent;
        if ( v35 )
          turret_no_vis = scr_const.turret_no_vis;
        else
          turret_no_vis = scr_const.turret_on_vistarget;
        goto LABEL_45;
      }
    }
    turret_no_vis = scr_const.turret_no_vis;
    v36 = ent;
LABEL_45:
    GScr_Notify(v36, turret_no_vis, 0);
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
  gentity_s *ent; 
  const VehicleDef *ServerDef; 
  double DeltaTime; 
  float joltTime; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  VehicleType type; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float bodyRollVel; 
  float v16; 
  float v17; 
  float v20; 
  float maxBodyPitch; 
  float v23; 
  float maxBodyRoll; 
  float targetRoll; 
  float targetPitch; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2901, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2902, ASSERT_TYPE_ASSERT, "( veh->ent )", (const char *)&queryFormat, "veh->ent") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
  {
    ent = veh->ent;
    ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
    DeltaTime = G_Vehicle_GetDeltaTime();
    joltTime = veh->joltTime;
    v6 = 0.0;
    v7 = *(float *)&DeltaTime;
    if ( joltTime > 0.0 )
    {
      v8 = sinf_0(veh->joltWave * 0.017453292);
      ent->s.lerp.u.turret.gunAngles.v[2] = (float)(v8 * joltTime) * veh->joltDir.v[0];
      ent->s.lerp.u.actor.impactVector.v[0] = (float)(v8 * joltTime) * veh->joltDir.v[1];
      v9 = veh->joltTime - v7;
      veh->joltWave = (float)(v7 * 720.0) + veh->joltWave;
      veh->joltTime = v9;
    }
    type = ServerDef->type;
    if ( type == VEH_BOAT )
    {
      G_Vehicle_BoatGetRockingAngles(veh, &targetPitch, &targetRoll);
      type = ServerDef->type;
      v11 = targetRoll;
      v12 = targetPitch;
    }
    else
    {
      v12 = 0.0;
      v11 = 0.0;
    }
    if ( type == VEH_HELICOPTER || type == VEH_PLANE )
      goto LABEL_31;
    v13 = veh->phys.bodyVel.v[0];
    if ( v13 <= 0.0 )
    {
      v14 = veh->phys.bodyVel.v[1];
    }
    else
    {
      if ( type != VEH_BOAT || veh->phys.bodyAccel.v[0] > 0.0 )
        v6 = veh->phys.bodyAccel.v[0] * ServerDef->fakeBodyAccelPitch;
      v14 = veh->phys.bodyVel.v[1];
      v6 = (float)(COERCE_FLOAT(LODWORD(v14) & _xmm) * ServerDef->fakeBodySideVelPitch) + (float)((float)(v13 * ServerDef->fakeBodyVelPitch) + v6);
    }
    bodyRollVel = veh->phys.bodyRollVel;
    v16 = (float)((float)(veh->phys.bodyAccel.v[1] * ServerDef->fakeBodyAccelRoll) + (float)(v14 * ServerDef->fakeBodyVelRoll)) - (float)((float)((float)(ent->s.lerp.u.actor.impactVector.v[0] - v11) * ServerDef->fakeBodyRollStrength) + (float)(bodyRollVel * ServerDef->fakeBodyRollDampening));
    v17 = (float)((float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(ent->s.lerp.u.turret.gunAngles.v[2] - v12) * ServerDef->fakeBodyPitchStrength) ^ _xmm) - (float)(veh->phys.bodyPitchVel * ServerDef->fakeBodyPitchDampening)) - v6) * v7) + veh->phys.bodyPitchVel;
    veh->phys.bodyPitchVel = v17;
    veh->phys.bodyRollVel = (float)(v16 * v7) + bodyRollVel;
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    v20 = (float)((float)((float)((float)(v17 * v7) + ent->s.lerp.u.turret.gunAngles.v[2]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
    ent->s.lerp.u.turret.gunAngles.v[2] = v20;
    __asm { vroundss xmm3, xmm7, xmm1, 1 }
    ent->s.lerp.u.actor.impactVector.v[0] = (float)((float)((float)((float)(v7 * veh->phys.bodyRollVel) + ent->s.lerp.u.actor.impactVector.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    maxBodyPitch = ServerDef->maxBodyPitch;
    if ( v20 <= maxBodyPitch )
    {
      if ( v20 >= COERCE_FLOAT(LODWORD(maxBodyPitch) ^ _xmm) )
        goto LABEL_26;
      ent->s.lerp.u.turret.gunAngles.v[2] = COERCE_FLOAT(LODWORD(maxBodyPitch) ^ _xmm);
    }
    else
    {
      ent->s.lerp.u.turret.gunAngles.v[2] = maxBodyPitch;
    }
    veh->phys.bodyPitchVel = 0.0;
LABEL_26:
    v23 = ent->s.lerp.u.actor.impactVector.v[0];
    maxBodyRoll = ServerDef->maxBodyRoll;
    if ( v23 <= maxBodyRoll )
    {
      if ( v23 >= COERCE_FLOAT(LODWORD(maxBodyRoll) ^ _xmm) )
        goto LABEL_31;
      ent->s.lerp.u.actor.impactVector.v[0] = COERCE_FLOAT(LODWORD(maxBodyRoll) ^ _xmm);
    }
    else
    {
      ent->s.lerp.u.actor.impactVector.v[0] = maxBodyRoll;
    }
    veh->phys.bodyRollVel = 0.0;
LABEL_31:
    targetRoll = ent->s.lerp.u.turret.gunAngles.v[2];
    if ( (LODWORD(targetRoll) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2984, ASSERT_TYPE_SANITY, "( !IS_NAN( lerp->bodyPitch ) )", (const char *)&queryFormat, "!IS_NAN( lerp->bodyPitch )") )
      __debugbreak();
    targetRoll = ent->s.lerp.u.actor.impactVector.v[0];
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
  gentity_s *v6; 
  const dvar_t *v7; 
  float value; 
  int number; 
  float v10; 
  unsigned __int8 *priorityMap; 
  __int64 v12; 
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
    LODWORD(v12) = 2048;
    LODWORD(priorityMap) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, v12) )
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
      LODWORD(v12) = 2048;
      LODWORD(priorityMap) = vehicleEntity->s.otherEntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6801, ASSERT_TYPE_ASSERT, "(unsigned)( groundEntityIndex ) < (unsigned)( ( 2048 ) )", "groundEntityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", priorityMap, v12) )
        __debugbreak();
    }
    v6 = &g_entities[otherEntityNum];
    if ( G_IsEntityInUse(otherEntityNum) && v6->s.eType == ET_SCRIPTMOVER )
    {
      G_Vehicle_GetVehicleViewOrigin(playerState, &outViewOrigin);
      AnglesToAxis(&playerState->viewangles, &axis);
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
      {
        v7 = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
        if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        value = v7->current.value;
      }
      else
      {
        value = FLOAT_8192_0;
      }
      number = vehicleEntity->s.number;
      end.v[0] = (float)(value * axis.m[0].v[0]) + outViewOrigin.v[0];
      end.v[1] = (float)(value * axis.m[0].v[1]) + outViewOrigin.v[1];
      end.v[2] = (float)(value * axis.m[0].v[2]) + outViewOrigin.v[2];
      G_Main_LocationalTrace(&results, &outViewOrigin, &end, number, 41969969, NULL);
      if ( results.startsolid || results.allsolid )
      {
        end = outViewOrigin;
      }
      else
      {
        end.v[0] = (float)((float)(end.v[0] - outViewOrigin.v[0]) * results.fraction) + outViewOrigin.v[0];
        end.v[1] = (float)((float)(end.v[1] - outViewOrigin.v[1]) * results.fraction) + outViewOrigin.v[1];
        end.v[2] = (float)((float)(end.v[2] - outViewOrigin.v[2]) * results.fraction) + outViewOrigin.v[2];
      }
      v6->s.lerp.pos.trType = TR_INTERPOLATE;
      *(_QWORD *)&v6->s.lerp.pos.trTime = 0i64;
      *(_QWORD *)v6->s.lerp.pos.trDelta.v = 0i64;
      v6->s.lerp.pos.trDelta.v[2] = 0.0;
      Trajectory_SetTrBase(&v6->s.lerp.pos, &end);
      v10 = end.v[1];
      v6->r.currentOrigin.v[0] = end.v[0];
      v6->r.currentOrigin.v[2] = end.v[2];
      v6->r.currentOrigin.v[1] = v10;
    }
  }
}

/*
==============
G_Vehicle_UpdatePathFollowMove_Physics
==============
*/
void G_Vehicle_UpdatePathFollowMove_Physics(Vehicle *veh)
{
  __int128 v1; 
  __int128 v2; 
  GVehicles *VehicleSystem; 
  float v5; 
  float manualSpeed; 
  float v7; 
  double InputControl; 
  float v9; 
  double v10; 
  float v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  unsigned int physicsVehicle; 
  double RearAxleOffset; 
  const dvar_t *v20; 
  const dvar_t *v21; 
  vec3_t velocity; 
  __int128 v23; 
  __int128 v24; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7680, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(veh->physicsVehicle) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7681, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( veh->physicsVehicle ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( veh->physicsVehicle )") )
    __debugbreak();
  if ( veh->drivingState != VEH_DRIVE_PATH_FOLLOW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 7682, ASSERT_TYPE_ASSERT, "(veh->drivingState == VEH_DRIVE_PATH_FOLLOW)", (const char *)&queryFormat, "veh->drivingState == VEH_DRIVE_PATH_FOLLOW") )
    __debugbreak();
  if ( veh->pathPos.nodeIdx < 0 || G_VehiclePath_IsEndOfPath(&veh->pathPos) )
  {
    G_Vehicle_UpdateDefaultMove_Physics(veh);
    return;
  }
  v24 = v1;
  v23 = v2;
  VehicleSystem = GVehicles::GetVehicleSystem();
  if ( GVehicles::PhysicsIsWrecked(VehicleSystem, veh->physicsVehicle) )
  {
    veh->manualMode = VEH_MANUAL_OFF;
    v5 = 0.0;
LABEL_28:
    v11 = 0.0;
    goto LABEL_29;
  }
  if ( veh->manualMode == VEH_MANUAL_ON )
  {
    manualSpeed = veh->manualSpeed;
  }
  else
  {
    manualSpeed = veh->pathPos.speed;
    veh->manualMode = VEH_MANUAL_OFF;
  }
  GVehicles::PhysicsGetLocalVelocity(VehicleSystem, veh->physicsVehicle, &velocity);
  v7 = velocity.v[0];
  InputControl = GVehicles::PhysicsGetInputControl(VehicleSystem, veh->physicsVehicle, 0);
  v9 = *(float *)&InputControl;
  v10 = GVehicles::PhysicsGetInputControl(VehicleSystem, veh->physicsVehicle, 1u);
  if ( veh->transMode == VEH_TRANS_REVERSE )
  {
    if ( COERCE_FLOAT(LODWORD(v7) ^ _xmm) >= manualSpeed )
    {
      if ( v9 <= 0.0 )
      {
        v14 = I_fclamp(*(float *)&v10 + 0.1, 0.0, 1.0);
        v11 = *(float *)&v14;
        v5 = 0.0;
      }
      else
      {
        v11 = 0.0;
        v13 = I_fclamp(v9 - 0.1, 0.0, 1.0);
        v5 = *(float *)&v13;
      }
    }
    else
    {
      v11 = 0.0;
      v12 = I_fclamp(v9 + 0.1, 0.0, 1.0);
      v5 = *(float *)&v12;
    }
    goto LABEL_29;
  }
  if ( v7 >= manualSpeed )
  {
    if ( v9 <= 0.0 )
    {
      v17 = I_fclamp(*(float *)&v10 + 0.1, 0.0, 1.0);
      v5 = *(float *)&v17;
      goto LABEL_28;
    }
    v5 = 0.0;
    v16 = I_fclamp(v9 - 0.1, 0.0, 1.0);
    v11 = *(float *)&v16;
  }
  else
  {
    v5 = 0.0;
    v15 = I_fclamp(v9 + 0.1, 0.0, 1.0);
    v11 = *(float *)&v15;
  }
LABEL_29:
  if ( veh->pathDir == VEH_PATH_REVERSE )
  {
    physicsVehicle = veh->physicsVehicle;
    if ( veh->transMode == VEH_TRANS_REVERSE )
    {
      RearAxleOffset = GVehicles::PhysicsGetRearAxleOffset(VehicleSystem, physicsVehicle);
      LODWORD(RearAxleOffset) ^= _xmm;
    }
    else
    {
      RearAxleOffset = GVehicles::PhysicsGetFrontAxleOffset(VehicleSystem, physicsVehicle);
    }
  }
  else
  {
    v20 = DCONST_DVARFLT_bg_vehiclePathLookAheadOffset;
    if ( !DCONST_DVARFLT_bg_vehiclePathLookAheadOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehiclePathLookAheadOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    LODWORD(RearAxleOffset) = v20->current.integer;
  }
  G_VehiclePath_UpdatePathPosLookAhead(&veh->pathPos, *(float *)&RearAxleOffset, veh->pathDir);
  G_Vehicle_MoveToLookAhead_Physics(veh, &veh->pathPos.lookPos, 0.0, v11, v5);
  v21 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( v21->current.integer )
  {
    G_Vehicle_DebugBox(&veh->pathPos.lookPos, 8.0, 0.0, 1.0, 1.0);
    G_Vehicle_DebugBox(&veh->pathPos.origin, 8.0, 1.0, 0.0, 1.0);
  }
  G_VehiclePath_DrawCurrentPath();
}

/*
==============
G_Vehicle_UpdatePathPosition
==============
*/
_BOOL8 G_Vehicle_UpdatePathPosition(Vehicle *veh)
{
  gentity_s *ent; 
  const VehicleDef *ServerDef; 
  __m256i v4; 
  const VehicleDef *v5; 
  __int64 v6; 
  float speed; 
  float v8; 
  float manualTime; 
  bool updated; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v20; 
  float v22; 
  double v24; 
  double v25; 
  double v26; 
  VehicleType type; 
  VehiclePathPos vpp; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3441, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = veh->ent;
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3444, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  v4 = *(__m256i *)&veh->pathPos.switchNode[0].angles.z;
  v5 = ServerDef;
  v6 = *(_QWORD *)&veh->pathPos.switchNode[1].length;
  *(__m256i *)&vpp.nodeIdx = *(__m256i *)&veh->pathPos.nodeIdx;
  *(__m256i *)vpp.angles.v = *(__m256i *)veh->pathPos.angles.v;
  *(__m256i *)&vpp.driftOffset.z = *(__m256i *)&veh->pathPos.driftOffset.z;
  *(__m256i *)vpp.switchNode[0].origin.v = *(__m256i *)veh->pathPos.switchNode[0].origin.v;
  *(__m256i *)&vpp.switchNode[0].angles.z = v4;
  *(__m256i *)&vpp.switchNode[1].index = *(__m256i *)&veh->pathPos.switchNode[1].index;
  *(_OWORD *)&vpp.switchNode[1].dir.z = *(_OWORD *)&veh->pathPos.switchNode[1].dir.z;
  speed = veh->pathPos.speed;
  *(_QWORD *)&vpp.switchNode[1].length = v6;
  *(_DWORD *)&vpp.switchNode[1].notifyIdx = *(_DWORD *)&veh->pathPos.switchNode[1].notifyIdx;
  if ( speed <= 0.0 )
  {
    veh->manualTime = 0.0;
  }
  else
  {
    v8 = (float)(veh->pathSpeed / speed) + veh->manualTime;
    veh->manualTime = v8;
    if ( v8 >= 1.0 )
    {
      do
      {
        G_VehiclePath_UpdatePathPos(&vpp, veh->pathDir);
        manualTime = veh->manualTime;
        veh->manualTime = manualTime - 1.0;
      }
      while ( (float)(manualTime - 1.0) >= 1.0 );
    }
  }
  updated = G_VehiclePath_UpdatePathPosNotifies(&veh->pathPos, &vpp, ent->s.number, veh->waitNode, VEH_PATH_NOTIFY_SCRIPT, veh->pathDir);
  v11 = *(_QWORD *)&vpp.switchNode[1].length;
  *(__m256i *)&veh->pathPos.nodeIdx = *(__m256i *)&vpp.nodeIdx;
  *(__m256i *)veh->pathPos.angles.v = *(__m256i *)vpp.angles.v;
  *(__m256i *)&veh->pathPos.driftOffset.z = *(__m256i *)&vpp.driftOffset.z;
  *(__m256i *)veh->pathPos.switchNode[0].origin.v = *(__m256i *)vpp.switchNode[0].origin.v;
  *(__m256i *)&veh->pathPos.switchNode[0].angles.z = *(__m256i *)&vpp.switchNode[0].angles.z;
  *(__m256i *)&veh->pathPos.switchNode[1].index = *(__m256i *)&vpp.switchNode[1].index;
  *(_OWORD *)&veh->pathPos.switchNode[1].dir.z = *(_OWORD *)&vpp.switchNode[1].dir.z;
  v12 = veh->manualTime;
  *(_QWORD *)&veh->pathPos.switchNode[1].length = v11;
  *(_DWORD *)&veh->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&vpp.switchNode[1].notifyIdx;
  if ( v12 > 0.0 )
  {
    if ( v12 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3468, ASSERT_TYPE_ASSERT, "( veh->manualTime < 1.0f )", (const char *)&queryFormat, "veh->manualTime < 1.0f") )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&vpp, veh->pathDir);
  }
  if ( G_VehiclePath_IsEndOfPath(&veh->pathPos) )
    veh->pathSpeed = 0.0;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v13 = _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration).m128_f32[0] * 0.001;
  v14 = (float)(v13 * veh->driftVelocity.v[0]) + veh->pathPos.driftOffset.v[0];
  veh->pathPos.driftOffset.v[0] = v14;
  veh->pathPos.driftOffset.v[1] = (float)(v13 * veh->driftVelocity.v[1]) + veh->pathPos.driftOffset.v[1];
  v15 = vpp.origin.v[0];
  veh->pathPos.driftOffset.v[2] = (float)(v13 * veh->driftVelocity.v[2]) + veh->pathPos.driftOffset.v[2];
  v16 = vpp.origin.v[1];
  veh->phys.origin.v[0] = (float)((float)((float)(v15 - veh->pathPos.origin.v[0]) * veh->manualTime) + veh->pathPos.origin.v[0]) + v14;
  v17 = vpp.origin.v[2];
  veh->phys.origin.v[1] = (float)((float)((float)(v16 - veh->pathPos.origin.v[1]) * veh->manualTime) + veh->pathPos.origin.v[1]) + veh->pathPos.driftOffset.v[1];
  veh->phys.origin.v[2] = (float)((float)((float)(v17 - veh->pathPos.origin.v[2]) * veh->manualTime) + veh->pathPos.origin.v[2]) + veh->pathPos.driftOffset.v[2];
  if ( v5->type == VEH_TREADED && veh->rotateToYawMode )
  {
    G_Vehicle_UpdateRotateToYaw(veh, v5);
  }
  else
  {
    _XMM9 = 0i64;
    __asm { vroundss xmm2, xmm9, xmm1, 1 }
    v20 = vpp.angles.v[1];
    veh->phys.angles.v[0] = (float)((float)((float)((float)((float)(vpp.angles.v[0] - veh->pathPos.angles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * veh->manualTime) + veh->pathPos.angles.v[0];
    __asm { vroundss xmm3, xmm9, xmm2, 1 }
    *(float *)&_XMM3 = (float)((float)((float)((float)((float)(v20 - veh->pathPos.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * veh->manualTime) + veh->pathPos.angles.v[1];
    v22 = vpp.angles.v[2];
    veh->phys.angles.v[1] = *(float *)&_XMM3;
    __asm { vroundss xmm3, xmm9, xmm2, 1 }
    veh->phys.angles.v[2] = (float)((float)((float)((float)((float)(v22 - veh->pathPos.angles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * veh->manualTime) + veh->pathPos.angles.v[2];
    if ( veh->transMode == VEH_TRANS_REVERSE )
      veh->phys.angles.v[1] = veh->phys.angles.v[1] + 180.0;
    v24 = DiffTrackAngle(veh->phys.angles.v[0], veh->phys.prevAngles.v[0], 6.0, v13);
    veh->phys.angles.v[0] = *(float *)&v24;
    v25 = DiffTrackAngle(veh->phys.angles.v[1], veh->phys.prevAngles.v[1], 4.0, v13);
    veh->phys.angles.v[1] = *(float *)&v25;
    v26 = DiffTrackAngle(veh->phys.angles.v[2], veh->phys.prevAngles.v[2], 6.0, v13);
    veh->phys.angles.v[2] = *(float *)&v26;
  }
  type = v5->type;
  if ( (type == VEH_WHEELS_4 || type == VEH_TREADED) && !BGVehicles::PhysicsIsValid(veh->physicsVehicle) )
    G_Vehicle_GroundPlant(ent, &veh->phys, 1);
  return updated;
}

/*
==============
G_Vehicle_UpdatePathScript
==============
*/
void G_Vehicle_UpdatePathScript(const Vehicle *veh, float prevSpeed, bool waitNodeHit)
{
  gentity_s *ent; 
  float waitSpeed; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3511, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ent = veh->ent;
  if ( !veh->ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3514, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( waitNodeHit && veh->waitNode > -1 )
    GScr_Notify(ent, scr_const.reached_wait_node, 0);
  if ( G_VehiclePath_IsEndOfPath(&veh->pathPos) )
    GScr_Notify(ent, scr_const.reached_end_node, 0);
  waitSpeed = veh->waitSpeed;
  if ( waitSpeed >= 0.0 )
  {
    if ( prevSpeed <= waitSpeed )
    {
      if ( waitSpeed <= veh->pathSpeed )
      {
LABEL_17:
        GScr_Notify(ent, scr_const.reached_wait_speed, 0);
        return;
      }
      if ( prevSpeed < waitSpeed )
        return;
    }
    if ( waitSpeed < veh->pathSpeed )
      return;
    goto LABEL_17;
  }
}

/*
==============
G_Vehicle_UpdatePathSpeed
==============
*/
void G_Vehicle_UpdatePathSpeed(Vehicle *veh)
{
  VehicleManualMode manualMode; 
  float speed; 
  bool v4; 
  double DeltaTime; 
  float manualAccel; 
  double v7; 
  bool v8; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3415, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( veh->pathPos.speed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3416, ASSERT_TYPE_ASSERT, "( veh->pathPos.speed >= 0.0f )", (const char *)&queryFormat, "veh->pathPos.speed >= 0.0f") )
    __debugbreak();
  if ( veh->manualSpeed < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3417, ASSERT_TYPE_ASSERT, "( veh->manualSpeed >= 0.0f )", (const char *)&queryFormat, "veh->manualSpeed >= 0.0f") )
    __debugbreak();
  manualMode = veh->manualMode;
  if ( manualMode )
  {
    if ( manualMode == VEH_MANUAL_TRANS )
      speed = veh->pathPos.speed;
    else
      speed = veh->manualSpeed;
    v4 = speed > veh->pathSpeed;
    DeltaTime = G_Vehicle_GetDeltaTime();
    if ( v4 )
      manualAccel = veh->manualAccel;
    else
      manualAccel = veh->manualDecel;
    v7 = Vehicle_AccelerateSpeed(veh->pathSpeed, speed, manualAccel, *(float *)&DeltaTime);
    v8 = veh->manualMode == VEH_MANUAL_TRANS;
    veh->pathSpeed = *(float *)&v7;
    if ( v8 && *(float *)&v7 == speed )
      veh->manualMode = VEH_MANUAL_OFF;
  }
  else
  {
    veh->pathSpeed = veh->pathPos.speed;
  }
}

/*
==============
G_Vehicle_UpdatePhysics
==============
*/
void G_Vehicle_UpdatePhysics(gentity_s *pSelf, gentity_s *player)
{
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  GVehicles *v5; 
  float v6; 
  VehicleType type; 
  double v8; 
  bool v9; 
  __m256i v10; 
  __int64 v11; 
  VehiclePathDir pathDir; 
  vec3_t *p_origin; 
  vec3_t pointWS; 
  tmat43_t<vec3_t> transform; 
  VehiclePathPos prevVpp; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5182, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !pSelf->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5183, ASSERT_TYPE_ASSERT, "( pSelf->vehicle )", (const char *)&queryFormat, "pSelf->vehicle") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
    __debugbreak();
  v5 = GVehicles::ms_gVehiclesSystem;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  GVehicles::PhysicsPostThinkUpdate(v5, vehicle->physicsVehicle, (float)level.frameDuration * 0.001);
  if ( vehicle->ent->scripted )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5215, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
  }
  else
  {
    GVehicles::PhysicsGetChassisTransform(v5, vehicle->physicsVehicle, &transform);
    v6 = transform.m[3].v[1];
    vehicle->phys.origin.v[0] = transform.m[3].v[0];
    vehicle->phys.origin.v[2] = transform.m[3].v[2];
    vehicle->phys.origin.v[1] = v6;
    AxisToAngles((const tmat33_t<vec3_t> *)&transform, &vehicle->phys.angles);
    GVehicles::PhysicsGetLinearVelocity(v5, vehicle->physicsVehicle, &vehicle->phys.vel);
    GVehicles::PhysicsGetLocalVelocity(v5, vehicle->physicsVehicle, &vehicle->phys.bodyVel);
    GVehicles::PhysicsGetLocalAcceleration(v5, vehicle->physicsVehicle, &vehicle->phys.bodyAccel);
    type = ServerDef->type;
    if ( type == VEH_TREADED )
    {
      if ( !ServerDef->camRelativeControl )
        goto LABEL_23;
      AnglesSubtract(&vehicle->phys.angles, &vehicle->phys.prevAngles, &vehicle->phys.rotVel);
      type = ServerDef->type;
    }
    if ( type == VEH_BOAT && vehicle->drivingState == VEH_DRIVE_PATH_CONSTRAINED )
      vehicle->phys.bodyVel.v[1] = COERCE_FLOAT(LODWORD(vehicle->phys.bodyVel.v[1]) ^ _xmm);
  }
LABEL_23:
  vehicle->speed = COERCE_FLOAT(LODWORD(vehicle->phys.bodyVel.v[0]) & _xmm);
  if ( ServerDef->collisionSnd.name && vehicle->impactSpeed > 0.0 )
  {
    if ( ServerDef->collisionBlendSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5227, ASSERT_TYPE_ASSERT, "( vehDef->collisionBlendSpeed > 0.0f )", (const char *)&queryFormat, "vehDef->collisionBlendSpeed > 0.0f") )
      __debugbreak();
    v8 = I_fclamp(vehicle->impactSpeed / ServerDef->collisionBlendSpeed, 0.0, 1.0);
    G_Utils_AddEvent(pSelf, 0xA6u, (int)(float)(*(float *)&v8 * 255.0));
  }
  if ( GVehicles::PhysicsIsInAir(v5, vehicle->physicsVehicle) )
    pSelf->s.lerp.u.anonymous.data[1] |= 2u;
  if ( vehicle->drivingState == VEH_DRIVE_PATH_FOLLOW && !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
  {
    v9 = vehicle->pathDir == VEH_PATH_REVERSE;
    v10 = *(__m256i *)&vehicle->pathPos.switchNode[0].angles.z;
    v11 = *(_QWORD *)&vehicle->pathPos.switchNode[1].length;
    *(__m256i *)&prevVpp.nodeIdx = *(__m256i *)&vehicle->pathPos.nodeIdx;
    *(__m256i *)prevVpp.angles.v = *(__m256i *)vehicle->pathPos.angles.v;
    *(__m256i *)&prevVpp.driftOffset.z = *(__m256i *)&vehicle->pathPos.driftOffset.z;
    *(__m256i *)prevVpp.switchNode[0].origin.v = *(__m256i *)vehicle->pathPos.switchNode[0].origin.v;
    *(__m256i *)&prevVpp.switchNode[0].angles.z = v10;
    *(__m256i *)&prevVpp.switchNode[1].index = *(__m256i *)&vehicle->pathPos.switchNode[1].index;
    *(_OWORD *)&prevVpp.switchNode[1].dir.z = *(_OWORD *)&vehicle->pathPos.switchNode[1].dir.z;
    *(_QWORD *)&prevVpp.switchNode[1].length = v11;
    *(_DWORD *)&prevVpp.switchNode[1].notifyIdx = *(_DWORD *)&vehicle->pathPos.switchNode[1].notifyIdx;
    if ( v9 )
    {
      pathDir = VEH_PATH_REVERSE;
      p_origin = &vehicle->phys.origin;
    }
    else
    {
      GVehicles::PhysicsGetSteeringPointWS(v5, vehicle->physicsVehicle, &pointWS);
      pathDir = vehicle->pathDir;
      p_origin = &pointWS;
    }
    G_VehiclePath_UpdatePathPosPhysics(&vehicle->pathPos, p_origin, &vehicle->phys.angles, pathDir);
    G_VehiclePath_UpdatePathPosNotifies(&prevVpp, &vehicle->pathPos, pSelf->s.number, -1, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
    if ( G_VehiclePath_IsEndOfPath(&vehicle->pathPos) )
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
  Vehicle *vehicle; 
  float v3; 
  float v4; 
  tmat33_t<vec3_t> axis; 
  vec3_t out; 
  tmat43_t<vec3_t> parentAxis; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 5279, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  vehicle = pSelf->vehicle;
  if ( pSelf->tagInfo )
  {
    G_CalcTagParentAxis(pSelf, &parentAxis);
    MatrixTransformVector(&pSelf->tagInfo->axis.m[3], (const tmat33_t<vec3_t> *)&parentAxis, &out);
    MatrixMultiply((const tmat33_t<vec3_t> *)&parentAxis, (const tmat33_t<vec3_t> *)&pSelf->tagInfo->axis, &axis);
    v3 = out.v[0] + parentAxis.m[3].v[0];
    v4 = out.v[1] + parentAxis.m[3].v[1];
    out.v[2] = out.v[2] + parentAxis.m[3].v[2];
    vehicle->phys.origin.v[2] = out.v[2];
    out.v[0] = v3;
    out.v[1] = v4;
    vehicle->phys.origin.v[0] = v3;
    vehicle->phys.origin.v[1] = v4;
    AxisToAngles(&axis, &vehicle->phys.angles);
    *(_QWORD *)vehicle->phys.vel.v = 0i64;
    vehicle->phys.vel.v[2] = 0.0;
    pSelf->r.currentOrigin.v[0] = vehicle->phys.origin.v[0];
    pSelf->r.currentOrigin.v[1] = vehicle->phys.origin.v[1];
    pSelf->r.currentOrigin.v[2] = vehicle->phys.origin.v[2];
    pSelf->r.currentAngles.v[0] = vehicle->phys.angles.v[0];
    pSelf->r.currentAngles.v[1] = vehicle->phys.angles.v[1];
    pSelf->r.currentAngles.v[2] = vehicle->phys.angles.v[2];
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
  Vehicle *vehicle; 
  GVehicles *VehicleSystem; 
  __int64 v5; 
  const gentity_s *v6; 
  __int64 v7; 
  bool v8; 
  float fraction; 
  int passEntityNum; 
  vec3_t end; 
  vec3_t start; 
  int v13[4]; 
  vec3_t outPos; 
  vec3_t v15; 
  trace_t results; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3082, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( BG_GetWeaponForEntity(Instance, &ent->s)->weaponIdx )
  {
    vehicle = ent->vehicle;
    if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3089, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
      __debugbreak();
    if ( vehicle->boneIndex.flash[0] >= 0 )
    {
      if ( vehicle->boneIndex.barrel >= 0 )
      {
        G_Vehicle_GetServerDef(vehicle->defIndex);
        VehicleSystem = GVehicles::GetVehicleSystem();
        v5 = (__int64)VehicleSystem->GetVehicleOwner(VehicleSystem, ent);
        v6 = (const gentity_s *)v5;
        if ( v5 )
        {
          v7 = *(_QWORD *)(v5 + 336);
          if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3111, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
            __debugbreak();
          if ( vehicle->turret.fireTime > 0 )
          {
            vehicle->turret.fireTime -= G_Level_GetFrameDuration();
          }
          else if ( (*(_BYTE *)(v7 + 21424) & 1) != 0 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v7 + 20), ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v7 + 20), ACTIVE, 0xFu) )
          {
            G_Vehicle_NotifyTurretFire(vehicle);
          }
          v8 = vehicle->boneIndex.flash[0] < 0;
          vehicle->hasTarget = 1;
          if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3131, ASSERT_TYPE_ASSERT, "( veh->boneIndex.flash[VEH_TURRET_BARREL_TAG_FLASH] >= 0 )", (const char *)&queryFormat, "veh->boneIndex.flash[VEH_TURRET_BARREL_TAG_FLASH] >= 0") )
            __debugbreak();
          if ( vehicle->boneIndex.barrel < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3132, ASSERT_TYPE_ASSERT, "( veh->boneIndex.barrel >= 0 )", (const char *)&queryFormat, "veh->boneIndex.barrel >= 0") )
            __debugbreak();
          G_Utils_DObjGetWorldBoneIndexPos(ent, vehicle->boneIndex.flash[0], &outPos);
          G_Utils_DObjGetWorldBoneIndexPos(ent, vehicle->boneIndex.barrel, &v15);
          VehicleSystem->GetVehicleTurretTrace(VehicleSystem, ent, v6, &start, (vec3_t *)v13, &passEntityNum);
          end.v[1] = (float)(10240.0 * *(float *)&v13[1]) + start.v[1];
          end.v[2] = (float)(10240.0 * *(float *)&v13[2]) + start.v[2];
          end.v[0] = (float)(10240.0 * *(float *)v13) + start.v[0];
          vehicle->targetOrigin = end;
          G_Main_LocationalTrace(&results, &start, &end, passEntityNum, 41968017, NULL);
          fraction = results.fraction;
          if ( results.fraction < 1.0 )
          {
            vehicle->targetOrigin.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
            vehicle->targetOrigin.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
            vehicle->targetOrigin.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
          }
          if ( !G_Main_TraceCapsuleComplete(&v15, &outPos, &bounds_origin, ent->s.number, 2047, ent->clipmask) )
            vehicle->turret.barrelBlocked = 1;
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
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  char v8; 
  const VehicleDef *ServerDef; 
  gentity_s *ent; 
  vehicle_physic_t *p_phys; 
  const VehicleDef *v12; 
  gentity_s *v13; 
  __int64 p_cmd; 
  const dvar_t *v15; 
  int integer; 
  char v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v25; 
  float v26; 
  float v27; 
  vec3_t *vehicle; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  __int128 v36; 
  int v40; 
  VehicleType type; 
  const dvar_t *v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  char move[8]; 
  vec3_t outRotAccel; 
  vec4_t color; 
  tmat43_t<vec3_t> axis; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 

  v8 = 0;
  v58 = v1;
  v57 = v2;
  v53 = v6;
  *(_WORD *)move = 0;
  move[2] = 0;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3193, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(veh->defIndex);
  ent = veh->ent;
  p_phys = &veh->phys;
  *(_QWORD *)outRotAccel.v = ServerDef;
  v12 = ServerDef;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3199, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( EntHandle::isDefined(&ent->r.ownerNum) )
  {
    v13 = EntHandle::ent(&ent->r.ownerNum);
    if ( !v13->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3205, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&v13->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
    if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v13->client->ps.pm_flags, ACTIVE, 0x10u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v13->client->ps.pm_flags, ACTIVE, 0xFu) )
    {
      p_cmd = (__int64)&v13->client->sess.cmd;
      if ( v12->type != VEH_BOAT )
      {
        move[0] = v13->client->sess.cmd.forwardmove;
        move[1] = *(_BYTE *)(p_cmd + 157);
        v8 = (*(_DWORD *)p_cmd & 0x200) != 0i64 ? 0x7F : 0;
        move[2] = v8;
        goto LABEL_29;
      }
      if ( v13->client == (gclient_s *)-21424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3156, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
        __debugbreak();
      v15 = DVARINT_vehBoatControls;
      if ( !DVARINT_vehBoatControls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehBoatControls") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      integer = v15->current.integer;
      if ( integer )
      {
        if ( integer != 1 )
        {
LABEL_28:
          v12 = *(const VehicleDef **)outRotAccel.v;
LABEL_29:
          if ( v8 > 0 && !v12->camRelativeControl )
            GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&v13->client->ps.eFlags, GameModeFlagValues::ms_spValue, 0x1Cu);
          goto LABEL_32;
        }
        if ( (*(_QWORD *)p_cmd & 0x200i64) != 0 )
        {
          move[0] = -127;
LABEL_27:
          move[1] = *(_BYTE *)(p_cmd + 157);
          goto LABEL_28;
        }
        v17 = 0;
        if ( (*(_QWORD *)p_cmd & 1) != 0 )
          v17 = 127;
      }
      else
      {
        v17 = *(_BYTE *)(p_cmd + 156);
      }
      move[0] = v17;
      goto LABEL_27;
    }
  }
LABEL_32:
  G_Vehicle_CalcAccel(ent, move, &veh->phys.bodyAccel, &outRotAccel);
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  v18 = _mm_cvtepi32_ps((__m128i)(unsigned int)level.frameDuration).m128_f32[0];
  v19 = v18 * 0.001;
  v20 = (float)(v18 * 0.001) * outRotAccel.v[1];
  veh->phys.rotVel.v[0] = (float)((float)(v18 * 0.001) * outRotAccel.v[0]) + veh->phys.rotVel.v[0];
  v21 = v20 + veh->phys.rotVel.v[1];
  v22 = (float)(v18 * 0.001) * outRotAccel.v[2];
  veh->phys.rotVel.v[1] = v21;
  veh->phys.rotVel.v[2] = v22 + veh->phys.rotVel.v[2];
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  veh->phys.angles.v[1] = (float)((float)((float)((float)((float)(v18 * veh->phys.rotVel.v[1]) * 0.001) + veh->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  veh->phys.angles.v[0] = 0.0;
  veh->phys.angles.v[2] = 0.0;
  AnglesToAxis(&veh->phys.angles, (tmat33_t<vec3_t> *)&axis);
  axis.m[3].v[0] = 0.0;
  axis.m[3].v[1] = 0.0;
  axis.m[3].v[2] = 0.0;
  MatrixTransformVector(&veh->phys.bodyAccel, (const tmat33_t<vec3_t> *)&axis, &veh->phys.accel);
  v25 = (float)((float)(v18 * veh->phys.accel.v[0]) * 0.001) + veh->phys.vel.v[0];
  veh->phys.vel.v[0] = v25;
  v26 = (float)((float)(v18 * veh->phys.accel.v[1]) * 0.001) + veh->phys.vel.v[1];
  veh->phys.vel.v[1] = v26;
  v27 = (float)((float)(v18 * veh->phys.accel.v[2]) * 0.001) + veh->phys.vel.v[2];
  veh->phys.vel.v[2] = v27;
  if ( v25 != 0.0 || v26 != 0.0 || v27 != 0.0 )
  {
    G_Vehicle_GroundTrace(ent);
    if ( !s_phys.onGround )
    {
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1512, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
        __debugbreak();
      if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1513, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
        __debugbreak();
      if ( s_phys.hasGround )
        G_Vehicle_ClipVelocity(&ent->vehicle->phys.vel, &s_phys.groundTrace.normal, &ent->vehicle->phys.vel);
      v40 = 1;
      goto LABEL_61;
    }
    v56 = v3;
    v55 = v4;
    v54 = v5;
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1484, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1485, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
      __debugbreak();
    vehicle = (vec3_t *)ent->vehicle;
    v29 = vehicle[26].v[1];
    v30 = vehicle[26].v[0];
    v31 = vehicle[26].v[2];
    v32 = fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31));
    G_Vehicle_ClipVelocity(vehicle + 26, &s_phys.groundTrace.normal, vehicle + 26);
    v33 = vehicle[26].v[1];
    v34 = vehicle[26].v[0];
    v35 = vehicle[26].v[2];
    if ( (float)((float)((float)(v34 * v30) + (float)(v33 * v29)) + (float)(v35 * v31)) > 0.0 )
    {
      v36 = LODWORD(vehicle[26].v[0]);
      *(float *)&v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
      _XMM3 = v36;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      vehicle[26].v[0] = v34 * (float)(1.0 / *(float *)&_XMM0);
      vehicle[26].v[1] = (float)(1.0 / *(float *)&_XMM0) * v33;
      vehicle[26].v[2] = (float)(1.0 / *(float *)&_XMM0) * v35;
      vehicle[26].v[0] = v32 * vehicle[26].v[0];
      vehicle[26].v[1] = v32 * vehicle[26].v[1];
      vehicle[26].v[2] = v32 * vehicle[26].v[2];
      v34 = vehicle[26].v[0];
    }
    if ( v34 != 0.0 || vehicle[26].v[1] != 0.0 )
    {
      v40 = 0;
LABEL_61:
      G_Vehicle_StepSlideMove(ent, v40, v19);
    }
  }
  type = v12->type;
  if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
    G_Vehicle_GroundPlant(ent, &veh->phys, 1);
  MatrixTransposeTransformVector43(&veh->phys.vel, &axis, &veh->phys.bodyVel);
  veh->speed = COERCE_FLOAT(LODWORD(veh->phys.bodyVel.v[0]) & _xmm);
  v42 = DCONST_DVARINT_bg_vehicleDebug;
  if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.integer )
  {
    v43 = veh->phys.bounds.halfSize.v[2] * 2.0;
    v44 = p_phys->origin.v[0];
    color = (vec4_t)_xmm;
    v45 = veh->phys.origin.v[1];
    outRotAccel.v[0] = v44;
    v46 = veh->phys.origin.v[2];
    outRotAccel.v[1] = v45;
    if ( v43 == 0.0 )
      v47 = v46 + 0.0099999998;
    else
      v47 = v46 + v43;
    v48 = veh->phys.bounds.halfSize.v[0];
    outRotAccel.v[2] = v47;
    G_DebugCylinder(&p_phys->origin, &outRotAccel, v48, &color, 0, 0);
  }
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
  int v7; 
  __int128 rotateToYaw_low; 
  double DeltaTime; 
  float rotateToYawAccel; 
  float v11; 
  double v15; 
  bool v16; 
  float v17; 
  __int128 v22; 
  gentity_s *ent; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3355, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3356, ASSERT_TYPE_ASSERT, "( vehDef )", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( veh->rotateToYawMode == VEH_ROTATE_TO_OFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3357, ASSERT_TYPE_ASSERT, "( veh->rotateToYawMode != VEH_ROTATE_TO_OFF )", (const char *)&queryFormat, "veh->rotateToYawMode != VEH_ROTATE_TO_OFF") )
    __debugbreak();
  if ( vehDef->type != VEH_TREADED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3358, ASSERT_TYPE_ASSERT, "( vehDef->type == VEH_TREADED )", (const char *)&queryFormat, "vehDef->type == VEH_TREADED") )
    __debugbreak();
  _XMM6 = 0i64;
  if ( veh->rotateToYawAccel < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3362, ASSERT_TYPE_ASSERT, "( veh->rotateToYawAccel >= 0.0f )", (const char *)&queryFormat, "veh->rotateToYawAccel >= 0.0f") )
    __debugbreak();
  rotateToYaw_low = LODWORD(veh->rotateToYaw);
  _XMM12 = 0i64;
  __asm { vroundss xmm2, xmm12, xmm1, 1 }
  *(float *)&rotateToYaw_low = (float)((float)((float)(veh->rotateToYaw - veh->phys.angles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v7 = rotateToYaw_low;
  if ( *(float *)&rotateToYaw_low != 0.0 )
  {
    DeltaTime = G_Vehicle_GetDeltaTime();
    rotateToYawAccel = veh->rotateToYawAccel;
    v11 = *(float *)&DeltaTime;
    if ( rotateToYawAccel == 0.0 )
    {
      _XMM2 = LODWORD(veh->topSpeedYawRate) ^ (unsigned __int128)_xmm;
      __asm
      {
        vcmpless xmm1, xmm6, xmm7
        vblendvps xmm1, xmm2, xmm3, xmm1
      }
      veh->phys.rotVel.v[1] = *(float *)&_XMM1;
      v15 = LinearTrackAngle(veh->rotateToYaw, veh->phys.angles.v[1], veh->topSpeedYawRate, *(float *)&DeltaTime);
      veh->phys.angles.v[1] = *(float *)&v15;
      v16 = *(float *)&v15 == veh->rotateToYaw;
      goto LABEL_23;
    }
    v17 = veh->phys.rotVel.v[1];
    if ( (float)((float)((float)(v17 / rotateToYawAccel) * (float)(v17 / rotateToYawAccel)) * (float)(rotateToYawAccel * 0.5)) < COERCE_FLOAT(rotateToYaw_low & _xmm) )
    {
      _XMM3 = LODWORD(veh->topSpeedYawRate) ^ (unsigned __int128)_xmm;
      __asm
      {
        vcmpless xmm0, xmm6, xmm7
        vblendvps xmm0, xmm3, xmm4, xmm0; tgt
      }
      *(double *)&_XMM0 = LinearTrack(*(float *)&_XMM0, v17, veh->rotateToYawAccel, v11);
      veh->phys.rotVel.v[1] = *(float *)&_XMM0;
      __asm { vroundss xmm3, xmm12, xmm1, 1 }
      veh->phys.angles.v[1] = (float)((float)((float)((float)(*(float *)&_XMM0 * v11) + veh->phys.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      return;
    }
    v22 = rotateToYaw_low & _xmm;
    *(float *)&v22 = fsqrt((float)(COERCE_FLOAT(v7 & _xmm) * 2.0) / rotateToYawAccel) * rotateToYawAccel;
    _XMM1 = v22 ^ _xmm;
    __asm
    {
      vcmpless xmm0, xmm6, xmm7
      vblendvps xmm2, xmm1, xmm3, xmm0
    }
    veh->phys.rotVel.v[1] = *(float *)&_XMM2;
    *(double *)&_XMM0 = LinearTrackAngle(veh->rotateToYaw, veh->phys.angles.v[1], COERCE_FLOAT(_XMM2 & _xmm), v11);
    veh->phys.angles.v[1] = *(float *)&_XMM0;
    if ( *(float *)&_XMM0 != veh->rotateToYaw )
    {
      v16 = veh->phys.rotVel.v[1] == 0.0;
LABEL_23:
      if ( !v16 )
        return;
    }
  }
  ent = veh->ent;
  veh->rotateToYawMode = VEH_ROTATE_TO_OFF;
  GScr_Notify(ent, scr_const.rotatedone, 0);
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
  Vehicle *vehicle; 
  __int64 v14; 
  unsigned int scriptableIndex; 
  ScriptableStateUsableDef *outUsableDef; 
  VehicleUsableParts usableScriptableParts[4]; 
  __m256i v18; 
  __int128 v19; 

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
        vehicle = vehEnt->vehicle;
        if ( vehicle )
        {
          vehicle->usableScriptablePartCount = v2;
          *(__m256i *)&vehicle->usableScriptableParts[0].serverInstanceFlatId = *(__m256i *)&usableScriptableParts[0].serverInstanceFlatId;
          *(__m256i *)&vehicle->usableScriptableParts[4].serverInstanceFlatId = v18;
          *(_OWORD *)&vehicle->usableScriptableParts[8].serverInstanceFlatId = v19;
        }
        else
        {
          LODWORD(v14) = vehEnt->s.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8206, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported case for SetUsableInfo (Ent %i, Type %i)", v14, vehEnt->s.eType) )
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
  const VehicleDef *ServerDef; 
  signed __int64 v4; 
  char v5; 
  __int64 v6; 
  float *wheelCompression; 
  __int64 v8; 
  float *i; 
  __int64 v10; 
  __int64 v11; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 409, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 412, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = ent - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v10) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, 2048) )
      __debugbreak();
  }
  v4 = (__int16)v4;
  if ( (unsigned int)(__int16)v4 >= 0x800 )
  {
    LODWORD(v11) = 2048;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
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
  if ( ServerDef->suspensionHardSnd.name )
  {
    wheelCompression = vehicle->phys.wheelCompression;
    v8 = 0i64;
    while ( *((int *)wheelCompression + 316) < 0 || (float)(*wheelCompression - wheelCompression[12]) < ServerDef->suspensionHardCompression )
    {
      ++v8;
      ++wheelCompression;
      if ( v8 >= 12 )
        goto LABEL_32;
    }
    G_Utils_AddEvent(ent, 0xA8u, 0);
    v5 = 1;
  }
LABEL_32:
  if ( ServerDef->suspensionSoftSnd.name && !v5 )
  {
    for ( i = vehicle->phys.wheelCompression; *((int *)i + 316) < 0 || (float)(*i - i[12]) < ServerDef->suspensionSoftCompression; ++i )
    {
      if ( ++v6 >= 12 )
        return;
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
  Vehicle *vehicle; 
  const VehicleDef *ServerDef; 
  bool v4; 
  GVehicles *VehicleSystem; 
  VehicleDrivingState drivingState; 
  BgVehiclePhysicsManager *v7; 
  BgVehiclePhysics *ObjectById; 
  double InputControl; 
  const dvar_t *v10; 
  float v13; 
  vec3_t forward; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 2999, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3000, ASSERT_TYPE_ASSERT, "( ent->vehicle )", (const char *)&queryFormat, "ent->vehicle") )
    __debugbreak();
  vehicle = ent->vehicle;
  ServerDef = G_Vehicle_GetServerDef(vehicle->defIndex);
  if ( ServerDef->vehiclePhysicsDef.maxSteeringAngle == 0.0 )
  {
    ent->s.lerp.u.actor.impactVector.v[1] = 0;
  }
  else
  {
    if ( ent->scripted && !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 3014, ASSERT_TYPE_ASSERT, "( !ent->scripted || Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ) )", (const char *)&queryFormat, "!ent->scripted || Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    v4 = 0;
    if ( (float)((float)((float)(vehicle->phys.vel.v[0] * vehicle->phys.vel.v[0]) + (float)(vehicle->phys.vel.v[1] * vehicle->phys.vel.v[1])) + (float)(vehicle->phys.vel.v[2] * vehicle->phys.vel.v[2])) != 0.0 )
    {
      AngleVectors(&vehicle->phys.angles, &forward, NULL, NULL);
      v4 = (float)((float)((float)(forward.v[0] * vehicle->phys.vel.v[0]) + (float)(forward.v[1] * vehicle->phys.vel.v[1])) + (float)(forward.v[2] * vehicle->phys.vel.v[2])) < 0.0;
    }
    if ( !BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) || ent->scripted )
    {
      v10 = DVARFLT_veh_nonPhysicsSteerScale;
      if ( !DVARFLT_veh_nonPhysicsSteerScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "veh_nonPhysicsSteerScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      _XMM3 = 0i64;
      __asm { vroundss xmm5, xmm3, xmm2, 1 }
      v13 = (float)((float)(vehicle->phys.angles.v[1] - vehicle->phys.prevAngles.v[1]) * 0.0027777778) - *(float *)&_XMM5;
      _XMM5 = v10->current.unsignedInt ^ (unsigned __int128)_xmm;
      _XMM0 = v4;
      __asm
      {
        vpcmpeqd xmm4, xmm0, xmm3
        vblendvps xmm3, xmm5, xmm9, xmm4
      }
      *(double *)&_XMM0 = I_fclamp((float)(v13 * *(float *)&_XMM3) * 360.0, COERCE_FLOAT(LODWORD(ServerDef->vehiclePhysicsDef.maxSteeringAngle) ^ _xmm), ServerDef->vehiclePhysicsDef.maxSteeringAngle);
      ent->s.lerp.u.actor.impactVector.v[1] = *(float *)&_XMM0;
    }
    else
    {
      VehicleSystem = GVehicles::GetVehicleSystem();
      drivingState = vehicle->drivingState;
      if ( (drivingState == VEH_DRIVE_PATH_CONSTRAINED || drivingState == VEH_DRIVE_PLAYER) && (v7 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem), ObjectById = BgVehiclePhysicsManager::GetObjectById(v7, vehicle->physicsVehicle), BgVehiclePhysics::IsDynamic(ObjectById)) )
      {
        ent->s.lerp.u.actor.impactVector.v[1] = ObjectById->GetSteeringAngle(ObjectById);
      }
      else
      {
        InputControl = GVehicles::PhysicsGetInputControl(VehicleSystem, vehicle->physicsVehicle, 2u);
        ent->s.lerp.u.actor.impactVector.v[1] = *(float *)&InputControl * ServerDef->vehiclePhysicsDef.maxSteeringAngle;
      }
    }
  }
}

/*
==============
G_Vehicle_UpdateVehicleControlledEntity
==============
*/
void G_Vehicle_UpdateVehicleControlledEntity(gentity_s *player, const unsigned int vehicleEntIndex)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  gclient_s *client; 
  gentity_s *GEntity; 
  Vehicle *vehicle; 
  bool IsValid; 
  GVehicles *v11; 
  GWeaponMap *Instance; 
  GHandler *Handler; 
  __int64 targetEntity; 
  const dvar_t *v15; 
  gentity_s *v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  const dvar_t *v23; 
  GVehicles *v24; 
  BgVehiclePhysics *v25; 
  unsigned int PhysicsBodyId; 
  BGVehicles *vehicleSystem; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 

  if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6951, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
    __debugbreak();
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6952, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  client = player->client;
  if ( client->ps.vehicleState.entity == vehicleEntIndex )
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
        BG_PlayerStateToVehicleState(&client->ps, &GEntity->s, 0, Handler, Instance, v11);
        G_Vehicle_SetPosition(GEntity, &client->ps.vehicleState.origin, &client->ps.vehicleState.velocity, &client->ps.vehicleState.angles, 1);
      }
      targetEntity = client->ps.vehicleState.targetEntity;
      if ( (_DWORD)targetEntity != 2047 )
      {
        v32 = v2;
        v31 = v3;
        v30 = v4;
        if ( (unsigned int)targetEntity >= 0x7FE )
        {
          LODWORD(vehicleSystem) = targetEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 6931, ASSERT_TYPE_ASSERT, "(unsigned)( targetEntityNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "targetEntityNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", vehicleSystem, 2046) )
            __debugbreak();
        }
        v15 = DCONST_DVARFLT_bg_vehicle_target_min_speed;
        v16 = &g_entities[targetEntity];
        if ( !DCONST_DVARFLT_bg_vehicle_target_min_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_min_speed") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        v17 = v16->r.currentOrigin.v[0] - GEntity->r.currentOrigin.v[0];
        v18 = v16->r.currentOrigin.v[1] - GEntity->r.currentOrigin.v[1];
        v19 = client->ps.vehicleState.velocity.v[1];
        v20 = client->ps.vehicleState.velocity.v[0];
        v21 = v16->r.currentOrigin.v[2] - GEntity->r.currentOrigin.v[2];
        v22 = client->ps.vehicleState.velocity.v[2];
        if ( (float)((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v22 * v22)) > v15->current.value && (float)((float)((float)(v19 * v18) + (float)(v20 * v17)) + (float)(v22 * v21)) < 0.0 )
          goto LABEL_25;
        v23 = DCONST_DVARFLT_bg_vehicle_target_radius;
        if ( !DCONST_DVARFLT_bg_vehicle_target_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_target_radius") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        if ( (float)((float)((float)(v17 * v17) + (float)(v18 * v18)) + (float)(v21 * v21)) < (float)(v23->current.value * v23->current.value) )
        {
LABEL_25:
          client->ps.vehicleState.targetEntity = 2047;
          GScr_Notify(GEntity, scr_const.goal_reached, 0);
        }
      }
      if ( IsValid )
      {
        v24 = GVehicles::GetVehicleSystem();
        v25 = (BgVehiclePhysics *)v24->PhysicsGetVehicleObject(v24, GEntity->s.number);
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(v25);
        Physics_GetRigidBodyAABB(v25->m_worldId, PhysicsBodyId, &aabbMin, &aabbMax);
        v24->PhysicsUpdateEntityBounds(v24, GEntity->s.number, (const ExtentBounds *)&aabbMin);
      }
    }
    else if ( G_Vehicle_InUseByPlayer(GEntity, player) )
    {
      G_Vehicle_UnlinkPlayer(GEntity, player);
      BG_InitPlayerstateVehicle(&client->ps);
    }
  }
  else
  {
    Com_Printf(15, "G_Vehicle_UpdateVehicleControlledEntity: Skipping because PS vehicle (%i) does not match supplied vehicle (%u)\n", (unsigned int)client->ps.vehicleState.targetEntity, vehicleEntIndex);
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
  Vehicle *vehicle; 
  __int64 v3; 
  char *Value; 
  unsigned int *v5; 
  unsigned int v6; 
  _QWORD *v7; 
  char *v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  ThreadContext CurrentThreadContext; 
  unsigned __int8 modelType; 
  Vehicle *v13; 
  gentity_s *v14; 
  double v15; 
  unsigned int Instance; 
  vehicle_physic_t *p_phys; 
  vehicle_physic_t *v18; 
  __int128 v19; 
  __int64 v20; 
  __int64 v21; 
  Bounds bounds; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1768, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  vehicle = ent->vehicle;
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1771, ASSERT_TYPE_ASSERT, "( veh )", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v3 = 3i64;
  Value = (char *)Sys_GetValue(0);
  v5 = (unsigned int *)(Value + 4016);
  if ( (unsigned int)(*((_DWORD *)Value + 1004) + 1) >= 3 )
  {
    LODWORD(v20) = *((_DWORD *)Value + 1004) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, 3) )
      __debugbreak();
  }
  v6 = *v5 + 1;
  *v5 = v6;
  if ( v6 >= 3 )
  {
    LODWORD(v21) = 3;
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  v7 = Value + 2088;
  v8 = Value + 40;
  if ( *v7 < (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v7 += 8i64;
  if ( *v7 >= (unsigned __int64)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v7 = v5;
  if ( *v7 <= (unsigned __int64)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v9 = (int)*v5;
  v10 = __rdtsc();
  v5[v9 + 2] = v10;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 48, NULL, 0);
  modelType = ent->r.modelType;
  if ( modelType == 5 )
  {
    v13 = s_vehicleServers;
    while ( 1 )
    {
      v14 = v13->ent;
      if ( v13->ent )
      {
        if ( v14 != ent && vehicle->drivingState == VEH_DRIVE_PLAYER )
        {
          v15 = *(double *)&v13->phys.bounds.halfSize.y;
          *(_OWORD *)bounds.midPoint.v = *(_OWORD *)v13->phys.bounds.midPoint.v;
          *(double *)&bounds.halfSize.y = v15;
          bounds.halfSize.v[0] = _mm_shuffle_ps(*(__m128 *)bounds.midPoint.v, *(__m128 *)bounds.midPoint.v, 255).m128_f32[0] + 64.0;
          bounds.halfSize.v[1] = *(float *)&v15 + 64.0;
          bounds.midPoint.v[0] = bounds.midPoint.v[0] + v14->r.currentOrigin.v[0];
          bounds.midPoint.v[1] = bounds.midPoint.v[1] + v14->r.currentOrigin.v[1];
          bounds.midPoint.v[2] = bounds.midPoint.v[2] + v14->r.currentOrigin.v[2];
          Bounds_ExpandToWidth(&bounds);
          Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, ent);
          if ( PhysicsQuery_LegacyEntityContactCapsule(PHYSICS_WORLD_ID_FIRST, &bounds, Instance, ent) )
            break;
        }
      }
      if ( (__int64)++v13 >= (__int64)s_vehicleServerDefs )
        goto LABEL_39;
    }
    *(_OWORD *)&vehicle->pathPos.nodeIdx = *(_OWORD *)&s_backup.pathPos.nodeIdx;
    *(_OWORD *)&vehicle->pathPos.lookAhead = *(_OWORD *)&s_backup.pathPos.lookAhead;
    *(_OWORD *)vehicle->pathPos.angles.v = *(_OWORD *)s_backup.pathPos.angles.v;
    *(_OWORD *)&vehicle->pathPos.lookPos.y = *(_OWORD *)&s_backup.pathPos.lookPos.y;
    *(_OWORD *)&vehicle->pathPos.driftOffset.z = *(_OWORD *)&s_backup.pathPos.driftOffset.z;
    *(_OWORD *)&vehicle->pathPos.switchNode[0].script_noteworthy = *(_OWORD *)&s_backup.pathPos.switchNode[0].script_noteworthy;
    *(_OWORD *)vehicle->pathPos.switchNode[0].origin.v = *(_OWORD *)s_backup.pathPos.switchNode[0].origin.v;
    *(_OWORD *)&vehicle->pathPos.switchNode[0].dir.y = *(_OWORD *)&s_backup.pathPos.switchNode[0].dir.y;
    *(_OWORD *)&vehicle->pathPos.switchNode[0].angles.z = *(_OWORD *)&s_backup.pathPos.switchNode[0].angles.z;
    *(_OWORD *)&vehicle->pathPos.switchNode[1].name = *(_OWORD *)&s_backup.pathPos.switchNode[1].name;
    *(_OWORD *)&vehicle->pathPos.switchNode[1].index = *(_OWORD *)&s_backup.pathPos.switchNode[1].index;
    *(_OWORD *)&vehicle->pathPos.switchNode[1].origin.y = *(_OWORD *)&s_backup.pathPos.switchNode[1].origin.y;
    *(_OWORD *)&vehicle->pathPos.switchNode[1].dir.z = *(_OWORD *)&s_backup.pathPos.switchNode[1].dir.z;
    *(_QWORD *)&vehicle->pathPos.switchNode[1].length = *(_QWORD *)&s_backup.pathPos.switchNode[1].length;
    p_phys = &vehicle->phys;
    *(_DWORD *)&vehicle->pathPos.switchNode[1].notifyIdx = *(_DWORD *)&s_backup.pathPos.switchNode[1].notifyIdx;
    v18 = &s_backup.phys;
    do
    {
      p_phys = (vehicle_physic_t *)((char *)p_phys + 128);
      v19 = *(_OWORD *)v18->origin.v;
      v18 = (vehicle_physic_t *)((char *)v18 + 128);
      *(_OWORD *)&p_phys[-1].wheelSurfType[10] = v19;
      *(_OWORD *)&p_phys[-1].wheelCompression[2] = *(_OWORD *)&v18[-1].wheelCompression[2];
      *(_OWORD *)&p_phys[-1].wheelCompression[6] = *(_OWORD *)&v18[-1].wheelCompression[6];
      *(_OWORD *)&p_phys[-1].wheelCompression[10] = *(_OWORD *)&v18[-1].wheelCompression[10];
      *(_OWORD *)&p_phys[-1].wheelPrevCompression[2] = *(_OWORD *)&v18[-1].wheelPrevCompression[2];
      *(_OWORD *)&p_phys[-1].wheelPrevCompression[6] = *(_OWORD *)&v18[-1].wheelPrevCompression[6];
      *(_OWORD *)&p_phys[-1].wheelPrevCompression[10] = *(_OWORD *)&v18[-1].wheelPrevCompression[10];
      *(_OWORD *)&p_phys[-1].worldTilt.z = *(_OWORD *)&v18[-1].worldTilt.z;
      --v3;
    }
    while ( v3 );
    *(_OWORD *)p_phys->origin.v = *(_OWORD *)v18->origin.v;
    p_phys->prevOrigin.v[1] = v18->prevOrigin.v[1];
    G_Vehicle_SetPosition(ent, &vehicle->phys.origin, &vehicle->phys.vel, &vehicle->phys.angles, 1);
    *(_QWORD *)&vehicle->speed = 0i64;
  }
  else if ( modelType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 1777, ASSERT_TYPE_ASSERT, "( ent->r.modelType == MODELTYPE_CAPSULE )", (const char *)&queryFormat, "ent->r.modelType == MODELTYPE_CAPSULE") )
  {
    __debugbreak();
  }
LABEL_39:
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
void GVehicles::PathComputeLookAhead(GVehicles *this, __int16 nodeIdx, const vec3_t *curPos, float lookAheadDist, vec3_t *outLookAhead)
{
  if ( !BGVehicles::PathIsValidNode(nodeIdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8045, ASSERT_TYPE_ASSERT, "(BGVehicles::PathIsValidNode( nodeIdx ))", (const char *)&queryFormat, "BGVehicles::PathIsValidNode( nodeIdx )") )
    __debugbreak();
  G_VehiclePath_ComputeLookAhead(nodeIdx, curPos, lookAheadDist, outLookAhead);
}

/*
==============
GVehicles::PathComputeLookAhead
==============
*/

void __fastcall GVehicles::PathComputeLookAhead(GVehicles *this, double manualSpeed, const VehiclePathPos *vpp, const float manualTime, vec3_t *outLookAheadOrigin, vec3_t *outLookAheadAngles)
{
  __m256i v7; 
  __int64 v8; 
  float speed; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  float v18; 
  float v20; 
  vec3_t lookPos; 
  vec3_t angles; 
  VehiclePathPos vppa; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8054, ASSERT_TYPE_ASSERT, "(vpp)", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v7 = *(__m256i *)&vpp->switchNode[0].angles.z;
  v8 = *(_QWORD *)&vpp->switchNode[1].length;
  *(__m256i *)&vppa.nodeIdx = *(__m256i *)&vpp->nodeIdx;
  *(__m256i *)vppa.angles.v = *(__m256i *)vpp->angles.v;
  *(__m256i *)&vppa.driftOffset.z = *(__m256i *)&vpp->driftOffset.z;
  *(__m256i *)vppa.switchNode[0].origin.v = *(__m256i *)vpp->switchNode[0].origin.v;
  speed = vpp->speed;
  *(__m256i *)&vppa.switchNode[0].angles.z = v7;
  *(__m256i *)&vppa.switchNode[1].index = *(__m256i *)&vpp->switchNode[1].index;
  *(_OWORD *)&vppa.switchNode[1].dir.z = *(_OWORD *)&vpp->switchNode[1].dir.z;
  *(_QWORD *)&vppa.switchNode[1].length = v8;
  *(_DWORD *)&vppa.switchNode[1].notifyIdx = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  if ( speed <= 0.0 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v10 = *(_OWORD *)&manualSpeed;
    *(float *)&v10 = (float)(*(float *)&manualSpeed / speed) + manualTime;
    v11 = v10;
    if ( *(float *)&v10 >= 1.0 )
    {
      do
      {
        G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD);
        v12 = v11;
        *(float *)&v12 = *(float *)&v11 + -1.0;
        v11 = v12;
      }
      while ( *(float *)&v12 >= 1.0 );
    }
  }
  lookPos = vppa.lookPos;
  angles = vppa.angles;
  if ( *(float *)&v11 > 0.0 )
  {
    if ( *(float *)&v11 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8078, ASSERT_TYPE_ASSERT, "( manualTimeInternal < 1.0f )", (const char *)&queryFormat, "manualTimeInternal < 1.0f") )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&vppa, VEH_PATH_FORWARD);
  }
  v13 = (float)(vppa.lookPos.v[1] - lookPos.v[1]) * *(float *)&v11;
  v14 = vppa.lookPos.v[2] - lookPos.v[2];
  v15 = vppa.angles.v[0];
  outLookAheadOrigin->v[0] = (float)((float)(vppa.lookPos.v[0] - lookPos.v[0]) * *(float *)&v11) + lookPos.v[0];
  outLookAheadOrigin->v[1] = v13 + lookPos.v[1];
  outLookAheadOrigin->v[2] = (float)(v14 * *(float *)&v11) + lookPos.v[2];
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v18 = (float)(vppa.angles.v[1] - angles.v[1]) * 0.0027777778;
  outLookAheadAngles->v[0] = (float)((float)((float)((float)((float)(v15 - angles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * *(float *)&v11) + angles.v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v20 = (float)(vppa.angles.v[2] - angles.v[2]) * 0.0027777778;
  outLookAheadAngles->v[1] = (float)((float)((float)(v18 - *(float *)&_XMM3) * 360.0) * *(float *)&v11) + angles.v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outLookAheadAngles->v[2] = (float)((float)((float)(v20 - *(float *)&_XMM3) * 360.0) * *(float *)&v11) + angles.v[2];
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
void GVehicles::PathUpdatePos(GVehicles *this, const int entNum, const float deltaTime, const float manualSpeed, VehiclePathPos *vpp, float *inOutManualTime, vec3_t *outNextOrigin, vec3_t *outNextAngles)
{
  __m256i v10; 
  __int64 v11; 
  float speed; 
  float v13; 
  float v14; 
  __int64 v15; 
  double v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v25; 
  float v27; 
  double v29; 
  float v30; 
  vec3_t angles; 
  VehiclePathPos nextVpp; 

  if ( !vpp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8107, ASSERT_TYPE_ASSERT, "(vpp)", (const char *)&queryFormat, "vpp") )
    __debugbreak();
  v10 = *(__m256i *)&vpp->switchNode[0].angles.z;
  v11 = *(_QWORD *)&vpp->switchNode[1].length;
  *(__m256i *)&nextVpp.nodeIdx = *(__m256i *)&vpp->nodeIdx;
  *(__m256i *)nextVpp.angles.v = *(__m256i *)vpp->angles.v;
  *(__m256i *)&nextVpp.driftOffset.z = *(__m256i *)&vpp->driftOffset.z;
  *(__m256i *)nextVpp.switchNode[0].origin.v = *(__m256i *)vpp->switchNode[0].origin.v;
  speed = vpp->speed;
  *(__m256i *)&nextVpp.switchNode[0].angles.z = v10;
  *(__m256i *)&nextVpp.switchNode[1].index = *(__m256i *)&vpp->switchNode[1].index;
  *(_OWORD *)&nextVpp.switchNode[1].dir.z = *(_OWORD *)&vpp->switchNode[1].dir.z;
  *(_QWORD *)&nextVpp.switchNode[1].length = v11;
  *(_DWORD *)&nextVpp.switchNode[1].notifyIdx = *(_DWORD *)&vpp->switchNode[1].notifyIdx;
  if ( speed <= 0.0 )
  {
    *inOutManualTime = 0.0;
  }
  else
  {
    v13 = (float)(manualSpeed / speed) + *inOutManualTime;
    *inOutManualTime = v13;
    if ( v13 >= 1.0 )
    {
      do
      {
        G_VehiclePath_UpdatePathPos(&nextVpp, VEH_PATH_FORWARD, deltaTime);
        v14 = *inOutManualTime;
        *inOutManualTime = *inOutManualTime - 1.0;
      }
      while ( (float)(v14 - 1.0) >= 1.0 );
    }
  }
  G_VehiclePath_UpdatePathPosNotifies(vpp, &nextVpp, entNum, -1, VEH_PATH_NOTIFY_SCRIPT, VEH_PATH_FORWARD);
  v15 = *(_QWORD *)&nextVpp.switchNode[1].length;
  *(__m256i *)&vpp->nodeIdx = *(__m256i *)&nextVpp.nodeIdx;
  *(__m256i *)vpp->angles.v = *(__m256i *)nextVpp.angles.v;
  *(__m256i *)&vpp->driftOffset.z = *(__m256i *)&nextVpp.driftOffset.z;
  *(__m256i *)vpp->switchNode[0].origin.v = *(__m256i *)nextVpp.switchNode[0].origin.v;
  *(__m256i *)&vpp->switchNode[0].angles.z = *(__m256i *)&nextVpp.switchNode[0].angles.z;
  *(__m256i *)&vpp->switchNode[1].index = *(__m256i *)&nextVpp.switchNode[1].index;
  *(_OWORD *)&vpp->switchNode[1].dir.z = *(_OWORD *)&nextVpp.switchNode[1].dir.z;
  v16 = *(double *)nextVpp.origin.v;
  *(_QWORD *)&vpp->switchNode[1].length = v15;
  *(_DWORD *)&vpp->switchNode[1].notifyIdx = *(_DWORD *)&nextVpp.switchNode[1].notifyIdx;
  v17 = *inOutManualTime;
  v29 = v16;
  v30 = nextVpp.origin.v[2];
  angles = nextVpp.angles;
  if ( *inOutManualTime > 0.0 )
  {
    if ( v17 >= 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.cpp", 8133, ASSERT_TYPE_ASSERT, "( inOutManualTime < 1.0f )", (const char *)&queryFormat, "inOutManualTime < 1.0f") )
      __debugbreak();
    G_VehiclePath_UpdatePathPos(&nextVpp, VEH_PATH_FORWARD, deltaTime);
    v17 = *inOutManualTime;
  }
  v18 = nextVpp.origin.v[1] - *((float *)&v29 + 1);
  v19 = nextVpp.origin.v[2];
  outNextOrigin->v[0] = (float)((float)(nextVpp.origin.v[0] - *(float *)&v29) * v17) + *(float *)&v29;
  v20 = (float)(v18 * *inOutManualTime) + *((float *)&v29 + 1);
  v21 = v19 - v30;
  v22 = nextVpp.angles.v[0];
  outNextOrigin->v[1] = v20;
  outNextOrigin->v[2] = (float)(v21 * *inOutManualTime) + v30;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v25 = (float)(nextVpp.angles.v[1] - angles.v[1]) * 0.0027777778;
  outNextAngles->v[0] = (float)((float)((float)((float)((float)(v22 - angles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * *inOutManualTime) + angles.v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v27 = (float)(nextVpp.angles.v[2] - angles.v[2]) * 0.0027777778;
  outNextAngles->v[1] = (float)((float)((float)(v25 - *(float *)&_XMM3) * 360.0) * *inOutManualTime) + angles.v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outNextAngles->v[2] = (float)((float)((float)(v27 - *(float *)&_XMM3) * 360.0) * *inOutManualTime) + angles.v[2];
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
  Vehicle *vehicle; 
  int number; 
  int eType; 

  p_m_suspendManager = &this->m_suspendManager;
  if ( GVehicleSuspendManager::IsSuspended(&this->m_suspendManager, ent) )
  {
    GVehicleSuspendManager::SetUsableInfo(p_m_suspendManager, ent, usableScriptablePartCount, usableScriptableParts);
  }
  else
  {
    vehicle = ent->vehicle;
    if ( vehicle )
    {
      vehicle->usableScriptablePartCount = usableScriptablePartCount;
      *(__m256i *)&vehicle->usableScriptableParts[0].serverInstanceFlatId = *(__m256i *)&usableScriptableParts->serverInstanceFlatId;
      *(__m256i *)&vehicle->usableScriptableParts[4].serverInstanceFlatId = *(__m256i *)&usableScriptableParts[4].serverInstanceFlatId;
      *(_OWORD *)&vehicle->usableScriptableParts[8].serverInstanceFlatId = *(_OWORD *)&usableScriptableParts[8].serverInstanceFlatId;
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

