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

float __fastcall NormalizeRange(double val, float minval)
{
  __int128 v4; 

  if ( (minval < 0.0 || minval >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_ground.cpp", 184, ASSERT_TYPE_ASSERT, "(minval >= 0.0f && minval < 1.0f)", (const char *)&queryFormat, "minval >= 0.0f && minval < 1.0f") )
    __debugbreak();
  v4 = *(_OWORD *)&val;
  *(float *)&v4 = *(float *)&val - minval;
  _XMM0 = v4;
  __asm { vmaxss  xmm1, xmm0, xmm8 }
  return *(float *)&_XMM1 / (float)(1.0 - minval);
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
  __int64 v3; 
  CameraType v6; 
  signed int v7; 
  float frametime_base; 
  __int64 v9; 
  double v10; 
  __int128 v11; 
  double TimeScale; 
  float v15; 
  double v16; 
  float v17; 
  unsigned int v18; 
  signed int v19; 
  bool v20; 

  v3 = localClientNum;
  v6 = CG_Camera_Active_Get(localClientNum);
  *outOverrideLegacyCamera = 0;
  v7 = v6;
  frametime_base = cls.frametime_base;
  if ( cls.frametime_base <= 0.0 )
    return;
  v9 = v3;
  s_cameraTransition[v3].lastWas3PWithFocus = 0;
  v10 = I_fclamp(frametime_base, 0.0041666669, 0.041666668);
  v11 = LODWORD(s_frameTimeEMA[v3]);
  *(float *)&v11 = (float)(s_frameTimeEMA[v3] - (float)(s_frameTimeEMA[v3] * 0.016666668)) + (float)(*(float *)&v10 * 0.016666668);
  _XMM6 = v11;
  s_frameTimeEMA[v3] = *(float *)&v11;
  TimeScale = Com_GetTimeScale();
  __asm { vminss  xmm1, xmm6, cs:__real@3d2aaaab }
  v15 = *(float *)&TimeScale * *(float *)&_XMM1;
  v16 = Com_GetTimeScale();
  v17 = *(float *)&v16 * cls.frametime_base;
  if ( (unsigned int)(v7 - 251) <= 4 )
  {
    *outOverrideLegacyCamera = CG_Camera_SkydiveCam_Update((const LocalClientNum_t)v3, inOutRefDef);
    s_cameraTransition[v9].lastActiveCamera = 251;
    return;
  }
  v18 = s_cameraTransition[v9].lastActiveCamera - 252;
  if ( !v7 || v7 >= 256 )
    goto LABEL_8;
  if ( v18 <= 3 )
  {
    if ( s_cameraTransition[v9].active )
    {
      s_cameraTransition[v9].active = 0;
      goto LABEL_9;
    }
LABEL_8:
    if ( v18 <= 3 )
      return;
  }
LABEL_9:
  CG_Camera_ResetToView((LocalClientNum_t)v3, CAMERA_MAX_DEF_INDEX, inOutRefDef, 1);
  v19 = CG_Camera_Active_Get((LocalClientNum_t)v3);
  if ( CG_Camera_Transition_Detect((LocalClientNum_t)v3, NULL, v19, s_cameraTransition[v9].lastActiveCamera, inOutRefDef) )
  {
    if ( v19 && v19 < 256 && (unsigned int)(v19 - 1) < 0xFA )
    {
      CG_Camera_UpdateTransitionToCameraTarget((LocalClientNum_t)v3, v17, inOutRefDef);
    }
    else if ( s_cameraTransition[v9].transitionType == TT_CAMERA_TO_VIEW )
    {
      s_cameraTransition[v9].targetEyePos.v[0] = s_cameraTransition[v9].last1stViewEyePos.v[0];
      s_cameraTransition[v9].targetEyePos.v[1] = s_cameraTransition[v9].last1stViewEyePos.v[1];
      s_cameraTransition[v9].targetEyePos.v[2] = s_cameraTransition[v9].last1stViewEyePos.v[2];
      MatrixCopy33(&s_cameraTransition[v9].last1stViewAxis, &s_cameraTransition[v9].targetAxis);
      CG_Camera_RemoveRoll(&s_cameraTransition[v9].targetAxis);
      s_cameraTransition[v9].transitionOutLocalSpace = 1;
    }
    *outOverrideLegacyCamera = CG_Camera_Transition_Update((LocalClientNum_t)v3, v17, inOutRefDef);
  }
  if ( !*outOverrideLegacyCamera )
  {
    v20 = CG_Camera_Transition_Update((LocalClientNum_t)v3, v17, inOutRefDef);
    *outOverrideLegacyCamera = v20;
    if ( !v20 && v7 && v7 < 256 && (unsigned int)(v7 - 1) < 0xFA && !s_cameraTransition[v9].active )
      *outOverrideLegacyCamera = CG_Camera_Active_Update_Def((LocalClientNum_t)v3, v7, inOutRefDef, v15);
  }
  s_cameraTransition[v9].lastActiveCamera = v7;
}

/*
==============
CG_Camera_Active_Update_Def
==============
*/
char CG_Camera_Active_Update_Def(LocalClientNum_t localClientNum, unsigned int camDefNdx, RefdefView *inOutRefDef, float frameTime)
{
  const CameraDef *Def; 
  ClientCameraData *Data; 

  if ( !CameraType_Is_Def(camDefNdx) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3263, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( camDefNdx ))", (const char *)&queryFormat, "CameraType_Is_Def( camDefNdx )") )
    __debugbreak();
  Def = BG_Camera_GetDef(camDefNdx);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3266, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  if ( Def->profile != CAMERAPROFILE_ORBIT || CG_Camera_IsSkydiveSpectatorOrKillcam(localClientNum) )
    return 0;
  Data = CG_Camera_GetData(localClientNum, (CameraType)camDefNdx);
  Data->camDef = Def;
  Data->orbitCamData.lerpSpeed = Def->orbit.lerpSpeed;
  CG_Camera_Orbit_Update(Data, inOutRefDef, frameTime, camDefNdx);
  CG_Camera_PostUpdate(localClientNum, inOutRefDef, Def->keepShakeCam, Def->serverFeedback);
  return 1;
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
  float v2; 
  vec3_t outOrg; 

  if ( !Mat33IsOrthonormal(&refdef->axis) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 371, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( refdef.axis ) )", "mat3 isn't orthonormal") )
    __debugbreak();
  RefdefView_GetOrg(refdef, &outOrg);
  v2 = outOrg.v[0];
  if ( (LODWORD(outOrg.v[0]) & 0x7F800000) == 2139095040 || (v2 = outOrg.v[1], (LODWORD(outOrg.v[1]) & 0x7F800000) == 2139095040) || (v2 = outOrg.v[2], (LODWORD(outOrg.v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 375, ASSERT_TYPE_SANITY, "( !IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( tmpRefdefOrg )[0] ) && !IS_NAN( ( tmpRefdefOrg )[1] ) && !IS_NAN( ( tmpRefdefOrg )[2] )", v2) )
      __debugbreak();
  }
}

/*
==============
CG_Camera_DampLerp
==============
*/
void CG_Camera_DampLerp(float *cur, float dst, float frameTime, float speed)
{
  int v10; 
  int v11; 
  float v12; 
  unsigned int v13; 
  float v17; 
  float v21; 
  float v25; 
  unsigned int v26; 
  float v30; 

  _XMM6 = LODWORD(FLOAT_0_016666668);
  if ( frameTime <= 0.016666668 || frameTime >= 1.0 )
  {
    v10 = 1;
  }
  else
  {
    _XMM4 = 0i64;
    __asm { vroundss xmm4, xmm4, xmm0, 1 }
    v10 = (int)*(float *)&_XMM4;
    if ( (float)(frameTime - *(float *)&_XMM4) > 0.0 )
      ++v10;
  }
  v11 = 0;
  if ( v10 >= 4 )
  {
    v12 = *cur;
    v13 = 2;
    do
    {
      _XMM0 = (unsigned int)v11;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v17 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v12)) * speed) + v12;
      v11 += 4;
      _XMM0 = v13 - 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v21 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v17)) * speed) + v17;
      _XMM0 = v13;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v25 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v21)) * speed) + v21;
      v26 = v13 + 1;
      v13 += 4;
      _XMM0 = v26;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm1, xmm6, xmm5, xmm2
      }
      v30 = (float)((float)(*(float *)&_XMM1 * (float)(dst - v25)) * speed) + v25;
      v12 = v30;
    }
    while ( v11 < v10 - 3 );
    *cur = v30;
  }
  for ( ; v11 < v10; *cur = (float)((float)(*(float *)&_XMM1 * (float)(dst - *cur)) * speed) + *cur )
  {
    _XMM0 = (unsigned int)v11;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm1, xmm6, xmm5, xmm2
    }
    ++v11;
  }
}

/*
==============
CG_Camera_DeathCam_Detect
==============
*/
void CG_Camera_DeathCam_Detect(LocalClientNum_t localClientNum, RefdefView *inOutRefDef)
{
  ClientCameraDeathCam *v4; 
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  float v8; 
  float v9; 
  float v10; 
  float fov; 
  centity_t *v12; 
  int v13; 
  centity_t *Entity; 
  __int64 v15; 
  float v16; 
  float v17; 
  unsigned __int128 v18; 
  unsigned __int128 v19; 
  __int128 v23; 
  bool v27; 
  float v28; 
  float v29; 
  bool IsActive; 
  const dvar_t *v31; 
  char v36; 
  __int128 unsignedInt; 
  const dvar_t *v38; 
  float value; 
  __int64 v40; 
  __int128 v41; 
  double v43; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  __int128 v49; 
  float v50; 
  float v54; 
  __m256i v55; 
  float v56; 
  const dvar_t *v57; 
  const dvar_t *v64; 
  float v65; 
  const dvar_t *v66; 
  float v67; 
  float outFraction; 
  vec3_t forward; 
  vec3_t result; 
  vec3_t angles; 
  XCamValues outValues; 
  vec3_t out; 
  tmat33_t<vec3_t> mat; 

  v4 = &s_cameraDeathCam[(__int64)(int)localClientNum];
  v5 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4753, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v7 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4695, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v7->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x33u) && !XCamData::IsActive(&v7->xCam) && XCamData::AreValuesValid(&v7->xCam) )
  {
    v4->camType = 2;
    XCamValues::XCamValues(&outValues);
    XCamData::GetValues(&LocalClientGlobals->xCam, &outValues);
    v8 = outValues.origin.v[1];
    v4->sourceEyePos.v[0] = outValues.origin.v[0];
    v4->sourceEyePos.v[2] = outValues.origin.v[2];
    v4->sourceEyePos.v[1] = v8;
    MatrixCopy33(&outValues.axis, &v4->sourceAxis);
    v9 = outValues.origin.v[0];
    v4->sourceFOV = outValues.lens.fov;
    v10 = outValues.origin.v[1];
    v4->targetEyePos.v[0] = v9;
    v4->targetEyePos.v[2] = outValues.origin.v[2];
    v4->targetEyePos.v[1] = v10;
    MatrixCopy33(&outValues.axis, &v4->targetAxis);
    AxisToAngles(&v4->targetAxis, &angles);
    angles.v[2] = 0.0;
    AnglesToAxis(&angles, &v4->targetAxis);
    fov = outValues.lens.fov;
    v4->supportsFOV = 1;
    v4->targetFOV = fov;
    *(_QWORD *)&v4->time = 0i64;
  }
  else
  {
    v12 = NULL;
    v13 = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.stats[4];
    if ( v13 > 0 && (unsigned int)v13 < 0x7FF )
    {
      Entity = CG_GetEntity(localClientNum, v13);
      v12 = Entity;
      if ( !Entity || !BG_IsVehicleEntity(&Entity->nextState) )
        v12 = NULL;
    }
    v15 = v5;
    if ( v12 )
    {
      v16 = s_cameraTransition[v15].lastViewEyePos.v[2];
      *(double *)v4->sourceEyePos.v = *(double *)s_cameraTransition[v15].lastViewEyePos.v;
      *(__m256i *)v4->sourceAxis.m[0].v = *(__m256i *)s_cameraTransition[v15].lastViewAxis.m[0].v;
      v4->sourceEyePos.v[2] = v16;
      v4->sourceAxis.m[2].v[2] = s_cameraTransition[v15].lastViewAxis.m[2].v[2];
      v4->camType = ACTIVE;
      LODWORD(v17) = LODWORD(inOutRefDef->axis.m[0].v[0]) ^ _xmm;
      v18 = LODWORD(inOutRefDef->axis.m[0].v[1]) ^ (unsigned __int128)_xmm;
      v19 = v18;
      *(float *)&v19 = fsqrt((float)(*(float *)&v18 * *(float *)&v18) + (float)(v17 * v17));
      _XMM3 = v19;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm9, xmm0
      }
      forward.v[0] = v17 * (float)(1.0 / *(float *)&_XMM0);
      forward.v[1] = *(float *)&v18 * (float)(1.0 / *(float *)&_XMM0);
      forward.v[2] = 0.0;
      if ( forward.v[0] == 0.0 && (float)(*(float *)&v18 * (float)(1.0 / *(float *)&_XMM0)) == 0.0 )
      {
        AngleVectors(&v12->pose.angles, &forward, NULL, NULL);
        v23 = LODWORD(forward.v[0]);
        *(float *)&v23 = fsqrt((float)(*(float *)&v23 * *(float *)&v23) + (float)(forward.v[1] * forward.v[1]));
        _XMM2 = v23;
        __asm
        {
          vcmpless xmm0, xmm2, cs:__real@80000000
          vblendvps xmm0, xmm2, xmm9, xmm0
        }
        v27 = (float)(forward.v[0] * (float)(1.0 / *(float *)&_XMM0)) == 0.0;
        v28 = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
        forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
        forward.v[1] = v28;
        forward.v[2] = 0.0;
        if ( v27 && v28 == 0.0 )
          forward = identityMatrix33.m[0];
      }
      MatrixRotationZ(&mat, 90.0);
      v29 = FLOAT_N1_0;
      outFraction = FLOAT_N1_0;
      CL_TransientsWorldMP_IsActive();
      *(_QWORD *)&outValues.axis.row2.y = 0i64;
      LODWORD(outValues.origin.v[0]) = 3 * localClientNum + 2;
      outValues.lens.fl.focalDistance = 0.0;
      outValues.lens.fl.fStop = 0.0;
      outValues.apertureType = XCAM_FOV_APERTURE;
      IsActive = CL_TransientsWorldMP_IsActive();
      v31 = DCONST_DVARFLT_bg_deathCamVehPlaneOffset;
      _XMM0 = IsActive;
      __asm { vpcmpeqd xmm3, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_20_0);
      __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
      v36 = 0;
      LODWORD(outValues.lens.fov) = 2065;
      outValues.axis.m[1].v[2] = FLOAT_10_0;
      outValues.axis.m[1].v[1] = *(float *)&_XMM0;
      if ( !DCONST_DVARFLT_bg_deathCamVehPlaneOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamVehPlaneOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      unsignedInt = v31->current.unsignedInt;
      v38 = DCONST_DVARFLT_bg_deathCamVehVertOffset;
      if ( !DCONST_DVARFLT_bg_deathCamVehVertOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamVehVertOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      value = v38->current.value;
      v40 = 4i64;
      do
      {
        v41 = unsignedInt;
        *(float *)&v41 = (float)((float)(*(float *)&unsignedInt * forward.v[0]) + v4->sourceEyePos.v[0]) + (float)(value * 0.0);
        _XMM5 = v41;
        result.v[2] = (float)((float)(*(float *)&unsignedInt * forward.v[2]) + v4->sourceEyePos.v[2]) + (float)(value * 1.0);
        v43 = *(double *)v4->sourceEyePos.v;
        __asm { vunpcklps xmm1, xmm5, xmm4 }
        outValues.axis.m[1].v[0] = result.v[2];
        outValues.axis.m[0].v[0] = v4->sourceEyePos.v[2];
        *(double *)result.v = *(double *)&_XMM1;
        *(double *)&outValues.axis.row0.y = *(double *)&_XMM1;
        *(double *)&outValues.origin.y = v43;
        CG_Camera_Trace((const CameraTraceInfo *)&outValues, &result, &outFraction);
        v45 = outFraction;
        if ( outFraction > v29 )
        {
          v46 = result.v[1];
          v4->targetEyePos.v[0] = result.v[0];
          v4->targetEyePos.v[2] = result.v[2];
          v4->targetEyePos.v[1] = v46;
          v29 = v45;
          v36 = 1;
        }
        AxisTransformVec3(&mat, &forward, &out);
        forward = out;
        --v40;
      }
      while ( v40 );
      if ( !v36 )
      {
        v4->targetEyePos.v[0] = v4->sourceEyePos.v[0];
        v4->targetEyePos.v[1] = v4->sourceEyePos.v[1];
        v4->targetEyePos.v[2] = v4->sourceEyePos.v[2];
      }
      v47 = v4->sourceEyePos.v[0] - v4->targetEyePos.v[0];
      v49 = LODWORD(v4->sourceEyePos.v[1]);
      v48 = v4->sourceEyePos.v[1] - v4->targetEyePos.v[1];
      v50 = v4->sourceEyePos.v[2] - v4->targetEyePos.v[2];
      *(float *)&v49 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v50 * v50));
      _XMM1 = v49;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm9, xmm0
      }
      angles.v[0] = (float)(1.0 / *(float *)&_XMM0) * v47;
      angles.v[2] = (float)(1.0 / *(float *)&_XMM0) * v50;
      angles.v[1] = (float)(1.0 / *(float *)&_XMM0) * v48;
      BG_AxisFromForward(&angles, &identityMatrix33.m[2], &v4->targetAxis);
      v4->time = 0.0;
      v4->totalTime = 0.5;
      v4->vehEntNum = v12->nextState.number;
    }
    else if ( s_cameraTransition[v15].lastWasUsingTuret )
    {
      v54 = s_cameraTransition[v15].last1stViewEyePos.v[2];
      *(double *)v4->sourceEyePos.v = *(double *)s_cameraTransition[v15].last1stViewEyePos.v;
      v55 = *(__m256i *)s_cameraTransition[v15].last1stViewAxis.m[0].v;
      v4->sourceEyePos.v[2] = v54;
      v56 = s_cameraTransition[v15].last1stViewAxis.m[2].v[2];
      *(__m256i *)v4->sourceAxis.m[0].v = v55;
      v4->sourceAxis.m[2].v[2] = v56;
      v4->supportsFOV = 0;
      v4->vehEntNum = 2047;
      v4->camType = 3;
      v4->time = 0.0;
      v4->totalTime = 0.75;
      AxisToAngles(&v4->sourceAxis, &forward);
      v57 = DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg;
      _XMM8 = 0i64;
      __asm
      {
        vroundss xmm2, xmm8, xmm1, 1
        vroundss xmm3, xmm8, xmm2, 1
      }
      forward.v[0] = (float)((float)(0.0027777778 * forward.v[0]) - *(float *)&_XMM2) * 360.0;
      forward.v[1] = (float)((float)(0.0027777778 * forward.v[1]) - *(float *)&_XMM3) * 360.0;
      __asm { vroundss xmm2, xmm8, xmm1, 1 }
      forward.v[2] = (float)((float)(0.0027777778 * forward.v[2]) - *(float *)&_XMM2) * 360.0;
      if ( !DCONST_DVARFLT_bg_deathCamTurretMaxPitchDeg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretMaxPitchDeg") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v57);
      _XMM0 = v57->current.unsignedInt & (unsigned __int128)_xmm;
      __asm { vmaxss  xmm2, xmm0, cs:__real@41200000; max }
      forward.v[1] = (float)LocalClientGlobals->predictedPlayerState.stats[1];
      *(double *)&_XMM0 = I_fclamp(forward.v[0], COERCE_FLOAT(_XMM2 ^ _xmm), *(float *)&_XMM2);
      forward.v[0] = *(float *)&_XMM0;
      forward.v[2] = 0.0;
      AnglesToAxis(&forward, &v4->targetAxis);
      v64 = DCONST_DVARFLT_bg_deathCamTurretVertOffset;
      if ( !DCONST_DVARFLT_bg_deathCamTurretVertOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretVertOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v64);
      v65 = v64->current.value;
      v66 = DCONST_DVARFLT_bg_deathCamTurretBackOffset;
      v4->targetEyePos.v[0] = (float)(v65 * 0.0) + v4->sourceEyePos.v[0];
      v4->targetEyePos.v[1] = (float)(v65 * 0.0) + v4->sourceEyePos.v[1];
      v4->targetEyePos.v[2] = (float)(v65 * 1.0) + v4->sourceEyePos.v[2];
      if ( !v66 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_deathCamTurretBackOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v66);
      LODWORD(v67) = v66->current.integer ^ _xmm;
      v4->targetEyePos.v[0] = (float)(v67 * v4->targetAxis.m[0].v[0]) + v4->targetEyePos.v[0];
      v4->targetEyePos.v[1] = (float)(v67 * v4->targetAxis.m[0].v[1]) + v4->targetEyePos.v[1];
      v4->targetEyePos.v[2] = (float)(v67 * v4->targetAxis.m[0].v[2]) + v4->targetEyePos.v[2];
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
  ClientCameraDeathCam *v4; 
  float totalTime; 
  double v7; 
  float v8; 

  v4 = &s_cameraDeathCam[(__int64)(int)localClientNum];
  if ( v4->camType == INACTIVE || !v4->supportsFOV )
    return 0;
  *outViewFOV = v4->targetFOV;
  totalTime = v4->totalTime;
  if ( totalTime > v4->time )
  {
    if ( totalTime <= 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4945, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( deathCam.totalTime )", "%s < %s\n\t%g, %g", "0.0f", "deathCam.totalTime", *(double *)&_XMM1, totalTime) )
        __debugbreak();
    }
    v7 = I_fclamp(v4->time / v4->totalTime, 0.0, 1.0);
    v8 = 1.0 - (float)((float)((float)(1.0 - *(float *)&v7) * (float)(1.0 - *(float *)&v7)) * (float)(1.0 - *(float *)&v7));
    *outViewFOV = (float)((float)(1.0 - v8) * v4->sourceFOV) + (float)(v8 * v4->targetFOV);
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int pm_type; 
  ClientCameraDeathCam *v6; 
  bool v7; 
  bool result; 
  double TimeScale; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4900, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  v6 = &s_cameraDeathCam[v2];
  v7 = v6->camType != INACTIVE;
  if ( v6->camType )
  {
    if ( pm_type < 7 )
    {
      result = 0;
      v6->vehEntNum = 2047;
      v6->camType = INACTIVE;
      *(_QWORD *)&v6->time = 0i64;
      v6->supportsFOV = 0;
      return result;
    }
  }
  else if ( pm_type >= 7 )
  {
    CG_Camera_DeathCam_Detect((LocalClientNum_t)v2, inOutRefDef);
    v7 = v6->camType != INACTIVE;
  }
  result = 0;
  if ( v7 )
  {
    TimeScale = Com_GetTimeScale();
    ClientCameraDeathCam::Update(&s_cameraDeathCam[v2], (LocalClientNum_t)v2, *(float *)&TimeScale * cls.frametime_base, inOutRefDef);
    if ( pm_type >= 7 )
      return 1;
  }
  return result;
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
  __int128 v2; 
  float v3; 
  double v5; 
  float v6; 
  __int128 v8; 

  v2 = 0i64;
  *(float *)&v2 = (float)value;
  LODWORD(v3) = v2 & _xmm;
  _XMM6 = 0i64;
  v5 = I_fclamp((float)threshold, 0.0, 126.0);
  v6 = *(float *)&v5;
  if ( COERCE_FLOAT(v2 & _xmm) < *(float *)&v5 )
    return 0.0;
  v8 = v2 & _xmm;
  *(float *)&v8 = v3 - *(float *)&v5;
  _XMM1 = v8 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm6, xmm8
    vblendvps xmm2, xmm1, xmm2, xmm0
  }
  return *(float *)&_XMM2 / (float)(127.0 - v6);
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int killCamEntity; 
  ClientCameraKillCam *v6; 
  ClientCameraDeathCam *v7; 
  bool v8; 
  centity_t *Entity; 
  const VehicleClient *Client; 
  CgHandler *Handler; 
  int corpseEntNum; 
  unsigned int killCamLookAtEntity; 
  centity_t *v14; 
  float v15; 
  double v16; 
  float v17; 
  centity_t *v18; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  float v25; 
  float v26; 
  float v27; 
  __int64 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float *v33; 
  __int128 v39; 
  float v41; 
  float v44; 
  __int128 v45; 
  float v46; 
  float v47; 
  float v51; 
  float v52; 
  const dvar_t *v53; 
  float v54; 
  float v55; 
  __int128 v56; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  __int128 v64; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  char v73; 
  CgVehicleSystem *VehicleSystem; 
  CgVehicleSystem *ClientDef; 
  float v76; 
  float v77; 
  float v78; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec3_t v0; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4387, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !LocalClientGlobals->inKillCam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4388, ASSERT_TYPE_ASSERT, "(cgameGlob->inKillCam)", (const char *)&queryFormat, "cgameGlob->inKillCam") )
    __debugbreak();
  killCamEntity = LocalClientGlobals->killCamEntity;
  v6 = &s_cameraKillCam[v2];
  v7 = &s_cameraDeathCam[v2];
  if ( killCamEntity == 2047 && v7->camType == ACTIVE )
    killCamEntity = v7->vehEntNum;
  v8 = v6->initialized && v6->lastKillCamEntity != 2047 && v6->lastKillCamEntityType == 14;
  if ( killCamEntity != 2047 )
  {
    Entity = CG_GetEntity((const LocalClientNum_t)v2, killCamEntity);
    if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((Entity->nextState.eType - 12) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4421, ASSERT_TYPE_ASSERT, "(BG_IsVehicleEntity( &vehEnt->nextState ))", (const char *)&queryFormat, "BG_IsVehicleEntity( &vehEnt->nextState )") )
      __debugbreak();
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v2);
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
    Handler = CgHandler::getHandler((LocalClientNum_t)v2);
    Handler->GetEntityAngles(Handler, Entity->nextState.number, &angles);
    AnglesToAxis(&angles, &axis);
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    corpseEntNum = v7->corpseEntNum;
    killCamLookAtEntity = LocalClientGlobals->killCamLookAtEntity;
    v73 = 0;
    if ( corpseEntNum != 2047 )
    {
      v14 = CG_GetEntity((const LocalClientNum_t)v2, corpseEntNum);
      if ( v14 )
      {
        if ( (v14->flags & 1) != 0 && v14->pose.eType == 2 && v14->pose.killcamRagdollHandle )
        {
          killCamLookAtEntity = v7->corpseEntNum;
          v73 = 1;
        }
      }
    }
    if ( !v6->initialized )
    {
      v15 = v7->sourceEyePos.v[2];
      *(double *)v6->lastEyePos.v = *(double *)v7->sourceEyePos.v;
      *(__m256i *)v6->lastAxis.m[0].v = *(__m256i *)v7->sourceAxis.m[0].v;
      v16 = *(double *)v7->sourceEyePos.v;
      v6->lastEyePos.v[2] = v15;
      v6->lastAxis.m[2].v[2] = v7->sourceAxis.m[2].v[2];
      v17 = v7->sourceEyePos.v[2];
      *(double *)v6->lastLookAtEntPos.v = v16;
      v6->lastLookAtEntPos.v[2] = v17;
    }
    outPos = v6->lastLookAtEntPos;
    if ( killCamLookAtEntity != 2047 )
    {
      v18 = CG_GetEntity((const LocalClientNum_t)v2, killCamLookAtEntity);
      p_pose = &v18->pose;
      if ( (v18->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(v18->nextState.number, (LocalClientNum_t)v2);
        if ( !ClientDObj || !CG_DObjGetWorldTagPos(p_pose, ClientDObj, scr_const.j_head, &outPos) )
          CG_GetPoseOrigin(p_pose, &outPos);
      }
      else
      {
        Com_Printf(14, "[KILLCAM] Lookat entity %d is not valid. Using last pos to lookat.\n", killCamLookAtEntity);
      }
    }
    _XMM13 = LODWORD(FLOAT_1_0);
    _XMM12 = 0i64;
    if ( !v6->initialized )
    {
      __asm
      {
        vcmpless xmm2, xmm12, xmm3
        vblendvps xmm0, xmm13, xmm0, xmm2
      }
      v6->vehSign = *(float *)&_XMM0;
      v6->initialized = 1;
      v6->lastKillCamEntity = killCamEntity;
      v6->lastKillCamEntityType = 14;
    }
    v25 = FLOAT_150_0;
    v26 = FLOAT_600_0;
    v27 = FLOAT_N50_0;
    v28 = *(_QWORD *)&ClientDef->m_vehicleClients[0].rotateSpeed.z;
    v29 = FLOAT_70_0;
    v78 = 0.0;
    v30 = FLOAT_150_0;
    v31 = 0.0;
    v32 = FLOAT_1_0;
    if ( v28 )
    {
      if ( *(_DWORD *)(v28 + 8) != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4521, ASSERT_TYPE_ASSERT, "( vehDef->killCamDef->profile == CAMERAPROFILE_KILLCAM_VEHICLE )", "Killcam for vehicle must be the correct profile: 'KillCam Vehicle'") )
        __debugbreak();
      v33 = *(float **)&ClientDef->m_vehicleClients[0].rotateSpeed.z;
      v26 = v33[65];
      v25 = v33[67];
      v30 = v33[68];
      v27 = v33[70];
      v31 = v33[69];
      v29 = v33[66];
      v32 = v33[72];
      v78 = v33[71];
    }
    _XMM0 = CL_TransientsWorldMP_IsActive();
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_20_0);
    __asm
    {
      vblendvps xmm0, xmm1, xmm2, xmm3
      vmaxss  xmm0, xmm0, xmm8
    }
    v76 = *(float *)&_XMM0;
    *(double *)&_XMM0 = I_fclamp(fsqrt((float)((float)((float)(outOrigin.v[1] - outPos.v[1]) * (float)(outOrigin.v[1] - outPos.v[1])) + (float)((float)(outOrigin.v[0] - outPos.v[0]) * (float)(outOrigin.v[0] - outPos.v[0]))) + (float)((float)(outOrigin.v[2] - outPos.v[2]) * (float)(outOrigin.v[2] - outPos.v[2]))) * (float)(1.0 / v26), 0.0, 1.0);
    v39 = LODWORD(FLOAT_1_0);
    *(float *)&v39 = (float)((float)((float)((float)((float)(1.0 - *(float *)&_XMM0) * 6.0) - 15.0) * (float)(1.0 - *(float *)&_XMM0)) + 10.0) * (float)((float)((float)(1.0 - *(float *)&_XMM0) * (float)(1.0 - *(float *)&_XMM0)) * (float)(1.0 - *(float *)&_XMM0));
    v77 = *(float *)&v39;
    *(double *)&_XMM0 = I_fclamp(v32, 0.0, 1.0);
    _XMM2 = v39 ^ _xmm;
    v41 = axis.m[0].v[1];
    __asm
    {
      vcmpless xmm1, xmm12, xmm6
      vblendvps xmm1, xmm2, xmm8, xmm1
    }
    v44 = axis.m[0].v[0];
    v45 = LODWORD(axis.m[1].v[1]);
    v46 = (float)((float)(axis.m[1].v[0] - axis.m[0].v[0]) * (float)(*(float *)&_XMM0 * *(float *)&_XMM1)) + axis.m[0].v[0];
    v47 = (float)((float)(axis.m[1].v[1] - axis.m[0].v[1]) * (float)(*(float *)&_XMM0 * *(float *)&_XMM1)) + axis.m[0].v[1];
    *(float *)&v45 = fsqrt((float)(v47 * v47) + (float)(v46 * v46));
    _XMM2 = v45;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm13, xmm0
    }
    v51 = v46 * (float)(1.0 / *(float *)&_XMM0);
    v52 = v47 * (float)(1.0 / *(float *)&_XMM0);
    if ( v73 )
    {
      v63 = v6->lastEyePos.v[0];
      v62 = v6->lastEyePos.v[1];
      v61 = v6->lastEyePos.v[2];
      end.v[0] = v63;
      end.v[1] = v62;
      end.v[2] = v61;
    }
    else
    {
      v53 = DVARBOOL_bg_vehKillcamTraceShort;
      v54 = (float)(v27 * v77) + v30;
      v55 = (float)(v31 * v77) - v25;
      end.v[1] = (float)((float)(v55 * v52) + outOrigin.v[1]) + (float)(v54 * axis.m[2].v[1]);
      end.v[2] = (float)(v54 * axis.m[2].v[2]) + outOrigin.v[2];
      end.v[0] = (float)((float)(v55 * v51) + outOrigin.v[0]) + (float)(v54 * axis.m[2].v[0]);
      if ( !DVARBOOL_bg_vehKillcamTraceShort && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehKillcamTraceShort") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v53);
      if ( v53->current.enabled )
      {
        v56 = LODWORD(outPos.v[1]);
        *(float *)&v56 = fsqrt((float)((float)((float)(outPos.v[1] - end.v[1]) * (float)(outPos.v[1] - end.v[1])) + (float)((float)(outPos.v[0] - end.v[0]) * (float)(outPos.v[0] - end.v[0]))) + (float)((float)(outPos.v[2] - end.v[2]) * (float)(outPos.v[2] - end.v[2])));
        _XMM1 = v56;
        __asm
        {
          vcmpless xmm0, xmm1, xmm14
          vblendvps xmm0, xmm1, xmm13, xmm0
        }
        v60 = fsqrt((float)((float)((float)(end.v[1] - outOrigin.v[1]) * (float)(end.v[1] - outOrigin.v[1])) + (float)((float)(end.v[0] - outOrigin.v[0]) * (float)(end.v[0] - outOrigin.v[0]))) + (float)((float)(end.v[2] - outOrigin.v[2]) * (float)(end.v[2] - outOrigin.v[2]))) * 0.5;
        start.v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[0] - end.v[0])) * v60) + end.v[0];
        start.v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[1] - end.v[1])) * v60) + end.v[1];
        start.v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[2] - end.v[2])) * v60) + end.v[2];
      }
      else
      {
        start = outPos;
      }
      CG_Camera_Orbit_Trace((Physics_WorldId)(3 * v2 + 2), v76, Entity->nextState.number, &start, &end, 2065, 0.0, &end);
      v61 = end.v[2];
      v62 = end.v[1];
      v63 = end.v[0];
      v41 = axis.m[0].v[1];
      v44 = axis.m[0].v[0];
    }
    v64 = LODWORD(outPos.v[1]);
    *(float *)&v64 = fsqrt((float)((float)((float)(outPos.v[1] - v62) * (float)(outPos.v[1] - v62)) + (float)((float)(outPos.v[0] - v63) * (float)(outPos.v[0] - v63))) + (float)((float)(outPos.v[2] - v61) * (float)(outPos.v[2] - v61)));
    _XMM4 = v64;
    __asm
    {
      vcmpless xmm0, xmm4, xmm14
      vblendvps xmm0, xmm4, xmm13, xmm0
    }
    v0.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[0] - v63);
    v0.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[1] - v62);
    v0.v[2] = (float)(1.0 / *(float *)&_XMM0) * (float)(outPos.v[2] - v61);
    if ( *(float *)&v64 > 0.001 )
    {
      start.v[0] = 0.0;
      start.v[1] = 0.0;
      start.v[2] = 0.0;
      if ( !VecNCompareCustomEpsilon(v0.v, start.v, 0.001, 3) )
      {
LABEL_68:
        BG_AxisFromForward(&v0, &identityMatrix33.m[2], &inOutRefDef->axis);
        AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
        RefdefView_SetOrg(inOutRefDef, &end);
        CG_ShakeCamera((LocalClientNum_t)v2);
        CG_PerturbCamera(LocalClientGlobals);
        v68 = (float)(v77 * v78) + v29;
        CG_View_UpdateFov((const LocalClientNum_t)v2, v68);
        v69 = outPos.v[1];
        v6->lastLookAtEntPos.v[0] = outPos.v[0];
        v70 = outPos.v[2];
        v6->lastLookAtEntPos.v[1] = v69;
        v71 = end.v[0];
        v6->lastLookAtEntPos.v[2] = v70;
        v72 = end.v[1];
        v6->lastEyePos.v[0] = v71;
        v6->lastEyePos.v[2] = end.v[2];
        v6->lastEyePos.v[1] = v72;
        MatrixCopy33(&inOutRefDef->axis, &s_cameraKillCam[v2].lastAxis);
        v6->lastFov = v68;
        return;
      }
      v41 = axis.m[0].v[1];
      v44 = axis.m[0].v[0];
    }
    v0.v[2] = axis.m[0].v[2];
    v0.v[0] = v44;
    v0.v[1] = v41;
    goto LABEL_68;
  }
  if ( v8 )
  {
    MatrixCopy33(&s_cameraKillCam[v2].lastAxis, &inOutRefDef->axis);
    AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
    RefdefView_SetOrg(inOutRefDef, &v6->lastEyePos);
    CG_ShakeCamera((LocalClientNum_t)v2);
    CG_PerturbCamera(LocalClientGlobals);
    CG_View_UpdateFov((const LocalClientNum_t)v2, v6->lastFov);
  }
}

/*
==============
CG_Camera_OnFinalizeViewValues
==============
*/
void CG_Camera_OnFinalizeViewValues(const LocalClientNum_t localClientNum, RefdefView *refdefView)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  ClientCameraDeathCam *v6; 
  cg_t *v7; 
  cg_t *v8; 
  const CameraDef *Def; 
  const CameraDef *v10; 
  vec3_t *p_offsetTranslation; 
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
  RefdefView *p_view; 
  __int64 v24; 
  __int64 v25; 
  vec3_t outOrg; 
  tmat33_t<vec3_t> axis; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  s_cameras[251][v3].skydiveData.lastCameraTime = LocalClientGlobals->time;
  AxisToQuat(&LocalClientGlobals->refdef.view.axis, &s_cameras[251][v3].skydiveData.lastCameraRot);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, (vec3_t *)&s_cameras[251][v3].skydiveData.lastCameraPos);
  CG_Camera_Transition_FinalizeViewValues((LocalClientNum_t)v3, refdefView);
  v5 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4976, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v6 = &s_cameraDeathCam[v3];
  if ( v6->camType && v5->predictedPlayerState.pm_type < 7 )
  {
    v6->camType = INACTIVE;
    *(_QWORD *)&v6->time = 0i64;
    v6->supportsFOV = 0;
    v6->vehEntNum = 2047;
  }
  v7 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v25) = 2;
    LODWORD(v24) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3506, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3508, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  s_cameraStates[v3].lastRenderedClient = v8->predictedPlayerState.clientNum;
  s_cameraStates[v3].lastClientHadTeleportFlag = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v8->predictedPlayerState.eFlags, ACTIVE, 2u);
  Def = CG_Camera_Active_TryGetDef((LocalClientNum_t)v3);
  v10 = Def;
  if ( Def )
  {
    if ( Def->profile || !Def->firstPerson.applyOffset )
    {
      p_view = &v7->refdef.view;
    }
    else
    {
      AnglesToAxis(&v7->baseGunAngles, &axis);
      p_offsetTranslation = &v10->firstPerson.offsetTranslation;
      if ( p_offsetTranslation == &outOrg && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      v12 = p_offsetTranslation->v[1];
      v13 = v12 * axis.m[1].v[0];
      v14 = p_offsetTranslation->v[0] * axis.m[0].v[0];
      v15 = p_offsetTranslation->v[2];
      v16 = v15 * axis.m[2].v[0];
      v17 = v12 * axis.m[1].v[1];
      v18 = p_offsetTranslation->v[0] * axis.m[0].v[1];
      v19 = v15 * axis.m[2].v[1];
      v20 = v12 * axis.m[1].v[2];
      v21 = p_offsetTranslation->v[0] * axis.m[0].v[2];
      v22 = v15 * axis.m[2].v[2];
      p_view = &v7->refdef.view;
      RefdefView_GetOrg(p_view, &outOrg);
      outOrg.v[0] = (float)((float)(v13 + v14) + v16) + outOrg.v[0];
      outOrg.v[1] = (float)((float)(v18 + v17) + v19) + outOrg.v[1];
      outOrg.v[2] = (float)((float)(v20 + v21) + v22) + outOrg.v[2];
      RefdefView_SetOrg(p_view, &outOrg);
      memset(&outOrg, 0, sizeof(outOrg));
    }
    CG_Camera_CheckSanity(p_view);
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
void CG_Camera_Orbit_Step(ClientCameraData *camData, float frameTime, const vec3_t *orbitOrg, const vec3_t *orbitAngles, vec3_t *retSpherical, bool firstTime, RefdefView *inOutRefDef, unsigned int camIndex)
{
  __int64 localClientNum; 
  const CameraDef *camDef; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float value; 
  const dvar_t *v18; 
  float v19; 
  float timeUntilReturn; 
  bool cameraReturnBasedOnGas; 
  float v22; 
  float v23; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  __int128 v34; 
  float v38; 
  __int128 v39; 
  double v43; 
  __int128 v45; 
  float v46; 
  float polarMaxOnSpeed; 
  float v48; 
  float returnPolar; 
  const dvar_t *v50; 
  float v51; 
  double v52; 
  float v53; 
  const dvar_t *v54; 
  float v55; 
  float v56; 
  float v57; 
  const dvar_t *v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  const dvar_t *v63; 
  const dvar_t *v64; 
  float v65; 
  bool v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float polarMax; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  bool v78; 
  bool v79; 
  float v80; 
  vec3_t *p_curFocusPos; 
  const dvar_t *v82; 
  float v83; 
  const dvar_t *v84; 
  float v85; 
  cg_t *LocalClientGlobals; 
  float v87; 
  float v88; 
  double v89; 
  float v90; 
  int traceMask; 
  Physics_WorldId traceWorld; 
  float v97; 
  LocalClientNum_t v98; 
  __int16 linkEnt; 
  centity_t *Entity; 
  vec3_t *v101; 
  float v102; 
  vec3_t *p_curEyePos; 
  float v104; 
  const dvar_t *v107; 
  float v108; 
  __int128 v110; 
  double Float_Internal_DebugName; 
  __int128 v113; 
  float v114; 
  float v120; 
  LocalClientNum_t v121; 
  __int128 v122; 
  RefdefView *v126; 
  double v127; 
  float v128; 
  float v129; 
  float v130; 
  float v131; 
  float outFraction; 
  float outVertOrRoll; 
  float outHorizOrPitch[2]; 
  RefdefView *refdefView; 
  CameraTraceInfo traceInfo; 
  float v137; 
  vec3_t forward; 
  vec3_t vector; 
  vec3_t v140; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> outAxis; 

  refdefView = inOutRefDef;
  if ( firstTime || s_cameraTransition[camData->localClientNum].active )
    camData->orbitCamData.inputUpdated = 0;
  else
    CG_Camera_Orbit_Update_Input(camData, orbitAngles, retSpherical, frameTime);
  s_cameraTransition[camData->localClientNum].lastWas3PWithFocus = 1;
  localClientNum = camData->localClientNum;
  *(double *)s_cameraTransition[localClientNum].lastFocusOrigin.v = *(double *)orbitOrg->v;
  s_cameraTransition[localClientNum].lastFocusOrigin.v[2] = orbitOrg->v[2];
  camDef = camData->camDef;
  if ( !camDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2743, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  v14 = camData->orbitCamData.timeUntilReturn - (float)(frameTime * camData->orbitCamData.returnTimeFactor);
  camData->orbitCamData.timeSimulating = frameTime + camData->orbitCamData.timeSimulating;
  camData->orbitCamData.timeUntilReturn = v14;
  v15 = orbitAngles->v[2];
  *(_QWORD *)angles.v = *(_QWORD *)orbitAngles->v;
  angles.v[2] = v15;
  angles.v[0] = 0.0;
  AnglesToAxis(&angles, &axis);
  if ( camData->orbitCamData.cameraInstantRecenter )
  {
    if ( camData->orbitCamData.inputUpdated )
    {
      camData->orbitCamData.cameraInstantRecenter = 0;
    }
    else
    {
      v16 = DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamAzimuthManualRecenterSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAzimuthManualRecenterSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      value = v16->current.value;
      v18 = DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed;
      if ( !DCONST_DVARFLT_bg_vehCamPolarManualRecenterSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarManualRecenterSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v19 = v18->current.value;
      CG_Camera_DampLerp(&camData->orbitCamData.sphericalCoords.v[1], retSpherical->v[1], frameTime, value);
      CG_Camera_DampLerp(&camData->orbitCamData.sphericalCoords.v[2], retSpherical->v[2], frameTime, v19);
    }
    goto LABEL_43;
  }
  if ( !camData->orbitCamData.cameraReturn )
    goto LABEL_41;
  if ( camData->orbitCamData.inputUpdated )
    goto LABEL_42;
  if ( (timeUntilReturn = camData->orbitCamData.timeUntilReturn, timeUntilReturn > 0.0) || !camData->orbitCamData.autoRecenterEnabled || (cameraReturnBasedOnGas = camData->orbitCamData.cameraReturnBasedOnGas) && COERCE_FLOAT(LODWORD(camData->orbitCamData.inputGas) & _xmm) <= 0.001 || camData->orbitCamData.speedForward < 0.0 )
  {
LABEL_41:
    if ( !camData->orbitCamData.inputUpdated )
      goto LABEL_43;
LABEL_42:
    camData->orbitCamData.timeUntilReturn = camDef->orbit.returnTimeTo;
    goto LABEL_43;
  }
  if ( firstTime )
  {
    v22 = FLOAT_1_0;
  }
  else
  {
    v23 = COERCE_FLOAT(LODWORD(timeUntilReturn) & _xmm) * camDef->orbit.easeInFactor;
    I_fclamp(v23, 0.0, 1.0);
    cameraReturnBasedOnGas = camData->orbitCamData.cameraReturnBasedOnGas;
    v22 = v23;
  }
  if ( cameraReturnBasedOnGas )
  {
    _XMM1 = LODWORD(camData->orbitCamData.inputGas);
    __asm { vmaxss  xmm12, xmm1, xmm8 }
  }
  else
  {
    *(float *)&_XMM12 = FLOAT_1_0;
  }
  *(float *)&_XMM10 = FLOAT_1_0;
  if ( camData->orbitCamData.cameraReturnDot )
  {
    v27 = camData->orbitCamData.curFocusPos.v[0] - camData->curEyePos.v[0];
    v29 = LODWORD(camData->orbitCamData.curFocusPos.v[1]);
    v28 = camData->orbitCamData.curFocusPos.v[1] - camData->curEyePos.v[1];
    v30 = camData->orbitCamData.curFocusPos.v[2] - camData->curEyePos.v[2];
    *(float *)&v29 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v30 * v30));
    _XMM4 = v29;
    __asm
    {
      vcmpless xmm0, xmm4, xmm14
      vblendvps xmm0, xmm4, xmm9, xmm0
    }
    forward.v[0] = v27 * (float)(1.0 / *(float *)&_XMM0);
    forward.v[2] = v30 * (float)(1.0 / *(float *)&_XMM0);
    forward.v[1] = v28 * (float)(1.0 / *(float *)&_XMM0);
    if ( *(float *)&v29 > 0.001 )
    {
      BG_AxisFromForward(&forward, &identityMatrix33.m[2], &outAxis);
      v34 = LODWORD(axis.m[0].v[0]);
      *(float *)&v34 = fsqrt((float)(*(float *)&v34 * *(float *)&v34) + (float)(axis.m[0].v[1] * axis.m[0].v[1]));
      _XMM2 = v34;
      __asm
      {
        vcmpless xmm0, xmm2, xmm14
        vblendvps xmm0, xmm2, xmm9, xmm0
      }
      v38 = 1.0 / *(float *)&_XMM0;
      v39 = LODWORD(outAxis.m[0].v[0]);
      *(float *)&v39 = fsqrt((float)(*(float *)&v39 * *(float *)&v39) + (float)(outAxis.m[0].v[1] * outAxis.m[0].v[1]));
      _XMM2 = v39;
      __asm
      {
        vcmpless xmm0, xmm2, xmm14
        vblendvps xmm0, xmm2, xmm9, xmm0
      }
      v43 = I_fclamp((float)((float)((float)(1.0 / *(float *)&_XMM0) * outAxis.m[0].v[0]) * (float)(axis.m[0].v[0] * v38)) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * outAxis.m[0].v[1]) * (float)(axis.m[0].v[1] * v38)), 0.0, 1.0);
      if ( !camData->orbitCamData.inputUpdated )
      {
        v45 = LODWORD(FLOAT_1_0);
        *(float *)&v45 = 1.0 - *(float *)&v43;
        _XMM0 = v45;
        __asm { vmaxss  xmm10, xmm0, cs:__real@3ecccccd }
      }
    }
  }
  v46 = (float)(*(float *)&_XMM12 * v22) * camData->orbitCamData.speedFactor;
  CG_Camera_DampLerp(&camData->orbitCamData.sphericalCoords.v[1], retSpherical->v[1], frameTime, (float)((float)((float)(v46 * camDef->orbit.returnAzimuthSpeed) * (float)camDef->orbit.returnAzimuth) * *(float *)&_XMM10) * camData->orbitCamData.returnAzimuthFactor);
  polarMaxOnSpeed = camData->vehicleData.polarMaxOnSpeed;
  v48 = retSpherical->v[2];
  returnPolar = (float)camDef->orbit.returnPolar;
  if ( polarMaxOnSpeed > 0.001 )
  {
    v50 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedRange") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    v51 = NormalizeRange_0(camData->vehicleData.normalSpeed, v50->current.value);
    v48 = (float)((float)(1.0 - (float)((float)(v51 * v51) * v51)) * retSpherical->v[2]) + (float)((float)((float)(v51 * v51) * v51) * polarMaxOnSpeed);
    returnPolar = FLOAT_1_0;
  }
  CG_Camera_DampLerp(&camData->orbitCamData.sphericalCoords.v[2], v48, frameTime, (float)(v46 * camDef->orbit.returnPolarSpeed) * returnPolar);
LABEL_43:
  if ( !firstTime && !s_cameraTransition[camData->localClientNum].active )
  {
    v52 = AngleNormalize360(camData->orbitCamData.sphericalCoords.v[1]);
    camData->orbitCamData.sphericalCoords.v[1] = *(float *)&v52;
  }
  v53 = 0.0;
  if ( camData->orbitCamData.polarElevation )
  {
    v54 = DCONST_DVARFLT_bg_vehCamPolarElevThreshold;
    if ( !DCONST_DVARFLT_bg_vehCamPolarElevThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarElevThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    v55 = v54->current.value;
    v57 = camData->orbitCamData.sphericalCoords.v[2] - v55;
    v56 = v57;
    if ( v57 > 0.0 )
    {
      v58 = DCONST_DVARFLT_bg_vehCamPolarElevFactor;
      if ( !DCONST_DVARFLT_bg_vehCamPolarElevFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPolarElevFactor") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      v59 = v58->current.value;
      v60 = camDef->orbit.polarMax - v55;
      if ( v60 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2841, ASSERT_TYPE_ASSERT, "(rangeOffset > 0.0f)", (const char *)&queryFormat, "rangeOffset > 0.0f") )
        __debugbreak();
      v61 = v57 / v60;
      if ( (float)(v56 / v60) >= 0.0 )
      {
        if ( v61 < 1.0 )
          v62 = (float)(3.0 - (float)(v61 * 2.0)) * (float)(v61 * v61);
        else
          v62 = FLOAT_1_0;
      }
      else
      {
        v62 = 0.0;
      }
      v53 = (float)(v62 * v60) * v59;
    }
  }
  v63 = DCONST_DVARBOOL_bg_vehcamUseDvars;
  if ( !DCONST_DVARBOOL_bg_vehcamUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v63);
  if ( v63->current.enabled )
  {
    v64 = DCONST_DVARFLT_bg_vehcamPivotZ;
    if ( !DCONST_DVARFLT_bg_vehcamPivotZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamPivotZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v64);
    v65 = v64->current.value;
  }
  else
  {
    v65 = camDef->orbit.pivotOffset.v[2];
  }
  v66 = !camData->orbitCamData.cameraReturn;
  v67 = camDef->orbit.pivotOffset.v[1];
  v68 = camData->orbitCamData.sphericalCoords.v[1];
  v69 = v65 + v53;
  v70 = (float)((float)(v65 + v53) * 0.0) + orbitOrg->v[0];
  v71 = (float)(v65 + v53) * 0.0;
  polarMax = camData->orbitCamData.sphericalCoords.v[2];
  v73 = v70 + (float)(v67 * axis.m[1].v[0]);
  v74 = (float)(v71 + orbitOrg->v[1]) + (float)(v67 * axis.m[1].v[1]);
  v75 = (float)((float)(v69 * 1.0) + orbitOrg->v[2]) + (float)(v67 * axis.m[1].v[2]);
  forward.v[2] = v75;
  forward.v[0] = v73;
  forward.v[1] = v74;
  if ( v66 )
  {
    v76 = (float)(v68 + orbitAngles->v[1]) - camData->orbitCamData.lastYaw;
    AngleNormalize360(v76);
    v68 = v76;
  }
  if ( camData->orbitCamData.inverseView )
  {
    v77 = retSpherical->v[1] + 180.0;
    AngleNormalize360(v77);
    polarMax = camDef->orbit.polarMax;
    v68 = v77;
  }
  v78 = BG_Camera_GetSkydiveOrbitDefIndex() == camIndex;
  v79 = camDef->transitionIn.active && camDef->transitionIn.time > 0.0;
  if ( firstTime || !v79 || camDef->orbit.interpolateFocus == firstTime || v78 )
  {
    p_curFocusPos = &camData->orbitCamData.curFocusPos;
    camData->orbitCamData.curFocusPos.v[0] = v73;
    camData->orbitCamData.curFocusPos.v[1] = v74;
    camData->orbitCamData.curFocusPos.v[2] = v75;
  }
  else
  {
    v80 = camData->orbitCamData.timeSimulating * 16.0;
    I_fclamp(v80, 2.0, 64.0);
    p_curFocusPos = &camData->orbitCamData.curFocusPos;
    CG_Camera_DampLerp_0(&camData->orbitCamData.curFocusPos, &forward, frameTime, v80);
  }
  if ( camData->vehicleData.orbitNoise )
  {
    v82 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch;
    outHorizOrPitch[0] = 0.0;
    outVertOrRoll = 0.0;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoisePitch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v82);
    v83 = v82->current.value;
    v84 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll;
    if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRoll") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v84);
    v85 = v84->current.value;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
    CG_Camera_Vehicles_GetSpeedNoiseDelta(camData->vehicleData.normalSpeed, LocalClientGlobals->time, v83, v85, outHorizOrPitch, &outVertOrRoll);
    v68 = v68 + outVertOrRoll;
    polarMax = polarMax + outHorizOrPitch[0];
  }
  v87 = v68 * 0.017453292;
  v88 = polarMax * 0.017453292;
  GetCartesianCoordinates(v88, v87, camData->orbitCamData.sphericalCoords.v[0], &camData->tgtEyePos);
  camData->tgtEyePos.v[0] = p_curFocusPos->v[0] + camData->tgtEyePos.v[0];
  camData->tgtEyePos.v[1] = p_curFocusPos->v[1] + camData->tgtEyePos.v[1];
  camData->tgtEyePos.v[2] = p_curFocusPos->v[2] + camData->tgtEyePos.v[2];
  v89 = *(double *)p_curFocusPos->v;
  v90 = p_curFocusPos->v[2];
  LODWORD(traceInfo.start.v[0]) = 2;
  _XMM0 = CL_TransientsWorldMP_IsActive();
  traceMask = camData->traceMask;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_20_0);
  *(_OWORD *)&traceInfo.start.y = 0i64;
  *(const int **)((char *)&traceInfo.ignoreEntities + 4) = NULL;
  traceInfo.contentMask = 0;
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  traceInfo.displFromStart = *(float *)&_XMM0;
  *(&traceInfo.displFromStart + 1) = FLOAT_10_0;
  traceInfo.end.v[2] = 0.0;
  traceInfo.collRadius = 0.0;
  LODWORD(traceInfo.innerRadius) = 2705;
  traceInfo.innerRadiusElevation = 0.0;
  v137 = 0.0;
  *(float *)&_XMM0 = camDef->orbit.traceCollRadius;
  LODWORD(traceInfo.innerRadius) = traceMask;
  traceInfo.collRadius = camData->tgtEyePos.v[2];
  v66 = camData->traceIgnoreEntity == 2047;
  traceInfo.displFromStart = *(float *)&_XMM0;
  *(float *)&_XMM0 = camData->traceDisplaceFrom;
  *(const int **)((char *)&traceInfo.ignoreEntities + 4) = &camData->traceIgnoreEntity;
  traceWorld = camData->traceWorld;
  *(&traceInfo.displFromStart + 1) = *(float *)&_XMM0;
  *(_QWORD *)&_XMM0 = *(_QWORD *)camData->tgtEyePos.v;
  traceInfo.contentMask = !v66;
  LODWORD(traceInfo.start.v[0]) = traceWorld;
  v97 = camData->tgtEyePos.v[2];
  outFraction = FLOAT_1_0;
  *(double *)&traceInfo.start.y = v89;
  traceInfo.end.v[0] = v90;
  *(double *)&traceInfo.end.y = *(double *)&_XMM0;
  *(double *)forward.v = *(double *)&_XMM0;
  forward.v[2] = v97;
  if ( CG_Camera_Trace((const CameraTraceInfo *)&traceInfo.start, &forward, &outFraction) || firstTime )
  {
    _XMM6 = LODWORD(forward.v[0]);
    v113 = LODWORD(forward.v[1]);
    v114 = forward.v[2];
    *(float *)&v113 = fsqrt((float)((float)((float)(forward.v[1] - traceInfo.start.v[2]) * (float)(forward.v[1] - traceInfo.start.v[2])) + (float)((float)(forward.v[0] - traceInfo.start.v[1]) * (float)(forward.v[0] - traceInfo.start.v[1]))) + (float)((float)(forward.v[2] - traceInfo.end.v[0]) * (float)(forward.v[2] - traceInfo.end.v[0])));
    _XMM1 = v113;
    __asm
    {
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    camData->orbitCamData.interpolatedRadial = *(float *)&_XMM0;
    __asm { vunpcklps xmm2, xmm6, xmm5 }
    *(double *)camData->curEyePos.v = *(double *)&_XMM2;
    camData->curEyePos.v[2] = v114;
  }
  else
  {
    if ( camData->orbitCamData.curEyePosLocalValid && !camData->orbitCamData.disableEyePosLocal )
    {
      v98 = camData->localClientNum;
      linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum)->predictedPlayerState.linkEnt;
      if ( linkEnt != 2047 )
      {
        Entity = CG_GetEntity(v98, linkEnt);
        v101 = (vec3_t *)Entity;
        if ( Entity )
        {
          if ( (Entity->flags & 1) != 0 )
          {
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            forward = v101[6];
            AnglesToAxis(&forward, &outAxis);
            AxisTransformVec3(&outAxis, &camData->orbitCamData.curEyePosLocal, &out);
            v102 = outOrigin.v[1] + out.v[1];
            camData->curEyePos.v[0] = outOrigin.v[0] + out.v[0];
            camData->curEyePos.v[2] = outOrigin.v[2] + out.v[2];
            camData->curEyePos.v[1] = v102;
          }
        }
      }
    }
    if ( camDef->orbit.lerpSpeed < 0.001 || v78 )
    {
      v104 = camData->tgtEyePos.v[2];
      p_curEyePos = &camData->curEyePos;
      *(double *)camData->curEyePos.v = *(double *)camData->tgtEyePos.v;
      camData->curEyePos.v[2] = v104;
    }
    else
    {
      p_curEyePos = &camData->curEyePos;
      CG_Camera_DampLerp_0(&camData->curEyePos, &camData->tgtEyePos, frameTime, camData->orbitCamData.lerpSpeed);
    }
    _XMM1 = LODWORD(camData->orbitCamData.inputAzimuthValue) & (unsigned __int128)_xmm;
    __asm { vmaxss  xmm6, xmm1, xmm0 }
    if ( !CL_Input_IsGamepadEnabled(camData->localClientNum) )
    {
      v107 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v107);
      if ( v107->current.enabled )
        I_fclamp(*(float *)&_XMM6, 0.0, 1.0);
    }
    v110 = LODWORD(camData->tgtEyePos.v[1]);
    *(float *)&v110 = camData->tgtEyePos.v[1] - p_curEyePos->v[1];
    v108 = camData->tgtEyePos.v[2] - p_curEyePos->v[2];
    *(float *)&v110 = (float)(fsqrt((float)((float)(*(float *)&v110 * *(float *)&v110) + (float)((float)(camData->tgtEyePos.v[0] - p_curEyePos->v[0]) * (float)(camData->tgtEyePos.v[0] - p_curEyePos->v[0]))) + (float)(v108 * v108)) * (float)(1.0 - *(float *)&_XMM6)) + camData->orbitCamData.sphericalCoords.v[0];
    _XMM6 = v110;
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehCamLerpBackAfterHit, "bg_vehCamLerpBackAfterHit");
    if ( *(float *)&Float_Internal_DebugName <= 0.001 || v78 )
    {
      camData->orbitCamData.interpolatedRadial = *(float *)&v110;
      goto LABEL_118;
    }
    CG_Camera_DampLerp(&camData->orbitCamData.interpolatedRadial, *(float *)&v110, frameTime, *(float *)&Float_Internal_DebugName);
  }
  _XMM6 = LODWORD(camData->orbitCamData.interpolatedRadial);
LABEL_118:
  camData->orbitCamData.lastFrac = outFraction;
  __asm { vmaxss  xmm2, xmm6, xmm9; radius }
  GetCartesianCoordinates(v88, v87, *(float *)&_XMM2, &vector);
  v120 = vector.v[1] + p_curFocusPos->v[1];
  v121 = camData->localClientNum;
  vector.v[0] = vector.v[0] + p_curFocusPos->v[0];
  vector.v[2] = vector.v[2] + p_curFocusPos->v[2];
  vector.v[1] = v120;
  CG_Camera_StoreLinkedEyePos(v121, camData);
  v122 = LODWORD(vector.v[1]);
  *(float *)&v122 = fsqrt((float)((float)((float)(vector.v[1] - traceInfo.start.v[2]) * (float)(vector.v[1] - traceInfo.start.v[2])) + (float)((float)(vector.v[0] - traceInfo.start.v[1]) * (float)(vector.v[0] - traceInfo.start.v[1]))) + (float)((float)(vector.v[2] - traceInfo.end.v[0]) * (float)(vector.v[2] - traceInfo.end.v[0])));
  _XMM4 = v122;
  __asm
  {
    vcmpless xmm0, xmm4, cs:__real@80000000
    vblendvps xmm0, xmm4, xmm9, xmm0
  }
  if ( *(float *)&v122 <= 0.001 )
  {
    forward = vector;
  }
  else
  {
    traceInfo.start.v[1] = traceInfo.start.v[1] + (float)((float)((float)(vector.v[0] - traceInfo.start.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * *(&traceInfo.displFromStart + 1));
    traceInfo.end.v[0] = traceInfo.end.v[0] + (float)((float)((float)(vector.v[2] - traceInfo.end.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * *(&traceInfo.displFromStart + 1));
    traceInfo.start.v[2] = traceInfo.start.v[2] + (float)((float)((float)(vector.v[1] - traceInfo.start.v[2]) * (float)(1.0 / *(float *)&_XMM0)) * *(&traceInfo.displFromStart + 1));
    BG_Camera_VehicleCameraShapeCast(SLODWORD(traceInfo.start.v[0]), *(const int **)((char *)&traceInfo.ignoreEntities + 4), traceInfo.contentMask, SLODWORD(traceInfo.innerRadius), (const vec3_t *)&traceInfo.start.v[1], &vector, &outFraction);
    forward.v[0] = (float)((float)(vector.v[0] - traceInfo.start.v[1]) * outFraction) + traceInfo.start.v[1];
    forward.v[1] = (float)((float)(vector.v[1] - traceInfo.start.v[2]) * outFraction) + traceInfo.start.v[2];
    forward.v[2] = (float)((float)(vector.v[2] - traceInfo.end.v[0]) * outFraction) + traceInfo.end.v[0];
  }
  v126 = refdefView;
  RefdefView_SetOrg(refdefView, &forward);
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vehcamUseDvars, "bg_vehcamUseDvars") )
  {
    v127 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vehcamPivotX, "bg_vehcamPivotX");
    v128 = *(float *)&v127;
  }
  else
  {
    v128 = 0.0;
  }
  v129 = (float)((float)(axis.m[0].v[0] * v128) + p_curFocusPos->v[0]) - forward.v[0];
  v130 = (float)((float)(axis.m[0].v[1] * v128) + p_curFocusPos->v[1]) - forward.v[1];
  v131 = (float)((float)(axis.m[0].v[2] * v128) + p_curFocusPos->v[2]) - forward.v[2];
  v140.v[2] = v131;
  v140.v[0] = v129;
  v140.v[1] = v130;
  if ( v129 == 0.0 && v130 == 0.0 && v131 == 0.0 )
    v140 = axis.m[0];
  BG_AxisFromForward(&v140, &identityMatrix33.m[2], &v126->axis);
}

/*
==============
CG_Camera_Orbit_Trace
==============
*/
char CG_Camera_Orbit_Trace(Physics_WorldId worldId, float collRadius, int ignoreEntityNum, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, vec3_t *result)
{
  int skipEntityCount; 
  const int *skipEntities; 
  float fraction; 
  float v12; 
  int v14; 
  Bounds bounds; 
  trace_t results; 

  skipEntityCount = 0;
  skipEntities = &v14;
  if ( ignoreEntityNum != 2047 )
    skipEntities = NULL;
  v14 = ignoreEntityNum;
  LOBYTE(skipEntityCount) = skipEntities != NULL;
  bounds.midPoint.v[0] = 0.0;
  bounds.midPoint.v[1] = 0.0;
  bounds.midPoint.v[2] = 0.0;
  bounds.halfSize.v[0] = collRadius;
  bounds.halfSize.v[1] = collRadius;
  bounds.halfSize.v[2] = collRadius;
  PhysicsQuery_LegacyTraceSkipEntities(worldId, &results, start, end, &bounds, skipEntities, skipEntityCount, 1, contentMask, 0, NULL, All);
  fraction = results.fraction;
  v12 = end->v[0];
  if ( results.fraction < 1.0 )
  {
    result->v[0] = (float)((float)(v12 - start->v[0]) * results.fraction) + start->v[0];
    result->v[1] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
    result->v[2] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
    return 1;
  }
  else
  {
    result->v[0] = v12;
    *(_QWORD *)&result->y = *(_QWORD *)&end->y;
    return 0;
  }
}

/*
==============
CG_Camera_Orbit_Update
==============
*/
void CG_Camera_Orbit_Update(ClientCameraData *camData, RefdefView *inOutRefDef, float frameTime, unsigned int camIndex)
{
  const CameraDef *camDef; 
  cg_t *LocalClientGlobals; 
  bool firstTime; 
  double v10; 
  float initialPolar; 
  double v12; 
  double v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v18; 
  float v22; 
  vec3_t retSpherical; 
  vec3_t angles; 
  vec3_t outAngles; 
  vec3_t outOrg; 

  camDef = camData->camDef;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  CG_Camera_Orbit_GetOriginAndAngle(camData, &outOrg, &outAngles);
  firstTime = CG_Camera_InitializeValues(camData);
  if ( firstTime )
  {
    camData->traceIgnoreEntity = LocalClientGlobals->predictedPlayerState.clientNum;
    camData->orbitCamData.camPerspectiveMode = 0;
    if ( BG_Camera_GetSkydiveOrbitDefIndex() == camIndex )
    {
      AxisToAngles(&inOutRefDef->axis, &angles);
      v10 = AngleNormalize360(angles.v[1] - 180.0);
      camData->orbitCamData.sphericalCoords.v[1] = *(float *)&v10;
      initialPolar = 90.0 - angles.v[0];
    }
    else
    {
      v12 = AngleNormalize360((float)(outAngles.v[1] + camDef->orbit.initialAzimuth) - 180.0);
      camData->orbitCamData.sphericalCoords.v[1] = *(float *)&v12;
      initialPolar = camDef->orbit.initialPolar;
    }
    v13 = AngleNormalize360(initialPolar);
    camData->orbitCamData.sphericalCoords.v[2] = *(float *)&v13;
    camData->orbitCamData.cameraReturn = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)camDef->orbit.initialReturn) & _xmm) > 0.001;
  }
  camData->orbitCamData.sphericalCoords.v[0] = camDef->orbit.range;
  if ( !camData->orbitCamData.cameraReturn || camData->orbitCamData.inputUpdated )
  {
    v22 = camData->orbitCamData.sphericalCoords.v[2];
    *(_QWORD *)retSpherical.v = *(_QWORD *)camData->orbitCamData.sphericalCoords.v;
    retSpherical.v[2] = v22;
  }
  else
  {
    v14 = LODWORD(outAngles.v[1]);
    *(double *)&v14 = AngleNormalize360(outAngles.v[1]);
    v16 = v14;
    *(float *)&v16 = *(float *)&v14 + camDef->orbit.initialAzimuth;
    v15 = v16;
    *(float *)&v16 = *(float *)&v16 + 180.0;
    _XMM4 = v16;
    v18 = v15;
    *(float *)&v18 = (float)(*(float *)&v15 - 180.0) - camData->orbitCamData.sphericalCoords.v[1];
    _XMM0 = v18 & (unsigned int)_xmm;
    __asm
    {
      vcmpltss xmm1, xmm0, xmm2
      vblendvps xmm0, xmm4, xmm3, xmm1
    }
    retSpherical.v[1] = *(float *)&_XMM0;
    *(double *)&_XMM0 = AngleNormalize360(camDef->orbit.initialPolar);
    retSpherical.v[2] = *(float *)&_XMM0;
    retSpherical.v[0] = camDef->orbit.range;
  }
  CG_Camera_Orbit_Step(camData, frameTime, &outOrg, &vec3_origin, &retSpherical, firstTime, inOutRefDef, camIndex);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
}

/*
==============
CG_Camera_Orbit_Update_Input
==============
*/
bool CG_Camera_Orbit_Update_Input(ClientCameraData *camData, const vec3_t *orbitAngles, vec3_t *returnSpherical, float frameTime)
{
  cg_t *LocalClientGlobals; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  unsigned __int64 buttons; 
  const CameraDef *camDef; 
  int buttonToggleReturn; 
  int lastCmdTimeButton0; 
  bool cameraReturn; 
  double v15; 
  int buttonRecenter; 
  const dvar_t *v17; 
  bool v18; 
  char v19; 
  char v20; 
  bool useRemoteAngles; 
  char pitchmove; 
  char yawmove; 
  float InputCharValueWithThreshold; 
  float v25; 
  const dvar_t *v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v31; 
  __int128 v34; 
  bool v38; 
  double v39; 
  double v40; 
  double v41; 
  int v42; 
  float v43; 
  float v44; 
  char v45; 
  float v46; 
  bool result; 
  float v48; 
  usercmd_s ucmd; 
  float v50; 

  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3006, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( BG_IsSpectatingOrSpectator(&LocalClientGlobals->predictedPlayerState) )
    return 0;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)camData->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( !CL_GetUserCmd(camData->localClientNum, CmdNumber, &ucmd) )
    return 0;
  buttons = ucmd.buttons;
  camDef = camData->camDef;
  if ( (ucmd.buttons & 0x20000000000000i64) != 0 )
    camData->orbitCamData.cameraInstantRecenter = 1;
  buttonToggleReturn = camDef->orbit.buttonToggleReturn;
  if ( buttonToggleReturn > 0 )
  {
    if ( _bittest64((const __int64 *)&buttons, (unsigned __int8)(buttonToggleReturn - 1)) )
    {
      lastCmdTimeButton0 = camData->orbitCamData.lastCmdTimeButton0;
      if ( lastCmdTimeButton0 > ucmd.commandTime || ucmd.commandTime - lastCmdTimeButton0 > 700 )
      {
        camData->orbitCamData.lastCmdTimeButton0 = ucmd.commandTime;
        cameraReturn = camData->orbitCamData.cameraReturn;
        camData->orbitCamData.cameraReturn = !cameraReturn;
        if ( cameraReturn )
        {
          camData->orbitCamData.lastYaw = orbitAngles->v[1];
        }
        else
        {
          camData->orbitCamData.timeUntilReturn = 0.0;
          v15 = AngleNormalize360((float)(orbitAngles->v[1] + camData->orbitCamData.sphericalCoords.v[1]) - camData->orbitCamData.lastYaw);
          camData->orbitCamData.sphericalCoords.v[1] = *(float *)&v15;
        }
      }
    }
  }
  buttonRecenter = camDef->orbit.buttonRecenter;
  if ( buttonRecenter > 0 && _bittest64((const __int64 *)&buttons, (unsigned __int8)(buttonRecenter - 1)) )
    camData->orbitCamData.timeUntilReturn = 0.0;
  v17 = DVARBOOL_bg_vehEnableInverseView;
  if ( !DVARBOOL_bg_vehEnableInverseView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnableInverseView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = v17->current.enabled && (buttons & 0x2000) != 0;
  camData->orbitCamData.inverseView = v18;
  v19 = 4;
  v20 = 3;
  if ( !CL_Input_IsGamepadEnabled(camData->localClientNum) )
  {
    v19 = 0;
    v20 = 0;
  }
  useRemoteAngles = camData->orbitCamData.useRemoteAngles;
  pitchmove = ucmd.pitchmove;
  if ( useRemoteAngles )
    pitchmove = ucmd.remoteControlAngles[0];
  if ( camData->orbitCamData.inverseView )
  {
    yawmove = 0;
  }
  else
  {
    yawmove = ucmd.yawmove;
    if ( useRemoteAngles )
      yawmove = ucmd.remoteControlAngles[1];
  }
  InputCharValueWithThreshold = CG_Camera_GetInputCharValueWithThreshold(pitchmove, v19);
  v25 = CG_Camera_GetInputCharValueWithThreshold(yawmove, v20);
  _XMM10 = 0i64;
  if ( !CL_Input_IsGamepadEnabled(camData->localClientNum) )
  {
    v27 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
    if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( v27->current.enabled )
    {
      v28 = LODWORD(FLOAT_10_0);
      *(double *)&v28 = I_pow(10.0, COERCE_FLOAT(LODWORD(InputCharValueWithThreshold) & _xmm));
      v29 = v28;
      *(float *)&v29 = *(float *)&v28 - 1.0;
      _XMM2 = v29 ^ _xmm;
      v31 = LODWORD(FLOAT_10_0);
      __asm
      {
        vcmpless xmm1, xmm10, xmm9
        vblendvps xmm1, xmm2, xmm3, xmm1
      }
      v50 = *(float *)&_XMM1;
      *(double *)&v31 = I_pow(10.0, COERCE_FLOAT(LODWORD(v25) & _xmm));
      v34 = v31;
      *(float *)&v34 = *(float *)&v31 - 1.0;
      _XMM1 = v34 ^ _xmm;
      __asm
      {
        vcmpless xmm0, xmm10, xmm8
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      v48 = *(float *)&_XMM0;
      v38 = (LocalClientGlobals->predictedPlayerState.vehicleState.flags & 1) != 0 || LocalClientGlobals->predictedPlayerState.remoteControlEnt != 2047;
      if ( camDef->orbit.mouseInputMultiplier < 0.0 || v38 )
      {
        InputCharValueWithThreshold = v50;
        v25 = *(float *)&_XMM0;
      }
      else
      {
        v39 = I_fclamp(v50, -1.0, 1.0);
        InputCharValueWithThreshold = *(float *)&v39;
        v40 = I_fclamp(v48, -1.0, 1.0);
        v25 = *(float *)&v40;
      }
    }
  }
  camData->orbitCamData.inputUpdated = 0;
  if ( COERCE_FLOAT(LODWORD(InputCharValueWithThreshold) & _xmm) <= 0.0 )
  {
    InputCharValueWithThreshold = 0.0;
  }
  else
  {
    v41 = I_fclamp(camData->orbitCamData.sphericalCoords.v[2] - (float)((float)(InputCharValueWithThreshold * frameTime) * camDef->orbit.turningSpeedPolar), camDef->orbit.polarMin, camDef->orbit.polarMax);
    camData->orbitCamData.sphericalCoords.v[2] = *(float *)&v41;
    returnSpherical->v[2] = *(float *)&v41;
    camData->orbitCamData.inputUpdated |= camDef->orbit.returnPolar;
  }
  camData->orbitCamData.inputPolarValue = InputCharValueWithThreshold;
  if ( COERCE_FLOAT(LODWORD(v25) & _xmm) <= 0.0 )
  {
    v25 = 0.0;
  }
  else
  {
    v42 = 1;
    if ( camData->orbitCamData.yawInverted )
      v42 = -1;
    v43 = (float)((float)((float)(v25 * frameTime) * camDef->orbit.turningSpeedAzimuth) * (float)v42) + camData->orbitCamData.sphericalCoords.v[1];
    camData->orbitCamData.sphericalCoords.v[1] = v43;
    returnSpherical->v[1] = v43;
    camData->orbitCamData.inputUpdated |= camDef->orbit.returnAzimuth;
  }
  camData->orbitCamData.inputAzimuthValue = v25;
  v44 = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlMove[0], 0);
  v45 = ucmd.remoteControlMove[1];
  camData->orbitCamData.inputGas = v44;
  v46 = CG_Camera_GetInputCharValueWithThreshold(v45, 0);
  result = camData->orbitCamData.inputUpdated;
  camData->orbitCamData.inputSteer = v46;
  return result;
}

/*
==============
CG_Camera_PostUpdate
==============
*/
void CG_Camera_PostUpdate(LocalClientNum_t localClientNum, const RefdefView *refdef, bool updateShakeCam, bool serverFeedback)
{
  cg_t *LocalClientGlobals; 
  ClActiveClient *Client; 
  CgHandler *Handler; 
  int v10; 
  const vec3_t *p_refdefViewAngles; 
  int v12[4]; 

  if ( updateShakeCam )
    CG_ShakeCamera(localClientNum);
  if ( serverFeedback )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 705, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Client = ClActiveClient::GetClient(localClientNum);
    Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
    if ( BG_IsClientVehicleCamera(&LocalClientGlobals->predictedPlayerState, Handler) )
    {
      p_refdefViewAngles = &LocalClientGlobals->refdefViewAngles;
    }
    else
    {
      *(float *)&v10 = LocalClientGlobals->refdefViewAngles.v[1] - LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
      *(float *)v12 = LocalClientGlobals->refdefViewAngles.v[0] - LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
      *(float *)&v12[2] = LocalClientGlobals->refdefViewAngles.v[2] - LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
      v12[1] = v10;
      p_refdefViewAngles = (const vec3_t *)v12;
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
  angles.v[2] = 0.0;
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
  ClientCameraData *v8; 
  float v9; 
  float v10; 
  float v11; 
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
  v8 = &s_cameras[v6][v7];
  RefdefView_GetOrg(refdef, &outOrg);
  v9 = outOrg.v[0];
  v8->curEyePos.v[0] = outOrg.v[0];
  v10 = outOrg.v[1];
  v8->curEyePos.v[1] = outOrg.v[1];
  v11 = outOrg.v[2];
  v8->curEyePos.v[2] = outOrg.v[2];
  v8->tgtEyePos.v[0] = v9;
  v8->tgtEyePos.v[1] = v10;
  v8->tgtEyePos.v[2] = v11;
  CG_Camera_StoreLinkedEyePos((LocalClientNum_t)v7, v8);
  v8->orbitCamData.timeUntilReturn = 0.0;
  v12 = 0;
  if ( forceReInit )
  {
    initialized = v8->initialized;
    v8->initialized = 0;
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
  __int64 v4; 
  __int64 v5; 
  ClientCameraTransition *v8; 
  bool v9; 
  cg_t *LocalClientGlobals; 
  cg_t *v11; 
  cg_t *v12; 
  animScriptVehicleSeat_t CurrentSeat; 
  animScriptVehicleSeat_t lastSeat; 
  char v16; 
  const CameraDef *Def; 
  const CameraDef *v18; 
  const CameraDef *v19; 
  const CameraDef *v20; 
  __int16 linkEnt; 
  centity_t *Entity; 
  vec3_t *v23; 
  float v24; 
  float v25; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  float v28; 
  float v29; 
  CgHandler *v30; 
  CgWeaponMap *v31; 
  __int64 v32; 
  __int64 v33; 
  bool v34; 
  animScriptVehicleType_t outVehType; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t vec; 
  vec3_t v39; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v4 = localClientNum;
  v5 = localClientNum;
  v8 = &s_cameraTransition[v5];
  v9 = BG_Camera_GetSkydiveOrbitDefIndex() == curCameraNdx || BG_Camera_GetSkydiveOrbitDefIndex() == nextCameraNdx;
  v34 = v9;
  if ( nextCameraNdx == curCameraNdx || v8->active && !v9 )
    return 0;
  if ( (unsigned int)v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3974, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3977, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( s_cameraStates[v4].lastClientHadTeleportFlag != GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 2u) )
    return 0;
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v33) = 2;
    LODWORD(v32) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3963, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3966, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( s_cameraStates[v4].lastRenderedClient != v11->predictedPlayerState.clientNum )
    return 0;
  v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
  *(_QWORD *)vec.v = v12;
  if ( v12->predictedPlayerState.pm_type >= 7 )
    return 0;
  if ( v12->inKillCam )
    return 0;
  if ( CG_Camera_IsSkydiveSpectatorOrKillcam((LocalClientNum_t)v4) )
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
  CurrentSeat = CG_Camera_Vehicles_GetCurrentSeat((LocalClientNum_t)v4, &outVehType);
  lastSeat = s_cameraTransition[v5].lastSeat;
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
  v16 = 0;
  if ( !nextCameraNdx )
    goto LABEL_73;
  if ( (int)nextCameraNdx < 256 && (!curCameraNdx || (int)curCameraNdx >= 256) && Mat33IsOrthonormal(&v8->lastViewAxis) )
  {
    Def = CG_Camera_TryGetDef((LocalClientNum_t)v4, (CameraType)nextCameraNdx);
    v18 = Def;
    if ( Def )
    {
      if ( ClientCameraTransition::InitFromDef(&s_cameraTransition[v5], &Def->transitionIn) )
      {
        v8->transitionType = TT_VIEW_TO_CAMERA;
        v16 = 1;
        v8->doPlayerFade = v18->fadeOutPlayerOnTransitionIn;
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
        v19 = CG_Camera_TryGetDef((LocalClientNum_t)v4, (CameraType)curCameraNdx);
        v20 = v19;
        if ( v19 )
        {
          if ( ClientCameraTransition::InitFromDef(&s_cameraTransition[v5], &v19->transitionOut) )
          {
            v8->transitionType = TT_CAMERA_TO_VIEW;
            v16 = 1;
            v8->doPlayerFade = v20->fadeOutPlayerOnTransitionIn;
            goto LABEL_57;
          }
        }
      }
    }
  }
  if ( v16 )
  {
LABEL_57:
    v8->sourceEyePos.v[0] = v8->lastViewEyePos.v[0];
    v8->sourceEyePos.v[1] = v8->lastViewEyePos.v[1];
    v8->sourceEyePos.v[2] = v8->lastViewEyePos.v[2];
    MatrixCopy33(&v8->lastViewAxis, &v8->sourceAxis);
    linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 && (Entity = CG_GetEntity((const LocalClientNum_t)v4, linkEnt), (v23 = (vec3_t *)Entity) != NULL) && (Entity->flags & 1) != 0 )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      angles = v23[6];
      AnglesToAxis(&angles, &axis);
      if ( v8->lastViewLocalValid )
      {
        AxisTransformVec3(&axis, &v8->lastViewEyePosLocal, &angles);
        v24 = angles.v[1] + outOrigin.v[1];
        v8->sourceEyePos.v[0] = angles.v[0] + outOrigin.v[0];
        v8->sourceEyePos.v[2] = angles.v[2] + outOrigin.v[2];
        v8->sourceEyePos.v[1] = v24;
        MatrixMultiply(&axis, &v8->lastViewAxisLocal, &v8->sourceAxis);
      }
      AxisTranspose(&axis, &out);
      v25 = v8->sourceEyePos.v[1] - outOrigin.v[1];
      vec.v[0] = v8->sourceEyePos.v[0] - outOrigin.v[0];
      vec.v[2] = v8->sourceEyePos.v[2] - outOrigin.v[2];
      vec.v[1] = v25;
      AxisTransformVec3(&out, &vec, &v8->sourceEyePosLocal);
      MatrixMultiply(&out, &v8->sourceAxis, &v8->sourceAxisLocal);
    }
    else if ( v34 )
    {
      if ( v8->transitionType == TT_VIEW_TO_CAMERA )
      {
        AnglesToAxis((const vec3_t *)(*(_QWORD *)vec.v + 480i64), &axis);
        Handler = CgHandler::getHandler((LocalClientNum_t)v4);
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
        BG_GetPlayerEyePosition(Instance, (const playerState_s *)(*(_QWORD *)vec.v + 8i64), &outOrigin, Handler);
        AxisToAngles(&axis, &angles);
        angles.v[2] = 0.0;
        AnglesToAxis(&angles, &axis);
        if ( v8->lastViewLocalValid )
        {
          AxisTransformVec3(&axis, &v8->lastViewEyePosLocal, &angles);
          v28 = angles.v[1] + outOrigin.v[1];
          v8->sourceEyePos.v[0] = angles.v[0] + outOrigin.v[0];
          v8->sourceEyePos.v[2] = angles.v[2] + outOrigin.v[2];
          v8->sourceEyePos.v[1] = v28;
          MatrixMultiply(&axis, &v8->lastViewAxisLocal, &v8->sourceAxis);
        }
        AxisTranspose(&axis, &out);
        v29 = v8->sourceEyePos.v[1] - outOrigin.v[1];
        v39.v[0] = v8->sourceEyePos.v[0] - outOrigin.v[0];
        v39.v[2] = v8->sourceEyePos.v[2] - outOrigin.v[2];
        v39.v[1] = v29;
        AxisTransformVec3(&out, &v39, &v8->sourceEyePosLocal);
        MatrixMultiply(&out, &v8->sourceAxis, &v8->sourceAxisLocal);
      }
      else
      {
        MatrixCopy33(&v8->last1stViewAxis, &v8->targetAxis);
        CG_Camera_RemoveRoll(&v8->targetAxis);
        v8->sourceEyePos.v[0] = v8->lastViewEyePos.v[0];
        v8->sourceEyePos.v[1] = v8->lastViewEyePos.v[1];
        v8->sourceEyePos.v[2] = v8->lastViewEyePos.v[2];
        v30 = CgHandler::getHandler((LocalClientNum_t)v4);
        v31 = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
        BG_GetPlayerEyePosition(v31, (const playerState_s *)(*(_QWORD *)vec.v + 8i64), &v8->targetEyePos, v30);
        v8->transitionOutLocalSpaceValid = 1;
        ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(&s_cameraTransition[v5]);
      }
    }
    v8->prevCamNdx = curCameraNdx;
    v8->nextCamNdx = nextCameraNdx;
  }
  return v16;
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
  camData->skydiveData.blendOffset.x = camData->skydiveData.lastLocalOffset.x - cameraLocalOffset->v[0];
  camData->skydiveData.blendOffset.y = camData->skydiveData.lastLocalOffset.y - cameraLocalOffset->v[1];
  camData->skydiveData.blendOffset.z = camData->skydiveData.lastLocalOffset.z - cameraLocalOffset->v[2];
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
  ClientCameraData *Data; 
  const SuitDef *SuitDef; 
  bool v7; 
  CgHandler *Handler; 
  float v9; 
  float v10; 
  const SuitDef *v15; 
  float v17; 
  double ValueFromFractionUnnormalized; 
  float v19; 
  double v20; 
  float v21; 
  double v22; 
  float v23; 
  double v24; 
  float v25; 
  double v26; 
  float roll; 
  float v28; 
  float v29; 
  float v30; 
  double v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  int v36; 
  int blendTime; 
  double v38; 
  double v39; 
  RefdefView *v40; 
  bool result; 
  bool v42; 
  vec3_t vec; 
  vec3_t inOutOrigin; 
  vec3_t outOrg; 
  vec3_t end; 
  RefdefView *refdefView; 
  __int64 v48; 
  vec3_t v49; 
  tmat33_t<vec3_t> axis; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outImpulseAngles; 
  vec3_t outHandheldAngles; 
  vec3_t outImpulseTranslation; 
  vec3_t outHandheldTranslation; 
  vec4_t quat; 
  vec4_t v58; 
  WorldUpReferenceFrame v59; 

  v48 = -2i64;
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
  Data = CG_Camera_GetData(localClientNum, CAMERA_MAX_DEF_INDEX);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1134, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 1 )
  {
    Data->skydiveData.params.heightOffset = SuitDef->skydive_camFreefallHeightOffset;
    Data->skydiveData.params.pitchToDistanceGraph = SuitDef->skydive_camFreefallPitchToDistanceGraph;
    Data->skydiveData.params.pitchToForwardOffsetGraph = SuitDef->skydive_camFreefallPitchToForwardOffsetGraph;
    Data->skydiveData.params.pitchToModelPitchForwardOffsetGraph = NULL;
    Data->skydiveData.params.pitchToModelRollSideOffsetGraph = NULL;
    Data->skydiveData.params.pitchToModelRollUpOffsetGraph = NULL;
    Data->skydiveData.params.blendTime = 0;
  }
  else
  {
    Data->skydiveData.params.heightOffset = SuitDef->skydive_camParachuteHeightOffset;
    Data->skydiveData.params.pitchToDistanceGraph = SuitDef->skydive_camParachutePitchToDistanceGraph;
    Data->skydiveData.params.pitchToForwardOffsetGraph = SuitDef->skydive_camParachutePitchToForwardOffsetGraph;
    Data->skydiveData.params.pitchToModelPitchForwardOffsetGraph = SuitDef->skydive_camParachutePitchToModelPitchForwardOffsetGraph;
    Data->skydiveData.params.pitchToModelRollSideOffsetGraph = SuitDef->skydive_camParachutePitchToModelRollSideOffsetGraph;
    Data->skydiveData.params.pitchToModelRollUpOffsetGraph = SuitDef->skydive_camParachutePitchToModelRollUpOffsetGraph;
    Data->skydiveData.params.blendTime = (int)(float)(SuitDef->skydive_camParachuteBlendInTime * 1000.0);
  }
  CG_Camera_InitializeValues(Data);
  v42 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1;
  v7 = LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] != 1 && !Data->skydiveData.parachuteDeployed;
  RefdefView_GetOrg(inOutRefDef, &outOrg);
  CG_CalcErrorDecay(localClientNum, &outOrg);
  RefdefView_SetOrg(inOutRefDef, &outOrg);
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v59, &LocalClientGlobals->predictedPlayerState, Handler);
  v9 = LocalClientGlobals->refdefViewAngles.v[1];
  v10 = LocalClientGlobals->refdefViewAngles.v[2];
  _XMM8 = 0i64;
  __asm { vroundss xmm0, xmm8, xmm1, 1 }
  v49.v[0] = (float)((float)(0.0027777778 * LocalClientGlobals->refdefViewAngles.v[0]) - *(float *)&_XMM0) * 360.0;
  __asm { vroundss xmm3, xmm8, xmm1, 1 }
  v49.v[1] = (float)((float)(0.0027777778 * v9) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  v49.v[2] = (float)((float)(0.0027777778 * v10) - *(float *)&_XMM3) * 360.0;
  v15 = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1209, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  __asm { vroundss xmm3, xmm8, xmm2, 1 }
  v17 = (float)((float)(0.0027777778 * v49.v[0]) - *(float *)&_XMM3) * 360.0;
  I_fclamp(v17, -90.0, 90.0);
  angles.v[0] = 0.0;
  angles.v[1] = v49.v[1];
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  if ( LocalClientGlobals->predictedPlayerState.skydivePlayerState.state[0] == 1 )
  {
    vec = outOrg;
    if ( !Data->skydiveData.params.pitchToForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1227, ASSERT_TYPE_ASSERT, "( params.pitchToForwardOffsetGraph )", "Suit %s must set a camera pitch to forward offset graph. This is a required field!", v15->name) )
      __debugbreak();
    ValueFromFractionUnnormalized = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToForwardOffsetGraph->knotCount, Data->skydiveData.params.pitchToForwardOffsetGraph->knots, v17);
    vec.v[0] = (float)(*(float *)&ValueFromFractionUnnormalized * axis.m[0].v[0]) + vec.v[0];
    vec.v[1] = (float)(*(float *)&ValueFromFractionUnnormalized * axis.m[0].v[1]) + vec.v[1];
    v19 = (float)(*(float *)&ValueFromFractionUnnormalized * axis.m[0].v[2]) + vec.v[2];
  }
  else
  {
    if ( !Data->skydiveData.params.pitchToForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1234, ASSERT_TYPE_ASSERT, "( params.pitchToForwardOffsetGraph )", "Suit %s must set a camera pitch to forward offset graph. This is a required field!", v15->name) )
      __debugbreak();
    if ( !Data->skydiveData.params.pitchToModelPitchForwardOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1235, ASSERT_TYPE_ASSERT, "( params.pitchToModelPitchForwardOffsetGraph )", "Suit %s must set a camera pitch to model pitch forward offset graph. This is a required field!", v15->name) )
      __debugbreak();
    if ( !Data->skydiveData.params.pitchToModelRollSideOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1236, ASSERT_TYPE_ASSERT, "( params.pitchToModelRollSideOffsetGraph )", "Suit %s must set a camera pitch to model roll side offset graph. This is a required field!", v15->name) )
      __debugbreak();
    if ( !Data->skydiveData.params.pitchToModelRollUpOffsetGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1237, ASSERT_TYPE_ASSERT, "( params.pitchToModelRollUpOffsetGraph )", "Suit %s must set a camera pitch to model roll up offset graph. This is a required field!", v15->name) )
      __debugbreak();
    v20 = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToForwardOffsetGraph->knotCount, Data->skydiveData.params.pitchToForwardOffsetGraph->knots, v17);
    v21 = *(float *)&v20;
    v22 = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToModelPitchForwardOffsetGraph->knotCount, Data->skydiveData.params.pitchToModelPitchForwardOffsetGraph->knots, v17);
    v23 = *(float *)&v22;
    v24 = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToModelRollSideOffsetGraph->knotCount, Data->skydiveData.params.pitchToModelRollSideOffsetGraph->knots, v17);
    v25 = *(float *)&v24;
    v26 = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToModelRollUpOffsetGraph->knotCount, Data->skydiveData.params.pitchToModelRollUpOffsetGraph->knots, v17);
    roll = LocalClientGlobals->predictedPlayerState.skydivePlayerState.roll;
    LODWORD(v28) = COERCE_UNSIGNED_INT(roll * v25) ^ _xmm;
    v29 = (float)((float)(COERCE_FLOAT(LODWORD(roll) & _xmm) * COERCE_FLOAT(LODWORD(roll) & _xmm)) * COERCE_FLOAT(LODWORD(roll) & _xmm)) * *(float *)&v26;
    vec.v[0] = (float)((float)(v28 * axis.m[1].v[0]) + outOrg.v[0]) + (float)(v29 * axis.m[2].v[0]);
    vec.v[1] = (float)((float)(v28 * axis.m[1].v[1]) + outOrg.v[1]) + (float)(v29 * axis.m[2].v[1]);
    vec.v[2] = (float)((float)(v28 * axis.m[1].v[2]) + outOrg.v[2]) + (float)(v29 * axis.m[2].v[2]);
    LODWORD(v30) = COERCE_UNSIGNED_INT(v23 * LocalClientGlobals->predictedPlayerState.skydivePlayerState.pitch) ^ _xmm;
    vec.v[0] = (float)((float)(v30 * axis.m[0].v[0]) + vec.v[0]) + (float)(v21 * axis.m[0].v[0]);
    vec.v[1] = (float)((float)(v30 * axis.m[0].v[1]) + vec.v[1]) + (float)(v21 * axis.m[0].v[1]);
    v19 = (float)((float)(v30 * axis.m[0].v[2]) + vec.v[2]) + (float)(v21 * axis.m[0].v[2]);
  }
  vec.v[2] = v19;
  WorldUpReferenceFrame::AddUpContribution(&v59, Data->skydiveData.params.heightOffset, &vec);
  AngleVectors(&v49, &forward, NULL, NULL);
  if ( !Data->skydiveData.params.pitchToDistanceGraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1258, ASSERT_TYPE_ASSERT, "( params.pitchToDistanceGraph )", "Suit %s must set a camera pitch to distance graph. This is a required field!", v15->name) )
    __debugbreak();
  v31 = GraphGetValueFromFractionUnnormalized(Data->skydiveData.params.pitchToDistanceGraph->knotCount, Data->skydiveData.params.pitchToDistanceGraph->knots, v17);
  end.v[0] = (float)(COERCE_FLOAT(LODWORD(v31) ^ _xmm) * forward.v[0]) + vec.v[0];
  end.v[1] = (float)(COERCE_FLOAT(LODWORD(v31) ^ _xmm) * forward.v[1]) + vec.v[1];
  end.v[2] = (float)(COERCE_FLOAT(LODWORD(v31) ^ _xmm) * forward.v[2]) + vec.v[2];
  CG_View_ThirdPersonViewTrace(localClientNum, &LocalClientGlobals->predictedPlayerState, &vec, &end, 33636369, Data->skydiveData.params.startSolidOffset, &inOutOrigin);
  v32 = inOutOrigin.v[0] - outOrg.v[0];
  v33 = inOutOrigin.v[1] - outOrg.v[1];
  v34 = inOutOrigin.v[2] - outOrg.v[2];
  if ( v7 )
  {
    Data->skydiveData.state = ACTIVE;
    Data->skydiveData.blendStartTime = Data->skydiveData.lastCameraTime;
    Data->skydiveData.blendOffset.x = Data->skydiveData.lastLocalOffset.x - v32;
    Data->skydiveData.blendOffset.y = Data->skydiveData.lastLocalOffset.y - v33;
    Data->skydiveData.blendOffset.z = Data->skydiveData.lastLocalOffset.z - v34;
    Data->skydiveData.blendStartRot.v[0] = Data->skydiveData.lastCameraRot.v[0];
    Data->skydiveData.blendStartRot.v[1] = Data->skydiveData.lastCameraRot.v[1];
    Data->skydiveData.blendStartRot.v[2] = Data->skydiveData.lastCameraRot.v[2];
    Data->skydiveData.blendStartRot.v[3] = Data->skydiveData.lastCameraRot.v[3];
  }
  v35 = FLOAT_1_0;
  if ( Data->skydiveData.state == ACTIVE )
  {
    v36 = LocalClientGlobals->time - Data->skydiveData.blendStartTime;
    if ( v36 < 0 )
      v36 = 0;
    blendTime = Data->skydiveData.params.blendTime;
    if ( v36 >= blendTime || blendTime <= 0 )
    {
      Data->skydiveData.state = 2;
    }
    else
    {
      v38 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)v36).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)blendTime).m128_f32[0], 0.0, 1.0);
      v35 = (float)((float)((float)((float)(*(float *)&v38 * 6.0) - 15.0) * *(float *)&v38) + 10.0) * (float)((float)(*(float *)&v38 * *(float *)&v38) * *(float *)&v38);
    }
  }
  AnglesToQuat(&v49, &quat);
  QuatSlerp(&Data->skydiveData.blendStartRot, &quat, v35, &v58);
  QuatToAngles(&v58, &v49);
  v39 = I_fclamp(1.0 - v35, 0.0, 1.0);
  inOutOrigin.v[0] = (float)(*(float *)&v39 * Data->skydiveData.blendOffset.x) + inOutOrigin.v[0];
  inOutOrigin.v[1] = (float)(*(float *)&v39 * Data->skydiveData.blendOffset.y) + inOutOrigin.v[1];
  inOutOrigin.v[2] = (float)(*(float *)&v39 * Data->skydiveData.blendOffset.z) + inOutOrigin.v[2];
  LocalClientGlobals->refdefViewAngles = v49;
  CG_Shake_CalcHandheldCamera(localClientNum, &outHandheldTranslation, &outImpulseTranslation, &outHandheldAngles, &outImpulseAngles);
  CG_Shake_ApplyHandheldCamera(localClientNum, &outHandheldTranslation, &outImpulseTranslation, &outHandheldAngles, &outImpulseAngles, &inOutOrigin, &LocalClientGlobals->refdefViewAngles);
  v40 = refdefView;
  RefdefView_SetOrg(refdefView, &inOutOrigin);
  AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &v40->axis);
  Data->skydiveData.lastLocalOffset.x = v32;
  Data->skydiveData.lastLocalOffset.y = v33;
  Data->skydiveData.lastLocalOffset.z = v34;
  Data->skydiveData.parachuteDeployed = v42;
  result = 1;
  memset(&inOutOrigin, 0, sizeof(inOutOrigin));
  memset(&end, 0, sizeof(end));
  memset(&vec, 0, sizeof(vec));
  memset(&outOrg, 0, sizeof(outOrg));
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
  vec3_t *v6; 
  char v7; 
  float v8; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t vec; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  if ( !camData->orbitCamData.disableEyePosLocal )
  {
    linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 && ((Entity = CG_GetEntity(localClientNum, linkEnt), (v6 = (vec3_t *)Entity) == NULL) || (Entity->flags & 1) == 0 ? (v7 = 0) : (CG_GetPoseOrigin(&Entity->pose, &outOrigin), angles = v6[6], AnglesToAxis(&angles, &axis), v7 = 1), v7) )
    {
      AxisTranspose(&axis, &out);
      v8 = camData->curEyePos.v[1] - outOrigin.v[1];
      vec.v[0] = camData->curEyePos.v[0] - outOrigin.v[0];
      vec.v[2] = camData->curEyePos.v[2] - outOrigin.v[2];
      vec.v[1] = v8;
      AxisTransformVec3(&out, &vec, &camData->orbitCamData.curEyePosLocal);
      camData->orbitCamData.curEyePosLocalValid = 1;
    }
    else
    {
      camData->orbitCamData.curEyePosLocalValid = 0;
    }
  }
}

/*
==============
CG_Camera_Trace
==============
*/
char CG_Camera_Trace(const CameraTraceInfo *traceInfo, vec3_t *result, float *outFraction)
{
  float *outRawFrac; 
  bool v7; 
  float v9; 
  __int128 v10; 
  float v11; 
  float displFromStart; 
  int v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  double v24; 
  float v25; 
  float innerRadius; 
  double v27; 
  float v28; 
  float v29; 
  float v30; 
  vec3_t end; 
  vec3_t start; 

  if ( traceInfo->ignoreEntities && traceInfo->ignoreCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 286, ASSERT_TYPE_ASSERT, "(!traceInfo.ignoreEntities || traceInfo.ignoreCount > 0)", (const char *)&queryFormat, "!traceInfo.ignoreEntities || traceInfo.ignoreCount > 0") )
    __debugbreak();
  outRawFrac = &v30;
  if ( outFraction )
    outRawFrac = outFraction;
  v7 = traceInfo->worldId == PHYSICS_WORLD_ID_INVALID;
  v30 = 0.0;
  if ( v7 )
  {
    *outRawFrac = 1.0;
    result->v[0] = traceInfo->end.v[0];
    result->v[1] = traceInfo->end.v[1];
    result->v[2] = traceInfo->end.v[2];
    return 0;
  }
  else
  {
    v9 = traceInfo->end.v[0] - traceInfo->start.v[0];
    v10 = LODWORD(traceInfo->end.v[1]);
    v11 = traceInfo->end.v[2];
    displFromStart = traceInfo->displFromStart;
    end.v[0] = traceInfo->end.v[0];
    v13 = 0;
    v15 = v10;
    v14 = *(float *)&v10 - traceInfo->start.v[1];
    end.v[1] = *(float *)&v10;
    end.v[2] = v11;
    v16 = v11 - traceInfo->start.v[2];
    *(float *)&v15 = fsqrt((float)((float)(v14 * v14) + (float)(v9 * v9)) + (float)(v16 * v16));
    _XMM13 = v15;
    __asm
    {
      vcmpless xmm0, xmm13, cs:__real@80000000
      vblendvps xmm0, xmm13, xmm12, xmm0
    }
    start.v[0] = (float)((float)(v9 * (float)(1.0 / *(float *)&_XMM0)) * displFromStart) + traceInfo->start.v[0];
    start.v[1] = (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM0)) * displFromStart) + traceInfo->start.v[1];
    start.v[2] = (float)((float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * displFromStart) + traceInfo->start.v[2];
    while ( 1 )
    {
      BG_Camera_VehicleCameraShapeCast(traceInfo->worldId, traceInfo->ignoreEntities, traceInfo->ignoreCount, traceInfo->contentMask, &start, &end, outRawFrac);
      v20 = *outRawFrac;
      if ( *outRawFrac >= 1.0 )
        break;
      v21 = (float)(end.v[1] - start.v[1]) * v20;
      v22 = end.v[2] - start.v[2];
      result->v[0] = (float)((float)(end.v[0] - start.v[0]) * v20) + start.v[0];
      result->v[1] = v21 + start.v[1];
      result->v[2] = (float)(v22 * v20) + start.v[2];
      v23 = *(float *)&_XMM13 * *outRawFrac;
      v24 = BG_Camera_VehicleCameraShapeRadius();
      v25 = v23 - *(float *)&v24;
      if ( v13 )
        return 1;
      innerRadius = traceInfo->innerRadius;
      if ( innerRadius <= 0.0 || traceInfo->innerRadiusElevation <= 0.0 || v25 >= innerRadius )
        return 1;
      v27 = I_fclamp(v25 / innerRadius, 0.0, 1.0);
      v28 = (float)(1.0 - *(float *)&v27) * traceInfo->innerRadiusElevation;
      end.v[0] = (float)(v28 * 0.0) + end.v[0];
      end.v[1] = (float)(v28 * 0.0) + end.v[1];
      end.v[2] = (float)(v28 * 1.0) + end.v[2];
      v13 = 1;
    }
    v29 = end.v[1];
    result->v[0] = end.v[0];
    result->v[2] = end.v[2];
    result->v[1] = v29;
    return 0;
  }
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
  ClientCameraTransition *v4; 
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  vec3_t *v8; 
  float v9; 
  cg_t *LocalClientGlobals; 
  const CameraDef *Def; 
  CgHandler *v12; 
  CgWeaponMap *v13; 
  float v14; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  int v17; 
  int v18; 
  cg_t *v19; 
  playerState_s *p_predictedPlayerState; 
  __int16 viewlocked_entNum; 
  const centity_t *v22; 
  centity_t *LinkToParent; 
  char v24; 
  bool v25; 
  vec3_t angles; 
  vec3_t outOrigin; 
  vec3_t v28; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v4 = &s_cameraTransition[localClientNum];
  RefdefView_GetOrg(inOutRefDef, &v4->lastViewEyePos);
  MatrixCopy33(&inOutRefDef->axis, &v4->lastViewAxis);
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
  linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity(localClientNum, linkEnt), (v8 = (vec3_t *)Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    if ( !IsTransitionSkydiveOrbitCamType )
    {
      v4->lastViewLocalValid = 0;
      goto LABEL_14;
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    Def = CG_Camera_Active_TryGetDef(localClientNum);
    if ( v4->active )
    {
      if ( v4->transitionType != TT_CAMERA_TO_VIEW )
      {
        if ( v4->transitionType != TT_VIEW_TO_CAMERA )
          goto LABEL_14;
LABEL_12:
        v4->sourceEyePos.v[0] = v4->lastViewEyePos.v[0];
        v4->sourceEyePos.v[1] = v4->lastViewEyePos.v[1];
        v4->sourceEyePos.v[2] = v4->lastViewEyePos.v[2];
        MatrixCopy33(&v4->last1stViewAxis, &v4->targetAxis);
        CG_Camera_RemoveRoll(&v4->targetAxis);
        Handler = CgHandler::getHandler(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &v4->targetEyePos, Handler);
        ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(v4);
        goto LABEL_14;
      }
    }
    else if ( Def )
    {
      goto LABEL_12;
    }
    AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
    v12 = CgHandler::getHandler(localClientNum);
    v13 = CgWeaponMap::GetInstance(localClientNum);
    BG_GetPlayerEyePosition(v13, &LocalClientGlobals->predictedPlayerState, &outOrigin, v12);
    AxisToAngles(&axis, &v28);
    v28.v[2] = 0.0;
    AnglesToAxis(&v28, &axis);
    v4->lastViewLocalValid = 1;
    AxisTranspose(&axis, &out);
    v14 = v4->lastViewEyePos.v[1] - outOrigin.v[1];
    angles.v[0] = v4->lastViewEyePos.v[0] - outOrigin.v[0];
    angles.v[2] = v4->lastViewEyePos.v[2] - outOrigin.v[2];
    angles.v[1] = v14;
    AxisTransformVec3(&out, &angles, &v4->lastViewEyePosLocal);
    MatrixMultiply(&out, &v4->lastViewAxis, &v4->lastViewAxisLocal);
    goto LABEL_14;
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  angles = v8[6];
  AnglesToAxis(&angles, &axis);
  v4->lastViewLocalValid = 1;
  AxisTranspose(&axis, &out);
  v9 = v4->lastViewEyePos.v[1] - outOrigin.v[1];
  angles.v[0] = v4->lastViewEyePos.v[0] - outOrigin.v[0];
  angles.v[2] = v4->lastViewEyePos.v[2] - outOrigin.v[2];
  angles.v[1] = v9;
  AxisTransformVec3(&out, &angles, &v4->lastViewEyePosLocal);
  MatrixMultiply(&out, &v4->lastViewAxis, &v4->lastViewAxisLocal);
LABEL_14:
  v17 = CG_Camera_Active_Get(localClientNum);
  if ( !v17 || v17 >= 256 )
  {
    v18 = 0;
    while ( !CG_Camera_GetData(localClientNum, (CameraType)(v18 + 252))->initialized )
    {
      if ( (unsigned int)++v18 >= 4 )
      {
        if ( !v4->active )
        {
          RefdefView_GetOrg(inOutRefDef, &v4->last1stViewEyePos);
          MatrixCopy33(&inOutRefDef->axis, &v4->last1stViewAxis);
        }
        break;
      }
    }
  }
  v4->lastSeat = CG_Camera_Vehicles_GetCurrentSeat(localClientNum, NULL);
  v19 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3793, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v19->predictedPlayerState;
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
    v22 = CG_GetEntity(localClientNum, viewlocked_entNum);
    if ( v22->pose.eType == 11 )
    {
      LinkToParent = CG_Entity_GetLinkToParent(localClientNum, v22);
      if ( LinkToParent )
      {
        if ( !BG_IsVehicleEntity(&LinkToParent->nextState) )
        {
          v24 = 1;
          goto LABEL_42;
        }
      }
    }
  }
LABEL_41:
  v24 = 0;
LABEL_42:
  v25 = !v4->lastWas3PWithFocus;
  v4->lastWasUsingTuret = v24;
  if ( v25 )
    RefdefView_GetOrg(inOutRefDef, &v4->lastFocusOrigin);
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
  __int64 v9; 
  int clientNum; 
  const cpose_t *Pose; 
  const DObj *ClientDObj; 
  const DObj *v13; 
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
  v9 = v2;
  if ( CG_Camera_Active_Get((LocalClientNum_t)v2) == s_cameraTransition[v2].lastActiveCamera && !s_cameraTransition[v9].active )
    return 0;
  clientNum = CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->predictedPlayerState.clientNum;
  if ( !CG_Entity_CanUseDObj((LocalClientNum_t)v2, clientNum) )
    return 0;
  Pose = CG_GetPose((LocalClientNum_t)v2, clientNum);
  ClientDObj = Com_GetClientDObj(clientNum, (LocalClientNum_t)v2);
  v13 = ClientDObj;
  return ClientDObj && DObjVerifyNumBones(ClientDObj) && CG_DObjGetWorldTagPos(Pose, v13, scr_const.j_spine4, &outPos) && (float)((float)((float)((float)(outPos.v[1] - s_cameraTransition[v9].lastViewEyePos.v[1]) * (float)(outPos.v[1] - s_cameraTransition[v9].lastViewEyePos.v[1])) + (float)((float)(outPos.v[0] - s_cameraTransition[v9].lastViewEyePos.v[0]) * (float)(outPos.v[0] - s_cameraTransition[v9].lastViewEyePos.v[0]))) + (float)((float)(outPos.v[2] - s_cameraTransition[v9].lastViewEyePos.v[2]) * (float)(outPos.v[2] - s_cameraTransition[v9].lastViewEyePos.v[2]))) <= (float)(s_wmHideDist * s_wmHideDist);
}

/*
==============
CG_Camera_Transition_Update
==============
*/

char __fastcall CG_Camera_Transition_Update(LocalClientNum_t localClientNum, double frameTime, RefdefView *inOutRefDef)
{
  ClientCameraTransition *v5; 
  cg_t *LocalClientGlobals; 
  char v7; 
  bool IsTransitionSkydiveOrbitCamType; 
  bool v9; 
  ClientCameraTransition::TransitionType transitionType; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  tmat33_t<vec3_t> *p_axis; 
  CgHandler *v14; 
  int nextCamNdx; 
  ClientCameraData *Data; 
  ClActiveClient *Client; 
  float v18; 
  char v19; 
  double Float_Internal_DebugName; 
  float v21; 
  double v22; 
  double v23; 
  __int128 v25; 
  float outDistance; 
  vec3_t outOrg; 
  __int64 v30; 
  vec3_t clViewangles; 
  WorldUpReferenceFrame v32; 

  v30 = -2i64;
  v5 = &s_cameraTransition[localClientNum];
  if ( v5->active && *(float *)&frameTime > 0.0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v7 = 0;
    outDistance = 0.0;
    RefdefView_GetOrg(inOutRefDef, &outOrg);
    IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
    v9 = IsTransitionSkydiveOrbitCamType;
    transitionType = v5->transitionType;
    if ( v5->transitionType == TT_CAMERA_TO_VIEW )
    {
      if ( IsTransitionSkydiveOrbitCamType )
      {
        Handler = CgHandler::getHandler(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &v5->targetEyePos, Handler);
        p_axis = &inOutRefDef->axis;
      }
      else
      {
        RefdefView_GetOrg(inOutRefDef, &v5->targetEyePos);
        v14 = CgHandler::getHandler(localClientNum);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v32, &LocalClientGlobals->predictedPlayerState, v14);
        WorldUpReferenceFrame::AddUpContribution(&v32, LocalClientGlobals->predictedPlayerState.viewHeightCurrent, &v5->targetEyePos);
        p_axis = &inOutRefDef->axis;
        MatrixCopy33(&inOutRefDef->axis, &v5->targetAxis);
        CG_Camera_RemoveRoll(&v5->targetAxis);
      }
      if ( v5->transitionOutLocalSpace )
      {
        ClientCameraTransition::UpdateTransitionOutSourceRelativeToTarget(v5);
        ClientCameraTransition::StoreTransitionOutSourceRelativeToTarget(v5);
      }
      ClientCameraTransition::InterpolateEyePos(v5, localClientNum, v9, &outOrg, &outDistance);
      ClientCameraTransition::InterpolateAxis(v5, localClientNum, p_axis);
      v7 = 1;
      transitionType = v5->transitionType;
    }
    else
    {
      p_axis = &inOutRefDef->axis;
    }
    if ( transitionType == TT_VIEW_TO_CAMERA )
    {
      nextCamNdx = v5->nextCamNdx;
      if ( nextCamNdx && nextCamNdx < 256 && (unsigned int)(nextCamNdx - 1) < 0xFA )
        CG_Camera_UpdateTransitionToCameraTarget(localClientNum, *(float *)&frameTime, inOutRefDef);
      ClientCameraTransition::InterpolateEyePos(v5, localClientNum, v9, &outOrg, &outDistance);
      ClientCameraTransition::InterpolateAxis(v5, localClientNum, p_axis);
      if ( nextCamNdx && nextCamNdx < 256 )
      {
        Data = CG_Camera_GetData(localClientNum, (CameraType)nextCamNdx);
        Data->curEyePos = outOrg;
        CG_Camera_StoreLinkedEyePos(Data->localClientNum, Data);
      }
    }
    else if ( !v7 )
    {
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
      v19 = 0;
LABEL_30:
      memset(&outOrg, 0, sizeof(outOrg));
      return v19;
    }
    RefdefView_SetOrg(inOutRefDef, &outOrg);
    AxisToAngles(p_axis, &LocalClientGlobals->refdefViewAngles);
    if ( v5->time > v5->activeTime )
    {
      if ( !v5->doPlayerFade )
        goto LABEL_29;
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_camera_transition_fade_out_start_dist, "cg_camera_transition_fade_out_start_dist");
      v21 = *(float *)&Float_Internal_DebugName;
      v22 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_camera_transition_fade_out_end_dist, "cg_camera_transition_fade_out_end_dist");
      if ( v21 <= *(float *)&v22 )
        goto LABEL_29;
      v23 = I_fclamp((float)(outDistance - *(float *)&v22) / (float)(v21 - *(float *)&v22), 0.0, 1.0);
      v18 = 1.0 - *(float *)&v23;
    }
    else
    {
      v5->active = 0;
      *(__m256i *)inOutRefDef->axis.m[0].v = *(__m256i *)v5->targetAxis.m[0].v;
      inOutRefDef->axis.m[2].v[2] = v5->targetAxis.m[2].v[2];
      LocalClientGlobals->refdefViewAngles.v[2] = 0.0;
      Client = ClActiveClient::GetClient(localClientNum);
      if ( Client )
      {
        clViewangles.v[0] = LocalClientGlobals->refdefViewAngles.v[0] - LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
        clViewangles.v[1] = LocalClientGlobals->refdefViewAngles.v[1] - LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
        clViewangles.v[2] = LocalClientGlobals->refdefViewAngles.v[2] - LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
        ClActiveClient_SetCLViewangles(Client, &clViewangles);
      }
      v18 = 0.0;
    }
    CG_PlayerFade_SetFadeValue(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum, v18);
LABEL_29:
    v25 = *(_OWORD *)&frameTime;
    *(float *)&v25 = *(float *)&frameTime + v5->activeTime;
    _XMM0 = v25;
    __asm { vminss  xmm1, xmm0, dword ptr [rbx+194h] }
    v5->activeTime = *(float *)&_XMM1;
    v19 = 1;
    goto LABEL_30;
  }
  return 0;
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
void CG_Camera_UpdateTransitionToCameraTarget(LocalClientNum_t localClientNum, float frameTime, const RefdefView *inRefDef)
{
  __int64 v3; 
  unsigned int v5; 
  signed int v6; 
  int v7; 
  tmat33_t<vec3_t> *p_axis; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  ClientCameraData *Data; 
  unsigned int refdefViewOrg_aab; 
  unsigned int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  vec3_t *v21; 
  float v22; 
  tmat33_t<vec3_t> *p_sourceAxis; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  float v27; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  vec3_t angles; 
  RefdefView inOutRefDef; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  v3 = localClientNum;
  v5 = CG_Camera_Active_Get(localClientNum);
  v6 = v5;
  if ( v5 )
  {
    if ( !CameraType_Is_Def(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3371, ASSERT_TYPE_ASSERT, "(CameraType_Is_Def( activeCam ))", (const char *)&queryFormat, "CameraType_Is_Def( activeCam )") )
      __debugbreak();
    RefdefView_GetOrg(inRefDef, &outOrg);
    p_axis = &inRefDef->axis;
    inOutRefDef.refdefViewOrg_aab += inOutRefDef.refdefViewOrg_set_aab;
    v9 = (v7 + 104) ^ inOutRefDef.refdefViewOrg_aab;
    LODWORD(inOutRefDef.org.org.v[0]) = LODWORD(outOrg.v[0]) ^ (v9 * (v9 + 2));
    v10 = (v7 + 108) ^ inOutRefDef.refdefViewOrg_aab;
    v11 = (v7 + 112) ^ inOutRefDef.refdefViewOrg_aab;
    LODWORD(inOutRefDef.org.org.v[1]) = LODWORD(outOrg.v[1]) ^ (v10 * (v10 + 2));
    LODWORD(inOutRefDef.org.org.v[2]) = LODWORD(outOrg.v[2]) ^ (v11 * (v11 + 2));
    MatrixCopy33(&inRefDef->axis, &inOutRefDef.axis);
    Data = CG_Camera_GetData((LocalClientNum_t)v3, (CameraType)v6);
    Data->initialized = 0;
    CG_Camera_Active_Update_Def((LocalClientNum_t)v3, v6, &inOutRefDef, frameTime);
    Data->initialized = 0;
    refdefViewOrg_aab = inOutRefDef.refdefViewOrg_aab;
    v14 = (v7 + 104) ^ inOutRefDef.refdefViewOrg_aab;
    v15 = v3;
    LODWORD(s_cameraTransition[v15].targetEyePos.v[0]) = LODWORD(inOutRefDef.org.org.v[0]) ^ (v14 * (v14 + 2));
    v16 = (v7 + 108) ^ refdefViewOrg_aab;
    v17 = (v7 + 112) ^ refdefViewOrg_aab;
    LODWORD(s_cameraTransition[v15].targetEyePos.v[1]) = LODWORD(inOutRefDef.org.org.v[1]) ^ (v16 * (v16 + 2));
    LODWORD(s_cameraTransition[v15].targetEyePos.v[2]) = LODWORD(inOutRefDef.org.org.v[2]) ^ (v17 * (v17 + 2));
    MatrixCopy33(&inOutRefDef.axis, &s_cameraTransition[v3].targetAxis);
    AxisToAngles(&s_cameraTransition[v3].targetAxis, &outOrg);
    outOrg.v[2] = 0.0;
    AnglesToAxis(&outOrg, &s_cameraTransition[v3].targetAxis);
    IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType((const LocalClientNum_t)v3);
    linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->predictedPlayerState.linkEnt;
    if ( linkEnt != 2047 && (Entity = CG_GetEntity((const LocalClientNum_t)v3, linkEnt), (v21 = (vec3_t *)Entity) != NULL) && (Entity->flags & 1) != 0 )
    {
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      outOrg = v21[6];
      AnglesToAxis(&outOrg, &axis);
      s_cameraTransition[v15].transitionInLocalSpace = 1;
      AxisTranspose(&axis, &out);
      v22 = s_cameraTransition[v15].targetEyePos.v[1] - outOrigin.v[1];
      outOrg.v[0] = s_cameraTransition[v15].targetEyePos.v[0] - outOrigin.v[0];
      outOrg.v[2] = s_cameraTransition[v15].targetEyePos.v[2] - outOrigin.v[2];
      outOrg.v[1] = v22;
      AxisTransformVec3(&out, &outOrg, &s_cameraTransition[v15].targetEyePosLocal);
      p_sourceAxis = &s_cameraTransition[v15].sourceAxis;
    }
    else
    {
      if ( !IsTransitionSkydiveOrbitCamType )
        return;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      MatrixCopy33(p_axis, &s_cameraTransition[v3].targetAxis);
      CG_Camera_RemoveRoll(&s_cameraTransition[v3].targetAxis);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler((LocalClientNum_t)v3);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
      AxisToAngles(&axis, &angles);
      angles.v[2] = 0.0;
      AnglesToAxis(&angles, &axis);
      s_cameraTransition[v15].transitionInLocalSpace = 1;
      AxisTranspose(&axis, &out);
      v27 = s_cameraTransition[v15].targetEyePos.v[1] - outOrigin.v[1];
      outOrg.v[0] = s_cameraTransition[v15].targetEyePos.v[0] - outOrigin.v[0];
      outOrg.v[2] = s_cameraTransition[v15].targetEyePos.v[2] - outOrigin.v[2];
      outOrg.v[1] = v27;
      AxisTransformVec3(&out, &outOrg, &s_cameraTransition[v15].targetEyePosLocal);
      p_sourceAxis = &s_cameraTransition[v3].targetAxis;
    }
    MatrixMultiply(&out, p_sourceAxis, &s_cameraTransition[v15].targetAxisLocal);
  }
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
  BgVehiclePhysicsManager *v7; 
  BgVehiclePhysics *ObjectById; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v10; 
  cg_t *v11; 
  float value; 
  const dvar_t *v13; 
  float v14; 
  int time; 
  double NormalSpeedPlane; 
  float outVertOrRoll; 
  float outHorizOrPitch; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2695, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehEnt);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2699, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  v7 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v7, Client->physicsId);
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2702, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v10 = DCONST_DVARFLT_fd_camera_noise_pitch;
  v11 = LocalClientGlobals;
  outHorizOrPitch = 0.0;
  outVertOrRoll = 0.0;
  if ( !DCONST_DVARFLT_fd_camera_noise_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_noise_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  value = v10->current.value;
  v13 = DCONST_DVARFLT_fd_camera_noise_roll;
  if ( !DCONST_DVARFLT_fd_camera_noise_roll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fd_camera_noise_roll") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  time = v11->time;
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(ObjectById);
  CG_Camera_Vehicles_GetSpeedNoiseDelta(*(float *)&NormalSpeedPlane, time, value, v14, &outHorizOrPitch, &outVertOrRoll);
  *(float *)&NormalSpeedPlane = outHorizOrPitch;
  v11->refdefViewAngles.v[2] = outVertOrRoll + v11->refdefViewAngles.v[2];
  v11->refdefViewAngles.v[0] = *(float *)&NormalSpeedPlane + v11->refdefViewAngles.v[0];
}

/*
==============
CG_Camera_Vehicles_1stPerson_FreeLook
==============
*/
void CG_Camera_Vehicles_1stPerson_FreeLook(ClientCameraData *camData, float frameTime)
{
  const CameraDef *camDef; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  cg_t *LocalClientGlobals; 
  char v8; 
  char v9; 
  float InputCharValueWithThreshold; 
  float v11; 
  const dvar_t *v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v17; 
  __int128 v20; 
  double v24; 
  double v25; 
  float v26; 
  float v27; 
  double v28; 
  double v29; 
  usercmd_s ucmd; 
  float v31; 
  float v32; 

  camDef = camData->camDef;
  if ( (!camDef || camDef->profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2362, ASSERT_TYPE_ASSERT, "(camData.camDef && camData.camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE)", (const char *)&queryFormat, "camData.camDef && camData.camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)camData->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( CL_GetUserCmd(camData->localClientNum, CmdNumber, &ucmd) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
    v8 = 4;
    v9 = 3;
    if ( !CL_Input_IsGamepadEnabled(camData->localClientNum) )
    {
      v8 = 0;
      v9 = 0;
    }
    InputCharValueWithThreshold = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlAngles[0], v8);
    v11 = CG_Camera_GetInputCharValueWithThreshold(ucmd.remoteControlAngles[1], v9);
    _XMM12 = 0i64;
    if ( !CL_Input_IsGamepadEnabled(camData->localClientNum) )
    {
      v13 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
      {
        v14 = LODWORD(FLOAT_10_0);
        *(double *)&v14 = I_pow(10.0, COERCE_FLOAT(LODWORD(InputCharValueWithThreshold) & _xmm));
        v15 = v14;
        *(float *)&v15 = *(float *)&v14 - 1.0;
        _XMM2 = v15 ^ _xmm;
        v17 = LODWORD(FLOAT_10_0);
        __asm
        {
          vcmpless xmm1, xmm12, xmm8
          vblendvps xmm1, xmm2, xmm3, xmm1
        }
        v31 = *(float *)&_XMM1;
        *(double *)&v17 = I_pow(10.0, COERCE_FLOAT(LODWORD(v11) & _xmm));
        v20 = v17;
        *(float *)&v20 = *(float *)&v17 - 1.0;
        _XMM1 = v20 ^ _xmm;
        __asm
        {
          vcmpless xmm0, xmm12, xmm9
          vblendvps xmm0, xmm1, xmm2, xmm0
        }
        v32 = *(float *)&_XMM0;
        if ( (LocalClientGlobals->predictedPlayerState.vehicleState.flags & 1) != 0 || LocalClientGlobals->predictedPlayerState.remoteControlEnt != 2047 )
        {
          InputCharValueWithThreshold = v31;
          v11 = *(float *)&_XMM0;
        }
        else
        {
          v24 = I_fclamp(v31, -1.0, 1.0);
          InputCharValueWithThreshold = *(float *)&v24;
          v25 = I_fclamp(v32, -1.0, 1.0);
          v11 = *(float *)&v25;
        }
      }
    }
    v26 = (float)(v11 * frameTime) * 200.0;
    v27 = (float)(InputCharValueWithThreshold * frameTime) * 200.0;
    v28 = I_fclamp(v26 + camData->vehicleData.yawDelta, -89.0, 89.0);
    camData->vehicleData.yawDelta = *(float *)&v28;
    v29 = I_fclamp(v27 + camData->vehicleData.pitchDelta, -89.0, 89.0);
    camData->vehicleData.pitchDelta = *(float *)&v29;
    LocalClientGlobals->refdefViewAngles.v[0] = *(float *)&v29 + LocalClientGlobals->refdefViewAngles.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = camData->vehicleData.yawDelta + LocalClientGlobals->refdefViewAngles.v[1];
    if ( camData->camDef->fpveh_freeLookReturn && COERCE_FLOAT(LODWORD(v26) & _xmm) < 0.001 && COERCE_FLOAT(LODWORD(v27) & _xmm) < 0.001 )
    {
      CG_Camera_DampLerp(&camData->vehicleData.yawDelta, 0.0, frameTime, 4.0);
      CG_Camera_DampLerp(&camData->vehicleData.pitchDelta, 0.0, frameTime, 4.0);
    }
  }
}

/*
==============
CG_Camera_Vehicles_1stPerson_Update
==============
*/
void CG_Camera_Vehicles_1stPerson_Update(const CameraDef *camDef, ClientCameraData *camData, const centity_t *vehEnt, VehicleClient *const vehicleClient, float frameTime, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  const DObj *ClientDObj; 
  float v12; 
  vec3_t angles; 
  vec3_t out; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2431, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2432, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleClient->physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2433, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleClient->physicsId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleClient->physicsId )") )
    __debugbreak();
  if ( (!camDef || camDef->profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2434, ASSERT_TYPE_ASSERT, "(camDef && camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE)", (const char *)&queryFormat, "camDef && camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  CG_Camera_InitializeValues(camData);
  ClientDObj = Com_GetClientDObj(vehEnt->nextState.number, camData->localClientNum);
  if ( CG_DObjGetWorldTagMatrix(&vehEnt->pose, ClientDObj, scr_const.tag_seat_0, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&outTagMat, &angles);
  }
  else
  {
    v12 = vehEnt->pose.angles.v[1];
    angles.v[0] = vehEnt->pose.angles.v[0];
    angles.v[2] = vehEnt->pose.angles.v[2];
    angles.v[1] = v12;
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&outTagMat);
    CG_GetPoseOrigin(&vehEnt->pose, &outTagMat.m[3]);
  }
  MatrixTransformVector43(&camDef->fpveh_offsetLs, &outTagMat, &out);
  RefdefView_SetOrg(inOutRefDef, &out);
  BG_AxisFromForward(outTagMat.m, &identityMatrix33.m[2], &inOutRefDef->axis);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  _XMM1 = LODWORD(camDef->fpveh_rollContrib);
  _XMM4 = LODWORD(FLOAT_0_001);
  __asm { vmaxss  xmm3, xmm1, xmm0 }
  if ( *(float *)&_XMM3 > 0.001 )
  {
    _XMM0 = LODWORD(FLOAT_89_0);
    __asm
    {
      vcmpltss xmm1, xmm4, xmm2
      vblendvps xmm2, xmm0, xmm2, xmm1; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM3 * angles.v[2], COERCE_FLOAT(_XMM2 ^ _xmm), *(float *)&_XMM2);
    LocalClientGlobals->refdefViewAngles.v[2] = *(float *)&_XMM0;
  }
  if ( camDef->fpveh_freeLook )
  {
    CG_Camera_Vehicles_1stPerson_FreeLook(camData, frameTime);
  }
  else
  {
    LocalClientGlobals->refdefViewAngles.v[1] = camDef->fpveh_offsetYaw + LocalClientGlobals->refdefViewAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[0] = camDef->fpveh_offsetPitch + LocalClientGlobals->refdefViewAngles.v[0];
  }
}

/*
==============
CG_Camera_Vehicles_DetectTransitionToFirstPersonView
==============
*/
_BOOL8 CG_Camera_Vehicles_DetectTransitionToFirstPersonView(LocalClientNum_t localClientNum, double frameTime, bool *outIsThirdPerson, RefdefView *inOutRefDef)
{
  __int64 v7; 
  bool v8; 

  v7 = localClientNum;
  v8 = CG_Camera_Transition_Detect(localClientNum, NULL, 0, s_cameraTransition[v7].lastActiveCamera, inOutRefDef);
  if ( s_cameraTransition[v7].lastActiveCamera - 252 <= 3 )
    CG_GetLocalClientGlobals(localClientNum)->refdefViewAngles.v[2] = 0.0;
  s_cameraTransition[v7].lastActiveCamera = 0;
  *outIsThirdPerson |= v8;
  if ( v8 )
    CG_Camera_Transition_Update(localClientNum, frameTime, inOutRefDef);
  return v8;
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
void CG_Camera_Vehicles_GetSpeedNoiseDelta(float normalSpeed, int time, float pitchAmp, float rollAmp, float *outHorizOrPitch, float *outVertOrRoll)
{
  __int128 v8; 
  int v10; 
  int v11; 
  const dvar_t *v12; 
  int v13; 
  int v14; 
  float v15; 
  double v16; 
  const dvar_t *v17; 
  float v18; 
  double PerlinNoise2dValue; 
  float v20; 
  double v21; 

  *outHorizOrPitch = 0.0;
  *outVertOrRoll = 0.0;
  v8 = LODWORD(cm.broadphaseMax.v[1]);
  *(float *)&v8 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
  _XMM4 = v8;
  __asm { vmaxss  xmm1, xmm4, xmm2 }
  v10 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2146, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
    __debugbreak();
  v11 = time;
  v12 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange;
  v13 = v11 % v10;
  v14 = v11 / v10 % v10;
  if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v15 = NormalizeRange_0(normalSpeed, v12->current.value);
  v16 = I_fclamp(v15, 0.0, 1.0);
  v17 = DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve;
  v18 = *(float *)&v16;
  if ( !DCONST_DVARINT_bg_vehEnhanceSenseOfSpeedNoiseCurve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseCurve") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  switch ( v17->current.integer )
  {
    case 0:
      v18 = 0.0;
      break;
    case 2:
      v18 = *(float *)&v16 * *(float *)&v16;
      break;
    case 3:
      v18 = (float)(*(float *)&v16 * *(float *)&v16) * *(float *)&v16;
      break;
    case 4:
      v18 = 1.0 - (float)((float)(1.0 - *(float *)&v16) * (float)(1.0 - *(float *)&v16));
      break;
    case 5:
      v18 = 1.0 - (float)((float)((float)(1.0 - *(float *)&v16) * (float)(1.0 - *(float *)&v16)) * (float)(1.0 - *(float *)&v16));
      break;
    default:
      break;
  }
  PerlinNoise2dValue = Physics_GetPerlinNoise2dValue(7, v10, v13, v14);
  v20 = *(float *)&PerlinNoise2dValue * v18;
  v21 = Physics_GetPerlinNoise2dValue(17, v10, v13, v14);
  *outHorizOrPitch = v20 * pitchAmp;
  *outVertOrRoll = (float)(*(float *)&v21 * v18) * rollAmp;
}

/*
==============
CG_Camera_Vehicles_PostUpdate_Orbit
==============
*/
void CG_Camera_Vehicles_PostUpdate_Orbit(ClientCameraData *camData, float frameTime, BgVehiclePhysics *vehObj, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  const CameraDef *camDef; 
  CgHandler *Handler; 
  __int128 v11; 
  float v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  float v19; 
  __int128 v20; 
  __int128 v24; 
  const dvar_t *v26; 
  double v28; 
  float v29; 
  double NormalSpeedPlane; 
  float v31; 
  __int128 v32; 
  double v40; 
  const dvar_t *v41; 
  int integer; 
  const dvar_t *v43; 
  float value; 
  const dvar_t *v45; 
  float v46; 
  const dvar_t *v47; 
  float yawTurnAdjust; 
  BOOL v49; 
  bool v50; 
  __int128 v51; 
  float v57; 
  BOOL v58; 
  bool v59; 
  __int128 v60; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  double v69; 
  float outHorizOrPitch; 
  float outVertOrRoll; 
  float v80; 
  vec3_t outOrg; 
  float v82; 
  __int64 v83; 
  vec3_t forward; 
  vec3_t v85; 
  vec3_t angles; 

  v83 = -2i64;
  v82 = frameTime;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  camDef = camData->camDef;
  Handler = CgHandler::getHandler(camData->localClientNum);
  Handler->GetEntityAngles(Handler, vehObj->m_entityNumber, &angles);
  AngleVectors(&angles, &forward, NULL, NULL);
  _XMM12 = LODWORD(FLOAT_1_0);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(inOutRefDef->axis.m[0].v[0] * inOutRefDef->axis.m[0].v[0]) + (float)(inOutRefDef->axis.m[0].v[1] * inOutRefDef->axis.m[0].v[1])) + (float)(inOutRefDef->axis.m[0].v[2] * inOutRefDef->axis.m[0].v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2124, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( _a ))", (const char *)&queryFormat, "Vec3IsNormalized( _a )") )
    __debugbreak();
  v11 = LODWORD(forward.v[0]);
  v12 = forward.v[1];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(*(float *)&v11 * *(float *)&v11) + (float)(v12 * v12)) + (float)(forward.v[2] * forward.v[2])) - 1.0) & _xmm) >= 0.0020000001 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2125, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( _b ))", (const char *)&queryFormat, "Vec3IsNormalized( _b )") )
      __debugbreak();
    v11 = LODWORD(forward.v[0]);
    v12 = forward.v[1];
  }
  v13 = inOutRefDef->axis.m[0].v[1];
  v14 = LODWORD(inOutRefDef->axis.m[0].v[0]);
  v15 = v14;
  *(float *)&v15 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13));
  _XMM2 = v15;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm12, xmm0
  }
  *(float *)&v14 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM1);
  v19 = v13 * (float)(1.0 / *(float *)&_XMM1);
  v20 = v11;
  *(float *)&v20 = fsqrt((float)(*(float *)&v11 * *(float *)&v11) + (float)(v12 * v12));
  _XMM2 = v20;
  __asm
  {
    vcmpless xmm0, xmm2, cs:__real@80000000
    vblendvps xmm1, xmm2, xmm12, xmm0
  }
  v24 = LODWORD(FLOAT_1_0);
  *(float *)&v24 = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v12) * v19) + (float)((float)((float)(1.0 / *(float *)&_XMM1) * *(float *)&v11) * *(float *)&v14);
  *(double *)&_XMM0 = I_fclamp(*(float *)&v24, -1.0, 1.0);
  _XMM9 = v24;
  v80 = acosf_0(*(float *)&_XMM0);
  v26 = DCONST_DVARFLT_bg_vehCamPitchAddTime;
  if ( !DCONST_DVARFLT_bg_vehCamPitchAddTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamPitchAddTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  _XMM11 = 0i64;
  v28 = I_fclamp((float)(camData->orbitCamData.timeSimulating - camData->camDef->transitionIn.time) / v26->current.value, 0.0, 1.0);
  v29 = (float)((float)((float)((float)(*(float *)&v28 * 6.0) - 15.0) * *(float *)&v28) + 10.0) * (float)((float)(*(float *)&v28 * *(float *)&v28) * *(float *)&v28);
  if ( BgVehiclePhysics::IsDynamic(vehObj) )
  {
    NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(vehObj);
    v31 = *(float *)&NormalSpeedPlane;
    AxisToAngles((const tmat33_t<vec3_t> *)&vehObj->m_transform, &v85);
    v32 = LODWORD(FLOAT_0_0027777778);
    _XMM6 = 0i64;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    *(float *)&v32 = (float)((float)(0.0027777778 * v85.v[0]) - *(float *)&_XMM1) * 360.0;
    _XMM8 = v32;
    v85.v[0] = *(float *)&v32;
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    v85.v[1] = (float)((float)(0.0027777778 * v85.v[1]) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm6, xmm1, 1 }
    v85.v[2] = (float)((float)(0.0027777778 * v85.v[2]) - *(float *)&_XMM3) * 360.0;
    __asm { vmaxss  xmm1, xmm9, xmm11 }
    LocalClientGlobals->refdefViewAngles.v[2] = (float)((float)((float)(v85.v[2] * v29) * camDef->orbit.rollContrib) * (float)(*(float *)&_XMM1 * *(float *)&_XMM1)) + LocalClientGlobals->refdefViewAngles.v[2];
    __asm { vminss  xmm1, xmm8, xmm11 }
    *(float *)&_XMM6 = (float)((float)(*(float *)&_XMM1 * v29) * camDef->orbit.pitchContrib) * *(float *)&NormalSpeedPlane;
    v40 = ((double (__fastcall *)(BgVehiclePhysics *))vehObj->GetCameraPitchAddition)(vehObj);
    LocalClientGlobals->refdefViewAngles.v[0] = (float)((float)(*(float *)&v40 * _mm_cvtepi32_ps((__m128i)!camData->orbitCamData.inverseView).m128_f32[0]) + *(float *)&_XMM6) + LocalClientGlobals->refdefViewAngles.v[0];
    v41 = DCONST_DVARINT_bg_vehCamNoiseSpace;
    if ( !DCONST_DVARINT_bg_vehCamNoiseSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamNoiseSpace") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    integer = v41->current.integer;
    if ( (integer & 0xFFFFFFFD) == 0 )
    {
      outHorizOrPitch = 0.0;
      outVertOrRoll = 0.0;
      v43 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch;
      if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoisePitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoisePitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      value = v43->current.value;
      v45 = DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll;
      if ( !DCONST_DVARFLT_bg_vehEnhanceSenseOfSpeedNoiseRoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehEnhanceSenseOfSpeedNoiseRoll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v45);
      CG_Camera_Vehicles_GetSpeedNoiseDelta(v31, LocalClientGlobals->time, value, v45->current.value, &outHorizOrPitch, &outVertOrRoll);
      if ( integer )
      {
        if ( integer == 2 )
        {
          RefdefView_GetOrg(inOutRefDef, &outOrg);
          outOrg.v[0] = (float)((float)(outHorizOrPitch * inOutRefDef->axis.m[1].v[0]) + outOrg.v[0]) + (float)(outVertOrRoll * inOutRefDef->axis.m[2].v[0]);
          outOrg.v[1] = (float)((float)(outHorizOrPitch * inOutRefDef->axis.m[1].v[1]) + outOrg.v[1]) + (float)(outVertOrRoll * inOutRefDef->axis.m[2].v[1]);
          outOrg.v[2] = (float)((float)(outHorizOrPitch * inOutRefDef->axis.m[1].v[2]) + outOrg.v[2]) + (float)(outVertOrRoll * inOutRefDef->axis.m[2].v[2]);
          RefdefView_SetOrg(inOutRefDef, &outOrg);
          memset(&outOrg, 0, sizeof(outOrg));
        }
      }
      else
      {
        LocalClientGlobals->refdefViewAngles.v[2] = outVertOrRoll + LocalClientGlobals->refdefViewAngles.v[2];
        LocalClientGlobals->refdefViewAngles.v[0] = outHorizOrPitch + LocalClientGlobals->refdefViewAngles.v[0];
      }
    }
  }
  if ( camData->orbitCamData.inputUpdated || !camData->orbitCamData.cameraReturn )
  {
    AxisToAngles((const tmat33_t<vec3_t> *)&vehObj->m_transform, &v85);
    *(double *)vehObj->m_playerViewAngles.v = *(double *)v85.v;
    v46 = v85.v[2];
  }
  else
  {
    *(double *)vehObj->m_playerViewAngles.v = *(double *)LocalClientGlobals->refdefViewAngles.v;
    v46 = LocalClientGlobals->refdefViewAngles.v[2];
  }
  vehObj->m_playerViewAngles.v[2] = v46;
  v47 = DCONST_DVARFLT_bg_vehcamYawTurn;
  if ( !DCONST_DVARFLT_bg_vehcamYawTurn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamYawTurn") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  yawTurnAdjust = v47->current.value;
  if ( yawTurnAdjust < 0.0 )
    yawTurnAdjust = camDef->orbit.yawTurnAdjust;
  if ( yawTurnAdjust > 0.001 )
  {
    if ( !camData->orbitCamData.cameraReturn || camData->orbitCamData.inputUpdated || camData->orbitCamData.timeUntilReturn > 0.0 || !camData->orbitCamData.autoRecenterEnabled || camData->orbitCamData.cameraReturnBasedOnGas && COERCE_FLOAT(LODWORD(camData->orbitCamData.inputGas) & _xmm) <= 0.001 || camData->orbitCamData.speedForward < 0.0 || camData->orbitCamData.inverseView )
    {
      camData->orbitCamData.targetYawAdd = 0.0;
      goto LABEL_76;
    }
    v49 = Com_BitCheckAssert(vehObj->m_controls.playerEnabledBits, 2, 4);
    v50 = Com_BitCheckAssert(vehObj->m_controls.externalEnabledBits, 2, 4);
    v51 = LODWORD(vehObj->m_controls.playerValues[2]);
    _XMM9 = LODWORD(vehObj->m_controls.externalValues[2]);
    switch ( v49 + 3 * v50 )
    {
      case 1:
        *(float *)&_XMM9 = vehObj->m_controls.playerValues[2];
        break;
      case 3:
        break;
      case 4:
        switch ( vehObj->m_controls.valuePolicy[2] )
        {
          case VP_MAXABS:
            _XMM0 = _XMM9 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm0, xmm1
              vblendvps xmm9, xmm9, xmm3, xmm1
            }
            goto LABEL_59;
          case VP_MINABS:
            _XMM1 = v51 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm9, xmm9, xmm3, xmm1
            }
            goto LABEL_59;
          case VP_AVERAGE:
            *(float *)&_XMM9 = (float)(*(float *)&_XMM9 + *(float *)&v51) * 0.5;
            goto LABEL_59;
          case VP_AVERAGE_WEIGHT_PLAYER:
            *(float *)&_XMM9 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&_XMM9) + (float)(*(float *)&v51 * vehObj->m_controls.policyWeight);
            goto LABEL_59;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            *(float *)&_XMM9 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&v51) + (float)(*(float *)&_XMM9 * vehObj->m_controls.policyWeight);
            goto LABEL_59;
        }
      default:
        LODWORD(_XMM9) = 0;
        break;
    }
LABEL_59:
    LODWORD(v57) = _XMM9 & _xmm;
    v58 = Com_BitCheckAssert(vehObj->m_controls.playerEnabledBits, 7, 4);
    v59 = Com_BitCheckAssert(vehObj->m_controls.externalEnabledBits, 7, 4);
    v60 = LODWORD(vehObj->m_controls.playerValues[7]);
    _XMM8 = LODWORD(vehObj->m_controls.externalValues[7]);
    if ( v58 + 3 * v59 == 1 )
    {
      _XMM8 = LODWORD(vehObj->m_controls.playerValues[7]);
      goto LABEL_74;
    }
    if ( v58 + 3 * v59 != 3 )
    {
      if ( v58 + 3 * v59 != 4 )
        goto LABEL_72;
      switch ( vehObj->m_controls.valuePolicy[7] )
      {
        case VP_MAXABS:
          _XMM0 = _XMM8 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm0, xmm1
            vblendvps xmm8, xmm8, xmm3, xmm1
          }
          goto LABEL_74;
        case VP_MINABS:
          _XMM1 = v60 & (unsigned int)_xmm;
          __asm
          {
            vcmpltss xmm1, xmm1, xmm0
            vblendvps xmm8, xmm8, xmm3, xmm1
          }
          goto LABEL_74;
        case VP_AVERAGE:
          v64 = LODWORD(vehObj->m_controls.externalValues[7]);
          *(float *)&v64 = (float)(*(float *)&_XMM8 + *(float *)&v60) * 0.5;
          _XMM8 = v64;
          goto LABEL_74;
        case VP_AVERAGE_WEIGHT_PLAYER:
          v63 = LODWORD(FLOAT_1_0);
          *(float *)&v63 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&_XMM8) + (float)(*(float *)&v60 * vehObj->m_controls.policyWeight);
          _XMM8 = v63;
          goto LABEL_74;
      }
      if ( vehObj->m_controls.valuePolicy[7] != VP_AVERAGE_WEIGHT_EXTERNAL )
      {
LABEL_72:
        _XMM8 = 0i64;
        goto LABEL_74;
      }
      v62 = LODWORD(FLOAT_1_0);
      *(float *)&v62 = (float)((float)(1.0 - vehObj->m_controls.policyWeight) * *(float *)&v60) + (float)(*(float *)&_XMM8 * vehObj->m_controls.policyWeight);
      _XMM8 = v62;
    }
LABEL_74:
    BgVehiclePhysics::GetNormalSpeedPlane(vehObj);
    v69 = ((double (__fastcall *)(BgVehiclePhysics *))vehObj->GetCameraReturnFactor)(vehObj);
    _XMM8 = _XMM8 & (unsigned int)_xmm;
    __asm
    {
      vmaxss  xmm5, xmm8, xmm6
      vcmpless xmm3, xmm11, xmm7
    }
    _XMM1 = LODWORD(FLOAT_N57_295776);
    __asm { vblendvps xmm2, xmm1, xmm2, xmm3 }
    camData->orbitCamData.targetYawAdd = *(float *)&v69 * (float)((float)(*(float *)&_XMM5 * (float)((float)(*(float *)&_XMM2 * v80) * yawTurnAdjust)) * (float)(v57 * v57));
LABEL_76:
    LocalClientGlobals->refdefViewAngles.v[1] = (float)(v29 * camData->orbitCamData.curYawAdd) + LocalClientGlobals->refdefViewAngles.v[1];
    _XMM0 = LODWORD(camData->orbitCamData.curYawAdd) & (unsigned __int128)(unsigned int)_xmm;
    __asm
    {
      vcmpltss xmm4, xmm0, xmm3
      vblendvps xmm3, xmm12, xmm3, xmm4; speed
    }
    CG_Camera_DampLerp(&camData->orbitCamData.curYawAdd, camData->orbitCamData.targetYawAdd, v82, *(float *)&_XMM3);
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
  ClientCameraData *v5; 
  float v6; 
  float v7; 
  float v8; 
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
    v5 = &s_cameras[(int)i + 252][v3];
    RefdefView_GetOrg(inOutRefDef, &outOrg);
    v6 = outOrg.v[0];
    v5->curEyePos.v[0] = outOrg.v[0];
    v7 = outOrg.v[1];
    v5->curEyePos.v[1] = outOrg.v[1];
    v8 = outOrg.v[2];
    v5->curEyePos.v[2] = outOrg.v[2];
    v5->tgtEyePos.v[0] = v6;
    v5->tgtEyePos.v[1] = v7;
    v5->tgtEyePos.v[2] = v8;
    CG_Camera_StoreLinkedEyePos((LocalClientNum_t)v3, v5);
    v5->orbitCamData.timeUntilReturn = 0.0;
    v5->initialized = 0;
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
char CG_Camera_Vehicles_Update(LocalClientNum_t localClientNum, bool *outIsThirdPerson, RefdefView *inOutRefDef)
{
  __int128 v3; 
  __int64 v5; 
  unsigned int v8; 
  const centity_t *Entity; 
  double TimeScale; 
  double v11; 
  double v12; 
  __int64 v13; 
  char v14; 
  bool v15; 
  CgHandler *v16; 
  int v17; 
  int v18; 
  double v19; 
  __int128 v20; 
  double v22; 
  float v24; 
  bool IsRemoteControlledVehicle; 
  LocalClientNum_t v26; 
  bool IsValidVehicle; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int v31; 
  int VehicleCameraUpdateType; 
  CameraDef *cameraDef; 
  bool v34; 
  __int64 v35; 
  int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  RefdefView *p_inOutRefDefa; 
  int v41; 
  int v42; 
  int v43; 
  ClientCameraData *v44; 
  ClientCameraData *v45; 
  FlightDynamicsManager *FlightDynamicsManager; 
  cg_t *v47; 
  CameraProfile profile; 
  ClientCameraData *v49; 
  ClientCameraData *v50; 
  __int64 v51; 
  CgVehicleSystem *v52; 
  VehicleClient *v53; 
  BgVehiclePhysicsManager *v54; 
  BgVehiclePhysics *ObjectById; 
  double v56; 
  ClientCameraData *Data; 
  ClientCameraData *v58; 
  bool v59; 
  CgHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  CgHandler *v62; 
  bool IsClientVehicleCamera; 
  RefdefView *v64; 
  bool v65; 
  __int64 v66; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  vec3_t vehicleClient; 
  RefdefView inOutRefDefa; 
  __int128 v71; 

  v5 = localClientNum;
  if ( cls.frametime_base <= 0.0 )
    return 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1449, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v8 = 0;
  Entity = NULL;
  TimeScale = Com_GetTimeScale();
  HIDWORD(v12) = HIDWORD(TimeScale);
  *(float *)&v12 = *(float *)&TimeScale * cls.frametime_base;
  v11 = v12;
  v13 = v5;
  v14 = CG_Camera_Transition_Update((LocalClientNum_t)v5, v12, inOutRefDef);
  v66 = v13 * 424;
  s_cameraTransition[v13].lastWas3PWithFocus = 0;
  if ( s_cameraTransition[v5].active )
  {
    v59 = CG_Camera_Vehicles_ForceCameraLogic((LocalClientNum_t)v5);
    if ( !*outIsThirdPerson && !v59 || (Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum), RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, Handler), *outIsThirdPerson = 1, RemoteControlledVehicleEntityNum == 2047) )
    {
      CG_Camera_Vehicles_ResetVehicleViews((LocalClientNum_t)v5, inOutRefDef);
      s_cameraTransition[v13].active = 0;
    }
    goto LABEL_92;
  }
  v15 = CG_Camera_Vehicles_ForceCameraLogic((LocalClientNum_t)v5);
  if ( !*outIsThirdPerson && !v15 || (v16 = CgHandler::getHandler(LocalClientGlobals->localClientNum), v17 = BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, v16), *outIsThirdPerson = 1, v18 = v17, v17 == 2047) )
  {
    CG_Camera_Vehicles_ResetVehicleViews((LocalClientNum_t)v5, inOutRefDef);
    return CG_Camera_Vehicles_DetectTransitionToFirstPersonView((LocalClientNum_t)v5, COERCE_DOUBLE((unsigned __int64)LODWORD(FLOAT_0_016666668)), outIsThirdPerson, inOutRefDef);
  }
  v71 = v3;
  v19 = I_fclamp(cls.frametime_base, 0.0041666669, 0.041666668);
  v20 = LODWORD(s_frameTimeEMA[v5]);
  *(float *)&v20 = (float)(s_frameTimeEMA[v5] - (float)(s_frameTimeEMA[v5] * 0.016666668)) + (float)(*(float *)&v19 * 0.016666668);
  _XMM6 = v20;
  s_frameTimeEMA[v5] = *(float *)&v20;
  v22 = Com_GetTimeScale();
  __asm { vminss  xmm1, xmm6, cs:__real@3d2aaaab }
  v24 = *(float *)&v22 * *(float *)&_XMM1;
  Entity = CG_GetEntity((const LocalClientNum_t)v5, v18);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1490, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  IsRemoteControlledVehicle = CG_GameInterface_IsRemoteControlledVehicle((LocalClientNum_t)v5, Entity);
  v26 = (int)v5;
  if ( !IsRemoteControlledVehicle )
    goto LABEL_26;
  IsValidVehicle = CgVehicleSystem::PhysicsIsValidVehicle((LocalClientNum_t)v5, Entity);
  v26 = (int)v5;
  if ( !IsValidVehicle )
    goto LABEL_26;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v5);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1509, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
  *(_QWORD *)vehicleClient.v = Client;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1511, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1513, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  v26 = (int)v5;
  if ( !ClientDef->vehiclePhysicsDef.physicsEnabled )
  {
LABEL_26:
    CG_Camera_Vehicles_ResetVehicleViews(v26, inOutRefDef);
    return CG_Camera_Vehicles_DetectTransitionToFirstPersonView((LocalClientNum_t)v5, v11, outIsThirdPerson, inOutRefDef);
  }
  v31 = CG_Camera_Active_Get((LocalClientNum_t)v5);
  if ( v31 && v31 < 256 && (unsigned int)(v31 - 1) < 0xFA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1525, ASSERT_TYPE_ASSERT, "( !CameraType_Is_Def( CG_Camera_Active_Get( localClientNum ) ) )", "Can't run the camera for the vehicle because there's an active CameraSet. Call CameraDefault() before driving a vehicle") )
    __debugbreak();
  VehicleCameraUpdateType = (unsigned __int8)CG_GameInterface_GetVehicleCameraUpdateType((LocalClientNum_t)v5, ClientDef);
  switch ( VehicleCameraUpdateType )
  {
    case 9:
      if ( ClientDef->vehiclePhysicsDef.physics_gameProfile )
      {
        if ( ClientDef->vehiclePhysicsDef.physics_gameProfile == VEH_GAMEPROFILE_WHEELSON )
          v8 = 254;
      }
      else
      {
        v8 = 253;
      }
      break;
    case 11:
      goto LABEL_36;
    case 12:
      v8 = 255;
      break;
    case 13:
LABEL_36:
      v8 = 252;
      break;
  }
  cameraDef = ClientDef->cameraDef;
  if ( !cameraDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1534, ASSERT_TYPE_ASSERT, "(camDef)", (const char *)&queryFormat, "camDef") )
    __debugbreak();
  CG_Camera_GetData((LocalClientNum_t)v5, (CameraType)v8)->camDef = cameraDef;
  v34 = CG_Camera_Transition_Detect((LocalClientNum_t)v5, ClientDef, v8, *(unsigned int *)((char *)&s_cameraTransition[0].lastActiveCamera + v66), inOutRefDef);
  v65 = v34;
  if ( v34 && v8 >= 0xFC )
  {
    CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_CAR)->initialized = 0;
    v34 = v65;
  }
  v35 = v66;
  *(unsigned int *)((char *)&s_cameraTransition[0].lastActiveCamera + v66) = v8;
  if ( v34 )
  {
    RefdefView_GetOrg(inOutRefDef, &outOrg);
    inOutRefDefa.refdefViewOrg_aab += inOutRefDefa.refdefViewOrg_set_aab;
    v37 = (v36 + 136) ^ inOutRefDefa.refdefViewOrg_aab;
    LODWORD(inOutRefDefa.org.org.v[0]) = LODWORD(outOrg.v[0]) ^ (v37 * (v37 + 2));
    v38 = (v36 + 140) ^ inOutRefDefa.refdefViewOrg_aab;
    v39 = (v36 + 144) ^ inOutRefDefa.refdefViewOrg_aab;
    LODWORD(inOutRefDefa.org.org.v[1]) = LODWORD(outOrg.v[1]) ^ (v38 * (v38 + 2));
    LODWORD(inOutRefDefa.org.org.v[2]) = LODWORD(outOrg.v[2]) ^ (v39 * (v39 + 2));
    MatrixCopy33(&inOutRefDef->axis, &inOutRefDefa.axis);
    v35 = v66;
    p_inOutRefDefa = &inOutRefDefa;
  }
  else
  {
    p_inOutRefDefa = inOutRefDef;
  }
  v41 = VehicleCameraUpdateType - 9;
  if ( !v41 )
  {
    if ( ClientDef->vehiclePhysicsDef.physics_gameProfile )
    {
      if ( ClientDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_WHEELSON )
        goto LABEL_92;
      Data = CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_WHEELSON);
      CG_Camera_Vehicles_Update_TurretCam(Data, Entity, v24, p_inOutRefDefa);
      v14 = 1;
    }
    else
    {
      v58 = CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_BRADLEY);
      CG_Camera_Vehicles_Update_TurretCam(v58, Entity, v24, p_inOutRefDefa);
      v14 = 1;
    }
    goto LABEL_93;
  }
  v42 = v41 - 2;
  if ( !v42 )
    goto LABEL_55;
  v43 = v42 - 1;
  if ( !v43 )
  {
    *(&s_cameraTransition[0].lastWas3PWithFocus + v35) = 1;
    RefdefView_GetOrg(inOutRefDef, (vec3_t *)((char *)&s_cameraTransition[0].lastFocusOrigin + v35));
    if ( ClientDef->vehiclePhysicsDef.physics_gameProfile != VEH_GAMEPROFILE_FIXEDWING_RCPLANE )
    {
      if ( *(animScriptVehicleSeat_t *)((char *)&s_cameraTransition[0].lastSeat + v66) != VEHICLE_SEAT_DRIVER )
      {
        FlightDynamicsManager = BG_GetFlightDynamicsManager();
        if ( FlightDynamicsManager )
        {
          if ( (unsigned int)v5 >= LODWORD(cl_maxLocalClients) )
          {
            LODWORD(v64) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_flight_dynamics.h", 550, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( clientNum ) ) < (unsigned)( (cl_maxLocalClients) )", "static_cast<int>( clientNum ) doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v64, cl_maxLocalClients) )
              __debugbreak();
          }
          if ( (FlightDynamicsManager *)((char *)FlightDynamicsManager + 280 * v5) != (FlightDynamicsManager *)-196i64 )
          {
            memset_0(&FlightDynamicsManager->m_fdCameraData[v5].offsetEntityNum + 1, 0, 0x116ui64);
            *(_WORD *)&FlightDynamicsManager->m_fdCameraData[v5].resetParams = 257;
            FlightDynamicsManager->m_fdCameraData[v5].offsetEntityNum = 2047;
            FlightDynamicsManager->m_fdCameraData[v5].angleDelta.v[3] = 1.0;
            FlightDynamicsManager->m_fdCameraData[v5].contentsOfdVarQuat.v[3] = 1.0;
            FlightDynamicsManager->m_fdCameraData[v5].prevViewQuat.v[3] = 1.0;
            FlightDynamicsManager->m_fdCameraData[v5].localFBWquat.v[3] = 1.0;
          }
        }
      }
      v47 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
      v14 = CG_FlightDynamicsCameraUpdate(v47, Entity, ClientDef, v24, p_inOutRefDefa);
      CG_Camera_Vehicle_FlightDynamics_ApplyNoiseDelta((LocalClientNum_t)v5, Entity, p_inOutRefDefa);
      goto LABEL_92;
    }
    v45 = CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_RCPLANE);
    CG_Camera_Vehicles_Update_RCPlane(v45, Entity, v24, p_inOutRefDefa);
    v14 = 1;
LABEL_93:
    CG_Camera_Vehicles_UpdateAudioOrigin((LocalClientNum_t)v5, Entity, inOutRefDef);
    v62 = CgHandler::getHandler(LocalClientGlobals->localClientNum);
    IsClientVehicleCamera = BG_IsClientVehicleCamera(&LocalClientGlobals->predictedPlayerState, v62);
    CG_Camera_PostUpdate((LocalClientNum_t)v5, inOutRefDef, 1, IsClientVehicleCamera);
    return v14;
  }
  if ( v43 == 1 )
  {
LABEL_55:
    if ( ClientDef->vehiclePhysicsDef.physics_animProfile == VEH_ANIMPROFILE_VINDIA )
    {
      v44 = CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_CAR);
      CG_Camera_Vehicles_Update_TurretCam(v44, Entity, v24, p_inOutRefDefa);
      v14 = 1;
    }
    else
    {
      profile = cameraDef->profile;
      if ( profile != CAMERAPROFILE_ORBIT && profile != CAMERAPROFILE_FIRST_PERSON_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1565, ASSERT_TYPE_ASSERT, "( camDef->profile == CAMERAPROFILE_ORBIT || camDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )", "An orbit or a 1stVehicle profile is needed for this vehicle") )
        __debugbreak();
      v49 = CG_Camera_GetData((LocalClientNum_t)v5, CAMERA_CAR);
      v50 = v49;
      if ( cameraDef->profile == CAMERAPROFILE_ORBIT )
      {
        CG_Camera_Vehicles_Update_Orbit(cameraDef, v49, Entity, *(VehicleClient *const *)vehicleClient.v, v24, p_inOutRefDefa);
      }
      else if ( cameraDef->profile == CAMERAPROFILE_FIRST_PERSON_VEHICLE )
      {
        CG_Camera_Vehicles_1stPerson_Update(cameraDef, v49, Entity, *(VehicleClient *const *)vehicleClient.v, v24, p_inOutRefDefa);
      }
      if ( v65 )
      {
        v51 = v50->localClientNum;
        v52 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v50->localClientNum);
        v53 = CgVehicleSystem::GetClient(v52, Entity);
        if ( !v53 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1691, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
          __debugbreak();
        v54 = v52->PhysicsGetVehiclePhysicsManager(v52);
        ObjectById = BgVehiclePhysicsManager::GetObjectById(v54, v53->physicsId);
        if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1693, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
          __debugbreak();
        s_cameraTransition[v51].targetEyePos.v[0] = v50->curEyePos.v[0];
        s_cameraTransition[v51].targetEyePos.v[1] = v50->curEyePos.v[1];
        s_cameraTransition[v51].targetEyePos.v[2] = v50->curEyePos.v[2];
        AxisToAngles(&p_inOutRefDefa->axis, &outOrg);
        v56 = ((double (__fastcall *)(BgVehiclePhysics *))ObjectById->GetCameraPitchAddition)(ObjectById);
        outOrg.v[0] = *(float *)&v56 + outOrg.v[0];
        AnglesToAxis(&outOrg, &s_cameraTransition[v51].targetAxis);
        AxisToAngles(&s_cameraTransition[v51].targetAxis, &vehicleClient);
        vehicleClient.v[2] = 0.0;
        AnglesToAxis(&vehicleClient, &s_cameraTransition[v51].targetAxis);
        CG_Camera_Transition_Update((LocalClientNum_t)v5, v11, inOutRefDef);
      }
      v14 = 1;
    }
    goto LABEL_93;
  }
LABEL_92:
  if ( v14 )
    goto LABEL_93;
  return v14;
}

/*
==============
CG_Camera_Vehicles_UpdateAudioOrigin
==============
*/
void CG_Camera_Vehicles_UpdateAudioOrigin(LocalClientNum_t localClientNum, const centity_t *cent, const RefdefView *refdef)
{
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  const DObj *EntityDObj; 
  const XModel *Model; 
  float v9; 
  __int128 v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t outOrg; 
  vec3_t outOrigin; 
  __int64 v20; 

  if ( cent )
  {
    v20 = -2i64;
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1714, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    Client = CgVehicleSystem::GetClient(VehicleSystem, cent);
    if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1716, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
      __debugbreak();
    EntityDObj = CG_Vehicle_GetEntityDObj(VehicleSystem, cent);
    if ( CgVehicleSystem::IsDobjValidForVehicle(EntityDObj) )
    {
      Model = DObjGetModel(EntityDObj, 0);
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      v9 = outOrigin.v[0] + Model->bounds.midPoint.v[0];
      v10 = LODWORD(outOrigin.v[1]);
      *(float *)&v10 = outOrigin.v[1] + Model->bounds.midPoint.v[1];
      v11 = outOrigin.v[2] + Model->bounds.midPoint.v[2];
      RefdefView_GetOrg(refdef, &outOrg);
      v12 = v9 - outOrg.v[0];
      v13 = *(float *)&v10 - outOrg.v[1];
      v14 = v11 - outOrg.v[2];
      *(float *)&v10 = fsqrt((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
      _XMM3 = v10;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm1, xmm3, xmm2, xmm0
      }
      *(float *)&_XMM3 = *(float *)&v10 * frac;
      Client->audioState.entOriginForRev.v[0] = (float)((float)(v12 * (float)(1.0 / *(float *)&_XMM1)) * (float)(*(float *)&v10 * frac)) + outOrg.v[0];
      Client->audioState.entOriginForRev.v[1] = (float)((float)(v13 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM3) + outOrg.v[1];
      Client->audioState.entOriginForRev.v[2] = (float)((float)(v14 * (float)(1.0 / *(float *)&_XMM1)) * *(float *)&_XMM3) + outOrg.v[2];
      memset(&outOrg, 0, sizeof(outOrg));
      memset(&outOrigin, 0, sizeof(outOrigin));
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
  BgVehiclePhysicsManager *v12; 
  BgVehiclePhysics *ObjectById; 
  const char *name; 
  const VehicleDef *ClientDef; 
  bool v16; 
  float v17; 
  double NormalSpeed; 
  float v20; 
  float v21; 
  float v22; 
  const CameraDef *v23; 
  __int128 v24; 
  const CameraDef *v28; 
  bool firstTime; 
  __int128 v30; 
  bool initialReturn; 
  double v32; 
  __int128 v34; 
  __int128 v35; 
  BgVehiclePhysics_vtbl *v36; 
  __int128 v37; 
  float v41; 
  double v42; 
  const dvar_t *v43; 
  float value; 
  double v45; 
  float lerpSpeed; 
  const dvar_t *v47; 
  float v48; 
  LocalClientNum_t v49; 
  bool IsGamepadEnabled; 
  int ControllerFromClient; 
  bool VehicleCameraAutoRecenterEnabledGamepad; 
  double v53; 
  const dvar_t *v54; 
  float v55; 
  float speedFactor; 
  float v57; 
  double v58; 
  double NormalSpeedPlane; 
  VehiclePhysicsAnimProfile m_vehicleAnimProfile; 
  __int32 v61; 
  __int32 v62; 
  float v63; 
  float v64; 
  double v65; 
  const dvar_t *v66; 
  BOOL v67; 
  bool v68; 
  __int128 v69; 
  cg_t *LocalClientGlobals; 
  vec3_t vec; 
  vec3_t retSpherical; 
  vec3_t angles; 
  vec3_t forward; 
  vec3_t outVelLs; 
  vec3_t orbitOrg; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2498, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  if ( !camDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2499, ASSERT_TYPE_ASSERT, "( camDef )", "We need a camera definition for the vehicle") )
    __debugbreak();
  if ( !vehicleClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2500, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehicleClient->physicsId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2501, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehicleClient->physicsId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehicleClient->physicsId )") )
    __debugbreak();
  localClientNum = camData->localClientNum;
  camData->camDef = camDef;
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  v12 = VehicleSystem->PhysicsGetVehiclePhysicsManager(VehicleSystem);
  ObjectById = BgVehiclePhysicsManager::GetObjectById(v12, vehicleClient->physicsId);
  if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2508, ASSERT_TYPE_ASSERT, "( vehObj )", "We need a vehicle object for this camera") )
    __debugbreak();
  if ( camDef->profile != CAMERAPROFILE_ORBIT )
  {
    name = camDef->name;
    ClientDef = CgVehicleSystem::GetClientDef(vehicleClient);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2511, ASSERT_TYPE_ASSERT, "( camDef->profile == CAMERAPROFILE_ORBIT )", "Vehicle '%s' should use an Orbit camera profile. Currently '%s'", ClientDef->name, name) )
      __debugbreak();
  }
  v16 = camData->camDef == NULL;
  v17 = ObjectById->m_transform.m[3].v[2];
  *(_QWORD *)orbitOrg.v = *(_QWORD *)ObjectById->m_transform.row3.v;
  orbitOrg.v[2] = v17;
  if ( v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2088, ASSERT_TYPE_ASSERT, "(camData.camDef)", (const char *)&queryFormat, "camData.camDef") )
    __debugbreak();
  AxisToAngles((const tmat33_t<vec3_t> *)&ObjectById->m_transform, &angles);
  LODWORD(_XMM7) = 0;
  if ( camData->camDef->orbit.alignToMovement > 0.001 && BgVehiclePhysics::IsDynamic(ObjectById) )
  {
    NormalSpeed = BgVehiclePhysics::GetNormalSpeed(ObjectById);
    if ( *(float *)&NormalSpeed > 0.2 )
    {
      v20 = ObjectById->m_linearVelocityWs.v[1];
      v21 = ObjectById->m_linearVelocityWs.v[0];
      if ( (float)((float)(v20 * ObjectById->m_transform.m[0].v[1]) + (float)(v21 * ObjectById->m_transform.m[0].v[0])) > 0.0 && camData->orbitCamData.cameraReturn )
      {
        v22 = ObjectById->m_linearVelocityWs.v[2];
        v23 = camData->camDef;
        v24 = LODWORD(ObjectById->m_linearVelocityWs.v[0]);
        *(float *)&v24 = fsqrt((float)((float)(v21 * v21) + (float)(v20 * v20)) + (float)(v22 * v22));
        _XMM3 = v24;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm8, xmm0
        }
        vec.v[0] = v21 * (float)(1.0 / *(float *)&_XMM0);
        vec.v[1] = v20 * (float)(1.0 / *(float *)&_XMM0);
        vec.v[2] = v22 * (float)(1.0 / *(float *)&_XMM0);
        *(double *)&_XMM0 = I_fclamp(v23->orbit.alignToMovement, 0.0, 1.0);
        AngleVectors(&angles, &forward, NULL, NULL);
        vec.v[0] = (float)((float)(1.0 - *(float *)&_XMM0) * forward.v[0]) + (float)(*(float *)&_XMM0 * vec.v[0]);
        vec.v[1] = (float)((float)(1.0 - *(float *)&_XMM0) * forward.v[1]) + (float)(*(float *)&_XMM0 * vec.v[1]);
        vec.v[2] = (float)((float)(1.0 - *(float *)&_XMM0) * forward.v[2]) + (float)(*(float *)&_XMM0 * vec.v[2]);
        vectoangles(&vec, &angles);
      }
    }
  }
  v28 = camData->camDef;
  firstTime = CG_Camera_InitializeValues(camData);
  v30 = LODWORD(angles.v[1]);
  if ( firstTime )
  {
    camData->orbitCamData.sphericalCoords.v[2] = v28->orbit.initialPolar;
    camData->orbitCamData.sphericalCoords.v[1] = *(float *)&v30 - 180.0;
    camData->orbitCamData.lastYaw = *(float *)&v30;
    camData->orbitCamData.disableEyePosLocal = 1;
    camData->orbitCamData.cameraReturnDot = 1;
    initialReturn = v28->orbit.initialReturn;
    camData->orbitCamData.cameraReturn = initialReturn;
  }
  else
  {
    initialReturn = camData->orbitCamData.cameraReturn;
  }
  if ( !initialReturn || camData->orbitCamData.inputUpdated )
  {
    v41 = camData->orbitCamData.sphericalCoords.v[2];
    *(_QWORD *)retSpherical.v = *(_QWORD *)camData->orbitCamData.sphericalCoords.v;
    retSpherical.v[2] = v41;
  }
  else
  {
    retSpherical.v[2] = v28->orbit.initialPolar;
    v32 = AngleNormalize360(*(const float *)&v30);
    v34 = v30;
    *(float *)&v34 = *(float *)&v32 + 180.0;
    _XMM6 = v34;
    v35 = LODWORD(angles.v[1]);
    *(double *)&v35 = AngleNormalize360(angles.v[1]);
    v36 = ObjectById->__vftable;
    v37 = v35;
    *(float *)&v37 = (float)(*(float *)&v35 - 180.0) - camData->orbitCamData.sphericalCoords.v[1];
    _XMM0 = v37 & (unsigned int)_xmm;
    __asm
    {
      vcmpltss xmm2, xmm0, xmm2
      vblendvps xmm0, xmm6, xmm3, xmm2
    }
    retSpherical.v[1] = *(float *)&_XMM0;
    *(double *)&_XMM0 = ((double (__fastcall *)(BgVehiclePhysics *))v36->GetCameraRangeAddition)(ObjectById);
    retSpherical.v[0] = *(float *)&_XMM0 + _GetRange(&v28->orbit);
  }
  v42 = ((double (__fastcall *)(BgVehiclePhysics *))ObjectById->GetCameraRangeAddition)(ObjectById);
  camData->orbitCamData.sphericalCoords.v[0] = *(float *)&v42 + _GetRange(&v28->orbit);
  camData->traceMask = 2705;
  camData->traceIgnoreEntity = vehEnt->nextState.number;
  camData->traceWorld = 3 * camData->localClientNum + 2;
  camData->orbitCamData.cameraReturnBasedOnGas = v28->orbit.cameraReturnOnGas;
  if ( !ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) )
    goto LABEL_42;
  v43 = DCONST_DVARFLT_bg_vehCamLerpSpeedAir;
  if ( !DCONST_DVARFLT_bg_vehCamLerpSpeedAir && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamLerpSpeedAir") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  value = v43->current.value;
  if ( ObjectById->IsInAir(ObjectById) && value > 0.001 )
  {
    v45 = I_fclamp(ObjectById[4].m_history.m_lastPosition.v[0] / *(float *)&dword_145068860, 0.0, 1.0);
    lerpSpeed = (float)((float)(1.0 - *(float *)&v45) * v28->orbit.lerpSpeed) + (float)(*(float *)&v45 * value);
  }
  else
  {
LABEL_42:
    lerpSpeed = v28->orbit.lerpSpeed;
  }
  camData->orbitCamData.lerpSpeed = lerpSpeed;
  if ( ObjectById->m_vehicleAnimProfile )
  {
    v48 = FLOAT_5_0;
  }
  else
  {
    v47 = DCONST_DVARFLT_bg_vehCamAtvDisplFrom;
    if ( !DCONST_DVARFLT_bg_vehCamAtvDisplFrom && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamAtvDisplFrom") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    v48 = v47->current.value;
  }
  v49 = camData->localClientNum;
  camData->traceDisplaceFrom = v48;
  IsGamepadEnabled = CL_Input_IsGamepadEnabled(v49);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(camData->localClientNum);
  if ( IsGamepadEnabled )
    VehicleCameraAutoRecenterEnabledGamepad = GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad(ControllerFromClient);
  else
    VehicleCameraAutoRecenterEnabledGamepad = GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard(ControllerFromClient);
  camData->orbitCamData.autoRecenterEnabled = VehicleCameraAutoRecenterEnabledGamepad;
  camData->orbitCamData.yawInverted = 0;
  if ( v28->orbit.cameraReturnOnSpeed > 0.001 )
  {
    BgVehiclePhysics::ComputeVelocityLocalSpace(ObjectById, &ObjectById->m_linearVelocityWs, &outVelLs);
    v53 = I_fclamp(fsqrt((float)(outVelLs.v[0] * outVelLs.v[0]) + (float)(outVelLs.v[1] * outVelLs.v[1])) * (float)(1.0 / v28->orbit.cameraReturnOnSpeed), 0.0, 1.0);
    camData->orbitCamData.speedFactor = *(float *)&v53 * *(float *)&v53;
  }
  v54 = DCONST_DVARFLT_bg_vehCamLerpSpeedDrift;
  if ( !DCONST_DVARFLT_bg_vehCamLerpSpeedDrift && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamLerpSpeedDrift") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  v55 = v54->current.value;
  if ( v55 > 0.001 && !ObjectById->IsInAir(ObjectById) && ObjectById->SupportsFeature(ObjectById, VPFEAT_GROUND_VEHICLE) )
  {
    if ( v28->orbit.cameraReturnOnSpeed <= 0.001 )
      speedFactor = FLOAT_1_0;
    else
      speedFactor = camData->orbitCamData.speedFactor;
    v57 = 0.0;
    if ( ObjectById->m_vehicleType == VEH_CAR )
    {
      v58 = I_fclamp(ObjectById[3].m_centerOfMassWs.v[1] / ObjectById[3].m_invInertiaWs.m[0].v[2], 0.0, 1.0);
      v57 = 1.0 - *(float *)&v58;
    }
    camData->orbitCamData.speedFactor = (float)((float)(1.0 - v57) * speedFactor) + (float)(v57 * v55);
  }
  NormalSpeedPlane = BgVehiclePhysics::GetNormalSpeedPlane(ObjectById);
  camData->vehicleData.normalSpeed = *(float *)&NormalSpeedPlane;
  m_vehicleAnimProfile = ObjectById->m_vehicleAnimProfile;
  if ( m_vehicleAnimProfile == VEH_ANIMPROFILE_ATANGO )
  {
    v64 = FLOAT_88_0;
    goto LABEL_75;
  }
  v61 = m_vehicleAnimProfile - 1;
  if ( !v61 )
  {
    v64 = FLOAT_84_0;
    goto LABEL_75;
  }
  v62 = v61 - 10;
  if ( !v62 )
  {
    v64 = FLOAT_81_5;
    goto LABEL_75;
  }
  if ( v62 == 8 )
  {
    v64 = FLOAT_81_0;
LABEL_75:
    v65 = I_fclamp((float)((float)(0.0 * ObjectById->m_transform.m[2].v[1]) + (float)(0.0 * ObjectById->m_transform.m[2].v[0])) + (float)(1.0 * ObjectById->m_transform.m[2].v[2]), 0.0, 1.0);
    v63 = (float)((float)(1.0 - *(float *)&v65) * retSpherical.v[2]) + (float)(*(float *)&v65 * v64);
    goto LABEL_76;
  }
  v63 = 0.0;
LABEL_76:
  camData->vehicleData.polarMaxOnSpeed = v63;
  v66 = DCONST_DVARINT_bg_vehCamNoiseSpace;
  if ( !DCONST_DVARINT_bg_vehCamNoiseSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehCamNoiseSpace") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  camData->vehicleData.orbitNoise = v66->current.integer == 1;
  camData->orbitCamData.speedForward = (float)((float)(ObjectById->m_transform.m[0].v[1] * ObjectById->m_linearVelocityWs.v[1]) + (float)(ObjectById->m_transform.m[0].v[0] * ObjectById->m_linearVelocityWs.v[0])) + (float)(ObjectById->m_transform.m[0].v[2] * ObjectById->m_linearVelocityWs.v[2]);
  camData->orbitCamData.returnAzimuthFactor = ObjectById->GetCameraReturnFactor(ObjectById);
  v67 = Com_BitCheckAssert(ObjectById->m_controls.playerEnabledBits, 2, 4);
  v68 = Com_BitCheckAssert(ObjectById->m_controls.externalEnabledBits, 2, 4);
  v69 = LODWORD(ObjectById->m_controls.playerValues[2]);
  _XMM4 = LODWORD(ObjectById->m_controls.externalValues[2]);
  switch ( v67 + 3 * v68 )
  {
    case 1:
      *(float *)&_XMM7 = ObjectById->m_controls.playerValues[2];
      break;
    case 3:
      *(float *)&_XMM7 = ObjectById->m_controls.externalValues[2];
      break;
    case 4:
      if ( ObjectById->m_controls.valuePolicy[2] )
      {
        switch ( ObjectById->m_controls.valuePolicy[2] )
        {
          case VP_MINABS:
            _XMM1 = v69 & (unsigned int)_xmm;
            __asm
            {
              vcmpltss xmm1, xmm1, xmm0
              vblendvps xmm7, xmm4, xmm3, xmm1
            }
            break;
          case VP_AVERAGE:
            *(float *)&_XMM7 = (float)(*(float *)&_XMM4 + *(float *)&v69) * 0.5;
            break;
          case VP_AVERAGE_WEIGHT_PLAYER:
            *(float *)&_XMM7 = (float)((float)(1.0 - ObjectById->m_controls.policyWeight) * *(float *)&_XMM4) + (float)(*(float *)&v69 * ObjectById->m_controls.policyWeight);
            break;
          case VP_AVERAGE_WEIGHT_EXTERNAL:
            *(float *)&_XMM7 = (float)((float)(1.0 - ObjectById->m_controls.policyWeight) * *(float *)&v69) + (float)(*(float *)&_XMM4 * ObjectById->m_controls.policyWeight);
            break;
        }
      }
      else
      {
        _XMM0 = _XMM4 & (unsigned int)_xmm;
        __asm
        {
          vcmpltss xmm1, xmm0, xmm1
          vblendvps xmm7, xmm4, xmm3, xmm1
        }
      }
      break;
  }
  camData->orbitCamData.returnTimeFactor = (float)((float)(COERCE_FLOAT(_XMM7 & _xmm) * COERCE_FLOAT(_XMM7 & _xmm)) * 1.5) + 1.0;
  CG_Camera_Orbit_Step(camData, frameTime, &orbitOrg, &angles, &retSpherical, firstTime, inOutRefDef, camData->camType);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  CG_Camera_Vehicles_PostUpdate_Orbit(camData, frameTime, ObjectById, inOutRefDef);
}

/*
==============
CG_Camera_Vehicles_Update_RCPlane
==============
*/
void CG_Camera_Vehicles_Update_RCPlane(ClientCameraData *camData, const centity_t *vehEnt, float frameTime, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  int physics_cycleCamButton; 
  __int64 v14; 
  const ClActiveClient *v15; 
  int CmdNumber; 
  int lastCmdTimeButton1; 
  const dvar_t *v18; 
  float value; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  vec3_t *p_curEyePos; 
  float v27; 
  float v28; 
  __int128 v29; 
  float v30; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  const dvar_t *v37; 
  float v38; 
  double v39; 
  const dvar_t *v40; 
  const dvar_t *v41; 
  float vehCam_offsetZ; 
  const dvar_t *v43; 
  float vehCam_offsetY; 
  const dvar_t *v45; 
  float vehCam_offsetX; 
  const dvar_t *v47; 
  const dvar_t *v48; 
  char v49; 
  const DObj *v50; 
  vec3_t *v51; 
  float v52; 
  bool IsDobjValidForVehicle; 
  const centity_t *v54; 
  tmat33_t<vec3_t> *p_axis; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  double Float_Internal_DebugName; 
  float physics_rcpCam1stRollSpeed; 
  double v69; 
  float physics_rcpCam1stRollPercentage; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  __int128 v78; 
  __int64 v80; 
  BgVehiclePhysicsManager *v81; 
  BgVehiclePhysics *ObjectById; 
  double NormalSpeed; 
  float v84; 
  __int128 v86; 
  double PerlinNoise2dValue; 
  float v89; 
  float v90; 
  double v91; 
  float v92; 
  double v93; 
  float v94; 
  bool physics_rcpCam1stAttachToTagPlayer; 
  usercmd_s ucmd; 
  vec3_t focusPoint; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t end; 
  vec3_t v101; 
  vec3_t v102; 
  vec3_t outOrigin; 
  vec3_t outPos; 
  vec3_t v105; 
  vec3_t start; 
  vec3_t vec; 
  vec3_t right; 
  vec3_t angles; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> axis; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1787, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  Handler = CgHandler::getHandler(camData->localClientNum);
  CG_GetPoseOrigin(&vehEnt->pose, &outOrigin);
  Handler->GetEntityAngles(Handler, vehEnt->nextState.number, &angles);
  AngleVectors(&angles, &forward, &right, &up);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)camData->localClientNum);
  *(_QWORD *)v101.v = VehicleSystem;
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1803, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehEnt);
  *(_QWORD *)v102.v = Client;
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1805, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1807, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
    __debugbreak();
  if ( CG_Camera_InitializeValues(camData) )
  {
    camData->orbitCamData.camPerspectiveMode = ClientDef->vehCam_UseGDT != 0;
    camData->orbitCamData.lastCmdTimeButton1 = 0;
  }
  camData->traceMask = 2705;
  physics_cycleCamButton = ClientDef->vehiclePhysicsDef.physics_cycleCamButton;
  if ( physics_cycleCamButton )
  {
    v14 = 1i64 << ((unsigned __int8)physics_cycleCamButton - 1);
    v15 = ClActiveClient::GetClient((const LocalClientNum_t)camData->localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(v15);
    if ( CL_GetUserCmd(camData->localClientNum, CmdNumber, &ucmd) )
    {
      if ( ((int)v14 & ucmd.buttons) != 0 )
      {
        lastCmdTimeButton1 = camData->orbitCamData.lastCmdTimeButton1;
        if ( lastCmdTimeButton1 > ucmd.commandTime || ucmd.commandTime - lastCmdTimeButton1 > 1000 )
        {
          camData->orbitCamData.lastCmdTimeButton1 = ucmd.commandTime;
          camData->orbitCamData.camPerspectiveMode = (camData->orbitCamData.camPerspectiveMode + 1) % 2;
        }
      }
    }
    VehicleSystem = *(CgVehicleSystem **)v101.v;
  }
  if ( camData->orbitCamData.camPerspectiveMode == 1 )
  {
    v18 = DCONST_DVARFLT_bg_rcp_cam3rd_focusX;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_focusX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_focusX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    value = v18->current.value;
    v20 = DCONST_DVARFLT_bg_rcp_cam3rd_focusZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_focusZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_focusZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.value;
    focusPoint.v[0] = (float)(value * forward.v[0]) + (float)((float)(v21 * up.v[0]) + outOrigin.v[0]);
    focusPoint.v[1] = (float)(value * forward.v[1]) + (float)((float)(v21 * up.v[1]) + outOrigin.v[1]);
    focusPoint.v[2] = (float)(value * forward.v[2]) + (float)((float)(v21 * up.v[2]) + outOrigin.v[2]);
    v22 = DCONST_DVARFLT_bg_rcp_cam3rd_eyeX;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_eyeX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_eyeX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_eyeZ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_eyeZ") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    end.v[0] = (float)(v25 * up.v[0]) + (float)((float)(v23 * forward.v[0]) + outOrigin.v[0]);
    end.v[1] = (float)(v25 * up.v[1]) + (float)((float)(v23 * forward.v[1]) + outOrigin.v[1]);
    end.v[2] = (float)(v25 * up.v[2]) + (float)((float)(v23 * forward.v[2]) + outOrigin.v[2]);
    start.v[0] = (float)(v25 * 0.0) + outOrigin.v[0];
    start.v[1] = (float)(v25 * 0.0) + outOrigin.v[1];
    start.v[2] = (float)(v25 * 1.0) + outOrigin.v[2];
    p_curEyePos = &camData->curEyePos;
    if ( CG_Camera_Orbit_Trace(camData->traceWorld, 8.0, camData->traceIgnoreEntity, &start, &end, camData->traceMask, 0.0, &outPos) )
    {
      p_curEyePos->v[0] = outPos.v[0];
      camData->curEyePos.v[1] = outPos.v[1];
      camData->curEyePos.v[2] = outPos.v[2];
    }
    else
    {
      vec.v[0] = end.v[0] - p_curEyePos->v[0];
      vec.v[1] = end.v[1] - camData->curEyePos.v[1];
      vec.v[2] = end.v[2] - camData->curEyePos.v[2];
      v27 = focusPoint.v[0] - p_curEyePos->v[0];
      v29 = LODWORD(focusPoint.v[1]);
      v28 = focusPoint.v[1] - camData->curEyePos.v[1];
      v30 = focusPoint.v[2] - camData->curEyePos.v[2];
      *(float *)&v29 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v30 * v30));
      _XMM4 = v29;
      __asm
      {
        vcmpless xmm0, xmm4, cs:__real@80000000
        vblendvps xmm1, xmm4, xmm2, xmm0
      }
      v101.v[0] = (float)(1.0 / *(float *)&_XMM1) * v27;
      v101.v[1] = (float)(1.0 / *(float *)&_XMM1) * v28;
      v101.v[2] = (float)(1.0 / *(float *)&_XMM1) * v30;
      BG_AxisFromForward(&v101, &identityMatrix33.m[2], &outAxis);
      AxisTranspose(&outAxis, &out);
      AxisTransformVec3(&out, &vec, &v105);
      AxisTransformVec3(&out, &camData->curEyePos, &v102);
      v34 = DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed;
      if ( !DCONST_DVARVEC3_bg_rcp_cam3rd_lerpSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_lerpSpeed") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      v35 = frameTime * v34->current.vector.v[1];
      v36 = frameTime * v34->current.vector.v[2];
      v102.v[0] = (float)((float)(frameTime * v34->current.value) * v105.v[0]) + v102.v[0];
      v102.v[1] = (float)(v35 * v105.v[1]) + v102.v[1];
      v102.v[2] = (float)(v36 * v105.v[2]) + v102.v[2];
      AxisTransformVec3(&outAxis, &v102, &camData->curEyePos);
    }
    BG_Camera_AxisFromEyeFocus(&camData->curEyePos, &focusPoint, &identityMatrix33.m[2], &inOutRefDef->axis);
    RefdefView_SetOrg(inOutRefDef, &camData->curEyePos);
    AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
    v37 = DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed;
    if ( !DCONST_DVARFLT_bg_rcp_cam3rd_rollSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam3rd_rollSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v38 = v37->current.value;
    if ( v38 > 0.0 )
    {
      v39 = I_fclamp((float)((float)((float)(angles.v[2] - camData->vehicleData.angles.v[2]) * frameTime) * v38) + camData->vehicleData.angles.v[2], -80.0, 80.0);
      camData->vehicleData.angles.v[2] = *(float *)&v39;
      LocalClientGlobals->refdefViewAngles.v[2] = *(float *)&v39;
    }
    memset(&outPos, 0, sizeof(outPos));
    return;
  }
  *(_QWORD *)end.v = CG_Vehicle_GetEntityDObj(VehicleSystem, vehEnt);
  v40 = DCONST_DVARBOOL_bg_rcpUseDvars;
  *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    v40 = *(const dvar_t **)focusPoint.v;
  }
  Dvar_CheckFrontendServerThread(v40);
  if ( *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64) )
  {
    v41 = DCONST_DVARFLT_bg_rcp_cam1st_offsZ;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsZ;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsZ )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsZ") )
        __debugbreak();
      v41 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v41);
    vehCam_offsetZ = *(float *)(*(_QWORD *)focusPoint.v + 40i64);
    v43 = DCONST_DVARFLT_bg_rcp_cam1st_offsY;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsY;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsY )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsY") )
        __debugbreak();
      v43 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v43);
    vehCam_offsetY = *(float *)(*(_QWORD *)focusPoint.v + 40i64);
    v45 = DCONST_DVARFLT_bg_rcp_cam1st_offsX;
    *(_QWORD *)focusPoint.v = DCONST_DVARFLT_bg_rcp_cam1st_offsX;
    if ( !DCONST_DVARFLT_bg_rcp_cam1st_offsX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_offsX") )
        __debugbreak();
      v45 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v45);
    vehCam_offsetX = *(float *)(*(_QWORD *)focusPoint.v + 40i64);
  }
  else
  {
    vehCam_offsetX = ClientDef->vehCam_offsetX;
    vehCam_offsetY = ClientDef->vehCam_offsetY;
    vehCam_offsetZ = ClientDef->vehCam_offsetZ;
  }
  physics_rcpCam1stAttachToTagPlayer = ClientDef->vehiclePhysicsDef.physics_rcpCam1stAttachToTagPlayer;
  v47 = DCONST_DVARBOOL_bg_rcpUseDvars;
  *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcpUseDvars;
  if ( !DCONST_DVARBOOL_bg_rcpUseDvars )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcpUseDvars") )
      __debugbreak();
    v47 = *(const dvar_t **)focusPoint.v;
  }
  Dvar_CheckFrontendServerThread(v47);
  if ( *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64) )
  {
    v48 = DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer;
    *(_QWORD *)focusPoint.v = DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer;
    if ( !DCONST_DVARBOOL_bg_rcp_cam1st_attachToTagPlayer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_rcp_cam1st_attachToTagPlayer") )
        __debugbreak();
      v48 = *(const dvar_t **)focusPoint.v;
    }
    Dvar_CheckFrontendServerThread(v48);
    v49 = *(_BYTE *)(*(_QWORD *)focusPoint.v + 40i64);
    physics_rcpCam1stAttachToTagPlayer = v49;
  }
  else
  {
    v49 = physics_rcpCam1stAttachToTagPlayer;
  }
  if ( !v49 )
  {
    v51 = &camData->curEyePos;
    v56 = forward.v[1];
    camData->curEyePos.v[1] = (float)(vehCam_offsetX * forward.v[1]) + outOrigin.v[1];
    v57 = forward.v[2];
    camData->curEyePos.v[2] = (float)(vehCam_offsetX * forward.v[2]) + outOrigin.v[2];
    v58 = forward.v[0];
    v59 = right.v[0];
    v60 = (float)((float)(vehCam_offsetX * forward.v[0]) + outOrigin.v[0]) + (float)(vehCam_offsetY * right.v[0]);
    camData->curEyePos.v[0] = v60;
    v61 = right.v[1];
    camData->curEyePos.v[1] = (float)(vehCam_offsetY * right.v[1]) + camData->curEyePos.v[1];
    v62 = right.v[2];
    camData->curEyePos.v[2] = (float)(vehCam_offsetY * right.v[2]) + camData->curEyePos.v[2];
    v63 = up.v[0];
    camData->curEyePos.v[0] = (float)(vehCam_offsetZ * up.v[0]) + v60;
    v64 = up.v[1];
    camData->curEyePos.v[1] = (float)(vehCam_offsetZ * up.v[1]) + camData->curEyePos.v[1];
    v65 = up.v[2];
    camData->curEyePos.v[2] = (float)(vehCam_offsetZ * up.v[2]) + camData->curEyePos.v[2];
    p_axis = &inOutRefDef->axis;
    inOutRefDef->axis.m[0].v[0] = v58;
    inOutRefDef->axis.m[0].v[1] = v56;
    inOutRefDef->axis.m[0].v[2] = v57;
    inOutRefDef->axis.m[1].v[0] = COERCE_FLOAT(LODWORD(v59) ^ _xmm);
    inOutRefDef->axis.m[1].v[1] = COERCE_FLOAT(LODWORD(v61) ^ _xmm);
    inOutRefDef->axis.m[1].v[2] = COERCE_FLOAT(LODWORD(v62) ^ _xmm);
    inOutRefDef->axis.m[2].v[0] = v63;
    inOutRefDef->axis.m[2].v[1] = v64;
    inOutRefDef->axis.m[2].v[2] = v65;
    goto LABEL_89;
  }
  v50 = *(const DObj **)end.v;
  if ( CgVehicleSystem::IsDobjValidForVehicle(*(const DObj **)end.v) )
    CG_DObjGetWorldTagPos(&vehEnt->pose, v50, scr_const.tag_player, &outPos);
  else
    CG_GetPoseOrigin(&vehEnt->pose, &outPos);
  v51 = &camData->curEyePos;
  camData->curEyePos.v[1] = (float)(vehCam_offsetX * forward.v[1]) + outPos.v[1];
  camData->curEyePos.v[2] = (float)(vehCam_offsetX * forward.v[2]) + outPos.v[2];
  v52 = (float)((float)(vehCam_offsetX * forward.v[0]) + outPos.v[0]) + (float)(vehCam_offsetY * right.v[0]);
  camData->curEyePos.v[0] = v52;
  camData->curEyePos.v[1] = (float)(vehCam_offsetY * right.v[1]) + camData->curEyePos.v[1];
  camData->curEyePos.v[2] = (float)(vehCam_offsetY * right.v[2]) + camData->curEyePos.v[2];
  camData->curEyePos.v[0] = (float)(vehCam_offsetZ * up.v[0]) + v52;
  camData->curEyePos.v[1] = (float)(vehCam_offsetZ * up.v[1]) + camData->curEyePos.v[1];
  camData->curEyePos.v[2] = (float)(vehCam_offsetZ * up.v[2]) + camData->curEyePos.v[2];
  IsDobjValidForVehicle = CgVehicleSystem::IsDobjValidForVehicle(v50);
  v54 = vehEnt;
  if ( !IsDobjValidForVehicle )
    goto LABEL_86;
  if ( !CG_DObjGetWorldTagMatrix(&vehEnt->pose, v50, scr_const.tag_player, &outAxis, &end) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1966, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RC Plane has no bone: tag_player, but attaching camera to tag_player is enabled!") )
      __debugbreak();
    v54 = vehEnt;
LABEL_86:
    CG_GetPoseOrigin(&v54->pose, &end);
  }
  AxisToAngles(&outAxis, &focusPoint);
  AngleVectors(&focusPoint, &v105, &vec, &start);
  p_axis = &inOutRefDef->axis;
  inOutRefDef->axis.m[0] = v105;
  inOutRefDef->axis.m[1].v[0] = COERCE_FLOAT(LODWORD(vec.v[0]) ^ _xmm);
  inOutRefDef->axis.m[1].v[1] = COERCE_FLOAT(LODWORD(vec.v[1]) ^ _xmm);
  inOutRefDef->axis.m[1].v[2] = COERCE_FLOAT(LODWORD(vec.v[2]) ^ _xmm);
  inOutRefDef->axis.m[2] = start;
LABEL_89:
  RefdefView_SetOrg(inOutRefDef, v51);
  AxisToAngles(p_axis, &LocalClientGlobals->refdefViewAngles);
  v66 = 0.0;
  if ( physics_rcpCam1stAttachToTagPlayer )
  {
    AnglesToAxis(&angles, &out);
    MatrixTranspose(&out, &in2);
    MatrixMultiply(&outAxis, &in2, &axis);
    AxisToAngles(&axis, &v105);
    v66 = v105.v[2];
  }
  if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_rollSpeed, "bg_rcp_cam1st_rollSpeed");
    physics_rcpCam1stRollSpeed = *(float *)&Float_Internal_DebugName;
    v69 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_rollPercentage, "bg_rcp_cam1st_rollPercentage");
    physics_rcpCam1stRollPercentage = *(float *)&v69;
  }
  else
  {
    physics_rcpCam1stRollSpeed = ClientDef->vehiclePhysicsDef.physics_rcpCam1stRollSpeed;
    physics_rcpCam1stRollPercentage = ClientDef->vehiclePhysicsDef.physics_rcpCam1stRollPercentage;
  }
  if ( physics_rcpCam1stRollSpeed > 0.0 || physics_rcpCam1stRollPercentage != 1.0 )
  {
    v71 = physics_rcpCam1stRollPercentage * angles.v[2];
    v72 = camData->vehicleData.angles.v[2];
    v74 = v71 - v72;
    v73 = v74;
    if ( physics_rcpCam1stRollSpeed == 0.0 )
    {
      camData->vehicleData.angles.v[2] = v72 + v74;
      v75 = (float)(v72 + v74) + v66;
    }
    else
    {
      v76 = (float)(v74 * frameTime) * physics_rcpCam1stRollSpeed;
      v78 = LODWORD(camData->vehicleData.angles.v[2]);
      *(float *)&v78 = v72 + v76;
      _XMM0 = v78;
      if ( v73 <= 0.0 )
        __asm { vmaxss  xmm1, xmm0, xmm3 }
      else
        __asm { vminss  xmm1, xmm0, xmm3 }
      camData->vehicleData.angles.v[2] = *(float *)&_XMM1;
      v75 = *(float *)&_XMM1 + v66;
    }
    LocalClientGlobals->refdefViewAngles.v[2] = v75;
  }
  v80 = *(_QWORD *)v102.v;
  if ( BGVehicles::PhysicsIsValid(*(_DWORD *)(*(_QWORD *)v102.v + 584i64)) )
  {
    v81 = (BgVehiclePhysicsManager *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v101.v + 368i64))(*(_QWORD *)v101.v);
    ObjectById = BgVehiclePhysicsManager::GetObjectById(v81, *(_DWORD *)(v80 + 584));
    if ( !ObjectById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2054, ASSERT_TYPE_ASSERT, "(vehObj)", (const char *)&queryFormat, "vehObj") )
      __debugbreak();
    NormalSpeed = BgVehiclePhysics::GetNormalSpeed(ObjectById);
    v84 = *(float *)&NormalSpeed;
    v86 = LODWORD(cm.broadphaseMax.v[1]);
    *(float *)&v86 = cm.broadphaseMax.v[1] - cm.broadphaseMin.v[1];
    _XMM4 = v86;
    __asm { vmaxss  xmm1, xmm4, xmm3 }
    if ( (int)*(float *)&_XMM1 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 2060, ASSERT_TYPE_ASSERT, "(maxExtentComp > 0)", (const char *)&queryFormat, "maxExtentComp > 0") )
      __debugbreak();
    PerlinNoise2dValue = Physics_GetPerlinNoise2dValue(13, (int)*(float *)&_XMM1, LocalClientGlobals->time % (int)*(float *)&_XMM1, LocalClientGlobals->time / (int)*(float *)&_XMM1 % (int)*(float *)&_XMM1);
    v90 = *(float *)&PerlinNoise2dValue * v84;
    v89 = *(float *)&PerlinNoise2dValue * v84;
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_rcpUseDvars, "bg_rcpUseDvars") )
    {
      v91 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_noisePitchScale, "bg_rcp_cam1st_noisePitchScale");
      v92 = *(float *)&v91;
      v93 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_rcp_cam1st_noiseRollScale, "bg_rcp_cam1st_noiseRollScale");
      v94 = *(float *)&v93;
    }
    else
    {
      v92 = ClientDef->vehiclePhysicsDef.physics_rcpCam1stNoiseScale.v[1];
      v94 = ClientDef->vehiclePhysicsDef.physics_rcpCam1stNoiseScale.v[0];
    }
    LocalClientGlobals->refdefViewAngles.v[0] = (float)(v92 * v90) + LocalClientGlobals->refdefViewAngles.v[0];
    LocalClientGlobals->refdefViewAngles.v[2] = (float)(v94 * v89) + LocalClientGlobals->refdefViewAngles.v[2];
  }
}

/*
==============
CG_Camera_Vehicles_Update_TurretCam
==============
*/
void CG_Camera_Vehicles_Update_TurretCam(ClientCameraData *camData, const centity_t *vehEnt, float frameTime, RefdefView *inOutRefDef)
{
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  bool v10; 
  int traceMask; 
  const VehicleDef *ClientDef; 
  double v13; 
  __int64 localClientNum; 
  float v15; 
  BGTurretVehicleCamInfo camInfo; 
  vec3_t outEyePos; 

  if ( !vehEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1745, ASSERT_TYPE_ASSERT, "(vehEnt)", (const char *)&queryFormat, "vehEnt") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)camData->localClientNum);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)camData->localClientNum);
  if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1750, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  Client = CgVehicleSystem::GetClient(VehicleSystem, vehEnt);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 1752, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
    __debugbreak();
  CG_Camera_InitializeValues(camData);
  camData->traceMask = 2705;
  RefdefView_GetOrg(inOutRefDef, &camInfo.eyePos);
  MatrixCopy33(&inOutRefDef->axis, &camInfo.eyeView);
  v10 = LocalClientGlobals->inKillCam == 1;
  camInfo.ps = &LocalClientGlobals->predictedPlayerState;
  traceMask = camData->traceMask;
  camInfo.inKillcam = v10;
  camInfo.traceMask = traceMask;
  ClientDef = CgVehicleSystem::GetClientDef(Client);
  v13 = *(double *)vehEnt->pose.angles.v;
  camInfo.vehDef = ClientDef;
  camInfo.vehEntAngles.v[2] = vehEnt->pose.angles.v[2];
  camInfo.vehEntNum = vehEnt->nextState.number;
  LODWORD(ClientDef) = camData->localClientNum;
  *(double *)camInfo.vehEntAngles.v = v13;
  camInfo.worldId = 3 * (_DWORD)ClientDef + 2;
  BG_Camera_VehicleTurret(&camInfo, &outEyePos, &inOutRefDef->axis, NULL, frameTime);
  RefdefView_SetOrg(inOutRefDef, &outEyePos);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
  LocalClientGlobals->clientVehicle.clearCameraShake = 1;
  localClientNum = camData->localClientNum;
  v15 = camInfo.eyePos.v[2];
  *(double *)s_cameraTransition[localClientNum].lastFocusOrigin.v = *(double *)camInfo.eyePos.v;
  s_cameraTransition[localClientNum].lastFocusOrigin.v[2] = v15;
  s_cameraTransition[localClientNum].lastWas3PWithFocus = 1;
}

/*
==============
ClientCameraOrbitData::CanReturnCamera
==============
*/
bool ClientCameraOrbitData::CanReturnCamera(ClientCameraOrbitData *this)
{
  return this->cameraReturn && !this->inputUpdated && this->timeUntilReturn <= 0.0 && this->autoRecenterEnabled && (!this->cameraReturnBasedOnGas || COERCE_FLOAT(LODWORD(this->inputGas) & _xmm) > 0.001) && this->speedForward >= 0.0;
}

/*
==============
ClientCameraTransition::GetTimeForCurve
==============
*/
float ClientCameraTransition::GetTimeForCurve(ClientCameraTransition *this, float normalizedTime, CameraTransitionCurve curve)
{
  __int32 v3; 
  __int32 v4; 
  float result; 

  v3 = curve - 1;
  if ( !v3 )
    return normalizedTime;
  v4 = v3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (float)((float)((float)((float)(normalizedTime * 6.0) - 15.0) * normalizedTime) + 10.0) * (float)((float)(normalizedTime * normalizedTime) * normalizedTime);
    else
      return FLOAT_1_0;
  }
  else
  {
    result = 0.0;
    if ( normalizedTime >= 0.0 )
    {
      result = FLOAT_1_0;
      if ( normalizedTime < 1.0 )
        return (float)(3.0 - (float)(normalizedTime * 2.0)) * (float)(normalizedTime * normalizedTime);
    }
  }
  return result;
}

/*
==============
ClientCameraTransition::InitFromDef
==============
*/
bool ClientCameraTransition::InitFromDef(ClientCameraTransition *this, const CameraTransitionDef *transDef)
{
  float time; 
  bool result; 

  if ( transDef->active && (time = transDef->time, time > 0.001) )
  {
    this->activeTime = 0.0;
    this->time = time;
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
  centity_t *v9; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  float timeToStartAxis; 
  float v14; 
  float v15; 
  double TimeForCurve; 
  vec4_t angles; 
  vec4_t outOrigin; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> dst; 
  vec4_t result; 

  if ( !this->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3725, ASSERT_TYPE_ASSERT, "(active)", (const char *)&queryFormat, "active") )
    __debugbreak();
  if ( !this->transitionInLocalSpace )
    goto LABEL_11;
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType(localClientNum);
  linkEnt = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity(localClientNum, linkEnt), (v9 = Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    if ( IsTransitionSkydiveOrbitCamType )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler(localClientNum);
      Instance = CgWeaponMap::GetInstance(localClientNum);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, (vec3_t *)&outOrigin, Handler);
      AxisToAngles(&axis, (vec3_t *)&angles);
      angles.v[2] = 0.0;
      AnglesToAxis((const vec3_t *)&angles, &axis);
      MatrixMultiply(&axis, &this->sourceAxisLocal, &out);
      MatrixMultiply(&axis, &this->targetAxisLocal, &dst);
      goto LABEL_12;
    }
LABEL_11:
    MatrixCopy33(&this->sourceAxis, &out);
    MatrixCopy33(&this->targetAxis, &dst);
    goto LABEL_12;
  }
  CG_GetPoseOrigin(&Entity->pose, (vec3_t *)&outOrigin);
  *(_QWORD *)angles.v = *(_QWORD *)v9->pose.angles.v;
  angles.v[2] = v9->pose.angles.v[2];
  AnglesToAxis((const vec3_t *)&angles, &axis);
  MatrixMultiply(&axis, &this->sourceAxisLocal, &out);
  MatrixMultiply(&axis, &this->targetAxisLocal, &dst);
LABEL_12:
  if ( this->timeToStartAxis <= this->activeTime && ClientCameraTransition::ShouldInterpolateTransition(this, localClientNum) )
  {
    timeToStartAxis = this->timeToStartAxis;
    v14 = this->activeTime - timeToStartAxis;
    v15 = this->time - timeToStartAxis;
    I_fclamp(v14 / v15, 0.0, 1.0);
    TimeForCurve = ClientCameraTransition::GetTimeForCurve(this, v14 / v15, this->axisCurve);
    AxisToQuat(&out, &angles);
    AxisToQuat(&dst, &outOrigin);
    QuatNlerp(&angles, &outOrigin, *(float *)&TimeForCurve, &result);
    QuatToAxis(&result, outAxis);
  }
  else
  {
    MatrixCopy33(&out, outAxis);
  }
}

/*
==============
ClientCameraTransition::InterpolateEyePos
==============
*/
void ClientCameraTransition::InterpolateEyePos(ClientCameraTransition *this, const LocalClientNum_t localClientNum, bool findDistanceToPlayer, vec3_t *outEyePos, float *outDistance)
{
  __int64 v8; 
  bool IsTransitionSkydiveOrbitCamType; 
  __int16 linkEnt; 
  centity_t *Entity; 
  vec3_t *v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double TimeForCurve; 
  cg_t *v27; 
  CgHandler *v28; 
  CgWeaponMap *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  vec3_t outOrigin; 
  vec3_t out; 
  vec3_t v38; 
  vec3_t angles; 
  vec3_t v40; 
  vec3_t v41; 
  tmat33_t<vec3_t> axis; 

  v8 = localClientNum;
  if ( !this->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3643, ASSERT_TYPE_ASSERT, "(active)", (const char *)&queryFormat, "active") )
    __debugbreak();
  if ( !outDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 3644, ASSERT_TYPE_ASSERT, "(outDistance)", (const char *)&queryFormat, "outDistance") )
    __debugbreak();
  if ( !this->transitionInLocalSpace )
    goto LABEL_14;
  IsTransitionSkydiveOrbitCamType = CG_Camera_IsTransitionSkydiveOrbitCamType((const LocalClientNum_t)v8);
  linkEnt = CG_GetLocalClientGlobals((const LocalClientNum_t)v8)->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 || (Entity = CG_GetEntity((const LocalClientNum_t)v8, linkEnt), (v12 = (vec3_t *)Entity) == NULL) || (Entity->flags & 1) == 0 )
  {
    if ( IsTransitionSkydiveOrbitCamType )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
      AnglesToAxis(&LocalClientGlobals->predictedPlayerState.viewangles, &axis);
      Handler = CgHandler::getHandler((LocalClientNum_t)v8);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v8);
      BG_GetPlayerEyePosition(Instance, &LocalClientGlobals->predictedPlayerState, &outOrigin, Handler);
      AxisToAngles(&axis, &v41);
      v41.v[2] = 0.0;
      AnglesToAxis(&v41, &axis);
      AxisTransformVec3(&axis, &this->sourceEyePosLocal, &v38);
      v13 = v38.v[0] + outOrigin.v[0];
      v14 = v38.v[2] + outOrigin.v[2];
      v15 = v38.v[1] + outOrigin.v[1];
      AxisTransformVec3(&axis, &this->targetEyePosLocal, &v38);
      v16 = v38.v[0] + outOrigin.v[0];
      v17 = v38.v[2] + outOrigin.v[2];
      v18 = v38.v[1] + outOrigin.v[1];
      goto LABEL_15;
    }
LABEL_14:
    v18 = this->targetEyePos.v[1];
    v16 = this->targetEyePos.v[0];
    v14 = this->sourceEyePos.v[2];
    v15 = this->sourceEyePos.v[1];
    v13 = this->sourceEyePos.v[0];
    v17 = this->targetEyePos.v[2];
    goto LABEL_15;
  }
  CG_GetPoseOrigin(&Entity->pose, &outOrigin);
  angles = v12[6];
  AnglesToAxis(&angles, &axis);
  AxisTransformVec3(&axis, &this->sourceEyePosLocal, &out);
  v13 = out.v[0] + outOrigin.v[0];
  v14 = out.v[2] + outOrigin.v[2];
  v15 = out.v[1] + outOrigin.v[1];
  AxisTransformVec3(&axis, &this->targetEyePosLocal, &out);
  v16 = out.v[0] + outOrigin.v[0];
  v17 = out.v[2] + outOrigin.v[2];
  v18 = out.v[1] + outOrigin.v[1];
LABEL_15:
  v22 = v14;
  v23 = v15;
  v24 = v13;
  if ( this->timeToStartEyePos <= this->activeTime && ClientCameraTransition::ShouldInterpolateTransition(this, (const LocalClientNum_t)v8) )
  {
    v25 = (float)(this->activeTime - this->timeToStartEyePos) / (float)(this->time - this->timeToStartEyePos);
    I_fclamp(v25, 0.0, 1.0);
    TimeForCurve = ClientCameraTransition::GetTimeForCurve(this, v25, this->eyePosCurve);
    v14 = (float)((float)(v17 - v14) * *(float *)&TimeForCurve) + v14;
    v13 = (float)((float)(v16 - v13) * *(float *)&TimeForCurve) + v13;
    v15 = (float)((float)(v18 - v15) * *(float *)&TimeForCurve) + v15;
  }
  outEyePos->v[0] = v13;
  outEyePos->v[1] = v15;
  outEyePos->v[2] = v14;
  if ( findDistanceToPlayer )
  {
    v27 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    v28 = CgHandler::getHandler((LocalClientNum_t)v8);
    v29 = CgWeaponMap::GetInstance((const LocalClientNum_t)v8);
    BG_GetPlayerEyePosition(v29, &v27->predictedPlayerState, &v40, v28);
    *outDistance = fsqrt((float)((float)((float)(v40.v[1] - outEyePos->v[1]) * (float)(v40.v[1] - outEyePos->v[1])) + (float)((float)(v40.v[0] - outEyePos->v[0]) * (float)(v40.v[0] - outEyePos->v[0]))) + (float)((float)(v40.v[2] - outEyePos->v[2]) * (float)(v40.v[2] - outEyePos->v[2])));
  }
  else
  {
    v30 = outEyePos->v[0];
    v31 = outEyePos->v[1];
    v32 = outEyePos->v[2];
    if ( s_cameraTransition[v8].transitionType == TT_VIEW_TO_CAMERA )
    {
      v33 = v24 - v30;
      v34 = v23 - v31;
      v35 = v22 - v32;
    }
    else
    {
      v33 = v16 - v30;
      v34 = v18 - v31;
      v35 = v17 - v32;
    }
    *outDistance = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
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
  const DObj *v8; 
  bool result; 
  vec3_t outPos; 

  result = 0;
  if ( camTypeActive != this->lastActiveCamera || this->active )
  {
    clientNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.clientNum;
    if ( CG_Entity_CanUseDObj(localClientNum, clientNum) )
    {
      Pose = CG_GetPose(localClientNum, clientNum);
      ClientDObj = Com_GetClientDObj(clientNum, localClientNum);
      v8 = ClientDObj;
      if ( ClientDObj )
      {
        if ( DObjVerifyNumBones(ClientDObj) && CG_DObjGetWorldTagPos(Pose, v8, scr_const.j_spine4, &outPos) && (float)((float)((float)((float)(outPos.v[1] - this->lastViewEyePos.v[1]) * (float)(outPos.v[1] - this->lastViewEyePos.v[1])) + (float)((float)(outPos.v[0] - this->lastViewEyePos.v[0]) * (float)(outPos.v[0] - this->lastViewEyePos.v[0]))) + (float)((float)(outPos.v[2] - this->lastViewEyePos.v[2]) * (float)(outPos.v[2] - this->lastViewEyePos.v[2]))) <= (float)(s_wmHideDist * s_wmHideDist) )
          return 1;
      }
    }
  }
  return result;
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
  bool IsActive; 

  this->worldId = PHYSICS_WORLD_ID_CLIENT_FIRST;
  IsActive = CL_TransientsWorldMP_IsActive();
  this->contentMask = 2705;
  this->displFromStart = 10.0;
  _XMM0 = IsActive;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_20_0);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  this->collRadius = *(float *)&_XMM0;
  *(_QWORD *)this->start.v = 0i64;
  *(_QWORD *)&this->start.z = 0i64;
  *(_QWORD *)&this->end.y = 0i64;
  this->ignoreEntities = NULL;
  this->ignoreCount = 0;
  *(_QWORD *)&this->innerRadius = 0i64;
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
  float v2; 
  vec3_t vec; 
  tmat33_t<vec3_t> out; 

  this->transitionOutLocalSpaceValid = 1;
  AxisTranspose(&this->targetAxis, &out);
  v2 = this->sourceEyePos.v[1] - this->targetEyePos.v[1];
  vec.v[0] = this->sourceEyePos.v[0] - this->targetEyePos.v[0];
  vec.v[2] = this->sourceEyePos.v[2] - this->targetEyePos.v[2];
  vec.v[1] = v2;
  AxisTransformVec3(&out, &vec, &this->eyePosLocalOut);
}

/*
==============
ClientCameraDeathCam::Update
==============
*/
void ClientCameraDeathCam::Update(ClientCameraDeathCam *this, LocalClientNum_t localClientNum, float frametime, RefdefView *inOutRefDef)
{
  __int128 v5; 
  bool v6; 
  float totalTime; 
  float v11; 
  float v12; 
  float v13; 
  double v15; 
  float v16; 
  cg_t *LocalClientGlobals; 
  int number; 
  int vehEntNum; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  __int128 v22; 
  cg_t *v26; 
  centity_t *v27; 
  vec3_t inOrg; 
  vec3_t outOrigin; 
  vec3_t forward; 
  vec4_t to; 
  vec4_t out; 
  vec4_t result; 
  tmat33_t<vec3_t> dst; 
  __int128 v35; 

  v6 = this->camType == INACTIVE;
  v35 = v5;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4622, ASSERT_TYPE_ASSERT, "( static_cast<int>( camType ) ) != ( static_cast<int>( Type::INACTIVE ) )", "%s != %s\n\t%i, %i", "static_cast<int>( camType )", "static_cast<int>( Type::INACTIVE )", 0, 0i64) )
    __debugbreak();
  totalTime = this->totalTime;
  if ( totalTime > this->time )
  {
    if ( totalTime <= 0.0 )
    {
      __asm { vxorpd  xmm1, xmm1, xmm1 }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_camera.cpp", 4635, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( totalTime )", "%s < %s\n\t%g, %g", "0.0f", "totalTime", *(double *)&_XMM1, totalTime) )
        __debugbreak();
    }
    v15 = I_fclamp(this->time / this->totalTime, 0.0, 1.0);
    v16 = 1.0 - (float)((float)((float)(1.0 - *(float *)&v15) * (float)(1.0 - *(float *)&v15)) * (float)(1.0 - *(float *)&v15));
    v11 = (float)((float)(this->targetEyePos.v[0] - this->sourceEyePos.v[0]) * v16) + this->sourceEyePos.v[0];
    v12 = (float)((float)(this->targetEyePos.v[1] - this->sourceEyePos.v[1]) * v16) + this->sourceEyePos.v[1];
    v13 = (float)((float)(this->targetEyePos.v[2] - this->sourceEyePos.v[2]) * v16) + this->sourceEyePos.v[2];
    inOrg.v[2] = v13;
    inOrg.v[0] = v11;
    inOrg.v[1] = v12;
    AxisToQuat(&this->sourceAxis, &out);
    AxisToQuat(&this->targetAxis, &to);
    QuatNlerp(&out, &to, v16, &result);
    QuatToAxis(&result, &dst);
    this->time = frametime + this->time;
  }
  else
  {
    v11 = this->targetEyePos.v[0];
    v12 = this->targetEyePos.v[1];
    v13 = this->targetEyePos.v[2];
    inOrg.v[0] = v11;
    inOrg.v[1] = v12;
    inOrg.v[2] = v13;
    MatrixCopy33(&this->targetAxis, &dst);
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  number = 2047;
  if ( this->camType == ACTIVE )
  {
    vehEntNum = this->vehEntNum;
    if ( vehEntNum != 2047 )
    {
      Entity = CG_GetEntity(localClientNum, vehEntNum);
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 && BG_IsVehicleEntity(&Entity->nextState) )
      {
        CG_GetPoseOrigin(p_pose, &outOrigin);
        v22 = LODWORD(outOrigin.v[1]);
        *(float *)&v22 = fsqrt((float)((float)((float)(outOrigin.v[1] - v12) * (float)(outOrigin.v[1] - v12)) + (float)((float)(outOrigin.v[0] - v11) * (float)(outOrigin.v[0] - v11))) + (float)((float)(outOrigin.v[2] - v13) * (float)(outOrigin.v[2] - v13)));
        _XMM1 = v22;
        __asm
        {
          vcmpless xmm0, xmm1, cs:__real@80000000
          vblendvps xmm0, xmm1, xmm10, xmm0
        }
        forward.v[0] = (float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[0] - v11);
        forward.v[2] = (float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[2] - v13);
        forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * (float)(outOrigin.v[1] - v12);
        BG_AxisFromForward(&forward, &identityMatrix33.m[2], &dst);
      }
      else
      {
        this->vehEntNum = 2047;
      }
    }
    v26 = CG_GetLocalClientGlobals(localClientNum);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v26->predictedPlayerState.corpseIndex < (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v27 = CG_GetEntity(localClientNum, ComCharacterLimits::ms_gameData.m_characterCount + v26->predictedPlayerState.corpseIndex);
      if ( v27 && (v27->flags & 1) != 0 )
        number = v27->nextState.number;
    }
  }
  this->corpseEntNum = number;
  RefdefView_SetOrg(inOutRefDef, &inOrg);
  MatrixCopy33(&dst, &inOutRefDef->axis);
  AxisToAngles(&inOutRefDef->axis, &LocalClientGlobals->refdefViewAngles);
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
  float v2; 
  float v3; 
  vec3_t out; 

  if ( this->transitionOutLocalSpaceValid )
  {
    AxisTransformVec3(&this->targetAxis, &this->eyePosLocalOut, &out);
    v2 = out.v[1];
    this->sourceEyePos.v[0] = out.v[0] + this->targetEyePos.v[0];
    v3 = out.v[2];
    this->sourceEyePos.v[1] = v2 + this->targetEyePos.v[1];
    this->sourceEyePos.v[2] = v3 + this->targetEyePos.v[2];
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
  const dvar_t *v3; 

  v1 = DCONST_DVARBOOL_bg_vehcamUseDvars;
  if ( !DCONST_DVARBOOL_bg_vehcamUseDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamUseDvars") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return orbitDef->range;
  v3 = DCONST_DVARFLT_bg_vehcamRange;
  if ( !DCONST_DVARFLT_bg_vehcamRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_vehcamRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.value;
}

