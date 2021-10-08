/*
==============
CG_Camera_DeathCam_IsFOVSet
==============
*/

bool __fastcall CG_Camera_DeathCam_IsFOVSet(LocalClientNum_t localClientNum, float *outViewFOV)
{
  return ?CG_Camera_DeathCam_IsFOVSet@@YA_NW4LocalClientNum_t@@AEAM@Z(localClientNum, outViewFOV);
}

/*
==============
CG_Camera_Active_IsThirdPerson
==============
*/

bool __fastcall CG_Camera_Active_IsThirdPerson(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_Active_IsThirdPerson@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraState::SetTransitionInterpolation
==============
*/

void __fastcall ClientCameraState::SetTransitionInterpolation(ClientCameraState *this, const CameraType cameraIndex, const bool disabled)
{
  ?SetTransitionInterpolation@ClientCameraState@@QEAAXW4CameraType@@_N@Z(this, cameraIndex, disabled);
}

/*
==============
ClientCameraOrbitData::Reset
==============
*/

void __fastcall ClientCameraOrbitData::Reset(ClientCameraOrbitData *this, LocalClientNum_t localClientNum)
{
  ?Reset@ClientCameraOrbitData@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget
==============
*/

void __fastcall ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(ClientCameraTransition *this)
{
  ?UpdateTransitionOutSourceRelativeToTarget@ClientCameraTransition@@QEAAXXZ(this);
}

/*
==============
ClientCameraTransition::InterpolateAxis
==============
*/

void __fastcall ClientCameraTransition::InterpolateAxis(ClientCameraTransition *this, const LocalClientNum_t localClientNum, tmat33_t<vec3_t> *outAxis)
{
  ?InterpolateAxis@ClientCameraTransition@@QEAAXW4LocalClientNum_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(this, localClientNum, outAxis);
}

/*
==============
CG_Camera_KillCam_Transition_In
==============
*/

void __fastcall CG_Camera_KillCam_Transition_In(LocalClientNum_t localClientNum)
{
  ?CG_Camera_KillCam_Transition_In@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraState::OnFinalizeViewValues
==============
*/

void __fastcall ClientCameraState::OnFinalizeViewValues(ClientCameraState *this, const LocalClientNum_t localClientNum)
{
  ?OnFinalizeViewValues@ClientCameraState@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget
==============
*/

void __fastcall ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(ClientCameraTransition *this)
{
  ?StoreTransitionOutSourceRelativeToTarget@ClientCameraTransition@@QEAAXXZ(this);
}

/*
==============
CG_Camera_GetLastViewAxis
==============
*/

const tmat33_t<vec3_t> *__fastcall CG_Camera_GetLastViewAxis(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_GetLastViewAxis@@YAAEBT?$tmat33_t@Tvec3_t@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_InCameraOrTransition
==============
*/

bool __fastcall CG_Camera_InCameraOrTransition(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_InCameraOrTransition@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_GetOverrideLensProfile
==============
*/

bool __fastcall CG_Camera_GetOverrideLensProfile(const LocalClientNum_t localClientNum, int *outOverrideProfile, float *outFocalLength, float *outFStop, float *outScale, float *outUVScale)
{
  return ?CG_Camera_GetOverrideLensProfile@@YA_NW4LocalClientNum_t@@AEAHAEAM222@Z(localClientNum, outOverrideProfile, outFocalLength, outFStop, outScale, outUVScale);
}

/*
==============
ClientCameraState::IsTransitionInterpolationDisabled
==============
*/

bool __fastcall ClientCameraState::IsTransitionInterpolationDisabled(ClientCameraState *this, const CameraType cameraIndex)
{
  return ?IsTransitionInterpolationDisabled@ClientCameraState@@QEBA_NW4CameraType@@@Z(this, cameraIndex);
}

/*
==============
CG_Camera_SkydiveCam_StartBlend
==============
*/

void __fastcall CG_Camera_SkydiveCam_StartBlend(const cg_t *cgameGlob, ClientCameraData *camData, const vec3_t *cameraLocalOffset)
{
  ?CG_Camera_SkydiveCam_StartBlend@@YAXPEBVcg_t@@AEAUClientCameraData@@AEBTvec3_t@@@Z(cgameGlob, camData, cameraLocalOffset);
}

/*
==============
ClientCameraKillCam::ClientCameraKillCam
==============
*/

void __fastcall ClientCameraKillCam::ClientCameraKillCam(ClientCameraKillCam *this)
{
  ??0ClientCameraKillCam@@QEAA@XZ(this);
}

/*
==============
CG_Camera_GetFocusOrigin
==============
*/

const vec3_t *__fastcall CG_Camera_GetFocusOrigin(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_GetFocusOrigin@@YAAEBTvec3_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraTransition::InterpolateEyePos
==============
*/

void __fastcall ClientCameraTransition::InterpolateEyePos(ClientCameraTransition *this, const LocalClientNum_t localClientNum, bool findDistanceToPlayer, vec3_t *outEyePos, float *outDistance)
{
  ?InterpolateEyePos@ClientCameraTransition@@QEAAXW4LocalClientNum_t@@_NAEATvec3_t@@PEAM@Z(this, localClientNum, findDistanceToPlayer, outEyePos, outDistance);
}

/*
==============
CG_Camera_ShouldInterpolateViewTransition
==============
*/

bool __fastcall CG_Camera_ShouldInterpolateViewTransition(const LocalClientNum_t localClientNum, CameraType nextCameraType)
{
  return ?CG_Camera_ShouldInterpolateViewTransition@@YA_NW4LocalClientNum_t@@W4CameraType@@@Z(localClientNum, nextCameraType);
}

/*
==============
CG_Camera_AllowFovDelta
==============
*/

bool __fastcall CG_Camera_AllowFovDelta(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_AllowFovDelta@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraTransition::Reset
==============
*/

void __fastcall ClientCameraTransition::Reset(ClientCameraTransition *this)
{
  ?Reset@ClientCameraTransition@@QEAAXXZ(this);
}

/*
==============
CG_Camera_Transition_IsHidingWorldmodel
==============
*/

bool __fastcall CG_Camera_Transition_IsHidingWorldmodel(LocalClientNum_t localClientNum, bool forceCheck)
{
  return ?CG_Camera_Transition_IsHidingWorldmodel@@YA_NW4LocalClientNum_t@@_N@Z(localClientNum, forceCheck);
}

/*
==============
ClientCameraOrbitData::CanReturnCamera
==============
*/

bool __fastcall ClientCameraOrbitData::CanReturnCamera(ClientCameraOrbitData *this)
{
  return ?CanReturnCamera@ClientCameraOrbitData@@QEAA_NXZ(this);
}

/*
==============
CG_Camera_GetLastViewAxisPlayer
==============
*/

const tmat33_t<vec3_t> *__fastcall CG_Camera_GetLastViewAxisPlayer(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_GetLastViewAxisPlayer@@YAAEBT?$tmat33_t@Tvec3_t@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraTransition::Update
==============
*/

void __fastcall ClientCameraTransition::Update(ClientCameraTransition *this, const LocalClientNum_t localClientNum, bool findDistanceToPlayer, vec3_t *outEyePos, tmat33_t<vec3_t> *outAxis, float *outDistance)
{
  ?Update@ClientCameraTransition@@QEAAXW4LocalClientNum_t@@_NAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@PEAM@Z(this, localClientNum, findDistanceToPlayer, outEyePos, outAxis, outDistance);
}

/*
==============
CG_Camera_GetLastViewEyePos
==============
*/

const vec3_t *__fastcall CG_Camera_GetLastViewEyePos(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_GetLastViewEyePos@@YAAEBTvec3_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraDeathCam::Update
==============
*/

void __fastcall ClientCameraDeathCam::Update(ClientCameraDeathCam *this, LocalClientNum_t localClientNum, float frametime, RefdefView *inOutRefDef)
{
  ?Update@ClientCameraDeathCam@@QEAAXW4LocalClientNum_t@@MAEAURefdefView@@@Z(this, localClientNum, frametime, inOutRefDef);
}

/*
==============
CG_Camera_KillCam_Update
==============
*/

void __fastcall CG_Camera_KillCam_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  ?CG_Camera_KillCam_Update@@YAXW4LocalClientNum_t@@AEAURefdefView@@@Z(localClientNum, inOutRefDef);
}

/*
==============
ClientCameraTransition::IsHidingWorldmodel
==============
*/

bool __fastcall ClientCameraTransition::IsHidingWorldmodel(ClientCameraTransition *this, const LocalClientNum_t localClientNum, const CameraType camTypeActive)
{
  return ?IsHidingWorldmodel@ClientCameraTransition@@QEBA_NW4LocalClientNum_t@@W4CameraType@@@Z(this, localClientNum, camTypeActive);
}

/*
==============
CG_Camera_Active_Get
==============
*/

CameraType __fastcall CG_Camera_Active_Get(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_Active_Get@@YA?AW4CameraType@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_KillCam_Transition_Out
==============
*/

void __fastcall CG_Camera_KillCam_Transition_Out(LocalClientNum_t localClientNum)
{
  ?CG_Camera_KillCam_Transition_Out@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_OnFinalizeViewValues
==============
*/

void __fastcall CG_Camera_OnFinalizeViewValues(const LocalClientNum_t localClientNum, RefdefView *refdefView)
{
  ?CG_Camera_OnFinalizeViewValues@@YAXW4LocalClientNum_t@@AEAURefdefView@@@Z(localClientNum, refdefView);
}

/*
==============
ClientCameraTransition::InitFromDef
==============
*/

bool __fastcall ClientCameraTransition::InitFromDef(ClientCameraTransition *this, const CameraTransitionDef *transDef)
{
  return ?InitFromDef@ClientCameraTransition@@QEAA_NAEBUCameraTransitionDef@@@Z(this, transDef);
}

/*
==============
ClientCameraState::ResetAllTransitionInterpolationState
==============
*/

void __fastcall ClientCameraState::ResetAllTransitionInterpolationState(ClientCameraState *this)
{
  ?ResetAllTransitionInterpolationState@ClientCameraState@@QEAAXXZ(this);
}

/*
==============
CameraTraceInfo::Reset
==============
*/

void __fastcall CameraTraceInfo::Reset(CameraTraceInfo *this)
{
  ?Reset@CameraTraceInfo@@QEAAXXZ(this);
}

/*
==============
CG_Camera_GetOverrideFOV
==============
*/

bool __fastcall CG_Camera_GetOverrideFOV(const LocalClientNum_t localClientNum, float *overrideFovDeg)
{
  return ?CG_Camera_GetOverrideFOV@@YA_NW4LocalClientNum_t@@AEAM@Z(localClientNum, overrideFovDeg);
}

/*
==============
ClientCameraTransition::GetTimeForCurve
==============
*/

double __fastcall ClientCameraTransition::GetTimeForCurve(ClientCameraTransition *this, float normalizedTime, CameraTransitionCurve curve)
{
  double result; 

  *(float *)&result = ?GetTimeForCurve@ClientCameraTransition@@QEAAMMW4CameraTransitionCurve@@@Z(this, normalizedTime, curve);
  return result;
}

/*
==============
CG_Camera_GetData
==============
*/

ClientCameraData *__fastcall CG_Camera_GetData(LocalClientNum_t localClientNum, CameraType camType)
{
  return ?CG_Camera_GetData@@YAAEAUClientCameraData@@W4LocalClientNum_t@@W4CameraType@@@Z(localClientNum, camType);
}

/*
==============
CG_Camera_Initialize
==============
*/

void __fastcall CG_Camera_Initialize(const LocalClientNum_t localClientNum)
{
  ?CG_Camera_Initialize@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraKillCam::Reset
==============
*/

void __fastcall ClientCameraKillCam::Reset(ClientCameraKillCam *this)
{
  ?Reset@ClientCameraKillCam@@QEAAXXZ(this);
}

/*
==============
ClientCameraTransition::ShouldInterpolateTransition
==============
*/

bool __fastcall ClientCameraTransition::ShouldInterpolateTransition(ClientCameraTransition *this, const LocalClientNum_t localClientNum)
{
  return ?ShouldInterpolateTransition@ClientCameraTransition@@QEAA_NW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_Camera_Vehicles_GetCameraType
==============
*/

CameraType __fastcall CG_Camera_Vehicles_GetCameraType(VehicleType vehType, VehiclePhysicsGameProfile gameProfile)
{
  return ?CG_Camera_Vehicles_GetCameraType@@YA?AW4CameraType@@W4VehicleType@@W4VehiclePhysicsGameProfile@@@Z(vehType, gameProfile);
}

/*
==============
ClientCameraDeathCam::Reset
==============
*/

void __fastcall ClientCameraDeathCam::Reset(ClientCameraDeathCam *this)
{
  ?Reset@ClientCameraDeathCam@@QEAAXXZ(this);
}

/*
==============
CG_Camera_GetOverrideRadialBlur
==============
*/

bool __fastcall CG_Camera_GetOverrideRadialBlur(const LocalClientNum_t localClientNum, float *outOverrideRadius, float *outOverrideStrength)
{
  return ?CG_Camera_GetOverrideRadialBlur@@YA_NW4LocalClientNum_t@@AEAM1@Z(localClientNum, outOverrideRadius, outOverrideStrength);
}

/*
==============
CG_Camera_DeathCam_Update
==============
*/

bool __fastcall CG_Camera_DeathCam_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  return ?CG_Camera_DeathCam_Update@@YA_NW4LocalClientNum_t@@AEAURefdefView@@@Z(localClientNum, inOutRefDef);
}

/*
==============
CG_Camera_Active_Update
==============
*/

void __fastcall CG_Camera_Active_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef, bool *outOverrideLegacyCamera)
{
  ?CG_Camera_Active_Update@@YAXW4LocalClientNum_t@@AEAURefdefView@@AEA_N@Z(localClientNum, inOutRefDef, outOverrideLegacyCamera);
}

/*
==============
CG_Camera_TryGetDef
==============
*/

const CameraDef *__fastcall CG_Camera_TryGetDef(LocalClientNum_t localClientNum, CameraType camType)
{
  return ?CG_Camera_TryGetDef@@YAPEBUCameraDef@@W4LocalClientNum_t@@W4CameraType@@@Z(localClientNum, camType);
}

/*
==============
CG_Camera_Reset
==============
*/

void __fastcall CG_Camera_Reset(LocalClientNum_t localClientNum)
{
  ?CG_Camera_Reset@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_GetLastViewEyePosPlayer
==============
*/

const vec3_t *__fastcall CG_Camera_GetLastViewEyePosPlayer(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_GetLastViewEyePosPlayer@@YAAEBTvec3_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ClientCameraState::Reset
==============
*/

void __fastcall ClientCameraState::Reset(ClientCameraState *this)
{
  ?Reset@ClientCameraState@@QEAAXXZ(this);
}

/*
==============
CG_Camera_Active_TryGetDef
==============
*/

const CameraDef *__fastcall CG_Camera_Active_TryGetDef(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_Active_TryGetDef@@YAPEBUCameraDef@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_ShouldTransition
==============
*/

bool __fastcall CG_Camera_ShouldTransition(LocalClientNum_t localClientNum, const VehicleDef *vehDef, unsigned int nextCameraNdx, unsigned int curCameraNdx, RefdefView *inOutRefDef)
{
  return ?CG_Camera_ShouldTransition@@YA_NW4LocalClientNum_t@@PEBUVehicleDef@@IIAEAURefdefView@@@Z(localClientNum, vehDef, nextCameraNdx, curCameraNdx, inOutRefDef);
}

/*
==============
ClientCameraState::ClientCameraState
==============
*/

void __fastcall ClientCameraState::ClientCameraState(ClientCameraState *this)
{
  ??0ClientCameraState@@QEAA@XZ(this);
}

/*
==============
ClientCameraDeathCam::ClientCameraDeathCam
==============
*/

void __fastcall ClientCameraDeathCam::ClientCameraDeathCam(ClientCameraDeathCam *this)
{
  ??0ClientCameraDeathCam@@QEAA@XZ(this);
}

/*
==============
CG_Camera_Transition_IsActive
==============
*/

bool __fastcall CG_Camera_Transition_IsActive(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_Transition_IsActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Camera_Vehicles_Update
==============
*/

bool __fastcall CG_Camera_Vehicles_Update(LocalClientNum_t localClientNum, bool *outIsThirdPerson, RefdefView *inOutRefDef)
{
  return ?CG_Camera_Vehicles_Update@@YA_NW4LocalClientNum_t@@AEA_NAEAURefdefView@@@Z(localClientNum, outIsThirdPerson, inOutRefDef);
}

/*
==============
CG_Camera_Transition_IsHidingViewmodel
==============
*/

bool __fastcall CG_Camera_Transition_IsHidingViewmodel(LocalClientNum_t localClientNum)
{
  return ?CG_Camera_Transition_IsHidingViewmodel@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
NormalizeRange
==============
*/

float __fastcall NormalizeRange(double val, double minval)
{
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
    vmovaps [rsp+78h+var_38], xmm8
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm1, xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm6, xmm1
    vmovaps xmm9, xmm0
    vcomiss xmm1, xmm7
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 184, ASSERT_TYPE_ASSERT, "(minval >= 0.0f && minval < 1.0f)", (const char *)&queryFormat, "minval >= 0.0f && minval < 1.0f") )
    __debugbreak();
  __asm
  {
    vsubss  xmm0, xmm9, xmm6
    vmovaps xmm9, [rsp+78h+var_48]
    vmaxss  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+78h+var_38]
    vsubss  xmm0, xmm7, xmm6
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vdivss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
ClientCameraDeathCam::ClientCameraDeathCam
==============
*/
void ClientCameraDeathCam::ClientCameraDeathCam(ClientCameraDeathCam *this)
{
  this->vehEntNum = 2047;
  this->camType = INACTIVE;
  *(_QWORD *)&this->time = 0i64;
  this->supportsFOV = 0;
  this->corpseEntNum = 2047;
}

/*
==============
ClientCameraKillCam::ClientCameraKillCam
==============
*/
void ClientCameraKillCam::ClientCameraKillCam(ClientCameraKillCam *this)
{
  this->initialized = 0;
  this->vehSign = 1.0;
  *(_OWORD *)this->lastEyePos.v = 0ui64;
  *(_QWORD *)&this->lastLookAtEntPos.y = 0i64;
  MatrixIdentity33(&this->lastAxis);
  this->lastKillCamEntity = 2047;
  this->lastKillCamEntityType = 0;
  this->lastFov = 70.0;
}

/*
==============
ClientCameraState::ClientCameraState
==============
*/
void ClientCameraState::ClientCameraState(ClientCameraState *this)
{
  this->lastRenderedClient = -1;
  *(_QWORD *)this->transInterpDisabledBits.array = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[2] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[4] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[6] = 0i64;
}

/*
==============
CG_Camera_Active_Get
==============
*/
unsigned int CG_Camera_Active_Get(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int result; 
  const SuitDef *SuitDef; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( XCamData::IsActive(&LocalClientGlobals->xCam) )
    return 0;
  result = LocalClientGlobals->predictedPlayerState.cameraTypeIndex;
  if ( !result )
  {
    if ( !CG_Utils_IsActionCamActive(localClientNum) )
      return 0;
    SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 461, ASSERT_TYPE_ASSERT, "(suitDef != nullptr)", (const char *)&queryFormat, "suitDef != nullptr") )
      __debugbreak();
    result = BG_Camera_GetTypeForDefPtr(SuitDef->cam_helmetCam);
    if ( !result )
      return 0;
  }
  return result;
}

/*
==============
CG_Camera_Active_IsThirdPerson
==============
*/
bool CG_Camera_Active_IsThirdPerson(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  bool active; 
  bool v4; 

  v1 = localClientNum;
  v2 = CG_Camera_Active_Get(localClientNum);
  active = s_cameraTransition[v1].active;
  v4 = v2 != s_cameraTransition[v1].lastActiveCamera;
  return !CG_Camera_IsSkydiveSpectatorOrKillcam((LocalClientNum_t)v1) && ((active || v4) && !CG_Camera_Transition_IsHidingWorldmodel((LocalClientNum_t)v1, 1) || v2 && v2 < 256 && ((unsigned int)(v2 - 251) <= 4 || CG_Camera_Active_TryGetDef((LocalClientNum_t)v1)->profile));
}

/*
==============
CG_Camera_Active_TryGetDef
==============
*/
const CameraDef *CG_Camera_Active_TryGetDef(LocalClientNum_t localClientNum)
{
  int v1; 
  const CameraDef *Def; 

  v1 = CG_Camera_Active_Get(localClientNum);
  if ( !v1 || v1 >= 256 || (unsigned int)(v1 - 1) >= 0xFA )
    return 0i64;
  Def = BG_Camera_GetDef(v1);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 735, ASSERT_TYPE_ASSERT, "(camDef != nullptr)", (const char *)&queryFormat, "camDef != nullptr") )
    __debugbreak();
  return Def;
}

/*
==============
CG_Camera_Active_Update
==============
*/
void CG_Camera_Active_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef, bool *outOverrideLegacyCamera)
{
  CameraType v9; 
  signed int v10; 
  char v13; 
  char v14; 
  __int64 v18; 
  unsigned int v27; 
  signed int v28; 
  bool v32; 

  _RBP = localClientNum;
  v9 = CG_Camera_Active_Get(localClientNum);
  *outOverrideLegacyCamera = 0;
  v10 = v9;
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.frametime_base; val
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( !(v13 | v14) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3d2aaaab; max
      vmovss  xmm1, cs:__real@3b888889; min
    }
    _R12 = 0x140000000ui64;
    v18 = _RBP;
    __asm
    {
      vmovaps [rsp+68h+var_28], xmm6
      vmovaps [rsp+68h+var_38], xmm7
    }
    s_cameraTransition[_RBP].lastWas3PWithFocus = 0;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, rva s_frameTimeEMA[r12+rbp*4]
      vmulss  xmm1, xmm2, cs:__real@3c888889
      vmulss  xmm0, xmm0, cs:__real@3c888889
      vsubss  xmm2, xmm2, xmm1
      vaddss  xmm6, xmm2, xmm0
      vmovss  rva s_frameTimeEMA[r12+rbp*4], xmm6
    }
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm
    {
      vminss  xmm1, xmm6, cs:__real@3d2aaaab
      vmulss  xmm7, xmm0, xmm1
    }
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm { vmulss  xmm6, xmm0, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls }
    if ( (unsigned int)(v10 - 251) <= 4 )
    {
      *outOverrideLegacyCamera = CG_Camera_SkydiveCam_Update((const LocalClientNum_t)_RBP, inOutRefDef);
      s_cameraTransition[v18].lastActiveCamera = 251;
    }
    else
    {
      v27 = s_cameraTransition[v18].lastActiveCamera - 252;
      if ( v10 && v10 < 256 )
      {
        if ( v27 > 3 )
        {
LABEL_9:
          CG_Camera_ResetToView((LocalClientNum_t)_RBP, CAMERA_MAX_DEF_INDEX, inOutRefDef, 1);
          v28 = CG_Camera_Active_Get((LocalClientNum_t)_RBP);
          if ( CG_Camera_Transition_Detect((LocalClientNum_t)_RBP, NULL, v28, s_cameraTransition[v18].lastActiveCamera, inOutRefDef) )
          {
            if ( v28 && v28 < 256 && (unsigned int)(v28 - 1) < 0xFA )
            {
              __asm { vmovaps xmm1, xmm6; frameTime }
              CG_Camera_UpdateTransitionToCameraTarget((LocalClientNum_t)_RBP, *(float *)&_XMM1, inOutRefDef);
            }
            else if ( s_cameraTransition[v18].transitionType == TT_CAMERA_TO_VIEW )
            {
              s_cameraTransition[v18].targetEyePos.v[0] = s_cameraTransition[v18].last1stViewEyePos.v[0];
              s_cameraTransition[v18].targetEyePos.v[1] = s_cameraTransition[v18].last1stViewEyePos.v[1];
              s_cameraTransition[v18].targetEyePos.v[2] = s_cameraTransition[v18].last1stViewEyePos.v[2];
              MatrixCopy33(&s_cameraTransition[v18].last1stViewAxis, &s_cameraTransition[v18].targetAxis);
              CG_Camera_RemoveRoll(&s_cameraTransition[v18].targetAxis);
              s_cameraTransition[v18].transitionOutLocalSpace = 1;
            }
            __asm { vmovaps xmm1, xmm6; frameTime }
            *outOverrideLegacyCamera = CG_Camera_Transition_Update((LocalClientNum_t)_RBP, *(float *)&_XMM1, inOutRefDef);
          }
          if ( !*outOverrideLegacyCamera )
          {
            __asm { vmovaps xmm1, xmm6; frameTime }
            v32 = CG_Camera_Transition_Update((LocalClientNum_t)_RBP, *(float *)&_XMM1, inOutRefDef);
            *outOverrideLegacyCamera = v32;
            if ( !v32 && v10 && v10 < 256 && (unsigned int)(v10 - 1) < 0xFA && !s_cameraTransition[v18].active )
            {
              __asm { vmovaps xmm3, xmm7; frameTime }
              *outOverrideLegacyCamera = CG_Camera_Active_Update_Def((LocalClientNum_t)_RBP, v10, inOutRefDef, *(float *)&_XMM3);
            }
          }
          s_cameraTransition[v18].lastActiveCamera = v10;
          goto LABEL_26;
        }
        if ( s_cameraTransition[v18].active )
        {
          s_cameraTransition[v18].active = 0;
          goto LABEL_9;
        }
      }
      if ( v27 > 3 )
        goto LABEL_9;
    }
LABEL_26:
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_28]
      vmovaps xmm7, [rsp+68h+var_38]
    }
  }
}

/*
==============
CG_Camera_Active_Update_Def
==============
*/

bool __fastcall CG_Camera_Active_Update_Def(LocalClientNum_t localClientNum, unsigned int camDefNdx, RefdefView *inOutRefDef, double frameTime)
{
  const CameraDef *Def; 
  ClientCameraData *Data; 
  bool result; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( !CameraType_Is_Def(camDefNdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3263, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( camDefNdx ))", (const char *)&queryFormat, "CameraType_Is_Def( camDefNdx )") )
    __debugbreak();
  Def = BG_Camera_GetDef(camDefNdx);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3266, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  if ( Def->profile != CAMERAPROFILE_ORBIT || CG_Camera_IsSkydiveSpectatorOrKillcam(localClientNum) )
  {
    result = 0;
  }
  else
  {
    Data = CG_Camera_GetData(localClientNum, (CameraType)camDefNdx);
    __asm { vmovaps xmm2, xmm6; frameTime }
    Data->camDef = Def;
    Data->orbitCamData.lerpSpeed = Def->orbit.lerpSpeed;
    CG_Camera_Orbit_Update(Data, inOutRefDef, *(float *)&_XMM2, camDefNdx);
    CG_Camera_PostUpdate(localClientNum, inOutRefDef, Def->keepShakeCam, Def->serverFeedback);
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
  return result;
}

/*
==============
CG_Camera_AllowFovDelta
==============
*/
bool CG_Camera_AllowFovDelta(LocalClientNum_t localClientNum)
{
  ClientCameraData *Data; 
  const CameraDef *camDef; 
  bool result; 

  Data = CG_Camera_GetData(localClientNum, CAMERA_CAR);
  result = 1;
  if ( Data->initialized )
  {
    camDef = Data->camDef;
    if ( camDef )
    {
      if ( camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )
        return 0;
    }
  }
  return result;
}

/*
==============
CG_Camera_CheckSanity
==============
*/
void CG_Camera_CheckSanity(const RefdefView *refdef)
{
  int v5; 
  int v6; 
  int v7; 
  vec3_t outOrg; 

  if ( !Mat33IsOrthonormal(&refdef->axis) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 371, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( refdef.axis ) )", "mat3 isn't orthonormal") )
    __debugbreak();
  RefdefView_GetOrg(refdef, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrg]
    vmovss  [rsp+58h+var_28], xmm0
  }
  if ( (v5 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrg+4]
    vmovss  [rsp+58h+var_28], xmm0
  }
  if ( (v6 & 0x7F800000) == 2139095040 )
    goto LABEL_11;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outOrg+8]
    vmovss  [rsp+58h+var_28], xmm0
  }
  if ( (v7 & 0x7F800000) == 2139095040 )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 375, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] )") )
      __debugbreak();
  }
}

/*
==============
CG_Camera_DampLerp
==============
*/

void __fastcall CG_Camera_DampLerp(float *cur, double dst, double frameTime, double speed)
{
  __asm { vmovaps [rsp+38h+var_18], xmm6 }
  _R8 = cur;
  __asm
  {
    vmovss  xmm6, cs:__real@3c888889
    vcomiss xmm2, xmm6
    vmovaps [rsp+38h+var_28], xmm7
    vmovaps [rsp+38h+var_38], xmm8
    vmovaps xmm7, xmm3
    vmovaps xmm5, xmm2
    vmovaps xmm8, xmm1
    vcomiss xmm2, cs:__real@3f800000
  }
  _ECX = 0;
  _EAX = 0;
  do
  {
    __asm
    {
      vmovd   xmm0, ecx
      vmovd   xmm1, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vsubss  xmm0, xmm8, dword ptr [r8]
      vblendvps xmm1, xmm6, xmm5, xmm2
      vmulss  xmm1, xmm1, xmm0
      vmulss  xmm2, xmm1, xmm7
      vaddss  xmm3, xmm2, dword ptr [r8]
    }
    ++_ECX;
    __asm { vmovss  dword ptr [r8], xmm3 }
  }
  while ( _ECX < 1 );
  __asm
  {
    vmovaps xmm6, [rsp+38h+var_18]
    vmovaps xmm7, [rsp+38h+var_28]
    vmovaps xmm8, [rsp+38h+var_38]
  }
}

/*
==============
CG_Camera_DeathCam_Detect
==============
*/
void CG_Camera_DeathCam_Detect(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  centity_t *v22; 
  int v23; 
  centity_t *Entity; 
  float v28; 
  char v56; 
  __int64 v60; 
  char v76; 
  char v77; 
  float v102; 
  float v105; 
  float outFraction; 
  vec3_t forward; 
  vec3_t result; 
  vec3_t angles; 
  XCamValues outValues; 
  vec3_t out; 
  tmat33_t<vec3_t> mat; 

  _R12 = inOutRefDef;
  _RDI = &s_cameraDeathCam[(__int64)(int)localClientNum];
  v9 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4753, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v11 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4695, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v11->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u) && !XCamData::IsActive(&v11->xCam) && XCamData::AreValuesValid(&v11->xCam) )
  {
    _RDI->camType = 2;
    XCamValues::XCamValues(&outValues);
    XCamData::GetValues(&LocalClientGlobals->xCam, &outValues);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+outValues.origin]
      vmovss  xmm1, dword ptr [rsp+178h+outValues.origin+4]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm0, dword ptr [rsp+178h+outValues.origin+8]
      vmovss  dword ptr [rdi+0Ch], xmm0
      vmovss  dword ptr [rdi+8], xmm1
    }
    MatrixCopy33(&outValues.axis, &_RDI->sourceAxis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+178h+outValues.lens]
      vmovss  xmm1, dword ptr [rsp+178h+outValues.origin]
      vmovss  dword ptr [rdi+34h], xmm0
      vmovss  xmm0, dword ptr [rsp+178h+outValues.origin+4]
      vmovss  dword ptr [rdi+38h], xmm1
      vmovss  xmm1, dword ptr [rsp+178h+outValues.origin+8]
      vmovss  dword ptr [rdi+40h], xmm1
      vmovss  dword ptr [rdi+3Ch], xmm0
    }
    MatrixCopy33(&outValues.axis, &_RDI->targetAxis);
    AxisToAngles(&_RDI->targetAxis, &angles);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+178h+angles+8], xmm0
    }
    AnglesToAxis(&angles, &_RDI->targetAxis);
    __asm { vmovss  xmm0, dword ptr [rsp+178h+outValues.lens] }
    _RDI->supportsFOV = 1;
    __asm { vmovss  dword ptr [rdi+68h], xmm0 }
    *(_QWORD *)&_RDI->time = 0i64;
  }
  else
  {
    _ESI = 0;
    v22 = NULL;
    v23 = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.stats[4];
    if ( v23 > 0 && (unsigned int)v23 < 0x7FF )
    {
      Entity = CG_GetEntity(localClientNum, v23);
      v22 = Entity;
      if ( !Entity || !BG_IsVehicleEntity(&Entity->nextState) )
        v22 = NULL;
    }
    __asm { vmovaps [rsp+178h+var_38], xmm6 }
    _RDX = s_cameraTransition;
    _R8 = v9;
    __asm
    {
      vmovaps [rsp+178h+var_48], xmm7
      vmovaps [rsp+178h+var_58], xmm8
    }
    if ( v22 )
    {
      __asm { vmovsd  xmm0, qword ptr [r8+rdx+0E0h] }
      v28 = s_cameraTransition[_R8].lastViewEyePos.v[2];
      __asm
      {
        vmovsd  qword ptr [rdi+4], xmm0
        vmovups ymm0, ymmword ptr [r8+rdx+0ECh]
        vmovups ymmword ptr [rdi+10h], ymm0
      }
      _RDI->sourceEyePos.v[2] = v28;
      _RDI->sourceAxis.m[2].v[2] = s_cameraTransition[_R8].lastViewAxis.m[2].v[2];
      _RDI->camType = ACTIVE;
      __asm
      {
        vmovss  xmm0, dword ptr [r12+14h]
        vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm0, dword ptr [r12+18h]
        vxorps  xmm5, xmm0, cs:__xmm@80000000800000008000000080000000
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm2, xmm1
        vsqrtss xmm3, xmm0, xmm0
        vcmpless xmm0, xmm3, cs:__real@80000000
        vxorps  xmm7, xmm7, xmm7
        vmovaps [rsp+178h+var_68], xmm9
        vmovss  xmm9, cs:__real@3f800000
        vblendvps xmm0, xmm3, xmm9, xmm0
        vdivss  xmm1, xmm9, xmm0
        vmulss  xmm2, xmm4, xmm1
        vucomiss xmm2, xmm7
        vmulss  xmm0, xmm5, xmm1
        vmovss  dword ptr [rsp+178h+forward], xmm2
        vmovss  dword ptr [rsp+178h+forward+4], xmm0
        vmovss  dword ptr [rsp+178h+forward+8], xmm7
        vmovss  xmm1, cs:__real@42b40000; degrees
      }
      MatrixRotationZ(&mat, *(float *)&_XMM1);
      __asm
      {
        vmovss  xmm6, cs:__real@bf800000
        vmovss  [rsp+178h+outFraction], xmm6
      }
      CL_TransientsWorldMP_IsActive();
      *(_QWORD *)&outValues.axis.row2.y = 0i64;
      LODWORD(outValues.origin.v[0]) = 3 * localClientNum + 2;
      __asm
      {
        vmovss  dword ptr [rsp+178h+outValues.lens+4], xmm7
        vmovss  dword ptr [rsp+178h+outValues.lens+8], xmm7
      }
      outValues.apertureType = XCAM_FOV_APERTURE;
      LOBYTE(_EAX) = CL_TransientsWorldMP_IsActive();
      __asm { vmovss  xmm2, cs:__real@41000000 }
      _R13 = DCONST_DVARFLT_bg_deathCamVehPlaneOffset;
      __asm { vmovd   xmm1, esi }
      _EAX = (unsigned __int8)_EAX;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm3, xmm0, xmm1
        vmovss  xmm1, cs:__real@41a00000
        vblendvps xmm0, xmm1, xmm2, xmm3
        vmovss  xmm1, cs:__real@41200000
      }
      v56 = 0;
      LODWORD(outValues.lens.fov) = 2065;
      __asm
      {
        vmovss  dword ptr [rsp+178h+outValues.axis+14h], xmm1
        vmovss  dword ptr [rsp+178h+outValues.axis+10h], xmm0
      }
      if ( !DCONST_DVARFLT_bg_deathCamVehPlaneOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamVehPlaneOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R13);
      __asm { vmovss  xmm8, dword ptr [r13+28h] }
      _R13 = DCONST_DVARFLT_bg_deathCamVehVertOffset;
      if ( !DCONST_DVARFLT_bg_deathCamVehVertOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamVehVertOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R13);
      __asm { vmovss  xmm7, dword ptr [r13+28h] }
      v60 = 4i64;
      do
      {
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rsp+178h+forward]
          vaddss  xmm3, xmm1, dword ptr [rdi+4]
          vmulss  xmm0, xmm7, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
          vmulss  xmm2, xmm8, dword ptr [rsp+178h+forward+4]
          vmulss  xmm1, xmm7, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm5, xmm3, xmm0
          vaddss  xmm3, xmm2, dword ptr [rdi+8]
          vmulss  xmm0, xmm8, dword ptr [rsp+178h+forward+8]
          vmulss  xmm2, xmm7, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
          vaddss  xmm4, xmm3, xmm1
          vaddss  xmm3, xmm0, dword ptr [rdi+0Ch]
          vaddss  xmm0, xmm3, xmm2
          vmovss  dword ptr [rsp+178h+result+8], xmm0
          vmovsd  xmm0, qword ptr [rdi+4]
          vunpcklps xmm1, xmm5, xmm4
        }
        outValues.axis.m[1].v[0] = result.v[2];
        outValues.axis.m[0].v[0] = _RDI->sourceEyePos.v[2];
        __asm
        {
          vmovsd  qword ptr [rsp+178h+result], xmm1
          vmovsd  qword ptr [rsp+178h+outValues.axis+4], xmm1
          vmovsd  qword ptr [rsp+178h+outValues.origin+4], xmm0
        }
        CG_Camera_Trace((const CameraTraceInfo *)&outValues, &result, &outFraction);
        __asm
        {
          vmovss  xmm2, [rsp+178h+outFraction]
          vcomiss xmm2, xmm6
        }
        if ( !(v76 | v77) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+178h+result]
            vmovss  xmm1, dword ptr [rsp+178h+result+4]
            vmovss  dword ptr [rdi+38h], xmm0
            vmovss  xmm0, dword ptr [rsp+178h+result+8]
            vmovss  dword ptr [rdi+40h], xmm0
            vmovss  dword ptr [rdi+3Ch], xmm1
            vmovaps xmm6, xmm2
          }
          v56 = 1;
        }
        AxisTransformVec3(&mat, &forward, &out);
        forward.v[2] = out.v[2];
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+178h+out]
          vmovsd  qword ptr [rsp+178h+forward], xmm0
        }
        --v60;
      }
      while ( v60 );
      if ( !v56 )
      {
        _RDI->targetEyePos.v[0] = _RDI->sourceEyePos.v[0];
        _RDI->targetEyePos.v[1] = _RDI->sourceEyePos.v[1];
        _RDI->targetEyePos.v[2] = _RDI->sourceEyePos.v[2];
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vsubss  xmm4, xmm0, dword ptr [rdi+38h]
        vmovss  xmm1, dword ptr [rdi+8]
        vsubss  xmm5, xmm1, dword ptr [rdi+3Ch]
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vsubss  xmm6, xmm0, dword ptr [rdi+40h]
        vmulss  xmm0, xmm6, xmm6
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm3, xmm2, xmm1
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm0, xmm2, xmm4
        vmovss  dword ptr [rsp+178h+angles], xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm2, xmm5
        vmovss  dword ptr [rsp+178h+angles+8], xmm0
        vmovss  dword ptr [rsp+178h+angles+4], xmm1
      }
      BG_AxisFromForward(&angles, &identityMatrix33.m[2], &_RDI->targetAxis);
      __asm { vmovaps xmm9, [rsp+178h+var_68] }
      _RDI->time = 0.0;
      _RDI->totalTime = 0.5;
      _RDI->vehEntNum = v22->nextState.number;
    }
    else if ( s_cameraTransition[_R8].lastWasUsingTuret )
    {
      __asm { vmovsd  xmm0, qword ptr [r8+rdx+110h] }
      v102 = s_cameraTransition[_R8].last1stViewEyePos.v[2];
      _RCX = &_RDI->sourceAxis;
      __asm
      {
        vmovsd  qword ptr [rdi+4], xmm0
        vmovups ymm0, ymmword ptr [r8+rdx+11Ch]
      }
      _RDI->sourceEyePos.v[2] = v102;
      v105 = s_cameraTransition[_R8].last1stViewAxis.m[2].v[2];
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RDI->sourceAxis.m[2].v[2] = v105;
      _RDI->supportsFOV = 0;
      _RDI->vehEntNum = 2047;
      _RDI->camType = 3;
      _RDI->time = 0.0;
      _RDI->totalTime = 0.75;
      AxisToAngles(&_RDI->sourceAxis, &forward);
      __asm
      {
        vmovss  xmm7, cs:__real@3b360b61
        vmulss  xmm3, xmm7, dword ptr [rsp+178h+forward]
        vmovss  xmm6, cs:__real@3f000000
        vmulss  xmm4, xmm7, dword ptr [rsp+178h+forward+4]
        vmovss  xmm5, cs:__real@43b40000
      }
      _RSI = DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg;
      __asm
      {
        vaddss  xmm1, xmm3, xmm6
        vxorps  xmm8, xmm8, xmm8
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, xmm5
        vaddss  xmm2, xmm4, xmm6
        vroundss xmm3, xmm8, xmm2, 1
        vmovss  dword ptr [rsp+178h+forward], xmm0
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm3, xmm7, dword ptr [rsp+178h+forward+8]
        vmulss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsp+178h+forward+4], xmm1
        vaddss  xmm1, xmm3, xmm6
        vroundss xmm2, xmm8, xmm1, 1
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm5
        vmovss  dword ptr [rsp+178h+forward+8], xmm1
      }
      if ( !DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretMaxPitchDeg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+28h]
        vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmaxss  xmm2, xmm0, cs:__real@41200000; max
        vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r13+264h]
        vmovss  dword ptr [rsp+178h+forward+4], xmm0
        vmovss  xmm0, dword ptr [rsp+178h+forward]; val
        vxorps  xmm1, xmm2, xmm6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsp+178h+forward], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+178h+forward+8], xmm0
      }
      AnglesToAxis(&forward, &_RDI->targetAxis);
      _R14 = DCONST_DVARFLT_bg_deathCamTurretVertOffset;
      if ( !DCONST_DVARFLT_bg_deathCamTurretVertOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretVertOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm3, dword ptr [r14+28h]
        vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      }
      _R14 = DCONST_DVARFLT_bg_deathCamTurretBackOffset;
      __asm
      {
        vmovss  dword ptr [rdi+38h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmulss  xmm1, xmm3, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
        vmovss  dword ptr [rdi+3Ch], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+0Ch]
        vmovss  dword ptr [rdi+40h], xmm2
      }
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretBackOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+28h]
        vxorps  xmm2, xmm0, xmm6
        vmulss  xmm0, xmm2, dword ptr [rdi+44h]
        vaddss  xmm1, xmm0, dword ptr [rdi+38h]
        vmovss  dword ptr [rdi+38h], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+48h]
        vaddss  xmm1, xmm0, dword ptr [rdi+3Ch]
        vmovss  dword ptr [rdi+3Ch], xmm1
        vmulss  xmm0, xmm2, dword ptr [rdi+4Ch]
        vaddss  xmm1, xmm0, dword ptr [rdi+40h]
        vmovss  dword ptr [rdi+40h], xmm1
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+178h+var_48]
      vmovaps xmm6, [rsp+178h+var_38]
      vmovaps xmm8, [rsp+178h+var_58]
    }
  }
}

/*
==============
CG_Camera_DeathCam_IsFOVSet
==============
*/
char CG_Camera_DeathCam_IsFOVSet(LocalClientNum_t localClientNum, float *outViewFOV)
{
  bool v7; 
  double v27; 
  double v28; 

  _RDI = outViewFOV;
  _RBX = &s_cameraDeathCam[(__int64)(int)localClientNum];
  if ( _RBX->camType == INACTIVE )
    return 0;
  v7 = !_RBX->supportsFOV;
  if ( !_RBX->supportsFOV )
    return 0;
  *outViewFOV = _RBX->targetFOV;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+70h]
    vcomiss xmm0, dword ptr [rbx+6Ch]
  }
  if ( !v7 )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm0, xmm7
    }
    if ( v7 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+78h+var_38], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+78h+var_40], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4945, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( deathCam.totalTime )", "%s < %s\n\t%g, %g", "0.0f", "deathCam.totalTime", v27, v28) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6Ch]
      vmovss  xmm6, cs:__real@3f800000
      vdivss  xmm0, xmm0, dword ptr [rbx+70h]; val
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm7, [rsp+78h+var_28]
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm0, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm1
      vsubss  xmm3, xmm6, xmm2
      vmulss  xmm1, xmm3, dword ptr [rbx+68h]
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm2, xmm0, dword ptr [rbx+34h]
      vmovaps xmm6, [rsp+78h+var_18]
      vaddss  xmm0, xmm2, xmm1
      vmovss  dword ptr [rdi], xmm0
    }
  }
  return 1;
}

/*
==============
CG_Camera_DeathCam_Update
==============
*/
bool CG_Camera_DeathCam_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  int pm_type; 
  ClientCameraDeathCam *v7; 
  bool v8; 
  bool result; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4900, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  v7 = &s_cameraDeathCam[v3];
  v8 = v7->camType != INACTIVE;
  if ( v7->camType )
  {
    if ( pm_type < 7 )
    {
      result = 0;
      v7->vehEntNum = 2047;
      v7->camType = INACTIVE;
      *(_QWORD *)&v7->time = 0i64;
      v7->supportsFOV = 0;
      return result;
    }
  }
  else if ( pm_type >= 7 )
  {
    CG_Camera_DeathCam_Detect((LocalClientNum_t)v3, inOutRefDef);
    v8 = v7->camType != INACTIVE;
  }
  if ( !v8 )
    return 0;
  *(double *)&_XMM0 = Com_GetTimeScale();
  __asm { vmulss  xmm2, xmm0, cs:?cls@@3UClStatic@@A.frametime_base; frametime }
  ClientCameraDeathCam::Update(&s_cameraDeathCam[v3], (LocalClientNum_t)v3, *(float *)&_XMM2, inOutRefDef);
  return pm_type >= 7;
}

/*
==============
CG_Camera_GetData
==============
*/
ClientCameraData *CG_Camera_GetData(LocalClientNum_t localClientNum, CameraType camType)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v2 = camType;
  v3 = localClientNum;
  if ( !CameraType_Is_Valid(camType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 404, ASSERT_TYPE_ASSERT, "(CameraType_Is_Valid( camType ))", (const char *)&queryFormat, "CameraType_Is_Valid( camType )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 405, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &s_cameras[v2][v3];
}

/*
==============
CG_Camera_GetFocusOrigin
==============
*/
vec3_t *CG_Camera_GetFocusOrigin(LocalClientNum_t localClientNum)
{
  return &s_cameraTransition[localClientNum].lastFocusOrigin;
}

/*
==============
CG_Camera_GetInputCharValueWithThreshold
==============
*/
float CG_Camera_GetInputCharValueWithThreshold(char value, char threshold)
{
  char v16; 

  __asm
  {
    vmovss  xmm2, cs:__real@42fc0000; max
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm8, xmm8, xmm8
    vcvtsi2ss xmm8, xmm8, eax
    vandps  xmm7, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtsi2ss xmm0, xmm0, eax; val
    vxorps  xmm1, xmm1, xmm1; min
    vxorps  xmm6, xmm6, xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vcomiss xmm7, xmm0
    vmovaps xmm3, xmm0
  }
  if ( v16 )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    __asm
    {
      vsubss  xmm2, xmm7, xmm3
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm6, xmm8
      vblendvps xmm2, xmm1, xmm2, xmm0
      vmovss  xmm0, cs:__real@42fe0000
      vsubss  xmm1, xmm0, xmm3
      vdivss  xmm0, xmm2, xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Camera_GetLastViewAxis
==============
*/
tmat33_t<vec3_t> *CG_Camera_GetLastViewAxis(LocalClientNum_t localClientNum)
{
  return &s_cameraTransition[localClientNum].lastViewAxis;
}

/*
==============
CG_Camera_GetLastViewAxisPlayer
==============
*/
tmat33_t<vec3_t> *CG_Camera_GetLastViewAxisPlayer(LocalClientNum_t localClientNum)
{
  return &s_cameraTransition[localClientNum].last1stViewAxis;
}

/*
==============
CG_Camera_GetLastViewEyePos
==============
*/
vec3_t *CG_Camera_GetLastViewEyePos(LocalClientNum_t localClientNum)
{
  return &s_cameraTransition[localClientNum].lastViewEyePos;
}

/*
==============
CG_Camera_GetLastViewEyePosPlayer
==============
*/
vec3_t *CG_Camera_GetLastViewEyePosPlayer(LocalClientNum_t localClientNum)
{
  return &s_cameraTransition[localClientNum].last1stViewEyePos;
}

/*
==============
CG_Camera_GetOverrideFOV
==============
*/
char CG_Camera_GetOverrideFOV(const LocalClientNum_t localClientNum, float *overrideFovDeg)
{
  const CameraDef *Def; 

  *overrideFovDeg = 65.0;
  Def = CG_Camera_Active_TryGetDef(localClientNum);
  if ( !Def || !Def->overrideFOV )
    return 0;
  *overrideFovDeg = Def->FOV;
  return 1;
}

/*
==============
CG_Camera_GetOverrideLensProfile
==============
*/
char CG_Camera_GetOverrideLensProfile(const LocalClientNum_t localClientNum, int *outOverrideProfile, float *outFocalLength, float *outFStop, float *outScale, float *outUVScale)
{
  const CameraDef *Def; 
  const CameraDef *v10; 
  unsigned int overrideLensProfile; 
  int v12; 
  unsigned int v14; 
  int v15; 

  *outOverrideProfile = 0;
  *outFocalLength = 0.0;
  *outFStop = 0.0;
  *outScale = 1.0;
  *outUVScale = 1.0;
  Def = CG_Camera_Active_TryGetDef(localClientNum);
  v10 = Def;
  if ( !Def )
    return 0;
  overrideLensProfile = Def->overrideLensProfile;
  if ( overrideLensProfile >= 8 )
  {
    v15 = 8;
    v14 = overrideLensProfile;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 975, ASSERT_TYPE_ASSERT, "(unsigned)( camDef->overrideLensProfile ) < (unsigned)( LENS_PROFILE_COUNT )", "camDef->overrideLensProfile doesn't index LENS_PROFILE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v12 = v10->overrideLensProfile;
  if ( !v12 )
    return 0;
  *outOverrideProfile = v12;
  *outFocalLength = v10->lensFocalLength;
  *outFStop = v10->lensFStop;
  *outScale = v10->lensScale;
  *outUVScale = v10->lensUVScale;
  return 1;
}

/*
==============
CG_Camera_GetOverrideRadialBlur
==============
*/
char CG_Camera_GetOverrideRadialBlur(const LocalClientNum_t localClientNum, float *outOverrideRadius, float *outOverrideStrength)
{
  const CameraDef *Def; 

  *outOverrideRadius = 1.0;
  *outOverrideStrength = 0.0;
  Def = CG_Camera_Active_TryGetDef(localClientNum);
  if ( !Def || !Def->overrideRadialBlur )
    return 0;
  *outOverrideRadius = Def->radialBlurRadius;
  *outOverrideStrength = Def->radialBlurStrength;
  return 1;
}

/*
==============
CG_Camera_InCameraOrTransition
==============
*/
bool CG_Camera_InCameraOrTransition(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CameraType v3; 
  __int64 v4; 
  bool result; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  result = LocalClientGlobals->nextSnap->GetPlayerState(LocalClientGlobals->nextSnap, (unsigned int)v1)->cameraTypeIndex || (v3 = CG_Camera_Active_Get((LocalClientNum_t)v1), v4 = v1, v3) && v3 != s_cameraTransition[v4].lastActiveCamera || s_cameraTransition[v4].active;
  return result;
}

/*
==============
CG_Camera_Initialize
==============
*/
void CG_Camera_Initialize(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 278, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  s_cameraStates[v2].lastRenderedClient = -1;
  *(_QWORD *)s_cameraStates[v2].transInterpDisabledBits.array = 0i64;
  *(_QWORD *)&s_cameraStates[v2].transInterpDisabledBits.array[2] = 0i64;
  *(_QWORD *)&s_cameraStates[v2].transInterpDisabledBits.array[4] = 0i64;
  *(_QWORD *)&s_cameraStates[v2].transInterpDisabledBits.array[6] = 0i64;
}

/*
==============
CG_Camera_InitializeValues
==============
*/
bool CG_Camera_InitializeValues(ClientCameraData *camData)
{
  LocalClientNum_t localClientNum; 
  LocalClientNum_t v3; 
  cg_t *LocalClientGlobals; 
  bool result; 

  if ( camData->initialized )
    return 0;
  localClientNum = camData->localClientNum;
  camData->initialized = 1;
  camData->traceMask = 1;
  camData->traceIgnoreEntity = 2047;
  camData->traceWorld = 3 * localClientNum + 2;
  camData->traceDisplaceFrom = 0.0;
  *(_OWORD *)camData->vehicleData.angles.v = 0ui64;
  camData->vehicleData.polarMaxOnSpeed = 0.0;
  camData->vehicleData.orbitNoise = 0;
  *(_QWORD *)&camData->vehicleData.yawDelta = 0i64;
  v3 = camData->localClientNum;
  *(_QWORD *)&camData->orbitCamData.timeSimulating = 0i64;
  camData->orbitCamData.lastFrac = 1.0;
  *(_QWORD *)camData->orbitCamData.sphericalCoords.v = 1133903872i64;
  camData->orbitCamData.sphericalCoords.v[2] = 70.0;
  camData->orbitCamData.interpolatedRadial = camData->orbitCamData.sphericalCoords.v[0];
  camData->orbitCamData.cameraReturn = 0;
  *(_QWORD *)&camData->orbitCamData.lastCmdTimeButton1 = 0i64;
  camData->orbitCamData.camPerspectiveMode = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v3);
  camData->orbitCamData.useRemoteAngles = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu);
  result = 1;
  camData->orbitCamData.inputUpdated = 0;
  *(_QWORD *)&camData->orbitCamData.inputPolarValue = 0i64;
  camData->orbitCamData.timeUntilReturn = 0.0;
  *(_WORD *)&camData->orbitCamData.yawInverted = 0;
  *(_QWORD *)&camData->orbitCamData.inputGas = 0i64;
  camData->orbitCamData.cameraReturnBasedOnGas = 0;
  *(_QWORD *)&camData->orbitCamData.curYawAdd = 0i64;
  *(_WORD *)&camData->orbitCamData.polarElevation = 0;
  camData->orbitCamData.returnAzimuthFactor = 1.0;
  camData->orbitCamData.returnTimeFactor = 1.0;
  *(_QWORD *)&camData->orbitCamData.speedFactor = 1065353216i64;
  camData->orbitCamData.lerpSpeed = 4.0;
  *(_QWORD *)camData->orbitCamData.curFocusPos.v = 0i64;
  camData->orbitCamData.curFocusPos.v[2] = 0.0;
  return result;
}

/*
==============
CG_Camera_IsSkydiveSpectatorOrKillcam
==============
*/
bool CG_Camera_IsSkydiveSpectatorOrKillcam(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int cameraTypeIndex; 
  bool result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  result = (CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum) || (cameraTypeIndex = LocalClientGlobals->predictedPlayerState.cameraTypeIndex, BG_Camera_GetSkydiveOrbitDefIndex() == cameraTypeIndex)) && (LocalClientGlobals->inKillCam || BG_IsSpectatingOrSpectator(&LocalClientGlobals->predictedPlayerState));
  return result;
}

/*
==============
CG_Camera_IsTransitionSkydiveOrbitCamType
==============
*/
bool CG_Camera_IsTransitionSkydiveOrbitCamType(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int prevCamNdx; 
  unsigned int nextCamNdx; 
  bool result; 

  v1 = localClientNum;
  prevCamNdx = s_cameraTransition[v1].prevCamNdx;
  result = 1;
  if ( BG_Camera_GetSkydiveOrbitDefIndex() != prevCamNdx )
  {
    nextCamNdx = s_cameraTransition[v1].nextCamNdx;
    if ( BG_Camera_GetSkydiveOrbitDefIndex() != nextCamNdx )
      return 0;
  }
  return result;
}

/*
==============
CG_Camera_KillCam_Transition_In
==============
*/
void CG_Camera_KillCam_Transition_In(LocalClientNum_t localClientNum)
{
  ClientCameraKillCam *v1; 

  v1 = &s_cameraKillCam[localClientNum];
  v1->initialized = 0;
  v1->vehSign = 1.0;
  *(_QWORD *)v1->lastEyePos.v = 0i64;
  *(_QWORD *)&v1->lastEyePos.z = 0i64;
  *(_QWORD *)&v1->lastLookAtEntPos.y = 0i64;
  MatrixIdentity33(&v1->lastAxis);
  v1->lastKillCamEntity = 2047;
  v1->lastKillCamEntityType = 0;
  v1->lastFov = 70.0;
}

/*
==============
CG_Camera_KillCam_Transition_Out
==============
*/
void CG_Camera_KillCam_Transition_Out(LocalClientNum_t localClientNum)
{
  ClientCameraKillCam *v1; 

  v1 = &s_cameraKillCam[localClientNum];
  v1->initialized = 0;
  v1->vehSign = 1.0;
  *(_QWORD *)v1->lastEyePos.v = 0i64;
  *(_QWORD *)&v1->lastEyePos.z = 0i64;
  *(_QWORD *)&v1->lastLookAtEntPos.y = 0i64;
  MatrixIdentity33(&v1->lastAxis);
  v1->lastKillCamEntity = 2047;
  v1->lastKillCamEntityType = 0;
  v1->lastFov = 70.0;
}

/*
==============
CG_Camera_KillCam_Update
==============
*/
void CG_Camera_KillCam_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  __int64 v2; 
  ClientCameraKillCam *v4; 
  cg_t *LocalClientGlobals; 
  int killCamEntity; 
  __int16 lastKillCamEntityType; 

  v2 = localClientNum;
  if ( CG_GetLocalClientGlobals(localClientNum)->inKillCam )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4328, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->inKillCam )
    {
      killCamEntity = LocalClientGlobals->killCamEntity;
      if ( killCamEntity == 2047 )
      {
        if ( !s_cameraKillCam[v2].initialized )
          return;
        lastKillCamEntityType = s_cameraKillCam[v2].lastKillCamEntityType;
      }
      else
      {
        lastKillCamEntityType = CG_GetEntity((const LocalClientNum_t)v2, killCamEntity)->nextState.eType;
      }
      if ( lastKillCamEntityType == 14 )
        CG_Camera_KillCam_Vehicles_Update((LocalClientNum_t)v2, inOutRefDef);
    }
  }
  else
  {
    v4 = &s_cameraKillCam[v2];
    if ( v4->initialized )
    {
      v4->initialized = 0;
      v4->vehSign = 1.0;
      *(_QWORD *)v4->lastEyePos.v = 0i64;
      *(_QWORD *)&v4->lastEyePos.z = 0i64;
      *(_QWORD *)&v4->lastLookAtEntPos.y = 0i64;
      MatrixIdentity33(&v4->lastAxis);
      v4->lastKillCamEntity = 2047;
      v4->lastKillCamEntityType = 0;
      v4->lastFov = 70.0;
    }
  }
}

/*
==============
CG_Camera_KillCam_Vehicles_Update
==============
*/
void CG_Camera_KillCam_Vehicles_Update(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  __int64 v12; 
  cg_t *LocalClientGlobals; 
  int killCamEntity; 
  bool v18; 
  centity_t *Entity; 
  const VehicleClient *Client; 
  CgHandler *Handler; 
  int corpseEntNum; 
  unsigned int killCamLookAtEntity; 
  centity_t *v25; 
  float v27; 
  float v30; 
  centity_t *v32; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  __int64 v49; 
  char v100; 
  bool v101; 
  const dvar_t *v127; 
  float startSolidOffset; 
  char v228; 
  CgVehicleSystem *VehicleSystem; 
  CgVehicleSystem *ClientDef; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t v0; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  v12 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4387, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4388, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  killCamEntity = LocalClientGlobals->killCamEntity;
  _RDI = &s_cameraKillCam[v12];
  _RBX = &s_cameraDeathCam[v12];
  if ( killCamEntity == 2047 && _RBX->camType == ACTIVE )
    killCamEntity = _RBX->vehEntNum;
  v18 = _RDI->initialized && _RDI->lastKillCamEntity != 2047 && _RDI->lastKillCamEntityType == 14;
  if ( killCamEntity != 2047 )
  {
    __asm
    {
      vmovaps [rsp+1C0h+var_40], xmm6
      vmovaps [rsp+1C0h+var_50], xmm7
      vmovaps [rsp+1C0h+var_60], xmm8
      vmovaps [rsp+1C0h+var_70], xmm9
      vmovaps [rsp+1C0h+var_80], xmm10
      vmovaps [rsp+1C0h+var_90], xmm11
      vmovaps [rsp+1C0h+var_A0], xmm12
      vmovaps [rsp+1C0h+var_B0], xmm13
      vmovaps [rsp+1C0h+var_C0], xmm14
      vmovaps [rsp+1C0h+var_D0], xmm15
    }
    Entity = CG_GetEntity((const LocalClientNum_t)v12, killCamEntity);
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((Entity->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4421, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehEnt->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehEnt->nextState )") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v12);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4425, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
    if ( !Client )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4427, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
        __debugbreak();
      Client = NULL;
    }
    ClientDef = (CgVehicleSystem *)CgVehicleSystem::GetClientDef(Client);
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4429, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    Handler = CgHandler::getHandler((LocalClientNum_t)v12);
    Handler->GetEntityAngles(Handler, Entity->nextState.number, &angles);
    AnglesToAxis(&angles, &axis);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    corpseEntNum = _RBX->corpseEntNum;
    killCamLookAtEntity = LocalClientGlobals->killCamLookAtEntity;
    v228 = 0;
    if ( corpseEntNum != 2047 )
    {
      v25 = CG_GetEntity((const LocalClientNum_t)v12, corpseEntNum);
      if ( v25 )
      {
        if ( (v25->flags & 1) != 0 && v25->pose.eType == 2 && v25->pose.killcamRagdollHandle )
        {
          killCamLookAtEntity = _RBX->corpseEntNum;
          v228 = 1;
        }
      }
    }
    if ( !_RDI->initialized )
    {
      __asm { vmovsd  xmm0, qword ptr [rbx+4] }
      v27 = _RBX->sourceEyePos.v[2];
      __asm
      {
        vmovsd  qword ptr [rdi+24h], xmm0
        vmovups ymm0, ymmword ptr [rbx+10h]
        vmovups ymmword ptr [rdi], ymm0
        vmovsd  xmm0, qword ptr [rbx+4]
      }
      _RDI->lastEyePos.v[2] = v27;
      _RDI->lastAxis.m[2].v[2] = _RBX->sourceAxis.m[2].v[2];
      v30 = _RBX->sourceEyePos.v[2];
      __asm { vmovsd  qword ptr [rdi+30h], xmm0 }
      _RDI->lastLookAtEntPos.v[2] = v30;
    }
    outPos.v[2] = _RDI->lastLookAtEntPos.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rdi+30h]
      vmovsd  qword ptr [rsp+1C0h+outPos], xmm0
    }
    if ( killCamLookAtEntity != 2047 )
    {
      v32 = CG_GetEntity((const LocalClientNum_t)v12, killCamLookAtEntity);
      p_pose = &v32->pose;
      if ( (v32->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(v32->nextState.number, (LocalClientNum_t)v12);
        if ( !ClientDObj || !CG_DObjGetWorldTagPos(p_pose, ClientDObj, scr_const.j_head, &outPos) )
          CG_GetPoseOrigin(p_pose, &outPos);
      }
      else
      {
        Com_Printf(14, "[KILLCAM] Lookat entity %d is not valid. Using last pos to lookat.\n", killCamLookAtEntity);
      }
    }
    __asm
    {
      vmovss  xmm13, cs:__real@3f800000
      vxorps  xmm12, xmm12, xmm12
    }
    if ( !_RDI->initialized )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+1C0h+outPos+4]
        vsubss  xmm1, xmm0, dword ptr [rbp+0C0h+outOrigin+4]
        vmovss  xmm2, dword ptr [rsp+1C0h+outPos]
        vsubss  xmm0, xmm2, dword ptr [rbp+0C0h+outOrigin]
        vmulss  xmm3, xmm1, dword ptr [rbp+0C0h+axis+10h]
        vmulss  xmm1, xmm0, dword ptr [rbp+0C0h+axis+0Ch]
        vmovss  xmm0, cs:__real@bf800000
        vaddss  xmm3, xmm3, xmm1
        vcmpless xmm2, xmm12, xmm3
        vblendvps xmm0, xmm13, xmm0, xmm2
        vmovss  dword ptr [rdi+3Ch], xmm0
      }
      _RDI->initialized = 1;
      _RDI->lastKillCamEntity = killCamEntity;
      _RDI->lastKillCamEntityType = 14;
    }
    __asm
    {
      vmovss  xmm7, cs:__real@43160000
      vmovss  xmm6, cs:__real@44160000
      vmovss  xmm11, cs:__real@c2480000
    }
    v49 = *(_QWORD *)&ClientDef->m_vehicleClients[0].rotateSpeed.z;
    __asm
    {
      vmovss  xmm8, cs:__real@40a00000
      vmovss  xmm15, cs:__real@428c0000
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+1C0h+var_16C], xmm0
      vmovaps xmm10, xmm7
      vxorps  xmm14, xmm14, xmm14
      vmovaps xmm9, xmm13
    }
    if ( v49 )
    {
      if ( *(_DWORD *)(v49 + 8) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4521, ASSERT_TYPE_ASSERT, "( vehDef->killCamDef->profile == CAMERAPROFILE_KILLCAM_VEHICLE )", "Killcam for vehicle must be the correct profile: 'KillCam Vehicle'") )
        __debugbreak();
      _RAX = *(_QWORD *)&ClientDef->m_vehicleClients[0].rotateSpeed.z;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+11Ch]
        vmovss  xmm6, dword ptr [rax+104h]
        vmovss  xmm7, dword ptr [rax+10Ch]
        vmovss  xmm10, dword ptr [rax+110h]
        vmovss  xmm11, dword ptr [rax+118h]
        vmovss  xmm14, dword ptr [rax+114h]
        vmovss  xmm8, dword ptr [rax+124h]
        vmovss  xmm15, dword ptr [rax+108h]
        vmovss  xmm9, dword ptr [rax+120h]
        vmovss  [rsp+1C0h+var_16C], xmm0
      }
    }
    __asm { vmovss  xmm2, cs:__real@41000000 }
    _EAX = CL_TransientsWorldMP_IsActive();
    _ECX = 0;
    __asm
    {
      vmovd   xmm0, eax
      vmovd   xmm1, ecx
      vpcmpeqd xmm3, xmm0, xmm1
      vmovss  xmm1, cs:__real@41a00000
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmovss  xmm1, dword ptr [rbp+0C0h+outOrigin]
      vsubss  xmm3, xmm1, dword ptr [rsp+1C0h+outPos]
      vmovss  xmm1, dword ptr [rbp+0C0h+outOrigin+8]
      vsubss  xmm4, xmm1, dword ptr [rsp+1C0h+outPos+8]
      vmaxss  xmm0, xmm0, xmm8
      vmovss  dword ptr [rsp+1C0h+var_178], xmm0
      vmovss  xmm0, dword ptr [rbp+0C0h+outOrigin+4]
      vsubss  xmm2, xmm0, dword ptr [rsp+1C0h+outPos+4]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm0
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vdivss  xmm0, xmm13, xmm6
      vmulss  xmm0, xmm4, xmm0; val
      vmovaps xmm2, xmm13; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+3Ch]
      vsubss  xmm5, xmm13, xmm0
      vmulss  xmm1, xmm5, cs:__real@40c00000
      vsubss  xmm2, xmm1, cs:__real@41700000
      vmulss  xmm3, xmm2, xmm5
      vaddss  xmm4, xmm3, cs:__real@41200000
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm2, xmm1, xmm5
      vmulss  xmm8, xmm4, xmm2
      vmovaps xmm2, xmm13; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm9; val
      vmovss  [rsp+1C0h+var_170], xmm8
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    v100 = 0;
    v101 = v228 == 0;
    __asm
    {
      vxorps  xmm2, xmm8, cs:__xmm@80000000800000008000000080000000
      vmovss  xmm9, dword ptr [rbp+0C0h+axis+4]
      vcmpless xmm1, xmm12, xmm6
      vblendvps xmm1, xmm2, xmm8, xmm1
      vmovss  xmm8, dword ptr [rbp+0C0h+axis]
      vmulss  xmm3, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbp+0C0h+axis+0Ch]
      vsubss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rbp+0C0h+axis+10h]
      vmulss  xmm2, xmm1, xmm3
      vsubss  xmm1, xmm0, xmm9
      vaddss  xmm5, xmm2, xmm8
      vmulss  xmm2, xmm1, xmm3
      vaddss  xmm4, xmm2, xmm9
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm3, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm13, xmm0
      vdivss  xmm1, xmm13, xmm0
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm6, xmm4, xmm1
    }
    if ( v228 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+24h]
        vmovss  xmm3, dword ptr [rdi+28h]
        vmovss  xmm2, dword ptr [rdi+2Ch]
        vmovss  xmm14, cs:__real@80000000
        vmovss  dword ptr [rsp+1C0h+end], xmm1
        vmovss  dword ptr [rsp+1C0h+end+4], xmm3
        vmovss  dword ptr [rsp+1C0h+end+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm14, [rsp+1C0h+var_170]
        vmulss  xmm1, xmm11, [rsp+1C0h+var_170]
      }
      v127 = DVARBOOL_bg_vehKillcamTraceShort;
      __asm
      {
        vaddss  xmm5, xmm1, xmm10
        vsubss  xmm4, xmm0, xmm7
        vmulss  xmm0, xmm4, xmm2
        vaddss  xmm3, xmm0, dword ptr [rbp+0C0h+outOrigin]
        vmulss  xmm2, xmm5, dword ptr [rbp+0C0h+axis+18h]
        vaddss  xmm0, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rbp+0C0h+axis+1Ch]
        vmulss  xmm1, xmm4, xmm6
        vaddss  xmm3, xmm1, dword ptr [rbp+0C0h+outOrigin+4]
        vaddss  xmm1, xmm3, xmm2
        vmulss  xmm2, xmm5, dword ptr [rbp+0C0h+axis+20h]
        vmovss  dword ptr [rsp+1C0h+end+4], xmm1
        vaddss  xmm1, xmm2, dword ptr [rbp+0C0h+outOrigin+8]
        vmovss  dword ptr [rsp+1C0h+end+8], xmm1
        vmovss  dword ptr [rsp+1C0h+end], xmm0
      }
      if ( !DVARBOOL_bg_vehKillcamTraceShort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehKillcamTraceShort") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v127);
      __asm { vmovss  xmm14, cs:__real@80000000 }
      if ( v127->current.enabled )
      {
        __asm
        {
          vmovss  xmm9, dword ptr [rsp+1C0h+end]
          vmovss  xmm10, dword ptr [rsp+1C0h+end+4]
          vmovss  xmm11, dword ptr [rsp+1C0h+end+8]
          vmovss  xmm0, dword ptr [rsp+1C0h+outPos]
          vmovss  xmm1, dword ptr [rsp+1C0h+outPos+4]
          vsubss  xmm4, xmm11, dword ptr [rbp+0C0h+outOrigin+8]
          vsubss  xmm6, xmm0, xmm9
          vmovss  xmm0, dword ptr [rsp+1C0h+outPos+8]
          vsubss  xmm8, xmm0, xmm11
          vsubss  xmm7, xmm1, xmm10
          vmulss  xmm0, xmm8, xmm8
          vmulss  xmm2, xmm7, xmm7
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsubss  xmm3, xmm9, dword ptr [rbp+0C0h+outOrigin]
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, xmm14
          vblendvps xmm0, xmm1, xmm13, xmm0
          vsubss  xmm1, xmm10, dword ptr [rbp+0C0h+outOrigin+4]
          vdivss  xmm5, xmm13, xmm0
          vmulss  xmm2, xmm1, xmm1
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm0
          vaddss  xmm2, xmm3, xmm1
          vsqrtss xmm0, xmm2, xmm2
          vmulss  xmm4, xmm0, cs:__real@3f000000
          vmulss  xmm1, xmm5, xmm6
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm0, xmm2, xmm9
          vmulss  xmm1, xmm5, xmm7
          vmulss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbp+0C0h+start], xmm0
          vaddss  xmm0, xmm2, xmm10
          vmulss  xmm1, xmm5, xmm8
          vmulss  xmm2, xmm1, xmm4
          vmovss  dword ptr [rbp+0C0h+start+4], xmm0
          vaddss  xmm0, xmm2, xmm11
          vmovss  dword ptr [rbp+0C0h+start+8], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+1C0h+outPos]
          vmovsd  qword ptr [rbp+0C0h+start], xmm0
        }
        start.v[2] = outPos.v[2];
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+1C0h+var_178]; collRadius
        vmovss  [rsp+1C0h+startSolidOffset], xmm12
      }
      CG_Camera_Orbit_Trace((Physics_WorldId)(3 * v12 + 2), *(float *)&_XMM1, Entity->nextState.number, &start, &end, 2065, startSolidOffset, &end);
      __asm
      {
        vmovss  xmm2, dword ptr [rsp+1C0h+end+8]
        vmovss  xmm3, dword ptr [rsp+1C0h+end+4]
        vmovss  xmm1, dword ptr [rsp+1C0h+end]
        vmovss  xmm9, dword ptr [rbp+0C0h+axis+4]
        vmovss  xmm8, dword ptr [rbp+0C0h+axis]
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1C0h+outPos]
      vmovaps xmm11, [rsp+1C0h+var_90]
      vmovaps xmm10, [rsp+1C0h+var_80]
      vsubss  xmm5, xmm0, xmm1
      vmovss  xmm1, dword ptr [rsp+1C0h+outPos+4]
      vmovss  xmm0, dword ptr [rsp+1C0h+outPos+8]
      vsubss  xmm7, xmm0, xmm2
      vsubss  xmm6, xmm1, xmm3
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, xmm14
      vmovaps xmm14, [rsp+1C0h+var_C0]
      vblendvps xmm0, xmm4, xmm13, xmm0
      vdivss  xmm2, xmm13, xmm0
      vmovaps xmm13, [rsp+1C0h+var_B0]
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm1, xmm2, xmm6
      vmovss  [rbp+0C0h+v0], xmm0
      vmulss  xmm0, xmm2, xmm7
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vcomiss xmm4, xmm2
      vmovaps xmm7, [rsp+1C0h+var_50]
      vmovss  [rbp+0C0h+var_11C], xmm1
      vmovss  [rbp+0C0h+var_118], xmm0
    }
    if ( !(v100 | v101) )
    {
      __asm
      {
        vmovss  dword ptr [rbp+0C0h+start], xmm12
        vmovss  dword ptr [rbp+0C0h+start+4], xmm12
        vmovss  dword ptr [rbp+0C0h+start+8], xmm12
      }
      if ( !VecNCompareCustomEpsilon(v0.v, start.v, *(float *)&_XMM2, 3) )
      {
LABEL_68:
        BG_AxisFromForward(&v0, &identityMatrix33.m[2], &inOutRefDef->axis);
        AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
        RefdefView_SetOrg(inOutRefDef, &end);
        CG_ShakeCamera((LocalClientNum_t)v12);
        CG_PerturbCamera(LocalClientGlobals);
        __asm
        {
          vmovss  xmm1, [rsp+1C0h+var_170]
          vmulss  xmm0, xmm1, [rsp+1C0h+var_16C]
          vaddss  xmm6, xmm0, xmm15
          vmovaps xmm1, xmm6; fov_x
        }
        CG_View_UpdateFov((const LocalClientNum_t)v12, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1C0h+outPos]
          vmovss  xmm1, dword ptr [rsp+1C0h+outPos+4]
          vmovss  dword ptr [rdi+30h], xmm0
          vmovss  xmm0, dword ptr [rsp+1C0h+outPos+8]
          vmovss  dword ptr [rdi+34h], xmm1
          vmovss  xmm1, dword ptr [rsp+1C0h+end]
          vmovss  dword ptr [rdi+38h], xmm0
          vmovss  xmm0, dword ptr [rsp+1C0h+end+4]
          vmovss  dword ptr [rdi+24h], xmm1
          vmovss  xmm1, dword ptr [rsp+1C0h+end+8]
          vmovss  dword ptr [rdi+2Ch], xmm1
          vmovss  dword ptr [rdi+28h], xmm0
        }
        MatrixCopy33(&inOutRefDef->axis, &s_cameraKillCam[v12].lastAxis);
        __asm
        {
          vmovaps xmm15, [rsp+1C0h+var_D0]
          vmovaps xmm12, [rsp+1C0h+var_A0]
          vmovaps xmm9, [rsp+1C0h+var_70]
          vmovaps xmm8, [rsp+1C0h+var_60]
          vmovss  dword ptr [rdi+40h], xmm6
          vmovaps xmm6, [rsp+1C0h+var_40]
        }
        return;
      }
      __asm
      {
        vmovss  xmm9, dword ptr [rbp+0C0h+axis+4]
        vmovss  xmm8, dword ptr [rbp+0C0h+axis]
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0C0h+axis+8]
      vmovss  [rbp+0C0h+var_118], xmm0
      vmovss  [rbp+0C0h+v0], xmm8
      vmovss  [rbp+0C0h+var_11C], xmm9
    }
    goto LABEL_68;
  }
  if ( v18 )
  {
    MatrixCopy33(&s_cameraKillCam[v12].lastAxis, &inOutRefDef->axis);
    AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
    RefdefView_SetOrg(inOutRefDef, &_RDI->lastEyePos);
    CG_ShakeCamera((LocalClientNum_t)v12);
    CG_PerturbCamera(LocalClientGlobals);
    __asm { vmovss  xmm1, dword ptr [rdi+40h]; fov_x }
    CG_View_UpdateFov((const LocalClientNum_t)v12, *(const float *)&_XMM1);
  }
}

/*
==============
CG_Camera_OnFinalizeViewValues
==============
*/
void CG_Camera_OnFinalizeViewValues(const LocalClientNum_t localClientNum, RefdefView *refdefView)
{
  __int64 v13; 
  cg_t *LocalClientGlobals; 
  cg_t *v15; 
  ClientCameraDeathCam *v16; 
  cg_t *v17; 
  cg_t *v18; 
  const CameraDef *Def; 
  const CameraDef *v20; 
  RefdefView *p_view; 
  __int64 v54; 
  __int64 v55; 
  vec3_t outOrg; 
  tmat33_t<vec3_t> axis; 
  char v58; 
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
  }
  v13 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  s_cameras[251][v13].skydiveData.lastCameraTime = LocalClientGlobals->time;
  AxisToQuat(&LocalClientGlobals->refdef.view.axis, &s_cameras[251][v13].skydiveData.lastCameraRot);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, (vec3_t *)&s_cameras[251][v13].skydiveData.lastCameraPos);
  CG_Camera_Transition_FinalizeViewValues((LocalClientNum_t)v13, refdefView);
  v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4976, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v16 = &s_cameraDeathCam[v13];
  if ( v16->camType && v15->predictedPlayerState.pm_type < 7 )
  {
    v16->camType = INACTIVE;
    *(_QWORD *)&v16->time = 0i64;
    v16->supportsFOV = 0;
    v16->vehEntNum = 2047;
  }
  v17 = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  if ( (unsigned int)v13 >= 2 )
  {
    LODWORD(v55) = 2;
    LODWORD(v54) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3506, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v54, v55) )
      __debugbreak();
  }
  v18 = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3508, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  s_cameraStates[v13].lastRenderedClient = v18->predictedPlayerState.clientNum;
  s_cameraStates[v13].lastClientHadTeleportFlag = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v18->predictedPlayerState.eFlags, ACTIVE, 2u);
  Def = CG_Camera_Active_TryGetDef((LocalClientNum_t)v13);
  v20 = Def;
  if ( Def )
  {
    if ( Def->profile || !Def->firstPerson.applyOffset )
    {
      p_view = &v17->refdef.view;
    }
    else
    {
      AnglesToAxis(&v17->baseGunAngles, &axis);
      _RDI = &v20->firstPerson.offsetTranslation;
      if ( _RDI == &outOrg && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rdi+4]
        vmulss  xmm10, xmm2, dword ptr [rsp+158h+axis+0Ch]
        vmovss  xmm1, dword ptr [rdi]
        vmulss  xmm7, xmm1, dword ptr [rsp+158h+axis]
        vmovss  xmm0, dword ptr [rdi+8]
        vmulss  xmm6, xmm0, dword ptr [rsp+158h+axis+18h]
        vmulss  xmm11, xmm2, dword ptr [rsp+158h+axis+10h]
        vmulss  xmm8, xmm1, dword ptr [rsp+158h+axis+4]
        vmulss  xmm9, xmm0, dword ptr [rsp+158h+axis+1Ch]
        vmulss  xmm14, xmm2, dword ptr [rsp+158h+axis+14h]
        vmulss  xmm12, xmm1, dword ptr [rsp+158h+axis+8]
        vmulss  xmm13, xmm0, dword ptr [rsp+158h+axis+20h]
      }
      p_view = &v17->refdef.view;
      RefdefView_GetOrg(p_view, &outOrg);
      __asm
      {
        vaddss  xmm0, xmm10, xmm7
        vaddss  xmm2, xmm0, xmm6
        vaddss  xmm2, xmm2, dword ptr [rsp+158h+outOrg]
        vmovss  dword ptr [rsp+158h+outOrg], xmm2
        vaddss  xmm0, xmm8, xmm11
        vaddss  xmm3, xmm0, xmm9
        vaddss  xmm2, xmm3, dword ptr [rsp+158h+outOrg+4]
        vmovss  dword ptr [rsp+158h+outOrg+4], xmm2
        vaddss  xmm0, xmm14, xmm12
        vaddss  xmm3, xmm0, xmm13
        vaddss  xmm2, xmm3, dword ptr [rsp+158h+outOrg+8]
        vmovss  dword ptr [rsp+158h+outOrg+8], xmm2
      }
      RefdefView_SetOrg(p_view, &outOrg);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    CG_Camera_CheckSanity(p_view);
  }
  _R11 = &v58;
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
  }
}

/*
==============
CG_Camera_Orbit_GetOriginAndAngle
==============
*/
void CG_Camera_Orbit_GetOriginAndAngle(ClientCameraData *camData, vec3_t *outOrg, vec3_t *outAngles)
{
  CameraType camType; 
  const CameraDef *Def; 
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  tmat33_t<vec3_t> outTagMat; 

  camType = camData->camType;
  if ( camType == CAMERA_INVALID || camType >= MAX_CAMERA_TYPES || (unsigned int)(camType - 1) >= 0xFA )
    goto LABEL_23;
  if ( !CameraType_Is_Def(camType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 688, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( camType ))", (const char *)&queryFormat, "CameraType_Is_Def( camType )") )
    __debugbreak();
  Def = BG_Camera_GetDef(camType);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 690, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  if ( Def->profile == CAMERAPROFILE_ORBIT )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
    if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
    {
      if ( LocalClientGlobals->predictedPlayerState.linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3227, ASSERT_TYPE_ASSERT, "( ps->linkEnt != ENTITYNUM_NONE )", "Player linked to weapon view but no link entity") )
        __debugbreak();
      Entity = CG_GetEntity((const LocalClientNum_t)camData->localClientNum, LocalClientGlobals->predictedPlayerState.linkEnt);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3229, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      CG_GetPoseOrigin(&Entity->pose, outOrg);
      CG_GetPoseAngles(&Entity->pose, outAngles);
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, camData->localClientNum);
      if ( ClientDObj )
      {
        if ( CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_player, &outTagMat, outOrg) )
          AxisToAngles(&outTagMat, outAngles);
      }
    }
    else
    {
      Handler = CgHandler::getHandler(camData->localClientNum);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)camData->localClientNum);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, outOrg, Handler);
      outAngles->v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
      outAngles->v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
      outAngles->v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
    }
  }
  else
  {
LABEL_23:
    *(_QWORD *)outOrg->v = 0i64;
    outOrg->v[2] = 0.0;
    *(_QWORD *)outAngles->v = 0i64;
    outAngles->v[2] = 0.0;
  }
}

/*
==============
CG_Camera_Orbit_Step
==============
*/

void __fastcall CG_Camera_Orbit_Step(ClientCameraData *camData, double frameTime, const vec3_t *orbitOrg, const vec3_t *orbitAngles, vec3_t *retSpherical, bool firstTime, RefdefView *inOutRefDef, unsigned int camIndex)
{
  float v34; 
  bool cameraReturnBasedOnGas; 
  bool v63; 
  char v144; 
  bool v148; 
  const dvar_t *v157; 
  bool v180; 
  cg_t *LocalClientGlobals; 
  float v202; 
  float v207; 
  float v215; 
  float v217; 
  bool v218; 
  bool v219; 
  LocalClientNum_t localClientNum; 
  __int16 linkEnt; 
  centity_t *Entity; 
  float v236; 
  const dvar_t *v243; 
  float v272; 
  LocalClientNum_t v290; 
  RefdefView *v333; 
  bool Bool_Internal_DebugName; 
  bool v335; 
  float outFraction; 
  float outVertOrRoll; 
  float outHorizOrPitch[2]; 
  RefdefView *refdefView; 
  CameraTraceInfo traceInfo; 
  vec3_t forward; 
  vec3_t vector; 
  vec3_t v369; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 
  char v375; 
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
  _RBX = s_cameraTransition;
  _R13 = orbitAngles;
  _RSI = retSpherical;
  _R15 = orbitOrg;
  refdefView = inOutRefDef;
  _RDI = camData;
  __asm { vmovaps xmm11, xmm1 }
  if ( firstTime || s_cameraTransition[camData->localClientNum].active )
  {
    camData->orbitCamData.inputUpdated = 0;
  }
  else
  {
    __asm { vmovaps xmm3, xmm1; frameTime }
    CG_Camera_Orbit_Update_Input(camData, orbitAngles, retSpherical, *(float *)&_XMM3);
  }
  s_cameraTransition[_RDI->localClientNum].lastWas3PWithFocus = 1;
  __asm { vmovsd  xmm0, qword ptr [r15] }
  _RCX = _RDI->localClientNum;
  __asm { vmovsd  qword ptr [rcx+rbx+144h], xmm0 }
  s_cameraTransition[_RCX].lastFocusOrigin.v[2] = _R15->v[2];
  _R14 = _RDI->camDef;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2743, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+34h]
    vmulss  xmm1, xmm11, dword ptr [rdi+38h]
    vsubss  xmm1, xmm0, xmm1
    vaddss  xmm0, xmm11, dword ptr [rdi+3Ch]
    vmovss  dword ptr [rdi+3Ch], xmm0
    vmovss  dword ptr [rdi+34h], xmm1
    vmovsd  xmm1, qword ptr [r13+0]
  }
  v34 = _R13->v[2];
  __asm { vmovsd  qword ptr [rbp+130h+angles], xmm1 }
  *(_QWORD *)&angles.y = __PAIR64__(LODWORD(v34), HIDWORD(_RT0));
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+130h+angles], xmm8
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm14, cs:__real@80000000
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm15, cs:__real@3a83126f
  }
  if ( _RDI->orbitCamData.cameraInstantRecenter )
  {
    if ( _RDI->orbitCamData.inputUpdated )
    {
      _RDI->orbitCamData.cameraInstantRecenter = 0;
    }
    else
    {
      _RBX = DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAzimuthManualRecenterSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm7, dword ptr [rbx+28h] }
      _RBX = DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarManualRecenterSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+4]; dst
        vmovss  xmm6, dword ptr [rbx+28h]
        vmovaps xmm3, xmm7; speed
        vmovaps xmm2, xmm11; frameTime
      }
      CG_Camera_DampLerp(&_RDI->orbitCamData.sphericalCoords.v[1], *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
      __asm
      {
        vmovss  xmm1, dword ptr [rsi+8]; dst
        vmovaps xmm3, xmm6; speed
        vmovaps xmm2, xmm11; frameTime
      }
      CG_Camera_DampLerp(&_RDI->orbitCamData.sphericalCoords.v[2], *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
    }
    goto LABEL_43;
  }
  if ( !_RDI->orbitCamData.cameraReturn )
    goto LABEL_41;
  if ( _RDI->orbitCamData.inputUpdated )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+34h]
    vcomiss xmm1, xmm8
  }
  if ( _RDI->orbitCamData.inputUpdated || !_RDI->orbitCamData.autoRecenterEnabled )
    goto LABEL_41;
  cameraReturnBasedOnGas = _RDI->orbitCamData.cameraReturnBasedOnGas;
  if ( cameraReturnBasedOnGas )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+58h]
      vandps  xmm0, xmm0, xmm2
      vcomiss xmm0, xmm15
    }
  }
  __asm { vcomiss xmm8, dword ptr [rdi+6Ch] }
  if ( cameraReturnBasedOnGas )
  {
LABEL_41:
    if ( !_RDI->orbitCamData.inputUpdated )
      goto LABEL_43;
LABEL_42:
    _RDI->orbitCamData.timeUntilReturn = _R14->orbit.returnTimeTo;
    goto LABEL_43;
  }
  if ( firstTime )
  {
    __asm { vmovaps xmm13, xmm9 }
  }
  else
  {
    __asm
    {
      vandps  xmm1, xmm1, xmm2
      vmulss  xmm0, xmm1, dword ptr [r14+9Ch]; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm9; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    cameraReturnBasedOnGas = _RDI->orbitCamData.cameraReturnBasedOnGas;
    __asm { vmovaps xmm13, xmm0 }
  }
  if ( cameraReturnBasedOnGas )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+58h]
      vmaxss  xmm12, xmm1, xmm8
    }
  }
  else
  {
    __asm { vmovaps xmm12, xmm9 }
  }
  v63 = !_RDI->orbitCamData.cameraReturnDot;
  __asm { vmovaps xmm10, xmm9 }
  if ( _RDI->orbitCamData.cameraReturnDot )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vsubss  xmm5, xmm0, dword ptr [rdi+140h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vsubss  xmm6, xmm1, dword ptr [rdi+144h]
      vmovss  xmm0, dword ptr [rdi+30h]
      vsubss  xmm7, xmm0, dword ptr [rdi+148h]
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm4, xmm2, xmm2
      vcomiss xmm4, xmm15
      vcmpless xmm0, xmm4, xmm14
      vblendvps xmm0, xmm4, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm5, xmm2
      vmovss  dword ptr [rbp+130h+forward], xmm0
      vmulss  xmm0, xmm7, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rbp+130h+forward+8], xmm0
      vmovss  dword ptr [rbp+130h+forward+4], xmm1
    }
    if ( !v63 )
    {
      BG_AxisFromForward(&forward, &identityMatrix33.m[2], &outAxis);
      __asm
      {
        vmovss  xmm3, dword ptr [rbp+130h+outAxis]
        vmovss  xmm6, dword ptr [rbp+130h+axis]
        vmovss  xmm7, dword ptr [rbp+130h+axis+4]
        vmovss  xmm4, dword ptr [rbp+130h+outAxis+4]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm7, xmm7
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm14
        vblendvps xmm0, xmm2, xmm9, xmm0
        vdivss  xmm5, xmm9, xmm0
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vcmpless xmm0, xmm2, xmm14
        vblendvps xmm0, xmm2, xmm9, xmm0
        vdivss  xmm2, xmm9, xmm0
        vmulss  xmm1, xmm2, xmm3
        vmulss  xmm0, xmm6, xmm5
        vmulss  xmm3, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm5
        vmulss  xmm2, xmm2, xmm4
        vmulss  xmm0, xmm2, xmm1
        vaddss  xmm0, xmm3, xmm0; val
        vmovaps xmm2, xmm9; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      if ( !_RDI->orbitCamData.inputUpdated )
      {
        __asm
        {
          vsubss  xmm0, xmm9, xmm0
          vmaxss  xmm10, xmm0, cs:__real@3ecccccd
        }
      }
    }
  }
  __asm
  {
    vmulss  xmm0, xmm12, xmm13
    vmulss  xmm6, xmm0, dword ptr [rdi+60h]
    vmulss  xmm1, xmm6, dword ptr [r14+94h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm1, xmm0
    vmulss  xmm2, xmm1, xmm10
    vmulss  xmm3, xmm2, dword ptr [rdi+70h]; speed
    vmovss  xmm1, dword ptr [rsi+4]; dst
    vmovaps xmm2, xmm11; frameTime
  }
  CG_Camera_DampLerp(&_RDI->orbitCamData.sphericalCoords.v[1], *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  __asm
  {
    vmovss  xmm7, dword ptr [rdi+9Ch]
    vcomiss xmm7, xmm15
    vmovss  xmm1, dword ptr [rsi+8]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
  }
  if ( !(v144 | v63) )
  {
    _RBX = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+28h]; minval
      vmovss  xmm0, dword ptr [rdi+98h]; val
    }
    *(float *)&_XMM0 = NormalizeRange_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm3, xmm1, xmm0
      vsubss  xmm0, xmm9, xmm3
      vmulss  xmm2, xmm0, dword ptr [rsi+8]
      vmulss  xmm1, xmm3, xmm7
      vaddss  xmm1, xmm2, xmm1; dst
      vmovaps xmm2, xmm9
    }
  }
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [r14+98h]
    vmulss  xmm3, xmm0, xmm2; speed
    vmovaps xmm2, xmm11; frameTime
  }
  CG_Camera_DampLerp(&_RDI->orbitCamData.sphericalCoords.v[2], *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
LABEL_43:
  if ( !firstTime && !s_cameraTransition[_RDI->localClientNum].active )
  {
    __asm { vmovss  xmm0, dword ptr [rdi+14h]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovss  dword ptr [rdi+14h], xmm0 }
  }
  __asm
  {
    vmovss  xmm14, cs:__real@40000000
    vxorps  xmm10, xmm10, xmm10
  }
  if ( _RDI->orbitCamData.polarElevation )
  {
    _RBX = DCONST_DVARFLT_bg_vehCamPolarElevThreshold;
    if ( !DCONST_DVARFLT_bg_vehCamPolarElevThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarElevThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+18h]
      vmovss  xmm6, dword ptr [rbx+28h]
      vsubss  xmm7, xmm0, xmm6
      vcomiss xmm7, xmm8
    }
    if ( !(v144 | v63) )
    {
      _RBX = DCONST_DVARFLT_bg_vehCamPolarElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamPolarElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm0, dword ptr [r14+8Ch]
        vmovss  xmm10, dword ptr [rbx+28h]
        vsubss  xmm6, xmm0, xmm6
        vcomiss xmm6, xmm8
      }
      if ( v144 | v63 )
      {
        v148 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2841, ASSERT_TYPE_ASSERT, "(rangeOffset > 0.0f)", (const char *)&queryFormat, "rangeOffset > 0.0f");
        v144 = 0;
        if ( v148 )
          __debugbreak();
      }
      __asm
      {
        vdivss  xmm3, xmm7, xmm6
        vcomiss xmm3, xmm8
      }
      if ( v144 )
      {
        __asm { vxorps  xmm0, xmm0, xmm0 }
      }
      else
      {
        __asm { vcomiss xmm3, xmm9 }
        if ( v144 )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@40400000
            vmulss  xmm1, xmm3, xmm14
            vsubss  xmm2, xmm0, xmm1
            vmulss  xmm1, xmm3, xmm3
            vmulss  xmm0, xmm2, xmm1
          }
        }
        else
        {
          __asm { vmovaps xmm0, xmm9 }
        }
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm6
        vmulss  xmm10, xmm0, xmm10
      }
    }
  }
  v157 = DCONST_DVARBOOL_bg_vehcamUseDvars;
  if ( !DCONST_DVARBOOL_bg_vehcamUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v157);
  if ( v157->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_vehcamPivotZ;
    if ( !DCONST_DVARFLT_bg_vehcamPivotZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamPivotZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [r14+7Ch] }
  }
  v63 = !_RDI->orbitCamData.cameraReturn;
  __asm
  {
    vmovss  xmm5, dword ptr [r14+78h]
    vmulss  xmm2, xmm5, dword ptr [rbp+130h+axis+0Ch]
    vmovss  xmm7, dword ptr [rdi+14h]
    vaddss  xmm4, xmm0, xmm10
    vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm3, xmm0, dword ptr [r15]
    vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vmovss  xmm10, dword ptr [rdi+18h]
    vaddss  xmm6, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [r15+4]
    vmulss  xmm2, xmm5, dword ptr [rbp+130h+axis+10h]
    vmulss  xmm0, xmm4, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm12, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [r15+8]
    vmulss  xmm2, xmm5, dword ptr [rbp+130h+axis+14h]
    vaddss  xmm13, xmm3, xmm2
    vmovss  dword ptr [rbp+130h+forward+8], xmm13
    vmovss  dword ptr [rbp+130h+forward], xmm6
    vmovss  dword ptr [rbp+130h+forward+4], xmm12
  }
  if ( v63 )
  {
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r13+4]
      vsubss  xmm0, xmm0, dword ptr [rdi+48h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vmovaps xmm7, xmm0 }
  }
  if ( _RDI->orbitCamData.inverseView )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vaddss  xmm0, xmm0, cs:__real@43340000; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  xmm10, dword ptr [r14+8Ch]
      vmovaps xmm7, xmm0
    }
  }
  v180 = BG_Camera_GetSkydiveOrbitDefIndex() == camIndex;
  if ( _R14->transitionIn.active )
    __asm { vcomiss xmm8, dword ptr [r14+12Ch] }
  _RSI = &_RDI->orbitCamData.curFocusPos;
  __asm
  {
    vmovss  dword ptr [rsi], xmm6
    vmovss  dword ptr [rsi+4], xmm12
    vmovss  dword ptr [rsi+8], xmm13
  }
  if ( _RDI->vehicleData.orbitNoise )
  {
    _RBX = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch;
    __asm
    {
      vmovss  [rsp+230h+outHorizOrPitch], xmm8
      vmovss  [rsp+230h+var_1EC], xmm8
    }
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoisePitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm12, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RDI->localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+98h]; normalSpeed
      vmovaps xmm3, xmm6; rollAmp
      vmovaps xmm2, xmm12; pitchAmp
    }
    CG_Camera_Vehicles_GetSpeedNoiseDelta(*(float *)&_XMM0, LocalClientGlobals->time, *(float *)&_XMM2, *(float *)&_XMM3, outHorizOrPitch, &outVertOrRoll);
    __asm
    {
      vaddss  xmm7, xmm7, [rsp+230h+var_1EC]
      vaddss  xmm10, xmm10, [rsp+230h+outHorizOrPitch]
    }
  }
  __asm
  {
    vmulss  xmm7, xmm7, cs:__real@3c8efa35
    vmulss  xmm10, xmm10, cs:__real@3c8efa35
    vmovss  xmm2, dword ptr [rdi+10h]; radius
    vmovaps xmm1, xmm7; azimuthAngle
    vmovaps xmm0, xmm10; zenithAngle
  }
  GetCartesianCoordinates(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &_RDI->tgtEyePos);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vaddss  xmm1, xmm0, dword ptr [rdi+14Ch]
    vmovss  dword ptr [rdi+14Ch], xmm1
    vmovss  xmm2, dword ptr [rsi+4]
    vaddss  xmm0, xmm2, dword ptr [rdi+150h]
    vmovss  dword ptr [rdi+150h], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vaddss  xmm2, xmm1, dword ptr [rdi+154h]
    vmovss  dword ptr [rdi+154h], xmm2
    vmovsd  xmm6, qword ptr [rsi]
  }
  v202 = _RDI->orbitCamData.curFocusPos.v[2];
  LODWORD(traceInfo.start.v[0]) = 2;
  LOBYTE(_EAX) = CL_TransientsWorldMP_IsActive();
  __asm { vmovss  xmm2, cs:__real@41000000 }
  _ECX = 0;
  _EAX = (unsigned __int8)_EAX;
  __asm { vmovd   xmm0, eax }
  v207 = *(float *)&_RDI->traceMask;
  __asm
  {
    vmovd   xmm1, ecx
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@41a00000
    vmovups xmmword ptr [rsp+230h+traceInfo.start+4], xmm8
  }
  *(const int **)((char *)&traceInfo.ignoreEntities + 4) = NULL;
  traceInfo.contentMask = 0;
  __asm
  {
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  xmm1, cs:__real@41200000
    vmovss  [rsp+230h+traceInfo.displFromStart], xmm0
    vmovss  dword ptr [rbp+130h+traceInfo+24h], xmm1
    vmovss  dword ptr [rsp+230h+traceInfo.end+8], xmm8
    vmovss  [rsp+230h+traceInfo.collRadius], xmm8
  }
  LODWORD(traceInfo.innerRadius) = 2705;
  __asm
  {
    vmovss  [rbp+130h+traceInfo.innerRadiusElevation], xmm8
    vmovss  [rbp+130h+var_194], xmm8
    vmovss  xmm0, dword ptr [r14+0ACh]
  }
  traceInfo.innerRadius = v207;
  traceInfo.collRadius = _RDI->tgtEyePos.v[2];
  v63 = _RDI->traceIgnoreEntity == 2047;
  __asm
  {
    vmovss  [rsp+230h+traceInfo.displFromStart], xmm0
    vmovss  xmm0, dword ptr [rdi+164h]
  }
  *(const int **)((char *)&traceInfo.ignoreEntities + 4) = &_RDI->traceIgnoreEntity;
  v215 = *(float *)&_RDI->traceWorld;
  __asm
  {
    vmovss  dword ptr [rbp+130h+traceInfo+24h], xmm0
    vmovsd  xmm0, qword ptr [rdi+14Ch]
  }
  traceInfo.contentMask = !v63;
  traceInfo.start.v[0] = v215;
  v217 = _RDI->tgtEyePos.v[2];
  __asm
  {
    vmovss  [rsp+230h+outFraction], xmm9
    vmovsd  qword ptr [rsp+230h+traceInfo.start+4], xmm6
  }
  traceInfo.end.v[0] = v202;
  __asm
  {
    vmovsd  qword ptr [rsp+230h+traceInfo.end+4], xmm0
    vmovsd  qword ptr [rbp+130h+forward], xmm0
  }
  forward.v[2] = v217;
  if ( CG_Camera_Trace((const CameraTraceInfo *)&traceInfo.start, &forward, &outFraction) )
  {
    __asm
    {
      vmovss  xmm5, dword ptr [rbp+130h+forward+4]
      vmovss  xmm6, dword ptr [rbp+130h+forward]
      vsubss  xmm1, xmm5, dword ptr [rsp+230h+traceInfo.start+8]
      vsubss  xmm3, xmm6, dword ptr [rsp+230h+traceInfo.start+4]
      vmovss  xmm0, dword ptr [rbp+130h+forward+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+230h+traceInfo.end]
    }
    v272 = forward.v[2];
    __asm
    {
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm0, xmm1, xmm9, xmm0
      vmovss  dword ptr [rdi+78h], xmm0
      vunpcklps xmm2, xmm6, xmm5
      vmovsd  qword ptr [rdi+140h], xmm2
    }
    _RDI->curEyePos.v[2] = v272;
  }
  else
  {
    v218 = 0;
    v219 = !_RDI->orbitCamData.curEyePosLocalValid;
    if ( _RDI->orbitCamData.curEyePosLocalValid )
    {
      v218 = 0;
      v219 = !_RDI->orbitCamData.disableEyePosLocal;
      if ( !_RDI->orbitCamData.disableEyePosLocal )
      {
        localClientNum = _RDI->localClientNum;
        linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)_RDI->localClientNum)->predictedPlayerState.linkEnt;
        v218 = (unsigned __int16)linkEnt < 0x7FFu;
        v219 = linkEnt == 2047;
        if ( linkEnt != 2047 )
        {
          Entity = CG_GetEntity(localClientNum, linkEnt);
          _RBX = Entity;
          v218 = 0;
          v219 = Entity == NULL;
          if ( Entity )
          {
            v218 = 0;
            v219 = (Entity->flags & 1) == 0;
            if ( (Entity->flags & 1) != 0 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+48h]
                vmovss  dword ptr [rbp+130h+forward], xmm0
                vmovss  xmm1, dword ptr [rbx+4Ch]
                vmovss  dword ptr [rbp+130h+forward+4], xmm1
                vmovss  xmm0, dword ptr [rbx+50h]
                vmovss  dword ptr [rbp+130h+forward+8], xmm0
              }
              AnglesToAxis(&forward, &outAxis);
              AxisTransformVec3(&outAxis, &_RDI->orbitCamData.curEyePosLocal, &out);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+130h+outOrigin]
                vaddss  xmm1, xmm0, dword ptr [rbp+130h+out]
                vmovss  xmm2, dword ptr [rbp+130h+outOrigin+4]
                vaddss  xmm0, xmm2, dword ptr [rbp+130h+out+4]
                vmovss  dword ptr [rdi+140h], xmm1
                vmovss  xmm1, dword ptr [rbp+130h+outOrigin+8]
                vaddss  xmm2, xmm1, dword ptr [rbp+130h+out+8]
                vmovss  dword ptr [rdi+148h], xmm2
                vmovss  dword ptr [rdi+144h], xmm0
              }
            }
          }
        }
      }
    }
    __asm { vcomiss xmm15, dword ptr [r14+70h] }
    if ( !v218 && !v219 || v180 )
    {
      __asm { vmovsd  xmm0, qword ptr [rdi+14Ch] }
      v236 = _RDI->tgtEyePos.v[2];
      _RBX = &_RDI->curEyePos;
      __asm { vmovsd  qword ptr [rbx], xmm0 }
      _RDI->curEyePos.v[2] = v236;
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+74h]; speed
        vmovaps xmm2, xmm11; frameTime
      }
      CG_Camera_DampLerp_0(&_RDI->curEyePos, &_RDI->tgtEyePos, *(float *)&_XMM2, *(float *)&_XMM3);
    }
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+54h]
      vmovss  xmm0, dword ptr [rdi+50h]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmaxss  xmm6, xmm1, xmm0
    }
    if ( !CL_Input_IsGamepadEnabled(_RDI->localClientNum) )
    {
      v243 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v243);
      if ( v243->current.enabled )
      {
        __asm
        {
          vmovaps xmm2, xmm9; max
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm0, xmm6; val
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm6, xmm0 }
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+14Ch]
      vsubss  xmm3, xmm0, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rdi+150h]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rdi+154h]
      vsubss  xmm4, xmm0, dword ptr [rbx+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsubss  xmm0, xmm9, xmm6
      vsqrtss xmm1, xmm2, xmm2
      vmulss  xmm1, xmm1, xmm0
      vaddss  xmm6, xmm1, dword ptr [rdi+10h]
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehCamLerpBackAfterHit, "bg_vehCamLerpBackAfterHit");
    __asm { vcomiss xmm0, xmm15 }
    if ( v144 | v63 || v180 )
    {
      __asm { vmovss  dword ptr [rdi+78h], xmm6 }
      goto LABEL_109;
    }
    __asm
    {
      vmovaps xmm3, xmm0; speed
      vmovaps xmm2, xmm11; frameTime
      vmovaps xmm1, xmm6; dst
    }
    CG_Camera_DampLerp(&_RDI->orbitCamData.interpolatedRadial, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  }
  __asm { vmovss  xmm6, dword ptr [rdi+78h] }
LABEL_109:
  __asm
  {
    vmovss  xmm2, [rsp+230h+outFraction]
    vmovss  dword ptr [rdi+7Ch], xmm2
    vmaxss  xmm2, xmm6, xmm9; radius
    vmovaps xmm1, xmm7; azimuthAngle
    vmovaps xmm0, xmm10; zenithAngle
  }
  GetCartesianCoordinates(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &vector);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h+vector]
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm2, dword ptr [rbp+130h+vector+4]
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
  }
  v290 = _RDI->localClientNum;
  __asm
  {
    vmovss  dword ptr [rbp+130h+vector], xmm1
    vmovss  xmm1, dword ptr [rbp+130h+vector+8]
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+130h+vector+8], xmm2
    vmovss  dword ptr [rbp+130h+vector+4], xmm0
  }
  CG_Camera_StoreLinkedEyePos(v290, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+130h+vector]
    vmovss  xmm1, dword ptr [rbp+130h+vector+4]
    vmovss  xmm10, dword ptr [rsp+230h+traceInfo.start+4]
    vmovss  xmm11, dword ptr [rsp+230h+traceInfo.start+8]
    vmovss  xmm12, dword ptr [rsp+230h+traceInfo.end]
    vsubss  xmm7, xmm0, xmm10
    vmovss  xmm0, dword ptr [rbp+130h+vector+8]
    vsubss  xmm6, xmm1, xmm11
    vsubss  xmm5, xmm0, xmm12
    vmulss  xmm2, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm4, xmm2, xmm2
    vcomiss xmm4, xmm15
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
    vdivss  xmm1, xmm9, xmm0
    vmulss  xmm2, xmm7, xmm1
    vmulss  xmm6, xmm6, xmm1
    vmulss  xmm5, xmm5, xmm1
  }
  if ( v144 | v63 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+130h+vector]
      vmovsd  qword ptr [rbp+130h+forward], xmm0
    }
    forward.v[2] = vector.v[2];
  }
  else
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+130h+traceInfo+24h]
      vmulss  xmm0, xmm2, xmm3
      vaddss  xmm1, xmm10, xmm0
      vmulss  xmm2, xmm6, xmm3
      vaddss  xmm0, xmm11, xmm2
      vmovss  dword ptr [rsp+230h+traceInfo.start+4], xmm1
      vmulss  xmm1, xmm5, xmm3
      vaddss  xmm2, xmm12, xmm1
      vmovss  dword ptr [rsp+230h+traceInfo.end], xmm2
      vmovss  dword ptr [rsp+230h+traceInfo.start+8], xmm0
    }
    BG_Camera_VehicleCameraShapeCast(SLODWORD(traceInfo.start.v[0]), *(const int **)((char *)&traceInfo.ignoreEntities + 4), traceInfo.contentMask, SLODWORD(traceInfo.innerRadius), (const vec3_t *)&traceInfo.start.v[1], &vector, &outFraction);
    __asm
    {
      vmovss  xmm5, [rsp+230h+outFraction]
      vmovss  xmm0, dword ptr [rbp+130h+vector]
      vsubss  xmm1, xmm0, dword ptr [rsp+230h+traceInfo.start+4]
      vmulss  xmm1, xmm1, xmm5
      vaddss  xmm0, xmm1, dword ptr [rsp+230h+traceInfo.start+4]
      vmovss  xmm1, dword ptr [rbp+130h+vector+4]
      vmovss  dword ptr [rbp+130h+forward], xmm0
      vsubss  xmm0, xmm1, dword ptr [rsp+230h+traceInfo.start+8]
      vmulss  xmm2, xmm0, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsp+230h+traceInfo.start+8]
      vmovss  xmm0, dword ptr [rbp+130h+vector+8]
      vsubss  xmm1, xmm0, dword ptr [rsp+230h+traceInfo.end]
      vmulss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbp+130h+forward+4], xmm3
      vaddss  xmm3, xmm2, dword ptr [rsp+230h+traceInfo.end]
      vmovss  dword ptr [rbp+130h+forward+8], xmm3
    }
  }
  v333 = refdefView;
  RefdefView_SetOrg(refdefView, &forward);
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehcamUseDvars, "bg_vehcamUseDvars");
  v335 = !Bool_Internal_DebugName;
  if ( Bool_Internal_DebugName )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehcamPivotX, "bg_vehcamPivotX");
    __asm { vmovaps xmm3, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm3, xmm3, xmm3 }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rbp+130h+axis]
    vmovss  xmm5, dword ptr [rbp+130h+axis+4]
    vmovss  xmm6, dword ptr [rbp+130h+axis+8]
    vmulss  xmm0, xmm4, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi]
    vsubss  xmm2, xmm1, dword ptr [rbp+130h+forward]
    vucomiss xmm2, xmm8
    vmulss  xmm0, xmm5, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+4]
    vsubss  xmm7, xmm1, dword ptr [rbp+130h+forward+4]
    vmulss  xmm0, xmm6, xmm3
    vaddss  xmm1, xmm0, dword ptr [rsi+8]
    vsubss  xmm3, xmm1, dword ptr [rbp+130h+forward+8]
    vmovss  dword ptr [rbp+130h+var_170+8], xmm3
    vmovss  dword ptr [rbp+130h+var_170], xmm2
    vmovss  dword ptr [rbp+130h+var_170+4], xmm7
  }
  if ( v335 )
  {
    __asm { vucomiss xmm7, xmm8 }
    if ( v335 )
    {
      __asm { vucomiss xmm3, xmm8 }
      if ( v335 )
      {
        __asm
        {
          vmovss  dword ptr [rbp+130h+var_170], xmm4
          vmovss  dword ptr [rbp+130h+var_170+4], xmm5
          vmovss  dword ptr [rbp+130h+var_170+8], xmm6
        }
      }
    }
  }
  BG_AxisFromForward(&v369, &identityMatrix33.m[2], &v333->axis);
  _R11 = &v375;
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
CG_Camera_Orbit_Trace
==============
*/

char __fastcall CG_Camera_Orbit_Trace(Physics_WorldId worldId, double collRadius, int ignoreEntityNum, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, vec3_t *result)
{
  int skipEntityCount; 
  const int *skipEntities; 
  char v17; 
  int v30; 
  Bounds bounds; 
  trace_t results; 

  _RDI = end;
  _RBX = result;
  skipEntityCount = 0;
  skipEntities = &v30;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( ignoreEntityNum != 2047 )
    skipEntities = NULL;
  v30 = ignoreEntityNum;
  LOBYTE(skipEntityCount) = skipEntities != NULL;
  __asm
  {
    vmovss  dword ptr [rsp+108h+var_A0.midPoint], xmm0
    vmovss  dword ptr [rsp+108h+var_A0.midPoint+4], xmm0
    vmovss  dword ptr [rsp+108h+var_A0.midPoint+8], xmm0
    vmovss  dword ptr [rsp+108h+var_A0.halfSize], xmm1
    vmovss  dword ptr [rsp+108h+var_A0.halfSize+4], xmm1
    vmovss  dword ptr [rsp+108h+var_A0.halfSize+8], xmm1
  }
  PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, start, end, &bounds, skipEntities, skipEntityCount, 1, contentMask, 0, NULL, All);
  __asm
  {
    vmovss  xmm5, [rsp+108h+results.fraction]
    vcomiss xmm5, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rdi]
  }
  if ( v17 )
  {
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rsi]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsi]
      vmovss  dword ptr [rbx], xmm2
      vmovss  xmm0, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rbx+4], xmm3
      vmovss  xmm0, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm5
      vaddss  xmm3, xmm2, dword ptr [rsi+8]
      vmovss  dword ptr [rbx+8], xmm3
    }
    return 1;
  }
  else
  {
    __asm { vmovss  dword ptr [rbx], xmm0 }
    *(_QWORD *)&result->y = *(_QWORD *)&end->y;
    return 0;
  }
}

/*
==============
CG_Camera_Orbit_Update
==============
*/

void __fastcall CG_Camera_Orbit_Update(ClientCameraData *camData, RefdefView *inOutRefDef, double frameTime, unsigned int camIndex)
{
  cg_t *LocalClientGlobals; 
  bool firstTime; 
  char v27; 
  char v28; 
  float v42; 
  vec3_t retSpherical; 
  vec3_t angles; 
  vec3_t outAngles; 
  vec3_t outOrg; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = camData->camDef;
  _RBX = camData;
  __asm { vmovaps xmm8, xmm2 }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  CG_Camera_Orbit_GetOriginAndAngle(_RBX, &outOrg, &outAngles);
  firstTime = CG_Camera_InitializeValues(_RBX);
  __asm
  {
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm6, cs:__real@43340000
  }
  if ( firstTime )
  {
    _RBX->traceIgnoreEntity = LocalClientGlobals->predictedPlayerState.clientNum;
    _RBX->orbitCamData.camPerspectiveMode = 0;
    if ( BG_Camera_GetSkydiveOrbitDefIndex() == camIndex )
    {
      AxisToAngles(&inOutRefDef->axis, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+angles+4]
        vsubss  xmm0, xmm0, xmm6; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, cs:__real@42b40000
        vmovss  dword ptr [rbx+14h], xmm0
        vsubss  xmm0, xmm1, dword ptr [rsp+0E8h+angles]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0E8h+outAngles+4]
        vaddss  xmm1, xmm0, dword ptr [rdi+80h]
        vsubss  xmm0, xmm1, xmm6; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rbx+14h], xmm0
        vmovss  xmm0, dword ptr [rdi+84h]; angle
      }
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rbx+18h], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vandps  xmm0, xmm0, xmm7
      vcomiss xmm0, cs:__real@3a83126f
    }
    _RBX->orbitCamData.cameraReturn = !(v27 | v28);
  }
  _RBX->orbitCamData.sphericalCoords.v[0] = _RDI->orbit.range;
  if ( !_RBX->orbitCamData.cameraReturn || _RBX->orbitCamData.inputUpdated )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+10h] }
    v42 = _RBX->orbitCamData.sphericalCoords.v[2];
    __asm { vmovsd  qword ptr [rsp+0E8h+var_A8], xmm0 }
    retSpherical.v[2] = v42;
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rsp+0E8h+outAngles+4]; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vaddss  xmm1, xmm0, dword ptr [rdi+80h]
      vaddss  xmm4, xmm1, xmm6
      vsubss  xmm2, xmm4, dword ptr [rbx+14h]
      vsubss  xmm3, xmm1, xmm6
      vsubss  xmm0, xmm3, dword ptr [rbx+14h]
      vandps  xmm0, xmm0, xmm7
      vandps  xmm2, xmm2, xmm7
      vcmpltss xmm1, xmm0, xmm2
      vblendvps xmm0, xmm4, xmm3, xmm1
      vmovss  dword ptr [rsp+0E8h+var_A8+4], xmm0
      vmovss  xmm0, dword ptr [rdi+84h]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vmovss  dword ptr [rsp+0E8h+var_A8+8], xmm0
      vmovss  xmm0, dword ptr [rdi+90h]
      vmovss  dword ptr [rsp+0E8h+var_A8], xmm0
    }
  }
  __asm { vmovaps xmm1, xmm8; frameTime }
  CG_Camera_Orbit_Step(_RBX, *(double *)&_XMM1, &outOrg, &vec3_origin, &retSpherical, firstTime, inOutRefDef, camIndex);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_Camera_Orbit_Update_Input
==============
*/

bool __fastcall CG_Camera_Orbit_Update_Input(ClientCameraData *camData, const vec3_t *orbitAngles, vec3_t *returnSpherical, double frameTime)
{
  cg_t *LocalClientGlobals; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  unsigned __int64 buttons; 
  int buttonToggleReturn; 
  int lastCmdTimeButton0; 
  bool cameraReturn; 
  int buttonRecenter; 
  const dvar_t *v26; 
  bool v27; 
  char v28; 
  char v29; 
  bool useRemoteAngles; 
  char pitchmove; 
  char yawmove; 
  bool IsGamepadEnabled; 
  char v38; 
  bool v39; 
  const dvar_t *v40; 
  bool v54; 
  bool v55; 
  bool v66; 
  char v78; 
  bool result; 
  usercmd_s ucmd; 

  _RBX = camData;
  __asm { vmovaps [rsp+1E8h+var_88], xmm13 }
  _R12 = returnSpherical;
  __asm { vmovaps xmm13, xmm3 }
  _RBP = orbitAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3006, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( BG_IsSpectatingOrSpectator(&LocalClientGlobals->predictedPlayerState) || (Client = ClActiveClient::GetClient((const LocalClientNum_t)_RBX->localClientNum), CmdNumber = ClActiveClient_GetCmdNumber(Client), !CL_GetUserCmd(_RBX->localClientNum, CmdNumber, &ucmd)) )
  {
    result = 0;
  }
  else
  {
    buttons = ucmd.buttons;
    _RDI = _RBX->camDef;
    __asm
    {
      vmovaps [rsp+1E8h+var_38], xmm8
      vmovaps [rsp+1E8h+var_48], xmm9
      vmovaps [rsp+1E8h+var_58], xmm10
      vmovaps [rsp+1E8h+var_68], xmm11
    }
    if ( (ucmd.buttons & 0x20000000000000i64) != 0 )
      _RBX->orbitCamData.cameraInstantRecenter = 1;
    buttonToggleReturn = _RDI->orbit.buttonToggleReturn;
    if ( buttonToggleReturn > 0 )
    {
      if ( _bittest64((const __int64 *)&buttons, (unsigned __int8)(buttonToggleReturn - 1)) )
      {
        lastCmdTimeButton0 = _RBX->orbitCamData.lastCmdTimeButton0;
        if ( lastCmdTimeButton0 > ucmd.commandTime || ucmd.commandTime - lastCmdTimeButton0 > 700 )
        {
          _RBX->orbitCamData.lastCmdTimeButton0 = ucmd.commandTime;
          cameraReturn = _RBX->orbitCamData.cameraReturn;
          _RBX->orbitCamData.cameraReturn = !cameraReturn;
          if ( cameraReturn )
          {
            _RBX->orbitCamData.lastYaw = _RBP->v[1];
          }
          else
          {
            _RBX->orbitCamData.timeUntilReturn = 0.0;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+4]
              vaddss  xmm1, xmm0, dword ptr [rbx+14h]
              vsubss  xmm0, xmm1, dword ptr [rbx+48h]; angle
            }
            *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
            __asm { vmovss  dword ptr [rbx+14h], xmm0 }
          }
        }
      }
    }
    buttonRecenter = _RDI->orbit.buttonRecenter;
    if ( buttonRecenter > 0 && _bittest64((const __int64 *)&buttons, (unsigned __int8)(buttonRecenter - 1)) )
      _RBX->orbitCamData.timeUntilReturn = 0.0;
    v26 = DVARBOOL_bg_vehEnableInverseView;
    if ( !DVARBOOL_bg_vehEnableInverseView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnableInverseView") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v26->current.enabled && (buttons & 0x2000) != 0;
    _RBX->orbitCamData.inverseView = v27;
    v28 = 4;
    v29 = 3;
    if ( !CL_Input_IsGamepadEnabled(_RBX->localClientNum) )
    {
      v28 = 0;
      v29 = 0;
    }
    useRemoteAngles = _RBX->orbitCamData.useRemoteAngles;
    pitchmove = ucmd.pitchmove;
    if ( useRemoteAngles )
      pitchmove = ucmd.remoteControlAngles[0];
    if ( _RBX->orbitCamData.inverseView )
    {
      yawmove = 0;
    }
    else
    {
      yawmove = ucmd.yawmove;
      if ( useRemoteAngles )
        yawmove = ucmd.remoteControlAngles[1];
    }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(pitchmove, v28);
    __asm { vmovaps xmm9, xmm0 }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(yawmove, v29);
    __asm { vmovaps xmm8, xmm0 }
    IsGamepadEnabled = CL_Input_IsGamepadEnabled(_RBX->localClientNum);
    __asm
    {
      vmovss  xmm11, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm10, xmm10, xmm10
    }
    v38 = 0;
    v39 = !IsGamepadEnabled;
    if ( !IsGamepadEnabled )
    {
      v40 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      v38 = 0;
      v39 = !v40->current.enabled;
      if ( v40->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@41200000; value
          vandps  xmm1, xmm9, xmm11; expo
          vmovaps [rsp+1E8h+var_78], xmm12
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm12, cs:__real@3f800000
          vsubss  xmm3, xmm0, xmm12
          vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
          vmovss  xmm0, cs:__real@41200000; value
          vcmpless xmm1, xmm10, xmm9
          vblendvps xmm1, xmm2, xmm3, xmm1
          vmovss  [rsp+1E8h+arg_0], xmm1
          vandps  xmm1, xmm8, xmm11; expo
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vcomiss xmm10, dword ptr [rdi+0B0h]
          vsubss  xmm2, xmm0, xmm12
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm10, xmm8
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        v54 = !(v38 | v39);
        __asm { vmovss  [rsp+1E8h+var_1A8], xmm0 }
        v55 = (LocalClientGlobals->predictedPlayerState.vehicleState.flags & 1) != 0 || LocalClientGlobals->predictedPlayerState.remoteControlEnt != 2047;
        v38 = 0;
        v39 = !v54;
        if ( v54 || (v38 = 0, v39 = !v55, v55) )
        {
          __asm
          {
            vmovss  xmm9, [rsp+1E8h+arg_0]
            vmovss  xmm8, [rsp+1E8h+var_1A8]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, cs:__real@bf800000; min
            vmovss  xmm0, [rsp+1E8h+arg_0]; val
            vmovaps xmm2, xmm12; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, cs:__real@bf800000; min
            vmovaps xmm9, xmm0
            vmovss  xmm0, [rsp+1E8h+var_1A8]; val
            vmovaps xmm2, xmm12; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm8, xmm0 }
        }
        __asm { vmovaps xmm12, [rsp+1E8h+var_78] }
      }
    }
    __asm
    {
      vandps  xmm0, xmm8, xmm11
      vcomiss xmm0, xmm10
      vandps  xmm1, xmm9, xmm11
      vmovaps xmm11, [rsp+1E8h+var_68]
    }
    v66 = !(v38 | v39);
    __asm { vcomiss xmm1, xmm10 }
    _RBX->orbitCamData.inputUpdated = 0;
    if ( v38 | v39 )
    {
      __asm { vxorps  xmm9, xmm9, xmm9 }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+18h]
        vmovss  xmm2, dword ptr [rdi+8Ch]; max
        vmovss  xmm1, dword ptr [rdi+88h]; min
        vmulss  xmm0, xmm9, xmm13
        vmulss  xmm4, xmm0, dword ptr [rdi+0A4h]
        vsubss  xmm0, xmm3, xmm4; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rbx+18h], xmm0
        vmovss  dword ptr [r12+8], xmm0
      }
      _RBX->orbitCamData.inputUpdated |= _RDI->orbit.returnPolar;
    }
    __asm
    {
      vmovss  dword ptr [rbx+50h], xmm9
      vmovaps xmm9, [rsp+1E8h+var_48]
    }
    if ( v66 )
    {
      __asm
      {
        vmulss  xmm0, xmm8, xmm13
        vmulss  xmm1, xmm0, dword ptr [rdi+0A8h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm1, xmm0
        vaddss  xmm2, xmm1, dword ptr [rbx+14h]
        vmovss  dword ptr [rbx+14h], xmm2
        vmovss  dword ptr [r12+4], xmm2
      }
      _RBX->orbitCamData.inputUpdated |= _RDI->orbit.returnAzimuth;
    }
    else
    {
      __asm { vxorps  xmm8, xmm8, xmm8 }
    }
    __asm { vmovss  dword ptr [rbx+54h], xmm8 }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlMove[0], 0);
    v78 = ucmd.remoteControlMove[1];
    __asm { vmovss  dword ptr [rbx+58h], xmm0 }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(v78, 0);
    result = _RBX->orbitCamData.inputUpdated;
    __asm
    {
      vmovaps xmm10, [rsp+1E8h+var_58]
      vmovaps xmm8, [rsp+1E8h+var_38]
      vmovss  dword ptr [rbx+5Ch], xmm0
    }
  }
  __asm { vmovaps xmm13, [rsp+1E8h+var_88] }
  return result;
}

/*
==============
CG_Camera_PostUpdate
==============
*/
void CG_Camera_PostUpdate(LocalClientNum_t localClientNum, const RefdefView *refdef, bool updateShakeCam, bool serverFeedback)
{
  ClActiveClient *Client; 
  CgHandler *Handler; 
  const vec3_t *p_refdefViewAngles; 
  int v17[4]; 

  if ( updateShakeCam )
    CG_ShakeCamera(localClientNum);
  if ( serverFeedback )
  {
    _RBX = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 705, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Client = ClActiveClient::GetClient(localClientNum);
    Handler = CgHandler::getHandler(_RBX->localClientNum);
    if ( BG_IsClientVehicleCamera(&_RBX->predictedPlayerState, Handler) )
    {
      p_refdefViewAngles = &_RBX->refdefViewAngles;
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+178C0h]
        vsubss  xmm1, xmm0, dword ptr [rbx+0BCh]
        vmovss  xmm2, dword ptr [rbx+178C4h]
        vsubss  xmm0, xmm2, dword ptr [rbx+0C0h]
        vmovss  [rsp+68h+var_38], xmm1
        vmovss  xmm1, dword ptr [rbx+178C8h]
        vsubss  xmm2, xmm1, dword ptr [rbx+0C4h]
        vmovss  [rsp+68h+var_30], xmm2
        vmovss  [rsp+68h+var_34], xmm0
      }
      p_refdefViewAngles = (const vec3_t *)v17;
    }
    ClActiveClient_SetCLViewangles(Client, p_refdefViewAngles);
  }
  CG_Camera_CheckSanity(refdef);
}

/*
==============
CG_Camera_RemoveRoll
==============
*/
void CG_Camera_RemoveRoll(tmat33_t<vec3_t> *axis)
{
  vec3_t angles; 

  AxisToAngles(axis, &angles);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+48h+angles+8], xmm0
  }
  AnglesToAxis(&angles, axis);
}

/*
==============
CG_Camera_Reset
==============
*/
void CG_Camera_Reset(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int v3; 
  _DWORD *v4; 
  ClientCameraTransition *v5; 
  ClientCameraDeathCam *v6; 
  ClientCameraKillCam *v7; 

  v1 = localClientNum;
  v2 = localClientNum;
  v3 = 0;
  v4 = (_DWORD *)((char *)s_cameras + 368 * localClientNum);
  do
  {
    memset_0(v4 + 2, 0, 0x168ui64);
    v4[1] = v3++;
    *v4 = v1;
    v4 += 184;
  }
  while ( v3 < 0x100 );
  s_frameTimeEMA[v1] = 0.016666668;
  v5 = &s_cameraTransition[v2];
  v5->active = 0;
  *(_QWORD *)&v5->time = 0i64;
  *(_QWORD *)&v5->timeToStartEyePos = 0i64;
  v5->lastActiveCamera = 0;
  *(_QWORD *)&v5->prevCamNdx = 0i64;
  v5->transitionType = TT_NONE;
  *(_QWORD *)&v5->lastSeat = 0i64;
  v5->transitionInLocalSpace = 0;
  *(_WORD *)&v5->transitionOutLocalSpace = 0;
  *(_WORD *)&v5->lastWas3PWithFocus = 0;
  v5->lastWasUsingTuret = 0;
  v5->doPlayerFade = 0;
  *(_QWORD *)&v5->lastFocusOrigin.y = 0i64;
  v6 = &s_cameraDeathCam[v2];
  v6->camType = INACTIVE;
  *(_QWORD *)&v6->time = 0i64;
  v6->supportsFOV = 0;
  v6->vehEntNum = 2047;
  v7 = &s_cameraKillCam[v2];
  v7->initialized = 0;
  v7->vehSign = 1.0;
  *(_QWORD *)v7->lastEyePos.v = 0i64;
  *(_QWORD *)&v7->lastEyePos.z = 0i64;
  *(_QWORD *)&v7->lastLookAtEntPos.y = 0i64;
  MatrixIdentity33(&v7->lastAxis);
  v7->lastKillCamEntity = 2047;
  v7->lastKillCamEntityType = 0;
  v7->lastFov = 70.0;
}

/*
==============
CG_Camera_ResetToView
==============
*/
void CG_Camera_ResetToView(LocalClientNum_t localClientNum, CameraType camType, const RefdefView *refdef, bool forceReInit)
{
  __int64 v6; 
  __int64 v7; 
  bool v12; 
  bool initialized; 
  ClientCameraSkydiveData *p_skydiveData; 
  __int64 v15; 
  __int64 v16; 
  vec3_t outOrg; 

  v6 = camType;
  v7 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !CameraType_Is_Valid((CameraType)v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 635, ASSERT_TYPE_ASSERT, "(CameraType_Is_Valid( camType ))", (const char *)&queryFormat, "CameraType_Is_Valid( camType )") )
    __debugbreak();
  _RBX = &s_cameras[v6][v7];
  RefdefView_GetOrg(refdef, &outOrg);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+88h+outOrg]
    vmovss  dword ptr [rbx+140h], xmm2
    vmovss  xmm1, dword ptr [rsp+88h+outOrg+4]
    vmovss  dword ptr [rbx+144h], xmm1
    vmovss  xmm0, dword ptr [rsp+88h+outOrg+8]
    vmovss  dword ptr [rbx+148h], xmm0
    vmovss  dword ptr [rbx+14Ch], xmm2
    vmovss  dword ptr [rbx+150h], xmm1
    vmovss  dword ptr [rbx+154h], xmm0
  }
  CG_Camera_StoreLinkedEyePos((LocalClientNum_t)v7, _RBX);
  _RBX->orbitCamData.timeUntilReturn = 0.0;
  v12 = 0;
  if ( forceReInit )
  {
    initialized = _RBX->initialized;
    _RBX->initialized = 0;
    v12 = initialized;
  }
  if ( (_DWORD)v6 == 251 )
  {
    if ( (unsigned int)v7 >= 2 )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1113, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    p_skydiveData = &s_cameras[251][v7].skydiveData;
    if ( v12 )
    {
      p_skydiveData->state = INACTIVE;
      *(_QWORD *)&p_skydiveData->lastLocalOffset.x = 0i64;
      p_skydiveData->lastLocalOffset.z = 0.0;
      *(_QWORD *)&p_skydiveData->blendOffset.x = 0i64;
      p_skydiveData->blendOffset.z = 0.0;
    }
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_Camera_ShouldInterpolateViewTransition
==============
*/
char CG_Camera_ShouldInterpolateViewTransition(const LocalClientNum_t localClientNum, CameraType nextCameraType)
{
  __int64 v2; 
  __int64 v4; 
  const CameraDef *Def; 
  __int64 v7; 
  __int64 v8; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4955, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v2;
  if ( (unsigned int)nextCameraType >= MAX_CAMERA_TYPES )
  {
    LODWORD(v8) = 256;
    LODWORD(v7) = nextCameraType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3499, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( MAX_CAMERA_TYPES )", "cameraIndex doesn't index MAX_CAMERA_TYPES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( bitarray_base<bitarray<256>>::testBit(&s_cameraStates[v4].transInterpDisabledBits, nextCameraType) )
    return 0;
  if ( nextCameraType == CAMERA_INVALID || nextCameraType >= MAX_CAMERA_TYPES || (unsigned int)(nextCameraType - 1) >= 0xFA )
    return 1;
  Def = BG_Camera_GetDef(nextCameraType);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4965, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  return Def->interpolateViewTransition;
}

/*
==============
CG_Camera_ShouldTransition
==============
*/
char CG_Camera_ShouldTransition(LocalClientNum_t localClientNum, const VehicleDef *vehDef, unsigned int nextCameraNdx, unsigned int curCameraNdx)
{
  __int64 v5; 
  __int64 v6; 
  bool v10; 
  cg_t *LocalClientGlobals; 
  cg_t *v12; 
  cg_t *v13; 
  animScriptVehicleSeat_t CurrentSeat; 
  animScriptVehicleSeat_t lastSeat; 
  char v17; 
  const CameraDef *Def; 
  const CameraDef *v19; 
  const CameraDef *v20; 
  const CameraDef *v21; 
  __int16 linkEnt; 
  centity_t *Entity; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  CgHandler *v55; 
  CgWeaponMap *v56; 
  __int64 v57; 
  __int64 v58; 
  bool v59; 
  animScriptVehicleType_t outVehType; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t vec; 
  vec3_t v64; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v5 = localClientNum;
  v6 = localClientNum;
  _RDI = &s_cameraTransition[v6];
  v10 = BG_Camera_GetSkydiveOrbitDefIndex() == curCameraNdx || BG_Camera_GetSkydiveOrbitDefIndex() == nextCameraNdx;
  v59 = v10;
  if ( nextCameraNdx == curCameraNdx || _RDI->active && !v10 )
    return 0;
  if ( (unsigned int)v5 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3974, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3977, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( s_cameraStates[v5].lastClientHadTeleportFlag != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 2u) )
    return 0;
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v58) = 2;
    LODWORD(v57) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3963, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v57, v58) )
      __debugbreak();
  }
  v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3966, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( s_cameraStates[v5].lastRenderedClient != v12->predictedPlayerState.clientNum )
    return 0;
  v13 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  *(_QWORD *)vec.v = v13;
  if ( v13->predictedPlayerState.pm_type >= 7 )
    return 0;
  if ( v13->inKillCam )
    return 0;
  if ( CG_Camera_IsSkydiveSpectatorOrKillcam((LocalClientNum_t)v5) )
    return 0;
  switch ( nextCameraNdx )
  {
    case 0xFBu:
      return 0;
    case 0xFDu:
      return 0;
    case 0xFEu:
      return 0;
    case 0xFFu:
      return 0;
  }
  switch ( curCameraNdx )
  {
    case 0xFBu:
      return 0;
    case 0xFDu:
      return 0;
    case 0xFEu:
      return 0;
    case 0xFFu:
      return 0;
  }
  outVehType = VEHICLE_TYPE_UNUSED;
  CurrentSeat = CG_Camera_Vehicles_GetCurrentSeat((LocalClientNum_t)v5, &outVehType);
  lastSeat = s_cameraTransition[v6].lastSeat;
  if ( curCameraNdx == 252 && !nextCameraNdx && lastSeat == VEHICLE_SEAT_DRIVER && (unsigned int)CurrentSeat > VEHICLE_SEAT_DRIVER )
    return 0;
  if ( CurrentSeat == VEHICLE_SEAT_DRIVER )
  {
    if ( lastSeat && ((outVehType - 1) & 0xFFFFFFFB) == 0 )
      return 0;
  }
  else if ( CurrentSeat == lastSeat )
  {
    return 0;
  }
  v17 = 0;
  if ( !nextCameraNdx )
    goto LABEL_73;
  if ( (int)nextCameraNdx < 256 && (!curCameraNdx || (int)curCameraNdx >= 256) && Mat33IsOrthonormal(&_RDI->lastViewAxis) )
  {
    Def = CG_Camera_TryGetDef((LocalClientNum_t)v5, (CameraType)nextCameraNdx);
    v19 = Def;
    if ( Def )
    {
      if ( ClientCameraTransition::InitFromDef(&s_cameraTransition[v6], &Def->transitionIn) )
      {
        _RDI->transitionType = TT_VIEW_TO_CAMERA;
        v17 = 1;
        _RDI->doPlayerFade = v19->fadeOutPlayerOnTransitionIn;
      }
    }
  }
  if ( (int)nextCameraNdx >= 256 )
  {
LABEL_73:
    if ( curCameraNdx )
    {
      if ( (int)curCameraNdx < 256 )
      {
        v20 = CG_Camera_TryGetDef((LocalClientNum_t)v5, (CameraType)curCameraNdx);
        v21 = v20;
        if ( v20 )
        {
          if ( ClientCameraTransition::InitFromDef(&s_cameraTransition[v6], &v20->transitionOut) )
          {
            _RDI->transitionType = TT_CAMERA_TO_VIEW;
            v17 = 1;
            _RDI->doPlayerFade = v21->fadeOutPlayerOnTransitionIn;
            goto LABEL_57;
          }
        }
      }
    }
  }
  if ( v17 )
  {
LABEL_57:
    _RDI->sourceEyePos.v[0] = _RDI->lastViewEyePos.v[0];
    _RDI->sourceEyePos.v[1] = _RDI->lastViewEyePos.v[1];
    _RDI->sourceEyePos.v[2] = _RDI->lastViewEyePos.v[2];
    MatrixCopy33(&_RDI->lastViewAxis, &_RDI->sourceAxis);
    linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v5)->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 && (Entity = CG_GetEntity((const LocalClientNum_t)v5, linkEnt), (_RBX = Entity) != NULL) && (Entity->flags & 1) != 0 )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+48h]
        vmovss  dword ptr [rbp+4Fh+angles], xmm0
        vmovss  xmm1, dword ptr [rbx+4Ch]
        vmovss  dword ptr [rbp+4Fh+angles+4], xmm1
        vmovss  xmm0, dword ptr [rbx+50h]
        vmovss  dword ptr [rbp+4Fh+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      if ( _RDI->lastViewLocalValid )
      {
        AxisTransformVec3(&axis, &_RDI->lastViewEyePosLocal, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+4Fh+angles]
          vaddss  xmm1, xmm0, dword ptr [rbp+4Fh+outOrigin]
          vmovss  xmm2, dword ptr [rbp+4Fh+angles+4]
          vaddss  xmm0, xmm2, dword ptr [rbp+4Fh+outOrigin+4]
          vmovss  dword ptr [rdi+0Ch], xmm1
          vmovss  xmm1, dword ptr [rbp+4Fh+angles+8]
          vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
          vmovss  dword ptr [rdi+14h], xmm2
          vmovss  dword ptr [rdi+10h], xmm0
        }
        MatrixMultiply(&axis, &_RDI->lastViewAxisLocal, &_RDI->sourceAxis);
      }
      AxisTranspose(&axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+outOrigin]
        vmovss  xmm2, dword ptr [rdi+10h]
        vsubss  xmm0, xmm2, dword ptr [rbp+4Fh+outOrigin+4]
        vmovss  dword ptr [rbp+4Fh+vec], xmm1
        vmovss  xmm1, dword ptr [rdi+14h]
        vsubss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
        vmovss  dword ptr [rbp+4Fh+vec+8], xmm2
        vmovss  dword ptr [rbp+4Fh+vec+4], xmm0
      }
      AxisTransformVec3(&out, &vec, &_RDI->sourceEyePosLocal);
      MatrixMultiply(&out, &_RDI->sourceAxis, &_RDI->sourceAxisLocal);
    }
    else if ( v59 )
    {
      if ( _RDI->transitionType == TT_VIEW_TO_CAMERA )
      {
        AnglesToAxis((const vec3_t *)(*(_QWORD *)vec.v + 480i64), &axis);
        Handler = CgHandler::getHandler((LocalClientNum_t)v5);
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v5);
        BG_GetPlayerEyePosition(Instance, (const playerState_s *)(*(_QWORD *)vec.v + 8i64), &outOrigin, Handler);
        AxisToAngles(&axis, &angles);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  dword ptr [rbp+4Fh+angles+8], xmm0
        }
        AnglesToAxis(&angles, &axis);
        if ( _RDI->lastViewLocalValid )
        {
          AxisTransformVec3(&axis, &_RDI->lastViewEyePosLocal, &angles);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+4Fh+angles]
            vaddss  xmm1, xmm0, dword ptr [rbp+4Fh+outOrigin]
            vmovss  xmm2, dword ptr [rbp+4Fh+angles+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+4Fh+outOrigin+4]
            vmovss  dword ptr [rdi+0Ch], xmm1
            vmovss  xmm1, dword ptr [rbp+4Fh+angles+8]
            vaddss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
            vmovss  dword ptr [rdi+14h], xmm2
            vmovss  dword ptr [rdi+10h], xmm0
          }
          MatrixMultiply(&axis, &_RDI->lastViewAxisLocal, &_RDI->sourceAxis);
        }
        AxisTranspose(&axis, &out);
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+0Ch]
          vsubss  xmm1, xmm0, dword ptr [rbp+4Fh+outOrigin]
          vmovss  xmm2, dword ptr [rdi+10h]
          vsubss  xmm0, xmm2, dword ptr [rbp+4Fh+outOrigin+4]
          vmovss  dword ptr [rbp+4Fh+var_98], xmm1
          vmovss  xmm1, dword ptr [rdi+14h]
          vsubss  xmm2, xmm1, dword ptr [rbp+4Fh+outOrigin+8]
          vmovss  dword ptr [rbp+4Fh+var_98+8], xmm2
          vmovss  dword ptr [rbp+4Fh+var_98+4], xmm0
        }
        AxisTransformVec3(&out, &v64, &_RDI->sourceEyePosLocal);
        MatrixMultiply(&out, &_RDI->sourceAxis, &_RDI->sourceAxisLocal);
      }
      else
      {
        MatrixCopy33(&_RDI->last1stViewAxis, &_RDI->targetAxis);
        CG_Camera_RemoveRoll(&_RDI->targetAxis);
        _RDI->sourceEyePos.v[0] = _RDI->lastViewEyePos.v[0];
        _RDI->sourceEyePos.v[1] = _RDI->lastViewEyePos.v[1];
        _RDI->sourceEyePos.v[2] = _RDI->lastViewEyePos.v[2];
        v55 = CgHandler::getHandler((LocalClientNum_t)v5);
        v56 = CgWeaponMap::GetInstance((const LocalClientNum_t)v5);
        BG_GetPlayerEyePosition(v56, (const playerState_s *)(*(_QWORD *)vec.v + 8i64), &_RDI->targetEyePos, v55);
        _RDI->transitionOutLocalSpaceValid = 1;
        ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(&s_cameraTransition[v6]);
      }
    }
    _RDI->prevCamNdx = curCameraNdx;
    _RDI->nextCamNdx = nextCameraNdx;
  }
  return v17;
}

/*
==============
CG_Camera_SkydiveCam_StartBlend
==============
*/
void CG_Camera_SkydiveCam_StartBlend(const cg_t *cgameGlob, ClientCameraData *camData, const vec3_t *cameraLocalOffset)
{
  camData->skydiveData.blendStartTime = camData->skydiveData.lastCameraTime;
  camData->skydiveData.state = ACTIVE;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+130h]
    vsubss  xmm1, xmm0, dword ptr [r8]
    vmovss  dword ptr [rdx+114h], xmm1
    vmovss  xmm2, dword ptr [rdx+134h]
    vsubss  xmm0, xmm2, dword ptr [r8+4]
    vmovss  dword ptr [rdx+118h], xmm0
    vmovss  xmm1, dword ptr [rdx+138h]
    vsubss  xmm2, xmm1, dword ptr [r8+8]
    vmovss  dword ptr [rdx+11Ch], xmm2
  }
  camData->skydiveData.blendStartRot = camData->skydiveData.lastCameraRot;
}

/*
==============
CG_Camera_SkydiveCam_Update
==============
*/
bool CG_Camera_SkydiveCam_Update(const LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  bool v18; 
  CgHandler *Handler; 
  const SuitDef *SuitDef; 
  RefdefView *v154; 
  bool result; 
  float startSolidOffset; 
  bool v164; 
  vec3_t vec; 
  vec3_t inOutOrigin; 
  vec3_t outOrg; 
  vec3_t end; 
  RefdefView *refdefView; 
  __int64 v170; 
  vec3_t v171; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outImpulseAngles; 
  vec3_t outHandheldAngles; 
  vec3_t outImpulseTranslation; 
  vec3_t outHandheldTranslation; 
  vec4_t quat; 
  vec4_t v180; 
  WorldUpReferenceFrame v181; 
  char v182; 
  void *retaddr; 

  _RAX = &retaddr;
  v170 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  refdefView = inOutRefDef;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( CG_Camera_Active_Get(localClientNum) != CAMERA_MAX_DEF_INDEX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1178, ASSERT_TYPE_ASSERT, "(CameraType::CAMERA_SKYDIVE == CG_Camera_Active_Get( localClientNum ))", (const char *)&queryFormat, "CameraType::CAMERA_SKYDIVE == CG_Camera_Active_Get( localClientNum )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1179, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1182, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _R14 = &LocalClientGlobals->predictedPlayerState;
  _RDI = CG_Camera_GetData(localClientNum, CAMERA_MAX_DEF_INDEX);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RBX = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1134, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 1 )
  {
    _RDI->skydiveData.params.heightOffset = _RBX->skydive_camFreefallHeightOffset;
    _RDI->skydiveData.params.pitchToDistanceGraph = _RBX->skydive_camFreefallPitchToDistanceGraph;
    _RDI->skydiveData.params.pitchToForwardOffsetGraph = _RBX->skydive_camFreefallPitchToForwardOffsetGraph;
    _RDI->skydiveData.params.pitchToModelPitchForwardOffsetGraph = NULL;
    _RDI->skydiveData.params.pitchToModelRollSideOffsetGraph = NULL;
    _RDI->skydiveData.params.pitchToModelRollUpOffsetGraph = NULL;
    _RDI->skydiveData.params.blendTime = 0;
  }
  else
  {
    _RDI->skydiveData.params.heightOffset = _RBX->skydive_camParachuteHeightOffset;
    _RDI->skydiveData.params.pitchToDistanceGraph = _RBX->skydive_camParachutePitchToDistanceGraph;
    _RDI->skydiveData.params.pitchToForwardOffsetGraph = _RBX->skydive_camParachutePitchToForwardOffsetGraph;
    _RDI->skydiveData.params.pitchToModelPitchForwardOffsetGraph = _RBX->skydive_camParachutePitchToModelPitchForwardOffsetGraph;
    _RDI->skydiveData.params.pitchToModelRollSideOffsetGraph = _RBX->skydive_camParachutePitchToModelRollSideOffsetGraph;
    _RDI->skydiveData.params.pitchToModelRollUpOffsetGraph = _RBX->skydive_camParachutePitchToModelRollUpOffsetGraph;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6F0h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si eax, xmm1
    }
    _RDI->skydiveData.params.blendTime = _EAX;
  }
  CG_Camera_InitializeValues(_RDI);
  v164 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1;
  v18 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1 && !_RDI->skydiveData.parachuteDeployed;
  RefdefView_GetOrg(inOutRefDef, &outOrg);
  CG_CalcErrorDecay(localClientNum, &outOrg);
  RefdefView_SetOrg(inOutRefDef, &outOrg);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v181, &LocalClientGlobals->predictedPlayerState, Handler);
  _R13 = &LocalClientGlobals->refdefViewAngles;
  __asm
  {
    vmovss  xmm4, dword ptr [r13+4]
    vmovss  xmm5, dword ptr [r13+8]
    vmovss  xmm6, cs:__real@3b360b61
    vmulss  xmm3, xmm6, dword ptr [r13+0]
    vmovss  xmm7, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm7
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm0, xmm8, xmm1, 1
    vsubss  xmm0, xmm3, xmm0
    vmovss  xmm9, cs:__real@43b40000
    vmulss  xmm0, xmm0, xmm9
    vmovss  dword ptr [rbp+110h+var_178], xmm0
    vmulss  xmm4, xmm6, xmm4
    vaddss  xmm1, xmm4, xmm7
    vroundss xmm3, xmm8, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rbp+110h+var_178+4], xmm1
    vmulss  xmm4, xmm6, xmm5
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm8, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm9
    vmovss  dword ptr [rbp+110h+var_178+8], xmm1
  }
  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1209, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm
  {
    vmulss  xmm4, xmm6, dword ptr [rbp+110h+var_178]
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm8, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm0, xmm0, xmm9; val
    vmovss  xmm2, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@c2b40000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm11, xmm0
    vxorps  xmm10, xmm10, xmm10
    vmovss  dword ptr [rbp+110h+angles], xmm10
    vmovss  xmm1, dword ptr [rbp+110h+var_178+4]
    vmovss  dword ptr [rbp+110h+angles+4], xmm1
    vmovss  dword ptr [rbp+110h+angles+8], xmm10
  }
  AnglesToAxis(&angles, &axis);
  if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 1 )
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+210h+outOrg]
      vmovsd  qword ptr [rsp+210h+vec], xmm0
    }
    vec.v[2] = outOrg.v[2];
    if ( !_RDI->skydiveData.params.pitchToForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1227, ASSERT_TYPE_ASSERT, "( params.pitchToForwardOffsetGraph )", "Suit %s must set a camera pitch to forward offset graph. This is a required field!", SuitDef->name) )
      __debugbreak();
    __asm { vmovaps xmm2, xmm11; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToForwardOffsetGraph->knotCount, _RDI->skydiveData.params.pitchToForwardOffsetGraph->knots, *(const float *)&_XMM2);
    __asm
    {
      vmulss  xmm3, xmm0, dword ptr [rbp+110h+axis]
      vaddss  xmm3, xmm3, dword ptr [rsp+210h+vec]
      vmovss  dword ptr [rsp+210h+vec], xmm3
      vmulss  xmm4, xmm0, dword ptr [rbp+110h+axis+4]
      vaddss  xmm3, xmm4, dword ptr [rsp+210h+vec+4]
      vmovss  dword ptr [rsp+210h+vec+4], xmm3
      vmulss  xmm2, xmm0, dword ptr [rbp+110h+axis+8]
      vaddss  xmm2, xmm2, dword ptr [rsp+210h+vec+8]
    }
  }
  else
  {
    if ( !_RDI->skydiveData.params.pitchToForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1234, ASSERT_TYPE_ASSERT, "( params.pitchToForwardOffsetGraph )", "Suit %s must set a camera pitch to forward offset graph. This is a required field!", SuitDef->name) )
      __debugbreak();
    if ( !_RDI->skydiveData.params.pitchToModelPitchForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1235, ASSERT_TYPE_ASSERT, "( params.pitchToModelPitchForwardOffsetGraph )", "Suit %s must set a camera pitch to model pitch forward offset graph. This is a required field!", SuitDef->name) )
      __debugbreak();
    if ( !_RDI->skydiveData.params.pitchToModelRollSideOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1236, ASSERT_TYPE_ASSERT, "( params.pitchToModelRollSideOffsetGraph )", "Suit %s must set a camera pitch to model roll side offset graph. This is a required field!", SuitDef->name) )
      __debugbreak();
    if ( !_RDI->skydiveData.params.pitchToModelRollUpOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1237, ASSERT_TYPE_ASSERT, "( params.pitchToModelRollUpOffsetGraph )", "Suit %s must set a camera pitch to model roll up offset graph. This is a required field!", SuitDef->name) )
      __debugbreak();
    __asm { vmovaps xmm2, xmm11; fraction }
    *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToForwardOffsetGraph->knotCount, _RDI->skydiveData.params.pitchToForwardOffsetGraph->knots, *(const float *)&_XMM2);
    __asm
    {
      vmovaps xmm9, xmm0
      vmovaps xmm2, xmm11; fraction
    }
    *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToModelPitchForwardOffsetGraph->knotCount, _RDI->skydiveData.params.pitchToModelPitchForwardOffsetGraph->knots, *(const float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, xmm0
      vmovaps xmm2, xmm11; fraction
    }
    *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToModelRollSideOffsetGraph->knotCount, _RDI->skydiveData.params.pitchToModelRollSideOffsetGraph->knots, *(const float *)&_XMM2);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovaps xmm2, xmm11; fraction
    }
    GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToModelRollUpOffsetGraph->knotCount, _RDI->skydiveData.params.pitchToModelRollUpOffsetGraph->knots, *(const float *)&_XMM2);
    __asm
    {
      vmovss  xmm4, dword ptr [r14+2F64h]
      vandps  xmm2, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm3, xmm1, xmm2
      vmulss  xmm2, xmm4, xmm6
      vxorps  xmm5, xmm2, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm4, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+110h+axis+0Ch]
      vaddss  xmm3, xmm1, dword ptr [rsp+210h+outOrg]
      vmulss  xmm0, xmm4, dword ptr [rbp+110h+axis+18h]
      vaddss  xmm7, xmm3, xmm0
      vmovss  dword ptr [rsp+210h+vec], xmm7
      vmulss  xmm0, xmm5, dword ptr [rbp+110h+axis+10h]
      vaddss  xmm3, xmm0, dword ptr [rsp+210h+outOrg+4]
      vmulss  xmm1, xmm4, dword ptr [rbp+110h+axis+1Ch]
      vaddss  xmm6, xmm3, xmm1
      vmovss  dword ptr [rsp+210h+vec+4], xmm6
      vmulss  xmm1, xmm5, dword ptr [rbp+110h+axis+14h]
      vaddss  xmm3, xmm1, dword ptr [rsp+210h+outOrg+8]
      vmulss  xmm0, xmm4, dword ptr [rbp+110h+axis+20h]
      vaddss  xmm5, xmm3, xmm0
      vmovss  dword ptr [rsp+210h+vec+8], xmm5
      vmulss  xmm0, xmm8, dword ptr [r14+2F5Ch]
      vxorps  xmm4, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm1, xmm4, dword ptr [rbp+110h+axis]
      vaddss  xmm2, xmm1, xmm7
      vmulss  xmm0, xmm9, dword ptr [rbp+110h+axis]
      vaddss  xmm2, xmm2, xmm0
      vmovss  dword ptr [rsp+210h+vec], xmm2
      vmulss  xmm0, xmm4, dword ptr [rbp+110h+axis+4]
      vaddss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm9, dword ptr [rbp+110h+axis+4]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rsp+210h+vec+4], xmm2
      vmulss  xmm0, xmm4, dword ptr [rbp+110h+axis+8]
      vaddss  xmm2, xmm0, xmm5
      vmulss  xmm1, xmm9, dword ptr [rbp+110h+axis+8]
      vaddss  xmm2, xmm2, xmm1
    }
  }
  __asm
  {
    vmovss  dword ptr [rsp+210h+vec+8], xmm2
    vmovss  xmm1, dword ptr [rdi+0B8h]; height
  }
  WorldUpReferenceFrame::AddUpContribution(&v181, *(float *)&_XMM1, &vec);
  AngleVectors(&v171, &forward, NULL, NULL);
  if ( !_RDI->skydiveData.params.pitchToDistanceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1258, ASSERT_TYPE_ASSERT, "( params.pitchToDistanceGraph )", "Suit %s must set a camera pitch to distance graph. This is a required field!", SuitDef->name) )
    __debugbreak();
  __asm { vmovaps xmm2, xmm11; fraction }
  *(double *)&_XMM0 = GraphGetValueFromFractionUnnormalized(_RDI->skydiveData.params.pitchToDistanceGraph->knotCount, _RDI->skydiveData.params.pitchToDistanceGraph->knots, *(const float *)&_XMM2);
  __asm
  {
    vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm3, dword ptr [rbp+110h+forward]
    vaddss  xmm2, xmm1, dword ptr [rsp+210h+vec]
    vmovss  dword ptr [rsp+210h+end], xmm2
    vmulss  xmm1, xmm3, dword ptr [rbp+110h+forward+4]
    vaddss  xmm2, xmm1, dword ptr [rsp+210h+vec+4]
    vmovss  dword ptr [rsp+210h+end+4], xmm2
    vmulss  xmm1, xmm3, dword ptr [rbp+110h+forward+8]
    vaddss  xmm2, xmm1, dword ptr [rsp+210h+vec+8]
    vmovss  dword ptr [rbp+110h+end+8], xmm2
    vmovss  xmm0, dword ptr [rdi+0BCh]
    vmovss  [rsp+210h+startSolidOffset], xmm0
  }
  CG_View_ThirdPersonViewTrace(localClientNum, &LocalClientGlobals->predictedPlayerState, &vec, &end, 33636369, startSolidOffset, &inOutOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+210h+inOutOrigin]
    vsubss  xmm8, xmm0, dword ptr [rsp+210h+outOrg]
    vmovss  xmm0, dword ptr [rsp+210h+inOutOrigin+4]
    vsubss  xmm9, xmm0, dword ptr [rsp+210h+outOrg+4]
    vmovss  xmm0, dword ptr [rsp+210h+inOutOrigin+8]
    vsubss  xmm11, xmm0, dword ptr [rsp+210h+outOrg+8]
  }
  if ( v18 )
  {
    _RDI->skydiveData.state = ACTIVE;
    _RDI->skydiveData.blendStartTime = _RDI->skydiveData.lastCameraTime;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+130h]
      vsubss  xmm1, xmm0, xmm8
      vmovss  dword ptr [rdi+114h], xmm1
      vmovss  xmm2, dword ptr [rdi+134h]
      vsubss  xmm0, xmm2, xmm9
      vmovss  dword ptr [rdi+118h], xmm0
      vmovss  xmm1, dword ptr [rdi+138h]
      vsubss  xmm2, xmm1, xmm11
      vmovss  dword ptr [rdi+11Ch], xmm2
    }
    _RDI->skydiveData.blendStartRot.v[0] = _RDI->skydiveData.lastCameraRot.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+100h]
      vmovss  dword ptr [rdi+124h], xmm0
      vmovss  xmm1, dword ptr [rdi+104h]
      vmovss  dword ptr [rdi+128h], xmm1
      vmovss  xmm0, dword ptr [rdi+108h]
      vmovss  dword ptr [rdi+12Ch], xmm0
    }
  }
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm7, xmm6
  }
  if ( _RDI->skydiveData.state == ACTIVE )
  {
    _EAX = LocalClientGlobals->time - _RDI->skydiveData.blendStartTime;
    if ( _EAX < 0 )
      _EAX = 0;
    _ECX = _RDI->skydiveData.params.blendTime;
    if ( _EAX >= _ECX || _ECX <= 0 )
    {
      _RDI->skydiveData.state = 2;
    }
    else
    {
      __asm
      {
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm0, xmm1, xmm0; val
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
        vmulss  xmm7, xmm4, xmm0
      }
    }
  }
  AnglesToQuat(&v171, &quat);
  __asm { vmovaps xmm2, xmm7; frac }
  QuatSlerp(&_RDI->skydiveData.blendStartRot, &quat, *(float *)&_XMM2, &v180);
  QuatToAngles(&v180, &v171);
  __asm
  {
    vsubss  xmm0, xmm6, xmm7; val
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr [rdi+114h]
    vaddss  xmm2, xmm2, dword ptr [rsp+210h+inOutOrigin]
    vmovss  dword ptr [rsp+210h+inOutOrigin], xmm2
    vmulss  xmm3, xmm0, dword ptr [rdi+118h]
    vaddss  xmm2, xmm3, dword ptr [rsp+210h+inOutOrigin+4]
    vmovss  dword ptr [rsp+210h+inOutOrigin+4], xmm2
    vmulss  xmm1, xmm0, dword ptr [rdi+11Ch]
    vaddss  xmm1, xmm1, dword ptr [rsp+210h+inOutOrigin+8]
    vmovss  dword ptr [rsp+210h+inOutOrigin+8], xmm1
    vmovss  xmm0, dword ptr [rbp+110h+var_178]
    vmovss  dword ptr [r13+0], xmm0
    vmovss  xmm1, dword ptr [rbp+110h+var_178+4]
    vmovss  dword ptr [r13+4], xmm1
    vmovss  xmm0, dword ptr [rbp+110h+var_178+8]
    vmovss  dword ptr [r13+8], xmm0
  }
  CG_Shake_CalcHandheldCamera(localClientNum, &outHandheldTranslation, &outImpulseTranslation, &outHandheldAngles, &outImpulseAngles);
  CG_Shake_ApplyHandheldCamera(localClientNum, &outHandheldTranslation, &outImpulseTranslation, &outHandheldAngles, &outImpulseAngles, &inOutOrigin, &LocalClientGlobals->refdefViewAngles);
  v154 = refdefView;
  RefdefView_SetOrg(refdefView, &inOutOrigin);
  AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &v154->axis);
  __asm
  {
    vmovss  dword ptr [rdi+130h], xmm8
    vmovss  dword ptr [rdi+134h], xmm9
    vmovss  dword ptr [rdi+138h], xmm11
  }
  _RDI->skydiveData.parachuteDeployed = v164;
  result = 1;
  memset(&inOutOrigin, 0, sizeof(inOutOrigin));
  memset(&end, 0, sizeof(end));
  memset(&vec, 0, sizeof(vec));
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v182;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
  return result;
}

/*
==============
CG_Camera_StoreLinkedEyePos
==============
*/
void CG_Camera_StoreLinkedEyePos(LocalClientNum_t localClientNum, ClientCameraData *camData)
{
  __int16 linkEnt; 
  centity_t *Entity; 
  char v10; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RDI = camData;
  if ( !camData->orbitCamData.disableEyePosLocal )
  {
    linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
    if ( linkEnt == 2047 )
      goto LABEL_8;
    Entity = CG_GetEntity(localClientNum, linkEnt);
    _RBX = Entity;
    if ( Entity && (Entity->flags & 1) != 0 )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+48h]
        vmovss  dword ptr [rsp+0B8h+angles], xmm0
        vmovss  xmm1, dword ptr [rbx+4Ch]
        vmovss  dword ptr [rsp+0B8h+angles+4], xmm1
        vmovss  xmm0, dword ptr [rbx+50h]
        vmovss  dword ptr [rsp+0B8h+angles+8], xmm0
      }
      AnglesToAxis(&angles, &axis);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( v10 )
    {
      AxisTranspose(&axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+140h]
        vsubss  xmm1, xmm0, dword ptr [rsp+0B8h+outOrigin]
        vmovss  xmm2, dword ptr [rdi+144h]
        vsubss  xmm0, xmm2, dword ptr [rsp+0B8h+outOrigin+4]
        vmovss  dword ptr [rsp+0B8h+vec], xmm1
        vmovss  xmm1, dword ptr [rdi+148h]
        vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+outOrigin+8]
        vmovss  dword ptr [rsp+0B8h+vec+8], xmm2
        vmovss  dword ptr [rsp+0B8h+vec+4], xmm0
      }
      AxisTransformVec3(&out, &vec, &_RDI->orbitCamData.curEyePosLocal);
      _RDI->orbitCamData.curEyePosLocalValid = 1;
    }
    else
    {
LABEL_8:
      _RDI->orbitCamData.curEyePosLocalValid = 0;
    }
  }
}

/*
==============
CG_Camera_Trace
==============
*/
bool CG_Camera_Trace(const CameraTraceInfo *traceInfo, vec3_t *result, float *outFraction)
{
  float *outRawFrac; 
  bool v13; 
  bool v14; 
  char v44; 
  int v65; 
  vec3_t end; 
  vec3_t start; 

  __asm { vmovaps [rsp+0E0h+var_50], xmm11 }
  _RDI = result;
  _RBX = traceInfo;
  if ( traceInfo->ignoreEntities && traceInfo->ignoreCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 286, ASSERT_TYPE_ASSERT, "(!traceInfo.ignoreEntities || traceInfo.ignoreCount > 0)", (const char *)&queryFormat, "!traceInfo.ignoreEntities || traceInfo.ignoreCount > 0") )
    __debugbreak();
  outRawFrac = (float *)&v65;
  __asm { vxorps  xmm11, xmm11, xmm11 }
  if ( outFraction )
    outRawFrac = outFraction;
  v13 = _RBX->worldId == PHYSICS_WORLD_ID_INVALID;
  __asm { vmovss  [rbp+57h+var_A0], xmm11 }
  if ( v13 )
  {
    *outRawFrac = 1.0;
    _RDI->v[0] = _RBX->end.v[0];
    _RDI->v[1] = _RBX->end.v[1];
    _RDI->v[2] = _RBX->end.v[2];
    v14 = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vsubss  xmm5, xmm0, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx+14h]
      vmovss  xmm2, dword ptr [rbx+18h]
      vmovss  xmm4, dword ptr [rbx+20h]
      vmovss  dword ptr [rbp+57h+var_98], xmm0
      vmovaps [rsp+0E0h+var_30], xmm6
      vsubss  xmm6, xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+57h+var_98+4], xmm1
      vmovss  dword ptr [rbp+57h+var_98+8], xmm2
      vmovaps [rsp+0E0h+var_40], xmm8
      vsubss  xmm8, xmm2, dword ptr [rbx+0Ch]
      vmulss  xmm0, xmm5, xmm5
      vmovaps [rsp+0E0h+var_60], xmm12
      vmovss  xmm12, cs:__real@3f800000
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm2, xmm1
      vmovaps [rsp+0E0h+var_70], xmm13
      vsqrtss xmm13, xmm2, xmm2
      vcmpless xmm0, xmm13, cs:__real@80000000
      vblendvps xmm0, xmm13, xmm12, xmm0
      vdivss  xmm3, xmm12, xmm0
      vmulss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, xmm4
      vaddss  xmm2, xmm1, dword ptr [rbx+4]
      vmulss  xmm0, xmm6, xmm3
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+57h+start], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+8]
      vmulss  xmm0, xmm8, xmm3
      vmovaps xmm8, [rsp+0E0h+var_40]
      vmulss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rbp+57h+start+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rbp+57h+start+8], xmm2
    }
    BG_Camera_VehicleCameraShapeCast(_RBX->worldId, _RBX->ignoreEntities, _RBX->ignoreCount, _RBX->contentMask, &start, &end, outRawFrac);
    __asm
    {
      vmovss  xmm6, dword ptr [rsi]
      vcomiss xmm6, xmm12
      vmovss  xmm0, dword ptr [rbp+57h+var_98]
    }
    if ( v44 )
    {
      __asm
      {
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+start]
        vmovss  xmm0, dword ptr [rbp+57h+var_98+4]
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm3, xmm2, dword ptr [rbp+57h+start]
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+4]
        vmovss  xmm0, dword ptr [rbp+57h+var_98+8]
        vmulss  xmm2, xmm1, xmm6
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+start+8]
        vmovss  dword ptr [rdi], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+4]
        vmulss  xmm2, xmm1, xmm6
        vmovss  dword ptr [rdi+4], xmm3
        vaddss  xmm3, xmm2, dword ptr [rbp+57h+start+8]
        vmovss  dword ptr [rdi+8], xmm3
        vmulss  xmm6, xmm13, dword ptr [rsi]
      }
      BG_Camera_VehicleCameraShapeRadius();
      __asm
      {
        vsubss  xmm1, xmm6, xmm0
        vmovss  xmm0, dword ptr [rbx+38h]
        vcomiss xmm0, xmm11
      }
      v14 = 1;
    }
    else
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbp+57h+var_98+4]
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm0, dword ptr [rbp+57h+var_98+8]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  dword ptr [rdi+4], xmm1
      }
      v14 = 0;
    }
    __asm
    {
      vmovaps xmm12, [rsp+0E0h+var_60]
      vmovaps xmm6, [rsp+0E0h+var_30]
      vmovaps xmm13, [rsp+0E0h+var_70]
    }
  }
  __asm { vmovaps xmm11, [rsp+0E0h+var_50] }
  return v14;
}

/*
==============
CG_Camera_Transition_Detect
==============
*/
_BOOL8 CG_Camera_Transition_Detect(LocalClientNum_t localClientNum, const VehicleDef *vehDef, unsigned int nextCameraNdx, unsigned int curCameraNdx, RefdefView *inOutRefDef)
{
  __int64 v5; 
  unsigned __int64 v7; 
  bool ShouldTransition; 
  ClientCameraState *v10; 
  __int64 v12; 
  __int64 v13; 

  v5 = localClientNum;
  v7 = nextCameraNdx;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4146, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  ShouldTransition = CG_Camera_ShouldTransition((LocalClientNum_t)v5, vehDef, v7, curCameraNdx, inOutRefDef);
  if ( (_DWORD)v7 != curCameraNdx )
  {
    *(_QWORD *)s_cameraStates[v5].transInterpDisabledBits.array = 0i64;
    v10 = &s_cameraStates[v5];
    *(_QWORD *)&v10->transInterpDisabledBits.array[2] = 0i64;
    *(_QWORD *)&v10->transInterpDisabledBits.array[4] = 0i64;
    *(_QWORD *)&v10->transInterpDisabledBits.array[6] = 0i64;
    if ( !ShouldTransition )
    {
      if ( (unsigned int)v7 >= 0x100 )
      {
        LODWORD(v13) = 256;
        LODWORD(v12) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3491, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( MAX_CAMERA_TYPES )", "cameraIndex doesn't index MAX_CAMERA_TYPES\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      *(_QWORD *)v10->transInterpDisabledBits.array = 0i64;
      *(_QWORD *)&v10->transInterpDisabledBits.array[2] = 0i64;
      *(_QWORD *)&v10->transInterpDisabledBits.array[4] = 0i64;
      *(_QWORD *)&v10->transInterpDisabledBits.array[6] = 0i64;
      if ( (unsigned int)v7 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, 256) )
        __debugbreak();
      v10->transInterpDisabledBits.array[v7 >> 5] |= 0x80000000 >> (v7 & 0x1F);
    }
  }
  return ShouldTransition;
}

/*
==============
CG_Camera_Transition_FinalizeViewValues
==============
*/
void CG_Camera_Transition_FinalizeViewValues(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  const CameraDef *Def; 
  CgHandler *v21; 
  CgWeaponMap *v22; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  int v32; 
  int v33; 
  cg_t *v34; 
  playerState_s *p_predictedPlayerState; 
  __int16 viewlocked_entNum; 
  const centity_t *v37; 
  centity_t *LinkToParent; 
  char v39; 
  bool v40; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t v43; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RDI = &s_cameraTransition[localClientNum];
  RefdefView_GetOrg(inOutRefDef, &_RDI->lastViewEyePos);
  MatrixCopy33(&inOutRefDef->axis, &_RDI->lastViewAxis);
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
  linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity(localClientNum, linkEnt), (_RBX = Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    if ( !IsTransitionSkydiveOrbitCamType )
    {
      _RDI->lastViewLocalValid = 0;
      goto LABEL_14;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    Def = CG_Camera_Active_TryGetDef(localClientNum);
    if ( _RDI->active )
    {
      if ( _RDI->transitionType != TT_CAMERA_TO_VIEW )
      {
        if ( _RDI->transitionType != TT_VIEW_TO_CAMERA )
          goto LABEL_14;
LABEL_12:
        _RDI->sourceEyePos.v[0] = _RDI->lastViewEyePos.v[0];
        _RDI->sourceEyePos.v[1] = _RDI->lastViewEyePos.v[1];
        _RDI->sourceEyePos.v[2] = _RDI->lastViewEyePos.v[2];
        MatrixCopy33(&_RDI->last1stViewAxis, &_RDI->targetAxis);
        CG_Camera_RemoveRoll(&_RDI->targetAxis);
        Handler = CgHandler::getHandler(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &_RDI->targetEyePos, Handler);
        ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(_RDI);
        goto LABEL_14;
      }
    }
    else if ( Def )
    {
      goto LABEL_12;
    }
    AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
    v21 = CgHandler::getHandler(localClientNum);
    v22 = CgWeaponMap::GetInstance(localClientNum);
    BG_GetPlayerEyePosition(v22, &LocalClientGlobals->predictedPlayerState, &outOrigin, v21);
    AxisToAngles(&axis, &v43);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rbp+57h+var_A0+8], xmm0
    }
    AnglesToAxis(&v43, &axis);
    _RDI->lastViewLocalValid = 1;
    AxisTranspose(&axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+0E0h]
      vsubss  xmm1, xmm0, dword ptr [rbp+57h+outOrigin]
      vmovss  xmm2, dword ptr [rdi+0E4h]
      vsubss  xmm0, xmm2, dword ptr [rbp+57h+outOrigin+4]
      vmovss  dword ptr [rbp+57h+angles], xmm1
      vmovss  xmm1, dword ptr [rdi+0E8h]
      vsubss  xmm2, xmm1, dword ptr [rbp+57h+outOrigin+8]
      vmovss  dword ptr [rbp+57h+angles+8], xmm2
      vmovss  dword ptr [rbp+57h+angles+4], xmm0
    }
    AxisTransformVec3(&out, &angles, &_RDI->lastViewEyePosLocal);
    MatrixMultiply(&out, &_RDI->lastViewAxis, &_RDI->lastViewAxisLocal);
    goto LABEL_14;
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rbp+57h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rbp+57h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rbp+57h+angles+8], xmm0
  }
  AnglesToAxis(&angles, &axis);
  _RDI->lastViewLocalValid = 1;
  AxisTranspose(&axis, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0E0h]
    vsubss  xmm1, xmm0, dword ptr [rbp+57h+outOrigin]
    vmovss  xmm2, dword ptr [rdi+0E4h]
    vsubss  xmm0, xmm2, dword ptr [rbp+57h+outOrigin+4]
    vmovss  dword ptr [rbp+57h+angles], xmm1
    vmovss  xmm1, dword ptr [rdi+0E8h]
    vsubss  xmm2, xmm1, dword ptr [rbp+57h+outOrigin+8]
    vmovss  dword ptr [rbp+57h+angles+8], xmm2
    vmovss  dword ptr [rbp+57h+angles+4], xmm0
  }
  AxisTransformVec3(&out, &angles, &_RDI->lastViewEyePosLocal);
  MatrixMultiply(&out, &_RDI->lastViewAxis, &_RDI->lastViewAxisLocal);
LABEL_14:
  v32 = CG_Camera_Active_Get(localClientNum);
  if ( !v32 || v32 >= 256 )
  {
    v33 = 0;
    while ( !CG_Camera_GetData(localClientNum, (CameraType)(v33 + 252))->initialized )
    {
      if ( (unsigned int)++v33 >= 4 )
      {
        if ( !_RDI->active )
        {
          RefdefView_GetOrg(inOutRefDef, &_RDI->last1stViewEyePos);
          MatrixCopy33(&inOutRefDef->axis, &_RDI->last1stViewAxis);
        }
        break;
      }
    }
  }
  _RDI->lastSeat = CG_Camera_Vehicles_GetCurrentSeat(localClientNum, NULL);
  v34 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3793, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v34->predictedPlayerState;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 5u) && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 6u) )
  {
    if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 7u) )
      goto LABEL_41;
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
  }
  viewlocked_entNum = p_predictedPlayerState->viewlocked_entNum;
  if ( viewlocked_entNum != 2047 )
  {
    v37 = CG_GetEntity(localClientNum, viewlocked_entNum);
    if ( v37->pose.eType == 11 )
    {
      LinkToParent = CG_Entity_GetLinkToParent(localClientNum, v37);
      if ( LinkToParent )
      {
        if ( !BG_IsVehicleEntity(&LinkToParent->nextState) )
        {
          v39 = 1;
          goto LABEL_42;
        }
      }
    }
  }
LABEL_41:
  v39 = 0;
LABEL_42:
  v40 = !_RDI->lastWas3PWithFocus;
  _RDI->lastWasUsingTuret = v39;
  if ( v40 )
    RefdefView_GetOrg(inOutRefDef, &_RDI->lastFocusOrigin);
}

/*
==============
CG_Camera_Transition_IsActive
==============
*/
bool CG_Camera_Transition_IsActive(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CameraType v2; 
  __int64 v3; 

  v1 = localClientNum;
  v2 = CG_Camera_Active_Get(localClientNum);
  v3 = v1;
  return v2 && v2 != s_cameraTransition[v3].lastActiveCamera || s_cameraTransition[v3].active;
}

/*
==============
CG_Camera_Transition_IsHidingViewmodel
==============
*/
bool CG_Camera_Transition_IsHidingViewmodel(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CameraType v2; 
  __int64 v3; 
  bool result; 

  v1 = localClientNum;
  result = !CG_Camera_IsSkydiveSpectatorOrKillcam(localClientNum) && ((v2 = CG_Camera_Active_Get((LocalClientNum_t)v1), v3 = v1, v2) && v2 != s_cameraTransition[v3].lastActiveCamera || s_cameraTransition[v3].active) && !CG_Utils_IsActionCamActive((const LocalClientNum_t)v1);
  return result;
}

/*
==============
CG_Camera_Transition_IsHidingWorldmodel
==============
*/
bool CG_Camera_Transition_IsHidingWorldmodel(LocalClientNum_t localClientNum, bool forceCheck)
{
  __int64 v2; 
  ClientCameraData *Data; 
  const CameraDef *camDef; 
  CameraType v7; 
  __int64 v8; 
  int clientNum; 
  const cpose_t *Pose; 
  const DObj *ClientDObj; 
  const DObj *v12; 
  int WorldTagPos; 
  vec3_t outPos; 

  v2 = localClientNum;
  if ( CG_Camera_IsSkydiveSpectatorOrKillcam(localClientNum) )
    return 0;
  Data = CG_Camera_GetData((LocalClientNum_t)v2, CAMERA_CAR);
  if ( Data->initialized )
  {
    camDef = Data->camDef;
    if ( camDef )
    {
      if ( camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )
        return 1;
    }
  }
  if ( !forceCheck )
  {
    v7 = CG_Camera_Active_Get((LocalClientNum_t)v2);
    v8 = v2;
    if ( (v7 == CAMERA_INVALID || v7 == s_cameraTransition[v8].lastActiveCamera) && !s_cameraTransition[v8].active )
      return 0;
  }
  if ( CG_Camera_Active_Get((LocalClientNum_t)v2) == s_cameraTransition[v2].lastActiveCamera && !s_cameraTransition[v2].active )
    return 0;
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState.clientNum;
  if ( !CG_Entity_CanUseDObj((LocalClientNum_t)v2, clientNum) )
    return 0;
  Pose = CG_GetPose((LocalClientNum_t)v2, clientNum);
  ClientDObj = Com_GetClientDObj(clientNum, (LocalClientNum_t)v2);
  v12 = ClientDObj;
  if ( !ClientDObj )
    return 0;
  if ( !DObjVerifyNumBones(ClientDObj) )
    return 0;
  WorldTagPos = CG_DObjGetWorldTagPos(Pose, v12, scr_const.j_spine4, &outPos);
  if ( !WorldTagPos )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+58h+outPos]
    vsubss  xmm3, xmm0, dword ptr [rdi+r14+0E0h]
    vmovss  xmm1, dword ptr [rsp+58h+outPos+4]
    vsubss  xmm2, xmm1, dword ptr [rdi+r14+0E4h]
    vmovss  xmm0, dword ptr [rsp+58h+outPos+8]
    vsubss  xmm4, xmm0, dword ptr [rdi+r14+0E8h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm1, cs:s_wmHideDist
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm2, xmm1, xmm1
    vcomiss xmm4, xmm2
  }
  return WorldTagPos == 0;
}

/*
==============
CG_Camera_Transition_Update
==============
*/

bool __fastcall CG_Camera_Transition_Update(LocalClientNum_t localClientNum, double frameTime, RefdefView *inOutRefDef)
{
  char v14; 
  bool IsTransitionSkydiveOrbitCamType; 
  bool v16; 
  ClientCameraTransition::TransitionType transitionType; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  tmat33_t<vec3_t> *p_axis; 
  CgHandler *v21; 
  int nextCamNdx; 
  char v30; 
  char v31; 
  ClActiveClient *Client; 
  bool v41; 
  bool result; 
  float outDistance; 
  vec3_t outOrg; 
  __int64 v59; 
  vec3_t clViewangles; 
  WorldUpReferenceFrame v61; 
  char v62; 
  void *retaddr; 

  _RAX = &retaddr;
  v59 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBP = inOutRefDef;
  __asm { vmovaps xmm8, xmm1 }
  _RBX = &s_cameraTransition[localClientNum];
  if ( !_RBX->active )
    goto LABEL_31;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm1, xmm7
  }
  if ( !_RBX->active )
  {
LABEL_31:
    result = 0;
    goto LABEL_32;
  }
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  v14 = 0;
  __asm { vmovss  [rsp+0F8h+var_C8], xmm7 }
  RefdefView_GetOrg(_RBP, &outOrg);
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
  v16 = IsTransitionSkydiveOrbitCamType;
  transitionType = _RBX->transitionType;
  if ( _RBX->transitionType == TT_CAMERA_TO_VIEW )
  {
    if ( IsTransitionSkydiveOrbitCamType )
    {
      Handler = CgHandler::getHandler(localClientNum);
      Instance = CgWeaponMap::GetInstance(localClientNum);
      BG_GetPlayerEyePosition(Instance, &_R14->predictedPlayerState, &_RBX->targetEyePos, Handler);
      p_axis = &_RBP->axis;
    }
    else
    {
      RefdefView_GetOrg(_RBP, &_RBX->targetEyePos);
      v21 = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v61, &_R14->predictedPlayerState, v21);
      __asm { vmovss  xmm1, dword ptr [r14+1F0h]; height }
      WorldUpReferenceFrame::AddUpContribution(&v61, *(float *)&_XMM1, &_RBX->targetEyePos);
      p_axis = &_RBP->axis;
      MatrixCopy33(&_RBP->axis, &_RBX->targetAxis);
      CG_Camera_RemoveRoll(&_RBX->targetAxis);
    }
    if ( _RBX->transitionOutLocalSpace )
    {
      ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(_RBX);
      ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(_RBX);
    }
    ClientCameraTransition::InterpolateEyePos(_RBX, localClientNum, v16, &outOrg, &outDistance);
    ClientCameraTransition::InterpolateAxis(_RBX, localClientNum, p_axis);
    v14 = 1;
    transitionType = _RBX->transitionType;
  }
  else
  {
    p_axis = &_RBP->axis;
  }
  if ( transitionType == TT_VIEW_TO_CAMERA )
  {
    nextCamNdx = _RBX->nextCamNdx;
    if ( nextCamNdx && nextCamNdx < 256 && (unsigned int)(nextCamNdx - 1) < 0xFA )
    {
      __asm { vmovaps xmm1, xmm8; frameTime }
      CG_Camera_UpdateTransitionToCameraTarget(localClientNum, *(float *)&_XMM1, _RBP);
    }
    ClientCameraTransition::InterpolateEyePos(_RBX, localClientNum, v16, &outOrg, &outDistance);
    ClientCameraTransition::InterpolateAxis(_RBX, localClientNum, p_axis);
    if ( nextCamNdx && nextCamNdx < 256 )
    {
      _RAX = CG_Camera_GetData(localClientNum, (CameraType)nextCamNdx);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+outOrg]
        vmovss  dword ptr [rax+140h], xmm0
        vmovss  xmm1, dword ptr [rsp+0F8h+outOrg+4]
        vmovss  dword ptr [rax+144h], xmm1
        vmovss  xmm0, dword ptr [rsp+0F8h+outOrg+8]
        vmovss  dword ptr [rax+148h], xmm0
      }
      CG_Camera_StoreLinkedEyePos(_RAX->localClientNum, _RAX);
    }
LABEL_19:
    RefdefView_SetOrg(_RBP, &outOrg);
    AxisToAngles(p_axis, &_R14->refdefViewAngles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+194h]
      vcomiss xmm0, dword ptr [rbx+198h]
    }
    if ( v30 | v31 )
    {
      _RBX->active = 0;
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+48h]
        vmovups ymmword ptr [rbp+14h], ymm0
      }
      _RBP->axis.m[2].v[2] = _RBX->targetAxis.m[2].v[2];
      _R14->refdefViewAngles.v[2] = 0.0;
      Client = ClActiveClient::GetClient(localClientNum);
      if ( Client )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r14+178C0h]
          vsubss  xmm1, xmm0, dword ptr [r14+0BCh]
          vmovss  dword ptr [rsp+0F8h+clViewangles], xmm1
          vmovss  xmm3, dword ptr [r14+178C4h]
          vsubss  xmm0, xmm3, dword ptr [r14+0C0h]
          vmovss  dword ptr [rsp+0F8h+clViewangles+4], xmm0
          vmovss  xmm1, dword ptr [r14+178C8h]
          vsubss  xmm3, xmm1, dword ptr [r14+0C4h]
          vmovss  dword ptr [rsp+0F8h+clViewangles+8], xmm3
        }
        ClActiveClient_SetCLViewangles(Client, &clViewangles);
      }
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    else
    {
      if ( !_RBX->doPlayerFade )
        goto LABEL_29;
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist, "cg_camera_transition_fade_out_start_dist");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist, "cg_camera_transition_fade_out_end_dist");
      __asm { vcomiss xmm6, xmm0 }
      if ( v30 | v31 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm1, [rsp+0F8h+var_C8]
        vsubss  xmm2, xmm1, xmm0
        vsubss  xmm0, xmm6, xmm0
        vdivss  xmm0, xmm2, xmm0; val
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vsubss  xmm2, xmm6, xmm0; normalizedValue }
    }
    CG_PlayerFade_SetFadeValue(localClientNum, _R14->predictedPlayerState.clientNum, *(const float *)&_XMM2);
LABEL_29:
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [rbx+198h]
      vminss  xmm1, xmm0, dword ptr [rbx+194h]
      vmovss  dword ptr [rbx+198h], xmm1
    }
    v41 = 1;
    goto LABEL_30;
  }
  if ( v14 )
    goto LABEL_19;
  _RBX->active = 0;
  *(_QWORD *)&_RBX->time = 0i64;
  *(_QWORD *)&_RBX->timeToStartEyePos = 0i64;
  _RBX->lastActiveCamera = 0;
  *(_QWORD *)&_RBX->prevCamNdx = 0i64;
  _RBX->transitionType = TT_NONE;
  *(_QWORD *)&_RBX->lastSeat = 0i64;
  _RBX->transitionInLocalSpace = 0;
  *(_WORD *)&_RBX->transitionOutLocalSpace = 0;
  *(_WORD *)&_RBX->lastWas3PWithFocus = 0;
  _RBX->lastWasUsingTuret = 0;
  _RBX->doPlayerFade = 0;
  *(_QWORD *)&_RBX->lastFocusOrigin.y = 0i64;
  v41 = 0;
LABEL_30:
  memset(&outOrg, 0, sizeof(outOrg));
  result = v41;
LABEL_32:
  _R11 = &v62;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
CG_Camera_TryGetDef
==============
*/
const CameraDef *CG_Camera_TryGetDef(LocalClientNum_t localClientNum, CameraType camType)
{
  if ( camType && camType < MAX_CAMERA_TYPES && (unsigned int)(camType - 1) < 0xFA )
    return BG_Camera_GetDef(camType);
  if ( (unsigned int)(camType - 252) > 3 )
    return 0i64;
  return CG_Camera_GetData(localClientNum, camType)->camDef;
}

/*
==============
CG_Camera_UpdateTransitionToCameraTarget
==============
*/

void __fastcall CG_Camera_UpdateTransitionToCameraTarget(LocalClientNum_t localClientNum, double frameTime, const RefdefView *inRefDef)
{
  __int64 v4; 
  unsigned int v7; 
  signed int v8; 
  int v9; 
  tmat33_t<vec3_t> *p_axis; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  ClientCameraData *Data; 
  unsigned int refdefViewOrg_aab; 
  unsigned int v18; 
  int v20; 
  int v21; 
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  tmat33_t<vec3_t> *p_sourceAxis; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  vec3_t angles; 
  RefdefView inOutRefDef; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  __asm { vmovaps [rsp+170h+var_40], xmm6 }
  v4 = localClientNum;
  __asm { vmovaps xmm6, xmm1 }
  v7 = CG_Camera_Active_Get(localClientNum);
  v8 = v7;
  if ( v7 )
  {
    if ( !CameraType_Is_Def(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3371, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( activeCam ))", (const char *)&queryFormat, "CameraType_Is_Def( activeCam )") )
      __debugbreak();
    RefdefView_GetOrg(inRefDef, &outOrg);
    p_axis = &inRefDef->axis;
    inOutRefDef.refdefViewOrg_aab += inOutRefDef.refdefViewOrg_set_aab;
    v11 = (v9 + 104) ^ inOutRefDef.refdefViewOrg_aab;
    LODWORD(inOutRefDef.org.org.v[0]) = LODWORD(outOrg.v[0]) ^ (v11 * (v11 + 2));
    v12 = (v9 + 108) ^ inOutRefDef.refdefViewOrg_aab;
    v13 = (v9 + 112) ^ inOutRefDef.refdefViewOrg_aab;
    LODWORD(inOutRefDef.org.org.v[1]) = LODWORD(outOrg.v[1]) ^ (v12 * (v12 + 2));
    LODWORD(inOutRefDef.org.org.v[2]) = LODWORD(outOrg.v[2]) ^ (v13 * (v13 + 2));
    MatrixCopy33(&inRefDef->axis, &inOutRefDef.axis);
    __asm { vmovaps xmm3, xmm6; frameTime }
    Data = CG_Camera_GetData((LocalClientNum_t)v4, (CameraType)v8);
    Data->initialized = 0;
    CG_Camera_Active_Update_Def((LocalClientNum_t)v4, v8, &inOutRefDef, *(double *)&_XMM3);
    Data->initialized = 0;
    _R13 = s_cameraTransition;
    refdefViewOrg_aab = inOutRefDef.refdefViewOrg_aab;
    v18 = (v9 + 104) ^ inOutRefDef.refdefViewOrg_aab;
    _RSI = v4;
    LODWORD(s_cameraTransition[_RSI].targetEyePos.v[0]) = LODWORD(inOutRefDef.org.org.v[0]) ^ (v18 * (v18 + 2));
    v20 = (v9 + 108) ^ refdefViewOrg_aab;
    v21 = (v9 + 112) ^ refdefViewOrg_aab;
    LODWORD(s_cameraTransition[_RSI].targetEyePos.v[1]) = LODWORD(inOutRefDef.org.org.v[1]) ^ (v20 * (v20 + 2));
    LODWORD(s_cameraTransition[_RSI].targetEyePos.v[2]) = LODWORD(inOutRefDef.org.org.v[2]) ^ (v21 * (v21 + 2));
    MatrixCopy33(&inOutRefDef.axis, &s_cameraTransition[v4].targetAxis);
    AxisToAngles(&s_cameraTransition[v4].targetAxis, &outOrg);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rsp+170h+outOrg+8], xmm6
    }
    AnglesToAxis(&outOrg, &s_cameraTransition[v4].targetAxis);
    IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType((const LocalClientNum_t)v4);
    linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v4, linkEnt);
      _RBX = Entity;
      if ( Entity )
      {
        if ( (Entity->flags & 1) != 0 )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+48h]
            vmovss  dword ptr [rsp+170h+outOrg], xmm0
            vmovss  xmm1, dword ptr [rbx+4Ch]
            vmovss  dword ptr [rsp+170h+outOrg+4], xmm1
            vmovss  xmm0, dword ptr [rbx+50h]
            vmovss  dword ptr [rsp+170h+outOrg+8], xmm0
          }
          AnglesToAxis(&outOrg, &axis);
          s_cameraTransition[_RSI].transitionInLocalSpace = 1;
          AxisTranspose(&axis, &out);
          __asm
          {
            vmovss  xmm0, dword ptr [rsi+r13+3Ch]
            vsubss  xmm1, xmm0, dword ptr [rsp+170h+outOrigin]
            vmovss  xmm2, dword ptr [rsi+r13+40h]
            vsubss  xmm0, xmm2, dword ptr [rsp+170h+outOrigin+4]
            vmovss  dword ptr [rsp+170h+outOrg], xmm1
            vmovss  xmm1, dword ptr [rsi+r13+44h]
            vsubss  xmm2, xmm1, dword ptr [rsp+170h+outOrigin+8]
            vmovss  dword ptr [rsp+170h+outOrg+8], xmm2
            vmovss  dword ptr [rsp+170h+outOrg+4], xmm0
          }
          AxisTransformVec3(&out, &outOrg, &s_cameraTransition[_RSI].targetEyePosLocal);
          p_sourceAxis = &s_cameraTransition[_RSI].sourceAxis;
LABEL_11:
          MatrixMultiply(&out, p_sourceAxis, &s_cameraTransition[_RSI].targetAxisLocal);
          goto LABEL_12;
        }
      }
    }
    if ( IsTransitionSkydiveOrbitCamType )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
      MatrixCopy33(p_axis, &s_cameraTransition[v4].targetAxis);
      CG_Camera_RemoveRoll(&s_cameraTransition[v4].targetAxis);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler((LocalClientNum_t)v4);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
      AxisToAngles(&axis, &angles);
      __asm { vmovss  dword ptr [rsp+170h+angles+8], xmm6 }
      AnglesToAxis(&angles, &axis);
      s_cameraTransition[_RSI].transitionInLocalSpace = 1;
      AxisTranspose(&axis, &out);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+r13+3Ch]
        vsubss  xmm1, xmm0, dword ptr [rsp+170h+outOrigin]
        vmovss  xmm2, dword ptr [rsi+r13+40h]
        vsubss  xmm0, xmm2, dword ptr [rsp+170h+outOrigin+4]
        vmovss  dword ptr [rsp+170h+outOrg], xmm1
        vmovss  xmm1, dword ptr [rsi+r13+44h]
        vsubss  xmm2, xmm1, dword ptr [rsp+170h+outOrigin+8]
        vmovss  dword ptr [rsp+170h+outOrg+8], xmm2
        vmovss  dword ptr [rsp+170h+outOrg+4], xmm0
      }
      AxisTransformVec3(&out, &outOrg, &s_cameraTransition[_RSI].targetEyePosLocal);
      p_sourceAxis = &s_cameraTransition[v4].targetAxis;
      goto LABEL_11;
    }
  }
LABEL_12:
  __asm { vmovaps xmm6, [rsp+170h+var_40] }
}

/*
==============
CG_Camera_Vehicle_FlightDynamics_ApplyNoiseDelta
==============
*/
void CG_Camera_Vehicle_FlightDynamics_ApplyNoiseDelta(LocalClientNum_t localClientNum, const centity_t *vehEnt, RefdefView *inOutRefDef)
{
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  BgVehiclePhysicsManager *v10; 
  BgVehiclePhysics *ObjectById; 
  cg_t *LocalClientGlobals; 
  int time; 
  double NormalSpeedPlane; 
  float outVertOrRoll; 
  float outHorizOrPitch; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2695, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehEnt);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2699, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  v10 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v10, Client->physicsId);
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2702, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = DCONST_DVARFLT_fd_camera_noise_pitch;
  _RDI = LocalClientGlobals;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+outHorizOrPitch], xmm0
    vmovss  [rsp+78h+arg_8], xmm0
  }
  if ( !DCONST_DVARFLT_fd_camera_noise_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_noise_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_fd_camera_noise_roll;
  if ( !DCONST_DVARFLT_fd_camera_noise_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_noise_roll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  time = _RDI->time;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(ObjectById);
  __asm
  {
    vmovaps xmm3, xmm6; rollAmp
    vmovaps xmm2, xmm7; pitchAmp
  }
  CG_Camera_Vehicles_GetSpeedNoiseDelta(*(float *)&NormalSpeedPlane, time, *(float *)&_XMM2, *(float *)&_XMM3, &outHorizOrPitch, &outVertOrRoll);
  __asm
  {
    vmovss  xmm0, [rsp+78h+arg_8]
    vaddss  xmm1, xmm0, dword ptr [rdi+178C8h]
    vmovss  xmm0, [rsp+78h+outHorizOrPitch]
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
    vmovss  dword ptr [rdi+178C8h], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdi+178C0h]
    vmovss  dword ptr [rdi+178C0h], xmm1
  }
}

/*
==============
CG_Camera_Vehicles_1stPerson_FreeLook
==============
*/

void __fastcall CG_Camera_Vehicles_1stPerson_FreeLook(ClientCameraData *camData, double frameTime)
{
  const CameraDef *camDef; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  LocalClientNum_t localClientNum; 
  char v17; 
  char v18; 
  const dvar_t *v23; 
  usercmd_s ucmd; 

  camDef = camData->camDef;
  _RBX = camData;
  __asm
  {
    vmovaps [rsp+1D8h+var_68], xmm11
    vmovaps xmm11, xmm1
  }
  if ( (!camDef || camDef->profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2362, ASSERT_TYPE_ASSERT, "(camData.camDef && camData.camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE)", (const char *)&queryFormat, "camData.camDef && camData.camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)_RBX->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( CL_GetUserCmd(_RBX->localClientNum, CmdNumber, &ucmd) )
  {
    localClientNum = _RBX->localClientNum;
    __asm
    {
      vmovaps [rsp+1D8h+var_28], xmm6
      vmovaps [rsp+1D8h+var_38], xmm8
      vmovaps [rsp+1D8h+var_48], xmm9
      vmovaps [rsp+1D8h+var_58], xmm10
      vmovaps [rsp+1D8h+var_78], xmm12
    }
    _RBP = CG_GetLocalClientGlobals(localClientNum);
    v17 = 4;
    v18 = 3;
    if ( !CL_Input_IsGamepadEnabled(_RBX->localClientNum) )
    {
      v17 = 0;
      v18 = 0;
    }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlAngles[0], v17);
    __asm { vmovaps xmm8, xmm0 }
    *(float *)&_XMM0 = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlAngles[1], v18);
    __asm
    {
      vmovaps xmm9, xmm0
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vxorps  xmm12, xmm12, xmm12
    }
    if ( !CL_Input_IsGamepadEnabled(_RBX->localClientNum) )
    {
      v23 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@41200000; value
          vandps  xmm1, xmm8, xmm10; expo
          vmovaps [rsp+1D8h+var_88], xmm13
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmovss  xmm13, cs:__real@3f800000
          vsubss  xmm3, xmm0, xmm13
          vxorps  xmm2, xmm3, cs:__xmm@80000000800000008000000080000000
          vmovss  xmm0, cs:__real@41200000; value
          vcmpless xmm1, xmm12, xmm8
          vblendvps xmm1, xmm2, xmm3, xmm1
          vmovss  [rsp+1D8h+arg_0], xmm1
          vandps  xmm1, xmm9, xmm10; expo
        }
        *(double *)&_XMM0 = I_pow(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vsubss  xmm2, xmm0, xmm13
          vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
          vcmpless xmm0, xmm12, xmm9
          vblendvps xmm0, xmm1, xmm2, xmm0
          vmovss  [rsp+1D8h+arg_10], xmm0
        }
        if ( (_RBP->predictedPlayerState.vehicleState.flags & 1) != 0 || _RBP->predictedPlayerState.remoteControlEnt != 2047 )
        {
          __asm
          {
            vmovss  xmm8, [rsp+1D8h+arg_0]
            vmovss  xmm9, [rsp+1D8h+arg_10]
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm1, cs:__real@bf800000; min
            vmovss  xmm0, [rsp+1D8h+arg_0]; val
            vmovaps xmm2, xmm13; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, cs:__real@bf800000; min
            vmovaps xmm8, xmm0
            vmovss  xmm0, [rsp+1D8h+arg_10]; val
            vmovaps xmm2, xmm13; max
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm9, xmm0 }
        }
        __asm { vmovaps xmm13, [rsp+1D8h+var_88] }
      }
    }
    __asm
    {
      vmovss  xmm2, cs:__real@42b20000; max
      vmovss  xmm1, cs:__real@c2b20000; min
      vmulss  xmm0, xmm9, xmm11
      vmulss  xmm9, xmm0, cs:__real@43480000
      vmulss  xmm0, xmm8, xmm11
      vmulss  xmm8, xmm0, cs:__real@43480000
      vaddss  xmm0, xmm9, dword ptr [rbx+0A4h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@42b20000; max
      vmovss  xmm1, cs:__real@c2b20000; min
      vmovss  dword ptr [rbx+0A4h], xmm0
      vaddss  xmm0, xmm8, dword ptr [rbx+0A8h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rbx+0A8h], xmm0
      vaddss  xmm0, xmm0, dword ptr [rbp+178C0h]
      vmovss  dword ptr [rbp+178C0h], xmm0
      vmovss  xmm1, dword ptr [rbx+0A4h]
      vaddss  xmm0, xmm1, dword ptr [rbp+178C4h]
      vmovss  dword ptr [rbp+178C4h], xmm0
    }
    if ( _RBX->camDef->fpveh_freeLookReturn )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3a83126f
        vandps  xmm9, xmm9, xmm10
        vcomiss xmm9, xmm0
      }
    }
    __asm
    {
      vmovaps xmm10, [rsp+1D8h+var_58]
      vmovaps xmm9, [rsp+1D8h+var_48]
      vmovaps xmm8, [rsp+1D8h+var_38]
      vmovaps xmm6, [rsp+1D8h+var_28]
      vmovaps xmm12, [rsp+1D8h+var_78]
    }
  }
  __asm { vmovaps xmm11, [rsp+1D8h+var_68] }
}

/*
==============
CG_Camera_Vehicles_1stPerson_Update
==============
*/
void CG_Camera_Vehicles_1stPerson_Update(const CameraDef *camDef, ClientCameraData *camData, const centity_t *vehEnt, VehicleClient *const vehicleClient, float frameTime, RefdefView *inOutRefDef)
{
  const DObj *ClientDObj; 
  char v19; 
  char v20; 
  vec3_t angles; 
  vec3_t out; 
  tmat43_t<vec3_t> outTagMat; 

  _RBX = vehEnt;
  _RDI = camDef;
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2431, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2432, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleClient->physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2433, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleClient->physicsId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleClient->physicsId )") )
    __debugbreak();
  if ( (!_RDI || _RDI->profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2434, ASSERT_TYPE_ASSERT, "(camDef && camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE)", (const char *)&queryFormat, "camDef && camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE") )
    __debugbreak();
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  CG_Camera_InitializeValues(camData);
  ClientDObj = Com_GetClientDObj(_RBX->nextState.number, camData->localClientNum);
  if ( CG_DObjGetWorldTagMatrix(&_RBX->pose, ClientDObj, scr_const.tag_seat_0, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &angles);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+48h]
      vmovss  xmm1, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rsp+0C8h+angles], xmm0
      vmovss  xmm0, dword ptr [rbx+50h]
      vmovss  dword ptr [rsp+0C8h+angles+8], xmm0
      vmovss  dword ptr [rsp+0C8h+angles+4], xmm1
    }
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&outTagMat);
    CG_GetPoseOrigin(&_RBX->pose, &outTagMat.m[3]);
  }
  MatrixTransformVector43(&_RDI->fpveh_offsetLs, &outTagMat, &out);
  RefdefView_SetOrg(inOutRefDef, &out);
  BG_AxisFromForward(outTagMat.m, &identityMatrix33.m[2], &inOutRefDef->axis);
  AxisToAngles(&inOutRefDef->axis, &_RSI->refdefViewAngles);
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+16Ch]
    vmovss  xmm4, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vmaxss  xmm3, xmm1, xmm0
    vcomiss xmm3, xmm4
  }
  if ( !(v19 | v20) )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+170h]
      vmovss  xmm0, cs:__real@42b20000
      vcmpltss xmm1, xmm4, xmm2
      vblendvps xmm2, xmm0, xmm2, xmm1; max
      vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
      vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+angles+8]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rsi+178C8h], xmm0 }
  }
  if ( _RDI->fpveh_freeLook )
  {
    __asm { vmovss  xmm1, [rsp+0C8h+frameTime]; frameTime }
    CG_Camera_Vehicles_1stPerson_FreeLook(camData, *(double *)&_XMM1);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+164h]
      vaddss  xmm1, xmm0, dword ptr [rsi+178C4h]
      vmovss  dword ptr [rsi+178C4h], xmm1
      vmovss  xmm2, dword ptr [rdi+168h]
      vaddss  xmm0, xmm2, dword ptr [rsi+178C0h]
      vmovss  dword ptr [rsi+178C0h], xmm0
    }
  }
}

/*
==============
CG_Camera_Vehicles_DetectTransitionToFirstPersonView
==============
*/

_BOOL8 __fastcall CG_Camera_Vehicles_DetectTransitionToFirstPersonView(LocalClientNum_t localClientNum, double frameTime, bool *outIsThirdPerson, RefdefView *inOutRefDef)
{
  __int64 v8; 
  bool v10; 
  _BOOL8 result; 

  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  v8 = localClientNum;
  __asm { vmovaps xmm6, xmm1 }
  v10 = CG_Camera_Transition_Detect(localClientNum, NULL, 0, s_cameraTransition[v8].lastActiveCamera, inOutRefDef);
  if ( s_cameraTransition[v8].lastActiveCamera - 252 <= 3 )
    CG_GetLocalClientGlobals(localClientNum)->refdefViewAngles.v[2] = 0.0;
  s_cameraTransition[v8].lastActiveCamera = 0;
  *outIsThirdPerson |= v10;
  if ( v10 )
  {
    __asm { vmovaps xmm1, xmm6; frameTime }
    CG_Camera_Transition_Update(localClientNum, *(double *)&_XMM1, inOutRefDef);
  }
  result = v10;
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return result;
}

/*
==============
CG_Camera_Vehicles_ForceCameraLogic
==============
*/
bool CG_Camera_Vehicles_ForceCameraLogic(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1327, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
  RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, Handler);
  if ( RemoteControlledVehicleEntityNum == 2047 )
    return 0;
  Entity = CG_GetEntity(localClientNum, RemoteControlledVehicleEntityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1337, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( Entity->pose.eType != 14 )
    return 0;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1345, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1347, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1349, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  return ClientDef->type == VEH_AIRCRAFT && ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE;
}

/*
==============
CG_Camera_Vehicles_GetCameraType
==============
*/
__int64 CG_Camera_Vehicles_GetCameraType(VehicleType vehType, VehiclePhysicsGameProfile gameProfile)
{
  if ( vehType != VEH_TREADED )
  {
    switch ( vehType )
    {
      case VEH_CAR:
        return 252i64;
      case VEH_AIRCRAFT:
        return 255i64;
      case VEH_SEACRAFT:
        return 252i64;
    }
    return 0i64;
  }
  if ( gameProfile == VEH_GAMEPROFILE_BRADLEY )
    return 253i64;
  if ( gameProfile != VEH_GAMEPROFILE_WHEELSON )
    return 0i64;
  return 254i64;
}

/*
==============
CG_Camera_Vehicles_GetCurrentSeat
==============
*/
__int64 CG_Camera_Vehicles_GetCurrentSeat(LocalClientNum_t localClientNum, animScriptVehicleType_t *outVehType)
{
  CgHandler *Handler; 
  cg_t *LocalClientGlobals; 
  cg_t *v6; 
  __int64 clientNum; 
  const characterInfo_t *CharacterInfo; 
  int entityNum; 
  const entityState_t *Entity; 
  animScriptVehicleType_t *v11; 
  animScriptVehicleSeat_t outVehicleSeat; 
  char v14; 

  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler )
    return 0i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = LocalClientGlobals;
  if ( !LocalClientGlobals )
    return 0i64;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
  {
    if ( (unsigned int)clientNum >= v6[1].predictedPlayerState.rxvOmnvars[64].timeModified && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", clientNum, v6[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
      __debugbreak();
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v6[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v6, clientNum);
  }
  if ( !CharacterInfo )
    return 0i64;
  entityNum = CharacterInfo->entityNum;
  if ( Handler->IsClient(Handler) )
  {
    Entity = (const entityState_t *)CG_GetEntity((const LocalClientNum_t)Handler->m_localClientNum, entityNum);
    if ( Entity )
      Entity = (const entityState_t *)((char *)Entity + 400);
  }
  else
  {
    Entity = GHandler::GetEntityState((GHandler *)Handler, entityNum);
  }
  if ( !Entity )
    return 0i64;
  v11 = (animScriptVehicleType_t *)&v14;
  if ( outVehType )
    v11 = outVehType;
  BG_VehicleOccupancy_GetLinkedVehicle(Handler, Entity, CharacterInfo, v11, &outVehicleSeat);
  return (unsigned int)outVehicleSeat;
}

/*
==============
CG_Camera_Vehicles_GetSpeedNoiseDelta
==============
*/

void __fastcall CG_Camera_Vehicles_GetSpeedNoiseDelta(double normalSpeed, int time, double pitchAmp, double rollAmp, float *outHorizOrPitch, float *outVertOrRoll)
{
  int v23; 
  int v25; 
  int v26; 
  const dvar_t *v32; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  _RSI = outHorizOrPitch;
  _R14 = outVertOrRoll;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  *outHorizOrPitch = 0.0;
  *outVertOrRoll = 0.0;
  __asm
  {
    vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
    vsubss  xmm4, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
    vmovaps xmm8, xmm3
    vmovss  xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
    vmovaps xmm9, xmm2
    vsubss  xmm2, xmm3, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
    vmaxss  xmm1, xmm4, xmm2
    vcvttss2si edi, xmm1
    vmovaps xmm6, xmm0
  }
  if ( _EDI <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2146, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
    __debugbreak();
  v23 = time;
  _RBX = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange;
  v25 = v23 % _EDI;
  v26 = v23 / _EDI % _EDI;
  if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+28h]; minval
    vmovaps xmm0, xmm6; val
  }
  *(float *)&_XMM0 = NormalizeRange_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  v32 = DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve;
  __asm { vmovaps xmm7, xmm0 }
  if ( !DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseCurve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  switch ( v32->current.integer )
  {
    case 0:
      __asm { vxorps  xmm7, xmm7, xmm7; jumptable 00000001403D607C case 0 }
      break;
    case 2:
      __asm { vmulss  xmm7, xmm7, xmm7; jumptable 00000001403D607C case 2 }
      break;
    case 3:
      __asm
      {
        vmulss  xmm0, xmm7, xmm7; jumptable 00000001403D607C case 3
        vmulss  xmm7, xmm0, xmm7
      }
      break;
    case 4:
      __asm
      {
        vsubss  xmm0, xmm6, xmm7; jumptable 00000001403D607C case 4
        vmulss  xmm1, xmm0, xmm0
        vsubss  xmm7, xmm6, xmm1
      }
      break;
    case 5:
      __asm
      {
        vsubss  xmm1, xmm6, xmm7; jumptable 00000001403D607C case 5
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm2, xmm0, xmm1
        vsubss  xmm7, xmm6, xmm2
      }
      break;
    default:
      break;
  }
  *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(7, _EDI, v25, v26);
  __asm { vmulss  xmm6, xmm0, xmm7 }
  *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(17, _EDI, v25, v26);
  _R11 = &v53;
  __asm
  {
    vmulss  xmm1, xmm6, xmm9
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm2, xmm0, xmm7
    vmovaps xmm7, [rsp+0A8h+var_48]
    vmulss  xmm0, xmm2, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovss  dword ptr [rsi], xmm1
    vmovss  dword ptr [r14], xmm0
  }
}

/*
==============
CG_Camera_Vehicles_PostUpdate_Orbit
==============
*/

void __fastcall CG_Camera_Vehicles_PostUpdate_Orbit(ClientCameraData *camData, double frameTime, BgVehiclePhysics *vehObj, RefdefView *inOutRefDef)
{
  CgHandler *Handler; 
  char v21; 
  bool v35; 
  const dvar_t *v73; 
  const dvar_t *v123; 
  int integer; 
  float v150; 
  char v153; 
  char v154; 
  BOOL v159; 
  bool v160; 
  BOOL v179; 
  bool v180; 
  float outHorizOrPitch; 
  float outVertOrRoll; 
  vec3_t outOrg; 
  __int64 v243; 
  vec3_t forward; 
  vec3_t v245; 
  vec3_t angles; 
  char v247; 
  void *retaddr; 

  _RAX = &retaddr;
  v243 = -2i64;
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
  _R14 = inOutRefDef;
  _RBX = vehObj;
  __asm { vmovss  [rsp+190h+var_130], xmm1 }
  _RSI = camData;
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  _R13 = _RSI->camDef;
  Handler = CgHandler::getHandler(_RSI->localClientNum);
  Handler->GetEntityAngles(Handler, _RBX->m_entityNumber, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+18h]
    vmovss  xmm0, dword ptr [r14+14h]
    vmovss  xmm3, dword ptr [r14+1Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmovss  xmm12, cs:__real@3f800000
    vsubss  xmm0, xmm3, xmm12
    vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm0, xmm0, xmm10
    vmovss  xmm8, cs:__real@3b03126f
    vcomiss xmm0, xmm8
  }
  if ( !v21 )
  {
    v35 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2124, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( _a ))", (const char *)&queryFormat, "Vec3IsNormalized( _a )");
    v21 = 0;
    if ( v35 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+190h+forward]
    vmulss  xmm1, xmm6, xmm6
    vmovss  xmm7, dword ptr [rsp+190h+forward+4]
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm3, xmm1, xmm0
    vmovss  xmm1, dword ptr [rsp+190h+forward+8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vsubss  xmm4, xmm0, xmm12
    vandps  xmm4, xmm4, xmm10
    vcomiss xmm4, xmm8
  }
  if ( !v21 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2125, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( _b ))", (const char *)&queryFormat, "Vec3IsNormalized( _b )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm6, dword ptr [rsp+190h+forward]
      vmovss  xmm7, dword ptr [rsp+190h+forward+4]
    }
  }
  __asm
  {
    vmovss  xmm4, dword ptr [r14+18h]
    vmovss  xmm3, dword ptr [r14+14h]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm12, xmm0
    vmovss  [rsp+190h+var_148], xmm1
    vdivss  xmm0, xmm12, xmm1
    vmulss  xmm3, xmm3, xmm0
    vmulss  xmm4, xmm4, xmm0
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm12, xmm0
    vmovss  [rsp+190h+var_148], xmm1
    vdivss  xmm0, xmm12, xmm1
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm0, xmm0, xmm7
    vmulss  xmm2, xmm0, xmm4
    vmulss  xmm1, xmm1, xmm3
    vaddss  xmm0, xmm2, xmm1; val
    vmovaps xmm2, xmm12; max
    vmovss  xmm1, cs:__real@bf800000; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm9, xmm0 }
  *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
  __asm { vmovss  [rsp+190h+var_148], xmm0 }
  v73 = DCONST_DVARFLT_bg_vehCamPitchAddTime;
  if ( !DCONST_DVARFLT_bg_vehCamPitchAddTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPitchAddTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+3Ch]
    vsubss  xmm1, xmm0, dword ptr [rax+12Ch]
    vdivss  xmm0, xmm1, dword ptr [rdi+28h]; val
    vmovaps xmm2, xmm12; max
    vxorps  xmm11, xmm11, xmm11
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
    vmulss  xmm15, xmm4, xmm0
    vmovss  xmm14, cs:__real@3f000000
  }
  if ( BgVehiclePhysics::IsDynamic(_RBX) )
  {
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
    __asm { vmovaps xmm13, xmm0 }
    AxisToAngles((const tmat33_t<vec3_t> *)&_RBX->m_transform, &v245);
    __asm
    {
      vmovss  xmm7, cs:__real@3b360b61
      vmulss  xmm4, xmm7, dword ptr [rbp+90h+var_110]
      vaddss  xmm3, xmm4, xmm14
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm1, xmm6, xmm3, 1
      vsubss  xmm0, xmm4, xmm1
      vmovss  xmm5, cs:__real@43b40000
      vmulss  xmm8, xmm0, xmm5
      vmovss  dword ptr [rbp+90h+var_110], xmm8
      vmulss  xmm4, xmm7, dword ptr [rbp+90h+var_110+4]
      vaddss  xmm2, xmm4, xmm14
      vroundss xmm3, xmm6, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm5
      vmovss  dword ptr [rbp+90h+var_110+4], xmm1
      vmulss  xmm4, xmm7, dword ptr [rbp+90h+var_110+8]
      vaddss  xmm1, xmm4, xmm14
      vroundss xmm3, xmm6, xmm1, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm2, xmm0, xmm5
      vmovss  dword ptr [rbp+90h+var_110+8], xmm2
      vmaxss  xmm1, xmm9, xmm11
      vmulss  xmm0, xmm2, xmm15
      vmulss  xmm2, xmm0, dword ptr [r13+0B4h]
      vmulss  xmm1, xmm1, xmm1
      vmulss  xmm3, xmm2, xmm1
      vaddss  xmm0, xmm3, dword ptr [r15+178C8h]
      vmovss  dword ptr [r15+178C8h], xmm0
      vminss  xmm1, xmm8, xmm11
      vmulss  xmm0, xmm1, xmm15
      vmulss  xmm2, xmm0, dword ptr [r13+0B8h]
      vmulss  xmm6, xmm2, xmm13
    }
    *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))_RBX->GetCameraPitchAddition)(_RBX);
    _EAX = !_RSI->orbitCamData.inverseView;
    __asm
    {
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm0, xmm1
      vaddss  xmm2, xmm0, xmm6
      vaddss  xmm0, xmm2, dword ptr [r15+178C0h]
      vmovss  dword ptr [r15+178C0h], xmm0
    }
    v123 = DCONST_DVARINT_bg_vehCamNoiseSpace;
    if ( !DCONST_DVARINT_bg_vehCamNoiseSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamNoiseSpace") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v123);
    integer = v123->current.integer;
    if ( (integer & 0xFFFFFFFD) == 0 )
    {
      __asm
      {
        vmovss  [rsp+190h+outHorizOrPitch], xmm11
        vmovss  [rsp+190h+var_14C], xmm11
      }
      _RDI = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch;
      if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoisePitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      _RDI = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll;
      if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRoll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+28h]; rollAmp
        vmovaps xmm2, xmm6; pitchAmp
        vmovaps xmm0, xmm13; normalSpeed
      }
      CG_Camera_Vehicles_GetSpeedNoiseDelta(*(double *)&_XMM0, _R15->time, *(double *)&_XMM2, *(double *)&_XMM3, &outHorizOrPitch, &outVertOrRoll);
      if ( integer )
      {
        if ( integer == 2 )
        {
          RefdefView_GetOrg(_R14, &outOrg);
          __asm
          {
            vmovss  xmm4, [rsp+190h+outHorizOrPitch]
            vmulss  xmm0, xmm4, dword ptr [r14+20h]
            vaddss  xmm1, xmm0, dword ptr [rsp+190h+outOrg]
            vmovss  xmm3, [rsp+190h+var_14C]
            vmulss  xmm0, xmm3, dword ptr [r14+2Ch]
            vaddss  xmm1, xmm1, xmm0
            vmovss  dword ptr [rsp+190h+outOrg], xmm1
            vmulss  xmm0, xmm4, dword ptr [r14+24h]
            vaddss  xmm2, xmm0, dword ptr [rsp+190h+outOrg+4]
            vmulss  xmm1, xmm3, dword ptr [r14+30h]
            vaddss  xmm0, xmm2, xmm1
            vmovss  dword ptr [rsp+190h+outOrg+4], xmm0
            vmulss  xmm1, xmm4, dword ptr [r14+28h]
            vaddss  xmm2, xmm1, dword ptr [rsp+190h+outOrg+8]
            vmulss  xmm0, xmm3, dword ptr [r14+34h]
            vaddss  xmm1, xmm2, xmm0
            vmovss  dword ptr [rsp+190h+outOrg+8], xmm1
          }
          RefdefView_SetOrg(_R14, &outOrg);
          memset(&outOrg, 0, sizeof(outOrg));
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, [rsp+190h+var_14C]
          vaddss  xmm1, xmm0, dword ptr [r15+178C8h]
          vmovss  dword ptr [r15+178C8h], xmm1
          vmovss  xmm2, [rsp+190h+outHorizOrPitch]
          vaddss  xmm0, xmm2, dword ptr [r15+178C0h]
          vmovss  dword ptr [r15+178C0h], xmm0
        }
      }
    }
  }
  if ( _RSI->orbitCamData.inputUpdated || !_RSI->orbitCamData.cameraReturn )
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&_RBX->m_transform, &v245);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+90h+var_110]
      vmovsd  qword ptr [rbx+11Ch], xmm0
    }
    v150 = v245.v[2];
  }
  else
  {
    __asm
    {
      vmovsd  xmm0, qword ptr [r15+178C0h]
      vmovsd  qword ptr [rbx+11Ch], xmm0
    }
    v150 = _R15->refdefViewAngles.v[2];
  }
  _RBX->m_playerViewAngles.v[2] = v150;
  _RDI = DCONST_DVARFLT_bg_vehcamYawTurn;
  if ( !DCONST_DVARFLT_bg_vehcamYawTurn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamYawTurn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm13, dword ptr [rdi+28h]
    vcomiss xmm13, xmm11
  }
  if ( v153 )
    __asm { vmovss  xmm13, dword ptr [r13+0D8h] }
  __asm
  {
    vmovss  xmm1, cs:__real@3a83126f
    vcomiss xmm13, xmm1
  }
  if ( !(v153 | v154) )
  {
    if ( !_RSI->orbitCamData.cameraReturn )
      goto LABEL_74;
    if ( _RSI->orbitCamData.inputUpdated )
      goto LABEL_74;
    __asm { vcomiss xmm11, dword ptr [rsi+34h] }
    if ( !_RSI->orbitCamData.autoRecenterEnabled )
      goto LABEL_74;
    if ( _RSI->orbitCamData.cameraReturnBasedOnGas )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+58h]
        vandps  xmm0, xmm0, xmm10
        vcomiss xmm0, xmm1
      }
      if ( !_RSI->orbitCamData.cameraReturnBasedOnGas )
        goto LABEL_74;
    }
    __asm { vcomiss xmm11, dword ptr [rsi+6Ch] }
    if ( _RSI->orbitCamData.cameraReturnBasedOnGas || _RSI->orbitCamData.inverseView )
    {
LABEL_74:
      _RSI->orbitCamData.targetYawAdd = 0.0;
      goto LABEL_75;
    }
    v159 = Com_BitCheckAssert(_RBX->m_controls.playerEnabledBits, 2, 4);
    v160 = Com_BitCheckAssert(_RBX->m_controls.externalEnabledBits, 2, 4);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0D0h]
      vmovss  xmm9, dword ptr [rbx+0F0h]
    }
    switch ( v159 + 3 * v160 )
    {
      case 1:
        __asm { vmovaps xmm9, xmm3 }
        break;
      case 3:
        break;
      case 4:
        switch ( _RBX->m_controls.valuePolicy[2] )
        {
          case VP_MAXABS:
            __asm
            {
              vandps  xmm1, xmm3, xmm10
              vandps  xmm0, xmm9, xmm10
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm9, xmm9, xmm3, xmm1
            }
            goto LABEL_58;
          case VP_MINABS:
            __asm
            {
              vandps  xmm1, xmm3, xmm10
              vandps  xmm0, xmm9, xmm10
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm9, xmm9, xmm3, xmm1
            }
            goto LABEL_58;
          case VP_AVERAGE:
            __asm
            {
              vaddss  xmm0, xmm9, xmm3
              vmulss  xmm9, xmm0, xmm14
            }
            goto LABEL_58;
          case VP_AVERAGE_WEIGHT_PLAYER:
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+118h]
              vsubss  xmm0, xmm12, xmm1
              vmulss  xmm2, xmm0, xmm9
              vmulss  xmm1, xmm3, xmm1
              vaddss  xmm9, xmm2, xmm1
            }
            goto LABEL_58;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+118h]
              vsubss  xmm0, xmm12, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm9, xmm1
              vaddss  xmm9, xmm2, xmm1
            }
            goto LABEL_58;
        }
      default:
        __asm { vxorps  xmm9, xmm9, xmm9 }
        break;
    }
LABEL_58:
    __asm { vandps  xmm9, xmm9, xmm10 }
    v179 = Com_BitCheckAssert(_RBX->m_controls.playerEnabledBits, 7, 4);
    v180 = Com_BitCheckAssert(_RBX->m_controls.externalEnabledBits, 7, 4);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+0E4h]
      vmovss  xmm8, dword ptr [rbx+104h]
    }
    if ( v179 + 3 * v180 == 1 )
    {
      __asm { vmovaps xmm8, xmm3 }
      goto LABEL_73;
    }
    if ( v179 + 3 * v180 != 3 )
    {
      if ( v179 + 3 * v180 != 4 )
        goto LABEL_71;
      switch ( _RBX->m_controls.valuePolicy[7] )
      {
        case VP_MAXABS:
          __asm
          {
            vandps  xmm1, xmm3, xmm10
            vandps  xmm0, xmm8, xmm10
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm8, xmm8, xmm3, xmm1
          }
          goto LABEL_73;
        case VP_MINABS:
          __asm
          {
            vandps  xmm1, xmm3, xmm10
            vandps  xmm0, xmm8, xmm10
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm8, xmm8, xmm3, xmm1
          }
          goto LABEL_73;
        case VP_AVERAGE:
          __asm
          {
            vaddss  xmm0, xmm8, xmm3
            vmulss  xmm8, xmm0, xmm14
          }
          goto LABEL_73;
        case VP_AVERAGE_WEIGHT_PLAYER:
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+118h]
            vsubss  xmm0, xmm12, xmm1
            vmulss  xmm2, xmm0, xmm8
            vmulss  xmm1, xmm3, xmm1
            vaddss  xmm8, xmm2, xmm1
          }
          goto LABEL_73;
      }
      if ( _RBX->m_controls.valuePolicy[7] != VP_AVERAGE_WEIGHT_EXTERNAL )
      {
LABEL_71:
        __asm { vxorps  xmm8, xmm8, xmm8 }
        goto LABEL_73;
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+118h]
        vsubss  xmm0, xmm12, xmm1
        vmulss  xmm2, xmm0, xmm3
        vmulss  xmm1, xmm8, xmm1
        vaddss  xmm8, xmm2, xmm1
      }
    }
LABEL_73:
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+190h+forward+4]
      vmulss  xmm3, xmm0, dword ptr [r14+24h]
      vmovss  xmm1, dword ptr [rsp+190h+forward]
      vmulss  xmm2, xmm1, dword ptr [r14+20h]
      vaddss  xmm7, xmm3, xmm2
    }
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RBX);
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))_RBX->GetCameraReturnFactor)(_RBX);
    __asm
    {
      vandps  xmm8, xmm8, xmm10
      vmaxss  xmm5, xmm8, xmm6
      vcmpless xmm3, xmm11, xmm7
      vmovss  xmm2, cs:__real@42652ee0
      vmovss  xmm1, cs:__real@c2652ee0
      vblendvps xmm2, xmm1, xmm2, xmm3
      vmulss  xmm3, xmm2, [rsp+190h+var_148]
      vmulss  xmm4, xmm3, xmm13
      vmulss  xmm5, xmm5, xmm4
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm2, xmm5, xmm1
      vmulss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rsi+64h], xmm0
    }
LABEL_75:
    _RCX = &_RSI->orbitCamData.curYawAdd;
    __asm
    {
      vmulss  xmm0, xmm15, dword ptr [rcx]
      vaddss  xmm1, xmm0, dword ptr [r15+178C4h]
      vmovss  dword ptr [r15+178C4h], xmm1
      vmovss  xmm1, dword ptr [rsi+64h]; dst
      vandps  xmm3, xmm1, xmm10
      vmovss  xmm0, dword ptr [rcx]
      vandps  xmm0, xmm0, xmm10
      vcmpltss xmm4, xmm0, xmm3
      vmovss  xmm3, cs:__real@40000000
      vblendvps xmm3, xmm12, xmm3, xmm4; speed
      vmovss  xmm2, [rsp+190h+var_130]; frameTime
    }
    CG_Camera_DampLerp(&_RSI->orbitCamData.curYawAdd, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3);
  }
  _R11 = &v247;
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
CG_Camera_Vehicles_ResetVehicleViews
==============
*/
void CG_Camera_Vehicles_ResetVehicleViews(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  __int64 v3; 
  unsigned int i; 
  cg_t *LocalClientGlobals; 
  __int64 v10; 
  __int64 v11; 
  vec3_t outOrg; 

  v3 = localClientNum;
  for ( i = 0; i < 4; ++i )
  {
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( !CameraType_Is_Valid((CameraType)(i + 252)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 635, ASSERT_TYPE_ASSERT, "(CameraType_Is_Valid( camType ))", (const char *)&queryFormat, "CameraType_Is_Valid( camType )") )
      __debugbreak();
    _RDI = &s_cameras[(int)i + 252][v3];
    RefdefView_GetOrg(inOutRefDef, &outOrg);
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+88h+outOrg]
      vmovss  dword ptr [rdi+140h], xmm2
      vmovss  xmm1, dword ptr [rsp+88h+outOrg+4]
      vmovss  dword ptr [rdi+144h], xmm1
      vmovss  xmm0, dword ptr [rsp+88h+outOrg+8]
      vmovss  dword ptr [rdi+148h], xmm0
      vmovss  dword ptr [rdi+14Ch], xmm2
      vmovss  dword ptr [rdi+150h], xmm1
      vmovss  dword ptr [rdi+154h], xmm0
    }
    CG_Camera_StoreLinkedEyePos((LocalClientNum_t)v3, _RDI);
    _RDI->orbitCamData.timeUntilReturn = 0.0;
    _RDI->initialized = 0;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( LocalClientGlobals->clientVehicle.clearCameraShake )
  {
    CG_ClearCameraShakes((LocalClientNum_t)v3);
    LocalClientGlobals->clientVehicle.clearCameraShake = 0;
  }
}

/*
==============
CG_Camera_Vehicles_Update
==============
*/
__int64 CG_Camera_Vehicles_Update(LocalClientNum_t localClientNum, bool *outIsThirdPerson, RefdefView *inOutRefDef)
{
  __int64 result; 
  __int64 v13; 
  unsigned int v14; 
  const centity_t *v15; 
  __int64 v18; 
  bool v19; 
  bool v20; 
  CgHandler *v21; 
  int v22; 
  int v23; 
  centity_t *Entity; 
  bool IsRemoteControlledVehicle; 
  LocalClientNum_t v39; 
  bool IsValidVehicle; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v45; 
  int VehicleCameraUpdateType; 
  CameraDef *cameraDef; 
  ClientCameraData *Data; 
  char v49; 
  __int64 v50; 
  int v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  RefdefView *p_inOutRefDefa; 
  int v56; 
  int v57; 
  int v58; 
  ClientCameraData *v59; 
  ClientCameraData *v61; 
  FlightDynamicsManager *FlightDynamicsManager; 
  cg_t *v64; 
  CameraProfile profile; 
  ClientCameraData *v67; 
  ClientCameraData *v68; 
  __int64 v69; 
  CgVehicleSystem *v70; 
  VehicleClient *v71; 
  BgVehiclePhysicsManager *v72; 
  BgVehiclePhysics *ObjectById; 
  ClientCameraData *v76; 
  ClientCameraData *v78; 
  bool v80; 
  CgHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  __int64 v83; 
  CgHandler *v84; 
  bool IsClientVehicleCamera; 
  __int64 v89; 
  char *fmt; 
  RefdefView *v91; 
  __int64 v92; 
  char v93; 
  __int64 v94; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  vec3_t vehicleClient; 
  RefdefView inOutRefDefa; 

  __asm
  {
    vmovaps [rsp+178h+var_78], xmm9
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm0, xmm9
  }
  _RDI = localClientNum;
  if ( (unsigned __int64)&v89 != _security_cookie )
  {
    __asm { vmovaps [rsp+178h+var_68], xmm8 }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v13 = (__int64)LocalClientGlobals;
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1449, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v14 = 0;
    __asm { vmovaps [rsp+178h+var_48], xmm6 }
    v15 = NULL;
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm
    {
      vmulss  xmm8, xmm0, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls
      vmovaps xmm1, xmm8; frameTime
    }
    v18 = _RDI;
    v19 = CG_Camera_Transition_Update((LocalClientNum_t)_RDI, *(double *)&_XMM1, inOutRefDef);
    v94 = v18 * 424;
    s_cameraTransition[v18].lastWas3PWithFocus = 0;
    if ( s_cameraTransition[_RDI].active )
    {
      v80 = CG_Camera_Vehicles_ForceCameraLogic((LocalClientNum_t)_RDI);
      if ( !*outIsThirdPerson && !v80 || (Handler = CgHandler::getHandler((LocalClientNum_t)*(_DWORD *)(v13 + 25692)), RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum((const playerState_s *)(v13 + 8), Handler), *outIsThirdPerson = 1, RemoteControlledVehicleEntityNum == 2047) )
      {
        CG_Camera_Vehicles_ResetVehicleViews((LocalClientNum_t)_RDI, inOutRefDef);
        s_cameraTransition[v18].active = 0;
      }
      goto LABEL_92;
    }
    v20 = CG_Camera_Vehicles_ForceCameraLogic((LocalClientNum_t)_RDI);
    if ( !*outIsThirdPerson && !v20 || (v21 = CgHandler::getHandler((LocalClientNum_t)*(_DWORD *)(v13 + 25692)), v22 = BG_GetRemoteControlledVehicleEntityNum((const playerState_s *)(v13 + 8), v21), *outIsThirdPerson = 1, v23 = v22, v22 == 2047) )
    {
      CG_Camera_Vehicles_ResetVehicleViews((LocalClientNum_t)_RDI, inOutRefDef);
      __asm { vmovss  xmm1, cs:__real@3c888889; frameTime }
      result = CG_Camera_Vehicles_DetectTransitionToFirstPersonView((LocalClientNum_t)_RDI, *(double *)&_XMM1, outIsThirdPerson, inOutRefDef);
LABEL_95:
      __asm
      {
        vmovaps xmm6, [rsp+178h+var_48]
        vmovaps xmm8, [rsp+178h+var_68]
      }
      goto LABEL_96;
    }
    __asm
    {
      vmovss  xmm2, cs:__real@3d2aaaab; max
      vmovss  xmm1, cs:__real@3b888889; min
      vmovss  xmm0, cs:?cls@@3UClStatic@@A.frametime_base; val
      vmovaps [rsp+178h+var_58], xmm7
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmulss  xmm0, xmm0, cs:__real@3c888889 }
    _RCX = 0x140000000ui64;
    __asm
    {
      vmovss  xmm2, rva s_frameTimeEMA[rcx+rdi*4]
      vmulss  xmm1, xmm2, cs:__real@3c888889
      vsubss  xmm2, xmm2, xmm1
      vaddss  xmm6, xmm2, xmm0
      vmovss  rva s_frameTimeEMA[rcx+rdi*4], xmm6
    }
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm
    {
      vminss  xmm1, xmm6, cs:__real@3d2aaaab
      vmulss  xmm6, xmm0, xmm1
    }
    Entity = CG_GetEntity((const LocalClientNum_t)_RDI, v23);
    __asm { vmovaps xmm7, [rsp+178h+var_58] }
    v15 = Entity;
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1490, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
      __debugbreak();
    IsRemoteControlledVehicle = CG_GameInterface_IsRemoteControlledVehicle((LocalClientNum_t)_RDI, v15);
    v39 = (int)_RDI;
    if ( !IsRemoteControlledVehicle )
      goto LABEL_26;
    IsValidVehicle = CgVehicleSystem::PhysicsIsValidVehicle((LocalClientNum_t)_RDI, v15);
    v39 = (int)_RDI;
    if ( !IsValidVehicle )
      goto LABEL_26;
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)_RDI);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1509, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, v15);
    *(_QWORD *)vehicleClient.v = Client;
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1511, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
      __debugbreak();
    ClientDef = CgVehicleSystem::GetClientDef(Client);
    if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1513, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    v39 = (int)_RDI;
    if ( !ClientDef->vehiclePhysicsDef.physicsEnabled )
    {
LABEL_26:
      CG_Camera_Vehicles_ResetVehicleViews(v39, inOutRefDef);
      __asm { vmovaps xmm1, xmm8; frameTime }
      result = CG_Camera_Vehicles_DetectTransitionToFirstPersonView((LocalClientNum_t)_RDI, *(double *)&_XMM1, outIsThirdPerson, inOutRefDef);
      goto LABEL_95;
    }
    v45 = CG_Camera_Active_Get((LocalClientNum_t)_RDI);
    if ( v45 && v45 < 256 && (unsigned int)(v45 - 1) < 0xFA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1525, ASSERT_TYPE_ASSERT, "( !CameraType_Is_Def( CG_Camera_Active_Get( localClientNum ) ) )", "Can't run the camera for the vehicle because there's an active CameraSet. Call CameraDefault() before driving a vehicle") )
      __debugbreak();
    VehicleCameraUpdateType = (unsigned __int8)CG_GameInterface_GetVehicleCameraUpdateType((LocalClientNum_t)_RDI, ClientDef);
    switch ( VehicleCameraUpdateType )
    {
      case 9:
        if ( ClientDef->vehiclePhysicsDef.physics_gameProfile )
        {
          if ( ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
            v14 = 254;
        }
        else
        {
          v14 = 253;
        }
        break;
      case 11:
        goto LABEL_36;
      case 12:
        v14 = 255;
        break;
      case 13:
LABEL_36:
        v14 = 252;
        break;
    }
    cameraDef = ClientDef->cameraDef;
    if ( !cameraDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1534, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
      __debugbreak();
    Data = CG_Camera_GetData((LocalClientNum_t)_RDI, (CameraType)v14);
    fmt = (char *)inOutRefDef;
    Data->camDef = cameraDef;
    v49 = CG_Camera_Transition_Detect((LocalClientNum_t)_RDI, ClientDef, v14, *(unsigned int *)((char *)&s_cameraTransition[0].lastActiveCamera + v94), (RefdefView *)fmt);
    v93 = v49;
    if ( v49 && v14 >= 0xFC )
    {
      CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_CAR)->initialized = 0;
      v49 = v93;
    }
    v50 = v94;
    *(unsigned int *)((char *)&s_cameraTransition[0].lastActiveCamera + v94) = v14;
    if ( v49 )
    {
      RefdefView_GetOrg(inOutRefDef, &outOrg);
      inOutRefDefa.refdefViewOrg_aab += inOutRefDefa.refdefViewOrg_set_aab;
      v52 = (v51 + 136) ^ inOutRefDefa.refdefViewOrg_aab;
      LODWORD(inOutRefDefa.org.org.v[0]) = LODWORD(outOrg.v[0]) ^ (v52 * (v52 + 2));
      v53 = (v51 + 140) ^ inOutRefDefa.refdefViewOrg_aab;
      v54 = (v51 + 144) ^ inOutRefDefa.refdefViewOrg_aab;
      LODWORD(inOutRefDefa.org.org.v[1]) = LODWORD(outOrg.v[1]) ^ (v53 * (v53 + 2));
      LODWORD(inOutRefDefa.org.org.v[2]) = LODWORD(outOrg.v[2]) ^ (v54 * (v54 + 2));
      MatrixCopy33(&inOutRefDef->axis, &inOutRefDefa.axis);
      v50 = v94;
      p_inOutRefDefa = &inOutRefDefa;
    }
    else
    {
      p_inOutRefDefa = inOutRefDef;
    }
    v56 = VehicleCameraUpdateType - 9;
    if ( v56 )
    {
      v57 = v56 - 2;
      if ( !v57 )
        goto LABEL_55;
      v58 = v57 - 1;
      if ( v58 )
      {
        if ( v58 == 1 )
        {
LABEL_55:
          if ( ClientDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
          {
            v59 = CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_CAR);
            __asm { vmovaps xmm2, xmm6; frameTime }
            CG_Camera_Vehicles_Update_TurretCam(v59, v15, *(float *)&_XMM2, p_inOutRefDefa);
            v19 = 1;
          }
          else
          {
            profile = cameraDef->profile;
            if ( profile != CAMERAPROFILE_ORBIT && profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1565, ASSERT_TYPE_ASSERT, "( camDef->profile == CAMERAPROFILE_ORBIT || camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )", "An orbit or a 1stVehicle profile is needed for this vehicle") )
              __debugbreak();
            v67 = CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_CAR);
            v68 = v67;
            if ( cameraDef->profile == CAMERAPROFILE_ORBIT )
            {
              __asm { vmovss  dword ptr [rsp+178h+fmt], xmm6 }
              CG_Camera_Vehicles_Update_Orbit(cameraDef, v67, v15, *(VehicleClient *const *)vehicleClient.v, *(float *)&fmt, p_inOutRefDefa);
            }
            else if ( cameraDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )
            {
              __asm { vmovss  dword ptr [rsp+178h+fmt], xmm6 }
              CG_Camera_Vehicles_1stPerson_Update(cameraDef, v67, v15, *(VehicleClient *const *)vehicleClient.v, *(float *)&fmt, p_inOutRefDefa);
            }
            if ( v93 )
            {
              v69 = v68->localClientNum;
              v70 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v68->localClientNum);
              v71 = CgVehicleSystem::GetClient(v70, v15);
              if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1691, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
                __debugbreak();
              v72 = v70->PhysicsGetVehiclePhysicsManager(v70);
              ObjectById = BgVehiclePhysicsManager::GetObjectById(v72, v71->physicsId);
              if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1693, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
                __debugbreak();
              s_cameraTransition[v69].targetEyePos.v[0] = v68->curEyePos.v[0];
              s_cameraTransition[v69].targetEyePos.v[1] = v68->curEyePos.v[1];
              s_cameraTransition[v69].targetEyePos.v[2] = v68->curEyePos.v[2];
              AxisToAngles(&p_inOutRefDefa->axis, &outOrg);
              *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))ObjectById->GetCameraPitchAddition)(ObjectById);
              __asm
              {
                vaddss  xmm0, xmm0, dword ptr [rsp+178h+outOrg]
                vmovss  dword ptr [rsp+178h+outOrg], xmm0
              }
              AnglesToAxis(&outOrg, &s_cameraTransition[v69].targetAxis);
              AxisToAngles(&s_cameraTransition[v69].targetAxis, &vehicleClient);
              __asm { vmovss  [rsp+178h+var_100], xmm9 }
              AnglesToAxis(&vehicleClient, &s_cameraTransition[v69].targetAxis);
              __asm { vmovaps xmm1, xmm8; frameTime }
              CG_Camera_Transition_Update((LocalClientNum_t)_RDI, *(double *)&_XMM1, inOutRefDef);
            }
            v19 = 1;
          }
          goto LABEL_93;
        }
      }
      else
      {
        *(&s_cameraTransition[0].lastWas3PWithFocus + v50) = 1;
        RefdefView_GetOrg(inOutRefDef, (vec3_t *)((char *)&s_cameraTransition[0].lastFocusOrigin + v50));
        if ( ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
        {
          v61 = CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_RCPLANE);
          __asm { vmovaps xmm2, xmm6; frameTime }
          CG_Camera_Vehicles_Update_RCPlane(v61, v15, *(float *)&_XMM2, p_inOutRefDefa);
          v19 = 1;
          goto LABEL_93;
        }
        if ( *(animScriptVehicleSeat_t *)((char *)&s_cameraTransition[0].lastSeat + v94) != VEHICLE_SEAT_DRIVER )
        {
          FlightDynamicsManager = BG_GetFlightDynamicsManager();
          if ( FlightDynamicsManager )
          {
            if ( (unsigned int)_RDI >= LODWORD(cl_maxLocalClients) )
            {
              *(float *)&v92 = cl_maxLocalClients;
              LODWORD(v91) = _RDI;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( clientNum ) ) < (unsigned)( (cl_maxLocalClients) )", "static_cast<int>( clientNum ) doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v91, v92) )
                __debugbreak();
            }
            if ( (FlightDynamicsManager *)((char *)FlightDynamicsManager + 280 * _RDI) != (FlightDynamicsManager *)-196i64 )
            {
              memset_0(&FlightDynamicsManager->m_fdCameraData[_RDI].offsetEntityNum + 1, 0, 0x116ui64);
              *(_WORD *)&FlightDynamicsManager->m_fdCameraData[_RDI].resetParams = 257;
              FlightDynamicsManager->m_fdCameraData[_RDI].offsetEntityNum = 2047;
              FlightDynamicsManager->m_fdCameraData[_RDI].angleDelta.v[3] = 1.0;
              FlightDynamicsManager->m_fdCameraData[_RDI].contentsOfdVarQuat.v[3] = 1.0;
              FlightDynamicsManager->m_fdCameraData[_RDI].prevViewQuat.v[3] = 1.0;
              FlightDynamicsManager->m_fdCameraData[_RDI].localFBWquat.v[3] = 1.0;
            }
          }
        }
        v64 = CG_GetLocalClientGlobals((const LocalClientNum_t)_RDI);
        __asm { vmovaps xmm3, xmm6; frameTime }
        v19 = CG_FlightDynamicsCameraUpdate(v64, v15, ClientDef, *(float *)&_XMM3, p_inOutRefDefa);
        CG_Camera_Vehicle_FlightDynamics_ApplyNoiseDelta((LocalClientNum_t)_RDI, v15, p_inOutRefDefa);
      }
    }
    else
    {
      if ( ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_BRADLEY )
      {
        v78 = CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_BRADLEY);
        __asm { vmovaps xmm2, xmm6; frameTime }
        CG_Camera_Vehicles_Update_TurretCam(v78, v15, *(float *)&_XMM2, p_inOutRefDefa);
        v19 = 1;
        goto LABEL_93;
      }
      if ( ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
      {
        v76 = CG_Camera_GetData((LocalClientNum_t)_RDI, CAMERA_WHEELSON);
        __asm { vmovaps xmm2, xmm6; frameTime }
        CG_Camera_Vehicles_Update_TurretCam(v76, v15, *(float *)&_XMM2, p_inOutRefDefa);
        v19 = 1;
        goto LABEL_93;
      }
    }
LABEL_92:
    if ( !v19 )
    {
LABEL_94:
      result = v19;
      goto LABEL_95;
    }
LABEL_93:
    CG_Camera_Vehicles_UpdateAudioOrigin((LocalClientNum_t)_RDI, v15, inOutRefDef);
    v83 = (__int64)LocalClientGlobals;
    v84 = CgHandler::getHandler(LocalClientGlobals->localClientNum);
    IsClientVehicleCamera = BG_IsClientVehicleCamera((const playerState_s *)(v83 + 8), v84);
    CG_Camera_PostUpdate((LocalClientNum_t)_RDI, inOutRefDef, 1, IsClientVehicleCamera);
    goto LABEL_94;
  }
  result = 1i64;
LABEL_96:
  __asm { vmovaps xmm9, [rsp+178h+var_78] }
  return result;
}

/*
==============
CG_Camera_Vehicles_UpdateAudioOrigin
==============
*/
void CG_Camera_Vehicles_UpdateAudioOrigin(LocalClientNum_t localClientNum, const centity_t *cent, const RefdefView *refdef)
{
  CgVehicleSystem *VehicleSystem; 
  const DObj *EntityDObj; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v46; 
  void *retaddr; 

  if ( cent )
  {
    _RAX = &retaddr;
    v46 = -2i64;
    __asm
    {
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vmovaps xmmword ptr [rax-58h], xmm8
    }
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1714, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    _RSI = CgVehicleSystem::GetClient(VehicleSystem, cent);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1716, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
      __debugbreak();
    EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, cent);
    if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
    {
      DObjGetModel(EntityDObj, 0);
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
        vaddss  xmm6, xmm0, dword ptr [rdi+2Ch]
        vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
        vaddss  xmm7, xmm1, dword ptr [rdi+30h]
        vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
        vaddss  xmm8, xmm0, dword ptr [rdi+34h]
      }
      RefdefView_GetOrg(refdef, &outOrg);
      __asm
      {
        vsubss  xmm5, xmm6, dword ptr [rsp+0B8h+outOrg]
        vsubss  xmm6, xmm7, dword ptr [rsp+0B8h+outOrg+4]
        vsubss  xmm7, xmm8, dword ptr [rsp+0B8h+outOrg+8]
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm3, xmm2, xmm0
        vdivss  xmm4, xmm2, xmm1
        vmulss  xmm3, xmm3, cs:frac
        vmulss  xmm1, xmm5, xmm4
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm2, xmm0, dword ptr [rsp+0B8h+outOrg]
        vmovss  dword ptr [rsi+1FCh], xmm2
        vmulss  xmm1, xmm6, xmm4
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm2, xmm0, dword ptr [rsp+0B8h+outOrg+4]
        vmovss  dword ptr [rsi+200h], xmm2
        vmulss  xmm1, xmm7, xmm4
        vmulss  xmm0, xmm1, xmm3
        vaddss  xmm2, xmm0, dword ptr [rsp+0B8h+outOrg+8]
        vmovss  dword ptr [rsi+204h], xmm2
      }
      memset(&outOrg, 0, sizeof(outOrg));
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
    __asm
    {
      vmovaps xmm6, [rsp+0B8h+var_38]
      vmovaps xmm7, [rsp+0B8h+var_48]
      vmovaps xmm8, [rsp+0B8h+var_58]
    }
  }
}

/*
==============
CG_Camera_Vehicles_Update_Orbit
==============
*/
void CG_Camera_Vehicles_Update_Orbit(const CameraDef *camDef, ClientCameraData *camData, const centity_t *vehEnt, VehicleClient *const vehicleClient, float frameTime, RefdefView *inOutRefDef)
{
  LocalClientNum_t localClientNum; 
  CgVehicleSystem *VehicleSystem; 
  BgVehiclePhysicsManager *v19; 
  const char *name; 
  const VehicleDef *ClientDef; 
  float v24; 
  char v29; 
  bool v30; 
  bool firstTime; 
  bool initialReturn; 
  BgVehiclePhysics_vtbl *v76; 
  float v85; 
  LocalClientNum_t v99; 
  bool IsGamepadEnabled; 
  int ControllerFromClient; 
  char v102; 
  bool VehicleCameraAutoRecenterEnabledGamepad; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v124; 
  __int32 v125; 
  const dvar_t *v144; 
  BOOL v153; 
  bool v154; 
  cg_t *LocalClientGlobals; 
  vec3_t vec; 
  vec3_t retSpherical; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outVelLs; 
  vec3_t orbitOrg; 
  char v192; 
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
  }
  _RDI = camData;
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2498, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !camDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2499, ASSERT_TYPE_ASSERT, "( camDef )", "We need a camera definition for the vehicle") )
    __debugbreak();
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2500, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleClient->physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2501, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleClient->physicsId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleClient->physicsId )") )
    __debugbreak();
  localClientNum = _RDI->localClientNum;
  _RDI->camDef = camDef;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v19 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  _RSI = BgVehiclePhysicsManager::GetObjectById(v19, vehicleClient->physicsId);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2508, ASSERT_TYPE_ASSERT, "( vehObj )", "We need a vehicle object for this camera") )
    __debugbreak();
  if ( camDef->profile != CAMERAPROFILE_ORBIT )
  {
    name = camDef->name;
    ClientDef = CgVehicleSystem::GetClientDef(vehicleClient);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2511, ASSERT_TYPE_ASSERT, "( camDef->profile == CAMERAPROFILE_ORBIT )", "Vehicle '%s' should use an Orbit camera profile. Currently '%s'", ClientDef->name, name) )
      __debugbreak();
  }
  v30 = _RDI->camDef == NULL;
  __asm { vmovsd  xmm0, qword ptr [rsi+198h] }
  v24 = _RSI->m_transform.m[3].v[2];
  __asm { vmovsd  qword ptr [rbp+50h+orbitOrg], xmm0 }
  orbitOrg.v[2] = v24;
  if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2088, ASSERT_TYPE_ASSERT, "(camData.camDef)", (const char *)&queryFormat, "camData.camDef") )
    __debugbreak();
  AxisToAngles((const tmat33_t<vec3_t> *)&_RSI->m_transform, &angles);
  _RAX = _RDI->camDef;
  __asm
  {
    vmovss  xmm10, cs:__real@3a83126f
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm10, dword ptr [rax+0CCh]
  }
  if ( v29 )
  {
    if ( BgVehiclePhysics::IsDynamic(_RSI) )
    {
      *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(_RSI);
      __asm { vcomiss xmm0, cs:__real@3e4ccccd }
      if ( !(v29 | v30) )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rsi+1A8h]
          vmovss  xmm5, dword ptr [rsi+1A4h]
          vmulss  xmm1, xmm6, dword ptr [rsi+178h]
          vmulss  xmm0, xmm5, dword ptr [rsi+174h]
          vaddss  xmm2, xmm1, xmm0
          vcomiss xmm2, xmm7
        }
        if ( !(v29 | v30) && _RDI->orbitCamData.cameraReturn )
        {
          __asm { vmovss  xmm4, dword ptr [rsi+1ACh] }
          _RAX = _RDI->camDef;
          __asm
          {
            vmulss  xmm1, xmm5, xmm5
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm4
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm3, xmm2, xmm2
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm8, xmm0
            vdivss  xmm2, xmm8, xmm0
            vmulss  xmm0, xmm5, xmm2
            vmulss  xmm1, xmm6, xmm2
            vmovss  dword ptr [rsp+150h+vec], xmm0
            vmulss  xmm0, xmm4, xmm2
            vmovss  dword ptr [rsp+150h+vec+4], xmm1
            vmovss  dword ptr [rsp+150h+vec+8], xmm0
            vmovss  xmm0, dword ptr [rax+0CCh]; val
            vmovaps xmm2, xmm8; max
            vxorps  xmm1, xmm1, xmm1; min
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm { vmovaps xmm6, xmm0 }
          AngleVectors(&angles, &forward, NULL, NULL);
          __asm
          {
            vmulss  xmm3, xmm6, dword ptr [rsp+150h+vec]
            vsubss  xmm5, xmm8, xmm6
            vmulss  xmm4, xmm5, dword ptr [rbp+50h+forward]
            vaddss  xmm1, xmm4, xmm3
            vmulss  xmm3, xmm5, dword ptr [rbp+50h+forward+4]
            vmovss  dword ptr [rsp+150h+vec], xmm1
            vmulss  xmm1, xmm6, dword ptr [rsp+150h+vec+4]
            vaddss  xmm2, xmm3, xmm1
            vmulss  xmm3, xmm5, dword ptr [rbp+50h+forward+8]
            vmovss  dword ptr [rsp+150h+vec+4], xmm2
            vmulss  xmm2, xmm6, dword ptr [rsp+150h+vec+8]
            vaddss  xmm0, xmm3, xmm2
            vmovss  dword ptr [rsp+150h+vec+8], xmm0
          }
          vectoangles(&vec, &angles);
        }
      }
    }
  }
  _R14 = _RDI->camDef;
  firstTime = CG_Camera_InitializeValues(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+150h+angles+4]
    vmovss  xmm11, cs:__real@43340000
  }
  if ( firstTime )
  {
    _RDI->orbitCamData.sphericalCoords.v[2] = _R14->orbit.initialPolar;
    __asm
    {
      vsubss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rdi+14h], xmm0
      vmovss  dword ptr [rdi+48h], xmm2
    }
    _RDI->orbitCamData.disableEyePosLocal = 1;
    _RDI->orbitCamData.cameraReturnDot = 1;
    initialReturn = _R14->orbit.initialReturn;
    _RDI->orbitCamData.cameraReturn = initialReturn;
  }
  else
  {
    initialReturn = _RDI->orbitCamData.cameraReturn;
  }
  __asm { vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  if ( !initialReturn || _RDI->orbitCamData.inputUpdated )
  {
    __asm { vmovsd  xmm0, qword ptr [rdi+10h] }
    v85 = _RDI->orbitCamData.sphericalCoords.v[2];
    __asm { vmovsd  qword ptr [rsp+150h+retSpherical], xmm0 }
    retSpherical.v[2] = v85;
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r14+84h]
      vmovaps xmm0, xmm2; angle
      vmovss  dword ptr [rsp+150h+retSpherical+8], xmm1
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vaddss  xmm6, xmm0, xmm11
      vmovss  xmm0, dword ptr [rsp+150h+angles+4]; angle
    }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm { vsubss  xmm2, xmm6, dword ptr [rdi+14h] }
    v76 = _RSI->__vftable;
    __asm
    {
      vsubss  xmm3, xmm0, xmm11
      vsubss  xmm0, xmm3, dword ptr [rdi+14h]
      vandps  xmm0, xmm0, xmm9
      vandps  xmm2, xmm2, xmm9
      vcmpltss xmm2, xmm0, xmm2
      vblendvps xmm0, xmm6, xmm3, xmm2
      vmovss  dword ptr [rsp+150h+retSpherical+4], xmm0
    }
    *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))v76->GetCameraRangeAddition)(_RSI);
    __asm { vmovaps xmm6, xmm0 }
    _GetRange(&_R14->orbit);
    __asm
    {
      vaddss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rsp+150h+retSpherical], xmm1
    }
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))_RSI->GetCameraRangeAddition)(_RSI);
  __asm { vmovaps xmm6, xmm0 }
  _GetRange(&_R14->orbit);
  __asm
  {
    vaddss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rdi+10h], xmm1
  }
  _RDI->traceMask = 2705;
  _RDI->traceIgnoreEntity = vehEnt->nextState.number;
  _RDI->traceWorld = 3 * _RDI->localClientNum + 2;
  _RDI->orbitCamData.cameraReturnBasedOnGas = _R14->orbit.cameraReturnOnGas;
  if ( !_RSI->SupportsFeature(_RSI, VPFEAT_GROUND_VEHICLE) )
    goto LABEL_42;
  _RBX = DCONST_DVARFLT_bg_vehCamLerpSpeedAir;
  if ( !DCONST_DVARFLT_bg_vehCamLerpSpeedAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamLerpSpeedAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  if ( _RSI->IsInAir(_RSI) )
  {
    __asm
    {
      vcomiss xmm6, xmm10
      vmovss  xmm0, dword ptr [rsi+0C88h]
      vdivss  xmm0, xmm0, cs:dword_145068860; val
      vmovaps xmm2, xmm8; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm8, xmm0
      vmulss  xmm2, xmm1, dword ptr [r14+70h]
      vmulss  xmm0, xmm0, xmm6
      vaddss  xmm3, xmm2, xmm0
    }
  }
  else
  {
LABEL_42:
    __asm { vmovss  xmm3, dword ptr [r14+70h] }
  }
  __asm { vmovss  dword ptr [rdi+74h], xmm3 }
  if ( _RSI->m_vehicleAnimProfile )
  {
    __asm { vmovss  xmm0, cs:__real@40a00000 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_bg_vehCamAtvDisplFrom;
    if ( !DCONST_DVARFLT_bg_vehCamAtvDisplFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAtvDisplFrom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  v99 = _RDI->localClientNum;
  __asm { vmovss  dword ptr [rdi+164h], xmm0 }
  IsGamepadEnabled = CL_Input_IsGamepadEnabled(v99);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(_RDI->localClientNum);
  if ( IsGamepadEnabled )
    VehicleCameraAutoRecenterEnabledGamepad = GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad(ControllerFromClient);
  else
    VehicleCameraAutoRecenterEnabledGamepad = GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard(ControllerFromClient);
  _RDI->orbitCamData.autoRecenterEnabled = VehicleCameraAutoRecenterEnabledGamepad;
  _RDI->orbitCamData.yawInverted = 0;
  __asm { vcomiss xmm10, dword ptr [r14+0D4h] }
  if ( v102 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(_RSI, &_RSI->m_linearVelocityWs, &outVelLs);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+50h+outVelLs]
      vmovss  xmm1, dword ptr [rbp+50h+outVelLs+4]
      vmulss  xmm2, xmm1, xmm1
      vdivss  xmm1, xmm8, dword ptr [r14+0D4h]
      vmulss  xmm3, xmm0, xmm0
      vaddss  xmm0, xmm3, xmm2
      vsqrtss xmm4, xmm0, xmm0
      vmulss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rdi+60h], xmm1
    }
  }
  _RBX = DCONST_DVARFLT_bg_vehCamLerpSpeedDrift;
  if ( !DCONST_DVARFLT_bg_vehCamLerpSpeedDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamLerpSpeedDrift") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm11, dword ptr [rbx+28h]
    vcomiss xmm11, xmm10
  }
  if ( !(v29 | v30) && !_RSI->IsInAir(_RSI) && _RSI->SupportsFeature(_RSI, VPFEAT_GROUND_VEHICLE) )
  {
    __asm
    {
      vcomiss xmm10, dword ptr [r14+0D4h]
      vmovaps xmm6, xmm8
      vxorps  xmm1, xmm1, xmm1; min
    }
    if ( _RSI->m_vehicleType == VEH_CAR )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0AB8h]
        vdivss  xmm0, xmm0, dword ptr [rsi+0A98h]; val
        vmovaps xmm2, xmm8; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vsubss  xmm1, xmm8, xmm0 }
    }
    __asm
    {
      vsubss  xmm0, xmm8, xmm1
      vmulss  xmm2, xmm0, xmm6
      vmulss  xmm1, xmm1, xmm11
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rdi+60h], xmm2
    }
  }
  *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeedPlane(_RSI);
  __asm { vmovss  dword ptr [rdi+98h], xmm0 }
  m_vehicleAnimProfile = _RSI->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    __asm { vmovss  xmm6, cs:__real@42b00000 }
    goto LABEL_72;
  }
  v124 = m_vehicleAnimProfile - 1;
  if ( !v124 )
  {
    __asm { vmovss  xmm6, cs:__real@42a80000 }
    goto LABEL_72;
  }
  v125 = v124 - 10;
  if ( !v125 )
  {
    __asm { vmovss  xmm6, cs:__real@42a30000 }
    goto LABEL_72;
  }
  if ( v125 == 8 )
  {
    __asm { vmovss  xmm6, cs:__real@42a20000 }
LABEL_72:
    __asm
    {
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm3, xmm0, dword ptr [rsi+190h]
      vmovss  xmm1, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm2, xmm1, dword ptr [rsi+18Ch]
      vmovss  xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vmulss  xmm1, xmm0, dword ptr [rsi+194h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm0, xmm4, xmm1; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm8; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm8, xmm0
      vmulss  xmm2, xmm1, dword ptr [rsp+150h+retSpherical+8]
      vmulss  xmm0, xmm0, xmm6
      vaddss  xmm0, xmm2, xmm0
    }
    goto LABEL_73;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
LABEL_73:
  __asm { vmovss  dword ptr [rdi+9Ch], xmm0 }
  v144 = DCONST_DVARINT_bg_vehCamNoiseSpace;
  if ( !DCONST_DVARINT_bg_vehCamNoiseSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamNoiseSpace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v144);
  _RDI->vehicleData.orbitNoise = v144->current.integer == 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+178h]
    vmovss  xmm1, dword ptr [rsi+174h]
    vmulss  xmm2, xmm1, dword ptr [rsi+1A4h]
    vmulss  xmm3, xmm0, dword ptr [rsi+1A8h]
    vmovss  xmm0, dword ptr [rsi+17Ch]
    vmulss  xmm1, xmm0, dword ptr [rsi+1ACh]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+6Ch], xmm2
  }
  *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))_RSI->GetCameraReturnFactor)(_RSI);
  __asm { vmovss  dword ptr [rdi+70h], xmm0 }
  v153 = Com_BitCheckAssert(_RSI->m_controls.playerEnabledBits, 2, 4);
  v154 = Com_BitCheckAssert(_RSI->m_controls.externalEnabledBits, 2, 4);
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+0D0h]
    vmovss  xmm4, dword ptr [rsi+0F0h]
  }
  switch ( v153 + 3 * v154 )
  {
    case 1:
      __asm { vmovaps xmm7, xmm3 }
      break;
    case 3:
      __asm { vmovaps xmm7, xmm4 }
      break;
    case 4:
      if ( _RSI->m_controls.valuePolicy[2] )
      {
        switch ( _RSI->m_controls.valuePolicy[2] )
        {
          case VP_MINABS:
            __asm
            {
              vandps  xmm1, xmm3, xmm9
              vandps  xmm0, xmm4, xmm9
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm7, xmm4, xmm3, xmm1
            }
            break;
          case VP_AVERAGE:
            __asm
            {
              vaddss  xmm0, xmm4, xmm3
              vmulss  xmm7, xmm0, cs:__real@3f000000
            }
            break;
          case VP_AVERAGE_WEIGHT_PLAYER:
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+118h]
              vsubss  xmm0, xmm8, xmm1
              vmulss  xmm2, xmm0, xmm4
              vmulss  xmm1, xmm3, xmm1
              vaddss  xmm7, xmm2, xmm1
            }
            break;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+118h]
              vsubss  xmm0, xmm8, xmm1
              vmulss  xmm2, xmm0, xmm3
              vmulss  xmm1, xmm4, xmm1
              vaddss  xmm7, xmm2, xmm1
            }
            break;
        }
      }
      else
      {
        __asm
        {
          vandps  xmm1, xmm3, xmm9
          vandps  xmm0, xmm4, xmm9
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm4, xmm3, xmm1
        }
      }
      break;
  }
  __asm
  {
    vandps  xmm7, xmm7, xmm9
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm0, cs:__real@3fc00000
    vaddss  xmm2, xmm1, xmm8
    vmovss  xmm1, [rbp+50h+frameTime]; frameTime
    vmovss  dword ptr [rdi+38h], xmm2
  }
  CG_Camera_Orbit_Step(_RDI, *(double *)&_XMM1, &orbitOrg, &angles, &retSpherical, firstTime, inOutRefDef, _RDI->camType);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)_RDI->localClientNum);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  __asm { vmovss  xmm1, [rbp+50h+frameTime]; frameTime }
  CG_Camera_Vehicles_PostUpdate_Orbit(_RDI, *(double *)&_XMM1, _RSI, inOutRefDef);
  _R11 = &v192;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_Camera_Vehicles_Update_RCPlane
==============
*/

void __fastcall CG_Camera_Vehicles_Update_RCPlane(ClientCameraData *camData, const centity_t *vehEnt, double frameTime, RefdefView *inOutRefDef)
{
  CgHandler *Handler; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  int physics_cycleCamButton; 
  __int64 v24; 
  const ClActiveClient *v25; 
  int CmdNumber; 
  int lastCmdTimeButton1; 
  const dvar_t *v98; 
  const dvar_t *v118; 
  const dvar_t *v119; 
  const dvar_t *v122; 
  const dvar_t *v125; 
  const dvar_t *v128; 
  const dvar_t *v129; 
  char v130; 
  const DObj *v131; 
  bool IsDobjValidForVehicle; 
  const centity_t *v152; 
  bool Bool_Internal_DebugName; 
  char v199; 
  bool v200; 
  __int64 v211; 
  BgVehiclePhysicsManager *v212; 
  BgVehiclePhysics *ObjectById; 
  float startSolidOffset; 
  bool physics_rcpCam1stAttachToTagPlayer; 
  usercmd_s ucmd; 
  vec3_t focusPoint; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t end; 
  vec3_t v245; 
  vec3_t v246; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  vec3_t v249; 
  vec3_t start; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 
  char v258; 
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
  }
  _R13 = inOutRefDef;
  __asm { vmovaps xmm14, xmm2 }
  _RSI = camData;
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1787, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  _R12 = CG_GetLocalClientGlobals((const LocalClientNum_t)_RSI->localClientNum);
  Handler = CgHandler::getHandler(_RSI->localClientNum);
  CG_GetPoseOrigin(&vehEnt->pose, &outOrigin);
  Handler->GetEntityAngles(Handler, vehEnt->nextState.number, &angles);
  AngleVectors(&angles, &forward, &right, &up);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)_RSI->localClientNum);
  *(_QWORD *)v245.v = VehicleSystem;
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1803, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehEnt);
  *(_QWORD *)v246.v = Client;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1805, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  _RDI = CgVehicleSystem::GetClientDef(Client);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1807, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( CG_Camera_InitializeValues(_RSI) )
  {
    _RSI->orbitCamData.camPerspectiveMode = _RDI->vehCam_UseGDT != 0;
    _RSI->orbitCamData.lastCmdTimeButton1 = 0;
  }
  _RSI->traceMask = 2705;
  physics_cycleCamButton = _RDI->vehiclePhysicsDef.physics_cycleCamButton;
  if ( physics_cycleCamButton )
  {
    v24 = 1i64 << ((unsigned __int8)physics_cycleCamButton - 1);
    v25 = ClActiveClient::GetClient((const LocalClientNum_t)_RSI->localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(v25);
    if ( CL_GetUserCmd(_RSI->localClientNum, CmdNumber, &ucmd) )
    {
      if ( ((int)v24 & ucmd.buttons) != 0 )
      {
        lastCmdTimeButton1 = _RSI->orbitCamData.lastCmdTimeButton1;
        if ( lastCmdTimeButton1 > ucmd.commandTime || ucmd.commandTime - lastCmdTimeButton1 > 1000 )
        {
          _RSI->orbitCamData.lastCmdTimeButton1 = ucmd.commandTime;
          _RSI->orbitCamData.camPerspectiveMode = (_RSI->orbitCamData.camPerspectiveMode + 1) % 2;
        }
      }
    }
    VehicleSystem = *(CgVehicleSystem **)v245.v;
  }
  if ( _RSI->orbitCamData.camPerspectiveMode == 1 )
  {
    _RDI = DCONST_DVARFLT_bg_rcp_cam3rd_focusX;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_focusX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_focusX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_rcp_cam3rd_focusZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_focusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_focusZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]
      vmulss  xmm1, xmm3, dword ptr [rbp+2A0h+up]
      vaddss  xmm4, xmm1, dword ptr [rbp+2A0h+outOrigin]
      vmulss  xmm0, xmm3, dword ptr [rbp+2A0h+up+4]
      vaddss  xmm5, xmm0, dword ptr [rbp+2A0h+outOrigin+4]
      vmulss  xmm2, xmm3, dword ptr [rbp+2A0h+up+8]
      vaddss  xmm3, xmm2, dword ptr [rbp+2A0h+outOrigin+8]
      vmulss  xmm1, xmm6, dword ptr [rbp+2A0h+forward]
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+2A0h+focusPoint], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+2A0h+forward+4]
      vaddss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbp+2A0h+focusPoint+4], xmm2
      vmulss  xmm1, xmm6, dword ptr [rbp+2A0h+forward+8]
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbp+2A0h+focusPoint+8], xmm2
    }
    _RDI = DCONST_DVARFLT_bg_rcp_cam3rd_eyeX;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_eyeX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_eyeX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm8, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_eyeZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm9, dword ptr [rdi+28h]
      vmulss  xmm1, xmm8, dword ptr [rbp+2A0h+forward]
      vaddss  xmm3, xmm1, dword ptr [rbp+2A0h+outOrigin]
      vmulss  xmm2, xmm8, dword ptr [rbp+2A0h+forward+4]
      vaddss  xmm4, xmm2, dword ptr [rbp+2A0h+outOrigin+4]
      vmulss  xmm1, xmm8, dword ptr [rbp+2A0h+forward+8]
      vaddss  xmm5, xmm1, dword ptr [rbp+2A0h+outOrigin+8]
      vmulss  xmm1, xmm9, dword ptr [rbp+2A0h+up]
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rbp+2A0h+end], xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+2A0h+up+4]
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rbp+2A0h+end+4], xmm2
      vmulss  xmm1, xmm9, dword ptr [rbp+2A0h+up+8]
      vaddss  xmm2, xmm1, xmm5
      vmovss  dword ptr [rbp+2A0h+end+8], xmm2
      vmulss  xmm1, xmm9, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, dword ptr [rbp+2A0h+outOrigin]
      vmovss  dword ptr [rbp+2A0h+start], xmm2
      vmulss  xmm1, xmm9, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, dword ptr [rbp+2A0h+outOrigin+4]
      vmovss  dword ptr [rbp+2A0h+start+4], xmm2
      vmulss  xmm1, xmm9, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
      vaddss  xmm2, xmm1, dword ptr [rbp+2A0h+outOrigin+8]
      vmovss  dword ptr [rbp+2A0h+start+8], xmm2
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+3A0h+startSolidOffset], xmm8
      vmovss  xmm1, cs:__real@41000000; collRadius
    }
    _R15 = &_RSI->curEyePos;
    if ( CG_Camera_Orbit_Trace(_RSI->traceWorld, *(double *)&_XMM1, _RSI->traceIgnoreEntity, &start, &end, _RSI->traceMask, startSolidOffset, &outPos) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2A0h+outPos]
        vmovss  dword ptr [r15], xmm0
        vmovss  xmm1, dword ptr [rbp+2A0h+outPos+4]
        vmovss  dword ptr [r15+4], xmm1
        vmovss  xmm0, dword ptr [rbp+2A0h+outPos+8]
        vmovss  dword ptr [r15+8], xmm0
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+2A0h+end]
        vsubss  xmm1, xmm0, dword ptr [r15]
        vmovss  dword ptr [rbp+2A0h+vec], xmm1
        vmovss  xmm0, dword ptr [rbp+2A0h+end+4]
        vsubss  xmm1, xmm0, dword ptr [r15+4]
        vmovss  dword ptr [rbp+2A0h+vec+4], xmm1
        vmovss  xmm0, dword ptr [rbp+2A0h+end+8]
        vsubss  xmm1, xmm0, dword ptr [r15+8]
        vmovss  dword ptr [rbp+2A0h+vec+8], xmm1
        vmovss  xmm2, dword ptr [rbp+2A0h+focusPoint]
        vsubss  xmm5, xmm2, dword ptr [r15]
        vmovss  xmm0, dword ptr [rbp+2A0h+focusPoint+4]
        vsubss  xmm6, xmm0, dword ptr [r15+4]
        vmovss  xmm1, dword ptr [rbp+2A0h+focusPoint+8]
        vsubss  xmm7, xmm1, dword ptr [r15+8]
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm0, xmm5, xmm5
        vaddss  xmm3, xmm2, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm3, xmm1
        vsqrtss xmm4, xmm2, xmm2
        vcmpless xmm0, xmm4, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm1, xmm4, xmm2, xmm0
        vmovss  dword ptr [rbp+2A0h+var_200], xmm1
        vdivss  xmm2, xmm2, xmm1
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rbp+2A0h+var_200], xmm0
        vmulss  xmm1, xmm2, xmm6
        vmovss  dword ptr [rbp+2A0h+var_200+4], xmm1
        vmulss  xmm0, xmm2, xmm7
        vmovss  dword ptr [rbp+2A0h+var_200+8], xmm0
      }
      BG_AxisFromForward(&v245, &identityMatrix33.m[2], &outAxis);
      AxisTranspose(&outAxis, &out);
      AxisTransformVec3(&out, &vec, &v249);
      AxisTransformVec3(&out, &_RSI->curEyePos, &v246);
      v98 = DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed;
      if ( !DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_lerpSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v98);
      __asm
      {
        vmulss  xmm3, xmm14, dword ptr [rdi+28h]
        vmulss  xmm4, xmm14, dword ptr [rdi+2Ch]
        vmulss  xmm5, xmm14, dword ptr [rdi+30h]
        vmulss  xmm2, xmm3, dword ptr [rbp+2A0h+var_1C0]
        vaddss  xmm2, xmm2, dword ptr [rbp+2A0h+var_1F0]
        vmovss  dword ptr [rbp+2A0h+var_1F0], xmm2
        vmulss  xmm3, xmm4, dword ptr [rbp+2A0h+var_1C0+4]
        vaddss  xmm2, xmm3, dword ptr [rbp+2A0h+var_1F0+4]
        vmovss  dword ptr [rbp+2A0h+var_1F0+4], xmm2
        vmulss  xmm3, xmm5, dword ptr [rbp+2A0h+var_1C0+8]
        vaddss  xmm2, xmm3, dword ptr [rbp+2A0h+var_1F0+8]
        vmovss  dword ptr [rbp+2A0h+var_1F0+8], xmm2
      }
      AxisTransformVec3(&outAxis, &v246, &_RSI->curEyePos);
    }
    BG_Camera_AxisFromEyeFocus(&_RSI->curEyePos, &focusPoint, &identityMatrix33.m[2], &_R13->axis);
    RefdefView_SetOrg(_R13, &_RSI->curEyePos);
    AxisToAngles(&_R13->axis, &_R12->refdefViewAngles);
    _RDI = DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_rollSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+28h]
      vcomiss xmm3, xmm8
    }
    if ( !(v199 | v200) )
    {
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+94h]
        vmovss  xmm0, dword ptr [rbp+2A0h+angles+8]
        vsubss  xmm1, xmm0, xmm4
        vmulss  xmm2, xmm1, xmm14
        vmulss  xmm3, xmm2, xmm3
        vaddss  xmm0, xmm3, xmm4; val
        vmovss  xmm2, cs:__real@42a00000; max
        vmovss  xmm1, cs:__real@c2a00000; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  dword ptr [rsi+94h], xmm0
        vmovss  dword ptr [r12+178C8h], xmm0
      }
    }
    memset(&outPos, 0, sizeof(outPos));
    goto LABEL_114;
  }
  *(_QWORD *)end.v = CG_Vehicle_GetEntityDObj(VehicleSystem, vehEnt);
  v118 = DCONST_DVARBOOL_bg_rcpUseDvars;
  *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    v118 = *(const dvar_t **)focusPoint.v;
  }
  Dvar_CheckFrontendServerThread(v118);
  if ( *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64) )
  {
    v119 = DCONST_DVARFLT_bg_rcp_cam1st_offsZ;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsZ )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsZ") )
        __debugbreak();
      v119 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v119);
    _RAX = *(_QWORD *)focusPoint.v;
    __asm { vmovss  xmm13, dword ptr [rax+28h] }
    v122 = DCONST_DVARFLT_bg_rcp_cam1st_offsY;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsY;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsY )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsY") )
        __debugbreak();
      v122 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v122);
    _RAX = *(_QWORD *)focusPoint.v;
    __asm { vmovss  xmm12, dword ptr [rax+28h] }
    v125 = DCONST_DVARFLT_bg_rcp_cam1st_offsX;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsX;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsX") )
        __debugbreak();
      v125 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v125);
    _RAX = *(_QWORD *)focusPoint.v;
    __asm { vmovss  xmm6, dword ptr [rax+28h] }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+0C14h]
      vmovss  xmm12, dword ptr [rdi+0C18h]
      vmovss  xmm13, dword ptr [rdi+0C1Ch]
    }
  }
  physics_rcpCam1stAttachToTagPlayer = _RDI->vehiclePhysicsDef.physics_rcpCam1stAttachToTagPlayer;
  v128 = DCONST_DVARBOOL_bg_rcpUseDvars;
  *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    v128 = *(const dvar_t **)focusPoint.v;
  }
  Dvar_CheckFrontendServerThread(v128);
  if ( *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64) )
  {
    v129 = DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer;
    *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer;
    if ( !DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_attachToTagPlayer") )
        __debugbreak();
      v129 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v129);
    v130 = *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64);
    physics_rcpCam1stAttachToTagPlayer = v130;
  }
  else
  {
    v130 = physics_rcpCam1stAttachToTagPlayer;
  }
  if ( !v130 )
  {
    _RBX = &_RSI->curEyePos;
    __asm
    {
      vmovss  xmm11, dword ptr [rbp+2A0h+forward+4]
      vmulss  xmm0, xmm6, xmm11
      vaddss  xmm1, xmm0, dword ptr [rbp+2A0h+outOrigin+4]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm10, dword ptr [rbp+2A0h+forward+8]
      vmulss  xmm0, xmm6, xmm10
      vaddss  xmm1, xmm0, dword ptr [rbp+2A0h+outOrigin+8]
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm8, dword ptr [rbp+2A0h+forward]
      vmulss  xmm0, xmm6, xmm8
      vaddss  xmm2, xmm0, dword ptr [rbp+2A0h+outOrigin]
      vmovss  xmm9, dword ptr [rbp+2A0h+right]
      vmulss  xmm1, xmm12, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmovss  dword ptr [rbx], xmm3
      vmovss  xmm7, dword ptr [rbp+2A0h+right+4]
      vmulss  xmm0, xmm12, xmm7
      vaddss  xmm1, xmm0, dword ptr [rsi+144h]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm6, dword ptr [rbp+2A0h+right+8]
      vmulss  xmm0, xmm12, xmm6
      vaddss  xmm1, xmm0, dword ptr [rsi+148h]
      vmovss  dword ptr [rbx+8], xmm1
      vmovss  xmm5, dword ptr [rbp+2A0h+up]
      vmulss  xmm0, xmm13, xmm5
      vaddss  xmm1, xmm0, xmm3
      vmovss  dword ptr [rbx], xmm1
      vmovss  xmm4, dword ptr [rbp+2A0h+up+4]
      vmulss  xmm0, xmm13, xmm4
      vaddss  xmm1, xmm0, dword ptr [rsi+144h]
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm3, dword ptr [rbp+2A0h+up+8]
      vmulss  xmm0, xmm13, xmm3
      vaddss  xmm1, xmm0, dword ptr [rsi+148h]
      vmovss  dword ptr [rbx+8], xmm1
    }
    _R14 = &_R13->axis;
    __asm
    {
      vmovss  dword ptr [r14], xmm8
      vmovss  dword ptr [r14+4], xmm11
      vmovss  dword ptr [r14+8], xmm10
      vmovss  xmm2, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm9, xmm2
      vmovss  dword ptr [r13+20h], xmm0
      vxorps  xmm1, xmm7, xmm2
      vmovss  dword ptr [r13+24h], xmm1
      vxorps  xmm0, xmm6, xmm2
      vmovss  dword ptr [r13+28h], xmm0
      vmovss  dword ptr [r13+2Ch], xmm5
      vmovss  dword ptr [r13+30h], xmm4
      vmovss  dword ptr [r13+34h], xmm3
    }
    goto LABEL_89;
  }
  v131 = *(const DObj **)end.v;
  if ( CgVehicleSystem::IsDobjValidForVehicle(*(const DObj **)end.v) )
    CG_DObjGetWorldTagPos(&vehEnt->pose, v131, scr_const.tag_player, &outPos);
  else
    CG_GetPoseOrigin(&vehEnt->pose, &outPos);
  _RBX = &_RSI->curEyePos;
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rbp+2A0h+forward+4]
    vaddss  xmm1, xmm0, dword ptr [rbp+2A0h+outPos+4]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm2, xmm6, dword ptr [rbp+2A0h+forward+8]
    vaddss  xmm0, xmm2, dword ptr [rbp+2A0h+outPos+8]
    vmovss  dword ptr [rbx+8], xmm0
    vmulss  xmm1, xmm6, dword ptr [rbp+2A0h+forward]
    vaddss  xmm2, xmm1, dword ptr [rbp+2A0h+outPos]
    vmulss  xmm0, xmm12, dword ptr [rbp+2A0h+right]
    vaddss  xmm3, xmm2, xmm0
    vmovss  dword ptr [rbx], xmm3
    vmulss  xmm0, xmm12, dword ptr [rbp+2A0h+right+4]
    vaddss  xmm1, xmm0, dword ptr [rsi+144h]
    vmovss  dword ptr [rbx+4], xmm1
    vmulss  xmm0, xmm12, dword ptr [rbp+2A0h+right+8]
    vaddss  xmm1, xmm0, dword ptr [rsi+148h]
    vmovss  dword ptr [rbx+8], xmm1
    vmulss  xmm0, xmm13, dword ptr [rbp+2A0h+up]
    vaddss  xmm1, xmm0, xmm3
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm2, xmm13, dword ptr [rbp+2A0h+up+4]
    vaddss  xmm0, xmm2, dword ptr [rsi+144h]
    vmovss  dword ptr [rbx+4], xmm0
    vmulss  xmm1, xmm13, dword ptr [rbp+2A0h+up+8]
    vaddss  xmm2, xmm1, dword ptr [rsi+148h]
    vmovss  dword ptr [rbx+8], xmm2
  }
  IsDobjValidForVehicle = CgVehicleSystem::IsDobjValidForVehicle(v131);
  v152 = vehEnt;
  if ( !IsDobjValidForVehicle )
    goto LABEL_86;
  if ( !CG_DObjGetWorldTagMatrix(&vehEnt->pose, v131, scr_const.tag_player, &outAxis, &end) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1966, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RC Plane has no bone: tag_player, but attaching camera to tag_player is enabled!") )
      __debugbreak();
    v152 = vehEnt;
LABEL_86:
    CG_GetPoseOrigin(&v152->pose, &end);
  }
  AxisToAngles(&outAxis, &focusPoint);
  AngleVectors(&focusPoint, &v249, &vec, &start);
  _R14 = &_R13->axis;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+2A0h+var_1C0]
    vmovss  dword ptr [r14], xmm0
    vmovss  xmm1, dword ptr [rbp+2A0h+var_1C0+4]
    vmovss  dword ptr [r14+4], xmm1
    vmovss  xmm0, dword ptr [rbp+2A0h+var_1C0+8]
    vmovss  dword ptr [r14+8], xmm0
    vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000
    vmovss  xmm0, dword ptr [rbp+2A0h+vec]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [r13+20h], xmm1
    vmovss  xmm2, dword ptr [rbp+2A0h+vec+4]
    vxorps  xmm0, xmm2, xmm3
    vmovss  dword ptr [r13+24h], xmm0
    vmovss  xmm1, dword ptr [rbp+2A0h+vec+8]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [r13+28h], xmm2
    vmovss  xmm0, dword ptr [rbp+2A0h+start]
    vmovss  dword ptr [r13+2Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+2A0h+start+4]
    vmovss  dword ptr [r13+30h], xmm1
    vmovss  xmm0, dword ptr [rbp+2A0h+start+8]
    vmovss  dword ptr [r13+34h], xmm0
  }
LABEL_89:
  RefdefView_SetOrg(_R13, _RBX);
  AxisToAngles(_R14, &_R12->refdefViewAngles);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm8, xmm8, xmm8
  }
  if ( physics_rcpCam1stAttachToTagPlayer )
  {
    AnglesToAxis(&angles, &out);
    MatrixTranspose(&out, &in2);
    MatrixMultiply(&outAxis, &in2, &axis);
    AxisToAngles(&axis, &v249);
    __asm { vmovss  xmm8, dword ptr [rbp+2A0h+var_1C0+8] }
  }
  Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars");
  v199 = 0;
  v200 = !Bool_Internal_DebugName;
  if ( Bool_Internal_DebugName )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_rollSpeed, "bg_rcp_cam1st_rollSpeed");
    __asm { vmovaps xmm6, xmm0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_rollPercentage, "bg_rcp_cam1st_rollPercentage");
    __asm { vmovaps xmm1, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+2A4h]
      vmovss  xmm1, dword ptr [rdi+2A8h]
    }
  }
  __asm { vcomiss xmm6, xmm7 }
  if ( !(v199 | v200) )
    goto LABEL_96;
  __asm { vucomiss xmm1, cs:__real@3f800000 }
  if ( !v200 )
  {
LABEL_96:
    __asm
    {
      vmulss  xmm3, xmm1, dword ptr [rbp+2A0h+angles+8]
      vmovss  xmm1, dword ptr [rsi+94h]
      vsubss  xmm2, xmm3, xmm1
      vucomiss xmm6, xmm7
    }
    if ( v200 )
    {
      __asm
      {
        vaddss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsi+94h], xmm0
        vaddss  xmm0, xmm0, xmm8
      }
    }
    else
    {
      __asm
      {
        vmulss  xmm0, xmm2, xmm14
        vmulss  xmm4, xmm0, xmm6
        vaddss  xmm0, xmm1, xmm4
        vcomiss xmm2, xmm7
      }
      if ( v199 | v200 )
        __asm { vmaxss  xmm1, xmm0, xmm3 }
      else
        __asm { vminss  xmm1, xmm0, xmm3 }
      __asm
      {
        vmovss  dword ptr [rsi+94h], xmm1
        vaddss  xmm0, xmm1, xmm8
      }
    }
    __asm { vmovss  dword ptr [r12+178C8h], xmm0 }
  }
  v211 = *(_QWORD *)v246.v;
  if ( BGVehicles::PhysicsIsValid(*(_DWORD *)(*(_QWORD *)v246.v + 584i64)) )
  {
    v212 = (BgVehiclePhysicsManager *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v245.v + 368i64))(*(_QWORD *)v245.v);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v212, *(_DWORD *)(v211 + 584));
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2054, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    *(double *)&_XMM0 = BgVehiclePhysics::GetNormalSpeed(ObjectById);
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax+4; clipMap_t cm
      vsubss  xmm4, xmm1, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin+4; clipMap_t cm
      vmovss  xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMax; clipMap_t cm
      vsubss  xmm3, xmm2, dword ptr cs:?cm@@3UclipMap_t@@A.broadphaseMin; clipMap_t cm
      vmaxss  xmm1, xmm4, xmm3
      vcvttss2si ebx, xmm1
    }
    if ( _EBX <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2060, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
      __debugbreak();
    *(double *)&_XMM0 = Physics_GetPerlinNoise2dValue(13, _EBX, _R12->time % _EBX, _R12->time / _EBX % _EBX);
    __asm { vmulss  xmm7, xmm0, xmm6 }
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_noisePitchScale, "bg_rcp_cam1st_noisePitchScale");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_noiseRollScale, "bg_rcp_cam1st_noiseRollScale");
      __asm { vmovaps xmm2, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+2A0h]
        vmovss  xmm2, dword ptr [rdi+29Ch]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm6, xmm7
      vaddss  xmm1, xmm0, dword ptr [r12+178C0h]
      vmovss  dword ptr [r12+178C0h], xmm1
      vmulss  xmm0, xmm2, xmm7
      vaddss  xmm1, xmm0, dword ptr [r12+178C8h]
      vmovss  dword ptr [r12+178C8h], xmm1
    }
  }
LABEL_114:
  _R11 = &v258;
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
  }
}

/*
==============
CG_Camera_Vehicles_Update_TurretCam
==============
*/

void __fastcall CG_Camera_Vehicles_Update_TurretCam(ClientCameraData *camData, const centity_t *vehEnt, double frameTime, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  bool v12; 
  int traceMask; 
  const VehicleDef *ClientDef; 
  float v19; 
  float fmt; 
  BGTurretVehicleCamInfo camInfo; 
  vec3_t outEyePos; 

  __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
  _RSI = vehEnt;
  __asm { vmovaps xmm6, xmm2 }
  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1745, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)camData->localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1750, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, _RSI);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1752, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  CG_Camera_InitializeValues(camData);
  camData->traceMask = 2705;
  RefdefView_GetOrg(inOutRefDef, &camInfo.eyePos);
  MatrixCopy33(&inOutRefDef->axis, &camInfo.eyeView);
  v12 = LocalClientGlobals->inKillCam == 1;
  camInfo.ps = &LocalClientGlobals->predictedPlayerState;
  traceMask = camData->traceMask;
  camInfo.inKillcam = v12;
  camInfo.traceMask = traceMask;
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  __asm { vmovsd  xmm0, qword ptr [rsi+48h] }
  camInfo.vehDef = ClientDef;
  camInfo.vehEntAngles.v[2] = _RSI->pose.angles.v[2];
  camInfo.vehEntNum = _RSI->nextState.number;
  LODWORD(ClientDef) = camData->localClientNum;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+fmt], xmm6
    vmovsd  qword ptr [rsp+0F8h+camInfo.vehEntAngles], xmm0
  }
  camInfo.worldId = 3 * (_DWORD)ClientDef + 2;
  BG_Camera_VehicleTurret(&camInfo, &outEyePos, &inOutRefDef->axis, NULL, fmt);
  RefdefView_SetOrg(inOutRefDef, &outEyePos);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  LocalClientGlobals->clientVehicle.clearCameraShake = 1;
  _RDX = s_cameraTransition;
  __asm { vmovsd  xmm0, qword ptr [rsp+0F8h+camInfo.eyePos] }
  _RCX = camData->localClientNum;
  v19 = camInfo.eyePos.v[2];
  __asm { vmovsd  qword ptr [rcx+rdx+144h], xmm0 }
  s_cameraTransition[_RCX].lastFocusOrigin.v[2] = v19;
  s_cameraTransition[_RCX].lastWas3PWithFocus = 1;
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
}

/*
==============
ClientCameraOrbitData::CanReturnCamera
==============
*/

bool __fastcall ClientCameraOrbitData::CanReturnCamera(ClientCameraOrbitData *this, double _XMM1_8)
{
  if ( !this->cameraReturn )
    return 0;
  if ( this->inputUpdated )
    return 0;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm1, dword ptr [rcx+24h]
  }
  if ( !this->autoRecenterEnabled )
    return 0;
  if ( this->cameraReturnBasedOnGas )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+48h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    if ( !this->cameraReturnBasedOnGas )
      return 0;
  }
  __asm { vcomiss xmm1, dword ptr [rcx+5Ch] }
  return !this->cameraReturnBasedOnGas;
}

/*
==============
ClientCameraTransition::GetTimeForCurve
==============
*/

float __fastcall ClientCameraTransition::GetTimeForCurve(ClientCameraTransition *this, double normalizedTime, CameraTransitionCurve curve)
{
  __int32 v5; 
  bool v6; 
  __int32 v7; 

  __asm { vmovaps xmm4, xmm1 }
  v5 = curve - 1;
  if ( v5 )
  {
    v6 = v5 == 0;
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        __asm
        {
          vmulss  xmm0, xmm4, cs:__real@40c00000
          vsubss  xmm1, xmm0, cs:__real@41700000
          vmulss  xmm2, xmm1, xmm4
          vaddss  xmm3, xmm2, cs:__real@41200000
          vmulss  xmm0, xmm4, xmm4
          vmulss  xmm1, xmm0, xmm4
          vmulss  xmm0, xmm3, xmm1
        }
      }
      else
      {
        __asm { vmovss  xmm0, cs:__real@3f800000 }
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm4, xmm0
      }
      if ( !v6 )
      {
        __asm
        {
          vmovss  xmm0, cs:__real@3f800000
          vcomiss xmm4, xmm0
        }
        if ( v6 )
        {
          __asm
          {
            vmulss  xmm1, xmm4, cs:__real@40000000
            vmovss  xmm0, cs:__real@40400000
            vsubss  xmm2, xmm0, xmm1
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm2, xmm1
          }
        }
      }
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm4 }
  }
  return *(float *)&_XMM0;
}

/*
==============
ClientCameraTransition::InitFromDef
==============
*/
bool ClientCameraTransition::InitFromDef(ClientCameraTransition *this, const CameraTransitionDef *transDef)
{
  bool result; 

  if ( !transDef->active )
    goto LABEL_4;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( transDef->active )
  {
    this->activeTime = 0.0;
    __asm { vmovss  dword ptr [rcx+194h], xmm0 }
    this->timeToStartEyePos = transDef->timewaitEyepos;
    this->timeToStartAxis = transDef->timewaitAxis;
    this->axisCurve = transDef->curveAxis;
    this->eyePosCurve = transDef->curveEyepos;
    result = 1;
    this->active = 1;
    this->transitionInLocalSpace = 0;
    *(_WORD *)&this->transitionOutLocalSpace = 0;
    this->doPlayerFade = 0;
  }
  else
  {
LABEL_4:
    result = 0;
    this->active = 0;
    *(_QWORD *)&this->time = 0i64;
    *(_QWORD *)&this->timeToStartEyePos = 0i64;
    this->lastActiveCamera = 0;
    *(_QWORD *)&this->prevCamNdx = 0i64;
    this->transitionType = TT_NONE;
    *(_QWORD *)&this->lastSeat = 0i64;
    this->transitionInLocalSpace = 0;
    *(_WORD *)&this->transitionOutLocalSpace = 0;
    *(_WORD *)&this->lastWas3PWithFocus = 0;
    this->lastWasUsingTuret = 0;
    this->doPlayerFade = 0;
    *(_QWORD *)&this->lastFocusOrigin.y = 0i64;
  }
  return result;
}

/*
==============
ClientCameraTransition::InterpolateAxis
==============
*/
void ClientCameraTransition::InterpolateAxis(ClientCameraTransition *this, const LocalClientNum_t localClientNum, tmat33_t<vec3_t> *outAxis)
{
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  char v15; 
  char v16; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  vec4_t angles; 
  vec4_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> dst; 
  vec4_t result; 

  __asm { vmovaps [rsp+110h+var_30], xmm6 }
  _RSI = this;
  if ( !this->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3725, ASSERT_TYPE_ASSERT, "(active)", (const char *)&queryFormat, "active") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( !_RSI->transitionInLocalSpace )
    goto LABEL_11;
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
  linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity(localClientNum, linkEnt), (_RBX = Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    if ( IsTransitionSkydiveOrbitCamType )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler(localClientNum);
      Instance = CgWeaponMap::GetInstance(localClientNum);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, (vec3_t *)&outOrigin, Handler);
      AxisToAngles(&axis, (vec3_t *)&angles);
      __asm { vmovss  dword ptr [rsp+110h+angles+8], xmm6 }
      AnglesToAxis((const vec3_t *)&angles, &axis);
      MatrixMultiply(&axis, &_RSI->sourceAxisLocal, &out);
      MatrixMultiply(&axis, &_RSI->targetAxisLocal, &dst);
      goto LABEL_12;
    }
LABEL_11:
    MatrixCopy33(&_RSI->sourceAxis, &out);
    MatrixCopy33(&_RSI->targetAxis, &dst);
    goto LABEL_12;
  }
  CG_GetPoseOrigin(&Entity->pose, (vec3_t *)&outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rsp+110h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rsp+110h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rsp+110h+angles+8], xmm0
  }
  AnglesToAxis((const vec3_t *)&angles, &axis);
  MatrixMultiply(&axis, &_RSI->sourceAxisLocal, &out);
  MatrixMultiply(&axis, &_RSI->targetAxisLocal, &dst);
LABEL_12:
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+1A0h]
    vcomiss xmm0, dword ptr [rsi+198h]
  }
  if ( v15 | v16 && ClientCameraTransition::ShouldInterpolateTransition(_RSI, localClientNum) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+1A0h]
      vmovss  xmm0, dword ptr [rsi+198h]
      vmovss  xmm2, dword ptr [rsi+194h]
      vsubss  xmm4, xmm0, xmm3
      vsubss  xmm3, xmm2, xmm3
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm4, xmm3; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; normalizedTime }
    *(double *)&_XMM0 = ClientCameraTransition::GetTimeForCurve(_RSI, *(float *)&_XMM1, _RSI->axisCurve);
    __asm { vmovaps xmm6, xmm0 }
    AxisToQuat(&out, &angles);
    AxisToQuat(&dst, &outOrigin);
    __asm { vmovaps xmm2, xmm6; frac }
    QuatNlerp(&angles, &outOrigin, *(float *)&_XMM2, &result);
    QuatToAxis(&result, outAxis);
  }
  else
  {
    MatrixCopy33(&out, outAxis);
  }
  __asm { vmovaps xmm6, [rsp+110h+var_30] }
}

/*
==============
ClientCameraTransition::InterpolateEyePos
==============
*/
void ClientCameraTransition::InterpolateEyePos(ClientCameraTransition *this, const LocalClientNum_t localClientNum, bool findDistanceToPlayer, vec3_t *outEyePos, float *outDistance)
{
  __int64 v21; 
  char v22; 
  bool v23; 
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  cg_t *v74; 
  CgHandler *v75; 
  CgWeaponMap *v76; 
  vec3_t outOrigin; 
  vec3_t out; 
  vec3_t v109; 
  vec3_t angles; 
  vec3_t v111; 
  vec3_t v112; 
  tmat33_t<vec3_t> axis; 
  void *retaddr; 

  _R11 = &retaddr;
  v23 = !this->active;
  _R12 = outDistance;
  _R14 = outEyePos;
  _RSI = this;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v21 = localClientNum;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3643, ASSERT_TYPE_ASSERT, "(active)", (const char *)&queryFormat, "active") )
    __debugbreak();
  if ( !outDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3644, ASSERT_TYPE_ASSERT, "(outDistance)", (const char *)&queryFormat, "outDistance") )
    __debugbreak();
  v22 = 0;
  v23 = !_RSI->transitionInLocalSpace;
  __asm
  {
    vmovaps [rsp+190h+var_70], xmm9
    vmovaps [rsp+190h+var_80], xmm10
    vmovaps [rsp+190h+var_90], xmm11
    vmovaps [rsp+190h+var_A0], xmm12
    vmovaps [rsp+190h+var_B0], xmm13
    vmovaps [rsp+190h+var_C0], xmm14
    vxorps  xmm15, xmm15, xmm15
  }
  if ( v23 )
    goto LABEL_14;
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType((const LocalClientNum_t)v21);
  linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v21)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity((const LocalClientNum_t)v21, linkEnt), (_RBX = Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    v22 = 0;
    v23 = !IsTransitionSkydiveOrbitCamType;
    if ( IsTransitionSkydiveOrbitCamType )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler((LocalClientNum_t)v21);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v21);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
      AxisToAngles(&axis, &v112);
      __asm { vmovss  dword ptr [rbp+90h+var_110+8], xmm15 }
      AnglesToAxis(&v112, &axis);
      AxisTransformVec3(&axis, &_RSI->sourceEyePosLocal, &v109);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+var_140]
        vaddss  xmm8, xmm0, dword ptr [rsp+190h+outOrigin]
        vmovss  xmm0, dword ptr [rsp+190h+var_140+8]
        vmovss  xmm1, dword ptr [rsp+190h+var_140+4]
        vaddss  xmm6, xmm0, dword ptr [rsp+190h+outOrigin+8]
        vaddss  xmm7, xmm1, dword ptr [rsp+190h+outOrigin+4]
      }
      AxisTransformVec3(&axis, &_RSI->targetEyePosLocal, &v109);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+var_140]
        vaddss  xmm9, xmm0, dword ptr [rsp+190h+outOrigin]
        vmovss  xmm0, dword ptr [rsp+190h+var_140+8]
        vmovss  xmm1, dword ptr [rsp+190h+var_140+4]
        vaddss  xmm11, xmm0, dword ptr [rsp+190h+outOrigin+8]
        vaddss  xmm10, xmm1, dword ptr [rsp+190h+outOrigin+4]
      }
      goto LABEL_15;
    }
LABEL_14:
    __asm
    {
      vmovss  xmm10, dword ptr [rsi+40h]
      vmovss  xmm9, dword ptr [rsi+3Ch]
      vmovss  xmm6, dword ptr [rsi+14h]
      vmovss  xmm7, dword ptr [rsi+10h]
      vmovss  xmm8, dword ptr [rsi+0Ch]
      vmovss  xmm11, dword ptr [rsi+44h]
    }
    goto LABEL_15;
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  dword ptr [rsp+190h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+4Ch]
    vmovss  dword ptr [rsp+190h+angles+4], xmm1
    vmovss  xmm0, dword ptr [rbx+50h]
    vmovss  dword ptr [rsp+190h+angles+8], xmm0
  }
  AnglesToAxis(&angles, &axis);
  AxisTransformVec3(&axis, &_RSI->sourceEyePosLocal, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+190h+out]
    vaddss  xmm8, xmm0, dword ptr [rsp+190h+outOrigin]
    vmovss  xmm0, dword ptr [rsp+190h+out+8]
    vmovss  xmm1, dword ptr [rsp+190h+out+4]
    vaddss  xmm6, xmm0, dword ptr [rsp+190h+outOrigin+8]
    vaddss  xmm7, xmm1, dword ptr [rsp+190h+outOrigin+4]
  }
  AxisTransformVec3(&axis, &_RSI->targetEyePosLocal, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+190h+out]
    vaddss  xmm9, xmm0, dword ptr [rsp+190h+outOrigin]
    vmovss  xmm0, dword ptr [rsp+190h+out+8]
    vmovss  xmm1, dword ptr [rsp+190h+out+4]
    vaddss  xmm11, xmm0, dword ptr [rsp+190h+outOrigin+8]
    vaddss  xmm10, xmm1, dword ptr [rsp+190h+outOrigin+4]
  }
LABEL_15:
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+19Ch]
    vcomiss xmm0, dword ptr [rsi+198h]
    vmovaps xmm14, xmm6
    vmovaps xmm13, xmm7
    vmovaps xmm12, xmm8
  }
  if ( v22 | v23 && ClientCameraTransition::ShouldInterpolateTransition(_RSI, (const LocalClientNum_t)v21) )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+19Ch]
      vmovss  xmm0, dword ptr [rsi+198h]
      vmovss  xmm2, dword ptr [rsi+194h]
      vsubss  xmm4, xmm0, xmm3
      vsubss  xmm3, xmm2, xmm3
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm4, xmm3; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm1, xmm0; normalizedTime }
    ClientCameraTransition::GetTimeForCurve(_RSI, *(float *)&_XMM1, _RSI->eyePosCurve);
    __asm
    {
      vsubss  xmm1, xmm11, xmm6
      vmulss  xmm2, xmm1, xmm0
      vsubss  xmm3, xmm10, xmm7
      vmulss  xmm1, xmm3, xmm0
      vaddss  xmm6, xmm2, xmm6
      vsubss  xmm2, xmm9, xmm8
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm8, xmm0, xmm8
      vaddss  xmm7, xmm1, xmm7
    }
  }
  __asm
  {
    vmovss  dword ptr [r14], xmm8
    vmovss  dword ptr [r14+4], xmm7
    vmovss  dword ptr [r14+8], xmm6
    vmovaps xmm15, [rsp+190h+var_D0]
    vmovaps xmm8, [rsp+190h+var_60]
    vmovaps xmm7, [rsp+190h+var_50]
    vmovaps xmm6, [rsp+190h+var_40]
  }
  if ( findDistanceToPlayer )
  {
    v74 = CG_GetLocalClientGlobals((const LocalClientNum_t)v21);
    v75 = CgHandler::getHandler((LocalClientNum_t)v21);
    v76 = CgWeaponMap::GetInstance((const LocalClientNum_t)v21);
    BG_GetPlayerEyePosition(v76, &v74->predictedPlayerState, &v111, v75);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+190h+var_120]
      vsubss  xmm3, xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [rsp+190h+var_120+4]
      vsubss  xmm2, xmm1, dword ptr [r14+4]
      vmovss  xmm0, dword ptr [rsp+190h+var_120+8]
      vsubss  xmm4, xmm0, dword ptr [r14+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmovss  dword ptr [r12], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vmovss  xmm1, dword ptr [r14+4]
      vmovss  xmm3, dword ptr [r14+8]
    }
    if ( s_cameraTransition[v21].transitionType == TT_VIEW_TO_CAMERA )
    {
      __asm
      {
        vsubss  xmm2, xmm12, xmm0
        vsubss  xmm0, xmm13, xmm1
        vsubss  xmm3, xmm14, xmm3
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm2, xmm9, xmm0
        vsubss  xmm0, xmm10, xmm1
        vsubss  xmm3, xmm11, xmm3
      }
    }
    __asm
    {
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [r12], xmm0
    }
  }
  __asm
  {
    vmovaps xmm14, [rsp+190h+var_C0]
    vmovaps xmm13, [rsp+190h+var_B0]
    vmovaps xmm12, [rsp+190h+var_A0]
    vmovaps xmm11, [rsp+190h+var_90]
    vmovaps xmm10, [rsp+190h+var_80]
    vmovaps xmm9, [rsp+190h+var_70]
  }
}

/*
==============
ClientCameraTransition::IsHidingWorldmodel
==============
*/
bool ClientCameraTransition::IsHidingWorldmodel(ClientCameraTransition *this, const LocalClientNum_t localClientNum, const CameraType camTypeActive)
{
  int clientNum; 
  const cpose_t *Pose; 
  const DObj *ClientDObj; 
  const DObj *v7; 
  vec3_t outPos; 

  if ( camTypeActive != this->lastActiveCamera || this->active )
  {
    clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
    if ( CG_Entity_CanUseDObj(localClientNum, clientNum) )
    {
      Pose = CG_GetPose(localClientNum, clientNum);
      ClientDObj = Com_GetClientDObj(clientNum, localClientNum);
      v7 = ClientDObj;
      if ( ClientDObj )
      {
        if ( DObjVerifyNumBones(ClientDObj) && CG_DObjGetWorldTagPos(Pose, v7, scr_const.j_spine4, &outPos) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+48h+outPos]
            vsubss  xmm3, xmm0, dword ptr [rbx+0E0h]
            vmovss  xmm1, dword ptr [rsp+48h+outPos+4]
            vsubss  xmm2, xmm1, dword ptr [rbx+0E4h]
            vmovss  xmm0, dword ptr [rsp+48h+outPos+8]
            vsubss  xmm4, xmm0, dword ptr [rbx+0E8h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmovss  xmm1, cs:s_wmHideDist
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm2, xmm1, xmm1
            vcomiss xmm4, xmm2
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
ClientCameraState::IsTransitionInterpolationDisabled
==============
*/
bool ClientCameraState::IsTransitionInterpolationDisabled(ClientCameraState *this, const CameraType cameraIndex)
{
  int v6; 

  if ( (unsigned int)cameraIndex >= MAX_CAMERA_TYPES )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3499, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( MAX_CAMERA_TYPES )", "cameraIndex doesn't index MAX_CAMERA_TYPES\n\t%i not in [0, %i)", cameraIndex, v6) )
      __debugbreak();
  }
  return bitarray_base<bitarray<256>>::testBit(&this->transInterpDisabledBits, cameraIndex);
}

/*
==============
ClientCameraState::OnFinalizeViewValues
==============
*/
void ClientCameraState::OnFinalizeViewValues(ClientCameraState *this, const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3506, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3508, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  this->lastRenderedClient = LocalClientGlobals->predictedPlayerState.clientNum;
  this->lastClientHadTeleportFlag = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 2u);
}

/*
==============
CameraTraceInfo::Reset
==============
*/
void CameraTraceInfo::Reset(CameraTraceInfo *this)
{
  _RBX = this;
  this->worldId = PHYSICS_WORLD_ID_CLIENT_FIRST;
  LOBYTE(_EAX) = CL_TransientsWorldMP_IsActive();
  __asm { vmovss  xmm2, cs:__real@41000000 }
  _ECX = 0;
  _RBX->contentMask = 2705;
  _RBX->displFromStart = 10.0;
  __asm { vmovd   xmm1, ecx }
  _EAX = (unsigned __int8)_EAX;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@41a00000
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  dword ptr [rbx+1Ch], xmm0
  }
  *(_QWORD *)_RBX->start.v = 0i64;
  *(_QWORD *)&_RBX->start.z = 0i64;
  *(_QWORD *)&_RBX->end.y = 0i64;
  _RBX->ignoreEntities = NULL;
  _RBX->ignoreCount = 0;
  *(_QWORD *)&_RBX->innerRadius = 0i64;
}

/*
==============
ClientCameraDeathCam::Reset
==============
*/
void ClientCameraDeathCam::Reset(ClientCameraDeathCam *this)
{
  this->vehEntNum = 2047;
  this->camType = INACTIVE;
  *(_QWORD *)&this->time = 0i64;
  this->supportsFOV = 0;
}

/*
==============
ClientCameraKillCam::Reset
==============
*/
void ClientCameraKillCam::Reset(ClientCameraKillCam *this)
{
  this->initialized = 0;
  this->vehSign = 1.0;
  *(_OWORD *)this->lastEyePos.v = 0ui64;
  *(_QWORD *)&this->lastLookAtEntPos.y = 0i64;
  MatrixIdentity33(&this->lastAxis);
  this->lastKillCamEntity = 2047;
  this->lastKillCamEntityType = 0;
  this->lastFov = 70.0;
}

/*
==============
ClientCameraOrbitData::Reset
==============
*/
void ClientCameraOrbitData::Reset(ClientCameraOrbitData *this, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  this->lastFrac = 1.0;
  *(_QWORD *)&this->timeSimulating = 0i64;
  *(_QWORD *)this->sphericalCoords.v = 1133903872i64;
  this->sphericalCoords.v[2] = 70.0;
  this->interpolatedRadial = this->sphericalCoords.v[0];
  this->cameraReturn = 0;
  *(_QWORD *)&this->lastCmdTimeButton1 = 0i64;
  this->camPerspectiveMode = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  this->useRemoteAngles = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x1Cu);
  this->inputUpdated = 0;
  *(_QWORD *)&this->inputPolarValue = 0i64;
  this->returnAzimuthFactor = 1.0;
  this->timeUntilReturn = 0.0;
  this->returnTimeFactor = 1.0;
  *(_WORD *)&this->yawInverted = 0;
  *(_QWORD *)&this->inputGas = 0i64;
  this->cameraReturnBasedOnGas = 0;
  *(_QWORD *)&this->speedFactor = 1065353216i64;
  *(_QWORD *)&this->curYawAdd = 0i64;
  this->lerpSpeed = 4.0;
  *(_WORD *)&this->polarElevation = 0;
  *(_QWORD *)this->curFocusPos.v = 0i64;
  this->curFocusPos.v[2] = 0.0;
}

/*
==============
ClientCameraState::Reset
==============
*/
void ClientCameraState::Reset(ClientCameraState *this)
{
  this->lastRenderedClient = -1;
  *(_QWORD *)this->transInterpDisabledBits.array = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[2] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[4] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[6] = 0i64;
}

/*
==============
ClientCameraTransition::Reset
==============
*/
void ClientCameraTransition::Reset(ClientCameraTransition *this)
{
  this->active = 0;
  *(_QWORD *)&this->time = 0i64;
  *(_QWORD *)&this->timeToStartEyePos = 0i64;
  this->lastActiveCamera = 0;
  *(_QWORD *)&this->prevCamNdx = 0i64;
  this->transitionType = TT_NONE;
  *(_QWORD *)&this->lastSeat = 0i64;
  this->transitionInLocalSpace = 0;
  *(_WORD *)&this->transitionOutLocalSpace = 0;
  *(_WORD *)&this->lastWas3PWithFocus = 0;
  this->lastWasUsingTuret = 0;
  this->doPlayerFade = 0;
  *(_QWORD *)&this->lastFocusOrigin.y = 0i64;
}

/*
==============
ClientCameraState::ResetAllTransitionInterpolationState
==============
*/
void ClientCameraState::ResetAllTransitionInterpolationState(ClientCameraState *this)
{
  *(_QWORD *)this->transInterpDisabledBits.array = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[2] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[4] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[6] = 0i64;
}

/*
==============
ClientCameraState::SetTransitionInterpolation
==============
*/
void ClientCameraState::SetTransitionInterpolation(ClientCameraState *this, const CameraType cameraIndex, const bool disabled)
{
  unsigned __int64 v3; 
  int v6; 
  int v7; 
  int v8; 

  v3 = (unsigned int)cameraIndex;
  if ( (unsigned int)cameraIndex >= MAX_CAMERA_TYPES )
  {
    v6 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3491, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( MAX_CAMERA_TYPES )", "cameraIndex doesn't index MAX_CAMERA_TYPES\n\t%i not in [0, %i)", cameraIndex, v6) )
      __debugbreak();
  }
  *(_QWORD *)this->transInterpDisabledBits.array = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[2] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[4] = 0i64;
  *(_QWORD *)&this->transInterpDisabledBits.array[6] = 0i64;
  if ( (unsigned int)v3 >= 0x100 )
  {
    v8 = 256;
    v7 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v7, v8) )
      __debugbreak();
  }
  this->transInterpDisabledBits.array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
}

/*
==============
ClientCameraTransition::ShouldInterpolateTransition
==============
*/
char ClientCameraTransition::ShouldInterpolateTransition(ClientCameraTransition *this, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int nextCamNdx; 
  __int64 v5; 
  const CameraDef *Def; 
  __int64 v8; 
  __int64 v9; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3635, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  nextCamNdx = this->nextCamNdx;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4955, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = v2;
  if ( (unsigned int)nextCamNdx >= 0x100 )
  {
    LODWORD(v9) = 256;
    LODWORD(v8) = nextCamNdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3499, ASSERT_TYPE_ASSERT, "(unsigned)( cameraIndex ) < (unsigned)( MAX_CAMERA_TYPES )", "cameraIndex doesn't index MAX_CAMERA_TYPES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( bitarray_base<bitarray<256>>::testBit(&s_cameraStates[v5].transInterpDisabledBits, nextCamNdx) )
    return 0;
  if ( !nextCamNdx || nextCamNdx >= 256 || (unsigned int)(nextCamNdx - 1) >= 0xFA )
    return 1;
  Def = BG_Camera_GetDef(nextCamNdx);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4965, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  return Def->interpolateViewTransition;
}

/*
==============
ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget
==============
*/
void ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(ClientCameraTransition *this)
{
  vec3_t vec; 
  tmat33_t<vec3_t> out; 

  _RBX = this;
  this->transitionOutLocalSpaceValid = 1;
  AxisTranspose(&this->targetAxis, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rbx+3Ch]
    vmovss  xmm2, dword ptr [rbx+10h]
    vsubss  xmm0, xmm2, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+68h+vec], xmm1
    vmovss  xmm1, dword ptr [rbx+14h]
    vsubss  xmm2, xmm1, dword ptr [rbx+44h]
    vmovss  dword ptr [rsp+68h+vec+8], xmm2
    vmovss  dword ptr [rsp+68h+vec+4], xmm0
  }
  AxisTransformVec3(&out, &vec, &_RBX->eyePosLocalOut);
}

/*
==============
ClientCameraDeathCam::Update
==============
*/

void __fastcall ClientCameraDeathCam::Update(ClientCameraDeathCam *this, LocalClientNum_t localClientNum, double frametime, RefdefView *inOutRefDef)
{
  bool v11; 
  bool v16; 
  cg_t *LocalClientGlobals; 
  int number; 
  int vehEntNum; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  cg_t *v70; 
  centity_t *v71; 
  int v77; 
  double v78; 
  double v79; 
  vec3_t inOrg; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  tmat33_t<vec3_t> dst; 

  __asm { vmovaps [rsp+170h+var_80], xmm10 }
  v11 = this->camType == INACTIVE;
  __asm
  {
    vmovaps [rsp+170h+var_90], xmm11
    vmovaps xmm11, xmm2
  }
  _RBX = this;
  if ( v11 )
  {
    v77 = 0;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4622, ASSERT_TYPE_ASSERT, "( static_cast<int>( camType ) ) != ( static_cast<int>( Type::INACTIVE ) )", "%s != %s\n\t%i, %i", "static_cast<int>( camType )", "static_cast<int>( Type::INACTIVE )", v77, 0i64);
    v11 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+70h]
    vcomiss xmm0, dword ptr [rbx+6Ch]
    vmovss  xmm10, cs:__real@3f800000
    vmovaps [rsp+170h+var_40], xmm6
    vmovaps [rsp+170h+var_50], xmm7
    vmovaps [rsp+170h+var_60], xmm8
    vmovaps [rsp+170h+var_70], xmm9
  }
  if ( v11 )
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+38h]
      vmovss  xmm8, dword ptr [rbx+3Ch]
      vmovss  xmm9, dword ptr [rbx+40h]
      vmovss  dword ptr [rsp+170h+inOrg], xmm7
      vmovss  dword ptr [rsp+170h+inOrg+4], xmm8
      vmovss  dword ptr [rsp+170h+inOrg+8], xmm9
    }
    MatrixCopy33(&_RBX->targetAxis, &dst);
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm0, xmm6
    }
    if ( v11 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+170h+var_130], xmm0
        vxorpd  xmm1, xmm1, xmm1
        vmovsd  [rsp+170h+var_138], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4635, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( totalTime )", "%s < %s\n\t%g, %g", "0.0f", "totalTime", v78, v79) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6Ch]
      vdivss  xmm0, xmm0, dword ptr [rbx+70h]; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm10, xmm0
      vmulss  xmm0, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbx+38h]
      vsubss  xmm1, xmm0, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vsubss  xmm6, xmm10, xmm2
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rbx+8]
      vaddss  xmm7, xmm2, dword ptr [rbx+4]
      vmovss  xmm0, dword ptr [rbx+40h]
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
      vaddss  xmm8, xmm2, dword ptr [rbx+8]
      vmulss  xmm3, xmm1, xmm6
      vaddss  xmm9, xmm3, dword ptr [rbx+0Ch]
      vmovss  dword ptr [rsp+170h+inOrg+8], xmm9
      vmovss  dword ptr [rsp+170h+inOrg], xmm7
      vmovss  dword ptr [rsp+170h+inOrg+4], xmm8
    }
    AxisToQuat(&_RBX->sourceAxis, &out);
    AxisToQuat(&_RBX->targetAxis, &to);
    __asm { vmovaps xmm2, xmm6; frac }
    QuatNlerp(&out, &to, *(float *)&_XMM2, &result);
    QuatToAxis(&result, &dst);
    __asm
    {
      vaddss  xmm0, xmm11, dword ptr [rbx+6Ch]
      vmovss  dword ptr [rbx+6Ch], xmm0
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovaps xmm11, [rsp+170h+var_90] }
  number = 2047;
  if ( _RBX->camType == ACTIVE )
  {
    vehEntNum = _RBX->vehEntNum;
    if ( vehEntNum != 2047 )
    {
      Entity = CG_GetEntity(localClientNum, vehEntNum);
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 && BG_IsVehicleEntity(&Entity->nextState) )
      {
        CG_GetPoseOrigin(p_pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+170h+outOrigin]
          vmovss  xmm1, dword ptr [rsp+170h+outOrigin+4]
          vsubss  xmm4, xmm0, xmm7
          vmovss  xmm0, dword ptr [rsp+170h+outOrigin+8]
          vsubss  xmm6, xmm0, xmm9
          vsubss  xmm5, xmm1, xmm8
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm2, xmm5, xmm5
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm1, xmm2, xmm2
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
          vdivss  xmm2, xmm10, xmm0
          vmulss  xmm0, xmm2, xmm4
          vmovss  dword ptr [rsp+170h+forward], xmm0
          vmulss  xmm0, xmm2, xmm6
          vmulss  xmm1, xmm2, xmm5
          vmovss  dword ptr [rsp+170h+forward+8], xmm0
          vmovss  dword ptr [rsp+170h+forward+4], xmm1
        }
        BG_AxisFromForward(&forward, &identityMatrix33.m[2], &dst);
      }
      else
      {
        _RBX->vehEntNum = 2047;
      }
    }
    v70 = CG_GetLocalClientGlobals(localClientNum);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v70->predictedPlayerState.corpseIndex < (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v71 = CG_GetEntity(localClientNum, ComCharacterLimits::ms_gameData.m_characterCount + v70->predictedPlayerState.corpseIndex);
      if ( v71 && (v71->flags & 1) != 0 )
        number = v71->nextState.number;
    }
  }
  _RBX->corpseEntNum = number;
  RefdefView_SetOrg(inOutRefDef, &inOrg);
  MatrixCopy33(&dst, &inOutRefDef->axis);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  __asm
  {
    vmovaps xmm9, [rsp+170h+var_70]
    vmovaps xmm8, [rsp+170h+var_60]
    vmovaps xmm7, [rsp+170h+var_50]
    vmovaps xmm6, [rsp+170h+var_40]
    vmovaps xmm10, [rsp+170h+var_80]
  }
}

/*
==============
ClientCameraTransition::Update
==============
*/
void ClientCameraTransition::Update(ClientCameraTransition *this, const LocalClientNum_t localClientNum, bool findDistanceToPlayer, vec3_t *outEyePos, tmat33_t<vec3_t> *outAxis, float *outDistance)
{
  ClientCameraTransition::InterpolateEyePos(this, localClientNum, findDistanceToPlayer, outEyePos, outDistance);
  ClientCameraTransition::InterpolateAxis(this, localClientNum, outAxis);
}

/*
==============
ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget
==============
*/
void ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(ClientCameraTransition *this)
{
  vec3_t out; 

  _RBX = this;
  if ( this->transitionOutLocalSpaceValid )
  {
    AxisTransformVec3(&this->targetAxis, &this->eyePosLocalOut, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+48h+out]
      vaddss  xmm1, xmm0, dword ptr [rbx+3Ch]
      vmovss  xmm2, dword ptr [rsp+48h+out+4]
      vmovss  dword ptr [rbx+0Ch], xmm1
      vaddss  xmm0, xmm2, dword ptr [rbx+40h]
      vmovss  xmm1, dword ptr [rsp+48h+out+8]
      vmovss  dword ptr [rbx+10h], xmm0
      vaddss  xmm2, xmm1, dword ptr [rbx+44h]
      vmovss  dword ptr [rbx+14h], xmm2
    }
  }
}

/*
==============
__GetRange
==============
*/
float _GetRange(const CameraOrbitProfileDef *orbitDef)
{
  const dvar_t *v1; 

  v1 = DCONST_DVARBOOL_bg_vehcamUseDvars;
  _RDI = orbitDef;
  if ( !DCONST_DVARBOOL_bg_vehcamUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    _RBX = DCONST_DVARFLT_bg_vehcamRange;
    if ( !DCONST_DVARFLT_bg_vehcamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rdi+20h] }
  }
  return *(float *)&_XMM0;
}

