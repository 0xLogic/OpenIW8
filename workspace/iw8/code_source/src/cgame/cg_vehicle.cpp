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
  cg_t *LocalClientGlobals; 
  const VehicleDef *v11; 
  char v13; 
  __int64 v14; 
  char v17; 
  char v29; 
  ClActiveClient *Client; 
  ClActiveClient *v34; 
  __int64 v36; 
  vec3_t v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RBX = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3342, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RDI = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, _RBX->remoteControlEnt);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RDI->flags & 1) == 0 )
    goto LABEL_40;
  if ( _RDI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((_RDI->nextState.eType - 12) & 0xFFFD) != 0 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3345, ASSERT_TYPE_ASSERT, "(CG_Vehicle_IsVehicleEntity( vehicleEnt ))", (const char *)&queryFormat, "CG_Vehicle_IsVehicleEntity( vehicleEnt )") )
      __debugbreak();
  }
  v11 = this->GetVehicleDef(this, &_RDI->nextState);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3348, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( !v11->vehiclePhysicsDef.physicsEnabled )
    return 0;
  v13 = 0;
  if ( v11->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
  {
    LODWORD(v14) = r_turretWeapon->weaponIdx;
    __asm
    {
      vmovaps [rsp+0B8h+var_38], xmm6
      vmovaps [rsp+0B8h+var_48], xmm7
      vmovaps [rsp+0B8h+var_58], xmm8
    }
    if ( (unsigned int)v14 > bg_lastParsedWeaponIndex )
    {
      LODWORD(v36) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v36, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    v14 = (unsigned __int16)v14;
    if ( !bg_weaponDefs[(unsigned __int16)v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
      __debugbreak();
    _RSI = bg_weaponDefs[v14];
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3363, ASSERT_TYPE_ASSERT, "( turretWeapDef )", (const char *)&queryFormat, "turretWeapDef") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rdi+4Ch]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+1DCh]
      vmovaps xmm8, xmm0
      vmovss  xmm0, dword ptr [rsi+0C48h]
      vsubss  xmm1, xmm7, xmm8
      vmulss  xmm6, xmm1, cs:__real@3b360b61
      vaddss  xmm3, xmm6, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm5, xmm1, xmm3, 1
      vsubss  xmm2, xmm6, xmm5
      vmulss  xmm3, xmm2, cs:__real@43b40000
      vcomiss xmm3, xmm0
      vmovaps xmm6, [rsp+0B8h+var_38]
    }
    if ( v17 | v29 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+0C4Ch]
        vxorps  xmm0, xmm1, cs:__xmm@80000000800000008000000080000000
        vcomiss xmm3, xmm0
      }
      if ( v17 )
        __asm { vsubss  xmm7, xmm8, xmm1 }
    }
    else
    {
      __asm { vaddss  xmm7, xmm0, xmm8 }
    }
    __asm { vmovss  dword ptr [rbx+1DCh], xmm7 }
    AnglesSubtract(&_RBX->viewangles, &_RBX->delta_angles, &v3);
    Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
    __asm { vmovaps xmm8, [rsp+0B8h+var_58] }
    v34 = Client;
    __asm { vmovaps xmm7, [rsp+0B8h+var_48] }
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
      __debugbreak();
    v34->clviewangles_aab += v34->clviewangles_set_aab;
    LODWORD(v34->clViewangles.clViewangles.v[0]) = LODWORD(v3.v[0]) ^ ((((_DWORD)v34 + 428) ^ v34->clviewangles_aab) * ((((_DWORD)v34 + 428) ^ v34->clviewangles_aab) + 2));
    LODWORD(v34->clViewangles.clViewangles.v[1]) = LODWORD(v3.v[1]) ^ ((((_DWORD)v34 + 432) ^ v34->clviewangles_aab) * ((((_DWORD)v34 + 432) ^ v34->clviewangles_aab) + 2));
    LODWORD(v34->clViewangles.clViewangles.v[2]) = LODWORD(v3.v[2]) ^ ((((_DWORD)v34 + 436) ^ v34->clviewangles_aab) * ((((_DWORD)v34 + 436) ^ v34->clviewangles_aab) + 2));
    return 1;
  }
  return v13;
}

/*
==============
CgVehicleSystem::ApplyAudioSettings
==============
*/

void __fastcall CgVehicleSystem::ApplyAudioSettings(CgVehicleSystem *this, const centity_t *vehicleEntity, __int64 a3, double _XMM3_8)
{
  entityState_t *p_nextState; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int soundTriggerOverrideReverb; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

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
    __asm { vxorps  xmm3, xmm3, xmm3; fadeTime }
    soundTriggerOverrideReverb = ClientDef->soundTriggerOverrideReverb | 2;
    if ( !ClientDef->soundTriggerOverrideMix )
      soundTriggerOverrideReverb = ClientDef->soundTriggerOverrideReverb;
    v11 = soundTriggerOverrideReverb | 4;
    if ( !ClientDef->soundTriggerOverrideFilter )
      v11 = soundTriggerOverrideReverb;
    v12 = v11 | 8;
    if ( !ClientDef->soundTriggerOverrideOcclusion )
      v12 = v11;
    v13 = v12 | 0x10;
    if ( !ClientDef->soundTriggerOverrideAmbient )
      v13 = v12;
    v14 = v13 | 0x20;
    if ( !ClientDef->soundTriggerOverrideAmbientEvents )
      v14 = v13;
    v15 = v14 | 0x40;
    if ( !ClientDef->soundTriggerOverrideADSR )
      v15 = v14;
    CG_SetAudioOverride(this->m_localClientNum, ClientDef->soundTriggerOverrideZone, CTAUD_OVERRIDE_VEHICLE, *(float *)&_XMM3, v15);
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
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v17; 
  BgVehiclePhysics *ObjectById; 
  __int64 result; 
  bool v20; 
  int number; 
  int entity; 
  int serverTime; 
  unsigned int v39; 
  float *v40; 
  bool v41; 
  __int64 v51; 
  __int64 v52; 
  CgTrajectory v53; 
  vec3_t v54; 
  vec3_t outPos; 
  tmat33_t<vec3_t> axis; 

  _RDI = outLocalSpeed;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 768, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 769, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  snap = _RBX->snap;
  nextSnap = _RBX->nextSnap;
  if ( snap && nextSnap )
  {
    if ( !BGVehicles::PhysicsIsValid(veh->physicsId) )
      goto LABEL_15;
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v17 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v17, veh->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 785, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic(ObjectById) )
    {
      BgVehiclePhysics::ComputeVelocityLocalSpace(ObjectById, &ObjectById->m_linearVelocityWs, _RDI);
      return 1i64;
    }
    else
    {
LABEL_15:
      v20 = nextSnap->serverTime <= (unsigned int)snap->serverTime;
      number = cent->nextState.number;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
      entity = _RBX->predictedPlayerState.vehicleState.entity;
      __asm
      {
        vmovaps [rsp+148h+var_58], xmm6
        vmulss  xmm6, xmm0, cs:__real@3a83126f
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( v20 )
      {
        if ( entity == number || nextSnap == snap )
        {
          result = 0i64;
        }
        else
        {
          *(_QWORD *)_RDI->v = 0i64;
          _RDI->v[2] = 0.0;
          result = 1i64;
        }
      }
      else
      {
        __asm
        {
          vmovaps [rsp+148h+var_68], xmm7
          vmovaps [rsp+148h+var_78], xmm8
          vmovaps [rsp+148h+var_88], xmm9
        }
        if ( entity == number )
        {
          __asm
          {
            vmovss  xmm7, dword ptr [rbx+14Ch]
            vmovss  xmm8, dword ptr [rbx+150h]
            vmovss  xmm9, dword ptr [rbx+154h]
          }
        }
        else
        {
          CgTrajectory::CgTrajectory(&v53, localClientNum, cent, &cent->prevState);
          BgTrajectory::EvaluatePosTrajectory(&v53, snap->serverTime, &outPos);
          serverTime = nextSnap->serverTime;
          v53.m_es = &cent->nextState.lerp;
          BgTrajectory::EvaluatePosTrajectory(&v53, serverTime, &v54);
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vmovss  xmm1, dword ptr [rsp+148h+var_E0]
            vsubss  xmm2, xmm1, dword ptr [rsp+148h+outPos]
            vdivss  xmm3, xmm0, xmm6
            vmovss  xmm0, dword ptr [rsp+148h+var_E0+4]
            vsubss  xmm1, xmm0, dword ptr [rsp+148h+outPos+4]
            vmulss  xmm7, xmm2, xmm3
            vmovss  xmm2, dword ptr [rsp+148h+var_E0+8]
            vsubss  xmm0, xmm2, dword ptr [rsp+148h+outPos+8]
            vmulss  xmm9, xmm0, xmm3
            vmulss  xmm8, xmm1, xmm3
          }
        }
        AnglesToAxis(&cent->nextState.lerp.apos.trBase, &axis);
        v39 = 0;
        v40 = &axis.m[0].v[2];
        v41 = 1;
        do
        {
          if ( !v41 )
          {
            LODWORD(v52) = 3;
            LODWORD(v51) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v51, v52) )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rsi-4]
            vmulss  xmm0, xmm7, dword ptr [rsi-8]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, dword ptr [rsi]
            vaddss  xmm6, xmm2, xmm1
          }
          if ( v39 >= 3 )
          {
            LODWORD(v52) = 3;
            LODWORD(v51) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
              __debugbreak();
          }
          __asm { vmovss  dword ptr [rdi], xmm6 }
          if ( v39 >= 3 )
          {
            LODWORD(v52) = 3;
            LODWORD(v51) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v51, v52) )
              __debugbreak();
          }
          ++v39;
          v40 += 3;
          _RDI = (vec3_t *)((char *)_RDI + 4);
          v41 = v39 < 3;
        }
        while ( (int)v39 < 3 );
        __asm { vmovaps xmm9, [rsp+148h+var_88] }
        result = 1i64;
        __asm
        {
          vmovaps xmm8, [rsp+148h+var_78]
          vmovaps xmm7, [rsp+148h+var_68]
        }
      }
      __asm { vmovaps xmm6, [rsp+148h+var_58] }
    }
  }
  else
  {
    *(_QWORD *)_RDI->v = 0i64;
    result = 0i64;
    _RDI->v[2] = 0.0;
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
  BgVehiclePhysicsManager *v14; 
  BgVehiclePhysics *ObjectById; 
  __int64 result; 
  int number; 
  int entity; 
  int serverTime; 
  CgTrajectory v35; 
  vec3_t outVelLs; 
  vec3_t outAng; 
  vec3_t v1; 

  _RBX = outRotateSpeed;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 848, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 849, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  __asm { vmovaps [rsp+0E8h+var_58], xmm6 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  *(_QWORD *)_RBX->v = 0i64;
  _RBX->v[2] = 0.0;
  if ( !snap || !nextSnap )
    goto LABEL_23;
  if ( BGVehicles::PhysicsIsValid(veh->physicsId) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    v14 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v14, veh->physicsId);
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 865, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    if ( BgVehiclePhysics::IsDynamic(ObjectById) )
    {
      BgVehiclePhysics::ComputeVelocityLocalSpace(ObjectById, &ObjectById->m_angularVelocityWs, &outVelLs);
      __asm
      {
        vmovss  xmm3, cs:__real@42652ee0
        vmulss  xmm1, xmm3, dword ptr [rsp+0E8h+outVelLs]
        vmulss  xmm0, xmm3, dword ptr [rsp+0E8h+outVelLs+4]
        vmulss  xmm2, xmm3, dword ptr [rsp+0E8h+outVelLs+8]
        vmovss  dword ptr [rbx+8], xmm1
        vmovss  dword ptr [rbx], xmm0
        vmovss  dword ptr [rbx+4], xmm2
      }
      result = 1i64;
      goto LABEL_24;
    }
  }
  number = cent->nextState.number;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm6, xmm0, cs:__real@3a83126f
  }
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( nextSnap->serverTime <= (unsigned int)snap->serverTime )
  {
    if ( entity != number && nextSnap != snap )
    {
      *(_QWORD *)_RBX->v = 0i64;
      result = 1i64;
      _RBX->v[2] = 0.0;
      goto LABEL_24;
    }
LABEL_23:
    result = 0i64;
    goto LABEL_24;
  }
  if ( entity == number )
  {
    _RBX->v[0] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[0];
    _RBX->v[1] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[1];
    _RBX->v[2] = LocalClientGlobals->predictedPlayerState.vehicleState.angVelocity.v[2];
  }
  else
  {
    CgTrajectory::CgTrajectory(&v35, localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateAngTrajectory(&v35, snap->serverTime, &outAng);
    serverTime = nextSnap->serverTime;
    v35.m_es = &cent->nextState.lerp;
    BgTrajectory::EvaluateAngTrajectory(&v35, serverTime, &v1);
    AnglesSubtract(&v1, &outAng, _RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vmovss  xmm2, dword ptr [rbx+4]
      vdivss  xmm1, xmm0, xmm6
      vdivss  xmm0, xmm2, xmm6
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm1, dword ptr [rbx+8]
      vdivss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbx+8], xmm2
      vmovss  dword ptr [rbx+4], xmm0
    }
  }
  result = 1i64;
LABEL_24:
  __asm { vmovaps xmm6, [rsp+0E8h+var_58] }
  return result;
}

/*
==============
CG_Vehicle_ClearAudioSettings
==============
*/

void __fastcall CG_Vehicle_ClearAudioSettings(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
  CG_ClearAudioOverride(localClientNum, CTAUD_OVERRIDE_VEHICLE, *(float *)&_XMM2);
}

/*
==============
CG_Vehicle_ClearBoneControllers
==============
*/
void CG_Vehicle_ClearBoneControllers(LocalClientNum_t localClientNum, centity_t *cent)
{
  unsigned __int8 boneUsage; 
  unsigned __int16 v7; 
  unsigned __int16 v9; 
  unsigned __int16 v11; 
  int WheelCount; 
  CgVehicleSystem *VehicleSystem; 
  CgVehicleAnimSystem *v15; 
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
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    *((_DWORD *)&cent->pose.moverFx + 26) = -16843010;
    *((_DWORD *)&cent->pose.moverFx + 27) = -16843010;
    *((_DWORD *)&cent->pose.moverFx + 28) = -16843010;
    *((_WORD *)&cent->pose.moverFx + 58) = -258;
    v7 = CompressSignedUnit(*(float *)&_XMM0);
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    cent->pose.vehicle.wheelSpinAngle[7] = v7;
    v9 = CompressSignedUnit(*(float *)&_XMM0);
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    cent->pose.vehicle.wheelSpinAngle[8] = v9;
    v11 = CompressSignedUnit(*(float *)&_XMM0);
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    cent->pose.vehicle.wheelFraction[1] = v11;
    cent->pose.vehicle.wheelFraction[2] = CompressSignedUnit(*(float *)&_XMM0);
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
    v15 = (CgVehicleAnimSystem *)VehicleSystem;
    if ( VehicleSystem )
    {
      Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
      if ( Client )
        CgVehicleAnimSystem::ClearBoneControllers(v15 + 288062, Client, cent);
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

void __fastcall CG_Vehicle_InterpolatePlayerState(LocalClientNum_t localClientNum, const snapshot_t *prevSnap, const snapshot_t *nextSnap, double f, playerState_s *out)
{
  int entity; 
  centity_t *v20; 
  const dvar_t *v21; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  int v63; 
  int v72; 
  bool v74; 
  int v87; 
  bool v88; 
  bool v101; 
  __int64 v118; 
  __int64 v119; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = out;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm7, xmm3
  }
  if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3071, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3072, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3073, ASSERT_TYPE_ASSERT, "(out)", (const char *)&queryFormat, "out") )
    __debugbreak();
  _R13 = prevSnap->GetPlayerState(prevSnap, (unsigned int)localClientNum);
  if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3076, ASSERT_TYPE_ASSERT, "(prevps)", (const char *)&queryFormat, "prevps") )
    __debugbreak();
  _R14 = nextSnap->GetPlayerState(nextSnap, (unsigned int)localClientNum);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3079, ASSERT_TYPE_ASSERT, "(nextps)", (const char *)&queryFormat, "nextps") )
    __debugbreak();
  entity = _R14->vehicleState.entity;
  if ( entity == 2047 )
    goto LABEL_64;
  v20 = CG_GetEntity(localClientNum, entity);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R14->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
    goto LABEL_28;
  v21 = DVARBOOL_vehiclestate_dont_interpolate_if_player_linked_at_all;
  if ( !DVARBOOL_vehiclestate_dont_interpolate_if_player_linked_at_all && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "vehiclestate_dont_interpolate_if_player_linked_at_all") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( (!v21->current.enabled || _R14->linkEnt == 2047) && !BGVehicles::IsRemoteDrivingVehicleAndLinked(_R14, _R14->vehicleState.entity) )
    goto LABEL_28;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, v20);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3095, ASSERT_TYPE_ASSERT, "(vehClient)", (const char *)&queryFormat, "vehClient") )
    __debugbreak();
  if ( BGVehicles::PhysicsIsValid(Client->physicsId) )
  {
LABEL_28:
    _RDX = &out->vehicleState.origin;
    if ( _R13->vehicleState.entity == _R14->vehicleState.entity )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [r13+12Ch]
        vmovss  xmm0, dword ptr [r14+12Ch]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rdx], xmm3
        vmovss  xmm4, dword ptr [r13+130h]
        vmovss  xmm0, dword ptr [r14+130h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rdx+4], xmm3
        vmovss  xmm5, dword ptr [r13+134h]
        vmovss  xmm0, dword ptr [r14+134h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rdx+8], xmm3
        vmovss  xmm3, dword ptr [r13+150h]
        vmovss  xmm0, dword ptr [r14+150h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rbp+150h], xmm3
        vmovss  xmm4, dword ptr [r13+154h]
        vmovss  xmm0, dword ptr [r14+154h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rbp+154h], xmm3
        vmovss  xmm5, dword ptr [r13+158h]
        vmovss  xmm0, dword ptr [r14+158h]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbp+158h], xmm3
        vmovss  xmm3, dword ptr [r13+164h]
        vmovss  xmm0, dword ptr [r14+164h]
        vsubss  xmm1, xmm0, xmm3
        vmovaps [rsp+0C8h+var_38], xmm6
      }
      _RSI = &_R13->vehicleState.angles;
      __asm
      {
        vmovaps [rsp+0C8h+var_58], xmm8
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rbp+164h], xmm3
        vmovss  xmm4, dword ptr [r13+168h]
        vmovss  xmm0, dword ptr [r14+168h]
        vmovaps [rsp+0C8h+var_68], xmm9
      }
      v63 = 0;
      __asm
      {
        vmovss  xmm9, cs:__real@3b360b61
        vmovaps [rsp+0C8h+var_78], xmm10
      }
      _R12 = (char *)_R14 - (char *)_R13;
      __asm
      {
        vmovss  xmm10, cs:__real@3f000000
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, xmm4
      }
      _R15 = (char *)((char *)out - (char *)_R13);
      __asm
      {
        vmovaps [rsp+0C8h+var_88], xmm11
        vmovss  xmm11, cs:__real@43b40000
        vmovss  dword ptr [rbp+168h], xmm3
      }
      v72 = 0;
      __asm { vxorps  xmm8, xmm8, xmm8 }
      v74 = 1;
      do
      {
        if ( !v74 )
        {
          LODWORD(v119) = 3;
          LODWORD(v118) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [r12+rsi] }
        if ( (unsigned int)v72 >= 3 )
        {
          LODWORD(v119) = 3;
          LODWORD(v118) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rsi]
          vmulss  xmm4, xmm0, xmm9
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmulss  xmm2, xmm0, xmm7
          vaddss  xmm6, xmm2, dword ptr [rsi]
        }
        if ( (unsigned int)v72 >= 3 )
        {
          LODWORD(v119) = 3;
          LODWORD(v118) = v72;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [r15+rsi], xmm6 }
        _RSI = (vec3_t *)((char *)_RSI + 4);
        v74 = (unsigned int)++v72 < 3;
      }
      while ( v72 < 3 );
      _RSI = &_R13->vehicleState.tilt;
      _R12 = (char *)((char *)out - (char *)_R13);
      _R15 = (char *)_R14 - (char *)_R13;
      v87 = 0;
      v88 = 1;
      do
      {
        if ( !v88 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [r15+rsi] }
        if ( (unsigned int)v87 >= 2 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rsi]
          vmulss  xmm4, xmm0, xmm9
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmulss  xmm2, xmm0, xmm7
          vaddss  xmm6, xmm2, dword ptr [rsi]
        }
        if ( (unsigned int)v87 >= 2 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v87;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [r12+rsi], xmm6 }
        _RSI = (vec2_t *)((char *)_RSI + 4);
        v88 = (unsigned int)++v87 < 2;
      }
      while ( v87 < 2 );
      _RDI = &_R13->vehicleState.gunAngles;
      _R15 = (char *)((char *)out - (char *)_R13);
      _RSI = (char *)_R14 - (char *)_R13;
      v101 = 1;
      do
      {
        if ( !v101 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v63;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  xmm6, dword ptr [rsi+rdi] }
        if ( (unsigned int)v63 >= 2 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v63;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 16, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm
        {
          vsubss  xmm0, xmm6, dword ptr [rdi]
          vmulss  xmm4, xmm0, xmm9
          vaddss  xmm2, xmm4, xmm10
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm1, xmm4, xmm3
          vmulss  xmm0, xmm1, xmm11
          vmulss  xmm2, xmm0, xmm7
          vaddss  xmm6, xmm2, dword ptr [rdi]
        }
        if ( (unsigned int)v63 >= 2 )
        {
          LODWORD(v119) = 2;
          LODWORD(v118) = v63;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v118, v119) )
            __debugbreak();
        }
        __asm { vmovss  dword ptr [r15+rdi], xmm6 }
        _RDI = (vec2_t *)((char *)_RDI + 4);
        v101 = (unsigned int)++v63 < 2;
      }
      while ( v63 < 2 );
      _RBP = out;
      __asm
      {
        vmovaps xmm11, [rsp+0C8h+var_88]
        vmovaps xmm10, [rsp+0C8h+var_78]
        vmovaps xmm9, [rsp+0C8h+var_68]
        vmovaps xmm8, [rsp+0C8h+var_58]
        vmovaps xmm6, [rsp+0C8h+var_38]
      }
      out->vehicleState.flags = _R14->vehicleState.flags;
    }
    else
    {
      out->vehicleState.flags = 0;
      CG_GetPoseOrigin(&v20->pose, _RDX);
      out->vehicleState.angles = v20->pose.angles;
      *(_OWORD *)out->vehicleState.velocity.v = 0ui64;
      *(_QWORD *)&out->vehicleState.angVelocity.y = 0i64;
      out->vehicleState.tilt = 0i64;
      out->vehicleState.tiltVelocity = 0i64;
      out->vehicleState.gunAngles = 0i64;
    }
LABEL_64:
    _RBP->vehicleState.entity = _R14->vehicleState.entity;
  }
  _R11 = &v125;
  __asm { vmovaps xmm7, xmmword ptr [r11-20h] }
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
  CgVehicleSystem *vehicleSystem; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  unsigned __int8 eType; 
  CgVehicleSystem *v14; 
  VehicleClient *Client; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2948, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity != 2047 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.vehicleState.entity);
    _RSI = Entity;
    if ( (Entity->flags & 1) != 0 && ((Entity->pose.eType - 12) & 0xFD) == 0 )
    {
      if ( !CgVehicleSystem::PhysicsIsClientForcingServerAuth(localClientNum, Entity) )
      {
        vehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        Handler = CgHandler::getHandler(localClientNum);
        BG_PlayerStateToVehicleState(&LocalClientGlobals->predictedPlayerState, &_RSI->nextState, 0, Handler, Instance, vehicleSystem);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi+19Ch]
          vmovups ymm1, ymmword ptr [rsi+1BCh]
        }
        eType = _RSI->nextState.eType;
        __asm
        {
          vmovups ymmword ptr [rsi+120h], ymm0
          vmovups ymm0, ymmword ptr [rsi+1DCh]
          vmovups ymmword ptr [rsi+140h], ymm1
          vmovups xmm1, xmmword ptr [rsi+1FCh]
          vmovups ymmword ptr [rsi+160h], ymm0
          vmovups xmmword ptr [rsi+180h], xmm1
        }
        _RSI->pose.eType = eType;
      }
      v14 = CgVehicleSystem::GetVehicleSystem(localClientNum);
      Client = CgVehicleSystem::GetClient(v14, _RSI);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r15+65E4h]
        vmulss  xmm3, xmm0, cs:__real@3a83126f; deltaTime
      }
      BG_VehicleAnim_Update(v14, &_RSI->nextState, &Client->animinfo, *(float *)&_XMM3);
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
  CgTrajectory v40; 
  vec3_t outPos; 
  vec3_t v42; 
  tmat33_t<vec3_t> v43; 
  vec3_t angles; 
  vec3_t outAng; 
  char v46; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( groundEntIndex > 0 )
  {
    _RBX = inOutEntOrigin;
    if ( (unsigned int)groundEntIndex < 0x7FE )
    {
      Entity = CG_GetEntity(localClientNum, groundEntIndex);
      if ( Entity->nextState.eType == ET_VEHICLE )
      {
        __asm
        {
          vmovaps [rsp+1A0h+var_30], xmm6
          vmovaps [rsp+1A0h+var_40], xmm7
          vmovaps [rsp+1A0h+var_50], xmm8
        }
        CgTrajectory::CgTrajectory(&v40, localClientNum, Entity, &Entity->prevState);
        BgTrajectory::EvaluateAngTrajectory(&v40, oldTime, &outAng);
        BgTrajectory::EvaluateAngTrajectory(&v40, newTime, &angles);
        BgTrajectory::EvaluatePosTrajectory(&v40, oldTime, &outPos);
        BgTrajectory::EvaluatePosTrajectory(&v40, newTime, &v42);
        AnglesToAxis(&angles, &axis);
        AnglesToAxis(&outAng, &in);
        MatrixTranspose(&in, &out);
        MatrixMultiply(&out, &axis, &v43);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vsubss  xmm6, xmm0, dword ptr [rsp+1A0h+outPos]
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  xmm1, dword ptr [rbx+4]
          vsubss  xmm8, xmm0, dword ptr [rsp+1A0h+outPos+8]
          vsubss  xmm7, xmm1, dword ptr [rsp+1A0h+outPos+4]
        }
        if ( &v46 == (char *)inOutEntOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        __asm
        {
          vmulss  xmm3, xmm7, dword ptr [rbp+0A0h+var_128+0Ch]
          vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+var_128]
          vmulss  xmm1, xmm8, dword ptr [rbp+0A0h+var_128+18h]
          vaddss  xmm4, xmm3, xmm2
          vaddss  xmm2, xmm4, xmm1
          vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_138]
          vmulss  xmm2, xmm6, dword ptr [rsp+1A0h+var_128+4]
          vmulss  xmm4, xmm7, dword ptr [rbp+0A0h+var_128+10h]
          vmulss  xmm1, xmm8, dword ptr [rbp+0A0h+var_128+1Ch]
          vmovss  dword ptr [rbx], xmm3
          vaddss  xmm3, xmm4, xmm2
          vmulss  xmm4, xmm7, dword ptr [rbp+0A0h+var_128+14h]
          vmovaps xmm7, [rsp+1A0h+var_40]
          vaddss  xmm2, xmm3, xmm1
          vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_138+4]
          vmulss  xmm2, xmm6, dword ptr [rbp+0A0h+var_128+8]
          vmulss  xmm1, xmm8, dword ptr [rbp+0A0h+var_128+20h]
          vmovaps xmm8, [rsp+1A0h+var_50]
          vmovaps xmm6, [rsp+1A0h+var_30]
          vmovss  dword ptr [rbx+4], xmm3
          vaddss  xmm3, xmm4, xmm2
          vaddss  xmm2, xmm3, xmm1
          vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+var_138+8]
          vmovss  dword ptr [rbx+8], xmm3
        }
      }
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
char CG_Vehicle_ShouldApplyMaterialTime(const VehicleClient *veh)
{
  char v5; 

  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 920, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RAX = CgVehicleSystem::GetClientDef(veh);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rax+58h]
  }
  return v5;
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

void __fastcall CG_Vehicle_UpdateMaterialTime(VehicleClient *veh, __int64 a2, __int64 a3, double _XMM3_8)
{
  char v9; 

  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 934, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RDI = CgVehicleSystem::GetClientDef(_RBX);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 920, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  _RAX = CgVehicleSystem::GetClientDef(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rax+58h]
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 937, ASSERT_TYPE_ASSERT, "(CG_Vehicle_ShouldApplyMaterialTime( veh ))", (const char *)&queryFormat, "CG_Vehicle_ShouldApplyMaterialTime( veh )") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@36bea673
    vmovss  xmm2, dword ptr [rdi+58h]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, dword ptr [rbx+58h]
    vmulss  xmm0, xmm3, dword ptr [rbx+30h]
    vmulss  xmm0, xmm0, xmm1
    vmulss  xmm5, xmm0, xmm2
  }
  if ( _RDI->type == VEH_TREADED )
  {
    __asm
    {
      vmulss  xmm0, xmm3, dword ptr [rbx+40h]
      vmulss  xmm1, xmm0, xmm1
      vandps  xmm0, xmm5, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm4, xmm1, xmm2
      vandps  xmm3, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm1, xmm0, xmm3
      vblendvps xmm5, xmm5, xmm4, xmm1
    }
  }
  __asm
  {
    vaddss  xmm0, xmm5, dword ptr [rbx+68h]
    vmovss  dword ptr [rbx+68h], xmm0
  }
}

/*
==============
CgVehicleSystem::ComputeForwardSpeed
==============
*/
float CgVehicleSystem::ComputeForwardSpeed(CgVehicleSystem *this, VehicleClient *veh, const centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  unsigned int v14; 
  unsigned int PhysicsBodyId; 
  Physics_WorldId m_worldId; 
  hknpWorld *world; 
  __int64 v40; 
  vec3_t linVel; 
  char v42; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RBX = veh;
  if ( !veh && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1183, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1184, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1187, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm { vmovss  xmm6, dword ptr [rbx+30h] }
  if ( BGVehicles::PhysicsIsValid(_RBX->physicsId) )
  {
    _RBX = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, _RBX->physicsId);
    if ( !BgVehiclePhysics::IsDynamic(_RBX) || LocalClientGlobals->inKillCam )
    {
      PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
      m_worldId = _RBX->m_worldId;
      if ( (unsigned int)m_worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", _RBX->m_worldId) )
        __debugbreak();
      if ( (PhysicsBodyId & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v40) = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v40) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld(m_worldId)->world;
      if ( !world )
      {
        LODWORD(v40) = m_worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v40) )
          __debugbreak();
      }
      ((void (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, PhysicsBodyId);
      __asm { vmovsd  xmm2, qword ptr [rbx+140h] }
      linVel.v[2] = _RBX->m_history.m_lastLinearVel.v[2];
      __asm
      {
        vshufps xmm0, xmm2, xmm2, 55h ; 'U'
        vmulss  xmm1, xmm0, dword ptr [rax+4]
        vmulss  xmm0, xmm2, dword ptr [rax]
        vaddss  xmm3, xmm1, xmm0
        vmovss  xmm1, dword ptr [rsp+108h+linVel+8]
        vmulss  xmm2, xmm1, dword ptr [rax+8]
        vaddss  xmm0, xmm3, xmm2
      }
    }
    else
    {
      if ( BgVehiclePhysics::IsPhysicsBodyIdValid(_RBX) )
      {
        v14 = BgVehiclePhysics::GetPhysicsBodyId(_RBX);
        Physics_GetRigidBodyLinVel((const Physics_WorldId)_RBX->m_worldId, v14, &linVel);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+108h+linVel+4]
        vmulss  xmm3, xmm0, dword ptr [rbx+178h]
        vmovss  xmm1, dword ptr [rsp+108h+linVel]
        vmulss  xmm2, xmm1, dword ptr [rbx+174h]
        vaddss  xmm4, xmm3, xmm2
        vmovss  xmm0, dword ptr [rsp+108h+linVel+8]
        vmulss  xmm1, xmm0, dword ptr [rbx+17Ch]
        vaddss  xmm0, xmm4, xmm1
      }
    }
  }
  else
  {
    __asm
    {
      vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
      vmovaps xmm0, xmm6
    }
  }
  _R11 = &v42;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CgVehicleSystem::DeleteVehicle
==============
*/
void CgVehicleSystem::DeleteVehicle(CgVehicleSystem *this, int entIndex)
{
  int v2; 
  bool v4; 
  centity_t *Entity; 
  bool v8; 
  DObj *ClientDObj; 
  const VehicleDef *ClientDef; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  v2 = 0;
  _RBX = this->m_vehicleClients;
  v4 = 1;
  while ( 1 )
  {
    if ( !v4 )
    {
      LODWORD(v19) = 128;
      LODWORD(v18) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 351, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    if ( _RBX->entIndex == entIndex )
      break;
    ++v2;
    ++_RBX;
    v4 = (unsigned int)v2 < 0x80;
    if ( v2 >= 128 )
      return;
  }
  LODWORD(v18) = this->m_localClientNum;
  LODWORD(fmt) = _RBX->entIndex;
  Com_Printf(14, "CgVehicleSystem::DeleteVehicle %d: (defIndex = %d), (entIndex = %d), (localClientNum = %d)\n", (unsigned int)_RBX->index, (unsigned int)_RBX->defIndex, fmt, v18);
  CgVehicleSystem::TreadBoneAnimDestroyResources(this, _RBX);
  this->PhysicsDestroyVehicle(this, &_RBX->physicsId);
  Entity = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entIndex);
  v8 = IsScriptMoverVehicle(Entity);
  if ( v8 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups [rsp+98h+var_48], ymm0
      vmovups xmm0, xmmword ptr [rbx+20h]
      vmovups [rsp+98h+var_58], xmm0
    }
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, this->m_localClientNum);
    if ( ClientDObj )
    {
      ClientDef = CgVehicleSystem::GetClientDef(_RBX->defIndex);
      if ( ClientDef )
      {
        if ( CgVehicleSystem::HasSuspensionEnabled(this, Entity) )
          CgVehicleSystem::UpdateWheelsBoneControllers_UsingRaycast(this, ClientDef, ClientDObj, Entity);
      }
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, [rsp+98h+var_28]
      vmovups [rsp+98h+var_58], xmm0
      vmovups ymm0, [rsp+98h+var_48]
      vmovups [rsp+98h+var_48], ymm0
    }
  }
  memset_0(_RBX, 0, sizeof(VehicleClient));
  if ( v8 )
  {
    __asm
    {
      vmovups ymm0, [rsp+98h+var_48]
      vmovups xmm1, [rsp+98h+var_58]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmmword ptr [rbx+20h], xmm1
    }
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

void __fastcall CgVehicleSystem::Draw2D(CgVehicleSystem *this, const ScreenPlacement *scrPlace, double _XMM2_8)
{
  BgVehiclePhysics *v6; 
  bool v7; 
  const vec4_t *color; 
  float v12; 

  if ( scrPlace )
  {
    if ( CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum)->predictedPlayerState.vehicleState.entity != 2047 )
    {
      v6 = (BgVehiclePhysics *)((__int64 (__fastcall *)(CgVehicleSystem *))this->PhysicsGetVehicleObject)(this);
      if ( v6 )
      {
        if ( !v6->m_clientGeoLoaded )
        {
          v7 = BgVehiclePhysics::CheckForWorldCollision(v6);
          __asm { vmovss  xmm3, cs:__real@41800000; width }
          color = &colorRed;
          if ( v7 )
            color = &colorYellow;
          __asm
          {
            vxorps  xmm2, xmm2, xmm2; y
            vxorps  xmm1, xmm1, xmm1; x
            vmovss  [rsp+48h+var_28], xmm3
          }
          UI_FillRect(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v12, 8, 9, color);
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

void __fastcall CgVehicleSystem::EnableSuspension(CgVehicleSystem *this, centity_t *cent, double suspDist)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = cent;
  __asm { vmovaps xmm6, xmm2 }
  if ( cent )
  {
    __asm
    {
      vmovss  dword ptr [rdx+0B0h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2324, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rbx+0B0h], xmm6
      vmovaps xmm6, [rsp+48h+var_18]
    }
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
  vec3_t *result; 
  const VehicleClient *Client; 
  VehCamZOffsetMode vehCam_zOffsetMode3P; 
  __int32 v32; 
  __int64 startSolidOffset; 
  float startSolidOffseta; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> v55; 

  result = outViewOrigin;
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2514, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2515, ASSERT_TYPE_ASSERT, "(vehicleEntity)", (const char *)&queryFormat, "vehicleEntity") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(this, vehicleEntity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2518, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  _RDI = CgVehicleSystem::GetClientDef(Client);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2521, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  CG_VehicleCam_GetVehiclePosition(this->m_localClientNum, vehicleEntity, &axis.m[3], &outAngles);
  AnglesToAxis(&outAngles, (tmat33_t<vec3_t> *)&axis);
  if ( _RDI->camRemoteDrive )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+0C1Ch]
      vmovss  xmm1, dword ptr [rdi+0C18h]
      vmovss  xmm0, dword ptr [rdi+0C14h]
      vmovss  dword ptr [rsp+120h+in1], xmm0
      vmovss  dword ptr [rsp+120h+in1+4], xmm1
      vmovss  dword ptr [rsp+120h+in1+8], xmm2
    }
    MatrixTransformVector43(&in1, &axis, result);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+120h+var_40], xmm6
      vmovaps [rsp+120h+var_50], xmm7
      vmovaps [rsp+120h+var_60], xmm8
    }
    if ( !vehicleEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 438, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( CG_Vehicle_IsCorpse(vehicleEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 439, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
      __debugbreak();
    if ( (*(_BYTE *)vehicleEntity->nextState.lerp.u.actor.threatSight & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2535, ASSERT_TYPE_ASSERT, "(CG_Vehicle_GetFlags( vehicleEntity ) & (1 << 0))", "%s\n\tClient predicted vehicles only support third person view when not in remote drive", "CG_Vehicle_GetFlags( vehicleEntity ) & VEHFLAG_3RD_PERSON") )
      __debugbreak();
    if ( _RDI->vehCam_zOffsetMode3P >= (unsigned int)VEHCAM_ZMODE_COUNT )
    {
      LODWORD(startSolidOffset) = _RDI->vehCam_zOffsetMode3P;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2536, ASSERT_TYPE_ASSERT, "(unsigned)( vehicleDef->vehCam_zOffsetMode3P ) < (unsigned)( VEHCAM_ZMODE_COUNT )", "vehicleDef->vehCam_zOffsetMode3P doesn't index VEHCAM_ZMODE_COUNT\n\t%i not in [0, %i)", startSolidOffset, 3) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm4, dword ptr [rdi+0C48h]
      vmovss  xmm5, dword ptr [rdi+0C4Ch]
      vmovss  xmm6, dword ptr [rdi+0C50h]
      vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis]
      vaddss  xmm3, xmm0, dword ptr [rbp+57h+outOrigin]
      vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis+4]
      vmulss  xmm2, xmm5, dword ptr [rbp+57h+axis+0Ch]
      vaddss  xmm7, xmm3, xmm2
      vaddss  xmm3, xmm0, dword ptr [rbp+57h+outOrigin+4]
      vmulss  xmm2, xmm5, dword ptr [rbp+57h+axis+10h]
      vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis+8]
      vaddss  xmm8, xmm3, xmm2
      vaddss  xmm3, xmm0, dword ptr [rbp+57h+outOrigin+8]
      vmulss  xmm2, xmm5, dword ptr [rbp+57h+axis+14h]
      vmovss  dword ptr [rsp+120h+in1], xmm4
      vaddss  xmm4, xmm3, xmm2
      vmovss  dword ptr [rbx+8], xmm4
      vmovss  dword ptr [rsp+120h+in1+4], xmm5
      vmovss  dword ptr [rsp+120h+in1+8], xmm6
      vmovss  dword ptr [rbx], xmm7
      vmovss  dword ptr [rbx+4], xmm8
    }
    vehCam_zOffsetMode3P = _RDI->vehCam_zOffsetMode3P;
    if ( vehCam_zOffsetMode3P )
    {
      v32 = vehCam_zOffsetMode3P - 1;
      if ( v32 )
      {
        if ( v32 == 1 )
        {
          AnglesToAxis(&playerState->viewangles, &v55);
          __asm
          {
            vmovss  xmm3, dword ptr [rsp+120h+in1+8]
            vmulss  xmm1, xmm3, dword ptr [rbp+57h+var_90+18h]
            vaddss  xmm2, xmm1, dword ptr [rbx]
            vmulss  xmm1, xmm3, dword ptr [rbp+57h+var_90+1Ch]
            vmovss  dword ptr [rbx], xmm2
            vaddss  xmm2, xmm1, dword ptr [rbx+4]
            vmulss  xmm1, xmm3, dword ptr [rbp+57h+var_90+20h]
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
          vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+18h]
          vaddss  xmm2, xmm1, xmm7
          vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+1Ch]
          vmovss  dword ptr [rbx], xmm2
          vaddss  xmm2, xmm1, xmm8
          vmulss  xmm1, xmm6, dword ptr [rbp+57h+axis+20h]
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
      vmovss  [rsp+120h+startSolidOffset], xmm0
    }
    CG_View_ThirdPersonViewTrace(this->m_localClientNum, playerState, &axis.m[3], result, 41968145, startSolidOffseta, result);
    __asm
    {
      vmovaps xmm8, [rsp+120h+var_60]
      vmovaps xmm7, [rsp+120h+var_50]
      vmovaps xmm6, [rsp+120h+var_40]
    }
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
  _RBX = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2310, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+0B0h]
  }
  return 0;
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
  CgVehicleSystem *VehicleSystem; 
  char v12; 
  __int64 v15; 
  __int64 v18; 
  __int64 v25; 
  __int64 v33; 
  unsigned int PlayerIndex; 
  VehicleClient *Client; 
  CgHandler *Handler; 
  LocalClientNum_t m_localClientNum; 
  CgVehicleSystem *v40; 
  __int64 v41; 
  entityType_s eType; 
  const DObj *ClientDObj; 
  char *fmt; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  char v53[360]; 
  int v54; 
  int v55; 
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
    LODWORD(v45) = ClientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v45, 128) )
      __debugbreak();
    LODWORD(v48) = 128;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v46, v48) )
      __debugbreak();
  }
  v7 = (char *)this + 588 * v6;
  _R12 = v7 + 12;
  if ( v7 == (char *)-12i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 214, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  v54 = *((_DWORD *)v7 + 22);
  v55 = *((_DWORD *)v7 + 23);
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
    __asm
    {
      vmovups ymm0, ymmword ptr [r12]
      vmovups [rsp+1E8h+var_198], ymm0
      vmovups xmm0, xmmword ptr [r12+20h]
    }
    v12 = 1;
  }
  else
  {
    __asm
    {
      vmovups ymm1, [rsp+1E8h+var_198]
      vmovups xmm0, [rsp+1E8h+var_178]
      vmovups [rsp+1E8h+var_198], ymm1
    }
    v12 = 0;
  }
  __asm { vmovups [rsp+1E8h+var_1A8], xmm0 }
  if ( v4->firstSnapshot )
  {
    _RBX = v7 + 212;
    v15 = 2i64;
    _RAX = v7 + 212;
    _RCX = v53;
    v18 = 2i64;
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX += 128;
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v18;
    }
    while ( v18 );
    __asm { vmovups ymm0, ymmword ptr [rax] }
    v25 = *((_QWORD *)_RAX + 4);
    __asm { vmovups ymmword ptr [rcx], ymm0 }
    *((_QWORD *)_RCX + 4) = v25;
    v53[268] = v18;
    memset_0(v7 + 12, (unsigned __int8)v18, 0xC8ui64);
    memset_0(v7 + 508, 0, 0x5Cui64);
    _RAX = v53;
    do
    {
      _RBX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX += 128;
      __asm
      {
        vmovups ymmword ptr [rbx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rbx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rbx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rbx-20h], xmm0
        vmovups xmmword ptr [rbx-10h], xmm1
      }
      --v15;
    }
    while ( v15 );
    __asm { vmovups ymm0, ymmword ptr [rax] }
    v33 = *((_QWORD *)_RAX + 4);
    __asm { vmovups ymmword ptr [rbx], ymm0 }
    *((_QWORD *)_RBX + 4) = v33;
    v4 = LocalClientGlobals;
  }
  else
  {
    memset_0(v7 + 12, 0, 0x24Cui64);
  }
  if ( v12 )
  {
    __asm
    {
      vmovups ymm0, [rsp+1E8h+var_198]
      vmovups ymmword ptr [r12], ymm0
      vmovups xmm0, [rsp+1E8h+var_1A8]
      vmovups xmmword ptr [r12+20h], xmm0
    }
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
    LODWORD(v47) = cls.maxClients;
    LODWORD(v45) = PlayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 260, ASSERT_TYPE_ASSERT, "(unsigned)( veh->playerIndex ) < (unsigned)( cls.maxClients )", "veh->playerIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v45, v47) )
      __debugbreak();
  }
  LODWORD(v45) = this->m_localClientNum;
  LODWORD(fmt) = *((_DWORD *)v7 + 23);
  Com_Printf(14, "CgVehicleSystem::ResetVehicle(%d): (defIndex = %d), (entIndex = %d), (localClientNum = %d)\n", *((unsigned int *)v7 + 21), *((unsigned int *)v7 + 22), fmt, v45);
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
  v40 = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1021, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v41 = (__int64)v40->GetVehicleDef(v40, &cent->nextState);
  if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1024, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( eType == ET_HELICOPTER )
    goto LABEL_52;
  if ( eType == ET_VEHICLE && *(_BYTE *)(v41 + 8) == 12 && *(_BYTE *)(v41 + 256) == 8 )
  {
    cent->pose.turret.useOnVehicleAngles = 1;
LABEL_52:
    cent->pose.vehicle.boneUsage = 1;
  }
  if ( !cent->pose.vehicle.boneUsage )
    CgVehicleSystem::TreadBoneAnimInitResources(v40, cent, (const VehicleDef *)v41);
  CG_Vehicle_ClearBoneControllers(this->m_localClientNum, cent);
  CG_VehicleAudio_ResetSounds((VehicleClient *)(v7 + 12));
  if ( !BGVehicles::PhysicsIsValid(*((_DWORD *)v7 + 149)) || v54 != *((_DWORD *)v7 + 22) || v55 != *((_DWORD *)v7 + 23) )
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
bool CgVehicleSystem::UpdateBoneControllersInternal(CgVehicleSystem *this, DObj *obj, centity_t *cent)
{
  DObj *v15; 
  CgVehicleSystem *v16; 
  VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  const VehicleClient *v87; 
  BgVehiclePhysics *ObjectById; 
  unsigned __int8 boneUsage; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *v114; 
  centity_t *Entity; 
  __int64 v117; 
  unsigned int physicsId; 
  unsigned int v119; 
  __int64 v120; 
  __int64 v122; 
  int v138; 
  bool StrobeEffectToggle; 
  unsigned __int8 *v293; 
  unsigned __int8 *rotorBladeBoneIndex; 
  scr_string_t tag_main_rotor_blade_05; 
  unsigned __int8 *v296; 
  bool v297; 
  unsigned __int8 *v298; 
  unsigned __int8 *v299; 
  scr_string_t tag_tail_rotor_blade_02; 
  int i; 
  unsigned __int8 v302; 
  int v303; 
  __int64 v304; 
  unsigned __int16 *rotorPosition; 
  int v316; 
  unsigned __int16 *v317; 
  __int64 v318; 
  int BladeIndexStrobeForRotorIndex; 
  const dvar_t *v320; 
  const dvar_t *v329; 
  __int64 integer; 
  unsigned __int8 v331; 
  const dvar_t *v332; 
  __int64 v333; 
  unsigned __int8 v334; 
  const dvar_t *v335; 
  __int64 v336; 
  unsigned __int8 v337; 
  const dvar_t *v338; 
  __int64 v339; 
  unsigned __int8 v340; 
  unsigned __int8 cullIn; 
  BOOL v342; 
  unsigned __int8 *v347; 
  int v348; 
  __int64 j; 
  unsigned __int8 v350; 
  unsigned __int8 v351; 
  unsigned __int8 v352; 
  bool result; 
  char v365; 
  char v366; 
  unsigned __int8 v370; 
  int WheelCount; 
  float fmt; 
  __int64 v386; 
  vec3_t modelIndex; 
  vec3_t outOrigin; 
  vec3_t v389; 
  VehicleClient *vehClient; 
  cg_t *v393; 
  const VehicleDef *v394; 
  CgVehicleSystem *v395; 
  vec4_t v396; 
  __int64 v397; 
  DObjPartBits partBits; 
  vec3_t v399; 
  vec4_t out; 
  char v402; 
  void *retaddr; 

  _RAX = &retaddr;
  v397 = -2i64;
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
  _RBX = cent;
  *(_QWORD *)v399.v = cent;
  v15 = obj;
  *(_QWORD *)outOrigin.v = obj;
  v16 = this;
  v395 = this;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1387, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1388, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( _RBX == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((_RBX->nextState.eType - 12) & 0xFFFD) != 0 && !CG_Vehicle_IsCorpse(_RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1389, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &cent->nextState ) || CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v16->m_localClientNum);
  v393 = _R15;
  if ( CG_Vehicle_IsCorpse(_RBX) )
  {
    Client = NULL;
    vehClient = NULL;
    ClientDef = CgVehicleSystem::GetClientDef((unsigned int)_RBX->nextState.lerp.u.anonymous.data[0] >> 7);
  }
  else
  {
    Client = CgVehicleSystem::GetClient(v16, _RBX);
    vehClient = Client;
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1398, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(Client);
  }
  _R13 = (__int64)ClientDef;
  v394 = ClientDef;
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1407, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1F0h]
    vmovss  xmm4, dword ptr [rbx+174h]
    vsubss  xmm1, xmm0, xmm4
    vmovss  xmm9, cs:__real@3b360b61
    vmulss  xmm3, xmm1, xmm9
    vmovss  xmm7, cs:__real@3f000000
    vaddss  xmm2, xmm3, xmm7
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm0, xmm10, xmm2, 1
    vsubss  xmm0, xmm3, xmm0
    vmovss  xmm6, cs:__real@47800000
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm2, xmm0, dword ptr [r15+65E0h]
    vmovss  xmm8, cs:__real@43360b61
    vmulss  xmm1, xmm4, xmm8
    vaddss  xmm0, xmm2, xmm1
    vaddss  xmm2, xmm0, xmm7
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm3, xmm3, xmm2, 1
    vcvttss2si eax, xmm3
  }
  _RBX->pose.vehicle.pitch = _EAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+200h]
    vmovss  xmm5, dword ptr [rbx+184h]
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm4, xmm0, xmm9
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [r15+65E0h]
    vmulss  xmm2, xmm5, xmm8
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm1, xmm0, xmm7
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm1, 1
    vcvttss2si eax, xmm4
  }
  _RBX->pose.vehicle.yaw = _EAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1F4h]
    vmovss  xmm5, dword ptr [rbx+178h]
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm4, xmm0, xmm9
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [r15+65E0h]
    vmulss  xmm2, xmm5, xmm8
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm1, xmm0, xmm7
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm1, 1
    vcvttss2si eax, xmm4
  }
  _RBX->pose.vehicle.roll = _EAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1FCh]
    vmovss  xmm5, dword ptr [rbx+180h]
    vsubss  xmm0, xmm0, xmm5
    vmulss  xmm4, xmm0, xmm9
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm3, xmm1, dword ptr [r15+65E0h]
    vmulss  xmm2, xmm5, xmm8
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm1, xmm0, xmm7
    vxorps  xmm4, xmm4, xmm4
    vroundss xmm4, xmm4, xmm1, 1
    vcvttss2si eax, xmm4
  }
  _RBX->pose.vehicle.barrelPitch = _EAX;
  *(double *)&_XMM0 = ((double (__fastcall *)(CgVehicleSystem *, centity_t *))v16->GetTurretBarrelRoll)(v16, _RBX);
  __asm { vmovss  dword ptr [rbx+0B4h], xmm0 }
  if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2464, ASSERT_TYPE_ASSERT, "(CENextValid( vehicleEntity ))", (const char *)&queryFormat, "CENextValid( vehicleEntity )") )
    __debugbreak();
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  if ( CG_Vehicle_IsCorpse(_RBX) )
    goto LABEL_40;
  if ( _RBX == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((_RBX->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2469, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehicleEntity->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehicleEntity->nextState )") )
    __debugbreak();
  v87 = CgVehicleSystem::GetClient(v16, _RBX);
  if ( CgVehicleSystem::GetClientDef(v87)->vehiclePhysicsDef.disableWheelsTurning )
  {
LABEL_40:
    _RBX->pose.coverWall.coverGrid[2] = 11927552;
  }
  else
  {
    if ( Client && BGVehicles::PhysicsIsValid(Client->physicsId) && (ObjectById = BgVehiclePhysicsManager::GetObjectById(&v16->m_vehiclePhysicsManager, Client->physicsId), BgVehiclePhysics::IsDynamic(ObjectById)) )
    {
      ObjectById->GetSteeringAngle(ObjectById);
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1F8h]
        vmovss  xmm5, dword ptr [rbx+17Ch]
        vsubss  xmm0, xmm0, xmm5
        vmulss  xmm4, xmm0, xmm9
        vaddss  xmm2, xmm4, xmm7
        vroundss xmm3, xmm10, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmulss  xmm2, xmm1, dword ptr [r15+65E0h]
        vaddss  xmm0, xmm2, xmm5
      }
    }
    __asm
    {
      vmulss  xmm0, xmm0, xmm8
      vaddss  xmm1, xmm0, xmm7
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _RBX->pose.vehicle.steerYaw = _EAX;
    __asm
    {
      vmovss  xmm2, cs:__real@41200000; max
      vmovaps xmm1, xmm11; min
      vmovss  xmm0, dword ptr [r13+15Ch]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm2, xmm1, xmm7
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
    }
    _RBX->pose.vehicle.steerYawAckermannRatio = _EAX;
  }
  __asm { vmovss  xmm10, cs:__real@3a83126f }
  if ( *(_DWORD *)(_R13 + 248) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+148h]
      vmulss  xmm1, xmm0, cs:__real@40066666
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+218h]
      vmulss  xmm1, xmm0, xmm10
    }
  }
  __asm { vmovss  dword ptr [rbx+0B0h], xmm1 }
  if ( _RBX->nextState.time2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1454, ASSERT_TYPE_ASSERT, "(ns->time2 >= 0)", (const char *)&queryFormat, "ns->time2 >= 0") )
    __debugbreak();
  DObjGetBoneIndexInternal_60(v15, scr_const.tag_turret, &_RBX->pose.vehicle.tag_turret, (int *)&modelIndex);
  DObjGetBoneIndexInternal_60(v15, scr_const.tag_barrel, &_RBX->pose.vehicle.tag_barrel, (int *)&modelIndex);
  boneUsage = _RBX->pose.vehicle.boneUsage;
  __asm { vxorps  xmm14, xmm14, xmm14 }
  if ( boneUsage != 1 )
  {
    if ( !boneUsage )
    {
      CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
      CgVehicleSystem::UpdateWheelSpinAngles(v16, v15, _RBX);
      CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
    }
    _RBX->pose.vehicle.tag_body = BG_GameInterface_VehicleGetBoneIndex_TagBody(v15);
    goto LABEL_146;
  }
  if ( !Client || !BGVehicles::PhysicsIsValid(Client->physicsId) || !_RBX->pose.turret.useOnVehicleAngles )
  {
    memset((char *)&_RBX->pose.moverFx + 36, 254, 24);
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    _RBX->pose.vehicle.wheelFraction[1] = CompressSignedUnit(*(float *)&_XMM0);
    __asm { vxorps  xmm0, xmm0, xmm0; unit }
    _RBX->pose.vehicle.wheelFraction[2] = CompressSignedUnit(*(float *)&_XMM0);
    result = 0;
    goto LABEL_190;
  }
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v16->m_localClientNum);
  v114 = CgVehicleSystem::GetClient(VehicleSystem, _RBX);
  _RDI = BgVehiclePhysicsManager::GetObjectById(&v16->m_vehiclePhysicsManager, v114->physicsId);
  Entity = CG_GetEntity((const LocalClientNum_t)v16->m_localClientNum, _RDI->m_entityNumber);
  v117 = (__int64)v16->PhysicsGetVehiclePhysicsManager(v16);
  physicsId = Client->physicsId;
  if ( !BGVehicles::PhysicsIsValid(physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v119 = physicsId - 1;
  if ( v119 >= 0x80 )
  {
    LODWORD(v386) = v119;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v386, 128) )
      __debugbreak();
  }
  v120 = 3360i64 * v119;
  _RSI = (HelicopterDynamics *)(v120 + v117 + 8);
  if ( v120 + v117 != -8 && *(_DWORD *)(v120 + v117 + 836) != 2 && !*(_BYTE *)(v120 + v117 + 2386) && !*(_BYTE *)(v120 + v117 + 84) )
    HelicopterDynamics::InitializeHelicopterRotors((HelicopterDynamics *)(v120 + v117 + 8));
  v122 = (__int64)v393;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm0, xmm0, xmm10; val
    vmovss  xmm2, cs:__real@3d088889; max
    vmovss  xmm1, cs:__real@3b888889; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm6, xmm0 }
  if ( _RSI && _RSI->m_NumberOfRotors )
  {
    if ( !BgVehiclePhysics::IsDynamic(_RDI) )
    {
      CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
      Axis43ToQuat(&_RSI->m_transform, &out);
      if ( v114->playerIndex != *(_DWORD *)(v122 + 25688) && Entity->nextState.staticState.vehiclePlayer.playerIndex )
      {
        *(double *)&_XMM0 = HelicopterDynamics::GetMaxGovernorSpeed(_RSI);
        __asm
        {
          vmovaps xmm1, xmm0; targetRPM
          vmovaps xmm2, xmm6; dT
        }
        HelicopterDynamics::SimulateRotorSpeed(_RSI, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      *(double *)&_XMM0 = HelicopterDynamics::GetRPMForRotorIndex(_RSI, 0);
      __asm { vcomiss xmm0, cs:__real@42480000 }
      if ( v365 | v366 )
      {
        __asm { vmovaps xmm1, xmm6; dT }
        HelicopterDynamics::SimulateStationaryRotorBladesMovement(_RSI, *(float *)&_XMM1);
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rdi+1A4h]
          vmovsd  qword ptr [rsp+218h+modelIndex], xmm0
        }
        modelIndex.v[2] = _RDI->m_linearVelocityWs.v[2];
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+218h+out]
          vmovdqa [rsp+218h+var_178], xmm0
          vmovsd  xmm1, qword ptr [rdi+198h]
          vmovsd  [rsp+218h+var_1B8], xmm1
        }
        v389.v[2] = _RDI->m_transform.m[3].v[2];
        FlightDynamics::UpdateFromVectors(_RSI, &v389, &v396, &modelIndex, NULL);
        __asm
        {
          vmovss  xmm0, cs:__real@be800000
          vmovss  dword ptr [rsp+218h+fmt], xmm0
          vxorps  xmm3, xmm3, xmm3; elev
          vxorps  xmm2, xmm2, xmm2; ail
          vmovaps xmm1, xmm6; dT
        }
        HelicopterDynamics::SimulateRotorsNoPhysics(_RSI, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt);
      }
      CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
    }
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_joystick_cyclic_l, &_RBX->pose.vehicle.rotorBoneIndex[10], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_joystick_cyclic_r, &_RBX->pose.vehicle.rotorBoneIndex[11], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_pedal_rudder_l_l, _RBX->pose.vehicle.wheelBoneIndex, (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_pedal_rudder_l_r, &_RBX->pose.vehicle.wheelBoneIndex[1], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_pedal_rudder_l_l, &_RBX->pose.vehicle.wheelBoneIndex[2], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_pedal_rudder_l_r, &_RBX->pose.vehicle.wheelBoneIndex[3], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_joystick_collective_l, &_RBX->pose.vehicle.wheelBoneIndex[4], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_joystick_collective_l, &_RBX->pose.vehicle.wheelBoneIndex[5], (int *)&modelIndex);
    Dvar_GetInt_Internal_DebugName(DVARINT_fd_helicopter_fbw_status, "fd_helicopter_fbw_status");
    v138 = 0;
    __asm
    {
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, ecx
    }
    if ( _RSI->m_EnableFlyByWire )
    {
      __asm
      {
        vsubss  xmm3, xmm11, xmm4
        vmulss  xmm1, xmm4, dword ptr [rsi+47Ch]
        vmulss  xmm0, xmm3, dword ptr [rsi+444h]
        vaddss  xmm12, xmm1, xmm0
        vmovss  dword ptr [rsp+218h+var_1B8], xmm12
        vmulss  xmm2, xmm4, dword ptr [rsi+480h]
        vmulss  xmm0, xmm3, dword ptr [rsi+448h]
        vaddss  xmm9, xmm2, xmm0
        vmulss  xmm2, xmm4, dword ptr [rsi+488h]
        vmulss  xmm0, xmm3, dword ptr [rsi+450h]
        vaddss  xmm5, xmm2, xmm0
        vmovss  [rsp+218h+var_1A8], xmm5
        vmulss  xmm2, xmm4, dword ptr [rsi+490h]
        vmulss  xmm0, xmm3, dword ptr [rsi+458h]
        vaddss  xmm5, xmm2, xmm0
        vmovss  [rsp+218h+var_1A4], xmm5
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsi+444h]
        vmovups [rsp+218h+var_118], ymm0
        vmovss  xmm0, dword ptr [rsp+218h+var_118+14h]
        vmovss  [rsp+218h+var_1A4], xmm0
        vmovss  xmm0, dword ptr [rsp+218h+var_118+0Ch]
        vmovss  [rsp+218h+var_1A8], xmm0
        vmovss  xmm9, dword ptr [rsp+218h+var_118+4]
        vmovss  xmm0, dword ptr [rsp+218h+var_118]
        vmovss  dword ptr [rsp+218h+var_1B8], xmm0
      }
    }
    __asm { vcomiss xmm4, xmm10 }
    _EAX = _RBX->pose.vehicle.gunTrackMode.leftAngles[0];
    __asm
    {
      vmovd   xmm3, eax
      vcvtdq2ps xmm3, xmm3
      vmovss  xmm10, cs:__real@3bb40000
      vmulss  xmm13, xmm3, xmm10
    }
    _EAX = _RBX->pose.vehicle.terrainMode.moveDesires[0];
    __asm
    {
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm1, xmm10
      vmovss  [rsp+218h+modelIndex], xmm0
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm3, xmm2, cs:__real@37fd2000
      vsqrtss xmm4, xmm3, xmm3
      vmulss  xmm5, xmm4, cs:__real@3daaaaab
      vsubss  xmm1, xmm11, xmm5
      vmulss  xmm3, xmm1, xmm7
      vmulss  xmm2, xmm5, cs:__real@42200000
      vaddss  xmm14, xmm3, xmm2
      vmovaps xmm1, xmm11; expo
      vmovaps xmm0, xmm9; value
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm
    {
      vmovss  xmm15, cs:__real@c1f00000
      vmulss  xmm1, xmm0, xmm15
    }
    _EAX = _RBX->pose.vehicle.wheelSpinAngle[8];
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, xmm10
      vsubss  xmm1, xmm1, xmm13
      vmovss  xmm12, cs:__real@42c80000
      vmulss  xmm0, xmm1, xmm12
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm3, xmm1, xmm2
      vmulss  xmm2, xmm14, xmm3
      vmulss  xmm4, xmm2, xmm6
      vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm1, xmm4, xmm9
      vandps  xmm0, xmm3, xmm9
      vcomiss xmm1, xmm0
    }
    if ( v365 | v366 )
      __asm { vsubss  xmm3, xmm3, xmm4 }
    else
      __asm { vxorps  xmm3, xmm3, xmm3 }
    __asm
    {
      vmulss  xmm0, xmm3, xmm8
      vaddss  xmm1, xmm0, xmm7
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _RBX->pose.vehicle.wheelSpinAngle[8] = _EAX;
    __asm
    {
      vmulss  xmm0, xmm3, xmm6
      vaddss  xmm0, xmm0, xmm13; val
      vmovss  xmm13, cs:__real@41400000
      vmovaps xmm2, xmm13; max
      vmovss  xmm1, cs:__real@c1400000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm2, xmm1, xmm7
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
    }
    _RBX->pose.vehicle.wheelFraction[1] = _EAX;
    __asm
    {
      vmovaps xmm1, xmm11; expo
      vmovss  xmm0, [rsp+218h+var_1A8]; value
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, xmm15 }
    _EAX = _RBX->pose.vehicle.wheelSpinAngle[7];
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, xmm10
      vmovss  xmm15, [rsp+218h+modelIndex]
      vsubss  xmm1, xmm1, xmm15
      vmulss  xmm2, xmm1, xmm12
      vmulss  xmm0, xmm2, xmm6
      vaddss  xmm4, xmm0, xmm3
      vmulss  xmm1, xmm14, xmm4
      vmulss  xmm5, xmm1, xmm6
      vandps  xmm2, xmm5, xmm9
      vandps  xmm0, xmm4, xmm9
      vxorps  xmm14, xmm14, xmm14
      vcomiss xmm2, xmm0
    }
    if ( v365 | v366 )
      __asm { vsubss  xmm1, xmm4, xmm5 }
    else
      __asm { vxorps  xmm1, xmm1, xmm1 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm8
      vaddss  xmm3, xmm0, xmm7
      vxorps  xmm4, xmm4, xmm4
      vroundss xmm4, xmm4, xmm3, 1
      vcvttss2si eax, xmm4
    }
    _RBX->pose.vehicle.wheelSpinAngle[7] = _EAX;
    __asm
    {
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm0, xmm3, xmm15; val
      vmovaps xmm2, xmm13; max
      vmovss  xmm1, cs:__real@c1400000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm2, xmm1, xmm7
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
    }
    _RBX->pose.vehicle.wheelFraction[2] = _EAX;
    __asm
    {
      vmovaps xmm1, xmm7; expo
      vmovss  xmm0, [rsp+218h+var_1A4]; value
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, cs:__real@420c0000 }
    _EAX = _RBX->pose.vehicle.terrainMode.moveDesires[1];
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm13, xmm0, xmm10
    }
    _EAX = _RBX->pose.vehicle.terrainMode.moveDesires[2];
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, xmm10
      vsubss  xmm1, xmm1, xmm13
      vmulss  xmm2, xmm1, xmm12
      vmulss  xmm0, xmm2, xmm6
      vaddss  xmm4, xmm0, xmm3
      vmulss  xmm1, xmm4, cs:__real@42200000
      vmulss  xmm5, xmm1, xmm6
      vandps  xmm2, xmm5, xmm9
      vandps  xmm0, xmm4, xmm9
      vcomiss xmm2, xmm0
    }
    if ( v365 | v366 )
      __asm { vsubss  xmm3, xmm4, xmm5 }
    else
      __asm { vxorps  xmm3, xmm3, xmm3 }
    __asm
    {
      vmulss  xmm0, xmm3, xmm8
      vaddss  xmm1, xmm0, xmm7
      vxorps  xmm2, xmm2, xmm2
      vroundss xmm2, xmm2, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _RBX->pose.vehicle.wheelFraction[4] = _EAX;
    __asm
    {
      vmulss  xmm1, xmm3, xmm6
      vaddss  xmm0, xmm1, xmm13; val
      vmovss  xmm2, cs:__real@41a00000; max
      vmovss  xmm1, cs:__real@c0a00000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm2, xmm1, xmm7
      vxorps  xmm3, xmm3, xmm3
      vroundss xmm3, xmm3, xmm2, 1
      vcvttss2si eax, xmm3
    }
    _RBX->pose.vehicle.wheelFraction[3] = _EAX;
    __asm
    {
      vmovaps xmm1, xmm7; expo
      vmovss  xmm0, dword ptr [rsp+218h+var_1B8]; value
    }
    *(double *)&_XMM0 = FD_ComputeExpo(*(float *)&_XMM0, *(float *)&_XMM1);
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm5, xmm6, cs:__real@40a00000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm3, xmm1, xmm11
      vsubss  xmm2, xmm11, xmm5
      vmulss  xmm4, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@45638e39
      vmulss  xmm1, xmm0, xmm5
      vsubss  xmm2, xmm4, xmm1
      vaddss  xmm3, xmm2, xmm7
      vxorps  xmm0, xmm0, xmm0
      vroundss xmm0, xmm0, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _RBX->pose.vehicle.wheelFraction[5] = _EAX;
    DObjGetBoneIndexInternal_60(v15, scr_const.main_rotor_jnt, _RBX->pose.vehicle.rotorBoneIndex, (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tail_rotor_shaft, &_RBX->pose.vehicle.rotorBoneIndex[1], (int *)&modelIndex);
    StrobeEffectToggle = HelicopterDynamics::GetStrobeEffectToggle(_RSI, 0);
    v293 = &_RBX->pose.vehicle.rotorBladeBoneIndex[1];
    if ( StrobeEffectToggle )
    {
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01_blur, v293, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
      rotorBladeBoneIndex = _RBX->pose.vehicle.rotorBladeBoneIndex;
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_05_blur, _RBX->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01, &_RBX->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02, &_RBX->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03, &_RBX->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04, &_RBX->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
      tag_main_rotor_blade_05 = scr_const.tag_main_rotor_blade_05;
    }
    else
    {
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01, v293, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02, &_RBX->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03, &_RBX->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04, &_RBX->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
      rotorBladeBoneIndex = _RBX->pose.vehicle.rotorBladeBoneIndex;
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_05, _RBX->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
      tag_main_rotor_blade_05 = scr_const.tag_main_rotor_blade_05_blur;
    }
    v296 = &_RBX->pose.vehicle.rotorBladeBoneIndex[9];
    DObjGetBoneIndexInternal_60(v15, tag_main_rotor_blade_05, &_RBX->pose.vehicle.rotorBladeBoneIndex[9], (int *)&modelIndex);
    v297 = HelicopterDynamics::GetStrobeEffectToggle(_RSI, 1);
    v298 = &_RBX->pose.vehicle.rotorBladeBoneIndex[6];
    if ( v297 )
    {
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01_blur, v298, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_02_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
      v299 = &_RBX->pose.vehicle.rotorBoneIndex[6];
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01, &_RBX->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
      tag_tail_rotor_blade_02 = scr_const.tag_tail_rotor_blade_02;
    }
    else
    {
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01, v298, (int *)&modelIndex);
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_02, &_RBX->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
      v299 = &_RBX->pose.vehicle.rotorBoneIndex[6];
      DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01_blur, &_RBX->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
      tag_tail_rotor_blade_02 = scr_const.tag_tail_rotor_blade_02_blur;
    }
    DObjGetBoneIndexInternal_60(v15, tag_tail_rotor_blade_02, &_RBX->pose.vehicle.rotorBoneIndex[7], (int *)&modelIndex);
    DObjGetHidePartBits(v15, &partBits);
    if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, 0) > 0 )
    {
      do
      {
        if ( *rotorBladeBoneIndex < 0xFEu )
          bitarray_base<bitarray<256>>::resetBit(&partBits, *rotorBladeBoneIndex);
        if ( *v296 < 0xFEu )
          bitarray_base<bitarray<256>>::setBit(&partBits, *v296);
        ++v138;
        ++rotorBladeBoneIndex;
        ++v296;
      }
      while ( v138 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, 0) );
      v299 = &_RBX->pose.vehicle.rotorBoneIndex[6];
    }
    for ( i = 0; i < HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, 1); ++v299 )
    {
      v302 = v299[68];
      if ( v302 < 0xFEu )
        bitarray_base<bitarray<256>>::resetBit(&partBits, v302);
      if ( *v299 < 0xFEu )
        partBits.array[(unsigned __int64)*v299 >> 5] |= 0x80000000 >> (*v299 & 0x1F);
      ++i;
    }
    DObjSetHidePartBits(v15, &partBits);
    v303 = 0;
    if ( _RSI->m_NumberOfRotors )
    {
      v304 = 0i64;
      *(_QWORD *)modelIndex.v = 0i64;
      rotorPosition = _RBX->pose.vehicle.rotorPosition;
      *(_QWORD *)v389.v = (char *)&_RBX->pose.moverFx + 60;
      __asm
      {
        vmovss  xmm11, cs:__real@40c00000
        vmovss  xmm9, cs:__real@428c0000
        vmovss  xmm10, cs:__real@4818c9eb
      }
      do
      {
        *(double *)&_XMM0 = HelicopterDynamics::GetBladeAngleOffsetStrobeForRotorIndex(_RSI, 0, v303);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = HelicopterDynamics::GetAngularPositionStrobeForRotorIndex(_RSI, v303);
        __asm
        {
          vmulss  xmm1, xmm0, xmm11
          vaddss  xmm2, xmm6, xmm1
          vmulss  xmm3, xmm2, xmm8
          vaddss  xmm0, xmm3, xmm7
          vxorps  xmm1, xmm1, xmm1
          vroundss xmm1, xmm1, xmm0, 1
          vcvttss2si eax, xmm1
        }
        *rotorPosition = _EAX;
        v316 = 0;
        if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, v303) > 0 )
        {
          v317 = &_RBX->pose.vehicle.bladePitch[v304];
          v318 = *(_QWORD *)modelIndex.v;
          do
          {
            BladeIndexStrobeForRotorIndex = HelicopterDynamics::GetBladeIndexStrobeForRotorIndex(_RSI, v316, v303);
            v320 = DVARINT_fd_helicopter_show_blade_index;
            if ( !DVARINT_fd_helicopter_show_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_blade_index") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v320);
            if ( v320->current.integer == v316 )
            {
              LOWORD(_EAX) = 0x4000;
            }
            else
            {
              *(double *)&_XMM0 = HelicopterDynamics::GetBladePitchStrobeForRotorIndex(_RSI, BladeIndexStrobeForRotorIndex, v303);
              __asm
              {
                vmulss  xmm1, xmm0, xmm9
                vmulss  xmm2, xmm1, xmm8
                vaddss  xmm3, xmm2, xmm7
                vxorps  xmm0, xmm0, xmm0
                vroundss xmm0, xmm0, xmm3, 1
                vcvttss2si eax, xmm0
              }
            }
            *v317 = _EAX;
            *(double *)&_XMM0 = HelicopterDynamics::GetBladeDeflectionForRotorIndex(_RSI, BladeIndexStrobeForRotorIndex, v303);
            *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, xmm10
              vaddss  xmm2, xmm1, xmm7
              vxorps  xmm3, xmm3, xmm3
              vroundss xmm3, xmm3, xmm2, 1
              vcvttss2si eax, xmm3
            }
            v317[11] = _EAX;
            ++v318;
            ++v317;
            ++v316;
          }
          while ( v316 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, v303) );
          *(_QWORD *)modelIndex.v = v318;
          _RBX = *(centity_t **)v399.v;
          v304 = *(_QWORD *)modelIndex.v;
        }
        *(_QWORD *)modelIndex.v = ++v304;
        ++v303;
        rotorPosition = (unsigned __int16 *)(*(_QWORD *)v389.v + 2i64);
        *(_QWORD *)v389.v += 2i64;
      }
      while ( v303 < _RSI->m_NumberOfRotors );
      v15 = *(DObj **)outOrigin.v;
    }
    v329 = DVARINT_fd_helicopter_hide_static_blade_index;
    if ( !DVARINT_fd_helicopter_hide_static_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_hide_static_blade_index") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v329);
    integer = v329->current.integer;
    if ( (int)integer >= 0 )
    {
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_hide_static_blade_index, -1);
      v331 = _RBX->pose.vehicle.rotorBladeBoneIndex[integer];
      if ( v331 < 0xFEu )
        partBits.array[(unsigned __int64)v331 >> 5] |= 0x80000000 >> (v331 & 0x1F);
      DObjSetHidePartBits(v15, &partBits);
    }
    v332 = DVARINT_fd_helicopter_show_static_blade_index;
    if ( !DVARINT_fd_helicopter_show_static_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_static_blade_index") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v332);
    v333 = v332->current.integer;
    if ( (int)v333 >= 0 )
    {
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_show_static_blade_index, -1);
      v334 = _RBX->pose.vehicle.rotorBladeBoneIndex[v333];
      if ( v334 < 0xFEu )
        partBits.array[(unsigned __int64)v334 >> 5] &= ~(0x80000000 >> (v334 & 0x1F));
      DObjSetHidePartBits(v15, &partBits);
    }
    v335 = DVARINT_fd_helicopter_hide_blur_blade_index;
    if ( !DVARINT_fd_helicopter_hide_blur_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_hide_blur_blade_index") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v335);
    v336 = v335->current.integer;
    if ( (int)v336 >= 0 )
    {
      Dvar_SetInt_Internal(DVARINT_fd_helicopter_hide_blur_blade_index, -1);
      v337 = _RBX->pose.vehicle.rotorBladeBoneIndex[v336 + 9];
      if ( v337 < 0xFEu )
        partBits.array[(unsigned __int64)v337 >> 5] |= 0x80000000 >> (v337 & 0x1F);
      DObjSetHidePartBits(v15, &partBits);
    }
    v338 = DVARINT_fd_helicopter_show_blur_blade_index;
    if ( !DVARINT_fd_helicopter_show_blur_blade_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_helicopter_show_blur_blade_index") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v338);
    v339 = v338->current.integer;
    if ( (int)v339 < 0 )
      goto LABEL_145;
    Dvar_SetInt_Internal(DVARINT_fd_helicopter_show_blur_blade_index, -1);
    v340 = _RBX->pose.vehicle.rotorBladeBoneIndex[v339 + 9];
    if ( v340 < 0xFEu )
      partBits.array[(unsigned __int64)v340 >> 5] &= ~(0x80000000 >> (v340 & 0x1F));
  }
  else
  {
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01, &_RBX->pose.vehicle.rotorBladeBoneIndex[1], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02, &_RBX->pose.vehicle.rotorBladeBoneIndex[2], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03, &_RBX->pose.vehicle.rotorBladeBoneIndex[3], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04, &_RBX->pose.vehicle.rotorBladeBoneIndex[4], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_05, _RBX->pose.vehicle.rotorBladeBoneIndex, (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_01_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[10], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_02_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[11], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_03_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[12], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_04_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[13], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_main_rotor_blade_05_blur, &_RBX->pose.vehicle.rotorBladeBoneIndex[9], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01, &_RBX->pose.vehicle.rotorBladeBoneIndex[6], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_02, &_RBX->pose.vehicle.rotorBladeBoneIndex[7], (int *)&modelIndex);
    v347 = &_RBX->pose.vehicle.rotorBoneIndex[6];
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_01_blur, &_RBX->pose.vehicle.rotorBoneIndex[6], (int *)&modelIndex);
    DObjGetBoneIndexInternal_60(v15, scr_const.tag_tail_rotor_blade_02_blur, &_RBX->pose.vehicle.rotorBoneIndex[7], (int *)&modelIndex);
    DObjGetHidePartBits(v15, &partBits);
    v348 = 0;
    for ( j = 0i64; j < 5; ++j )
    {
      v350 = _RBX->pose.vehicle.rotorBladeBoneIndex[j];
      if ( v350 < 0xFEu )
        bitarray_base<bitarray<256>>::resetBit(&partBits, v350);
      v351 = _RBX->pose.vehicle.rotorBladeBoneIndex[j + 9];
      if ( v351 < 0xFEu )
        bitarray_base<bitarray<256>>::setBit(&partBits, v351);
    }
    if ( HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, 1) > 0 )
    {
      do
      {
        v352 = v347[68];
        if ( v352 < 0xFEu )
          partBits.array[(unsigned __int64)v352 >> 5] &= ~(0x80000000 >> (v352 & 0x1F));
        if ( *v347 < 0xFEu )
          partBits.array[(unsigned __int64)*v347 >> 5] |= 0x80000000 >> (*v347 & 0x1F);
        ++v348;
        ++v347;
      }
      while ( v348 < HelicopterDynamics::GetNumberOfBladesForRotorIndex(_RSI, 1) );
    }
  }
  DObjSetHidePartBits(v15, &partBits);
LABEL_145:
  v16 = v395;
  _R15 = v393;
  _R13 = (__int64)v394;
LABEL_146:
  if ( *(_BYTE *)_RBX->nextState.lerp.u.actor.threatSight < 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_OFFHAND_INIT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1953, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_SCRIPTED_ANIMATION )") )
      __debugbreak();
    _RBX->pose.coverWall.coverGrid[4] = -1082130432;
  }
  if ( vehClient )
    CgVehicleAnimSystem::UpdateBoneController(&v16->m_vehicleAnimSystem, vehClient, v15, _RBX);
  cullIn = _RBX->pose.cullIn;
  v342 = cullIn == 2;
  if ( cullIn == 2 )
  {
    vehClient = NULL;
    CG_Vehicle_GetRemoteControlledVehicle((const LocalClientNum_t)v16->m_localClientNum, (const centity_t **)&vehClient);
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    if ( vehClient )
    {
      CG_GetPoseOrigin((const cpose_t *)vehClient, &v399);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+218h+var_140]
        vsubss  xmm3, xmm0, dword ptr [rsp+218h+outOrigin]
        vmovss  xmm1, dword ptr [rsp+218h+var_140+4]
        vmovss  xmm0, dword ptr [rsp+218h+var_140+8]
      }
    }
    else if ( _R15->predictedPlayerState.vehicleState.entity == 2047 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+38h]
        vsubss  xmm3, xmm0, dword ptr [rsp+218h+outOrigin]
        vmovss  xmm1, dword ptr [r15+3Ch]
        vmovss  xmm0, dword ptr [r15+40h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15+134h]
        vsubss  xmm3, xmm0, dword ptr [rsp+218h+outOrigin]
        vmovss  xmm1, dword ptr [r15+138h]
        vmovss  xmm0, dword ptr [r15+13Ch]
      }
    }
    __asm
    {
      vsubss  xmm2, xmm1, dword ptr [rsp+218h+outOrigin+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+218h+outOrigin+8]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm6, xmm2, xmm2
    }
    *(double *)&_XMM0 = CG_GetViewZoomScale(v16->m_localClientNum);
    __asm
    {
      vmovss  xmm1, dword ptr [r13+74h]
      vcomiss xmm1, xmm14
    }
    if ( !(v365 | v366) )
    {
      __asm
      {
        vmulss  xmm0, xmm0, xmm6
        vcomiss xmm0, xmm1
      }
      if ( !(v365 | v366) )
        v342 = 0;
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  if ( v342 )
  {
    result = 1;
  }
  else
  {
    v370 = _RBX->pose.vehicle.boneUsage;
    if ( v370 == 1 )
    {
      memset((char *)&_RBX->pose.moverFx + 36, 254, 24);
      __asm { vmovaps xmm0, xmm14; unit }
      _RBX->pose.vehicle.wheelFraction[1] = CompressSignedUnit(*(float *)&_XMM0);
      __asm { vmovaps xmm0, xmm14; unit }
      _RBX->pose.vehicle.wheelFraction[2] = CompressSignedUnit(*(float *)&_XMM0);
      result = 0;
    }
    else
    {
      if ( v370 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2038, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS)", (const char *)&queryFormat, "cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS") )
        __debugbreak();
      WheelCount = BGVehicles::GetWheelCount(NULL);
      if ( WheelCount > 0 )
        memset(&_RBX->pose.moverFx + 6, 254, WheelCount);
      _RBX->pose.turret.visualYawLimitLeft = -1.6947395e38;
      result = 0;
    }
  }
LABEL_190:
  _R11 = &v402;
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
  return result;
}

/*
==============
CgVehicleSystem::UpdateEntity
==============
*/
void CgVehicleSystem::UpdateEntity(CgVehicleSystem *this, centity_t *cent)
{
  cg_t *LocalClientGlobals; 
  unsigned int PlayerIndex; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int ClientIndex; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 979, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Vehicle_IsCorpse(cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 980, ASSERT_TYPE_ASSERT, "(!CG_Vehicle_IsCorpse( cent ))", (const char *)&queryFormat, "!CG_Vehicle_IsCorpse( cent )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  _RDI = CgVehicleSystem::GetClient(this, cent);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 985, ASSERT_TYPE_ASSERT, "(veh)", (const char *)&queryFormat, "veh") )
    __debugbreak();
  if ( _RDI->index != CG_Vehicle_GetClientIndex(cent) )
  {
    ClientIndex = CG_Vehicle_GetClientIndex(cent);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 986, ASSERT_TYPE_ASSERT, "( veh->index ) == ( CG_Vehicle_GetClientIndex( cent ) )", "%s == %s\n\t%i, %i", "veh->index", "CG_Vehicle_GetClientIndex( cent )", _RDI->index, ClientIndex) )
      __debugbreak();
  }
  if ( _RDI->defIndex != CgVehicleSystem::GetClientDefIndex(cent) )
  {
    LODWORD(v17) = CgVehicleSystem::GetClientDefIndex(cent);
    LODWORD(v16) = _RDI->defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 987, ASSERT_TYPE_ASSERT, "( veh->defIndex ) == ( CgVehicleSystem::GetClientDefIndex( cent ) )", "%s == %s\n\t%i, %i", "veh->defIndex", "CgVehicleSystem::GetClientDefIndex( cent )", v16, v17) )
      __debugbreak();
  }
  if ( _RDI->entIndex != cent->nextState.number )
  {
    LODWORD(v17) = cent->nextState.number;
    LODWORD(v16) = _RDI->entIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 988, ASSERT_TYPE_ASSERT, "( veh->entIndex ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "veh->entIndex", "cent->nextState.number", v16, v17) )
      __debugbreak();
  }
  _RDI->localClientNum = this->m_localClientNum;
  _RDI->frameTime = LocalClientGlobals->time - _RDI->time;
  _RDI->time = LocalClientGlobals->time;
  _RDI->flags = CG_Vehicle_GetFlags(cent);
  PlayerIndex = BGVehicles::GetPlayerIndex(&cent->nextState);
  _RDI->playerIndex = PlayerIndex;
  if ( PlayerIndex >= cls.maxClients )
  {
    LODWORD(v15) = cls.maxClients;
    LODWORD(v14) = PlayerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 995, ASSERT_TYPE_ASSERT, "(unsigned)( veh->playerIndex ) < (unsigned)( cls.maxClients )", "veh->playerIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  CG_Vehicle_CalcLocalSpeed(this->m_localClientNum, cent, _RDI, &_RDI->localSpeed);
  CG_Vehicle_CalcRotationalSpeed(this->m_localClientNum, cent, _RDI, &_RDI->rotateSpeed);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+34h]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+38h]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1000, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->localSpeed )[0] ) && !IS_NAN( ( veh->localSpeed )[1] ) && !IS_NAN( ( veh->localSpeed )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+40h]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+44h]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1001, ASSERT_TYPE_SANITY, "( !IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( veh->rotateSpeed )[0] ) && !IS_NAN( ( veh->rotateSpeed )[1] ) && !IS_NAN( ( veh->rotateSpeed )[2] )") )
      __debugbreak();
  }
  if ( this->ShouldUpdateVehicleSound(this, cent) )
    CG_VehicleAudio_UpdateSounds(this->m_localClientNum, cent, _RDI);
  if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity != cent->nextState.number || BG_IsSpectating(&LocalClientGlobals->predictedPlayerState) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r15+65E4h]
      vmulss  xmm3, xmm0, cs:__real@3a83126f; deltaTime
    }
    BG_VehicleAnim_Update(this, &cent->nextState, &_RDI->animinfo, *(float *)&_XMM3);
  }
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
  int number; 
  __int32 v18; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  __int64 skipEntity; 
  int v46[2]; 
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
        _RSI = DCONST_DVARFLT_bg_bulletLongHitScanDistance;
        if ( !DCONST_DVARFLT_bg_bulletLongHitScanDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_bulletLongHitScanDistance") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RSI);
        __asm { vmovss  xmm3, dword ptr [rsi+28h] }
      }
      else
      {
        __asm { vmovss  xmm3, cs:__real@46000000 }
      }
      __asm
      {
        vmulss  xmm1, xmm3, dword ptr [rbp+60h+axis]
        vaddss  xmm2, xmm1, dword ptr [rsp+160h+outViewOrigin]
        vmulss  xmm1, xmm3, dword ptr [rbp+60h+axis+4]
      }
      number = vehicleEntity->nextState.number;
      v18 = 3 * this->m_localClientNum + 2;
      __asm
      {
        vmovss  dword ptr [rsp+160h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+160h+outViewOrigin+4]
        vmulss  xmm1, xmm3, dword ptr [rbp+60h+axis+8]
        vmovss  dword ptr [rsp+160h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rbp+60h+outViewOrigin+8]
        vmovss  dword ptr [rsp+160h+end+8], xmm2
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)v18, &results, &outViewOrigin, &end, &bounds_origin, number, 0, 41969969, 1, NULL, All);
      if ( results.startsolid || results.allsolid )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+160h+outViewOrigin]
          vmovsd  qword ptr [rsp+160h+end], xmm0
        }
        end.v[2] = outViewOrigin.v[2];
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+160h+outViewOrigin]
          vmovss  xmm5, [rbp+60h+results.fraction]
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm0, xmm1, dword ptr [rsp+160h+outViewOrigin]
          vmovss  xmm1, dword ptr [rsp+160h+end+4]
          vmovss  dword ptr [rsp+160h+end], xmm0
          vsubss  xmm0, xmm1, dword ptr [rsp+160h+outViewOrigin+4]
          vmulss  xmm2, xmm0, xmm5
          vaddss  xmm3, xmm2, dword ptr [rsp+160h+outViewOrigin+4]
          vmovss  xmm0, dword ptr [rsp+160h+end+8]
          vsubss  xmm1, xmm0, dword ptr [rbp+60h+outViewOrigin+8]
          vmulss  xmm2, xmm1, xmm5
          vmovss  dword ptr [rsp+160h+end+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rbp+60h+outViewOrigin+8]
          vmovss  dword ptr [rsp+160h+end+8], xmm3
        }
      }
      _RDI = &v8->nextState.lerp.pos;
      *(_QWORD *)&v8->nextState.lerp.pos.trTime = 0i64;
      v8->nextState.lerp.pos.trType = TR_STATIONARY;
      *(_QWORD *)v8->nextState.lerp.pos.trDelta.v = 0i64;
      v8->nextState.lerp.pos.trDelta.v[2] = 0.0;
      if ( v8 == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", (_DWORD)v8 + 498, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rsp+160h+end] }
      if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
      {
        __asm { vmovss  [rsp+160h+var_100], xmm0 }
        if ( (v46[0] & 0x7F800000) == 2139095040 )
          goto LABEL_51;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+end+4]
          vmovss  [rsp+160h+var_100], xmm0
        }
        if ( (v46[0] & 0x7F800000) == 2139095040 )
          goto LABEL_51;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+160h+end+8]
          vmovss  [rsp+160h+var_100], xmm0
        }
        if ( (v46[0] & 0x7F800000) == 2139095040 )
        {
LABEL_51:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
            __debugbreak();
        }
        v40 = LODWORD(end.v[0]) ^ ~s_trbase_aab_X;
        v41 = v40 ^ s_trbase_aab_Y ^ LODWORD(end.v[1]);
        v42 = v41 ^ s_trbase_aab_Z ^ LODWORD(end.v[2]);
        LODWORD(v8->nextState.lerp.pos.trBase.v[1]) = v41;
        LODWORD(v8->nextState.lerp.pos.trBase.v[2]) = v42;
        LODWORD(v8->nextState.lerp.pos.trBase.v[0]) = v40;
        memset(v46, 0, sizeof(v46));
      }
      else
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rsp+160h+end+4]
          vmovss  dword ptr [rdi+0Ch], xmm0
          vmovss  xmm0, dword ptr [rsp+160h+end+8]
          vmovss  dword ptr [rdi+14h], xmm0
          vmovss  dword ptr [rdi+10h], xmm1
        }
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

void __fastcall CgVehicleSystem::UpdatePlayerVehicle(CgVehicleSystem *this, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  int v5; 
  centity_t *v6; 
  int number; 
  cg_t *LocalClientGlobals; 
  __int64 v9; 
  int entity; 
  __int16 viewlocked_entNum; 
  int playerVehicleEntity; 
  cg_t *v14; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v17; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 

  v5 = 0;
  v6 = NULL;
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
    v6 = CG_GetEntity((const LocalClientNum_t)this->m_localClientNum, entity);
    if ( CG_Vehicle_IsVehicleEntity(v6) )
      number = v6->nextState.number;
  }
LABEL_12:
  playerVehicleEntity = LocalClientGlobals->playerVehicleEntity;
  if ( playerVehicleEntity == number )
  {
LABEL_39:
    if ( number != 2047 )
    {
      if ( !v6 || (v6->flags & 1) == 0 )
        goto LABEL_52;
      if ( v6 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( ((v6->nextState.eType - 12) & 0xFFFD) != 0 )
      {
LABEL_52:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2819, ASSERT_TYPE_ASSERT, "(vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
          __debugbreak();
      }
      CgVehicleSystem::UpdateGroundTarget(this, &LocalClientGlobals->predictedPlayerState, v6);
    }
    goto LABEL_49;
  }
  if ( playerVehicleEntity != 2047 )
  {
    ((void (__fastcall *)(CgVehicleSystem *, __int64, const char *))this->ClearViewRoll)(this, v9, "es");
    __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
    CG_ClearAudioOverride(this->m_localClientNum, CTAUD_OVERRIDE_VEHICLE, *(float *)&_XMM2);
    v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    CG_VisionSetSetBlendOff(&v14->cvsData, VISIONSET_BLENDTYPE_VEHICLE);
  }
  if ( number != 2047 )
  {
    if ( !v6 || (v6->flags & 1) == 0 )
      goto LABEL_53;
    if ( v6 == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((v6->nextState.eType - 12) & 0xFFFD) != 0 )
    {
LABEL_53:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2724, ASSERT_TYPE_ASSERT, "(vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity ))", (const char *)&queryFormat, "vehicleEntity && CG_Vehicle_IsVehicleEntity( vehicleEntity )") )
        __debugbreak();
    }
    Client = CgVehicleSystem::GetClient(this, v6);
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( CL_IsRenderingSplitScreen() )
    {
      LOBYTE(v5) = ClientDef->soundTriggerOverrideReverb;
      v17 = v5 | 2;
      __asm { vxorps  xmm3, xmm3, xmm3; fadeTime }
      if ( !ClientDef->soundTriggerOverrideMix )
        v17 = v5;
      v19 = v17 | 4;
      if ( !ClientDef->soundTriggerOverrideFilter )
        v19 = v17;
      v20 = v19 | 8;
      if ( !ClientDef->soundTriggerOverrideOcclusion )
        v20 = v19;
      v21 = v20 | 0x10;
      if ( !ClientDef->soundTriggerOverrideAmbient )
        v21 = v20;
      v22 = v21 | 0x20;
      if ( !ClientDef->soundTriggerOverrideAmbientEvents )
        v22 = v21;
      v23 = v22 | 0x40;
      if ( !ClientDef->soundTriggerOverrideADSR )
        v23 = v22;
      CG_SetAudioOverride(this->m_localClientNum, ClientDef->soundTriggerOverrideZone, CTAUD_OVERRIDE_VEHICLE, *(float *)&_XMM3, v23);
    }
    CgVehicleSystem::ApplyVisionSettings(this, v6);
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
  CgVehicleSystem *v10; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t m_localClientNum; 
  float v13; 
  int time; 
  int v15; 
  unsigned int v16; 
  CgEntitySystem **v19; 
  connstate_t *p_connectionState; 
  int v24; 
  float *v25; 
  __int64 v26; 
  CgEntitySystem *v27; 
  const centity_t *v28; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  char v39; 
  char v40; 
  bool v55; 
  int v57; 
  __int64 v58; 
  const VehicleClient *v59; 
  __int64 entIndex; 
  __int64 v61; 
  CgEntitySystem *v62; 
  __int64 v63; 
  __int64 v64; 
  const VehicleDef *ClientDef; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  int v79[3]; 
  cg_t *v80; 
  connstate_t *v81; 
  CgEntitySystem **v82; 
  CgVehicleSystem *v83; 
  __int64 v84; 
  int Base[256]; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v84 = -2i64;
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
  }
  v10 = this;
  v83 = this;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  m_localClientNum = v10->m_localClientNum;
  v13 = cl_maxLocalClients;
  if ( (unsigned int)m_localClientNum >= LODWORD(cl_maxLocalClients) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10->m_localClientNum, cl_maxLocalClients) )
      __debugbreak();
    v13 = cl_maxLocalClients;
  }
  if ( v13 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( m_localClientNum == cls.m_localClientsActive.firstActiveIndex )
  {
    time = LocalClientGlobals->time;
    if ( v10->m_revPriorityUpdateTime <= time )
    {
      v10->m_revPriorityUpdateTime = time + 1000;
      memset_0(Base, 0, sizeof(Base));
      v15 = 0;
      v16 = 0;
      __asm { vxorps  xmm13, xmm13, xmm13 }
      if ( SLODWORD(cl_maxLocalClients) > 0 )
      {
        _R13 = 0i64;
        v19 = CgEntitySystem::ms_entitySystemArray;
        v82 = CgEntitySystem::ms_entitySystemArray;
        p_connectionState = &clientUIActives[0].connectionState;
        v81 = &clientUIActives[0].connectionState;
        __asm
        {
          vmovss  xmm12, cs:__real@3a83126f
          vmovss  xmm10, cs:__real@42c80000
          vmovss  xmm11, cs:__real@7f7fffff
        }
        do
        {
          if ( v16 >= 2 )
          {
            LODWORD(v77) = 2;
            LODWORD(v75) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v75, v77) )
              __debugbreak();
            LODWORD(v78) = 2;
            LODWORD(v76) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v76, v78) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_connectionState + 28) )
          {
            if ( v16 >= 2 )
            {
              LODWORD(v77) = 2;
              LODWORD(v75) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v75, v77) )
                __debugbreak();
            }
            if ( *p_connectionState == CA_ACTIVE )
            {
              v80 = CG_GetLocalClientGlobals((const LocalClientNum_t)v16);
              v24 = 0;
              v25 = &v10->m_vehicleClients[0].audioState.entOrigin.v[2];
              do
              {
                if ( _R13 >= 128 )
                  break;
                if ( (unsigned int)v24 >= 0x80 )
                {
                  LODWORD(v77) = 128;
                  LODWORD(v75) = v24;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v75, v77) )
                    __debugbreak();
                }
                if ( v25 == (float *)504 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3714, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
                  __debugbreak();
                v26 = *((int *)v25 - 106);
                if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
                {
                  LODWORD(v77) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v77) )
                    __debugbreak();
                }
                if ( v16 >= CgEntitySystem::ms_allocatedCount )
                {
                  LODWORD(v77) = CgEntitySystem::ms_allocatedCount;
                  LODWORD(v75) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v75, v77) )
                    __debugbreak();
                }
                if ( !*v19 )
                {
                  LODWORD(v77) = v16;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v77) )
                    __debugbreak();
                }
                v27 = *v19;
                if ( (unsigned int)v26 >= 0x800 )
                {
                  LODWORD(v77) = 2048;
                  LODWORD(v75) = v26;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v75, v77) )
                    __debugbreak();
                }
                v28 = &v27->m_entities[v26];
                if ( CG_Vehicle_IsVehicleEntity(v28) )
                {
                  *((_BYTE *)v25 + 74) = 0;
                  v25[19] = 0.0;
                  p_view = &v80->refdef.view;
                  if ( v80 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
                    __debugbreak();
                  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
                  v = (_DWORD *)p_view->org.org.v;
                  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                    __debugbreak();
                  v79[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
                  v79[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
                  v79[2] = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
                  __asm
                  {
                    vmovss  xmm0, [rsp+538h+var_4F8]
                    vsubss  xmm7, xmm0, dword ptr [rbp-8]
                    vmovss  xmm1, [rsp+538h+var_4F4]
                    vsubss  xmm8, xmm1, dword ptr [rbp-4]
                    vmovss  xmm0, [rsp+538h+var_4F0]
                    vsubss  xmm9, xmm0, dword ptr [rbp+0]
                  }
                  _RDI = DVARFLT_cg_revPriority_distanceMax;
                  if ( !DVARFLT_cg_revPriority_distanceMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_revPriority_distanceMax") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(_RDI);
                  __asm
                  {
                    vmovss  xmm6, dword ptr [rdi+28h]
                    vmulss  xmm1, xmm7, xmm7
                    vmulss  xmm0, xmm8, xmm8
                    vaddss  xmm2, xmm1, xmm0
                    vmulss  xmm1, xmm9, xmm9
                    vaddss  xmm2, xmm2, xmm1
                    vsqrtss xmm7, xmm2, xmm2
                    vcomiss xmm7, xmm6
                  }
                  if ( v39 | v40 )
                  {
                    __asm { vcomiss xmm6, xmm12 }
                    if ( v39 | v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3740, ASSERT_TYPE_ASSERT, "(maxDistance > 0.001f)", (const char *)&queryFormat, "maxDistance > EQUAL_EPSILON") )
                      __debugbreak();
                    __asm
                    {
                      vmovaps xmm1, xmm6; Y
                      vmovaps xmm0, xmm7; X
                    }
                    fminf(*(float *)&_XMM0, *(float *)&_XMM1);
                    __asm
                    {
                      vdivss  xmm1, xmm10, xmm6
                      vmulss  xmm0, xmm1, xmm0
                      vsubss  xmm6, xmm10, xmm0
                    }
                    if ( v28->nextState.otherEntityNum == CG_GetEntity((const LocalClientNum_t)v16, v80->clientNum)->nextState.number )
                    {
                      __asm { vmovaps xmm0, xmm11 }
                    }
                    else
                    {
                      if ( !CgVehicleSystem::GetClientDef((const VehicleClient *)(v25 - 126)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3752, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
                        __debugbreak();
                      __asm { vaddss  xmm0, xmm6, dword ptr [rdi+0DE0h]; X }
                    }
                    __asm { vmovaps xmm1, xmm13; Y }
                    *(float *)&_XMM0 = fmaxf(*(float *)&_XMM0, *(float *)&_XMM1);
                    __asm { vmovss  [rsp+r13*8+538h+Base], xmm0 }
                    Base[2 * _R13++ + 1] = v24;
                  }
                  memset(v79, 0, sizeof(v79));
                }
                ++v24;
                v25 += 147;
                v19 = v82;
              }
              while ( v24 < 128 );
              v15 = 0;
              p_connectionState = v81;
              v10 = v83;
            }
          }
          ++v16;
          p_connectionState += 110;
          v81 = p_connectionState;
          v82 = ++v19;
        }
        while ( (int)v16 < SLODWORD(cl_maxLocalClients) );
      }
      qsort(Base, 0x80ui64, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)VehicleCompareRevPriority);
      _R14 = 0i64;
      v57 = 128;
      do
      {
        __asm { vcomiss xmm13, [rsp+r14*8+538h+Base] }
        if ( !v55 )
          break;
        v58 = Base[2 * _R14 + 1];
        if ( (unsigned int)v58 >= 0x80 )
        {
          LODWORD(v77) = 128;
          LODWORD(v75) = Base[2 * _R14 + 1];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 502, ASSERT_TYPE_ASSERT, "(unsigned)( vehIndex ) < (unsigned)( (1 << 7) )", "vehIndex doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v75, v77) )
            __debugbreak();
        }
        v59 = &v10->m_vehicleClients[v58];
        if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3773, ASSERT_TYPE_ASSERT, "(vc)", (const char *)&queryFormat, "vc") )
          __debugbreak();
        entIndex = v59->entIndex;
        v61 = v10->m_localClientNum;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v77) = v10->m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v77) )
            __debugbreak();
        }
        if ( (unsigned int)v61 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v77) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v75) = v61;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v75, v77) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v61] )
        {
          LODWORD(v77) = v61;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v77) )
            __debugbreak();
        }
        v62 = CgEntitySystem::ms_entitySystemArray[v61];
        if ( (unsigned int)entIndex >= 0x800 )
        {
          LODWORD(v77) = 2048;
          LODWORD(v75) = entIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v75, v77) )
            __debugbreak();
        }
        v63 = (__int64)&v62->m_entities[entIndex];
        if ( !v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 548, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v63 + 648) & 1) == 0 )
          break;
        v64 = v63 + 400;
        if ( !v64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( ((*(_WORD *)(v64 + 8) - 12) & 0xFFFD) != 0 )
          break;
        ClientDef = CgVehicleSystem::GetClientDef(v59);
        if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 3782, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
          __debugbreak();
        if ( v15 < 5 && ClientDef->useRevAudioSettings && !v59->audioState.hasRevPriority )
        {
          ++v15;
          v59->audioState.hasRevPriority = 1;
        }
        if ( !v59->audioState.priority )
          v59->audioState.priority = v57;
        --v57;
        v55 = (unsigned __int64)++_R14 < 0x80;
        v10 = v83;
      }
      while ( _R14 < 128 );
    }
  }
  _R11 = &v86;
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

void __fastcall CgVehicleSystem::UpdateWheelSpinAngles(CgVehicleSystem *this, DObj *obj, centity_t *cent, double _XMM3_8)
{
  LocalClientNum_t m_localClientNum; 
  const XModel *Model; 
  int v27; 
  unsigned int physicsId; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsGround *v32; 
  unsigned int m_wheelCount; 
  __int16 *wheelSpinAngle; 
  __int64 number; 
  char v49; 
  char v50; 
  __int64 WheelCount; 
  const dvar_t *v69; 
  signed int v71; 
  unsigned int WheelHitBodyId; 
  __int16 *v82; 
  unsigned __int8 v88; 
  char v129[4]; 
  int v130; 
  cg_t *LocalClientGlobals; 
  int v132; 
  int v133; 
  vec3_t linVel; 
  tmat33_t<vec3_t> axis; 

  _RBP = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1224, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1225, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( _RBP->pose.vehicle.boneUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1226, ASSERT_TYPE_ASSERT, "(cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS)", (const char *)&queryFormat, "cent->pose.vehicle.boneUsage == CENT_VEHICLE_INFO_BONE_USAGE_WHEELS") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1229, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->frametime > 0 )
  {
    m_localClientNum = this->m_localClientNum;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  [rsp+188h+var_120], xmm0
    }
    *(_QWORD *)linVel.v = CgVehicleSystem::GetVehicleSystem(m_localClientNum);
    if ( !*(_QWORD *)linVel.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1239, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    _R13 = (*(__int64 (__fastcall **)(_QWORD, entityState_t *))(**(_QWORD **)linVel.v + 32i64))(*(_QWORD *)linVel.v, &_RBP->nextState);
    if ( !_R13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1241, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( !*(_DWORD *)(_R13 + 764) )
    {
      __asm
      {
        vmovaps [rsp+188h+var_48], xmm6
        vmovaps [rsp+188h+var_C8], xmm14
      }
      Model = DObjGetModel(obj, 0);
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1247, ASSERT_TYPE_ASSERT, "(objModel)", (const char *)&queryFormat, "objModel") )
        __debugbreak();
      _R14 = XModelGetBasePose(Model);
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1249, ASSERT_TYPE_ASSERT, "(bonePoseMatrices)", (const char *)&queryFormat, "bonePoseMatrices") )
        __debugbreak();
      v133 = XModelNumBones(Model);
      if ( v133 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1252, ASSERT_TYPE_ASSERT, "(modelBoneCount >= 0)", (const char *)&queryFormat, "modelBoneCount >= 0") )
        __debugbreak();
      _R15 = CgVehicleSystem::GetClient(this, _RBP);
      if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1255, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
        __debugbreak();
      _EDI = 0;
      _RBP->pose.vehicle.wheelSteeringRatioMaxIndex = 1;
      _RBP->pose.vehicle.wheelSteeringRatioDecay = 0;
      if ( *(_DWORD *)(_R13 + 260) == 4 )
      {
        __asm { vmovss  xmm0, cs:__real@3f59999a; unit }
        _RBP->pose.vehicle.wheelSteeringRatioMaxIndex = 3;
        _RBP->pose.vehicle.wheelSteeringRatioDecay = CompressUnit(*(float *)&_XMM0);
      }
      v27 = *(_DWORD *)(_R13 + 712);
      if ( (v27 < 0 || (unsigned int)v27 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum VehicleWheelSpinBoneType>(enum VehicleWheelSpinBoneType)", "unsigned", (unsigned __int8)v27, "signed", v27) )
        __debugbreak();
      __asm { vmovss  xmm6, cs:__real@7f7fffff }
      _RBP->pose.vehicle.spinWheelBones = v27;
      physicsId = _R15->physicsId;
      __asm
      {
        vmovss  xmm14, dword ptr [r13+2CCh]
        vmovaps [rsp+188h+var_58], xmm7
      }
      if ( BGVehicles::PhysicsIsValid(physicsId) && (ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, _R15->physicsId), (v32 = (BgVehiclePhysicsGround *)ObjectById) != NULL) && ObjectById->SupportsFeature(ObjectById, VPFEAT_WHEEL_SPINANGLES) )
      {
        *(double *)&_XMM0 = BgVehiclePhysics::GetTopSpeedForward(v32);
        __asm { vmulss  xmm6, xmm0, cs:__real@3e4ccccd }
        if ( BgVehiclePhysics::IsDynamic(v32) && !LocalClientGlobals->inKillCam )
        {
          if ( !v32->SupportsFeature(v32, VPFEAT_GROUND_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 1283, ASSERT_TYPE_ASSERT, "(vehObj->SupportsFeature( VPFEAT_GROUND_VEHICLE ))", (const char *)&queryFormat, "vehObj->SupportsFeature( VPFEAT_GROUND_VEHICLE )") )
            __debugbreak();
          m_wheelCount = v32->m_wheelCount;
          if ( m_wheelCount )
          {
            __asm
            {
              vmovss  xmm6, cs:__real@43360b61
              vmovss  xmm7, cs:__real@3f000000
            }
            wheelSpinAngle = _RBP->pose.vehicle.wheelSpinAngle;
            do
            {
              _RAX = BgVehiclePhysicsGround::GetWheel(v32, _EDI);
              __asm { vmovss  xmm0, dword ptr [rax+78h]; angle }
              *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
              __asm
              {
                vmovss  dword ptr [r15], xmm0
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, rcx
                vmulss  xmm0, xmm1, xmm14
                vaddss  xmm0, xmm0, dword ptr [rbx+78h]; angle
              }
              *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
              __asm
              {
                vmulss  xmm1, xmm0, xmm6
                vaddss  xmm2, xmm1, xmm7
                vxorps  xmm3, xmm3, xmm3
                vroundss xmm3, xmm3, xmm2, 1
                vcvttss2si eax, xmm3
              }
              ++_EDI;
              *wheelSpinAngle++ = _EAX;
              _R15 = (VehicleClient *)((char *)_R15 + 4);
            }
            while ( _EDI < m_wheelCount );
          }
LABEL_81:
          __asm
          {
            vmovaps xmm7, [rsp+188h+var_58]
            vmovaps xmm6, [rsp+188h+var_48]
            vmovaps xmm14, [rsp+188h+var_C8]
          }
          return;
        }
      }
      else
      {
        v32 = NULL;
      }
      __asm
      {
        vmovaps [rsp+188h+var_78], xmm9
        vmovaps [rsp+188h+var_88], xmm10
        vmovaps [rsp+188h+var_D8], xmm15
      }
      *(double *)&_XMM0 = CgVehicleSystem::ComputeForwardSpeed(this, _R15, _RBP);
      number = (unsigned int)_RBP->nextState.number;
      __asm
      {
        vxorps  xmm7, xmm7, xmm7
        vmovss  [rsp+188h+var_134], xmm7
        vmovss  [rsp+188h+var_128], xmm7
      }
      v129[0] = 0;
      __asm { vmovaps xmm10, xmm0 }
      (*(void (__fastcall **)(_QWORD, __int64, int *, char *, int *))(**(_QWORD **)linVel.v + 336i64))(*(_QWORD *)linVel.v, number, &v130, v129, &v132);
      __asm
      {
        vmulss  xmm2, xmm10, [rsp+188h+var_134]
        vcomiss xmm2, xmm7
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      }
      if ( v49 )
      {
        __asm
        {
          vandps  xmm0, xmm10, xmm3
          vcmpltss xmm1, xmm6, xmm0
          vblendvps xmm10, xmm10, xmm7, xmm1
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r15+40h]
        vmulss  xmm1, xmm0, cs:__real@3c8efa35
        vmulss  xmm9, xmm1, cs:yawSpeedFac
        vmovss  xmm6, cs:__real@3a83126f
        vandps  xmm2, xmm9, xmm3
        vcomiss xmm2, xmm6
      }
      if ( v49 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+4Ch]
          vsubss  xmm2, xmm0, dword ptr [rbp+7Ch]
          vandps  xmm1, xmm2, xmm3
          vcomiss xmm1, xmm6
        }
        if ( !(v49 | v50) )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@447a0000
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, dword ptr [rbx+65E4h]
            vdivss  xmm1, xmm0, xmm1
            vmulss  xmm9, xmm1, xmm2
          }
        }
      }
      QuatToAxis(&_R14->quat, &axis);
      WheelCount = BGVehicles::GetWheelCount((const VehicleDef *)_R13);
      if ( *(_DWORD *)(_R13 + 248) )
        __asm { vmovss  xmm0, dword ptr [r13+148h] }
      else
        __asm { vmovss  xmm0, dword ptr [r13+2E4h] }
      v69 = DVARBOOL_bg_vehSurfaceVelocity;
      __asm { vmaxss  xmm15, xmm0, xmm6 }
      if ( !DVARBOOL_bg_vehSurfaceVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehSurfaceVelocity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v69);
      if ( v69->current.enabled )
      {
        v71 = 0;
        __asm
        {
          vmovss  dword ptr [rsp+188h+linVel], xmm7
          vmovss  dword ptr [rsp+188h+linVel+4], xmm7
          vmovss  dword ptr [rsp+188h+linVel+8], xmm7
        }
        if ( v32 )
        {
          while ( v71 < (int)WheelCount )
          {
            if ( BgVehiclePhysicsGround::GetWheelHitBodyId(v32, v71) != 0xFFFFFF )
            {
              WheelHitBodyId = BgVehiclePhysicsGround::GetWheelHitBodyId(v32, v71);
              Physics_GetRigidBodyLinVel((const Physics_WorldId)v32->m_worldId, WheelHitBodyId, &linVel);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+188h+linVel+4]
                vmovss  xmm1, dword ptr [rsp+188h+linVel]
                vmulss  xmm2, xmm1, dword ptr [rsi+174h]
                vmulss  xmm3, xmm0, dword ptr [rsi+178h]
                vmovss  xmm0, dword ptr [rsp+188h+linVel+8]
                vmulss  xmm1, xmm0, dword ptr [rsi+17Ch]
                vaddss  xmm4, xmm3, xmm2
                vaddss  xmm2, xmm4, xmm1
                vsubss  xmm10, xmm10, xmm2
              }
              break;
            }
            ++v71;
          }
        }
      }
      if ( WheelCount > 0 )
      {
        __asm { vmovaps [rsp+188h+var_68], xmm8 }
        v82 = _RBP->pose.vehicle.wheelSpinAngle;
        __asm
        {
          vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovaps [rsp+188h+var_98], xmm11
        }
        _RBX = 0i64;
        __asm
        {
          vmovss  xmm11, cs:__real@43360b61
          vmovaps [rsp+188h+var_A8], xmm12
          vmovss  xmm12, cs:__real@3f000000
          vmovaps [rsp+188h+var_B8], xmm13
          vmovss  xmm13, cs:__real@3d6aaefa
        }
        do
        {
          v88 = _RBP->pose.vehicle.wheelBoneIndex[_RBX];
          if ( v88 < 0xFEu && v88 < v133 && _EDI < 12 )
          {
            _RAX = 32i64 * v88;
            __asm
            {
              vmovss  xmm0, dword ptr [rax+r14+10h]
              vsubss  xmm2, xmm0, dword ptr [r14+10h]
              vmovss  xmm0, dword ptr [rax+r14+18h]
              vmovss  xmm1, dword ptr [rax+r14+14h]
              vsubss  xmm4, xmm0, dword ptr [r14+18h]
              vsubss  xmm3, xmm1, dword ptr [r14+14h]
            }
            if ( *(_BYTE *)(_R13 + 8) == 9 )
            {
              __asm
              {
                vmulss  xmm1, xmm3, dword ptr [rsp+188h+axis+10h]
                vmulss  xmm0, xmm2, dword ptr [rsp+188h+axis+0Ch]
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm4, dword ptr [rsp+188h+axis+14h]
                vaddss  xmm3, xmm2, xmm1
                vcmpless xmm0, xmm7, xmm3
                vxorps  xmm4, xmm9, xmm8
                vblendvps xmm0, xmm4, xmm9, xmm0
                vxorps  xmm1, xmm0, xmm8
              }
            }
            else
            {
              __asm { vmovaps xmm1, xmm7 }
            }
            __asm
            {
              vaddss  xmm0, xmm1, xmm10
              vmulss  xmm1, xmm13, [rsp+188h+var_120]
              vdivss  xmm2, xmm0, xmm15
              vmulss  xmm2, xmm2, xmm1
              vaddss  xmm6, xmm2, dword ptr [r15+rbx*4]
              vmovaps xmm0, xmm6; angle
            }
            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
            __asm
            {
              vmovd   xmm1, edi
              vcvtdq2ps xmm1, xmm1
              vmulss  xmm2, xmm1, xmm14
              vmovss  dword ptr [r15+rbx*4], xmm0
              vaddss  xmm0, xmm2, xmm6; angle
            }
            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
            __asm
            {
              vmulss  xmm1, xmm0, xmm11
              vaddss  xmm2, xmm1, xmm12
              vxorps  xmm3, xmm3, xmm3
              vroundss xmm3, xmm3, xmm2, 1
              vcvttss2si eax, xmm3
            }
            *v82 = _EAX;
          }
          ++_EDI;
          ++_RBX;
          ++v82;
        }
        while ( _RBX < WheelCount );
        __asm
        {
          vmovaps xmm13, [rsp+188h+var_B8]
          vmovaps xmm12, [rsp+188h+var_A8]
          vmovaps xmm11, [rsp+188h+var_98]
          vmovaps xmm8, [rsp+188h+var_68]
        }
      }
      __asm
      {
        vmovaps xmm9, [rsp+188h+var_78]
        vmovaps xmm10, [rsp+188h+var_88]
        vmovaps xmm15, [rsp+188h+var_D8]
      }
      goto LABEL_81;
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
  _RSI = cent;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2310, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rsi+0B0h]
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
  centity_t *v16; 
  const XModel *Model; 
  __int64 WheelCount; 
  cg_t *LocalClientGlobals; 
  int number; 
  int entity; 
  VehicleClient *Client; 
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysicsGround *v29; 
  unsigned int m_wheelCount; 
  __int64 v31; 
  $91D498411B482F48F7FBE20BC1DBF6BB *v32; 
  scr_string_t WheelBoneTag; 
  bool v42; 
  unsigned int m_surfFlags; 
  unsigned int v49; 
  __int64 v50; 
  $91D498411B482F48F7FBE20BC1DBF6BB *v51; 
  unsigned int *p_m_contactBodyId; 
  scr_string_t v56; 
  const dvar_t *v71; 
  int v82; 
  unsigned int bodyId; 
  bool v94; 
  bool v95; 
  hkMemoryAllocator *v105; 
  hkMemoryAllocator *v106; 
  __int64 v118; 
  bool siblings[8]; 
  int modelIndex[2]; 
  unsigned int *v121; 
  DObj *obja; 
  Physics_RaycastExtendedData extendedData; 
  const DObjAnimMat *BasePose; 
  CgVehicleSystem *v125; 
  __int64 v126; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v128; 
  vec3_t end; 
  vec3_t center; 
  vec3_t out; 
  PhysicsQuery_RaycastHit hit; 
  tmat43_t<vec3_t> axis; 
  char v134; 
  void *retaddr; 

  _RAX = &retaddr;
  v128 = -2i64;
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
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  v16 = cent;
  obja = obj;
  _RDI = vehicleDef;
  v125 = this;
  __asm
  {
    vmovss  xmm13, dword ptr [r9+0B0h]
    vxorps  xmm12, xmm12, xmm12
    vcomiss xmm13, xmm12
  }
  if ( (unsigned __int64)&v118 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2114, ASSERT_TYPE_ASSERT, "(suspTravel > 0.0f)", (const char *)&queryFormat, "suspTravel > 0.0f") )
    __debugbreak();
  AnglesToAxis(&v16->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&v16->pose, &axis.m[3]);
  Model = DObjGetModel(obj, 0);
  BasePose = XModelGetBasePose(Model);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.cpp", 2121, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  WheelCount = BGVehicles::GetWheelCount(_RDI);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  number = v16->nextState.number;
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  Client = CgVehicleSystem::GetClient(this, v16);
  if ( !BGVehicles::PhysicsIsValid(Client->physicsId) || (ObjectById = BgVehiclePhysicsManager::GetObjectById(&this->m_vehiclePhysicsManager, Client->physicsId), (v29 = (BgVehiclePhysicsGround *)ObjectById) == NULL) || !ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) )
    v29 = NULL;
  if ( entity == number && v29 && BgVehiclePhysics::IsDynamic(v29) && v29->m_playerControlled )
  {
    m_wheelCount = v29->m_wheelCount;
    v31 = 0i64;
    if ( m_wheelCount )
    {
      v32 = &v16->pose.vehicle.24;
      __asm
      {
        vmovss  xmm8, cs:__real@37800080
        vmovss  xmm6, cs:__real@3f4ccccd
        vmovss  xmm7, cs:__real@3f000000
      }
      do
      {
        WheelBoneTag = BGVehicles::GetWheelBoneTag(_RDI, v31);
        if ( WheelBoneTag && DObjGetBoneIndexInternal_60(obja, WheelBoneTag, &v16->pose.vehicle.wheelBoneIndex[v31], modelIndex) )
        {
          _R14 = BgVehiclePhysicsGround::GetWheel(v29, v31);
          __asm
          {
            vmovss  xmm1, dword ptr [rax+60h]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vmulss  xmm3, xmm0, xmm8
          }
          v42 = 0;
          if ( _RDI->vehiclePhysicsDef.physicsEnabled && (v42 = _RDI->vehiclePhysicsDef.physics_animProfile < (unsigned int)VEH_ANIMPROFILE_MKILO, _RDI->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_MKILO) && (v42 = (_DWORD)v31 == 0, (unsigned int)v31 <= 1) )
            __asm { vmovaps xmm2, xmm6 }
          else
            __asm { vmovss  xmm2, dword ptr [rdi+300h] }
          __asm { vcomiss xmm3, xmm2 }
          if ( !v42 )
          {
            __asm
            {
              vaddss  xmm0, xmm3, xmm1
              vmulss  xmm1, xmm0, xmm7
              vmaxss  xmm1, xmm1, xmm2
            }
          }
          __asm { vmovaps xmm0, xmm1; unit }
          v32->wheelFraction[0] = CompressUnit(*(float *)&_XMM0);
          if ( _R14->m_contactBodyId == 0xFFFFFF )
            m_surfFlags = 0;
          else
            m_surfFlags = _R14->m_surfFlags;
          v16->pose.vehicle.wheelSurfaceType = (m_surfFlags >> 19) & 0x3F;
        }
        v31 = (unsigned int)(v31 + 1);
        v32 = ($91D498411B482F48F7FBE20BC1DBF6BB *)((char *)v32 + 2);
      }
      while ( (unsigned int)v31 < m_wheelCount );
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vmovaps xmm10, xmm11
    }
    v49 = 0;
    v126 = WheelCount;
    if ( (int)WheelCount > 0 )
    {
      v50 = 0i64;
      v51 = &v16->pose.vehicle.24;
      p_m_contactBodyId = &v29->m_wheels[0].m_contactBodyId;
      v121 = &v29->m_wheels[0].m_contactBodyId;
      __asm
      {
        vmovss  xmm15, cs:__real@37800080
        vmovss  xmm14, cs:__real@3f4ccccd
        vmovss  xmm9, cs:__real@3f000000
      }
      do
      {
        v56 = BGVehicles::GetWheelBoneTag(_RDI, v49);
        if ( v56 && DObjGetBoneIndexInternal_60(obja, v56, &v16->pose.vehicle.wheelBoneIndex[v49], modelIndex) )
        {
          MatrixTransformVector43(&BasePose[v16->pose.vehicle.wheelBoneIndex[v50]].trans, &axis, &out);
          __asm
          {
            vmulss  xmm1, xmm13, xmm9
            vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm2, xmm0, dword ptr [rbp+160h+out]
            vmovss  dword ptr [rbp+160h+center], xmm2
            vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm5, xmm0, dword ptr [rbp+160h+out+4]
            vmovss  dword ptr [rbp+160h+center+4], xmm5
            vmulss  xmm0, xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm4, xmm0, dword ptr [rbp+160h+out+8]
            vmovss  dword ptr [rbp+160h+center+8], xmm4
            vxorps  xmm3, xmm13, cs:__xmm@80000000800000008000000080000000
            vmulss  xmm0, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm1, xmm0, xmm2
            vmovss  dword ptr [rbp+160h+end], xmm1
            vmulss  xmm2, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm0, xmm2, xmm5
            vmovss  dword ptr [rbp+160h+end+4], xmm0
            vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
            vaddss  xmm2, xmm1, xmm4
            vmovss  dword ptr [rbp+160h+end+8], xmm2
          }
          v71 = DCONST_DVARINT_bg_vehicleDebug;
          if ( !DCONST_DVARINT_bg_vehicleDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicleDebug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v71);
          if ( v71->current.integer == 2 && vehicleDebugCl )
          {
            __asm
            {
              vmovss  xmm0, cs:DEBUG_NUDGE_DIST
              vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
              vmulss  xmm2, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
              vaddss  xmm2, xmm2, dword ptr [rbp+160h+end]
              vmovss  dword ptr [rbp+160h+end], xmm2
              vmulss  xmm3, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
              vaddss  xmm2, xmm3, dword ptr [rbp+160h+end+4]
              vmovss  dword ptr [rbp+160h+end+4], xmm2
              vmulss  xmm3, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
              vaddss  xmm2, xmm3, dword ptr [rbp+160h+end+8]
              vmovss  dword ptr [rbp+160h+end+8], xmm2
              vmovss  xmm1, cs:DEBUG_SPHERE_RADIUS_0; radius
            }
            CG_DebugSphere(&center, *(float *)&_XMM1, &colorBlue, 0, DEBUG_DRAW_TIME_0);
            __asm { vmovss  xmm1, cs:DEBUG_SPHERE_RADIUS_0; radius }
            CG_DebugSphere(&end, *(float *)&_XMM1, &colorGreen, 0, DEBUG_DRAW_TIME_0);
            CG_DebugLine(&center, &end, &colorBlue, 0, DEBUG_DRAW_TIME_0);
          }
          v82 = 3 * v125->m_localClientNum + 2;
          extendedData.contents = -1;
          extendedData.ignoreBodies = NULL;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          __asm { vmovss  [rsp+260h+extendedData.collisionBuffer], xmm12 }
          extendedData.phaseSelection = All;
          extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
          *(_WORD *)&extendedData.collectInsideHits = 256;
          HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
          HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
          PhysicsQuery_AddEntityChainToIgnoreList(v16->nextState.number, &ignoreBodies, 1, 0, 0, 1, 0);
          extendedData.contents = 8389393;
          extendedData.ignoreBodies = &ignoreBodies;
          extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          extendedData.phaseSelection = All;
          CG_EntityWorkers_AcquireReadLock_Physics(NONE_LEGACY);
          PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v82, &center, &end, &extendedData, &hit);
          CG_EntityWorkers_ReleaseReadLock_Physics(NONE_LEGACY);
          _EBX = 0;
          __asm { vmovd   xmm1, ebx }
          _ECX = hit.isValid;
          __asm
          {
            vmovd   xmm0, ecx
            vpcmpeqd xmm2, xmm0, xmm1
            vmovss  xmm1, [rbp+160h+hit.fraction]
            vblendvps xmm0, xmm1, xmm11, xmm2
            vmovss  [rsp+260h+modelIndex], xmm0
          }
          if ( v29 )
          {
            bodyId = 0xFFFFFF;
            if ( hit.isValid )
              bodyId = hit.bodyId;
            if ( v49 >= v29->m_wheelCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.inl", 267, ASSERT_TYPE_ASSERT, "(wheelNdx < m_wheelCount)", (const char *)&queryFormat, "wheelNdx < m_wheelCount") )
              __debugbreak();
            *v121 = bodyId;
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm15
          }
          v94 = 0;
          v95 = _RDI->vehiclePhysicsDef.physicsEnabled == 0;
          if ( _RDI->vehiclePhysicsDef.physicsEnabled && (v94 = _RDI->vehiclePhysicsDef.physics_animProfile < (unsigned int)VEH_ANIMPROFILE_MKILO, v95 = _RDI->vehiclePhysicsDef.physics_animProfile <= (unsigned int)VEH_ANIMPROFILE_MKILO, _RDI->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_MKILO) && (v94 = v49 == 0, v95 = v49 <= 1) )
            __asm { vmovaps xmm2, xmm14 }
          else
            __asm { vmovss  xmm2, dword ptr [rdi+300h] }
          __asm
          {
            vmovss  xmm7, [rsp+260h+modelIndex]
            vcomiss xmm1, xmm2
          }
          if ( v94 )
          {
            __asm { vmovaps xmm6, xmm7 }
          }
          else
          {
            __asm
            {
              vaddss  xmm0, xmm1, xmm7
              vmulss  xmm1, xmm0, xmm9
              vmaxss  xmm6, xmm1, xmm2
            }
          }
          __asm { vcomiss xmm6, xmm12 }
          if ( v94 )
            goto LABEL_72;
          __asm { vcomiss xmm6, xmm11 }
          if ( !v95 )
          {
LABEL_72:
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  qword ptr [rsp+260h+siblings], xmm0
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 867, ASSERT_TYPE_ASSERT, "( ( unit >= 0.0f && unit <= 1.0f ) )", "( unit ) = %g", *(double *)siblings) )
              __debugbreak();
          }
          __asm
          {
            vmulss  xmm0, xmm6, cs:__real@477fff00
            vaddss  xmm1, xmm0, xmm9
            vcvttss2si eax, xmm1
          }
          v51->wheelFraction[0] = _EAX;
          if ( hit.isValid )
            __asm { vcomiss xmm7, xmm10 }
          v105 = hkMemHeapAllocator();
          ignoreBodies.m_ignoreBodies.m_size = 0;
          if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v105, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
          ignoreBodies.m_ignoreBodies.m_data = NULL;
          ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
          v106 = hkMemHeapAllocator();
          ignoreBodies.m_ignoreEntities.m_size = 0;
          if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
            hkMemoryAllocator::bufFree2(v106, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
          p_m_contactBodyId = v121;
        }
        ++v49;
        ++v50;
        v51 = ($91D498411B482F48F7FBE20BC1DBF6BB *)((char *)v51 + 2);
        p_m_contactBodyId += 38;
        v121 = p_m_contactBodyId;
      }
      while ( v50 < v126 );
    }
  }
  _R11 = &v134;
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
    vmovaps xmm15, xmmword ptr [r11-0A8h]
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
  char v2; 
  char v3; 
  __int64 result; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx]
    vmovss  xmm2, dword ptr [rdx]
    vsubss  xmm0, xmm1, xmm2
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v2 )
    return 0i64;
  __asm { vcomiss xmm2, xmm1 }
  result = 0xFFFFFFFFi64;
  if ( !(v2 | v3) )
    return 1i64;
  return result;
}

