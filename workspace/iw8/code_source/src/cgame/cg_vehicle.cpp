/*
==============
CG_Vehicle_PlayerStateToVehicleState
==============
*/

void __fastcall CG_Vehicle_PlayerStateToVehicleState(LocalClientNum_t localClientNum)
{
  ?CG_Vehicle_PlayerStateToVehicleState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_GetRemoteDriveWeapon
==============
*/

const Weapon *__fastcall CG_Vehicle_GetRemoteDriveWeapon(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_GetRemoteDriveWeapon@@YAAEBUWeapon@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_EntityEvent
==============
*/

void __fastcall CG_Vehicle_EntityEvent(LocalClientNum_t localClientNum, const centity_t *cent, int entEvent, unsigned int entEventParam)
{
  ?CG_Vehicle_EntityEvent@@YAXW4LocalClientNum_t@@PEBUcentity_t@@HI@Z(localClientNum, cent, entEvent, entEventParam);
}

/*
==============
CgVehicleSystem::UpdateGameModeSpecificVehicleInfo
==============
*/

void __fastcall CgVehicleSystem::UpdateGameModeSpecificVehicleInfo(CgVehicleSystem *this, const entityState_t *es, BGVehicleInfo *info)
{
  ?UpdateGameModeSpecificVehicleInfo@CgVehicleSystem@@UEAAXPEBUentityState_t@@PEAVBGVehicleInfo@@@Z(this, es, info);
}

/*
==============
CG_Vehicle_GetWorldBoneMatrix
==============
*/

int __fastcall CG_Vehicle_GetWorldBoneMatrix(const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  return ?CG_Vehicle_GetWorldBoneMatrix@@YAHW4LocalClientNum_t@@HHAEAT?$tmat43_t@Tvec3_t@@@@@Z(localClientNum, entityIndex, boneIndex, result);
}

/*
==============
CgVehicleSystem::ApplyVisionSettings
==============
*/

void __fastcall CgVehicleSystem::ApplyVisionSettings(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  ?ApplyVisionSettings@CgVehicleSystem@@IEAAXPEBUcentity_t@@@Z(this, vehicleEntity);
}

/*
==============
CgVehicleSystem::IsDobjValidForVehicle
==============
*/

bool __fastcall CgVehicleSystem::IsDobjValidForVehicle(const DObj *dobj)
{
  return ?IsDobjValidForVehicle@CgVehicleSystem@@SA_NPEBUDObj@@@Z(dobj);
}

/*
==============
CgVehicleSystem::UpdateHelicopterRotorBoneControllers
==============
*/

void __fastcall CgVehicleSystem::UpdateHelicopterRotorBoneControllers(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ?UpdateHelicopterRotorBoneControllers@CgVehicleSystem@@IEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystem::DisableSuspension
==============
*/

void __fastcall CgVehicleSystem::DisableSuspension(CgVehicleSystem *this, centity_t *cent)
{
  ?DisableSuspension@CgVehicleSystem@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::BgIsDobjValidForVehicle
==============
*/

bool __fastcall CgVehicleSystem::BgIsDobjValidForVehicle(CgVehicleSystem *this, const DObj *dobj)
{
  return ?BgIsDobjValidForVehicle@CgVehicleSystem@@UEBA_NPEBUDObj@@@Z(this, dobj);
}

/*
==============
CgVehicleSystem::GetClientDef
==============
*/

const VehicleDef *__fastcall CgVehicleSystem::GetClientDef(const VehicleClient *veh)
{
  return ?GetClientDef@CgVehicleSystem@@SAPEBUVehicleDef@@PEBUVehicleClient@@@Z(veh);
}

/*
==============
CG_Vehicle_GetInputBindingSet
==============
*/

int __fastcall CG_Vehicle_GetInputBindingSet(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_GetInputBindingSet@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::ResetVehiclePhysics
==============
*/

void __fastcall CgVehicleSystem::ResetVehiclePhysics(CgVehicleSystem *this, centity_t *cent)
{
  ?ResetVehiclePhysics@CgVehicleSystem@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::UpdatePlayerVehicle
==============
*/

void __fastcall CgVehicleSystem::UpdatePlayerVehicle(CgVehicleSystem *this)
{
  ?UpdatePlayerVehicle@CgVehicleSystem@@QEAAXXZ(this);
}

/*
==============
CgVehicleSystem::GetVehicleViewOrigin
==============
*/

void __fastcall CgVehicleSystem::GetVehicleViewOrigin(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewOrigin)
{
  ?GetVehicleViewOrigin@CgVehicleSystem@@IEBAXPEBUplayerState_s@@PEBUcentity_t@@AEATvec3_t@@@Z(this, playerState, vehicleEntity, outViewOrigin);
}

/*
==============
CG_Vehicle_ClearVisionSettings
==============
*/

void __fastcall CG_Vehicle_ClearVisionSettings(const LocalClientNum_t localClientNum)
{
  ?CG_Vehicle_ClearVisionSettings@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_GetRemoteControlledVehicleDef
==============
*/

const VehicleDef *__fastcall CG_Vehicle_GetRemoteControlledVehicleDef(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_GetRemoteControlledVehicleDef@@YAPEBUVehicleDef@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::ComputeForwardSpeed
==============
*/

double __fastcall CgVehicleSystem::ComputeForwardSpeed(CgVehicleSystem *this, VehicleClient *veh, const centity_t *cent)
{
  double result; 

  *(float *)&result = ?ComputeForwardSpeed@CgVehicleSystem@@QEAAMPEAUVehicleClient@@PEBUcentity_t@@@Z(this, veh, cent);
  return result;
}

/*
==============
CG_Vehicle_GetClientIndex
==============
*/

int __fastcall CG_Vehicle_GetClientIndex(const centity_t *cent)
{
  return ?CG_Vehicle_GetClientIndex@@YAHPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_Vehicle_ClearAudioSettings
==============
*/

void __fastcall CG_Vehicle_ClearAudioSettings(const LocalClientNum_t localClientNum)
{
  ?CG_Vehicle_ClearAudioSettings@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_ShouldApplyMaterialTime
==============
*/

bool __fastcall CG_Vehicle_ShouldApplyMaterialTime(const VehicleClient *veh)
{
  return ?CG_Vehicle_ShouldApplyMaterialTime@@YA_NPEBUVehicleClient@@@Z(veh);
}

/*
==============
CgVehicleSystem::HasSuspensionEnabled
==============
*/

bool __fastcall CgVehicleSystem::HasSuspensionEnabled(CgVehicleSystem *this, const centity_t *cent)
{
  return ?HasSuspensionEnabled@CgVehicleSystem@@QEBA_NPEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::GetClientDef
==============
*/

const VehicleDef *__fastcall CgVehicleSystem::GetClientDef(unsigned int vehDefIndex)
{
  return ?GetClientDef@CgVehicleSystem@@SAPEBUVehicleDef@@I@Z(vehDefIndex);
}

/*
==============
CgVehicleSystem::GetBone
==============
*/

int __fastcall CgVehicleSystem::GetBone(CgVehicleSystem *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  return ?GetBone@CgVehicleSystem@@UEBAHW4LocalClientNum_t@@HW4VehicleBone@@@Z(this, localClientNum, entityIndex, bone);
}

/*
==============
CgVehicleSystem::GetVehicleDef
==============
*/

const VehicleDef *__fastcall CgVehicleSystem::GetVehicleDef(CgVehicleSystem *this, const entityState_t *es)
{
  return ?GetVehicleDef@CgVehicleSystem@@UEAAPEBUVehicleDef@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
CgVehicleSystem::UpdateWheelSpinAngles
==============
*/

void __fastcall CgVehicleSystem::UpdateWheelSpinAngles(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ?UpdateWheelSpinAngles@CgVehicleSystem@@IEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystem::GetClientSafeConst
==============
*/

const VehicleClient *__fastcall CgVehicleSystem::GetClientSafeConst(CgVehicleSystem *this, const centity_t *cent)
{
  return ?GetClientSafeConst@CgVehicleSystem@@QEBAPEBUVehicleClient@@PEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::IsSystemAllocated
==============
*/

bool __fastcall CgVehicleSystem::IsSystemAllocated()
{
  return ?IsSystemAllocated@CgVehicleSystem@@SA_NXZ();
}

/*
==============
CgVehicleSystem::ArchiveVehicles
==============
*/

void __fastcall CgVehicleSystem::ArchiveVehicles(CgVehicleSystem *this, MemoryFile *memFile)
{
  ?ArchiveVehicles@CgVehicleSystem@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
CG_Vehicle_ClearBoneControllers
==============
*/

void __fastcall CG_Vehicle_ClearBoneControllers(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Vehicle_ClearBoneControllers@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Vehicle_HasViewLinkedTurret
==============
*/

bool __fastcall CG_Vehicle_HasViewLinkedTurret(const LocalClientNum_t localClientNum, const centity_t *vehicleEntity, const playerState_s *ps)
{
  return ?CG_Vehicle_HasViewLinkedTurret@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@PEBUplayerState_s@@@Z(localClientNum, vehicleEntity, ps);
}

/*
==============
CgVehicleSystem::GetClientDefIndex
==============
*/

int __fastcall CgVehicleSystem::GetClientDefIndex(const centity_t *cent)
{
  return ?GetClientDefIndex@CgVehicleSystem@@SAHPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_Vehicle_ShouldDelayPacketEntity
==============
*/

int __fastcall CG_Vehicle_ShouldDelayPacketEntity(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent)
{
  return ?CG_Vehicle_ShouldDelayPacketEntity@@YAHW4LocalClientNum_t@@PEBVcg_t@@PEBUcentity_t@@@Z(localClientNum, cgameGlob, cent);
}

/*
==============
CgVehicleSystem::UpdateVehicleDObjs
==============
*/

void __fastcall CgVehicleSystem::UpdateVehicleDObjs(CgVehicleSystem *this)
{
  ?UpdateVehicleDObjs@CgVehicleSystem@@QEAAXXZ(this);
}

/*
==============
CgVehicleSystem::GetClient
==============
*/

VehicleClient *__fastcall CgVehicleSystem::GetClient(CgVehicleSystem *this, const centity_t *cent)
{
  return ?GetClient@CgVehicleSystem@@QEAAPEAUVehicleClient@@PEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::UpdateEntity
==============
*/

void __fastcall CgVehicleSystem::UpdateEntity(CgVehicleSystem *this, centity_t *cent)
{
  ?UpdateEntity@CgVehicleSystem@@MEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CG_Vehicle_GetDef
==============
*/

const VehicleDef *__fastcall CG_Vehicle_GetDef(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  return ?CG_Vehicle_GetDef@@YAPEBUVehicleDef@@W4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_Vehicle_GetBone
==============
*/

int __fastcall CG_Vehicle_GetBone(const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  return ?CG_Vehicle_GetBone@@YAHW4LocalClientNum_t@@HW4VehicleBone@@@Z(localClientNum, entityIndex, bone);
}

/*
==============
CgVehicleSystem::InitVehicleDefCache
==============
*/

void CgVehicleSystem::InitVehicleDefCache(void)
{
  ?InitVehicleDefCache@CgVehicleSystem@@KAXXZ();
}

/*
==============
CG_Vehicle_IsClientValid
==============
*/

bool __fastcall CG_Vehicle_IsClientValid(LocalClientNum_t localClientNum, const VehicleClient *veh)
{
  return ?CG_Vehicle_IsClientValid@@YA_NW4LocalClientNum_t@@PEBUVehicleClient@@@Z(localClientNum, veh);
}

/*
==============
CG_Vehicle_UpdateCamoAndSticker
==============
*/

void __fastcall CG_Vehicle_UpdateCamoAndSticker(const LocalClientNum_t localClientNum, const unsigned __int8 *desiredCamoIndices, const unsigned __int16 desiredCamoCount, const unsigned __int16 *desiredStickerIndices, const unsigned __int16 desiredStickerCount, DObj *obj)
{
  ?CG_Vehicle_UpdateCamoAndSticker@@YAXW4LocalClientNum_t@@PEBEGPEBGGPEAUDObj@@@Z(localClientNum, desiredCamoIndices, desiredCamoCount, desiredStickerIndices, desiredStickerCount, obj);
}

/*
==============
CgVehicleSystem::Draw2D
==============
*/

void __fastcall CgVehicleSystem::Draw2D(CgVehicleSystem *this, const ScreenPlacement *scrPlace)
{
  ?Draw2D@CgVehicleSystem@@QEBAXPEBUScreenPlacement@@@Z(this, scrPlace);
}

/*
==============
CG_Vehicle_GetRemoteDriveEnt
==============
*/

entityState_t *__fastcall CG_Vehicle_GetRemoteDriveEnt(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_GetRemoteDriveEnt@@YAPEAUentityState_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_IsRemoteControlledPhysicsVehicle
==============
*/

bool __fastcall CG_Vehicle_IsRemoteControlledPhysicsVehicle(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_IsRemoteControlledPhysicsVehicle@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystem::GetClient
==============
*/

const VehicleClient *__fastcall CgVehicleSystem::GetClient(CgVehicleSystem *this, const centity_t *cent)
{
  return ?GetClient@CgVehicleSystem@@QEBAPEBUVehicleClient@@PEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast
==============
*/

void __fastcall CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(CgVehicleSystem *this, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent)
{
  ?UpdateWheelsBoneControllers_UsingRaycast@CgVehicleSystem@@QEAAXPEBUVehicleDef@@PEAUDObj@@PEAUcentity_t@@@Z(this, vehicleDef, obj, cent);
}

/*
==============
CgVehicleSystem::AimTurret
==============
*/

bool __fastcall CgVehicleSystem::AimTurret(CgVehicleSystem *this, const Weapon *r_turretWeapon, int turretEntityNum)
{
  return ?AimTurret@CgVehicleSystem@@UEAA_NAEBUWeapon@@H@Z(this, r_turretWeapon, turretEntityNum);
}

/*
==============
CgVehicleSystem::UpdateVehicleRevPriority
==============
*/

void __fastcall CgVehicleSystem::UpdateVehicleRevPriority(CgVehicleSystem *this)
{
  ?UpdateVehicleRevPriority@CgVehicleSystem@@QEAAXXZ(this);
}

/*
==============
CG_Vehicle_InterpolatePlayerState
==============
*/

void __fastcall CG_Vehicle_InterpolatePlayerState(LocalClientNum_t localClientNum, const snapshot_t *prevSnap, const snapshot_t *nextSnap, float f, playerState_s *out)
{
  ?CG_Vehicle_InterpolatePlayerState@@YAXW4LocalClientNum_t@@PEBUsnapshot_t@@1MPEAUplayerState_s@@@Z(localClientNum, prevSnap, nextSnap, f, out);
}

/*
==============
CG_Vehicle_RemoteControlledVehicleType
==============
*/

VehicleType __fastcall CG_Vehicle_RemoteControlledVehicleType(LocalClientNum_t localClientNum, VehiclePhysicsGameProfile *vehicleGameProfile)
{
  return ?CG_Vehicle_RemoteControlledVehicleType@@YA?AW4VehicleType@@W4LocalClientNum_t@@PEAW4VehiclePhysicsGameProfile@@@Z(localClientNum, vehicleGameProfile);
}

/*
==============
CG_Vehicle_GetCrosshairWidget
==============
*/

const char *__fastcall CG_Vehicle_GetCrosshairWidget(LocalClientNum_t localClientNum)
{
  return ?CG_Vehicle_GetCrosshairWidget@@YAPEBDW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Vehicle_IsVehicleEntity
==============
*/

bool __fastcall CG_Vehicle_IsVehicleEntity(const centity_t *const cent)
{
  return ?CG_Vehicle_IsVehicleEntity@@YA_NQEBUcentity_t@@@Z(cent);
}

/*
==============
CG_Vehicle_IsCorpse
==============
*/

bool __fastcall CG_Vehicle_IsCorpse(const centity_t *cent)
{
  return ?CG_Vehicle_IsCorpse@@YA_NPEBUcentity_t@@@Z(cent);
}

/*
==============
CgVehicleSystem::GetTurretFireType
==============
*/

VehicleTurretFireType __fastcall CgVehicleSystem::GetTurretFireType(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  return ?GetTurretFireType@CgVehicleSystem@@QEBA?AW4VehicleTurretFireType@@PEBUcentity_t@@@Z(this, vehicleEntity);
}

/*
==============
CG_Vehicle_PredictEntityPushing
==============
*/

void __fastcall CG_Vehicle_PredictEntityPushing(LocalClientNum_t localClientNum, int groundEntIndex, int oldTime, int newTime, vec3_t *inOutEntOrigin)
{
  ?CG_Vehicle_PredictEntityPushing@@YAXW4LocalClientNum_t@@HHHAEATvec3_t@@@Z(localClientNum, groundEntIndex, oldTime, newTime, inOutEntOrigin);
}

/*
==============
CG_Vehicle_UpdateMaterialTime
==============
*/

void __fastcall CG_Vehicle_UpdateMaterialTime(VehicleClient *veh)
{
  ?CG_Vehicle_UpdateMaterialTime@@YAXPEAUVehicleClient@@@Z(veh);
}

/*
==============
CgVehicleSystem::UpdateVehicleStickerAndCamo
==============
*/

void __fastcall CgVehicleSystem::UpdateVehicleStickerAndCamo(CgVehicleSystem *this, centity_t *cent)
{
  ?UpdateVehicleStickerAndCamo@CgVehicleSystem@@IEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CG_Vehicle_DestroyBoneUsage
==============
*/

void __fastcall CG_Vehicle_DestroyBoneUsage(LocalClientNum_t localClientNum, centity_t *cent, VehicleClient *veh)
{
  ?CG_Vehicle_DestroyBoneUsage@@YAXW4LocalClientNum_t@@PEAUcentity_t@@PEAUVehicleClient@@@Z(localClientNum, cent, veh);
}

/*
==============
CG_Vehicle_ResetEntity
==============
*/

void __fastcall CG_Vehicle_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, bool teleported)
{
  ?CG_Vehicle_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@_N@Z(localClientNum, cent, teleported);
}

/*
==============
CgVehicleSystem::UpdateGroundTarget
==============
*/

void __fastcall CgVehicleSystem::UpdateGroundTarget(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity)
{
  ?UpdateGroundTarget@CgVehicleSystem@@IEAAXPEBUplayerState_s@@PEBUcentity_t@@@Z(this, playerState, vehicleEntity);
}

/*
==============
CgVehicleSystem::RegisterVehicleDef
==============
*/

void __fastcall CgVehicleSystem::RegisterVehicleDef(const unsigned int index, const char *name)
{
  ?RegisterVehicleDef@CgVehicleSystem@@KAXIPEBD@Z(index, name);
}

/*
==============
CgVehicleSystem::GetVehicleViewAngles
==============
*/

void __fastcall CgVehicleSystem::GetVehicleViewAngles(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  ?GetVehicleViewAngles@CgVehicleSystem@@IEBAXPEBUplayerState_s@@PEBUcentity_t@@AEATvec3_t@@@Z(this, playerState, vehicleEntity, outViewAngles);
}

/*
==============
CgVehicleSystem::GetDObjFirstModelBounds
==============
*/

void __fastcall CgVehicleSystem::GetDObjFirstModelBounds(CgVehicleSystem *this, const centity_t *cent, Bounds *out_bounds)
{
  ?GetDObjFirstModelBounds@CgVehicleSystem@@QEAAXPEBUcentity_t@@PEAUBounds@@@Z(this, cent, out_bounds);
}

/*
==============
CG_Vehicle_InitBoneUsage
==============
*/

void __fastcall CG_Vehicle_InitBoneUsage(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Vehicle_InitBoneUsage@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgVehicleSystem::GetVehicleDef
==============
*/

const VehicleDef *__fastcall CgVehicleSystem::GetVehicleDef(CgVehicleSystem *this, const playerState_s *ps)
{
  return ?GetVehicleDef@CgVehicleSystem@@UEBAPEBUVehicleDef@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
CgVehicleSystem::GetWorldBoneMatrix
==============
*/

int __fastcall CgVehicleSystem::GetWorldBoneMatrix(CgVehicleSystem *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  return ?GetWorldBoneMatrix@CgVehicleSystem@@UEBAHW4LocalClientNum_t@@HHAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, localClientNum, entityIndex, boneIndex, result);
}

/*
==============
CgVehicleSystem::UseSteeringControllers
==============
*/

bool __fastcall CgVehicleSystem::UseSteeringControllers(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  return ?UseSteeringControllers@CgVehicleSystem@@IEAA_NPEBUcentity_t@@@Z(this, vehicleEntity);
}

/*
==============
CgVehicleSystem::DeleteVehicle
==============
*/

void __fastcall CgVehicleSystem::DeleteVehicle(CgVehicleSystem *this, int entIndex)
{
  ?DeleteVehicle@CgVehicleSystem@@QEAAXH@Z(this, entIndex);
}

/*
==============
CgVehicleSystem::SetEntityAnimTree
==============
*/

void __fastcall CgVehicleSystem::SetEntityAnimTree(CgVehicleSystem *this, const entityState_t *es, XAnim_s *anims)
{
  ?SetEntityAnimTree@CgVehicleSystem@@UEAAXPEBUentityState_t@@PEAUXAnim_s@@@Z(this, es, anims);
}

/*
==============
CgVehicleSystem::ApplyAudioSettings
==============
*/

void __fastcall CgVehicleSystem::ApplyAudioSettings(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  ?ApplyAudioSettings@CgVehicleSystem@@IEAAXPEBUcentity_t@@@Z(this, vehicleEntity);
}

/*
==============
CgVehicleSystem::GetLocalClientNum
==============
*/

LocalClientNum_t __fastcall CgVehicleSystem::GetLocalClientNum(CgVehicleSystem *this)
{
  return ?GetLocalClientNum@CgVehicleSystem@@UEBA?AW4LocalClientNum_t@@XZ(this);
}

/*
==============
CG_Vehicle_ResetEntityPhysics
==============
*/

void __fastcall CG_Vehicle_ResetEntityPhysics(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_Vehicle_ResetEntityPhysics@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgVehicleSystem::ResetVehicle
==============
*/

void __fastcall CgVehicleSystem::ResetVehicle(CgVehicleSystem *this, centity_t *cent)
{
  ?ResetVehicle@CgVehicleSystem@@QEAAXPEAUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystem::UpdateBoneControllersInternal
==============
*/

bool __fastcall CgVehicleSystem::UpdateBoneControllersInternal(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  return ?UpdateBoneControllersInternal@CgVehicleSystem@@IEAA_NPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystem::GetTeam
==============
*/

team_t __fastcall CgVehicleSystem::GetTeam(CgVehicleSystem *this, const entityState_t *es)
{
  return ?GetTeam@CgVehicleSystem@@UEBA?AW4team_t@@PEBUentityState_t@@@Z(this, es);
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers
==============
*/

void __fastcall CgVehicleSystem::UpdateWheelsBoneControllers(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ?UpdateWheelsBoneControllers@CgVehicleSystem@@IEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CG_Vehicle_GetRemoteControlledVehicle
==============
*/

bool __fastcall CG_Vehicle_GetRemoteControlledVehicle(const LocalClientNum_t localClientNum, const centity_t **outRemoteControlledVehicle)
{
  return ?CG_Vehicle_GetRemoteControlledVehicle@@YA_NW4LocalClientNum_t@@PEAPEBUcentity_t@@@Z(localClientNum, outRemoteControlledVehicle);
}

/*
==============
CgVehicleSystem::EnableSuspension
==============
*/

void __fastcall CgVehicleSystem::EnableSuspension(CgVehicleSystem *this, centity_t *cent, float suspDist)
{
  ?EnableSuspension@CgVehicleSystem@@QEAAXPEAUcentity_t@@M@Z(this, cent, suspDist);
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast
==============
*/

void __fastcall CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ?UpdateWheelsBoneControllers_UsingRaycast@CgVehicleSystem@@IEAAXPEAUDObj@@PEAUcentity_t@@@Z(this, obj, cent);
}

/*
==============
CgVehicleSystem::AimTurret
==============
*/
char CgVehicleSystem::AimTurret(CgVehicleSystem *this, const Weapon *r_turretWeapon, int turretEntityNum)
{
  __int128 xmm6_0; 
  __int128 v4; 
  __int128 v5; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  centity_t *Entity; 
  const VehicleDef *v11; 
  char v13; 
  __int64 v14; 
  WeaponDef *v15; 
  double v16; 
  float v17; 
  float v18; 
  float leftArc; 
  float v22; 
  float rightArc; 
  ClActiveClient *Client; 
  __int64 v25; 
  vec3_t v3; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3342, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, p_predictedPlayerState->remoteControlEnt);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    goto LABEL_40;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 12) & 0xFFFD) != 0 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3345, ASSERT_TYPE_ASSERT, "(CG_Vehicle_IsVehicleEntity( vehicleEnt ))", (const char *)&queryFormat, "CG_Vehicle_IsVehicleEntity( vehicleEnt )") )
      __debugbreak();
  }
  v11 = this->GetVehicleDef(this, &Entity->nextState);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3348, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !v11->vehiclePhysicsDef.physicsEnabled )
    return 0;
  v13 = 0;
  if ( v11->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
  {
    LODWORD(v14) = r_turretWeapon->weaponIdx;
    v29 = xmm6_0;
    v28 = v4;
    v27 = v5;
    if ( (unsigned int)v14 > bg_lastParsedWeaponIndex )
    {
      LODWORD(v25) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v25, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    v14 = (unsigned __int16)v14;
    if ( !bg_weaponDefs[(unsigned __int16)v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    v15 = bg_weaponDefs[v14];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3363, ASSERT_TYPE_ASSERT, "( turretWeapDef )", (const char *)&queryFormat, "turretWeapDef") )
      __debugbreak();
    v16 = AngleNormalize360(Entity->pose.angles.v[1]);
    v17 = p_predictedPlayerState->viewangles.v[1];
    v18 = *(float *)&v16;
    leftArc = v15->leftArc;
    _XMM1 = 0i64;
    __asm { vroundss xmm5, xmm1, xmm3, 1 }
    v22 = (float)((float)((float)(v17 - v18) * 0.0027777778) - *(float *)&_XMM5) * 360.0;
    if ( v22 <= leftArc )
    {
      rightArc = v15->rightArc;
      if ( v22 < COERCE_FLOAT(LODWORD(rightArc) ^ _xmm) )
        v17 = v18 - rightArc;
    }
    else
    {
      v17 = leftArc + v18;
    }
    p_predictedPlayerState->viewangles.v[1] = v17;
    AnglesSubtract(&p_predictedPlayerState->viewangles, &p_predictedPlayerState->delta_angles, &v3);
    Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
    Client->clviewangles_aab += Client->clviewangles_set_aab;
    LODWORD(Client->clViewangles.clViewangles.v[0]) = LODWORD(v3.v[0]) ^ ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2));
    LODWORD(Client->clViewangles.clViewangles.v[1]) = LODWORD(v3.v[1]) ^ ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) + 2));
    LODWORD(Client->clViewangles.clViewangles.v[2]) = LODWORD(v3.v[2]) ^ ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) + 2));
    return 1;
  }
  return v13;
}

/*
==============
CgVehicleSystem::ApplyAudioSettings
==============
*/
void CgVehicleSystem::ApplyAudioSettings(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  entityState_t *p_nextState; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int soundTriggerOverrideReverb; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !vehicleEntity || (vehicleEntity->flags & 1) == 0 )
    goto LABEL_25;
  p_nextState = &vehicleEntity->nextState;
  if ( vehicleEntity == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((p_nextState->eType - 12) & 0xFFFD) != 0 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2724, ASSERT_TYPE_ASSERT, "(vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
      __debugbreak();
  }
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( CL_IsRenderingSplitScreen() )
  {
    soundTriggerOverrideReverb = ClientDef->soundTriggerOverrideReverb | 2;
    if ( !ClientDef->soundTriggerOverrideMix )
      soundTriggerOverrideReverb = ClientDef->soundTriggerOverrideReverb;
    v8 = soundTriggerOverrideReverb | 4;
    if ( !ClientDef->soundTriggerOverrideFilter )
      v8 = soundTriggerOverrideReverb;
    v9 = v8 | 8;
    if ( !ClientDef->soundTriggerOverrideOcclusion )
      v9 = v8;
    v10 = v9 | 0x10;
    if ( !ClientDef->soundTriggerOverrideAmbient )
      v10 = v9;
    v11 = v10 | 0x20;
    if ( !ClientDef->soundTriggerOverrideAmbientEvents )
      v11 = v10;
    v12 = v11 | 0x40;
    if ( !ClientDef->soundTriggerOverrideADSR )
      v12 = v11;
    CG_SetAudioOverride(this->m_localClientNum, ClientDef->soundTriggerOverrideZone, CTAUD_OVERRIDE_VEHICLE, 0.0, v12);
  }
}

/*
==============
CgVehicleSystem::ApplyVisionSettings
==============
*/
void CgVehicleSystem::ApplyVisionSettings(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const char *globalVisionSettings; 

  if ( !vehicleEntity )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2694, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  if ( (vehicleEntity->flags & 1) == 0 )
    goto LABEL_25;
  if ( vehicleEntity == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((vehicleEntity->nextState.eType - 12) & 0xFFFD) != 0 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2695, ASSERT_TYPE_ASSERT, "(CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
      __debugbreak();
  }
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2698, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2701, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !CG_Vehicle_ApplyMapVisionSetting((const LocalClientNum_t)this->m_localClientNum, ClientDef) )
  {
    globalVisionSettings = ClientDef->globalVisionSettings;
    if ( globalVisionSettings )
    {
      if ( *globalVisionSettings )
        CG_Vehicle_ApplyVisionSettings_Internal((const LocalClientNum_t)this->m_localClientNum, ClientDef, globalVisionSettings);
    }
  }
}

/*
==============
CgVehicleSystem::ArchiveVehicles
==============
*/
void CgVehicleSystem::ArchiveVehicles(CgVehicleSystem *this, MemoryFile *memFile)
{
  if ( !memFile )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 180, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
      __debugbreak();
  }
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 75264ui64, this->m_vehicleClients);
  CG_VehicleCam_Archive(memFile);
}

/*
==============
CgVehicleSystem::BgIsDobjValidForVehicle
==============
*/
bool CgVehicleSystem::BgIsDobjValidForVehicle(CgVehicleSystem *this, const DObj *dobj)
{
  return CgVehicleSystem::IsDobjValidForVehicle(dobj);
}

/*
==============
CG_Vehicle_ApplyMapVisionSetting
==============
*/
__int64 CG_Vehicle_ApplyMapVisionSetting(const LocalClientNum_t localClientNum, const VehicleDef *const vehicleDef)
{
  char *v4; 
  char *v5; 
  char v6; 
  char i; 
  char v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  char v12; 
  char *m_activeGameMapName; 
  char visionSetName[64]; 

  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2637, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !vehicleDef->mapVisionSettings )
    return 0i64;
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  v4 = strstr_0(vehicleDef->mapVisionSettings, cls.m_activeGameMapName);
  v5 = v4;
  if ( !v4 )
    return 0i64;
  v6 = *v4;
  if ( v6 )
  {
    while ( !isspace(v6) )
    {
      v6 = *++v5;
      if ( !v6 )
        goto LABEL_17;
    }
    for ( i = *v5; i; i = *++v5 )
    {
      if ( i == 10 )
        break;
      if ( !isspace(i) )
        break;
    }
  }
LABEL_17:
  v8 = *v5;
  if ( *v5 == 10 || !v8 )
    return 0i64;
  v9 = 0;
  v10 = 0i64;
  do
  {
    if ( isspace(v8) )
      break;
    if ( v10 >= 63 )
    {
      m_activeGameMapName = cls.m_activeGameMapName;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442CE4B0, 953i64);
    }
    v12 = *v5;
    ++v9;
    ++v5;
    visionSetName[v10++] = v12;
    v8 = *v5;
  }
  while ( *v5 );
  if ( v9 > 0x3F )
  {
    LODWORD(m_activeGameMapName) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2680, ASSERT_TYPE_ASSERT, "( 0 ) <= ( settingValueSize ) && ( settingValueSize ) <= ( ( 64 ) - 1 )", "settingValueSize not in [0, MAX_QPATH - 1]\n\t%i not in [%i, %i]", m_activeGameMapName, 0i64, 63) )
      __debugbreak();
  }
  if ( (unsigned __int64)(int)v9 >= 0x40 )
  {
    j___report_rangecheckfailure(v11);
    JUMPOUT(0x141D703EEi64);
  }
  visionSetName[v9] = 0;
  if ( !v9 )
    return 0i64;
  CG_Vehicle_ApplyVisionSettings_Internal(localClientNum, vehicleDef, visionSetName);
  return 1i64;
}

/*
==============
CG_Vehicle_ApplyVisionSettings_Internal
==============
*/
void CG_Vehicle_ApplyVisionSettings_Internal(const LocalClientNum_t localClientNum, const VehicleDef *const vehicleDef, const char *const visionSetName)
{
  cg_t *LocalClientGlobals; 

  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2621, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !visionSetName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2622, ASSERT_TYPE_ASSERT, "(visionSetName)", (const char *)&queryFormat, "visionSetName") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_VisionSetRegisterLeafByFileSimple(&LocalClientGlobals->cvsData, VISIONSET_LEAFTYPE_VEHICLE, visionSetName);
  CG_VisionSetRegisterBlendStart(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_VEHICLE, LocalClientGlobals->time, vehicleDef->visionBlendTime, 1, VISIONSETLERP_SMOOTH);
}

/*
==============
CG_Vehicle_CalcLocalSpeed
==============
*/
__int64 CG_Vehicle_CalcLocalSpeed(LocalClientNum_t localClientNum, const centity_t *cent, const VehicleClient *veh, vec3_t *outLocalSpeed)
{
  cg_t *LocalClientGlobals; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  __int64 result; 
  int number; 
  int entity; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  int serverTime; 
  unsigned int v22; 
  float *v23; 
  bool v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  CgTrajectory v28; 
  vec3_t v29; 
  vec3_t outPos; 
  tmat33_t<vec3_t> axis; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 768, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 769, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  if ( snap && nextSnap )
  {
    if ( !BGVehicles::PhysicsIsValid(veh->physicsId) )
      goto LABEL_15;
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, veh->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 785, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic(ObjectById) )
    {
      BgVehiclePhysics::ComputeVelocityLocalSpace(ObjectById, &ObjectById->m_linearVelocityWs, outLocalSpeed);
      return 1i64;
    }
    else
    {
LABEL_15:
      number = cent->nextState.number;
      entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
      v17 = (float)(nextSnap->serverTime - snap->serverTime) * 0.001;
      if ( v17 <= 0.0 )
      {
        if ( entity == number || nextSnap == snap )
        {
          return 0i64;
        }
        else
        {
          *(_QWORD *)outLocalSpeed->v = 0i64;
          outLocalSpeed->v[2] = 0.0;
          return 1i64;
        }
      }
      else
      {
        if ( entity == number )
        {
          v18 = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[0];
          v19 = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[1];
          v20 = LocalClientGlobals->predictedPlayerState.vehicleState.velocity.v[2];
        }
        else
        {
          CgTrajectory::CgTrajectory(&v28, localClientNum, cent, &cent->prevState);
          BgTrajectory::EvaluatePosTrajectory(&v28, snap->serverTime, &outPos);
          serverTime = nextSnap->serverTime;
          v28.m_es = &cent->nextState.lerp;
          BgTrajectory::EvaluatePosTrajectory(&v28, serverTime, &v29);
          v18 = (float)(v29.v[0] - outPos.v[0]) * (float)(1.0 / v17);
          v20 = (float)(v29.v[2] - outPos.v[2]) * (float)(1.0 / v17);
          v19 = (float)(v29.v[1] - outPos.v[1]) * (float)(1.0 / v17);
        }
        AnglesToAxis(&cent->nextState.lerp.apos.trBase, &axis);
        v22 = 0;
        v23 = &axis.m[0].v[2];
        v24 = 1;
        do
        {
          if ( !v24 )
          {
            LODWORD(v27) = 3;
            LODWORD(v26) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          v25 = (float)((float)(v19 * *(v23 - 1)) + (float)(v18 * *(v23 - 2))) + (float)(v20 * *v23);
          if ( v22 >= 3 )
          {
            LODWORD(v27) = 3;
            LODWORD(v26) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          outLocalSpeed->v[0] = v25;
          if ( v22 >= 3 )
          {
            LODWORD(v27) = 3;
            LODWORD(v26) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
              __debugbreak();
          }
          ++v22;
          v23 += 3;
          outLocalSpeed = (vec3_t *)((char *)outLocalSpeed + 4);
          v24 = v22 < 3;
        }
        while ( (int)v22 < 3 );
        return 1i64;
      }
    }
  }
  else
  {
    *(_QWORD *)outLocalSpeed->v = 0i64;
    result = 0i64;
    outLocalSpeed->v[2] = 0.0;
  }
  return result;
}

/*
==============
CG_Vehicle_CalcRotationalSpeed
==============
*/
__int64 CG_Vehicle_CalcRotationalSpeed(LocalClientNum_t localClientNum, const centity_t *cent, const VehicleClient *veh, vec3_t *outRotateSpeed)
{
  cg_t *LocalClientGlobals; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  float v14; 
  float v15; 
  __int64 result; 
  int number; 
  float v18; 
  int entity; 
  int serverTime; 
  float v21; 
  CgTrajectory v22; 
  vec3_t outVelLs; 
  vec3_t outAng; 
  vec3_t v1; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 848, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 849, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  *(_QWORD *)outRotateSpeed->v = 0i64;
  outRotateSpeed->v[2] = 0.0;
  if ( !snap || !nextSnap )
    return 0i64;
  if ( BGVehicles::PhysicsIsValid(veh->physicsId) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, veh->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 865, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic(ObjectById) )
    {
      BgVehiclePhysics::ComputeVelocityLocalSpace(ObjectById, &ObjectById->m_angularVelocityWs, &outVelLs);
      v14 = 57.295776 * outVelLs.v[1];
      v15 = 57.295776 * outVelLs.v[2];
      outRotateSpeed->v[2] = 57.295776 * outVelLs.v[0];
      outRotateSpeed->v[0] = v14;
      outRotateSpeed->v[1] = v15;
      return 1i64;
    }
  }
  number = cent->nextState.number;
  v18 = (float)(nextSnap->serverTime - snap->serverTime) * 0.001;
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( v18 <= 0.0 )
  {
    if ( entity != number && nextSnap != snap )
    {
      *(_QWORD *)outRotateSpeed->v = 0i64;
      result = 1i64;
      outRotateSpeed->v[2] = 0.0;
      return result;
    }
    return 0i64;
  }
  if ( entity == number )
  {
    outRotateSpeed->v[0] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[0];
    outRotateSpeed->v[1] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[1];
    outRotateSpeed->v[2] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[2];
  }
  else
  {
    CgTrajectory::CgTrajectory(&v22, localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateAngTrajectory(&v22, snap->serverTime, &outAng);
    serverTime = nextSnap->serverTime;
    v22.m_es = &cent->nextState.lerp;
    BgTrajectory::EvaluateAngTrajectory(&v22, serverTime, &v1);
    AnglesSubtract(&v1, &outAng, outRotateSpeed);
    v21 = outRotateSpeed->v[1] / v18;
    outRotateSpeed->v[0] = outRotateSpeed->v[0] / v18;
    outRotateSpeed->v[2] = outRotateSpeed->v[2] / v18;
    outRotateSpeed->v[1] = v21;
  }
  return 1i64;
}

/*
==============
CG_Vehicle_ClearAudioSettings
==============
*/
void CG_Vehicle_ClearAudioSettings(const LocalClientNum_t localClientNum)
{
  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_VEHICLE, 0.0);
}

/*
==============
CG_Vehicle_ClearBoneControllers
==============
*/
void CG_Vehicle_ClearBoneControllers(LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned __int8 boneUsage; 
  int WheelCount; 
  CgVehicleSystem *VehicleSystem; 
  CgVehicleAnimSystem *v7; 
  VehicleClient *Client; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1092, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) != 0 && cent->nextState.eType != ET_VEHICLE_CORPSE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1093, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &cent->nextState ) || (cent->nextState.eType == ET_VEHICLE_CORPSE))", (const char *)&queryFormat, "BG_IsVehicleEntity( &cent->nextState ) || (cent->nextState.eType == ET_VEHICLE_CORPSE)") )
    __debugbreak();
  boneUsage = cent->pose.vehicle.boneUsage;
  *(_WORD *)((char *)&cent->pose.moverFx + 121) = -258;
  cent->pose.vehicle.tag_barrel = -2;
  if ( boneUsage == 1 )
  {
    memset((char *)&cent->pose.moverFx + 36, 254, 24);
    *((_DWORD *)&cent->pose.moverFx + 26) = -16843010;
    *((_DWORD *)&cent->pose.moverFx + 27) = -16843010;
    *((_DWORD *)&cent->pose.moverFx + 28) = -16843010;
    *((_WORD *)&cent->pose.moverFx + 58) = -258;
    cent->pose.vehicle.wheelSpinAngle[7] = CompressSignedUnit(0.0);
    cent->pose.vehicle.wheelSpinAngle[8] = CompressSignedUnit(0.0);
    cent->pose.vehicle.wheelFraction[1] = CompressSignedUnit(0.0);
    cent->pose.vehicle.wheelFraction[2] = CompressSignedUnit(0.0);
  }
  else
  {
    if ( boneUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1149, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS)", (const char *)&queryFormat, "cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS") )
      __debugbreak();
    WheelCount = BGVehicles::GetWheelCount(NULL);
    if ( WheelCount > 0 )
      memset(&cent->pose.moverFx + 6, 254, WheelCount);
    cent->pose.turret.visualYawLimitLeft = -1.6947395e38;
    *(CEntFx *)((char *)&cent->pose.moverFx + 92) = 0i64;
    cent->pose.vehicle.wheelSteeringRatioDecay = 0;
    cent->pose.player.animCtrl = -2;
    cent->pose.vehicle.wheelSteeringRatioMaxIndex = 1;
  }
  if ( cent->nextState.eType == ET_VEHICLE )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v7 = (CgVehicleAnimSystem *)VehicleSystem;
    if ( VehicleSystem )
    {
      Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
      if ( Client )
        CgVehicleAnimSystem::ClearBoneControllers(v7 + 288062, Client, cent);
    }
  }
}

/*
==============
CG_Vehicle_ClearVisionSettings
==============
*/
void CG_Vehicle_ClearVisionSettings(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CG_VisionSetSetBlendOff(&LocalClientGlobals->cvsData, VISIONSET_BLENDTYPE_VEHICLE);
}

/*
==============
CG_Vehicle_DestroyBoneUsage
==============
*/
void CG_Vehicle_DestroyBoneUsage(LocalClientNum_t localClientNum, centity_t *cent, VehicleClient *veh)
{
  CgVehicleSystem *VehicleSystem; 

  if ( !cent->pose.vehicle.boneUsage )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1081, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    CgVehicleSystem::TreadBoneAnimDestroyResources(VehicleSystem, veh);
  }
}

/*
==============
CG_Vehicle_EntityEvent
==============
*/
void CG_Vehicle_EntityEvent(LocalClientNum_t localClientNum, const centity_t *cent, int entEvent, unsigned int entEventParam)
{
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  BgVehiclePhysicsManager *v10; 
  BgVehiclePhysics *ObjectById; 
  __int64 v12; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2389, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2390, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  if ( entEvent == 166 )
  {
    CG_VehicleAudio_CollisionEvent(localClientNum, cent, entEventParam);
  }
  else
  {
    if ( entEvent <= 166 )
      goto LABEL_23;
    if ( entEvent <= 168 )
    {
      CG_VehicleAudio_SuspensionEvent(localClientNum, cent, entEvent);
      return;
    }
    if ( entEvent == 169 )
    {
      if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2371, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2372, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
        __debugbreak();
      VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
      Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
      if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
      {
        v10 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v10, Client->physicsId);
        if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2381, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
          __debugbreak();
        ObjectById->ReactToServerEvent(ObjectById, 169u, entEventParam);
      }
    }
    else
    {
LABEL_23:
      LODWORD(v12) = entEvent;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2408, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "VehicleCl_EntityEvent: Unknown vehicle event %d", v12) )
        __debugbreak();
    }
  }
}

/*
==============
CG_Vehicle_GetBone
==============
*/
__int64 CG_Vehicle_GetBone(const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  __int64 v3; 
  bool v6; 
  centity_t *Entity; 
  const CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 
  scr_string_t FlashTag; 
  const VehicleDef *v12; 
  scr_string_t WheelBoneTag; 
  unsigned __int8 *v14; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  v3 = bone;
  if ( entityIndex == 2047 )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2852, ASSERT_TYPE_ASSERT, "(entityIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2853, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v6 )
    __debugbreak();
LABEL_7:
  Entity = CG_GetEntity(localClientNum, entityIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2856, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, Entity);
  if ( !EntityDObj )
    return 0xFFFFFFFFi64;
  inOutIndex = -2;
  switch ( (int)v3 )
  {
    case 0:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_player, &inOutIndex, &modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 2:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_detach, &inOutIndex, &modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 3:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_popout, &inOutIndex, &modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 4:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_body_animate, &Entity->pose.vehicle.tag_body, &modelIndex) )
      {
        Entity->pose.vehicle.tag_body = -2;
        if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.body_animate_jnt, &Entity->pose.vehicle.tag_body, &modelIndex) )
          return 0xFFFFFFFFi64;
      }
      return Entity->pose.vehicle.tag_body;
    case 5:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_barrel, &Entity->pose.vehicle.tag_barrel, &modelIndex) )
        return 0xFFFFFFFFi64;
      return Entity->pose.vehicle.tag_barrel;
    case 6:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_turret, &Entity->pose.vehicle.tag_turret, &modelIndex) )
        return 0xFFFFFFFFi64;
      return Entity->pose.vehicle.tag_turret;
    case 7:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_turret_base, &inOutIndex, &modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    default:
      if ( (int)v3 < 8 )
      {
        if ( (int)v3 < 10 )
          return 0xFFFFFFFFi64;
      }
      else if ( (int)v3 < 10 )
      {
        FlashTag = BG_Vehicle_GetFlashTag(v3 - 8);
        if ( !DObjGetBoneIndexInternal_60(EntityDObj, FlashTag, &inOutIndex, &modelIndex) )
          return 0xFFFFFFFFi64;
        return inOutIndex;
      }
      if ( (int)v3 >= BGVehicles::GetWheelCount(NULL) + 10 )
        return 0xFFFFFFFFi64;
      v12 = VehicleSystem->GetVehicleDef(&VehicleSystem->BGVehicles, &Entity->nextState);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2911, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
        __debugbreak();
      WheelBoneTag = BGVehicles::GetWheelBoneTag(v12, v3 - 10);
      if ( !WheelBoneTag )
        return 0xFFFFFFFFi64;
      v14 = &Entity->pose.vehicle.rotorBoneIndex[v3 + 2];
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, WheelBoneTag, v14, &modelIndex) )
        return 0xFFFFFFFFi64;
      return *v14;
  }
}

/*
==============
CG_Vehicle_GetClientIndex
==============
*/
__int64 CG_Vehicle_GetClientIndex(const centity_t *cent)
{
  entityType_s eType; 
  bool v3; 
  const char *EntityTypeName; 

  if ( !cent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 451, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 403, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  eType = cent->nextState.eType;
  if ( ((eType - 12) & 0xFFFD) != 0 )
  {
    if ( eType == ET_VEHICLE_CORPSE )
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 452, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )");
    }
    else
    {
      EntityTypeName = BG_GetEntityTypeName(eType);
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 414, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Vehicle_IsCorpse: Entity type %s is not a vehicle", EntityTypeName);
    }
    if ( v3 )
      __debugbreak();
  }
  return cent->nextState.lerp.u.anonymous.data[0] & 0x7F;
}

/*
==============
CG_Vehicle_GetCrosshairWidget
==============
*/
const VehicleDef *CG_Vehicle_GetCrosshairWidget(LocalClientNum_t localClientNum)
{
  const VehicleDef *result; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 672, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  result = CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum);
  if ( result )
    return (const VehicleDef *)result->luiCrosshairWidget;
  return result;
}

/*
==============
CG_Vehicle_GetDef
==============
*/
const VehicleDef *CG_Vehicle_GetDef(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  CgVehicleSystem *VehicleSystem; 
  const centity_t *Entity; 
  const VehicleClient *Client; 
  __int64 v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2832, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2833, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(v8) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2835, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, cl_maxLocalClients) )
      __debugbreak();
  }
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Entity = CG_GetEntity(localClientNum, ps->vehicleState.entity);
  Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
  return CgVehicleSystem::GetClientDef(Client);
}

/*
==============
CG_Vehicle_GetFlags
==============
*/
__int64 CG_Vehicle_GetFlags(const centity_t *cent)
{
  entityType_s eType; 
  bool v3; 
  const char *EntityTypeName; 

  if ( !cent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 403, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  eType = cent->nextState.eType;
  if ( ((eType - 12) & 0xFFFD) != 0 )
  {
    if ( eType == ET_VEHICLE_CORPSE )
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 439, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )");
    }
    else
    {
      EntityTypeName = BG_GetEntityTypeName(eType);
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 414, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Vehicle_IsCorpse: Entity type %s is not a vehicle", EntityTypeName);
    }
    if ( v3 )
      __debugbreak();
  }
  return cent->nextState.lerp.u.anonymous.data[1] & 0x1FFFFFFF;
}

/*
==============
CG_Vehicle_GetInputBindingSet
==============
*/
const VehicleDef *CG_Vehicle_GetInputBindingSet(LocalClientNum_t localClientNum)
{
  const VehicleDef *result; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 655, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  result = CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum);
  if ( result )
    return (const VehicleDef *)(unsigned int)result->inputBindingSet;
  return result;
}

/*
==============
CG_Vehicle_GetRemoteControlledVehicle
==============
*/
char CG_Vehicle_GetRemoteControlledVehicle(const LocalClientNum_t localClientNum, const centity_t **outRemoteControlledVehicle)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  __int16 remoteControlEnt; 
  int entity; 
  int v8; 
  const centity_t *v9; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 562, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !outRemoteControlledVehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 563, ASSERT_TYPE_ASSERT, "(outRemoteControlledVehicle)", (const char *)&queryFormat, "outRemoteControlledVehicle") )
    __debugbreak();
  *outRemoteControlledVehicle = NULL;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 568, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  remoteControlEnt = p_predictedPlayerState->remoteControlEnt;
  if ( remoteControlEnt == 2047 )
  {
    entity = p_predictedPlayerState->vehicleState.entity;
    if ( entity == 2047 )
    {
      if ( p_predictedPlayerState == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 7u) )
        return 0;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
        __debugbreak();
      v8 = *(_DWORD *)&CG_GetEntity(localClientNum, p_predictedPlayerState->viewlocked_entNum)->nextState.clientLinkInfo & 0x7FF;
      if ( !v8 )
        return 0;
      entity = v8 - 1;
    }
  }
  else
  {
    entity = remoteControlEnt;
  }
  v9 = CG_GetEntity(localClientNum, entity);
  if ( v9 )
  {
    *outRemoteControlledVehicle = v9;
    return 1;
  }
  return 0;
}

/*
==============
CG_Vehicle_GetRemoteControlledVehicleDef
==============
*/
const VehicleDef *CG_Vehicle_GetRemoteControlledVehicleDef(LocalClientNum_t localClientNum)
{
  __int64 v2; 
  centity_t *v3; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  int v8; 
  centity_t *outRemoteControlledVehicle; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 606, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  v2 = 0i64;
  outRemoteControlledVehicle = NULL;
  if ( !CG_Vehicle_GetRemoteControlledVehicle(localClientNum, (const centity_t **)&outRemoteControlledVehicle) )
    return 0i64;
  v3 = outRemoteControlledVehicle;
  if ( !outRemoteControlledVehicle )
    return 0i64;
  if ( ((outRemoteControlledVehicle->pose.eType - 12) & 0xFD) == 0 || outRemoteControlledVehicle->pose.eType == 13 )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    Client = CgVehicleSystem::GetClient(VehicleSystem, v3);
    return CgVehicleSystem::GetClientDef(Client);
  }
  return (const VehicleDef *)v2;
}

/*
==============
CG_Vehicle_GetRemoteDriveEnt
==============
*/
entityState_t *CG_Vehicle_GetRemoteDriveEnt(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int entity; 
  int v4; 
  __int16 remoteEyesEnt; 
  centity_t *v6; 
  centity_t *v7; 
  __int64 v9; 
  int v10; 
  int v11; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2424, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 && LocalClientGlobals->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2425, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
    if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
    {
      v11 = 2046;
      LODWORD(v9) = remoteEyesEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2435, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      v10 = 2046;
      LODWORD(v9) = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2430, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  }
  v6 = CG_GetEntity(localClientNum, v4);
  v7 = v6;
  if ( (v6->flags & 1) != 0 )
    return &v6->nextState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2440, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEnt ))", (const char *)&queryFormat, "CENextValid( vehicleEnt )") )
    __debugbreak();
  return &v7->nextState;
}

/*
==============
CG_Vehicle_GetRemoteDriveWeapon
==============
*/
const Weapon *CG_Vehicle_GetRemoteDriveWeapon(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  unsigned int entity; 
  int v4; 
  __int16 remoteEyesEnt; 
  centity_t *v6; 
  BgWeaponHandle *p_nextState; 
  CgWeaponMap *v8; 
  __int64 v10; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2424, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 && LocalClientGlobals->predictedPlayerState.remoteEyesEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2425, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE || ps->remoteEyesEnt != ENTITYNUM_NONE") )
    __debugbreak();
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity == 2047 )
  {
    remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
    if ( (unsigned __int16)remoteEyesEnt >= 0x7FEu )
    {
      LODWORD(v10) = remoteEyesEnt;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2435, ASSERT_TYPE_ASSERT, "(unsigned)( ps->remoteEyesEnt ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->remoteEyesEnt doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v10, 2046) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
  }
  else
  {
    if ( entity >= 0x7FE )
    {
      LODWORD(v10) = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2430, ASSERT_TYPE_ASSERT, "(unsigned)( ps->vehicleState.entity ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "ps->vehicleState.entity doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v10, 2046) )
        __debugbreak();
    }
    v4 = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  }
  v6 = CG_GetEntity((const LocalClientNum_t)v1, v4);
  if ( (v6->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2440, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEnt ))", (const char *)&queryFormat, "CENextValid( vehicleEnt )") )
    __debugbreak();
  p_nextState = (BgWeaponHandle *)&v6->nextState;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v1];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  return BgWeaponMap::GetWeapon(v8, p_nextState[33]);
}

/*
==============
CG_Vehicle_GetWorldBoneMatrix
==============
*/
int CG_Vehicle_GetWorldBoneMatrix(const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  bool v8; 
  const centity_t *Entity; 
  const CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 

  if ( entityIndex == 2047 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2929, ASSERT_TYPE_ASSERT, "(entityIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2930, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v8 )
    __debugbreak();
LABEL_7:
  Entity = CG_GetEntity(localClientNum, entityIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2933, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, Entity);
  if ( EntityDObj )
    LODWORD(EntityDObj) = CG_DObjGetWorldBoneMatrix(&Entity->pose, EntityDObj, boneIndex, (tmat33_t<vec3_t> *)result, &result->m[3]);
  return (int)EntityDObj;
}

/*
==============
CG_Vehicle_HasViewLinkedTurret
==============
*/
bool CG_Vehicle_HasViewLinkedTurret(const LocalClientNum_t localClientNum, const centity_t *vehicleEntity, const playerState_s *ps)
{
  entityType_s eType; 
  __int16 viewlocked_entNum; 
  centity_t *Entity; 
  bool result; 
  __int64 v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2997, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2998, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  eType = vehicleEntity->nextState.eType;
  if ( ((eType - 12) & 0xFFFD) != 0 )
  {
    LODWORD(v10) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2999, ASSERT_TYPE_ASSERT, "( ( (vehicleEntity->nextState.eType == ET_VEHICLE) || (vehicleEntity->nextState.eType == ET_HELICOPTER) ) )", "( vehicleEntity->nextState.eType ) = %i", v10) )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3000, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  viewlocked_entNum = ps->viewlocked_entNum;
  result = 0;
  if ( viewlocked_entNum != 2047 )
  {
    Entity = CG_GetEntity(localClientNum, viewlocked_entNum);
    if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_TURRET && CG_Entity_IsParentOfChild(localClientNum, Entity, vehicleEntity) )
      return 1;
  }
  return result;
}

/*
==============
CG_Vehicle_InitBoneUsage
==============
*/
void CG_Vehicle_InitBoneUsage(LocalClientNum_t localClientNum, centity_t *cent)
{
  CgVehicleSystem *VehicleSystem; 
  __int64 v4; 
  entityType_s eType; 

  cent->pose.vehicle.boneUsage = 0;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1021, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v4 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &cent->nextState);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1024, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType != ET_HELICOPTER )
  {
    if ( eType != ET_VEHICLE || *(_BYTE *)(v4 + 8) != 12 || *(_BYTE *)(v4 + 256) != 8 )
      goto LABEL_13;
    cent->pose.turret.useOnVehicleAngles = 1;
  }
  cent->pose.vehicle.boneUsage = 1;
LABEL_13:
  if ( !cent->pose.vehicle.boneUsage )
    CgVehicleSystem::TreadBoneAnimInitResources(VehicleSystem, cent, (const VehicleDef *)v4);
}

/*
==============
CG_Vehicle_InterpolatePlayerState
==============
*/
void CG_Vehicle_InterpolatePlayerState(LocalClientNum_t localClientNum, const snapshot_t *prevSnap, const snapshot_t *nextSnap, float f, playerState_s *out)
{
  playerState_s *v5; 
  const playerState_s *v10; 
  const playerState_s *v11; 
  int entity; 
  centity_t *v13; 
  const dvar_t *v14; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  vec3_t *p_origin; 
  float *v; 
  int v19; 
  int v20; 
  bool v22; 
  float v23; 
  float v25; 
  float *p_tilt; 
  int v27; 
  bool v28; 
  float v29; 
  float v31; 
  float *p_gunAngles; 
  bool v33; 
  float v34; 
  float v36; 
  __int64 v37; 
  __int64 v38; 

  v5 = out;
  if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3071, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3072, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3073, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  v10 = prevSnap->GetPlayerState(prevSnap, (unsigned int)localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3076, ASSERT_TYPE_ASSERT, "(prevps)", (const char *)&queryFormat, "prevps") )
    __debugbreak();
  v11 = nextSnap->GetPlayerState(nextSnap, (unsigned int)localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3079, ASSERT_TYPE_ASSERT, "(nextps)", (const char *)&queryFormat, "nextps") )
    __debugbreak();
  entity = v11->vehicleState.entity;
  if ( entity == 2047 )
    goto LABEL_64;
  v13 = CG_GetEntity(localClientNum, entity);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v11->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    goto LABEL_28;
  v14 = DVARBOOL_vehiclestate_dont_interpolate_if_player_linked_at_all;
  if ( !DVARBOOL_vehiclestate_dont_interpolate_if_player_linked_at_all && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehiclestate_dont_interpolate_if_player_linked_at_all") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( (!v14->current.enabled || v11->linkEnt == 2047) && !BGVehicles::IsRemoteDrivingVehicleAndLinked(v11, v11->vehicleState.entity) )
    goto LABEL_28;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, v13);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3095, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
  {
LABEL_28:
    p_origin = &out->vehicleState.origin;
    if ( v10->vehicleState.entity == v11->vehicleState.entity )
    {
      p_origin->v[0] = (float)((float)(v11->vehicleState.origin.v[0] - v10->vehicleState.origin.v[0]) * f) + v10->vehicleState.origin.v[0];
      out->vehicleState.origin.v[1] = (float)((float)(v11->vehicleState.origin.v[1] - v10->vehicleState.origin.v[1]) * f) + v10->vehicleState.origin.v[1];
      out->vehicleState.origin.v[2] = (float)((float)(v11->vehicleState.origin.v[2] - v10->vehicleState.origin.v[2]) * f) + v10->vehicleState.origin.v[2];
      out->vehicleState.angVelocity.v[0] = (float)((float)(v11->vehicleState.angVelocity.v[0] - v10->vehicleState.angVelocity.v[0]) * f) + v10->vehicleState.angVelocity.v[0];
      out->vehicleState.angVelocity.v[1] = (float)((float)(v11->vehicleState.angVelocity.v[1] - v10->vehicleState.angVelocity.v[1]) * f) + v10->vehicleState.angVelocity.v[1];
      out->vehicleState.angVelocity.v[2] = (float)((float)(v11->vehicleState.angVelocity.v[2] - v10->vehicleState.angVelocity.v[2]) * f) + v10->vehicleState.angVelocity.v[2];
      v = v10->vehicleState.angles.v;
      out->vehicleState.tiltVelocity.v[0] = (float)((float)(v11->vehicleState.tiltVelocity.v[0] - v10->vehicleState.tiltVelocity.v[0]) * f) + v10->vehicleState.tiltVelocity.v[0];
      v19 = 0;
      out->vehicleState.tiltVelocity.v[1] = (float)((float)(v11->vehicleState.tiltVelocity.v[1] - v10->vehicleState.tiltVelocity.v[1]) * f) + v10->vehicleState.tiltVelocity.v[1];
      v20 = 0;
      _XMM8 = 0i64;
      v22 = 1;
      do
      {
        if ( !v22 )
        {
          LODWORD(v38) = 3;
          LODWORD(v37) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        v23 = *(float *)((char *)v + (char *)v11 - (char *)v10);
        if ( (unsigned int)v20 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v37) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v25 = (float)((float)((float)((float)((float)(v23 - *v) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * f) + *v;
        if ( (unsigned int)v20 >= 3 )
        {
          LODWORD(v38) = 3;
          LODWORD(v37) = v20;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        *(float *)((char *)v++ + (char *)out - (char *)v10) = v25;
        v22 = (unsigned int)++v20 < 3;
      }
      while ( v20 < 3 );
      p_tilt = (float *)&v10->vehicleState.tilt;
      v27 = 0;
      v28 = 1;
      do
      {
        if ( !v28 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        v29 = *(float *)((char *)p_tilt + (char *)v11 - (char *)v10);
        if ( (unsigned int)v27 >= 2 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v31 = (float)((float)((float)((float)((float)(v29 - *p_tilt) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * f) + *p_tilt;
        if ( (unsigned int)v27 >= 2 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        *(float *)((char *)p_tilt++ + (char *)out - (char *)v10) = v31;
        v28 = (unsigned int)++v27 < 2;
      }
      while ( v27 < 2 );
      p_gunAngles = (float *)&v10->vehicleState.gunAngles;
      v33 = 1;
      do
      {
        if ( !v33 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        v34 = *(float *)((char *)p_gunAngles + (char *)v11 - (char *)v10);
        if ( (unsigned int)v19 >= 2 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v36 = (float)((float)((float)((float)((float)(v34 - *p_gunAngles) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * f) + *p_gunAngles;
        if ( (unsigned int)v19 >= 2 )
        {
          LODWORD(v38) = 2;
          LODWORD(v37) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v37, v38) )
            __debugbreak();
        }
        *(float *)((char *)p_gunAngles++ + (char *)out - (char *)v10) = v36;
        v33 = (unsigned int)++v19 < 2;
      }
      while ( v19 < 2 );
      v5 = out;
      out->vehicleState.flags = v11->vehicleState.flags;
    }
    else
    {
      out->vehicleState.flags = 0;
      CG_GetPoseOrigin(&v13->pose, p_origin);
      out->vehicleState.angles = v13->pose.angles;
      *(_OWORD *)out->vehicleState.velocity.v = 0ui64;
      *(_QWORD *)&out->vehicleState.angVelocity.y = 0i64;
      out->vehicleState.tilt = 0i64;
      out->vehicleState.tiltVelocity = 0i64;
      out->vehicleState.gunAngles = 0i64;
    }
LABEL_64:
    v5->vehicleState.entity = v11->vehicleState.entity;
  }
}

/*
==============
CG_Vehicle_IsClientValid
==============
*/
bool CG_Vehicle_IsClientValid(LocalClientNum_t localClientNum, const VehicleClient *veh)
{
  const centity_t *Entity; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 698, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, veh->entIndex);
  return CG_Vehicle_IsVehicleEntity(Entity);
}

/*
==============
CG_Vehicle_IsCorpse
==============
*/
char CG_Vehicle_IsCorpse(const centity_t *cent)
{
  entityType_s eType; 
  const char *EntityTypeName; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 403, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( ((eType - 12) & 0xFFFD) != 0 )
  {
    if ( eType == ET_VEHICLE_CORPSE )
      return 1;
    EntityTypeName = BG_GetEntityTypeName(eType);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 414, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Vehicle_IsCorpse: Entity type %s is not a vehicle", EntityTypeName) )
      __debugbreak();
  }
  return 0;
}

/*
==============
CG_Vehicle_IsRemoteControlledPhysicsVehicle
==============
*/
bool CG_Vehicle_IsRemoteControlledPhysicsVehicle(LocalClientNum_t localClientNum)
{
  const VehicleDef *RemoteControlledVehicleDef; 

  RemoteControlledVehicleDef = CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum);
  if ( !RemoteControlledVehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 689, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return RemoteControlledVehicleDef->vehiclePhysicsDef.physicsEnabled != 0;
}

/*
==============
CG_Vehicle_IsVehicleEntity
==============
*/
bool CG_Vehicle_IsVehicleEntity(const centity_t *const cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return (cent->flags & 1) != 0 && BG_IsVehicleEntity(&cent->nextState);
}

/*
==============
CG_Vehicle_PlayerStateToVehicleState
==============
*/
void CG_Vehicle_PlayerStateToVehicleState(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  centity_t *v4; 
  CgVehicleSystem *vehicleSystem; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  __m256i v8; 
  unsigned __int8 eType; 
  __m256i v10; 
  LerpEntityStateInfoVolumeGrapple v11; 
  CgVehicleSystem *v12; 
  VehicleClient *Client; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2948, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity != 2047 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.vehicleState.entity);
    v4 = Entity;
    if ( (Entity->flags & 1) != 0 && ((Entity->pose.eType - 12) & 0xFD) == 0 )
    {
      if ( !CgVehicleSystem::PhysicsIsClientForcingServerAuth(localClientNum, Entity) )
      {
        vehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        Handler = CgHandler::getHandler(localClientNum);
        BG_PlayerStateToVehicleState(&LocalClientGlobals->predictedPlayerState, &v4->nextState, 0, Handler, Instance, vehicleSystem);
        v8 = *(__m256i *)&v4->nextState.lerp.pos.trDelta.y;
        eType = v4->nextState.eType;
        *(__m256i *)v4->prevState.eFlags.m_flags = *(__m256i *)v4->nextState.lerp.eFlags.m_flags;
        v10 = *(__m256i *)v4->nextState.lerp.apos.trDelta.v;
        *(__m256i *)&v4->prevState.pos.trDelta.y = v8;
        v11 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&v4->nextState.lerp.u.infoVolumeGrapple + 20);
        *(__m256i *)v4->prevState.apos.trDelta.v = v10;
        *(LerpEntityStateInfoVolumeGrapple *)((char *)&v4->prevState.u.infoVolumeGrapple + 20) = v11;
        v4->pose.eType = eType;
      }
      v12 = CgVehicleSystem::GetVehicleSystem(localClientNum);
      Client = CgVehicleSystem::GetClient(v12, v4);
      BG_VehicleAnim_Update(v12, &v4->nextState, &Client->animinfo, (float)LocalClientGlobals->frametime * 0.001);
    }
  }
}

/*
==============
CG_Vehicle_PredictEntityPushing
==============
*/
void CG_Vehicle_PredictEntityPushing(LocalClientNum_t localClientNum, int groundEntIndex, int oldTime, int newTime, vec3_t *inOutEntOrigin)
{
  centity_t *Entity; 
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
  CgTrajectory v20; 
  vec3_t outPos; 
  vec3_t v22; 
  tmat33_t<vec3_t> v23; 
  vec3_t angles; 
  vec3_t outAng; 
  char v26; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( groundEntIndex > 0 && (unsigned int)groundEntIndex < 0x7FE )
  {
    Entity = CG_GetEntity(localClientNum, groundEntIndex);
    if ( Entity->nextState.eType == ET_VEHICLE )
    {
      CgTrajectory::CgTrajectory(&v20, localClientNum, Entity, &Entity->prevState);
      BgTrajectory::EvaluateAngTrajectory(&v20, oldTime, &outAng);
      BgTrajectory::EvaluateAngTrajectory(&v20, newTime, &angles);
      BgTrajectory::EvaluatePosTrajectory(&v20, oldTime, &outPos);
      BgTrajectory::EvaluatePosTrajectory(&v20, newTime, &v22);
      AnglesToAxis(&angles, &axis);
      AnglesToAxis(&outAng, &in);
      MatrixTranspose(&in, &out);
      MatrixMultiply(&out, &axis, &v23);
      v9 = inOutEntOrigin->v[0] - outPos.v[0];
      v10 = inOutEntOrigin->v[2] - outPos.v[2];
      v11 = inOutEntOrigin->v[1] - outPos.v[1];
      if ( &v26 == (char *)inOutEntOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v12 = v9 * v23.m[0].v[1];
      v13 = v11 * v23.m[1].v[1];
      v14 = v10 * v23.m[2].v[1];
      inOutEntOrigin->v[0] = (float)((float)((float)(v11 * v23.m[1].v[0]) + (float)(v9 * v23.m[0].v[0])) + (float)(v10 * v23.m[2].v[0])) + v22.v[0];
      v15 = v13 + v12;
      v16 = v11 * v23.m[1].v[2];
      v17 = (float)(v15 + v14) + v22.v[1];
      v18 = v9 * v23.m[0].v[2];
      v19 = v10 * v23.m[2].v[2];
      inOutEntOrigin->v[1] = v17;
      inOutEntOrigin->v[2] = (float)((float)(v16 + v18) + v19) + v22.v[2];
    }
  }
}

/*
==============
CG_Vehicle_RemoteControlledVehicleType
==============
*/
__int64 CG_Vehicle_RemoteControlledVehicleType(LocalClientNum_t localClientNum, VehiclePhysicsGameProfile *vehicleGameProfile)
{
  const VehicleDef *RemoteControlledVehicleDef; 
  VehicleType type; 
  int v8; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( vehicleGameProfile )
    *vehicleGameProfile = VEH_GAMEPROFILE_COUNT;
  RemoteControlledVehicleDef = CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum);
  if ( !RemoteControlledVehicleDef )
    return 14i64;
  type = RemoteControlledVehicleDef->type;
  if ( vehicleGameProfile )
  {
    if ( RemoteControlledVehicleDef->vehiclePhysicsDef.physicsEnabled )
      *vehicleGameProfile = RemoteControlledVehicleDef->vehiclePhysicsDef.physics_gameProfile;
  }
  return (unsigned __int8)type;
}

/*
==============
CG_Vehicle_ResetEntity
==============
*/
void CG_Vehicle_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, bool teleported)
{
  CgVehicleSystem *VehicleSystem; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 728, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 729, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  if ( !teleported )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 737, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    CgVehicleSystem::ResetVehicle(VehicleSystem, cent);
    cent->pose.scriptMover.doVehicleControllers = 0;
  }
}

/*
==============
CG_Vehicle_ResetEntityPhysics
==============
*/
void CG_Vehicle_ResetEntityPhysics(LocalClientNum_t localClientNum, centity_t *cent)
{
  CgVehicleSystem *VehicleSystem; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 747, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 748, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 751, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  CgVehicleSystem::ResetVehiclePhysics(VehicleSystem, cent);
}

/*
==============
CG_Vehicle_ShouldApplyMaterialTime
==============
*/
bool CG_Vehicle_ShouldApplyMaterialTime(const VehicleClient *veh)
{
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 920, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  return CgVehicleSystem::GetClientDef(veh)->texScrollScale > 0.0;
}

/*
==============
CG_Vehicle_ShouldDelayPacketEntity
==============
*/
_BOOL8 CG_Vehicle_ShouldDelayPacketEntity(LocalClientNum_t localClientNum, const cg_t *cgameGlob, const centity_t *cent)
{
  const dvar_t *v6; 
  int entity; 
  const centity_t *v8; 
  centity_t *v10; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3025, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsSpectating(&cgameGlob->predictedPlayerState) || cgameGlob->predictedPlayerState.pm_type == 5 )
  {
    v6 = DVARBOOL_cg_vehicleSpectateEntityOrderFixActive;
    if ( !DVARBOOL_cg_vehicleSpectateEntityOrderFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_vehicleSpectateEntityOrderFixActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      return 0i64;
  }
  entity = cgameGlob->predictedPlayerState.vehicleState.entity;
  if ( cent->nextState.number == entity )
  {
    v8 = cent;
    return !CG_Vehicle_HasViewLinkedTurret(localClientNum, v8, &cgameGlob->predictedPlayerState);
  }
  if ( entity == 2047 )
    return 0i64;
  v10 = CG_GetEntity(localClientNum, entity);
  if ( (v10->flags & 1) == 0 )
    return 0i64;
  if ( cent->nextState.eType == ET_SCRIPTMOVER && v10->nextState.otherEntityNum == cent->nextState.number )
  {
    v8 = v10;
    return !CG_Vehicle_HasViewLinkedTurret(localClientNum, v8, &cgameGlob->predictedPlayerState);
  }
  return CG_Entity_IsParentOfChild(localClientNum, cent, v10);
}

/*
==============
CG_Vehicle_UpdateCamoAndSticker
==============
*/
void CG_Vehicle_UpdateCamoAndSticker(const LocalClientNum_t localClientNum, const unsigned __int8 *desiredCamoIndices, const unsigned __int16 desiredCamoCount, const unsigned __int16 *desiredStickerIndices, const unsigned __int16 desiredStickerCount, DObj *obj)
{
  DObj *v6; 
  unsigned __int16 v8; 
  const unsigned __int16 *v9; 
  LocalClientNum_t v11; 
  Camo **p_First; 
  __int64 v13; 
  unsigned int v14; 
  const Camo *VehicleCamo; 
  unsigned int v16; 
  MaterialOverrideType *p_overrideType; 
  __int64 v18; 
  Camo **v19; 
  DObjMaterialData *materialData; 
  bool v21; 
  unsigned __int8 v22; 
  int v23; 
  int v24; 
  Material *v25; 
  Material *v26; 
  __int64 v27; 
  char v28; 
  bool v29; 
  DObjCamoParams *v30; 
  __int64 v31; 
  const Camo *camo; 
  char v33; 
  unsigned int i; 
  DObjStickerSlot *slots; 
  __int64 v36; 
  const Material *overrideMaterial; 
  bool v38; 
  Camo **v39; 
  __int64 v40; 
  DObjCamoParams *v41; 
  Camo *v42; 
  DObjMaterialData *v43; 
  __int64 v44; 
  __int64 v45; 
  std::greater<Camo const *> v46; 
  std::greater<Camo const *> v47; 
  unsigned int numModels; 
  DObjStickerSlotList Buf2; 
  DObjStickerSlot v53; 
  Camo *Buf1; 
  const Camo *v55; 
  const Camo *v56; 
  const Camo *v57; 
  const Camo *v58; 
  const Camo *v59; 
  const Camo *v60; 
  const Camo *v61; 
  Camo *_First; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  DObjCamoParams _Last[8]; 

  v6 = obj;
  v8 = desiredStickerCount;
  v9 = desiredStickerIndices;
  v11 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3393, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3394, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  memset_0(_Last, 0, sizeof(_Last));
  _First = NULL;
  v63 = 0i64;
  v64 = 0i64;
  v65 = 0i64;
  v66 = 0i64;
  v67 = 0i64;
  v68 = 0i64;
  v69 = 0i64;
  numModels = desiredCamoCount;
  if ( desiredCamoCount )
  {
    p_First = &_First;
    v13 = desiredCamoCount;
    do
    {
      v14 = *desiredCamoIndices;
      if ( *desiredCamoIndices )
      {
        if ( v14 >= BG_Camo_GetVehicleCamoCount() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3412, ASSERT_TYPE_ASSERT, "(camoIndex < BG_Camo_GetVehicleCamoCount())", (const char *)&queryFormat, "camoIndex < BG_Camo_GetVehicleCamoCount()") )
          __debugbreak();
        VehicleCamo = BG_Camo_GetVehicleCamo(v14);
        if ( !VehicleCamo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3414, ASSERT_TYPE_ASSERT, "(desiredCamo)", (const char *)&queryFormat, "desiredCamo") )
          __debugbreak();
        *p_First = (Camo *)VehicleCamo;
      }
      ++desiredCamoIndices;
      ++p_First;
      --v13;
    }
    while ( v13 );
    v6 = obj;
    v11 = localClientNum;
    v9 = desiredStickerIndices;
    v8 = desiredStickerCount;
  }
  std::_Sort_unchecked<Camo const * *,std::greater<Camo const *>>((const Camo **)&_First, &_Last[0].camo, 8i64, v46);
  v16 = numModels;
  if ( numModels )
  {
    p_overrideType = &_Last[0].overrideType;
    v18 = numModels;
    v19 = &_First;
    do
    {
      if ( *v19 )
      {
        *((_QWORD *)p_overrideType - 1) = *v19;
        *p_overrideType = MATERIAL_OVERRIDETYPE_CAMO;
        *((_QWORD *)p_overrideType + 1) = 0i64;
        *((_BYTE *)p_overrideType + 16) = 0;
      }
      ++v19;
      p_overrideType += 8;
      --v18;
    }
    while ( v18 );
  }
  Buf1 = NULL;
  v55 = NULL;
  v56 = NULL;
  v57 = NULL;
  v58 = NULL;
  v59 = NULL;
  v60 = NULL;
  v61 = NULL;
  if ( v6->modelMaterialOverrides )
  {
    materialData = v6->materialData;
    if ( materialData )
    {
      Buf1 = (Camo *)materialData->camoAsset[0];
      v55 = materialData->camoAsset[1];
      v56 = materialData->camoAsset[2];
      v57 = materialData->camoAsset[3];
      v58 = materialData->camoAsset[4];
      v59 = materialData->camoAsset[5];
      v60 = materialData->camoAsset[6];
      v61 = materialData->camoAsset[7];
    }
  }
  std::_Sort_unchecked<Camo const * *,std::greater<Camo const *>>((const Camo **)&Buf1, (const Camo **)&_First, 8i64, v46);
  v21 = memcmp_0(&Buf1, &_First, 0x40ui64) != 0;
  v47 = (std::greater<Camo const *>)v21;
  memset_0(&Buf2, 0, sizeof(Buf2));
  if ( !CgVehicleSystem::GetVehicleSystem(v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3459, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  if ( v8 > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3460, ASSERT_TYPE_ASSERT, "(desiredStickerCount <= VEHICLE_STICKER_SLOT_NUM)", (const char *)&queryFormat, "desiredStickerCount <= VEHICLE_STICKER_SLOT_NUM") )
    __debugbreak();
  v22 = 0;
  if ( v8 )
  {
    do
    {
      if ( v22 >= 2u )
      {
        LODWORD(v45) = 2;
        LODWORD(v44) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 523, ASSERT_TYPE_ASSERT, "(unsigned)( slotIndex ) < (unsigned)( ( sizeof( *array_counter( ms_defaultVehicleStickerMaterialIndices ) ) + 0 ) )", "slotIndex doesn't index ARRAY_COUNT( ms_defaultVehicleStickerMaterialIndices )\n\t%i not in [0, %i)", v44, v45) )
          __debugbreak();
      }
      v23 = v9[v22];
      if ( v9[v22] )
      {
        v24 = CgVehicleSystem::ms_defaultVehicleStickerMaterialIndices[v22];
        if ( v24 )
        {
          v25 = CG_Draw_StickerMaterialHandleForIndex(v11, v24);
          v26 = CG_Draw_StickerMaterialHandleForIndex(v11, v23);
          if ( v25 && v26 )
          {
            v27 = v22;
            Buf2.slots[v27].blankMaterial = v25;
            Buf2.slots[v27].overrideMaterial = v26;
          }
          v9 = desiredStickerIndices;
        }
      }
      ++v22;
    }
    while ( v22 < desiredStickerCount );
    v6 = obj;
    v16 = numModels;
  }
  std::_Sort_unchecked<DObjStickerSlot *,bool (*)(DObjStickerSlot const &,DObjStickerSlot const &)>(Buf2.slots, &v53, 4i64, DObjStickerSlotGreaterThan);
  memset_0(&v53.overrideMaterial, 0, 0x98ui64);
  if ( v6->modelMaterialOverrides )
    DObjGetStickerMaterialOverrides(v6, NULL, (DObjStickerSlotList *)&v53.overrideMaterial);
  if ( v21 || memcmp_0(&v53.overrideMaterial, &Buf2, 0x98ui64) )
  {
    v28 = 1;
    v29 = Stream_TouchDObjAndCheck(v6, defaultStreamMipLevelToCheck);
    if ( v16 )
    {
      v30 = _Last;
      v31 = v16;
      do
      {
        camo = v30->camo;
        v33 = 1;
        if ( v30->camo && camo->textureDefCount )
        {
          if ( !camo->textureDefs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3510, ASSERT_TYPE_ASSERT, "(camo->textureDefs)", (const char *)&queryFormat, "camo->textureDefs") )
            __debugbreak();
          for ( i = 0; i < camo->textureDefCount; ++i )
            v33 &= Stream_TouchImageAndCheck(camo->textureDefs[i].image, defaultStreamMipLevelToCheck);
        }
        else
        {
          v33 = v29;
        }
        v28 &= v33;
        ++v30;
        --v31;
      }
      while ( v31 );
      v6 = obj;
      v16 = numModels;
    }
    if ( desiredStickerCount )
    {
      slots = Buf2.slots;
      v36 = desiredStickerCount;
      do
      {
        overrideMaterial = slots->overrideMaterial;
        if ( !overrideMaterial || overrideMaterial == slots->blankMaterial )
          v38 = v29;
        else
          v38 = Stream_TouchMaterialAndCheck(overrideMaterial);
        v28 &= v38;
        ++slots;
        --v36;
      }
      while ( v36 );
    }
    if ( v28 )
    {
      DObjFreeMaterialOverrides(v6);
      DObjFreeMaterialData(v6);
      if ( desiredCamoCount )
        DObjSetCamoMaterialOverride(v6, _Last, v16);
      else
        DObjAllocMaterialOverrides(v6);
      if ( !v6->modelMaterialOverrides && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3568, ASSERT_TYPE_ASSERT, "(obj->modelMaterialOverrides)", (const char *)&queryFormat, "obj->modelMaterialOverrides") )
        __debugbreak();
      DObjSetStickerMaterialOverrides(v6, NULL, &Buf2);
      _First = NULL;
      v63 = 0i64;
      v64 = 0i64;
      v65 = 0i64;
      v66 = 0i64;
      v67 = 0i64;
      v68 = 0i64;
      v69 = 0i64;
      if ( v16 )
      {
        v39 = &_First;
        v40 = v16;
        v41 = _Last;
        do
        {
          v42 = (Camo *)v41->camo;
          ++v41;
          *v39++ = v42;
          --v40;
        }
        while ( v40 );
      }
      Buf1 = NULL;
      v55 = NULL;
      v56 = NULL;
      v57 = NULL;
      v58 = NULL;
      v59 = NULL;
      v60 = NULL;
      v61 = NULL;
      if ( v6->modelMaterialOverrides )
      {
        v43 = v6->materialData;
        if ( v43 )
        {
          Buf1 = (Camo *)v43->camoAsset[0];
          v55 = v43->camoAsset[1];
          v56 = v43->camoAsset[2];
          v57 = v43->camoAsset[3];
          v58 = v43->camoAsset[4];
          v59 = v43->camoAsset[5];
          v60 = v43->camoAsset[6];
          v61 = v43->camoAsset[7];
        }
      }
      std::_Sort_unchecked<Camo const * *,std::greater<Camo const *>>((const Camo **)&Buf1, (const Camo **)&_First, 8i64, v47);
      if ( memcmp_0(&Buf1, &_First, 0x40ui64) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3591, ASSERT_TYPE_ASSERT, "(I_memcmp( existingCamos, desiredCamos, sizeof( desiredCamos ) ) == 0)", (const char *)&queryFormat, "I_memcmp( existingCamos, desiredCamos, sizeof( desiredCamos ) ) == 0") )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_Vehicle_UpdateMaterialTime
==============
*/
void CG_Vehicle_UpdateMaterialTime(VehicleClient *veh)
{
  const VehicleDef *ClientDef; 
  __int128 v4; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 934, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(veh);
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 920, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( CgVehicleSystem::GetClientDef(veh)->texScrollScale <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 937, ASSERT_TYPE_ASSERT, "(CG_Vehicle_ShouldApplyMaterialTime( veh ))", (const char *)&queryFormat, "CG_Vehicle_ShouldApplyMaterialTime( veh )") )
    __debugbreak();
  v4 = 0i64;
  *(float *)&v4 = (float)((float)((float)veh->frameTime * veh->localSpeed.v[0]) * 0.0000056818185) * ClientDef->texScrollScale;
  _XMM5 = v4;
  if ( ClientDef->type == VEH_TREADED )
  {
    _XMM0 = v4 & _xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm3
      vblendvps xmm5, xmm5, xmm4, xmm1
    }
  }
  veh->materialTime = *(float *)&_XMM5 + veh->materialTime;
}

/*
==============
CgVehicleSystem::ComputeForwardSpeed
==============
*/
float CgVehicleSystem::ComputeForwardSpeed(CgVehicleSystem *this, VehicleClient *veh, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  float v7; 
  BgVehiclePhysics *ObjectById; 
  unsigned int v9; 
  unsigned int PhysicsBodyId; 
  Physics_WorldId m_worldId; 
  hknpWorld *world; 
  float *v14; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  float v16; 
  float v17; 
  float v18; 
  __int64 v19; 
  int v20[4]; 
  __int64 v21; 
  vec3_t linVel; 
  tmat33_t<vec3_t> axis; 

  v21 = -2i64;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1183, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1184, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1187, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v7 = veh->localSpeed.v[0];
  if ( BGVehicles::PhysicsIsValid(veh->physicsId) )
  {
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, veh->physicsId);
    if ( !BgVehiclePhysics::IsDynamic(ObjectById) || LocalClientGlobals->inKillCam )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(ObjectById);
      m_worldId = ObjectById->m_worldId;
      if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", ObjectById->m_worldId) )
        __debugbreak();
      if ( (PhysicsBodyId & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v19) = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v19) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld(m_worldId)->world;
      if ( !world )
      {
        LODWORD(v19) = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v19) )
          __debugbreak();
      }
      v14 = (float *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
      return (float)((float)(_mm_shuffle_ps((__m128)*(unsigned __int64 *)ObjectById->m_history.m_lastLinearVel.v, (__m128)*(unsigned __int64 *)ObjectById->m_history.m_lastLinearVel.v, 85).m128_f32[0] * v14[1]) + (float)(COERCE_FLOAT(*(_QWORD *)ObjectById->m_history.m_lastLinearVel.v) * *v14)) + (float)(ObjectById->m_history.m_lastLinearVel.v[2] * v14[2]);
    }
    else
    {
      if ( BgVehiclePhysics::IsPhysicsBodyIdValid(ObjectById) )
      {
        v9 = BgVehiclePhysics::GetPhysicsBodyId(ObjectById);
        Physics_GetRigidBodyLinVel((const Physics_WorldId)ObjectById->m_worldId, v9, &linVel);
      }
      return (float)((float)(linVel.v[1] * ObjectById->m_transform.m[0].v[1]) + (float)(linVel.v[0] * ObjectById->m_transform.m[0].v[0])) + (float)(linVel.v[2] * ObjectById->m_transform.m[0].v[2]);
    }
  }
  else
  {
    if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 0.001 )
    {
      CG_GetPoseOrigin(&cent->pose, &linVel);
      if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 567, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !cent->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
        __debugbreak();
      FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
      FunctionPointer_prevOrigin(&cent->pose.prevOrigin.prevOrigin, (vec3_t *)v20);
      v16 = linVel.v[0] - *(float *)v20;
      v17 = linVel.v[1] - *(float *)&v20[1];
      v18 = linVel.v[2] - *(float *)&v20[2];
      if ( LocalClientGlobals->frametime > 0 && (float)((float)(v17 * v17) + (float)(v16 * v16)) > 0.001 )
      {
        AnglesToAxis(&cent->pose.prevAngles, &axis);
        v7 = (float)((float)((float)(v17 * axis.m[0].v[1]) + (float)(v16 * axis.m[0].v[0])) + (float)(v18 * axis.m[0].v[2])) * (float)(1000.0 / (float)LocalClientGlobals->frametime);
      }
      memset(v20, 0, 0xCui64);
      memset(&linVel, 0, sizeof(linVel));
    }
    return v7;
  }
}

/*
==============
CgVehicleSystem::DeleteVehicle
==============
*/
void CgVehicleSystem::DeleteVehicle(CgVehicleSystem *this, int entIndex)
{
  int v2; 
  VehicleClient *m_vehicleClients; 
  bool v4; 
  centity_t *Entity; 
  bool v8; 
  DObj *ClientDObj; 
  const VehicleDef *ClientDef; 
  char *fmt; 
  __int64 v12; 
  __int64 v13; 
  __int128 v14; 
  __m256i v15; 
  __int128 v16; 

  v2 = 0;
  m_vehicleClients = this->m_vehicleClients;
  v4 = 1;
  while ( 1 )
  {
    if ( !v4 )
    {
      LODWORD(v13) = 128;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !m_vehicleClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 351, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    if ( m_vehicleClients->entIndex == entIndex )
      break;
    ++v2;
    ++m_vehicleClients;
    v4 = (unsigned int)v2 < 0x80;
    if ( v2 >= 128 )
      return;
  }
  LODWORD(v12) = this->m_localClientNum;
  LODWORD(fmt) = m_vehicleClients->entIndex;
  Com_Printf(14, "CgVehicleSystem::DeleteVehicle %d: (defIndex = %d), (entIndex = %d), (localClientNum = %d)\n", (unsigned int)m_vehicleClients->index, (unsigned int)m_vehicleClients->defIndex, fmt, v12);
  CgVehicleSystem::TreadBoneAnimDestroyResources(this, m_vehicleClients);
  this->PhysicsDestroyVehicle(this, &m_vehicleClients->physicsId);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  v8 = IsScriptMoverVehicle(Entity);
  if ( v8 )
  {
    v15 = *(__m256i *)m_vehicleClients->wheelSpinAngle;
    v14 = *(_OWORD *)&m_vehicleClients->wheelSpinAngle[8];
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, this->m_localClientNum);
    if ( ClientDObj )
    {
      ClientDef = CgVehicleSystem::GetClientDef(m_vehicleClients->defIndex);
      if ( ClientDef )
      {
        if ( CgVehicleSystem::HasSuspensionEnabled(this, Entity) )
          CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(this, ClientDef, ClientDObj, Entity);
      }
    }
  }
  else
  {
    v14 = v16;
  }
  memset_0(m_vehicleClients, 0, sizeof(VehicleClient));
  if ( v8 )
  {
    *(__m256i *)m_vehicleClients->wheelSpinAngle = v15;
    *(_OWORD *)&m_vehicleClients->wheelSpinAngle[8] = v14;
  }
}

/*
==============
CgVehicleSystem::DisableSuspension
==============
*/
void CgVehicleSystem::DisableSuspension(CgVehicleSystem *this, centity_t *cent)
{
  if ( cent )
  {
    cent->pose.coverWall.coverGrid[4] = -1082130432;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2317, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    MEMORY[0xB0] = -1082130432;
  }
}

/*
==============
CgVehicleSystem::Draw2D
==============
*/
void CgVehicleSystem::Draw2D(CgVehicleSystem *this, const ScreenPlacement *scrPlace)
{
  BgVehiclePhysics *v4; 
  bool v5; 
  const vec4_t *color; 

  if ( scrPlace )
  {
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.vehicleState.entity != 2047 )
    {
      v4 = (BgVehiclePhysics *)((__int64 (__fastcall *)(CgVehicleSystem *))this->PhysicsGetVehicleObject)(this);
      if ( v4 )
      {
        if ( !v4->m_clientGeoLoaded )
        {
          v5 = BgVehiclePhysics::CheckForWorldCollision(v4);
          color = &colorRed;
          if ( v5 )
            color = &colorYellow;
          UI_FillRect(scrPlace, 0.0, 0.0, 16.0, 16.0, 8, 9, color);
        }
      }
    }
  }
}

/*
==============
CgVehicleSystem::EnableSuspension
==============
*/
void CgVehicleSystem::EnableSuspension(CgVehicleSystem *this, centity_t *cent, float suspDist)
{
  if ( cent )
  {
    cent->pose.turret.barrelPitch = suspDist;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2324, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    MEMORY[0xB0] = suspDist;
  }
}

/*
==============
CgVehicleSystem::GetBone
==============
*/
__int64 CgVehicleSystem::GetBone(CgVehicleSystem *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  __int64 v4; 
  bool v7; 
  centity_t *Entity; 
  const CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 
  scr_string_t FlashTag; 
  const VehicleDef *v13; 
  scr_string_t WheelBoneTag; 
  unsigned __int8 *v15; 
  int modelIndex[10]; 
  unsigned __int8 inOutIndex; 

  v4 = bone;
  if ( entityIndex == 2047 )
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3222, ASSERT_TYPE_ASSERT, "(entityIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3223, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v7 )
    __debugbreak();
LABEL_7:
  Entity = CG_GetEntity(localClientNum, entityIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3226, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, Entity);
  if ( !EntityDObj )
    return 0xFFFFFFFFi64;
  inOutIndex = -2;
  switch ( (int)v4 )
  {
    case 0:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_player, &inOutIndex, modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 2:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_detach, &inOutIndex, modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 3:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_popout, &inOutIndex, modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    case 4:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_body_animate, &Entity->pose.vehicle.tag_body, modelIndex) )
      {
        Entity->pose.vehicle.tag_body = -2;
        if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.body_animate_jnt, &Entity->pose.vehicle.tag_body, modelIndex) )
          return 0xFFFFFFFFi64;
      }
      return Entity->pose.vehicle.tag_body;
    case 5:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_barrel, &Entity->pose.vehicle.tag_barrel, modelIndex) )
        return 0xFFFFFFFFi64;
      return Entity->pose.vehicle.tag_barrel;
    case 6:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_turret, &Entity->pose.vehicle.tag_turret, modelIndex) )
        return 0xFFFFFFFFi64;
      return Entity->pose.vehicle.tag_turret;
    case 7:
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, scr_const.tag_turret_base, &inOutIndex, modelIndex) )
        return 0xFFFFFFFFi64;
      return inOutIndex;
    default:
      if ( (int)v4 < 8 )
      {
        if ( (int)v4 < 10 )
          return 0xFFFFFFFFi64;
      }
      else if ( (int)v4 < 10 )
      {
        FlashTag = BG_Vehicle_GetFlashTag(v4 - 8);
        if ( !DObjGetBoneIndexInternal_60(EntityDObj, FlashTag, &inOutIndex, modelIndex) )
          return 0xFFFFFFFFi64;
        return inOutIndex;
      }
      if ( (int)v4 >= BGVehicles::GetWheelCount(NULL) + 10 )
        return 0xFFFFFFFFi64;
      v13 = VehicleSystem->GetVehicleDef(&VehicleSystem->BGVehicles, &Entity->nextState);
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3281, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
        __debugbreak();
      WheelBoneTag = BGVehicles::GetWheelBoneTag(v13, v4 - 10);
      if ( !WheelBoneTag )
        return 0xFFFFFFFFi64;
      v15 = &Entity->pose.vehicle.rotorBoneIndex[v4 + 2];
      if ( !DObjGetBoneIndexInternal_60(EntityDObj, WheelBoneTag, v15, modelIndex) )
        return 0xFFFFFFFFi64;
      return *v15;
  }
}

/*
==============
CgVehicleSystem::GetClient
==============
*/
VehicleClient *CgVehicleSystem::GetClient(CgVehicleSystem *this, const centity_t *cent)
{
  int ClientIndex; 
  __int64 v5; 
  VehicleClient *v6; 
  int v7; 
  int *p_entIndex; 
  bool v9; 
  centity_t *Entity; 
  entityState_t *p_nextState; 
  const VehicleDef *ClientDef; 
  char *fmt; 
  char *fmta; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 466, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 467, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  ClientIndex = CG_Vehicle_GetClientIndex(cent);
  v5 = ClientIndex;
  if ( (unsigned int)ClientIndex >= 0x80 )
  {
    LODWORD(v16) = ClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v16, 128) )
      __debugbreak();
    LODWORD(v20) = 128;
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v17, v20) )
      __debugbreak();
  }
  v6 = &this->m_vehicleClients[v5];
  if ( (CgVehicleSystem *)((char *)this + 588 * v5) == (CgVehicleSystem *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 473, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( (_DWORD)v5 != this->m_vehicleClients[v5].index )
  {
    LODWORD(v16) = this->m_vehicleClients[v5].index;
    LODWORD(fmt) = v5;
    Com_Printf(14, "CgVehicleSystem::GetClient(). Getting client vehicle for entity %d (type %d). Expected vehIndex=%d. Found veh->index=%d", (unsigned int)cent->nextState.number, (unsigned int)cent->nextState.eType, fmt, v16);
    Com_Printf(14, "CgVehicleSystem::GetClient(). Current vehicles are:");
    v7 = 0;
    p_entIndex = &this->m_vehicleClients[0].entIndex;
    v9 = 1;
    do
    {
      if ( !v9 )
      {
        LODWORD(v19) = 128;
        LODWORD(v18) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      Entity = CG_GetEntity((const LocalClientNum_t)p_entIndex[1], *p_entIndex);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( (Entity->flags & 1) != 0 )
      {
        p_nextState = &Entity->nextState;
        if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((p_nextState->eType - 12) & 0xFFFD) == 0 )
        {
          ClientDef = CgVehicleSystem::GetClientDef((const VehicleClient *)(p_entIndex - 20));
          LODWORD(v19) = (unsigned __int8)ClientDef->type;
          LODWORD(v18) = ClientDef->vehiclePhysicsDef.physicsEnabled;
          LODWORD(fmta) = *p_entIndex;
          Com_Printf(14, "\t. Entry (%d). Index=%d. EntIndex=%d. Physics=%d. VehType=%d", (unsigned int)v7, (unsigned int)*(p_entIndex - 2), fmta, v18, v19);
        }
      }
      ++v7;
      p_entIndex += 147;
      v9 = (unsigned int)v7 < 0x80;
    }
    while ( v7 < 128 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 494, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CgVehicleSystem::GetClient(). vehIndex != veh->index. See the log file.") )
      __debugbreak();
  }
  return v6;
}

/*
==============
CgVehicleSystem::GetClient
==============
*/
VehicleClient *CgVehicleSystem::GetClient(CgVehicleSystem *this, const centity_t *cent)
{
  int ClientIndex; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 507, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 508, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  ClientIndex = CG_Vehicle_GetClientIndex(cent);
  v5 = ClientIndex;
  if ( (unsigned int)ClientIndex >= 0x80 )
  {
    LODWORD(v7) = ClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 512, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v7, 128) )
      __debugbreak();
    LODWORD(v9) = 128;
    LODWORD(v8) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 509, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( (CgVehicleSystem *)((char *)this + 588 * v5) == (CgVehicleSystem *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 514, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( (_DWORD)v5 != this->m_vehicleClients[v5].index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 516, ASSERT_TYPE_ASSERT, "(vehIndex == veh->index)", (const char *)&queryFormat, "vehIndex == veh->index") )
    __debugbreak();
  return &this->m_vehicleClients[v5];
}

/*
==============
CgVehicleSystem::GetClientDef
==============
*/
const VehicleDef *CgVehicleSystem::GetClientDef(unsigned int vehDefIndex)
{
  __int64 v1; 
  bool v2; 
  const VehicleDef **v3; 
  int v6; 

  v1 = vehDefIndex;
  if ( vehDefIndex >= 0x80 )
  {
    v6 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 719, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( ( sizeof( *array_counter( ms_vehicleClientDefs ) ) + 0 ) )", "vehDefIndex doesn't index ARRAY_COUNT( ms_vehicleClientDefs )\n\t%i not in [0, %i)", vehDefIndex, v6) )
      __debugbreak();
  }
  v2 = CgVehicleSystem::ms_vehicleClientDefs[v1] == NULL;
  v3 = &CgVehicleSystem::ms_vehicleClientDefs[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 720, ASSERT_TYPE_ASSERT, "(ms_vehicleClientDefs[vehDefIndex])", (const char *)&queryFormat, "ms_vehicleClientDefs[vehDefIndex]") )
    __debugbreak();
  return *v3;
}

/*
==============
CgVehicleSystem::GetClientDef
==============
*/
const VehicleDef *CgVehicleSystem::GetClientDef(const VehicleClient *veh)
{
  __int64 v3; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 708, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( veh->defIndex >= 0x80u )
  {
    LODWORD(v3) = veh->defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 710, ASSERT_TYPE_ASSERT, "(unsigned)( veh->defIndex ) < (unsigned)( ( sizeof( *array_counter( ms_vehicleClientDefs ) ) + 0 ) )", "veh->defIndex doesn't index ARRAY_COUNT( ms_vehicleClientDefs )\n\t%i not in [0, %i)", v3, 128) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleClientDefs[veh->defIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 711, ASSERT_TYPE_ASSERT, "(ms_vehicleClientDefs[veh->defIndex])", (const char *)&queryFormat, "ms_vehicleClientDefs[veh->defIndex]") )
    __debugbreak();
  return CgVehicleSystem::ms_vehicleClientDefs[veh->defIndex];
}

/*
==============
CgVehicleSystem::GetClientDefIndex
==============
*/
__int64 CgVehicleSystem::GetClientDefIndex(const centity_t *cent)
{
  entityType_s eType; 
  bool v3; 
  __int64 v4; 
  __int64 v6; 
  const char *EntityTypeName; 

  if ( !cent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 422, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 403, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
  }
  eType = cent->nextState.eType;
  if ( ((eType - 12) & 0xFFFD) != 0 )
  {
    if ( eType == ET_VEHICLE_CORPSE )
    {
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 423, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )");
    }
    else
    {
      EntityTypeName = BG_GetEntityTypeName(eType);
      v3 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 414, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_Vehicle_IsCorpse: Entity type %s is not a vehicle", EntityTypeName);
    }
    if ( v3 )
      __debugbreak();
  }
  v4 = (unsigned int)cent->nextState.lerp.u.anonymous.data[0] >> 7;
  if ( (unsigned int)v4 >= 0x80 )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 427, ASSERT_TYPE_ASSERT, "(unsigned)( defIndex ) < (unsigned)( ( sizeof( *array_counter( ms_vehicleClientDefs ) ) + 0 ) )", "defIndex doesn't index ARRAY_COUNT( ms_vehicleClientDefs )\n\t%i not in [0, %i)", v6, 128) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleClientDefs[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 428, ASSERT_TYPE_ASSERT, "(ms_vehicleClientDefs[defIndex])", (const char *)&queryFormat, "ms_vehicleClientDefs[defIndex]") )
    __debugbreak();
  return (unsigned int)v4;
}

/*
==============
CgVehicleSystem::GetClientSafeConst
==============
*/
const VehicleClient *CgVehicleSystem::GetClientSafeConst(CgVehicleSystem *this, const centity_t *cent)
{
  const VehicleClient *result; 

  if ( !cent )
    return 0i64;
  if ( !BG_IsVehicleEntity(&cent->nextState) )
    return 0i64;
  result = CgVehicleSystem::GetClientFromIndex(this, cent->nextState.lerp.u.anonymous.data[0] & 0x7F);
  if ( !result || !result->defIndex && !result->entIndex )
    return 0i64;
  return result;
}

/*
==============
CgVehicleSystem::GetDObjFirstModelBounds
==============
*/
void CgVehicleSystem::GetDObjFirstModelBounds(CgVehicleSystem *this, const centity_t *cent, Bounds *out_bounds)
{
  const DObj *EntityDObj; 
  const XModel *FirstModel; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 955, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  EntityDObj = CG_Vehicle_GetEntityDObj(this, cent);
  if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
  {
    if ( !EntityDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 965, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    FirstModel = DObjGetFirstModel(EntityDObj);
    if ( !FirstModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 968, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    XModelGetBounds(FirstModel, out_bounds);
  }
  else
  {
    *(_QWORD *)out_bounds->midPoint.v = 0i64;
    out_bounds->midPoint.v[2] = 0.0;
    out_bounds->halfSize.v[0] = 1.0;
    out_bounds->halfSize.v[1] = 1.0;
    out_bounds->halfSize.v[2] = 1.0;
  }
}

/*
==============
CgVehicleSystem::GetLocalClientNum
==============
*/
__int64 CgVehicleSystem::GetLocalClientNum(CgVehicleSystem *this)
{
  return (unsigned int)this->m_localClientNum;
}

/*
==============
CgVehicleSystem::GetTeam
==============
*/
__int64 CgVehicleSystem::GetTeam(CgVehicleSystem *this, const entityState_t *es)
{
  centity_t *Entity; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3177, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, es->number);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3180, ASSERT_TYPE_ASSERT, "(vehicleEnt)", (const char *)&queryFormat, "vehicleEnt") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(Entity) )
    return 0i64;
  if ( ((es->eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3188, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( es ))", (const char *)&queryFormat, "BG_IsVehicleEntity( es )") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  else
    return Entity->nextState.staticState.vehiclePlayer.teamId;
}

/*
==============
CgVehicleSystem::GetTurretFireType
==============
*/
__int64 CgVehicleSystem::GetTurretFireType(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 

  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2447, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( (vehicleEntity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2448, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEntity ))", (const char *)&queryFormat, "CENextValid( vehicleEntity )") )
    __debugbreak();
  if ( vehicleEntity == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((vehicleEntity->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2449, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEntity->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEntity->nextState )") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( ClientDef->turretWeapon )
    return (unsigned int)ClientDef->turretFireType;
  else
    return 0i64;
}

/*
==============
CgVehicleSystem::GetVehicleDef
==============
*/
const VehicleDef *CgVehicleSystem::GetVehicleDef(CgVehicleSystem *this, const entityState_t *es)
{
  centity_t *Entity; 
  const VehicleClient *Client; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 161, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, es->number);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 164, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    return 0i64;
  Client = CgVehicleSystem::GetClient(this, Entity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 172, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  return CgVehicleSystem::GetClientDef(Client);
}

/*
==============
CgVehicleSystem::GetVehicleDef
==============
*/
const VehicleDef *CgVehicleSystem::GetVehicleDef(CgVehicleSystem *this, const playerState_s *ps)
{
  LocalClientNum_t m_localClientNum; 
  CgVehicleSystem *VehicleSystem; 
  const centity_t *Entity; 
  const VehicleClient *Client; 
  __int64 v8; 

  m_localClientNum = this->m_localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2832, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2833, ASSERT_TYPE_ASSERT, "(ps->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(v8) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2835, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, cl_maxLocalClients) )
      __debugbreak();
  }
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
  Entity = CG_GetEntity(m_localClientNum, ps->vehicleState.entity);
  Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
  return CgVehicleSystem::GetClientDef(Client);
}

/*
==============
CgVehicleSystem::GetVehicleViewAngles
==============
*/
void CgVehicleSystem::GetVehicleViewAngles(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewAngles)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  LocalClientNum_t m_localClientNum; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2483, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2484, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2487, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2490, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  m_localClientNum = this->m_localClientNum;
  if ( ClientDef->camRemoteDrive )
    CG_VehicleCam_GetRemoteDriveViewAngles(m_localClientNum, playerState, vehicleEntity, outViewAngles);
  else
    CG_VehicleCam_GetViewAngles(m_localClientNum, vehicleEntity, outViewAngles);
}

/*
==============
CgVehicleSystem::GetVehicleViewOrigin
==============
*/
void CgVehicleSystem::GetVehicleViewOrigin(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity, vec3_t *outViewOrigin)
{
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  float vehCam_offsetZ; 
  float vehCam_offsetY; 
  float vehCam_offsetX3P; 
  float vehCam_offsetY3P; 
  float vehCam_offsetZ3P; 
  float v15; 
  float v16; 
  float v17; 
  VehCamZOffsetMode vehCam_zOffsetMode3P; 
  __int32 v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int64 startSolidOffset; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> v29; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2514, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2515, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2518, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2521, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  CG_VehicleCam_GetVehiclePosition(this->m_localClientNum, vehicleEntity, &axis.m[3], &outAngles);
  AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)&axis);
  if ( ClientDef->camRemoteDrive )
  {
    vehCam_offsetZ = ClientDef->vehCam_offsetZ;
    vehCam_offsetY = ClientDef->vehCam_offsetY;
    in1.v[0] = ClientDef->vehCam_offsetX;
    in1.v[1] = vehCam_offsetY;
    in1.v[2] = vehCam_offsetZ;
    MatrixTransformVector43(&in1, &axis, outViewOrigin);
  }
  else
  {
    if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CG_Vehicle_IsCorpse(vehicleEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 439, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
      __debugbreak();
    if ( (*(_BYTE *)vehicleEntity->nextState.lerp.u.actor.threatSight & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2535, ASSERT_TYPE_ASSERT, "(CG_Vehicle_GetFlags( vehicleEntity ) & (1 << 0))", "%s\n\tClient predicted vehicles only support third person view when not in remote drive", "CG_Vehicle_GetFlags( vehicleEntity ) & VEHFLAG_3RD_PERSON") )
      __debugbreak();
    if ( ClientDef->vehCam_zOffsetMode3P >= (unsigned int)VEHCAM_ZMODE_COUNT )
    {
      LODWORD(startSolidOffset) = ClientDef->vehCam_zOffsetMode3P;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2536, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleDef->vehCam_zOffsetMode3P ) < (unsigned)( VEHCAM_ZMODE_COUNT )", "vehicleDef->vehCam_zOffsetMode3P doesn't index VEHCAM_ZMODE_COUNT\n\t%i not in [0, %i)", startSolidOffset, 3) )
        __debugbreak();
    }
    vehCam_offsetX3P = ClientDef->vehCam_offsetX3P;
    vehCam_offsetY3P = ClientDef->vehCam_offsetY3P;
    vehCam_offsetZ3P = ClientDef->vehCam_offsetZ3P;
    v15 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[0]) + axis.m[3].v[0]) + (float)(vehCam_offsetY3P * axis.m[1].v[0]);
    v16 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[1]) + axis.m[3].v[1]) + (float)(vehCam_offsetY3P * axis.m[1].v[1]);
    in1.v[0] = vehCam_offsetX3P;
    v17 = (float)((float)(vehCam_offsetX3P * axis.m[0].v[2]) + axis.m[3].v[2]) + (float)(vehCam_offsetY3P * axis.m[1].v[2]);
    outViewOrigin->v[2] = v17;
    in1.v[1] = vehCam_offsetY3P;
    in1.v[2] = vehCam_offsetZ3P;
    outViewOrigin->v[0] = v15;
    outViewOrigin->v[1] = v16;
    vehCam_zOffsetMode3P = ClientDef->vehCam_zOffsetMode3P;
    if ( vehCam_zOffsetMode3P )
    {
      v19 = vehCam_zOffsetMode3P - 1;
      if ( v19 )
      {
        if ( v19 == 1 )
        {
          AnglesToAxis(&playerState->viewangles, &v29);
          v20 = in1.v[2];
          v21 = in1.v[2] * v29.m[2].v[1];
          outViewOrigin->v[0] = (float)(in1.v[2] * v29.m[2].v[0]) + outViewOrigin->v[0];
          v22 = v20 * v29.m[2].v[2];
          outViewOrigin->v[1] = v21 + outViewOrigin->v[1];
          outViewOrigin->v[2] = v22 + outViewOrigin->v[2];
        }
      }
      else
      {
        v23 = vehCam_offsetZ3P * axis.m[2].v[1];
        outViewOrigin->v[0] = (float)(vehCam_offsetZ3P * axis.m[2].v[0]) + v15;
        v24 = vehCam_offsetZ3P * axis.m[2].v[2];
        outViewOrigin->v[1] = v23 + v16;
        outViewOrigin->v[2] = v24 + v17;
      }
    }
    else
    {
      outViewOrigin->v[2] = v17 + vehCam_offsetZ3P;
    }
    CG_View_ThirdPersonViewTrace(this->m_localClientNum, playerState, &axis.m[3], outViewOrigin, 41968145, 0.0, outViewOrigin);
  }
}

/*
==============
CgVehicleSystem::GetWorldBoneMatrix
==============
*/
int CgVehicleSystem::GetWorldBoneMatrix(CgVehicleSystem *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  bool v8; 
  const centity_t *Entity; 
  const CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 

  if ( entityIndex == 2047 )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3299, ASSERT_TYPE_ASSERT, "(entityIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityIndex != ENTITYNUM_NONE");
  }
  else
  {
    if ( (unsigned int)entityIndex < 0x800 )
      goto LABEL_7;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3300, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048);
  }
  if ( v8 )
    __debugbreak();
LABEL_7:
  Entity = CG_GetEntity(localClientNum, entityIndex);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3303, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, Entity);
  if ( EntityDObj )
    LODWORD(EntityDObj) = CG_DObjGetWorldBoneMatrix(&Entity->pose, EntityDObj, boneIndex, (tmat33_t<vec3_t> *)result, &result->m[3]);
  return (int)EntityDObj;
}

/*
==============
CgVehicleSystem::HasSuspensionEnabled
==============
*/
bool CgVehicleSystem::HasSuspensionEnabled(CgVehicleSystem *this, const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2310, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return cent->pose.turret.barrelPitch > 0.0;
}

/*
==============
CgVehicleSystem::InitVehicleDefCache
==============
*/
void CgVehicleSystem::InitVehicleDefCache(void)
{
  ClConfigStrings *ClConfigStrings; 
  unsigned int *v1; 
  const char *const *v2; 
  __int64 v3; 

  NetConstStrings_CallForAllVehicleStrings(CgVehicleSystem::RegisterVehicleDef);
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v1 = CgVehicleSystem::ms_defaultVehicleStickerMaterialIndices;
  v2 = DEFAULT_STICKER_SLOT_MATERIAL_NAMES;
  v3 = 2i64;
  do
  {
    *v1++ = ClConfigStrings->GetStickerMaterialIndex(ClConfigStrings, *v2++);
    --v3;
  }
  while ( v3 );
}

/*
==============
CgVehicleSystem::IsDobjValidForVehicle
==============
*/
bool CgVehicleSystem::IsDobjValidForVehicle(const DObj *dobj)
{
  const dvar_t *v1; 
  bool v3; 

  v1 = DVARBOOL_bg_vehHandleVehicleNullPtr;
  if ( !DVARBOOL_bg_vehHandleVehicleNullPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehHandleVehicleNullPtr") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 1;
  v3 = dobj == NULL;
  if ( !dobj )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3816, ASSERT_TYPE_ASSERT, "(dobj)", "%s\n\tIf you hit this assert, please create a crash dump and contact one of the developers on this Jira. [IWH-291687].", "dobj") )
      __debugbreak();
    v3 = 1;
  }
  return !v3;
}

/*
==============
IsScriptMoverVehicle
==============
*/
bool IsScriptMoverVehicle(const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 192, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return cent->nextState.eType == ET_SCRIPTMOVER && (cent->nextState.staticState.vehiclePlayer.playerIndex & 0x10) != 0;
}

/*
==============
CgVehicleSystem::IsSystemAllocated
==============
*/
bool CgVehicleSystem::IsSystemAllocated()
{
  return (_BYTE)CgVehicleSystem::ms_allocatedType != NONE;
}

/*
==============
CgVehicleSystem::RegisterVehicleDef
==============
*/
void CgVehicleSystem::RegisterVehicleDef(const unsigned int index, const char *name)
{
  __int64 v2; 
  int v5; 

  v2 = index;
  if ( index >= 0x80 )
  {
    v5 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 96, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( ms_vehicleClientDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( ms_vehicleClientDefs )\n\t%i not in [0, %i)", index, v5) )
      __debugbreak();
  }
  CgVehicleSystem::ms_vehicleClientDefs[v2] = BG_Vehicle_Register(name);
}

/*
==============
CgVehicleSystem::ResetVehicle
==============
*/
void CgVehicleSystem::ResetVehicle(CgVehicleSystem *this, centity_t *cent)
{
  cg_t *v4; 
  int ClientIndex; 
  __int64 v6; 
  char *v7; 
  __m256i *v8; 
  CgVehicleSystem *VehicleSystem; 
  __int128 v10; 
  char v11; 
  __m256i *v12; 
  __int64 v13; 
  char *v14; 
  __m256i *v15; 
  __int64 v16; 
  __m256i v17; 
  __int128 v18; 
  __m256i v19; 
  __int64 v20; 
  char *v21; 
  __m256i v22; 
  __int128 v23; 
  __m256i v24; 
  __int64 v25; 
  unsigned int PlayerIndex; 
  VehicleClient *Client; 
  CgHandler *Handler; 
  LocalClientNum_t m_localClientNum; 
  CgVehicleSystem *v30; 
  __int64 v31; 
  entityType_s eType; 
  const DObj *ClientDObj; 
  char *fmt; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __m256i v39; 
  __int128 v40; 
  char v41[360]; 
  int v42; 
  int v43; 
  cg_t *LocalClientGlobals; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 205, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 206, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  v4 = LocalClientGlobals;
  ClientIndex = CG_Vehicle_GetClientIndex(cent);
  v6 = ClientIndex;
  if ( (unsigned int)ClientIndex >= 0x80 )
  {
    LODWORD(v35) = ClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v35, 128) )
      __debugbreak();
    LODWORD(v38) = 128;
    LODWORD(v36) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v36, v38) )
      __debugbreak();
  }
  v7 = (char *)this + 588 * v6;
  v8 = (__m256i *)(v7 + 12);
  if ( v7 == (char *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 214, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v42 = *((_DWORD *)v7 + 22);
  v43 = *((_DWORD *)v7 + 23);
  if ( !cent->pose.vehicle.boneUsage )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)this->m_localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1081, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    CgVehicleSystem::TreadBoneAnimDestroyResources(VehicleSystem, (VehicleClient *)(v7 + 12));
    v4 = LocalClientGlobals;
  }
  if ( IsScriptMoverVehicle(cent) || cent->pose.scriptMover.doVehicleControllers )
  {
    v39 = *v8;
    v10 = *(_OWORD *)(v7 + 44);
    v11 = 1;
  }
  else
  {
    v10 = v40;
    v11 = 0;
  }
  if ( v4->firstSnapshot )
  {
    v12 = (__m256i *)(v7 + 212);
    v13 = 2i64;
    v14 = v7 + 212;
    v15 = (__m256i *)v41;
    v16 = 2i64;
    do
    {
      v15 += 4;
      v17 = *(__m256i *)v14;
      v18 = *((_OWORD *)v14 + 7);
      v14 += 128;
      v15[-4] = v17;
      v15[-3] = *((__m256i *)v14 - 3);
      v15[-2] = *((__m256i *)v14 - 2);
      *(_OWORD *)v15[-1].m256i_i8 = *((_OWORD *)v14 - 2);
      *(_OWORD *)&v15[-1].m256i_u64[2] = v18;
      --v16;
    }
    while ( v16 );
    v19 = *(__m256i *)v14;
    v20 = *((_QWORD *)v14 + 4);
    *v15 = v19;
    v15[1].m256i_i64[0] = v20;
    v41[268] = 0;
    memset_0(v7 + 12, 0, 0xC8ui64);
    memset_0(v7 + 508, 0, 0x5Cui64);
    v21 = v41;
    do
    {
      v12 += 4;
      v22 = *(__m256i *)v21;
      v23 = *((_OWORD *)v21 + 7);
      v21 += 128;
      v12[-4] = v22;
      v12[-3] = *((__m256i *)v21 - 3);
      v12[-2] = *((__m256i *)v21 - 2);
      *(_OWORD *)v12[-1].m256i_i8 = *((_OWORD *)v21 - 2);
      *(_OWORD *)&v12[-1].m256i_u64[2] = v23;
      --v13;
    }
    while ( v13 );
    v24 = *(__m256i *)v21;
    v25 = *((_QWORD *)v21 + 4);
    *v12 = v24;
    v12[1].m256i_i64[0] = v25;
    v4 = LocalClientGlobals;
  }
  else
  {
    memset_0(v7 + 12, 0, 0x24Cui64);
  }
  if ( v11 )
  {
    *v8 = v39;
    *(_OWORD *)(v7 + 44) = v10;
  }
  *((_DWORD *)v7 + 21) = v6;
  *((_DWORD *)v7 + 22) = CgVehicleSystem::GetClientDefIndex(cent);
  *((_DWORD *)v7 + 23) = cent->nextState.number;
  *((_DWORD *)v7 + 24) = this->m_localClientNum;
  *((_DWORD *)v7 + 26) = v4->time;
  PlayerIndex = BGVehicles::GetPlayerIndex(&cent->nextState);
  *((_DWORD *)v7 + 30) = PlayerIndex;
  if ( PlayerIndex >= cls.maxClients )
  {
    LODWORD(v37) = cls.maxClients;
    LODWORD(v35) = PlayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( veh->playerIndex ) < (unsigned)( cls.maxClients )", "veh->playerIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v35, v37) )
      __debugbreak();
  }
  LODWORD(v35) = this->m_localClientNum;
  LODWORD(fmt) = *((_DWORD *)v7 + 23);
  Com_Printf(14, "CgVehicleSystem::ResetVehicle(%d): (defIndex = %d), (entIndex = %d), (localClientNum = %d)\n", *((unsigned int *)v7 + 21), *((unsigned int *)v7 + 22), fmt, v35);
  if ( !v4->firstSnapshot )
  {
    Client = CgVehicleSystem::GetClient(this, cent);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 268, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
      __debugbreak();
    Handler = CgHandler::getHandler(this->m_localClientNum);
    BG_VehicleAnim_Reset(this, &cent->nextState, &Client->animinfo, Handler);
  }
  m_localClientNum = this->m_localClientNum;
  cent->pose.vehicle.boneUsage = 0;
  v30 = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1021, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v31 = (__int64)v30->GetVehicleDef(v30, &cent->nextState);
  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1024, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType == ET_HELICOPTER )
    goto LABEL_52;
  if ( eType == ET_VEHICLE && *(_BYTE *)(v31 + 8) == 12 && *(_BYTE *)(v31 + 256) == 8 )
  {
    cent->pose.turret.useOnVehicleAngles = 1;
LABEL_52:
    cent->pose.vehicle.boneUsage = 1;
  }
  if ( !cent->pose.vehicle.boneUsage )
    CgVehicleSystem::TreadBoneAnimInitResources(v30, cent, (const VehicleDef *)v31);
  CG_Vehicle_ClearBoneControllers(this->m_localClientNum, cent);
  CG_VehicleAudio_ResetSounds((VehicleClient *)(v7 + 12));
  if ( !BGVehicles::PhysicsIsValid(*((_DWORD *)v7 + 149)) || v42 != *((_DWORD *)v7 + 22) || v43 != *((_DWORD *)v7 + 23) )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, this->m_localClientNum);
    if ( CgVehicleSystem::IsDobjValidForVehicle(ClientDObj) )
      CgVehicleSystem::ResetVehiclePhysics(this, cent);
  }
}

/*
==============
CgVehicleSystem::ResetVehiclePhysics
==============
*/
void CgVehicleSystem::ResetVehiclePhysics(CgVehicleSystem *this, centity_t *cent)
{
  VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  unsigned int v6; 
  BgVehiclePhysics *ObjectById; 
  CG_PhysicsObject *v8; 
  __int32 v9; 
  Physics_WorldId v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  __int64 v15; 
  hknpBodyId result; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 297, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 298, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 301, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  this->PhysicsDestroyVehicle(this, &Client->physicsId);
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 306, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( ClientDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( Client->physicsId != BGVehicles::PhysicsInvalidId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 309, ASSERT_TYPE_ASSERT, "(veh->physicsId == BGVehicles::PhysicsInvalidId())", (const char *)&queryFormat, "veh->physicsId == BGVehicles::PhysicsInvalidId()") )
      __debugbreak();
    v6 = this->PhysicsCreateVehicle(this, cent->nextState.number, Client->defIndex, ClientDef);
    Client->physicsId = v6;
    ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, v6);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 313, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    BgVehiclePhysics::SetPlayerControlled(ObjectById, cent->nextState.staticState.vehiclePlayer.playerIndex != 0);
  }
  else
  {
    v8 = CG_PhysicsObject_Get(cent->nextState.number, this->m_localClientNum);
    if ( v8 )
    {
      v9 = 3 * this->m_localClientNum;
      v10 = v9 + 2;
      v11 = v8->physicsInstances[v9 + 2];
      if ( v11 != -1 )
      {
        v12 = 0;
        NumRigidBodys = Physics_GetNumRigidBodys(v10, v11);
        if ( NumRigidBodys )
        {
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v10 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
            {
              LODWORD(v15) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
            {
              LODWORD(v15) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
            {
              LODWORD(v15) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v10, v11, v12)->m_serialAndIndex;
            if ( Physics_IsRigidBodyDynamic(v10, m_serialAndIndex) )
              Physics_SetRigidBodyKeyframed(v10, m_serialAndIndex);
            ++v12;
          }
          while ( v12 < NumRigidBodys );
        }
      }
    }
  }
}

/*
==============
CgVehicleSystem::SetEntityAnimTree
==============
*/
void CgVehicleSystem::SetEntityAnimTree(CgVehicleSystem *this, const entityState_t *es, XAnim_s *anims)
{
  centity_t *Entity; 
  DObj *EntityDObj; 
  XAnimOwner v8; 
  XAnimTree *SmallTree; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 128, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, es->number);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 131, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) != 0 )
  {
    EntityDObj = CG_Vehicle_GetEntityDObj(this, Entity);
    if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
    {
      if ( !EntityDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 144, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
        __debugbreak();
      if ( EntityDObj->tree )
      {
        Com_XAnimFreeSmallTree(EntityDObj->tree);
        EntityDObj->tree = NULL;
      }
      LOBYTE(v8) = 1;
      SmallTree = Com_XAnimCreateSmallTree(anims, v8);
      if ( !SmallTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 153, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
        __debugbreak();
      Entity->tree = SmallTree;
      DObjSetTree(EntityDObj, SmallTree);
    }
  }
}

/*
==============
CgVehicleSystem::UpdateBoneControllersInternal
==============
*/
char CgVehicleSystem::UpdateBoneControllersInternal(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  centity_t *v3; 
  DObj *v4; 
  CgVehicleSystem *v5; 
  cg_t *LocalClientGlobals; 
  VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  __int64 v9; 
  const VehicleClient *v23; 
  BgVehiclePhysics *ObjectById; 
  float v30; 
  unsigned __int8 boneUsage; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *v33; 
  BgVehiclePhysics *v34; 
  centity_t *Entity; 
  __int64 v36; 
  unsigned int physicsId; 
  unsigned int v38; 
  __int64 v39; 
  HelicopterDynamics *v40; 
  __int64 v41; 
  float v42; 
  float v43; 
  double MaxGovernorSpeed; 
  double RPMForRotorIndex; 
  int v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  double v54; 
  float v55; 
  float v56; 
  float v57; 
  double v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  double v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  double v80; 
  bool StrobeEffectToggle; 
  unsigned __int8 *v84; 
  unsigned __int8 *rotorBladeBoneIndex; 
  scr_string_t tag_main_rotor_blade_05; 
  unsigned __int8 *v87; 
  bool v88; 
  unsigned __int8 *v89; 
  unsigned __int8 *v90; 
  scr_string_t tag_tail_rotor_blade_02; 
  int i; 
  unsigned __int8 v93; 
  int v94; 
  __int64 v95; 
  unsigned __int16 *rotorPosition; 
  int v99; 
  unsigned __int16 *v100; 
  __int64 v101; 
  int BladeIndexStrobeForRotorIndex; 
  const dvar_t *v103; 
  int v104; 
  double BladeDeflectionForRotorIndex; 
  const dvar_t *v110; 
  __int64 integer; 
  unsigned __int8 v112; 
  const dvar_t *v113; 
  __int64 v114; 
  unsigned __int8 v115; 
  const dvar_t *v116; 
  __int64 v117; 
  unsigned __int8 v118; 
  const dvar_t *v119; 
  __int64 v120; 
  unsigned __int8 v121; 
  unsigned __int8 cullIn; 
  BOOL v123; 
  float v124; 
  float v125; 
  float v126; 
  unsigned __int8 *v127; 
  int v128; 
  __int64 j; 
  unsigned __int8 v130; 
  unsigned __int8 v131; 
  unsigned __int8 v132; 
  float v133; 
  double ViewZoomScale; 
  float v135; 
  unsigned __int8 v136; 
  int WheelCount; 
  __int64 v139; 
  vec3_t modelIndex; 
  vec3_t outOrigin; 
  vec3_t row3; 
  float v143; 
  float v144; 
  VehicleClient *vehClient; 
  cg_t *v146; 
  const VehicleDef *v147; 
  CgVehicleSystem *v148; 
  vec4_t v149; 
  __int64 v150; 
  DObjPartBits partBits; 
  vec3_t v152; 
  vec4_t out; 
  __m256i v154; 

  v150 = -2i64;
  v3 = cent;
  *(_QWORD *)v152.v = cent;
  v4 = obj;
  *(_QWORD *)outOrigin.v = obj;
  v5 = this;
  v148 = this;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1387, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1388, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( v3 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v3->nextState.eType - 12) & 0xFFFD) != 0 && !CG_Vehicle_IsCorpse(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1389, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5->m_localClientNum);
  v146 = LocalClientGlobals;
  if ( CG_Vehicle_IsCorpse(v3) )
  {
    Client = NULL;
    vehClient = NULL;
    ClientDef = CgVehicleSystem::GetClientDef((unsigned int)v3->nextState.lerp.u.anonymous.data[0] >> 7);
  }
  else
  {
    Client = CgVehicleSystem::GetClient(v5, v3);
    vehClient = Client;
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1398, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(Client);
  }
  v9 = (__int64)ClientDef;
  v147 = ClientDef;
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1407, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  _XMM10 = 0i64;
  __asm { vroundss xmm0, xmm10, xmm2, 1 }
  _XMM3 = 0i64;
  __asm { vroundss xmm3, xmm3, xmm2, 1 }
  v3->pose.vehicle.pitch = (int)*(float *)&_XMM3;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  v3->pose.vehicle.yaw = (int)*(float *)&_XMM4;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  v3->pose.vehicle.roll = (int)*(float *)&_XMM4;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  _XMM4 = 0i64;
  __asm { vroundss xmm4, xmm4, xmm1, 1 }
  v3->pose.vehicle.barrelPitch = (int)*(float *)&_XMM4;
  v3->pose.turret.barrelRoll = v5->GetTurretBarrelRoll(v5, v3);
  if ( (v3->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2464, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEntity ))", (const char *)&queryFormat, "CENextValid( vehicleEntity )") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(v3) )
    goto LABEL_40;
  if ( v3 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v3->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2469, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEntity->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEntity->nextState )") )
    __debugbreak();
  v23 = CgVehicleSystem::GetClient(v5, v3);
  if ( CgVehicleSystem::GetClientDef(v23)->vehiclePhysicsDef.disableWheelsTurning )
  {
LABEL_40:
    v3->pose.coverWall.coverGrid[2] = 11927552;
  }
  else
  {
    if ( Client && BGVehicles::PhysicsIsValid(Client->physicsId) && (ObjectById = BgVehiclePhysicsManager::GetObjectById(&v5->m_vehiclePhysicsManager, Client->physicsId), BgVehiclePhysics::IsDynamic(ObjectById)) )
      ObjectById->GetSteeringAngle(ObjectById);
    else
      __asm { vroundss xmm3, xmm10, xmm2, 1 }
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm1, 1 }
    v3->pose.vehicle.steerYaw = (int)*(float *)&_XMM2;
    I_fclamp(*(float *)(v9 + 348), 1.0, 10.0);
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm2, 1 }
    v3->pose.vehicle.steerYawAckermannRatio = (int)*(float *)&_XMM3;
  }
  if ( *(_DWORD *)(v9 + 248) )
    v30 = *(float *)(v9 + 328) * 2.0999999;
  else
    v30 = (float)v3->nextState.time2 * 0.001;
  v3->pose.turret.barrelPitch = v30;
  if ( v3->nextState.time2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1454, ASSERT_TYPE_ASSERT, "(ns->time2 >= 0)", (const char *)&queryFormat, "ns->time2 >= 0") )
    __debugbreak();
  DObjGetBoneIndexInternal_60(v4, scr_const.tag_turret, &v3->pose.vehicle.tag_turret, (int *)&modelIndex);
  DObjGetBoneIndexInternal_60(v4, scr_const.tag_barrel, &v3->pose.vehicle.tag_barrel, (int *)&modelIndex);
  boneUsage = v3->pose.vehicle.boneUsage;
  if ( boneUsage == 1 )
  {
    if ( !Client || !BGVehicles::PhysicsIsValid(Client->physicsId) || !v3->pose.turret.useOnVehicleAngles )
      goto LABEL_184;
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v5->m_localClientNum);
    v33 = CgVehicleSystem::GetClient(VehicleSystem, v3);
    v34 = BgVehiclePhysicsManager::GetObjectById(&v5->m_vehiclePhysicsManager, v33->physicsId);
    Entity = CG_GetEntity((const LocalClientNum_t)v5->m_localClientNum, v34->m_entityNumber);
    v36 = (__int64)v5->PhysicsGetVehiclePhysicsManager(v5);
    physicsId = Client->physicsId;
    if ( !BGVehicles::PhysicsIsValid(physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    v38 = physicsId - 1;
    if ( v38 >= 0x80 )
    {
      LODWORD(v139) = v38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v139, 128) )
        __debugbreak();
    }
    v39 = 3360i64 * v38;
    v40 = (HelicopterDynamics *)(v39 + v36 + 8);
    if ( v39 + v36 != -8 && *(_DWORD *)(v39 + v36 + 836) != 2 && !*(_BYTE *)(v39 + v36 + 2386) && !*(_BYTE *)(v39 + v36 + 84) )
      HelicopterDynamics::InitializeHelicopterRotors((HelicopterDynamics *)(v39 + v36 + 8));
    v41 = (__int64)v146;
    v42 = (float)(v146->nextSnap->serverTime - v146->snap->serverTime) * 0.001;
    I_fclamp(v42, 0.0041666669, 0.033333335);
    v43 = v42;
    if ( v40 && v40->m_NumberOfRotors )
    {
      if ( !BgVehiclePhysics::IsDynamic(v34) )
      {
        CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
        Axis43ToQuat(&v40->m_transform, &out);
        if ( v33->playerIndex != *(_DWORD *)(v41 + 25688) && Entity->nextState.staticState.vehiclePlayer.playerIndex )
        {
          MaxGovernorSpeed = HelicopterDynamics::GetMaxGovernorSpeed(v40);
          HelicopterDynamics::SimulateRotorSpeed(v40, *(float *)&MaxGovernorSpeed, v42);
        }
        RPMForRotorIndex = HelicopterDynamics::GetRPMForRotorIndex(v40, 0);
        if ( *(float *)&RPMForRotorIndex <= 50.0 )
        {
          HelicopterDynamics::SimulateStationaryRotorBladesMovement(v40, v42);
        }
        else
        {
          modelIndex = v34->m_linearVelocityWs;
          v149 = out;
          row3 = v34->m_transform.row3;
          FlightDynamics::UpdateFromVectors(v40, &row3, &v149, &modelIndex, NULL);
          HelicopterDynamics::SimulateRotorsNoPhysics(v40, v42, 0.0, 0.0, -0.25);
        }
        CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
      }
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_joystick_cyclic_l, &v3->pose.vehicle.rotorBoneIndex[10], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_joystick_cyclic_r, &v3->pose.vehicle.rotorBoneIndex[11], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_pedal_rudder_l_l, v3->pose.vehicle.wheelBoneIndex, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_pedal_rudder_l_r, &v3->pose.vehicle.wheelBoneIndex[1], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_pedal_rudder_l_l, &v3->pose.vehicle.wheelBoneIndex[2], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_pedal_rudder_l_r, &v3->pose.vehicle.wheelBoneIndex[3], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_joystick_collective_l, &v3->pose.vehicle.wheelBoneIndex[4], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_joystick_collective_l, &v3->pose.vehicle.wheelBoneIndex[5], (int *)&modelIndex);
      v46 = 0;
      v47 = (float)(Dvar_GetInt_Internal_DebugName(DVARINT_fd_helicopter_fbw_status, "fd_helicopter_fbw_status") != 0);
      if ( v40->m_EnableFlyByWire )
      {
        row3.v[0] = (float)(v47 * v40->m_FBWControlInputs[0]) + (float)((float)(1.0 - v47) * v40->m_ControlInputsNormalized[0]);
        v48 = (float)(v47 * v40->m_FBWControlInputs[1]) + (float)((float)(1.0 - v47) * v40->m_ControlInputsNormalized[1]);
        v143 = (float)(v47 * v40->m_FBWControlInputs[3]) + (float)((float)(1.0 - v47) * v40->m_ControlInputsNormalized[3]);
        v144 = (float)(v47 * v40->m_FBWControlInputs[5]) + (float)((float)(1.0 - v47) * v40->m_ControlInputsNormalized[5]);
      }
      else
      {
        v154 = *(__m256i *)v40->m_ControlInputsNormalized;
        v144 = *(float *)&v154.m256i_i32[5];
        v143 = *(float *)&v154.m256i_i32[3];
        v48 = *(float *)&v154.m256i_i32[1];
        row3.v[0] = *(float *)v154.m256i_i32;
      }
      if ( v47 < 0.001 )
        v48 = v48 * -1.0;
      v49 = _mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.gunTrackMode.leftAngles[0]).m128_f32[0];
      v50 = v49 * 0.0054931641;
      v51 = _mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.terrainMode.moveDesires[0]).m128_f32[0];
      modelIndex.v[0] = v51 * 0.0054931641;
      v52 = fsqrt((float)((float)(v51 * v51) + (float)(v49 * v49)) * 0.000030174851) * 0.083333336;
      v53 = (float)((float)(1.0 - v52) * 0.5) + (float)(v52 * 40.0);
      v54 = FD_ComputeExpo(v48, 1.0);
      v55 = (float)((float)((float)((float)(atanf_0(*(float *)&v54) * -30.0) - (float)(v49 * 0.0054931641)) * 100.0) * v43) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.wheelSpinAngle[8]).m128_f32[0] * 0.0054931641);
      v56 = (float)(v53 * v55) * v43;
      if ( COERCE_FLOAT(LODWORD(v56) & _xmm) <= COERCE_FLOAT(LODWORD(v55) & _xmm) )
        v57 = v55 - v56;
      else
        v57 = 0.0;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      v3->pose.vehicle.wheelSpinAngle[8] = (int)*(float *)&_XMM2;
      I_fclamp((float)(v57 * v43) + v50, -12.0, 12.0);
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm2, 1 }
      v3->pose.vehicle.wheelFraction[1] = (int)*(float *)&_XMM3;
      v62 = FD_ComputeExpo(v143, 1.0);
      *(float *)&v62 = atanf_0(*(float *)&v62);
      v63 = modelIndex.v[0];
      v64 = (float)((float)((float)((float)(*(float *)&v62 * -30.0) - modelIndex.v[0]) * 100.0) * v43) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.wheelSpinAngle[7]).m128_f32[0] * 0.0054931641);
      v65 = (float)(v53 * v64) * v43;
      if ( COERCE_FLOAT(LODWORD(v65) & _xmm) <= COERCE_FLOAT(LODWORD(v64) & _xmm) )
        v66 = v64 - v65;
      else
        v66 = 0.0;
      _XMM4 = 0i64;
      __asm { vroundss xmm4, xmm4, xmm3, 1 }
      v3->pose.vehicle.wheelSpinAngle[7] = (int)*(float *)&_XMM4;
      I_fclamp((float)(v66 * v43) + v63, -12.0, 12.0);
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm2, 1 }
      v3->pose.vehicle.wheelFraction[2] = (int)*(float *)&_XMM3;
      v71 = FD_ComputeExpo(v144, 0.5);
      *(float *)&v71 = atanf_0(*(float *)&v71);
      v72 = _mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.terrainMode.moveDesires[1]).m128_f32[0] * 0.0054931641;
      v73 = (float)((float)((float)((float)(*(float *)&v71 * 35.0) - v72) * 100.0) * v43) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v3->pose.vehicle.terrainMode.moveDesires[2]).m128_f32[0] * 0.0054931641);
      v74 = (float)(v73 * 40.0) * v43;
      if ( COERCE_FLOAT(LODWORD(v74) & _xmm) <= COERCE_FLOAT(LODWORD(v73) & _xmm) )
        v75 = v73 - v74;
      else
        v75 = 0.0;
      _XMM2 = 0i64;
      __asm { vroundss xmm2, xmm2, xmm1, 1 }
      v3->pose.vehicle.wheelFraction[4] = (int)*(float *)&_XMM2;
      I_fclamp((float)(v75 * v43) + v72, -5.0, 20.0);
      _XMM3 = 0i64;
      __asm { vroundss xmm3, xmm3, xmm2, 1 }
      v3->pose.vehicle.wheelFraction[3] = (int)*(float *)&_XMM3;
      v80 = FD_ComputeExpo(row3.v[0], 0.5);
      atanf_0(*(float *)&v80);
      _XMM0 = 0i64;
      __asm { vroundss xmm0, xmm0, xmm3, 1 }
      v3->pose.vehicle.wheelFraction[5] = (int)*(float *)&_XMM0;
      DObjGetBoneIndexInternal_60(v4, scr_const.main_rotor_jnt, v3->pose.vehicle.rotorBoneIndex, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tail_rotor_shaft, &v3->pose.vehicle.rotorBoneIndex[1], (int *)&modelIndex);
      StrobeEffectToggle = HelicopterDynamics::GetStrobeEffectToggle(v40, 0);
      v84 = &v3->pose.vehicle.rotorBladeBoneIndex[1];
      if ( StrobeEffectToggle )
      {
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01_blur, v84, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02_blur, &v3->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03_blur, &v3->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04_blur, &v3->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
        rotorBladeBoneIndex = v3->pose.vehicle.rotorBladeBoneIndex;
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_05_blur, v3->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01, &v3->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02, &v3->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03, &v3->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04, &v3->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
        tag_main_rotor_blade_05 = scr_const.tag_main_rotor_blade_05;
      }
      else
      {
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01, v84, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02, &v3->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03, &v3->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04, &v3->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
        rotorBladeBoneIndex = v3->pose.vehicle.rotorBladeBoneIndex;
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_05, v3->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01_blur, &v3->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02_blur, &v3->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03_blur, &v3->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04_blur, &v3->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
        tag_main_rotor_blade_05 = scr_const.tag_main_rotor_blade_05_blur;
      }
      v87 = &v3->pose.vehicle.rotorBladeBoneIndex[9];
      DObjGetBoneIndexInternal_60(v4, tag_main_rotor_blade_05, &v3->pose.vehicle.rotorBladeBoneIndex[9], (int *)&modelIndex);
      v88 = HelicopterDynamics::GetStrobeEffectToggle(v40, 1);
      v89 = &v3->pose.vehicle.rotorBladeBoneIndex[6];
      if ( v88 )
      {
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01_blur, v89, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_02_blur, &v3->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
        v90 = &v3->pose.vehicle.rotorBoneIndex[6];
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01, &v3->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
        tag_tail_rotor_blade_02 = scr_const.tag_tail_rotor_blade_02;
      }
      else
      {
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01, v89, (int *)&modelIndex);
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_02, &v3->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
        v90 = &v3->pose.vehicle.rotorBoneIndex[6];
        DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01_blur, &v3->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
        tag_tail_rotor_blade_02 = scr_const.tag_tail_rotor_blade_02_blur;
      }
      DObjGetBoneIndexInternal_60(v4, tag_tail_rotor_blade_02, &v3->pose.vehicle.rotorBoneIndex[7], (int *)&modelIndex);
      DObjGetHidePartBits(v4, &partBits);
      if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, 0) > 0 )
      {
        do
        {
          if ( *rotorBladeBoneIndex < 0xFEu )
            bitarray_base<bitarray<256>>::resetBit(&partBits, *rotorBladeBoneIndex);
          if ( *v87 < 0xFEu )
            bitarray_base<bitarray<256>>::setBit(&partBits, *v87);
          ++v46;
          ++rotorBladeBoneIndex;
          ++v87;
        }
        while ( v46 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, 0) );
        v90 = &v3->pose.vehicle.rotorBoneIndex[6];
      }
      for ( i = 0; i < HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, 1); ++v90 )
      {
        v93 = v90[68];
        if ( v93 < 0xFEu )
          bitarray_base<bitarray<256>>::resetBit(&partBits, v93);
        if ( *v90 < 0xFEu )
          partBits.array[(unsigned __int64)*v90 >> 5] |= 0x80000000 >> (*v90 & 0x1F);
        ++i;
      }
      DObjSetHidePartBits(v4, &partBits);
      v94 = 0;
      if ( v40->m_NumberOfRotors )
      {
        v95 = 0i64;
        *(_QWORD *)modelIndex.v = 0i64;
        rotorPosition = v3->pose.vehicle.rotorPosition;
        *(_QWORD *)row3.v = (char *)&v3->pose.moverFx + 60;
        do
        {
          HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex(v40, 0, v94);
          HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(v40, v94);
          _XMM1 = 0i64;
          __asm { vroundss xmm1, xmm1, xmm0, 1 }
          *rotorPosition = (int)*(float *)&_XMM1;
          v99 = 0;
          if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, v94) > 0 )
          {
            v100 = &v3->pose.vehicle.bladePitch[v95];
            v101 = *(_QWORD *)modelIndex.v;
            do
            {
              BladeIndexStrobeForRotorIndex = HelicopterDynamics::GetBladeIndexStrobeForRotorIndex(v40, v99, v94);
              v103 = DVARINT_fd_helicopter_show_blade_index;
              if ( !DVARINT_fd_helicopter_show_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_blade_index") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v103);
              if ( v103->current.integer == v99 )
              {
                LOWORD(v104) = 0x4000;
              }
              else
              {
                HelicopterDynamics::GetBladePitchStrobeForRotorIndex(v40, BladeIndexStrobeForRotorIndex, v94);
                _XMM0 = 0i64;
                __asm { vroundss xmm0, xmm0, xmm3, 1 }
                v104 = (int)*(float *)&_XMM0;
              }
              *v100 = v104;
              BladeDeflectionForRotorIndex = HelicopterDynamics::GetBladeDeflectionForRotorIndex(v40, BladeIndexStrobeForRotorIndex, v94);
              atanf_0(*(float *)&BladeDeflectionForRotorIndex);
              _XMM3 = 0i64;
              __asm { vroundss xmm3, xmm3, xmm2, 1 }
              v100[11] = (int)*(float *)&_XMM3;
              ++v101;
              ++v100;
              ++v99;
            }
            while ( v99 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, v94) );
            *(_QWORD *)modelIndex.v = v101;
            v3 = *(centity_t **)v152.v;
            v95 = *(_QWORD *)modelIndex.v;
          }
          *(_QWORD *)modelIndex.v = ++v95;
          ++v94;
          rotorPosition = (unsigned __int16 *)(*(_QWORD *)row3.v + 2i64);
          *(_QWORD *)row3.v += 2i64;
        }
        while ( v94 < v40->m_NumberOfRotors );
        v4 = *(DObj **)outOrigin.v;
      }
      v110 = DVARINT_fd_helicopter_hide_static_blade_index;
      if ( !DVARINT_fd_helicopter_hide_static_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_hide_static_blade_index") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v110);
      integer = v110->current.integer;
      if ( (int)integer >= 0 )
      {
        Dvar_SetInt_Internal(DVARINT_fd_helicopter_hide_static_blade_index, -1);
        v112 = v3->pose.vehicle.rotorBladeBoneIndex[integer];
        if ( v112 < 0xFEu )
          partBits.array[(unsigned __int64)v112 >> 5] |= 0x80000000 >> (v112 & 0x1F);
        DObjSetHidePartBits(v4, &partBits);
      }
      v113 = DVARINT_fd_helicopter_show_static_blade_index;
      if ( !DVARINT_fd_helicopter_show_static_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_static_blade_index") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v113);
      v114 = v113->current.integer;
      if ( (int)v114 >= 0 )
      {
        Dvar_SetInt_Internal(DVARINT_fd_helicopter_show_static_blade_index, -1);
        v115 = v3->pose.vehicle.rotorBladeBoneIndex[v114];
        if ( v115 < 0xFEu )
          partBits.array[(unsigned __int64)v115 >> 5] &= ~(0x80000000 >> (v115 & 0x1F));
        DObjSetHidePartBits(v4, &partBits);
      }
      v116 = DVARINT_fd_helicopter_hide_blur_blade_index;
      if ( !DVARINT_fd_helicopter_hide_blur_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_hide_blur_blade_index") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v116);
      v117 = v116->current.integer;
      if ( (int)v117 >= 0 )
      {
        Dvar_SetInt_Internal(DVARINT_fd_helicopter_hide_blur_blade_index, -1);
        v118 = v3->pose.vehicle.rotorBladeBoneIndex[v117 + 9];
        if ( v118 < 0xFEu )
          partBits.array[(unsigned __int64)v118 >> 5] |= 0x80000000 >> (v118 & 0x1F);
        DObjSetHidePartBits(v4, &partBits);
      }
      v119 = DVARINT_fd_helicopter_show_blur_blade_index;
      if ( !DVARINT_fd_helicopter_show_blur_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_blur_blade_index") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v119);
      v120 = v119->current.integer;
      if ( (int)v120 < 0 )
        goto LABEL_147;
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_show_blur_blade_index, -1);
      v121 = v3->pose.vehicle.rotorBladeBoneIndex[v120 + 9];
      if ( v121 < 0xFEu )
        partBits.array[(unsigned __int64)v121 >> 5] &= ~(0x80000000 >> (v121 & 0x1F));
    }
    else
    {
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01, &v3->pose.vehicle.rotorBladeBoneIndex[1], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02, &v3->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03, &v3->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04, &v3->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_05, v3->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_01_blur, &v3->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_02_blur, &v3->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_03_blur, &v3->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_04_blur, &v3->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_main_rotor_blade_05_blur, &v3->pose.vehicle.rotorBladeBoneIndex[9], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01, &v3->pose.vehicle.rotorBladeBoneIndex[6], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_02, &v3->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
      v127 = &v3->pose.vehicle.rotorBoneIndex[6];
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_01_blur, &v3->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v4, scr_const.tag_tail_rotor_blade_02_blur, &v3->pose.vehicle.rotorBoneIndex[7], (int *)&modelIndex);
      DObjGetHidePartBits(v4, &partBits);
      v128 = 0;
      for ( j = 0i64; j < 5; ++j )
      {
        v130 = v3->pose.vehicle.rotorBladeBoneIndex[j];
        if ( v130 < 0xFEu )
          bitarray_base<bitarray<256>>::resetBit(&partBits, v130);
        v131 = v3->pose.vehicle.rotorBladeBoneIndex[j + 9];
        if ( v131 < 0xFEu )
          bitarray_base<bitarray<256>>::setBit(&partBits, v131);
      }
      if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, 1) > 0 )
      {
        do
        {
          v132 = v127[68];
          if ( v132 < 0xFEu )
            partBits.array[(unsigned __int64)v132 >> 5] &= ~(0x80000000 >> (v132 & 0x1F));
          if ( *v127 < 0xFEu )
            partBits.array[(unsigned __int64)*v127 >> 5] |= 0x80000000 >> (*v127 & 0x1F);
          ++v128;
          ++v127;
        }
        while ( v128 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(v40, 1) );
      }
    }
    DObjSetHidePartBits(v4, &partBits);
LABEL_147:
    v5 = v148;
    LocalClientGlobals = v146;
    v9 = (__int64)v147;
    goto LABEL_148;
  }
  if ( !boneUsage )
  {
    CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
    CgVehicleSystem::UpdateWheelSpinAngles(v5, v4, v3);
    CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
  }
  v3->pose.vehicle.tag_body = BG_GameInterface_VehicleGetBoneIndex_TagBody(v4);
LABEL_148:
  if ( *(_BYTE *)v3->nextState.lerp.u.actor.threatSight < 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1953, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    v3->pose.coverWall.coverGrid[4] = -1082130432;
  }
  if ( vehClient )
    CgVehicleAnimSystem::UpdateBoneController(&v5->m_vehicleAnimSystem, vehClient, v4, v3);
  cullIn = v3->pose.cullIn;
  v123 = cullIn == 2;
  if ( cullIn == 2 )
  {
    vehClient = NULL;
    CG_Vehicle_GetRemoteControlledVehicle((const LocalClientNum_t)v5->m_localClientNum, (const centity_t **)&vehClient);
    CG_GetPoseOrigin(&v3->pose, &outOrigin);
    if ( vehClient )
    {
      CG_GetPoseOrigin((const cpose_t *)vehClient, &v152);
      v124 = v152.v[0] - outOrigin.v[0];
      v125 = v152.v[1];
      v126 = v152.v[2];
    }
    else if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 )
    {
      v124 = LocalClientGlobals->predictedPlayerState.origin.v[0] - outOrigin.v[0];
      v125 = LocalClientGlobals->predictedPlayerState.origin.v[1];
      v126 = LocalClientGlobals->predictedPlayerState.origin.v[2];
    }
    else
    {
      v124 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[0] - outOrigin.v[0];
      v125 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[1];
      v126 = LocalClientGlobals->predictedPlayerState.vehicleState.origin.v[2];
    }
    v133 = fsqrt((float)((float)((float)(v125 - outOrigin.v[1]) * (float)(v125 - outOrigin.v[1])) + (float)(v124 * v124)) + (float)((float)(v126 - outOrigin.v[2]) * (float)(v126 - outOrigin.v[2])));
    ViewZoomScale = CG_GetViewZoomScale(v5->m_localClientNum);
    v135 = *(float *)(v9 + 116);
    if ( v135 > 0.0 && (float)(*(float *)&ViewZoomScale * v133) > v135 )
      v123 = 0;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( v123 )
    return 1;
  v136 = v3->pose.vehicle.boneUsage;
  if ( v136 == 1 )
  {
LABEL_184:
    memset((char *)&v3->pose.moverFx + 36, 254, 24);
    v3->pose.vehicle.wheelFraction[1] = CompressSignedUnit(0.0);
    v3->pose.vehicle.wheelFraction[2] = CompressSignedUnit(0.0);
    return 0;
  }
  if ( v136 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2038, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS)", (const char *)&queryFormat, "cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(NULL);
  if ( WheelCount > 0 )
    memset(&v3->pose.moverFx + 6, 254, WheelCount);
  v3->pose.turret.visualYawLimitLeft = -1.6947395e38;
  return 0;
}

/*
==============
CgVehicleSystem::UpdateEntity
==============
*/
void CgVehicleSystem::UpdateEntity(CgVehicleSystem *this, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  VehicleClient *Client; 
  unsigned int PlayerIndex; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  int ClientIndex; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 979, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 980, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 985, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( Client->index != CG_Vehicle_GetClientIndex(cent) )
  {
    ClientIndex = CG_Vehicle_GetClientIndex(cent);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 986, ASSERT_TYPE_ASSERT, "( veh->index ) == ( CG_Vehicle_GetClientIndex( cent ) )", "%s == %s\n\t%i, %i", "veh->index", "CG_Vehicle_GetClientIndex( cent )", Client->index, ClientIndex) )
      __debugbreak();
  }
  if ( Client->defIndex != CgVehicleSystem::GetClientDefIndex(cent) )
  {
    LODWORD(v10) = CgVehicleSystem::GetClientDefIndex(cent);
    LODWORD(v9) = Client->defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 987, ASSERT_TYPE_ASSERT, "( veh->defIndex ) == ( CgVehicleSystem::GetClientDefIndex( cent ) )", "%s == %s\n\t%i, %i", "veh->defIndex", "CgVehicleSystem::GetClientDefIndex( cent )", v9, v10) )
      __debugbreak();
  }
  if ( Client->entIndex != cent->nextState.number )
  {
    LODWORD(v10) = cent->nextState.number;
    LODWORD(v9) = Client->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 988, ASSERT_TYPE_ASSERT, "( veh->entIndex ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "veh->entIndex", "cent->nextState.number", v9, v10) )
      __debugbreak();
  }
  Client->localClientNum = this->m_localClientNum;
  Client->frameTime = LocalClientGlobals->time - Client->time;
  Client->time = LocalClientGlobals->time;
  Client->flags = CG_Vehicle_GetFlags(cent);
  PlayerIndex = BGVehicles::GetPlayerIndex(&cent->nextState);
  Client->playerIndex = PlayerIndex;
  if ( PlayerIndex >= cls.maxClients )
  {
    LODWORD(v8) = cls.maxClients;
    LODWORD(v7) = PlayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 995, ASSERT_TYPE_ASSERT, "(unsigned)( veh->playerIndex ) < (unsigned)( cls.maxClients )", "veh->playerIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  CG_Vehicle_CalcLocalSpeed(this->m_localClientNum, cent, Client, &Client->localSpeed);
  CG_Vehicle_CalcRotationalSpeed(this->m_localClientNum, cent, Client, &Client->rotateSpeed);
  if ( ((LODWORD(Client->localSpeed.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(Client->localSpeed.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(Client->localSpeed.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1000, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] )") )
    __debugbreak();
  if ( ((LODWORD(Client->rotateSpeed.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(Client->rotateSpeed.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(Client->rotateSpeed.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1001, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] )") )
    __debugbreak();
  if ( this->ShouldUpdateVehicleSound(this, cent) )
    CG_VehicleAudio_UpdateSounds(this->m_localClientNum, cent, Client);
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity != cent->nextState.number || BG_IsSpectating(&LocalClientGlobals->predictedPlayerState) )
    BG_VehicleAnim_Update(this, &cent->nextState, &Client->animinfo, (float)LocalClientGlobals->frametime * 0.001);
}

/*
==============
CgVehicleSystem::UpdateGameModeSpecificVehicleInfo
==============
*/
void CgVehicleSystem::UpdateGameModeSpecificVehicleInfo(CgVehicleSystem *this, const entityState_t *es, BGVehicleInfo *info)
{
  cg_t *LocalClientGlobals; 
  int entity; 
  bool v8; 
  unsigned int animData; 
  unsigned int v10; 
  int v11; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3143, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3144, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3147, ASSERT_TYPE_ASSERT, "(cg)", (const char *)&queryFormat, "cg") )
    __debugbreak();
  *(_QWORD *)info->m_desiredAim.v = 0i64;
  *(_QWORD *)&info->m_desiredAim.z = 0i64;
  *(_QWORD *)&info->m_desiredMove.y = 0i64;
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  v8 = entity != 2047 && entity == es->number && !BG_IsSpectating(&LocalClientGlobals->predictedPlayerState);
  info->m_hasPlayerState = v8;
  animData = es->animInfo.animData;
  v10 = info->m_animInfo.animData;
  if ( ((v10 ^ animData) & 0xFFFFFFFE) != 0 )
  {
    v11 = animData ^ ((unsigned __int8)v10 ^ (unsigned __int8)animData) & 1;
    info->m_animInfo.animData = v11;
    info->m_animInfo.animData = v11 ^ (es->animInfo.animData ^ v11) & 1;
  }
}

/*
==============
CgVehicleSystem::UpdateGroundTarget
==============
*/
void CgVehicleSystem::UpdateGroundTarget(CgVehicleSystem *this, const playerState_s *playerState, const centity_t *vehicleEntity)
{
  unsigned int otherEntityNum; 
  centity_t *Entity; 
  centity_t *v8; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  LocalClientNum_t m_localClientNum; 
  const dvar_t *v12; 
  float value; 
  int number; 
  __int32 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  float v19; 
  __int64 skipEntity; 
  int v21[2]; 
  vec3_t end; 
  vec3_t outViewOrigin; 
  vec3_t outViewAngles; 
  tmat33_t<vec3_t> axis; 
  trace_t results; 

  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2568, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2569, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( (vehicleEntity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2570, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEntity ))", (const char *)&queryFormat, "CENextValid( vehicleEntity )") )
    __debugbreak();
  otherEntityNum = vehicleEntity->nextState.otherEntityNum;
  if ( otherEntityNum != 2047 )
  {
    if ( otherEntityNum >= 0x800 )
    {
      LODWORD(skipEntity) = vehicleEntity->nextState.otherEntityNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2575, ASSERT_TYPE_ASSERT, "(unsigned)( groundEntityIndex ) < (unsigned)( ( 2048 ) )", "groundEntityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", skipEntity, 2048) )
        __debugbreak();
    }
    Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, otherEntityNum);
    v8 = Entity;
    if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_SCRIPTMOVER )
    {
      CgVehicleSystem::GetVehicleViewOrigin(this, playerState, vehicleEntity, &outViewOrigin);
      if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2483, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
        __debugbreak();
      Client = CgVehicleSystem::GetClient(this, vehicleEntity);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2487, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
        __debugbreak();
      ClientDef = CgVehicleSystem::GetClientDef(Client);
      if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2490, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
        __debugbreak();
      m_localClientNum = this->m_localClientNum;
      if ( ClientDef->camRemoteDrive )
        CG_VehicleCam_GetRemoteDriveViewAngles(m_localClientNum, playerState, vehicleEntity, &outViewAngles);
      else
        CG_VehicleCam_GetViewAngles(m_localClientNum, vehicleEntity, &outViewAngles);
      AnglesToAxis(&outViewAngles, &axis);
      if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING|0x80) )
      {
        v12 = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
        if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        value = v12->current.value;
      }
      else
      {
        value = FLOAT_8192_0;
      }
      number = vehicleEntity->nextState.number;
      v15 = 3 * this->m_localClientNum + 2;
      end.v[0] = (float)(value * axis.m[0].v[0]) + outViewOrigin.v[0];
      end.v[1] = (float)(value * axis.m[0].v[1]) + outViewOrigin.v[1];
      end.v[2] = (float)(value * axis.m[0].v[2]) + outViewOrigin.v[2];
      PhysicsQuery_LegacyTrace((Physics_WorldId)v15, &results, &outViewOrigin, &end, &bounds_origin, number, 0, 41969969, 1, NULL, All);
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
      *(_QWORD *)&v8->nextState.lerp.pos.trTime = 0i64;
      v8->nextState.lerp.pos.trType = TR_STATIONARY;
      *(_QWORD *)v8->nextState.lerp.pos.trDelta.v = 0i64;
      v8->nextState.lerp.pos.trDelta.v[2] = 0.0;
      if ( v8 == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      if ( v8->nextState.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
      {
        v21[0] = SLODWORD(end.v[0]);
        if ( (LODWORD(end.v[0]) & 0x7F800000) == 2139095040 || (v21[0] = SLODWORD(end.v[1]), (LODWORD(end.v[1]) & 0x7F800000) == 2139095040) || (v21[0] = SLODWORD(end.v[2]), (LODWORD(end.v[2]) & 0x7F800000) == 2139095040) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v16 = LODWORD(end.v[0]) ^ ~s_trbase_aab_X;
        v17 = v16 ^ s_trbase_aab_Y ^ LODWORD(end.v[1]);
        v18 = v17 ^ s_trbase_aab_Z ^ LODWORD(end.v[2]);
        LODWORD(v8->nextState.lerp.pos.trBase.v[1]) = v17;
        LODWORD(v8->nextState.lerp.pos.trBase.v[2]) = v18;
        LODWORD(v8->nextState.lerp.pos.trBase.v[0]) = v16;
        memset(v21, 0, sizeof(v21));
      }
      else
      {
        v19 = end.v[1];
        v8->nextState.lerp.pos.trBase.v[0] = end.v[0];
        v8->nextState.lerp.pos.trBase.v[2] = end.v[2];
        v8->nextState.lerp.pos.trBase.v[1] = v19;
      }
    }
  }
}

/*
==============
CgVehicleSystem::UpdateHelicopterRotorBoneControllers
==============
*/
void CgVehicleSystem::UpdateHelicopterRotorBoneControllers(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  ;
}

/*
==============
CgVehicleSystem::UpdatePlayerVehicle
==============
*/
void CgVehicleSystem::UpdatePlayerVehicle(CgVehicleSystem *this)
{
  int v2; 
  centity_t *v3; 
  int number; 
  cg_t *LocalClientGlobals; 
  __int64 v6; 
  int entity; 
  __int16 viewlocked_entNum; 
  int playerVehicleEntity; 
  cg_t *v10; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 

  v2 = 0;
  v3 = NULL;
  number = 2047;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !CG_View_IsKillCamEntityView((const LocalClientNum_t)this->m_localClientNum) && !CG_IsCinematicCameraActive(this->m_localClientNum) )
  {
    if ( CG_VehicleCam_IsRemoteDriveCam(this->m_localClientNum) || CG_VehicleCam_IsPlayerControlCam(this->m_localClientNum) )
    {
      entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
    }
    else if ( CG_VehicleCam_IsRemoteControlCam(this->m_localClientNum) )
    {
      entity = LocalClientGlobals->predictedPlayerState.remoteControlEnt;
    }
    else
    {
      viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
      if ( viewlocked_entNum == 2047 )
        goto LABEL_12;
      entity = viewlocked_entNum;
    }
    v3 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entity);
    if ( CG_Vehicle_IsVehicleEntity(v3) )
      number = v3->nextState.number;
  }
LABEL_12:
  playerVehicleEntity = LocalClientGlobals->playerVehicleEntity;
  if ( playerVehicleEntity == number )
  {
LABEL_39:
    if ( number != 2047 )
    {
      if ( !v3 || (v3->flags & 1) == 0 )
        goto LABEL_52;
      if ( v3 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((v3->nextState.eType - 12) & 0xFFFD) != 0 )
      {
LABEL_52:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2819, ASSERT_TYPE_ASSERT, "(vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
          __debugbreak();
      }
      CgVehicleSystem::UpdateGroundTarget(this, &LocalClientGlobals->predictedPlayerState, v3);
    }
    goto LABEL_49;
  }
  if ( playerVehicleEntity != 2047 )
  {
    ((void (__fastcall *)(CgVehicleSystem *, __int64, const char *))this->ClearViewRoll)(this, v6, "es");
    CG_ClearAudioOverride(this->m_localClientNum, CTAUD_OVERRIDE_VEHICLE, 0.0);
    v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_VisionSetSetBlendOff(&v10->cvsData, VISIONSET_BLENDTYPE_VEHICLE);
  }
  if ( number != 2047 )
  {
    if ( !v3 || (v3->flags & 1) == 0 )
      goto LABEL_53;
    if ( v3 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v3->nextState.eType - 12) & 0xFFFD) != 0 )
    {
LABEL_53:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2724, ASSERT_TYPE_ASSERT, "(vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
        __debugbreak();
    }
    Client = CgVehicleSystem::GetClient(this, v3);
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( CL_IsRenderingSplitScreen() )
    {
      LOBYTE(v2) = ClientDef->soundTriggerOverrideReverb;
      v13 = v2 | 2;
      if ( !ClientDef->soundTriggerOverrideMix )
        v13 = v2;
      v14 = v13 | 4;
      if ( !ClientDef->soundTriggerOverrideFilter )
        v14 = v13;
      v15 = v14 | 8;
      if ( !ClientDef->soundTriggerOverrideOcclusion )
        v15 = v14;
      v16 = v15 | 0x10;
      if ( !ClientDef->soundTriggerOverrideAmbient )
        v16 = v15;
      v17 = v16 | 0x20;
      if ( !ClientDef->soundTriggerOverrideAmbientEvents )
        v17 = v16;
      v18 = v17 | 0x40;
      if ( !ClientDef->soundTriggerOverrideADSR )
        v18 = v17;
      CG_SetAudioOverride(this->m_localClientNum, ClientDef->soundTriggerOverrideZone, CTAUD_OVERRIDE_VEHICLE, 0.0, v18);
    }
    CgVehicleSystem::ApplyVisionSettings(this, v3);
    goto LABEL_39;
  }
LABEL_49:
  LocalClientGlobals->playerVehicleEntity = number;
}

/*
==============
CgVehicleSystem::UpdateVehicleDObjs
==============
*/
void CgVehicleSystem::UpdateVehicleDObjs(CgVehicleSystem *this)
{
  int v1; 
  BGVehicleInfo *p_animinfo; 
  bool v4; 
  __int64 m_fireWeapon; 
  __int64 m_localClientNum; 
  CgEntitySystem *v7; 
  __int64 v8; 
  entityState_t *p_nextState; 
  CgHandler *Handler; 
  unsigned __int8 camoIndex; 
  DObj *ClientDObj; 
  DObj *obj; 
  __int64 v14; 
  VehicleStickerCamoInfo outStickerCamoInfo; 

  v1 = 0;
  p_animinfo = &this->m_vehicleClients[0].animinfo;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v14) = 128;
      LODWORD(obj) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", obj, v14) )
        __debugbreak();
    }
    if ( p_animinfo == (BGVehicleInfo *)200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3644, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
      __debugbreak();
    m_fireWeapon = p_animinfo[-1].m_fireWeapon;
    m_localClientNum = this->m_localClientNum;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v14) = this->m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
        __debugbreak();
    }
    if ( (unsigned int)m_localClientNum >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v14) = CgEntitySystem::ms_allocatedCount;
      LODWORD(obj) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", obj, v14) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[m_localClientNum] )
    {
      LODWORD(v14) = m_localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v14) )
        __debugbreak();
    }
    v7 = CgEntitySystem::ms_entitySystemArray[m_localClientNum];
    if ( (unsigned int)m_fireWeapon >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(obj) = m_fireWeapon;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", obj, v14) )
        __debugbreak();
    }
    v8 = (__int64)&v7->m_entities[m_fireWeapon];
    if ( (CgEntitySystem *)((char *)v7 + 760 * m_fireWeapon) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (v7->m_entities[m_fireWeapon].flags & 1) != 0 )
    {
      p_nextState = &v7->m_entities[m_fireWeapon].nextState;
      if ( v8 == -400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((*(_WORD *)(v8 + 408) - 12) & 0xFFFD) == 0 )
      {
        Handler = CgHandler::getHandler(this->m_localClientNum);
        BG_VehicleAnim_UpdateDObj(this, (entityState_t *)(v8 + 400), p_animinfo, Handler);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x100) )
        {
          *(_DWORD *)outStickerCamoInfo.stickerIndices = 0;
          outStickerCamoInfo.camoIndex = 0;
          BG_Vehicle_GetStickerCamoMaterialIndices((const unsigned int *)(v8 + 516), &outStickerCamoInfo);
          camoIndex = outStickerCamoInfo.camoIndex;
          if ( testCamoIndexHack )
            camoIndex = staticTestCamoIndex;
          outStickerCamoInfo.camoIndex = camoIndex;
          if ( testStickerIndexHack )
          {
            outStickerCamoInfo.stickerIndices[0] = staticTestStickerIndex;
            outStickerCamoInfo.stickerIndices[1] = staticTestStickerIndex;
          }
          ClientDObj = Com_GetClientDObj(p_nextState->number, this->m_localClientNum);
          if ( CgVehicleSystem::IsDobjValidForVehicle(ClientDObj) )
          {
            if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3632, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
              __debugbreak();
            CG_Vehicle_UpdateCamoAndSticker((const LocalClientNum_t)this->m_localClientNum, &outStickerCamoInfo.camoIndex, 1u, outStickerCamoInfo.stickerIndices, 2u, ClientDObj);
          }
        }
      }
    }
    ++v1;
    p_animinfo = (BGVehicleInfo *)((char *)p_animinfo + 588);
    v4 = (unsigned int)v1 < 0x80;
  }
  while ( v1 < 128 );
}

/*
==============
CgVehicleSystem::UpdateVehicleRevPriority
==============
*/
void CgVehicleSystem::UpdateVehicleRevPriority(CgVehicleSystem *this)
{
  CgVehicleSystem *v1; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  float v4; 
  int time; 
  int v6; 
  unsigned int v7; 
  __int64 v8; 
  CgEntitySystem **v9; 
  connstate_t *p_connectionState; 
  int v11; 
  float *v12; 
  __int64 v13; 
  CgEntitySystem *v14; 
  const centity_t *v15; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  float value; 
  float v24; 
  float v25; 
  float v26; 
  const VehicleDef *ClientDef; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  const VehicleClient *v31; 
  __int64 entIndex; 
  __int64 v33; 
  CgEntitySystem *v34; 
  __int64 v35; 
  __int64 v36; 
  const VehicleDef *v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  int v42[3]; 
  cg_t *v43; 
  connstate_t *v44; 
  CgEntitySystem **v45; 
  CgVehicleSystem *v46; 
  __int64 v47; 
  int Base[256]; 

  v47 = -2i64;
  v1 = this;
  v46 = this;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = v1->m_localClientNum;
  v4 = cl_maxLocalClients;
  if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1->m_localClientNum, cl_maxLocalClients) )
      __debugbreak();
    v4 = cl_maxLocalClients;
  }
  if ( v4 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( m_localClientNum == cls.m_localClientsActive.firstActiveIndex )
  {
    time = LocalClientGlobals->time;
    if ( v1->m_revPriorityUpdateTime <= time )
    {
      v1->m_revPriorityUpdateTime = time + 1000;
      memset_0(Base, 0, sizeof(Base));
      v6 = 0;
      v7 = 0;
      if ( SLODWORD(cl_maxLocalClients) > 0 )
      {
        v8 = 0i64;
        v9 = CgEntitySystem::ms_entitySystemArray;
        v45 = CgEntitySystem::ms_entitySystemArray;
        p_connectionState = &clientUIActives[0].connectionState;
        v44 = &clientUIActives[0].connectionState;
        do
        {
          if ( v7 >= 2 )
          {
            LODWORD(v40) = 2;
            LODWORD(v38) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v38, v40) )
              __debugbreak();
            LODWORD(v41) = 2;
            LODWORD(v39) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v39, v41) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_connectionState + 28) )
          {
            if ( v7 >= 2 )
            {
              LODWORD(v40) = 2;
              LODWORD(v38) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v38, v40) )
                __debugbreak();
            }
            if ( *p_connectionState == CA_ACTIVE )
            {
              v43 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
              v11 = 0;
              v12 = &v1->m_vehicleClients[0].audioState.entOrigin.v[2];
              do
              {
                if ( v8 >= 128 )
                  break;
                if ( (unsigned int)v11 >= 0x80 )
                {
                  LODWORD(v40) = 128;
                  LODWORD(v38) = v11;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v38, v40) )
                    __debugbreak();
                }
                if ( v12 == (float *)504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3714, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
                  __debugbreak();
                v13 = *((int *)v12 - 106);
                if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
                {
                  LODWORD(v40) = v7;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v40) )
                    __debugbreak();
                }
                if ( v7 >= CgEntitySystem::ms_allocatedCount )
                {
                  LODWORD(v40) = CgEntitySystem::ms_allocatedCount;
                  LODWORD(v38) = v7;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v38, v40) )
                    __debugbreak();
                }
                if ( !*v9 )
                {
                  LODWORD(v40) = v7;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v40) )
                    __debugbreak();
                }
                v14 = *v9;
                if ( (unsigned int)v13 >= 0x800 )
                {
                  LODWORD(v40) = 2048;
                  LODWORD(v38) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v38, v40) )
                    __debugbreak();
                }
                v15 = &v14->m_entities[v13];
                if ( CG_Vehicle_IsVehicleEntity(v15) )
                {
                  *((_BYTE *)v12 + 74) = 0;
                  v12[19] = 0.0;
                  p_view = &v43->refdef.view;
                  if ( v43 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
                    __debugbreak();
                  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
                  v = (_DWORD *)p_view->org.org.v;
                  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                    __debugbreak();
                  v42[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
                  v42[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
                  v42[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
                  v19 = *(float *)v42 - *(v12 - 2);
                  v20 = *(float *)&v42[1] - *(v12 - 1);
                  v21 = *(float *)&v42[2] - *v12;
                  v22 = DVARFLT_cg_revPriority_distanceMax;
                  if ( !DVARFLT_cg_revPriority_distanceMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_revPriority_distanceMax") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v22);
                  value = v22->current.value;
                  v24 = fsqrt((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
                  if ( v24 <= value )
                  {
                    if ( value <= 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3740, ASSERT_TYPE_ASSERT, "(maxDistance > 0.001f)", (const char *)&queryFormat, "maxDistance > EQUAL_EPSILON") )
                      __debugbreak();
                    v25 = (float)(100.0 / value) * fminf(v24, value);
                    if ( v15->nextState.otherEntityNum == CG_GetEntity((const LocalClientNum_t)v7, v43->clientNum)->nextState.number )
                    {
                      v26 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      ClientDef = CgVehicleSystem::GetClientDef((const VehicleClient *)(v12 - 126));
                      if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3752, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
                        __debugbreak();
                      v26 = (float)(100.0 - v25) + ClientDef->revPlayerPriority;
                    }
                    *(float *)&Base[2 * v8] = fmaxf(v26, 0.0);
                    Base[2 * v8++ + 1] = v11;
                  }
                  memset(v42, 0, sizeof(v42));
                }
                ++v11;
                v12 += 147;
                v9 = v45;
              }
              while ( v11 < 128 );
              v6 = 0;
              p_connectionState = v44;
              v1 = v46;
            }
          }
          ++v7;
          p_connectionState += 110;
          v44 = p_connectionState;
          v45 = ++v9;
        }
        while ( (int)v7 < SLODWORD(cl_maxLocalClients) );
      }
      qsort(Base, 0x80ui64, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)VehicleCompareRevPriority);
      v28 = 0i64;
      v29 = 128;
      do
      {
        if ( *(float *)&Base[2 * v28] <= 0.0 )
          break;
        v30 = Base[2 * v28 + 1];
        if ( (unsigned int)v30 >= 0x80 )
        {
          LODWORD(v40) = 128;
          LODWORD(v38) = Base[2 * v28 + 1];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v38, v40) )
            __debugbreak();
        }
        v31 = &v1->m_vehicleClients[v30];
        if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3773, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
          __debugbreak();
        entIndex = v31->entIndex;
        v33 = v1->m_localClientNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v40) = v1->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v40) )
            __debugbreak();
        }
        if ( (unsigned int)v33 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v40) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v38) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v38, v40) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v33] )
        {
          LODWORD(v40) = v33;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v40) )
            __debugbreak();
        }
        v34 = CgEntitySystem::ms_entitySystemArray[v33];
        if ( (unsigned int)entIndex >= 0x800 )
        {
          LODWORD(v40) = 2048;
          LODWORD(v38) = entIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v38, v40) )
            __debugbreak();
        }
        v35 = (__int64)&v34->m_entities[entIndex];
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v35 + 648) & 1) == 0 )
          break;
        v36 = v35 + 400;
        if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((*(_WORD *)(v36 + 8) - 12) & 0xFFFD) != 0 )
          break;
        v37 = CgVehicleSystem::GetClientDef(v31);
        if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3782, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
          __debugbreak();
        if ( v6 < 5 && v37->useRevAudioSettings && !v31->audioState.hasRevPriority )
        {
          ++v6;
          v31->audioState.hasRevPriority = 1;
        }
        if ( !v31->audioState.priority )
          v31->audioState.priority = v29;
        --v29;
        ++v28;
        v1 = v46;
      }
      while ( v28 < 128 );
    }
  }
}

/*
==============
CgVehicleSystem::UpdateVehicleStickerAndCamo
==============
*/
void CgVehicleSystem::UpdateVehicleStickerAndCamo(CgVehicleSystem *this, centity_t *cent)
{
  unsigned __int8 camoIndex; 
  DObj *obj; 
  VehicleStickerCamoInfo outStickerCamoInfo; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3599, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE) && Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE|0x100) )
  {
    *(_DWORD *)outStickerCamoInfo.stickerIndices = 0;
    outStickerCamoInfo.camoIndex = 0;
    BG_Vehicle_GetStickerCamoMaterialIndices(&cent->nextState.lerp.u.agentCorpse.attachModels[6].m_data, &outStickerCamoInfo);
    camoIndex = outStickerCamoInfo.camoIndex;
    if ( testCamoIndexHack )
      camoIndex = staticTestCamoIndex;
    outStickerCamoInfo.camoIndex = camoIndex;
    if ( testStickerIndexHack )
    {
      outStickerCamoInfo.stickerIndices[0] = staticTestStickerIndex;
      outStickerCamoInfo.stickerIndices[1] = staticTestStickerIndex;
    }
    obj = Com_GetClientDObj(cent->nextState.number, this->m_localClientNum);
    if ( CgVehicleSystem::IsDobjValidForVehicle(obj) )
    {
      if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3632, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
        __debugbreak();
      CG_Vehicle_UpdateCamoAndSticker((const LocalClientNum_t)this->m_localClientNum, &outStickerCamoInfo.camoIndex, 1u, outStickerCamoInfo.stickerIndices, 2u, obj);
    }
  }
}

/*
==============
CgVehicleSystem::UpdateWheelSpinAngles
==============
*/
void CgVehicleSystem::UpdateWheelSpinAngles(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  int frametime; 
  LocalClientNum_t m_localClientNum; 
  __int128 v8; 
  __int64 v9; 
  const XModel *Model; 
  const DObjAnimMat *BasePose; 
  VehicleClient *Client; 
  unsigned int v13; 
  int v14; 
  float v16; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsGround *v18; 
  __int128 v19; 
  __int64 v20; 
  unsigned int m_wheelCount; 
  __int16 *wheelSpinAngle; 
  const BgVehiclePhysicsGround::Wheel *Wheel; 
  double v24; 
  float v25; 
  __int64 number; 
  __int128 v32; 
  __int128 v33; 
  float v34; 
  __int128 v35; 
  __int64 WheelCount; 
  const dvar_t *v38; 
  signed int v40; 
  unsigned int WheelHitBodyId; 
  __int16 *v42; 
  __int64 i; 
  unsigned __int8 v44; 
  float v48; 
  float v49; 
  double v50; 
  char v53[4]; 
  float v54; 
  cg_t *LocalClientGlobals; 
  float v56; 
  int v57; 
  float v58; 
  vec3_t linVel; 
  tmat33_t<vec3_t> axis; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1224, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1225, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( cent->pose.vehicle.boneUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1226, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS)", (const char *)&queryFormat, "cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1229, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  frametime = LocalClientGlobals->frametime;
  if ( frametime > 0 )
  {
    m_localClientNum = this->m_localClientNum;
    *((_QWORD *)&v8 + 1) = 0i64;
    v58 = (float)frametime;
    *(_QWORD *)linVel.v = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
    if ( !*(_QWORD *)linVel.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1239, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v9 = (*(__int64 (__fastcall **)(_QWORD, entityState_t *))(**(_QWORD **)linVel.v + 32i64))(*(_QWORD *)linVel.v, &cent->nextState);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1241, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( !*(_DWORD *)(v9 + 764) )
    {
      Model = DObjGetModel(obj, 0);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1247, ASSERT_TYPE_ASSERT, "(objModel)", (const char *)&queryFormat, "objModel") )
        __debugbreak();
      BasePose = XModelGetBasePose(Model);
      if ( !BasePose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1249, ASSERT_TYPE_ASSERT, "(bonePoseMatrices)", (const char *)&queryFormat, "bonePoseMatrices") )
        __debugbreak();
      v57 = XModelNumBones(Model);
      if ( v57 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1252, ASSERT_TYPE_ASSERT, "(modelBoneCount >= 0)", (const char *)&queryFormat, "modelBoneCount >= 0") )
        __debugbreak();
      Client = CgVehicleSystem::GetClient(this, cent);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1255, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
        __debugbreak();
      v13 = 0;
      cent->pose.vehicle.wheelSteeringRatioMaxIndex = 1;
      cent->pose.vehicle.wheelSteeringRatioDecay = 0;
      if ( *(_DWORD *)(v9 + 260) == 4 )
      {
        v8 = LODWORD(FLOAT_0_85000002);
        cent->pose.vehicle.wheelSteeringRatioMaxIndex = 3;
        cent->pose.vehicle.wheelSteeringRatioDecay = CompressUnit(0.85000002);
      }
      v14 = *(_DWORD *)(v9 + 712);
      if ( (v14 < 0 || (unsigned int)v14 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum VehicleWheelSpinBoneType>(enum VehicleWheelSpinBoneType)", "unsigned", (unsigned __int8)v14, "signed", v14) )
        __debugbreak();
      _XMM6 = LODWORD(FLOAT_3_4028235e38);
      cent->pose.vehicle.spinWheelBones = v14;
      v16 = *(float *)(v9 + 716);
      if ( BGVehicles::PhysicsIsValid(Client->physicsId) && (ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, Client->physicsId), (v18 = (BgVehiclePhysicsGround *)ObjectById) != NULL) && ObjectById->SupportsFeature(ObjectById, VPFEAT_WHEEL_SPINANGLES) )
      {
        *(double *)&v8 = BgVehiclePhysics::GetTopSpeedForward(v18);
        v19 = v8;
        *(float *)&v19 = *(float *)&v8 * 0.2;
        _XMM6 = v19;
        v20 = (__int64)LocalClientGlobals;
        if ( BgVehiclePhysics::IsDynamic(v18) && !LocalClientGlobals->inKillCam )
        {
          if ( !v18->SupportsFeature(v18, VPFEAT_GROUND_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1283, ASSERT_TYPE_ASSERT, "(vehObj->SupportsFeature( VPFEAT_GROUND_VEHICLE ))", (const char *)&queryFormat, "vehObj->SupportsFeature( VPFEAT_GROUND_VEHICLE )") )
            __debugbreak();
          m_wheelCount = v18->m_wheelCount;
          if ( m_wheelCount )
          {
            wheelSpinAngle = cent->pose.vehicle.wheelSpinAngle;
            do
            {
              Wheel = BgVehiclePhysicsGround::GetWheel(v18, v13);
              v24 = AngleNormalize360(Wheel->m_spinAngle);
              Client->wheelSpinAngle[0] = *(float *)&v24;
              v25 = (float)v13;
              AngleNormalize360((float)(v25 * v16) + Wheel->m_spinAngle);
              _XMM3 = 0i64;
              __asm { vroundss xmm3, xmm3, xmm2, 1 }
              ++v13;
              *wheelSpinAngle++ = (int)*(float *)&_XMM3;
              Client = (VehicleClient *)((char *)Client + 4);
            }
            while ( v13 < m_wheelCount );
          }
          return;
        }
      }
      else
      {
        v20 = (__int64)LocalClientGlobals;
        v18 = NULL;
      }
      *(double *)&v8 = CgVehicleSystem::ComputeForwardSpeed(this, Client, cent);
      number = (unsigned int)cent->nextState.number;
      _XMM7 = 0i64;
      v54 = 0.0;
      v56 = 0.0;
      v53[0] = 0;
      _XMM10 = v8;
      (*(void (__fastcall **)(_QWORD, __int64, float *, char *, float *))(**(_QWORD **)linVel.v + 336i64))(*(_QWORD *)linVel.v, number, &v54, v53, &v56);
      if ( (float)(*(float *)&v8 * v54) < 0.0 )
      {
        __asm
        {
          vcmpltss xmm1, xmm6, xmm0
          vblendvps xmm10, xmm10, xmm7, xmm1
        }
      }
      v32 = LODWORD(Client->rotateSpeed.v[1]);
      *(float *)&v32 = (float)(*(float *)&v32 * 0.017453292) * yawSpeedFac;
      v33 = v32;
      if ( COERCE_FLOAT(v32 & _xmm) < 0.001 )
      {
        v34 = cent->pose.angles.v[1] - cent->pose.prevAngles.v[1];
        if ( COERCE_FLOAT(LODWORD(v34) & _xmm) > 0.001 )
        {
          v35 = LODWORD(FLOAT_1000_0);
          *(float *)&v35 = (float)(1000.0 / (float)*(int *)(v20 + 26084)) * v34;
          v33 = v35;
        }
      }
      QuatToAxis(&BasePose->quat, &axis);
      WheelCount = BGVehicles::GetWheelCount((const VehicleDef *)v9);
      if ( *(_DWORD *)(v9 + 248) )
        _XMM0 = *(unsigned int *)(v9 + 328);
      else
        _XMM0 = *(unsigned int *)(v9 + 740);
      v38 = DVARBOOL_bg_vehSurfaceVelocity;
      __asm { vmaxss  xmm15, xmm0, xmm6 }
      if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      if ( v38->current.enabled )
      {
        v40 = 0;
        linVel.v[0] = 0.0;
        linVel.v[1] = 0.0;
        linVel.v[2] = 0.0;
        if ( v18 )
        {
          while ( v40 < (int)WheelCount )
          {
            if ( BgVehiclePhysicsGround::GetWheelHitBodyId(v18, v40) != 0xFFFFFF )
            {
              WheelHitBodyId = BgVehiclePhysicsGround::GetWheelHitBodyId(v18, v40);
              Physics_GetRigidBodyLinVel((const Physics_WorldId)v18->m_worldId, WheelHitBodyId, &linVel);
              *(float *)&_XMM10 = *(float *)&_XMM10 - (float)((float)((float)(linVel.v[1] * v18->m_transform.m[0].v[1]) + (float)(linVel.v[0] * v18->m_transform.m[0].v[0])) + (float)(linVel.v[2] * v18->m_transform.m[0].v[2]));
              break;
            }
            ++v40;
          }
        }
      }
      if ( WheelCount > 0 )
      {
        v42 = cent->pose.vehicle.wheelSpinAngle;
        for ( i = 0i64; i < WheelCount; ++i )
        {
          v44 = cent->pose.vehicle.wheelBoneIndex[i];
          if ( v44 < 0xFEu && v44 < v57 && (int)v13 < 12 )
          {
            if ( *(_BYTE *)(v9 + 8) == 9 )
            {
              __asm { vcmpless xmm0, xmm7, xmm3 }
              _XMM4 = v33 ^ (unsigned int)_xmm;
              __asm { vblendvps xmm0, xmm4, xmm9, xmm0 }
              LODWORD(v48) = _XMM0 ^ _xmm;
            }
            else
            {
              v48 = 0.0;
            }
            v49 = (float)((float)((float)(v48 + *(float *)&_XMM10) / *(float *)&_XMM15) * (float)(0.057295777 * v58)) + Client->wheelSpinAngle[i];
            v50 = AngleNormalize360(v49);
            Client->wheelSpinAngle[i] = *(float *)&v50;
            AngleNormalize360((float)(_mm_cvtepi32_ps((__m128i)v13).m128_f32[0] * v16) + v49);
            _XMM3 = 0i64;
            __asm { vroundss xmm3, xmm3, xmm2, 1 }
            *v42 = (int)*(float *)&_XMM3;
          }
          ++v13;
          ++v42;
        }
      }
    }
  }
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers
==============
*/
void CgVehicleSystem::UpdateWheelsBoneControllers(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  const VehicleDef *v6; 
  const VehicleDef *ClientDef; 
  const VehicleDef *v8; 
  VehicleType type; 
  int v10; 
  unsigned __int8 *otherWheelBoneIndex; 
  scr_string_t OtherWheelBoneTag; 
  VehicleClient *Client; 
  BgVehiclePhysics *ObjectById; 
  cg_t *LocalClientGlobals; 
  BgVehiclePhysics_vtbl *v16; 
  int modelIndex; 
  vec3_t v24; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2310, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->pose.turret.barrelPitch > 0.0 )
  {
    if ( CgVehicleSystem::HasTreadSimulationEnabled(this, cent) )
    {
      CgVehicleSystem::UpdateWheelsBoneControllers_TreadSim(this, obj, cent);
    }
    else
    {
      v6 = this->GetVehicleDef(this, &cent->nextState);
      CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(this, v6, obj, cent);
    }
    if ( CG_Vehicle_IsCorpse(cent) )
      ClientDef = CgVehicleSystem::GetClientDef((unsigned int)cent->nextState.lerp.u.anonymous.data[0] >> 7);
    else
      ClientDef = this->GetVehicleDef(this, &cent->nextState);
    v8 = ClientDef;
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2267, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
      __debugbreak();
    type = v8->type;
    if ( type == VEH_TREADED )
    {
      if ( v8->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_BRADLEY )
      {
        v10 = 0;
        otherWheelBoneIndex = cent->pose.vehicle.otherWheelBoneIndex;
        do
        {
          OtherWheelBoneTag = BGVehicles::GetOtherWheelBoneTag(v8, v10);
          if ( OtherWheelBoneTag )
            DObjGetBoneIndexInternal_60(obj, OtherWheelBoneTag, otherWheelBoneIndex, &modelIndex);
          ++v10;
          ++otherWheelBoneIndex;
        }
        while ( v10 < 4 );
      }
    }
    else if ( type == VEH_CAR && !DObjGetBoneIndexInternal_60(obj, scr_const.handle, &cent->pose.player.animCtrl, &modelIndex) )
    {
      cent->pose.player.animCtrl = -2;
      if ( !DObjGetBoneIndexInternal_60(obj, scr_const.tag_steering_jnt, &cent->pose.player.animCtrl, &modelIndex) )
        cent->pose.player.animCtrl = -2;
    }
    if ( CgVehicleSystem::PhysicsIsValidVehicle(this->m_localClientNum, cent) )
    {
      Client = CgVehicleSystem::GetClient(this, cent);
      if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2294, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
        __debugbreak();
      ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, Client->physicsId);
      if ( ObjectById->SupportsFeature(ObjectById, VPFEAT_CHASSIS_VIBRATION_NOISE) )
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
        v16 = ObjectById->__vftable;
        v24 = vec3_origin;
        v16->ComputeChassisVibrationNoise(ObjectById, LocalClientGlobals->time, &v24);
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm0, 1 }
        cent->pose.vehicle.pitch = (int)*(float *)&_XMM1;
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm3, 1 }
        cent->pose.vehicle.roll = (int)*(float *)&_XMM1;
        _XMM1 = 0i64;
        __asm { vroundss xmm1, xmm1, xmm3, 1 }
        cent->pose.vehicle.yaw = (int)*(float *)&_XMM1;
      }
    }
  }
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast
==============
*/
void CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  const VehicleDef *v6; 

  v6 = this->GetVehicleDef(this, &cent->nextState);
  CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(this, v6, obj, cent);
}

/*
==============
CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast
==============
*/
void CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(CgVehicleSystem *this, const VehicleDef *vehicleDef, DObj *obj, centity_t *cent)
{
  float barrelPitch; 
  const XModel *Model; 
  __int64 WheelCount; 
  cg_t *LocalClientGlobals; 
  int number; 
  int entity; 
  VehicleClient *Client; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsGround *v16; 
  unsigned int m_wheelCount; 
  __int64 v18; 
  CEntFx *v19; 
  scr_string_t WheelBoneTag; 
  const BgVehiclePhysicsGround::Wheel *Wheel; 
  __int128 v23; 
  float minimumWheelCastFraction; 
  unsigned int m_surfFlags; 
  float v27; 
  unsigned int v28; 
  __int64 v29; 
  CEntFx *v30; 
  unsigned int *p_m_contactBodyId; 
  scr_string_t v32; 
  const dvar_t *v33; 
  int v34; 
  unsigned int bodyId; 
  __int128 v40; 
  float v41; 
  float v42; 
  hkMemoryAllocator *v45; 
  hkMemoryAllocator *v46; 
  int modelIndex[2]; 
  unsigned int *v48; 
  DObj *obja; 
  Physics_RaycastExtendedData extendedData; 
  const DObjAnimMat *BasePose; 
  CgVehicleSystem *v52; 
  __int64 v53; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v55; 
  vec3_t end; 
  vec3_t center; 
  vec3_t out; 
  PhysicsQuery_RaycastHit hit; 
  tmat43_t<vec3_t> axis; 

  v55 = -2i64;
  obja = obj;
  v52 = this;
  barrelPitch = cent->pose.turret.barrelPitch;
  if ( barrelPitch <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2114, ASSERT_TYPE_ASSERT, "(suspTravel > 0.0f)", (const char *)&queryFormat, "suspTravel > 0.0f") )
    __debugbreak();
  AnglesToAxis(&cent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&cent->pose, &axis.m[3]);
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2121, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(vehicleDef);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  number = cent->nextState.number;
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  Client = CgVehicleSystem::GetClient(this, cent);
  if ( !BGVehicles::PhysicsIsValid(Client->physicsId) || (ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, Client->physicsId), (v16 = (BgVehiclePhysicsGround *)ObjectById) == NULL) || !ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) )
    v16 = NULL;
  if ( entity == number && v16 && BgVehiclePhysics::IsDynamic(v16) && v16->m_playerControlled )
  {
    m_wheelCount = v16->m_wheelCount;
    v18 = 0i64;
    if ( m_wheelCount )
    {
      v19 = &cent->pose.moverFx + 3;
      do
      {
        WheelBoneTag = BGVehicles::GetWheelBoneTag(vehicleDef, v18);
        if ( WheelBoneTag && DObjGetBoneIndexInternal_60(obja, WheelBoneTag, &cent->pose.vehicle.wheelBoneIndex[v18], modelIndex) )
        {
          Wheel = BgVehiclePhysicsGround::GetWheel(v16, v18);
          *(float *)&_XMM1 = Wheel->m_suspRawFraction;
          v23 = 0i64;
          if ( vehicleDef->vehiclePhysicsDef.physicsEnabled && vehicleDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_MKILO && (unsigned int)v18 <= 1 )
            minimumWheelCastFraction = FLOAT_0_80000001;
          else
            minimumWheelCastFraction = vehicleDef->vehiclePhysicsDef.minimumWheelCastFraction;
          if ( (float)((float)LOWORD(v19->triggerTime) * 0.000015259022) >= minimumWheelCastFraction )
          {
            *(float *)&v23 = (float)((float)((float)LOWORD(v19->triggerTime) * 0.000015259022) + *(float *)&_XMM1) * 0.5;
            _XMM1 = v23;
            __asm { vmaxss  xmm1, xmm1, xmm2 }
          }
          LOWORD(v19->triggerTime) = CompressUnit(*(float *)&_XMM1);
          if ( Wheel->m_contactBodyId == 0xFFFFFF )
            m_surfFlags = 0;
          else
            m_surfFlags = Wheel->m_surfFlags;
          cent->pose.vehicle.wheelSurfaceType = (m_surfFlags >> 19) & 0x3F;
        }
        v18 = (unsigned int)(v18 + 1);
        v19 = (CEntFx *)((char *)v19 + 2);
      }
      while ( (unsigned int)v18 < m_wheelCount );
    }
  }
  else
  {
    v27 = FLOAT_1_0;
    v28 = 0;
    v53 = WheelCount;
    if ( (int)WheelCount > 0 )
    {
      v29 = 0i64;
      v30 = &cent->pose.moverFx + 3;
      p_m_contactBodyId = &v16->m_wheels[0].m_contactBodyId;
      v48 = &v16->m_wheels[0].m_contactBodyId;
      do
      {
        v32 = BGVehicles::GetWheelBoneTag(vehicleDef, v28);
        if ( v32 && DObjGetBoneIndexInternal_60(obja, v32, &cent->pose.vehicle.wheelBoneIndex[v28], modelIndex) )
        {
          MatrixTransformVector43(&BasePose[cent->pose.vehicle.wheelBoneIndex[v29]].trans, &axis, &out);
          center.v[0] = (float)((float)(barrelPitch * 0.5) * 0.0) + out.v[0];
          center.v[1] = (float)((float)(barrelPitch * 0.5) * 0.0) + out.v[1];
          center.v[2] = (float)((float)(barrelPitch * 0.5) * 1.0) + out.v[2];
          end.v[0] = (float)(COERCE_FLOAT(LODWORD(barrelPitch) ^ _xmm) * 0.0) + center.v[0];
          end.v[1] = (float)(COERCE_FLOAT(LODWORD(barrelPitch) ^ _xmm) * 0.0) + center.v[1];
          end.v[2] = (float)(COERCE_FLOAT(LODWORD(barrelPitch) ^ _xmm) * 1.0) + center.v[2];
          v33 = DCONST_DVARINT_bg_vehicleDebug;
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v33);
          if ( v33->current.integer == 2 && vehicleDebugCl )
          {
            end.v[0] = (float)(COERCE_FLOAT(LODWORD(DEBUG_NUDGE_DIST) ^ _xmm) * 0.0) + end.v[0];
            end.v[1] = (float)(COERCE_FLOAT(LODWORD(DEBUG_NUDGE_DIST) ^ _xmm) * 0.0) + end.v[1];
            end.v[2] = (float)(COERCE_FLOAT(LODWORD(DEBUG_NUDGE_DIST) ^ _xmm) * 1.0) + end.v[2];
            CG_DebugSphere(&center, DEBUG_SPHERE_RADIUS_0, &colorBlue, 0, DEBUG_DRAW_TIME_0);
            CG_DebugSphere(&end, DEBUG_SPHERE_RADIUS_0, &colorGreen, 0, DEBUG_DRAW_TIME_0);
            CG_DebugLine(&center, &end, &colorBlue, 0, DEBUG_DRAW_TIME_0);
          }
          v34 = 3 * v52->m_localClientNum + 2;
          extendedData.contents = -1;
          extendedData.ignoreBodies = NULL;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          extendedData.collisionBuffer = 0.0;
          extendedData.phaseSelection = All;
          extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
          *(_WORD *)&extendedData.collectInsideHits = 256;
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
          HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
          PhysicsQuery_AddEntityChainToIgnoreList(cent->nextState.number, &ignoreBodies, 1, 0, 0, 1, 0);
          extendedData.contents = 8389393;
          extendedData.ignoreBodies = &ignoreBodies;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          extendedData.phaseSelection = All;
          CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
          PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v34, &center, &end, &extendedData, &hit);
          CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
          _XMM0 = hit.isValid;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM1 = LODWORD(hit.fraction);
          __asm { vblendvps xmm0, xmm1, xmm11, xmm2 }
          modelIndex[0] = _XMM0;
          if ( v16 )
          {
            bodyId = 0xFFFFFF;
            if ( hit.isValid )
              bodyId = hit.bodyId;
            if ( v28 >= v16->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 267, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
              __debugbreak();
            *v48 = bodyId;
          }
          v40 = 0i64;
          *(float *)&v40 = (float)LOWORD(v30->triggerTime) * 0.000015259022;
          if ( vehicleDef->vehiclePhysicsDef.physicsEnabled && vehicleDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_MKILO && v28 <= 1 )
            v41 = FLOAT_0_80000001;
          else
            v41 = vehicleDef->vehiclePhysicsDef.minimumWheelCastFraction;
          v42 = *(float *)modelIndex;
          if ( *(float *)&v40 >= v41 )
          {
            *(float *)&v40 = (float)(*(float *)&v40 + *(float *)modelIndex) * 0.5;
            _XMM1 = v40;
            __asm { vmaxss  xmm6, xmm1, xmm2 }
          }
          else
          {
            LODWORD(_XMM6) = modelIndex[0];
          }
          if ( (*(float *)&_XMM6 < 0.0 || *(float *)&_XMM6 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", *(float *)&_XMM6) )
            __debugbreak();
          LOWORD(v30->triggerTime) = (int)(float)((float)(*(float *)&_XMM6 * 65535.0) + 0.5);
          if ( hit.isValid && v42 <= v27 )
          {
            v27 = v42;
            cent->pose.vehicle.wheelSurfaceType = (hit.surfaceFlags >> 19) & 0x3F;
          }
          v45 = hkMemHeapAllocator();
          ignoreBodies.m_ignoreBodies.m_size = 0;
          if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v45, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          ignoreBodies.m_ignoreBodies.m_data = NULL;
          ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v46 = hkMemHeapAllocator();
          ignoreBodies.m_ignoreEntities.m_size = 0;
          if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v46, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          p_m_contactBodyId = v48;
        }
        ++v28;
        ++v29;
        v30 = (CEntFx *)((char *)v30 + 2);
        p_m_contactBodyId += 38;
        v48 = p_m_contactBodyId;
      }
      while ( v29 < v53 );
    }
  }
}

/*
==============
CgVehicleSystem::UseSteeringControllers
==============
*/
bool CgVehicleSystem::UseSteeringControllers(CgVehicleSystem *this, const centity_t *vehicleEntity)
{
  const VehicleClient *Client; 

  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2463, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  if ( (vehicleEntity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2464, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEntity ))", (const char *)&queryFormat, "CENextValid( vehicleEntity )") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(vehicleEntity) )
    return 0;
  if ( vehicleEntity == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((vehicleEntity->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2469, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEntity->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEntity->nextState )") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  return CgVehicleSystem::GetClientDef(Client)->vehiclePhysicsDef.disableWheelsTurning == 0;
}

/*
==============
VehicleCompareRevPriority
==============
*/
__int64 VehicleCompareRevPriority(const void *pe0, const void *pe1)
{
  __int64 result; 

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)pe0 - *(float *)pe1) & _xmm) < 0.001 )
    return 0i64;
  result = 0xFFFFFFFFi64;
  if ( *(float *)pe1 > *(float *)pe0 )
    return 1i64;
  return result;
}

