/*
==============
BG_ContextMount_CanMount
==============
*/

bool __fastcall BG_ContextMount_CanMount(const ContextMountState *r_mountState)
{
  return ?BG_ContextMount_CanMount@@YA_NAEBUContextMountState@@@Z(r_mountState);
}

/*
==============
BG_ContextMount_CalcIconType
==============
*/

void __fastcall BG_ContextMount_CalcIconType(const playerState_s *const ps, const BgWeaponMap *const weaponMap, const BgHandler *const handler, const ContextMountType mountType, const vec3_t *mountPoint, ContextMountIconType *outIconType)
{
  ?BG_ContextMount_CalcIconType@@YAXQEBUplayerState_s@@QEBVBgWeaponMap@@QEBVBgHandler@@W4ContextMountType@@AEBTvec3_t@@AEAW4ContextMountIconType@@@Z(ps, weaponMap, handler, mountType, mountPoint, outIconType);
}

/*
==============
BG_ContextMount_Cancel
==============
*/

void __fastcall BG_ContextMount_Cancel(BgWeaponMap *const weaponMap, playerState_s *const ps, const int gameTime, const bool cancelToLowerStance, const BgHandler *handler, const char *debugString, const bool putMountOnCooldown)
{
  ?BG_ContextMount_Cancel@@YAXQEAVBgWeaponMap@@QEAUplayerState_s@@H_NPEBVBgHandler@@PEBD2@Z(weaponMap, ps, gameTime, cancelToLowerStance, handler, debugString, putMountOnCooldown);
}

/*
==============
BG_ContextMount_IsValidMountState
==============
*/

bool __fastcall BG_ContextMount_IsValidMountState(const BgWeaponMap *const weaponMap, const playerState_s *const ps, MountFailureResult *outResults)
{
  return ?BG_ContextMount_IsValidMountState@@YA_NQEBVBgWeaponMap@@QEBUplayerState_s@@PEAUMountFailureResult@@@Z(weaponMap, ps, outResults);
}

/*
==============
BG_ContextMount_GetMountEdgeHeight
==============
*/

double __fastcall BG_ContextMount_GetMountEdgeHeight(const playerState_s *const ps, const BgHandler *handler)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_GetMountEdgeHeight@@YAMQEBUplayerState_s@@PEBVBgHandler@@@Z(ps, handler);
  return result;
}

/*
==============
BG_ContextMount_QuantizeBasis
==============
*/

void __fastcall BG_ContextMount_QuantizeBasis(tmat33_t<vec3_t> *basis)
{
  ?BG_ContextMount_QuantizeBasis@@YAXAEAT?$tmat33_t@Tvec3_t@@@@@Z(basis);
}

/*
==============
BG_ContextMount_IsActive
==============
*/

bool __fastcall BG_ContextMount_IsActive(const int startTime, const int endTime)
{
  return ?BG_ContextMount_IsActive@@YA_NHH@Z(startTime, endTime);
}

/*
==============
BG_ContextMount_BBPrintCancel
==============
*/

void __fastcall BG_ContextMount_BBPrintCancel(int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  ?BG_ContextMount_BBPrintCancel@@YAXHHHHAEBTvec3_t@@0@Z(clientIndex, startTime, endTime, type, pos, angles);
}

/*
==============
PM_ContextMount_ButtonEnterMount
==============
*/

bool __fastcall PM_ContextMount_ButtonEnterMount(const pmove_t *const pm)
{
  return ?PM_ContextMount_ButtonEnterMount@@YA_NQEBVpmove_t@@@Z(pm);
}

/*
==============
BG_ContextMount_QuantizeViewHeight
==============
*/

double __fastcall BG_ContextMount_QuantizeViewHeight(float viewHeight)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_QuantizeViewHeight@@YAMM@Z(viewHeight);
  return result;
}

/*
==============
BG_ContextMount_GetEyePoint
==============
*/

void __fastcall BG_ContextMount_GetEyePoint(const BgHandler *const handler, const ContextMountState *r_mountState, const vec3_t *playerUp, const Weapon *r_weapon, const bool isAlternate, vec3_t *inOutEyePos)
{
  ?BG_ContextMount_GetEyePoint@@YAXQEBVBgHandler@@AEBUContextMountState@@AEBTvec3_t@@AEBUWeapon@@_NAEAT3@@Z(handler, r_mountState, playerUp, r_weapon, isAlternate, inOutEyePos);
}

/*
==============
BG_ContextMount_GetWeapon
==============
*/

const Weapon *__fastcall BG_ContextMount_GetWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, const Weapon *cmdWeapon)
{
  return ?BG_ContextMount_GetWeapon@@YAAEBUWeapon@@QEBVBgWeaponMap@@QEBUplayerState_s@@AEBU1@@Z(weaponMap, ps, cmdWeapon);
}

/*
==============
PM_ContextMount_UpdateMove
==============
*/

void __fastcall PM_ContextMount_UpdateMove(pmove_t *const pm, pml_t *const pml)
{
  ?PM_ContextMount_UpdateMove@@YAXQEAVpmove_t@@QEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_ContextMount_IsActive
==============
*/

bool __fastcall BG_ContextMount_IsActive(const playerState_s *const ps)
{
  return ?BG_ContextMount_IsActive@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_ContextMount_QuantizeFloat01Byte
==============
*/

double __fastcall BG_ContextMount_QuantizeFloat01Byte(float value)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_QuantizeFloat01Byte@@YAMM@Z(value);
  return result;
}

/*
==============
BG_ContextMount_ApplyWeaponMovement_Origin
==============
*/

void __fastcall BG_ContextMount_ApplyWeaponMovement_Origin(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *inOutOrigin)
{
  ?BG_ContextMount_ApplyWeaponMovement_Origin@@YAXQEBUWeaponMovementParams@@QEBUWeaponMovementState@@AEATvec3_t@@@Z(params, ws, inOutOrigin);
}

/*
==============
PM_ContextMount_UpdateState
==============
*/

void __fastcall PM_ContextMount_UpdateState(pmove_t *const pm, pml_t *const pml)
{
  ?PM_ContextMount_UpdateState@@YAXQEAVpmove_t@@QEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_ContextMount_InterpolateMountState
==============
*/

void __fastcall BG_ContextMount_InterpolateMountState(const playerState_s *const prevPs, const playerState_s *const nextPs, float fraction, ContextMountState *r_out)
{
  ?BG_ContextMount_InterpolateMountState@@YAXQEBUplayerState_s@@0MAEAUContextMountState@@@Z(prevPs, nextPs, fraction, r_out);
}

/*
==============
BG_ContextMount_ApplyWeaponMovement_Angles
==============
*/

void __fastcall BG_ContextMount_ApplyWeaponMovement_Angles(const WeaponMovementState *const ws, vec3_t *outMountAngles, vec3_t *inOutCombinedAngles)
{
  ?BG_ContextMount_ApplyWeaponMovement_Angles@@YAXQEBUWeaponMovementState@@AEATvec3_t@@1@Z(ws, outMountAngles, inOutCombinedAngles);
}

/*
==============
PM_ContextMount_CalcPlayerSpeed
==============
*/

double __fastcall PM_ContextMount_CalcPlayerSpeed(const pmove_t *const pm, const pml_t *const pml)
{
  double result; 

  *(float *)&result = ?PM_ContextMount_CalcPlayerSpeed@@YAMQEBVpmove_t@@QEBUpml_t@@@Z(pm, pml);
  return result;
}

/*
==============
BG_ContextMount_DrawLegsModel
==============
*/

bool __fastcall BG_ContextMount_DrawLegsModel(const playerState_s *const ps)
{
  return ?BG_ContextMount_DrawLegsModel@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_ContextMount_CalcWorldmodelDerivedProperties
==============
*/

void __fastcall BG_ContextMount_CalcWorldmodelDerivedProperties(const BgHandler *handler, const int serverTimeMs, const vec3_t *playerOrigin, const vec3_t *playerAngles, const int entityNum, const Weapon *weapon, const bool isAlternate, const MountWorldmodelAbbreviatedProperties *properties, MountWorldmodelDerivedProperties *outDerivedProperties)
{
  ?BG_ContextMount_CalcWorldmodelDerivedProperties@@YAXPEBVBgHandler@@HAEBTvec3_t@@1HAEBUWeapon@@_NAEBUMountWorldmodelAbbreviatedProperties@@PEAUMountWorldmodelDerivedProperties@@@Z(handler, serverTimeMs, playerOrigin, playerAngles, entityNum, weapon, isAlternate, properties, outDerivedProperties);
}

/*
==============
PM_ContextMount_UpdateGesture
==============
*/

bool __fastcall PM_ContextMount_UpdateGesture(pmove_t *const pm, const Weapon *weapon, bool isAlternate, bool isDualWielding, bool shouldBePlaying, gestureAnimType_t gestureType, bool synchronizeWithMount)
{
  return ?PM_ContextMount_UpdateGesture@@YA_NQEAVpmove_t@@AEBUWeapon@@_N22W4gestureAnimType_t@@2@Z(pm, weapon, isAlternate, isDualWielding, shouldBePlaying, gestureType, synchronizeWithMount);
}

/*
==============
BG_ContextMount_IsViewangleTooShallow
==============
*/

bool __fastcall BG_ContextMount_IsViewangleTooShallow(const ContextMountType type, const tmat33_t<vec3_t> *viewBasis, const vec3_t *entityUp, const vec3_t *edgeParallel)
{
  return ?BG_ContextMount_IsViewangleTooShallow@@YA_NW4ContextMountType@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec3_t@@2@Z(type, viewBasis, entityUp, edgeParallel);
}

/*
==============
MountSurfaceProperties::Initialize
==============
*/

void __fastcall MountSurfaceProperties::Initialize(MountSurfaceProperties *this, const BgHandler *handler, const MountSurfaceAbbreviatedProperties *mount)
{
  ?Initialize@MountSurfaceProperties@@QEAAXPEBVBgHandler@@AEBUMountSurfaceAbbreviatedProperties@@@Z(this, handler, mount);
}

/*
==============
BG_ContextMount_CalculateMountFraction
==============
*/

double __fastcall BG_ContextMount_CalculateMountFraction(const ContextMountType mountType, const int enterDurationMs, const int exitDurationMs, const int serverTime, const int mountStartTime, const int mountEndTime)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_CalculateMountFraction@@YAMW4ContextMountType@@HHHHH@Z(mountType, enterDurationMs, exitDurationMs, serverTime, mountStartTime, mountEndTime);
  return result;
}

/*
==============
BG_ContextMount_IsBlendingToMount
==============
*/

bool __fastcall BG_ContextMount_IsBlendingToMount(const playerState_s *const ps)
{
  return ?BG_ContextMount_IsBlendingToMount@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
MountFailureResult::Reset
==============
*/

void __fastcall MountFailureResult::Reset(MountFailureResult *this)
{
  ?Reset@MountFailureResult@@QEAAXXZ(this);
}

/*
==============
BG_ContextMount_GetViewHeightTarget
==============
*/

double __fastcall BG_ContextMount_GetViewHeightTarget(const BgWeaponMap *const weaponMap, const playerState_s *const ps, const vec3_t *entityUp)
{
  double result; 

  *(float *)&result = ?BG_ContextMount_GetViewHeightTarget@@YAMQEBVBgWeaponMap@@QEBUplayerState_s@@AEBTvec3_t@@@Z(weaponMap, ps, entityUp);
  return result;
}

/*
==============
PM_ContextMount_SetEdgeState
==============
*/

void __fastcall PM_ContextMount_SetEdgeState(pmove_t *const pm, pml_t *const pml, const MountSurfaceProperties *mountProperties, const bool justStartedMount, ContextMountState *const inOutMountState)
{
  ?PM_ContextMount_SetEdgeState@@YAXQEAVpmove_t@@QEAUpml_t@@AEBUMountSurfaceProperties@@_NQEAUContextMountState@@@Z(pm, pml, mountProperties, justStartedMount, inOutMountState);
}

/*
==============
PM_ContextMount_UpdateState_Extrapolation
==============
*/

void __fastcall PM_ContextMount_UpdateState_Extrapolation(pmove_t *const pm, pml_t *const pml)
{
  ?PM_ContextMount_UpdateState_Extrapolation@@YAXQEAVpmove_t@@QEAUpml_t@@@Z(pm, pml);
}

/*
==============
MountFailureResult::MountFailureResult
==============
*/

void __fastcall MountFailureResult::MountFailureResult(MountFailureResult *this)
{
  ??0MountFailureResult@@QEAA@XZ(this);
}

/*
==============
PM_ContextMount_CachePrevViewAngles
==============
*/

void __fastcall PM_ContextMount_CachePrevViewAngles(pmove_t *const pm, pml_t *const pml)
{
  ?PM_ContextMount_CachePrevViewAngles@@YAXQEAVpmove_t@@QEAUpml_t@@@Z(pm, pml);
}

/*
==============
PM_ContextMount_ButtonExitMount
==============
*/

bool __fastcall PM_ContextMount_ButtonExitMount(const pmove_t *const pm)
{
  return ?PM_ContextMount_ButtonExitMount@@YA_NQEBVpmove_t@@@Z(pm);
}

/*
==============
BG_ContextMount_IsStanceEnabled
==============
*/

bool __fastcall BG_ContextMount_IsStanceEnabled(const playerState_s *const ps)
{
  return ?BG_ContextMount_IsStanceEnabled@@YA_NQEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_ContextMount_GetWorldmodelProperties
==============
*/

void __fastcall BG_ContextMount_GetWorldmodelProperties(const BgHandler *const handler, const playerState_s *const ps, MountWorldmodelAbbreviatedProperties *outWorldmodelProps)
{
  ?BG_ContextMount_GetWorldmodelProperties@@YAXQEBVBgHandler@@QEBUplayerState_s@@PEAUMountWorldmodelAbbreviatedProperties@@@Z(handler, ps, outWorldmodelProps);
}

/*
==============
BG_ContextMount_CalculateWeaponMovement
==============
*/

void __fastcall BG_ContextMount_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *const inOutWs)
{
  ?BG_ContextMount_CalculateWeaponMovement@@YAXQEBUWeaponMovementParams@@QEAUWeaponMovementState@@@Z(params, inOutWs);
}

/*
==============
BG_ContextMount_FindMountEdge
==============
*/

bool __fastcall BG_ContextMount_FindMountEdge(const BgHandler *const handler, playerState_s *const ps, const tmat33_t<vec3_t> *worldBasis, const Weapon *weapon, MountPlayerProperties *outPlayerProperties, MountSurfaceDetailedProperties *outMountProperties)
{
  return ?BG_ContextMount_FindMountEdge@@YA_NQEBVBgHandler@@QEAUplayerState_s@@AEBT?$tmat33_t@Tvec3_t@@@@AEBUWeapon@@AEAUMountPlayerProperties@@AEAUMountSurfaceDetailedProperties@@@Z(handler, ps, worldBasis, weapon, outPlayerProperties, outMountProperties);
}

/*
==============
MountFailureResult::MountFailureResult
==============
*/
void MountFailureResult::MountFailureResult(MountFailureResult *this)
{
  *(_WORD *)&this->cancelToLower = 0;
  this->failReason[0] = 0;
}

/*
==============
BG_ContextMount_ApplyWeaponMovement_Angles
==============
*/
void BG_ContextMount_ApplyWeaponMovement_Angles(const WeaponMovementState *const ws, vec3_t *outMountAngles, vec3_t *inOutCombinedAngles)
{
  float v6; 

  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1909, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  v6 = ws->mountAngles.v[0];
  outMountAngles->v[0] = v6;
  outMountAngles->v[1] = ws->mountAngles.v[1];
  outMountAngles->v[2] = ws->mountAngles.v[2];
  inOutCombinedAngles->v[0] = v6 + inOutCombinedAngles->v[0];
  inOutCombinedAngles->v[1] = outMountAngles->v[1] + inOutCombinedAngles->v[1];
  inOutCombinedAngles->v[2] = outMountAngles->v[2] + inOutCombinedAngles->v[2];
}

/*
==============
BG_ContextMount_ApplyWeaponMovement_Origin
==============
*/
void BG_ContextMount_ApplyWeaponMovement_Origin(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *inOutOrigin)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  float mountFraction; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  double MountViewmodelOffset; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1918, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1919, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1922, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1925, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  mountFraction = ps->mountState.mountFraction;
  if ( mountFraction > 0.0 && !BG_HasDualFOVEquipped(weaponMap, ps) )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v10 = BG_UsingAlternate(ps);
    MountViewmodelOffset = BG_GetMountViewmodelOffset(CurrentWeaponForPlayer, v10);
    inOutOrigin->v[0] = (float)(*(float *)&MountViewmodelOffset * (float)((float)((float)((float)((float)(mountFraction * 6.0) - 15.0) * mountFraction) + 10.0) * (float)((float)(mountFraction * mountFraction) * mountFraction))) + inOutOrigin->v[0];
  }
}

/*
==============
BG_ContextMount_BBPrintCancel
==============
*/
void BG_ContextMount_BBPrintCancel(int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  const dvar_t *v6; 
  __int64 v9; 
  const dvar_t *v11; 
  _BYTE *integer64; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  const char *v19; 
  bool v20; 
  __int64 v21; 
  __int64 v22; 
  DLogContext context; 
  char buffer[4096]; 

  v6 = DVARBOOL_mount_bb_analytics;
  v9 = type;
  if ( !DVARBOOL_mount_bb_analytics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_bb_analytics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    v11 = DVARSTR_package_type;
    if ( !DVARSTR_package_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "package_type") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer64 = (_BYTE *)v11->current.integer64;
    if ( integer64 && *integer64 )
    {
      if ( (unsigned int)v9 >= 4 )
      {
        LODWORD(v22) = 4;
        LODWORD(v21) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2182, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( COUNT_MOUNT_TYPE )", "type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      v13 = angles->v[2];
      v14 = angles->v[1];
      v15 = angles->v[0];
      v16 = pos->v[2];
      v17 = pos->v[1];
      v18 = pos->v[0];
      v19 = bg_contextMountTypeNames_BB[v9];
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v20 = DLog_BeginEvent(&context, "mount");
        context.autoEndEvent = 1;
        if ( v20 && DLog_Int32(&context, "start_gametime", startTime) && DLog_Int32(&context, "end_gametime", endTime) && DLog_String(&context, "type", v19, 0) && DLog_Float32(&context, "x", v18) && DLog_Float32(&context, "y", v17) && DLog_Float32(&context, "z", v16) && DLog_Float32(&context, "pitch", v15) && DLog_Float32(&context, "yaw", v14) && DLog_Float32(&context, "roll", v13) && DLog_Int32(&context, "clientindex", clientIndex) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
BG_ContextMount_CalcIconType
==============
*/
void BG_ContextMount_CalcIconType(const playerState_s *const ps, const BgWeaponMap *const weaponMap, const BgHandler *const handler, const ContextMountType mountType, const vec3_t *mountPoint, ContextMountIconType *outIconType)
{
  int v8; 
  ContextMountIconType v11; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 

  v8 = 0;
  *outIconType = MOUNT_ICON_TYPE_NONE;
  AnglesToAxis(&ps->viewangles, (tmat33_t<vec3_t> *)&axis);
  BG_GetPlayerEyePosition(weaponMap, ps, &axis.m[3], handler);
  MatrixTransposeTransformVector43(mountPoint, &axis, &out);
  if ( mountType == MOUNT_TYPE_TOP )
  {
    LOBYTE(v8) = out.v[2] < 0.0;
    v11 = v8 + 1;
  }
  else
  {
    LOBYTE(v8) = out.v[1] >= 0.0;
    v11 = v8 + 3;
  }
  *outIconType = v11;
}

/*
==============
BG_ContextMount_CalcWorldmodelDerivedProperties
==============
*/
void BG_ContextMount_CalcWorldmodelDerivedProperties(const BgHandler *handler, const int serverTimeMs, const vec3_t *playerOrigin, const vec3_t *playerAngles, const int entityNum, const Weapon *weapon, const bool isAlternate, const MountWorldmodelAbbreviatedProperties *properties, MountWorldmodelDerivedProperties *outDerivedProperties)
{
  int startTime; 
  int endTime; 
  int v15; 
  double v16; 
  unsigned int EdgeIndex; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  __int128 v25; 
  float v31; 
  const dvar_t *v34; 
  __int64 v35; 
  BgHandler_vtbl *v36; 
  float v37; 
  void (__fastcall *DebugString)(BgHandler *, const vec3_t *, const vec4_t *, float, const char *, int); 
  const dvar_t *v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float value; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  int exitDurationMs; 
  int outEnterDurationMs[3]; 
  vec3_t relativePoint; 
  vec3_t forward; 
  vec3_t outNormal; 
  vec3_t v56; 
  vec3_t outBelow; 
  int v58[4]; 
  vec3_t right; 
  vec3_t outParallel; 

  startTime = properties->startTime;
  if ( serverTimeMs < startTime || (endTime = properties->endTime, startTime <= endTime) && maxMountExitDurationMs + endTime < serverTimeMs )
  {
    LODWORD(v16) = 0;
  }
  else
  {
    BG_GetMountEnterExitDuration((const ContextMountType)properties->type, weapon, isAlternate, outEnterDurationMs, &exitDurationMs);
    v15 = exitDurationMs;
    if ( exitDurationMs > maxMountExitDurationMs )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1975, ASSERT_TYPE_ASSERT, "(exitDurationMs <= maxMountExitDurationMs)", "%s\n\tMount exit duration %i is longer than maximum expected exit duration %i.  Please update the maximum value in code.", "exitDurationMs <= maxMountExitDurationMs", exitDurationMs, maxMountExitDurationMs) )
        __debugbreak();
      v15 = exitDurationMs;
    }
    v16 = BG_ContextMount_CalculateMountFraction((const ContextMountType)properties->type, outEnterDurationMs[0], v15, serverTimeMs, properties->startTime, properties->endTime);
  }
  outDerivedProperties->fraction = *(float *)&v16;
  if ( *(float *)&v16 > 0.0 )
  {
    EdgeIndex = EdgeId::GetEdgeIndex(&properties->edge);
    if ( !MapEdgeList_IsLoaded(EdgeIndex) )
      goto LABEL_32;
    v18 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
    if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
LABEL_32:
      outDerivedProperties->fraction = 0.0;
      AngleVectors(playerAngles, &v56, &right, NULL);
      v39 = DCONST_DVARVEC3_mount_edge_fallback_pivot_offset;
      v40 = v56.v[0];
      v41 = v56.v[1];
      v42 = right.v[0];
      v43 = right.v[1];
      if ( !DCONST_DVARVEC3_mount_edge_fallback_pivot_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_pivot_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      value = v39->current.value;
      v45 = v39->current.vector.v[1];
      v46 = v39->current.vector.v[2];
      v47 = (float)(v40 * value) + playerOrigin->v[0];
      outDerivedProperties->pivotPoint.v[0] = v47;
      outDerivedProperties->pivotPoint.v[1] = (float)(v41 * value) + playerOrigin->v[1];
      outDerivedProperties->pivotPoint.v[2] = playerOrigin->v[2];
      v48 = (float)(v42 * v45) + v47;
      outDerivedProperties->pivotPoint.v[0] = v48;
      outDerivedProperties->pivotPoint.v[1] = (float)(v43 * v45) + outDerivedProperties->pivotPoint.v[1];
      v49 = v56.v[0];
      outDerivedProperties->pivotPoint.v[2] = outDerivedProperties->pivotPoint.v[2];
      outDerivedProperties->pivotPoint.v[0] = v48;
      outDerivedProperties->pivotPoint.v[1] = outDerivedProperties->pivotPoint.v[1];
      outDerivedProperties->pivotPoint.v[2] = v46 + outDerivedProperties->pivotPoint.v[2];
      v50 = v56.v[1];
      outDerivedProperties->worldmodelForwardDir.v[0] = v49;
      outDerivedProperties->worldmodelForwardDir.v[2] = v56.v[2];
      outDerivedProperties->worldmodelForwardDir.v[1] = v50;
      outDerivedProperties->angles = 0i64;
    }
    else
    {
      Edge_CalculateVectors(handler, properties->edge, properties->edgeFraction, properties->normalIndex, &outNormal, &outParallel, &outBelow);
      Edge_CalculatePoint(handler, properties->edge, properties->edgeFraction, &outDerivedProperties->pivotPoint);
      LODWORD(v19) = LODWORD(outNormal.v[1]) ^ _xmm;
      outDerivedProperties->worldmodelForwardDir.v[0] = COERCE_FLOAT(LODWORD(outNormal.v[0]) ^ _xmm);
      outDerivedProperties->worldmodelForwardDir.v[2] = COERCE_FLOAT(LODWORD(outNormal.v[2]) ^ _xmm);
      outDerivedProperties->worldmodelForwardDir.v[1] = v19;
      ProjectPointOnPlane(&outDerivedProperties->worldmodelForwardDir, &worldUpDir, &outDerivedProperties->worldmodelForwardDir);
      if ( properties->type == MOUNT_TYPE_TOP || (unsigned int)(properties->type - 2) > 1 )
      {
        v20 = outDerivedProperties->worldmodelForwardDir.v[1];
        relativePoint.v[0] = outDerivedProperties->worldmodelForwardDir.v[0];
        relativePoint.v[2] = outDerivedProperties->worldmodelForwardDir.v[2];
        relativePoint.v[1] = v20;
      }
      else
      {
        LODWORD(relativePoint.v[0]) = LODWORD(outBelow.v[0]) ^ _xmm;
        LODWORD(relativePoint.v[2]) = LODWORD(outBelow.v[2]) ^ _xmm;
        LODWORD(relativePoint.v[1]) = LODWORD(outBelow.v[1]) ^ _xmm;
      }
      ProjectPointOnPlane(&relativePoint, &worldUpDir, &relativePoint);
      v21 = LODWORD(relativePoint.v[1]);
      *(float *)&v21 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(relativePoint.v[0] * relativePoint.v[0])) + (float)(relativePoint.v[2] * relativePoint.v[2]));
      _XMM6 = v21;
      __asm
      {
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm9, xmm0
      }
      relativePoint.v[0] = relativePoint.v[0] * (float)(1.0 / *(float *)&_XMM0);
      relativePoint.v[2] = relativePoint.v[2] * (float)(1.0 / *(float *)&_XMM0);
      relativePoint.v[1] = relativePoint.v[1] * (float)(1.0 / *(float *)&_XMM0);
      if ( *(float *)&v21 > 0.0 )
      {
        AngleVectors(playerAngles, &forward, NULL, NULL);
        ProjectPointOnPlane(&forward, &worldUpDir, &forward);
        v25 = LODWORD(forward.v[0]);
        *(float *)&v25 = fsqrt((float)((float)(*(float *)&v25 * *(float *)&v25) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
        _XMM3 = v25;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm9, xmm0
        }
        forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
        forward.v[2] = forward.v[2] * (float)(1.0 / *(float *)&_XMM0);
        forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
        *(double *)&_XMM0 = SignedAngleBetween(&forward, &relativePoint, &worldUpDir);
        *(float *)&v25 = *(float *)&_XMM0 * 0.0027777778;
        _XMM0 = 0i64;
        __asm { vroundss xmm4, xmm0, xmm3, 1 }
        v31 = (float)(*(float *)&v25 - *(float *)&_XMM4) * 360.0;
        outDerivedProperties->angles.v[1] = v31;
        if ( properties->type == MOUNT_TYPE_RIGHT )
          outDerivedProperties->angles.v[1] = COERCE_FLOAT(LODWORD(v31) ^ _xmm);
      }
      else
      {
        outDerivedProperties->angles.v[1] = 0.0;
      }
      _XMM1 = 0i64;
      __asm { vroundss xmm3, xmm1, xmm2, 1 }
      outDerivedProperties->angles.v[0] = (float)((float)(playerAngles->v[0] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
      outDerivedProperties->yawVelocity = 0.0;
      v34 = DCONST_DVARINT_mount_debug;
      if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.integer == 3 && !entityNum && handler->IsClient((BgHandler *)handler) )
      {
        ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, int, _DWORD))handler->DebugSphere)(handler, &outDerivedProperties->pivotPoint, v35, &colorRed, 1, 0);
        v36 = handler->__vftable;
        v37 = outDerivedProperties->pivotPoint.v[1];
        *(float *)v58 = outDerivedProperties->pivotPoint.v[0] - (float)(12.0 * outNormal.v[0]);
        *(float *)&v58[1] = v37 - (float)(12.0 * outNormal.v[1]);
        *(float *)&v58[2] = (float)(COERCE_FLOAT(LODWORD(outNormal.v[2]) ^ _xmm) * 12.0) + outDerivedProperties->pivotPoint.v[2];
        v36->DebugLine((BgHandler *)handler, &outDerivedProperties->pivotPoint, (const vec3_t *)v58, &colorRed, 1, 0);
        DebugString = handler->DebugString;
        j_va("h|p|y: {%.2f, %.1f, %.1f}", properties->pivotHeight, outDerivedProperties->angles.v[0], outDerivedProperties->angles.v[1]);
        ((void (__fastcall *)(const BgHandler *, vec3_t *, vec4_t *))DebugString)(handler, &outDerivedProperties->pivotPoint, &colorRed);
      }
    }
  }
  else
  {
    outDerivedProperties->angles = 0i64;
    outDerivedProperties->yawVelocity = 0.0;
  }
}

/*
==============
BG_ContextMount_CalculateMountFraction
==============
*/
double BG_ContextMount_CalculateMountFraction(const ContextMountType mountType, const int enterDurationMs, const int exitDurationMs, const int serverTime, const int mountStartTime, const int mountEndTime)
{
  double v8; 
  int v10; 

  LODWORD(v8) = 0;
  if ( mountStartTime )
  {
    v10 = serverTime;
    if ( mountStartTime < mountEndTime )
      v10 = mountEndTime;
    v8 = I_fclamp((float)(v10 - mountStartTime) / (float)enterDurationMs, 0.0, 1.0);
    if ( mountEndTime >= mountStartTime )
      v8 = I_fclamp(*(float *)&v8 - (float)((float)(serverTime - mountEndTime) / (float)exitDurationMs), 0.0, 1.0);
  }
  return BG_ContextMount_QuantizeFloat01Byte(*(float *)&v8);
}

/*
==============
BG_ContextMount_CalculateWeaponMovement
==============
*/
void BG_ContextMount_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *const inOutWs)
{
  const playerState_s *ps; 
  const BgWeaponMap *weaponMap; 
  float mountFraction; 
  double Float_Internal_DebugName; 
  const dvar_t *v8; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  float v11; 
  double v13; 
  float v14; 
  float outStartFrac; 
  float outEndFrac; 
  float outRollDeg; 

  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1858, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !inOutWs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1859, ASSERT_TYPE_ASSERT, "(inOutWs)", (const char *)&queryFormat, "inOutWs") )
    __debugbreak();
  ps = params->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1862, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1865, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  *(_QWORD *)inOutWs->mountAngles.v = 0i64;
  inOutWs->mountAngles.v[2] = 0.0;
  mountFraction = ps->mountState.mountFraction;
  if ( ps->mountState.surface.type != MOUNT_TYPE_TOP || BG_HasDualFOVEquipped(weaponMap, ps) )
  {
    if ( (unsigned int)(ps->mountState.surface.type - 2) <= 1 )
    {
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
      v10 = BG_UsingAlternate(ps);
      BG_GetMountSideRoll(CurrentWeaponForPlayer, v10, &outRollDeg, &outStartFrac, &outEndFrac);
      if ( (float)(outEndFrac - outStartFrac) <= 0.000001 )
        v11 = 0.0;
      else
        v11 = (float)(mountFraction - outStartFrac) / (float)(outEndFrac - outStartFrac);
      _XMM6 = LODWORD(FLOAT_1_0);
      v13 = I_fclamp(v11, 0.0, 1.0);
      v14 = (float)((float)((float)((float)(*(float *)&v13 * 6.0) - 15.0) * *(float *)&v13) + 10.0) * (float)((float)(*(float *)&v13 * *(float *)&v13) * *(float *)&v13);
      _XMM0 = (unsigned int)ps->mountState.surface.type;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm6, xmm1, xmm2
      }
      inOutWs->mountAngles.v[2] = v14 * (float)(*(float *)&_XMM0 * outRollDeg);
    }
  }
  else if ( ps->mountState.endTime >= ps->mountState.startTime || mountFraction <= 0.0 )
  {
    v8 = DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate;
    if ( !DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_enter_pitch_blend_out_rate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    DiffTrackAngles(&vec3_origin, &inOutWs->mountAngles, v8->current.value, params->updateTime, &inOutWs->mountAngles);
  }
  else
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_enter_pitch_delta, "mount_top_enter_pitch_delta");
    inOutWs->mountAngles.v[0] = (float)(*(float *)&Float_Internal_DebugName * sinf_0((float)((float)((float)((float)(mountFraction * 18.849556) - 47.12389) * mountFraction) + 31.415928) * (float)((float)(mountFraction * mountFraction) * mountFraction))) + inOutWs->mountAngles.v[0];
  }
}

/*
==============
BG_ContextMount_CanMount
==============
*/
bool BG_ContextMount_CanMount(const ContextMountState *r_mountState)
{
  return (r_mountState->flags & 0x20) != 0;
}

/*
==============
BG_ContextMount_Cancel
==============
*/
void BG_ContextMount_Cancel(BgWeaponMap *const weaponMap, playerState_s *const ps, const int gameTime, const bool cancelToLowerStance, const BgHandler *handler, const char *debugString, const bool putMountOnCooldown)
{
  __int128 v7; 
  __int128 v8; 
  __int64 startTime; 
  BgHandler_vtbl *v14; 
  __int64 clientNum; 
  ContextMountType type; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  entity_event_t v21; 
  int v22; 
  double v23; 
  int v24; 
  float v25; 
  ContextMountType v26; 
  const dvar_t *v27; 
  vec3_t outUp; 
  vec3_t outOrigin; 
  WorldUpReferenceFrame v30; 
  __int128 v31; 
  __int128 v32; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  startTime = (unsigned int)ps->mountState.startTime;
  if ( (int)startTime > ps->mountState.endTime )
  {
    v14 = handler->__vftable;
    clientNum = (unsigned int)ps->clientNum;
    type = ps->mountState.surface.type;
    v32 = v7;
    v31 = v8;
    v14->OnMountCancel((BgHandler *)handler, clientNum, startTime, gameTime, type, &ps->mountState.eyePoint, &ps->viewangles);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v30, ps, handler);
    WorldUpReferenceFrame::GetUpVector(&v30, &outUp);
    BG_GetPlayerEyePosition(weaponMap, ps, &outOrigin, handler);
    v17 = (float)((float)(outUp.v[0] * outOrigin.v[0]) + (float)(outUp.v[1] * outOrigin.v[1])) + (float)(outUp.v[2] * outOrigin.v[2]);
    v18 = (float)(outUp.v[1] * ps->origin.v[1]) + (float)(outUp.v[0] * ps->origin.v[0]);
    v19 = outUp.v[2] * ps->origin.v[2];
    ps->mountState.flags |= 8u;
    v20 = I_fclamp(v17 - (float)(v18 + v19), -90.0, 90.0);
    v21 = EV_STANCE_FORCE_CROUCH;
    v22 = MSG_PackSignedFloat(*(float *)&v20, 90.0, 0xBu);
    v23 = MSG_UnpackSignedFloat(v22, 90.0, 0xBu);
    ps->mountState.mountViewHeight = *(float *)&v23;
    ps->viewHeightLerpTime = 0;
    if ( putMountOnCooldown )
      ps->mountState.flags |= 2u;
    if ( cancelToLowerStance )
    {
      v24 = ps->mountState.startTime;
      if ( (!v24 || v24 <= ps->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1704, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", "%s\n\tContext mount must be active when invoking GetViewHeightTarget()", "BG_ContextMount_IsActive( ps )") )
        __debugbreak();
      v25 = (float)((float)((float)(outUp.v[1] * ps->mountState.eyePoint.v[1]) + (float)(outUp.v[0] * ps->mountState.eyePoint.v[0])) + (float)(outUp.v[2] * ps->mountState.eyePoint.v[2])) - (float)((float)((float)(outUp.v[1] * ps->origin.v[1]) + (float)(outUp.v[0] * ps->origin.v[0])) + (float)(outUp.v[2] * ps->origin.v[2]));
      if ( (float)BG_GetSuitDef(ps->suitIndex)->viewheight_crouch >= v25 )
        v21 = EV_STANCE_FORCE_PRONE;
      BG_AddPredictableEventToPlayerstate(v21, 0, gameTime, weaponMap, ps);
    }
    v26 = ps->mountState.surface.type;
    ps->mountState.endTime = gameTime;
    BG_AddPredictableEventToPlayerstate(EV_MOUNT_EXIT, v26, gameTime, weaponMap, ps);
    v27 = DCONST_DVARINT_mount_debug;
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.integer )
    {
      if ( handler->IsServer((BgHandler *)handler) )
        Com_Printf(17, "Context Mount Cancelled: %s\n", debugString);
    }
  }
}

/*
==============
BG_ContextMount_DrawLegsModel
==============
*/
char BG_ContextMount_DrawLegsModel(const playerState_s *const ps)
{
  const dvar_t *v2; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->mountState.mountFraction <= 0.0 )
    return 1;
  v2 = DCONST_DVARBOOL_mount_draw_legs;
  if ( !DCONST_DVARBOOL_mount_draw_legs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_draw_legs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled;
}

/*
==============
BG_ContextMount_FindMountEdge
==============
*/
__int64 BG_ContextMount_FindMountEdge(const BgHandler *const handler, playerState_s *const ps, const tmat33_t<vec3_t> *worldBasis, const Weapon *weapon, MountPlayerProperties *outPlayerProperties, MountSurfaceDetailedProperties *outMountProperties)
{
  float viewHeightCurrent; 

  Sys_ProfBeginNamedEvent(0xFF808080, "BG_ContextMount_FindMountEdge");
  outPlayerProperties->origin = ps->origin;
  MatrixCopy33(worldBasis, &outPlayerProperties->worldBasis);
  viewHeightCurrent = ps->viewHeightCurrent;
  outPlayerProperties->eyeOrigin.v[0] = (float)(viewHeightCurrent * outPlayerProperties->worldBasis.m[2].v[0]) + ps->origin.v[0];
  outPlayerProperties->eyeOrigin.v[1] = (float)(viewHeightCurrent * outPlayerProperties->worldBasis.m[2].v[1]) + ps->origin.v[1];
  outPlayerProperties->eyeOrigin.v[2] = (float)(viewHeightCurrent * outPlayerProperties->worldBasis.m[2].v[2]) + ps->origin.v[2];
  AnglesToAxis(&ps->viewangles, &outPlayerProperties->eyeBasis);
  outPlayerProperties->weapon = *weapon;
  outPlayerProperties->isAlternate = BG_UsingAlternate(ps);
  outPlayerProperties->handler = handler;
  outPlayerProperties->ps = ps;
  LOBYTE(worldBasis) = PM_ContextMount_FindMountEdge_Initial(outPlayerProperties, outMountProperties);
  Sys_ProfEndNamedEvent();
  return (unsigned __int8)worldBasis;
}

/*
==============
BG_ContextMount_GetEyePoint
==============
*/
void BG_ContextMount_GetEyePoint(const BgHandler *const handler, const ContextMountState *r_mountState, const vec3_t *playerUp, const Weapon *r_weapon, const bool isAlternate, vec3_t *inOutEyePos)
{
  float mountFraction; 
  bool v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  double v18; 
  float v19; 
  float v20; 
  float v21; 
  double Float_Internal_DebugName; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  vec3_t out; 
  tmat43_t<vec3_t> outMoverToWorld; 

  mountFraction = r_mountState->mountFraction;
  if ( mountFraction > 0.0 )
  {
    v11 = (r_mountState->flags & 0x40) == 0;
    v12 = r_mountState->eyePoint.v[1];
    out.v[0] = r_mountState->eyePoint.v[0];
    out.v[2] = r_mountState->eyePoint.v[2];
    out.v[1] = v12;
    if ( !v11 && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    {
      v13 = DVARBOOL_killswitch_mount_mover_fix_enabled;
      if ( !DVARBOOL_killswitch_mount_mover_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mount_mover_fix_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled && PM_ContextMount_GetMoverTransform(handler, r_mountState->moverId, &outMoverToWorld) )
        MatrixTransformVector43(&r_mountState->eyePointMover, &outMoverToWorld, &out);
    }
    if ( mountFraction <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1655, ASSERT_TYPE_ASSERT, "(0.0f < mountFraction)", (const char *)&queryFormat, "0.0f < mountFraction") )
      __debugbreak();
    if ( mountFraction < 1.0 )
    {
      v15 = (float)((float)((float)((float)(mountFraction * 6.0) - 15.0) * mountFraction) + 10.0) * (float)((float)(mountFraction * mountFraction) * mountFraction);
      v16 = (float)(out.v[1] - inOutEyePos->v[1]) * v15;
      v17 = out.v[2] - inOutEyePos->v[2];
      inOutEyePos->v[0] = (float)((float)(out.v[0] - inOutEyePos->v[0]) * v15) + inOutEyePos->v[0];
      inOutEyePos->v[1] = v16 + inOutEyePos->v[1];
      inOutEyePos->v[2] = (float)(v17 * v15) + inOutEyePos->v[2];
      if ( r_mountState->surface.type == MOUNT_TYPE_TOP )
      {
        if ( r_mountState->endTime >= r_mountState->startTime )
        {
          BG_GetMountEnterExitDuration(MOUNT_TYPE_TOP, r_weapon, isAlternate, &outEnterDurationMs, &outExitDurationMs);
          v20 = (float)(r_mountState->endTime - r_mountState->startTime) / (float)outEnterDurationMs;
          I_fclamp(v20, 0.0, 1.0);
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_enter_up_delta, "mount_top_enter_up_delta");
          v21 = *(float *)&Float_Internal_DebugName * sinf_0(v20 * 3.1415927);
          *(float *)&Float_Internal_DebugName = FLOAT_1_0;
          if ( v20 > 0.0 )
            Float_Internal_DebugName = I_fclamp((float)(v20 - mountFraction) / v20, 0.0, 1.0);
          v19 = (float)(1.0 - *(float *)&Float_Internal_DebugName) * v21;
        }
        else
        {
          v18 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_enter_up_delta, "mount_top_enter_up_delta");
          v19 = *(float *)&v18 * sinf_0(mountFraction * 3.1415927);
        }
        inOutEyePos->v[0] = (float)(v19 * playerUp->v[0]) + inOutEyePos->v[0];
        inOutEyePos->v[1] = (float)(v19 * playerUp->v[1]) + inOutEyePos->v[1];
        inOutEyePos->v[2] = (float)(v19 * playerUp->v[2]) + inOutEyePos->v[2];
      }
    }
    else
    {
      v14 = out.v[1];
      inOutEyePos->v[0] = out.v[0];
      inOutEyePos->v[2] = out.v[2];
      inOutEyePos->v[1] = v14;
    }
  }
}

/*
==============
BG_ContextMount_GetMountEdgeHeight
==============
*/
float BG_ContextMount_GetMountEdgeHeight(const playerState_s *const ps, const BgHandler *handler)
{
  unsigned int EdgeIndex; 
  const dvar_t *v5; 
  float v6; 
  double UpContribution; 
  double v8; 
  vec3_t outMountPoint; 
  vec3_t vec; 
  WorldUpReferenceFrame v12; 
  MountSurfaceProperties mount; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !EdgeId::IsValid(&ps->mountState.surface.id) )
    goto LABEL_11;
  EdgeIndex = EdgeId::GetEdgeIndex(&ps->mountState.surface.id);
  if ( !MapEdgeList_IsLoaded(EdgeIndex) )
    goto LABEL_11;
  v5 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
  if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    MountSurfaceProperties::Initialize(&mount, handler, &ps->mountState.surface);
    BG_ContextMount_CalcMountPoint(handler, &mount, &outMountPoint);
    v6 = outMountPoint.v[1] - ps->origin.v[1];
    vec.v[0] = outMountPoint.v[0] - ps->origin.v[0];
    vec.v[2] = outMountPoint.v[2] - ps->origin.v[2];
    vec.v[1] = v6;
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, ps, handler);
    UpContribution = WorldUpReferenceFrame::GetUpContribution(&v12, &vec);
    v8 = I_fclamp(*(float *)&UpContribution, 0.0, 90.0);
  }
  else
  {
LABEL_11:
    LODWORD(v8) = 0;
  }
  return *(float *)&v8;
}

/*
==============
BG_ContextMount_GetViewHeightTarget
==============
*/
float BG_ContextMount_GetViewHeightTarget(const BgWeaponMap *const weaponMap, const playerState_s *const ps, const vec3_t *entityUp)
{
  int startTime; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1703, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 80, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  startTime = ps->mountState.startTime;
  if ( (!startTime || startTime <= ps->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1704, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", "%s\n\tContext mount must be active when invoking GetViewHeightTarget()", "BG_ContextMount_IsActive( ps )") )
    __debugbreak();
  return (float)((float)((float)(entityUp->v[1] * ps->mountState.eyePoint.v[1]) + (float)(entityUp->v[0] * ps->mountState.eyePoint.v[0])) + (float)(entityUp->v[2] * ps->mountState.eyePoint.v[2])) - (float)((float)((float)(entityUp->v[1] * ps->origin.v[1]) + (float)(entityUp->v[0] * ps->origin.v[0])) + (float)(entityUp->v[2] * ps->origin.v[2]));
}

/*
==============
BG_ContextMount_GetWeapon
==============
*/
const Weapon *BG_ContextMount_GetWeapon(const BgWeaponMap *const weaponMap, const playerState_s *const ps, const Weapon *cmdWeapon)
{
  if ( ps->weapState[0].weaponState == 24 && BG_IsWeaponValid(weaponMap, ps, cmdWeapon) )
    return cmdWeapon;
  else
    return BG_GetCurrentWeaponForPlayer(weaponMap, ps);
}

/*
==============
BG_ContextMount_GetWorldmodelProperties
==============
*/
void BG_ContextMount_GetWorldmodelProperties(const BgHandler *const handler, const playerState_s *const ps, MountWorldmodelAbbreviatedProperties *outWorldmodelProps)
{
  double v6; 
  unsigned int EdgeIndex; 
  const dvar_t *v8; 
  float v9; 
  double UpContribution; 
  double v11; 
  double v12; 
  int v13; 
  double v14; 
  vec3_t outMountPoint; 
  vec3_t vec; 
  WorldUpReferenceFrame v17; 
  MountSurfaceProperties mount; 

  if ( !outWorldmodelProps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1942, ASSERT_TYPE_ASSERT, "(outWorldmodelProps)", (const char *)&queryFormat, "outWorldmodelProps") )
    __debugbreak();
  outWorldmodelProps->type = ps->mountState.surface.type;
  outWorldmodelProps->startTime = ps->mountState.startTime;
  outWorldmodelProps->endTime = ps->mountState.endTime;
  outWorldmodelProps->sideLow = ((unsigned int)ps->mountState.flags >> 4) & 1;
  outWorldmodelProps->edge = ps->mountState.surface.id;
  v6 = BG_ContextMount_QuantizeFloat01Byte(ps->mountState.surface.fraction);
  outWorldmodelProps->edgeFraction = *(float *)&v6;
  outWorldmodelProps->normalIndex = ps->mountState.surface.normalFaceIndex != 0;
  if ( BG_ContextMount_IsActive(ps) )
  {
    if ( ps->mountState.surface.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1956, ASSERT_TYPE_ASSERT, "( mountState->surface.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountState->surface.type", "MOUNT_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !EdgeId::IsValid(&ps->mountState.surface.id) )
      goto LABEL_18;
    EdgeIndex = EdgeId::GetEdgeIndex(&ps->mountState.surface.id);
    if ( !MapEdgeList_IsLoaded(EdgeIndex) )
      goto LABEL_18;
    v8 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
    if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
    {
      MountSurfaceProperties::Initialize(&mount, handler, &ps->mountState.surface);
      BG_ContextMount_CalcMountPoint(handler, &mount, &outMountPoint);
      v9 = outMountPoint.v[1] - ps->origin.v[1];
      vec.v[0] = outMountPoint.v[0] - ps->origin.v[0];
      vec.v[2] = outMountPoint.v[2] - ps->origin.v[2];
      vec.v[1] = v9;
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v17, ps, handler);
      UpContribution = WorldUpReferenceFrame::GetUpContribution(&v17, &vec);
      v11 = I_fclamp(*(float *)&UpContribution, 0.0, 90.0);
    }
    else
    {
LABEL_18:
      LODWORD(v11) = 0;
    }
    v12 = I_fclamp(*(float *)&v11, -90.0, 90.0);
    v13 = MSG_PackSignedFloat(*(float *)&v12, 90.0, 0xBu);
    v14 = MSG_UnpackSignedFloat(v13, 90.0, 0xBu);
    outWorldmodelProps->pivotHeight = *(float *)&v14;
  }
}

/*
==============
BG_ContextMount_InterpolateMountState
==============
*/
void BG_ContextMount_InterpolateMountState(const playerState_s *const prevPs, const playerState_s *const nextPs, float fraction, ContextMountState *r_out)
{
  float v7; 
  int v8; 
  float serverTime; 
  int startTime; 
  int v11; 
  char v12; 
  int endTime; 
  int v14; 
  __int128 v15; 
  int pullbackStartTime; 
  int pullsideStartTime; 

  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1742, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !nextPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1743, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  memset_0(r_out, 0, sizeof(ContextMountState));
  if ( (unsigned int)(nextPs->pm_type - 7) > 1 )
  {
    if ( BG_ContextMount_IsActive(prevPs) && prevPs->mountState.surface.type && BG_IsPlayerLinkedToAnything(prevPs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1763, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerLinkedToAnything( prevPs ))", "%s\n\tPlayer should not be mounted while linked.", "!BG_IsPlayerLinkedToAnything( prevPs )") )
      __debugbreak();
    if ( BG_ContextMount_IsActive(nextPs) && nextPs->mountState.surface.type && BG_IsPlayerLinkedToAnything(nextPs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1767, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerLinkedToAnything( nextPs ))", "%s\n\tPlayer should not be mounted while linked.", "!BG_IsPlayerLinkedToAnything( nextPs )") )
      __debugbreak();
    r_out->flags = nextPs->mountState.flags & 0x60;
    if ( nextPs->serverTime <= prevPs->serverTime )
    {
      *(__m256i *)&r_out->surface.type = *(__m256i *)&nextPs->mountState.surface.type;
      *(_OWORD *)&r_out->surface.transitionType = *(_OWORD *)&nextPs->mountState.surface.transitionType;
      r_out->startTime = nextPs->mountState.startTime;
      r_out->endTime = nextPs->mountState.endTime;
      r_out->mountFraction = nextPs->mountState.mountFraction;
      r_out->eyePoint.v[0] = nextPs->mountState.eyePoint.v[0];
      r_out->eyePoint.v[1] = nextPs->mountState.eyePoint.v[1];
      r_out->eyePoint.v[2] = nextPs->mountState.eyePoint.v[2];
      r_out->eyePointMover.v[0] = nextPs->mountState.eyePointMover.v[0];
      r_out->eyePointMover.v[1] = nextPs->mountState.eyePointMover.v[1];
      r_out->eyePointMover.v[2] = nextPs->mountState.eyePointMover.v[2];
      r_out->moverId = nextPs->mountState.moverId;
      return;
    }
    r_out->mountFraction = (float)((float)(nextPs->mountState.mountFraction - prevPs->mountState.mountFraction) * fraction) + prevPs->mountState.mountFraction;
    r_out->eyePoint.v[0] = (float)((float)(nextPs->mountState.eyePoint.v[0] - prevPs->mountState.eyePoint.v[0]) * fraction) + prevPs->mountState.eyePoint.v[0];
    r_out->eyePoint.v[1] = (float)((float)(nextPs->mountState.eyePoint.v[1] - prevPs->mountState.eyePoint.v[1]) * fraction) + prevPs->mountState.eyePoint.v[1];
    r_out->eyePoint.v[2] = (float)((float)(nextPs->mountState.eyePoint.v[2] - prevPs->mountState.eyePoint.v[2]) * fraction) + prevPs->mountState.eyePoint.v[2];
    r_out->moverId = nextPs->mountState.moverId;
    if ( prevPs->mountState.moverId == nextPs->mountState.moverId )
    {
      r_out->eyePointMover.v[0] = (float)((float)(nextPs->mountState.eyePointMover.v[0] - prevPs->mountState.eyePointMover.v[0]) * fraction) + prevPs->mountState.eyePointMover.v[0];
      r_out->eyePointMover.v[1] = (float)((float)(nextPs->mountState.eyePointMover.v[1] - prevPs->mountState.eyePointMover.v[1]) * fraction) + prevPs->mountState.eyePointMover.v[1];
      v7 = (float)((float)(nextPs->mountState.eyePointMover.v[2] - prevPs->mountState.eyePointMover.v[2]) * fraction) + prevPs->mountState.eyePointMover.v[2];
    }
    else
    {
      r_out->eyePointMover.v[0] = nextPs->mountState.eyePointMover.v[0];
      r_out->eyePointMover.v[1] = nextPs->mountState.eyePointMover.v[1];
      v7 = nextPs->mountState.eyePointMover.v[2];
    }
    r_out->eyePointMover.v[2] = v7;
    v8 = nextPs->serverTime - prevPs->serverTime;
    if ( v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1802, ASSERT_TYPE_ASSERT, "(0 < snapDeltaDuration)", (const char *)&queryFormat, "0 < snapDeltaDuration") )
      __debugbreak();
    serverTime = (float)prevPs->serverTime;
    r_out->startTime = prevPs->mountState.startTime;
    startTime = nextPs->mountState.startTime;
    v11 = (int)(float)((float)((float)v8 * fraction) + serverTime);
    if ( prevPs->mountState.startTime > startTime || startTime > v11 )
    {
      v12 = 0;
    }
    else
    {
      v12 = 1;
      r_out->startTime = startTime;
    }
    endTime = prevPs->mountState.endTime;
    r_out->endTime = endTime;
    v14 = nextPs->mountState.endTime;
    if ( prevPs->mountState.endTime > v14 || v14 > v11 )
      v14 = endTime;
    else
      r_out->endTime = v14;
    if ( v12 )
    {
      *(__m256i *)&r_out->surface.type = *(__m256i *)&nextPs->mountState.surface.type;
      v15 = *(_OWORD *)&nextPs->mountState.surface.transitionType;
    }
    else
    {
      if ( r_out->mountFraction <= 0.0 )
      {
        r_out->surface.type = MOUNT_TYPE_NONE;
        goto LABEL_40;
      }
      *(__m256i *)&r_out->surface.type = *(__m256i *)&prevPs->mountState.surface.type;
      v15 = *(_OWORD *)&prevPs->mountState.surface.transitionType;
    }
    *(_OWORD *)&r_out->surface.transitionType = v15;
LABEL_40:
    r_out->pullbackStartTime = prevPs->mountState.pullbackStartTime;
    pullbackStartTime = nextPs->mountState.pullbackStartTime;
    if ( prevPs->mountState.pullbackStartTime < pullbackStartTime && pullbackStartTime <= v11 )
      r_out->pullbackStartTime = pullbackStartTime;
    r_out->pullsideStartTime = prevPs->mountState.pullsideStartTime;
    pullsideStartTime = nextPs->mountState.pullsideStartTime;
    if ( prevPs->mountState.pullsideStartTime < pullsideStartTime && pullsideStartTime <= v11 )
      r_out->pullsideStartTime = pullsideStartTime;
    if ( v14 < r_out->startTime && r_out->mountFraction > 0.0 && r_out->surface.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1850, ASSERT_TYPE_ASSERT, "( r_out.surface.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "r_out.surface.type", "MOUNT_TYPE_NONE", 0, 0i64) )
      __debugbreak();
  }
}

/*
==============
BG_ContextMount_IsActive
==============
*/
bool BG_ContextMount_IsActive(const int startTime, const int endTime)
{
  return startTime && startTime > endTime;
}

/*
==============
BG_ContextMount_IsActive
==============
*/
bool BG_ContextMount_IsActive(const playerState_s *const ps)
{
  int startTime; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 80, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  startTime = ps->mountState.startTime;
  if ( startTime )
    LOBYTE(startTime) = startTime > ps->mountState.endTime;
  return startTime;
}

/*
==============
BG_ContextMount_IsBlendingToMount
==============
*/
bool BG_ContextMount_IsBlendingToMount(const playerState_s *const ps)
{
  float mountFraction; 
  bool result; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 461, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = 0;
  if ( ps->mountState.startTime >= ps->mountState.endTime )
  {
    mountFraction = ps->mountState.mountFraction;
    if ( mountFraction > 0.0 && mountFraction < 1.0 )
      return 1;
  }
  return result;
}

/*
==============
BG_ContextMount_IsStanceEnabled
==============
*/
char BG_ContextMount_IsStanceEnabled(const playerState_s *const ps)
{
  EffectiveStance EffectiveStance; 
  __int32 v3; 
  const dvar_t *v4; 
  const char *v5; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 87, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  EffectiveStance = PM_GetEffectiveStance(ps);
  if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
  {
    v4 = DCONST_DVARBOOL_mount_stance_allow_mount_stand;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_stand )
      goto LABEL_16;
    v5 = "mount_stance_allow_mount_stand";
    goto LABEL_14;
  }
  v3 = EffectiveStance - 1;
  if ( !v3 )
  {
    v4 = DCONST_DVARBOOL_mount_stance_allow_mount_prone;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_prone )
      goto LABEL_16;
    v5 = "mount_stance_allow_mount_prone";
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
      __debugbreak();
    goto LABEL_16;
  }
  if ( v3 != 1 )
    return 1;
  v4 = DCONST_DVARBOOL_mount_stance_allow_mount_crouch;
  if ( !DCONST_DVARBOOL_mount_stance_allow_mount_crouch )
  {
    v5 = "mount_stance_allow_mount_crouch";
    goto LABEL_14;
  }
LABEL_16:
  Dvar_CheckFrontendServerThread(v4);
  return v4->current.enabled;
}

/*
==============
BG_ContextMount_IsValidMountState
==============
*/
char BG_ContextMount_IsValidMountState(const BgWeaponMap *const weaponMap, const playerState_s *const ps, MountFailureResult *outResults)
{
  bool IsActive; 
  const dvar_t *v7; 
  const dvar_t *v9; 
  bool v10; 
  bool v11; 
  char v12; 
  int WeaponHand; 
  int *p_weaponState; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 v17; 
  const char *v18; 
  EffectiveStance EffectiveStance; 
  __int32 v20; 
  const dvar_t *v21; 
  const char *v22; 

  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  IsActive = BG_ContextMount_IsActive(ps);
  if ( !IsActive )
  {
    v7 = DCONST_DVARFLT_mount_tuning_min_fraction;
    if ( !DCONST_DVARFLT_mount_tuning_min_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_min_fraction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( ps->mountState.mountFraction > v7->current.value )
    {
      strncpy(outResults->failReason, "can only initiate mount at 'mount_tuning_min_fraction' fraction", 0x80ui64);
      return 0;
    }
  }
  v9 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    strncpy(outResults->failReason, "mount is disabled", 0x80ui64);
    return 0;
  }
  if ( BG_IsPlayerLinkedToAnything(ps) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xBu) || ps->pm_type >= 7 )
    goto LABEL_24;
  if ( ps == (const playerState_s *const)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 6u) )
    goto LABEL_24;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_24:
    strncpy(outResults->failReason, "player is not permitted to enter mount in current state", 0x80ui64);
    return 0;
  }
  if ( BG_IsInAir(ps, 0) )
  {
    outResults->putOnCooldown = 1;
    strncpy(outResults->failReason, "player in air", 0x80ui64);
    return 0;
  }
  v10 = BG_ContextMount_IsActive(ps);
  v11 = 1;
  v12 = 0;
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    p_weaponState = &ps->weapState[0].weaponState;
    v15 = 0x3E39401C01FF863Fi64;
    v16 = WeaponHand + 1i64;
    do
    {
      if ( v12 || *p_weaponState == 24 )
        v12 = 1;
      v11 = v11 && ((v17 = *p_weaponState, (unsigned int)v17 <= 0x3D) && _bittest64(&v15, v17) || (unsigned int)(v17 - 76) <= 1 || !v10 && v12);
      p_weaponState += 20;
      --v16;
    }
    while ( v16 );
    if ( !v11 )
    {
      outResults->putOnCooldown = 1;
      v18 = "invalid weapon state";
      goto LABEL_43;
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u) )
  {
    v18 = "controls are frozen";
    goto LABEL_43;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x15u) && BG_GetShellshockParms(ps->shellshockIndex)->mount.affect )
  {
    v18 = "shellshocked";
    goto LABEL_43;
  }
  EffectiveStance = PM_GetEffectiveStance(ps);
  if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
  {
    v21 = DCONST_DVARBOOL_mount_stance_allow_mount_stand;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_stand )
      goto LABEL_62;
    v22 = "mount_stance_allow_mount_stand";
    goto LABEL_60;
  }
  v20 = EffectiveStance - 1;
  if ( !v20 )
  {
    v21 = DCONST_DVARBOOL_mount_stance_allow_mount_prone;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_prone )
      goto LABEL_62;
    v22 = "mount_stance_allow_mount_prone";
    goto LABEL_60;
  }
  if ( v20 == 1 )
  {
    v21 = DCONST_DVARBOOL_mount_stance_allow_mount_crouch;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_crouch )
      goto LABEL_62;
    v22 = "mount_stance_allow_mount_crouch";
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v22) )
      __debugbreak();
LABEL_62:
    Dvar_CheckFrontendServerThread(v21);
    if ( !v21->current.enabled && !IsActive )
    {
      v18 = "not a valid stance";
      goto LABEL_43;
    }
  }
  if ( BG_PlayerDualWielding(ps) )
    return 0;
  if ( !BG_IsUsingOffhandGestureWeaponADSSupport(weaponMap, ps) )
    return 1;
  v18 = "offhand ads";
LABEL_43:
  strncpy(outResults->failReason, v18, 0x80ui64);
  return 0;
}

/*
==============
BG_ContextMount_IsViewangleTooShallow
==============
*/
bool BG_ContextMount_IsViewangleTooShallow(const ContextMountType type, const tmat33_t<vec3_t> *viewBasis, const vec3_t *entityUp, const vec3_t *edgeParallel)
{
  float v8; 
  float v9; 
  const dvar_t *v10; 
  __int128 v11; 
  const char *v15; 
  float value; 
  float v17; 
  __int128 v19; 
  double v21; 
  __int128 v23; 
  float v27; 
  __int128 v28; 
  vec3_t outProjectedPoint; 
  vec3_t v33; 

  if ( (unsigned int)type >= COUNT_MOUNT_TYPE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( COUNT_MOUNT_TYPE )", "type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", type, 4) )
    __debugbreak();
  if ( type == MOUNT_TYPE_NONE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 285, ASSERT_TYPE_ASSERT, "(type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "type != MOUNT_TYPE_NONE") )
      __debugbreak();
    goto LABEL_7;
  }
  if ( type != MOUNT_TYPE_TOP )
  {
LABEL_7:
    v8 = viewBasis->m[0].v[1];
    v33.v[0] = viewBasis->m[0].v[0];
    v33.v[2] = viewBasis->m[0].v[2];
    v33.v[1] = v8;
    ProjectPointOnPlane(edgeParallel, &viewBasis->m[1], &outProjectedPoint);
    v9 = FLOAT_1_0;
    v10 = DCONST_DVARMPFLT_mount_side_max_pitch;
    v11 = LODWORD(outProjectedPoint.v[0]);
    *(float *)&v11 = fsqrt((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]));
    _XMM3 = v11;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    outProjectedPoint.v[0] = outProjectedPoint.v[0] * (float)(1.0 / *(float *)&_XMM0);
    outProjectedPoint.v[2] = outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM0);
    outProjectedPoint.v[1] = outProjectedPoint.v[1] * (float)(1.0 / *(float *)&_XMM0);
    if ( DCONST_DVARMPFLT_mount_side_max_pitch )
      goto LABEL_11;
    v15 = "mount_side_max_pitch";
    goto LABEL_9;
  }
  v9 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(entityUp->v[1] * viewBasis->m[0].v[1]) + (float)(entityUp->v[0] * viewBasis->m[0].v[0])) + (float)(entityUp->v[2] * viewBasis->m[0].v[2])) & _xmm) - 1.0) & _xmm) < 0.001 )
  {
    LODWORD(v27) = LODWORD(viewBasis->m[2].v[1]) ^ _xmm;
    LODWORD(v33.v[0]) = LODWORD(viewBasis->m[2].v[0]) ^ _xmm;
    LODWORD(v33.v[2]) = LODWORD(viewBasis->m[2].v[2]) ^ _xmm;
    v33.v[1] = v27;
  }
  else
  {
    ProjectPointOnPlane(viewBasis->m, entityUp, &v33);
    v23 = LODWORD(v33.v[0]);
    *(float *)&v23 = fsqrt((float)((float)(*(float *)&v23 * *(float *)&v23) + (float)(v33.v[1] * v33.v[1])) + (float)(v33.v[2] * v33.v[2]));
    _XMM3 = v23;
    __asm
    {
      vcmpless xmm0, xmm3, xmm9
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    v33.v[0] = v33.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v33.v[2] = v33.v[2] * (float)(1.0 / *(float *)&_XMM0);
    v33.v[1] = v33.v[1] * (float)(1.0 / *(float *)&_XMM0);
  }
  ProjectPointOnPlane(edgeParallel, entityUp, &outProjectedPoint);
  v10 = DCONST_DVARFLT_mount_top_max_yaw;
  v28 = LODWORD(outProjectedPoint.v[0]);
  *(float *)&v28 = fsqrt((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]));
  _XMM3 = v28;
  __asm
  {
    vcmpless xmm0, xmm3, xmm9
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  outProjectedPoint.v[0] = outProjectedPoint.v[0] * (float)(1.0 / *(float *)&_XMM0);
  outProjectedPoint.v[2] = outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM0);
  outProjectedPoint.v[1] = outProjectedPoint.v[1] * (float)(1.0 / *(float *)&_XMM0);
  if ( DCONST_DVARFLT_mount_top_max_yaw )
    goto LABEL_11;
  v15 = "mount_top_max_yaw";
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v10);
  value = v10->current.value;
  v17 = (float)((float)(v33.v[0] * v33.v[0]) + (float)(v33.v[1] * v33.v[1])) + (float)(v33.v[2] * v33.v[2]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v9) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 315, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( viewForward ) )", "(%g, %g, %g) len %g", v33.v[0], v33.v[1], v33.v[2], fsqrt(v17)) )
    __debugbreak();
  v19 = LODWORD(outProjectedPoint.v[0]);
  *(float *)&v19 = (float)((float)(*(float *)&v19 * *(float *)&v19) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]);
  _XMM1 = v19;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v19 - v9) & _xmm) >= 0.0020000001 )
  {
    *(double *)&v19 = fsqrt(*(float *)&v19);
    _XMM1 = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 316, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( projectedEdge ) )", "(%g, %g, %g) len %g", outProjectedPoint.v[0], outProjectedPoint.v[1], outProjectedPoint.v[2], *(double *)&v19) )
      __debugbreak();
  }
  if ( value < 0.0 || value > 90.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 317, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minAngleWithEdge ) && ( minAngleWithEdge ) <= ( 90.0f )", "minAngleWithEdge not in [0.0f, 90.0f]\n\t%g not in [%g, %g]", value, *(double *)&_XMM1, DOUBLE_90_0) )
      __debugbreak();
  }
  v21 = I_fclamp((float)((float)(outProjectedPoint.v[0] * v33.v[0]) + (float)(outProjectedPoint.v[1] * v33.v[1])) + (float)(outProjectedPoint.v[2] * v33.v[2]), -1.0, v9);
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(90.0 - (float)(acosf_0(*(float *)&v21) * 57.295776)) & _xmm) > value;
}

/*
==============
BG_ContextMount_MoveToPoint
==============
*/
char BG_ContextMount_MoveToPoint(pmove_t *const pm, pml_t *const pml, const float max2DSpeed, const vec3_t *goalPoint)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  BgGroundState *ground; 
  float v16; 
  __int128 v17; 
  float v18; 
  float v19; 
  __int128 v20; 
  playerState_s *ps; 
  playerState_s *v23; 
  vec3_t velInConst; 

  *(float *)&_XMM6 = max2DSpeed;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1393, ASSERT_TYPE_ASSERT, "(pm != 0)", (const char *)&queryFormat, "pm != NULL") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1394, ASSERT_TYPE_ASSERT, "(pm->ps != 0)", (const char *)&queryFormat, "pm->ps != NULL") )
    __debugbreak();
  v8 = pm->ps->origin.v[0];
  v9 = pm->ps->origin.v[1];
  v10 = pm->ps->origin.v[2];
  v11 = goalPoint->v[0] - v8;
  v12 = goalPoint->v[2] - v10;
  v13 = goalPoint->v[1] - v9;
  v14 = fsqrt((float)((float)(v13 * v13) + (float)(v11 * v11)) + (float)(v12 * v12));
  if ( v14 > 0.000001 )
  {
    ground = pm->ground;
    velInConst.v[0] = v11 / v14;
    velInConst.v[2] = v12 / v14;
    velInConst.v[1] = v13 / v14;
    PM_ProjectVelocity(pm, &velInConst, &ground->trace.normal, &velInConst);
    v16 = velInConst.v[0];
    if ( pml->frametime > 0.0 )
    {
      v17 = LODWORD(velInConst.v[1]);
      v18 = velInConst.v[2];
      v19 = (float)((float)(*(float *)&v17 * *(float *)&v17) + (float)(velInConst.v[0] * velInConst.v[0])) + (float)(v18 * v18);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) >= 0.0020000001 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1419, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( wishDir ) )", "(%g, %g, %g) len %g", velInConst.v[0], velInConst.v[1], velInConst.v[2], fsqrt(v19)) )
          __debugbreak();
        v16 = velInConst.v[0];
        v17 = LODWORD(velInConst.v[1]);
        v18 = velInConst.v[2];
      }
      v20 = v17;
      *(float *)&v20 = (float)((float)((float)(*(float *)&v17 * v13) + (float)(v16 * v11)) + (float)(v18 * v12)) / pml->frametime;
      _XMM0 = v20;
      __asm { vminss  xmm6, xmm0, xmm6 }
    }
    ps = pm->ps;
    ps->velocity.v[0] = v16 * *(float *)&_XMM6;
    ps->velocity.v[1] = *(float *)&_XMM6 * velInConst.v[1];
    ps->velocity.v[2] = *(float *)&_XMM6 * velInConst.v[2];
    PM_UpdatePlayerCollision(pm, pml, 0, 1, 0, 1);
    v23 = pm->ps;
    if ( (float)((float)((float)((float)(v23->origin.v[1] - v9) * (float)(v23->origin.v[1] - v9)) + (float)((float)(v23->origin.v[0] - v8) * (float)(v23->origin.v[0] - v8))) + (float)((float)(v23->origin.v[2] - v10) * (float)(v23->origin.v[2] - v10))) < minMoveDistSq )
    {
      v23->origin.v[0] = v8;
      v23->origin.v[1] = v9;
      v23->origin.v[2] = v10;
    }
    PM_GroundTrace(pm, pml, 0);
  }
  return 1;
}

/*
==============
BG_ContextMount_QuantizeBasis
==============
*/
void BG_ContextMount_QuantizeBasis(tmat33_t<vec3_t> *basis)
{
  vec3_t outQuatPacked; 
  vec4_t outQuat; 

  AxisToPackedQuat(basis, &outQuatPacked);
  PackedQuatToUnitQuat(&outQuatPacked, &outQuat);
  QuatToAxis(&outQuat, basis);
}

/*
==============
BG_ContextMount_QuantizeFloat01Byte
==============
*/

float __fastcall BG_ContextMount_QuantizeFloat01Byte(float value, __int64 a2, double _XMM2_8)
{
  unsigned __int8 v6; 

  if ( value < 0.0 || value > 1.0 )
  {
    __asm { vxorpd  xmm2, xmm2, xmm2 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", value, *(double *)&_XMM2, DOUBLE_1_0) )
      __debugbreak();
  }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v6 = (int)*(float *)&_XMM2;
  if ( (int)*(float *)&_XMM2 > 255 )
    v6 = -1;
  if ( v6 == 0xFF )
    return FLOAT_1_0;
  else
    return (float)v6 * 0.00390625;
}

/*
==============
BG_ContextMount_QuantizeViewHeight
==============
*/
double BG_ContextMount_QuantizeViewHeight(float viewHeight)
{
  double v1; 
  int v2; 

  v1 = I_fclamp(viewHeight, -90.0, 90.0);
  v2 = MSG_PackSignedFloat(*(float *)&v1, 90.0, 0xBu);
  return MSG_UnpackSignedFloat(v2, 90.0, 0xBu);
}

/*
==============
BG_ContextMount_UpdatePlayerPullingAway
==============
*/
char BG_ContextMount_UpdatePlayerPullingAway(const pmove_t *const pm, const pml_t *const pml, const vec3_t *entityUp, const vec3_t *edgeParallel, const vec3_t *edgeNormal, const vec3_t *edgeBelow)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  playerState_s *ps; 
  const dvar_t *v19; 
  ContextMountType type; 
  const dvar_t *v21; 
  unsigned int rightmove; 
  unsigned int forwardmove; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __m128 v28; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  __int128 v38; 
  float v39; 
  float v40; 
  double v41; 
  int v42; 
  __int128 v43; 
  float v47; 
  __int128 v48; 
  float v49; 
  float v50; 
  __int128 v51; 
  const dvar_t *v55; 
  const dvar_t *v56; 
  const dvar_t *v57; 
  const dvar_t *v58; 
  int pullbackStartTime; 
  const dvar_t *v60; 
  int v61; 
  int pullsideStartTime; 
  int v63; 
  const dvar_t *v64; 
  const char *v65; 
  __int64 v67; 
  ContextMountType v68; 
  vec3_t outProjectedPoint; 
  vec3_t v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 

  *(_QWORD *)outProjectedPoint.v = edgeNormal;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 327, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 328, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 329, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 329, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps->mountState.surface.type >= (unsigned int)COUNT_MOUNT_TYPE )
  {
    LODWORD(v67) = ps->mountState.surface.type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( ps->mountState.surface.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "ps->mountState.surface.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v67, 4) )
      __debugbreak();
  }
  if ( ps->mountState.surface.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 331, ASSERT_TYPE_ASSERT, "(ps->mountState.surface.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "ps->mountState.surface.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  v19 = DCONST_DVARBOOL_mount_pull_away_enabled;
  if ( !DCONST_DVARBOOL_mount_pull_away_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pull_away_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled || (pm->cmd.buttons & 0x80000000000000i64) != 0 )
  {
    *(_QWORD *)&ps->mountState.pullbackStartTime = 0i64;
    return 0;
  }
  type = ps->mountState.surface.type;
  v78 = v6;
  v76 = v8;
  v75 = v9;
  v68 = type;
  if ( type != MOUNT_TYPE_TOP )
    goto LABEL_50;
  v21 = DCONST_DVARBOOL_mount_controls_project_input_desires;
  if ( !DCONST_DVARBOOL_mount_controls_project_input_desires && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_controls_project_input_desires") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( !v21->current.enabled )
  {
LABEL_50:
    v25 = (float)pm->cmd.forwardmove * -0.0078740157;
    v26 = (float)pm->cmd.rightmove * 0.0078740157;
    goto LABEL_51;
  }
  rightmove = pm->cmd.rightmove;
  forwardmove = pm->cmd.forwardmove;
  v24 = fsqrt((float)(int)(rightmove * rightmove + forwardmove * forwardmove));
  if ( v24 <= 0.000001 )
  {
    v25 = 0.0;
    v26 = 0.0;
    goto LABEL_51;
  }
  v77 = v7;
  v74 = v10;
  v73 = v11;
  v72 = v12;
  v27 = _mm_cvtepi32_ps((__m128i)rightmove).m128_f32[0];
  v28 = _mm_cvtepi32_ps((__m128i)forwardmove);
  _XMM1 = *(_OWORD *)&v28 & (unsigned int)_xmm;
  __asm { vmaxss  xmm2, xmm1, xmm0 }
  v31 = *(float *)&_XMM2 * (float)(0.0078740157 / v24);
  v32 = (float)((float)(v27 * pml->right.v[0]) + (float)(v28.m128_f32[0] * pml->forward.v[0])) * v31;
  *(float *)&_XMM1 = (float)(v27 * pml->right.v[1]) + (float)(v28.m128_f32[0] * pml->forward.v[1]);
  *(float *)&_XMM2 = v27 * pml->right.v[2];
  v33 = v28.m128_f32[0] * pml->forward.v[2];
  v34 = entityUp->v[1];
  v35 = entityUp->v[2];
  v36 = *(float *)&_XMM1 * v31;
  v71 = v13;
  v37 = (float)(*(float *)&_XMM2 + v33) * v31;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v34 * *(float *)(*(_QWORD *)outProjectedPoint.v + 4i64)) + (float)(entityUp->v[0] * **(float **)outProjectedPoint.v)) + (float)(v35 * *(float *)(*(_QWORD *)outProjectedPoint.v + 8i64))) & _xmm) - 1.0) & _xmm) < 0.001 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(v34 * edgeBelow->v[1]) + (float)(entityUp->v[0] * edgeBelow->v[0])) + (float)(v35 * edgeBelow->v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 368, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeBelow, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeBelow, entityUp )") )
      __debugbreak();
    ProjectPointOnPlane(edgeBelow, entityUp, &outProjectedPoint);
    v38 = LODWORD(outProjectedPoint.v[0]);
    v39 = outProjectedPoint.v[1];
    v40 = outProjectedPoint.v[2];
    v41 = DOUBLE_1_0eN12;
    if ( (float)((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v39 * v39)) + (float)(v40 * v40)) > 1.0e-12 )
      goto LABEL_42;
    v42 = 370;
    goto LABEL_39;
  }
  ProjectPointOnPlane(*(const vec3_t **)outProjectedPoint.v, entityUp, &outProjectedPoint);
  v38 = LODWORD(outProjectedPoint.v[0]);
  v39 = outProjectedPoint.v[1];
  v40 = outProjectedPoint.v[2];
  v41 = DOUBLE_1_0eN12;
  if ( (float)((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v39 * v39)) + (float)(v40 * v40)) <= 1.0e-12 )
  {
    v42 = 377;
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", v42, ASSERT_TYPE_ASSERT, "((1.0E-6 * 1.0E-6) < Vec3LengthSq( projectedWallNormal ))", (const char *)&queryFormat, "(ZERO_EPSILON * ZERO_EPSILON) < Vec3LengthSq( projectedWallNormal )") )
      __debugbreak();
    v40 = outProjectedPoint.v[2];
    v39 = outProjectedPoint.v[1];
    v38 = LODWORD(outProjectedPoint.v[0]);
  }
LABEL_42:
  v43 = v38;
  *(float *)&v43 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v39 * v39)) + (float)(v40 * v40));
  _XMM3 = v43;
  __asm
  {
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v47 = 1.0 / *(float *)&_XMM0;
  outProjectedPoint.v[0] = *(float *)&v38 * (float)(1.0 / *(float *)&_XMM0);
  outProjectedPoint.v[2] = v40 * (float)(1.0 / *(float *)&_XMM0);
  *(float *)&_XMM3 = edgeParallel->v[1] * entityUp->v[1];
  *(float *)&_XMM0 = edgeParallel->v[2];
  outProjectedPoint.v[1] = v39 * v47;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(*(float *)&_XMM3 + (float)(entityUp->v[0] * edgeParallel->v[0])) + (float)(*(float *)&_XMM0 * entityUp->v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 382, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeParallel, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeParallel, entityUp )") )
    __debugbreak();
  ProjectPointOnPlane(edgeParallel, entityUp, &v70);
  v48 = LODWORD(v70.v[0]);
  v49 = v70.v[1];
  v50 = v70.v[2];
  if ( (float)((float)((float)(*(float *)&v48 * *(float *)&v48) + (float)(v49 * v49)) + (float)(v50 * v50)) <= v41 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 384, ASSERT_TYPE_ASSERT, "((1.0E-6 * 1.0E-6) < Vec3LengthSq( projectedEdgeLeft ))", (const char *)&queryFormat, "(ZERO_EPSILON * ZERO_EPSILON) < Vec3LengthSq( projectedEdgeLeft )") )
      __debugbreak();
    v48 = LODWORD(v70.v[0]);
    v49 = v70.v[1];
    v50 = v70.v[2];
  }
  v51 = v48;
  *(float *)&v51 = fsqrt((float)((float)(*(float *)&v48 * *(float *)&v48) + (float)(v49 * v49)) + (float)(v50 * v50));
  _XMM3 = v51;
  __asm
  {
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v25 = (float)((float)(v32 * outProjectedPoint.v[0]) + (float)(v36 * outProjectedPoint.v[1])) + (float)(v37 * outProjectedPoint.v[2]);
  LODWORD(v26) = COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v48 * (float)(1.0 / *(float *)&_XMM0)) * v32) + (float)((float)(v49 * (float)(1.0 / *(float *)&_XMM0)) * v36)) + (float)((float)(v50 * (float)(1.0 / *(float *)&_XMM0)) * v37)) & _xmm;
LABEL_51:
  v55 = DCONST_DVARBOOL_mount_pullforward_enabled;
  if ( !DCONST_DVARBOOL_mount_pullforward_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullforward_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v55);
  if ( v55->current.enabled )
    LODWORD(v25) &= _xmm;
  v56 = DCONST_DVARFLT_mount_pullback_forward_move_fraction;
  if ( !DCONST_DVARFLT_mount_pullback_forward_move_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullback_forward_move_fraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  if ( v25 > v56->current.value )
  {
    if ( !ps->mountState.pullbackStartTime )
      ps->mountState.pullbackStartTime = pm->cmd.serverTime;
  }
  else
  {
    ps->mountState.pullbackStartTime = 0;
  }
  v57 = DCONST_DVARBOOL_mount_pullside_into_cover_enabled;
  if ( !DCONST_DVARBOOL_mount_pullside_into_cover_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullside_into_cover_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v57);
  if ( v57->current.enabled )
  {
    LODWORD(v26) &= _xmm;
  }
  else if ( ps->mountState.surface.type == MOUNT_TYPE_LEFT )
  {
    LODWORD(v26) ^= _xmm;
  }
  v58 = DCONST_DVARFLT_mount_pullside_side_move_fraction;
  if ( !DCONST_DVARFLT_mount_pullside_side_move_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullside_side_move_fraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v58);
  if ( v26 > v58->current.value )
  {
    if ( !ps->mountState.pullsideStartTime )
      ps->mountState.pullsideStartTime = pm->cmd.serverTime;
  }
  else
  {
    ps->mountState.pullsideStartTime = 0;
  }
  pullbackStartTime = ps->mountState.pullbackStartTime;
  if ( pullbackStartTime > 0 )
  {
    v60 = DCONST_DVARINT_mount_pullback_time_ms;
    v61 = pm->cmd.serverTime - pullbackStartTime;
    if ( !DCONST_DVARINT_mount_pullback_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullback_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v60);
    if ( v60->current.integer < v61 )
      return 1;
  }
  pullsideStartTime = ps->mountState.pullsideStartTime;
  if ( pullsideStartTime > 0 )
  {
    if ( v68 == MOUNT_TYPE_TOP )
    {
      v64 = DCONST_DVARINT_mount_pullside_top_time_ms;
      v65 = "mount_pullside_top_time_ms";
    }
    else
    {
      v64 = DCONST_DVARINT_mount_pullside_side_time_ms;
      v65 = "mount_pullside_side_time_ms";
    }
    v63 = pm->cmd.serverTime - pullsideStartTime;
    if ( Dvar_GetInt_Internal_DebugName(v64, v65) < v63 )
      return 1;
  }
  return 0;
}

/*
==============
MountSurfaceProperties::Initialize
==============
*/
void MountSurfaceProperties::Initialize(MountSurfaceProperties *this, const BgHandler *handler, const MountSurfaceAbbreviatedProperties *mount)
{
  unsigned int normalFaceIndex; 
  MountEdgeProperties v6; 

  this->MountSurfaceAbbreviatedProperties = *mount;
  *(_QWORD *)&this->adjFraction = 0i64;
  if ( EdgeId::IsValid(&this->adjId) )
  {
    MountEdgeProperties::MountEdgeProperties(&v6);
    MountEdgeProperties::Initialize(&v6, handler, this->id, this->fraction, this->normalFaceIndex, this->type);
    MountEdgeProperties::TransitionToAdjacent(&v6, handler, this->adjId, 0);
    normalFaceIndex = v6.normalFaceIndex;
    this->adjFraction = v6.fraction;
    this->adjNormalFaceIndex = normalFaceIndex;
  }
}

/*
==============
PM_ContextMount_ButtonEnterMount
==============
*/
bool PM_ContextMount_ButtonEnterMount(const pmove_t *const pm)
{
  const dvar_t *v2; 
  bool v3; 
  bool v4; 
  unsigned __int64 buttons; 

  v2 = DCONST_DVARBOOL_mount_cancels_slide_enabled;
  v3 = (pm->cmd.stateFlags & 8) != 0;
  if ( !DCONST_DVARBOOL_mount_cancels_slide_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_cancels_slide_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v4 = v2->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Du);
  if ( v3 || v4 )
    buttons = pm->cmd.buttons;
  else
    buttons = pm->cmd.buttons & ~pm->oldcmd.buttons;
  return (buttons & 0x80000000000i64) != 0;
}

/*
==============
PM_ContextMount_ButtonExitMount
==============
*/
bool PM_ContextMount_ButtonExitMount(const pmove_t *const pm)
{
  if ( (pm->cmd.stateFlags & 8) != 0 )
    return (pm->cmd.buttons & 0x80000000000i64) == 0;
  else
    return (pm->cmd.buttons & ~pm->oldcmd.buttons & 0x80000000000i64) != 0;
}

/*
==============
PM_ContextMount_CachePrevViewAngles
==============
*/
void PM_ContextMount_CachePrevViewAngles(pmove_t *const pm, pml_t *const pml)
{
  playerState_s *ps; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1613, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1614, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1614, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pml->mountState.isStateUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1618, ASSERT_TYPE_ASSERT, "(!pml->mountState.isStateUpdated)", (const char *)&queryFormat, "!pml->mountState.isStateUpdated") )
    __debugbreak();
  if ( pml->mountState.isMoveUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1619, ASSERT_TYPE_ASSERT, "(!pml->mountState.isMoveUpdated)", (const char *)&queryFormat, "!pml->mountState.isMoveUpdated") )
    __debugbreak();
  pml->mountState.isPreviousViewangleValid = 1;
  ps = pm->ps;
  pml->mountState.previousViewangles.v[0] = ps->viewangles.v[0];
  pml->mountState.previousViewangles.v[1] = ps->viewangles.v[1];
  pml->mountState.previousViewangles.v[2] = ps->viewangles.v[2];
}

/*
==============
PM_ContextMount_CalcPlayerSpeed
==============
*/
float PM_ContextMount_CalcPlayerSpeed(const pmove_t *const pm, const pml_t *const pml)
{
  playerState_s *ps; 
  int startTime; 
  double v7; 
  const dvar_t *v8; 
  float v9; 
  __int128 unsignedInt; 
  const dvar_t *v11; 
  __int128 v13; 

  LODWORD(_XMM0) = 0;
  if ( pml->frametime > 0.0 )
  {
    if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2102, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
      __debugbreak();
    ps = pm->ps;
    if ( !ps )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2102, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 80, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    startTime = ps->mountState.startTime;
    if ( (!startTime || startTime <= ps->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2104, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", (const char *)&queryFormat, "BG_ContextMount_IsActive( ps )") )
      __debugbreak();
    if ( !pml->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2105, ASSERT_TYPE_ASSERT, "(pml->mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml->mountState.isPreviousViewangleValid") )
      __debugbreak();
    v7 = AngleDelta(ps->viewangles.v[1], pml->mountState.previousViewangles.v[1]);
    v8 = DCONST_DVARFLT_mount_bob_rate;
    v9 = COERCE_FLOAT(LODWORD(v7) & _xmm) / pml->frametime;
    if ( !DCONST_DVARFLT_mount_bob_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_bob_rate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    unsignedInt = v8->current.unsignedInt;
    v11 = DCONST_DVARFLT_mount_bob_max_speed;
    if ( !DCONST_DVARFLT_mount_bob_max_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_bob_max_speed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v13 = unsignedInt;
    *(float *)&v13 = *(float *)&unsignedInt * v9;
    _XMM0 = v13;
    __asm { vminss  xmm0, xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
PM_ContextMount_CheckValidMountState
==============
*/
bool PM_ContextMount_CheckValidMountState(const pmove_t *const pm, const pml_t *const pml, MountFailureResult *outResults)
{
  playerState_s *ps; 
  bool IsActive; 
  char v7; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v10; 
  unsigned __int64 buttons; 
  bool v12; 
  unsigned __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  bool v17; 
  float outForward; 
  float outAbove; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  pml_t *pmla; 
  vec3_t outParallel; 
  vec3_t outUp; 
  vec3_t outBelow; 
  vec3_t outNormal; 
  tmat33_t<vec3_t> axis; 
  MountSurfaceProperties mount; 

  pmla = (pml_t *)pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 961, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 961, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 962, ASSERT_TYPE_ASSERT, "( outResults ) != ( nullptr )", "%s != %s\n\t%p, %p", "outResults", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  IsActive = BG_ContextMount_IsActive(ps);
  v7 = ps->mountState.flags & 1;
  if ( IsActive )
  {
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v10 = BG_UsingAlternate(ps);
    buttons = pm->cmd.buttons;
    v12 = v10;
    if ( (buttons & 0x200) == 0 )
    {
      *(_WORD *)&outResults->cancelToLower = 0;
      strncpy(outResults->failReason, "player released ADS", 0x80ui64);
      return 0;
    }
    v14 = buttons & ~pm->oldcmd.buttons;
    v15 = (unsigned __int16)buttons & (unsigned __int16)~LOWORD(pm->oldcmd.buttons) & 0x5C0;
    if ( (pm->cmd.stateFlags & 8) != 0 )
      v16 = (buttons & 0x80000000000i64) == 0;
    else
      v16 = v14 & 0x80000000000i64;
    if ( v16 || v15 )
    {
      outResults->cancelToLower = (v14 & 0x4C0) != 0;
      outResults->putOnCooldown = (v14 & 0x4C0) != 0;
      strncpy(outResults->failReason, "player button press cancelled mount", 0x80ui64);
      return 0;
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)ps->mountState.surface.type, p_weapon, v10, &outForward, &outAbove);
    if ( outForward <= 0.0 || outAbove <= 0.0 )
    {
      strncpy(outResults->failReason, "weapon has invalid edgeToEyeDistance", 0x80ui64);
      return 0;
    }
    if ( v7 )
    {
      BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v12, &outEnterDurationMs, &outExitDurationMs);
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      AnglesToAxis(&ps->viewangles, &axis);
      MountSurfaceProperties::Initialize(&mount, pm->m_bgHandler, &ps->mountState.surface);
      BG_ContextMount_CalcMountVectors(pm->m_bgHandler, &mount, &outNormal, &outParallel, &outBelow);
      if ( BG_ContextMount_UpdatePlayerPullingAway(pm, pmla, &outUp, &outParallel, &outNormal, &outBelow) )
      {
        outResults->putOnCooldown = 1;
        strncpy(outResults->failReason, "player pulled back from edge", 0x80ui64);
        return 0;
      }
      if ( (ps->mountState.surface.type != MOUNT_TYPE_TOP || !BG_IsTopMountYawClamped(p_weapon, v12)) && BG_ContextMount_IsViewangleTooShallow((const ContextMountType)ps->mountState.surface.type, &axis, &outUp, &outParallel) )
      {
        outResults->putOnCooldown = 1;
        strncpy(outResults->failReason, "view vector nearly parallel to mount edge", 0x80ui64);
        return 0;
      }
      v17 = ps->weapCommon.fWeaponPosFrac < 1.0 && !ps->weapCommon.fWeaponPosFracIn;
      if ( outEnterDurationMs + gracePeriodMs + ps->mountState.startTime < pm->cmd.serverTime && v17 )
      {
        *(_WORD *)&outResults->cancelToLower = 0;
        strncpy(outResults->failReason, "player not in ADS", 0x80ui64);
        return 0;
      }
    }
  }
  if ( PM_CalcIsAdsAllowed(pm) )
    return BG_ContextMount_IsValidMountState(pm->weaponMap, ps, outResults);
  strncpy(outResults->failReason, "player is not permitted to enter ADS in current state", 0x80ui64);
  return 0;
}

/*
==============
PM_ContextMount_ClampViewAngles
==============
*/
char PM_ContextMount_ClampViewAngles(const MountPlayerProperties *player, const MountSurfaceDetailedProperties *mountProperties, pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v7; 
  float integer; 
  const dvar_t *v9; 
  vec2_t maxClampDeg; 
  float serverTime; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  vec3_t worldAnglesCenter; 
  viewClampState clamp; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 143, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 143, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_GetMountEnterExitDuration((const ContextMountType)mountProperties->mount.type, &player->weapon, player->isAlternate, &outEnterDurationMs, &outExitDurationMs);
  v7 = DCONST_DVARINT_mount_viewclamp_accel_duration_ms;
  if ( !DCONST_DVARINT_mount_viewclamp_accel_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_viewclamp_accel_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = (float)v7->current.integer;
  v9 = DCONST_DVARINT_mount_viewclamp_decel_duration_ms;
  clamp.accelTime = integer * 0.001;
  if ( !DCONST_DVARINT_mount_viewclamp_decel_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_viewclamp_decel_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  clamp.decelTime = (float)v9->current.integer * 0.001;
  clamp.totalTime = (float)outEnterDurationMs * 0.001;
  clamp.startTime = (float)ps->mountState.startTime * 0.001;
  clamp.min.start = ps->mountState.startViewAngles;
  clamp.max.start = ps->mountState.startViewAngles;
  clamp.min.goal = mountProperties->minClampDeg;
  maxClampDeg = mountProperties->maxClampDeg;
  clamp.resistMin.start.v[0] = 0.0;
  clamp.resistMin.start.v[1] = 0.0;
  clamp.resistMax.start.v[0] = 0.0;
  clamp.resistMax.start.v[1] = 0.0;
  worldAnglesCenter.v[0] = 0.0;
  worldAnglesCenter.v[1] = 0.0;
  worldAnglesCenter.v[2] = 0.0;
  clamp.max.goal = maxClampDeg;
  serverTime = (float)pm->cmd.serverTime;
  clamp.resistMin.goal = mountProperties->minResistDeg;
  clamp.resistMax.goal = mountProperties->maxResistDeg;
  BG_UpdateViewAngleClamp(serverTime * 0.001, &worldAnglesCenter, &clamp, ps);
  return 1;
}

/*
==============
PM_ContextMount_Debug
==============
*/
void PM_ContextMount_Debug(const pmove_t *const pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v6; 
  __int128 v7; 
  __int64 v8; 
  vec3_t vec; 
  vec3_t forward; 
  int v13[4]; 
  int v14[4]; 
  int v15[4]; 
  Bounds bounds; 
  vec3_t outMountPoint; 
  vec3_t outUp; 
  WorldUpReferenceFrame v19; 
  MountSurfaceProperties mount; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 696, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 696, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    if ( ps->mountState.mountFraction > 0.0 )
    {
      MountSurfaceProperties::Initialize(&mount, pm->m_bgHandler, &ps->mountState.surface);
      BG_ContextMount_CalcMountPoint(pm->m_bgHandler, &mount, &outMountPoint);
      ((void (__fastcall *)(const BgHandler *, vec3_t *, void (__fastcall *)(BgHandler *, const vec3_t *, float, const vec4_t *, int, int), vec4_t *, int, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &outMountPoint, pm->m_bgHandler->DebugSphere, &colorRed, depthTest_2, 0);
    }
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v6 = BG_UsingAlternate(ps);
    v7 = *(unsigned __int64 *)ps->origin.v;
    vec = ps->origin;
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v19, ps, pm->m_bgHandler);
    WorldUpReferenceFrame::GetUpVector(&v19, &outUp);
    WorldUpReferenceFrame::AddUpContribution(&v19, ps->viewHeightCurrent, &vec);
    BG_ContextMount_GetEyePoint(pm->m_bgHandler, &ps->mountState, &outUp, p_weapon, v6, &vec);
    if ( dword_148A5F73C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_148A5F73C);
      if ( dword_148A5F73C == -1 )
      {
        *(double *)&v7 = BG_ContextMount_CalcCameraMinDistToMountBrush();
        _XMM6 = v7;
        BG_ContextMount_CalcCameraMinDistToPlayerClip();
        __asm { vmaxss  xmm1, xmm6, xmm0 }
        eyeRadius = *(float *)&_XMM1;
        j__Init_thread_footer(&dword_148A5F73C);
      }
    }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, BgHandler_vtbl *, vec4_t *, int, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &vec, pm->m_bgHandler->__vftable, &colorOrange, depthTest_2, 0);
    AngleVectors(&ps->viewangles, &forward, NULL, NULL);
    *(float *)v13 = (float)(24.0 * forward.v[0]) + vec.v[0];
    *(float *)&v13[1] = (float)(24.0 * forward.v[1]) + vec.v[1];
    *(float *)&v13[2] = (float)(24.0 * forward.v[2]) + vec.v[2];
    pm->m_bgHandler->DebugLine((BgHandler *)pm->m_bgHandler, &vec, (const vec3_t *)v13, &colorOrange, depthTest_2, 0);
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &ps->origin, v8, &colorBlue, 0, 0);
    bounds = *pm->bounds;
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    *(float *)v15 = bounds.midPoint.v[0] + ps->origin.v[0];
    *(float *)&v15[1] = bounds.midPoint.v[1] + ps->origin.v[1];
    *(float *)&v15[2] = (float)(bounds.midPoint.v[2] + ps->origin.v[2]) + bounds.halfSize.v[2];
    *(float *)v14 = bounds.midPoint.v[0] + ps->origin.v[0];
    *(float *)&v14[1] = bounds.midPoint.v[1] + ps->origin.v[1];
    *(float *)&v14[2] = (float)(bounds.midPoint.v[2] + ps->origin.v[2]) - bounds.halfSize.v[2];
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, v15, v14);
  }
}

/*
==============
PM_ContextMount_Finalize
==============
*/
void PM_ContextMount_Finalize(pmove_t *const pm, const pml_t *const pml, ContextMountType iconType, vec3_t *iconPos, const EdgeId *iconEdge, bool foundValidEdge, bool isEarlyOut)
{
  playerState_s *ps; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v13; 
  int serverTime; 
  double v15; 
  int flags; 
  unsigned int v17; 
  playerState_s *v18; 
  const dvar_t *v19; 
  playerState_s *v20; 
  bool IsActive; 
  bool v22; 
  bool v23; 
  bool v24; 
  bool v25; 
  bool updated; 
  bool v27; 
  bool v28; 
  int v29; 
  unsigned int v30; 
  playerState_s *v31; 
  vec3_t *v32; 
  EdgeId *mountHint; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *v35; 
  int v36; 
  ContextMountIconType v37; 
  int v38; 
  double v39; 
  float v40; 
  double v41; 
  __int64 mountEndTime; 
  __int64 mountEndTimea; 
  __int64 synchronizeWithMount; 
  bool v45; 
  bool v46; 
  int outExitDurationMs; 
  int outEnterDurationMs; 
  int exitDurationMs; 
  int enterDurationMs; 
  vec3_t *in1; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 

  in1 = iconPos;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_weapon = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
    p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v13 = BG_UsingAlternate(ps);
  serverTime = pm->cmd.serverTime;
  v45 = v13;
  if ( ps->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v13, &outEnterDurationMs, &outExitDurationMs);
    v15 = BG_ContextMount_CalculateMountFraction((const ContextMountType)ps->mountState.surface.type, outEnterDurationMs, outExitDurationMs, serverTime, ps->mountState.startTime, ps->mountState.endTime);
  }
  else
  {
    v15 = BG_ContextMount_QuantizeFloat01Byte(0.0);
  }
  ps->mountState.mountFraction = *(float *)&v15;
  if ( !BG_ContextMount_IsActive(ps) && ps->mountState.mountFraction <= 0.0 )
    ps->mountState.surface.type = MOUNT_TYPE_NONE;
  if ( !isEarlyOut )
  {
    flags = ps->mountState.flags;
    if ( foundValidEdge )
      v17 = flags | 0x20;
    else
      v17 = flags & 0xFFFFFFDF;
    ps->mountState.flags = v17;
  }
  PM_GameInterface_ContextMount_Finalize(pm, pml);
  v18 = pm->ps;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (v18->mountState.flags & 2) != 0 )
  {
    v19 = DCONST_DVARINT_mount_controls_cooldown_duration;
    if ( !DCONST_DVARINT_mount_controls_cooldown_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_controls_cooldown_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( pm->cmd.serverTime > v19->current.integer + v18->mountState.endTime )
      v18->mountState.flags &= ~2u;
  }
  v20 = pm->ps;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 664, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  IsActive = BG_ContextMount_IsActive(v20);
  v22 = BG_PlayerDualWielding(v20) != 0;
  v46 = v22;
  if ( !IsActive )
  {
    if ( (v20->mountState.flags & 4) == 0 )
      goto LABEL_50;
    goto LABEL_35;
  }
  if ( v20->mountState.surface.type != MOUNT_TYPE_TOP )
  {
LABEL_35:
    v23 = 0;
    goto LABEL_36;
  }
  v23 = 1;
LABEL_36:
  v24 = IsActive && v20->mountState.surface.type == MOUNT_TYPE_LEFT;
  v25 = IsActive && v20->mountState.surface.type == MOUNT_TYPE_RIGHT;
  updated = PM_ContextMount_UpdateGesture(pm, p_weapon, v45, v22, v23, GESTUREANIMTYPE_MOUNT_TOP, 1);
  v27 = PM_ContextMount_UpdateGesture(pm, p_weapon, v45, v46, v24, GESTUREANIMTYPE_MOUNT_LEFT, 1);
  v13 = v45;
  v28 = ((v27 || updated) | PM_ContextMount_UpdateGesture(pm, p_weapon, v45, v46, v25, GESTUREANIMTYPE_MOUNT_RIGHT, 1)) == 0;
  v29 = v20->mountState.flags;
  if ( v28 )
    v30 = v29 & 0xFFFFFFFB;
  else
    v30 = v29 | 4;
  v20->mountState.flags = v30;
LABEL_50:
  if ( !isEarlyOut )
  {
    v31 = pm->ps;
    if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 219, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( pm->mountHint )
    {
      if ( (unsigned int)iconType >= COUNT_MOUNT_TYPE )
      {
        LODWORD(synchronizeWithMount) = 4;
        LODWORD(mountEndTime) = iconType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 226, ASSERT_TYPE_ASSERT, "(unsigned)( mountType ) < (unsigned)( COUNT_MOUNT_TYPE )", "mountType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", mountEndTime, synchronizeWithMount) )
          __debugbreak();
      }
      v32 = in1;
      pm->mountHint->type = iconType;
      pm->mountHint->origin = *v32;
      mountHint = (EdgeId *)pm->mountHint;
      if ( iconType )
      {
        mountHint[4] = *iconEdge;
        m_bgHandler = pm->m_bgHandler;
        v35 = pm->weaponMap;
        AnglesToAxis(&v31->viewangles, (tmat33_t<vec3_t> *)&axis);
        BG_GetPlayerEyePosition(v35, v31, &axis.m[3], m_bgHandler);
        MatrixTransposeTransformVector43(in1, &axis, &out);
        v36 = 0;
        if ( iconType == MOUNT_TYPE_TOP )
        {
          LOBYTE(v36) = out.v[2] < 0.0;
          v37 = v36 + 1;
        }
        else
        {
          LOBYTE(v36) = out.v[1] >= 0.0;
          v37 = v36 + 3;
        }
        pm->mountHint->reticleIconType = v37;
        pm->mountHint->commandTime = v31->commandTime;
      }
      else
      {
        mountHint->m_entityIndex = 0;
      }
    }
  }
  PM_ContextMount_Debug(pm);
  BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v13, &enterDurationMs, &exitDurationMs);
  v38 = pm->cmd.serverTime;
  if ( ps->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v13, &outExitDurationMs, &outEnterDurationMs);
    v39 = BG_ContextMount_CalculateMountFraction((const ContextMountType)ps->mountState.surface.type, outExitDurationMs, outEnterDurationMs, v38, ps->mountState.startTime, ps->mountState.endTime);
  }
  else
  {
    v39 = BG_ContextMount_QuantizeFloat01Byte(0.0);
  }
  v40 = *(float *)&v39;
  v41 = BG_ContextMount_CalculateMountFraction((const ContextMountType)ps->mountState.surface.type, enterDurationMs, exitDurationMs, ps->serverTime, ps->mountState.startTime, ps->mountState.endTime);
  if ( v40 != *(float *)&v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 811, ASSERT_TYPE_ASSERT, "( mountFractionPs ) == ( mountFraction )", "%s == %s\n\t%g, %g", "mountFractionPs", "mountFraction", v40, *(float *)&v41) )
    __debugbreak();
  if ( *(float *)&v41 > 0.0 && ps->mountState.surface.type == MOUNT_TYPE_NONE )
  {
    LODWORD(mountEndTimea) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 816, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Mount type (%i) is MOUNT_TYPE_NONE but mount fraction (%f) is nonzero.", mountEndTimea, *(float *)&v41) )
      __debugbreak();
  }
}

/*
==============
PM_ContextMount_GetMoverTransform
==============
*/
char PM_ContextMount_GetMoverTransform(const BgHandler *const handler, const __int16 entId, tmat43_t<vec3_t> *outMoverToWorld)
{
  __int64 v7; 
  __int64 v8; 
  vec3_t origin; 
  vec3_t angles; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1066, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( entId == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1067, ASSERT_TYPE_ASSERT, "( entId ) != ( ENTITYNUM_NONE )", "%s != %s\n\t%i, %i", "entId", "ENTITYNUM_NONE", 2047, 2047) )
    __debugbreak();
  if ( (unsigned __int16)entId >= 0x800u )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = entId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1068, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !handler->GetEntityOrigin((BgHandler *)handler, entId, &origin) || !handler->GetEntityAngles((BgHandler *)handler, entId, &angles) )
    return 0;
  AnglesAndOriginToMatrix43(&angles, &origin, outMoverToWorld);
  return 1;
}

/*
==============
PM_ContextMount_SetEdgeState
==============
*/
void PM_ContextMount_SetEdgeState(pmove_t *const pm, pml_t *const pml, const MountSurfaceProperties *mountProperties, const bool justStartedMount, ContextMountState *const inOutMountState)
{
  playerState_s *ps; 
  double v10; 
  int v11; 
  double v12; 
  float v15; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 248, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 249, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !inOutMountState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 250, ASSERT_TYPE_ASSERT, "(inOutMountState)", (const char *)&queryFormat, "inOutMountState") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 251, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 251, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( mountProperties->type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 253, ASSERT_TYPE_ASSERT, "( mountProperties.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountProperties.type", "MOUNT_TYPE_NONE", 0, 0i64) )
    __debugbreak();
  *(__m256i *)&inOutMountState->surface.type = *(__m256i *)&mountProperties->type;
  *(_OWORD *)&inOutMountState->surface.transitionType = *(_OWORD *)&mountProperties->transitionType;
  if ( justStartedMount )
  {
    inOutMountState->startTime = pm->cmd.serverTime;
    inOutMountState->flags = 0;
    *(_QWORD *)&inOutMountState->pullbackStartTime = 0i64;
    v10 = I_fclamp(ps->viewHeightCurrent, -90.0, 90.0);
    v11 = MSG_PackSignedFloat(*(float *)&v10, 90.0, 0xBu);
    v12 = MSG_UnpackSignedFloat(v11, 90.0, 0xBu);
    inOutMountState->mountViewHeight = *(float *)&v12;
    if ( PM_GetEffectiveStance(ps) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) )
      inOutMountState->flags |= 0x10u;
    inOutMountState->startViewAngles = *(vec2_t *)ps->viewangles.v;
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v15 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0];
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    inOutMountState->startViewAngles.v[0] = (float)((float)(v15 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm0, xmm8, xmm3, 1
      vroundss xmm3, xmm8, xmm2, 1
    }
    inOutMountState->startViewAngles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    BG_AddPredictableEventToPlayerstate(EV_MOUNT_ENTER, inOutMountState->surface.type, pm->cmd.serverTime, pm->weaponMap, pm->ps);
  }
}

/*
==============
PM_ContextMount_TryMaintainEdge
==============
*/
char PM_ContextMount_TryMaintainEdge(pmove_t *const pm, pml_t *const pml, MountFailureResult *outResults)
{
  playerState_s *ps; 
  const Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties outSurfaceDetail; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1121, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1121, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1122, ASSERT_TYPE_ASSERT, "( outResults ) != ( nullptr )", "%s != %s\n\t%p, %p", "outResults", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  MountPlayerProperties::MountPlayerProperties(&player);
  *(_QWORD *)player.origin.v = *(_QWORD *)ps->origin.v;
  player.origin.v[2] = ps->origin.v[2];
  MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
  player.eyeOrigin = ps->mountState.eyePoint;
  AnglesToAxis(&ps->viewangles, &player.eyeBasis);
  p_weapon = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
    p_weapon = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  player.weapon = *p_weapon;
  player.isAlternate = BG_UsingAlternate(ps);
  player.handler = pm->m_bgHandler;
  player.ps = ps;
  AnglesToAxis(&pml->mountState.previousViewangles, &axis);
  MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&outSurfaceDetail);
  if ( PM_ContextMount_FindMountEdge_Maintain(&player, pml, &axis, &outSurfaceDetail) )
  {
    if ( outSurfaceDetail.mount.type )
    {
      PM_ContextMount_SetEdgeState(pm, pml, &outSurfaceDetail.mount, 0, &ps->mountState);
      if ( PM_ContextMount_ClampViewAngles(&player, &outSurfaceDetail, pm) )
      {
        PM_UpdateViewAngles_RangeLimited(ps, ps->viewangles.v[1]);
        if ( PM_ContextMount_CalcMountEyePoint(&outSurfaceDetail, &player, &ps->mountState.eyePoint) )
        {
          PM_ContextMount_UpdateMoverEyePoint(&player, &ps->mountState);
          return 1;
        }
        else
        {
          strncpy(outResults->failReason, "clamped eye parallel player up", 0x80ui64);
          return 0;
        }
      }
      else
      {
        *(_WORD *)&outResults->cancelToLower = 0;
        strncpy(outResults->failReason, "player exceeded view clamp range", 0x80ui64);
        return 0;
      }
    }
    else
    {
      *(_WORD *)&outResults->cancelToLower = 256;
      strncpy(outResults->failReason, "unexpected failure to maintain edge", 0x80ui64);
      return 0;
    }
  }
  else
  {
    *(_WORD *)&outResults->cancelToLower = 256;
    strncpy(outResults->failReason, "could not maintain mount on new edge", 0x80ui64);
    return 0;
  }
}

/*
==============
PM_ContextMount_TryMountEdge
==============
*/
char PM_ContextMount_TryMountEdge(pmove_t *const pm, pml_t *const pml, ContextMountType *outIconType, vec3_t *outIconPos, EdgeId *outIconEdge, bool *outFoundEdge)
{
  playerState_s *ps; 
  const Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  int *p_weaponState; 
  const BgHandler *m_bgHandler; 
  float viewHeightCurrent; 
  bool MountEdge_Initial; 
  bool v15; 
  PlayerHandIndex v16; 
  int WeaponHand; 
  __int64 v18; 
  __int64 isQuickMelee; 
  __int64 applyPendingDamage; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties outSurfaceDetail; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1216, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1216, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  MountPlayerProperties::MountPlayerProperties(&player);
  MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&outSurfaceDetail);
  p_weapon = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  p_weaponState = &ps->weapState[0].weaponState;
  if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
    p_weapon = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  m_bgHandler = pm->m_bgHandler;
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_ContextMount_FindMountEdge");
  *(_QWORD *)player.origin.v = *(_QWORD *)ps->origin.v;
  player.origin.v[2] = ps->origin.v[2];
  MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
  viewHeightCurrent = ps->viewHeightCurrent;
  player.eyeOrigin.v[0] = (float)(viewHeightCurrent * player.worldBasis.m[2].v[0]) + ps->origin.v[0];
  player.eyeOrigin.v[1] = (float)(viewHeightCurrent * player.worldBasis.m[2].v[1]) + ps->origin.v[1];
  player.eyeOrigin.v[2] = (float)(viewHeightCurrent * player.worldBasis.m[2].v[2]) + ps->origin.v[2];
  AnglesToAxis(&ps->viewangles, &player.eyeBasis);
  player.weapon = *p_weapon;
  player.isAlternate = BG_UsingAlternate(ps);
  player.handler = m_bgHandler;
  player.ps = ps;
  MountEdge_Initial = PM_ContextMount_FindMountEdge_Initial(&player, &outSurfaceDetail);
  Sys_ProfEndNamedEvent();
  *outFoundEdge = MountEdge_Initial;
  if ( MountEdge_Initial )
  {
    BG_ContextMount_CalcMountPoint(pm->m_bgHandler, &outSurfaceDetail.mount, outIconPos);
    *outIconType = outSurfaceDetail.mount.type;
    *outIconEdge = outSurfaceDetail.mount.id;
    MountEdge_Initial = *outFoundEdge;
  }
  PM_GameInterface_ContextMount_TryMountEdge(pm, pml, &outSurfaceDetail.mount, MountEdge_Initial, &ps->mountState);
  v15 = PM_ContextMount_ButtonEnterMount(pm);
  if ( !*outFoundEdge || !v15 )
    return 0;
  v16 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, ps);
  if ( WeaponHand >= 0 )
  {
    v18 = WeaponHand + 1i64;
    do
    {
      if ( *p_weaponState == 24 )
        PM_Weapon_MeleeEnd(pm, pml, 0, v16, 0, 0, 0);
      ++v16;
      p_weaponState += 20;
      --v18;
    }
    while ( v18 );
  }
  if ( PM_GetEffectiveStance(ps) == PM_EFF_STANCE_PRONE )
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 0, pm->cmd.serverTime, pm->weaponMap, ps);
  PM_ContextMount_SetEdgeState(pm, pml, &outSurfaceDetail.mount, 1, &ps->mountState);
  if ( !PM_ContextMount_CalcMountEyePoint(&outSurfaceDetail, &player, &ps->mountState.eyePoint) || !PM_ContextMount_ClampViewAngles(&player, &outSurfaceDetail, pm) )
    return 0;
  PM_ContextMount_UpdateMoverEyePoint(&player, &ps->mountState);
  if ( *outIconType >= (unsigned int)COUNT_MOUNT_TYPE )
  {
    LODWORD(applyPendingDamage) = 4;
    SLODWORD(isQuickMelee) = *outIconType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1269, ASSERT_TYPE_ASSERT, "(unsigned)( outIconType ) < (unsigned)( COUNT_MOUNT_TYPE )", "outIconType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", isQuickMelee, applyPendingDamage) )
      __debugbreak();
  }
  return 1;
}

/*
==============
PM_ContextMount_UpdateGesture
==============
*/
bool PM_ContextMount_UpdateGesture(pmove_t *const pm, const Weapon *weapon, bool isAlternate, bool isDualWielding, bool shouldBePlaying, gestureAnimType_t gestureType, bool synchronizeWithMount)
{
  playerState_s *ps; 
  const Gesture *Gesture; 
  const Gesture *v13; 
  unsigned int IndexFromGesture; 
  bool IsPlayingByIndex; 
  bool IsStoppingByIndex; 
  double v17; 
  int v18; 
  GestureAnimationSettings *AnimationSettings; 
  int mountContactTime; 
  int v21; 
  int v22; 
  bool v23; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  GesturePlayRequest request; 
  GesturePlayRequest result; 
  unsigned int outSlot; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 589, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 589, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Gesture = BG_Suit_GetGesture(ps, WEAPON_HAND_DEFAULT, weapon, isAlternate, isDualWielding, gestureType);
  v13 = Gesture;
  if ( Gesture )
  {
    IndexFromGesture = BG_Gesture_GetIndexFromGesture(Gesture);
    if ( IndexFromGesture == 256 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 598, ASSERT_TYPE_ASSERT, "(gestureIdx != (1<<8))", (const char *)&queryFormat, "gestureIdx != GESTURE_INVALID_INDEX") )
      __debugbreak();
    outSlot = 2;
    IsPlayingByIndex = BG_Gesture_IsPlayingByIndex(ps, IndexFromGesture, &outSlot);
    IsStoppingByIndex = BG_Gesture_IsStoppingByIndex(ps, IndexFromGesture);
    if ( shouldBePlaying )
    {
      if ( !IsPlayingByIndex || IsStoppingByIndex )
      {
        request = *BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromGesture, pm->cmd.serverTime);
        if ( synchronizeWithMount )
        {
          BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, weapon, isAlternate, &outEnterDurationMs, &outExitDurationMs);
          v17 = I_fclamp(1.0 - ps->mountState.mountFraction, 0.0, 1.0);
          v18 = (int)(float)(*(float *)&v17 * (float)outEnterDurationMs);
          AnimationSettings = BG_Gesture_GetAnimationSettings(v13);
          if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 620, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
            __debugbreak();
          mountContactTime = AnimationSettings->mountContactTime;
          v21 = 0;
          if ( mountContactTime - v18 > 0 )
            v21 = mountContactTime - v18;
          request.startTime = v21;
          request.slotBlendDuration = blendDurationMs;
          request.slotBlend = v21 > 0;
          if ( mountContactTime <= v21 )
          {
            *(_QWORD *)&request.startTime = 0i64;
            request.slotBlend = 0;
          }
        }
        LOBYTE(Gesture) = IsPlayingByIndex | BG_GesturePriority_TryPlay(&request, NULL, NULL);
        return (char)Gesture;
      }
    }
    else if ( IsPlayingByIndex && !IsStoppingByIndex )
    {
      v22 = 0;
      if ( synchronizeWithMount && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_mount_anim_sync_out, "mount_anim_sync_out") )
      {
        v23 = 1;
        BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, weapon, isAlternate, &outExitDurationMs, &outEnterDurationMs);
        v22 = (int)(float)((float)outEnterDurationMs * ps->mountState.mountFraction);
      }
      else
      {
        v23 = 0;
      }
      BG_Gesture_StopBySlot(ps, outSlot, pm->cmd.serverTime, v23, v22, 0);
    }
    LOBYTE(Gesture) = IsPlayingByIndex;
  }
  return (char)Gesture;
}

/*
==============
PM_ContextMount_UpdateMove
==============
*/
void PM_ContextMount_UpdateMove(pmove_t *const pm, pml_t *const pml)
{
  playerState_s *ps; 
  int startTime; 
  const SuitDef *SuitDef; 
  float v7; 
  __int128 v8; 
  __int128 v13; 
  const dvar_t *v15; 
  __int64 v16; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v19; 
  int v20; 
  double v21; 
  playerState_s *v22; 
  const dvar_t *v23; 
  __int64 v24; 
  ContextMountType type; 
  PlayerAnimScriptMoveType v26; 
  char *fmt; 
  vec3_t *outParallel; 
  int outEnterDurationMs; 
  int outExitDurationMs[2]; 
  __int64 v31; 
  vec3_t point; 
  vec3_t outProjectedPoint; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  Bounds bounds; 
  vec3_t outUp; 
  vec3_t outNormal; 
  vec3_t outEdgePoint; 
  vec3_t outBelow; 
  vec3_t v45; 

  v31 = -2i64;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1455, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1456, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1456, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 80, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  startTime = ps->mountState.startTime;
  if ( (!startTime || startTime <= ps->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1457, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", (const char *)&queryFormat, "BG_ContextMount_IsActive( ps )") )
    __debugbreak();
  if ( !pml->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1460, ASSERT_TYPE_ASSERT, "(pml->mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml->mountState.isPreviousViewangleValid") )
    __debugbreak();
  if ( !pm->isExtrapolation && !pml->mountState.isStateUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1462, ASSERT_TYPE_ASSERT, "(pm->isExtrapolation || pml->mountState.isStateUpdated)", (const char *)&queryFormat, "pm->isExtrapolation || pml->mountState.isStateUpdated") )
    __debugbreak();
  pml->mountState.isMoveUpdated = 1;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_UpdateMove");
  WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
  Edge_CalculateVectors(pm->m_bgHandler, ps->mountState.surface.id, ps->mountState.surface.fraction, ps->mountState.surface.normalFaceIndex, &outNormal, &v45, &outBelow);
  Edge_CalculatePoint(pm->m_bgHandler, ps->mountState.surface.id, ps->mountState.surface.fraction, &outEdgePoint);
  SuitDef = BG_GetSuitDef(ps->suitIndex);
  v7 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)(outNormal.v[0] * outUp.v[0]) + (float)(outNormal.v[1] * outUp.v[1])) + (float)(outNormal.v[2] * outUp.v[2])) & _xmm) - 1.0) & _xmm) < 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1495, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeNormalVec, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeNormalVec, entityUp )") )
    __debugbreak();
  ProjectPointOnPlane(&outNormal, &vec3_origin, &outUp, &outProjectedPoint);
  v8 = LODWORD(outProjectedPoint.v[0]);
  *(float *)&v8 = fsqrt((float)((float)(*(float *)&v8 * *(float *)&v8) + (float)(outProjectedPoint.v[1] * outProjectedPoint.v[1])) + (float)(outProjectedPoint.v[2] * outProjectedPoint.v[2]));
  _XMM3 = v8;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
  }
  outEnterDurationMs = _XMM1;
  outProjectedPoint.v[0] = outProjectedPoint.v[0] * (float)(1.0 / *(float *)&_XMM1);
  outProjectedPoint.v[1] = outProjectedPoint.v[1] * (float)(1.0 / *(float *)&_XMM1);
  outProjectedPoint.v[2] = outProjectedPoint.v[2] * (float)(1.0 / *(float *)&_XMM1);
  ProjectPointOnPlane(&ps->mountState.eyePoint, &outEdgePoint, &outProjectedPoint, &point);
  fsqrt((float)((float)((float)(point.v[1] - ps->mountState.eyePoint.v[1]) * (float)(point.v[1] - ps->mountState.eyePoint.v[1])) + (float)((float)(point.v[0] - ps->mountState.eyePoint.v[0]) * (float)(point.v[0] - ps->mountState.eyePoint.v[0]))) + (float)((float)(point.v[2] - ps->mountState.eyePoint.v[2]) * (float)(point.v[2] - ps->mountState.eyePoint.v[2])));
  ProjectPointOnPlane(&point, &ps->origin, &outUp, &point);
  v13 = 0i64;
  *(float *)&v13 = (float)SuitDef->bounds_radius;
  _XMM0 = v13;
  __asm { vmaxss  xmm4, xmm0, xmm6 }
  point.v[0] = (float)(*(float *)&_XMM4 * outProjectedPoint.v[0]) + point.v[0];
  point.v[1] = (float)(*(float *)&_XMM4 * outProjectedPoint.v[1]) + point.v[1];
  point.v[2] = (float)(*(float *)&_XMM4 * outProjectedPoint.v[2]) + point.v[2];
  v15 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &point, v16, &colorGreen, 0, 0);
    bounds = *pm->bounds;
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    v37 = bounds.midPoint.v[0] + point.v[0];
    v38 = bounds.midPoint.v[1] + point.v[1];
    v39 = (float)(bounds.midPoint.v[2] + point.v[2]) + bounds.halfSize.v[2];
    v34 = bounds.midPoint.v[0] + point.v[0];
    v35 = bounds.midPoint.v[1] + point.v[1];
    v36 = (float)(bounds.midPoint.v[2] + point.v[2]) - bounds.halfSize.v[2];
    fmt = (char *)&colorGreen;
    ((void (__fastcall *)(const BgHandler *, float *, float *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, &v37, &v34);
  }
  if ( (ps->mountState.flags & 1) != 0 )
  {
    BG_ContextMount_MoveToPoint(pm, pml, max2DSpeed, &point);
  }
  else
  {
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, ps);
    v19 = BG_UsingAlternate(ps);
    BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v19, &outEnterDurationMs, outExitDurationMs);
    v20 = outEnterDurationMs - (pm->cmd.serverTime - ps->mountState.startTime);
    if ( v20 < 0 )
      v20 = 0;
    if ( v20 > 0 )
    {
      v21 = I_fclamp((float)(1000.0 / (float)v20) * pml->frametime, 0.0, 1.0);
      v7 = *(float *)&v21;
    }
    point.v[0] = (float)((float)(point.v[0] - ps->origin.v[0]) * v7) + ps->origin.v[0];
    point.v[1] = (float)((float)(point.v[1] - ps->origin.v[1]) * v7) + ps->origin.v[1];
    point.v[2] = (float)((float)(point.v[2] - ps->origin.v[2]) * v7) + ps->origin.v[2];
    BG_ContextMount_MoveToPoint(pm, pml, max2DSpeed, &point);
    if ( v20 <= 0 )
    {
      ps->mountState.flags |= 1u;
      BG_AddPredictableEventToPlayerstate(EV_MOUNT, ps->mountState.surface.type, pm->cmd.serverTime, pm->weaponMap, ps);
      v22 = pm->ps;
      *(_QWORD *)v22->velocity.v = 0i64;
      v22->velocity.v[2] = 0.0;
    }
  }
  v23 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    LODWORD(fmt) = 0;
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, char *, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &point, v24, &colorCyan, fmt, 0);
    bounds = *pm->bounds;
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    v34 = bounds.midPoint.v[0] + point.v[0];
    v35 = bounds.midPoint.v[1] + point.v[1];
    v36 = (float)(bounds.midPoint.v[2] + point.v[2]) + bounds.halfSize.v[2];
    v37 = bounds.midPoint.v[0] + point.v[0];
    v38 = bounds.midPoint.v[1] + point.v[1];
    v39 = (float)(bounds.midPoint.v[2] + point.v[2]) - bounds.halfSize.v[2];
    ((void (__fastcall *)(const BgHandler *, float *, float *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, &v34, &v37);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    BG_UpdateMovementDir(pm, pml, 0);
    type = ps->mountState.surface.type;
    if ( type )
    {
      switch ( type )
      {
        case MOUNT_TYPE_TOP:
          v26 = ANIM_MT_MOUNTED_TOP;
          break;
        case MOUNT_TYPE_LEFT:
          v26 = ANIM_MT_MOUNTED_LEFT;
          break;
        case MOUNT_TYPE_RIGHT:
          v26 = ANIM_MT_MOUNTED_RIGHT;
          break;
        default:
          LODWORD(outParallel) = ps->mountState.surface.type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1605, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid mount type %d", outParallel) )
            __debugbreak();
          goto LABEL_64;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, ps, AISTATE_COMBAT, v26, 0, 0);
    }
  }
LABEL_64:
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ContextMount_UpdateMoverEyePoint
==============
*/
void PM_ContextMount_UpdateMoverEyePoint(const MountPlayerProperties *player, ContextMountState *mountState)
{
  const dvar_t *v4; 
  __int16 v5; 
  tmat43_t<vec3_t> outMoverToWorld; 
  tmat43_t<vec3_t> out; 

  if ( !mountState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1089, ASSERT_TYPE_ASSERT, "(mountState)", (const char *)&queryFormat, "mountState") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
    goto LABEL_12;
  v4 = DVARBOOL_killswitch_mount_mover_fix_enabled;
  if ( !DVARBOOL_killswitch_mount_mover_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mount_mover_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && BGMovingPlatformPS::IsOnMovingPlatform(&player->ps->movingPlatforms) && (v5 = truncate_cast<short,int>(player->ps->movingPlatforms.m_movingPlatformEntity), PM_ContextMount_GetMoverTransform(player->handler, v5, &outMoverToWorld)) )
  {
    MatrixInverseOrthogonal43(&outMoverToWorld, &out);
    mountState->flags |= 0x40u;
    mountState->moverId = truncate_cast<short,int>(player->ps->movingPlatforms.m_movingPlatformEntity);
    MatrixTransformVector43(&mountState->eyePoint, &out, &mountState->eyePointMover);
  }
  else
  {
LABEL_12:
    mountState->flags &= ~0x40u;
  }
}

/*
==============
PM_ContextMount_UpdateState
==============
*/
void PM_ContextMount_UpdateState(pmove_t *const pm, pml_t *const pml)
{
  playerState_s *ps; 
  ContextMountType v5; 
  bool IsActive; 
  bool v7; 
  const dvar_t *v8; 
  char *debugString; 
  __int64 putMountOnCooldown; 
  bool putMountOnCooldowna; 
  bool outFoundEdge; 
  ContextMountType outIconType; 
  EdgeId outIconEdge; 
  vec3_t v15; 
  __int64 v16; 
  vec3_t outIconPos; 
  MountFailureResult outResults; 

  v16 = -2i64;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1279, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1280, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1280, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( pml->mountState.isMoveUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1283, ASSERT_TYPE_ASSERT, "(!pml->mountState.isMoveUpdated)", (const char *)&queryFormat, "!pml->mountState.isMoveUpdated") )
    __debugbreak();
  pml->mountState.isStateUpdated = 1;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_UpdateState");
  v5 = MOUNT_TYPE_NONE;
  outIconType = MOUNT_TYPE_NONE;
  outIconPos = vec3_origin;
  EdgeId::Clear(&outIconEdge);
  IsActive = BG_ContextMount_IsActive(ps);
  v7 = PM_ContextMount_ButtonEnterMount(pm);
  outFoundEdge = 0;
  v8 = DCONST_DVARBOOL_mount_do_edge_query_on_server;
  if ( !DCONST_DVARBOOL_mount_do_edge_query_on_server && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_do_edge_query_on_server") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( (v8->current.enabled && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation || IsActive || v7) && !pm->isBot )
  {
    if ( IsActive )
    {
      *(_WORD *)&outResults.cancelToLower = 0;
      outResults.failReason[0] = 0;
      if ( !PM_ContextMount_CheckValidMountState(pm, pml, &outResults) )
        goto LABEL_29;
      if ( !pml->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1319, ASSERT_TYPE_ASSERT, "(pml->mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml->mountState.isPreviousViewangleValid") )
        __debugbreak();
      if ( !PM_ContextMount_TryMaintainEdge(pm, pml, &outResults) )
LABEL_29:
        BG_ContextMount_Cancel(pm->weaponMap, ps, pm->cmd.serverTime, outResults.cancelToLower, pm->m_bgHandler, outResults.failReason, outResults.putOnCooldown);
    }
    else if ( v7 )
    {
      *(_WORD *)&outResults.cancelToLower = 0;
      outResults.failReason[0] = 0;
      if ( PM_ContextMount_CheckValidMountState(pm, pml, &outResults) )
      {
        PM_ContextMount_TryMountEdge(pm, pml, &outIconType, &outIconPos, &outIconEdge, &outFoundEdge);
        v5 = outIconType;
      }
    }
    if ( (unsigned int)v5 >= COUNT_MOUNT_TYPE )
    {
      LODWORD(putMountOnCooldown) = 4;
      LODWORD(debugString) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1339, ASSERT_TYPE_ASSERT, "(unsigned)( iconType ) < (unsigned)( COUNT_MOUNT_TYPE )", "iconType doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", debugString, putMountOnCooldown) )
        __debugbreak();
    }
    putMountOnCooldowna = 0;
  }
  else
  {
    putMountOnCooldowna = 1;
  }
  v15 = outIconPos;
  PM_ContextMount_Finalize(pm, pml, v5, &v15, &outIconEdge, outFoundEdge, putMountOnCooldowna);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ContextMount_UpdateState_Extrapolation
==============
*/
void PM_ContextMount_UpdateState_Extrapolation(pmove_t *const pm, pml_t *const pml)
{
  playerState_s *ps; 
  const Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v7; 
  int serverTime; 
  double v9; 
  int outEnterDurationMs[2]; 
  __int64 v11; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties inOutDetailMount; 
  MountEdgeProperties edge; 

  v11 = -2i64;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1349, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1350, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1350, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm->isExtrapolation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1351, ASSERT_TYPE_ASSERT, "(pm->isExtrapolation)", (const char *)&queryFormat, "pm->isExtrapolation") )
    __debugbreak();
  if ( pml->mountState.isStateUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1352, ASSERT_TYPE_ASSERT, "(!pml->mountState.isStateUpdated)", (const char *)&queryFormat, "!pml->mountState.isStateUpdated") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_UpdateState_Extrapolation");
  p_weapon = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( ps->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, ps, &pm->cmd.weapon) )
    p_weapon = BG_GetCurrentWeaponForPlayer(weaponMap, ps);
  v7 = BG_UsingAlternate(ps);
  serverTime = pm->cmd.serverTime;
  if ( ps->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, p_weapon, v7, &outEnterDurationMs[1], outEnterDurationMs);
    v9 = BG_ContextMount_CalculateMountFraction((const ContextMountType)ps->mountState.surface.type, outEnterDurationMs[1], outEnterDurationMs[0], serverTime, ps->mountState.startTime, ps->mountState.endTime);
  }
  else
  {
    v9 = BG_ContextMount_QuantizeFloat01Byte(0.0);
  }
  ps->mountState.mountFraction = *(float *)&v9;
  if ( BG_ContextMount_IsActive(ps) )
  {
    MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&inOutDetailMount);
    MountSurfaceProperties::Initialize(&inOutDetailMount.mount, pm->m_bgHandler, &ps->mountState.surface);
    MountPlayerProperties::MountPlayerProperties(&player);
    *(_QWORD *)player.origin.v = *(_QWORD *)ps->origin.v;
    player.origin.v[2] = ps->origin.v[2];
    MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
    player.eyeOrigin = ps->mountState.eyePoint;
    AnglesToAxis(&ps->viewangles, &player.eyeBasis);
    player.weapon = *p_weapon;
    player.isAlternate = BG_UsingAlternate(ps);
    player.handler = pm->m_bgHandler;
    player.ps = ps;
    MountEdgeProperties::MountEdgeProperties(&edge);
    MountEdgeProperties::Initialize(&edge, player.handler, ps->mountState.surface.id, ps->mountState.surface.fraction, ps->mountState.surface.normalFaceIndex, ps->mountState.surface.type);
    if ( PM_ContextMount_CalcFinalClampAngles(&player, &edge, &inOutDetailMount) )
    {
      PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, &player, &ps->mountState.eyePoint);
      PM_ContextMount_UpdateMoverEyePoint(&player, &ps->mountState);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
MountFailureResult::Reset
==============
*/
void MountFailureResult::Reset(MountFailureResult *this)
{
  *(_WORD *)&this->cancelToLower = 0;
  this->failReason[0] = 0;
}

