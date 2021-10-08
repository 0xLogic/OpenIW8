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
  VehicleType type; 

  _RBX = bounds;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 280, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 281, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  _RAX = BG_GetVehicleDef(pm);
  _RDI = _RAX;
  *(_QWORD *)_RBX->midPoint.v = 0i64;
  _RBX->midPoint.v[2] = 0.0;
  _RBX->halfSize.v[0] = -3.4028235e38;
  _RBX->halfSize.v[1] = -3.4028235e38;
  _RBX->halfSize.v[2] = -3.4028235e38;
  type = _RAX->type;
  if ( ((type - 1) & 0xFD) != 0 )
  {
    if ( type == VEH_WHEELS_4 || type == VEH_TREADED )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rax+0BD0h]
        vmovss  xmm0, dword ptr [rax+0BD4h]
        vmovss  dword ptr [rbx+8], xmm1
      }
      *(_QWORD *)_RBX->midPoint.v = 0i64;
      __asm
      {
        vmovss  dword ptr [rbx+0Ch], xmm0
        vmovss  dword ptr [rbx+10h], xmm0
      }
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_sphere_bounds_offset_z, "bg_vehicle_sphere_bounds_offset_z");
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+608h]
        vmovss  dword ptr [rbx+8], xmm0
      }
      *(_QWORD *)_RBX->midPoint.v = 0i64;
      __asm
      {
        vmovss  dword ptr [rbx+0Ch], xmm1
        vmovss  dword ptr [rbx+10h], xmm1
      }
    }
    __asm { vmovss  dword ptr [rbx+14h], xmm1 }
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
  __int64 v18; 
  DObjAnimMat outMat; 

  _R14 = result;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 163, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( (unsigned int)wheelIndex >= 0xC )
  {
    LODWORD(v18) = wheelIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 164, ASSERT_TYPE_ASSERT, "(unsigned)( wheelIndex ) < (unsigned)( NUM_VEHICLE_WHEELS )", "wheelIndex doesn't index NUM_VEHICLE_WHEELS\n\t%i not in [0, %i)", v18, 12) )
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+outMat.trans]
    vmovss  xmm1, dword ptr [rsp+0A8h+outMat.trans+4]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm0, dword ptr [rsp+0A8h+outMat.trans+8]
    vmovss  dword ptr [r14+8], xmm0
    vmovss  dword ptr [r14+4], xmm1
  }
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
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  BgWeaponMap *v14; 
  const Weapon *Weapon; 
  BGVehicles *v17; 
  int v18; 
  __int64 v19; 
  int v20; 

  _RBX = s;
  _RSI = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1693, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1694, ASSERT_TYPE_ASSERT, "(s)", (const char *)&queryFormat, "s") )
    __debugbreak();
  if ( _RSI->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1697, ASSERT_TYPE_ASSERT, "(vehicleState->entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleState->entity != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !snap )
  {
    _RDI = &_RBX->lerp.pos;
    *(_QWORD *)&_RBX->lerp.pos.trTime = 0i64;
    _RBX->lerp.pos.trType = TR_INTERPOLATE;
    *(_QWORD *)_RBX->lerp.pos.trDelta.v = 0i64;
    _RBX->lerp.pos.trDelta.v[2] = 0.0;
    if ( _RBX == (entityState_t *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsi+12Ch] }
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      __asm { vmovss  [rsp+58h+arg_10], xmm0 }
      if ( (v20 & 0x7F800000) == 2139095040 )
        goto LABEL_35;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+130h]
        vmovss  [rsp+58h+arg_10], xmm0
      }
      if ( (v20 & 0x7F800000) == 2139095040 )
        goto LABEL_35;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+134h]
        vmovss  [rsp+58h+arg_10], xmm0
      }
      if ( (v20 & 0x7F800000) == 2139095040 )
      {
LABEL_35:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v11 = LODWORD(_RSI->vehicleState.origin.v[0]) ^ ~s_trbase_aab_X;
      v12 = v11 ^ s_trbase_aab_Y ^ LODWORD(_RSI->vehicleState.origin.v[1]);
      v13 = v12 ^ s_trbase_aab_Z ^ LODWORD(_RSI->vehicleState.origin.v[2]);
      LODWORD(_RBX->lerp.pos.trBase.v[1]) = v12;
      LODWORD(_RBX->lerp.pos.trBase.v[2]) = v13;
      LODWORD(_RBX->lerp.pos.trBase.v[0]) = v11;
      memset(&v19, 0, sizeof(v19));
    }
    else
    {
      __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
      _RBX->lerp.pos.trBase.v[1] = _RSI->vehicleState.origin.v[1];
      _RBX->lerp.pos.trBase.v[2] = _RSI->vehicleState.origin.v[2];
    }
    *(_QWORD *)&_RBX->lerp.apos.trType = 1i64;
    _RBX->lerp.apos.trDuration = 0;
    *(_QWORD *)_RBX->lerp.apos.trDelta.v = 0i64;
    _RBX->lerp.apos.trDelta.v[2] = 0.0;
    _RBX->lerp.apos.trBase.v[0] = _RSI->vehicleState.angles.v[0];
    _RBX->lerp.apos.trBase.v[1] = _RSI->vehicleState.angles.v[1];
    _RBX->lerp.apos.trBase.v[2] = _RSI->vehicleState.angles.v[2];
  }
  v14 = (BgWeaponMap *)weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v14, _RBX->weaponHandle);
  if ( BG_GetTargetAssistType(Weapon, 0) )
  {
    _RBX->lerp.u.anonymous.data[5] = 0;
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    _RBX->lerp.u.anonymous.data[5] = LODWORD(_RSI->vehicleState.gunAngles.v[0]);
    __asm { vmovss  xmm0, dword ptr [rsi+170h] }
  }
  v17 = vehicleSystem;
  __asm { vmovss  dword ptr [rbx+70h], xmm0 }
  v18 = _RBX->lerp.u.anonymous.data[1] & 0x1FFE0000;
  *(_QWORD *)&_RBX->lerp.u.vehicle.bodyPitch = 0i64;
  _RBX->lerp.u.anonymous.data[1] = _RSI->vehicleState.flags | v18;
  BG_VehicleAnim_PlayerToEntity(v17, _RSI, _RBX);
}

/*
==============
BG_ShouldVehicleBreakGlass
==============
*/
bool BG_ShouldVehicleBreakGlass(const vec3_t *velocity, const trace_t *trace)
{
  bool result; 
  char v16; 
  char v17; 

  _RBX = trace;
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 142, ASSERT_TYPE_ASSERT, "(trace)", (const char *)&queryFormat, "trace") )
    __debugbreak();
  result = BG_Glass_CanBreakGlass(_RBX);
  if ( result )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+14h]
      vmovss  xmm1, dword ptr [rbx+10h]
      vmulss  xmm2, xmm1, dword ptr [rdi]
      vmulss  xmm3, xmm0, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rbx+18h]
      vmulss  xmm1, xmm0, dword ptr [rdi+8]
    }
    _RBX = DCONST_DVARFLT_bg_vehicle_break_glass_speed;
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm2, xmm4, xmm1
      vxorps  xmm6, xmm2, cs:__xmm@80000000800000008000000080000000
    }
    if ( !DCONST_DVARFLT_bg_vehicle_break_glass_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_break_glass_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vcomiss xmm6, dword ptr [rbx+28h]
      vmovaps xmm6, [rsp+58h+var_18]
    }
    return !(v16 | v17);
  }
  return result;
}

/*
==============
BG_VehicleAim
==============
*/

void __fastcall BG_VehicleAim(pmove_t *pm, const pml_t *pml, __int64 a3, double _XMM3_8)
{
  playerState_s *ps; 
  LocalClientNum_t localClientNum; 
  const VehicleDef *VehicleDef; 
  unsigned int v11; 
  const BGVehicles *vehicles; 
  __int64 entity; 
  const BgHandler *m_bgHandler; 
  const BgHandler *v27; 
  Physics_WorldId v31; 
  char v33; 
  int v51; 
  int skipEntities[2]; 
  vec3_t start; 
  vec3_t end; 
  vec3_t groundTarget; 
  vec3_t forward; 
  vec3_t right; 
  vec3_t up; 
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
  if ( !BG_GetSuitDef(ps->suitIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1561, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
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
    v11 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, (const LocalClientNum_t)localClientNum, ps->vehicleState.entity, VEHICLE_BONE_PLAYER);
    if ( v11 != -1 )
    {
      vehicles = pm->vehicles;
      entity = (unsigned int)ps->vehicleState.entity;
      __asm { vmovaps [rsp+190h+var_50], xmm7 }
      vehicles->GetWorldBoneMatrix((BGVehicles *)vehicles, (const LocalClientNum_t)localClientNum, entity, v11, (tmat43_t<vec3_t> *)&forward);
      m_bgHandler = pm->m_bgHandler;
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, dword ptr [r15+200h]
        vmulss  xmm1, xmm3, dword ptr [rbp+90h+up]
        vaddss  xmm2, xmm1, [rbp+90h+var_D4]
        vmulss  xmm1, xmm3, dword ptr [rbp+90h+up+4]
        vmovss  dword ptr [rsp+190h+start], xmm2
        vaddss  xmm2, xmm1, [rbp+90h+var_D0]
        vmulss  xmm1, xmm3, dword ptr [rbp+90h+up+8]
        vmovss  dword ptr [rsp+190h+start+4], xmm2
        vaddss  xmm2, xmm1, [rbp+90h+var_CC]
        vmovss  dword ptr [rsp+190h+start+8], xmm2
      }
      BG_GetPlayerViewDirection(ps, &forward, &right, &up, m_bgHandler, 1);
      __asm
      {
        vmovss  xmm7, cs:__real@461c4000
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+forward]
        vaddss  xmm2, xmm1, dword ptr [rsp+190h+start]
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+forward+4]
      }
      v27 = pm->m_bgHandler;
      __asm
      {
        vmovss  dword ptr [rsp+190h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+190h+start+4]
        vmulss  xmm1, xmm7, dword ptr [rbp+90h+forward+8]
        vmovss  dword ptr [rsp+190h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+190h+start+8]
        vmovss  dword ptr [rbp+90h+end+8], xmm2
      }
      skipEntities[0] = ps->clientNum;
      skipEntities[1] = ps->vehicleState.entity;
      v31 = v27->GetPhysicsWorldId((BgHandler *)v27);
      PhysicsQuery_LegacyCapsuleTrace(v31, &results, &start, &end, &bounds_origin, skipEntities, 2, 41968017, NULL, 0, NULL, NULL);
      __asm
      {
        vmovss  xmm0, [rbp+90h+results.fraction]
        vcomiss xmm0, cs:__real@3f800000
      }
      if ( v33 )
      {
        __asm { vmovaps [rsp+190h+var_40], xmm6 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_aim_trace_min, "bg_vehicle_aim_trace_min");
        __asm
        {
          vmovss  xmm6, [rbp+90h+results.fraction]
          vmulss  xmm1, xmm6, xmm7
          vcomiss xmm1, xmm0
        }
        if ( v33 )
          __asm { vmulss  xmm6, xmm0, cs:__real@38d1b717 }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+190h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+190h+start]
          vmovss  xmm0, dword ptr [rsp+190h+end+4]
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, dword ptr [rsp+190h+start]
          vsubss  xmm1, xmm0, dword ptr [rsp+190h+start+4]
          vmovss  xmm0, dword ptr [rbp+90h+end+8]
          vmulss  xmm2, xmm1, xmm6
          vsubss  xmm1, xmm0, dword ptr [rsp+190h+start+8]
          vmovss  dword ptr [rbp+90h+groundTarget], xmm3
          vaddss  xmm3, xmm2, dword ptr [rsp+190h+start+4]
          vmulss  xmm2, xmm1, xmm6
          vmovaps xmm6, [rsp+190h+var_40]
          vmovss  dword ptr [rbp+90h+groundTarget+4], xmm3
          vaddss  xmm3, xmm2, dword ptr [rsp+190h+start+8]
          vmovss  dword ptr [rbp+90h+groundTarget+8], xmm3
        }
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+190h+end]
          vmovsd  qword ptr [rbp+90h+groundTarget], xmm0
        }
        groundTarget.v[2] = end.v[2];
      }
      v51 = BG_VehicleGunAngles(localClientNum, pm, pml, &groundTarget);
      __asm { vmovaps xmm7, [rsp+190h+var_50] }
      if ( !v51 )
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

void __fastcall BG_VehicleAirMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, double dt)
{
  const VehicleDef *VehicleDef; 
  float fmt; 
  float dta; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( groundTrace->hasGround )
  {
    VehicleDef = BG_GetVehicleDef(pm);
    BG_VehicleClipVelocity(VehicleDef, &vehicleState->velocity, &groundTrace->trace.normal, &vehicleState->velocity);
  }
  _RBX = DCONST_DVARFLT_bg_vehicle_stepsize;
  if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+58h+dt], xmm6
    vmovss  dword ptr [rsp+58h+fmt], xmm0
  }
  BG_VehicleStepSlideMove(pm, vehicleState, groundTrace, 1, fmt, dta, 0);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BG_VehicleClipVelocity
==============
*/
void BG_VehicleClipVelocity(const VehicleDef *vehicleDef, const vec3_t *velocity, const vec3_t *normal, vec3_t *outClippedVelocity)
{
  const dvar_t *v10; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [r8+4]
    vmulss  xmm3, xmm0, dword ptr [r8]
    vmulss  xmm2, xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [r8+8]
  }
  v10 = DCONST_DVARFLT_bg_vehicle_overclip;
  _RBX = outClippedVelocity;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBP = vehicleDef;
  __asm
  {
    vmulss  xmm1, xmm0, dword ptr [rdx+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm6, xmm4, xmm1
  }
  if ( !DCONST_DVARFLT_bg_vehicle_overclip && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_overclip") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vandps  xmm0, xmm6, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm0, dword ptr [r14+28h]
    vsubss  xmm2, xmm0, xmm6
    vmulss  xmm1, xmm2, dword ptr [rdi]
    vaddss  xmm3, xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm3
    vmulss  xmm0, xmm2, dword ptr [rdi+4]
    vaddss  xmm4, xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm4
    vmulss  xmm0, xmm2, dword ptr [rdi+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm1
  }
  if ( _RBP->type == VEH_HELICOPTER )
  {
    __asm
    {
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr [rbp+60Ch]
      vmulss  xmm0, xmm1, xmm1
      vcomiss xmm2, xmm0
    }
    if ( _RBP->type > VEH_HELICOPTER )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm2, xmm2, xmm2
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm3, xmm3, xmm1
        vmulss  xmm4, xmm4, xmm1
        vmovss  dword ptr [rbx], xmm3
        vmovss  dword ptr [rbx+4], xmm4
        vmovss  xmm2, dword ptr [rbp+60Ch]
        vmulss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm4, xmm2
        vmovss  dword ptr [rbx], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
BG_VehicleCorrectAllSolid
==============
*/
__int64 BG_VehicleCorrectAllSolid(const pmove_t *pm, VehicleState *vehicleState, trace_t *groundTrace)
{
  __int64 result; 

  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 307, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 308, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  __asm
  {
    vmovaps [rsp+148h+var_38], xmm6
    vmovaps [rsp+148h+var_48], xmm7
    vmovaps [rsp+148h+var_58], xmm8
    vmovaps [rsp+148h+var_68], xmm9
    vmovaps [rsp+148h+var_78], xmm10
    vmovaps [rsp+148h+var_88], xmm11
  }
  if ( !BG_Vehicle_UsingWallCollisionFix() )
  {
    __asm
    {
      vmovss  xmm11, cs:__real@bf800000
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm10, cs:__real@40000000
      vmovaps xmm8, xmm11
      vmovaps xmm7, xmm11
      vmovaps xmm6, xmm11
      vucomiss xmm8, dword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
      vucomiss xmm7, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+4; vec3_t const vec3_origin
      vucomiss xmm6, dword ptr cs:?vec3_origin@@3Tvec3_t@@B+8; vec3_t const vec3_origin
      vaddss  xmm6, xmm6, xmm9
      vcomiss xmm6, xmm10
      vaddss  xmm7, xmm7, xmm9
      vcomiss xmm7, xmm10
      vaddss  xmm8, xmm8, xmm9
      vcomiss xmm8, xmm10
    }
  }
  result = 0i64;
  __asm
  {
    vmovaps xmm11, [rsp+148h+var_88]
    vmovaps xmm10, [rsp+148h+var_78]
    vmovaps xmm9, [rsp+148h+var_68]
    vmovaps xmm8, [rsp+148h+var_58]
    vmovaps xmm7, [rsp+148h+var_48]
    vmovaps xmm6, [rsp+148h+var_38]
  }
  return result;
}

/*
==============
BG_VehicleGroundMove
==============
*/
void BG_VehicleGroundMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float dt)
{
  const VehicleDef *VehicleDef; 
  char v23; 
  char v32; 
  float fmt; 
  float v54; 
  vec3_t velocity; 
  char v56; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RDI = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 927, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 928, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 929, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, dword ptr [rdi+1Ch]
    vmovss  xmm6, dword ptr [rdi+20h]
    vmovss  xmm7, dword ptr [rdi+24h]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm9, xmm1, xmm1
    vmovss  dword ptr [rsp+0C8h+velocity], xmm8
    vmovss  dword ptr [rsp+0C8h+velocity+4], xmm6
    vmovss  dword ptr [rsp+0C8h+velocity+8], xmm7
  }
  VehicleDef = BG_GetVehicleDef(pm);
  BG_VehicleClipVelocity(VehicleDef, &velocity, &_RDI->groundNormal, &_RDI->velocity);
  __asm
  {
    vmovss  xmm5, dword ptr [rdi+20h]
    vmovss  xmm4, dword ptr [rdi+1Ch]
    vmulss  xmm1, xmm5, xmm6
    vmulss  xmm0, xmm4, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, dword ptr [rdi+24h]
    vaddss  xmm0, xmm2, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcomiss xmm0, xmm3
  }
  if ( !(v32 | v23) )
  {
    __asm
    {
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vmovss  xmm1, cs:__real@3f800000
      vblendvps xmm0, xmm2, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rdi+1Ch], xmm0
      vmulss  xmm0, xmm2, xmm5
      vmovss  dword ptr [rdi+20h], xmm0
      vmulss  xmm1, xmm9, dword ptr [rdi+1Ch]
      vmovss  dword ptr [rdi+1Ch], xmm1
      vmulss  xmm0, xmm9, dword ptr [rdi+20h]
      vmovss  dword ptr [rdi+20h], xmm0
      vmovss  xmm4, dword ptr [rdi+1Ch]
    }
  }
  __asm { vucomiss xmm4, xmm3 }
  if ( !v23 )
    goto LABEL_15;
  __asm { vucomiss xmm3, dword ptr [rdi+20h] }
  if ( !v23 || gravity )
  {
LABEL_15:
    _RBX = DCONST_DVARFLT_bg_vehicle_stepsize;
    if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, [rsp+0C8h+dt]
      vmovss  xmm1, dword ptr [rbx+28h]
      vmovss  [rsp+0C8h+var_A0], xmm0
      vmovss  dword ptr [rsp+0C8h+fmt], xmm1
    }
    BG_VehicleStepSlideMove(pm, _RDI, groundTrace, gravity, fmt, v54, 0);
  }
  _R11 = &v56;
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
BG_VehicleGroundPlant
==============
*/
__int64 BG_VehicleGroundPlant(pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, int gravity, float dt)
{
  const VehicleDef *VehicleDef; 
  int clipmask; 
  int v28; 
  unsigned int v30; 
  int v31; 
  int *v32; 
  int v33; 
  __int64 v35; 
  const dvar_t *v40; 
  int v60; 
  __int64 v61; 
  int v62; 
  __int64 v63; 
  bool v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v70; 
  __int64 v71; 
  __int64 v75; 
  __int64 v76; 
  __int64 v80; 
  __int64 v81; 
  bool v85; 
  int *v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v92; 
  int v99; 
  int v103; 
  __int64 v108; 
  __int64 v109; 
  bool v110; 
  int v111; 
  bool v128; 
  bool v129; 
  __int64 v205; 
  int fmt; 
  __int64 contentMask; 
  trace_t *results; 
  int v212; 
  vec3_t v0; 
  vec3_t end; 
  vec3_t start; 
  tmat43_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t angles; 
  trace_t v221; 
  int v222[2]; 
  int v223; 
  int v224; 
  int v225; 
  vec3_t result[14]; 
  int v227[38]; 
  char v232; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RBX = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1020, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1021, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1022, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+78h]
    vmovss  xmm0, dword ptr [rbx+74h]
  }
  clipmask = _RBX->clipmask;
  __asm
  {
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, dword ptr [rbx+4]
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm7, xmm0, cs:__real@40000000
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+260h+var_2B4], xmm1
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  [rbp+260h+var_2B0], xmm0
    vmovss  xmm0, dword ptr [rbx+14h]; yaw
    vmovss  [rbp+260h+var_2AC], xmm1
  }
  *(_QWORD *)v0.v = VehicleDef;
  v28 = clipmask & 0xFD7FFFFF;
  YawToAxis(*(float *)&_XMM0, (tmat33_t<vec3_t> *)&axis);
  __asm { vmovss  xmm11, cs:__real@3f800000 }
  v30 = 0;
  __asm { vmovaps xmmword ptr [rsp+360h+var_48+8], xmm6 }
  v31 = 0;
  v32 = &v223;
  v212 = 0;
  v33 = 0;
  _RBX = 0i64;
  do
  {
    *(_QWORD *)result[_RBX / 3].v = 0i64;
    result[_RBX / 3].v[2] = 0.0;
    if ( v33 == 12 )
    {
      v35 = 12i64;
    }
    else
    {
      v35 = v33;
      if ( !(unsigned int)BG_GetWheelOrigin(pm, v33, &result[v33]) )
        goto LABEL_24;
      v31 = v212;
    }
    *v32++ = v33;
    v212 = v31 + 1;
    if ( v33 == 12 )
    {
      __asm
      {
        vmovss  xmm2, [rbp+260h+var_2B4]
        vmovss  xmm1, [rbp+260h+var_2B0]
        vmovss  xmm0, [rbp+260h+var_2AC]
        vmovss  dword ptr [rsp+360h+start], xmm2
        vmovss  dword ptr [rsp+360h+start+4], xmm1
        vmovss  dword ptr [rbp+260h+start+8], xmm0
        vmovss  dword ptr [rsp+360h+end], xmm2
        vmovss  dword ptr [rsp+360h+end+4], xmm1
        vmovss  dword ptr [rsp+360h+end+8], xmm0
      }
    }
    else
    {
      MatrixTransformVector43(&result[v35], &axis, &out);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+260h+out]
        vmovsd  qword ptr [rsp+360h+start], xmm0
        vmovsd  qword ptr [rsp+360h+end], xmm0
      }
      start.v[2] = out.v[2];
      end.v[2] = out.v[2];
    }
    v40 = DCONST_DVARFLT_bg_vehicle_stepsize;
    if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+260h+start+8]
      vaddss  xmm1, xmm0, dword ptr [rsi+28h]
      vmovss  xmm2, dword ptr [rsp+360h+end+8]
      vsubss  xmm0, xmm2, xmm7
      vmovss  dword ptr [rbp+260h+start+8], xmm1
    }
    fmt = vehicleState->entity;
    __asm { vmovss  dword ptr [rsp+360h+end+8], xmm0 }
    BG_Vehicle_Trace(pm, &start, &end, &bounds_origin, fmt, v28, &v221);
    __asm
    {
      vmovss  xmm6, [rbp+260h+var_280.fraction]
      vcomiss xmm6, xmm11
      vmovss  xmm0, dword ptr [rsp+360h+end]
    }
    if ( v128 )
    {
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rsp+360h+start]
        vmovss  xmm0, dword ptr [rsp+360h+end+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsp+360h+start]
        vsubss  xmm1, xmm0, dword ptr [rsp+360h+start+4]
        vmovss  xmm0, dword ptr [rsp+360h+end+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+260h+start+8]
        vmovss  dword ptr [rbp+rbx+260h+result], xmm3
        vaddss  xmm3, xmm2, dword ptr [rsp+360h+start+4]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rbp+rbx+260h+result+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+260h+start+8]
        vmovss  dword ptr [rbp+rbx+260h+result+8], xmm3
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+360h+end+4]
        vmovss  dword ptr [rbp+rbx+260h+result], xmm0
        vmovss  xmm0, dword ptr [rsp+360h+end+8]
        vmovss  dword ptr [rbp+rbx+260h+result+8], xmm0
        vmovss  dword ptr [rbp+rbx+260h+result+4], xmm1
      }
      v227[_RBX] = 1065353216;
    }
LABEL_24:
    v31 = v212;
    ++v33;
    _RBX += 3i64;
  }
  while ( v33 < 13 );
  if ( (unsigned int)(v212 - 3) > 0xA )
  {
    LODWORD(results) = 3;
    LODWORD(contentMask) = v212;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1080, ASSERT_TYPE_ASSERT, "( 3 ) <= ( numWheels ) && ( numWheels ) <= ( BG_VEHICLE_WHEEL_COUNT )", "numWheels not in [3, BG_VEHICLE_WHEEL_COUNT]\n\t%i not in [%i, %i]", contentMask, results, 13) )
      __debugbreak();
  }
  v60 = 1;
  if ( v212 > 1i64 )
  {
    v61 = 1i64;
    do
    {
      v62 = v60;
      v63 = v61;
      v64 = (unsigned int)v60 <= 4;
      if ( v60 < 4 )
      {
LABEL_36:
        v85 = v62 == 0;
        if ( v62 > 0 )
        {
          v86 = &v223 + v63;
          v87 = *v86;
          do
          {
            v88 = *(v86 - 1);
            _RCX = 3 * v87;
            __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8] }
            _RDX = 3 * v88;
            __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+260h+result+8] }
            if ( v85 )
              break;
            *v86 = v88;
            --v62;
            *--v86 = v87;
            v85 = v62 == 0;
          }
          while ( v62 > 0 );
        }
      }
      else
      {
        while ( 1 )
        {
          v65 = *(&v223 + v63);
          v66 = *(&v223 + v63 - 1);
          _RCX = 3 * v65;
          __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8] }
          _RDX = 3 * v66;
          __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+260h+result+8] }
          if ( v64 )
            break;
          *(&v223 + v63) = v66;
          *(&v223 + v63 - 1) = v65;
          v70 = v222[v63 + 1];
          v71 = v222[v63];
          _RCX = 3 * v70;
          __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8] }
          _RDX = 3 * v71;
          __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+260h+result+8] }
          v222[v63 + 1] = v71;
          v222[v63] = v70;
          v75 = v222[v63];
          v76 = *((int *)&v221.debugHitName + v63 + 1);
          _RCX = 3 * v75;
          __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8] }
          _RDX = 3 * v76;
          __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+260h+result+8] }
          v222[v63] = v76;
          *((_DWORD *)&v221.debugHitName + v63 + 1) = v75;
          v80 = *((int *)&v221.debugHitName + v63 + 1);
          v81 = *((int *)&v221.debugHitName + v63);
          _RCX = 3 * v80;
          __asm { vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8] }
          _RDX = 3 * v81;
          __asm { vcomiss xmm0, dword ptr [rbp+rdx*4+260h+result+8] }
          *((_DWORD *)&v221.debugHitName + v63 + 1) = v81;
          v62 -= 4;
          *((_DWORD *)&v221.debugHitName + v63) = v80;
          v63 -= 4i64;
          v64 = (unsigned int)v62 <= 3;
          if ( v62 <= 3 )
            goto LABEL_36;
        }
      }
      ++v60;
      ++v61;
    }
    while ( v61 < v212 );
  }
  v92 = v223;
  _RSI = DCONST_DVARFLT_bg_vehicle_stepsize;
  if ( !DCONST_DVARFLT_bg_vehicle_stepsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_stepsize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  _RAX = groundTrace;
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  xmm0, dword ptr [rax+60h]
    vsubss  xmm3, xmm0, dword ptr [rbp+rdi*4+260h+result+8]
    vaddss  xmm2, xmm1, dword ptr [rax+2E4h]
    vcomiss xmm2, xmm3
  }
  LOBYTE(v30) = !v128 && !v85;
  if ( v30 )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+360h+var_68+8], xmm8
      vmovaps [rsp+360h+var_78+8], xmm9
      vmovaps [rsp+360h+var_88+8], xmm10
    }
    if ( ((int)v92 < 0 || (int)v92 >= v212) && (_DWORD)v92 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1100, ASSERT_TYPE_ASSERT, "((sortedWheel[0] >= 0 && sortedWheel[0] < numWheels) || (sortedWheel[0] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[0] >= 0 && sortedWheel[0] < numWheels) || (sortedWheel[0] == BG_CENTER_INDEX)") )
      __debugbreak();
    v99 = v224;
    if ( (v224 < 0 || v224 >= v212) && v224 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1101, ASSERT_TYPE_ASSERT, "((sortedWheel[1] >= 0 && sortedWheel[1] < numWheels) || (sortedWheel[1] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[1] >= 0 && sortedWheel[1] < numWheels) || (sortedWheel[1] == BG_CENTER_INDEX)") )
      __debugbreak();
    if ( (v225 < 0 || v225 >= v212) && v225 != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1102, ASSERT_TYPE_ASSERT, "((sortedWheel[2] >= 0 && sortedWheel[2] < numWheels) || (sortedWheel[2] == BG_CENTER_INDEX))", (const char *)&queryFormat, "(sortedWheel[2] >= 0 && sortedWheel[2] < numWheels) || (sortedWheel[2] == BG_CENTER_INDEX)") )
      __debugbreak();
    _R10 = 3 * v92;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+r10*4+260h+result]
      vmovss  xmm1, dword ptr [rbp+r10*4+260h+result+4]
    }
    v103 = 2;
    __asm
    {
      vsubss  xmm9, xmm0, dword ptr [rbp+rcx*4+260h+result]
      vmovss  xmm0, dword ptr [rbp+r10*4+260h+result+8]
      vsubss  xmm3, xmm0, dword ptr [rbp+rcx*4+260h+result+8]
      vsubss  xmm10, xmm1, dword ptr [rbp+rcx*4+260h+result+4]
    }
    if ( v212 <= 2 )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+360h+v0+8]
        vmovss  xmm7, dword ptr [rsp+360h+v0+4]
        vmovss  xmm8, dword ptr [rsp+360h+v0]
      }
      goto LABEL_98;
    }
    v108 = 2i64;
    while ( 1 )
    {
      v109 = *(&v223 + v108);
      if ( (_DWORD)v92 == 12 )
      {
        if ( v99 )
        {
          switch ( v99 )
          {
            case 1:
              v110 = (_DWORD)v109 == 2;
              break;
            case 2:
              v110 = (_DWORD)v109 == 1;
              break;
            case 3:
              v110 = (_DWORD)v109 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v110 = (_DWORD)v109 == 3;
        }
      }
      else if ( v99 == 12 )
      {
        if ( (_DWORD)v92 )
        {
          switch ( (_DWORD)v92 )
          {
            case 1:
              v110 = (_DWORD)v109 == 2;
              break;
            case 2:
              v110 = (_DWORD)v109 == 1;
              break;
            case 3:
              v110 = (_DWORD)v109 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v110 = (_DWORD)v109 == 3;
        }
      }
      else if ( (_DWORD)v109 == 12 )
      {
        if ( v99 )
        {
          switch ( v99 )
          {
            case 1:
              v110 = (_DWORD)v92 == 2;
              break;
            case 2:
              v110 = (_DWORD)v92 == 1;
              break;
            case 3:
              v110 = (_DWORD)v92 == 0;
              break;
            default:
              goto LABEL_94;
          }
        }
        else
        {
          v110 = (_DWORD)v92 == 3;
        }
      }
      else
      {
        v111 = v92 & 1;
        if ( v111 != (v99 & 1) )
          break;
        v110 = v111 == (*(&v223 + v108) & 1);
      }
      if ( !v110 )
        break;
      ++v103;
      if ( ++v108 >= v212 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsp+360h+v0+8]
          vmovss  xmm7, dword ptr [rsp+360h+v0+4]
          vmovss  xmm8, dword ptr [rsp+360h+v0]
        }
        goto LABEL_95;
      }
    }
LABEL_94:
    _RCX = 3 * v109;
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result]
      vsubss  xmm6, xmm0, dword ptr [rbp+r10*4+260h+result]
      vmovss  xmm0, dword ptr [rbp+rcx*4+260h+result+8]
      vmovss  xmm1, dword ptr [rbp+rcx*4+260h+result+4]
      vsubss  xmm5, xmm1, dword ptr [rbp+r10*4+260h+result+4]
      vsubss  xmm4, xmm0, dword ptr [rbp+r10*4+260h+result+8]
      vmulss  xmm1, xmm3, xmm5
      vmulss  xmm2, xmm10, xmm4
      vsubss  xmm8, xmm2, xmm1
      vmulss  xmm3, xmm3, xmm6
      vmulss  xmm2, xmm9, xmm5
      vmulss  xmm1, xmm10, xmm6
      vmulss  xmm0, xmm9, xmm4
      vsubss  xmm6, xmm2, xmm1
      vsubss  xmm7, xmm3, xmm0
    }
LABEL_95:
    v128 = v103 < (unsigned int)v212;
    if ( v103 >= v212 )
    {
LABEL_98:
      v129 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1120, ASSERT_TYPE_ASSERT, "(wheelIndex < numWheels)", (const char *)&queryFormat, "wheelIndex < numWheels");
      v128 = 0;
      if ( v129 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm9, cs:__real@80000000
      vmovaps xmm10, [rsp+360h+var_88+8]
      vmulss  xmm1, xmm8, xmm8
      vmulss  xmm0, xmm7, xmm7
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm1, xmm11, xmm0
      vmulss  xmm2, xmm6, xmm1
      vmulss  xmm3, xmm8, xmm1
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm2, xmm0
      vmulss  xmm4, xmm7, xmm1
      vmovss  dword ptr [rsp+360h+v0], xmm3
      vmovss  dword ptr [rsp+360h+v0+4], xmm4
      vmovss  dword ptr [rsp+360h+v0+8], xmm2
    }
    if ( v128 )
    {
      __asm
      {
        vxorps  xmm0, xmm3, xmm8
        vmovss  dword ptr [rsp+360h+v0], xmm0
        vxorps  xmm0, xmm2, xmm8
        vxorps  xmm1, xmm4, xmm8
        vmovss  dword ptr [rsp+360h+v0+8], xmm0
        vmovss  dword ptr [rsp+360h+v0+4], xmm1
      }
    }
    Vec3Cross(&v0, axis.m, &axis.m[1]);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+260h+axis+0Ch]
      vmovss  xmm6, dword ptr [rbp+260h+axis+10h]
      vmovss  xmm4, dword ptr [rbp+260h+axis+14h]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+260h+axis+0Ch], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+260h+axis+14h], xmm0
      vmovss  dword ptr [rbp+260h+axis+10h], xmm1
    }
    Vec3Cross(&axis.m[1], &v0, axis.m);
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+260h+axis]
      vmovss  xmm6, dword ptr [rbp+260h+axis+4]
      vmovss  xmm4, dword ptr [rbp+260h+axis+8]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm11, xmm0
      vdivss  xmm2, xmm11, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+260h+axis], xmm0
      vmulss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+260h+axis+8], xmm0
      vmovss  dword ptr [rbp+260h+axis+4], xmm1
    }
    AxisToAngles((const tmat33_t<vec3_t> *)&axis, &angles);
    _RBX = DCONST_DVARFLT_bg_vehicle_pitch_track;
    if ( !DCONST_DVARFLT_bg_vehicle_pitch_track && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_pitch_track") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm9, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_bg_vehicle_roll_track;
    if ( !DCONST_DVARFLT_bg_vehicle_roll_track && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_roll_track") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    _RDI = vehicleState;
    __asm
    {
      vmovss  xmm3, [rbp+260h+dt]; deltaTime
      vmovss  xmm0, dword ptr [rbp+260h+angles]; tgt
      vmovss  xmm7, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rdi+10h]; cur
      vmovaps xmm2, xmm9; rate
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm3, [rbp+260h+dt]; deltaTime
      vmovss  dword ptr [rdi+10h], xmm0
      vmovss  xmm1, dword ptr [rdi+18h]; cur
      vmovss  xmm0, dword ptr [rbp+260h+angles+8]; tgt
      vmovaps xmm2, xmm7; rate
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm9, [rsp+360h+var_78+8]
      vmovss  dword ptr [rdi+18h], xmm0
    }
    _RBX = DCONST_DVARFLT_bg_vehicle_max_pitch;
    if ( !DCONST_DVARFLT_bg_vehicle_max_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_max_pitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm7, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_bg_vehicle_max_roll;
    if ( !DCONST_DVARFLT_bg_vehicle_max_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_max_roll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+10h]; val
      vmovss  xmm6, dword ptr [rbx+28h]
      vxorps  xmm1, xmm7, xmm8; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+10h], xmm0
      vmovss  xmm0, dword ptr [rdi+18h]; val
      vxorps  xmm1, xmm6, xmm8; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, xmmword ptr [rsp+360h+var_68+8]
      vmovss  dword ptr [rdi+18h], xmm0
    }
  }
  __asm { vmovaps xmm6, xmmword ptr [rsp+360h+var_48+8] }
  v205 = v30;
  _R11 = &v232;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return v205;
}

/*
==============
BG_VehicleGroundTrace
==============
*/
void BG_VehicleGroundTrace(const pmove_t *pm, VehicleState *vehicleState, GroundTrace *groundTrace, float dt)
{
  GroundTrace *results; 
  int entity; 
  char v20; 
  bool v34; 
  int v35; 
  unsigned int contentMask; 
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+0B8h+var_38], xmm6
    vmovaps [rsp+0B8h+var_48], xmm7
  }
  results = groundTrace;
  _R14 = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 354, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 355, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 356, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  _RSI = DCONST_DVARFLT_bg_vehicle_trace_offset;
  if ( !DCONST_DVARFLT_bg_vehicle_trace_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_trace_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+28h]
    vmovss  xmm1, dword ptr [r14+0Ch]
    vmovss  xmm3, dword ptr [r14+4]
    vmovss  xmm2, dword ptr [r14+8]
    vaddss  xmm0, xmm4, xmm1
  }
  contentMask = _R14->clipmask & 0xFDFFBFFF;
  entity = _R14->entity;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+start+8], xmm0
    vsubss  xmm0, xmm1, xmm4
    vmovss  dword ptr [rsp+0B8h+end+8], xmm0
    vmovss  dword ptr [rsp+0B8h+start], xmm3
    vmovss  dword ptr [rsp+0B8h+start+4], xmm2
    vmovss  dword ptr [rsp+0B8h+end], xmm3
    vmovss  dword ptr [rsp+0B8h+end+4], xmm2
  }
  BG_Vehicle_Trace(pm, &start, &end, &_R14->bounds, entity, contentMask, &results->trace);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm7, cs:__real@3f800000
    vcomiss xmm6, xmm7
    vmovss  xmm0, dword ptr [rsp+0B8h+end]
  }
  if ( v20 )
  {
    __asm
    {
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start]
      vmovss  xmm0, dword ptr [rsp+0B8h+end+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start]
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start+4]
      vmovss  xmm0, dword ptr [rsp+0B8h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+start+8]
      vmovss  dword ptr [rbx+58h], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start+4]
      vmulss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rbx+5Ch], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+0B8h+start+8]
      vmovss  dword ptr [rbx+60h], xmm3
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+0B8h+end+4]
      vmovss  dword ptr [rbx+58h], xmm0
      vmovss  xmm0, dword ptr [rsp+0B8h+end+8]
      vmovss  dword ptr [rbx+60h], xmm0
      vmovss  dword ptr [rbx+5Ch], xmm1
    }
  }
  *(_QWORD *)&results->onGround = 0i64;
  results->validGroundNormal = 0;
  v34 = !results->trace.allsolid;
  if ( !results->trace.allsolid || (v35 = BG_VehicleCorrectAllSolid(pm, _R14, &results->trace), v34 = v35 == 0, v35) )
  {
    __asm { vcomiss xmm7, dword ptr [rbx] }
    if ( !v34 )
    {
      v34 = !results->trace.walkable;
      results->hasGround = 1;
      results->onGround = 1;
      if ( !v34 )
        goto LABEL_26;
      _RDI = DCONST_DVARFLT_bg_vehicle_ground_min_normal;
      if ( !DCONST_DVARFLT_bg_vehicle_ground_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_ground_min_normal") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+28h]
        vcomiss xmm0, dword ptr [rbx+18h]
      }
      if ( v20 | v34 )
LABEL_26:
        results->validGroundNormal = 1;
    }
  }
  else if ( results->trace.walkable )
  {
    results->onGround = 1;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_38]
    vmovaps xmm7, [rsp+0B8h+var_48]
  }
}

/*
==============
BG_VehicleGunAngles
==============
*/
__int64 BG_VehicleGunAngles(const LocalClientNum_t localClientNum, pmove_t *pm, const pml_t *pml, const vec3_t *groundTarget)
{
  int v12; 
  const BGVehicles *vehicles; 
  __int64 entity; 
  int v15; 
  char v44; 
  char v45; 
  vec3_t angles; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  char v60[36]; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 

  _R12 = groundTarget;
  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1477, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1478, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1481, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( _RBX->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1484, ASSERT_TYPE_ASSERT, "(vehicleState->entity != ENTITYNUM_NONE)", (const char *)&queryFormat, "vehicleState->entity != ENTITYNUM_NONE") )
    __debugbreak();
  _RSI = BG_GetVehicleDef(pm);
  if ( !_RSI->turretWeapon )
    return 0i64;
  if ( !pm->vehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1490, ASSERT_TYPE_ASSERT, "(pm->vehicles)", (const char *)&queryFormat, "pm->vehicles") )
    __debugbreak();
  if ( !BG_GetDObjFromEntityNumber(pm->vehicles, _RBX->vehicleState.entity) )
    return 0i64;
  v12 = pm->vehicles->GetBone((BGVehicles *)pm->vehicles, localClientNum, _RBX->vehicleState.entity, VEHICLE_BONE_BARREL);
  if ( v12 == -1 )
    return 0i64;
  vehicles = pm->vehicles;
  entity = (unsigned int)_RBX->vehicleState.entity;
  __asm
  {
    vmovaps [rsp+178h+var_48], xmm6
    vmovaps [rsp+178h+var_58], xmm7
  }
  v15 = vehicles->GetBone((BGVehicles *)vehicles, localClientNum, entity, VEHICLE_BONE_TURRET_BASE);
  if ( v15 == -1 )
    AnglesToAxis(&_RBX->vehicleState.angles, &axis);
  else
    pm->vehicles->GetWorldBoneMatrix((BGVehicles *)pm->vehicles, localClientNum, _RBX->vehicleState.entity, v15, (tmat43_t<vec3_t> *)&axis);
  pm->vehicles->GetWorldBoneMatrix((BGVehicles *)pm->vehicles, localClientNum, _RBX->vehicleState.entity, v12, (tmat43_t<vec3_t> *)v60);
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vsubss  xmm5, xmm0, [rsp+178h+var_D4]
    vmovss  xmm1, dword ptr [r12+4]
    vsubss  xmm6, xmm1, [rsp+178h+var_D0]
    vmovss  xmm0, dword ptr [r12+8]
    vsubss  xmm7, xmm0, [rsp+178h+var_CC]
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+178h+vec], xmm0
    vmulss  xmm0, xmm7, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+178h+vec+8], xmm0
    vmovss  dword ptr [rsp+178h+vec+4], xmm1
  }
  vectoangles(&vec, &angles);
  AnglesToAxis(&angles, &in1);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&in1, &out, &axis);
  AxisToAngles(&axis, &angles);
  __asm
  {
    vmovss  xmm3, dword ptr [r15+24h]; deltaTime
    vmovss  xmm2, dword ptr [rsi+0CA0h]; rate
    vmovss  xmm1, dword ptr [rbx+16Ch]; cur
    vmovss  xmm0, dword ptr [rsp+178h+angles]; tgt
    vmovss  xmm6, dword ptr [rbx+170h]
  }
  *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  dword ptr [rbx+16Ch], xmm0
    vmovss  xmm3, dword ptr [r15+24h]; deltaTime
    vmovss  xmm2, dword ptr [rsi+0CA0h]; rate
    vmovss  xmm0, dword ptr [rsp+178h+angles+4]; tgt
    vmovaps xmm1, xmm6; cur
  }
  *(double *)&_XMM0 = LinearTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovaps xmm7, [rsp+178h+var_58]
    vmovaps xmm6, [rsp+178h+var_48]
    vmovss  dword ptr [rbx+170h], xmm0
    vmovss  xmm1, dword ptr [rsi+0C88h]
    vmovss  xmm2, dword ptr [rbx+16Ch]
    vxorps  xmm0, xmm1, xmm3
    vcomiss xmm2, xmm0
  }
  if ( v44 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0C8Ch]
    vcomiss xmm2, xmm0
  }
  if ( !(v44 | v45) )
LABEL_24:
    __asm { vmovss  dword ptr [rbx+16Ch], xmm0 }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0C84h]
    vmovss  xmm2, dword ptr [rbx+170h]
    vxorps  xmm1, xmm0, xmm3
    vcomiss xmm2, xmm1
  }
  if ( v44 )
  {
    __asm { vmovss  dword ptr [rbx+170h], xmm1 }
    return 1i64;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+0C80h]
      vcomiss xmm2, xmm0
    }
    if ( !(v44 | v45) )
      __asm { vmovss  dword ptr [rbx+170h], xmm0 }
    return 1i64;
  }
}

/*
==============
BG_VehicleMove
==============
*/
void BG_VehicleMove(pmove_t *pm, const pml_t *pml, __int64 a3, double a4)
{
  playerState_s *ps; 
  int entity; 
  const VehicleDef *VehicleDef; 
  __int64 v9; 
  const VehicleDef *v10; 
  VehicleType type; 
  playerState_s *v12; 
  int flags; 
  unsigned int v14; 

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
    v10 = VehicleDef;
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
    BG_VehicleAim(pm, pml, v9, a4);
    v12 = pm->ps;
    flags = v12->vehicleState.flags;
    if ( v10->camRemoteDrive )
      v14 = flags & 0xFFFFFFFE;
    else
      v14 = flags | 1;
    v12->vehicleState.flags = v14;
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
  const dvar_t *v37; 
  bool v57; 
  unsigned int v87; 
  __int64 v93; 
  void (__fastcall *v94)(const pmove_t *, const vec3_t *, const vec3_t *, const Bounds *, int, int, trace_t *); 
  const Bounds *p_bounds; 
  int entity; 
  int m_flags; 
  unsigned __int16 GlassHitId; 
  bool allsolid; 
  bool v144; 
  bool v161; 
  bool v162; 
  unsigned __int16 EntityHitId; 
  int v212; 
  __int64 v213; 
  bool v217; 
  float *v218; 
  int v225; 
  char v227; 
  char v228; 
  __int64 v234; 
  bool v235; 
  __int64 v236; 
  bool v275; 
  bool v276; 
  bool v346; 
  unsigned __int64 v362; 
  float v371; 
  int v372; 
  int v373; 
  unsigned __int16 v374; 
  _BOOL8 result; 
  char *fmt; 
  __int64 v414; 
  double v415; 
  double v416; 
  double v417; 
  double v418; 
  int v420; 
  int v422; 
  void (__fastcall *v429)(const pmove_t *, const vec3_t *, const vec3_t *, const Bounds *, int, int, trace_t *); 
  float *v430; 
  char *v431; 
  vec3_t *p_origin; 
  vec3_t outClippedVelocity; 
  vec3_t normal; 
  int v436; 
  vec3_t velocity; 
  vec3_t out; 
  vec3_t in; 
  char v442[16]; 
  trace_t trace; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> forward; 
  int permutation[8]; 
  vec3_t planes; 
  char v448; 
  char v449; 
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
  _R14 = outCollisionInfo;
  _RBX = vehicleState;
  _R13 = pm;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 458, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_R13->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 459, ASSERT_TYPE_ASSERT, "(pm->ps)", (const char *)&queryFormat, "pm->ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 460, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 461, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  if ( !outCollisionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 462, ASSERT_TYPE_ASSERT, "(outCollisionInfo)", (const char *)&queryFormat, "outCollisionInfo") )
    __debugbreak();
  _R12 = BG_GetVehicleDef(_R13);
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 465, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  __asm { vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000 }
  _RSI = &_RBX->velocity;
  __asm
  {
    vmovss  xmm14, dword ptr [rsi]
    vmovss  xmm15, dword ptr [rsi+4]
    vmovss  xmm8, dword ptr [rsi+8]
  }
  *(_QWORD *)outCollisionInfo->position.v = 0i64;
  outCollisionInfo->position.v[2] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rsi+4]
    vmovss  xmm3, dword ptr [rsi+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [r14+0Ch], xmm0
    vmovss  dword ptr [rsp+310h+var_2C0], xmm14
    vmovss  dword ptr [rbp+210h+velocity], xmm14
    vmovss  [rsp+310h+var_2C4], xmm15
    vmovss  dword ptr [rbp+210h+velocity+4], xmm15
    vmovss  [rsp+310h+var_2CC], xmm8
    vmovss  dword ptr [rbp+210h+velocity+8], xmm8
  }
  *(_QWORD *)&outCollisionInfo->incidence = 0i64;
  outCollisionInfo->entity = 2047;
  if ( gravity )
  {
    v37 = DCONST_DVARFLT_bg_vehicle_gravity;
    if ( !DCONST_DVARFLT_bg_vehicle_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_gravity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    __asm
    {
      vmovss  xmm11, [rbp+210h+dt]
      vmulss  xmm0, xmm11, dword ptr [rbx+28h]
    }
    _RBX = vehicleState;
    __asm
    {
      vsubss  xmm8, xmm8, xmm0
      vmovss  [rsp+310h+var_2CC], xmm8
      vmovss  dword ptr [rbp+210h+velocity+8], xmm8
      vaddss  xmm0, xmm8, dword ptr [rbx+24h]
      vmulss  xmm0, xmm0, cs:__real@3f000000; val
      vmovss  dword ptr [rbx+24h], xmm0
    }
    if ( _R12->type == VEH_HELICOPTER )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [r12+610h]; max
        vxorps  xmm1, xmm2, xmm13; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  dword ptr [rbx+24h], xmm0 }
    }
    if ( groundTrace->hasGround )
      BG_VehicleClipVelocity(_R12, _RSI, &vehicleState->groundNormal, _RSI);
  }
  else
  {
    __asm { vmovss  xmm11, [rbp+210h+dt] }
  }
  _RCX = _R13->ps;
  _EDX = 4;
  _EAX = (unsigned __int8)_R12->type;
  __asm
  {
    vmovd   xmm1, edx
    vmovss  xmm4, dword ptr [rcx+38h]
    vaddss  xmm3, xmm4, cs:__real@42200000
    vmovss  xmm6, dword ptr [rcx+30h]
    vmovss  xmm7, dword ptr [rcx+34h]
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm1, xmm4, xmm3, xmm2
    vmovss  [rsp+310h+var_2D0], xmm1
    vmovss  xmm12, cs:__real@80000000
    vmovss  xmm9, cs:__real@3dcccccd
  }
  if ( BGVehicles::IsRemoteDrivingVehicleAndLinked(_RCX, _RBX->entity) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R13->ps->eFlags, ACTIVE, 0xCu) || (v57 = _R12->type < VEH_SPACESHIP, _R12->type == VEH_SPACESHIP) )
  {
    __asm { vmovss  xmm10, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  xmm10, cs:__real@3f800000
      vsubss  xmm3, xmm0, xmm6
      vmovss  xmm0, dword ptr [rbx+0Ch]
      vsubss  xmm5, xmm0, [rsp+310h+var_2D0]
      vsubss  xmm4, xmm1, xmm7
      vmulss  xmm0, xmm3, xmm3
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm0, dword ptr [rbx+74h]
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm1, xmm0, cs:__real@41f00000
      vsqrtss xmm2, xmm2, xmm2
      vcomiss xmm2, xmm1
      vmovss  dword ptr [rbp+210h+normal], xmm3
      vmovss  dword ptr [rbp+210h+normal+4], xmm4
      vmovss  dword ptr [rbp+210h+normal+8], xmm5
    }
    if ( v57 )
    {
      __asm
      {
        vcmpless xmm0, xmm2, xmm12
        vblendvps xmm0, xmm2, xmm10, xmm0
        vdivss  xmm1, xmm10, xmm0
        vmulss  xmm2, xmm1, xmm3
        vmulss  xmm0, xmm1, xmm4
        vmulss  xmm3, xmm5, xmm1
        vmulss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  dword ptr [rbp+210h+normal+4], xmm0
        vmulss  xmm0, xmm2, dword ptr [rsi]
        vmovss  dword ptr [rbp+210h+normal], xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, dword ptr [rsi+8]
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm9
        vmovss  dword ptr [rbp+210h+normal+8], xmm3
      }
      if ( v57 )
        BG_VehicleClipVelocity(_R12, _RSI, &normal, _RSI);
    }
  }
  if ( groundTrace->hasGround )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+84h]
      vmovss  xmm1, dword ptr [rbx+88h]
      vmovss  dword ptr [rbp+210h+planes], xmm0
      vmovss  xmm0, dword ptr [rbx+8Ch]
      vmovss  dword ptr [rbp+210h+planes+8], xmm0
      vmovss  dword ptr [rbp+210h+planes+4], xmm1
    }
    v87 = 2;
    _RAX = (vec3_t *)&v448;
  }
  else
  {
    v87 = 1;
    _RAX = &planes;
  }
  __asm
  {
    vmovss  xmm5, dword ptr [rsi+4]
    vmovss  xmm4, dword ptr [rsi]
    vmovss  xmm6, dword ptr [rsi+8]
    vmulss  xmm0, xmm5, xmm5
  }
  v93 = v87;
  v94 = BG_Vehicle_Trace;
  __asm
  {
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm12
    vblendvps xmm0, xmm3, xmm10, xmm0
    vdivss  xmm2, xmm10, xmm0
    vmulss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rax], xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rax+8], xmm0
    vmulss  xmm1, xmm2, xmm5
    vmovss  dword ptr [rax+4], xmm1
  }
  v420 = v87;
  v422 = 0;
  p_bounds = &_RBX->bounds;
  v431 = (char *)&_RBX->bounds;
  if ( useCapsuleForBrushCollision )
    v94 = BG_Vehicle_TraceCapsule;
  _RDI = &_RBX->origin;
  v429 = v94;
  p_origin = &_RBX->origin;
  v430 = &planes.v[3 * v93 + 2];
  while ( 1 )
  {
    __asm
    {
      vmulss  xmm0, xmm11, dword ptr [rsi]
      vaddss  xmm1, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm11, dword ptr [rsi+4]
      vmovss  [rbp+210h+var_260], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+4]
      vmulss  xmm0, xmm11, dword ptr [rsi+8]
    }
    LODWORD(v414) = _RBX->clipmask;
    entity = _RBX->entity;
    __asm
    {
      vmovss  [rbp+210h+var_25C], xmm1
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  [rbp+210h+var_258], xmm1
    }
    LODWORD(fmt) = entity;
    v94(_R13, _RDI, (const vec3_t *)&v436, p_bounds, (int)fmt, v414, &trace);
    if ( BG_Glass_CanBreakGlass(&trace) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+210h+trace.normal+4]
        vmovss  xmm1, dword ptr [rbp+210h+trace.normal]
        vmulss  xmm2, xmm1, dword ptr [rsi]
        vmulss  xmm3, xmm0, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rbp+210h+trace.normal+8]
        vmulss  xmm1, xmm0, dword ptr [rsi+8]
      }
      _RBX = DCONST_DVARFLT_bg_vehicle_break_glass_speed;
      __asm
      {
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vxorps  xmm6, xmm2, xmm13
      }
      if ( !DCONST_DVARFLT_bg_vehicle_break_glass_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_break_glass_speed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v57 || v144 )
      {
        _RBX = vehicleState;
      }
      else
      {
        m_flags = _R13->m_flags;
        if ( (m_flags & 4) != 0 )
        {
          Com_PrintWarning(16, "Cannot break multiple glass pieces in a single movement step.\n");
        }
        else
        {
          _R13->m_flags = m_flags | 4;
          GlassHitId = Trace_GetGlassHitId(&trace);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+trace.position]
            vmovss  xmm1, dword ptr [rbp+210h+trace.position+4]
          }
          _R13->glassBreakIndex = GlassHitId - 1;
          __asm
          {
            vmovss  dword ptr [r13+28Ch], xmm0
            vmovss  xmm0, dword ptr [rbp+210h+trace.position+8]
            vmovss  dword ptr [r13+294h], xmm0
            vmovss  dword ptr [r13+290h], xmm1
            vmovss  xmm0, dword ptr [rsi+4]
            vmovss  xmm5, dword ptr [rsi]
            vmovss  xmm3, dword ptr [rsi+8]
            vmulss  xmm0, xmm0, xmm0
            vmulss  xmm1, xmm5, xmm5
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm4, xmm2, xmm2
            vcmpless xmm0, xmm4, xmm12
            vblendvps xmm0, xmm4, xmm10, xmm0
            vdivss  xmm2, xmm10, xmm0
            vmulss  xmm0, xmm2, xmm5
            vmovss  dword ptr [r13+298h], xmm0
            vmulss  xmm1, xmm2, dword ptr [rsi+4]
            vmovss  dword ptr [r13+29Ch], xmm1
            vmulss  xmm0, xmm2, dword ptr [rsi+8]
            vmovss  dword ptr [r13+2A0h], xmm0
          }
        }
        _RBX = vehicleState;
        v429(_R13, _RDI, (const vec3_t *)&v436, &vehicleState->bounds, vehicleState->entity, vehicleState->clipmask & 0xFFFFFFEF, &trace);
      }
    }
    allsolid = trace.allsolid;
    v144 = !trace.allsolid;
    if ( trace.allsolid )
    {
      if ( (trace.contents & 0x2004000) != 0 )
      {
        v429(_R13, _RDI, (const vec3_t *)&v436, &_RBX->bounds, _RBX->entity, _RBX->clipmask & 0xFDFFBFFF, &trace);
        allsolid = trace.allsolid;
      }
      v144 = !allsolid;
      if ( allsolid )
      {
        if ( BG_Glass_CanBreakGlass(&trace) )
        {
          v373 = _R13->m_flags;
          if ( (v373 & 4) != 0 )
          {
            Com_PrintWarning(16, "Cannot break multiple glass pieces in a single movement step.\n");
          }
          else
          {
            _R13->m_flags = v373 | 4;
            v374 = Trace_GetGlassHitId(&trace);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+210h+trace.position]
              vmovss  xmm1, dword ptr [rbp+210h+trace.position+4]
            }
            _R13->glassBreakIndex = v374 - 1;
            __asm
            {
              vmovss  dword ptr [r13+28Ch], xmm0
              vmovss  xmm0, dword ptr [rbp+210h+trace.position+8]
              vmovss  dword ptr [r13+294h], xmm0
              vmovss  dword ptr [r13+290h], xmm1
              vmovss  xmm0, dword ptr [rsi+4]
              vmovss  xmm5, dword ptr [rsi]
              vmovss  xmm3, dword ptr [rsi+8]
              vmulss  xmm0, xmm0, xmm0
              vmulss  xmm1, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm4, xmm2, xmm2
              vcmpless xmm0, xmm4, xmm12
              vblendvps xmm0, xmm4, xmm10, xmm0
              vdivss  xmm2, xmm10, xmm0
              vmulss  xmm0, xmm5, xmm2
              vmovss  dword ptr [r13+298h], xmm0
              vmulss  xmm1, xmm2, dword ptr [rsi+4]
              vmovss  dword ptr [r13+29Ch], xmm1
              vmulss  xmm0, xmm2, dword ptr [rsi+8]
              vmovss  dword ptr [r13+2A0h], xmm0
            }
          }
        }
        _RBX->velocity.v[2] = 0.0;
        if ( !BG_Vehicle_UsingWallCollisionFix() )
        {
          __asm
          {
            vmulss  xmm0, xmm11, dword ptr [rsi]
            vaddss  xmm1, xmm0, dword ptr [rdi]
            vmovss  xmm2, dword ptr [rsi+4]
            vmovss  xmm4, dword ptr [rsi+8]
            vmovss  dword ptr [rdi], xmm1
            vmulss  xmm2, xmm11, xmm2
            vaddss  xmm0, xmm2, dword ptr [rdi+4]
            vmulss  xmm1, xmm11, xmm4
            vmovss  dword ptr [rdi+4], xmm0
            vaddss  xmm2, xmm1, dword ptr [rdi+8]
            vmovss  dword ptr [rdi+8], xmm2
          }
        }
        result = 1i64;
        goto LABEL_130;
      }
    }
    __asm
    {
      vmovss  xmm6, [rbp+210h+trace.fraction]
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm6, xmm7
    }
    if ( !v144 )
    {
      __asm
      {
        vmovss  xmm0, [rbp+210h+var_260]
        vsubss  xmm1, xmm0, dword ptr [rdi]
        vmovss  xmm0, [rbp+210h+var_25C]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi]
        vmovss  dword ptr [rdi], xmm3
        vsubss  xmm1, xmm0, dword ptr [rdi+4]
        vmovss  xmm0, [rbp+210h+var_258]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi+4]
        vmovss  dword ptr [rdi+4], xmm3
        vsubss  xmm1, xmm0, dword ptr [rdi+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm3
      }
    }
    __asm { vucomiss xmm6, xmm10 }
    if ( v144 )
      break;
    if ( !v422 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+210h+trace.position]
        vmovss  xmm1, dword ptr [rbp+210h+trace.position+4]
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm0, dword ptr [rbp+210h+trace.position+8]
        vmovss  dword ptr [r14+8], xmm0
        vmovss  dword ptr [r14+4], xmm1
      }
      AnglesToAxis(&_RBX->angles, &axis);
      _RBX = v431;
      v161 = v431 < v442;
      if ( v431 == v442 )
      {
        v162 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1777, ASSERT_TYPE_SANITY, "( &in != &out )", (const char *)&queryFormat, "&in != &out");
        v161 = 0;
        if ( v162 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rbx]
        vmovss  xmm7, dword ptr [rbx+4]
        vmovss  xmm8, dword ptr [rbx+8]
        vmovss  xmm9, dword ptr [rbp+210h+axis]
        vmovss  xmm10, dword ptr [rbp+210h+axis+4]
        vmovss  xmm11, dword ptr [rbp+210h+axis+8]
        vmulss  xmm1, xmm4, xmm9
        vmulss  xmm0, xmm7, xmm10
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm7, dword ptr [rbp+210h+axis+10h]
        vmulss  xmm1, xmm8, xmm11
        vaddss  xmm6, xmm2, xmm1
        vmulss  xmm2, xmm4, dword ptr [rbp+210h+axis+0Ch]
        vmulss  xmm1, xmm8, dword ptr [rbp+210h+axis+14h]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm2, xmm4, dword ptr [rbp+210h+axis+18h]
        vmulss  xmm0, xmm7, dword ptr [rbp+210h+axis+1Ch]
        vaddss  xmm5, xmm3, xmm1
        vmulss  xmm1, xmm8, dword ptr [rbp+210h+axis+20h]
        vaddss  xmm3, xmm2, xmm0
        vmovss  xmm0, dword ptr [rbp+210h+trace.position]
        vaddss  xmm2, xmm5, dword ptr [rdi+4]
        vaddss  xmm4, xmm3, xmm1
        vaddss  xmm1, xmm6, dword ptr [rdi]
        vaddss  xmm3, xmm4, dword ptr [rdi+8]
        vsubss  xmm4, xmm0, xmm1
        vmovss  xmm0, dword ptr [rbp+210h+trace.position+4]
        vmovss  xmm1, dword ptr [rbp+210h+trace.position+8]
        vsubss  xmm5, xmm0, xmm2
        vsubss  xmm6, xmm1, xmm3
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm2, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm0, xmm3, xmm1
        vcomiss xmm0, cs:__real@3a83126f
      }
      if ( v161 )
      {
        __asm
        {
          vmovaps xmm0, xmm9
          vmovaps xmm2, xmm10
          vmovaps xmm3, xmm11
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm2, cs:__real@3f800000
          vsqrtss xmm1, xmm0, xmm0
          vcmpless xmm0, xmm1, xmm12
          vblendvps xmm0, xmm1, xmm2, xmm0
          vdivss  xmm1, xmm2, xmm0
          vmulss  xmm0, xmm1, xmm4
          vmulss  xmm2, xmm1, xmm5
          vmulss  xmm3, xmm1, xmm6
        }
      }
      __asm
      {
        vmovss  xmm8, [rsp+310h+var_2CC]
        vmulss  xmm1, xmm0, xmm9
        vmovss  xmm9, cs:__real@3dcccccd
        vmulss  xmm0, xmm2, xmm10
        vmovss  xmm10, cs:__real@3f800000
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm11
        vmovss  xmm11, [rbp+210h+dt]
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [r14+14h], xmm2
        vxorps  xmm7, xmm7, xmm7
      }
    }
    if ( _R14->entity == 2047 && trace.hitType == TRACE_HITTYPE_ENTITY && trace.hitId - 2046 > 1 )
      _R14->entity = trace.hitId;
    EntityHitId = Trace_GetEntityHitId(&trace);
    PM_AddTouchEnt(_R13, EntityHitId, PMTF_TOUCHER_VEHICLE);
    __asm
    {
      vmulss  xmm1, xmm11, [rbp+210h+trace.fraction]
      vsubss  xmm11, xmm11, xmm1
      vmovss  [rbp+210h+dt], xmm11
    }
    if ( v420 >= 8 )
      goto LABEL_125;
    v212 = 0;
    v213 = 0i64;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+210h+trace.normal+8]
      vmovss  xmm4, dword ptr [rbp+210h+trace.normal+4]
      vmovss  xmm5, dword ptr [rbp+210h+trace.normal]
    }
    v217 = v93 == 0;
    if ( v93 > 0 )
    {
      v218 = &planes.v[2];
      while ( 1 )
      {
        __asm
        {
          vmulss  xmm1, xmm5, dword ptr [rax-8]
          vmulss  xmm0, xmm4, dword ptr [rax-4]
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, dword ptr [rax]
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, cs:__real@3f7d70a4
        }
        if ( !v217 )
          break;
        ++v212;
        ++v213;
        v218 += 3;
        v217 = v213 <= (unsigned __int64)v93;
        if ( v213 >= v93 )
          goto LABEL_77;
      }
      BG_VehicleClipVelocity(_R12, _RSI, &trace.normal, _RSI);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+210h+trace.normal]
        vaddss  xmm0, xmm5, dword ptr [rsi]
        vmovss  xmm4, dword ptr [rbp+210h+trace.normal+4]
        vmovss  xmm3, dword ptr [rbp+210h+trace.normal+8]
        vmovss  dword ptr [rsi], xmm0
        vaddss  xmm0, xmm4, dword ptr [rsi+4]
        vmovss  dword ptr [rsi+4], xmm0
        vaddss  xmm0, xmm3, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm0
      }
    }
LABEL_77:
    v225 = v420;
    if ( v212 >= v420 )
    {
      _RCX = v430;
      ++v420;
      ++v93;
      __asm
      {
        vmovss  dword ptr [rcx-8], xmm5
        vmovss  dword ptr [rcx-4], xmm4
        vmovss  dword ptr [rcx], xmm3
      }
      v430 += 3;
      *(double *)&_XMM0 = PM_PermuteRestrictiveClipPlanes(_RSI, v225 + 1, &planes, permutation);
      __asm { vcomiss xmm0, xmm9 }
      if ( v227 )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [r14+0Ch]
          vucomiss xmm1, xmm7
        }
        if ( v228 )
        {
          __asm { vmovaps xmm1, xmm7 }
        }
        else
        {
          __asm
          {
            vdivss  xmm0, xmm0, xmm1
            vxorps  xmm1, xmm0, xmm13
          }
        }
        __asm { vcomiss xmm1, dword ptr [r14+10h] }
        if ( !(v227 | v228) )
          __asm { vmovss  dword ptr [r14+10h], xmm1 }
        BG_VehicleClipVelocity(_R12, _RSI, &planes + permutation[0], &outClippedVelocity);
        BG_VehicleClipVelocity(_R12, &velocity, &planes + permutation[0], &normal);
        __asm
        {
          vmovss  xmm6, dword ptr [rbp+210h+outClippedVelocity+8]
          vmovss  xmm7, dword ptr [rbp+210h+outClippedVelocity+4]
          vmovss  xmm8, dword ptr [rbp+210h+outClippedVelocity]
        }
        v234 = 1i64;
        v235 = (unsigned __int64)v93 > 1;
        if ( v93 > 1 )
        {
          while ( 1 )
          {
            v236 = permutation[v234];
            __asm
            {
              vmulss  xmm1, xmm7, dword ptr [rbp+rcx*4+210h+planes+4]
              vmulss  xmm0, xmm8, dword ptr [rbp+rcx*4+210h+planes]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, dword ptr [r8+8]
              vaddss  xmm0, xmm2, xmm1
              vcomiss xmm0, xmm9
            }
            if ( v235 || groundTrace->hasGround && !(_DWORD)v236 )
            {
              BG_VehicleClipVelocity(_R12, &outClippedVelocity, &planes + v236, &outClippedVelocity);
              BG_VehicleClipVelocity(_R12, &normal, &planes + permutation[v234], &normal);
              __asm
              {
                vmovss  xmm7, dword ptr [rbp+210h+outClippedVelocity+4]
                vmovss  xmm8, dword ptr [rbp+210h+outClippedVelocity]
                vmovss  xmm6, dword ptr [rbp+210h+outClippedVelocity+8]
                vmulss  xmm1, xmm7, dword ptr [rbp+rcx*4+210h+planes+4]
                vmulss  xmm0, xmm8, dword ptr [rbp+rcx*4+210h+planes]
              }
              _RDI = (char *)(&planes + permutation[0]);
              __asm
              {
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm0, xmm6, dword ptr [rdi+8]
                vaddss  xmm1, xmm2, xmm0
                vcomiss xmm1, xmm9
              }
              if ( v57 )
                break;
            }
LABEL_113:
            __asm { vmovss  xmm10, cs:__real@3f800000 }
            v235 = ++v234 < (unsigned __int64)v93;
            if ( v234 >= v93 )
            {
              __asm
              {
                vmovss  xmm11, [rbp+210h+dt]
                vmovss  xmm13, dword ptr cs:__xmm@80000000800000008000000080000000
              }
              _RDI = p_origin;
              _R14 = outCollisionInfo;
              goto LABEL_115;
            }
          }
          _R14 = (char *)(&planes + permutation[v234]);
          if ( _RDI == v442 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
            __debugbreak();
          if ( _R14 == v442 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
            __debugbreak();
          __asm
          {
            vmovss  xmm4, dword ptr [rdi+8]
            vmovss  xmm7, dword ptr [rdi+4]
            vmovss  xmm5, dword ptr [r14+8]
            vmovss  xmm6, dword ptr [r14+4]
            vmulss  xmm2, xmm6, dword ptr [rdi]
            vmulss  xmm1, xmm7, xmm5
            vmulss  xmm0, xmm4, xmm6
            vsubss  xmm8, xmm1, xmm0
            vmulss  xmm1, xmm4, dword ptr [r14]
            vmulss  xmm0, xmm5, dword ptr [rdi]
          }
          _RDI = DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale;
          __asm
          {
            vsubss  xmm5, xmm1, xmm0
            vmulss  xmm1, xmm7, dword ptr [r14]
            vsubss  xmm4, xmm2, xmm1
            vmulss  xmm3, xmm5, xmm5
            vmulss  xmm0, xmm8, xmm8
            vaddss  xmm2, xmm3, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, xmm12
            vblendvps xmm0, xmm3, xmm10, xmm0
            vdivss  xmm1, xmm10, xmm0
            vmulss  xmm13, xmm1, xmm8
            vmulss  xmm14, xmm1, xmm5
            vmulss  xmm15, xmm1, xmm4
          }
          if ( !DCONST_DVARFLT_bg_vehicle_tangential_clip_max_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_tangential_clip_max_scale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          v275 = 0;
          v276 = permutation[v234] == 0;
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vmulss  xmm11, xmm0, dword ptr [r12+5Ch]
            vmovaps xmm12, xmm10
          }
          if ( !permutation[v234] )
          {
            _EAX = _R13->cmd.forwardmove;
            __asm { vmovd   xmm0, eax }
            _EAX = _R13->cmd.rightmove;
            __asm
            {
              vcvtdq2ps xmm0, xmm0
              vmulss  xmm1, xmm0, cs:__real@3c010204
              vmovd   xmm0, eax
            }
            _RAX = _R13->ps;
            __asm
            {
              vcvtdq2ps xmm0, xmm0
              vmovss  dword ptr [rbp+210h+in], xmm1
              vmulss  xmm1, xmm0, cs:__real@3c010204
              vmovss  xmm0, dword ptr [rax+1DCh]; yaw
              vxorps  xmm6, xmm6, xmm6
              vmovss  dword ptr [rbp+210h+in+4], xmm1
              vmovss  dword ptr [rbp+210h+in+8], xmm6
            }
            YawVectors(*(float *)&_XMM0, forward.m, &forward.m[1]);
            __asm
            {
              vmovss  [rbp+210h+var_170], xmm6
              vmovss  [rbp+210h+var_16C], xmm6
              vmovss  [rbp+210h+var_168], xmm10
            }
            Vec3Rotate(&in, &forward, &out);
            __asm
            {
              vmovss  xmm4, dword ptr [rbp+210h+out]
              vmovss  xmm5, dword ptr [rbp+210h+out+4]
              vmovss  xmm6, dword ptr [rbp+210h+out+8]
              vmovss  xmm7, dword ptr [rsi+8]
              vmulss  xmm1, xmm4, xmm4
              vmulss  xmm0, xmm5, xmm5
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm6, xmm6
              vaddss  xmm0, xmm2, xmm1
              vsqrtss xmm3, xmm0, xmm0
              vcmpless xmm0, xmm3, cs:__real@80000000
              vblendvps xmm0, xmm3, xmm10, xmm0
              vdivss  xmm1, xmm10, xmm0
              vmulss  xmm10, xmm4, xmm1
              vmovss  xmm4, dword ptr [rsi+4]
              vmulss  xmm8, xmm5, xmm1
              vmulss  xmm9, xmm6, xmm1
              vmovss  xmm6, dword ptr [rsi]
              vmulss  xmm1, xmm4, xmm4
              vmulss  xmm0, xmm6, xmm6
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm2, xmm2, xmm1
              vsqrtss xmm3, xmm2, xmm2
              vcmpless xmm0, xmm3, cs:__real@80000000
              vmovss  xmm2, cs:__real@3f800000
              vblendvps xmm0, xmm3, xmm2, xmm0
              vdivss  xmm5, xmm2, xmm0
              vmulss  xmm0, xmm5, xmm4
              vmulss  xmm1, xmm5, xmm6
              vmulss  xmm2, xmm1, xmm10
              vmulss  xmm3, xmm0, xmm8
              vmulss  xmm0, xmm5, xmm7
              vmulss  xmm1, xmm0, xmm9
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm2, xmm4, xmm1
              vcomiss xmm2, cs:__real@3dcccccd
              vmovss  dword ptr [rbp+210h+out], xmm10
              vmovss  dword ptr [rbp+210h+out+4], xmm8
              vmovss  dword ptr [rbp+210h+out+8], xmm9
            }
            if ( !v275 )
            {
              v275 = _R12->type < VEH_HELICOPTER;
              v276 = _R12->type == VEH_HELICOPTER;
              if ( _R12->type != VEH_HELICOPTER )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehicle_tangential_clip_vel_scale, "bg_vehicle_tangential_clip_vel_scale");
                __asm
                {
                  vmovss  xmm1, dword ptr [rbp+210h+in+4]
                  vmovss  xmm2, dword ptr [rbp+210h+in]
                  vmulss  xmm4, xmm1, xmm1
                  vmovss  xmm1, dword ptr [rbp+210h+in+8]
                  vmulss  xmm3, xmm2, xmm2
                  vaddss  xmm5, xmm4, xmm3
                  vmulss  xmm2, xmm1, xmm1
                  vaddss  xmm3, xmm5, xmm2
                  vsqrtss xmm4, xmm3, xmm3
                  vmulss  xmm12, xmm0, xmm4
                }
              }
            }
          }
          __asm
          {
            vmulss  xmm1, xmm14, dword ptr [rsi+4]
            vmulss  xmm0, xmm13, dword ptr [rsi]
            vxorps  xmm9, xmm11, cs:__xmm@80000000800000008000000080000000
            vcomiss xmm9, xmm11
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm15, dword ptr [rsi+8]
            vaddss  xmm0, xmm2, xmm1
            vmulss  xmm6, xmm0, xmm12
          }
          if ( !v275 && !v276 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm11, xmm11
              vmovsd  [rsp+310h+var_2E0], xmm0
              vcvtss2sd xmm1, xmm9, xmm9
              vmovsd  [rsp+310h+var_2E8], xmm1
            }
            v346 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v415, v417);
            v275 = 0;
            v276 = !v346;
            if ( v346 )
              __debugbreak();
          }
          __asm
          {
            vcomiss xmm9, xmm11
            vmaxss  xmm0, xmm6, xmm9
            vminss  xmm1, xmm0, xmm11
            vmulss  xmm0, xmm14, [rsp+310h+var_2C4]
            vmulss  xmm8, xmm1, xmm13
            vmulss  xmm7, xmm1, xmm14
            vmulss  xmm6, xmm1, xmm15
            vmulss  xmm1, xmm13, dword ptr [rsp+310h+var_2C0]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm15, [rsp+310h+var_2CC]
            vaddss  xmm2, xmm2, xmm1
            vmulss  xmm10, xmm2, xmm12
            vmovss  dword ptr [rbp+210h+outClippedVelocity], xmm8
            vmovss  dword ptr [rbp+210h+outClippedVelocity+4], xmm7
            vmovss  dword ptr [rbp+210h+outClippedVelocity+8], xmm6
          }
          if ( !v275 && !v276 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm11, xmm11
              vmovsd  [rsp+310h+var_2E0], xmm0
              vcvtss2sd xmm1, xmm9, xmm9
              vmovsd  [rsp+310h+var_2E8], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v416, v418) )
              __debugbreak();
          }
          __asm
          {
            vmaxss  xmm0, xmm10, xmm9
            vminss  xmm2, xmm0, xmm11
            vmulss  xmm1, xmm2, xmm13
            vmovss  dword ptr [rbp+210h+normal], xmm1
            vmulss  xmm1, xmm2, xmm15
            vmulss  xmm0, xmm2, xmm14
            vmovss  dword ptr [rbp+210h+normal+8], xmm1
            vmovss  dword ptr [rbp+210h+normal+4], xmm0
          }
          v362 = 1i64;
          while ( 1 )
          {
            __asm { vmovss  xmm9, cs:__real@3dcccccd }
            if ( v362 != v234 )
            {
              __asm
              {
                vmulss  xmm1, xmm7, dword ptr [rbp+rcx*4+210h+planes+4]
                vmulss  xmm0, xmm8, dword ptr [rbp+rcx*4+210h+planes]
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, dword ptr [rbp+rcx*4+210h+planes+8]
                vaddss  xmm0, xmm2, xmm1
                vcomiss xmm0, xmm9
              }
              if ( v362 < v234 )
                break;
            }
            if ( (__int64)++v362 >= v93 )
            {
              __asm { vmovss  xmm12, cs:__real@80000000 }
              goto LABEL_113;
            }
          }
LABEL_125:
          *(_QWORD *)_RSI->v = 0i64;
          _RSI->v[2] = 0.0;
          result = 1i64;
          goto LABEL_130;
        }
LABEL_115:
        __asm { vmovsd  xmm0, qword ptr [rbp+210h+normal] }
        v371 = normal.v[2];
        __asm
        {
          vmovsd  qword ptr [rbp+210h+velocity], xmm0
          vmovss  xmm14, dword ptr [rbp+210h+velocity]
          vmovss  dword ptr [rsi], xmm8
        }
        velocity.v[2] = v371;
        __asm
        {
          vmovss  xmm8, dword ptr [rbp+210h+velocity+8]
          vshufps xmm15, xmm0, xmm0, 55h ; 'U'
          vmovss  dword ptr [rsp+310h+var_2C0], xmm14
          vmovss  dword ptr [rsi+4], xmm7
          vmovss  dword ptr [rsi+8], xmm6
          vmovss  [rsp+310h+var_2CC], xmm8
          vmovss  [rsp+310h+var_2C4], xmm15
        }
      }
    }
    v372 = v422 + 1;
    v422 = v372;
    if ( v372 >= 4 )
      goto LABEL_127;
    __asm { vmovss  xmm10, cs:__real@3f800000 }
    _RBX = vehicleState;
    p_bounds = (const Bounds *)v431;
    v94 = v429;
  }
  v372 = v422;
LABEL_127:
  if ( gravity )
  {
    __asm
    {
      vmovss  dword ptr [rsi], xmm14
      vmovss  dword ptr [rsi+4], xmm15
      vmovss  dword ptr [rsi+8], xmm8
    }
  }
  result = v372 != 0;
LABEL_130:
  _R11 = &v449;
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
BG_VehicleSteerMove
==============
*/
void BG_VehicleSteerMove(pmove_t *pm, const pml_t *pml)
{
  const VehicleDef *VehicleDef; 
  bool v61; 
  int flags; 
  unsigned int v70; 
  char v83; 
  char v84; 
  const dvar_t *v101; 
  float fmt; 
  float fmta; 
  vec3_t right; 
  vec3_t forward; 
  tmat33_t<vec3_t> axis; 
  VehicleState vehicleState; 
  GroundTrace groundTrace; 

  _RSI = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1166, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  VehicleDef = BG_GetVehicleDef(pm);
  vehicleState.entity = _RBX->vehicleState.entity;
  _R14 = VehicleDef;
  vehicleState.clipmask = 42009105;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+12Ch]
    vmovss  dword ptr [rbp+110h+vehicleState.origin], xmm0
    vmovss  xmm1, dword ptr [rbx+130h]
    vmovss  dword ptr [rbp+110h+vehicleState.origin+4], xmm1
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  dword ptr [rbp+110h+vehicleState.origin+8], xmm0
    vmovss  xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rbp+110h+vehicleState.angles], xmm1
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rbp+110h+vehicleState.angles+4], xmm0
    vmovss  xmm1, dword ptr [rbx+140h]
    vmovss  dword ptr [rbp+110h+vehicleState.angles+8], xmm1
    vmovss  xmm0, dword ptr [rbx+12Ch]
    vmovss  dword ptr [rbp+110h+vehicleState.previousOrigin], xmm0
    vmovss  xmm1, dword ptr [rbx+130h]
    vmovss  dword ptr [rbp+110h+vehicleState.previousOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  dword ptr [rbp+110h+vehicleState.previousOrigin+8], xmm0
    vmovss  xmm1, dword ptr [rbx+144h]
    vmovss  dword ptr [rbp+110h+vehicleState.velocity], xmm1
    vmovss  xmm0, dword ptr [rbx+148h]
    vmovss  dword ptr [rbp+110h+vehicleState.velocity+4], xmm0
    vmovss  xmm1, dword ptr [rbx+14Ch]
    vmovss  dword ptr [rbp+110h+vehicleState.velocity+8], xmm1
    vmovss  xmm0, dword ptr [rbx+15Ch]
    vmovss  dword ptr [rbp+110h+vehicleState.tilt], xmm0
    vmovss  xmm1, dword ptr [rbx+160h]
    vmovss  dword ptr [rbp+110h+vehicleState.tilt+4], xmm1
  }
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  __asm { vmovss  xmm3, dword ptr [rsi+24h]; dt }
  BG_VehicleGroundTrace(pm, &vehicleState, &groundTrace, *(float *)&_XMM3);
  if ( groundTrace.onGround )
  {
    _EAX = pm->cmd.forwardmove;
    __asm { vmovd   xmm0, eax }
    _EAX = pm->cmd.rightmove;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, dword ptr [r14+5Ch]
      vmovaps [rsp+210h+var_30], xmm6
      vmovaps [rsp+210h+var_40], xmm7
      vmulss  xmm7, xmm1, cs:__real@3c010204
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm1, xmm0, dword ptr [r14+64h]
      vmulss  xmm2, xmm1, dword ptr [rsi+24h]
      vmovss  xmm0, dword ptr [rbp+110h+vehicleState.angles+4]
      vmulss  xmm3, xmm2, cs:__real@3c010204
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm4, xmm1, xmm2, 1
      vsubss  xmm0, xmm5, xmm4
      vmulss  xmm0, xmm0, cs:__real@43b40000; yaw
      vmovaps [rsp+210h+var_50], xmm8
      vmovss  dword ptr [rbp+110h+vehicleState.angles+4], xmm0
      vmovaps [rsp+210h+var_60], xmm9
    }
    YawVectors(*(float *)&_XMM0, &forward, &right);
    AnglesToAxis(&vehicleState.angles, &axis);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+210h+forward]
      vmovss  xmm2, dword ptr [rsp+210h+forward+4]
    }
    LOBYTE(_EAX) = pm->cmd.forwardmove;
    __asm
    {
      vmovss  xmm8, dword ptr cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm7, xmm2
      vsubss  xmm3, xmm1, dword ptr [rbp+110h+vehicleState.velocity+4]
      vmulss  xmm2, xmm2, dword ptr [rbp+110h+vehicleState.velocity+4]
      vmulss  xmm0, xmm7, xmm5
      vsubss  xmm6, xmm0, dword ptr [rbp+110h+vehicleState.velocity]
      vmulss  xmm0, xmm5, dword ptr [rbp+110h+vehicleState.velocity]
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm3, xmm3, xmm3
      vaddss  xmm9, xmm2, xmm0
      vaddss  xmm0, xmm3, xmm1
      vsqrtss xmm4, xmm0, xmm0
      vxorps  xmm6, xmm6, xmm6
    }
    v61 = (_BYTE)_EAX == 0;
    if ( (_BYTE)_EAX )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+24h]
        vmulss  xmm1, xmm0, dword ptr [r14+60h]
      }
      _EAX = (char)_EAX;
      __asm
      {
        vminss  xmm3, xmm1, xmm4
        vmovd   xmm1, eax
      }
      _EAX = 0;
      __asm
      {
        vmovd   xmm0, eax
        vxorps  xmm2, xmm3, xmm8
        vpcmpgtd xmm1, xmm0, xmm1
      }
      v70 = _RBX->vehicleState.flags & 0xFFFFFFF3 | 4;
      __asm { vblendvps xmm7, xmm3, xmm2, xmm1 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+2E0h]
        vmulss  xmm1, xmm0, dword ptr [r14+60h]
        vmulss  xmm2, xmm1, dword ptr [rsi+24h]
      }
      flags = _RBX->vehicleState.flags;
      __asm
      {
        vminss  xmm3, xmm2, xmm4
        vxorps  xmm1, xmm3, xmm8
        vcmpless xmm0, xmm6, xmm9
        vblendvps xmm7, xmm3, xmm1, xmm0
        vucomiss xmm7, xmm6
      }
      if ( v61 )
        v70 = flags & 0xFFFFFFF3;
      else
        v70 = flags & 0xFFFFFFF3 | 8;
    }
    _RBX->vehicleState.flags = v70;
    __asm { vmovss  xmm0, dword ptr [rbp+110h+axis+18h] }
    _R15 = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+110h+axis+1Ch]
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal], xmm0
      vmovss  xmm0, dword ptr [rbp+110h+axis+20h]
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal+8], xmm0
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal+4], xmm1
    }
    if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+110h+axis+20h]
      vcomiss xmm0, dword ptr [r15+28h]
    }
    if ( v83 )
    {
      __asm
      {
        vmulss  xmm1, xmm7, dword ptr [rsp+210h+forward]
        vaddss  xmm3, xmm1, dword ptr [rbp+110h+vehicleState.velocity]
        vmulss  xmm1, xmm7, dword ptr [rsp+210h+forward+4]
        vaddss  xmm2, xmm1, dword ptr [rbp+110h+vehicleState.velocity+4]
        vmulss  xmm0, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm7, xmm1, xmm0
        vmovss  dword ptr [rbp+110h+vehicleState.velocity+4], xmm2
        vmovss  dword ptr [rbp+110h+vehicleState.velocity], xmm3
        vmovss  xmm1, dword ptr [r14+5Ch]
        vmulss  xmm2, xmm1, xmm1
        vcomiss xmm7, xmm2
      }
      if ( !(v83 | v84) )
      {
        __asm { vucomiss xmm7, xmm6 }
        if ( v84 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1240, ASSERT_TYPE_ASSERT, "(forwardSpeed != 0.0f)", (const char *)&queryFormat, "forwardSpeed != 0.0f") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [r14+5Ch]
          vsqrtss xmm1, xmm7, xmm7
          vdivss  xmm3, xmm0, xmm1
          vmulss  xmm2, xmm3, dword ptr [rbp+110h+vehicleState.velocity]
          vmulss  xmm1, xmm3, dword ptr [rbp+110h+vehicleState.velocity+4]
          vmovss  dword ptr [rbp+110h+vehicleState.velocity], xmm2
          vmovss  dword ptr [rbp+110h+vehicleState.velocity+4], xmm1
        }
      }
      __asm
      {
        vmovss  xmm0, cs:__real@bf800000
        vmovss  dword ptr [rsp+210h+right+8], xmm0
        vmovss  dword ptr [rsp+210h+right], xmm6
        vmovss  dword ptr [rsp+210h+right+4], xmm6
      }
      Vec3Cross(&axis.m[2], &right, &axis.m[1]);
      Vec3Cross(&axis.m[1], &axis.m[2], axis.m);
      v101 = DCONST_DVARFLT_bg_vehicle_gravity;
      if ( !DCONST_DVARFLT_bg_vehicle_gravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_gravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v101);
      __asm
      {
        vmovss  xmm7, dword ptr [rsi+24h]
        vmulss  xmm1, xmm7, dword ptr [r14+28h]
        vxorps  xmm0, xmm1, xmm8
        vmulss  xmm1, xmm1, dword ptr [rsp+210h+axis+8]
        vxorps  xmm4, xmm1, xmm8
        vmulss  xmm2, xmm4, dword ptr [rsp+210h+axis]
        vaddss  xmm2, xmm2, dword ptr [rbp+110h+vehicleState.velocity]
        vmulss  xmm3, xmm4, dword ptr [rsp+210h+axis+4]
        vmulss  xmm4, xmm4, dword ptr [rsp+210h+axis+8]
        vaddss  xmm1, xmm4, dword ptr [rbp+110h+vehicleState.velocity+8]
        vmovss  dword ptr [rbp+110h+vehicleState.velocity], xmm2
        vaddss  xmm2, xmm3, dword ptr [rbp+110h+vehicleState.velocity+4]
        vmovss  dword ptr [rbp+110h+vehicleState.velocity+4], xmm2
        vmovss  dword ptr [rsp+210h+right], xmm6
        vmovss  dword ptr [rsp+210h+right+4], xmm6
        vmovss  dword ptr [rsp+210h+right+8], xmm0
        vmovss  dword ptr [rbp+110h+vehicleState.velocity+8], xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm2, dword ptr [r14+5Ch]; max
        vxorps  xmm1, xmm2, xmm8; min
        vaddss  xmm0, xmm7, xmm9; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm2, xmm0, dword ptr [rsp+210h+forward]
        vmulss  xmm0, xmm0, dword ptr [rsp+210h+forward+4]
        vmovss  xmm7, dword ptr [rsi+24h]
        vmovss  dword ptr [rbp+110h+vehicleState.velocity+4], xmm0
        vmovss  dword ptr [rbp+110h+vehicleState.velocity], xmm2
        vmovss  dword ptr [rbp+110h+vehicleState.velocity+8], xmm6
      }
    }
    __asm { vmovss  dword ptr [rsp+210h+fmt], xmm7 }
    BG_VehicleGroundMove(pm, &vehicleState, &groundTrace, 0, fmt);
    _RBX->vehicleState.flags &= ~2u;
    __asm
    {
      vmovaps xmm9, [rsp+210h+var_60]
      vmovaps xmm8, [rsp+210h+var_50]
      vmovaps xmm7, [rsp+210h+var_40]
      vmovaps xmm6, [rsp+210h+var_30]
    }
  }
  else
  {
    AnglesToAxis(&vehicleState.angles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+110h+axis+18h]
      vmovss  xmm1, dword ptr [rbp+110h+axis+1Ch]
      vmovss  xmm3, dword ptr [rsi+24h]; dt
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal], xmm0
      vmovss  xmm0, dword ptr [rbp+110h+axis+20h]
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal+8], xmm0
      vmovss  dword ptr [rbp+110h+vehicleState.groundNormal+4], xmm1
    }
    BG_VehicleAirMove(pm, &vehicleState, &groundTrace, *(double *)&_XMM3);
    _RBX->vehicleState.flags |= 2u;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovss  dword ptr [rsp+210h+fmt], xmm0
  }
  BG_VehicleGroundPlant(pm, &vehicleState, &groundTrace, 1, fmta);
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.origin]
    vmovss  dword ptr [rax+12Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+110h+vehicleState.origin+4]
    vmovss  dword ptr [rax+130h], xmm1
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.origin+8]
    vmovss  dword ptr [rax+134h], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.angles]
    vmovss  dword ptr [rax+138h], xmm0
    vmovss  xmm1, dword ptr [rbp+110h+vehicleState.angles+4]
    vmovss  dword ptr [rax+13Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.angles+8]
    vmovss  dword ptr [rax+140h], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.velocity]
    vmovss  dword ptr [rax+144h], xmm0
    vmovss  xmm1, dword ptr [rbp+110h+vehicleState.velocity+4]
    vmovss  dword ptr [rax+148h], xmm1
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.velocity+8]
    vmovss  dword ptr [rax+14Ch], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+110h+vehicleState.tilt]
    vmovss  dword ptr [rax+15Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+110h+vehicleState.tilt+4]
    vmovss  dword ptr [rax+160h], xmm1
  }
}

/*
==============
BG_VehicleStepSlideMove
==============
*/
void BG_VehicleStepSlideMove(pmove_t *pm, VehicleState *vehicleState, const GroundTrace *groundTrace, int gravity, float stepsize, float dt, bool useCapsuleForBrushCollision)
{
  int entity; 
  bool v59; 
  signed int m_characterCount; 
  int v74; 
  char v78; 
  float fmt; 
  float fmta; 
  int clipmask; 
  int v107; 
  vec3_t start; 
  vec3_t v114; 
  vec3_t end; 
  trace_t results; 
  VehicleCollisionInfo outCollisionInfo; 

  __asm
  {
    vmovaps [rsp+1F0h+var_C0], xmm14
    vmovaps [rsp+1F0h+var_D0], xmm15
  }
  _RSI = vehicleState;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 819, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 820, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !groundTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 821, ASSERT_TYPE_ASSERT, "(groundTrace)", (const char *)&queryFormat, "groundTrace") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  xmm1, dword ptr [rsi+8]
    vmovaps [rsp+1F0h+var_40], xmm6
    vmovss  dword ptr [rsp+1F0h+start], xmm0
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovaps [rsp+1F0h+var_50], xmm7
    vmovss  dword ptr [rsp+1F0h+start+8], xmm0
    vmovss  xmm0, dword ptr [rsi+1Ch]
    vmovaps [rsp+1F0h+var_60], xmm8
    vmovss  [rsp+1F0h+var_1AC], xmm0
    vmovss  xmm0, dword ptr [rsi+20h]
    vmovaps [rsp+1F0h+var_70], xmm9
    vmovss  [rsp+1F0h+var_1B0], xmm0
    vmovss  xmm0, dword ptr [rsi+24h]
    vmovaps [rsp+1F0h+var_80], xmm10
    vmovss  [rsp+1F0h+var_1A8], xmm0
    vmovss  xmm0, [rbp+0F0h+dt]
    vmovaps [rsp+1F0h+var_90], xmm11
    vmovaps [rsp+1F0h+var_A0], xmm12
    vmovss  dword ptr [rsp+1F0h+fmt], xmm0
    vmovss  dword ptr [rsp+1F0h+start+4], xmm1
    vmovaps [rsp+1F0h+var_B0], xmm13
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm15, [rbp+0F0h+stepsize]
  }
  if ( BG_VehicleSlideMove(pm, _RSI, groundTrace, gravity, fmt, useCapsuleForBrushCollision, &outCollisionInfo) )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+1F0h+start]
      vmovss  xmm8, dword ptr [rsi+4]
      vmovss  xmm9, dword ptr [rsi+8]
      vmovss  xmm10, dword ptr [rsi+0Ch]
      vmovss  xmm11, dword ptr [rsi+1Ch]
      vmovss  xmm12, dword ptr [rsi+20h]
      vmovss  xmm13, dword ptr [rsi+24h]
      vsubss  xmm0, xmm8, xmm1
    }
    clipmask = _RSI->clipmask;
    entity = _RSI->entity;
    __asm
    {
      vmovss  [rsp+1F0h+var_1A4], xmm0
      vmovss  xmm0, dword ptr [rsp+1F0h+start+4]
      vmovss  dword ptr [rsp+1F0h+end], xmm1
      vaddss  xmm1, xmm15, dword ptr [rsp+1F0h+start+8]
      vsubss  xmm2, xmm9, xmm0
      vmovss  [rsp+1F0h+var_1A0], xmm2
      vmovss  dword ptr [rsp+1F0h+end+4], xmm0
      vmovss  dword ptr [rbp+0F0h+end+8], xmm1
    }
    BG_Vehicle_Trace(pm, &start, &end, &_RSI->bounds, entity, clipmask, &results);
    __asm
    {
      vmovss  xmm6, [rbp+0F0h+results.fraction]
      vmovss  xmm0, dword ptr [rsp+1F0h+end]
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start]
      vmovss  xmm0, dword ptr [rsp+1F0h+end+4]
      vmulss  xmm1, xmm1, xmm6
      vaddss  xmm7, xmm1, dword ptr [rsp+1F0h+start]
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start+4]
      vmovss  xmm0, dword ptr [rbp+0F0h+end+8]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rsp+1F0h+start+8]
      vaddss  xmm5, xmm2, dword ptr [rsp+1F0h+start+4]
      vmovss  xmm0, [rsp+1F0h+var_1AC]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm6, xmm2, dword ptr [rsp+1F0h+start+8]
      vmovss  xmm1, [rsp+1F0h+var_1B0]
      vmovss  xmm2, [rsp+1F0h+var_1A8]
      vmovss  dword ptr [rsi+0Ch], xmm6
      vmovss  dword ptr [rsi+4], xmm7
      vmovss  dword ptr [rsi+8], xmm5
      vmovss  dword ptr [rsi+1Ch], xmm0
      vmovss  xmm0, [rbp+0F0h+dt]
      vmovss  dword ptr [rsp+1F0h+fmt], xmm0
      vmovss  dword ptr [rsi+20h], xmm1
      vmovss  dword ptr [rsi+24h], xmm2
    }
    BG_VehicleSlideMove(pm, _RSI, groundTrace, gravity, fmta, useCapsuleForBrushCollision, &outCollisionInfo);
    v59 = groundTrace->hasGround == 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  xmm1, dword ptr [rsi+8]
      vmovss  xmm3, dword ptr [rsi+0Ch]
      vmovss  dword ptr [rsp+1F0h+var_188], xmm0
      vmovss  xmm0, dword ptr [rsp+1F0h+start+8]
      vmovss  dword ptr [rsp+1F0h+var_188+4], xmm1
    }
    if ( v59 )
    {
      __asm
      {
        vsubss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rsp+1F0h+var_188+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm1, xmm15, cs:__real@3f000000
        vsubss  xmm2, xmm0, xmm6
        vsubss  xmm2, xmm2, xmm1
        vaddss  xmm0, xmm2, xmm3
        vmovss  dword ptr [rsp+1F0h+var_188+8], xmm0
      }
    }
    BG_Vehicle_Trace(pm, &_RSI->origin, &v114, &_RSI->bounds, _RSI->entity, _RSI->clipmask, &results);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    if ( Trace_GetEntityHitId(&results) >= m_characterCount && !results.startsolid )
    {
      __asm
      {
        vmovss  xmm7, [rbp+0F0h+results.fraction]
        vcomiss xmm7, xmm14
        vmovss  xmm0, dword ptr [rsp+1F0h+start+8]
        vsubss  xmm1, xmm0, xmm6
        vaddss  xmm2, xmm1, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rsi+0Ch], xmm2
      }
      goto LABEL_24;
    }
    __asm
    {
      vmovss  dword ptr [rsi+4], xmm8
      vmovss  dword ptr [rsi+8], xmm9
      vmovss  dword ptr [rsi+0Ch], xmm10
      vmovss  dword ptr [rsi+1Ch], xmm11
      vmovss  dword ptr [rsi+20h], xmm12
      vmovss  dword ptr [rsi+24h], xmm13
    }
  }
  if ( groundTrace->hasGround )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  xmm1, dword ptr [rsi+8]
    }
    v107 = _RSI->clipmask;
    v74 = _RSI->entity;
    __asm
    {
      vmovss  dword ptr [rsp+1F0h+var_188], xmm0
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vsubss  xmm2, xmm0, xmm15
      vmovss  dword ptr [rsp+1F0h+var_188+8], xmm2
      vmovss  dword ptr [rsp+1F0h+var_188+4], xmm1
    }
    BG_Vehicle_Trace(pm, &_RSI->origin, &v114, &_RSI->bounds, v74, v107, &results);
    __asm
    {
      vmovss  xmm6, [rbp+0F0h+results.fraction]
      vcomiss xmm6, xmm14
    }
    if ( v78 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1F0h+var_188]
        vsubss  xmm1, xmm0, dword ptr [rsi+4]
        vmovss  xmm0, dword ptr [rsp+1F0h+var_188+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsi+4]
        vmovss  dword ptr [rsi+4], xmm3
        vsubss  xmm1, xmm0, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsp+1F0h+var_188+8]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm3
        vsubss  xmm1, xmm0, dword ptr [rsi+0Ch]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rsi+0Ch]
        vmovss  dword ptr [rsi+0Ch], xmm3
      }
    }
  }
LABEL_24:
  __asm
  {
    vmovaps xmm13, [rsp+1F0h+var_B0]
    vmovaps xmm12, [rsp+1F0h+var_A0]
    vmovaps xmm11, [rsp+1F0h+var_90]
    vmovaps xmm10, [rsp+1F0h+var_80]
    vmovaps xmm9, [rsp+1F0h+var_70]
    vmovaps xmm8, [rsp+1F0h+var_60]
    vmovaps xmm7, [rsp+1F0h+var_50]
    vmovaps xmm6, [rsp+1F0h+var_40]
    vmovaps xmm14, [rsp+1F0h+var_C0]
    vmovaps xmm15, [rsp+1F0h+var_D0]
  }
}

/*
==============
BG_VehicleStrafeMove
==============
*/
void BG_VehicleStrafeMove(pmove_t *pm, const pml_t *pml)
{
  char v60; 
  char v61; 
  unsigned int v130; 
  char v132; 
  int flags; 
  unsigned int v140; 
  char v144; 
  char v145; 
  int v171; 
  float fmt; 
  float fmta; 
  vec2_t vec; 
  float v192; 
  vec3_t v193; 
  vec3_t forward; 
  vec3_t right; 
  VehicleState vehicleState; 
  tmat33_t<vec3_t> axis; 
  GroundTrace groundTrace; 

  _R15 = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1318, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1318, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _R14 = BG_GetVehicleDef(pm);
  AnglesToAxis(&_RDI->vehicleState.angles, &axis);
  vehicleState.entity = _RDI->vehicleState.entity;
  vehicleState.clipmask = 42009105;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+12Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.origin], xmm0
    vmovss  xmm1, dword ptr [rdi+130h]
    vmovss  dword ptr [rbp+190h+vehicleState.origin+4], xmm1
    vmovss  xmm0, dword ptr [rdi+134h]
    vmovss  dword ptr [rbp+190h+vehicleState.origin+8], xmm0
    vmovss  xmm1, dword ptr [rdi+138h]
    vmovss  dword ptr [rbp+190h+vehicleState.angles], xmm1
    vmovss  xmm0, dword ptr [rdi+13Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.angles+4], xmm0
    vmovss  xmm1, dword ptr [rdi+140h]
    vmovss  dword ptr [rbp+190h+vehicleState.angles+8], xmm1
    vmovss  xmm0, dword ptr [rdi+12Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.previousOrigin], xmm0
    vmovss  xmm1, dword ptr [rdi+130h]
    vmovss  dword ptr [rbp+190h+vehicleState.previousOrigin+4], xmm1
    vmovss  xmm0, dword ptr [rdi+134h]
    vmovss  dword ptr [rbp+190h+vehicleState.previousOrigin+8], xmm0
    vmovss  xmm1, dword ptr [rdi+144h]
    vmovss  dword ptr [rbp+190h+vehicleState.velocity], xmm1
    vmovss  xmm0, dword ptr [rdi+148h]
    vmovss  dword ptr [rbp+190h+vehicleState.velocity+4], xmm0
    vmovss  xmm1, dword ptr [rdi+14Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.velocity+8], xmm1
    vmovss  xmm0, dword ptr [rdi+15Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.tilt], xmm0
    vmovss  xmm1, dword ptr [rdi+160h]
    vmovss  xmm0, dword ptr [rbp+190h+axis+18h]
    vmovss  dword ptr [rbp+190h+vehicleState.tilt+4], xmm1
    vmovss  xmm1, dword ptr [rbp+190h+axis+1Ch]
    vmovss  dword ptr [rbp+190h+vehicleState.groundNormal], xmm0
    vmovss  xmm0, dword ptr [rbp+190h+axis+20h]
    vmovss  dword ptr [rbp+190h+vehicleState.groundNormal+4], xmm1
    vmovss  dword ptr [rbp+190h+vehicleState.groundNormal+8], xmm0
  }
  BG_GetVehicleBounds(pm, &vehicleState.bounds);
  __asm { vmovss  xmm3, dword ptr [r15+24h]; dt }
  BG_VehicleGroundTrace(pm, &vehicleState, &groundTrace, *(float *)&_XMM3);
  if ( !groundTrace.onGround || (_RDI->vehicleState.flags & 2) != 0 )
  {
    __asm { vmovss  xmm3, dword ptr [r15+24h]; dt }
    BG_VehicleAirMove(pm, &vehicleState, &groundTrace, *(double *)&_XMM3);
    goto LABEL_49;
  }
  _EAX = pm->cmd.forwardmove;
  __asm
  {
    vmovaps [rsp+290h+var_48+8], xmm6
    vmovaps [rsp+290h+var_58+8], xmm7
    vmovaps [rsp+290h+var_68+8], xmm8
    vmovaps [rsp+290h+var_78+8], xmm9
    vmovd   xmm4, eax
  }
  _EAX = pm->cmd.rightmove;
  __asm
  {
    vcvtdq2ps xmm4, xmm4
    vmulss  xmm0, xmm4, xmm4
    vmovaps [rsp+290h+var_88+8], xmm10
    vmovd   xmm5, eax
    vcvtdq2ps xmm5, xmm5
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, cs:__real@38820610
    vmulss  xmm1, xmm5, cs:__real@3c010204
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmulss  xmm9, xmm3, dword ptr [r14+5Ch]
    vmovaps [rsp+290h+var_98+8], xmm11
    vmovaps [rsp+290h+var_A8+8], xmm12
    vmovaps [rsp+290h+var_B8+8], xmm14
    vmovss  xmm14, cs:__real@3f800000
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm2, xmm14, xmm0
    vmulss  xmm0, xmm4, cs:__real@3c010204
    vmulss  xmm6, xmm0, xmm2
    vmovss  xmm0, dword ptr [rdi+1DCh]; yaw
    vmulss  xmm7, xmm1, xmm2
  }
  YawVectors(*(float *)&_XMM0, &forward, &right);
  __asm
  {
    vmulss  xmm3, xmm6, dword ptr [rsp+290h+forward]
    vmulss  xmm2, xmm7, dword ptr [rsp+290h+forward+4]
    vaddss  xmm0, xmm3, xmm2
    vmulss  xmm3, xmm6, dword ptr [rsp+290h+right]
    vmulss  xmm2, xmm7, dword ptr [rsp+290h+right+4]
    vxorps  xmm8, xmm8, xmm8
    vaddss  xmm1, xmm3, xmm2
    vmovss  dword ptr [rsp+290h+vec+4], xmm1
    vmovss  [rsp+290h+anonymous_0], xmm8
    vmovss  [rsp+290h+anonymous_1], xmm8
    vmovss  [rbp+190h+var_210], xmm14
    vmovss  dword ptr [rsp+290h+vec], xmm0
    vmovss  [rsp+290h+var_248], xmm8
  }
  *(double *)&_XMM0 = vectosignedyaw(&vec);
  __asm
  {
    vsubss  xmm1, xmm0, dword ptr [rbp+190h+vehicleState.angles+4]
    vmovss  xmm7, cs:__real@3b360b61
    vmovss  xmm5, cs:__real@3f000000
    vmovss  xmm12, cs:__real@43b40000
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm4, xmm1, xmm7
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm4, xmm5
    vmovss  xmm2, xmm1, xmm2
    vxorps  xmm11, xmm11, xmm11
    vroundss xmm3, xmm11, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm3, xmm1, xmm12
    vmovaps xmm6, xmm0
    vandps  xmm0, xmm3, xmm10
    vcomiss xmm0, cs:__real@42b40000
  }
  if ( !(v60 | v61) )
  {
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vmulss  xmm0, xmm6, xmm7
      vaddss  xmm4, xmm0, xmm5
      vaddss  xmm2, xmm4, xmm5
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm11, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm6, xmm1, xmm12
      vsubss  xmm0, xmm6, dword ptr [rbp+190h+vehicleState.angles+4]
      vmulss  xmm4, xmm0, xmm7
      vxorps  xmm1, xmm1, xmm1
      vaddss  xmm2, xmm4, xmm5
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm11, xmm0, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm3, xmm1, xmm12
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14+64h]
    vmulss  xmm2, xmm0, dword ptr [r15+24h]
    vandps  xmm1, xmm3, xmm10
    vcomiss xmm1, xmm2
    vmovss  xmm10, dword ptr cs:__xmm@80000000800000008000000080000000
  }
  if ( !(v60 | v61) )
  {
    __asm
    {
      vxorps  xmm1, xmm2, xmm10
      vcmpless xmm0, xmm8, xmm3
      vblendvps xmm0, xmm1, xmm2, xmm0
      vaddss  xmm1, xmm0, dword ptr [rbp+190h+vehicleState.angles+4]
      vmulss  xmm4, xmm1, xmm7
      vxorps  xmm0, xmm0, xmm0
      vaddss  xmm2, xmm4, xmm5
      vmovss  xmm1, xmm0, xmm2
      vroundss xmm3, xmm11, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm6, xmm0, xmm12
      vmovaps xmm0, xmm6; yaw
    }
    YawVectors(*(float *)&_XMM0, &v193, NULL);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+290h+var_240+4]
      vmovss  xmm2, dword ptr [rsp+290h+var_240]
      vmulss  xmm0, xmm2, dword ptr [rsp+290h+vec]
      vmulss  xmm1, xmm3, dword ptr [rsp+290h+vec+4]
      vaddss  xmm1, xmm1, xmm0
      vmulss  xmm9, xmm1, dword ptr [r14+5Ch]
      vunpcklps xmm2, xmm2, xmm3
      vmovsd  qword ptr [rsp+290h+vec], xmm2
    }
    v192 = v193.v[2];
  }
  __asm
  {
    vucomiss xmm9, xmm8
    vmovaps xmm12, [rsp+290h+var_A8+8]
    vmovaps xmm11, [rsp+290h+var_98+8]
  }
  if ( v61 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+290h+forward]
      vmovss  xmm1, dword ptr [rsp+290h+forward+4]
      vmovss  xmm0, dword ptr [rsp+290h+forward+8]
      vmovss  dword ptr [rsp+290h+vec], xmm2
      vmovss  dword ptr [rsp+290h+vec+4], xmm1
      vmovss  [rsp+290h+var_248], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+290h+vec+4]
      vmovss  xmm2, dword ptr [rsp+290h+vec]
      vmovss  dword ptr [rbp+190h+vehicleState.angles+4], xmm6
    }
  }
  __asm
  {
    vucomiss xmm9, xmm8
    vmulss  xmm1, xmm1, dword ptr [rbp+190h+vehicleState.velocity+4]
    vmulss  xmm0, xmm2, dword ptr [rbp+190h+vehicleState.velocity]
    vaddss  xmm7, xmm1, xmm0
    vsubss  xmm6, xmm9, xmm7
  }
  if ( v61 )
    goto LABEL_20;
  __asm
  {
    vucomiss xmm7, xmm8
    vmovss  xmm3, cs:__real@bf800000
    vcmpless xmm0, xmm8, xmm9
    vcmpless xmm1, xmm8, xmm7
    vblendvps xmm2, xmm3, xmm14, xmm0
    vblendvps xmm1, xmm3, xmm14, xmm1
    vucomiss xmm2, xmm1
  }
  if ( !v61 )
  {
LABEL_20:
    _RBX = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
    if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+190h+axis+20h]
      vcomiss xmm0, dword ptr [rbx+28h]
    }
    if ( !(v60 | v132) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+2E0h]
        vmulss  xmm1, xmm0, dword ptr [r14+60h]
        vmulss  xmm2, xmm1, dword ptr [r15+24h]; max
        vxorps  xmm1, xmm2, xmm10; min
        vmovaps xmm0, xmm6; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
    }
    __asm { vucomiss xmm6, xmm8 }
    flags = _RDI->vehicleState.flags;
    if ( v132 )
      v140 = flags & 0xFFFFFFF7;
    else
      v140 = flags | 8;
    v130 = v140 & 0xFFFFFFFB;
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r14+60h]
      vmulss  xmm2, xmm1, dword ptr [r15+24h]; max
      vxorps  xmm1, xmm2, xmm10; min
      vmovaps xmm0, xmm6; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v130 = _RDI->vehicleState.flags & 0xFFFFFFF3 | 4;
    __asm { vmovaps xmm6, xmm0 }
  }
  _RDI->vehicleState.flags = v130;
  _RBX = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
  __asm
  {
    vmovaps xmm14, [rsp+290h+var_B8+8]
    vmovaps xmm9, [rsp+290h+var_78+8]
  }
  if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+190h+axis+20h]
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v144 )
  {
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsp+290h+vec]
      vaddss  xmm3, xmm1, dword ptr [rbp+190h+vehicleState.velocity]
      vmulss  xmm1, xmm6, dword ptr [rsp+290h+vec+4]
      vaddss  xmm2, xmm1, dword ptr [rbp+190h+vehicleState.velocity+4]
      vmulss  xmm0, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm6, xmm1, xmm0
      vmovss  dword ptr [rbp+190h+vehicleState.velocity+4], xmm2
      vmovss  dword ptr [rbp+190h+vehicleState.velocity], xmm3
      vmovss  xmm1, dword ptr [r14+5Ch]
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm6, xmm2
    }
    if ( v144 | v145 )
      goto LABEL_40;
    __asm { vucomiss xmm6, xmm8 }
    if ( v145 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1419, ASSERT_TYPE_ASSERT, "(targetSpeed != 0.0f)", (const char *)&queryFormat, "targetSpeed != 0.0f") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r14+5Ch]
      vsqrtss xmm1, xmm6, xmm6
      vdivss  xmm3, xmm0, xmm1
      vmulss  xmm1, xmm3, dword ptr [rbp+190h+vehicleState.velocity+4]
      vmulss  xmm2, xmm3, dword ptr [rbp+190h+vehicleState.velocity]
      vmovss  dword ptr [rbp+190h+vehicleState.velocity+4], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm2, dword ptr [r14+5Ch]; max
      vxorps  xmm1, xmm2, xmm10; min
      vaddss  xmm0, xmm6, xmm7; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm2, xmm0, dword ptr [rsp+290h+vec]
      vmulss  xmm0, xmm0, dword ptr [rsp+290h+vec+4]
      vmovss  dword ptr [rbp+190h+vehicleState.velocity+4], xmm0
      vmovss  dword ptr [rbp+190h+vehicleState.velocity+8], xmm8
    }
  }
  __asm { vmovss  dword ptr [rbp+190h+vehicleState.velocity], xmm2 }
LABEL_40:
  _RBX = DCONST_DVARFLT_bg_vehicle_slide_min_normal;
  __asm
  {
    vmovaps xmm10, [rsp+290h+var_88+8]
    vmovaps xmm8, [rsp+290h+var_68+8]
    vmovaps xmm7, [rsp+290h+var_58+8]
    vmovaps xmm6, [rsp+290h+var_48+8]
  }
  if ( !DCONST_DVARFLT_bg_vehicle_slide_min_normal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehicle_slide_min_normal") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+190h+axis+20h]
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  v171 = v60 || !groundTrace.validGroundNormal;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+24h]
    vmovss  dword ptr [rsp+290h+fmt], xmm0
  }
  BG_VehicleGroundMove(pm, &vehicleState, &groundTrace, v171, fmt);
LABEL_49:
  __asm
  {
    vmovss  xmm0, dword ptr [r15+24h]
    vmovss  dword ptr [rsp+290h+fmt], xmm0
  }
  if ( (unsigned int)BG_VehicleGroundPlant(pm, &vehicleState, &groundTrace, 1, fmta) || groundTrace.onGround )
    _RDI->vehicleState.flags &= ~2u;
  else
    _RDI->vehicleState.flags |= 2u;
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.origin]
    vmovss  dword ptr [rax+12Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+190h+vehicleState.origin+4]
    vmovss  dword ptr [rax+130h], xmm1
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.origin+8]
    vmovss  dword ptr [rax+134h], xmm0
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.angles]
    vmovss  dword ptr [rax+138h], xmm0
    vmovss  xmm1, dword ptr [rbp+190h+vehicleState.angles+4]
    vmovss  dword ptr [rax+13Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.angles+8]
    vmovss  dword ptr [rax+140h], xmm0
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.velocity]
  }
  _RAX = pm->ps;
  __asm
  {
    vmovss  dword ptr [rax+144h], xmm0
    vmovss  xmm1, dword ptr [rbp+190h+vehicleState.velocity+4]
    vmovss  dword ptr [rax+148h], xmm1
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.velocity+8]
    vmovss  dword ptr [rax+14Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+190h+vehicleState.tilt]
    vmovss  dword ptr [rdi+15Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+190h+vehicleState.tilt+4]
    vmovss  dword ptr [rdi+160h], xmm0
  }
}

/*
==============
BG_Vehicle_ApplyCameraInfluence
==============
*/
void BG_Vehicle_ApplyCameraInfluence(const PlayerVehicleState *vehicleState, const VehicleDef *vehicleDef, const vec3_t *userAngles, const vec3_t *vehicleAngles, vec3_t *userAnglesOut)
{
  bool v20; 
  bool v21; 
  bool v27; 
  bool v30; 
  double v77; 
  double v78; 
  double v79; 
  double v80; 
  double v81; 
  double v82; 
  double v83; 
  double v84; 
  double v85; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  _R14 = userAnglesOut;
  _RSI = vehicleAngles;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  _RBX = vehicleDef;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  if ( !vehicleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1795, ASSERT_TYPE_ASSERT, "(vehicleState)", (const char *)&queryFormat, "vehicleState") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1796, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  if ( vehicleState->targetEntity == 2047 )
  {
    v20 = vehicleState->entity < 0x7FFu;
    v21 = vehicleState->entity <= 0x7FFu;
    if ( vehicleState->entity == 2047 )
    {
      __asm
      {
        vxorps  xmm5, xmm5, xmm5
        vxorps  xmm10, xmm10, xmm10
        vxorps  xmm11, xmm11, xmm11
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0BD8h]
        vmovsd  xmm8, cs:__real@3ff0000000000000
        vmovss  xmm6, cs:__real@3f800000
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm0, xmm7
        vxorpd  xmm9, xmm9, xmm9
      }
      if ( vehicleState->entity < 0x7FFu )
        goto LABEL_27;
      __asm { vcomiss xmm0, xmm6 }
      if ( vehicleState->entity > 0x7FFu )
      {
LABEL_27:
        __asm
        {
          vmovsd  [rsp+0B8h+var_80], xmm8
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0B8h+var_88], xmm9
          vmovsd  [rsp+0B8h+var_90], xmm0
        }
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1807, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camPitchInfluence ) && ( vehicleDef->camPitchInfluence ) <= ( 1.0f )", "vehicleDef->camPitchInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v77, v80, v83);
        v20 = 0;
        v21 = !v27;
        if ( v27 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0BDCh]
        vcomiss xmm0, xmm7
      }
      if ( v20 )
        goto LABEL_28;
      __asm { vcomiss xmm0, xmm6 }
      if ( !v21 )
      {
LABEL_28:
        __asm
        {
          vmovsd  [rsp+0B8h+var_80], xmm8
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0B8h+var_88], xmm9
          vmovsd  [rsp+0B8h+var_90], xmm0
        }
        v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1808, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camYawInfluence ) && ( vehicleDef->camYawInfluence ) <= ( 1.0f )", "vehicleDef->camYawInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v78, v81, v84);
        v21 = !v30;
        if ( v30 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0BE0h]
        vcomiss xmm0, xmm7
        vcomiss xmm0, xmm6
      }
      if ( !v21 )
      {
        __asm
        {
          vmovsd  [rsp+0B8h+var_80], xmm8
          vcvtss2sd xmm0, xmm0, xmm0
          vmovsd  [rsp+0B8h+var_88], xmm9
          vmovsd  [rsp+0B8h+var_90], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1809, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( vehicleDef->camRollInfluence ) && ( vehicleDef->camRollInfluence ) <= ( 1.0f )", "vehicleDef->camRollInfluence not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v79, v82, v85) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm5, dword ptr [rbx+0BD8h]
        vmovss  xmm10, dword ptr [rbx+0BDCh]
        vmovss  xmm11, dword ptr [rbx+0BE0h]
      }
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm5, cs:__real@3f800000
      vmovaps xmm10, xmm5
      vmovaps xmm11, xmm5
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm1, xmm0, dword ptr [rbp+0]
    vmovss  xmm8, cs:__real@3b360b61
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm6, cs:__real@43b40000
    vmulss  xmm3, xmm1, xmm8
  }
  _R11 = &v86;
  __asm
  {
    vaddss  xmm1, xmm3, xmm7
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, xmm5
    vaddss  xmm2, xmm1, dword ptr [rbp+0]
    vmovss  dword ptr [r14], xmm2
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rbp+4]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [r14+4], xmm3
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm1, xmm0, dword ptr [rbp+8]
    vmulss  xmm4, xmm1, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddss  xmm2, xmm4, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vroundss xmm3, xmm9, xmm2, 1
    vmovaps xmm9, xmmword ptr [r11-40h]
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmulss  xmm2, xmm1, xmm11
    vaddss  xmm3, xmm2, dword ptr [rbp+8]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovss  dword ptr [r14+8], xmm3
  }
}

/*
==============
BG_Vehicle_ClampCameraAngle
==============
*/

double __fastcall BG_Vehicle_ClampCameraAngle(double angle, double clamp)
{
  __asm
  {
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm3, xmm0, xmm2
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm4, xmm2, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, cs:__real@43b40000; val
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
    vxorps  xmm1, xmm1, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm2, xmm6; max
    vmovaps xmm6, [rsp+38h+var_18]
  }
  return I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
}

/*
==============
BG_Vehicle_ClampCameraUserAnglesToVehicleSpace
==============
*/
void BG_Vehicle_ClampCameraUserAnglesToVehicleSpace(const vec3_t *vehicleAngles, const vec3_t *userAngles, const VehicleDef *vehicleDef, vec3_t *viewAnglesOut)
{
  vec3_t v59; 
  vec3_t v60; 
  vec3_t angles; 
  vec3_t v62; 
  tmat33_t<vec3_t> v63; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  _RSI = viewAnglesOut;
  _RBX = vehicleDef;
  if ( !vehicleDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1752, ASSERT_TYPE_ASSERT, "(vehicleDef)", (const char *)&queryFormat, "vehicleDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C10h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  xmm9, cs:__real@3b360b61
    vmovss  xmm0, dword ptr [rbx+0C0Ch]
    vmovss  xmm2, dword ptr [rbx+0C08h]
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm7, cs:__real@43b40000
    vmulss  xmm5, xmm1, xmm9
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vaddss  xmm0, xmm2, dword ptr [rdi]
    vmulss  xmm3, xmm0, xmm9
    vmulss  xmm4, xmm1, xmm9
    vaddss  xmm1, xmm3, xmm8
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm2, xmm10, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, xmm7
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmovss  dword ptr [rsp+180h+angles], xmm0
    vmulss  xmm0, xmm1, xmm7
    vaddss  xmm2, xmm5, xmm8
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm5, xmm3
    vmovss  dword ptr [rsp+180h+angles+4], xmm0
    vmulss  xmm0, xmm1, xmm7
    vmovss  dword ptr [rsp+180h+angles+8], xmm0
  }
  AnglesToAxis(&angles, &axis);
  AnglesToAxis(userAngles, &in1);
  MatrixTranspose(&axis, &out);
  MatrixMultiply(&in1, &out, &v63);
  AxisToAngles(&v63, &v59);
  __asm
  {
    vmulss  xmm5, xmm9, dword ptr [rsp+180h+var_150]
    vmovsd  xmm0, qword ptr [rsp+180h+var_150]
    vmovss  xmm2, dword ptr [rbx+0C2Ch]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovsd  qword ptr [rsp+180h+var_140], xmm0
    vaddss  xmm3, xmm5, xmm8
    vroundss xmm4, xmm10, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, xmm7; val
  }
  v60.v[2] = v59.v[2];
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm5, xmm9, dword ptr [rsp+180h+var_140+4]
    vmovss  xmm2, dword ptr [rbx+0C34h]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovss  dword ptr [rsp+180h+var_150], xmm0
    vaddss  xmm3, xmm5, xmm8
    vroundss xmm4, xmm10, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, xmm7; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rsp+180h+var_140+4], xmm0 }
  AnglesToAxis(&v59, &v63);
  MatrixMultiply(&v63, &axis, &in1);
  AxisToAngles(&in1, &v62);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+180h+var_120]
    vmovss  dword ptr [rsi], xmm0
  }
  AnglesToAxis(&v60, &v63);
  MatrixMultiply(&v63, &axis, &in1);
  AxisToAngles(&in1, &v62);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+180h+var_120+4]
    vmovss  dword ptr [rsi+4], xmm0
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
  }
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

void __fastcall BG_Vehicle_GetCameraTargetFovAndOffset(const VehicleDef *vehDef, double absSpeed, float *targetFov, float *targetFovOffset)
{
  bool v9; 
  bool v10; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = targetFovOffset;
  _RSI = targetFov;
  _RBX = vehDef;
  __asm { vmovaps xmm6, xmm1 }
  v9 = vehDef == NULL;
  if ( !vehDef )
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1828, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef");
    v9 = !v10;
    if ( v10 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+0BECh]
    vxorps  xmm1, xmm1, xmm1; min
    vcomiss xmm2, xmm1
  }
  if ( v9 )
  {
    if ( _RSI )
      *_RSI = _RBX->camFovIncrease;
    if ( _RDI )
      *_RDI = _RBX->camFovOffset;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3d68ba2e
      vdivss  xmm2, xmm0, xmm2
      vmulss  xmm0, xmm2, xmm6; val
      vmovss  xmm2, cs:__real@3f800000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    if ( _RSI )
    {
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rbx+0BE4h]
        vmovss  dword ptr [rsi], xmm1
      }
    }
    if ( _RDI )
    {
      __asm
      {
        vmulss  xmm0, xmm0, dword ptr [rbx+0BE8h]
        vmovss  dword ptr [rdi], xmm0
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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

void __fastcall BG_Vehicle_PackPhysicsParams(LerpEntityStateVehicle *lerp, double throttle, bool isBraking, double wheelAveSpinSpeed)
{
  int v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm8
    vmovaps [rsp+58h+var_28], xmm9
    vmovaps xmm9, xmm1
    vmovaps xmm8, xmm3
  }
  if ( !lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1887, ASSERT_TYPE_ASSERT, "(lerp)", (const char *)&queryFormat, "lerp") )
    __debugbreak();
  __asm
  {
    vandps  xmm0, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff; val
    vmovss  xmm2, cs:__real@3f800000; max
  }
  lerp->flags &= 0xFFFFFu;
  __asm { vxorps  xmm1, xmm1, xmm1; min }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  v14 = MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 3u);
  __asm
  {
    vmovss  xmm1, cs:__real@43b40000; maxAbsValueSize
    vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vminss  xmm0, xmm8, xmm1; value
    vmovaps xmm8, [rsp+58h+var_18]
    vmovaps xmm9, [rsp+58h+var_28]
  }
  lerp->flags |= ((8 * isBraking) | v14 | (16 * MSG_PackUnsignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 5u))) << 20;
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
  signed int v10; 

  _RDI = outWheelAveSpinSpeed;
  _RBP = outThrottle;
  if ( !lerp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle.cpp", 1908, ASSERT_TYPE_ASSERT, "(lerp)", (const char *)&queryFormat, "lerp") )
    __debugbreak();
  __asm { vmovss  xmm1, cs:__real@3f800000; maxAbsValueSize }
  v10 = lerp->flags >> 20;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(v10 & 7, *(float *)&_XMM1, 3u);
  __asm
  {
    vmovss  xmm1, cs:__real@43b40000; maxAbsValueSize
    vmovss  dword ptr [rbp+0], xmm0
  }
  *outIsBraking = (v10 >> 3) & 1;
  *(double *)&_XMM0 = MSG_UnpackUnsignedFloat((v10 >> 4) & 0x1F, *(float *)&_XMM1, 5u);
  __asm { vmovss  dword ptr [rdi], xmm0 }
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

