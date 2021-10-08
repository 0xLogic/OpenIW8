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
  _RDI = inOutCombinedAngles;
  _RSI = outMountAngles;
  _RBX = ws;
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1909, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C4h]
    vmovss  dword ptr [rsi], xmm0
  }
  _RSI->v[1] = _RBX->mountAngles.v[1];
  _RSI->v[2] = _RBX->mountAngles.v[2];
  __asm
  {
    vaddss  xmm0, xmm0, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vaddss  xmm0, xmm1, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vaddss  xmm0, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
BG_ContextMount_ApplyWeaponMovement_Origin
==============
*/
void BG_ContextMount_ApplyWeaponMovement_Origin(const WeaponMovementParams *const params, const WeaponMovementState *const ws, vec3_t *inOutOrigin)
{
  const BgWeaponMap *weaponMap; 
  bool v10; 
  bool v11; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v15; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = inOutOrigin;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1918, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !ws && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1919, ASSERT_TYPE_ASSERT, "(ws)", (const char *)&queryFormat, "ws") )
    __debugbreak();
  _RDI = params->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1922, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = params->weaponMap;
  v10 = weaponMap == NULL;
  if ( !weaponMap )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1925, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+4C0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( !v10 && !BG_HasDualFOVEquipped(weaponMap, _RDI) )
  {
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, _RDI);
    v15 = BG_UsingAlternate(_RDI);
    *(double *)&_XMM0 = BG_GetMountViewmodelOffset(CurrentWeaponForPlayer, v15);
    __asm
    {
      vmulss  xmm1, xmm6, cs:__real@40c00000
      vsubss  xmm2, xmm1, cs:__real@41700000
      vmulss  xmm3, xmm2, xmm6
      vaddss  xmm4, xmm3, cs:__real@41200000
      vmulss  xmm1, xmm6, xmm6
      vmulss  xmm2, xmm1, xmm6
      vmulss  xmm3, xmm4, xmm2
      vmulss  xmm0, xmm0, xmm3
      vaddss  xmm1, xmm0, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm1
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
BG_ContextMount_BBPrintCancel
==============
*/
void BG_ContextMount_BBPrintCancel(int clientIndex, int startTime, int endTime, int type, const vec3_t *pos, const vec3_t *angles)
{
  const dvar_t *v12; 
  __int64 v17; 
  const dvar_t *v19; 
  _BYTE *integer64; 
  const char *v27; 
  bool v28; 
  __int64 v41; 
  __int64 v42; 
  DLogContext context; 
  char buffer[4096]; 

  v12 = DVARBOOL_mount_bb_analytics;
  _RSI = pos;
  _RBP = angles;
  v17 = type;
  if ( !DVARBOOL_mount_bb_analytics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_bb_analytics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    v19 = DVARSTR_package_type;
    if ( !DVARSTR_package_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "package_type") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    integer64 = (_BYTE *)v19->current.integer64;
    if ( integer64 && *integer64 )
    {
      __asm
      {
        vmovaps [rsp+1258h+var_58], xmm6
        vmovaps [rsp+1258h+var_68], xmm7
        vmovaps [rsp+1258h+var_78], xmm8
        vmovaps [rsp+1258h+var_88], xmm9
        vmovaps [rsp+1258h+var_98], xmm10
        vmovaps [rsp+1258h+var_A8], xmm11
      }
      if ( (unsigned int)v17 >= 4 )
      {
        LODWORD(v42) = 4;
        LODWORD(v41) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2182, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( COUNT_MOUNT_TYPE )", "type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm10, dword ptr [rbp+8]
        vmovss  xmm11, dword ptr [rbp+4]
        vmovss  xmm9, dword ptr [rbp+0]
        vmovss  xmm8, dword ptr [rsi+8]
        vmovss  xmm7, dword ptr [rsi+4]
        vmovss  xmm6, dword ptr [rsi]
      }
      v27 = bg_contextMountTypeNames_BB[v17];
      if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
      {
        v28 = DLog_BeginEvent(&context, "mount");
        context.autoEndEvent = 1;
        if ( v28 && DLog_Int32(&context, "start_gametime", startTime) && DLog_Int32(&context, "end_gametime", endTime) && DLog_String(&context, "type", v27, 0) )
        {
          __asm { vmovaps xmm2, xmm6; value }
          if ( DLog_Float32(&context, "x", *(float *)&_XMM2) )
          {
            __asm { vmovaps xmm2, xmm7; value }
            if ( DLog_Float32(&context, "y", *(float *)&_XMM2) )
            {
              __asm { vmovaps xmm2, xmm8; value }
              if ( DLog_Float32(&context, "z", *(float *)&_XMM2) )
              {
                __asm { vmovaps xmm2, xmm9; value }
                if ( DLog_Float32(&context, "pitch", *(float *)&_XMM2) )
                {
                  __asm { vmovaps xmm2, xmm11; value }
                  if ( DLog_Float32(&context, "yaw", *(float *)&_XMM2) )
                  {
                    __asm { vmovaps xmm2, xmm10; value }
                    if ( DLog_Float32(&context, "roll", *(float *)&_XMM2) && DLog_Int32(&context, "clientindex", clientIndex) )
                      DLog_RecordContext(&context);
                  }
                }
              }
            }
          }
        }
      }
      __asm
      {
        vmovaps xmm10, [rsp+1258h+var_98]
        vmovaps xmm9, [rsp+1258h+var_88]
        vmovaps xmm8, [rsp+1258h+var_78]
        vmovaps xmm7, [rsp+1258h+var_68]
        vmovaps xmm6, [rsp+1258h+var_58]
        vmovaps xmm11, [rsp+1258h+var_A8]
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
  int v9; 
  ContextMountIconType v14; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 

  v9 = 0;
  *outIconType = MOUNT_ICON_TYPE_NONE;
  AnglesToAxis(&ps->viewangles, (tmat33_t<vec3_t> *)&axis);
  BG_GetPlayerEyePosition(weaponMap, ps, &axis.m[3], handler);
  MatrixTransposeTransformVector43(mountPoint, &axis, &out);
  __asm { vxorps  xmm1, xmm1, xmm1 }
  if ( mountType == MOUNT_TYPE_TOP )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+out+8]
      vcomiss xmm0, xmm1
    }
    LOBYTE(v9) = mountType == MOUNT_TYPE_NONE;
    v14 = v9 + 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0A8h+out+4]
      vcomiss xmm0, xmm1
    }
    LOBYTE(v9) = mountType != MOUNT_TYPE_NONE;
    v14 = v9 + 3;
  }
  *outIconType = v14;
}

/*
==============
BG_ContextMount_CalcWorldmodelDerivedProperties
==============
*/
void BG_ContextMount_CalcWorldmodelDerivedProperties(const BgHandler *handler, const int serverTimeMs, const vec3_t *playerOrigin, const vec3_t *playerAngles, const int entityNum, const Weapon *weapon, const bool isAlternate, const MountWorldmodelAbbreviatedProperties *properties, MountWorldmodelDerivedProperties *outDerivedProperties)
{
  int startTime; 
  bool v22; 
  bool v23; 
  int endTime; 
  int v25; 
  int v26; 
  unsigned int EdgeIndex; 
  const dvar_t *v28; 
  const dvar_t *v71; 
  __int64 v72; 
  BgHandler_vtbl *v79; 
  void (__fastcall *DebugString)(BgHandler *, const vec3_t *, const vec4_t *, float, const char *, int); 
  int exitDurationMs; 
  int outEnterDurationMs[3]; 
  vec3_t relativePoint; 
  vec3_t outNormal; 
  vec3_t v125; 
  vec3_t outBelow; 
  int v127[4]; 
  vec3_t right; 
  vec3_t outParallel; 

  __asm { vmovaps [rsp+150h+var_60], xmm8 }
  _R14 = properties;
  _RDI = outDerivedProperties;
  startTime = properties->startTime;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  v22 = serverTimeMs < (unsigned int)startTime;
  v23 = serverTimeMs == startTime;
  if ( serverTimeMs < startTime || (endTime = properties->endTime, startTime <= endTime) && (v25 = maxMountExitDurationMs + endTime, v22 = v25 < (unsigned int)serverTimeMs, v23 = v25 == serverTimeMs, v25 < serverTimeMs) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    BG_GetMountEnterExitDuration((const ContextMountType)properties->type, weapon, isAlternate, outEnterDurationMs, &exitDurationMs);
    v26 = exitDurationMs;
    if ( exitDurationMs > maxMountExitDurationMs )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1975, ASSERT_TYPE_ASSERT, "(exitDurationMs <= maxMountExitDurationMs)", "%s\n\tMount exit duration %i is longer than maximum expected exit duration %i.  Please update the maximum value in code.", "exitDurationMs <= maxMountExitDurationMs", exitDurationMs, maxMountExitDurationMs) )
        __debugbreak();
      v26 = exitDurationMs;
    }
    *(double *)&_XMM0 = BG_ContextMount_CalculateMountFraction((const ContextMountType)properties->type, outEnterDurationMs[0], v26, serverTimeMs, properties->startTime, properties->endTime);
  }
  __asm
  {
    vcomiss xmm0, xmm8
    vmovss  dword ptr [rdi], xmm0
  }
  if ( v22 || v23 )
  {
    outDerivedProperties->angles = 0i64;
    outDerivedProperties->yawVelocity = 0.0;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm6
      vmovaps [rsp+150h+var_50], xmm7
      vmovaps [rsp+150h+var_70], xmm9
    }
    EdgeIndex = EdgeId::GetEdgeIndex(&properties->edge);
    if ( !MapEdgeList_IsLoaded(EdgeIndex) )
      goto LABEL_28;
    v28 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
    if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    if ( v28->current.enabled )
    {
LABEL_28:
      outDerivedProperties->fraction = 0.0;
      AngleVectors(playerAngles, &v125, &right, NULL);
      _RBX = DCONST_DVARVEC3_mount_edge_fallback_pivot_offset;
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+50h+var_D0]
        vmovss  xmm7, dword ptr [rbp+50h+var_D0+4]
        vmovss  xmm8, dword ptr [rbp+50h+right]
        vmovss  xmm9, dword ptr [rbp+50h+right+4]
      }
      if ( !DCONST_DVARVEC3_mount_edge_fallback_pivot_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_pivot_offset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+28h]
        vmovss  xmm4, dword ptr [rbx+2Ch]
        vmovss  xmm5, dword ptr [rbx+30h]
        vmulss  xmm0, xmm6, xmm1
        vaddss  xmm2, xmm0, dword ptr [r13+0]
        vmovss  dword ptr [rdi+4], xmm2
        vmulss  xmm1, xmm7, xmm1
        vaddss  xmm0, xmm1, dword ptr [r13+4]
        vmovss  dword ptr [rdi+8], xmm0
      }
      outDerivedProperties->pivotPoint.v[2] = playerOrigin->v[2];
      __asm
      {
        vmulss  xmm0, xmm8, xmm4
        vaddss  xmm3, xmm0, xmm2
        vmovss  dword ptr [rdi+4], xmm3
        vmulss  xmm0, xmm9, xmm4
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rdi+8], xmm1
        vmovss  xmm1, dword ptr [rbp+50h+var_D0]
      }
      outDerivedProperties->pivotPoint.v[2] = outDerivedProperties->pivotPoint.v[2];
      __asm { vmovss  dword ptr [rdi+4], xmm3 }
      outDerivedProperties->pivotPoint.v[1] = outDerivedProperties->pivotPoint.v[1];
      __asm
      {
        vaddss  xmm0, xmm5, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rdi+0Ch], xmm0
        vmovss  xmm0, dword ptr [rbp+50h+var_D0+4]
        vmovss  dword ptr [rdi+10h], xmm1
        vmovss  xmm1, dword ptr [rbp+50h+var_D0+8]
        vmovss  dword ptr [rdi+18h], xmm1
        vmovss  dword ptr [rdi+14h], xmm0
      }
      outDerivedProperties->angles = 0i64;
    }
    else
    {
      __asm { vmovss  xmm2, dword ptr [r14+18h]; fraction }
      Edge_CalculateVectors(handler, properties->edge, *(float *)&_XMM2, properties->normalIndex, &outNormal, &outParallel, &outBelow);
      __asm { vmovss  xmm2, dword ptr [r14+18h]; fraction }
      Edge_CalculatePoint(handler, properties->edge, *(float *)&_XMM2, &outDerivedProperties->pivotPoint);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+150h+outNormal]
        vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
        vmovss  xmm2, dword ptr [rsp+150h+outNormal+4]
        vxorps  xmm1, xmm0, xmm7
        vxorps  xmm0, xmm2, xmm7
        vmovss  dword ptr [rdi+10h], xmm1
        vmovss  xmm1, dword ptr [rsp+150h+outNormal+8]
        vxorps  xmm2, xmm1, xmm7
        vmovss  dword ptr [rdi+18h], xmm2
        vmovss  dword ptr [rdi+14h], xmm0
      }
      ProjectPointOnPlane(&outDerivedProperties->worldmodelForwardDir, &worldUpDir, &outDerivedProperties->worldmodelForwardDir);
      if ( properties->type == MOUNT_TYPE_TOP || (unsigned int)(properties->type - 2) > 1 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+10h]
          vmovss  xmm1, dword ptr [rdi+14h]
          vmovss  dword ptr [rsp+150h+relativePoint], xmm0
          vmovss  xmm0, dword ptr [rdi+18h]
          vmovss  dword ptr [rsp+150h+relativePoint+8], xmm0
          vmovss  dword ptr [rsp+150h+relativePoint+4], xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+50h+var_C0]
          vmovss  xmm2, dword ptr [rbp+50h+var_C0+4]
          vxorps  xmm1, xmm0, xmm7
          vxorps  xmm0, xmm2, xmm7
          vmovss  dword ptr [rsp+150h+relativePoint], xmm1
          vmovss  xmm1, dword ptr [rbp+50h+var_C0+8]
          vxorps  xmm2, xmm1, xmm7
          vmovss  dword ptr [rsp+150h+relativePoint+8], xmm2
          vmovss  dword ptr [rsp+150h+relativePoint+4], xmm0
        }
      }
      ProjectPointOnPlane(&relativePoint, &worldUpDir, &relativePoint);
      __asm
      {
        vmovss  xmm5, dword ptr [rsp+150h+relativePoint+4]
        vmovss  xmm3, dword ptr [rsp+150h+relativePoint]
        vmovss  xmm4, dword ptr [rsp+150h+relativePoint+8]
        vmovss  xmm9, cs:__real@3f800000
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm3, xmm3
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm6, xmm0, xmm0
        vcmpless xmm0, xmm6, cs:__real@80000000
        vblendvps xmm0, xmm6, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm0, xmm3, xmm2
        vmovss  dword ptr [rsp+150h+relativePoint], xmm0
      }
      _RBX = playerAngles;
      __asm
      {
        vcomiss xmm6, xmm8
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm5, xmm2
        vmovss  dword ptr [rsp+150h+relativePoint+8], xmm0
        vmovss  dword ptr [rsp+150h+relativePoint+4], xmm1
      }
      outDerivedProperties->angles.v[1] = 0.0;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vxorps  xmm1, xmm1, xmm1
        vroundss xmm3, xmm1, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmovss  dword ptr [rdi+1Ch], xmm1
      }
      outDerivedProperties->yawVelocity = 0.0;
      v71 = DCONST_DVARINT_mount_debug;
      if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v71);
      if ( v71->current.integer == 3 && !entityNum && handler->IsClient((BgHandler *)handler) )
      {
        __asm { vmovaps xmm2, xmm9 }
        ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, int, _DWORD))handler->DebugSphere)(handler, &outDerivedProperties->pivotPoint, v72, &colorRed, 1, 0);
        __asm
        {
          vmovss  xmm4, cs:__real@41400000
          vmovss  xmm1, dword ptr [rdi+4]
          vmulss  xmm3, xmm4, dword ptr [rsp+150h+outNormal+4]
          vmulss  xmm2, xmm4, dword ptr [rsp+150h+outNormal]
          vmovss  xmm0, dword ptr [rsp+150h+outNormal+8]
        }
        v79 = handler->__vftable;
        __asm
        {
          vsubss  xmm2, xmm1, xmm2
          vmovss  xmm1, dword ptr [rdi+8]
          vmovss  [rbp+50h+var_B0], xmm2
          vsubss  xmm2, xmm1, xmm3
          vxorps  xmm1, xmm0, xmm7
          vmovss  [rbp+50h+var_AC], xmm2
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm3, xmm2, dword ptr [rdi+0Ch]
          vmovss  [rbp+50h+var_A8], xmm3
        }
        v79->DebugLine((BgHandler *)handler, &outDerivedProperties->pivotPoint, (const vec3_t *)v127, &colorRed, 1, 0);
        __asm
        {
          vmovss  xmm3, dword ptr [rdi+20h]
          vmovss  xmm2, dword ptr [rdi+1Ch]
          vmovss  xmm1, dword ptr [r14+20h]
        }
        DebugString = handler->DebugString;
        __asm
        {
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovq   rdx, xmm1
        }
        j_va("h|p|y: {%.2f, %.1f, %.1f}", _RDX, _R8, _R9);
        __asm { vmovss  xmm3, cs:scale }
        ((void (__fastcall *)(const BgHandler *, vec3_t *, vec4_t *))DebugString)(handler, &outDerivedProperties->pivotPoint, &colorRed);
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+150h+var_50]
      vmovaps xmm6, [rsp+150h+var_40]
      vmovaps xmm9, [rsp+150h+var_70]
    }
  }
  __asm { vmovaps xmm8, [rsp+150h+var_60] }
}

/*
==============
BG_ContextMount_CalculateMountFraction
==============
*/
double BG_ContextMount_CalculateMountFraction(const ContextMountType mountType, const int enterDurationMs, const int exitDurationMs, const int serverTime, const int mountStartTime, const int mountEndTime)
{
  __asm { vxorps  xmm0, xmm0, xmm0; value }
  if ( mountStartTime )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm0, xmm0, edx
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0 }
    if ( mountEndTime >= mountStartTime )
    {
      __asm
      {
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm3, xmm3, xmm3
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vcvtsi2ss xmm3, xmm3, edi
        vdivss  xmm3, xmm3, xmm0
        vsubss  xmm0, xmm1, xmm3; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
  }
  return BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
}

/*
==============
BG_ContextMount_CalculateWeaponMovement
==============
*/
void BG_ContextMount_CalculateWeaponMovement(const WeaponMovementParams *const params, WeaponMovementState *const inOutWs)
{
  const BgWeaponMap *weaponMap; 
  int startTime; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v27; 
  char v32; 
  char v33; 
  float outStartFrac; 
  float outEndFrac; 
  float outRollDeg; 

  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  _R14 = inOutWs;
  _RSI = params;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1858, ASSERT_TYPE_ASSERT, "(params)", (const char *)&queryFormat, "params") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1859, ASSERT_TYPE_ASSERT, "(inOutWs)", (const char *)&queryFormat, "inOutWs") )
    __debugbreak();
  _RDI = _RSI->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1862, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  weaponMap = _RSI->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1865, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _RBX = &_R14->mountAngles;
  *(_QWORD *)_R14->mountAngles.v = 0i64;
  _R14->mountAngles.v[2] = 0.0;
  __asm { vmovss  xmm7, dword ptr [rdi+4C0h] }
  if ( _RDI->mountState.surface.type != MOUNT_TYPE_TOP || BG_HasDualFOVEquipped(weaponMap, _RDI) )
  {
    if ( (unsigned int)(_RDI->mountState.surface.type - 2) <= 1 )
    {
      CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(weaponMap, _RDI);
      v27 = BG_UsingAlternate(_RDI);
      BG_GetMountSideRoll(CurrentWeaponForPlayer, v27, &outRollDeg, &outStartFrac, &outEndFrac);
      __asm
      {
        vmovss  xmm2, [rsp+88h+outStartFrac]
        vmovss  xmm0, [rsp+88h+outEndFrac]
        vsubss  xmm3, xmm0, xmm2
        vcvtss2sd xmm1, xmm3, xmm3
        vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
      }
      if ( v32 | v33 )
      {
        __asm { vxorps  xmm0, xmm0, xmm0; val }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm7, xmm2
          vdivss  xmm0, xmm0, xmm3
        }
      }
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@40c00000
        vsubss  xmm2, xmm1, cs:__real@41700000
        vmulss  xmm3, xmm2, xmm0
        vaddss  xmm4, xmm3, cs:__real@41200000
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm0
        vmulss  xmm3, xmm4, xmm0
        vmovd   xmm0, dword ptr [rdi+484h]
      }
      _EAX = 2;
      __asm
      {
        vmovd   xmm1, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@bf800000
        vblendvps xmm0, xmm6, xmm1, xmm2
        vmulss  xmm1, xmm0, [rsp+88h+outRollDeg]
        vmulss  xmm2, xmm3, xmm1
        vmovss  dword ptr [r14+0CCh], xmm2
      }
    }
  }
  else
  {
    startTime = _RDI->mountState.startTime;
    if ( _RDI->mountState.endTime >= startTime )
      goto LABEL_18;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm7, xmm0
    }
    if ( _RDI->mountState.endTime <= (unsigned int)startTime )
    {
LABEL_18:
      _RDI = DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate;
      if ( !DCONST_DVARFLT_mount_top_enter_pitch_blend_out_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_top_enter_pitch_blend_out_rate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+4]; deltaTime
        vmovss  xmm2, dword ptr [rdi+28h]; rate
      }
      DiffTrackAngles(&vec3_origin, &_R14->mountAngles, *(float *)&_XMM2, *(float *)&_XMM3, &_R14->mountAngles);
    }
    else
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_mount_top_enter_pitch_delta, "mount_top_enter_pitch_delta");
      __asm
      {
        vmulss  xmm1, xmm7, cs:__real@4196cbe4
        vsubss  xmm2, xmm1, cs:__real@423c7edd
        vmulss  xmm3, xmm2, xmm7
        vaddss  xmm4, xmm3, cs:__real@41fb53d2
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm2, xmm1, xmm7
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm4, xmm2; X
      }
      sinf_0(*(float *)&_XMM0);
      __asm
      {
        vmulss  xmm1, xmm6, xmm0
        vaddss  xmm1, xmm1, dword ptr [rbx]
        vmovss  dword ptr [rbx], xmm1
      }
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
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
  __int64 startTime; 
  BgHandler_vtbl *v14; 
  __int64 clientNum; 
  int type; 
  entity_event_t v34; 
  int v36; 
  int v39; 
  char v56; 
  unsigned int v57; 
  const dvar_t *v58; 
  vec3_t outUp; 
  vec3_t outOrigin; 
  WorldUpReferenceFrame v62; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  startTime = (unsigned int)_RBX->mountState.startTime;
  if ( (int)startTime > _RBX->mountState.endTime )
  {
    v14 = handler->__vftable;
    clientNum = (unsigned int)_RBX->clientNum;
    type = _RBX->mountState.surface.type;
    __asm
    {
      vmovaps [rsp+0E8h+var_48], xmm6
      vmovaps [rsp+0E8h+var_58], xmm7
    }
    v14->OnMountCancel((BgHandler *)handler, clientNum, startTime, gameTime, type, &_RBX->mountState.eyePoint, &_RBX->viewangles);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v62, _RBX, handler);
    WorldUpReferenceFrame::GetUpVector(&v62, &outUp);
    BG_GetPlayerEyePosition(weaponMap, _RBX, &outOrigin, handler);
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+0E8h+outUp+8]
      vmovss  xmm5, dword ptr [rsp+0E8h+outUp+4]
      vmulss  xmm1, xmm5, dword ptr [rbx+34h]
      vmovss  xmm7, dword ptr [rsp+0E8h+outUp]
      vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+outOrigin+4]
      vmulss  xmm2, xmm7, dword ptr [rsp+0E8h+outOrigin]
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+outOrigin+8]
      vaddss  xmm4, xmm3, xmm0
      vmulss  xmm0, xmm7, dword ptr [rbx+30h]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, dword ptr [rbx+38h]
      vmovss  xmm6, cs:__real@42b40000
    }
    _RBX->mountState.flags |= 8u;
    __asm
    {
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@c2b40000; min
      vsubss  xmm0, xmm4, xmm0; val
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v34 = EV_STANCE_FORCE_CROUCH;
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    v36 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xBu);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(v36, *(float *)&_XMM1, 0xBu);
    __asm
    {
      vmovaps xmm7, [rsp+0E8h+var_58]
      vmovss  dword ptr [rbx+4F0h], xmm0
    }
    _RBX->viewHeightLerpTime = 0;
    if ( putMountOnCooldown )
      _RBX->mountState.flags |= 2u;
    if ( cancelToLowerStance )
    {
      v39 = _RBX->mountState.startTime;
      if ( (!v39 || v39 <= _RBX->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1704, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", "%s\n\tContext mount must be active when invoking GetViewHeightTarget()", "BG_ContextMount_IsActive( ps )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm6, dword ptr [rsp+0E8h+outUp+4]
        vmulss  xmm1, xmm6, dword ptr [r13+4]
        vmovss  xmm4, dword ptr [rsp+0E8h+outUp]
        vmulss  xmm0, xmm4, dword ptr [r13+0]
        vmovss  xmm5, dword ptr [rsp+0E8h+outUp+8]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, dword ptr [rbx+34h]
        vmulss  xmm0, xmm5, dword ptr [r13+8]
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm0, xmm4, dword ptr [rbx+30h]
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, dword ptr [rbx+38h]
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm6, xmm3, xmm0
      }
      BG_GetSuitDef(_RBX->suitIndex);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rax+204h]
        vcomiss xmm0, xmm6
      }
      if ( !v56 )
        v34 = EV_STANCE_FORCE_PRONE;
      BG_AddPredictableEventToPlayerstate(v34, 0, gameTime, weaponMap, _RBX);
    }
    v57 = _RBX->mountState.surface.type;
    _RBX->mountState.endTime = gameTime;
    BG_AddPredictableEventToPlayerstate(EV_MOUNT_EXIT, v57, gameTime, weaponMap, _RBX);
    v58 = DCONST_DVARINT_mount_debug;
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
    if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v58);
    if ( v58->current.integer )
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
  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 2145, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+4C0h]
  }
  return 1;
}

/*
==============
BG_ContextMount_FindMountEdge
==============
*/
__int64 BG_ContextMount_FindMountEdge(const BgHandler *const handler, playerState_s *const ps, const tmat33_t<vec3_t> *worldBasis, const Weapon *weapon, MountPlayerProperties *outPlayerProperties, MountSurfaceDetailedProperties *outMountProperties)
{
  _RSI = weapon;
  _R14 = ps;
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_ContextMount_FindMountEdge");
  _RDI = outPlayerProperties;
  __asm
  {
    vmovsd  xmm0, qword ptr [r14+30h]
    vmovsd  qword ptr [rdi], xmm0
  }
  outPlayerProperties->origin.v[2] = _R14->origin.v[2];
  MatrixCopy33(worldBasis, &outPlayerProperties->worldBasis);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+1E8h]
    vmulss  xmm0, xmm2, dword ptr [rdi+54h]
    vaddss  xmm1, xmm0, dword ptr [r14+30h]
    vmovss  dword ptr [rdi+0Ch], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+58h]
    vaddss  xmm1, xmm0, dword ptr [r14+34h]
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdi+5Ch]
    vaddss  xmm1, xmm0, dword ptr [r14+38h]
    vmovss  dword ptr [rdi+14h], xmm1
  }
  AnglesToAxis(&_R14->viewangles, &outPlayerProperties->eyeBasis);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi]
    vmovups ymmword ptr [rdi+60h], ymm0
    vmovups xmm1, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rdi+80h], xmm1
    vmovsd  xmm0, qword ptr [rsi+30h]
    vmovsd  qword ptr [rdi+90h], xmm0
  }
  *(_DWORD *)&outPlayerProperties->weapon.weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
  outPlayerProperties->isAlternate = BG_UsingAlternate(_R14);
  outPlayerProperties->handler = handler;
  outPlayerProperties->ps = _R14;
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
  const ContextMountState *v16; 
  char v18; 
  bool v19; 
  bool v23; 
  const dvar_t *v24; 
  bool MoverTransform; 
  bool v26; 
  __int64 v81; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  vec3_t out; 
  tmat43_t<vec3_t> outMoverToWorld; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovss  xmm7, dword ptr [rdx+3Ch]
  }
  _RBX = inOutEyePos;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
  }
  v16 = r_mountState;
  if ( (unsigned __int64)&v81 != _security_cookie )
  {
    v18 = 0;
    v19 = (r_mountState->flags & 0x40) == 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx+40h]
      vmovss  xmm1, dword ptr [rdx+44h]
      vmovss  dword ptr [rsp+108h+out], xmm0
      vmovss  xmm0, dword ptr [rdx+48h]
      vmovss  dword ptr [rsp+108h+out+8], xmm0
      vmovss  dword ptr [rsp+108h+out+4], xmm1
      vmovaps xmmword ptr [r11-58h], xmm8
    }
    if ( !v19 )
    {
      v23 = Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100);
      v18 = 0;
      v19 = !v23;
      if ( v23 )
      {
        v24 = DVARBOOL_killswitch_mount_mover_fix_enabled;
        if ( !DVARBOOL_killswitch_mount_mover_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_mount_mover_fix_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        v18 = 0;
        v19 = !v24->current.enabled;
        if ( v24->current.enabled )
        {
          MoverTransform = PM_ContextMount_GetMoverTransform(handler, v16->moverId, &outMoverToWorld);
          v18 = 0;
          v19 = !MoverTransform;
          if ( MoverTransform )
            MatrixTransformVector43(&v16->eyePointMover, &outMoverToWorld, &out);
        }
      }
    }
    __asm { vcomiss xmm7, xmm9 }
    if ( v18 | v19 )
    {
      v26 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1655, ASSERT_TYPE_ASSERT, "(0.0f < mountFraction)", (const char *)&queryFormat, "0.0f < mountFraction");
      v18 = 0;
      if ( v26 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vcomiss xmm7, xmm8
    }
    if ( v18 )
    {
      __asm
      {
        vmulss  xmm0, xmm7, cs:__real@40c00000
        vsubss  xmm1, xmm0, cs:__real@41700000
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm3, xmm2, cs:__real@41200000
        vmulss  xmm0, xmm7, xmm7
        vmulss  xmm1, xmm0, xmm7
        vmovss  xmm0, dword ptr [rsp+108h+out]
        vmovaps [rsp+108h+var_38], xmm6
        vmulss  xmm6, xmm3, xmm1
        vsubss  xmm1, xmm0, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+108h+out+4]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbx+4]
        vaddss  xmm3, xmm2, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsp+108h+out+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  dword ptr [rbx], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbx+4]
        vmovss  dword ptr [rbx+4], xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbx+8]
        vmovss  dword ptr [rbx+8], xmm3
      }
      if ( v16->surface.type == MOUNT_TYPE_TOP )
      {
        if ( v16->endTime >= v16->startTime )
        {
          __asm { vmovaps [rsp+108h+var_78], xmm10 }
          BG_GetMountEnterExitDuration(MOUNT_TYPE_TOP, r_weapon, isAlternate, &outEnterDurationMs, &outExitDurationMs);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, [rsp+108h+outEnterDurationMs]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vdivss  xmm0, xmm0, xmm1; val
            vxorps  xmm1, xmm1, xmm1; min
            vmovaps xmm2, xmm8; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm10, xmm0 }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_enter_up_delta, "mount_top_enter_up_delta");
          __asm
          {
            vmovaps xmm6, xmm0
            vmulss  xmm0, xmm10, cs:__real@40490fdb; X
          }
          sinf_0(*(float *)&_XMM0);
          __asm
          {
            vcomiss xmm10, xmm9
            vmulss  xmm6, xmm6, xmm0
            vmovaps xmm0, xmm8
          }
          if ( !(v18 | v19) )
          {
            __asm
            {
              vsubss  xmm0, xmm10, xmm7
              vdivss  xmm0, xmm0, xmm10; val
              vmovaps xmm2, xmm8; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          }
          __asm
          {
            vmovaps xmm10, [rsp+108h+var_78]
            vsubss  xmm0, xmm8, xmm0
            vmulss  xmm2, xmm0, xmm6
          }
        }
        else
        {
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_top_enter_up_delta, "mount_top_enter_up_delta");
          __asm
          {
            vmovaps xmm6, xmm0
            vmulss  xmm0, xmm7, cs:__real@40490fdb; X
          }
          sinf_0(*(float *)&_XMM0);
          __asm { vmulss  xmm2, xmm6, xmm0 }
        }
        __asm
        {
          vmulss  xmm1, xmm2, dword ptr [rbp+0]
          vaddss  xmm0, xmm1, dword ptr [rbx]
          vmovss  dword ptr [rbx], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbp+4]
          vaddss  xmm0, xmm1, dword ptr [rbx+4]
          vmovss  dword ptr [rbx+4], xmm0
          vmulss  xmm1, xmm2, dword ptr [rbp+8]
          vaddss  xmm0, xmm1, dword ptr [rbx+8]
          vmovss  dword ptr [rbx+8], xmm0
        }
      }
      __asm { vmovaps xmm6, [rsp+108h+var_38] }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+108h+out]
        vmovss  xmm1, dword ptr [rsp+108h+out+4]
        vmovss  dword ptr [rbx], xmm0
        vmovss  xmm0, dword ptr [rsp+108h+out+8]
        vmovss  dword ptr [rbx+8], xmm0
        vmovss  dword ptr [rbx+4], xmm1
      }
    }
    __asm { vmovaps xmm8, [rsp+108h+var_58] }
  }
  __asm
  {
    vmovaps xmm7, [rsp+108h+var_48]
    vmovaps xmm9, [rsp+108h+var_68]
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
  const dvar_t *v6; 
  vec3_t outMountPoint; 
  vec3_t vec; 
  WorldUpReferenceFrame v18; 
  MountSurfaceProperties mount; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !EdgeId::IsValid(&ps->mountState.surface.id) )
    goto LABEL_11;
  EdgeIndex = EdgeId::GetEdgeIndex(&ps->mountState.surface.id);
  if ( !MapEdgeList_IsLoaded(EdgeIndex) )
    goto LABEL_11;
  v6 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
  if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
  {
    MountSurfaceProperties::Initialize(&mount, handler, &ps->mountState.surface);
    BG_ContextMount_CalcMountPoint(handler, &mount, &outMountPoint);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0D8h+outMountPoint]
      vsubss  xmm1, xmm0, dword ptr [rdi+30h]
      vmovss  xmm2, dword ptr [rsp+0D8h+outMountPoint+4]
      vsubss  xmm0, xmm2, dword ptr [rdi+34h]
      vmovss  dword ptr [rsp+0D8h+vec], xmm1
      vmovss  xmm1, dword ptr [rsp+0D8h+outMountPoint+8]
      vsubss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+0D8h+vec+8], xmm2
      vmovss  dword ptr [rsp+0D8h+vec+4], xmm0
    }
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v18, ps, handler);
    *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v18, &vec);
    __asm
    {
      vmovss  xmm2, cs:__real@42b40000; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
LABEL_11:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_GetViewHeightTarget
==============
*/
float BG_ContextMount_GetViewHeightTarget(const BgWeaponMap *const weaponMap, const playerState_s *const ps, const vec3_t *entityUp)
{
  int startTime; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RDI = entityUp;
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
  __asm
  {
    vmovss  xmm3, dword ptr [rdi]
    vmulss  xmm0, xmm3, dword ptr [rbx+4C4h]
    vmovss  xmm6, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rdi+4]
    vmulss  xmm1, xmm5, dword ptr [rbx+4C8h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx+4CCh]
    vmulss  xmm0, xmm3, dword ptr [rbx+30h]
    vaddss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm6, dword ptr [rbx+38h]
    vmulss  xmm2, xmm5, dword ptr [rbx+34h]
    vmovaps xmm6, [rsp+48h+var_18]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm0, xmm3, xmm1
    vsubss  xmm0, xmm4, xmm0
  }
  return *(float *)&_XMM0;
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
  bool v8; 
  unsigned int EdgeIndex; 
  const dvar_t *v11; 
  int v23; 
  vec3_t outMountPoint; 
  vec3_t vec; 
  WorldUpReferenceFrame v28; 
  MountSurfaceProperties mount; 

  _RBX = outWorldmodelProps;
  _RBP = ps;
  if ( !outWorldmodelProps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1942, ASSERT_TYPE_ASSERT, "(outWorldmodelProps)", (const char *)&queryFormat, "outWorldmodelProps") )
    __debugbreak();
  _RBX->type = _RBP->mountState.surface.type;
  _RBX->startTime = _RBP->mountState.startTime;
  _RBX->endTime = _RBP->mountState.endTime;
  _RBX->sideLow = ((unsigned int)_RBP->mountState.flags >> 4) & 1;
  _RBX->edge = _RBP->mountState.surface.id;
  __asm { vmovss  xmm0, dword ptr [rbp+490h]; value }
  *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  _RBX->normalIndex = _RBP->mountState.surface.normalFaceIndex != 0;
  if ( BG_ContextMount_IsActive(_RBP) )
  {
    v8 = _RBP->mountState.surface.type == MOUNT_TYPE_NONE;
    __asm { vmovaps [rsp+118h+var_38], xmm6 }
    if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1956, ASSERT_TYPE_ASSERT, "( mountState->surface.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountState->surface.type", "MOUNT_TYPE_NONE", 0, 0i64) )
      __debugbreak();
    if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1713, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm { vmovss  xmm6, cs:__real@42b40000 }
    if ( !EdgeId::IsValid(&_RBP->mountState.surface.id) )
      goto LABEL_18;
    EdgeIndex = EdgeId::GetEdgeIndex(&_RBP->mountState.surface.id);
    if ( !MapEdgeList_IsLoaded(EdgeIndex) )
      goto LABEL_18;
    v11 = DCONST_DVARBOOL_mount_edge_fallback_debug_enable;
    if ( !DCONST_DVARBOOL_mount_edge_fallback_debug_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_edge_fallback_debug_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
    {
      MountSurfaceProperties::Initialize(&mount, handler, &_RBP->mountState.surface);
      BG_ContextMount_CalcMountPoint(handler, &mount, &outMountPoint);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+118h+outMountPoint]
        vsubss  xmm1, xmm0, dword ptr [rbp+30h]
        vmovss  xmm2, dword ptr [rsp+118h+outMountPoint+4]
        vsubss  xmm0, xmm2, dword ptr [rbp+34h]
        vmovss  dword ptr [rsp+118h+vec], xmm1
        vmovss  xmm1, dword ptr [rsp+118h+outMountPoint+8]
        vsubss  xmm2, xmm1, dword ptr [rbp+38h]
        vmovss  dword ptr [rsp+118h+vec+8], xmm2
        vmovss  dword ptr [rsp+118h+vec+4], xmm0
      }
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v28, _RBP, handler);
      *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v28, &vec);
      __asm
      {
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    }
    else
    {
LABEL_18:
      __asm { vxorps  xmm0, xmm0, xmm0; val }
    }
    __asm
    {
      vmovss  xmm1, cs:__real@c2b40000; min
      vmovaps xmm2, xmm6; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    v23 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xBu);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(v23, *(float *)&_XMM1, 0xBu);
    __asm
    {
      vmovaps xmm6, [rsp+118h+var_38]
      vmovss  dword ptr [rbx+20h], xmm0
    }
  }
}

/*
==============
BG_ContextMount_InterpolateMountState
==============
*/

void __fastcall BG_ContextMount_InterpolateMountState(const playerState_s *const prevPs, const playerState_s *const nextPs, double fraction, ContextMountState *r_out)
{
  int startTime; 
  char v52; 
  int endTime; 
  int v54; 
  int pullbackStartTime; 
  int pullsideStartTime; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  _RBX = r_out;
  _RDI = nextPs;
  _RSI = prevPs;
  __asm { vmovaps xmm6, xmm2 }
  if ( !prevPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1742, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1743, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  memset_0(_RBX, 0, sizeof(ContextMountState));
  if ( (unsigned int)(_RDI->pm_type - 7) > 1 )
  {
    if ( BG_ContextMount_IsActive(_RSI) && _RSI->mountState.surface.type && BG_IsPlayerLinkedToAnything(_RSI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1763, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerLinkedToAnything( prevPs ))", "%s\n\tPlayer should not be mounted while linked.", "!BG_IsPlayerLinkedToAnything( prevPs )") )
      __debugbreak();
    if ( BG_ContextMount_IsActive(_RDI) && _RDI->mountState.surface.type && BG_IsPlayerLinkedToAnything(_RDI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1767, ASSERT_TYPE_ASSERT, "(!BG_IsPlayerLinkedToAnything( nextPs ))", "%s\n\tPlayer should not be mounted while linked.", "!BG_IsPlayerLinkedToAnything( nextPs )") )
      __debugbreak();
    _RBX->flags = _RDI->mountState.flags & 0x60;
    if ( _RDI->serverTime > _RSI->serverTime )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsi+4C0h]
        vmovss  xmm0, dword ptr [rdi+4C0h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rbx+3Ch], xmm3
        vmovss  xmm3, dword ptr [rsi+4C4h]
        vmovss  xmm0, dword ptr [rdi+4C4h]
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm3
        vmovss  dword ptr [rbx+40h], xmm3
        vmovss  xmm4, dword ptr [rsi+4C8h]
        vmovss  xmm0, dword ptr [rdi+4C8h]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm4
        vmovss  dword ptr [rbx+44h], xmm3
        vmovss  xmm5, dword ptr [rsi+4CCh]
        vmovss  xmm0, dword ptr [rdi+4CCh]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbx+48h], xmm3
      }
      _RBX->moverId = _RDI->mountState.moverId;
      if ( _RSI->mountState.moverId == _RDI->mountState.moverId )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+4D0h]
          vmovss  xmm0, dword ptr [rdi+4D0h]
          vsubss  xmm1, xmm0, xmm3
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm3
          vmovss  dword ptr [rbx+4Ch], xmm3
          vmovss  xmm4, dword ptr [rsi+4D4h]
          vmovss  xmm0, dword ptr [rdi+4D4h]
          vsubss  xmm1, xmm0, xmm4
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm4
          vmovss  dword ptr [rbx+50h], xmm3
          vmovss  xmm5, dword ptr [rsi+4D8h]
          vmovss  xmm0, dword ptr [rdi+4D8h]
          vsubss  xmm1, xmm0, xmm5
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm5
        }
      }
      else
      {
        _RBX->eyePointMover.v[0] = _RDI->mountState.eyePointMover.v[0];
        _RBX->eyePointMover.v[1] = _RDI->mountState.eyePointMover.v[1];
        __asm { vmovss  xmm3, dword ptr [rdi+4D8h] }
      }
      __asm { vmovss  dword ptr [rbx+54h], xmm3 }
      if ( _RDI->serverTime - _RSI->serverTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1802, ASSERT_TYPE_ASSERT, "(0 < snapDeltaDuration)", (const char *)&queryFormat, "0 < snapDeltaDuration") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rsi+4]
      }
      _RBX->startTime = _RSI->mountState.startTime;
      startTime = _RDI->mountState.startTime;
      __asm
      {
        vmulss  xmm2, xmm0, xmm6
        vaddss  xmm2, xmm2, xmm1
        vcvttss2si edx, xmm2
      }
      if ( _RSI->mountState.startTime > startTime || startTime > _EDX )
      {
        v52 = 0;
      }
      else
      {
        v52 = 1;
        _RBX->startTime = startTime;
      }
      endTime = _RSI->mountState.endTime;
      _RBX->endTime = endTime;
      v54 = _RDI->mountState.endTime;
      if ( _RSI->mountState.endTime > v54 || v54 > _EDX )
        v54 = endTime;
      else
        _RBX->endTime = v54;
      __asm { vxorps  xmm2, xmm2, xmm2 }
      if ( v52 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi+484h]
          vmovups ymmword ptr [rbx], ymm0
          vmovups xmm1, xmmword ptr [rdi+4A4h]
          vmovups xmmword ptr [rbx+20h], xmm1
        }
      }
      else
      {
        __asm { vcomiss xmm2, dword ptr [rbx+3Ch] }
        _RBX->surface.type = MOUNT_TYPE_NONE;
      }
      _RBX->pullbackStartTime = _RSI->mountState.pullbackStartTime;
      pullbackStartTime = _RDI->mountState.pullbackStartTime;
      if ( _RSI->mountState.pullbackStartTime < pullbackStartTime && pullbackStartTime <= _EDX )
        _RBX->pullbackStartTime = pullbackStartTime;
      _RBX->pullsideStartTime = _RSI->mountState.pullsideStartTime;
      pullsideStartTime = _RDI->mountState.pullsideStartTime;
      if ( _RSI->mountState.pullsideStartTime < pullsideStartTime && pullsideStartTime <= _EDX )
        _RBX->pullsideStartTime = pullsideStartTime;
      if ( v54 < _RBX->startTime )
      {
        __asm { vcomiss xmm2, dword ptr [rbx+3Ch] }
        if ( (unsigned int)v54 < _RBX->startTime && _RBX->surface.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1850, ASSERT_TYPE_ASSERT, "( r_out.surface.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "r_out.surface.type", "MOUNT_TYPE_NONE", 0, 0i64) )
          __debugbreak();
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi+484h]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rdi+4A4h]
        vmovups xmmword ptr [rbx+20h], xmm1
      }
      _RBX->startTime = _RDI->mountState.startTime;
      _RBX->endTime = _RDI->mountState.endTime;
      _RBX->mountFraction = _RDI->mountState.mountFraction;
      _RBX->eyePoint.v[0] = _RDI->mountState.eyePoint.v[0];
      _RBX->eyePoint.v[1] = _RDI->mountState.eyePoint.v[1];
      _RBX->eyePoint.v[2] = _RDI->mountState.eyePoint.v[2];
      _RBX->eyePointMover.v[0] = _RDI->mountState.eyePointMover.v[0];
      _RBX->eyePointMover.v[1] = _RDI->mountState.eyePointMover.v[1];
      _RBX->eyePointMover.v[2] = _RDI->mountState.eyePointMover.v[2];
      _RBX->moverId = _RDI->mountState.moverId;
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  unsigned int endTime; 

  _RBX = ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 461, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  endTime = _RBX->mountState.endTime;
  if ( _RBX->mountState.startTime < (signed int)endTime )
    return 0;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+4C0h]
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( _RBX->mountState.startTime <= endTime )
    return 0;
  __asm { vcomiss xmm1, cs:__real@3f800000 }
  return _RBX->mountState.startTime < endTime;
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
  char v9; 
  char v10; 
  const dvar_t *v12; 
  bool v13; 
  bool v14; 
  char v15; 
  int WeaponHand; 
  int *p_weaponState; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  const char *v21; 
  EffectiveStance EffectiveStance; 
  __int32 v23; 
  const dvar_t *v24; 
  const char *v25; 

  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  _RSI = ps;
  IsActive = BG_ContextMount_IsActive(ps);
  if ( !IsActive )
  {
    _RBX = DCONST_DVARFLT_mount_tuning_min_fraction;
    if ( !DCONST_DVARFLT_mount_tuning_min_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_tuning_min_fraction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4C0h]
      vcomiss xmm0, dword ptr [rbx+28h]
    }
    if ( !(v9 | v10) )
    {
      strncpy(outResults->failReason, "can only initiate mount at 'mount_tuning_min_fraction' fraction", 0x80ui64);
      return 0;
    }
  }
  v12 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled )
  {
    strncpy(outResults->failReason, "mount is disabled", 0x80ui64);
    return 0;
  }
  if ( BG_IsPlayerLinkedToAnything(_RSI) || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RSI->otherFlags, ACTIVE, 0xBu) || _RSI->pm_type >= 7 )
    goto LABEL_24;
  if ( _RSI == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 6u) )
    goto LABEL_24;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_24:
    strncpy(outResults->failReason, "player is not permitted to enter mount in current state", 0x80ui64);
    return 0;
  }
  if ( BG_IsInAir(_RSI, 0) )
  {
    outResults->putOnCooldown = 1;
    strncpy(outResults->failReason, "player in air", 0x80ui64);
    return 0;
  }
  v13 = BG_ContextMount_IsActive(_RSI);
  v14 = 1;
  v15 = 0;
  WeaponHand = BG_PlayerLastWeaponHand(weaponMap, _RSI);
  if ( WeaponHand >= 0 )
  {
    p_weaponState = &_RSI->weapState[0].weaponState;
    v18 = 0x3E39401C01FF863Fi64;
    v19 = WeaponHand + 1i64;
    do
    {
      if ( v15 || *p_weaponState == 24 )
        v15 = 1;
      v14 = v14 && ((v20 = *p_weaponState, (unsigned int)v20 <= 0x3D) && _bittest64(&v18, v20) || (unsigned int)(v20 - 76) <= 1 || !v13 && v15);
      p_weaponState += 20;
      --v19;
    }
    while ( v19 );
    if ( !v14 )
    {
      outResults->putOnCooldown = 1;
      v21 = "invalid weapon state";
      goto LABEL_43;
    }
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x10u) )
  {
    v21 = "controls are frozen";
    goto LABEL_43;
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x15u) && BG_GetShellshockParms(_RSI->shellshockIndex)->mount.affect )
  {
    v21 = "shellshocked";
    goto LABEL_43;
  }
  EffectiveStance = PM_GetEffectiveStance(_RSI);
  if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
  {
    v24 = DCONST_DVARBOOL_mount_stance_allow_mount_stand;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_stand )
      goto LABEL_62;
    v25 = "mount_stance_allow_mount_stand";
    goto LABEL_60;
  }
  v23 = EffectiveStance - 1;
  if ( !v23 )
  {
    v24 = DCONST_DVARBOOL_mount_stance_allow_mount_prone;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_prone )
      goto LABEL_62;
    v25 = "mount_stance_allow_mount_prone";
    goto LABEL_60;
  }
  if ( v23 == 1 )
  {
    v24 = DCONST_DVARBOOL_mount_stance_allow_mount_crouch;
    if ( DCONST_DVARBOOL_mount_stance_allow_mount_crouch )
      goto LABEL_62;
    v25 = "mount_stance_allow_mount_crouch";
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v25) )
      __debugbreak();
LABEL_62:
    Dvar_CheckFrontendServerThread(v24);
    if ( !v24->current.enabled && !IsActive )
    {
      v21 = "not a valid stance";
      goto LABEL_43;
    }
  }
  if ( BG_PlayerDualWielding(_RSI) )
    return 0;
  if ( !BG_IsUsingOffhandGestureWeaponADSSupport(weaponMap, _RSI) )
    return 1;
  v21 = "offhand ads";
LABEL_43:
  strncpy(outResults->failReason, v21, 0x80ui64);
  return 0;
}

/*
==============
BG_ContextMount_IsViewangleTooShallow
==============
*/
bool BG_ContextMount_IsViewangleTooShallow(const ContextMountType type, const tmat33_t<vec3_t> *viewBasis, const vec3_t *entityUp, const vec3_t *edgeParallel)
{
  const char *v34; 
  char v35; 
  bool v36; 
  bool v54; 
  bool v68; 
  bool result; 
  double v135; 
  double v136; 
  double v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  double v143; 
  double v144; 
  double v145; 
  vec3_t outProjectedPoint; 
  vec3_t v147; 
  char v148; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RSI = entityUp;
  _RBX = viewBasis;
  if ( (unsigned int)type >= COUNT_MOUNT_TYPE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( COUNT_MOUNT_TYPE )", "type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", type, 4) )
    __debugbreak();
  __asm { vmovss  xmm8, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( type )
  {
    if ( type == MOUNT_TYPE_TOP )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmulss  xmm3, xmm0, dword ptr [rbx+4]
        vmovss  xmm1, dword ptr [rsi]
        vmulss  xmm2, xmm1, dword ptr [rbx]
        vmovss  xmm0, dword ptr [rsi+8]
        vmulss  xmm1, xmm0, dword ptr [rbx+8]
        vmovss  xmm7, cs:__real@3f800000
        vmovss  xmm9, cs:__real@80000000
        vaddss  xmm4, xmm3, xmm2
        vaddss  xmm2, xmm4, xmm1
        vandps  xmm2, xmm2, xmm8
        vsubss  xmm0, xmm2, xmm7
        vandps  xmm0, xmm0, xmm8
        vcomiss xmm0, cs:__real@3a83126f
      }
      ProjectPointOnPlane(_RBX->m, _RSI, &v147);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+57h+var_80]
        vmovss  xmm6, dword ptr [rbp+57h+var_80+4]
        vmovss  xmm4, dword ptr [rbp+57h+var_80+8]
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm9
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbp+57h+var_80], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+57h+var_80+8], xmm0
        vmovss  dword ptr [rbp+57h+var_80+4], xmm1
      }
      ProjectPointOnPlane(edgeParallel, _RSI, &outProjectedPoint);
      __asm
      {
        vmovss  xmm5, dword ptr [rbp+57h+outProjectedPoint]
        vmovss  xmm6, dword ptr [rbp+57h+outProjectedPoint+4]
        vmovss  xmm4, dword ptr [rbp+57h+outProjectedPoint+8]
      }
      _RBX = DCONST_DVARFLT_mount_top_max_yaw;
      __asm
      {
        vmulss  xmm1, xmm5, xmm5
        vmulss  xmm0, xmm6, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, xmm9
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm5, xmm2
        vmovss  dword ptr [rbp+57h+outProjectedPoint], xmm0
        vmulss  xmm0, xmm4, xmm2
        vmulss  xmm1, xmm6, xmm2
        vmovss  dword ptr [rbp+57h+outProjectedPoint+8], xmm0
        vmovss  dword ptr [rbp+57h+outProjectedPoint+4], xmm1
      }
      if ( DCONST_DVARFLT_mount_top_max_yaw )
        goto LABEL_11;
      v34 = "mount_top_max_yaw";
      goto LABEL_9;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 285, ASSERT_TYPE_ASSERT, "(type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "type != MOUNT_TYPE_NONE") )
  {
    __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+57h+var_80], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+57h+var_80+8], xmm0
    vmovss  dword ptr [rbp+57h+var_80+4], xmm1
  }
  ProjectPointOnPlane(edgeParallel, &_RBX->m[1], &outProjectedPoint);
  __asm
  {
    vmovss  xmm5, dword ptr [rbp+57h+outProjectedPoint]
    vmovss  xmm6, dword ptr [rbp+57h+outProjectedPoint+4]
    vmovss  xmm4, dword ptr [rbp+57h+outProjectedPoint+8]
    vmovss  xmm7, cs:__real@3f800000
  }
  _RBX = DCONST_DVARMPFLT_mount_side_max_pitch;
  __asm
  {
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rbp+57h+outProjectedPoint], xmm0
    vmulss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+57h+outProjectedPoint+8], xmm0
    vmovss  dword ptr [rbp+57h+outProjectedPoint+4], xmm1
  }
  if ( DCONST_DVARMPFLT_mount_side_max_pitch )
    goto LABEL_11;
  v34 = "mount_side_max_pitch";
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v34) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+57h+var_80]
    vmovss  xmm3, dword ptr [rbp+57h+var_80+4]
    vmovss  xmm5, dword ptr [rbp+57h+var_80+8]
    vmovss  xmm9, cs:__real@3b03126f
    vmovss  xmm6, dword ptr [rbx+28h]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm9
  }
  if ( !v35 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0E0h+var_A0], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0E0h+var_A8], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0E0h+var_B0], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0E0h+var_B8], xmm0
    }
    v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 315, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( viewForward ) )", "(%g, %g, %g) len %g", v135, v138, v141, v144);
    v35 = 0;
    v36 = !v54;
    if ( v54 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+57h+outProjectedPoint]
    vmovss  xmm3, dword ptr [rbp+57h+outProjectedPoint+4]
    vmovss  xmm5, dword ptr [rbp+57h+outProjectedPoint+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm1, xmm2, xmm1
    vsubss  xmm0, xmm1, xmm7
    vandps  xmm0, xmm0, xmm8
    vcomiss xmm0, xmm9
  }
  if ( !v35 )
  {
    __asm
    {
      vsqrtss xmm0, xmm1, xmm1
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+0E0h+var_A0], xmm1
      vcvtss2sd xmm2, xmm5, xmm5
      vmovsd  [rsp+0E0h+var_A8], xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0E0h+var_B0], xmm3
      vcvtss2sd xmm0, xmm4, xmm4
      vmovsd  [rsp+0E0h+var_B8], xmm0
    }
    v68 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 316, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( projectedEdge ) )", "(%g, %g, %g) len %g", v136, v139, v142, v145);
    v35 = 0;
    v36 = !v68;
    if ( v68 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm9, cs:__real@42b40000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v35 )
    goto LABEL_19;
  __asm { vcomiss xmm6, xmm9 }
  if ( !(v35 | v36) )
  {
LABEL_19:
    __asm
    {
      vmovsd  xmm0, cs:__real@4056800000000000
      vmovsd  [rsp+0E0h+var_A8], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0E0h+var_B0], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0E0h+var_B8], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 317, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( minAngleWithEdge ) && ( minAngleWithEdge ) <= ( 90.0f )", "minAngleWithEdge not in [0.0f, 90.0f]\n\t%g not in [%g, %g]", v137, v140, v143) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outProjectedPoint]
    vmulss  xmm4, xmm0, dword ptr [rbp+57h+var_80]
    vmovss  xmm1, dword ptr [rbp+57h+outProjectedPoint+4]
    vmulss  xmm3, xmm1, dword ptr [rbp+57h+var_80+4]
    vmovss  xmm0, dword ptr [rbp+57h+outProjectedPoint+8]
    vmulss  xmm1, xmm0, dword ptr [rbp+57h+var_80+8]
    vaddss  xmm5, xmm4, xmm3
    vaddss  xmm0, xmm5, xmm1; val
    vmovss  xmm1, cs:__real@bf800000; min
    vmovaps xmm2, xmm7; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vsubss  xmm2, xmm9, xmm1
    vandps  xmm2, xmm2, xmm8
    vcomiss xmm2, xmm6
  }
  result = !(v35 | v36);
  _R11 = &v148;
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
BG_ContextMount_MoveToPoint
==============
*/

bool __fastcall BG_ContextMount_MoveToPoint(pmove_t *const pm, pml_t *const pml, double max2DSpeed, const vec3_t *goalPoint)
{
  bool v19; 
  BgGroundState *ground; 
  char v38; 
  bool result; 
  double performSlideMove; 
  double v87; 
  double v88; 
  double v89; 
  vec3_t velInConst; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0F8h+var_88], xmm12
  }
  _RSI = goalPoint;
  _RDI = pml;
  __asm { vmovaps xmm6, xmm2 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1393, ASSERT_TYPE_ASSERT, "(pm != 0)", (const char *)&queryFormat, "pm != NULL") )
    __debugbreak();
  if ( !pm->ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1394, ASSERT_TYPE_ASSERT, "(pm->ps != 0)", (const char *)&queryFormat, "pm->ps != NULL") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
  }
  _RAX = pm->ps;
  v19 = __CFADD__(_RAX, 48i64) || &_RAX->origin == NULL;
  _RAX = (playerState_s *)((char *)_RAX + 48);
  __asm
  {
    vmovss  xmm10, dword ptr [rax]
    vmovss  xmm11, dword ptr [rax+4]
    vmovss  xmm12, dword ptr [rax+8]
    vsubss  xmm7, xmm0, xmm10
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm9, xmm0, xmm12
    vsubss  xmm8, xmm1, xmm11
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcvtss2sd xmm0, xmm3, xmm3
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( !v19 )
  {
    ground = pm->ground;
    __asm
    {
      vdivss  xmm0, xmm7, xmm3
      vmovss  dword ptr [rsp+0F8h+velInConst], xmm0
      vdivss  xmm0, xmm9, xmm3
      vdivss  xmm1, xmm8, xmm3
      vmovss  dword ptr [rsp+0F8h+velInConst+8], xmm0
      vmovss  dword ptr [rsp+0F8h+velInConst+4], xmm1
    }
    PM_ProjectVelocity(pm, &velInConst, &ground->trace.normal, &velInConst);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+0F8h+velInConst]
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdi+24h]
    }
    if ( v38 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+0F8h+velInConst+4]
        vmovss  xmm5, dword ptr [rsp+0F8h+velInConst+8]
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm1, xmm2, xmm1
        vsubss  xmm0, xmm1, cs:__real@3f800000
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, cs:__real@3b03126f
      }
      if ( !v38 )
      {
        __asm
        {
          vsqrtss xmm0, xmm1, xmm1
          vcvtss2sd xmm1, xmm0, xmm0
          vmovsd  [rsp+0F8h+var_B8], xmm1
          vcvtss2sd xmm2, xmm5, xmm5
          vmovsd  [rsp+0F8h+var_C0], xmm2
          vcvtss2sd xmm3, xmm3, xmm3
          vmovsd  [rsp+0F8h+var_C8], xmm3
          vcvtss2sd xmm0, xmm4, xmm4
          vmovsd  qword ptr [rsp+0F8h+performSlideMove], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1419, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( wishDir ) )", "(%g, %g, %g) len %g", performSlideMove, v87, v88, v89) )
          __debugbreak();
        __asm
        {
          vmovss  xmm4, dword ptr [rsp+0F8h+velInConst]
          vmovss  xmm3, dword ptr [rsp+0F8h+velInConst+4]
          vmovss  xmm5, dword ptr [rsp+0F8h+velInConst+8]
        }
      }
      __asm
      {
        vmulss  xmm1, xmm3, xmm8
        vmulss  xmm0, xmm4, xmm7
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm5, xmm9
        vaddss  xmm2, xmm2, xmm1
        vdivss  xmm0, xmm2, dword ptr [rdi+24h]
        vminss  xmm6, xmm0, xmm6
      }
    }
    _RAX = pm->ps;
    __asm
    {
      vmulss  xmm0, xmm4, xmm6
      vmovss  dword ptr [rax+3Ch], xmm0
      vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+velInConst+4]
      vmovss  dword ptr [rax+40h], xmm2
      vmulss  xmm1, xmm6, dword ptr [rsp+0F8h+velInConst+8]
      vmovss  dword ptr [rax+44h], xmm1
    }
    PM_UpdatePlayerCollision(pm, _RDI, 0, 1, 0, 1);
    _RAX = pm->ps;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  xmm1, dword ptr [rax+34h]
      vsubss  xmm3, xmm0, xmm10
      vmovss  xmm0, dword ptr [rax+38h]
      vsubss  xmm2, xmm1, xmm11
      vmulss  xmm2, xmm2, xmm2
      vsubss  xmm4, xmm0, xmm12
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:minMoveDistSq
    }
    if ( v38 )
    {
      __asm
      {
        vmovss  dword ptr [rax+30h], xmm10
        vmovss  dword ptr [rax+34h], xmm11
        vmovss  dword ptr [rax+38h], xmm12
      }
    }
    PM_GroundTrace(pm, _RDI, 0);
  }
  result = 1;
  _R11 = &v92;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
  return result;
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

float __fastcall BG_ContextMount_QuantizeFloat01Byte(double value, double _XMM1_8, double _XMM2_8)
{
  char v13; 
  double v20; 
  double v21; 
  double v22; 

  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
    vcomiss xmm0, cs:__real@3f800000
    vmovsd  xmm1, cs:__real@3ff0000000000000
    vmovsd  [rsp+58h+var_20], xmm1
    vxorpd  xmm2, xmm2, xmm2
    vmovsd  [rsp+58h+var_28], xmm2
    vcvtss2sd xmm3, xmm6, xmm6
    vmovsd  [rsp+58h+var_30], xmm3
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 1152, ASSERT_TYPE_ASSERT, "( 0.f ) <= ( value ) && ( value ) <= ( 1.f )", "value not in [0.f, 1.f]\n\t%g not in [%g, %g]", v20, v21, v22) )
    __debugbreak();
  __asm
  {
    vmulss  xmm1, xmm6, cs:__real@43800000
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si eax, xmm2
  }
  v13 = _EAX;
  if ( _EAX > 255 )
    v13 = -1;
  if ( v13 == -1 )
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
  else
  {
    __asm
    {
      vmovaps xmm6, [rsp+58h+var_18]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3b800000
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
BG_ContextMount_QuantizeViewHeight
==============
*/
double BG_ContextMount_QuantizeViewHeight(float viewHeight)
{
  double v3; 
  int v5; 

  __asm
  {
    vmovss  xmm2, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@c2b40000; min
  }
  v3 = I_fclamp(viewHeight, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  v5 = MSG_PackSignedFloat(*(float *)&v3, *(float *)&_XMM1, 0xBu);
  __asm { vmovss  xmm1, cs:__real@42b40000; maxAbsValueSize }
  return MSG_UnpackSignedFloat(v5, *(float *)&_XMM1, 0xBu);
}

/*
==============
BG_ContextMount_UpdatePlayerPullingAway
==============
*/
char BG_ContextMount_UpdatePlayerPullingAway(const pmove_t *const pm, const pml_t *const pml, const vec3_t *entityUp, const vec3_t *edgeParallel, const vec3_t *edgeNormal, const vec3_t *edgeBelow)
{
  playerState_s *ps; 
  const dvar_t *v21; 
  ContextMountType type; 
  const dvar_t *v24; 
  char v75; 
  char v86; 
  int v87; 
  bool v94; 
  const dvar_t *v158; 
  const dvar_t *v161; 
  int pullbackStartTime; 
  const dvar_t *v166; 
  int v167; 
  int pullsideStartTime; 
  int v169; 
  const dvar_t *v170; 
  const char *v171; 
  __int64 v173; 
  ContextMountType v174; 
  vec3_t outProjectedPoint; 
  vec3_t v176; 

  _R13 = edgeParallel;
  _R14 = entityUp;
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
    LODWORD(v173) = ps->mountState.surface.type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 330, ASSERT_TYPE_ASSERT, "(unsigned)( ps->mountState.surface.type ) < (unsigned)( COUNT_MOUNT_TYPE )", "ps->mountState.surface.type doesn't index COUNT_MOUNT_TYPE\n\t%i not in [0, %i)", v173, 4) )
      __debugbreak();
  }
  if ( ps->mountState.surface.type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 331, ASSERT_TYPE_ASSERT, "(ps->mountState.surface.type != MOUNT_TYPE_NONE)", (const char *)&queryFormat, "ps->mountState.surface.type != MOUNT_TYPE_NONE") )
    __debugbreak();
  v21 = DCONST_DVARBOOL_mount_pull_away_enabled;
  if ( !DCONST_DVARBOOL_mount_pull_away_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pull_away_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( !v21->current.enabled || (pm->cmd.buttons & 0x80000000000000i64) != 0 )
  {
    *(_QWORD *)&ps->mountState.pullbackStartTime = 0i64;
    return 0;
  }
  type = ps->mountState.surface.type;
  __asm
  {
    vmovaps [rsp+120h+var_40], xmm6
    vmovaps [rsp+120h+var_60], xmm8
    vmovaps [rsp+120h+var_70], xmm9
  }
  v174 = type;
  __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( type != MOUNT_TYPE_TOP )
    goto LABEL_50;
  v24 = DCONST_DVARBOOL_mount_controls_project_input_desires;
  if ( !DCONST_DVARBOOL_mount_controls_project_input_desires && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_controls_project_input_desires") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( !v24->current.enabled )
  {
LABEL_50:
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm8, xmm0, cs:__real@bc010204
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm6, xmm1, cs:__real@3c010204
    }
    goto LABEL_51;
  }
  _EDX = pm->cmd.rightmove;
  _ER8 = pm->cmd.forwardmove;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vsqrtss xmm3, xmm0, xmm0
    vcvtss2sd xmm1, xmm3, xmm3
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( __CFADD__(_EDX * _EDX, _ER8 * _ER8) || _EDX * _EDX + _ER8 * _ER8 == 0 )
  {
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm6, xmm6, xmm6
    }
    goto LABEL_51;
  }
  __asm
  {
    vmovaps [rsp+120h+var_50], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps [rsp+120h+var_80], xmm10
    vmovaps [rsp+120h+var_90], xmm12
    vmovaps [rsp+120h+var_A0], xmm13
    vmovd   xmm4, edx
    vcvtdq2ps xmm4, xmm4
    vandps  xmm0, xmm4, xmm9
    vmovd   xmm5, r8d
    vcvtdq2ps xmm5, xmm5
    vandps  xmm1, xmm5, xmm9
    vmaxss  xmm2, xmm1, xmm0
    vmovss  xmm0, cs:__real@3c010204
    vdivss  xmm1, xmm0, xmm3
    vmulss  xmm0, xmm5, dword ptr [r12]
    vmulss  xmm3, xmm2, xmm1
    vmulss  xmm1, xmm4, dword ptr [r12+0Ch]
    vmulss  xmm2, xmm4, dword ptr [r12+10h]
    vaddss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, dword ptr [r12+4]
    vmulss  xmm12, xmm1, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmulss  xmm2, xmm4, dword ptr [r12+14h]
    vmulss  xmm0, xmm5, dword ptr [r12+8]
    vmovss  xmm4, dword ptr [r14+4]
    vmovss  xmm5, dword ptr [r14+8]
    vmulss  xmm13, xmm1, xmm3
    vaddss  xmm1, xmm2, xmm0
    vmovaps [rsp+120h+var_B0], xmm14
    vmulss  xmm14, xmm1, xmm3
    vmulss  xmm1, xmm4, dword ptr [rax+4]
    vmovss  xmm3, dword ptr [r14]
    vmulss  xmm0, xmm3, dword ptr [rax]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rax+8]
    vaddss  xmm0, xmm2, xmm1
    vandps  xmm0, xmm0, xmm9
    vsubss  xmm1, xmm0, xmm7
    vandps  xmm1, xmm1, xmm9
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( __CFADD__(_EDX * _EDX, _ER8 * _ER8) )
  {
    __asm
    {
      vmulss  xmm1, xmm4, dword ptr [r15+4]
      vmulss  xmm0, xmm3, dword ptr [r15]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, dword ptr [r15+8]
      vaddss  xmm0, xmm2, xmm1
      vandps  xmm0, xmm0, xmm9
      vsubss  xmm2, xmm0, xmm7
      vandps  xmm2, xmm2, xmm9
      vcomiss xmm2, cs:__real@3a83126f
    }
    if ( __CFADD__(_EDX * _EDX, _ER8 * _ER8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 368, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeBelow, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeBelow, entityUp )") )
      __debugbreak();
    ProjectPointOnPlane(edgeBelow, _R14, &outProjectedPoint);
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+120h+outProjectedPoint]
      vmovss  xmm5, dword ptr [rsp+120h+outProjectedPoint+4]
      vmovss  xmm6, dword ptr [rsp+120h+outProjectedPoint+8]
      vmovsd  xmm8, cs:__real@3d719799812dea11
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm0, xmm2, xmm1
      vcvtss2sd xmm2, xmm0, xmm0
      vcomisd xmm2, xmm8
    }
    if ( !(v75 | v86) )
      goto LABEL_42;
    v87 = 370;
    goto LABEL_39;
  }
  ProjectPointOnPlane(*(const vec3_t **)outProjectedPoint.v, _R14, &outProjectedPoint);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+120h+outProjectedPoint]
    vmovss  xmm5, dword ptr [rsp+120h+outProjectedPoint+4]
    vmovss  xmm6, dword ptr [rsp+120h+outProjectedPoint+8]
    vmovsd  xmm8, cs:__real@3d719799812dea11
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vcvtss2sd xmm2, xmm0, xmm0
    vcomisd xmm2, xmm8
  }
  if ( v75 | v86 )
  {
    v87 = 377;
LABEL_39:
    v94 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", v87, ASSERT_TYPE_ASSERT, "((1.0E-6 * 1.0E-6) < Vec3LengthSq( projectedWallNormal ))", (const char *)&queryFormat, "(ZERO_EPSILON * ZERO_EPSILON) < Vec3LengthSq( projectedWallNormal )");
    v75 = 0;
    if ( v94 )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+120h+outProjectedPoint+8]
      vmovss  xmm5, dword ptr [rsp+120h+outProjectedPoint+4]
      vmovss  xmm4, dword ptr [rsp+120h+outProjectedPoint]
    }
  }
LABEL_42:
  __asm
  {
    vmovss  xmm10, cs:__real@80000000
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, xmm10
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm2, xmm7, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+120h+outProjectedPoint], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+120h+outProjectedPoint+8], xmm0
    vmovss  xmm0, dword ptr [r13+4]
    vmulss  xmm3, xmm0, dword ptr [r14+4]
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  dword ptr [rsp+120h+outProjectedPoint+4], xmm1
    vmovss  xmm1, dword ptr [r14]
    vmulss  xmm2, xmm1, dword ptr [r13+0]
    vmulss  xmm1, xmm0, dword ptr [r14+8]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vandps  xmm2, xmm2, xmm9
    vsubss  xmm0, xmm2, xmm7
    vandps  xmm0, xmm0, xmm9
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v75 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 382, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeParallel, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeParallel, entityUp )") )
    __debugbreak();
  ProjectPointOnPlane(_R13, _R14, &v176);
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+120h+var_C8]
    vmovss  xmm5, dword ptr [rbp+47h+var_C8+4]
    vmovss  xmm6, dword ptr [rbp+47h+var_C8+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm0, xmm2, xmm1
    vcvtss2sd xmm2, xmm0, xmm0
    vcomisd xmm2, xmm8
  }
  if ( v75 | v86 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 384, ASSERT_TYPE_ASSERT, "((1.0E-6 * 1.0E-6) < Vec3LengthSq( projectedEdgeLeft ))", (const char *)&queryFormat, "(ZERO_EPSILON * ZERO_EPSILON) < Vec3LengthSq( projectedEdgeLeft )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm4, dword ptr [rsp+120h+var_C8]
      vmovss  xmm5, dword ptr [rbp+47h+var_C8+4]
      vmovss  xmm6, dword ptr [rbp+47h+var_C8+8]
    }
  }
  __asm
  {
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmulss  xmm2, xmm13, dword ptr [rsp+120h+outProjectedPoint+4]
    vcmpless xmm0, xmm3, xmm10
    vmovaps xmm10, [rsp+120h+var_80]
    vblendvps xmm0, xmm3, xmm7, xmm0
    vmulss  xmm3, xmm12, dword ptr [rsp+120h+outProjectedPoint]
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm5, xmm5, xmm1
    vmulss  xmm1, xmm14, dword ptr [rsp+120h+outProjectedPoint+8]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm7, xmm12
    vmovaps xmm12, [rsp+120h+var_90]
    vmovaps xmm7, [rsp+120h+var_50]
    vmulss  xmm0, xmm5, xmm13
    vmovaps xmm13, [rsp+120h+var_A0]
    vaddss  xmm8, xmm4, xmm1
    vmulss  xmm1, xmm6, xmm14
    vmovaps xmm14, [rsp+120h+var_B0]
    vaddss  xmm3, xmm2, xmm0
    vaddss  xmm6, xmm3, xmm1
    vandps  xmm6, xmm6, xmm9
  }
LABEL_51:
  v158 = DCONST_DVARBOOL_mount_pullforward_enabled;
  if ( !DCONST_DVARBOOL_mount_pullforward_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullforward_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v158);
  if ( v158->current.enabled )
    __asm { vandps  xmm8, xmm8, xmm9 }
  _R14 = DCONST_DVARFLT_mount_pullback_forward_move_fraction;
  if ( !DCONST_DVARFLT_mount_pullback_forward_move_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullback_forward_move_fraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vcomiss xmm8, dword ptr [r14+28h]
    vmovaps xmm8, [rsp+120h+var_60]
  }
  ps->mountState.pullbackStartTime = 0;
  v161 = DCONST_DVARBOOL_mount_pullside_into_cover_enabled;
  if ( !DCONST_DVARBOOL_mount_pullside_into_cover_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullside_into_cover_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v161);
  if ( v161->current.enabled )
  {
    __asm { vandps  xmm6, xmm6, xmm9 }
  }
  else if ( ps->mountState.surface.type == MOUNT_TYPE_LEFT )
  {
    __asm { vxorps  xmm6, xmm6, cs:__xmm@80000000800000008000000080000000 }
  }
  _R14 = DCONST_DVARFLT_mount_pullside_side_move_fraction;
  __asm { vmovaps xmm9, [rsp+120h+var_70] }
  if ( !DCONST_DVARFLT_mount_pullside_side_move_fraction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullside_side_move_fraction") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_R14);
  __asm
  {
    vcomiss xmm6, dword ptr [r14+28h]
    vmovaps xmm6, [rsp+120h+var_40]
  }
  if ( v75 | v86 )
  {
    ps->mountState.pullsideStartTime = 0;
  }
  else if ( !ps->mountState.pullsideStartTime )
  {
    ps->mountState.pullsideStartTime = pm->cmd.serverTime;
  }
  pullbackStartTime = ps->mountState.pullbackStartTime;
  if ( pullbackStartTime > 0 )
  {
    v166 = DCONST_DVARINT_mount_pullback_time_ms;
    v167 = pm->cmd.serverTime - pullbackStartTime;
    if ( !DCONST_DVARINT_mount_pullback_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_pullback_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v166);
    if ( v166->current.integer < v167 )
      return 1;
  }
  pullsideStartTime = ps->mountState.pullsideStartTime;
  if ( pullsideStartTime > 0 )
  {
    if ( v174 == MOUNT_TYPE_TOP )
    {
      v170 = DCONST_DVARINT_mount_pullside_top_time_ms;
      v171 = "mount_pullside_top_time_ms";
    }
    else
    {
      v170 = DCONST_DVARINT_mount_pullside_side_time_ms;
      v171 = "mount_pullside_side_time_ms";
    }
    v169 = pm->cmd.serverTime - pullsideStartTime;
    if ( Dvar_GetInt_Internal_DebugName(v170, v171) < v169 )
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
  MountEdgeProperties v8; 

  _RBX = this;
  this->MountSurfaceAbbreviatedProperties = *mount;
  *(_QWORD *)&this->adjFraction = 0i64;
  if ( EdgeId::IsValid(&this->adjId) )
  {
    MountEdgeProperties::MountEdgeProperties(&v8);
    __asm { vmovss  xmm3, dword ptr [rbx+0Ch]; argFraction }
    MountEdgeProperties::Initialize(&v8, handler, _RBX->id, *(float *)&_XMM3, _RBX->normalFaceIndex, _RBX->type);
    MountEdgeProperties::TransitionToAdjacent(&v8, handler, _RBX->adjId, 0);
    __asm { vmovss  xmm0, [rsp+0A8h+var_78.fraction] }
    normalFaceIndex = v8.normalFaceIndex;
    __asm { vmovss  dword ptr [rbx+30h], xmm0 }
    _RBX->adjNormalFaceIndex = normalFaceIndex;
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rdx+24h]
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
  bool IsActive; 
  char v8; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v11; 
  unsigned __int64 buttons; 
  bool v13; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  char v18; 
  char v19; 
  bool IsTopMountYawClamped; 
  bool v24; 
  bool IsViewangleTooShallow; 
  bool v27; 
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
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 961, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 962, ASSERT_TYPE_ASSERT, "( outResults ) != ( nullptr )", "%s != %s\n\t%p, %p", "outResults", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  IsActive = BG_ContextMount_IsActive(_RDI);
  v8 = _RDI->mountState.flags & 1;
  if ( IsActive )
  {
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( _RDI->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RDI, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RDI);
    v11 = BG_UsingAlternate(_RDI);
    buttons = pm->cmd.buttons;
    v13 = v11;
    if ( (buttons & 0x200) == 0 )
    {
      *(_WORD *)&outResults->cancelToLower = 0;
      strncpy(outResults->failReason, "player released ADS", 0x80ui64);
      return 0;
    }
    v15 = buttons & ~pm->oldcmd.buttons;
    v16 = (unsigned __int16)buttons & (unsigned __int16)~LOWORD(pm->oldcmd.buttons) & 0x5C0;
    if ( (pm->cmd.stateFlags & 8) != 0 )
      v17 = (buttons & 0x80000000000i64) == 0;
    else
      v17 = v15 & 0x80000000000i64;
    if ( v17 || v16 )
    {
      outResults->cancelToLower = (v15 & 0x4C0) != 0;
      outResults->putOnCooldown = (v15 & 0x4C0) != 0;
      strncpy(outResults->failReason, "player button press cancelled mount", 0x80ui64);
      return 0;
    }
    BG_GetMountEdgeToEyeDistance((const ContextMountType)_RDI->mountState.surface.type, p_weapon, v11, &outForward, &outAbove);
    __asm
    {
      vmovss  xmm0, [rsp+148h+outForward]
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
    }
    if ( v18 | v19 )
      goto LABEL_37;
    __asm
    {
      vmovss  xmm0, [rsp+148h+outAbove]
      vcomiss xmm0, xmm1
    }
    if ( v18 | v19 )
    {
LABEL_37:
      strncpy(outResults->failReason, "weapon has invalid edgeToEyeDistance", 0x80ui64);
      return 0;
    }
    if ( v8 )
    {
      BG_GetMountEnterExitDuration((const ContextMountType)_RDI->mountState.surface.type, p_weapon, v13, &outEnterDurationMs, &outExitDurationMs);
      WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
      AnglesToAxis(&_RDI->viewangles, &axis);
      MountSurfaceProperties::Initialize(&mount, pm->m_bgHandler, &_RDI->mountState.surface);
      BG_ContextMount_CalcMountVectors(pm->m_bgHandler, &mount, &outNormal, &outParallel, &outBelow);
      if ( BG_ContextMount_UpdatePlayerPullingAway(pm, pmla, &outUp, &outParallel, &outNormal, &outBelow) )
      {
        outResults->putOnCooldown = 1;
        strncpy(outResults->failReason, "player pulled back from edge", 0x80ui64);
        return 0;
      }
      if ( _RDI->mountState.surface.type != MOUNT_TYPE_TOP || (IsTopMountYawClamped = BG_IsTopMountYawClamped(p_weapon, v13), v24 = !IsTopMountYawClamped) )
      {
        IsViewangleTooShallow = BG_ContextMount_IsViewangleTooShallow((const ContextMountType)_RDI->mountState.surface.type, &axis, &outUp, &outParallel);
        v24 = !IsViewangleTooShallow;
        if ( IsViewangleTooShallow )
        {
          outResults->putOnCooldown = 1;
          strncpy(outResults->failReason, "view vector nearly parallel to mount edge", 0x80ui64);
          return 0;
        }
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vcomiss xmm0, dword ptr [rdi+730h]
      }
      v27 = !v24 && !_RDI->weapCommon.fWeaponPosFracIn;
      if ( outEnterDurationMs + gracePeriodMs + _RDI->mountState.startTime < pm->cmd.serverTime && v27 )
      {
        *(_WORD *)&outResults->cancelToLower = 0;
        strncpy(outResults->failReason, "player not in ADS", 0x80ui64);
        return 0;
      }
    }
  }
  if ( PM_CalcIsAdsAllowed(pm) )
    return BG_ContextMount_IsValidMountState(pm->weaponMap, _RDI, outResults);
  strncpy(outResults->failReason, "player is not permitted to enter ADS in current state", 0x80ui64);
  return 0;
}

/*
==============
PM_ContextMount_ClampViewAngles
==============
*/
bool PM_ContextMount_ClampViewAngles(const MountPlayerProperties *player, const MountSurfaceDetailedProperties *mountProperties, pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v10; 
  const dvar_t *v14; 
  vec2_t maxClampDeg; 
  bool result; 
  int outEnterDurationMs; 
  int outExitDurationMs; 
  vec3_t worldAnglesCenter; 
  viewClampState clamp; 

  __asm { vmovaps [rsp+118h+var_38], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 143, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 143, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  BG_GetMountEnterExitDuration((const ContextMountType)mountProperties->mount.type, &player->weapon, player->isAlternate, &outEnterDurationMs, &outExitDurationMs);
  v10 = DCONST_DVARINT_mount_viewclamp_accel_duration_ms;
  if ( !DCONST_DVARINT_mount_viewclamp_accel_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_viewclamp_accel_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
  }
  v14 = DCONST_DVARINT_mount_viewclamp_decel_duration_ms;
  __asm
  {
    vmulss  xmm0, xmm0, xmm6
    vmovss  [rsp+118h+clamp.accelTime], xmm0
  }
  if ( !DCONST_DVARINT_mount_viewclamp_decel_duration_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_viewclamp_decel_duration_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, xmm6
    vmovss  [rsp+118h+clamp.decelTime], xmm1
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, [rsp+118h+outEnterDurationMs]
    vmulss  xmm0, xmm2, xmm6
    vmovss  [rsp+118h+clamp.totalTime], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+4B8h]
    vmulss  xmm2, xmm1, xmm6
    vmovss  [rsp+118h+clamp.startTime], xmm2
  }
  clamp.min.start = ps->mountState.startViewAngles;
  clamp.max.start = ps->mountState.startViewAngles;
  clamp.min.goal = mountProperties->minClampDeg;
  maxClampDeg = mountProperties->maxClampDeg;
  __asm
  {
    vmovss  dword ptr [rsp+118h+clamp.resistMin.start], xmm0
    vmovss  dword ptr [rsp+118h+clamp.resistMin.start+4], xmm0
    vmovss  dword ptr [rsp+118h+clamp.resistMax.start], xmm0
    vmovss  dword ptr [rsp+118h+clamp.resistMax.start+4], xmm0
    vmovss  dword ptr [rsp+118h+worldAnglesCenter], xmm0
    vmovss  dword ptr [rsp+118h+worldAnglesCenter+4], xmm0
    vmovss  dword ptr [rsp+118h+worldAnglesCenter+8], xmm0
  }
  clamp.max.goal = maxClampDeg;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+1Ch]
  }
  clamp.resistMin.goal = mountProperties->minResistDeg;
  __asm { vmulss  xmm0, xmm0, xmm6; currentTime }
  clamp.resistMax.goal = mountProperties->maxResistDeg;
  BG_UpdateViewAngleClamp(*(const float *)&_XMM0, &worldAnglesCenter, &clamp, ps);
  result = 1;
  __asm { vmovaps xmm6, [rsp+118h+var_38] }
  return result;
}

/*
==============
PM_ContextMount_Debug
==============
*/
void PM_ContextMount_Debug(const pmove_t *const pm)
{
  const dvar_t *v6; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v10; 
  __int64 v22; 
  vec3_t vec; 
  vec3_t forward; 
  int v44[4]; 
  int v45[4]; 
  int v46[4]; 
  Bounds bounds; 
  vec3_t outUp; 
  WorldUpReferenceFrame v49; 
  char v50; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 696, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 696, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v6 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rsi+4C0h]
    }
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( _RSI->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RSI, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RSI);
    v10 = BG_UsingAlternate(_RSI);
    __asm
    {
      vmovsd  xmm0, qword ptr [rsi+30h]
      vmovsd  qword ptr [rsp+170h+vec], xmm0
    }
    vec.v[2] = _RSI->origin.v[2];
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v49, _RSI, pm->m_bgHandler);
    WorldUpReferenceFrame::GetUpVector(&v49, &outUp);
    __asm { vmovss  xmm1, dword ptr [rsi+1E8h]; height }
    WorldUpReferenceFrame::AddUpContribution(&v49, *(float *)&_XMM1, &vec);
    BG_ContextMount_GetEyePoint(pm->m_bgHandler, &_RSI->mountState, &outUp, p_weapon, v10, &vec);
    if ( dword_148A5F73C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_148A5F73C);
      if ( dword_148A5F73C == -1 )
      {
        *(double *)&_XMM0 = BG_ContextMount_CalcCameraMinDistToMountBrush();
        __asm { vmovaps xmm6, xmm0 }
        BG_ContextMount_CalcCameraMinDistToPlayerClip();
        __asm
        {
          vmaxss  xmm1, xmm6, xmm0
          vmovss  cs:eyeRadius, xmm1
        }
        j__Init_thread_footer(&dword_148A5F73C);
      }
    }
    __asm { vmovss  xmm2, cs:eyeRadius }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, BgHandler_vtbl *, vec4_t *, int, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &vec, pm->m_bgHandler->__vftable, &colorOrange, depthTest_2, 0);
    AngleVectors(&_RSI->viewangles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, cs:__real@41c00000
      vmulss  xmm1, xmm3, dword ptr [rsp+170h+forward]
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+vec]
      vmovss  [rsp+170h+var_108], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+170h+forward+4]
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+vec+4]
      vmovss  [rsp+170h+var_104], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+170h+forward+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+170h+vec+8]
      vmovss  [rsp+170h+var_100], xmm2
    }
    pm->m_bgHandler->DebugLine((BgHandler *)pm->m_bgHandler, &vec, (const vec3_t *)v44, &colorOrange, depthTest_2, 0);
    __asm { vmovss  xmm2, cs:__real@40000000 }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &_RSI->origin, v22, &colorBlue, 0, 0);
    _RAX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+70h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+70h+bounds.halfSize+4], xmm1
    }
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+70h+bounds.midPoint]
      vaddss  xmm0, xmm4, dword ptr [rsi+30h]
      vmovss  [rbp+70h+var_E8], xmm0
      vmovss  xmm1, dword ptr [rbp+70h+bounds.midPoint+4]
      vaddss  xmm0, xmm1, dword ptr [rsi+34h]
      vmovss  [rbp+70h+var_E4], xmm0
      vmovss  xmm3, dword ptr [rbp+70h+bounds.midPoint+8]
      vaddss  xmm0, xmm3, dword ptr [rsi+38h]
      vaddss  xmm0, xmm0, dword ptr [rbp+70h+bounds.halfSize+8]
      vmovss  [rbp+70h+var_E0], xmm0
      vaddss  xmm0, xmm4, dword ptr [rsi+30h]
      vmovss  [rsp+170h+var_F8], xmm0
      vaddss  xmm1, xmm1, dword ptr [rsi+34h]
      vmovss  [rsp+170h+var_F4], xmm1
      vaddss  xmm0, xmm3, dword ptr [rsi+38h]
      vsubss  xmm1, xmm0, dword ptr [rbp+70h+bounds.halfSize+8]
      vmovss  [rbp+70h+var_F0], xmm1
      vmovss  xmm3, dword ptr [rbp+70h+bounds.halfSize]
    }
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, v46, v45);
  }
  _R11 = &v50;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PM_ContextMount_Finalize
==============
*/
void PM_ContextMount_Finalize(pmove_t *const pm, const pml_t *const pml, ContextMountType iconType, vec3_t *iconPos, const EdgeId *iconEdge, bool foundValidEdge, bool isEarlyOut)
{
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v18; 
  int serverTime; 
  int flags; 
  unsigned int v22; 
  playerState_s *ps; 
  const dvar_t *v24; 
  playerState_s *v25; 
  bool IsActive; 
  bool v27; 
  bool v28; 
  bool v29; 
  bool v30; 
  bool updated; 
  bool v32; 
  int v33; 
  unsigned int v34; 
  playerState_s *v35; 
  vec3_t *v36; 
  EdgeId *mountHint; 
  const BgHandler *m_bgHandler; 
  BgWeaponMap *v39; 
  int v40; 
  ContextMountIconType v41; 
  int v42; 
  char v44; 
  bool v45; 
  bool v49; 
  __int64 mountEndTime; 
  __int64 mountEndTimea; 
  __int64 synchronizeWithMount; 
  double synchronizeWithMounta; 
  double v59; 
  double v60; 
  bool v61; 
  bool v62; 
  int outExitDurationMs; 
  int outEnterDurationMs; 
  int exitDurationMs; 
  int enterDurationMs; 
  vec3_t *in1; 
  vec3_t out; 
  tmat43_t<vec3_t> axis; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  in1 = iconPos;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 756, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 756, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_weapon = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( _RSI->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RSI, &pm->cmd.weapon) )
    p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RSI);
  v18 = BG_UsingAlternate(_RSI);
  serverTime = pm->cmd.serverTime;
  v61 = v18;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( _RSI->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)_RSI->mountState.surface.type, p_weapon, v18, &outEnterDurationMs, &outExitDurationMs);
    *(double *)&_XMM0 = BG_ContextMount_CalculateMountFraction((const ContextMountType)_RSI->mountState.surface.type, outEnterDurationMs, outExitDurationMs, serverTime, _RSI->mountState.startTime, _RSI->mountState.endTime);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0; value }
    *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
  }
  __asm { vmovss  dword ptr [rsi+4C0h], xmm0 }
  if ( !BG_ContextMount_IsActive(_RSI) )
  {
    __asm { vcomiss xmm8, dword ptr [rsi+4C0h] }
    _RSI->mountState.surface.type = MOUNT_TYPE_NONE;
  }
  if ( !isEarlyOut )
  {
    flags = _RSI->mountState.flags;
    if ( foundValidEdge )
      v22 = flags | 0x20;
    else
      v22 = flags & 0xFFFFFFDF;
    _RSI->mountState.flags = v22;
  }
  PM_GameInterface_ContextMount_Finalize(pm, pml);
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->mountState.flags & 2) != 0 )
  {
    v24 = DCONST_DVARINT_mount_controls_cooldown_duration;
    if ( !DCONST_DVARINT_mount_controls_cooldown_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_controls_cooldown_duration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( pm->cmd.serverTime > v24->current.integer + ps->mountState.endTime )
      ps->mountState.flags &= ~2u;
  }
  v25 = pm->ps;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 664, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  IsActive = BG_ContextMount_IsActive(v25);
  v27 = BG_PlayerDualWielding(v25) != 0;
  v62 = v27;
  if ( !IsActive )
  {
    if ( (v25->mountState.flags & 4) == 0 )
      goto LABEL_49;
    goto LABEL_34;
  }
  if ( v25->mountState.surface.type != MOUNT_TYPE_TOP )
  {
LABEL_34:
    v28 = 0;
    goto LABEL_35;
  }
  v28 = 1;
LABEL_35:
  v29 = IsActive && v25->mountState.surface.type == MOUNT_TYPE_LEFT;
  v30 = IsActive && v25->mountState.surface.type == MOUNT_TYPE_RIGHT;
  updated = PM_ContextMount_UpdateGesture(pm, p_weapon, v61, v27, v28, GESTUREANIMTYPE_MOUNT_TOP, 1);
  v32 = PM_ContextMount_UpdateGesture(pm, p_weapon, v61, v62, v29, GESTUREANIMTYPE_MOUNT_LEFT, 1);
  v18 = v61;
  v45 = ((v32 || updated) | PM_ContextMount_UpdateGesture(pm, p_weapon, v61, v62, v30, GESTUREANIMTYPE_MOUNT_RIGHT, 1)) == 0;
  v33 = v25->mountState.flags;
  if ( v45 )
    v34 = v33 & 0xFFFFFFFB;
  else
    v34 = v33 | 4;
  v25->mountState.flags = v34;
LABEL_49:
  if ( !isEarlyOut )
  {
    v35 = pm->ps;
    if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 219, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
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
      v36 = in1;
      pm->mountHint->type = iconType;
      pm->mountHint->origin = *v36;
      mountHint = (EdgeId *)pm->mountHint;
      if ( iconType )
      {
        mountHint[4] = *iconEdge;
        m_bgHandler = pm->m_bgHandler;
        v39 = pm->weaponMap;
        AnglesToAxis(&v35->viewangles, (tmat33_t<vec3_t> *)&axis);
        BG_GetPlayerEyePosition(v39, v35, &axis.m[3], m_bgHandler);
        MatrixTransposeTransformVector43(in1, &axis, &out);
        v40 = 0;
        if ( iconType == MOUNT_TYPE_TOP )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+138h+out+8]
            vcomiss xmm0, xmm8
          }
          LOBYTE(v40) = iconType == MOUNT_TYPE_NONE;
          v41 = v40 + 1;
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+138h+out+4]
            vcomiss xmm0, xmm8
          }
          LOBYTE(v40) = iconType != MOUNT_TYPE_NONE;
          v41 = v40 + 3;
        }
        pm->mountHint->reticleIconType = v41;
        pm->mountHint->commandTime = v35->commandTime;
      }
      else
      {
        mountHint->m_entityIndex = 0;
      }
    }
  }
  PM_ContextMount_Debug(pm);
  BG_GetMountEnterExitDuration((const ContextMountType)_RSI->mountState.surface.type, p_weapon, v18, &enterDurationMs, &exitDurationMs);
  v42 = pm->cmd.serverTime;
  if ( _RSI->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)_RSI->mountState.surface.type, p_weapon, v18, &outExitDurationMs, &outEnterDurationMs);
    *(double *)&_XMM0 = BG_ContextMount_CalculateMountFraction((const ContextMountType)_RSI->mountState.surface.type, outExitDurationMs, outEnterDurationMs, v42, _RSI->mountState.startTime, _RSI->mountState.endTime);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0; value }
    *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
  }
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = BG_ContextMount_CalculateMountFraction((const ContextMountType)_RSI->mountState.surface.type, enterDurationMs, exitDurationMs, _RSI->serverTime, _RSI->mountState.startTime, _RSI->mountState.endTime);
  __asm
  {
    vucomiss xmm7, xmm0
    vmovaps xmm6, xmm0
  }
  if ( !v45 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm0
      vmovsd  [rsp+138h+var_F8], xmm1
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+138h+var_100], xmm2
    }
    v49 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 811, ASSERT_TYPE_ASSERT, "( mountFractionPs ) == ( mountFraction )", "%s == %s\n\t%g, %g", "mountFractionPs", "mountFraction", v59, v60);
    v44 = 0;
    v45 = !v49;
    if ( v49 )
      __debugbreak();
  }
  __asm { vcomiss xmm6, xmm8 }
  if ( !(v44 | v45) && _RSI->mountState.surface.type == MOUNT_TYPE_NONE )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  qword ptr [rsp+138h+synchronizeWithMount], xmm0
    }
    LODWORD(mountEndTimea) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 816, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Mount type (%i) is MOUNT_TYPE_NONE but mount fraction (%f) is nonzero.", mountEndTimea, synchronizeWithMounta) )
      __debugbreak();
  }
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
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
  int v21; 

  _R14 = mountProperties;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 248, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 249, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  _RBX = inOutMountState;
  if ( !inOutMountState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 250, ASSERT_TYPE_ASSERT, "(inOutMountState)", (const char *)&queryFormat, "inOutMountState") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 251, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 251, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _R14->type == MOUNT_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 253, ASSERT_TYPE_ASSERT, "( mountProperties.type ) != ( MOUNT_TYPE_NONE )", "%s != %s\n\t%i, %i", "mountProperties.type", "MOUNT_TYPE_NONE", 0, 0i64) )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [r14+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
  }
  if ( justStartedMount )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@c2b40000; min
      vmovaps [rsp+98h+var_28], xmm6
      vmovss  xmm6, cs:__real@42b40000
    }
    inOutMountState->startTime = pm->cmd.serverTime;
    inOutMountState->flags = 0;
    *(_QWORD *)&inOutMountState->pullbackStartTime = 0i64;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1E8h]; val
      vmovaps xmm2, xmm6; max
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    v21 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0xBu);
    __asm { vmovaps xmm1, xmm6; maxAbsValueSize }
    *(double *)&_XMM0 = MSG_UnpackSignedFloat(v21, *(float *)&_XMM1, 0xBu);
    __asm { vmovss  dword ptr [rbx+6Ch], xmm0 }
    if ( PM_GetEffectiveStance(_RSI) || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RSI->pm_flags, ACTIVE, 0x1Du) )
      inOutMountState->flags |= 0x10u;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1D8h]
      vmovss  xmm7, cs:__real@3f000000
      vmovss  xmm6, cs:__real@43360b61
      vmovss  dword ptr [rbx+64h], xmm0
      vmulss  xmm0, xmm0, xmm6
      vaddss  xmm1, xmm0, xmm7
    }
    inOutMountState->startViewAngles.v[1] = _RSI->viewangles.v[1];
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, cs:__real@37800000
      vaddss  xmm1, xmm3, xmm7
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmovss  dword ptr [rbx+64h], xmm0
      vmulss  xmm0, xmm6, dword ptr [rbx+68h]
      vaddss  xmm3, xmm0, xmm7
      vroundss xmm0, xmm8, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_EAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, cs:__real@37800000
      vaddss  xmm2, xmm4, xmm7
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000
      vmovss  dword ptr [rbx+68h], xmm0
    }
    BG_AddPredictableEventToPlayerstate(EV_MOUNT_ENTER, inOutMountState->surface.type, pm->cmd.serverTime, pm->weaponMap, pm->ps);
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_48]
      vmovaps xmm7, [rsp+98h+var_38]
      vmovaps xmm6, [rsp+98h+var_28]
    }
  }
}

/*
==============
PM_ContextMount_TryMaintainEdge
==============
*/
char PM_ContextMount_TryMaintainEdge(pmove_t *const pm, pml_t *const pml, MountFailureResult *outResults)
{
  BgWeaponMap *weaponMap; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties outSurfaceDetail; 
  tmat33_t<vec3_t> axis; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1121, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1121, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1122, ASSERT_TYPE_ASSERT, "( outResults ) != ( nullptr )", "%s != %s\n\t%p, %p", "outResults", "nullptr", NULL, NULL) )
    __debugbreak();
  *(_WORD *)&outResults->cancelToLower = 0;
  outResults->failReason[0] = 0;
  _R13 = &_RDI->mountState;
  MountPlayerProperties::MountPlayerProperties(&player);
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsp+1D0h+player.origin], xmm0
  }
  player.origin.v[2] = _RDI->origin.v[2];
  MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
  __asm
  {
    vmovsd  xmm0, qword ptr [r13+40h]
    vmovsd  qword ptr [rsp+1D0h+player.eyeOrigin], xmm0
  }
  player.eyeOrigin.v[2] = _RDI->mountState.eyePoint.v[2];
  AnglesToAxis(&_RDI->viewangles, &player.eyeBasis);
  _R15 = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( _RDI->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RDI, &pm->cmd.weapon) )
    _R15 = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RDI);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15]
    vmovups ymmword ptr [rbp+0D0h+player.weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [r15+20h]
    vmovups xmmword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [r15+30h]
    vmovsd  qword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&player.weapon.weaponCamo = *(_DWORD *)&_R15->weaponCamo;
  player.isAlternate = BG_UsingAlternate(_RDI);
  player.handler = pm->m_bgHandler;
  player.ps = _RDI;
  AnglesToAxis(&pml->mountState.previousViewangles, &axis);
  MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&outSurfaceDetail);
  if ( PM_ContextMount_FindMountEdge_Maintain(&player, pml, &axis, &outSurfaceDetail) )
  {
    if ( outSurfaceDetail.mount.type )
    {
      PM_ContextMount_SetEdgeState(pm, pml, &outSurfaceDetail.mount, 0, &_RDI->mountState);
      if ( PM_ContextMount_ClampViewAngles(&player, &outSurfaceDetail, pm) )
      {
        __asm { vmovss  xmm1, dword ptr [rdi+1DCh]; oldYaw }
        PM_UpdateViewAngles_RangeLimited(_RDI, *(const float *)&_XMM1);
        if ( PM_ContextMount_CalcMountEyePoint(&outSurfaceDetail, &player, &_RDI->mountState.eyePoint) )
        {
          PM_ContextMount_UpdateMoverEyePoint(&player, &_RDI->mountState);
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
  BgWeaponMap *weaponMap; 
  int *p_weaponState; 
  const BgHandler *m_bgHandler; 
  bool MountEdge_Initial; 
  bool v25; 
  PlayerHandIndex v26; 
  int WeaponHand; 
  __int64 v28; 
  __int64 isQuickMelee; 
  __int64 applyPendingDamage; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties outSurfaceDetail; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1216, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _R15 = pm->ps;
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1216, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  MountPlayerProperties::MountPlayerProperties(&player);
  MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&outSurfaceDetail);
  _R13 = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  p_weaponState = &_R15->weapState[0].weaponState;
  if ( _R15->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _R15, &pm->cmd.weapon) )
    _R13 = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _R15);
  m_bgHandler = pm->m_bgHandler;
  Sys_ProfBeginNamedEvent(0xFF808080, "BG_ContextMount_FindMountEdge");
  __asm
  {
    vmovsd  xmm0, qword ptr [r15+30h]
    vmovsd  qword ptr [rsp+1D0h+player.origin], xmm0
  }
  player.origin.v[2] = _R15->origin.v[2];
  MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
  __asm
  {
    vmovss  xmm3, dword ptr [r15+1E8h]
    vmulss  xmm1, xmm3, dword ptr [rbp+0D0h+player.worldBasis+18h]
    vaddss  xmm2, xmm1, dword ptr [r15+30h]
    vmovss  dword ptr [rsp+1D0h+player.eyeOrigin], xmm2
    vmulss  xmm1, xmm3, dword ptr [rbp+0D0h+player.worldBasis+1Ch]
    vaddss  xmm2, xmm1, dword ptr [r15+34h]
    vmovss  dword ptr [rbp+0D0h+player.eyeOrigin+4], xmm2
    vmulss  xmm1, xmm3, dword ptr [rbp+0D0h+player.worldBasis+20h]
    vaddss  xmm2, xmm1, dword ptr [r15+38h]
    vmovss  dword ptr [rbp+0D0h+player.eyeOrigin+8], xmm2
  }
  AnglesToAxis(&_R15->viewangles, &player.eyeBasis);
  __asm
  {
    vmovups ymm0, ymmword ptr [r13+0]
    vmovups ymmword ptr [rbp+0D0h+player.weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [r13+20h]
    vmovups xmmword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [r13+30h]
    vmovsd  qword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+15h], xmm0
  }
  *(_DWORD *)&player.weapon.weaponCamo = *(_DWORD *)&_R13->weaponCamo;
  player.isAlternate = BG_UsingAlternate(_R15);
  player.handler = m_bgHandler;
  player.ps = _R15;
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
  PM_GameInterface_ContextMount_TryMountEdge(pm, pml, &outSurfaceDetail.mount, MountEdge_Initial, &_R15->mountState);
  v25 = PM_ContextMount_ButtonEnterMount(pm);
  if ( !*outFoundEdge || !v25 )
    return 0;
  v26 = WEAPON_HAND_DEFAULT;
  WeaponHand = BG_PlayerLastWeaponHand(pm->weaponMap, _R15);
  if ( WeaponHand >= 0 )
  {
    v28 = WeaponHand + 1i64;
    do
    {
      if ( *p_weaponState == 24 )
        PM_Weapon_MeleeEnd(pm, pml, 0, v26, 0, 0, 0);
      ++v26;
      p_weaponState += 20;
      --v28;
    }
    while ( v28 );
  }
  if ( PM_GetEffectiveStance(_R15) == PM_EFF_STANCE_PRONE )
    BG_AddPredictableEventToPlayerstate(EV_STANCE_FORCE_CROUCH, 0, pm->cmd.serverTime, pm->weaponMap, _R15);
  PM_ContextMount_SetEdgeState(pm, pml, &outSurfaceDetail.mount, 1, &_R15->mountState);
  if ( !PM_ContextMount_CalcMountEyePoint(&outSurfaceDetail, &player, &_R15->mountState.eyePoint) || !PM_ContextMount_ClampViewAngles(&player, &outSurfaceDetail, pm) )
    return 0;
  PM_ContextMount_UpdateMoverEyePoint(&player, &_R15->mountState);
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
  const Gesture *v14; 
  unsigned int IndexFromGesture; 
  bool IsPlayingByIndex; 
  bool IsStoppingByIndex; 
  GestureAnimationSettings *AnimationSettings; 
  int mountContactTime; 
  int v31; 
  bool v33; 
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
  v14 = Gesture;
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
        _RAX = BG_GesturePriority_SetupRequest(&result, pm->weaponMap, ps, pm->m_bgHandler, IndexFromGesture, pm->cmd.serverTime);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+0D8h+request.weaponMap], ymm0
          vmovups xmm1, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rsp+0D8h+request.startTime], xmm1
          vmovsd  xmm0, qword ptr [rax+30h]
          vmovsd  qword ptr [rsp+0D8h+request.cancelTransitions], xmm0
        }
        if ( synchronizeWithMount )
        {
          BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, weapon, isAlternate, &outEnterDurationMs, &outExitDurationMs);
          __asm
          {
            vmovss  xmm2, cs:__real@3f800000; max
            vsubss  xmm0, xmm2, dword ptr [rsi+4C0h]; val
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, [rsp+0D8h+outEnterDurationMs]
            vmulss  xmm0, xmm0, xmm1
            vcvttss2si esi, xmm0
          }
          AnimationSettings = BG_Gesture_GetAnimationSettings(v14);
          if ( !AnimationSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 620, ASSERT_TYPE_ASSERT, "(animSettings)", (const char *)&queryFormat, "animSettings") )
            __debugbreak();
          mountContactTime = AnimationSettings->mountContactTime;
          v31 = 0;
          if ( mountContactTime - _ESI > 0 )
            v31 = mountContactTime - _ESI;
          request.startTime = v31;
          request.slotBlendDuration = blendDurationMs;
          request.slotBlend = v31 > 0;
          if ( mountContactTime <= v31 )
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
      _EDI = 0;
      if ( synchronizeWithMount && Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_mount_anim_sync_out, "mount_anim_sync_out") )
      {
        v33 = 1;
        BG_GetMountEnterExitDuration((const ContextMountType)ps->mountState.surface.type, weapon, isAlternate, &outExitDurationMs, &outEnterDurationMs);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, [rsp+0D8h+outEnterDurationMs]
          vmulss  xmm0, xmm0, dword ptr [rsi+4C0h]
          vcvttss2si edi, xmm0
        }
      }
      else
      {
        v33 = 0;
      }
      BG_Gesture_StopBySlot(ps, outSlot, pm->cmd.serverTime, v33, _EDI, 0);
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
  int startTime; 
  char v23; 
  const dvar_t *v60; 
  __int64 v62; 
  Weapon *p_weapon; 
  BgWeaponMap *weaponMap; 
  bool v77; 
  int v78; 
  playerState_s *ps; 
  const dvar_t *v101; 
  __int64 v102; 
  ContextMountType type; 
  PlayerAnimScriptMoveType v118; 
  char *fmt; 
  vec3_t *outParallel; 
  int outEnterDurationMs; 
  int outExitDurationMs[2]; 
  __int64 v126; 
  vec3_t point; 
  vec3_t outProjectedPoint; 
  int v129; 
  int v132; 
  Bounds bounds; 
  vec3_t outUp; 
  vec3_t outNormal; 
  vec3_t outEdgePoint; 
  vec3_t outBelow; 
  vec3_t v140; 
  char v141; 
  void *retaddr; 

  _RAX = &retaddr;
  v126 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1455, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1456, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RSI = pm->ps;
  if ( !_RSI )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1456, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 80, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  startTime = _RSI->mountState.startTime;
  if ( (!startTime || startTime <= _RSI->mountState.endTime) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1457, ASSERT_TYPE_ASSERT, "(BG_ContextMount_IsActive( ps ))", (const char *)&queryFormat, "BG_ContextMount_IsActive( ps )") )
    __debugbreak();
  if ( !pml->mountState.isPreviousViewangleValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1460, ASSERT_TYPE_ASSERT, "(pml->mountState.isPreviousViewangleValid)", (const char *)&queryFormat, "pml->mountState.isPreviousViewangleValid") )
    __debugbreak();
  if ( !pm->isExtrapolation && !pml->mountState.isStateUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1462, ASSERT_TYPE_ASSERT, "(pm->isExtrapolation || pml->mountState.isStateUpdated)", (const char *)&queryFormat, "pm->isExtrapolation || pml->mountState.isStateUpdated") )
    __debugbreak();
  pml->mountState.isMoveUpdated = 1;
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_UpdateMove");
  WorldUpReferenceFrame::GetUpVector(&pm->refFrame, &outUp);
  __asm { vmovss  xmm2, dword ptr [rsi+490h]; fraction }
  Edge_CalculateVectors(pm->m_bgHandler, _RSI->mountState.surface.id, *(float *)&_XMM2, _RSI->mountState.surface.normalFaceIndex, &outNormal, &v140, &outBelow);
  __asm { vmovss  xmm2, dword ptr [rsi+490h]; fraction }
  Edge_CalculatePoint(pm->m_bgHandler, _RSI->mountState.surface.id, *(float *)&_XMM2, &outEdgePoint);
  BG_GetSuitDef(_RSI->suitIndex);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+60h+outNormal]
    vmulss  xmm3, xmm0, dword ptr [rbp+60h+outUp]
    vmovss  xmm1, dword ptr [rbp+60h+outNormal+4]
    vmulss  xmm2, xmm1, dword ptr [rbp+60h+outUp+4]
    vaddss  xmm4, xmm3, xmm2
    vmovss  xmm0, dword ptr [rbp+60h+outNormal+8]
    vmulss  xmm1, xmm0, dword ptr [rbp+60h+outUp+8]
    vaddss  xmm3, xmm4, xmm1
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm7, cs:__real@3f800000
    vsubss  xmm0, xmm3, xmm7
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1495, ASSERT_TYPE_ASSERT, "(!Vec3IsParallel( edgeNormalVec, entityUp ))", (const char *)&queryFormat, "!Vec3IsParallel( edgeNormalVec, entityUp )") )
    __debugbreak();
  ProjectPointOnPlane(&outNormal, &vec3_origin, &outUp, &outProjectedPoint);
  __asm
  {
    vmovss  xmm5, dword ptr [rsp+160h+outProjectedPoint]
    vmulss  xmm1, xmm5, xmm5
    vmovss  xmm6, dword ptr [rsp+160h+outProjectedPoint+4]
    vmulss  xmm0, xmm6, xmm6
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm4, dword ptr [rsp+160h+outProjectedPoint+8]
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm0, xmm2, xmm1
    vsqrtss xmm3, xmm0, xmm0
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm1, xmm3, xmm7, xmm0
    vmovss  [rsp+160h+outEnterDurationMs], xmm1
    vdivss  xmm2, xmm7, xmm1
    vmulss  xmm0, xmm5, xmm2
    vmovss  dword ptr [rsp+160h+outProjectedPoint], xmm0
    vmulss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rsp+160h+outProjectedPoint+4], xmm1
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+160h+outProjectedPoint+8], xmm0
  }
  ProjectPointOnPlane(&_RSI->mountState.eyePoint, &outEdgePoint, &outProjectedPoint, &point);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+point]
    vsubss  xmm3, xmm0, dword ptr [rsi+4C4h]
    vmovss  xmm1, dword ptr [rsp+160h+point+4]
    vsubss  xmm2, xmm1, dword ptr [rsi+4C8h]
    vmovss  xmm0, dword ptr [rsp+160h+point+8]
    vsubss  xmm4, xmm0, dword ptr [rsi+4CCh]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  ProjectPointOnPlane(&point, &_RSI->origin, &outUp, &point);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r15+220h]
    vmaxss  xmm4, xmm0, xmm6
    vmulss  xmm2, xmm4, dword ptr [rsp+160h+outProjectedPoint]
    vaddss  xmm2, xmm2, dword ptr [rsp+160h+point]
    vmovss  dword ptr [rsp+160h+point], xmm2
    vmulss  xmm3, xmm4, dword ptr [rsp+160h+outProjectedPoint+4]
    vaddss  xmm2, xmm3, dword ptr [rsp+160h+point+4]
    vmovss  dword ptr [rsp+160h+point+4], xmm2
    vmulss  xmm3, xmm4, dword ptr [rsp+160h+outProjectedPoint+8]
    vaddss  xmm2, xmm3, dword ptr [rsp+160h+point+8]
    vmovss  dword ptr [rsp+160h+point+8], xmm2
  }
  v60 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  __asm { vmovss  xmm6, cs:__real@40000000 }
  if ( v60->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    __asm { vmovaps xmm2, xmm6 }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, _DWORD, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &point, v62, &colorGreen, 0, 0);
    _RAX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+60h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+60h+bounds.halfSize+4], xmm1
    }
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+60h+bounds.midPoint]
      vaddss  xmm4, xmm0, dword ptr [rsp+160h+point]
      vmovss  [rbp+60h+var_D8], xmm4
      vmovss  xmm1, dword ptr [rbp+60h+bounds.midPoint+4]
      vaddss  xmm3, xmm1, dword ptr [rsp+160h+point+4]
      vmovss  [rbp+60h+var_D4], xmm3
      vmovss  xmm0, dword ptr [rbp+60h+bounds.midPoint+8]
      vaddss  xmm2, xmm0, dword ptr [rsp+160h+point+8]
      vaddss  xmm0, xmm2, dword ptr [rbp+60h+bounds.halfSize+8]
      vmovss  [rbp+60h+var_D0], xmm0
      vmovss  [rsp+160h+var_E8], xmm4
      vmovss  [rsp+160h+var_E4], xmm3
      vsubss  xmm0, xmm2, dword ptr [rbp+60h+bounds.halfSize+8]
      vmovss  [rbp+60h+var_E0], xmm0
    }
    fmt = (char *)&colorGreen;
    __asm { vmovss  xmm3, dword ptr [rbp+60h+bounds.halfSize] }
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, &v132, &v129);
  }
  if ( (_RSI->mountState.flags & 1) != 0 )
  {
    __asm { vmovss  xmm2, cs:max2DSpeed; max2DSpeed }
    BG_ContextMount_MoveToPoint(pm, pml, *(double *)&_XMM2, &point);
  }
  else
  {
    p_weapon = &pm->cmd.weapon;
    weaponMap = pm->weaponMap;
    if ( _RSI->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RSI, &pm->cmd.weapon) )
      p_weapon = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RSI);
    v77 = BG_UsingAlternate(_RSI);
    BG_GetMountEnterExitDuration((const ContextMountType)_RSI->mountState.surface.type, p_weapon, v77, &outEnterDurationMs, outExitDurationMs);
    v78 = outEnterDurationMs - (pm->cmd.serverTime - _RSI->mountState.startTime);
    if ( v78 < 0 )
      v78 = 0;
    if ( v78 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vmovss  xmm0, cs:__real@447a0000
        vdivss  xmm1, xmm0, xmm1
        vmulss  xmm0, xmm1, dword ptr [r14+24h]; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+160h+point]
      vsubss  xmm1, xmm0, dword ptr [rsi+30h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rsi+30h]
      vmovss  dword ptr [rsp+160h+point], xmm3
      vmovss  xmm0, dword ptr [rsp+160h+point+4]
      vsubss  xmm1, xmm0, dword ptr [rsi+34h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rsi+34h]
      vmovss  dword ptr [rsp+160h+point+4], xmm3
      vmovss  xmm0, dword ptr [rsp+160h+point+8]
      vsubss  xmm1, xmm0, dword ptr [rsi+38h]
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [rsi+38h]
      vmovss  dword ptr [rsp+160h+point+8], xmm3
      vmovss  xmm2, cs:max2DSpeed; max2DSpeed
    }
    BG_ContextMount_MoveToPoint(pm, pml, *(double *)&_XMM2, &point);
    if ( v78 <= 0 )
    {
      _RSI->mountState.flags |= 1u;
      BG_AddPredictableEventToPlayerstate(EV_MOUNT, _RSI->mountState.surface.type, pm->cmd.serverTime, pm->weaponMap, _RSI);
      ps = pm->ps;
      *(_QWORD *)ps->velocity.v = 0i64;
      ps->velocity.v[2] = 0.0;
    }
  }
  v101 = DCONST_DVARINT_mount_debug;
  if ( !DCONST_DVARINT_mount_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v101);
  if ( v101->current.integer == 2 && pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation && !pm->initialCall )
  {
    LODWORD(fmt) = 0;
    __asm { vmovaps xmm2, xmm6 }
    ((void (__fastcall *)(const BgHandler *, vec3_t *, __int64, vec4_t *, char *, _DWORD))pm->m_bgHandler->DebugSphere)(pm->m_bgHandler, &point, v102, &colorCyan, fmt, 0);
    _RAX = pm->bounds;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbp+60h+bounds.midPoint], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbp+60h+bounds.halfSize+4], xmm1
    }
    BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&bounds);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+60h+bounds.midPoint]
      vaddss  xmm4, xmm0, dword ptr [rsp+160h+point]
      vmovss  [rsp+160h+var_E8], xmm4
      vmovss  xmm1, dword ptr [rbp+60h+bounds.midPoint+4]
      vaddss  xmm3, xmm1, dword ptr [rsp+160h+point+4]
      vmovss  [rsp+160h+var_E4], xmm3
      vmovss  xmm0, dword ptr [rbp+60h+bounds.midPoint+8]
      vaddss  xmm2, xmm0, dword ptr [rsp+160h+point+8]
      vaddss  xmm0, xmm2, dword ptr [rbp+60h+bounds.halfSize+8]
      vmovss  [rbp+60h+var_E0], xmm0
      vmovss  [rbp+60h+var_D8], xmm4
      vmovss  [rbp+60h+var_D4], xmm3
      vsubss  xmm0, xmm2, dword ptr [rbp+60h+bounds.halfSize+8]
      vmovss  [rbp+60h+var_D0], xmm0
      vmovss  xmm3, dword ptr [rbp+60h+bounds.halfSize]
    }
    ((void (__fastcall *)(const BgHandler *, int *, int *))pm->m_bgHandler->DebugCapsule)(pm->m_bgHandler, &v129, &v132);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    BG_UpdateMovementDir(pm, pml, 0);
    type = _RSI->mountState.surface.type;
    if ( type )
    {
      switch ( type )
      {
        case MOUNT_TYPE_TOP:
          v118 = ANIM_MT_MOUNTED_TOP;
          break;
        case MOUNT_TYPE_LEFT:
          v118 = ANIM_MT_MOUNTED_LEFT;
          break;
        case MOUNT_TYPE_RIGHT:
          v118 = ANIM_MT_MOUNTED_RIGHT;
          break;
        default:
          LODWORD(outParallel) = _RSI->mountState.surface.type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1605, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid mount type %d", outParallel) )
            __debugbreak();
          goto LABEL_64;
      }
      BG_AnimScriptAnimation(pm->m_bgHandler, _RSI, AISTATE_COMBAT, v118, 0, 0);
    }
  }
LABEL_64:
  Sys_ProfEndNamedEvent();
  _R11 = &v141;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  bool v8; 
  const dvar_t *v9; 
  char *debugString; 
  __int64 putMountOnCooldown; 
  bool putMountOnCooldowna; 
  bool outFoundEdge; 
  ContextMountType outIconType; 
  EdgeId outIconEdge; 
  vec3_t v17; 
  __int64 v18; 
  vec3_t outIconPos; 
  MountFailureResult outResults; 

  v18 = -2i64;
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
  __asm
  {
    vmovsd  xmm0, qword ptr cs:?vec3_origin@@3Tvec3_t@@B; vec3_t const vec3_origin
    vmovsd  qword ptr [rsp+150h+outIconPos], xmm0
  }
  outIconPos.v[2] = vec3_origin.v[2];
  EdgeId::Clear(&outIconEdge);
  IsActive = BG_ContextMount_IsActive(ps);
  v8 = PM_ContextMount_ButtonEnterMount(pm);
  outFoundEdge = 0;
  v9 = DCONST_DVARBOOL_mount_do_edge_query_on_server;
  if ( !DCONST_DVARBOOL_mount_do_edge_query_on_server && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_do_edge_query_on_server") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( (v9->current.enabled && !pm->m_bgHandler->IsClient((BgHandler *)pm->m_bgHandler) && !pm->isExtrapolation || IsActive || v8) && !pm->isBot )
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
    else if ( v8 )
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
  v17.v[2] = outIconPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+150h+outIconPos]
    vmovsd  [rsp+150h+var_100], xmm0
  }
  PM_ContextMount_Finalize(pm, pml, v5, &v17, &outIconEdge, outFoundEdge, putMountOnCooldowna);
  Sys_ProfEndNamedEvent();
}

/*
==============
PM_ContextMount_UpdateState_Extrapolation
==============
*/
void PM_ContextMount_UpdateState_Extrapolation(pmove_t *const pm, pml_t *const pml)
{
  BgWeaponMap *weaponMap; 
  bool v8; 
  int serverTime; 
  int outEnterDurationMs[2]; 
  __int64 v17; 
  MountPlayerProperties player; 
  MountSurfaceDetailedProperties inOutDetailMount; 
  MountEdgeProperties edge; 

  v17 = -2i64;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1349, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1350, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBX = pm->ps;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1350, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !pm->isExtrapolation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1351, ASSERT_TYPE_ASSERT, "(pm->isExtrapolation)", (const char *)&queryFormat, "pm->isExtrapolation") )
    __debugbreak();
  if ( pml->mountState.isStateUpdated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_context_mount.cpp", 1352, ASSERT_TYPE_ASSERT, "(!pml->mountState.isStateUpdated)", (const char *)&queryFormat, "!pml->mountState.isStateUpdated") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "PM_ContextMount_UpdateState_Extrapolation");
  _R14 = &pm->cmd.weapon;
  weaponMap = pm->weaponMap;
  if ( _RBX->weapState[0].weaponState != 24 || !BG_IsWeaponValid(pm->weaponMap, _RBX, &pm->cmd.weapon) )
    _R14 = (Weapon *)BG_GetCurrentWeaponForPlayer(weaponMap, _RBX);
  v8 = BG_UsingAlternate(_RBX);
  serverTime = pm->cmd.serverTime;
  if ( _RBX->mountState.startTime )
  {
    BG_GetMountEnterExitDuration((const ContextMountType)_RBX->mountState.surface.type, _R14, v8, &outEnterDurationMs[1], outEnterDurationMs);
    *(double *)&_XMM0 = BG_ContextMount_CalculateMountFraction((const ContextMountType)_RBX->mountState.surface.type, outEnterDurationMs[1], outEnterDurationMs[0], serverTime, _RBX->mountState.startTime, _RBX->mountState.endTime);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0; value }
    *(double *)&_XMM0 = BG_ContextMount_QuantizeFloat01Byte(*(float *)&_XMM0);
  }
  __asm { vmovss  dword ptr [rbx+4C0h], xmm0 }
  if ( BG_ContextMount_IsActive(_RBX) )
  {
    MountSurfaceDetailedProperties::MountSurfaceDetailedProperties(&inOutDetailMount);
    MountSurfaceProperties::Initialize(&inOutDetailMount.mount, pm->m_bgHandler, &_RBX->mountState.surface);
    MountPlayerProperties::MountPlayerProperties(&player);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+30h]
      vmovsd  qword ptr [rsp+1D0h+player.origin], xmm0
    }
    player.origin.v[2] = _RBX->origin.v[2];
    MatrixCopy33(&pm->refFrame.m_axis, &player.worldBasis);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbx+4C4h]
      vmovsd  qword ptr [rsp+1D0h+player.eyeOrigin], xmm0
    }
    player.eyeOrigin.v[2] = _RBX->mountState.eyePoint.v[2];
    AnglesToAxis(&_RBX->viewangles, &player.eyeBasis);
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rbp+0D0h+player.weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [r14+20h]
      vmovups xmmword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [r14+30h]
      vmovsd  qword ptr [rbp+0D0h+player.weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&player.weapon.weaponCamo = *(_DWORD *)&_R14->weaponCamo;
    player.isAlternate = BG_UsingAlternate(_RBX);
    player.handler = pm->m_bgHandler;
    player.ps = _RBX;
    MountEdgeProperties::MountEdgeProperties(&edge);
    __asm { vmovss  xmm3, dword ptr [rbx+490h]; argFraction }
    MountEdgeProperties::Initialize(&edge, player.handler, _RBX->mountState.surface.id, *(float *)&_XMM3, _RBX->mountState.surface.normalFaceIndex, _RBX->mountState.surface.type);
    if ( PM_ContextMount_CalcFinalClampAngles(&player, &edge, &inOutDetailMount) )
    {
      PM_ContextMount_CalcMountEyePoint(&inOutDetailMount, &player, &_RBX->mountState.eyePoint);
      PM_ContextMount_UpdateMoverEyePoint(&player, &_RBX->mountState);
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

