/*
==============
BGVehicles::GetPlayerIndex
==============
*/

int __fastcall BGVehicles::GetPlayerIndex(const entityState_t *es)
{
  return ?GetPlayerIndex@BGVehicles@@SAHPEBUentityState_t@@@Z(es);
}

/*
==============
BGVehicles::GetWorldBoneMatrix
==============
*/

int __fastcall BGVehicles::GetWorldBoneMatrix(BGVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex, tmat43_t<vec3_t> *result)
{
  return ?GetWorldBoneMatrix@BGVehicles@@UEBAHW4LocalClientNum_t@@HHAEAT?$tmat43_t@Tvec3_t@@@@@Z(this, localClientNum, entityIndex, boneIndex, result);
}

/*
==============
BG_InitPlayerstateVehicle
==============
*/

void __fastcall BG_InitPlayerstateVehicle(playerState_s *ps)
{
  ?BG_InitPlayerstateVehicle@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BGVehicles::IsRemoteDrivingVehicle
==============
*/

int __fastcall BGVehicles::IsRemoteDrivingVehicle(const playerState_s *ps)
{
  return ?IsRemoteDrivingVehicle@BGVehicles@@SAHPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_VehicleStepSlideMove
==============
*/

void __fastcall BG_VehicleStepSlideMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float stepsize, float dt, bool useCapsuleForBrushCollision)
{
  ?BG_VehicleStepSlideMove@@YAXPEAVpmove_t@@PEAUVehicleState@@PEBUGroundTrace@@HMM_N@Z(pm, vehicleState, groundTrace, gravity, stepsize, dt, useCapsuleForBrushCollision);
}

/*
==============
BGVehicles::GetFirstTreadBoneTag
==============
*/

scr_string_t __fastcall BGVehicles::GetFirstTreadBoneTag(const VehicleDef *vehDef, int sideIndex)
{
  return ?GetFirstTreadBoneTag@BGVehicles@@SA?AW4scr_string_t@@PEBUVehicleDef@@H@Z(vehDef, sideIndex);
}

/*
==============
BG_VehicleMove
==============
*/

void __fastcall BG_VehicleMove(pmove_t *pm, const pml_t *pml)
{
  ?BG_VehicleMove@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Vehicle_GetStickerCamoMaterialIndices
==============
*/

void __fastcall BG_Vehicle_GetStickerCamoMaterialIndices(const unsigned int *outStickerAndCamo, VehicleStickerCamoInfo *outStickerCamoInfo)
{
  ?BG_Vehicle_GetStickerCamoMaterialIndices@@YAXAEBIAEAUVehicleStickerCamoInfo@@@Z(outStickerAndCamo, outStickerCamoInfo);
}

/*
==============
BG_Vehicle_ClampCameraUserAnglesToVehicleSpace
==============
*/

void __fastcall BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(const vec3_t *vehicleAngles, const vec3_t *userAngles, const VehicleDef *vehicleDef, vec3_t *viewAnglesOut)
{
  ?BG_Vehicle_ClampCameraUserAnglesToVehicleSpace@@YAXAEBTvec3_t@@0PEBUVehicleDef@@AEAT1@@Z(vehicleAngles, userAngles, vehicleDef, viewAnglesOut);
}

/*
==============
BG_IsValidCollMapBrushIndex
==============
*/

bool __fastcall BG_IsValidCollMapBrushIndex(int brushIdx)
{
  return ?BG_IsValidCollMapBrushIndex@@YA_NH@Z(brushIdx);
}

/*
==============
BG_GetVehicleDef
==============
*/

const VehicleDef *__fastcall BG_GetVehicleDef(const pmove_t *pm)
{
  return ?BG_GetVehicleDef@@YAPEBUVehicleDef@@PEBVpmove_t@@@Z(pm);
}

/*
==============
BGVehicles::IsRemoteDrivingVehicleAndLinked
==============
*/

bool __fastcall BGVehicles::IsRemoteDrivingVehicleAndLinked(const playerState_s *ps, const int vehicleEntNum)
{
  return ?IsRemoteDrivingVehicleAndLinked@BGVehicles@@SA_NPEBUplayerState_s@@H@Z(ps, vehicleEntNum);
}

/*
==============
BGVehicles::GetWheelCount
==============
*/

int __fastcall BGVehicles::GetWheelCount(const VehicleDef *vehDef)
{
  return ?GetWheelCount@BGVehicles@@SAHPEBUVehicleDef@@@Z(vehDef);
}

/*
==============
BG_Vehicle_HasMissileBlending
==============
*/

bool __fastcall BG_Vehicle_HasMissileBlending(const entityState_t *missileEs)
{
  return ?BG_Vehicle_HasMissileBlending@@YA_NPEBUentityState_t@@@Z(missileEs);
}

/*
==============
BG_VehicleSlideMove
==============
*/

int __fastcall BG_VehicleSlideMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float dt, bool useCapsuleForBrushCollision, VehicleCollisionInfo *outCollisionInfo)
{
  return ?BG_VehicleSlideMove@@YAHPEAVpmove_t@@PEAUVehicleState@@PEBUGroundTrace@@HM_NPEAUVehicleCollisionInfo@@@Z(pm, vehicleState, groundTrace, gravity, dt, useCapsuleForBrushCollision, outCollisionInfo);
}

/*
==============
BG_VehicleSteerMove
==============
*/

void __fastcall BG_VehicleSteerMove(pmove_t *pm, const pml_t *pml)
{
  ?BG_VehicleSteerMove@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BGVehicles::GetPlayerBoneTags
==============
*/

const scr_string_t *__fastcall BGVehicles::GetPlayerBoneTags(int *outCountTags)
{
  return ?GetPlayerBoneTags@BGVehicles@@SAPEBW4scr_string_t@@PEAH@Z(outCountTags);
}

/*
==============
BG_Vehicle_UnpackPhysicsParams
==============
*/

void __fastcall BG_Vehicle_UnpackPhysicsParams(const LerpEntityStateVehicle *lerp, float *outThrottle, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  ?BG_Vehicle_UnpackPhysicsParams@@YAXPEBULerpEntityStateVehicle@@AEAMAEA_N1@Z(lerp, outThrottle, outIsBraking, outWheelAveSpinSpeed);
}

/*
==============
BG_Vehicle_Trace
==============
*/

void __fastcall BG_Vehicle_Trace(const pmove_t *pm, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask, trace_t *results)
{
  ?BG_Vehicle_Trace@@YAXPEBVpmove_t@@AEBTvec3_t@@1PEBUBounds@@HHPEAUtrace_t@@@Z(pm, start, end, bounds, skipEntity, contentMask, results);
}

/*
==============
BG_VehicleGunAngles
==============
*/

int __fastcall BG_VehicleGunAngles(const LocalClientNum_t localClientNum, pmove_t *pm, const pml_t *pml, const vec3_t *groundTarget)
{
  return ?BG_VehicleGunAngles@@YAHW4LocalClientNum_t@@PEAVpmove_t@@PEBUpml_t@@AEBTvec3_t@@@Z(localClientNum, pm, pml, groundTarget);
}

/*
==============
BG_GetVehicleTargetEntity
==============
*/

int __fastcall BG_GetVehicleTargetEntity(const pmove_t *pm)
{
  return ?BG_GetVehicleTargetEntity@@YAHPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_VehicleGroundTrace
==============
*/

void __fastcall BG_VehicleGroundTrace(const pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, float dt)
{
  ?BG_VehicleGroundTrace@@YAXPEBVpmove_t@@PEAUVehicleState@@PEAUGroundTrace@@M@Z(pm, vehicleState, groundTrace, dt);
}

/*
==============
BGVehicles::IsOnSameTeam
==============
*/

bool __fastcall BGVehicles::IsOnSameTeam(BGVehicles *this, const entityState_t *vehicle, const entityState_t *compareEnt)
{
  return ?IsOnSameTeam@BGVehicles@@QEBA_NPEBUentityState_t@@0@Z(this, vehicle, compareEnt);
}

/*
==============
BG_Vehicle_PackPhysicsParams
==============
*/

void __fastcall BG_Vehicle_PackPhysicsParams(LerpEntityStateVehicle *lerp, float throttle, bool isBraking, float wheelAveSpinSpeed)
{
  ?BG_Vehicle_PackPhysicsParams@@YAXPEAULerpEntityStateVehicle@@M_NM@Z(lerp, throttle, isBraking, wheelAveSpinSpeed);
}

/*
==============
BG_PlayerStateToVehicleState
==============
*/

void __fastcall BG_PlayerStateToVehicleState(const playerState_s *ps, entityState_t *s, int snap, BgHandler *handler, const BgWeaponMap *weaponMap, BGVehicles *vehicleSystem)
{
  ?BG_PlayerStateToVehicleState@@YAXPEBUplayerState_s@@PEAUentityState_t@@HPEAVBgHandler@@PEBVBgWeaponMap@@PEAVBGVehicles@@@Z(ps, s, snap, handler, weaponMap, vehicleSystem);
}

/*
==============
BGVehicles::SetIgnoreDObjTransfer
==============
*/

void __fastcall BGVehicles::SetIgnoreDObjTransfer(BGVehicles *this, DObj *obj, bool hasPlayerState)
{
  ?SetIgnoreDObjTransfer@BGVehicles@@UEAAXPEAUDObj@@_N@Z(this, obj, hasPlayerState);
}

/*
==============
BGVehicles::GetWheelBoneTag
==============
*/

scr_string_t __fastcall BGVehicles::GetWheelBoneTag(const VehicleDef *vehDef, int wheelIndex)
{
  return ?GetWheelBoneTag@BGVehicles@@SA?AW4scr_string_t@@PEBUVehicleDef@@H@Z(vehDef, wheelIndex);
}

/*
==============
BGVehicles::PathInvalidNodeIndex
==============
*/

__int16 __fastcall BGVehicles::PathInvalidNodeIndex()
{
  return ?PathInvalidNodeIndex@BGVehicles@@SAFXZ();
}

/*
==============
BGVehicles::GetValidWheelBoneTagNames
==============
*/

const char *__fastcall BGVehicles::GetValidWheelBoneTagNames(const VehicleDef *vehDef)
{
  return ?GetValidWheelBoneTagNames@BGVehicles@@SAPEBDPEBUVehicleDef@@@Z(vehDef);
}

/*
==============
BGVehicles::GetVehicleDef
==============
*/

const VehicleDef *__fastcall BGVehicles::GetVehicleDef(BGVehicles *this, const playerState_s *ps)
{
  return ?GetVehicleDef@BGVehicles@@UEBAPEBUVehicleDef@@PEBUplayerState_s@@@Z(this, ps);
}

/*
==============
BG_VehicleStrafeMove
==============
*/

void __fastcall BG_VehicleStrafeMove(pmove_t *pm, const pml_t *pml)
{
  ?BG_VehicleStrafeMove@@YAXPEAVpmove_t@@PEBUpml_t@@@Z(pm, pml);
}

/*
==============
BGVehicles::IsOnSameTeam
==============
*/

bool __fastcall BGVehicles::IsOnSameTeam(BGVehicles *this, const entityState_t *vehicle, team_t team)
{
  return ?IsOnSameTeam@BGVehicles@@QEBA_NPEBUentityState_t@@W4team_t@@@Z(this, vehicle, team);
}

/*
==============
BG_ShouldVehicleBreakGlass
==============
*/

bool __fastcall BG_ShouldVehicleBreakGlass(const vec3_t *velocity, const trace_t *trace)
{
  return ?BG_ShouldVehicleBreakGlass@@YA_NAEBTvec3_t@@PEBUtrace_t@@@Z(velocity, trace);
}

/*
==============
BG_Vehicle_ClampCameraAngle
==============
*/

double __fastcall BG_Vehicle_ClampCameraAngle(float angle, float clamp)
{
  double result; 

  *(float *)&result = ?BG_Vehicle_ClampCameraAngle@@YAMMM@Z(angle, clamp);
  return result;
}

/*
==============
BG_Vehicle_SetStickerCamoMaterialIndices
==============
*/

void __fastcall BG_Vehicle_SetStickerCamoMaterialIndices(const VehicleStickerCamoInfo *inputValue, unsigned int *outStickerAndCamo)
{
  ?BG_Vehicle_SetStickerCamoMaterialIndices@@YAXAEBUVehicleStickerCamoInfo@@AEAI@Z(inputValue, outStickerAndCamo);
}

/*
==============
BG_Vehicle_TraceCapsule
==============
*/

void __fastcall BG_Vehicle_TraceCapsule(const pmove_t *pm, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask, trace_t *outResults)
{
  ?BG_Vehicle_TraceCapsule@@YAXPEBVpmove_t@@AEBTvec3_t@@1PEBUBounds@@HHPEAUtrace_t@@@Z(pm, start, end, bounds, skipEntity, contentMask, outResults);
}

/*
==============
BGVehicles::PathIsValidNode
==============
*/

bool __fastcall BGVehicles::PathIsValidNode(__int16 nodeIndex)
{
  return ?PathIsValidNode@BGVehicles@@SA_NF@Z(nodeIndex);
}

/*
==============
BG_GetVehicleDef
==============
*/

const VehicleDef *__fastcall BG_GetVehicleDef(const playerState_s *ps, const BgHandler *handler)
{
  return ?BG_GetVehicleDef@@YAPEBUVehicleDef@@PEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
}

/*
==============
BG_Vehicle_GetFlashTag
==============
*/

scr_string_t __fastcall BG_Vehicle_GetFlashTag(int barrelIndex)
{
  return ?BG_Vehicle_GetFlashTag@@YA?AW4scr_string_t@@H@Z(barrelIndex);
}

/*
==============
BG_GetVehicleBounds
==============
*/

void __fastcall BG_GetVehicleBounds(const pmove_t *pm, Bounds *bounds)
{
  ?BG_GetVehicleBounds@@YAXPEBVpmove_t@@PEAUBounds@@@Z(pm, bounds);
}

/*
==============
BG_Vehicle_DebugTestVehicleCollisionPoint
==============
*/

void __fastcall BG_Vehicle_DebugTestVehicleCollisionPoint(const pmove_t *pm)
{
  ?BG_Vehicle_DebugTestVehicleCollisionPoint@@YAXPEBVpmove_t@@@Z(pm);
}

/*
==============
BG_Vehicle_GetCameraTargetFovAndOffset
==============
*/

void __fastcall BG_Vehicle_GetCameraTargetFovAndOffset(const VehicleDef *vehDef, float absSpeed, float *targetFov, float *targetFovOffset)
{
  ?BG_Vehicle_GetCameraTargetFovAndOffset@@YAXPEBUVehicleDef@@MPEAM1@Z(vehDef, absSpeed, targetFov, targetFovOffset);
}

/*
==============
BGVehicles::GetBone
==============
*/

int __fastcall BGVehicles::GetBone(BGVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  return ?GetBone@BGVehicles@@UEBAHW4LocalClientNum_t@@HW4VehicleBone@@@Z(this, localClientNum, entityIndex, bone);
}

/*
==============
BG_Vehicle_ApplyCameraInfluence
==============
*/

void __fastcall BG_Vehicle_ApplyCameraInfluence(const PlayerVehicleState *vehicleState, const VehicleDef *vehicleDef, const vec3_t *userAngles, const vec3_t *vehicleAngles, vec3_t *userAnglesOut)
{
  ?BG_Vehicle_ApplyCameraInfluence@@YAXPEBUPlayerVehicleState@@PEBUVehicleDef@@AEBTvec3_t@@2AEAT3@@Z(vehicleState, vehicleDef, userAngles, vehicleAngles, userAnglesOut);
}

/*
==============
BGVehicles::GetOtherWheelBoneTag
==============
*/

scr_string_t __fastcall BGVehicles::GetOtherWheelBoneTag(const VehicleDef *vehDef, int wheelIndex)
{
  return ?GetOtherWheelBoneTag@BGVehicles@@SA?AW4scr_string_t@@PEBUVehicleDef@@H@Z(vehDef, wheelIndex);
}

/*
==============
BGVehicles::GetTreadBoneCount
==============
*/

unsigned int __fastcall BGVehicles::GetTreadBoneCount(const VehicleDef *vehDef, int sideIndex)
{
  return ?GetTreadBoneCount@BGVehicles@@SAIPEBUVehicleDef@@H@Z(vehDef, sideIndex);
}

/*
==============
BG_GetVehicleBounds
==============
*/
void BG_GetVehicleBounds(const pmove_t *pm, Bounds *bounds)
{
  const VehicleDef *VehicleDef; 
  const VehicleDef *v5; 
  VehicleType type; 
  double Float_Internal_DebugName; 
  float camHeight; 
  float camRadius; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 280, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 281, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  v5 = VehicleDef;
  *(_QWORD *)bounds->midPoint.v = 0i64;
  bounds->midPoint.v[2] = 0.0;
  bounds->halfSize.v[0] = -3.4028235e38;
  bounds->halfSize.v[1] = -3.4028235e38;
  bounds->halfSize.v[2] = -3.4028235e38;
  type = VehicleDef->type;
  if ( ((type - 1) & 0xFD) != 0 )
  {
    if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
    {
      camHeight = VehicleDef->camHeight;
      camRadius = VehicleDef->camRadius;
      bounds->midPoint.v[2] = camHeight;
      *(_QWORD *)bounds->midPoint.v = 0i64;
      bounds->halfSize.v[0] = camRadius;
      bounds->halfSize.v[1] = camRadius;
    }
    else
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z, "bg_vehicle_sphere_bounds_offset_z");
      camHeight = v5->vehHelicopterBoundsRadius;
      bounds->midPoint.v[2] = *(float *)&Float_Internal_DebugName;
      *(_QWORD *)bounds->midPoint.v = 0i64;
      bounds->halfSize.v[0] = camHeight;
      bounds->halfSize.v[1] = camHeight;
    }
    bounds->halfSize.v[2] = camHeight;
  }
}

/*
==============
BG_GetVehicleDef
==============
*/
const VehicleDef *BG_GetVehicleDef(const playerState_s *ps, const BgHandler *handler)
{
  const VehicleDef *result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 120, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = handler->GetVehicleDef(handler, ps);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 122, ASSERT_TYPE_SANITY, "( vehDef )", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
BG_GetVehicleDef
==============
*/
const VehicleDef *BG_GetVehicleDef(const pmove_t *pm)
{
  const BgHandler *m_bgHandler; 
  playerState_s *ps; 
  const VehicleDef *result; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 110, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  m_bgHandler = pm->m_bgHandler;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 120, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = m_bgHandler->GetVehicleDef(m_bgHandler, ps);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 122, ASSERT_TYPE_SANITY, "( vehDef )", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 113, ASSERT_TYPE_SANITY, "( vehDef )", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
BG_GetVehicleTargetEntity
==============
*/
__int64 BG_GetVehicleTargetEntity(const pmove_t *pm)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 131, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 134, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  return (unsigned int)ps->vehicleState.targetEntity;
}

/*
==============
BG_GetWheelOrigin
==============
*/
__int64 BG_GetWheelOrigin(const pmove_t *pm, int wheelIndex, vec3_t *result)
{
  LocalClientNum_t localClientNum; 
  playerState_s *ps; 
  int v8; 
  unsigned __int8 v9; 
  __int64 v10; 
  unsigned int entity; 
  _DWORD *v12; 
  const DObj *v13; 
  float v14; 
  __int64 v16; 
  DObjAnimMat outMat; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 163, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( (unsigned int)wheelIndex >= 0xC )
  {
    LODWORD(v16) = wheelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 164, ASSERT_TYPE_ASSERT, "(unsigned)( wheelIndex ) < (unsigned)( NUM_VEHICLE_WHEELS )", "wheelIndex doesn't index NUM_VEHICLE_WHEELS\n\t%i not in [0, %i)", v16, 12) )
      __debugbreak();
  }
  if ( pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    localClientNum = pm->localClientNum;
  else
    localClientNum = LOCAL_CLIENT_INVALID;
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 169, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  v8 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, (const LocalClientNum_t)localClientNum, ps->vehicleState.entity, (VehicleBone)(wheelIndex + 10));
  v9 = v8;
  if ( v8 == -1 )
    return 0i64;
  v10 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  entity = ps->vehicleState.entity;
  v12 = *(_DWORD **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v10) + 272i64);
  v13 = (*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 160i64))(v12) ? Com_GetClientDObj(entity, (LocalClientNum_t)v12[2]) : (const DObj *)(*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v12 + 232i64))(v12, entity);
  if ( !v13 )
    return 0i64;
  DObjGetBasePoseMatrix(v13, v9, &outMat);
  v14 = outMat.trans.v[1];
  result->v[0] = outMat.trans.v[0];
  result->v[2] = outMat.trans.v[2];
  result->v[1] = v14;
  return 1i64;
}

/*
==============
BG_InitPlayerstateVehicle
==============
*/
void BG_InitPlayerstateVehicle(playerState_s *ps)
{
  if ( ps )
  {
    ps->vehicleState.entity = 2047;
    ps->vehicleState.targetEntity = 2047;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1852, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    MEMORY[0x120] = 2047;
    MEMORY[0x128] = 2047;
  }
}

/*
==============
BG_IsValidCollMapBrushIndex
==============
*/
char BG_IsValidCollMapBrushIndex(int brushIdx)
{
  __int64 v2; 
  int *i; 

  if ( !cm.mapEnts )
    return 0;
  v2 = cm.mapEnts->numCollmaps - 1;
  if ( (int)v2 < 0 )
    return 0;
  for ( i = &cm.mapEnts->collmapLookups[(int)v2].brushIndex; *i != brushIdx; i -= 4 )
  {
    if ( --v2 < 0 )
      return 0;
  }
  return 1;
}

/*
==============
BG_PlayerStateToVehicleState
==============
*/
void BG_PlayerStateToVehicleState(const playerState_s *ps, entityState_t *s, int snap, BgHandler *handler, const BgWeaponMap *weaponMap, BGVehicles *vehicleSystem)
{
  float v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  BgWeaponMap *v13; 
  const Weapon *Weapon; 
  float v15; 
  BGVehicles *v16; 
  int v17; 
  __int64 v18; 
  float v19; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1693, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1694, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1697, ASSERT_TYPE_ASSERT, "(vehicleState->entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleState->entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !snap )
  {
    *(_QWORD *)&s->lerp.pos.trTime = 0i64;
    s->lerp.pos.trType = TR_INTERPOLATE;
    *(_QWORD *)s->lerp.pos.trDelta.v = 0i64;
    s->lerp.pos.trDelta.v[2] = 0.0;
    if ( s == (entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    v9 = ps->vehicleState.origin.v[0];
    if ( s->lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    {
      v19 = ps->vehicleState.origin.v[0];
      if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (v19 = ps->vehicleState.origin.v[1], (LODWORD(v19) & 0x7F800000) == 2139095040) || (v19 = ps->vehicleState.origin.v[2], (LODWORD(v19) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v10 = LODWORD(ps->vehicleState.origin.v[0]) ^ ~s_trbase_aab_X;
      v11 = v10 ^ s_trbase_aab_Y ^ LODWORD(ps->vehicleState.origin.v[1]);
      v12 = v11 ^ s_trbase_aab_Z ^ LODWORD(ps->vehicleState.origin.v[2]);
      LODWORD(s->lerp.pos.trBase.v[1]) = v11;
      LODWORD(s->lerp.pos.trBase.v[2]) = v12;
      LODWORD(s->lerp.pos.trBase.v[0]) = v10;
      memset(&v18, 0, sizeof(v18));
    }
    else
    {
      s->lerp.pos.trBase.v[0] = v9;
      s->lerp.pos.trBase.v[1] = ps->vehicleState.origin.v[1];
      s->lerp.pos.trBase.v[2] = ps->vehicleState.origin.v[2];
    }
    *(_QWORD *)&s->lerp.apos.trType = 1i64;
    s->lerp.apos.trDuration = 0;
    *(_QWORD *)s->lerp.apos.trDelta.v = 0i64;
    s->lerp.apos.trDelta.v[2] = 0.0;
    s->lerp.apos.trBase.v[0] = ps->vehicleState.angles.v[0];
    s->lerp.apos.trBase.v[1] = ps->vehicleState.angles.v[1];
    s->lerp.apos.trBase.v[2] = ps->vehicleState.angles.v[2];
  }
  v13 = (BgWeaponMap *)weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !s && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v13, s->weaponHandle);
  if ( BG_GetTargetAssistType(Weapon, 0) )
  {
    s->lerp.u.anonymous.data[5] = 0;
    v15 = 0.0;
  }
  else
  {
    s->lerp.u.anonymous.data[5] = LODWORD(ps->vehicleState.gunAngles.v[0]);
    v15 = ps->vehicleState.gunAngles.v[1];
  }
  v16 = vehicleSystem;
  s->lerp.u.actor.pupilDiameter = v15;
  v17 = s->lerp.u.anonymous.data[1] & 0x1FFE0000;
  *(_QWORD *)&s->lerp.u.vehicle.bodyPitch = 0i64;
  s->lerp.u.anonymous.data[1] = ps->vehicleState.flags | v17;
  BG_VehicleAnim_PlayerToEntity(v16, ps, s);
}

/*
==============
BG_ShouldVehicleBreakGlass
==============
*/
bool BG_ShouldVehicleBreakGlass(const vec3_t *velocity, const trace_t *trace)
{
  bool result; 
  float v5; 
  float v6; 
  float v7; 
  const dvar_t *v8; 

  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 142, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  result = BG_Glass_CanBreakGlass(trace);
  if ( result )
  {
    v5 = trace->normal.v[0] * velocity->v[0];
    v6 = trace->normal.v[1] * velocity->v[1];
    v7 = trace->normal.v[2] * velocity->v[2];
    v8 = DCONST_DVARFLT_bg_vehicle_break_glass_speed;
    if ( !DCONST_DVARFLT_bg_vehicle_break_glass_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_break_glass_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v6 + v5) + v7) ^ _xmm) > v8->current.value;
  }
  return result;
}

/*
==============
BG_VehicleAim
==============
*/
void BG_VehicleAim(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  LocalClientNum_t localClientNum; 
  const SuitDef *SuitDef; 
  const VehicleDef *VehicleDef; 
  int v8; 
  const BgHandler *m_bgHandler; 
  float viewheight_stand; 
  const BgHandler *v11; 
  Physics_WorldId v12; 
  double Float_Internal_DebugName; 
  float fraction; 
  int skipEntities[2]; 
  vec3_t start; 
  vec3_t end; 
  vec3_t groundTarget; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
  float v22; 
  float v23; 
  float v24; 
  trace_t results; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1554, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1556, ASSERT_TYPE_ASSERT, "(playerState->vehicleState.entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "playerState->vehicleState.entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    localClientNum = pm->localClientNum;
  else
    localClientNum = LOCAL_CLIENT_INVALID;
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1561, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1564, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( !VehicleDef->turretWeapon )
    goto LABEL_28;
  if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1575, ASSERT_TYPE_ASSERT, "(pm->vehicles)", (const char *)&queryFormat, "pm->vehicles") )
    __debugbreak();
  if ( BG_GetDObjFromEntityNumber(pm->vehicles, ps->vehicleState.entity) )
  {
    v8 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, (const LocalClientNum_t)localClientNum, ps->vehicleState.entity, VEHICLE_BONE_PLAYER);
    if ( v8 != -1 )
    {
      pm->vehicles->GetWorldBoneMatrix((BGVehicles *)pm->vehicles, (const LocalClientNum_t)localClientNum, ps->vehicleState.entity, v8, (tmat43_t<vec3_t> *)&forward);
      m_bgHandler = pm->m_bgHandler;
      viewheight_stand = (float)SuitDef->viewheight_stand;
      start.v[0] = (float)(viewheight_stand * up.v[0]) + v22;
      start.v[1] = (float)(viewheight_stand * up.v[1]) + v23;
      start.v[2] = (float)(viewheight_stand * up.v[2]) + v24;
      BG_GetPlayerViewDirection(ps, &forward, &right, &up, m_bgHandler, 1);
      v11 = pm->m_bgHandler;
      end.v[0] = (float)(10000.0 * forward.v[0]) + start.v[0];
      end.v[1] = (float)(10000.0 * forward.v[1]) + start.v[1];
      end.v[2] = (float)(10000.0 * forward.v[2]) + start.v[2];
      skipEntities[0] = ps->clientNum;
      skipEntities[1] = ps->vehicleState.entity;
      v12 = v11->GetPhysicsWorldId((BgHandler *)v11);
      PhysicsQuery_LegacyCapsuleTrace(v12, &results, &start, &end, &bounds_origin, skipEntities, 2, 41968017, NULL, 0, NULL, NULL);
      if ( results.fraction >= 1.0 )
      {
        groundTarget = end;
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_aim_trace_min, "bg_vehicle_aim_trace_min");
        fraction = results.fraction;
        if ( (float)(results.fraction * 10000.0) < *(float *)&Float_Internal_DebugName )
          fraction = *(float *)&Float_Internal_DebugName * 0.000099999997;
        groundTarget.v[0] = (float)((float)(end.v[0] - start.v[0]) * fraction) + start.v[0];
        groundTarget.v[1] = (float)((float)(end.v[1] - start.v[1]) * fraction) + start.v[1];
        groundTarget.v[2] = (float)((float)(end.v[2] - start.v[2]) * fraction) + start.v[2];
      }
      if ( !BG_VehicleGunAngles(localClientNum, pm, pml, &groundTarget) )
LABEL_28:
        ps->vehicleState.gunAngles = 0i64;
    }
  }
}

/*
==============
BG_VehicleAirMove
==============
*/
void BG_VehicleAirMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, float dt)
{
  const VehicleDef *VehicleDef; 
  const dvar_t *v8; 

  if ( groundTrace->hasGround )
  {
    VehicleDef = BG_GetVehicleDef(pm);
    BG_VehicleClipVelocity(VehicleDef, &vehicleState->velocity, &groundTrace->trace.normal, &vehicleState->velocity);
  }
  v8 = DCONST_DVARFLT_bg_vehicle_stepsize;
  if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  BG_VehicleStepSlideMove(pm, vehicleState, groundTrace, 1, v8->current.value, dt, 0);
}

/*
==============
BG_VehicleClipVelocity
==============
*/
void BG_VehicleClipVelocity(const VehicleDef *vehicleDef, const vec3_t *velocity, const vec3_t *normal, vec3_t *outClippedVelocity)
{
  const dvar_t *v4; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  __int128 v13; 
  float v14; 
  float v18; 
  float v19; 

  v10 = LODWORD(velocity->v[0]);
  v4 = DCONST_DVARFLT_bg_vehicle_overclip;
  *(float *)&v10 = (float)((float)(velocity->v[0] * normal->v[0]) + (float)(normal->v[1] * velocity->v[1])) + (float)(normal->v[2] * velocity->v[2]);
  v9 = *(float *)&v10;
  if ( !DCONST_DVARFLT_bg_vehicle_overclip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_overclip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v13 = v10 & _xmm;
  v11 = (float)(COERCE_FLOAT(LODWORD(v9) & _xmm) * v4->current.value) - v9;
  *(float *)&v13 = (float)(v11 * normal->v[0]) + velocity->v[0];
  v12 = *(float *)&v13;
  outClippedVelocity->v[0] = *(float *)&v13;
  v14 = (float)(v11 * normal->v[1]) + velocity->v[1];
  outClippedVelocity->v[1] = v14;
  outClippedVelocity->v[2] = (float)(v11 * normal->v[2]) + velocity->v[2];
  if ( vehicleDef->type == VEH_HELICOPTER )
  {
    *(float *)&v13 = (float)(*(float *)&v13 * *(float *)&v13) + (float)(v14 * v14);
    if ( *(float *)&v13 > (float)(vehicleDef->vehHelicopterMaxSpeed * vehicleDef->vehHelicopterMaxSpeed) )
    {
      *(float *)&v13 = fsqrt(*(float *)&v13);
      _XMM2 = v13;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v18 = v12 * (float)(1.0 / *(float *)&_XMM0);
      v19 = v14 * (float)(1.0 / *(float *)&_XMM0);
      outClippedVelocity->v[0] = v18;
      outClippedVelocity->v[1] = v19;
      *(float *)&_XMM2 = vehicleDef->vehHelicopterMaxSpeed;
      outClippedVelocity->v[0] = v18 * *(float *)&_XMM2;
      outClippedVelocity->v[1] = v19 * *(float *)&_XMM2;
    }
  }
}

/*
==============
BG_VehicleCorrectAllSolid
==============
*/
__int64 BG_VehicleCorrectAllSolid(const pmove_t *pm, VehicleState *vehicleState, trace_t *groundTrace)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  float v9; 
  int entity; 
  float v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  float v16; 
  float v17; 
  float fraction; 
  float v19; 
  float v20; 
  float v21; 
  int fmt; 
  int contentMask; 
  int contentMaska; 
  vec3_t start; 
  trace_t results; 

  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 307, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 308, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  if ( !BG_Vehicle_UsingWallCollisionFix() )
  {
    v6 = LODWORD(FLOAT_N1_0);
    do
    {
      v7 = LODWORD(FLOAT_N1_0);
      while ( 2 )
      {
        v8 = LODWORD(FLOAT_N1_0);
        do
        {
          if ( *(float *)&v6 != 0.0 || *(float *)&v7 != 0.0 || *(float *)&v8 != 0.0 )
          {
            v9 = *(float *)&v7 + vehicleState->origin.v[1];
            contentMask = vehicleState->clipmask;
            entity = vehicleState->entity;
            start.v[0] = *(float *)&v6 + vehicleState->origin.v[0];
            v11 = *(float *)&v8 + vehicleState->origin.v[2];
            start.v[1] = v9;
            start.v[2] = v11;
            BG_Vehicle_Trace(pm, &start, &start, &vehicleState->bounds, entity, contentMask, &results);
            if ( !results.startsolid )
            {
              v16 = start.v[1];
              vehicleState->origin.v[0] = start.v[0];
              v17 = start.v[2];
              vehicleState->origin.v[2] = start.v[2];
              vehicleState->origin.v[1] = v16;
              contentMaska = vehicleState->clipmask;
              fmt = vehicleState->entity;
              start.v[2] = v17 + -1.0;
              BG_Vehicle_Trace(pm, &vehicleState->origin, &start, &vehicleState->bounds, fmt, contentMaska, groundTrace);
              fraction = groundTrace->fraction;
              v19 = start.v[1];
              vehicleState->origin.v[0] = (float)((float)(start.v[0] - vehicleState->origin.v[0]) * groundTrace->fraction) + vehicleState->origin.v[0];
              v20 = v19 - vehicleState->origin.v[1];
              v21 = start.v[2];
              vehicleState->origin.v[1] = (float)(v20 * fraction) + vehicleState->origin.v[1];
              vehicleState->origin.v[2] = (float)((float)(v21 - vehicleState->origin.v[2]) * fraction) + vehicleState->origin.v[2];
              return 1i64;
            }
          }
          v12 = v8;
          *(float *)&v12 = *(float *)&v8 + 1.0;
          v8 = v12;
        }
        while ( *(float *)&v12 < 2.0 );
        v13 = v7;
        *(float *)&v13 = *(float *)&v7 + 1.0;
        v7 = v13;
        if ( *(float *)&v13 < 2.0 )
          continue;
        break;
      }
      v14 = v6;
      *(float *)&v14 = *(float *)&v6 + 1.0;
      v6 = v14;
    }
    while ( *(float *)&v14 < 2.0 );
  }
  return 0i64;
}

/*
==============
BG_VehicleGroundMove
==============
*/
void BG_VehicleGroundMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float dt)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  const VehicleDef *VehicleDef; 
  float v14; 
  float v15; 
  __int128 v16; 
  const dvar_t *v20; 
  vec3_t velocity; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 927, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 928, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 929, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  v9 = vehicleState->velocity.v[0];
  v10 = vehicleState->velocity.v[1];
  v11 = vehicleState->velocity.v[2];
  v12 = fsqrt((float)(v10 * v10) + (float)(v9 * v9));
  velocity.v[0] = v9;
  velocity.v[1] = v10;
  velocity.v[2] = v11;
  VehicleDef = BG_GetVehicleDef(pm);
  BG_VehicleClipVelocity(VehicleDef, &velocity, &vehicleState->groundNormal, &vehicleState->velocity);
  v14 = vehicleState->velocity.v[1];
  v15 = vehicleState->velocity.v[0];
  if ( (float)((float)((float)(v14 * v10) + (float)(v15 * v9)) + (float)(v11 * vehicleState->velocity.v[2])) > 0.0 )
  {
    v16 = LODWORD(vehicleState->velocity.v[0]);
    *(float *)&v16 = fsqrt((float)(v15 * v15) + (float)(v14 * v14));
    _XMM2 = v16;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    vehicleState->velocity.v[0] = v15 * (float)(1.0 / *(float *)&_XMM0);
    vehicleState->velocity.v[1] = (float)(1.0 / *(float *)&_XMM0) * v14;
    vehicleState->velocity.v[0] = v12 * vehicleState->velocity.v[0];
    vehicleState->velocity.v[1] = v12 * vehicleState->velocity.v[1];
    v15 = vehicleState->velocity.v[0];
  }
  if ( v15 != 0.0 || vehicleState->velocity.v[1] != 0.0 || gravity )
  {
    v20 = DCONST_DVARFLT_bg_vehicle_stepsize;
    if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    BG_VehicleStepSlideMove(pm, vehicleState, groundTrace, gravity, v20->current.value, dt, 0);
  }
}

/*
==============
BG_VehicleGroundPlant
==============
*/
__int64 BG_VehicleGroundPlant(pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, int gravity, float dt)
{
  __int128 v5; 
  __int128 v6; 
  const VehicleDef *VehicleDef; 
  int clipmask; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  int *v19; 
  int v20; 
  unsigned __int64 v21; 
  __int64 v22; 
  const dvar_t *v23; 
  float fraction; 
  float v25; 
  float v26; 
  float v27; 
  int v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  const dvar_t *v44; 
  __int64 v45; 
  int v46; 
  int v47; 
  float v48; 
  float v49; 
  __int128 v50; 
  __int64 v51; 
  __int64 v52; 
  bool v53; 
  int v54; 
  float v55; 
  float v56; 
  __int128 v57; 
  __int64 v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  __int128 v63; 
  float v67; 
  __int128 v68; 
  __int128 v72; 
  const dvar_t *v76; 
  float value; 
  const dvar_t *v78; 
  float v79; 
  double v80; 
  double v81; 
  const dvar_t *v82; 
  float v83; 
  const dvar_t *v84; 
  float v85; 
  double v86; 
  double v87; 
  int fmt; 
  __int64 contentMask; 
  trace_t *results; 
  int v92; 
  vec3_t v0; 
  vec3_t end; 
  vec3_t start; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t angles; 
  trace_t v101; 
  int v102[2]; 
  int v103; 
  int v104; 
  int v105; 
  vec3_t result[14]; 
  int v107[38]; 
  __int128 v108; 
  __int128 v109; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1020, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1021, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1022, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  clipmask = vehicleState->clipmask;
  v12 = fsqrt((float)(vehicleState->bounds.halfSize.v[0] * vehicleState->bounds.halfSize.v[0]) + (float)(vehicleState->bounds.halfSize.v[1] * vehicleState->bounds.halfSize.v[1])) * 2.0;
  v13 = vehicleState->origin.v[1];
  axis.m[3].v[0] = vehicleState->origin.v[0];
  v14 = vehicleState->previousOrigin.v[2];
  axis.m[3].v[1] = v13;
  v15 = vehicleState->angles.v[1];
  axis.m[3].v[2] = v14;
  *(_QWORD *)v0.v = VehicleDef;
  v16 = clipmask & 0xFD7FFFFF;
  YawToAxis(v15, (tmat33_t<vec3_t> *)&axis);
  v17 = 0;
  v18 = 0;
  v19 = &v103;
  v92 = 0;
  v20 = 0;
  v21 = 0i64;
  do
  {
    *(_QWORD *)result[v21 / 0xC].v = 0i64;
    result[v21 / 0xC].v[2] = 0.0;
    if ( v20 == 12 )
    {
      v22 = 12i64;
    }
    else
    {
      v22 = v20;
      if ( !(unsigned int)BG_GetWheelOrigin(pm, v20, &result[v20]) )
        goto LABEL_24;
      v18 = v92;
    }
    *v19++ = v20;
    v92 = v18 + 1;
    if ( v20 == 12 )
    {
      start = axis.m[3];
      end = axis.m[3];
    }
    else
    {
      MatrixTransformVector43(&result[v22], &axis, &out);
      start = out;
      end = out;
    }
    v23 = DCONST_DVARFLT_bg_vehicle_stepsize;
    if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    start.v[2] = start.v[2] + v23->current.value;
    fmt = vehicleState->entity;
    end.v[2] = end.v[2] - v12;
    BG_Vehicle_Trace(pm, &start, &end, &bounds_origin, fmt, v16, &v101);
    fraction = v101.fraction;
    if ( v101.fraction >= 1.0 )
    {
      v27 = end.v[1];
      result[v21 / 0xC].v[0] = end.v[0];
      result[v21 / 0xC].v[2] = end.v[2];
      result[v21 / 0xC].v[1] = v27;
      v107[v21 / 4] = 1065353216;
    }
    else
    {
      v25 = (float)(end.v[1] - start.v[1]) * v101.fraction;
      v26 = end.v[2] - start.v[2];
      result[v21 / 0xC].v[0] = (float)((float)(end.v[0] - start.v[0]) * v101.fraction) + start.v[0];
      result[v21 / 0xC].v[1] = v25 + start.v[1];
      result[v21 / 0xC].v[2] = (float)(v26 * fraction) + start.v[2];
    }
LABEL_24:
    v18 = v92;
    ++v20;
    v21 += 12i64;
  }
  while ( v20 < 13 );
  if ( (unsigned int)(v92 - 3) > 0xA )
  {
    LODWORD(results) = 3;
    LODWORD(contentMask) = v92;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1080, ASSERT_TYPE_ASSERT, "( 3 ) <= ( numWheels ) && ( numWheels ) <= ( BG_VEHICLE_WHEEL_COUNT )", "numWheels not in [3, BG_VEHICLE_WHEEL_COUNT]\n\t%i not in [%i, %i]", contentMask, results, 13) )
      __debugbreak();
  }
  v28 = 1;
  if ( v92 > 1i64 )
  {
    v29 = 1i64;
    do
    {
      v30 = v28;
      v31 = v29;
      if ( v28 < 4 )
      {
LABEL_36:
        if ( v30 > 0 )
        {
          v40 = &v103 + v31;
          v41 = *v40;
          do
          {
            v42 = *(v40 - 1);
            if ( result[v41].v[2] <= result[v42].v[2] )
              break;
            *v40 = v42;
            --v30;
            *--v40 = v41;
          }
          while ( v30 > 0 );
        }
      }
      else
      {
        while ( 1 )
        {
          v32 = *(&v103 + v31);
          v33 = *(&v103 + v31 - 1);
          if ( result[v32].v[2] <= result[v33].v[2] )
            break;
          *(&v103 + v31) = v33;
          *(&v103 + v31 - 1) = v32;
          v34 = v102[v31 + 1];
          v35 = v102[v31];
          if ( result[v34].v[2] <= result[v35].v[2] )
            break;
          v102[v31 + 1] = v35;
          v102[v31] = v34;
          v36 = v102[v31];
          v37 = *((int *)&v101.debugHitName + v31 + 1);
          if ( result[v36].v[2] <= result[v37].v[2] )
            break;
          v102[v31] = v37;
          *((_DWORD *)&v101.debugHitName + v31 + 1) = v36;
          v38 = *((int *)&v101.debugHitName + v31 + 1);
          v39 = *((int *)&v101.debugHitName + v31);
          if ( result[v38].v[2] <= result[v39].v[2] )
            break;
          *((_DWORD *)&v101.debugHitName + v31 + 1) = v39;
          v30 -= 4;
          *((_DWORD *)&v101.debugHitName + v31) = v38;
          v31 -= 4i64;
          if ( v30 <= 3 )
            goto LABEL_36;
        }
      }
      ++v28;
      ++v29;
    }
    while ( v29 < v92 );
  }
  v43 = v103;
  v44 = DCONST_DVARFLT_bg_vehicle_stepsize;
  v45 = v103;
  if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  LOBYTE(v17) = (float)(v44->current.value + *(float *)(*(_QWORD *)v0.v + 740i64)) > (float)(groundTrace->location.v[2] - result[v45].v[2]);
  if ( v17 )
  {
    v109 = v5;
    v108 = v6;
    if ( ((int)v43 < 0 || (int)v43 >= v92) && (_DWORD)v43 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1100, ASSERT_TYPE_ASSERT, "((sortedWheel[0] >= 0 && sortedWheel[0] < numWheels) || (sortedWheel[0] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[0] >= 0 && sortedWheel[0] < numWheels) || (sortedWheel[0] == BG_CENTER_INDEX)") )
      __debugbreak();
    v46 = v104;
    if ( (v104 < 0 || v104 >= v92) && v104 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1101, ASSERT_TYPE_ASSERT, "((sortedWheel[1] >= 0 && sortedWheel[1] < numWheels) || (sortedWheel[1] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[1] >= 0 && sortedWheel[1] < numWheels) || (sortedWheel[1] == BG_CENTER_INDEX)") )
      __debugbreak();
    if ( (v105 < 0 || v105 >= v92) && v105 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1102, ASSERT_TYPE_ASSERT, "((sortedWheel[2] >= 0 && sortedWheel[2] < numWheels) || (sortedWheel[2] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[2] >= 0 && sortedWheel[2] < numWheels) || (sortedWheel[2] == BG_CENTER_INDEX)") )
      __debugbreak();
    v47 = 2;
    v48 = result[v43].v[0] - result[v46].v[0];
    v49 = result[v43].v[2] - result[v46].v[2];
    v50 = LODWORD(result[v43].v[1]);
    *(float *)&v50 = result[v43].v[1] - result[v46].v[1];
    if ( v92 <= 2 )
    {
      v55 = v0.v[2];
      v56 = v0.v[1];
      v57 = LODWORD(v0.v[0]);
      goto LABEL_98;
    }
    v51 = 2i64;
    while ( 1 )
    {
      v52 = *(&v103 + v51);
      if ( (_DWORD)v43 == 12 )
      {
        if ( v46 )
        {
          switch ( v46 )
          {
            case 1:
              v53 = (_DWORD)v52 == 2;
              break;
            case 2:
              v53 = (_DWORD)v52 == 1;
              break;
            case 3:
              v53 = (_DWORD)v52 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v53 = (_DWORD)v52 == 3;
        }
      }
      else if ( v46 == 12 )
      {
        if ( (_DWORD)v43 )
        {
          switch ( (_DWORD)v43 )
          {
            case 1:
              v53 = (_DWORD)v52 == 2;
              break;
            case 2:
              v53 = (_DWORD)v52 == 1;
              break;
            case 3:
              v53 = (_DWORD)v52 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v53 = (_DWORD)v52 == 3;
        }
      }
      else if ( (_DWORD)v52 == 12 )
      {
        if ( v46 )
        {
          switch ( v46 )
          {
            case 1:
              v53 = (_DWORD)v43 == 2;
              break;
            case 2:
              v53 = (_DWORD)v43 == 1;
              break;
            case 3:
              v53 = (_DWORD)v43 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v53 = (_DWORD)v43 == 3;
        }
      }
      else
      {
        v54 = v43 & 1;
        if ( v54 != (v46 & 1) )
          break;
        v53 = v54 == (*(&v103 + v51) & 1);
      }
      if ( !v53 )
        break;
      ++v47;
      if ( ++v51 >= v92 )
      {
        v55 = v0.v[2];
        v56 = v0.v[1];
        v57 = LODWORD(v0.v[0]);
        goto LABEL_95;
      }
    }
LABEL_94:
    v58 = v52;
    v59 = result[v58].v[0] - result[v43].v[0];
    v60 = result[v58].v[1] - result[v43].v[1];
    v61 = result[v58].v[2] - result[v43].v[2];
    *(float *)&v50 = (float)(*(float *)&v50 * v61) - (float)(v49 * v60);
    v57 = v50;
    v62 = v49 * v59;
    v55 = (float)(v48 * v60) - (float)((float)(result[v43].v[1] - result[v46].v[1]) * v59);
    v56 = v62 - (float)(v48 * v61);
LABEL_95:
    if ( v47 >= v92 )
    {
LABEL_98:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1120, ASSERT_TYPE_ASSERT, "(wheelIndex < numWheels)", (const char *)&queryFormat, "wheelIndex < numWheels") )
        __debugbreak();
    }
    v63 = v57;
    *(float *)&v63 = fsqrt((float)((float)(*(float *)&v57 * *(float *)&v57) + (float)(v56 * v56)) + (float)(v55 * v55));
    _XMM3 = v63;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    v67 = v55 * (float)(1.0 / *(float *)&_XMM0);
    v0.v[0] = *(float *)&v57 * (float)(1.0 / *(float *)&_XMM0);
    v0.v[1] = v56 * (float)(1.0 / *(float *)&_XMM0);
    v0.v[2] = v67;
    if ( v67 < 0.0 )
    {
      LODWORD(v0.v[0]) = COERCE_UNSIGNED_INT(*(float *)&v57 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
      LODWORD(v0.v[2]) = LODWORD(v67) ^ _xmm;
      LODWORD(v0.v[1]) = COERCE_UNSIGNED_INT(v56 * (float)(1.0 / *(float *)&_XMM0)) ^ _xmm;
    }
    Vec3Cross(&v0, axis.m, &axis.m[1]);
    v68 = LODWORD(axis.m[1].v[0]);
    *(float *)&v68 = fsqrt((float)((float)(*(float *)&v68 * *(float *)&v68) + (float)(axis.m[1].v[1] * axis.m[1].v[1])) + (float)(axis.m[1].v[2] * axis.m[1].v[2]));
    _XMM3 = v68;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    axis.m[1].v[0] = axis.m[1].v[0] * (float)(1.0 / *(float *)&_XMM0);
    axis.m[1].v[2] = axis.m[1].v[2] * (float)(1.0 / *(float *)&_XMM0);
    axis.m[1].v[1] = axis.m[1].v[1] * (float)(1.0 / *(float *)&_XMM0);
    Vec3Cross(&axis.m[1], &v0, axis.m);
    v72 = LODWORD(axis.m[0].v[0]);
    *(float *)&v72 = fsqrt((float)((float)(*(float *)&v72 * *(float *)&v72) + (float)(axis.m[0].v[1] * axis.m[0].v[1])) + (float)(axis.m[0].v[2] * axis.m[0].v[2]));
    _XMM3 = v72;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
    }
    axis.m[0].v[0] = axis.m[0].v[0] * (float)(1.0 / *(float *)&_XMM0);
    axis.m[0].v[2] = axis.m[0].v[2] * (float)(1.0 / *(float *)&_XMM0);
    axis.m[0].v[1] = axis.m[0].v[1] * (float)(1.0 / *(float *)&_XMM0);
    AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
    v76 = DCONST_DVARFLT_bg_vehicle_pitch_track;
    if ( !DCONST_DVARFLT_bg_vehicle_pitch_track && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_pitch_track") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v76);
    value = v76->current.value;
    v78 = DCONST_DVARFLT_bg_vehicle_roll_track;
    if ( !DCONST_DVARFLT_bg_vehicle_roll_track && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_roll_track") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v78);
    v79 = v78->current.value;
    v80 = DiffTrackAngle(angles.v[0], vehicleState->angles.v[0], value, dt);
    vehicleState->angles.v[0] = *(float *)&v80;
    v81 = DiffTrackAngle(angles.v[2], vehicleState->angles.v[2], v79, dt);
    vehicleState->angles.v[2] = *(float *)&v81;
    v82 = DCONST_DVARFLT_bg_vehicle_max_pitch;
    if ( !DCONST_DVARFLT_bg_vehicle_max_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_max_pitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    v83 = v82->current.value;
    v84 = DCONST_DVARFLT_bg_vehicle_max_roll;
    if ( !DCONST_DVARFLT_bg_vehicle_max_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_max_roll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v84);
    v85 = v84->current.value;
    v86 = I_fclamp(vehicleState->angles.v[0], COERCE_FLOAT(LODWORD(v83) ^ _xmm), v83);
    vehicleState->angles.v[0] = *(float *)&v86;
    v87 = I_fclamp(vehicleState->angles.v[2], COERCE_FLOAT(LODWORD(v85) ^ _xmm), v85);
    vehicleState->angles.v[2] = *(float *)&v87;
  }
  return v17;
}

/*
==============
BG_VehicleGroundTrace
==============
*/
void BG_VehicleGroundTrace(const pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, float dt)
{
  const dvar_t *v7; 
  float value; 
  float v9; 
  float v10; 
  float v11; 
  int entity; 
  float fraction; 
  float v14; 
  float v15; 
  float v16; 
  bool v17; 
  const dvar_t *v18; 
  unsigned int contentMask; 
  vec3_t end; 
  vec3_t start; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 354, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 355, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 356, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  v7 = DCONST_DVARFLT_bg_vehicle_trace_offset;
  if ( !DCONST_DVARFLT_bg_vehicle_trace_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_trace_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  v9 = vehicleState->origin.v[2];
  v10 = vehicleState->origin.v[0];
  v11 = vehicleState->origin.v[1];
  contentMask = vehicleState->clipmask & 0xFDFFBFFF;
  entity = vehicleState->entity;
  start.v[2] = value + v9;
  end.v[2] = v9 - value;
  start.v[0] = v10;
  start.v[1] = v11;
  end.v[0] = v10;
  end.v[1] = v11;
  BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, entity, contentMask, &groundTrace->trace);
  fraction = groundTrace->trace.fraction;
  if ( groundTrace->trace.fraction >= 1.0 )
  {
    v16 = end.v[1];
    groundTrace->location.v[0] = end.v[0];
    groundTrace->location.v[2] = end.v[2];
    groundTrace->location.v[1] = v16;
  }
  else
  {
    v14 = (float)(end.v[1] - start.v[1]) * fraction;
    v15 = end.v[2] - start.v[2];
    groundTrace->location.v[0] = (float)((float)(end.v[0] - start.v[0]) * fraction) + start.v[0];
    groundTrace->location.v[1] = v14 + start.v[1];
    groundTrace->location.v[2] = (float)(v15 * fraction) + start.v[2];
  }
  *(_QWORD *)&groundTrace->onGround = 0i64;
  groundTrace->validGroundNormal = 0;
  if ( !groundTrace->trace.allsolid || (unsigned int)BG_VehicleCorrectAllSolid(pm, vehicleState, &groundTrace->trace) )
  {
    if ( groundTrace->trace.fraction < 1.0 )
    {
      v17 = !groundTrace->trace.walkable;
      groundTrace->hasGround = 1;
      groundTrace->onGround = 1;
      if ( !v17 )
        goto LABEL_26;
      v18 = DCONST_DVARFLT_bg_vehicle_ground_min_normal;
      if ( !DCONST_DVARFLT_bg_vehicle_ground_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_ground_min_normal") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( v18->current.value <= groundTrace->trace.normal.v[2] )
LABEL_26:
        groundTrace->validGroundNormal = 1;
    }
  }
  else if ( groundTrace->trace.walkable )
  {
    groundTrace->onGround = 1;
  }
}

/*
==============
BG_VehicleGunAngles
==============
*/
__int64 BG_VehicleGunAngles(const LocalClientNum_t localClientNum, pmove_t *pm, const pml_t *pml, const vec3_t *groundTarget)
{
  playerState_s *ps; 
  const VehicleDef *VehicleDef; 
  int v10; 
  int v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  float v19; 
  float v20; 
  float turretVertSpanDown; 
  float v22; 
  float v23; 
  float turretHorizSpanLeft; 
  vec3_t angles; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  char v29[36]; 
  float v30; 
  float v31; 
  float v32; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1477, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1478, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1481, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1484, ASSERT_TYPE_ASSERT, "(vehicleState->entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleState->entity != ENTITYNUM_NONE") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef->turretWeapon )
    return 0i64;
  if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1490, ASSERT_TYPE_ASSERT, "(pm->vehicles)", (const char *)&queryFormat, "pm->vehicles") )
    __debugbreak();
  if ( !BG_GetDObjFromEntityNumber(pm->vehicles, ps->vehicleState.entity) )
    return 0i64;
  v10 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, localClientNum, ps->vehicleState.entity, VEHICLE_BONE_BARREL);
  if ( v10 == -1 )
    return 0i64;
  v11 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, localClientNum, ps->vehicleState.entity, VEHICLE_BONE_TURRET_BASE);
  if ( v11 == -1 )
    AnglesToAxis(&ps->vehicleState.angles, &axis);
  else
    pm->vehicles->GetWorldBoneMatrix((BGVehicles *)pm->vehicles, localClientNum, ps->vehicleState.entity, v11, (tmat43_t<vec3_t> *)&axis);
  pm->vehicles->GetWorldBoneMatrix((BGVehicles *)pm->vehicles, localClientNum, ps->vehicleState.entity, v10, (tmat43_t<vec3_t> *)v29);
  v12 = groundTarget->v[0] - v30;
  v14 = LODWORD(groundTarget->v[1]);
  v13 = groundTarget->v[1] - v31;
  v15 = groundTarget->v[2] - v32;
  *(float *)&v14 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v15 * v15));
  _XMM4 = v14;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  vec.v[0] = v12 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = v15 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[1] = v13 * (float)(1.0 / *(float *)&_XMM0);
  vectoangles(&vec, &angles);
  AnglesToAxis(&angles, &in1);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&in1, &out, &axis);
  AxisToAngles(&axis, &angles);
  v19 = ps->vehicleState.gunAngles.v[1];
  *(double *)&_XMM0 = LinearTrackAngle(angles.v[0], ps->vehicleState.gunAngles.v[0], VehicleDef->turretRotRate, pml->frametime);
  ps->vehicleState.gunAngles.v[0] = *(float *)&_XMM0;
  *(double *)&_XMM0 = LinearTrackAngle(angles.v[1], v19, VehicleDef->turretRotRate, pml->frametime);
  ps->vehicleState.gunAngles.v[1] = *(float *)&_XMM0;
  v20 = ps->vehicleState.gunAngles.v[0];
  LODWORD(turretVertSpanDown) = LODWORD(VehicleDef->turretVertSpanUp) ^ _xmm;
  if ( v20 < turretVertSpanDown || (turretVertSpanDown = VehicleDef->turretVertSpanDown, v20 > turretVertSpanDown) )
    ps->vehicleState.gunAngles.v[0] = turretVertSpanDown;
  v22 = ps->vehicleState.gunAngles.v[1];
  LODWORD(v23) = LODWORD(VehicleDef->turretHorizSpanRight) ^ _xmm;
  if ( v22 >= v23 )
  {
    turretHorizSpanLeft = VehicleDef->turretHorizSpanLeft;
    if ( v22 > turretHorizSpanLeft )
      ps->vehicleState.gunAngles.v[1] = turretHorizSpanLeft;
    return 1i64;
  }
  else
  {
    ps->vehicleState.gunAngles.v[1] = v23;
    return 1i64;
  }
}

/*
==============
BG_VehicleMove
==============
*/
void BG_VehicleMove(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  int entity; 
  const VehicleDef *VehicleDef; 
  const VehicleDef *v7; 
  VehicleType type; 
  playerState_s *v9; 
  int flags; 
  unsigned int v11; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1625, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  ps = pm->ps;
  entity = ps->vehicleState.entity;
  if ( entity >= (int)ComCharacterLimits::ms_gameData.m_clientCount && entity != 2047 && ps->pm_type != 3 )
  {
    Profile_Begin(368);
    VehicleDef = BG_GetVehicleDef(pm);
    v7 = VehicleDef;
    if ( VehicleDef->vehiclePhysicsDef.physicsEnabled )
    {
      if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1636, ASSERT_TYPE_ASSERT, "( pm->vehicles )", "BG_VehicleMove: Vehicle system is needed in order to pmove a physics vehicle") )
        __debugbreak();
      pm->vehicles->PhysicsSimulateVehiclePmove((BGVehicles *)pm->vehicles, pm, pml);
    }
    else
    {
      type = VehicleDef->type;
      if ( type )
      {
        if ( type == VEH_HELICOPTER )
          BG_VehicleHelicopterMove(pm, pml);
      }
      else
      {
        BG_VehicleSteerMove(pm, pml);
      }
    }
    BG_VehicleAim(pm, pml);
    v9 = pm->ps;
    flags = v9->vehicleState.flags;
    if ( v7->camRemoteDrive )
      v11 = flags & 0xFFFFFFFE;
    else
      v11 = flags | 1;
    v9->vehicleState.flags = v11;
    pm->ps->vehicleState.flags |= 0x40u;
    Profile_EndInternal(NULL);
  }
}

/*
==============
BG_VehicleSlideMove
==============
*/
_BOOL8 BG_VehicleSlideMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float dt, bool useCapsuleForBrushCollision, VehicleCollisionInfo *outCollisionInfo)
{
  VehicleCollisionInfo *v7; 
  VehicleState *v9; 
  const VehicleDef *VehicleDef; 
  int v12; 
  vec3_t *p_velocity; 
  float v14; 
  float v15; 
  float v16; 
  const dvar_t *v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  double v21; 
  playerState_s *ps; 
  float v24; 
  float v25; 
  float v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  unsigned int v45; 
  vec3_t *p_planes; 
  float v47; 
  __int128 v48; 
  float v49; 
  __int64 v50; 
  void (__fastcall *v51)(const pmove_t *, const vec3_t *, const vec3_t *, const Bounds *, int, int, trace_t *); 
  __int128 v52; 
  Bounds *p_bounds; 
  float *v; 
  float v58; 
  float v59; 
  int entity; 
  const dvar_t *v61; 
  float v62; 
  int m_flags; 
  unsigned __int16 GlassHitId; 
  float v65; 
  float v66; 
  __int128 v67; 
  __int128 v68; 
  bool allsolid; 
  float fraction; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  __int128 v83; 
  float v84; 
  float v85; 
  float v86; 
  unsigned __int16 EntityHitId; 
  __int128 v91; 
  int v92; 
  __int64 v93; 
  float v94; 
  float v95; 
  float v96; 
  float *v97; 
  int v98; 
  double v99; 
  float speed; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  __int64 v105; 
  __int64 v106; 
  vec3_t *v107; 
  vec3_t *v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  __int128 v115; 
  float v116; 
  const dvar_t *v117; 
  float v118; 
  float v119; 
  __int128 v123; 
  __int128 v124; 
  __int128 v125; 
  __int128 v126; 
  __int128 v127; 
  float v128; 
  float v129; 
  float v130; 
  playerState_s *v131; 
  float v132; 
  float v133; 
  float v134; 
  float v135; 
  __int128 v136; 
  float v140; 
  float v141; 
  __int128 v142; 
  __int128 v143; 
  double Float_Internal_DebugName; 
  __int128 v148; 
  float v149; 
  __int128 v153; 
  __int64 v157; 
  __m128 v158; 
  float v159; 
  int v160; 
  int v161; 
  unsigned __int16 v162; 
  float v163; 
  float v164; 
  __int128 v165; 
  __int128 v166; 
  float v170; 
  float v171; 
  char *fmt; 
  __int64 v174; 
  int v175; 
  float v176; 
  int v177; 
  float v178; 
  float v179; 
  void (__fastcall *v182)(const pmove_t *, const vec3_t *, const vec3_t *, const Bounds *, int, int, trace_t *); 
  float *v183; 
  Bounds *v184; 
  vec3_t *p_origin; 
  vec3_t outClippedVelocity; 
  vec3_t normal; 
  float v189; 
  float v190; 
  float v191; 
  vec3_t velocity; 
  vec3_t out; 
  vec3_t in; 
  char v195[16]; 
  trace_t trace; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> forward; 
  int permutation[8]; 
  vec3_t planes; 
  char v201; 

  v7 = outCollisionInfo;
  v9 = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 458, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 459, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 460, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 461, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  if ( !outCollisionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 462, ASSERT_TYPE_ASSERT, "(outCollisionInfo)", (const char *)&queryFormat, "outCollisionInfo") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  if ( !VehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 465, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v12 = _xmm;
  p_velocity = &v9->velocity;
  v14 = v9->velocity.v[0];
  v15 = v9->velocity.v[1];
  v16 = v9->velocity.v[2];
  *(_QWORD *)outCollisionInfo->position.v = 0i64;
  outCollisionInfo->position.v[2] = 0.0;
  outCollisionInfo->speed = fsqrt((float)((float)(v9->velocity.v[0] * v9->velocity.v[0]) + (float)(v9->velocity.v[1] * v9->velocity.v[1])) + (float)(v9->velocity.v[2] * v9->velocity.v[2]));
  v179 = v14;
  velocity.v[0] = v14;
  v178 = v15;
  velocity.v[1] = v15;
  v176 = v16;
  velocity.v[2] = v16;
  *(_QWORD *)&outCollisionInfo->incidence = 0i64;
  outCollisionInfo->entity = 2047;
  if ( gravity )
  {
    v17 = DCONST_DVARFLT_bg_vehicle_gravity;
    if ( !DCONST_DVARFLT_bg_vehicle_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v18 = LODWORD(dt);
    v19 = dt * v17->current.value;
    v9 = vehicleState;
    v16 = v16 - v19;
    v176 = v16;
    velocity.v[2] = v16;
    v20 = (float)(v16 + vehicleState->velocity.v[2]) * 0.5;
    vehicleState->velocity.v[2] = v20;
    if ( VehicleDef->type == VEH_HELICOPTER )
    {
      v21 = I_fclamp(v20, COERCE_FLOAT(LODWORD(VehicleDef->vehHelicopterMaxSpeedVertical) ^ _xmm), VehicleDef->vehHelicopterMaxSpeedVertical);
      vehicleState->velocity.v[2] = *(float *)&v21;
    }
    if ( groundTrace->hasGround )
      BG_VehicleClipVelocity(VehicleDef, p_velocity, &vehicleState->groundNormal, p_velocity);
  }
  else
  {
    v18 = LODWORD(dt);
  }
  ps = pm->ps;
  _XMM4 = LODWORD(ps->origin.v[2]);
  v24 = ps->origin.v[0];
  v25 = ps->origin.v[1];
  _XMM0 = (unsigned __int8)VehicleDef->type;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm4, xmm3, xmm2
  }
  v29 = FLOAT_0_1;
  if ( BGVehicles::IsRemoteDrivingVehicleAndLinked(ps, v9->entity) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&pm->ps->eFlags, ACTIVE, 0xCu) || VehicleDef->type == VEH_SPACESHIP )
  {
    v30 = LODWORD(FLOAT_1_0);
  }
  else
  {
    v30 = LODWORD(FLOAT_1_0);
    v31 = v9->origin.v[0] - v24;
    v32 = v9->origin.v[2] - *(float *)&_XMM1;
    v34 = LODWORD(v9->origin.v[1]);
    v33 = v9->origin.v[1] - v25;
    v35 = v9->bounds.halfSize.v[0] + 30.0;
    *(float *)&v34 = fsqrt((float)((float)(v33 * v33) + (float)(v31 * v31)) + (float)(v32 * v32));
    _XMM2 = v34;
    normal.v[0] = v31;
    normal.v[1] = v33;
    normal.v[2] = v32;
    if ( *(float *)&v34 < v35 )
    {
      __asm
      {
        vcmpless xmm0, xmm2, xmm12
        vblendvps xmm0, xmm2, xmm10, xmm0
      }
      v39 = 1.0 / *(float *)&_XMM0;
      v40 = (float)(1.0 / *(float *)&_XMM0) * v31;
      *(float *)&_XMM0 = (float)(1.0 / *(float *)&_XMM0) * v33;
      v41 = v32 * v39;
      v42 = *(float *)&_XMM0 * p_velocity->v[1];
      normal.v[1] = *(float *)&_XMM0;
      *(float *)&_XMM0 = v40 * p_velocity->v[0];
      normal.v[0] = v40;
      v43 = (float)(v32 * v39) * p_velocity->v[2];
      normal.v[2] = v41;
      if ( (float)((float)(v42 + *(float *)&_XMM0) + v43) < 0.1 )
        BG_VehicleClipVelocity(VehicleDef, p_velocity, &normal, p_velocity);
    }
  }
  if ( groundTrace->hasGround )
  {
    v44 = v9->groundNormal.v[1];
    planes.v[0] = v9->groundNormal.v[0];
    planes.v[2] = v9->groundNormal.v[2];
    planes.v[1] = v44;
    v45 = 2;
    p_planes = (vec3_t *)&v201;
  }
  else
  {
    v45 = 1;
    p_planes = &planes;
  }
  v47 = p_velocity->v[1];
  v48 = LODWORD(p_velocity->v[0]);
  v49 = p_velocity->v[2];
  v50 = v45;
  v51 = BG_Vehicle_Trace;
  v52 = v48;
  *(float *)&v52 = fsqrt((float)((float)(*(float *)&v48 * *(float *)&v48) + (float)(v47 * v47)) + (float)(v49 * v49));
  _XMM3 = v52;
  __asm
  {
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm10, xmm0
  }
  p_planes->v[0] = (float)(*(float *)&v30 / *(float *)&_XMM0) * *(float *)&v48;
  p_planes->v[2] = (float)(*(float *)&v30 / *(float *)&_XMM0) * v49;
  p_planes->v[1] = (float)(*(float *)&v30 / *(float *)&_XMM0) * v47;
  v175 = v45;
  v177 = 0;
  p_bounds = &v9->bounds;
  v184 = &v9->bounds;
  if ( useCapsuleForBrushCollision )
    v51 = BG_Vehicle_TraceCapsule;
  v = v9->origin.v;
  v182 = v51;
  p_origin = &v9->origin;
  v183 = &planes.v[3 * v50 + 2];
  while ( 1 )
  {
    v58 = *(float *)&v18 * p_velocity->v[1];
    v189 = (float)(*(float *)&v18 * p_velocity->v[0]) + *v;
    v59 = *(float *)&v18 * p_velocity->v[2];
    LODWORD(v174) = v9->clipmask;
    entity = v9->entity;
    v190 = v58 + v[1];
    v191 = v59 + v[2];
    LODWORD(fmt) = entity;
    v51(pm, (const vec3_t *)v, (const vec3_t *)&v189, p_bounds, (int)fmt, v174, &trace);
    if ( BG_Glass_CanBreakGlass(&trace) )
    {
      v61 = DCONST_DVARFLT_bg_vehicle_break_glass_speed;
      LODWORD(v62) = COERCE_UNSIGNED_INT((float)((float)(trace.normal.v[1] * p_velocity->v[1]) + (float)(trace.normal.v[0] * p_velocity->v[0])) + (float)(trace.normal.v[2] * p_velocity->v[2])) ^ v12;
      if ( !DCONST_DVARFLT_bg_vehicle_break_glass_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_break_glass_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v61);
      if ( v62 <= v61->current.value )
      {
        v9 = vehicleState;
      }
      else
      {
        m_flags = pm->m_flags;
        if ( (m_flags & 4) != 0 )
        {
          Com_PrintWarning(16, "Cannot break multiple glass pieces in a single movement step.\n");
        }
        else
        {
          pm->m_flags = m_flags | 4;
          GlassHitId = Trace_GetGlassHitId(&trace);
          v65 = trace.position.v[0];
          v66 = trace.position.v[1];
          pm->glassBreakIndex = GlassHitId - 1;
          pm->glassBreakPos.v[0] = v65;
          pm->glassBreakPos.v[2] = trace.position.v[2];
          pm->glassBreakPos.v[1] = v66;
          v67 = LODWORD(p_velocity->v[0]);
          v68 = v67;
          *(float *)&v68 = fsqrt((float)((float)(*(float *)&v67 * *(float *)&v67) + (float)(p_velocity->v[1] * p_velocity->v[1])) + (float)(p_velocity->v[2] * p_velocity->v[2]));
          _XMM4 = v68;
          __asm
          {
            vcmpless xmm0, xmm4, xmm12
            vblendvps xmm0, xmm4, xmm10, xmm0
          }
          pm->glassBreakDir.v[0] = (float)(*(float *)&v30 / *(float *)&_XMM0) * *(float *)&v67;
          pm->glassBreakDir.v[1] = (float)(*(float *)&v30 / *(float *)&_XMM0) * p_velocity->v[1];
          pm->glassBreakDir.v[2] = (float)(*(float *)&v30 / *(float *)&_XMM0) * p_velocity->v[2];
        }
        v9 = vehicleState;
        v182(pm, (const vec3_t *)v, (const vec3_t *)&v189, &vehicleState->bounds, vehicleState->entity, vehicleState->clipmask & 0xFFFFFFEF, &trace);
      }
    }
    allsolid = trace.allsolid;
    if ( trace.allsolid )
    {
      if ( (trace.contents & 0x2004000) != 0 )
      {
        v182(pm, (const vec3_t *)v, (const vec3_t *)&v189, &v9->bounds, v9->entity, v9->clipmask & 0xFDFFBFFF, &trace);
        allsolid = trace.allsolid;
      }
      if ( allsolid )
      {
        if ( BG_Glass_CanBreakGlass(&trace) )
        {
          v161 = pm->m_flags;
          if ( (v161 & 4) != 0 )
          {
            Com_PrintWarning(16, "Cannot break multiple glass pieces in a single movement step.\n");
          }
          else
          {
            pm->m_flags = v161 | 4;
            v162 = Trace_GetGlassHitId(&trace);
            v163 = trace.position.v[0];
            v164 = trace.position.v[1];
            pm->glassBreakIndex = v162 - 1;
            pm->glassBreakPos.v[0] = v163;
            pm->glassBreakPos.v[2] = trace.position.v[2];
            pm->glassBreakPos.v[1] = v164;
            v165 = LODWORD(p_velocity->v[0]);
            v166 = v165;
            *(float *)&v166 = fsqrt((float)((float)(*(float *)&v165 * *(float *)&v165) + (float)(p_velocity->v[1] * p_velocity->v[1])) + (float)(p_velocity->v[2] * p_velocity->v[2]));
            _XMM4 = v166;
            __asm
            {
              vcmpless xmm0, xmm4, xmm12
              vblendvps xmm0, xmm4, xmm10, xmm0
            }
            pm->glassBreakDir.v[0] = *(float *)&v165 * (float)(*(float *)&v30 / *(float *)&_XMM0);
            pm->glassBreakDir.v[1] = (float)(*(float *)&v30 / *(float *)&_XMM0) * p_velocity->v[1];
            pm->glassBreakDir.v[2] = (float)(*(float *)&v30 / *(float *)&_XMM0) * p_velocity->v[2];
          }
        }
        v9->velocity.v[2] = 0.0;
        if ( !BG_Vehicle_UsingWallCollisionFix() )
        {
          v170 = p_velocity->v[1];
          v171 = p_velocity->v[2];
          *v = (float)(*(float *)&v18 * p_velocity->v[0]) + *v;
          v[1] = (float)(*(float *)&v18 * v170) + v[1];
          v[2] = (float)(*(float *)&v18 * v171) + v[2];
        }
        return 1i64;
      }
    }
    fraction = trace.fraction;
    if ( trace.fraction > 0.0 )
    {
      v74 = v190;
      *v = (float)((float)(v189 - *v) * trace.fraction) + *v;
      v75 = v74 - v[1];
      v76 = v191;
      v[1] = (float)(v75 * fraction) + v[1];
      v[2] = (float)((float)(v76 - v[2]) * fraction) + v[2];
    }
    if ( fraction == *(float *)&v30 )
      break;
    if ( !v177 )
    {
      v77 = trace.position.v[1];
      v7->position.v[0] = trace.position.v[0];
      v7->position.v[2] = trace.position.v[2];
      v7->position.v[1] = v77;
      AnglesToAxis(&v9->angles, &axis);
      if ( v184 == (Bounds *)v195 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out") )
        __debugbreak();
      v78 = v184->midPoint.v[1];
      v79 = v184->midPoint.v[2];
      v80 = trace.position.v[0] - (float)((float)((float)((float)(v184->midPoint.v[0] * axis.m[0].v[0]) + (float)(v78 * axis.m[0].v[1])) + (float)(v79 * axis.m[0].v[2])) + *v);
      v83 = LODWORD(trace.position.v[1]);
      v81 = trace.position.v[1] - (float)((float)((float)((float)(v184->midPoint.v[0] * axis.m[1].v[0]) + (float)(v78 * axis.m[1].v[1])) + (float)(v79 * axis.m[1].v[2])) + v[1]);
      v82 = trace.position.v[2] - (float)((float)((float)((float)(v184->midPoint.v[0] * axis.m[2].v[0]) + (float)(v78 * axis.m[2].v[1])) + (float)(v79 * axis.m[2].v[2])) + v[2]);
      *(float *)&v83 = (float)((float)(v81 * v81) + (float)(v80 * v80)) + (float)(v82 * v82);
      if ( *(float *)&v83 >= 0.001 )
      {
        *(float *)&v83 = fsqrt(*(float *)&v83);
        _XMM1 = v83;
        __asm
        {
          vcmpless xmm0, xmm1, xmm12
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
        v84 = (float)(1.0 / *(float *)&_XMM0) * v80;
        v85 = *(float *)&_XMM1 * v81;
        v86 = *(float *)&_XMM1 * v82;
      }
      else
      {
        v84 = axis.m[0].v[0];
        v85 = axis.m[0].v[1];
        v86 = axis.m[0].v[2];
      }
      v16 = v176;
      v29 = FLOAT_0_1;
      v30 = LODWORD(FLOAT_1_0);
      v18 = LODWORD(dt);
      v7->direction = (float)((float)(v84 * axis.m[0].v[0]) + (float)(v85 * axis.m[0].v[1])) + (float)(v86 * axis.m[0].v[2]);
    }
    if ( v7->entity == 2047 && trace.hitType == TRACE_HITTYPE_ENTITY && trace.hitId - 2046 > 1 )
      v7->entity = trace.hitId;
    EntityHitId = Trace_GetEntityHitId(&trace);
    PM_AddTouchEnt(pm, EntityHitId, PMTF_TOUCHER_VEHICLE);
    v91 = v18;
    *(float *)&v91 = *(float *)&v18 - (float)(*(float *)&v18 * trace.fraction);
    v18 = v91;
    dt = *(float *)&v91;
    if ( v175 >= 8 )
      goto LABEL_124;
    v92 = 0;
    v93 = 0i64;
    v94 = trace.normal.v[2];
    v95 = trace.normal.v[1];
    v96 = trace.normal.v[0];
    if ( v50 > 0 )
    {
      v97 = &planes.v[2];
      while ( (float)((float)((float)(trace.normal.v[0] * *(v97 - 2)) + (float)(trace.normal.v[1] * *(v97 - 1))) + (float)(trace.normal.v[2] * *v97)) <= 0.99000001 )
      {
        ++v92;
        ++v93;
        v97 += 3;
        if ( v93 >= v50 )
          goto LABEL_77;
      }
      BG_VehicleClipVelocity(VehicleDef, p_velocity, &trace.normal, p_velocity);
      v96 = trace.normal.v[0];
      v95 = trace.normal.v[1];
      v94 = trace.normal.v[2];
      p_velocity->v[0] = trace.normal.v[0] + p_velocity->v[0];
      p_velocity->v[1] = v95 + p_velocity->v[1];
      p_velocity->v[2] = v94 + p_velocity->v[2];
    }
LABEL_77:
    v98 = v175;
    if ( v92 >= v175 )
    {
      ++v175;
      ++v50;
      *(v183 - 2) = v96;
      *(v183 - 1) = v95;
      *v183 = v94;
      v183 += 3;
      v99 = PM_PermuteRestrictiveClipPlanes(p_velocity, v98 + 1, &planes, permutation);
      if ( *(float *)&v99 < v29 )
      {
        speed = v7->speed;
        if ( speed == 0.0 )
          v101 = 0.0;
        else
          LODWORD(v101) = COERCE_UNSIGNED_INT(*(float *)&v99 / speed) ^ v12;
        if ( v101 > v7->incidence )
          v7->incidence = v101;
        BG_VehicleClipVelocity(VehicleDef, p_velocity, &planes + permutation[0], &outClippedVelocity);
        BG_VehicleClipVelocity(VehicleDef, &velocity, &planes + permutation[0], &normal);
        v102 = outClippedVelocity.v[2];
        v103 = outClippedVelocity.v[1];
        v104 = outClippedVelocity.v[0];
        v105 = 1i64;
        if ( v50 > 1 )
        {
          while ( 1 )
          {
            v106 = permutation[v105];
            if ( (float)((float)((float)(v103 * planes.v[3 * v106 + 1]) + (float)(v104 * planes.v[3 * v106])) + (float)(v102 * planes.v[3 * v106 + 2])) < v29 || groundTrace->hasGround && !(_DWORD)v106 )
            {
              BG_VehicleClipVelocity(VehicleDef, &outClippedVelocity, &planes + v106, &outClippedVelocity);
              BG_VehicleClipVelocity(VehicleDef, &normal, &planes + permutation[v105], &normal);
              v103 = outClippedVelocity.v[1];
              v104 = outClippedVelocity.v[0];
              v102 = outClippedVelocity.v[2];
              v107 = &planes + permutation[0];
              if ( (float)((float)((float)(outClippedVelocity.v[1] * planes.v[3 * permutation[0] + 1]) + (float)(outClippedVelocity.v[0] * v107->v[0])) + (float)(outClippedVelocity.v[2] * v107->v[2])) < v29 )
                break;
            }
LABEL_112:
            v30 = LODWORD(FLOAT_1_0);
            if ( ++v105 >= v50 )
            {
              v18 = LODWORD(dt);
              v12 = _xmm;
              v = (float *)p_origin;
              v7 = outCollisionInfo;
              goto LABEL_114;
            }
          }
          v108 = &planes + permutation[v105];
          if ( v107 == (vec3_t *)v195 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
            __debugbreak();
          if ( v108 == (vec3_t *)v195 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
            __debugbreak();
          v109 = v107->v[2];
          v110 = v107->v[1];
          v111 = v108->v[2];
          v112 = v108->v[1];
          v113 = v112 * v107->v[0];
          v114 = (float)(v110 * v111) - (float)(v109 * v112);
          v115 = LODWORD(v109);
          v116 = v111 * v107->v[0];
          v117 = DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale;
          v118 = (float)(v109 * v108->v[0]) - v116;
          v119 = v113 - (float)(v110 * v108->v[0]);
          *(float *)&v115 = fsqrt((float)((float)(v118 * v118) + (float)(v114 * v114)) + (float)(v119 * v119));
          _XMM3 = v115;
          __asm
          {
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm0, xmm3, xmm10, xmm0
          }
          v124 = v30;
          *(float *)&v124 = *(float *)&v30 / *(float *)&_XMM0;
          v123 = v124;
          *(float *)&v124 = (float)(*(float *)&v30 / *(float *)&_XMM0) * v114;
          v125 = v124;
          v127 = v123;
          *(float *)&v127 = *(float *)&v123 * v118;
          v126 = v127;
          v128 = *(float *)&v123 * v119;
          if ( !DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_tangential_clip_max_scale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v117);
          v129 = v117->current.value * VehicleDef->topSpeed;
          v130 = *(float *)&v30;
          if ( !permutation[v105] )
          {
            v131 = pm->ps;
            v132 = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove).m128_f32[0];
            in.v[0] = _mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.forwardmove).m128_f32[0] * 0.0078740157;
            v133 = v132 * 0.0078740157;
            v134 = v131->viewangles.v[1];
            in.v[1] = v133;
            in.v[2] = 0.0;
            YawVectors(v134, forward.m, &forward.m[1]);
            forward.m[2].v[0] = 0.0;
            forward.m[2].v[1] = 0.0;
            forward.m[2].v[2] = *(float *)&v30;
            Vec3Rotate(&in, &forward, &out);
            v135 = p_velocity->v[2];
            v136 = LODWORD(out.v[0]);
            *(float *)&v136 = fsqrt((float)((float)(*(float *)&v136 * *(float *)&v136) + (float)(out.v[1] * out.v[1])) + (float)(out.v[2] * out.v[2]));
            _XMM3 = v136;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm10, xmm0
            }
            v140 = *(float *)&v30 / *(float *)&_XMM0;
            v141 = out.v[0] * (float)(*(float *)&v30 / *(float *)&_XMM0);
            v142 = LODWORD(p_velocity->v[1]);
            v143 = v142;
            *(float *)&v143 = fsqrt((float)((float)(*(float *)&v142 * *(float *)&v142) + (float)(p_velocity->v[0] * p_velocity->v[0])) + (float)(v135 * v135));
            _XMM3 = v143;
            __asm
            {
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm2, xmm0
            }
            *(float *)&v143 = (float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v142) * (float)(out.v[1] * v140)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * p_velocity->v[0]) * v141)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * v135) * (float)(out.v[2] * v140));
            out.v[0] = v141;
            out.v[1] = out.v[1] * v140;
            out.v[2] = out.v[2] * v140;
            if ( *(float *)&v143 >= 0.1 && VehicleDef->type != VEH_HELICOPTER )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_tangential_clip_vel_scale, "bg_vehicle_tangential_clip_vel_scale");
              v130 = *(float *)&Float_Internal_DebugName * fsqrt((float)((float)(in.v[1] * in.v[1]) + (float)(in.v[0] * in.v[0])) + (float)(in.v[2] * in.v[2]));
            }
          }
          v148 = v126;
          LODWORD(v149) = LODWORD(v129) ^ _xmm;
          *(float *)&v148 = (float)((float)((float)(*(float *)&v126 * p_velocity->v[1]) + (float)(*(float *)&v125 * p_velocity->v[0])) + (float)(v128 * p_velocity->v[2])) * v130;
          _XMM6 = v148;
          if ( COERCE_FLOAT(LODWORD(v129) ^ _xmm) > v129 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v149, v129) )
            __debugbreak();
          __asm
          {
            vmaxss  xmm0, xmm6, xmm9
            vminss  xmm1, xmm0, xmm11
          }
          v104 = *(float *)&_XMM1 * *(float *)&v125;
          v103 = *(float *)&_XMM1 * *(float *)&v126;
          v102 = *(float *)&_XMM1 * v128;
          v153 = v125;
          *(float *)&v153 = (float)((float)((float)(*(float *)&v125 * v179) + (float)(*(float *)&v126 * v178)) + (float)(v128 * v176)) * v130;
          _XMM10 = v153;
          outClippedVelocity.v[0] = *(float *)&_XMM1 * *(float *)&v125;
          outClippedVelocity.v[1] = *(float *)&_XMM1 * *(float *)&v126;
          outClippedVelocity.v[2] = *(float *)&_XMM1 * v128;
          if ( v149 > v129 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v149, v129) )
            __debugbreak();
          __asm
          {
            vmaxss  xmm0, xmm10, xmm9
            vminss  xmm2, xmm0, xmm11
          }
          normal.v[0] = *(float *)&_XMM2 * *(float *)&v125;
          normal.v[2] = *(float *)&_XMM2 * v128;
          normal.v[1] = *(float *)&_XMM2 * *(float *)&v126;
          v157 = 1i64;
          while ( 1 )
          {
            v29 = FLOAT_0_1;
            if ( v157 != v105 && (float)((float)((float)(v103 * planes.v[3 * permutation[v157] + 1]) + (float)(v104 * planes.v[3 * permutation[v157]])) + (float)(v102 * planes.v[3 * permutation[v157] + 2])) < 0.1 )
              break;
            if ( ++v157 >= v50 )
              goto LABEL_112;
          }
LABEL_124:
          *(_QWORD *)p_velocity->v = 0i64;
          p_velocity->v[2] = 0.0;
          return 1i64;
        }
LABEL_114:
        v158 = (__m128)*(unsigned __int64 *)normal.v;
        v159 = normal.v[2];
        *(double *)velocity.v = *(double *)normal.v;
        v14 = velocity.v[0];
        p_velocity->v[0] = v104;
        velocity.v[2] = v159;
        v16 = v159;
        v15 = _mm_shuffle_ps(v158, v158, 85).m128_f32[0];
        v179 = v14;
        p_velocity->v[1] = v103;
        p_velocity->v[2] = v102;
        v176 = v159;
        v178 = v15;
      }
    }
    v160 = v177 + 1;
    v177 = v160;
    if ( v160 >= 4 )
      goto LABEL_126;
    v30 = LODWORD(FLOAT_1_0);
    v9 = vehicleState;
    p_bounds = v184;
    v51 = v182;
  }
  v160 = v177;
LABEL_126:
  if ( gravity )
  {
    p_velocity->v[0] = v14;
    p_velocity->v[1] = v15;
    p_velocity->v[2] = v16;
  }
  return v160 != 0;
}

/*
==============
BG_VehicleSteerMove
==============
*/
void BG_VehicleSteerMove(pmove_t *pm, const pml_t *pml)
{
  playerState_s *ps; 
  const VehicleDef *VehicleDef; 
  const VehicleDef *v6; 
  float v7; 
  float v10; 
  __int128 frictionBraking_low; 
  int flags; 
  unsigned int v18; 
  __int128 frametime_low; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  const dvar_t *v29; 
  float frametime; 
  float v31; 
  float v32; 
  double v33; 
  float v34; 
  vec3_t right; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  VehicleState vehicleState; 
  GroundTrace groundTrace; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1166, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  vehicleState.entity = ps->vehicleState.entity;
  v6 = VehicleDef;
  vehicleState.clipmask = 42009105;
  vehicleState.origin = ps->vehicleState.origin;
  vehicleState.angles = ps->vehicleState.angles;
  vehicleState.previousOrigin = ps->vehicleState.origin;
  vehicleState.velocity = ps->vehicleState.velocity;
  vehicleState.tilt = ps->vehicleState.tilt;
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  BG_VehicleGroundTrace(pm, &vehicleState, &groundTrace, pml->frametime);
  if ( groundTrace.onGround )
  {
    v7 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.forwardmove).m128_f32[0] * v6->topSpeed) * 0.0078740157;
    _XMM1 = 0i64;
    __asm { vroundss xmm4, xmm1, xmm2, 1 }
    vehicleState.angles.v[1] = (float)((float)((float)(vehicleState.angles.v[1] - (float)((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)pm->cmd.rightmove).m128_f32[0] * v6->rotRate) * pml->frametime) * 0.0078740157)) * 0.0027777778) - *(float *)&_XMM4) * 360.0;
    YawVectors(vehicleState.angles.v[1], &forward, &right);
    AnglesToAxis(&vehicleState.angles, &axis);
    v10 = (float)(forward.v[1] * vehicleState.velocity.v[1]) + (float)(forward.v[0] * vehicleState.velocity.v[0]);
    fsqrt((float)((float)((float)(v7 * forward.v[1]) - vehicleState.velocity.v[1]) * (float)((float)(v7 * forward.v[1]) - vehicleState.velocity.v[1])) + (float)((float)((float)(v7 * forward.v[0]) - vehicleState.velocity.v[0]) * (float)((float)(v7 * forward.v[0]) - vehicleState.velocity.v[0])));
    _XMM6 = 0i64;
    if ( pm->cmd.forwardmove )
    {
      frametime_low = LODWORD(pml->frametime);
      *(float *)&frametime_low = pml->frametime * v6->accel;
      _XMM1 = frametime_low;
      __asm { vminss  xmm3, xmm1, xmm4 }
      _XMM0 = 0u;
      __asm { vpcmpgtd xmm1, xmm0, xmm1 }
      v18 = ps->vehicleState.flags & 0xFFFFFFF3 | 4;
      __asm { vblendvps xmm7, xmm3, xmm2, xmm1 }
    }
    else
    {
      frictionBraking_low = LODWORD(v6->vehiclePhysicsDef.frictionBraking);
      *(float *)&frictionBraking_low = (float)(v6->vehiclePhysicsDef.frictionBraking * v6->accel) * pml->frametime;
      _XMM2 = frictionBraking_low;
      flags = ps->vehicleState.flags;
      __asm
      {
        vminss  xmm3, xmm2, xmm4
        vcmpless xmm0, xmm6, xmm9
        vblendvps xmm7, xmm3, xmm1, xmm0
      }
      if ( *(float *)&_XMM7 == 0.0 )
        v18 = flags & 0xFFFFFFF3;
      else
        v18 = flags & 0xFFFFFFF3 | 8;
    }
    ps->vehicleState.flags = v18;
    v24 = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
    vehicleState.groundNormal = axis.m[2];
    if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( axis.m[2].v[2] >= v24->current.value )
    {
      v33 = I_fclamp(*(float *)&_XMM7 + v10, COERCE_FLOAT(LODWORD(v6->topSpeed) ^ _xmm), v6->topSpeed);
      frametime = pml->frametime;
      vehicleState.velocity.v[1] = *(float *)&v33 * forward.v[1];
      vehicleState.velocity.v[0] = *(float *)&v33 * forward.v[0];
      vehicleState.velocity.v[2] = 0.0;
    }
    else
    {
      v25 = (float)(*(float *)&_XMM7 * forward.v[0]) + vehicleState.velocity.v[0];
      v26 = (float)(*(float *)&_XMM7 * forward.v[1]) + vehicleState.velocity.v[1];
      v27 = (float)(v25 * v25) + (float)(v26 * v26);
      vehicleState.velocity.v[1] = v26;
      vehicleState.velocity.v[0] = v25;
      if ( v27 > (float)(v6->topSpeed * v6->topSpeed) )
      {
        if ( v27 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1240, ASSERT_TYPE_ASSERT, "(forwardSpeed != 0.0f)", (const char *)&queryFormat, "forwardSpeed != 0.0f") )
          __debugbreak();
        v28 = v6->topSpeed / fsqrt(v27);
        vehicleState.velocity.v[0] = v28 * vehicleState.velocity.v[0];
        vehicleState.velocity.v[1] = v28 * vehicleState.velocity.v[1];
      }
      right.v[2] = FLOAT_N1_0;
      right.v[0] = 0.0;
      right.v[1] = 0.0;
      Vec3Cross(&axis.m[2], &right, &axis.m[1]);
      Vec3Cross(&axis.m[1], &axis.m[2], axis.m);
      v29 = DCONST_DVARFLT_bg_vehicle_gravity;
      if ( !DCONST_DVARFLT_bg_vehicle_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_gravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      frametime = pml->frametime;
      v31 = frametime * v29->current.value;
      LODWORD(v32) = COERCE_UNSIGNED_INT(v31 * axis.m[0].v[2]) ^ _xmm;
      vehicleState.velocity.v[0] = (float)(v32 * axis.m[0].v[0]) + vehicleState.velocity.v[0];
      vehicleState.velocity.v[1] = (float)(v32 * axis.m[0].v[1]) + vehicleState.velocity.v[1];
      right.v[0] = 0.0;
      right.v[1] = 0.0;
      LODWORD(right.v[2]) = LODWORD(v31) ^ _xmm;
      vehicleState.velocity.v[2] = (float)(v32 * axis.m[0].v[2]) + vehicleState.velocity.v[2];
    }
    BG_VehicleGroundMove(pm, &vehicleState, &groundTrace, 0, frametime);
    ps->vehicleState.flags &= ~2u;
  }
  else
  {
    AnglesToAxis(&vehicleState.angles, &axis);
    v34 = pml->frametime;
    vehicleState.groundNormal = axis.m[2];
    BG_VehicleAirMove(pm, &vehicleState, &groundTrace, v34);
    ps->vehicleState.flags |= 2u;
  }
  BG_VehicleGroundPlant(pm, &vehicleState, &groundTrace, 1, pml->frametime);
  pm->ps->vehicleState.origin = vehicleState.origin;
  pm->ps->vehicleState.angles = vehicleState.angles;
  pm->ps->vehicleState.velocity = vehicleState.velocity;
  pm->ps->vehicleState.tilt = vehicleState.tilt;
}

/*
==============
BG_VehicleStepSlideMove
==============
*/
void BG_VehicleStepSlideMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float stepsize, float dt, bool useCapsuleForBrushCollision)
{
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  int entity; 
  float v19; 
  float v20; 
  float v21; 
  bool v22; 
  float v23; 
  float v24; 
  signed int m_characterCount; 
  float fraction; 
  double Float_Internal_DebugName; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  int clipmask; 
  int v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  vec3_t start; 
  vec3_t v48; 
  vec3_t end; 
  trace_t results; 
  VehicleCollisionInfo outCollisionInfo; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 819, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 820, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 821, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  v11 = vehicleState->origin.v[1];
  start.v[0] = vehicleState->origin.v[0];
  start.v[2] = vehicleState->origin.v[2];
  v43 = vehicleState->velocity.v[0];
  v42 = vehicleState->velocity.v[1];
  v44 = vehicleState->velocity.v[2];
  start.v[1] = v11;
  if ( !BG_VehicleSlideMove(pm, vehicleState, groundTrace, gravity, dt, useCapsuleForBrushCollision, &outCollisionInfo) )
    goto LABEL_25;
  v12 = vehicleState->origin.v[0];
  v13 = vehicleState->origin.v[1];
  v14 = vehicleState->origin.v[2];
  v15 = vehicleState->velocity.v[0];
  v16 = vehicleState->velocity.v[1];
  v17 = vehicleState->velocity.v[2];
  clipmask = vehicleState->clipmask;
  entity = vehicleState->entity;
  v45 = v12 - start.v[0];
  end.v[0] = start.v[0];
  v46 = v13 - start.v[1];
  end.v[1] = start.v[1];
  end.v[2] = stepsize + start.v[2];
  BG_Vehicle_Trace(pm, &start, &end, &vehicleState->bounds, entity, clipmask, &results);
  v19 = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  v20 = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  v21 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  vehicleState->origin.v[2] = v21;
  vehicleState->origin.v[0] = v19;
  vehicleState->origin.v[1] = v20;
  vehicleState->velocity.v[0] = v43;
  vehicleState->velocity.v[1] = v42;
  vehicleState->velocity.v[2] = v44;
  BG_VehicleSlideMove(pm, vehicleState, groundTrace, gravity, dt, useCapsuleForBrushCollision, &outCollisionInfo);
  v22 = groundTrace->hasGround == 0;
  v23 = vehicleState->origin.v[1];
  v24 = vehicleState->origin.v[2];
  v48.v[0] = vehicleState->origin.v[0];
  v48.v[1] = v23;
  if ( v22 )
    v48.v[2] = (float)(start.v[2] - v21) + v24;
  else
    v48.v[2] = (float)((float)(start.v[2] - v21) - (float)(stepsize * 0.5)) + v24;
  BG_Vehicle_Trace(pm, &vehicleState->origin, &v48, &vehicleState->bounds, vehicleState->entity, vehicleState->clipmask, &results);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
  if ( Trace_GetEntityHitId(&results) >= m_characterCount && !results.startsolid )
  {
    fraction = results.fraction;
    if ( results.fraction >= 1.0 )
    {
      vehicleState->origin.v[2] = (float)(start.v[2] - v21) + vehicleState->origin.v[2];
      return;
    }
    if ( results.walkable )
    {
LABEL_23:
      v28 = v48.v[1];
      v29 = (float)((float)(v48.v[0] - vehicleState->origin.v[0]) * fraction) + vehicleState->origin.v[0];
      vehicleState->origin.v[0] = v29;
      v30 = v28 - vehicleState->origin.v[1];
      v31 = v48.v[2];
      v32 = (float)(v30 * fraction) + vehicleState->origin.v[1];
      vehicleState->origin.v[1] = v32;
      v33 = (float)((float)(v32 - start.v[1]) * v42) + (float)((float)(v29 - start.v[0]) * v43);
      vehicleState->origin.v[2] = (float)((float)(v31 - vehicleState->origin.v[2]) * fraction) + vehicleState->origin.v[2];
      if ( v33 > (float)((float)((float)(v43 * v45) + (float)(v42 * v46)) + 0.001) )
        return;
      goto LABEL_24;
    }
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_ground_max_normal, "bg_vehicle_ground_max_normal");
    if ( results.normal.v[2] >= *(float *)&Float_Internal_DebugName )
    {
      fraction = results.fraction;
      goto LABEL_23;
    }
  }
LABEL_24:
  vehicleState->origin.v[0] = v12;
  vehicleState->origin.v[1] = v13;
  vehicleState->origin.v[2] = v14;
  vehicleState->velocity.v[0] = v15;
  vehicleState->velocity.v[1] = v16;
  vehicleState->velocity.v[2] = v17;
LABEL_25:
  if ( groundTrace->hasGround )
  {
    v34 = vehicleState->origin.v[1];
    v41 = vehicleState->clipmask;
    v35 = vehicleState->entity;
    v48.v[0] = vehicleState->origin.v[0];
    v48.v[2] = vehicleState->origin.v[2] - stepsize;
    v48.v[1] = v34;
    BG_Vehicle_Trace(pm, &vehicleState->origin, &v48, &vehicleState->bounds, v35, v41, &results);
    v36 = results.fraction;
    if ( results.fraction < 1.0 )
    {
      v37 = v48.v[1];
      vehicleState->origin.v[0] = (float)((float)(v48.v[0] - vehicleState->origin.v[0]) * results.fraction) + vehicleState->origin.v[0];
      v38 = v37 - vehicleState->origin.v[1];
      v39 = v48.v[2];
      vehicleState->origin.v[1] = (float)(v38 * v36) + vehicleState->origin.v[1];
      vehicleState->origin.v[2] = (float)((float)(v39 - vehicleState->origin.v[2]) * v36) + vehicleState->origin.v[2];
    }
  }
}

/*
==============
BG_VehicleStrafeMove
==============
*/
void BG_VehicleStrafeMove(pmove_t *pm, const pml_t *pml)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  playerState_s *ps; 
  const VehicleDef *VehicleDef; 
  unsigned int forwardmove; 
  __m128i v15; 
  unsigned int rightmove; 
  __m128 v17; 
  __m128 v18; 
  float v21; 
  float v23; 
  double v25; 
  float v28; 
  float v29; 
  __int128 rotRate_low; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v48; 
  double v49; 
  unsigned int v50; 
  const dvar_t *v51; 
  float v52; 
  double v53; 
  int flags; 
  unsigned int v55; 
  const dvar_t *v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  double v62; 
  const dvar_t *v63; 
  int v64; 
  vec2_t vec; 
  float v66; 
  vec3_t v67; 
  vec3_t forward; 
  vec3_t right; 
  float v70; 
  float v71; 
  float v72; 
  VehicleState vehicleState; 
  tmat33_t<vec3_t> axis; 
  GroundTrace groundTrace; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 
  __int128 v80; 
  __int128 v81; 
  __int128 v82; 
  __int128 v83; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1318, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  AnglesToAxis(&ps->vehicleState.angles, &axis);
  vehicleState.entity = ps->vehicleState.entity;
  vehicleState.clipmask = 42009105;
  vehicleState.origin = ps->vehicleState.origin;
  vehicleState.angles = ps->vehicleState.angles;
  vehicleState.previousOrigin = ps->vehicleState.origin;
  vehicleState.velocity = ps->vehicleState.velocity;
  vehicleState.tilt = ps->vehicleState.tilt;
  vehicleState.groundNormal = axis.m[2];
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  BG_VehicleGroundTrace(pm, &vehicleState, &groundTrace, pml->frametime);
  if ( !groundTrace.onGround || (ps->vehicleState.flags & 2) != 0 )
  {
    BG_VehicleAirMove(pm, &vehicleState, &groundTrace, pml->frametime);
    goto LABEL_49;
  }
  forwardmove = pm->cmd.forwardmove;
  v83 = v2;
  v82 = v3;
  v81 = v4;
  v80 = v5;
  v15 = (__m128i)forwardmove;
  rightmove = pm->cmd.rightmove;
  *(float *)v15.m128i_i32 = _mm_cvtepi32_ps(v15).m128_f32[0];
  v79 = v6;
  v17 = _mm_cvtepi32_ps((__m128i)rightmove);
  v18 = v17;
  v18.m128_f32[0] = fsqrt((float)((float)(v17.m128_f32[0] * v17.m128_f32[0]) + (float)(*(float *)v15.m128i_i32 * *(float *)v15.m128i_i32)) * 0.000062000123);
  _XMM3 = v18;
  __asm { vcmpless xmm0, xmm3, cs:__real@80000000 }
  v21 = v18.m128_f32[0] * VehicleDef->topSpeed;
  v78 = v7;
  v77 = v8;
  v76 = v9;
  __asm { vblendvps xmm0, xmm3, xmm14, xmm0 }
  v23 = (float)(*(float *)v15.m128i_i32 * 0.0078740157) * (float)(1.0 / *(float *)&_XMM0);
  v18.m128_f32[0] = (float)(v17.m128_f32[0] * 0.0078740157) * (float)(1.0 / *(float *)&_XMM0);
  YawVectors(ps->viewangles.v[1], &forward, &right);
  _XMM8 = 0i64;
  vec.v[1] = (float)(v23 * right.v[0]) + (float)(v18.m128_f32[0] * right.v[1]);
  v70 = 0.0;
  v71 = 0.0;
  v72 = FLOAT_1_0;
  vec.v[0] = (float)(v23 * forward.v[0]) + (float)(v18.m128_f32[0] * forward.v[1]);
  v66 = 0.0;
  v25 = vectosignedyaw(&vec);
  _XMM11 = 0i64;
  __asm { vroundss xmm3, xmm11, xmm2, 1 }
  v28 = (float)((float)((float)(*(float *)&v25 - vehicleState.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  v29 = *(float *)&v25;
  if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > 90.0 )
  {
    __asm { vroundss xmm3, xmm11, xmm0, 1 }
    v29 = (float)((float)((float)(*(float *)&v25 * 0.0027777778) + 0.5) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm11, xmm0, 1 }
    v28 = (float)((float)((float)(v29 - vehicleState.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  }
  rotRate_low = LODWORD(VehicleDef->rotRate);
  *(float *)&rotRate_low = VehicleDef->rotRate * pml->frametime;
  if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > *(float *)&rotRate_low )
  {
    _XMM1 = rotRate_low ^ (unsigned int)_xmm;
    __asm
    {
      vcmpless xmm0, xmm8, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
      vroundss xmm3, xmm11, xmm1, 1
    }
    v29 = (float)((float)((float)(*(float *)&_XMM0 + vehicleState.angles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    YawVectors(v29, &v67, NULL);
    _XMM2 = LODWORD(v67.v[0]);
    v21 = (float)((float)(v67.v[1] * vec.v[1]) + (float)(v67.v[0] * vec.v[0])) * VehicleDef->topSpeed;
    __asm { vunpcklps xmm2, xmm2, xmm3 }
    vec = *(vec2_t *)&_XMM2;
    v66 = v67.v[2];
  }
  if ( v21 == 0.0 )
  {
    v40 = forward.v[0];
    v39 = forward.v[1];
    vec.v[0] = forward.v[0];
    vec.v[1] = forward.v[1];
    v66 = forward.v[2];
  }
  else
  {
    v39 = vec.v[1];
    v40 = vec.v[0];
    vehicleState.angles.v[1] = v29;
  }
  v41 = (float)(v39 * vehicleState.velocity.v[1]) + (float)(v40 * vehicleState.velocity.v[0]);
  v42 = v21 - v41;
  if ( v21 == 0.0 )
    goto LABEL_20;
  if ( v41 == 0.0 )
    goto LABEL_19;
  _XMM3 = LODWORD(FLOAT_N1_0);
  __asm
  {
    vcmpless xmm0, xmm8, xmm9
    vcmpless xmm1, xmm8, xmm7
    vblendvps xmm2, xmm3, xmm14, xmm0
    vblendvps xmm1, xmm3, xmm14, xmm1
  }
  if ( *(float *)&_XMM2 == *(float *)&_XMM1 )
  {
LABEL_19:
    v48 = VehicleDef->accel * pml->frametime;
    v49 = I_fclamp(v42, COERCE_FLOAT(LODWORD(v48) ^ _xmm), v48);
    v50 = ps->vehicleState.flags & 0xFFFFFFF3 | 4;
    v42 = *(float *)&v49;
  }
  else
  {
LABEL_20:
    v51 = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
    if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v51);
    if ( axis.m[2].v[2] > v51->current.value )
    {
      v52 = (float)(VehicleDef->vehiclePhysicsDef.frictionBraking * VehicleDef->accel) * pml->frametime;
      v53 = I_fclamp(v42, COERCE_FLOAT(LODWORD(v52) ^ _xmm), v52);
      v42 = *(float *)&v53;
    }
    flags = ps->vehicleState.flags;
    if ( v42 == 0.0 )
      v55 = flags & 0xFFFFFFF7;
    else
      v55 = flags | 8;
    v50 = v55 & 0xFFFFFFFB;
  }
  ps->vehicleState.flags = v50;
  v56 = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
  if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( axis.m[2].v[2] >= v56->current.value )
  {
    v62 = I_fclamp(v42 + v41, COERCE_FLOAT(LODWORD(VehicleDef->topSpeed) ^ _xmm), VehicleDef->topSpeed);
    v61 = *(float *)&v62 * vec.v[0];
    vehicleState.velocity.v[1] = *(float *)&v62 * vec.v[1];
    vehicleState.velocity.v[2] = 0.0;
  }
  else
  {
    v57 = (float)(v42 * vec.v[0]) + vehicleState.velocity.v[0];
    v58 = (float)(v42 * vec.v[1]) + vehicleState.velocity.v[1];
    v59 = (float)(v57 * v57) + (float)(v58 * v58);
    vehicleState.velocity.v[1] = v58;
    vehicleState.velocity.v[0] = v57;
    if ( v59 <= (float)(VehicleDef->topSpeed * VehicleDef->topSpeed) )
      goto LABEL_40;
    if ( v59 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1419, ASSERT_TYPE_ASSERT, "(targetSpeed != 0.0f)", (const char *)&queryFormat, "targetSpeed != 0.0f") )
      __debugbreak();
    v60 = VehicleDef->topSpeed / fsqrt(v59);
    v61 = v60 * vehicleState.velocity.v[0];
    vehicleState.velocity.v[1] = v60 * vehicleState.velocity.v[1];
  }
  vehicleState.velocity.v[0] = v61;
LABEL_40:
  v63 = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
  if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  v64 = axis.m[2].v[2] < v63->current.value || !groundTrace.validGroundNormal;
  BG_VehicleGroundMove(pm, &vehicleState, &groundTrace, v64, pml->frametime);
LABEL_49:
  if ( (unsigned int)BG_VehicleGroundPlant(pm, &vehicleState, &groundTrace, 1, pml->frametime) || groundTrace.onGround )
    ps->vehicleState.flags &= ~2u;
  else
    ps->vehicleState.flags |= 2u;
  pm->ps->vehicleState.origin = vehicleState.origin;
  pm->ps->vehicleState.angles = vehicleState.angles;
  pm->ps->vehicleState.velocity = vehicleState.velocity;
  ps->vehicleState.tilt = vehicleState.tilt;
}

/*
==============
BG_Vehicle_ApplyCameraInfluence
==============
*/
void BG_Vehicle_ApplyCameraInfluence(const PlayerVehicleState *vehicleState, const VehicleDef *vehicleDef, const vec3_t *userAngles, const vec3_t *vehicleAngles, vec3_t *userAnglesOut)
{
  float v10; 
  float v11; 
  float v12; 
  float camPitchInfluence; 
  float camYawInfluence; 
  float camRollInfluence; 

  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1795, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1796, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( vehicleState->targetEntity == 2047 )
  {
    if ( vehicleState->entity == 2047 )
    {
      v10 = 0.0;
      v11 = 0.0;
      v12 = 0.0;
    }
    else
    {
      camPitchInfluence = vehicleDef->camPitchInfluence;
      __asm { vxorpd  xmm9, xmm9, xmm9 }
      if ( (camPitchInfluence < 0.0 || camPitchInfluence > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1807, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camPitchInfluence ) && ( vehicleDef->camPitchInfluence ) <= ( 1.0f )", "vehicleDef->camPitchInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", camPitchInfluence, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      camYawInfluence = vehicleDef->camYawInfluence;
      if ( (camYawInfluence < 0.0 || camYawInfluence > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1808, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camYawInfluence ) && ( vehicleDef->camYawInfluence ) <= ( 1.0f )", "vehicleDef->camYawInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", camYawInfluence, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      camRollInfluence = vehicleDef->camRollInfluence;
      if ( (camRollInfluence < 0.0 || camRollInfluence > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1809, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camRollInfluence ) && ( vehicleDef->camRollInfluence ) <= ( 1.0f )", "vehicleDef->camRollInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", camRollInfluence, *(double *)&_XMM9, DOUBLE_1_0) )
        __debugbreak();
      v10 = vehicleDef->camPitchInfluence;
      v11 = vehicleDef->camYawInfluence;
      v12 = vehicleDef->camRollInfluence;
    }
  }
  else
  {
    v10 = FLOAT_1_0;
    v11 = FLOAT_1_0;
    v12 = FLOAT_1_0;
  }
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  userAnglesOut->v[0] = (float)((float)((float)((float)((float)(vehicleAngles->v[0] - userAngles->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v10) + userAngles->v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  userAnglesOut->v[1] = (float)((float)((float)((float)((float)(vehicleAngles->v[1] - userAngles->v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v11) + userAngles->v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  userAnglesOut->v[2] = (float)((float)((float)((float)((float)(vehicleAngles->v[2] - userAngles->v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v12) + userAngles->v[2];
}

/*
==============
BG_Vehicle_ClampCameraAngle
==============
*/
double BG_Vehicle_ClampCameraAngle(float angle, float clamp)
{
  _XMM2 = 0i64;
  __asm { vroundss xmm4, xmm2, xmm3, 1 }
  return I_fclamp((float)((float)(angle * 0.0027777778) - *(float *)&_XMM4) * 360.0, COERCE_FLOAT(LODWORD(clamp) ^ _xmm), clamp);
}

/*
==============
BG_Vehicle_ClampCameraUserAnglesToVehicleSpace
==============
*/
void BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(const vec3_t *vehicleAngles, const vec3_t *userAngles, const VehicleDef *vehicleDef, vec3_t *viewAnglesOut)
{
  float v8; 
  float v9; 
  float v13; 
  double v16; 
  double v18; 
  vec3_t v19; 
  vec3_t v20; 
  vec3_t angles; 
  vec3_t v22; 
  tmat33_t<vec3_t> v23; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1752, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  v8 = (float)(vehicleDef->vehCam_anglesRoll + vehicleAngles->v[2]) * 0.0027777778;
  v9 = vehicleDef->vehCam_anglesYaw + vehicleAngles->v[1];
  _XMM10 = 0i64;
  __asm
  {
    vroundss xmm2, xmm10, xmm1, 1
    vroundss xmm3, xmm10, xmm2, 1
  }
  angles.v[0] = (float)((float)((float)(vehicleDef->vehCam_anglesPitch + vehicleAngles->v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  v13 = (float)((float)(v9 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  angles.v[1] = v13;
  angles.v[2] = (float)(v8 - *(float *)&_XMM3) * 360.0;
  AnglesToAxis(&angles, &axis);
  AnglesToAxis(userAngles, &in1);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&in1, &out, &v23);
  AxisToAngles(&v23, &v19);
  *(float *)&_XMM2 = vehicleDef->vehCam_pitchClamp;
  v20 = v19;
  __asm { vroundss xmm4, xmm10, xmm3, 1 }
  v16 = I_fclamp((float)((float)(0.0027777778 * v19.v[0]) - *(float *)&_XMM4) * 360.0, COERCE_FLOAT(_XMM2 ^ _xmm), *(float *)&_XMM2);
  *(float *)&_XMM2 = vehicleDef->vehCam_yawClamp;
  v19.v[0] = *(float *)&v16;
  __asm { vroundss xmm4, xmm10, xmm3, 1 }
  v18 = I_fclamp((float)((float)(0.0027777778 * v20.v[1]) - *(float *)&_XMM4) * 360.0, COERCE_FLOAT(_XMM2 ^ _xmm), *(float *)&_XMM2);
  v20.v[1] = *(float *)&v18;
  AnglesToAxis(&v19, &v23);
  MatrixMultiply(&v23, &axis, &in1);
  AxisToAngles(&in1, &v22);
  viewAnglesOut->v[0] = v22.v[0];
  AnglesToAxis(&v20, &v23);
  MatrixMultiply(&v23, &axis, &in1);
  AxisToAngles(&in1, &v22);
  viewAnglesOut->v[1] = v22.v[1];
}

/*
==============
BG_Vehicle_DebugTestVehicleCollisionPoint
==============
*/
void BG_Vehicle_DebugTestVehicleCollisionPoint(const pmove_t *pm)
{
  const dvar_t *v1; 
  playerState_s *ps; 
  Bounds bounds; 
  trace_t results; 

  v1 = DCONST_DVARINT_playerCharacterCollisionDebugWallExploits;
  if ( !DCONST_DVARINT_playerCharacterCollisionDebugWallExploits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playerCharacterCollisionDebugWallExploits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer != -1 )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2298, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    if ( !pm->isExtrapolation && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) )
    {
      ps = pm->ps;
      if ( ps->vehicleState.entity != 2047 )
      {
        BG_GetVehicleBounds(pm, &bounds);
        BG_Vehicle_Trace(pm, &ps->vehicleState.origin, &ps->vehicleState.origin, &bounds, ps->vehicleState.entity, 41943697, &results);
        if ( results.allsolid || results.startsolid )
        {
          if ( results.hitId == 2046 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2323, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Vehicle collision in static geo.") )
              __debugbreak();
          }
          else
          {
            Com_Printf(0, "Vehicle collision in non-static geo.");
          }
        }
      }
    }
  }
}

/*
==============
BG_Vehicle_GetCameraTargetFovAndOffset
==============
*/
void BG_Vehicle_GetCameraTargetFovAndOffset(const VehicleDef *vehDef, float absSpeed, float *targetFov, float *targetFovOffset)
{
  float camFovSpeed; 
  double v8; 

  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1828, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  camFovSpeed = vehDef->camFovSpeed;
  if ( camFovSpeed <= 0.0 )
  {
    if ( targetFov )
      *targetFov = vehDef->camFovIncrease;
    if ( targetFovOffset )
      *targetFovOffset = vehDef->camFovOffset;
  }
  else
  {
    v8 = I_fclamp((float)(0.05681818 / camFovSpeed) * absSpeed, 0.0, 1.0);
    if ( targetFov )
      *targetFov = *(float *)&v8 * vehDef->camFovIncrease;
    if ( targetFovOffset )
      *targetFovOffset = *(float *)&v8 * vehDef->camFovOffset;
  }
}

/*
==============
BG_Vehicle_GetFlashTag
==============
*/
__int64 BG_Vehicle_GetFlashTag(int barrelIndex)
{
  __int64 v1; 
  int v4; 

  v1 = barrelIndex;
  if ( (unsigned int)barrelIndex >= 2 )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 101, ASSERT_TYPE_ASSERT, "(unsigned)( barrelIndex ) < (unsigned)( VEHICLE_MAX_BARRELS )", "barrelIndex doesn't index VEHICLE_MAX_BARRELS\n\t%i not in [0, %i)", barrelIndex, v4) )
      __debugbreak();
  }
  return *(unsigned int *)s_flashTags[v1];
}

/*
==============
BG_Vehicle_GetStickerCamoMaterialIndices
==============
*/
void BG_Vehicle_GetStickerCamoMaterialIndices(const unsigned int *outStickerAndCamo, VehicleStickerCamoInfo *outStickerCamoInfo)
{
  unsigned int v2; 

  v2 = *outStickerAndCamo;
  outStickerCamoInfo->stickerIndices[0] = *outStickerAndCamo & 0x1FF;
  outStickerCamoInfo->stickerIndices[1] = (v2 >> 9) & 0x1FF;
  outStickerCamoInfo->camoIndex = v2 >> 18;
}

/*
==============
BG_Vehicle_HasMissileBlending
==============
*/
bool BG_Vehicle_HasMissileBlending(const entityState_t *missileEs)
{
  if ( !missileEs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2033, ASSERT_TYPE_ASSERT, "(missileEs)", (const char *)&queryFormat, "missileEs") )
    __debugbreak();
  if ( missileEs->eType != ET_MISSILE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2034, ASSERT_TYPE_ASSERT, "(missileEs->eType == ET_MISSILE)", (const char *)&queryFormat, "missileEs->eType == ET_MISSILE") )
    __debugbreak();
  return 0;
}

/*
==============
BG_Vehicle_PackPhysicsParams
==============
*/

void __fastcall BG_Vehicle_PackPhysicsParams(LerpEntityStateVehicle *lerp, float throttle, bool isBraking, double wheelAveSpinSpeed)
{
  double v6; 
  int v7; 

  if ( !lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1887, ASSERT_TYPE_ASSERT, "(lerp)", (const char *)&queryFormat, "lerp") )
    __debugbreak();
  lerp->flags &= 0xFFFFFu;
  v6 = I_fclamp(COERCE_FLOAT(LODWORD(throttle) & _xmm), 0.0, 1.0);
  v7 = MSG_PackUnsignedFloat(*(float *)&v6, 1.0, 3u);
  _XMM8 = *(_OWORD *)&wheelAveSpinSpeed & _xmm;
  __asm { vminss  xmm0, xmm8, xmm1; value }
  lerp->flags |= ((8 * isBraking) | v7 | (16 * MSG_PackUnsignedFloat(*(float *)&_XMM0, 360.0, 5u))) << 20;
}

/*
==============
BG_Vehicle_SetStickerCamoMaterialIndices
==============
*/
void BG_Vehicle_SetStickerCamoMaterialIndices(const VehicleStickerCamoInfo *inputValue, unsigned int *outStickerAndCamo)
{
  *outStickerAndCamo = inputValue->stickerIndices[0] & 0x1FF | (((inputValue->camoIndex << 9) | inputValue->stickerIndices[1] & 0x1FF) << 9);
}

/*
==============
BG_Vehicle_Trace
==============
*/
void BG_Vehicle_Trace(const pmove_t *pm, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask, trace_t *results)
{
  BgTrace *m_trace; 
  char v12; 
  bool v13; 
  int passEntityNum; 
  trace_t *v15; 
  playerState_s *ps; 
  int v17; 
  int ignoreEntities[4]; 
  PhysicsQuery_ContextSettings traceContext; 

  m_trace = pm->m_trace;
  v12 = BYTE1(m_trace->m_flags) & 1;
  v13 = (m_trace->m_flags & 2) != 0;
  if ( BG_Vehicle_UsingWallCollisionFix() )
    pm->m_trace->m_flags |= 2u;
  passEntityNum = skipEntity;
  v15 = results;
  pm->m_trace->m_flags |= 0x100u;
  BgTrace::LegacyTrace(pm->m_trace, pm, v15, start, end, bounds, passEntityNum, contentMask);
  ps = pm->ps;
  ignoreEntities[0] = passEntityNum;
  v17 = 1;
  if ( BGVehicles::IsRemoteDrivingVehicleAndLinked(ps, passEntityNum) )
  {
    v17 = 2;
    ignoreEntities[1] = pm->ps->clientNum;
  }
  traceContext.m_flags = 8;
  if ( BG_Vehicle_UsingWallCollisionFix() )
    traceContext.m_flags |= 0x20;
  PM_traceIgnoreList(pm, results, start, end, bounds, ignoreEntities, v17, NULL, 0, contentMask, 0, NULL, &traceContext);
  if ( !v12 )
    pm->m_trace->m_flags &= ~0x100u;
  if ( !v13 )
    pm->m_trace->m_flags &= ~2u;
}

/*
==============
BG_Vehicle_TraceCapsule
==============
*/
void BG_Vehicle_TraceCapsule(const pmove_t *pm, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask, trace_t *outResults)
{
  Physics_WorldId v11; 
  int numSkipEntities; 
  playerState_s *v13; 
  Physics_WorldId v14; 
  const playerState_s *ps; 
  int skipEntities[4]; 
  PhysicsQuery_ContextSettings traceContext; 

  v11 = pm->m_bgHandler->GetPhysicsWorldId((BgHandler *)pm->m_bgHandler);
  numSkipEntities = 1;
  v13 = pm->ps;
  v14 = v11;
  skipEntities[0] = skipEntity;
  if ( BGVehicles::IsRemoteDrivingVehicleAndLinked(v13, skipEntity) )
  {
    numSkipEntities = 2;
    skipEntities[1] = pm->ps->clientNum;
  }
  ps = pm->ps;
  traceContext.m_flags = 8;
  PhysicsQuery_LegacyVehicleCapsuleTrace(v14, outResults, start, end, bounds, skipEntities, numSkipEntities, contentMask, ps, 0, &traceContext);
}

/*
==============
BG_Vehicle_UnpackPhysicsParams
==============
*/
void BG_Vehicle_UnpackPhysicsParams(const LerpEntityStateVehicle *lerp, float *outThrottle, bool *outIsBraking, float *outWheelAveSpinSpeed)
{
  signed int v8; 
  double v9; 
  double v10; 

  if ( !lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1908, ASSERT_TYPE_ASSERT, "(lerp)", (const char *)&queryFormat, "lerp") )
    __debugbreak();
  v8 = lerp->flags >> 20;
  v9 = MSG_UnpackUnsignedFloat(v8 & 7, 1.0, 3u);
  *outThrottle = *(float *)&v9;
  *outIsBraking = (v8 >> 3) & 1;
  v10 = MSG_UnpackUnsignedFloat((v8 >> 4) & 0x1F, 360.0, 5u);
  *outWheelAveSpinSpeed = *(float *)&v10;
}

/*
==============
BG_Vehicle_UsingWallCollisionFix
==============
*/
bool BG_Vehicle_UsingWallCollisionFix()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_bg_vehicle_wall_collision_fix;
  if ( !DVARBOOL_bg_vehicle_wall_collision_fix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_wall_collision_fix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100);
}

/*
==============
BGVehicles::GetBone
==============
*/
__int64 BGVehicles::GetBone(BGVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, VehicleBone bone)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2053, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bone is not defined for handler") )
    __debugbreak();
  return 0i64;
}

/*
==============
BGVehicles::GetFirstTreadBoneTag
==============
*/
__int64 BGVehicles::GetFirstTreadBoneTag(const VehicleDef *vehDef, int sideIndex)
{
  __int64 v2; 

  v2 = sideIndex;
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2222, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2223, ASSERT_TYPE_ASSERT, "(sideIndex < (MAX_MIDCAGE_CLIPPLANES))", (const char *)&queryFormat, "sideIndex < VEHICLE_TREAD_ANIMS_PER_VEHICLE") )
    __debugbreak();
  if ( vehDef->vehiclePhysicsDef.treads_boneCount )
    return (unsigned int)vehDef->vehiclePhysicsDef.treads_firstBones[v2];
  else
    return 0i64;
}

/*
==============
BGVehicles::GetOtherWheelBoneTag
==============
*/
__int64 BGVehicles::GetOtherWheelBoneTag(const VehicleDef *vehDef, int wheelIndex)
{
  __int64 v2; 

  v2 = wheelIndex;
  if ( (!vehDef || vehDef->type != VEH_TREADED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2175, ASSERT_TYPE_ASSERT, "(vehDef && vehDef->type == VEH_TREADED)", (const char *)&queryFormat, "vehDef && vehDef->type == VEH_TREADED") )
    __debugbreak();
  if ( (int)v2 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2176, ASSERT_TYPE_ASSERT, "(wheelIndex < 4)", (const char *)&queryFormat, "wheelIndex < VEHICLE_MAX_OTHERWHEEL_COUNT") )
    __debugbreak();
  return *(unsigned int *)defaultTags_0[v2];
}

/*
==============
BGVehicles::GetPlayerBoneTags
==============
*/
const scr_string_t *BGVehicles::GetPlayerBoneTags(int *outCountTags)
{
  if ( dword_14BB47758 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14BB47758);
    if ( dword_14BB47758 == -1 )
    {
      vehiclePlayerTags[0] = (const scr_string_t)scr_const.tag_player;
      vehiclePlayerTags[1] = (const scr_string_t)scr_const.tag_rider;
      vehiclePlayerTags[2] = (const scr_string_t)scr_const.tag_driver;
      j__Init_thread_footer(&dword_14BB47758);
    }
  }
  *outCountTags = 3;
  return vehiclePlayerTags;
}

/*
==============
BGVehicles::GetPlayerIndex
==============
*/
__int64 BGVehicles::GetPlayerIndex(const entityState_t *es)
{
  unsigned __int8 playerIndex; 

  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2016, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((es->eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2017, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( es ))", (const char *)&queryFormat, "BG_IsVehicleEntity( es )") )
    __debugbreak();
  playerIndex = es->staticState.vehiclePlayer.playerIndex;
  if ( playerIndex )
    return (unsigned int)playerIndex - 1;
  else
    return 0i64;
}

/*
==============
BGVehicles::GetTreadBoneCount
==============
*/
__int64 BGVehicles::GetTreadBoneCount(const VehicleDef *vehDef, int sideIndex)
{
  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2234, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( (unsigned int)sideIndex >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2235, ASSERT_TYPE_ASSERT, "(sideIndex < (MAX_MIDCAGE_CLIPPLANES))", (const char *)&queryFormat, "sideIndex < VEHICLE_TREAD_ANIMS_PER_VEHICLE") )
    __debugbreak();
  return (unsigned int)vehDef->vehiclePhysicsDef.treads_boneCount;
}

/*
==============
BGVehicles::GetValidWheelBoneTagNames
==============
*/
const char *BGVehicles::GetValidWheelBoneTagNames(const VehicleDef *vehDef)
{
  const char *result; 

  if ( !vehDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2067, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( vehDef->vehiclePhysicsDef.physicsEnabled )
    return "<set in gdt. physics_wheelBones[] array>";
  result = "tag_wheel_front_left\ntag_wheel_front_right\ntag_wheel_back_left\ntag_wheel_back_right\ntag_wheel_middle_left\ntag_wheel_middle_right\ntag_wheel_extra_left_1\ntag_wheel_extra_right_1\ntag_wheel_extra_left_2\ntag_wheel_extra_right_2\ntag_wheel_extra_left_3\ntag_wheel_extra_right_3";
  if ( vehDef->type != VEH_TREADED )
    return "tag_wheel_center_front_left\ntag_wheel_center_front_right\ntag_wheel_center_back_left\ntag_wheel_center_back_right\ntag_wheel_middle_left\ntag_wheel_middle_right\ntag_wheel_extra_left_1\ntag_wheel_extra_right_1\ntag_wheel_extra_left_2\ntag_wheel_extra_right_2\ntag_wheel_extra_left_3\ntag_wheel_extra_right_3";
  return result;
}

/*
==============
BGVehicles::GetVehicleDef
==============
*/
const VehicleDef *BGVehicles::GetVehicleDef(BGVehicles *this, const playerState_s *ps)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2046, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "vehicle is not defined for handler") )
    __debugbreak();
  return 0i64;
}

/*
==============
BGVehicles::GetWheelBoneTag
==============
*/
__int64 BGVehicles::GetWheelBoneTag(const VehicleDef *vehDef, int wheelIndex)
{
  __int64 v2; 

  v2 = wheelIndex;
  if ( vehDef && vehDef->vehiclePhysicsDef.physicsEnabled )
  {
    if ( wheelIndex >= vehDef->vehiclePhysicsDef.physics_numWheels )
      return 0i64;
    else
      return (unsigned int)vehDef->vehiclePhysicsDef.physics_wheelBones[wheelIndex];
  }
  else
  {
    if ( (unsigned int)wheelIndex >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2161, ASSERT_TYPE_ASSERT, "(unsigned)( wheelIndex ) < (unsigned)( 12 )", "wheelIndex doesn't index VEHICLE_MAX_WHEEL_COUNT\n\t%i not in [0, %i)", wheelIndex, 12) )
      __debugbreak();
    if ( vehDef && vehDef->type == VEH_TREADED )
      return *(unsigned int *)defaultTagsForNonPhysicsTanks[v2];
    else
      return *(unsigned int *)defaultTags[v2];
  }
}

/*
==============
BGVehicles::GetWheelCount
==============
*/
__int64 BGVehicles::GetWheelCount(const VehicleDef *vehDef)
{
  VehicleType type; 
  int v2; 
  __int64 result; 

  if ( !vehDef )
    return 12i64;
  type = vehDef->type;
  if ( vehDef->vehiclePhysicsDef.physicsEnabled )
  {
    v2 = (unsigned __int8)type - 12;
    if ( !v2 || v2 == 1 )
      return 0i64;
    else
      return (unsigned int)vehDef->vehiclePhysicsDef.physics_numWheels;
  }
  else
  {
    result = 12i64;
    if ( type == VEH_WHEELS_4 )
      return 4i64;
  }
  return result;
}

/*
==============
BGVehicles::GetWorldBoneMatrix
==============
*/
__int64 BGVehicles::GetWorldBoneMatrix(BGVehicles *this, const LocalClientNum_t localClientNum, int entityIndex, int boneIndex)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2060, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "world_matrix is not defined for handler") )
    __debugbreak();
  return 0i64;
}

/*
==============
BGVehicles::IsOnSameTeam
==============
*/
bool BGVehicles::IsOnSameTeam(BGVehicles *this, const entityState_t *vehicle, const entityState_t *compareEnt)
{
  team_t v6; 
  team_t v7; 

  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1997, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  if ( !compareEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1998, ASSERT_TYPE_ASSERT, "(compareEnt)", (const char *)&queryFormat, "compareEnt") )
    __debugbreak();
  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((vehicle->eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1999, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( vehicle ))", (const char *)&queryFormat, "BG_IsVehicleEntity( vehicle )") )
    __debugbreak();
  if ( !compareEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((compareEnt->eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2000, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( compareEnt ))", (const char *)&queryFormat, "BG_IsVehicleEntity( compareEnt )") )
    __debugbreak();
  v6 = this->GetTeam(this, compareEnt);
  v7 = this->GetTeam(this, vehicle);
  return v7 && v7 == v6;
}

/*
==============
BGVehicles::IsOnSameTeam
==============
*/
bool BGVehicles::IsOnSameTeam(BGVehicles *this, const entityState_t *vehicle, team_t team)
{
  team_t v6; 

  if ( !vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 2008, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
    __debugbreak();
  v6 = this->GetTeam(this, vehicle);
  return v6 && v6 == team;
}

/*
==============
BGVehicles::IsRemoteDrivingVehicle
==============
*/
_BOOL8 BGVehicles::IsRemoteDrivingVehicle(const playerState_s *ps)
{
  int entity; 

  entity = ps->vehicleState.entity;
  return entity != 2047 && entity;
}

/*
==============
BGVehicles::IsRemoteDrivingVehicleAndLinked
==============
*/
bool BGVehicles::IsRemoteDrivingVehicleAndLinked(const playerState_s *ps, const int vehicleEntNum)
{
  if ( vehicleEntNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1983, ASSERT_TYPE_ASSERT, "(vehicleEntNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleEntNum != ENTITYNUM_NONE") )
    __debugbreak();
  return ps->vehicleState.entity == vehicleEntNum && ps->linkEnt == vehicleEntNum;
}

/*
==============
BGVehicles::PathInvalidNodeIndex
==============
*/
__int64 BGVehicles::PathInvalidNodeIndex()
{
  return 0xFFFFFFFFi64;
}

/*
==============
BGVehicles::PathIsValidNode
==============
*/
bool BGVehicles::PathIsValidNode(__int16 nodeIndex)
{
  return (unsigned __int16)nodeIndex <= 0xF9Fu;
}

/*
==============
BGVehicles::SetIgnoreDObjTransfer
==============
*/
void BGVehicles::SetIgnoreDObjTransfer(BGVehicles *this, DObj *obj, bool hasPlayerState)
{
  ;
}

