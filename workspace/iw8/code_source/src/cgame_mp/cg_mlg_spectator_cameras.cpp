/*
==============
AerialCamActiveCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall AerialCamActiveCameraState::GetCameraState(AerialCamActiveCameraState *this)
{
  return ?GetCameraState@AerialCamActiveCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
CgMLGCameraManager::SetAerialCameraEnabled
==============
*/

void __fastcall CgMLGCameraManager::SetAerialCameraEnabled(CgMLGCameraManager *this, const bool aerialCameraEnabled)
{
  ?SetAerialCameraEnabled@CgMLGCameraManager@@QEAAX_N@Z(this, aerialCameraEnabled);
}

/*
==============
AerialCamActiveCameraState::EnterState
==============
*/

void __fastcall AerialCamActiveCameraState::EnterState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@AerialCamActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_MLG_UpdateFollowerCamera
==============
*/

void __fastcall CG_MLG_UpdateFollowerCamera(const LocalClientNum_t localClientNum, CgMLGCameraManager *const cameraManager)
{
  ?CG_MLG_UpdateFollowerCamera@@YAXW4LocalClientNum_t@@QEAVCgMLGCameraManager@@@Z(localClientNum, cameraManager);
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraAngles
==============
*/

vec3_t *__fastcall CgMLGCameraManager::GetMLGCurrentCameraAngles(CgMLGCameraManager *this, vec3_t *result)
{
  return ?GetMLGCurrentCameraAngles@CgMLGCameraManager@@QEBA?ATvec3_t@@XZ(this, result);
}

/*
==============
SpectatorEnteringCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall SpectatorEnteringCameraState::GetCameraState(SpectatorEnteringCameraState *this)
{
  return ?GetCameraState@SpectatorEnteringCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
CgMLGCameraManager::SetMLGFreeCamPoseForCurrentMap
==============
*/

void __fastcall CgMLGCameraManager::SetMLGFreeCamPoseForCurrentMap(CgMLGCameraManager *this, int poseIndex, const CameraPose *pose)
{
  ?SetMLGFreeCamPoseForCurrentMap@CgMLGCameraManager@@QEAAXHAEBUCameraPose@@@Z(this, poseIndex, pose);
}

/*
==============
CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap
==============
*/

void __fastcall CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap(CgMLGCameraManager *this, int poseIndex)
{
  ?RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap@CgMLGCameraManager@@QEAAXH@Z(this, poseIndex);
}

/*
==============
AerialCamActiveCameraState::FocusNearestPlayer
==============
*/

void __fastcall AerialCamActiveCameraState::FocusNearestPlayer(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?FocusNearestPlayer@AerialCamActiveCameraState@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::GetAerialMaxHeight
==============
*/

double __fastcall CgMLGCameraManager::GetAerialMaxHeight(CgMLGCameraManager *this)
{
  double result; 

  *(float *)&result = ?GetAerialMaxHeight@CgMLGCameraManager@@QEBAMXZ(this);
  return result;
}

/*
==============
AerialCamActiveCameraState::FocusSpectatedPlayer
==============
*/

void __fastcall AerialCamActiveCameraState::FocusSpectatedPlayer(AerialCamActiveCameraState *this)
{
  ?FocusSpectatedPlayer@AerialCamActiveCameraState@@QEAAXXZ(this);
}

/*
==============
CG_ServerCmdMP_SetMLGThirdPersonEnabled
==============
*/

void __fastcall CG_ServerCmdMP_SetMLGThirdPersonEnabled(const LocalClientNum_t localClientNum, const bool enabled)
{
  ?CG_ServerCmdMP_SetMLGThirdPersonEnabled@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, enabled);
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraAngles
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCurrentCameraAngles(CgMLGCameraManager *this, const vec3_t *angles)
{
  ?SetMLGCurrentCameraAngles@CgMLGCameraManager@@QEAAXAEBTvec3_t@@@Z(this, angles);
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraPosition
==============
*/

vec3_t *__fastcall CgMLGCameraManager::GetMLGTargetCameraPosition(CgMLGCameraManager *this, vec3_t *result)
{
  return ?GetMLGTargetCameraPosition@CgMLGCameraManager@@QEBA?ATvec3_t@@XZ(this, result);
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraPosition
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCurrentCameraPosition(CgMLGCameraManager *this, const vec3_t *pos)
{
  ?SetMLGCurrentCameraPosition@CgMLGCameraManager@@QEAAXAEBTvec3_t@@@Z(this, pos);
}

/*
==============
CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPreset
==============
*/

void __fastcall CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPreset(CgMLGCameraManager *this, int mapIndex, int poseIndex)
{
  ?RegisterMLGFreeCamCurrentPoseAsPreset@CgMLGCameraManager@@QEAAXHH@Z(this, mapIndex, poseIndex);
}

/*
==============
AerialCamEnteringCameraState::ExitState
==============
*/

void __fastcall AerialCamEnteringCameraState::ExitState(AerialCamEnteringCameraState *this, const LocalClientNum_t __formal)
{
  ?ExitState@AerialCamEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, __formal);
}

/*
==============
CG_MLG_GetGamepadKeyNum
==============
*/

int __fastcall CG_MLG_GetGamepadKeyNum(const LocalClientNum_t localClientNum, const char *command)
{
  return ?CG_MLG_GetGamepadKeyNum@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, command);
}

/*
==============
CgMLGCameraManager::GetMLGCameraType
==============
*/

CoDCasterCameraType __fastcall CgMLGCameraManager::GetMLGCameraType(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  return ?GetMLGCameraType@CgMLGCameraManager@@QEBA?AW4CoDCasterCameraType@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
AerialCamActiveCameraState::UpdateTetheredPositionInternal
==============
*/

void __fastcall AerialCamActiveCameraState::UpdateTetheredPositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob)
{
  ?UpdateTetheredPositionInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@QEBVCgGlobalsMP@@@Z(this, localClientNum, cgameGlob);
}

/*
==============
FreeCamActiveCameraState::HandleInputsInternal
==============
*/

void __fastcall FreeCamActiveCameraState::HandleInputsInternal(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?HandleInputsInternal@FreeCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraAngles
==============
*/

vec3_t *__fastcall CgMLGCameraManager::GetMLGTargetCameraAngles(CgMLGCameraManager *this, vec3_t *result)
{
  return ?GetMLGTargetCameraAngles@CgMLGCameraManager@@QEBA?ATvec3_t@@XZ(this, result);
}

/*
==============
SpectatorActiveCameraState::EnterState
==============
*/

void __fastcall SpectatorActiveCameraState::EnterState(SpectatorActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@SpectatorActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraFoV
==============
*/

double __fastcall CgMLGCameraManager::GetMLGCurrentCameraFoV(CgMLGCameraManager *this)
{
  double result; 

  *(float *)&result = ?GetMLGCurrentCameraFoV@CgMLGCameraManager@@QEBAMXZ(this);
  return result;
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraAngles
==============
*/

void __fastcall CgMLGCameraManager::SetMLGTargetCameraAngles(CgMLGCameraManager *this, const vec3_t *angles)
{
  ?SetMLGTargetCameraAngles@CgMLGCameraManager@@QEAAXAEBTvec3_t@@@Z(this, angles);
}

/*
==============
CG_MLGCameraShouldRenderCharacter
==============
*/

int __fastcall CG_MLGCameraShouldRenderCharacter(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_MLGCameraShouldRenderCharacter@@YAHW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CgMLGCameraManager::SetShouldRenderThirdPerson
==============
*/

void __fastcall CgMLGCameraManager::SetShouldRenderThirdPerson(CgMLGCameraManager *this, bool shouldRenderThirdPerson)
{
  ?SetShouldRenderThirdPerson@CgMLGCameraManager@@QEAAX_N@Z(this, shouldRenderThirdPerson);
}

/*
==============
AerialCamEnteringCameraState::EnterState
==============
*/

void __fastcall AerialCamEnteringCameraState::EnterState(AerialCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@AerialCamEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::GetMLGFreeCamPoseForCurrentMap
==============
*/

const CameraPose *__fastcall CgMLGCameraManager::GetMLGFreeCamPoseForCurrentMap(CgMLGCameraManager *this, int poseIndex)
{
  return ?GetMLGFreeCamPoseForCurrentMap@CgMLGCameraManager@@QEBAPEBUCameraPose@@H@Z(this, poseIndex);
}

/*
==============
AerialCamActiveCameraState::ApplyOffsetInternal
==============
*/

void __fastcall AerialCamActiveCameraState::ApplyOffsetInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?ApplyOffsetInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
AerialCamActiveCameraState::AerialCamActiveCameraState
==============
*/

void __fastcall AerialCamActiveCameraState::AerialCamActiveCameraState(AerialCamActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0AerialCamActiveCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
FreeCamEnteringCameraState::EnterState
==============
*/

void __fastcall FreeCamEnteringCameraState::EnterState(FreeCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@FreeCamEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
SpectatorEnteringCameraState::SpectatorEnteringCameraState
==============
*/

void __fastcall SpectatorEnteringCameraState::SpectatorEnteringCameraState(SpectatorEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0SpectatorEnteringCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
AerialCamActiveCameraState::UpdateGroundPosition
==============
*/

void __fastcall AerialCamActiveCameraState::UpdateGroundPosition(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob)
{
  ?UpdateGroundPosition@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@QEBVCgGlobalsMP@@@Z(this, localClientNum, cgameGlob);
}

/*
==============
AerialCamActiveCameraState::UpdatePositionInternal
==============
*/

void __fastcall AerialCamActiveCameraState::UpdatePositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?UpdatePositionInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
FreeCamActiveCameraState::EnterState
==============
*/

void __fastcall FreeCamActiveCameraState::EnterState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@FreeCamActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
SpectatorEnteringCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall SpectatorEnteringCameraState::UpdateState(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@SpectatorEnteringCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::SetAerialMaxHeight
==============
*/

void __fastcall CgMLGCameraManager::SetAerialMaxHeight(CgMLGCameraManager *this, const float maxHeight)
{
  ?SetAerialMaxHeight@CgMLGCameraManager@@QEAAXM@Z(this, maxHeight);
}

/*
==============
SpectatorActiveCameraState::SpectatorActiveCameraState
==============
*/

void __fastcall SpectatorActiveCameraState::SpectatorActiveCameraState(SpectatorActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0SpectatorActiveCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraState
==============
*/

CameraStateInterface *__fastcall CgMLGCameraManager::GetMLGCurrentCameraState(CgMLGCameraManager *this)
{
  return ?GetMLGCurrentCameraState@CgMLGCameraManager@@QEBAPEAVCameraStateInterface@@XZ(this);
}

/*
==============
CgMLGCameraManager::SetAerialMinHeight
==============
*/

void __fastcall CgMLGCameraManager::SetAerialMinHeight(CgMLGCameraManager *this, const float minHeight)
{
  ?SetAerialMinHeight@CgMLGCameraManager@@QEAAXM@Z(this, minHeight);
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraState
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCurrentCameraState(CgMLGCameraManager *this, const CoDCasterCameraState *state)
{
  ?SetMLGCurrentCameraState@CgMLGCameraManager@@QEAAXAEBW4CoDCasterCameraState@@@Z(this, state);
}

/*
==============
CgMLGCameraManager::GetMLGFreeCamPose
==============
*/

const CameraPose *__fastcall CgMLGCameraManager::GetMLGFreeCamPose(CgMLGCameraManager *this, int mapIndex, int poseIndex)
{
  return ?GetMLGFreeCamPose@CgMLGCameraManager@@QEBAPEBUCameraPose@@HH@Z(this, mapIndex, poseIndex);
}

/*
==============
CgMLGCameraManager::HandleMLGSpectatorCameraInputs
==============
*/

void __fastcall CgMLGCameraManager::HandleMLGSpectatorCameraInputs(CgMLGCameraManager *this, cg_t *cgameGlob, usercmd_s *cmd)
{
  ?HandleMLGSpectatorCameraInputs@CgMLGCameraManager@@QEAAXPEAVcg_t@@PEAUusercmd_s@@@Z(this, cgameGlob, cmd);
}

/*
==============
CG_MLG_GetEaseInOutFactor
==============
*/

double __fastcall CG_MLG_GetEaseInOutFactor(float linearFactor)
{
  double result; 

  *(float *)&result = ?CG_MLG_GetEaseInOutFactor@@YAMM@Z(linearFactor);
  return result;
}

/*
==============
SpectatorActiveCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall SpectatorActiveCameraState::UpdateState(SpectatorActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@SpectatorActiveCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
FreeCamEnteringCameraState::FreeCamEnteringCameraState
==============
*/

void __fastcall FreeCamEnteringCameraState::FreeCamEnteringCameraState(FreeCamEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0FreeCamEnteringCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
CgMLGCameraManager::GetFocusedPlayer
==============
*/

int __fastcall CgMLGCameraManager::GetFocusedPlayer(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  return ?GetFocusedPlayer@CgMLGCameraManager@@QEBAHW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
AerialCamActiveCameraState::FocusBarycenter
==============
*/

void __fastcall AerialCamActiveCameraState::FocusBarycenter(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?FocusBarycenter@AerialCamActiveCameraState@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_MLG_AngleDistance
==============
*/

double __fastcall CG_MLG_AngleDistance(const vec3_t *v1, const vec3_t *v2)
{
  double result; 

  *(float *)&result = ?CG_MLG_AngleDistance@@YAMAEBTvec3_t@@0@Z(v1, v2);
  return result;
}

/*
==============
FreeCamEnteringCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall FreeCamEnteringCameraState::UpdateState(FreeCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@FreeCamEnteringCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraFoV
==============
*/

double __fastcall CgMLGCameraManager::GetMLGTargetCameraFoV(CgMLGCameraManager *this)
{
  double result; 

  *(float *)&result = ?GetMLGTargetCameraFoV@CgMLGCameraManager@@QEBAMXZ(this);
  return result;
}

/*
==============
CgMLGCameraManager::RestoreMemorizedCameraPose
==============
*/

void __fastcall CgMLGCameraManager::RestoreMemorizedCameraPose(CgMLGCameraManager *this)
{
  ?RestoreMemorizedCameraPose@CgMLGCameraManager@@QEAAXXZ(this);
}

/*
==============
CgMLGCameraManager::SetMLGFreeCamPose
==============
*/

void __fastcall CgMLGCameraManager::SetMLGFreeCamPose(CgMLGCameraManager *this, int mapIndex, int poseIndex, const CameraPose *pose)
{
  ?SetMLGFreeCamPose@CgMLGCameraManager@@QEAAXHHAEBUCameraPose@@@Z(this, mapIndex, poseIndex, pose);
}

/*
==============
FreeCamActiveCameraState::ExitState
==============
*/

void __fastcall FreeCamActiveCameraState::ExitState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?ExitState@FreeCamActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_MLG_GetTransitionDuration
==============
*/

double __fastcall CG_MLG_GetTransitionDuration(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_MLG_GetTransitionDuration@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraFoV
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCurrentCameraFoV(CgMLGCameraManager *this, const float fov)
{
  ?SetMLGCurrentCameraFoV@CgMLGCameraManager@@QEAAXM@Z(this, fov);
}

/*
==============
CgMLGCameraManager::GetAerialMinHeight
==============
*/

double __fastcall CgMLGCameraManager::GetAerialMinHeight(CgMLGCameraManager *this)
{
  double result; 

  *(float *)&result = ?GetAerialMinHeight@CgMLGCameraManager@@QEBAMXZ(this);
  return result;
}

/*
==============
CgMLGCameraManager::IsAerialCameraTethered
==============
*/

bool __fastcall CgMLGCameraManager::IsAerialCameraTethered(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  return ?IsAerialCameraTethered@CgMLGCameraManager@@QEBA_NW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::SetMemorizedCameraPose
==============
*/

void __fastcall CgMLGCameraManager::SetMemorizedCameraPose(CgMLGCameraManager *this, const CameraPose *pose)
{
  ?SetMemorizedCameraPose@CgMLGCameraManager@@QEAAXAEBUCameraPose@@@Z(this, pose);
}

/*
==============
CG_MLG_IsEntityTypeFollowable
==============
*/

bool __fastcall CG_MLG_IsEntityTypeFollowable(const entityType_s eType)
{
  return ?CG_MLG_IsEntityTypeFollowable@@YA_NW4entityType_s@@@Z(eType);
}

/*
==============
CgMLGCameraManager::LoadMLGFreeCamPoses
==============
*/

void __fastcall CgMLGCameraManager::LoadMLGFreeCamPoses(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  ?LoadMLGFreeCamPoses@CgMLGCameraManager@@QEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
SpectatorEnteringCameraState::ExitState
==============
*/

void __fastcall SpectatorEnteringCameraState::ExitState(SpectatorEnteringCameraState *this, const LocalClientNum_t __formal)
{
  ?ExitState@SpectatorEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, __formal);
}

/*
==============
FreeCamActiveCameraState::HandleMovementsInternal
==============
*/

void __fastcall FreeCamActiveCameraState::HandleMovementsInternal(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?HandleMovementsInternal@FreeCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CgMLGCameraManager::SetFocusedClient
==============
*/

void __fastcall CgMLGCameraManager::SetFocusedClient(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const int focusedClient)
{
  ?SetFocusedClient@CgMLGCameraManager@@QEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, focusedClient);
}

/*
==============
AerialCamEnteringCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall AerialCamEnteringCameraState::UpdateState(AerialCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@AerialCamEnteringCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
FreeCamActiveCameraState::FreeCamActiveCameraState
==============
*/

void __fastcall FreeCamActiveCameraState::FreeCamActiveCameraState(FreeCamActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0FreeCamActiveCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
SpectatorActiveCameraState::ExitState
==============
*/

void __fastcall SpectatorActiveCameraState::ExitState(SpectatorActiveCameraState *this, const LocalClientNum_t __formal)
{
  ?ExitState@SpectatorActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, __formal);
}

/*
==============
AerialCamEnteringCameraState::AerialCamEnteringCameraState
==============
*/

void __fastcall AerialCamEnteringCameraState::AerialCamEnteringCameraState(AerialCamEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  ??0AerialCamEnteringCameraState@@QEAA@QEAVCgMLGCameraManager@@@Z(this, cameraManager);
}

/*
==============
AerialCamActiveCameraState::StopVFXInternal
==============
*/

void __fastcall AerialCamActiveCameraState::StopVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const int clientNum)
{
  ?StopVFXInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, clientNum);
}

/*
==============
FreeCamEnteringCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall FreeCamEnteringCameraState::GetCameraState(FreeCamEnteringCameraState *this)
{
  return ?GetCameraState@FreeCamEnteringCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
CG_GetPlayersBarycenter
==============
*/

bool __fastcall CG_GetPlayersBarycenter(const LocalClientNum_t localClientNum, vec3_t *outPosition, float *outHeight)
{
  return ?CG_GetPlayersBarycenter@@YA_NW4LocalClientNum_t@@AEATvec3_t@@AEAM@Z(localClientNum, outPosition, outHeight);
}

/*
==============
CgMLGCameraManager::UpdateMLGCameraState
==============
*/

CameraStateInterface *__fastcall CgMLGCameraManager::UpdateMLGCameraState(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const CoDCasterCameraState *state)
{
  return ?UpdateMLGCameraState@CgMLGCameraManager@@QEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@AEBW4CoDCasterCameraState@@@Z(this, localClientNum, state);
}

/*
==============
AerialCamActiveCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall AerialCamActiveCameraState::UpdateState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@AerialCamActiveCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_MLG_ArePosesNearlyEqual
==============
*/

bool __fastcall CG_MLG_ArePosesNearlyEqual(const CameraPose *pose1, const CameraPose *pose2)
{
  return ?CG_MLG_ArePosesNearlyEqual@@YA_NAEBUCameraPose@@0@Z(pose1, pose2);
}

/*
==============
CgMLGCameraManager::GetMemorizedCameraPose
==============
*/

CameraPose *__fastcall CgMLGCameraManager::GetMemorizedCameraPose(CgMLGCameraManager *this)
{
  return ?GetMemorizedCameraPose@CgMLGCameraManager@@QEAAPEAUCameraPose@@XZ(this);
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraFoV
==============
*/

void __fastcall CgMLGCameraManager::SetMLGTargetCameraFoV(CgMLGCameraManager *this, const float fov)
{
  ?SetMLGTargetCameraFoV@CgMLGCameraManager@@QEAAXM@Z(this, fov);
}

/*
==============
CgMLGCameraManager::ShouldRenderThirdPerson
==============
*/

bool __fastcall CgMLGCameraManager::ShouldRenderThirdPerson(CgMLGCameraManager *this)
{
  return ?ShouldRenderThirdPerson@CgMLGCameraManager@@QEBA_NXZ(this);
}

/*
==============
CG_MLG_GetLocalClientPose
==============
*/

void __fastcall CG_MLG_GetLocalClientPose(const LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outAngles, float *outFoV)
{
  ?CG_MLG_GetLocalClientPose@@YAXW4LocalClientNum_t@@AEATvec3_t@@1AEAM@Z(localClientNum, outPosition, outAngles, outFoV);
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraPosition
==============
*/

vec3_t *__fastcall CgMLGCameraManager::GetMLGCurrentCameraPosition(CgMLGCameraManager *this, vec3_t *result)
{
  return ?GetMLGCurrentCameraPosition@CgMLGCameraManager@@QEBA?ATvec3_t@@XZ(this, result);
}

/*
==============
SpectatorEnteringCameraState::EnterState
==============
*/

void __fastcall SpectatorEnteringCameraState::EnterState(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  ?EnterState@SpectatorEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
FreeCamActiveCameraState::UpdateState
==============
*/

CameraStateInterface *__fastcall FreeCamActiveCameraState::UpdateState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  return ?UpdateState@FreeCamActiveCameraState@@UEAAPEAVCameraStateInterface@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_MLG_TryGetClientPose
==============
*/

bool __fastcall CG_MLG_TryGetClientPose(const LocalClientNum_t localClientNum, const int clientNum, vec3_t *outPosition, vec3_t *outAngles, float *outFoV)
{
  return ?CG_MLG_TryGetClientPose@@YA_NW4LocalClientNum_t@@HAEATvec3_t@@1AEAM@Z(localClientNum, clientNum, outPosition, outAngles, outFoV);
}

/*
==============
CG_MLG_GetClientEntity
==============
*/

centity_t *__fastcall CG_MLG_GetClientEntity(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?CG_MLG_GetClientEntity@@YAPEAUcentity_t@@W4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
SpectatorEnteringCameraState::TrySpectateClient
==============
*/

bool __fastcall SpectatorEnteringCameraState::TrySpectateClient(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum, const int followedClient, vec3_t *outTargetPosition, vec3_t *outTargetAngles, float *outTargetFoV)
{
  return ?TrySpectateClient@SpectatorEnteringCameraState@@AEAA_NW4LocalClientNum_t@@HAEATvec3_t@@1AEAM@Z(this, localClientNum, followedClient, outTargetPosition, outTargetAngles, outTargetFoV);
}

/*
==============
FreeCamActiveCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall FreeCamActiveCameraState::GetCameraState(FreeCamActiveCameraState *this)
{
  return ?GetCameraState@FreeCamActiveCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
CgMLGCameraManager::SaveMLGFreeCamPoses
==============
*/

void __fastcall CgMLGCameraManager::SaveMLGFreeCamPoses(CgMLGCameraManager *this)
{
  ?SaveMLGFreeCamPoses@CgMLGCameraManager@@QEAAXXZ(this);
}

/*
==============
CgMLGCameraManager::GetCameraState
==============
*/

CameraStateInterface *__fastcall CgMLGCameraManager::GetCameraState(CgMLGCameraManager *this, const CoDCasterCameraState *state)
{
  return ?GetCameraState@CgMLGCameraManager@@QEBAPEAVCameraStateInterface@@AEBW4CoDCasterCameraState@@@Z(this, state);
}

/*
==============
AerialCamActiveCameraState::StartVFXInternal
==============
*/

void __fastcall AerialCamActiveCameraState::StartVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const int clientNum)
{
  ?StartVFXInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, clientNum);
}

/*
==============
CgMLGCameraManager::IsAerialCameraEnabled
==============
*/

bool __fastcall CgMLGCameraManager::IsAerialCameraEnabled(CgMLGCameraManager *this)
{
  return ?IsAerialCameraEnabled@CgMLGCameraManager@@QEBA_NXZ(this);
}

/*
==============
CgMLGCameraManager::CgMLGCameraManager
==============
*/

void __fastcall CgMLGCameraManager::CgMLGCameraManager(CgMLGCameraManager *this)
{
  ??0CgMLGCameraManager@@QEAA@XZ(this);
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraPosition
==============
*/

void __fastcall CgMLGCameraManager::SetMLGTargetCameraPosition(CgMLGCameraManager *this, const vec3_t *pos)
{
  ?SetMLGTargetCameraPosition@CgMLGCameraManager@@QEAAXAEBTvec3_t@@@Z(this, pos);
}

/*
==============
CgMLGCameraManager::SetMLGCameraType
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCameraType(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const CoDCasterCameraType cameraType)
{
  ?SetMLGCameraType@CgMLGCameraManager@@QEAAXW4LocalClientNum_t@@W4CoDCasterCameraType@@@Z(this, localClientNum, cameraType);
}

/*
==============
FreeCamEnteringCameraState::ExitState
==============
*/

void __fastcall FreeCamEnteringCameraState::ExitState(FreeCamEnteringCameraState *this, const LocalClientNum_t __formal)
{
  ?ExitState@FreeCamEnteringCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, __formal);
}

/*
==============
CgMLGCameraManager::MemorizeCurrentCameraPose
==============
*/

void __fastcall CgMLGCameraManager::MemorizeCurrentCameraPose(CgMLGCameraManager *this)
{
  ?MemorizeCurrentCameraPose@CgMLGCameraManager@@QEAAXXZ(this);
}

/*
==============
AerialCamActiveCameraState::HandleInputsInternal
==============
*/

void __fastcall AerialCamActiveCameraState::HandleInputsInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?HandleInputsInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
AerialCamActiveCameraState::UpdateVFXInternal
==============
*/

void __fastcall AerialCamActiveCameraState::UpdateVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?UpdateVFXInternal@AerialCamActiveCameraState@@AEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
AerialCamEnteringCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall AerialCamEnteringCameraState::GetCameraState(AerialCamEnteringCameraState *this)
{
  return ?GetCameraState@AerialCamEnteringCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
AerialCamActiveCameraState::ExitState
==============
*/

void __fastcall AerialCamActiveCameraState::ExitState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ?ExitState@AerialCamActiveCameraState@@UEAAXW4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
SpectatorActiveCameraState::GetCameraState
==============
*/

CoDCasterCameraState __fastcall SpectatorActiveCameraState::GetCameraState(SpectatorActiveCameraState *this)
{
  return ?GetCameraState@SpectatorActiveCameraState@@UEBA?AW4CoDCasterCameraState@@XZ(this);
}

/*
==============
AerialCamActiveCameraState::AerialCamActiveCameraState
==============
*/
void AerialCamActiveCameraState::AerialCamActiveCameraState(AerialCamActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (AerialCamActiveCameraState_vtbl *)&AerialCamActiveCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1542, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
AerialCamEnteringCameraState::AerialCamEnteringCameraState
==============
*/
void AerialCamEnteringCameraState::AerialCamEnteringCameraState(AerialCamEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (AerialCamEnteringCameraState_vtbl *)&AerialCamEnteringCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1492, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
CgMLGCameraManager::CgMLGCameraManager
==============
*/

void __fastcall CgMLGCameraManager::CgMLGCameraManager(CgMLGCameraManager *this, double _XMM1_8)
{
  CameraPose (*m_mlgFreeCamPoses)[20]; 
  __int64 v5; 
  __m256i v9; 

  _R12 = this;
  this->m_localCameraType = SPECTATOR;
  m_mlgFreeCamPoses = this->m_mlgFreeCamPoses;
  v5 = 2560i64;
  do
  {
    CameraPose::CameraPose((CameraPose *)m_mlgFreeCamPoses);
    m_mlgFreeCamPoses = (CameraPose (*)[20])((char *)m_mlgFreeCamPoses + 32);
    --v5;
  }
  while ( v5 );
  _R12->m_shouldRenderThirdPerson = 0;
  _R12->m_aerialMinHeight = 0.0;
  _R12->m_aerialMaxHeight = 4000.0;
  _R12->m_aerialCameraEnabled = 1;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+58h+var_38+10h], xmm1
    vmovss  dword ptr [rsp+58h+var_38+14h], xmm1
    vmovss  dword ptr [rsp+58h+var_38+18h], xmm1
    vmovups xmmword ptr [rsp+58h+var_38], xmm0
  }
  v9.m256i_i8[28] = 0;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsp+58h+var_38]
    vmovups ymmword ptr [r12+14040h], ymm0
  }
  _R12->m_spectatorActiveCameraState.__vftable = (SpectatorActiveCameraState_vtbl *)&SpectatorActiveCameraState::`vftable';
  _R12->m_spectatorActiveCameraState.m_cameraManager = _R12;
  _R12->m_spectatorEnteringCameraState.__vftable = (SpectatorEnteringCameraState_vtbl *)&SpectatorEnteringCameraState::`vftable';
  _R12->m_spectatorEnteringCameraState.m_cameraManager = _R12;
  _R12->m_freeCamEnteringCameraState.__vftable = (FreeCamEnteringCameraState_vtbl *)&FreeCamEnteringCameraState::`vftable';
  _R12->m_freeCamEnteringCameraState.m_cameraManager = _R12;
  _R12->m_freeCamActiveCameraState.__vftable = (FreeCamActiveCameraState_vtbl *)&FreeCamActiveCameraState::`vftable';
  _R12->m_freeCamActiveCameraState.m_cameraManager = _R12;
  _R12->m_aerialCamEnteringCameraState.__vftable = (AerialCamEnteringCameraState_vtbl *)&AerialCamEnteringCameraState::`vftable';
  _R12->m_aerialCamEnteringCameraState.m_cameraManager = _R12;
  _R12->m_aerialCamActiveCameraState.__vftable = (AerialCamActiveCameraState_vtbl *)&AerialCamActiveCameraState::`vftable';
  _R12->m_aerialCamActiveCameraState.m_cameraManager = _R12;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_spectatorEnteringCameraState.GetCameraState(&_R12->m_spectatorEnteringCameraState)] = &_R12->m_spectatorEnteringCameraState;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_spectatorActiveCameraState.GetCameraState(&_R12->m_spectatorActiveCameraState)] = &_R12->m_spectatorActiveCameraState;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_freeCamEnteringCameraState.GetCameraState(&_R12->m_freeCamEnteringCameraState)] = &_R12->m_freeCamEnteringCameraState;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_freeCamActiveCameraState.GetCameraState(&_R12->m_freeCamActiveCameraState)] = &_R12->m_freeCamActiveCameraState;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_aerialCamEnteringCameraState.GetCameraState(&_R12->m_aerialCamEnteringCameraState)] = &_R12->m_aerialCamEnteringCameraState;
  _R12->m_mlgCameraStates[(unsigned __int8)_R12->m_aerialCamActiveCameraState.GetCameraState(&_R12->m_aerialCamActiveCameraState)] = &_R12->m_aerialCamActiveCameraState;
  _R12->m_mlgCurrentCameraState = _R12->m_mlgCameraStates[1];
}

/*
==============
FreeCamActiveCameraState::FreeCamActiveCameraState
==============
*/
void FreeCamActiveCameraState::FreeCamActiveCameraState(FreeCamActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (FreeCamActiveCameraState_vtbl *)&FreeCamActiveCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1184, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
FreeCamEnteringCameraState::FreeCamEnteringCameraState
==============
*/
void FreeCamEnteringCameraState::FreeCamEnteringCameraState(FreeCamEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (FreeCamEnteringCameraState_vtbl *)&FreeCamEnteringCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1069, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
SpectatorActiveCameraState::SpectatorActiveCameraState
==============
*/
void SpectatorActiveCameraState::SpectatorActiveCameraState(SpectatorActiveCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (SpectatorActiveCameraState_vtbl *)&SpectatorActiveCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 895, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
SpectatorEnteringCameraState::SpectatorEnteringCameraState
==============
*/
void SpectatorEnteringCameraState::SpectatorEnteringCameraState(SpectatorEnteringCameraState *this, CgMLGCameraManager *const cameraManager)
{
  this->m_cameraManager = cameraManager;
  this->__vftable = (SpectatorEnteringCameraState_vtbl *)&SpectatorEnteringCameraState::`vftable';
  if ( !cameraManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 949, ASSERT_TYPE_ASSERT, "(cameraManager)", (const char *)&queryFormat, "cameraManager") )
    __debugbreak();
}

/*
==============
AerialCamActiveCameraState::ApplyOffsetInternal
==============
*/
void AerialCamActiveCameraState::ApplyOffsetInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  const dvar_t *v19; 
  char v26; 
  char v27; 
  const dvar_t *v32; 
  float v52; 
  char v54; 
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
    vmovaps [rsp+0E8h+var_88], xmm12
  }
  _RDI = DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor;
  _RBX = this;
  if ( !DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_horizontal_distance_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovsd  xmm2, qword ptr [rax+30h]
    vaddss  xmm7, xmm0, dword ptr [rbx+40h]
    vaddss  xmm12, xmm1, dword ptr [rbx+44h]
  }
  v19 = DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance;
  v52 = _RAX->m_mlgTargetCameraAngles.v[2];
  __asm
  {
    vmovss  xmm1, [rsp+0E8h+var_A0]
    vaddss  xmm11, xmm1, dword ptr [rbx+3Ch]
    vmovss  xmm8, dword ptr [rbx+48h]
    vaddss  xmm9, xmm2, dword ptr [rbx+34h]
    vmovsd  [rsp+0E8h+var_A8], xmm2
    vmovss  xmm0, dword ptr [rsp+0E8h+var_A8+4]
    vaddss  xmm10, xmm0, dword ptr [rbx+38h]
  }
  if ( !DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_minimal_vertical_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+48h]
    vaddss  xmm0, xmm1, dword ptr [rdi+28h]
    vmovss  xmm3, dword ptr [rax+1406Ch]
    vcomiss xmm0, xmm3
  }
  if ( !(v26 | v27) )
  {
    v32 = DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance;
    if ( !DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_minimal_vertical_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+48h]
      vaddss  xmm3, xmm1, dword ptr [rdi+28h]
    }
    _RAX = _RBX->m_cameraManager;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rax+14070h]
    vcomiss xmm3, xmm0
  }
  if ( v26 | v27 )
  {
    __asm
    {
      vmovaps xmm2, xmm0; max
      vmovss  xmm0, dword ptr [rbx+30h]; val
      vmovaps xmm1, xmm3; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  xmm1, dword ptr [rbx+48h] }
    _RAX = _RBX->m_cameraManager;
  }
  __asm
  {
    vmovss  dword ptr [rbx+30h], xmm0
    vmovss  dword ptr [rax+28h], xmm12
    vsubss  xmm2, xmm0, xmm1
    vdivss  xmm0, xmm2, xmm6
    vsubss  xmm1, xmm7, xmm0
    vmovss  dword ptr [rax+24h], xmm1
    vaddss  xmm0, xmm8, xmm2
    vmovss  dword ptr [rax+2Ch], xmm0
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+30h], xmm9
    vmovss  dword ptr [rax+34h], xmm10
    vmovss  dword ptr [rax+38h], xmm11
  }
  _R11 = &v54;
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
}

/*
==============
CG_GetPlayersBarycenter
==============
*/
bool CG_GetPlayersBarycenter(const LocalClientNum_t localClientNum, vec3_t *outPosition, float *outHeight)
{
  __int64 v13; 
  int v17; 
  CgGlobalsMP *LocalClientGlobals; 
  cg_t *v24; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __int64 v27; 
  int v28; 
  int v29; 
  bool result; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  vec3_t outOrigin; 
  char v76; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  v13 = localClientNum;
  __asm
  {
    vmovss  xmm8, cs:__real@4f000000
    vmovss  xmm9, cs:__real@cf000000
  }
  _ER13 = 0;
  v17 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorpd  xmm7, xmm7, xmm7
    vxorpd  xmm10, xmm10, xmm10
    vxorpd  xmm11, xmm11, xmm11
    vmovaps xmm12, xmm8
    vmovaps xmm13, xmm9
  }
  do
  {
    v24 = CG_GetLocalClientGlobals((const LocalClientNum_t)v13);
    if ( v24->HasCharacterInfo(v24, v17) )
    {
      CharacterInfo = CG_GetCharacterInfo(v24, v17);
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v13, CharacterInfo->entityNum);
        if ( Entity )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
          {
            LODWORD(v71) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
            LODWORD(v70) = 2;
            LODWORD(v69) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v69, v70, v71) )
              __debugbreak();
          }
          if ( (unsigned int)v13 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v69) = CgCompassSystem::ms_allocatedCount;
            LODWORD(v68) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v68, v69) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v13] )
          {
            LODWORD(v69) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v69) )
              __debugbreak();
          }
          v27 = CgCompassSystem::ms_compassSystemArray[v13]->GetCompassActor(CgCompassSystem::ms_compassSystemArray[v13], v17);
          if ( v27 )
          {
            v28 = *(_DWORD *)(v27 + 4);
            v29 = LocalClientGlobals->time - 500;
            if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 && LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v17) && v28 >= v29 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              __asm
              {
                vmovss  xmm3, dword ptr [rsp+138h+outOrigin]
                vmovss  xmm2, dword ptr [rsp+138h+outOrigin+4]
                vcvtss2sd xmm0, xmm3, xmm3
                vaddsd  xmm7, xmm7, xmm0
                vmovss  xmm0, dword ptr [rsp+138h+outOrigin+8]
                vcvtss2sd xmm0, xmm0, xmm0
                vcvtss2sd xmm1, xmm2, xmm2
                vaddsd  xmm11, xmm11, xmm0
                vaddsd  xmm10, xmm10, xmm1
              }
              ++_ER13;
              __asm
              {
                vminss  xmm8, xmm8, xmm3
                vminss  xmm12, xmm12, xmm2
                vmaxss  xmm9, xmm9, xmm3
                vmaxss  xmm13, xmm13, xmm2
              }
            }
          }
        }
      }
    }
    ++v17;
  }
  while ( v17 < 200 );
  if ( _ER13 <= 0 )
  {
    result = 0;
  }
  else
  {
    __asm { vmovaps [rsp+138h+var_48], xmm6 }
    *(double *)&_XMM0 = CG_View_GetClientAspectRatio((LocalClientNum_t)v13);
    __asm { vmovaps xmm6, xmm0 }
    _RAX = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    __asm
    {
      vmovsd  xmm2, cs:__real@3ff0000000000000
      vmovd   xmm3, r13d
      vcvtdq2pd xmm3, xmm3
      vmovss  xmm1, dword ptr [rax+3Ch]
      vmulss  xmm0, xmm1, cs:__real@3c0efa35; X
    }
    _RAX = outPosition;
    __asm
    {
      vdivsd  xmm4, xmm2, xmm3
      vmulsd  xmm1, xmm4, xmm7
      vcvtsd2ss xmm3, xmm1, xmm1
      vmovss  dword ptr [rax], xmm3
      vmulsd  xmm2, xmm4, xmm10
      vcvtsd2ss xmm1, xmm2, xmm2
      vmulsd  xmm3, xmm4, xmm11
      vcvtsd2ss xmm2, xmm3, xmm3
      vmovss  dword ptr [rax+4], xmm1
      vsubss  xmm1, xmm9, xmm8
      vmulss  xmm3, xmm1, xmm6
      vmovss  dword ptr [rax+8], xmm2
      vsubss  xmm2, xmm13, xmm12
      vmaxss  xmm3, xmm3, xmm2
      vmulss  xmm1, xmm3, cs:__real@3f000000
      vaddss  xmm6, xmm1, cs:__real@43160000
    }
    tanf_0(*(float *)&_XMM0);
    _RAX = outHeight;
    __asm
    {
      vdivss  xmm1, xmm6, xmm0
      vmovaps xmm6, [rsp+138h+var_48]
      vmovss  dword ptr [rax], xmm1
    }
    result = 1;
  }
  _R11 = &v76;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-40h]
    vmovaps xmm8, xmmword ptr [r11-50h]
    vmovaps xmm9, xmmword ptr [r11-60h]
    vmovaps xmm10, xmmword ptr [r11-70h]
    vmovaps xmm11, xmmword ptr [r11-80h]
    vmovaps xmm12, xmmword ptr [r11-90h]
    vmovaps xmm13, xmmword ptr [r11-0A0h]
  }
  return result;
}

/*
==============
CG_MLGCameraShouldRenderCharacter
==============
*/
__int64 CG_MLGCameraShouldRenderCharacter(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  CoDCasterCameraType MLGCameraType; 
  unsigned __int8 v8; 
  float v21; 
  vec3_t outOrigin; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 674, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RBX = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(_RBX, localClientNum);
  __asm { vmovsd  xmm0, qword ptr [rbx+8] }
  v21 = _RBX->m_mlgCurrentCameraPos.v[2];
  v8 = MLGCameraType - 1;
  __asm { vmovsd  [rsp+68h+var_38], xmm0 }
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  __asm
  {
    vmovss  xmm0, [rsp+68h+var_30]
    vsubss  xmm5, xmm0, dword ptr [rsp+68h+outOrigin+8]
  }
  if ( v8 <= 1u )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+68h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+68h+outOrigin+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+68h+var_38+4]
      vsubss  xmm4, xmm0, dword ptr [rsp+68h+var_38]
      vmulss  xmm3, xmm2, xmm2
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm3, xmm0
      vcomiss xmm1, cs:__real@43610000
    }
    if ( !v8 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm5, xmm0
      }
    }
  }
  return 1i64;
}

/*
==============
CG_MLG_AngleDistance
==============
*/
float CG_MLG_AngleDistance(const vec3_t *v1, const vec3_t *v2)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm3, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm4, xmm0, dword ptr [rcx+8]
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vmulss  xmm2, xmm2, xmm2
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_MLG_ArePosesNearlyEqual
==============
*/
bool CG_MLG_ArePosesNearlyEqual(const CameraPose *pose1, const CameraPose *pose2)
{
  char v2; 
  char v3; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vsubss  xmm3, xmm0, dword ptr [rcx]
    vmovss  xmm1, dword ptr [rdx+4]
    vmovss  xmm0, dword ptr [rdx+8]
    vsubss  xmm2, xmm1, dword ptr [rcx+4]
    vsubss  xmm4, xmm0, dword ptr [rcx+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm4, xmm3, xmm0
    vcomiss xmm4, cs:__real@3f800000
  }
  if ( !(v2 | v3) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vsubss  xmm3, xmm0, dword ptr [rcx+0Ch]
    vmovss  xmm1, dword ptr [rdx+10h]
    vsubss  xmm2, xmm1, dword ptr [rcx+10h]
    vmovss  xmm0, dword ptr [rdx+14h]
    vsubss  xmm4, xmm0, dword ptr [rcx+14h]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vmovss  xmm2, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm3, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vandps  xmm1, xmm1, xmm2
    vcomiss xmm1, cs:__real@3f800000
  }
  if ( !(v2 | v3) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+18h]
    vsubss  xmm1, xmm0, dword ptr [rdx+18h]
    vandps  xmm1, xmm1, xmm2
    vcomiss xmm1, cs:__real@3f800000
  }
  return (v2 | v3) != 0;
}

/*
==============
CG_MLG_GetClientEntity
==============
*/
centity_t *CG_MLG_GetClientEntity(const LocalClientNum_t localClientNum, const int clientNum)
{
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) && (CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum)) != NULL )
    return CG_GetEntity(localClientNum, CharacterInfo->entityNum);
  else
    return 0i64;
}

/*
==============
CG_MLG_GetEaseInOutFactor
==============
*/

float __fastcall CG_MLG_GetEaseInOutFactor(double linearFactor)
{
  char v1; 

  __asm
  {
    vcomiss xmm0, cs:__real@3f000000
    vmulss  xmm1, xmm0, cs:__real@40000000
    vmovaps xmm2, xmm0
  }
  if ( v1 )
  {
    __asm { vmulss  xmm0, xmm1, xmm0 }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@40800000
      vsubss  xmm1, xmm0, xmm1
      vmulss  xmm2, xmm1, xmm2
      vsubss  xmm0, xmm2, cs:__real@3f800000
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_MLG_GetGamepadKeyNum
==============
*/
int CG_MLG_GetGamepadKeyNum(const LocalClientNum_t localClientNum, const char *command)
{
  char keyNames[2][128]; 

  if ( CL_Keys_GetGamePadBinding(localClientNum, command, keyNames, STRUCT_POINTER|BYTE_VALUE) <= 0 )
    return -1;
  else
    return Com_Keys_StringToKeynum(keyNames[0]);
}

/*
==============
CG_MLG_GetLocalClientPose
==============
*/
void CG_MLG_GetLocalClientPose(const LocalClientNum_t localClientNum, vec3_t *outPosition, vec3_t *outAngles, float *outFoV)
{
  CgGlobalsMP *LocalClientGlobals; 
  ClientFov result; 

  _R14 = outFoV;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, outPosition);
  *outAngles = LocalClientGlobals->refdefViewAngles;
  _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax]
    vmovss  dword ptr [r14], xmm0
  }
}

/*
==============
CG_MLG_GetTransitionDuration
==============
*/
float CG_MLG_GetTransitionDuration(const LocalClientNum_t localClientNum)
{
  CgMLGSpectator *MLGSpectator; 
  const dvar_t *v15; 
  float v75; 
  float v76; 
  char v77; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm11
  }
  _RBX = DVARFLT_cg_mlg_cam_animation_min_duration;
  if ( !DVARFLT_cg_mlg_cam_animation_min_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_min_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  _RBX = DVARFLT_cg_mlg_cam_animation_max_duration;
  if ( !DVARFLT_cg_mlg_cam_animation_max_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_max_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm11, xmm0, cs:__real@447a0000
  }
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  _RAX = CgMLGSpectator::GetCameraManager(MLGSpectator);
  v15 = DVARFLT_cg_mlg_cam_animation_distance_max_time;
  _RDX = _RAX;
  v75 = _RAX->m_mlgTargetCameraPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+24h]
    vmovsd  xmm2, qword ptr [rax+8]
    vmovsd  xmm4, qword ptr [rax+30h]
    vsubss  xmm8, xmm0, xmm2
    vshufps xmm1, xmm0, xmm0, 55h ; 'U'
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vmovsd  xmm2, qword ptr [rdx+14h]
    vsubss  xmm6, xmm1, xmm0
    vmovss  xmm0, [rsp+0C8h+var_78]
    vsubss  xmm7, xmm0, [rsp+0C8h+var_68]
  }
  v76 = _RAX->m_mlgTargetCameraAngles.v[2];
  __asm
  {
    vsubss  xmm3, xmm4, xmm2
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vshufps xmm1, xmm4, xmm4, 55h ; 'U'
    vsubss  xmm1, xmm1, xmm0
    vmovss  xmm0, [rsp+0C8h+var_68]
    vsubss  xmm4, xmm0, [rsp+0C8h+var_78]
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vmulss  xmm5, xmm1, cs:__real@3b360b61
    vaddss  xmm3, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm3
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm4, xmm1, xmm2, 1
    vsubss  xmm0, xmm5, xmm4
    vmulss  xmm3, xmm0, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rdx+20h]
    vsubss  xmm4, xmm0, dword ptr [rdx+3Ch]
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm4, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmaxss  xmm3, xmm0, xmm3
    vmaxss  xmm6, xmm3, xmm4
  }
  if ( !DVARFLT_cg_mlg_cam_animation_distance_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_distance_max_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rbx+28h]; val
    vmovss  xmm6, cs:__real@3f800000
    vmovaps xmm2, xmm6; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm6, xmm0
    vmulss  xmm2, xmm1, xmm9
    vmulss  xmm3, xmm2, cs:__real@447a0000
    vmulss  xmm0, xmm0, xmm11
    vaddss  xmm0, xmm3, xmm0
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_MLG_IsEntityTypeFollowable
==============
*/
bool CG_MLG_IsEntityTypeFollowable(const entityType_s eType)
{
  return ((eType - 1) & 0xFFEF) == 0;
}

/*
==============
CG_MLG_TryGetClientPose
==============
*/
char CG_MLG_TryGetClientPose(const LocalClientNum_t localClientNum, const int clientNum, vec3_t *outPosition, vec3_t *outAngles, float *outFoV)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 

  if ( clientNum == -1 )
    return 0;
  Entity = CG_GetEntity(localClientNum, clientNum);
  p_pose = &Entity->pose;
  if ( !Entity || ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
    return 0;
  CG_GetPoseOrigin(&Entity->pose, outPosition);
  CG_GetPoseAngles(p_pose, outAngles);
  *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
  _RAX = outFoV;
  __asm { vmovss  dword ptr [rax], xmm0 }
  return 1;
}

/*
==============
CG_MLG_UpdateFollowerCamera
==============
*/
void CG_MLG_UpdateFollowerCamera(const LocalClientNum_t localClientNum, CgMLGCameraManager *const cameraManager)
{
  int v25; 
  const dvar_t *v26; 
  const dvar_t *v41; 
  vec3_t from; 
  int v107; 
  float v109; 

  _RBX = cameraManager;
  _RDI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CgMLGSpectator::GetMLGSpectatorClientInfo(_RDI->m_mlgSpectatorPtr, _RDI->predictedPlayerState.clientNum) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@42f00000; max
      vmovss  xmm1, cs:__real@42700000; min
      vmovaps [rsp+148h+var_38], xmm6
      vmovaps [rsp+148h+var_48], xmm7
      vmovaps [rsp+148h+var_58], xmm8
      vmovaps [rsp+148h+var_68], xmm9
      vmovaps [rsp+148h+var_78], xmm10
      vmovaps [rsp+148h+var_88], xmm11
      vmovaps [rsp+148h+var_98], xmm12
      vxorps  xmm0, xmm0, xmm0
      vmovaps [rsp+148h+var_A8], xmm13
      vmovaps [rsp+148h+var_B8], xmm14
      vcvtsi2ss xmm0, xmm0, ecx; val
      vmovaps [rsp+148h+var_C8], xmm15
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+0C8h]
      vmovss  xmm1, dword ptr [rsi+0CCh]
      vmovss  xmm6, dword ptr [rdi+38h]
      vmovss  xmm7, dword ptr [rdi+3Ch]
      vmovss  xmm8, dword ptr [rdi+40h]
      vmovss  dword ptr [rbx+24h], xmm6
      vmovss  dword ptr [rbx+28h], xmm7
      vmovss  dword ptr [rbx+2Ch], xmm8
      vmovss  dword ptr [rbx+30h], xmm2
      vmovss  dword ptr [rbx+34h], xmm1
    }
    _RBX->m_mlgTargetCameraAngles.v[2] = 0.0;
    v25 = LODWORD(_RBX->m_mlgCurrentCameraPos.v[2]);
    __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
    v26 = DVARFLT_cg_mlg_cam_smooth_factor;
    v107 = v25;
    v109 = _RBX->m_mlgCurrentCameraAngles.v[2];
    __asm
    {
      vmovaps xmm13, xmm0
      vmovsd  xmm0, qword ptr [rbx+8]
      vmovsd  [rsp+148h+var_F0], xmm0
      vmovsd  xmm0, qword ptr [rbx+14h]
      vmovsd  [rsp+148h+var_E0], xmm0
      vmovss  xmm0, dword ptr [rbx+20h]
      vxorps  xmm9, xmm9, xmm9
      vmovss  [rsp+148h+var_104], xmm0
      vmovss  dword ptr [rsp+148h+from], xmm2
      vmovss  dword ptr [rsp+148h+from+4], xmm1
      vmovss  dword ptr [rsp+148h+from+8], xmm9
    }
    if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    __asm
    {
      vmovss  xmm10, cs:__real@3f733333
      vmovss  xmm12, cs:__real@3f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
      vmulss  xmm1, xmm0, dword ptr [rsi+28h]
      vmulss  xmm0, xmm1, xmm10; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm12; max
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vsubss  xmm1, xmm6, dword ptr [rsp+148h+var_F0] }
    v41 = DVARFLT_cg_mlg_cam_smooth_factor;
    __asm
    {
      vmulss  xmm2, xmm1, xmm0
      vsubss  xmm1, xmm7, dword ptr [rsp+148h+var_F0+4]
      vaddss  xmm14, xmm2, dword ptr [rsp+148h+var_F0]
      vmulss  xmm2, xmm1, xmm0
      vsubss  xmm1, xmm8, [rsp+148h+var_E8]
      vaddss  xmm15, xmm2, dword ptr [rsp+148h+var_F0+4]
      vmulss  xmm0, xmm1, xmm0
      vaddss  xmm0, xmm0, [rsp+148h+var_E8]
      vmovss  [rsp+148h+var_108], xmm0
    }
    if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    __asm
    {
      vmovd   xmm0, dword ptr [rdi+65E4h]
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm0, xmm0, dword ptr [rsi+28h]
      vmulss  xmm0, xmm0, xmm10; val
      vmovaps xmm2, xmm12; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm11, xmm0 }
    AnglesNormalize360(&from, &from);
    __asm
    {
      vmovss  xmm7, cs:__real@3b360b61
      vmovss  xmm9, cs:__real@3f000000
      vmovss  xmm8, cs:__real@43b40000
      vmovss  xmm1, dword ptr [rsp+148h+from]
      vsubss  xmm2, xmm1, dword ptr [rsp+148h+var_E0]
      vmulss  xmm3, xmm2, xmm7
      vaddss  xmm2, xmm3, xmm9
      vxorps  xmm10, xmm10, xmm10
      vroundss xmm0, xmm10, xmm2, 1
      vsubss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm1, xmm8
      vmulss  xmm1, xmm0, xmm11
      vaddss  xmm6, xmm1, dword ptr [rsp+148h+var_E0]
      vmovss  xmm0, dword ptr [rsp+148h+from+4]
      vsubss  xmm1, xmm0, dword ptr [rsp+148h+var_E0+4]
      vmulss  xmm4, xmm1, xmm7
      vmovss  dword ptr [rbx+8], xmm14
      vmovaps xmm14, [rsp+148h+var_B8]
      vmovss  dword ptr [rbx+0Ch], xmm15
      vmovaps xmm15, [rsp+148h+var_C8]
      vaddss  xmm2, xmm4, xmm9
      vroundss xmm3, xmm10, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm8
      vmovss  xmm0, dword ptr [rsp+148h+from+8]
      vmulss  xmm2, xmm1, xmm11
      vaddss  xmm3, xmm2, dword ptr [rsp+148h+var_E0+4]
      vsubss  xmm1, xmm0, [rsp+148h+var_D8]
      vmovss  xmm0, [rsp+148h+var_108]
      vmovss  dword ptr [rbx+10h], xmm0
      vmulss  xmm4, xmm1, xmm7
      vmovaps xmm7, [rsp+148h+var_48]
      vaddss  xmm1, xmm4, xmm9
      vmovaps xmm9, [rsp+148h+var_68]
      vroundss xmm2, xmm10, xmm1, 1
      vmovaps xmm10, [rsp+148h+var_78]
      vsubss  xmm0, xmm4, xmm2
      vmulss  xmm1, xmm0, xmm8
      vmovaps xmm8, [rsp+148h+var_58]
      vmulss  xmm2, xmm1, xmm11
      vsubss  xmm0, xmm12, xmm11
      vmovaps xmm12, [rsp+148h+var_98]
      vmulss  xmm1, xmm11, xmm13
      vmovaps xmm13, [rsp+148h+var_A8]
      vmovaps xmm11, [rsp+148h+var_88]
      vmovss  dword ptr [rbx+18h], xmm3
      vaddss  xmm3, xmm2, [rsp+148h+var_D8]
      vmulss  xmm2, xmm0, [rsp+148h+var_104]
      vmovss  dword ptr [rbx+14h], xmm6
      vmovaps xmm6, [rsp+148h+var_38]
      vaddss  xmm2, xmm2, xmm1
      vmovss  dword ptr [rbx+1Ch], xmm3
      vmovss  dword ptr [rbx+20h], xmm2
    }
  }
}

/*
==============
CG_ServerCmdMP_SetMLGThirdPersonEnabled
==============
*/
void CG_ServerCmdMP_SetMLGThirdPersonEnabled(const LocalClientNum_t localClientNum, const bool enabled)
{
  CgGlobalsMP::GetLocalClientGlobals(localClientNum)->spectatingThirdPerson = enabled;
}

/*
==============
AerialCamActiveCameraState::EnterState
==============
*/
void AerialCamActiveCameraState::EnterState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ParticleSystemHandle *m_arrowFx; 
  __int64 v11; 
  CgMLGCameraManager *m_cameraManager; 
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  CgGlobalsMP *LocalClientGlobals; 
  int cameraAerialFocusedClient; 
  int v22; 
  CgMLGSpectator *v23; 
  CgGlobalsMP *v24; 
  unsigned int m_localFocusedPlayer; 
  cg_t *v26; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  float v36; 
  float v37; 
  float v38; 

  __asm
  {
    vmovaps [rsp+0A8h+var_38], xmm6
    vmovaps [rsp+0A8h+var_48], xmm7
  }
  _RBX = DVARFLT_cg_mlg_aerialcam_pitch;
  _RDI = this;
  if ( !DVARFLT_cg_mlg_aerialcam_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_cg_mlg_aerialcam_base_vertical_distance;
  if ( !DVARFLT_cg_mlg_aerialcam_base_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_base_vertical_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  m_arrowFx = _RDI->m_arrowFx;
  v11 = 12i64;
  do
  {
    *(_QWORD *)m_arrowFx = 0i64;
    *((_QWORD *)m_arrowFx + 1) = 0i64;
    *((_QWORD *)m_arrowFx + 2) = 0i64;
    m_arrowFx += 16;
    *((_QWORD *)m_arrowFx - 5) = 0i64;
    *((_QWORD *)m_arrowFx - 4) = 0i64;
    *((_QWORD *)m_arrowFx - 3) = 0i64;
    *((_QWORD *)m_arrowFx - 2) = 0i64;
    *((_QWORD *)m_arrowFx - 1) = 0i64;
    --v11;
  }
  while ( v11 );
  *(_QWORD *)m_arrowFx = 0i64;
  *((_QWORD *)m_arrowFx + 1) = 0i64;
  *((_QWORD *)m_arrowFx + 2) = 0i64;
  *((_QWORD *)m_arrowFx + 3) = 0i64;
  __asm
  {
    vmovss  [rsp+0A8h+var_60], xmm0
    vxorps  xmm6, xmm6, xmm6
    vunpcklps xmm0, xmm6, xmm6
  }
  _RDI->m_cameraManager->m_shouldRenderThirdPerson = 1;
  m_cameraManager = _RDI->m_cameraManager;
  __asm
  {
    vmovsd  qword ptr [rdi+28h], xmm0
    vunpcklps xmm0, xmm7, xmm6
  }
  _RDI->m_currentOffset.v[2] = v36;
  __asm
  {
    vmovsd  qword ptr [rdi+34h], xmm0
    vmovss  [rsp+0A8h+var_60], xmm6
  }
  _RDI->m_currentAngles.v[2] = v37;
  clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    cameraAerialFocusedClient = CgMLGSpectator::GetMLGSpectatorClientInfo(MLGSpectator, clientNum)->cameraAerialFocusedClient;
  else
    cameraAerialFocusedClient = m_cameraManager->m_localFocusedPlayer;
  _RBP = _RDI->m_cameraManager;
  _RDI->m_focusOnBarycenter = 0;
  _RDI->m_lastLockStatus = cameraAerialFocusedClient >= 0;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+8]
    vmovsd  qword ptr [rdi+40h], xmm0
  }
  _RDI->m_groundPosition.v[2] = _RBP->m_mlgCurrentCameraPos.v[2];
  _RDI->m_lastFollowedClientNum = -1;
  _RDI->m_elapsedTransitionTime = 0.0;
  _RDI->m_currentTransitionDuration = 0.0;
  v22 = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  v23 = CgMLGSpectator::GetMLGSpectator(localClientNum);
  v24 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(v24, v24->clientNum)->team == TEAM_FOLLOWER )
    m_localFocusedPlayer = CgMLGSpectator::GetMLGSpectatorClientInfo(v23, v22)->cameraAerialFocusedClient;
  else
    m_localFocusedPlayer = _RBP->m_localFocusedPlayer;
  v26 = CG_GetLocalClientGlobals(localClientNum);
  if ( v26->HasCharacterInfo(v26, m_localFocusedPlayer) && (CharacterInfo = CG_GetCharacterInfo(v26, m_localFocusedPlayer)) != NULL && (Entity = CG_GetEntity(localClientNum, CharacterInfo->entityNum)) != NULL && ((Entity->nextState.eType - 1) & 0xFFEF) == 0 )
  {
    CG_GetPoseOrigin(&Entity->pose, &_RDI->m_groundPosition);
  }
  else
  {
    _RAX = _RDI->m_cameraManager;
    __asm
    {
      vmovsd  xmm1, qword ptr [rax+8]
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovss  dword ptr [rdi+44h], xmm0
      vmovss  dword ptr [rdi+40h], xmm1
    }
    _RDI->m_groundPosition.v[2] = 0.0;
  }
  _RAX = _RDI->m_cameraManager;
  __asm { vmovss  dword ptr [rax+30h], xmm7 }
  *(_QWORD *)&_RAX->m_mlgTargetCameraAngles.y = 0i64;
  _RBX = _RDI->m_cameraManager;
  *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
  __asm
  {
    vmovss  dword ptr [rbx+3Ch], xmm0
    vunpcklps xmm0, xmm6, xmm6
    vmovss  [rsp+0A8h+var_60], xmm6
    vmovsd  qword ptr [rdi+1Ch], xmm0
  }
  _RDI->m_lastInputVector.v[2] = v38;
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_38]
    vmovaps xmm7, [rsp+0A8h+var_48]
  }
}

/*
==============
AerialCamEnteringCameraState::EnterState
==============
*/
void AerialCamEnteringCameraState::EnterState(AerialCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  ClientFov result; 
  vec3_t outOrg; 
  char v33; 
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
  }
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+178C0h]
    vmovss  xmm7, dword ptr [rbx+178C4h]
    vmovss  xmm8, dword ptr [rbx+178C8h]
  }
  _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  _RBX = this->m_cameraManager;
  __asm
  {
    vmovss  xmm9, dword ptr [rsp+0E8h+outOrg]
    vmovss  xmm10, dword ptr [rsp+0E8h+outOrg+4]
    vmovsd  xmm0, qword ptr [rax]
    vmovss  xmm11, dword ptr [rsp+0E8h+outOrg+8]
    vmovss  dword ptr [rbx+8], xmm9
    vmovss  dword ptr [rbx+0Ch], xmm10
    vmovss  dword ptr [rbx+10h], xmm11
    vmovss  dword ptr [rbx+14h], xmm6
    vmovss  dword ptr [rbx+18h], xmm7
    vmovss  dword ptr [rbx+1Ch], xmm8
    vmovss  dword ptr [rbx+20h], xmm0
  }
  _RDI = DVARFLT_cg_mlg_aerialcam_pitch;
  if ( !DVARFLT_cg_mlg_aerialcam_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbx+30h], xmm0
  }
  *(_QWORD *)&_RBX->m_mlgTargetCameraAngles.y = 0i64;
  _RBX = this->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rbx+24h], xmm9
    vmovss  dword ptr [rbx+28h], xmm10
    vmovss  dword ptr [rbx+2Ch], xmm11
  }
  *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
  __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
  _R11 = &v33;
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
FreeCamActiveCameraState::EnterState
==============
*/

void __fastcall FreeCamActiveCameraState::EnterState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum, __int64 a3, double _XMM3_8)
{
  float v8; 
  float v12; 
  float v13; 

  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vmovss  [rsp+18h+var_10], xmm3
  }
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  _RDX = this->m_cameraManager;
  *(_QWORD *)&this->m_elapsedTransitionTime = 0i64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+24h]
    vmovsd  qword ptr [rcx+34h], xmm0
  }
  this->m_lastTargetPos.v[2] = _RDX->m_mlgTargetCameraPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rdx+30h]
    vmovsd  qword ptr [rcx+40h], xmm0
  }
  v8 = _RDX->m_mlgTargetCameraAngles.v[2];
  __asm
  {
    vunpcklps xmm0, xmm3, xmm3
    vmovsd  qword ptr [rcx+58h], xmm0
  }
  this->m_lastTargetAngles.v[2] = v8;
  __asm { vunpcklps xmm0, xmm3, xmm3 }
  this->m_lastInputVector.v[2] = v12;
  __asm
  {
    vmovsd  qword ptr [rcx+4Ch], xmm0
    vmovss  [rsp+18h+var_10], xmm3
  }
  this->m_lastInputAngles.v[2] = v13;
  this->m_lastInputFoV = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+3Ch]
    vmovss  dword ptr [rcx+64h], xmm0
    vmovss  dword ptr [rcx+6Ch], xmm0
  }
}

/*
==============
FreeCamEnteringCameraState::EnterState
==============
*/
void FreeCamEnteringCameraState::EnterState(FreeCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  bool v23; 
  ClientFov result; 
  vec3_t outOrg; 
  tmat33_t<vec3_t> axis; 
  char v75; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-78h], xmm11
    vmovaps xmmword ptr [r11-88h], xmm12
  }
  _RDI = this;
  __asm
  {
    vmovaps xmmword ptr [r11-98h], xmm13
    vmovaps xmmword ptr [r11-0A8h], xmm14
    vmovaps xmmword ptr [r11-0B8h], xmm15
  }
  CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RDI->m_cameraManager->m_shouldRenderThirdPerson = 1;
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm7, dword ptr [rbx+178C0h]
    vmovss  xmm10, dword ptr [rbx+178C4h]
    vmovss  [rsp+148h+var_128], xmm7
    vmovss  [rsp+148h+var_124], xmm10
  }
  _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovsd  xmm0, qword ptr [rax]
  }
  m_cameraManager = _RDI->m_cameraManager;
  __asm { vmovsd  [rsp+148h+var_120], xmm0 }
  _RCX = &m_cameraManager->m_mlgMemorizedFreeCamPose;
  if ( !m_cameraManager )
    _RCX = NULL;
  if ( _RCX && (v23 = !_RCX->hasBeenSet, _RCX->hasBeenSet) )
  {
    __asm
    {
      vmovss  xmm10, dword ptr [rcx]
      vmovss  xmm11, dword ptr [rcx+4]
      vmovss  xmm12, dword ptr [rcx+8]
      vmovss  xmm13, dword ptr [rcx+0Ch]
      vmovss  xmm14, dword ptr [rcx+10h]
      vmovss  xmm15, dword ptr [rcx+14h]
      vmovss  xmm0, dword ptr [rcx+18h]
      vmovss  xmm7, dword ptr [rsp+148h+outOrg+8]
      vmovss  xmm8, dword ptr [rsp+148h+outOrg+4]
      vmovss  xmm9, dword ptr [rsp+148h+outOrg]
    }
    _RCX->hasBeenSet = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+148h+outOrg+8]
      vmovss  xmm9, dword ptr [rsp+148h+outOrg]
      vmovss  xmm8, dword ptr [rsp+148h+outOrg+4]
      vmovaps xmm13, xmm7
      vaddss  xmm7, xmm0, dword ptr [rbp+1F0h]
      vmovss  dword ptr [rsp+148h+outOrg], xmm6
      vmovss  dword ptr [rsp+148h+outOrg+4], xmm10
      vmovss  dword ptr [rsp+148h+outOrg+8], xmm6
      vmovaps xmm14, xmm10
      vxorps  xmm15, xmm15, xmm15
    }
    AnglesToAxis(&outOrg, &axis);
    __asm
    {
      vmovss  xmm5, cs:__real@41a00000
      vmovss  xmm4, cs:__real@42480000
      vmulss  xmm2, xmm5, dword ptr [rsp+148h+axis+18h]
      vmulss  xmm0, xmm4, dword ptr [rsp+148h+axis]
      vmulss  xmm3, xmm5, dword ptr [rsp+148h+axis+1Ch]
      vsubss  xmm2, xmm2, xmm0
      vaddss  xmm10, xmm2, xmm9
      vmulss  xmm2, xmm4, dword ptr [rsp+148h+axis+4]
      vsubss  xmm1, xmm3, xmm2
      vmulss  xmm3, xmm5, dword ptr [rsp+148h+axis+20h]
      vmulss  xmm2, xmm4, dword ptr [rsp+148h+axis+8]
      vsubss  xmm0, xmm3, xmm2
      vaddss  xmm12, xmm0, xmm7
      vaddss  xmm11, xmm1, xmm8
    }
    *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
  }
  __asm { vucomiss xmm9, xmm6 }
  _RAX = _RDI->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+24h], xmm10
    vmovss  dword ptr [rax+28h], xmm11
    vmovss  dword ptr [rax+2Ch], xmm12
  }
  _RAX = _RDI->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+30h], xmm13
    vmovaps xmm13, [rsp+148h+var_98]
    vmovss  dword ptr [rax+34h], xmm14
    vmovaps xmm14, [rsp+148h+var_A8]
    vmovss  dword ptr [rax+38h], xmm15
  }
  _RAX = _RDI->m_cameraManager;
  __asm
  {
    vmovaps xmm15, [rsp+148h+var_B8]
    vmovss  dword ptr [rax+3Ch], xmm0
  }
  if ( !v23 )
    goto LABEL_11;
  __asm { vucomiss xmm8, xmm6 }
  if ( !v23 )
    goto LABEL_11;
  __asm { vucomiss xmm7, xmm6 }
  if ( v23 )
  {
    _RAX = _RDI->m_cameraManager;
    __asm
    {
      vmovss  dword ptr [rax+8], xmm10
      vmovss  dword ptr [rax+0Ch], xmm11
      vmovss  dword ptr [rax+10h], xmm12
    }
  }
  else
  {
LABEL_11:
    _RAX = _RDI->m_cameraManager;
    __asm
    {
      vmovss  dword ptr [rax+8], xmm9
      vmovss  dword ptr [rax+0Ch], xmm8
      vmovss  dword ptr [rax+10h], xmm7
    }
  }
  _RAX = _RDI->m_cameraManager;
  __asm
  {
    vmovss  xmm0, [rsp+148h+var_128]
    vmovss  dword ptr [rax+14h], xmm0
    vmovss  xmm0, [rsp+148h+var_124]
    vmovss  dword ptr [rax+18h], xmm0
    vmovss  xmm0, dword ptr [rsp+148h+var_120]
  }
  _RAX->m_mlgCurrentCameraAngles.v[2] = 0.0;
  _RAX = _RDI->m_cameraManager;
  __asm { vmovss  dword ptr [rax+20h], xmm0 }
  _RDI->m_elapsedTransitionTime = 0.0;
  *(double *)&_XMM0 = CG_MLG_GetTransitionDuration(localClientNum);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  _R11 = &v75;
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
}

/*
==============
SpectatorActiveCameraState::EnterState
==============
*/
void SpectatorActiveCameraState::EnterState(SpectatorActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgMLGCameraManager *m_cameraManager; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  m_cameraManager = this->m_cameraManager;
  m_cameraManager->m_mlgCurrentCameraPos = LocalClientGlobals->predictedPlayerState.origin;
  m_cameraManager->m_mlgCurrentCameraAngles = LocalClientGlobals->predictedPlayerState.viewangles;
  m_cameraManager->m_shouldRenderThirdPerson = 0;
}

/*
==============
SpectatorEnteringCameraState::EnterState
==============
*/
void SpectatorEnteringCameraState::EnterState(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  centity_t *Entity; 
  float v17; 
  PostGameState PostGameState; 
  vec3_t outOrigin; 
  float v29; 

  _RBX = this;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
  }
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
  _RBX->m_cameraManager->m_shouldRenderThirdPerson = 1;
  _RBX->m_elapsedTransitionTime = 0.0;
  if ( SelectedClientNum == -1 || (Entity = CG_GetEntity(localClientNum, SelectedClientNum), (_RDI = Entity) == NULL) || ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    _RCX = _RBX->m_cameraManager;
    v17 = _RCX->m_mlgCurrentCameraPos.v[2];
    __asm
    {
      vmovsd  xmm0, qword ptr [rcx+8]
      vmovsd  qword ptr [rsp+88h+outOrigin], xmm0
    }
    outOrigin.v[2] = v17;
    __asm
    {
      vmovsd  xmm6, qword ptr [rcx+14h]
      vmovss  xmm2, dword ptr [rcx+20h]
    }
    v29 = _RCX->m_mlgCurrentCameraAngles.v[2];
    __asm
    {
      vmovss  xmm8, [rsp+88h+var_50]
      vshufps xmm7, xmm6, xmm6, 55h ; 'U'
    }
  }
  else
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+48h]
      vmovss  xmm7, dword ptr [rdi+4Ch]
      vmovss  xmm8, dword ptr [rdi+50h]
    }
    *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
    _RCX = _RBX->m_cameraManager;
    __asm { vmovaps xmm2, xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
    vmovss  dword ptr [rcx+24h], xmm0
    vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
    vmovss  dword ptr [rcx+28h], xmm1
    vmovss  xmm0, dword ptr [rsp+88h+outOrigin+8]
    vmovss  dword ptr [rcx+2Ch], xmm0
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+30h], xmm6
    vmovss  dword ptr [rax+34h], xmm7
    vmovss  dword ptr [rax+38h], xmm8
  }
  _RAX = _RBX->m_cameraManager;
  __asm { vmovss  dword ptr [rax+3Ch], xmm2 }
  PostGameState = CG_MainMP_GetPostGameState(localClientNum);
  __asm
  {
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm6, [rsp+88h+var_18]
  }
  if ( (unsigned __int8)(PostGameState - 3) <= 1u )
    __asm { vxorps  xmm0, xmm0, xmm0 }
  else
    *(double *)&_XMM0 = CG_MLG_GetTransitionDuration(localClientNum);
  __asm { vmovss  dword ptr [rbx+14h], xmm0 }
}

/*
==============
AerialCamActiveCameraState::ExitState
==============
*/
void AerialCamActiveCameraState::ExitState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  ParticleSystemHandle *m_arrowFx; 
  __int64 v4; 
  __int64 v5; 
  float v7; 
  float v10; 
  __int64 v14; 
  __int64 v15; 
  float v16; 
  float v17; 

  _R8 = this->m_cameraManager;
  m_arrowFx = this->m_arrowFx;
  v4 = localClientNum;
  v5 = 200i64;
  __asm { vmovsd  xmm1, qword ptr [r8+8] }
  v7 = _R8->m_mlgCurrentCameraPos.v[2];
  __asm { vmovss  dword ptr [r8+24h], xmm1 }
  v16 = v7;
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [r8+28h], xmm0
    vmovss  xmm0, [rsp+88h+var_40]
    vmovss  dword ptr [r8+2Ch], xmm0
  }
  v10 = _R8->m_mlgCurrentCameraAngles.v[2];
  __asm
  {
    vmovsd  xmm1, qword ptr [r8+14h]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [r8+34h], xmm0
  }
  v17 = v10;
  __asm
  {
    vmovss  xmm0, [rsp+88h+var_40]
    vmovss  dword ptr [r8+38h], xmm0
    vmovss  dword ptr [r8+30h], xmm1
  }
  _R8->m_mlgTargetCameraFoV = _R8->m_mlgCurrentCameraFoV;
  do
  {
    if ( *m_arrowFx )
    {
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v15) = 2;
        LODWORD(v14) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      ParticleManager::StopSystem(&g_particleManager[v4], *m_arrowFx);
      *m_arrowFx = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    ++m_arrowFx;
    --v5;
  }
  while ( v5 );
}

/*
==============
AerialCamEnteringCameraState::ExitState
==============
*/
void AerialCamEnteringCameraState::ExitState(AerialCamEnteringCameraState *this, const LocalClientNum_t __formal)
{
  float v4; 
  float v7; 
  float v11; 
  float v12; 

  _RDX = this->m_cameraManager;
  __asm { vmovsd  xmm1, qword ptr [rdx+8] }
  v4 = _RDX->m_mlgCurrentCameraPos.v[2];
  __asm { vmovss  dword ptr [rdx+24h], xmm1 }
  v11 = v4;
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+2Ch], xmm0
  }
  v7 = _RDX->m_mlgCurrentCameraAngles.v[2];
  __asm
  {
    vmovsd  xmm1, qword ptr [rdx+14h]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+34h], xmm0
  }
  v12 = v7;
  __asm
  {
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+38h], xmm0
    vmovss  dword ptr [rdx+30h], xmm1
  }
  _RDX->m_mlgTargetCameraFoV = _RDX->m_mlgCurrentCameraFoV;
}

/*
==============
FreeCamActiveCameraState::ExitState
==============
*/
void FreeCamActiveCameraState::ExitState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  float v4; 
  float v7; 
  float v11; 
  float v12; 

  _RDX = this->m_cameraManager;
  __asm { vmovsd  xmm1, qword ptr [rdx+8] }
  v4 = _RDX->m_mlgCurrentCameraPos.v[2];
  __asm { vmovss  dword ptr [rdx+24h], xmm1 }
  v11 = v4;
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+28h], xmm0
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+2Ch], xmm0
  }
  v7 = _RDX->m_mlgCurrentCameraAngles.v[2];
  __asm
  {
    vmovsd  xmm1, qword ptr [rdx+14h]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+34h], xmm0
  }
  v12 = v7;
  __asm
  {
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+38h], xmm0
    vmovss  dword ptr [rdx+30h], xmm1
  }
  _RDX->m_mlgTargetCameraFoV = _RDX->m_mlgCurrentCameraFoV;
}

/*
==============
FreeCamEnteringCameraState::ExitState
==============
*/
void FreeCamEnteringCameraState::ExitState(FreeCamEnteringCameraState *this, const LocalClientNum_t __formal)
{
  ;
}

/*
==============
SpectatorActiveCameraState::ExitState
==============
*/
void SpectatorActiveCameraState::ExitState(SpectatorActiveCameraState *this, const LocalClientNum_t __formal)
{
  ;
}

/*
==============
SpectatorEnteringCameraState::ExitState
==============
*/
void SpectatorEnteringCameraState::ExitState(SpectatorEnteringCameraState *this, const LocalClientNum_t __formal)
{
  float v4; 
  float v7; 
  float v11; 
  float v12; 

  _RDX = this->m_cameraManager;
  __asm { vmovsd  xmm1, qword ptr [rdx+14h] }
  v4 = _RDX->m_mlgCurrentCameraAngles.v[2];
  __asm { vmovss  dword ptr [rdx+30h], xmm1 }
  v11 = v4;
  __asm
  {
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+34h], xmm0
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+38h], xmm0
  }
  v7 = _RDX->m_mlgCurrentCameraPos.v[2];
  __asm
  {
    vmovsd  xmm1, qword ptr [rdx+8]
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovss  dword ptr [rdx+28h], xmm0
  }
  v12 = v7;
  __asm
  {
    vmovss  xmm0, [rsp+28h+var_20]
    vmovss  dword ptr [rdx+2Ch], xmm0
    vmovss  dword ptr [rdx+24h], xmm1
  }
  _RDX->m_mlgTargetCameraFoV = _RDX->m_mlgCurrentCameraFoV;
}

/*
==============
AerialCamActiveCameraState::FocusBarycenter
==============
*/
void AerialCamActiveCameraState::FocusBarycenter(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  cg_t *LocalClientGlobals; 
  const char *v6; 

  m_cameraManager = this->m_cameraManager;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = j_va("setmlgcamerafocusedclient %i %i\n", (unsigned int)LocalClientGlobals->clientNum, 0xFFFFFFFFi64);
  Cbuf_AddText(localClientNum, v6);
  m_cameraManager->m_localFocusedPlayer = -1;
  *(_QWORD *)this->m_currentOffset.v = 0i64;
  this->m_elapsedTransitionTime = 0.0;
  this->m_focusOnBarycenter = 1;
}

/*
==============
AerialCamActiveCameraState::FocusNearestPlayer
==============
*/
void AerialCamActiveCameraState::FocusNearestPlayer(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  __int64 v8; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v15; 
  unsigned int clientNum; 
  int v17; 
  cg_t *v19; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __int64 v22; 
  int v23; 
  int v24; 
  char v25; 
  CgMLGCameraManager *m_cameraManager; 
  cg_t *v39; 
  const char *v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  vec3_t outOrigin; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = this;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  v8 = localClientNum;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  xmm1, dword ptr [rbx+44h]
    vaddss  xmm7, xmm0, dword ptr [rbx+40h]
    vaddss  xmm8, xmm1, dword ptr [rbx+2Ch]
    vmovss  xmm6, cs:__real@bf800000
  }
  v15 = LocalClientGlobals;
  clientNum = -1;
  v17 = 0;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  do
  {
    v19 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    if ( v19->HasCharacterInfo(v19, v17) )
    {
      CharacterInfo = CG_GetCharacterInfo(v19, v17);
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v8, CharacterInfo->entityNum);
        if ( Entity )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
          {
            LODWORD(v44) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
            LODWORD(v43) = 2;
            LODWORD(v42) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v42, v43, v44) )
              __debugbreak();
          }
          if ( (unsigned int)v8 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v42) = CgCompassSystem::ms_allocatedCount;
            LODWORD(v41) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v41, v42) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v8] )
          {
            LODWORD(v42) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v42) )
              __debugbreak();
          }
          v22 = CgCompassSystem::ms_compassSystemArray[v8]->GetCompassActor(CgCompassSystem::ms_compassSystemArray[v8], v17);
          if ( v22 )
          {
            v23 = *(_DWORD *)(v22 + 4);
            v24 = v15->time - 500;
            if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 && v15->HasCharacterInfo(v15, v17) && v23 >= v24 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              __asm
              {
                vcomiss xmm6, xmm9
                vmovss  xmm0, dword ptr [rsp+0E8h+outOrigin]
                vmovss  xmm1, dword ptr [rsp+0E8h+outOrigin+4]
                vsubss  xmm2, xmm1, xmm8
                vmulss  xmm3, xmm2, xmm2
                vsubss  xmm4, xmm0, xmm7
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm1, xmm3, xmm0
                vsqrtss xmm2, xmm1, xmm1
              }
              if ( v25 )
                goto LABEL_20;
              __asm { vcomiss xmm2, xmm6 }
              if ( v25 )
              {
LABEL_20:
                clientNum = Entity->nextState.clientNum;
                __asm { vmovaps xmm6, xmm2 }
              }
            }
          }
        }
      }
    }
    ++v17;
  }
  while ( v17 < 200 );
  __asm
  {
    vmovaps xmm9, [rsp+0E8h+var_78]
    vmovaps xmm8, [rsp+0E8h+var_68]
    vmovaps xmm7, [rsp+0E8h+var_58]
    vmovaps xmm6, [rsp+0E8h+var_48]
  }
  if ( clientNum != -1 )
  {
    this->m_focusOnBarycenter = 0;
    m_cameraManager = this->m_cameraManager;
    v39 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    v40 = j_va("setmlgcamerafocusedclient %i %i\n", (unsigned int)v39->clientNum, clientNum);
    Cbuf_AddText((LocalClientNum_t)v8, v40);
    m_cameraManager->m_localFocusedPlayer = clientNum;
  }
}

/*
==============
AerialCamActiveCameraState::FocusSpectatedPlayer
==============
*/
void AerialCamActiveCameraState::FocusSpectatedPlayer(AerialCamActiveCameraState *this)
{
  *(_QWORD *)this->m_currentOffset.v = 0i64;
  this->m_elapsedTransitionTime = 0.0;
  this->m_focusOnBarycenter = 0;
}

/*
==============
CgMLGCameraManager::GetAerialMaxHeight
==============
*/
float CgMLGCameraManager::GetAerialMaxHeight(CgMLGCameraManager *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+14070h] }
  return *(float *)&_XMM0;
}

/*
==============
CgMLGCameraManager::GetAerialMinHeight
==============
*/
float CgMLGCameraManager::GetAerialMinHeight(CgMLGCameraManager *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+1406Ch] }
  return *(float *)&_XMM0;
}

/*
==============
AerialCamActiveCameraState::GetCameraState
==============
*/
char AerialCamActiveCameraState::GetCameraState(AerialCamActiveCameraState *this)
{
  return 5;
}

/*
==============
AerialCamEnteringCameraState::GetCameraState
==============
*/
char AerialCamEnteringCameraState::GetCameraState(AerialCamEnteringCameraState *this)
{
  return 4;
}

/*
==============
CgMLGCameraManager::GetCameraState
==============
*/
CameraStateInterface *CgMLGCameraManager::GetCameraState(CgMLGCameraManager *this, const CoDCasterCameraState *state)
{
  int v5; 
  int v6; 

  if ( *state < CAMERA_STATE_COUNT )
    return this->m_mlgCameraStates[*(unsigned __int8 *)state];
  v6 = 6;
  v5 = *(unsigned __int8 *)state;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( CoDCasterCameraState::CAMERA_STATE_COUNT )", "state doesn't index CoDCasterCameraState::CAMERA_STATE_COUNT\n\t%i not in [0, %i)", v5, v6) )
    __debugbreak();
  return this->m_mlgCameraStates[*(unsigned __int8 *)state];
}

/*
==============
FreeCamActiveCameraState::GetCameraState
==============
*/
char FreeCamActiveCameraState::GetCameraState(FreeCamActiveCameraState *this)
{
  return 3;
}

/*
==============
FreeCamEnteringCameraState::GetCameraState
==============
*/
char FreeCamEnteringCameraState::GetCameraState(FreeCamEnteringCameraState *this)
{
  return 2;
}

/*
==============
SpectatorActiveCameraState::GetCameraState
==============
*/
char SpectatorActiveCameraState::GetCameraState(SpectatorActiveCameraState *this)
{
  return 1;
}

/*
==============
SpectatorEnteringCameraState::GetCameraState
==============
*/
CoDCasterCameraState SpectatorEnteringCameraState::GetCameraState(SpectatorEnteringCameraState *this)
{
  return 0;
}

/*
==============
CgMLGCameraManager::GetFocusedPlayer
==============
*/
__int64 CgMLGCameraManager::GetFocusedPlayer(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  CgGlobalsMP *LocalClientGlobals; 

  clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    return (unsigned int)CgMLGSpectator::GetMLGSpectatorClientInfo(MLGSpectator, clientNum)->cameraAerialFocusedClient;
  else
    return (unsigned int)this->m_localFocusedPlayer;
}

/*
==============
CgMLGCameraManager::GetMLGCameraType
==============
*/
__int64 CgMLGCameraManager::GetMLGCameraType(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  CgGlobalsMP *LocalClientGlobals; 

  clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    return CgMLGSpectator::GetMLGSpectatorClientInfo(MLGSpectator, clientNum)->cameraTypeMLGSpectator;
  else
    return (unsigned __int8)this->m_localCameraType;
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraAngles
==============
*/
vec3_t *CgMLGCameraManager::GetMLGCurrentCameraAngles(CgMLGCameraManager *this, vec3_t *result)
{
  float v2; 

  v2 = this->m_mlgCurrentCameraAngles.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx+14h]
    vmovsd  qword ptr [rdx], xmm0
  }
  result->v[2] = v2;
  return result;
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraFoV
==============
*/
float CgMLGCameraManager::GetMLGCurrentCameraFoV(CgMLGCameraManager *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+20h] }
  return *(float *)&_XMM0;
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraPosition
==============
*/
vec3_t *CgMLGCameraManager::GetMLGCurrentCameraPosition(CgMLGCameraManager *this, vec3_t *result)
{
  float v2; 

  v2 = this->m_mlgCurrentCameraPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx+8]
    vmovsd  qword ptr [rdx], xmm0
  }
  result->v[2] = v2;
  return result;
}

/*
==============
CgMLGCameraManager::GetMLGCurrentCameraState
==============
*/
CameraStateInterface *CgMLGCameraManager::GetMLGCurrentCameraState(CgMLGCameraManager *this)
{
  return this->m_mlgCurrentCameraState;
}

/*
==============
CgMLGCameraManager::GetMLGFreeCamPose
==============
*/
CameraPose *CgMLGCameraManager::GetMLGFreeCamPose(CgMLGCameraManager *this, int mapIndex, int poseIndex)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = poseIndex;
  v5 = mapIndex;
  if ( (unsigned int)poseIndex >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 381, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, 20) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v8) = 128;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return &this->m_mlgFreeCamPoses[v5][v3];
}

/*
==============
CgMLGCameraManager::GetMLGFreeCamPoseForCurrentMap
==============
*/
CameraPose *CgMLGCameraManager::GetMLGFreeCamPoseForCurrentMap(CgMLGCameraManager *this, int poseIndex)
{
  __int64 v2; 
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 
  int index; 

  v2 = poseIndex;
  if ( (unsigned int)poseIndex >= 0x14 )
  {
    v10 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 312, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, v10) )
      __debugbreak();
  }
  v4 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !Com_GameInfo_GetMapIndexForLoadName(v4->current.string, &index) )
    return 0i64;
  v5 = index;
  if ( (unsigned int)v2 >= 0x14 )
  {
    LODWORD(v9) = 20;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 381, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v9) = 128;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return &this->m_mlgFreeCamPoses[v5][v2];
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraAngles
==============
*/
vec3_t *CgMLGCameraManager::GetMLGTargetCameraAngles(CgMLGCameraManager *this, vec3_t *result)
{
  float v2; 

  v2 = this->m_mlgTargetCameraAngles.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx+30h]
    vmovsd  qword ptr [rdx], xmm0
  }
  result->v[2] = v2;
  return result;
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraFoV
==============
*/
float CgMLGCameraManager::GetMLGTargetCameraFoV(CgMLGCameraManager *this)
{
  __asm { vmovss  xmm0, dword ptr [rcx+3Ch] }
  return *(float *)&_XMM0;
}

/*
==============
CgMLGCameraManager::GetMLGTargetCameraPosition
==============
*/
vec3_t *CgMLGCameraManager::GetMLGTargetCameraPosition(CgMLGCameraManager *this, vec3_t *result)
{
  float v2; 

  v2 = this->m_mlgTargetCameraPos.v[2];
  __asm
  {
    vmovsd  xmm0, qword ptr [rcx+24h]
    vmovsd  qword ptr [rdx], xmm0
  }
  result->v[2] = v2;
  return result;
}

/*
==============
CgMLGCameraManager::GetMemorizedCameraPose
==============
*/
CameraPose *CgMLGCameraManager::GetMemorizedCameraPose(CgMLGCameraManager *this)
{
  return &this->m_mlgMemorizedFreeCamPose;
}

/*
==============
AerialCamActiveCameraState::HandleInputsInternal
==============
*/
void AerialCamActiveCameraState::HandleInputsInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  int v16; 
  int v17; 
  int v18; 
  const char *CommandForBinding; 
  int GamepadKeyNum; 
  const char *v21; 
  int v22; 
  int v23; 
  const dvar_t *v26; 
  const char *v27; 
  char v32; 
  const dvar_t *v45; 
  int keynum; 
  int v122; 
  int v123; 
  int BoundKey; 
  int v125; 
  float v126; 
  char v128; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RBP = this;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps [rsp+148h+var_D8], xmm15
  }
  CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  BoundKey = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_UP, INVALID, 1);
  v125 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_DOWN, INVALID, 1);
  keynum = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_FORWARD, INVALID, 1);
  v16 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_BACKWARD, INVALID, 1);
  v122 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_LEFT, INVALID, 1);
  v123 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_RIGHT, INVALID, 1);
  v17 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_SPEEDUP, INVALID, 1);
  v18 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_SLOWDOWN, INVALID, 1);
  CommandForBinding = Com_Keys_GetCommandForBinding(230);
  GamepadKeyNum = CG_MLG_GetGamepadKeyNum(localClientNum, CommandForBinding);
  v21 = Com_Keys_GetCommandForBinding(231);
  v22 = CG_MLG_GetGamepadKeyNum(localClientNum, v21);
  v23 = 0;
  if ( CL_Keys_IsKeyDown(localClientNum, v17) || CL_Keys_IsKeyDown(localClientNum, GamepadKeyNum) )
    v23 = 1;
  if ( CL_Keys_IsKeyDown(localClientNum, v18) || CL_Keys_IsKeyDown(localClientNum, v22) )
    --v23;
  _RBX = DVARFLT_cg_mlg_freecam_speed_base;
  if ( !DVARFLT_cg_mlg_freecam_speed_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_base") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm11, dword ptr [rbx+28h] }
  if ( v23 <= 0 )
  {
    if ( v23 >= 0 )
      goto LABEL_19;
    v26 = DVARFLT_cg_mlg_freecam_speed_slow_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_slow_factor )
    {
      v27 = "cg_mlg_freecam_speed_slow_factor";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v27) )
        __debugbreak();
    }
  }
  else
  {
    v26 = DVARFLT_cg_mlg_freecam_speed_fast_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_fast_factor )
    {
      v27 = "cg_mlg_freecam_speed_fast_factor";
      goto LABEL_16;
    }
  }
  Dvar_CheckFrontendServerThread(v26);
  __asm { vmulss  xmm11, xmm11, dword ptr [rbx+28h] }
LABEL_19:
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_Y);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_X);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LTRIGGER);
  __asm { vmovaps xmm6, xmm0 }
  CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RTRIGGER);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vxorps  xmm10, xmm10, xmm10
    vucomiss xmm8, xmm10
    vsubss  xmm6, xmm6, xmm0
    vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( v32 )
    __asm { vmovaps xmm15, xmm9 }
  else
    __asm { vandps  xmm15, xmm8, xmm0 }
  __asm { vucomiss xmm7, xmm10 }
  if ( v32 )
    __asm { vmovaps xmm13, xmm9 }
  else
    __asm { vandps  xmm13, xmm7, xmm0 }
  __asm { vucomiss xmm6, xmm10 }
  if ( v32 )
    __asm { vmovaps xmm12, xmm9 }
  else
    __asm { vandps  xmm12, xmm6, xmm0 }
  __asm
  {
    vunpcklps xmm0, xmm10, xmm10
    vmovsd  qword ptr [rbp+34h], xmm0
    vmovss  [rsp+148h+var_E0], xmm10
  }
  _RBP->m_currentAngles.v[2] = v126;
  if ( CL_Keys_IsKeyDown(localClientNum, keynum) )
    __asm { vaddss  xmm8, xmm8, xmm9 }
  __asm { vmovss  xmm14, cs:__real@bf800000 }
  if ( CL_Keys_IsKeyDown(localClientNum, v16) )
    __asm { vaddss  xmm8, xmm8, xmm14 }
  if ( CL_Keys_IsKeyDown(localClientNum, v122) )
    __asm { vaddss  xmm7, xmm7, xmm14 }
  if ( CL_Keys_IsKeyDown(localClientNum, v123) )
    __asm { vaddss  xmm7, xmm7, xmm9 }
  if ( CL_Keys_IsKeyDown(localClientNum, BoundKey) )
    __asm { vaddss  xmm6, xmm6, xmm9 }
  if ( CL_Keys_IsKeyDown(localClientNum, v125) )
    __asm { vaddss  xmm6, xmm6, xmm14 }
  v45 = DVARFLT_cg_mlg_cam_smooth_factor;
  __asm
  {
    vmulss  xmm0, xmm8, xmm8
    vmulss  xmm1, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm8, xmm2
    vmulss  xmm8, xmm0, xmm15
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm7, xmm2
    vmulss  xmm12, xmm0, xmm12
    vmulss  xmm7, xmm1, xmm13
  }
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v45);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
    vcvtsi2ss xmm0, xmm0, dword ptr [r14+65E4h]
    vmulss  xmm0, xmm0, dword ptr [rbx+28h]; val
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm8, dword ptr [rbp+1Ch]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm5, xmm2, dword ptr [rbp+1Ch]
    vsubss  xmm1, xmm7, dword ptr [rbp+20h]
    vmulss  xmm2, xmm1, xmm0
    vsubss  xmm1, xmm12, dword ptr [rbp+24h]
    vaddss  xmm6, xmm2, dword ptr [rbp+20h]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm8, xmm2, dword ptr [rbp+24h]
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
    vmovaps xmm0, xmm5; val
    vmovss  dword ptr [rbp+24h], xmm8
    vmovss  dword ptr [rbp+1Ch], xmm5
    vmovss  dword ptr [rbp+20h], xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm7, xmm0
    vmovaps xmm0, xmm6; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovaps xmm0, xmm8; val
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vmulss  xmm2, xmm7, xmm11
    vmulss  xmm2, xmm2, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbp+28h]
    vmovss  dword ptr [rbp+28h], xmm3
    vmovss  xmm2, dword ptr [rbp+2Ch]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ebx
    vmulss  xmm4, xmm6, xmm11
    vmulss  xmm3, xmm4, xmm1
    vmulss  xmm1, xmm0, xmm11
    vsubss  xmm3, xmm2, xmm3
    vmovss  dword ptr [rbp+2Ch], xmm3
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm1, xmm0
    vaddss  xmm2, xmm1, dword ptr [rbp+30h]
    vmovss  dword ptr [rbp+30h], xmm2
  }
  _RBX = DVARFLT_cg_mlg_aerialcam_maximal_tether_radius;
  if ( !DVARFLT_cg_mlg_aerialcam_maximal_tether_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_maximal_tether_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  if ( CgMLGCameraManager::GetFocusedPlayer(_RBP->m_cameraManager, localClientNum) > -1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+2Ch]
      vmovss  xmm2, dword ptr [rbp+28h]
      vmulss  xmm1, xmm2, xmm2
      vmulss  xmm0, xmm0, xmm0
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm6, xmm6
      vcomiss xmm3, xmm1
    }
  }
  __asm { vmovaps xmm15, [rsp+148h+var_D8] }
  _R11 = &v128;
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
FreeCamActiveCameraState::HandleInputsInternal
==============
*/
void FreeCamActiveCameraState::HandleInputsInternal(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  keyNum_t v16; 
  const char *CommandForBinding; 
  int GamepadKeyNum; 
  const char *v19; 
  int v20; 
  int v21; 
  const dvar_t *v32; 
  const dvar_t *v47; 
  bool enabled; 
  int v50; 
  const dvar_t *v52; 
  const char *v53; 
  bool v58; 
  const dvar_t *v67; 
  const dvar_t *v123; 
  keyNum_t v178; 
  keyNum_t v179; 
  keyNum_t v180; 
  keyNum_t v181; 
  keyNum_t v182; 
  keyNum_t BoundKey; 
  keyNum_t v184; 
  int keynum; 
  char v192; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RSI = this;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps [rsp+128h+var_B8], xmm13
    vmovaps [rsp+128h+var_C8], xmm14
    vmovaps [rsp+128h+var_D8], xmm15
  }
  _R13 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  BoundKey = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_UP, INVALID, 1);
  v184 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_DOWN, INVALID, 1);
  v179 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_FORWARD, INVALID, 1);
  v180 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_BACKWARD, INVALID, 1);
  v181 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_LEFT, INVALID, 1);
  v182 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_RIGHT, INVALID, 1);
  v16 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_SPEEDUP, INVALID, 1);
  v178 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_SLOWDOWN, INVALID, 1);
  CommandForBinding = Com_Keys_GetCommandForBinding(230);
  GamepadKeyNum = CG_MLG_GetGamepadKeyNum(localClientNum, CommandForBinding);
  v19 = Com_Keys_GetCommandForBinding(231);
  keynum = CG_MLG_GetGamepadKeyNum(localClientNum, v19);
  v20 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_FOV_INCREASE, INVALID, 1);
  v21 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_FOV_DECREASE, INVALID, 1);
  __asm { vxorps  xmm15, xmm15, xmm15 }
  _EAX = CL_Keys_IsKeyDown(localClientNum, v20);
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovd   xmm0, eax
  }
  _ER14 = 0;
  __asm
  {
    vmovd   xmm1, r14d
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm9, xmm15, xmm2
    vmovss  [rsp+128h+var_E0], xmm0
    vmovss  xmm14, cs:__real@bf800000
  }
  if ( CL_Keys_IsKeyDown(localClientNum, v21) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+128h+var_E0]
      vaddss  xmm6, xmm0, xmm14
    }
  }
  else
  {
    __asm { vmovss  xmm6, [rsp+128h+var_E0] }
  }
  v32 = DVARFLT_cg_mlg_cam_smooth_factor;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r13+65E4h]
    vmulss  xmm0, xmm0, dword ptr [rbx+28h]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm6, dword ptr [rsi+68h]
    vmulss  xmm0, xmm1, xmm0
    vaddss  xmm3, xmm0, dword ptr [rsi+68h]
    vmovss  dword ptr [rsi+68h], xmm3
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [r13+65E4h]
    vmulss  xmm0, xmm1, xmm3
    vmulss  xmm2, xmm0, cs:__real@3d4ccccd
    vmovss  dword ptr [rsi+28h], xmm2
  }
  _RBX = DVARFLT_cg_mlg_freecam_sensitivity;
  if ( !DVARFLT_cg_mlg_freecam_sensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_sensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  v47 = DVARBOOL_cg_mlg_freecam_speed_toggle;
  __asm { vmovss  [rsp+128h+var_E0], xmm0 }
  if ( !DVARBOOL_cg_mlg_freecam_speed_toggle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_toggle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  enabled = v47->current.enabled;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v16) || CL_Keys_IsKeyDown(localClientNum, GamepadKeyNum) )
  {
    if ( enabled )
    {
      if ( !_RSI->m_speedUpKeyDown )
      {
        v58 = !_RSI->m_speedUp;
        _RSI->m_slowDown = 0;
        _RSI->m_speedUp = v58;
      }
    }
    else
    {
      _RSI->m_speedUp = 1;
    }
    _RSI->m_speedUpKeyDown = 1;
  }
  else
  {
    _RSI->m_speedUpKeyDown = 0;
    if ( !enabled )
      _RSI->m_speedUp = 0;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v178) || CL_Keys_IsKeyDown(localClientNum, keynum) )
  {
    if ( enabled )
    {
      if ( !_RSI->m_slowDownKeyDown )
      {
        v58 = !_RSI->m_slowDown;
        _RSI->m_speedUp = 0;
        _RSI->m_slowDown = v58;
      }
    }
    else
    {
      _RSI->m_slowDown = 1;
    }
    _RSI->m_slowDownKeyDown = 1;
  }
  else
  {
    _RSI->m_slowDownKeyDown = 0;
    if ( !enabled )
      _RSI->m_slowDown = 0;
  }
  _RDI = DVARFLT_cg_mlg_freecam_speed_base;
  LOBYTE(_ER14) = _RSI->m_speedUp;
  v50 = _ER14 - 1;
  if ( !_RSI->m_slowDown )
    v50 = _ER14;
  if ( !DVARFLT_cg_mlg_freecam_speed_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_base") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm10, dword ptr [rdi+28h] }
  if ( v50 <= 0 )
  {
    if ( v50 >= 0 )
      goto LABEL_45;
    v52 = DVARFLT_cg_mlg_freecam_speed_slow_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_slow_factor )
    {
      v53 = "cg_mlg_freecam_speed_slow_factor";
LABEL_42:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v53) )
        __debugbreak();
    }
  }
  else
  {
    v52 = DVARFLT_cg_mlg_freecam_speed_fast_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_fast_factor )
    {
      v53 = "cg_mlg_freecam_speed_fast_factor";
      goto LABEL_42;
    }
  }
  Dvar_CheckFrontendServerThread(v52);
  __asm { vmulss  xmm10, xmm10, dword ptr [rbx+28h] }
LABEL_45:
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_Y);
  __asm { vmovaps xmm8, xmm0 }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_X);
  __asm { vmovaps xmm7, xmm0 }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LTRIGGER);
  __asm { vmovaps xmm6, xmm0 }
  CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RTRIGGER);
  __asm
  {
    vucomiss xmm8, xmm15
    vsubss  xmm6, xmm6, xmm0
    vmovss  xmm0, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
  }
  if ( v58 )
    __asm { vmovaps xmm13, xmm9 }
  else
    __asm { vandps  xmm13, xmm8, xmm0 }
  __asm { vucomiss xmm7, xmm15 }
  if ( v58 )
    __asm { vmovaps xmm12, xmm9 }
  else
    __asm { vandps  xmm12, xmm7, xmm0 }
  __asm { vucomiss xmm6, xmm15 }
  if ( v58 )
    __asm { vmovaps xmm11, xmm9 }
  else
    __asm { vandps  xmm11, xmm6, xmm0 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v179) )
    __asm { vaddss  xmm8, xmm8, xmm9 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v180) )
    __asm { vaddss  xmm8, xmm8, xmm14 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v181) )
    __asm { vaddss  xmm7, xmm7, xmm14 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v182) )
    __asm { vaddss  xmm7, xmm7, xmm9 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)BoundKey) )
    __asm { vaddss  xmm6, xmm6, xmm9 }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v184) )
    __asm { vaddss  xmm6, xmm6, xmm14 }
  v67 = DVARFLT_cg_mlg_cam_smooth_factor;
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm8, xmm2
    vmulss  xmm8, xmm0, xmm13
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm7, xmm2
    vmulss  xmm11, xmm0, xmm11
    vmulss  xmm7, xmm1, xmm12
  }
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  __asm
  {
    vmovd   xmm0, dword ptr [r13+65E4h]
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, dword ptr [rbx+28h]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm8, dword ptr [rsi+58h]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm5, xmm2, dword ptr [rsi+58h]
    vsubss  xmm1, xmm7, dword ptr [rsi+5Ch]
    vmulss  xmm2, xmm1, xmm0
    vsubss  xmm1, xmm11, dword ptr [rsi+60h]
    vaddss  xmm6, xmm2, dword ptr [rsi+5Ch]
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm7, xmm2, dword ptr [rsi+60h]
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
    vmovaps xmm0, xmm5; val
    vmovss  dword ptr [rsi+60h], xmm7
    vmovss  dword ptr [rsi+58h], xmm5
    vmovss  dword ptr [rsi+5Ch], xmm6
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovd   xmm1, dword ptr [r13+65E4h]
    vmulss  xmm2, xmm0, xmm10
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm12, xmm2, xmm1
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovd   xmm1, dword ptr [r13+65E4h]
    vmulss  xmm2, xmm0, xmm10
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm3, xmm2, xmm1
    vxorps  xmm13, xmm3, cs:__xmm@80000000800000008000000080000000
    vmovaps xmm2, xmm9; max
    vmovaps xmm1, xmm14; min
    vmovaps xmm0, xmm7; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovd   xmm1, dword ptr [r13+65E4h]
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm2, xmm0, xmm10
    vmulss  xmm14, xmm2, xmm1
  }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RSTICK_Y);
  __asm { vmovaps xmm6, xmm0 }
  CL_Input_GetClientLookInversion(localClientNum);
  __asm { vmulss  xmm6, xmm6, xmm0 }
  *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RSTICK_X);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@42652ee0
    vmovd   xmm2, dword ptr [r13+65E4h]
  }
  v123 = DVARFLT_cg_mlg_cam_smooth_factor;
  __asm
  {
    vcvtdq2ps xmm2, xmm2
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmulss  xmm6, xmm1, [rsp+128h+var_E0]
    vmulss  xmm2, xmm3, xmm2
    vmulss  xmm0, xmm2, [rsp+128h+var_E0]
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vmovss  [rsp+128h+keynum], xmm0
  }
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v123);
  __asm
  {
    vmovd   xmm0, dword ptr [r13+65E4h]
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, dword ptr [rbx+28h]; val
    vmovaps xmm2, xmm9; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm6, dword ptr [rsi+4Ch]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vmovss  xmm8, cs:__real@3f000000
    vmovss  xmm7, cs:__real@43b40000
    vmovaps xmm15, [rsp+128h+var_D8]
  }
  _R11 = &v192;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmm0
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm2, xmm4, xmm8
    vmovss  xmm2, xmm1, xmm2
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm0, xmm0, xmm7
    vmulss  xmm1, xmm0, xmm11
    vaddss  xmm10, xmm1, dword ptr [rsi+4Ch]
    vmovss  xmm0, [rsp+128h+keynum]
    vsubss  xmm0, xmm0, dword ptr [rsi+50h]
    vmulss  xmm4, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmovss  xmm4, dword ptr [rsi+54h]
    vmulss  xmm3, xmm4, cs:__real@bb360b61
    vmulss  xmm0, xmm1, xmm7
    vmulss  xmm2, xmm0, xmm11
    vaddss  xmm5, xmm2, dword ptr [rsi+50h]
    vmovss  dword ptr [rsi+10h], xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovss  dword ptr [rsi+14h], xmm13
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovss  dword ptr [rsi+18h], xmm14
    vmovaps xmm14, [rsp+128h+var_C8]
    vaddss  xmm1, xmm3, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vroundss xmm2, xmm9, xmm1, 1
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rsi+1Ch], xmm10
    vsubss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rsi+20h], xmm5
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmulss  xmm2, xmm1, xmm11
    vmovaps xmm11, xmmword ptr [r11-60h]
    vaddss  xmm3, xmm2, xmm4
    vmovss  dword ptr [rsi+24h], xmm3
    vmovss  dword ptr [rsi+4Ch], xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rsi+50h], xmm5
    vmovss  dword ptr [rsi+54h], xmm3
  }
}

/*
==============
CgMLGCameraManager::HandleMLGSpectatorCameraInputs
==============
*/
void CgMLGCameraManager::HandleMLGSpectatorCameraInputs(CgMLGCameraManager *this, cg_t *cgameGlob, usercmd_s *cmd)
{
  characterInfo_t *CharacterInfo; 
  CoDCasterCameraState v8; 
  int v24; 
  char v36; 
  int FocusedPlayer; 
  char v39; 
  playerState_s *ps; 
  ClActiveClientMP *ClientMP; 
  vec3_t outOrg; 

  _RSI = cmd;
  _RDI = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 91, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 92, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(_RDI, _RDI->clientNum);
  _RBP = CgMLGSpectator::GetCameraManager(_RDI->m_mlgSpectatorPtr);
  v8 = _RBP->m_mlgCurrentCameraState->GetCameraState(_RBP->m_mlgCurrentCameraState);
  if ( CharacterInfo->team == TEAM_SPECTATOR )
  {
    if ( v8 != SPECTATOR_ACTIVE )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+178C0h]
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vmovaps [rsp+98h+var_28], xmm10
        vxorps  xmm10, xmm10, xmm10
        vroundss xmm2, xmm10, xmm1, 1
        vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm0, xmm0, cs:__real@43b40000; value
      }
      _RSI->angles.v[0] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+178C4h]
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm10, xmm2, 1
        vsubss  xmm1, xmm4, xmm3
        vmulss  xmm0, xmm1, cs:__real@43b40000; value
        vmovss  xmm1, cs:__real@43340000; maxAbsValueSize
      }
      v24 = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
      __asm { vmovss  xmm1, cs:__real@43340000; maxAbsValueSize }
      _RSI->angles.v[1] = v24;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+178C8h]
        vmulss  xmm5, xmm0, cs:__real@3b360b61
        vaddss  xmm3, xmm5, cs:__real@3f000000
        vroundss xmm4, xmm10, xmm3, 1
        vsubss  xmm2, xmm5, xmm4
        vmulss  xmm0, xmm2, cs:__real@43b40000; value
      }
      _RSI->angles.v[2] = MSG_PackSignedFloat(*(float *)&_XMM0, *(float *)&_XMM1, 0x14u);
      RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+98h+outOrg]
        vmovss  xmm1, dword ptr [rsp+98h+outOrg+4]
        vmovss  dword ptr [rsi+0C0h], xmm0
        vmovss  xmm0, dword ptr [rsp+98h+outOrg+8]
        vmovss  dword ptr [rsi+0C8h], xmm0
        vmovss  dword ptr [rsi+0C4h], xmm1
        vcvttss2si ecx, dword ptr [rbp+20h]; val
      }
      v36 = I_clamp(_ECX, 60, 120);
      __asm { vmovaps xmm10, [rsp+98h+var_28] }
      _RSI->mlgSelectedAngle = v36;
    }
    FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(_RBP, (const LocalClientNum_t)_RDI->localClientNum);
    v39 = FocusedPlayer;
    if ( (unsigned int)(FocusedPlayer + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)FocusedPlayer, "signed", FocusedPlayer) )
      __debugbreak();
    _RSI->mlgSelectedLoc[0] = v39;
    _RSI->mlgSelectedLoc[1] = CgMLGCameraManager::GetMLGCameraType(_RBP, (const LocalClientNum_t)_RDI->localClientNum);
  }
  else
  {
    ps = _RDI->ps;
    if ( ps && CgMLGSpectator::GetMLGSpectatorClientInfo(_RDI->m_mlgSpectatorPtr, ps->clientNum)->mlgMessageSent )
    {
      ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)_RDI->localClientNum);
      ClientMP->snap.ps.pm_flags.m_flags[0] |= 0x10000u;
    }
  }
}

/*
==============
FreeCamActiveCameraState::HandleMovementsInternal
==============
*/
void FreeCamActiveCameraState::HandleMovementsInternal(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  unsigned int clviewangles_aab; 
  bool v28; 
  bool v29; 
  bool v30; 
  keyNum_t BoundKey; 
  vec3_t outOrg; 
  __int64 v67; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = this;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  __asm { vmovss  xmm8, dword ptr [rbx+6Ch] }
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  clviewangles_aab = ClientMP->clviewangles_aab;
  LODWORD(angles.v[0]) = LODWORD(ClientMP->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) + 2));
  LODWORD(angles.v[1]) = LODWORD(ClientMP->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) + 2));
  LODWORD(angles.v[2]) = ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) + 2)) ^ LODWORD(ClientMP->clViewangles.clViewangles.v[2]);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+angles]
    vaddss  xmm3, xmm0, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rbx+1Ch], xmm3
    vmovss  xmm1, dword ptr [rbp+57h+angles+4]
    vaddss  xmm0, xmm1, dword ptr [rbx+20h]
    vmovss  dword ptr [rbx+20h], xmm0
    vmovss  xmm2, dword ptr [rbp+57h+angles+8]
    vaddss  xmm1, xmm2, dword ptr [rbx+24h]
    vmovss  dword ptr [rbx+24h], xmm1
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+14h], xmm3
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  dword ptr [rax+18h], xmm0
    vmovss  xmm1, dword ptr [rbx+24h]
    vmovss  dword ptr [rax+1Ch], xmm1
  }
  _RCX = _RBX->m_cameraManager;
  _RCX->m_mlgTargetCameraAngles.v[0] = _RBX->m_updatedAngles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  dword ptr [rcx+34h], xmm0
    vmovss  xmm1, dword ptr [rbx+24h]
    vmovss  dword ptr [rcx+38h], xmm1
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vmovss  dword ptr [rbp+57h+angles], xmm0
    vmovss  xmm1, dword ptr [rbx+20h]
    vmovss  dword ptr [rbp+57h+angles+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+57h+angles+8], xmm0
  }
  AnglesToAxis(&angles, &axis);
  _RDI = &_RBX->m_updatedPos;
  v28 = &_RBX->m_updatedPos < &angles;
  v29 = &_RBX->m_updatedPos <= &angles;
  if ( &_RBX->m_updatedPos == &angles )
  {
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out");
    v28 = 0;
    v29 = !v30;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rdi+4]
    vmovss  xmm3, dword ptr [rdi]
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis]
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+18h]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm7, xmm2, dword ptr [rbp+57h+outOrg]
    vmovss  dword ptr [rbp+57h+outOrg], xmm7
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+4]
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis+10h]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, dword ptr [rbp+57h+axis+1Ch]
    vaddss  xmm2, xmm2, xmm1
    vaddss  xmm6, xmm2, dword ptr [rbp+57h+outOrg+4]
    vmovss  dword ptr [rbp+57h+outOrg+4], xmm6
    vmulss  xmm1, xmm3, dword ptr [rbp+57h+axis+8]
    vmulss  xmm0, xmm4, dword ptr [rbp+57h+axis+14h]
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm2, xmm5, dword ptr [rbp+57h+axis+20h]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm4, xmm0, dword ptr [rbp+57h+outOrg+8]
    vmovss  dword ptr [rbp+57h+outOrg+8], xmm4
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+8], xmm7
    vmovss  dword ptr [rax+0Ch], xmm6
    vmovss  dword ptr [rax+10h], xmm4
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vmovss  dword ptr [rax+24h], xmm7
    vmovss  dword ptr [rax+28h], xmm6
    vmovss  dword ptr [rax+2Ch], xmm4
    vaddss  xmm0, xmm8, dword ptr [rbx+28h]; val
    vmovss  xmm1, cs:__real@42820000; min
    vmovss  xmm2, cs:__real@42dc0000; max
    vcomiss xmm0, xmm2
  }
  if ( !v29 )
    goto LABEL_9;
  __asm { vcomiss xmm0, xmm1 }
  if ( v28 )
LABEL_9:
    _RBX->m_lastInputFoV = 0.0;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm6, xmm0
    vmovss  dword ptr [rbx+6Ch], xmm0
  }
  _RAX = _RBX->m_cameraManager;
  __asm { vmovss  dword ptr [rax+20h], xmm0 }
  BoundKey = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_PLAYERCARD, INVALID, 1);
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)BoundKey) )
  {
    _RDI = _RBX->m_cameraManager;
    *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
    __asm { vmovss  dword ptr [rdi+3Ch], xmm0 }
  }
  else
  {
    _RAX = _RBX->m_cameraManager;
    __asm { vmovss  dword ptr [rax+3Ch], xmm6 }
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v70;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CgMLGCameraManager::IsAerialCameraEnabled
==============
*/
_BOOL8 CgMLGCameraManager::IsAerialCameraEnabled(CgMLGCameraManager *this)
{
  return this->m_aerialCameraEnabled;
}

/*
==============
CgMLGCameraManager::IsAerialCameraTethered
==============
*/
bool CgMLGCameraManager::IsAerialCameraTethered(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  return CgMLGCameraManager::GetFocusedPlayer(this, localClientNum) > -1;
}

/*
==============
CgMLGCameraManager::LoadMLGFreeCamPoses
==============
*/
void CgMLGCameraManager::LoadMLGFreeCamPoses(CgMLGCameraManager *this, const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CgMLGCameraManager::MemorizeCurrentCameraPose
==============
*/
void CgMLGCameraManager::MemorizeCurrentCameraPose(CgMLGCameraManager *this)
{
  this->m_mlgMemorizedFreeCamPose.pos = this->m_mlgCurrentCameraPos;
  this->m_mlgMemorizedFreeCamPose.angles = this->m_mlgCurrentCameraAngles;
  this->m_mlgMemorizedFreeCamPose.fov = this->m_mlgCurrentCameraFoV;
  this->m_mlgMemorizedFreeCamPose.hasBeenSet = 1;
}

/*
==============
CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPreset
==============
*/
void CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPreset(CgMLGCameraManager *this, int mapIndex, int poseIndex)
{
  __int64 v3; 
  __int64 v5; 
  CameraPose *v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = poseIndex;
  v5 = mapIndex;
  if ( (unsigned int)poseIndex >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, 20) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0x80 )
  {
    LODWORD(v8) = 128;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v6 = &this->m_mlgFreeCamPoses[v5][v3];
  v6->pos.v[0] = this->m_mlgCurrentCameraPos.v[0];
  v6->pos.v[1] = this->m_mlgCurrentCameraPos.v[1];
  v6->pos.v[2] = this->m_mlgCurrentCameraPos.v[2];
  v6->angles.v[0] = this->m_mlgCurrentCameraAngles.v[0];
  v6->angles.v[1] = this->m_mlgCurrentCameraAngles.v[1];
  v6->angles.v[2] = this->m_mlgCurrentCameraAngles.v[2];
  v6->fov = this->m_mlgCurrentCameraFoV;
  v6->hasBeenSet = 1;
}

/*
==============
CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap
==============
*/
void CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap(CgMLGCameraManager *this, int poseIndex)
{
  __int64 v2; 
  const dvar_t *v4; 
  __int64 v5; 
  CameraPose *v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 
  int index; 

  v2 = poseIndex;
  if ( (unsigned int)poseIndex >= 0x14 )
  {
    v10 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 333, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, v10) )
      __debugbreak();
  }
  v4 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( Com_GameInfo_GetMapIndexForLoadName(v4->current.string, &index) )
  {
    v5 = index;
    if ( (unsigned int)v2 >= 0x14 )
    {
      LODWORD(v9) = 20;
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= 0x80 )
    {
      LODWORD(v9) = 128;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    v6 = &this->m_mlgFreeCamPoses[v5][v2];
    v6->pos.v[0] = this->m_mlgCurrentCameraPos.v[0];
    v6->pos.v[1] = this->m_mlgCurrentCameraPos.v[1];
    v6->pos.v[2] = this->m_mlgCurrentCameraPos.v[2];
    v6->angles.v[0] = this->m_mlgCurrentCameraAngles.v[0];
    v6->angles.v[1] = this->m_mlgCurrentCameraAngles.v[1];
    v6->angles.v[2] = this->m_mlgCurrentCameraAngles.v[2];
    v6->fov = this->m_mlgCurrentCameraFoV;
    v6->hasBeenSet = 1;
  }
}

/*
==============
CgMLGCameraManager::RestoreMemorizedCameraPose
==============
*/
void CgMLGCameraManager::RestoreMemorizedCameraPose(CgMLGCameraManager *this)
{
  float v2; 
  float v6; 
  float v8; 

  if ( this->m_mlgMemorizedFreeCamPose.hasBeenSet )
  {
    __asm { vmovsd  xmm0, qword ptr [rcx+14040h] }
    v2 = this->m_mlgMemorizedFreeCamPose.pos.v[2];
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+14058h]
      vmovsd  qword ptr [rcx+8], xmm0
      vmovsd  xmm0, qword ptr [rcx+1404Ch]
      vmovsd  qword ptr [rcx+14h], xmm0
      vmovsd  xmm0, qword ptr [rcx+14040h]
    }
    this->m_mlgCurrentCameraPos.v[2] = v2;
    v6 = this->m_mlgMemorizedFreeCamPose.angles.v[2];
    __asm
    {
      vmovsd  qword ptr [rcx+24h], xmm0
      vmovsd  xmm0, qword ptr [rcx+1404Ch]
    }
    this->m_mlgCurrentCameraAngles.v[2] = v6;
    this->m_mlgTargetCameraPos.v[2] = this->m_mlgMemorizedFreeCamPose.pos.v[2];
    v8 = this->m_mlgMemorizedFreeCamPose.angles.v[2];
    __asm { vmovsd  qword ptr [rcx+30h], xmm0 }
    this->m_mlgTargetCameraAngles.v[2] = v8;
    __asm
    {
      vmovss  dword ptr [rcx+20h], xmm1
      vmovss  dword ptr [rcx+3Ch], xmm1
    }
  }
}

/*
==============
CgMLGCameraManager::SaveMLGFreeCamPoses
==============
*/
void CgMLGCameraManager::SaveMLGFreeCamPoses(CgMLGCameraManager *this)
{
  ;
}

/*
==============
CgMLGCameraManager::SetAerialCameraEnabled
==============
*/
void CgMLGCameraManager::SetAerialCameraEnabled(CgMLGCameraManager *this, const bool aerialCameraEnabled)
{
  this->m_aerialCameraEnabled = aerialCameraEnabled;
}

/*
==============
CgMLGCameraManager::SetAerialMaxHeight
==============
*/

void __fastcall CgMLGCameraManager::SetAerialMaxHeight(CgMLGCameraManager *this, double maxHeight)
{
  __asm { vmovss  dword ptr [rcx+14070h], xmm1 }
}

/*
==============
CgMLGCameraManager::SetAerialMinHeight
==============
*/

void __fastcall CgMLGCameraManager::SetAerialMinHeight(CgMLGCameraManager *this, double minHeight)
{
  __asm { vmovss  dword ptr [rcx+1406Ch], xmm1 }
}

/*
==============
CgMLGCameraManager::SetFocusedClient
==============
*/
void CgMLGCameraManager::SetFocusedClient(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const int focusedClient)
{
  cg_t *LocalClientGlobals; 
  const char *v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = j_va("setmlgcamerafocusedclient %i %i\n", (unsigned int)LocalClientGlobals->clientNum, (unsigned int)focusedClient);
  Cbuf_AddText(localClientNum, v7);
  this->m_localFocusedPlayer = focusedClient;
}

/*
==============
CgMLGCameraManager::SetMLGCameraType
==============
*/
void CgMLGCameraManager::SetMLGCameraType(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const CoDCasterCameraType cameraType)
{
  unsigned int v4; 
  cg_t *LocalClientGlobals; 
  const char *v7; 

  v4 = (unsigned __int8)cameraType;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = j_va("setmlgcameratype %i %i\n", (unsigned int)LocalClientGlobals->clientNum, v4);
  Cbuf_AddText(localClientNum, v7);
  this->m_localCameraType = v4;
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraAngles
==============
*/
void CgMLGCameraManager::SetMLGCurrentCameraAngles(CgMLGCameraManager *this, const vec3_t *angles)
{
  this->m_mlgCurrentCameraAngles = *angles;
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraFoV
==============
*/

void __fastcall CgMLGCameraManager::SetMLGCurrentCameraFoV(CgMLGCameraManager *this, double fov)
{
  __asm { vmovss  dword ptr [rcx+20h], xmm1 }
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraPosition
==============
*/
void CgMLGCameraManager::SetMLGCurrentCameraPosition(CgMLGCameraManager *this, const vec3_t *pos)
{
  this->m_mlgCurrentCameraPos = *pos;
}

/*
==============
CgMLGCameraManager::SetMLGCurrentCameraState
==============
*/
void CgMLGCameraManager::SetMLGCurrentCameraState(CgMLGCameraManager *this, const CoDCasterCameraState *state)
{
  float v5; 
  float v7; 
  int v8; 
  int v9; 

  _RBX = this;
  if ( *state >= CAMERA_STATE_COUNT )
  {
    v9 = 6;
    v8 = *(unsigned __int8 *)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( CoDCasterCameraState::CAMERA_STATE_COUNT )", "state doesn't index CoDCasterCameraState::CAMERA_STATE_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( *state != (unsigned __int8)_RBX->m_mlgCurrentCameraState->GetCameraState(_RBX->m_mlgCurrentCameraState) )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+14h] }
    v5 = _RBX->m_mlgCurrentCameraAngles.v[2];
    __asm
    {
      vmovsd  qword ptr [rbx+30h], xmm0
      vmovsd  xmm0, qword ptr [rbx+8]
    }
    _RBX->m_mlgTargetCameraAngles.v[2] = v5;
    v7 = _RBX->m_mlgCurrentCameraPos.v[2];
    __asm { vmovsd  qword ptr [rbx+24h], xmm0 }
    _RBX->m_mlgTargetCameraPos.v[2] = v7;
    _RBX->m_mlgCurrentCameraState = CgMLGCameraManager::GetCameraState(_RBX, state);
  }
}

/*
==============
CgMLGCameraManager::SetMLGFreeCamPose
==============
*/
void CgMLGCameraManager::SetMLGFreeCamPose(CgMLGCameraManager *this, int mapIndex, int poseIndex, const CameraPose *pose)
{
  __int64 v4; 
  __int64 v6; 
  CameraPose *v8; 
  __int64 v9; 
  __int64 v10; 

  v4 = poseIndex;
  v6 = mapIndex;
  if ( (unsigned int)poseIndex >= 0x14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, 20) )
    __debugbreak();
  if ( (unsigned int)v6 >= 0x80 )
  {
    LODWORD(v10) = 128;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v8 = &this->m_mlgFreeCamPoses[v6][v4];
  v8->pos.v[0] = pose->pos.v[0];
  v8->pos.v[1] = pose->pos.v[1];
  v8->pos.v[2] = pose->pos.v[2];
  v8->angles.v[0] = pose->angles.v[0];
  v8->angles.v[1] = pose->angles.v[1];
  v8->angles.v[2] = pose->angles.v[2];
  v8->fov = pose->fov;
  v8->hasBeenSet = 1;
}

/*
==============
CgMLGCameraManager::SetMLGFreeCamPoseForCurrentMap
==============
*/
void CgMLGCameraManager::SetMLGFreeCamPoseForCurrentMap(CgMLGCameraManager *this, int poseIndex, const CameraPose *pose)
{
  __int64 v3; 
  const dvar_t *v6; 
  __int64 v7; 
  CameraPose *v8; 
  __int64 v9; 
  __int64 v11; 
  int v12; 
  int index; 

  v3 = poseIndex;
  if ( (unsigned int)poseIndex >= 0x14 )
  {
    v12 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", poseIndex, v12) )
      __debugbreak();
  }
  v6 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( Com_GameInfo_GetMapIndexForLoadName(v6->current.string, &index) )
  {
    v7 = index;
    if ( (unsigned int)v3 >= 0x14 )
    {
      LODWORD(v11) = 20;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 390, ASSERT_TYPE_ASSERT, "(unsigned)( poseIndex ) < (unsigned)( CAMERA_PRESETS_COUNT )", "poseIndex doesn't index CAMERA_PRESETS_COUNT\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= 0x80 )
    {
      LODWORD(v11) = 128;
      LODWORD(v9) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 391, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( 128 )", "mapIndex doesn't index MAX_MAPS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    v8 = &this->m_mlgFreeCamPoses[v7][v3];
    v8->pos.v[0] = pose->pos.v[0];
    v8->pos.v[1] = pose->pos.v[1];
    v8->pos.v[2] = pose->pos.v[2];
    v8->angles.v[0] = pose->angles.v[0];
    v8->angles.v[1] = pose->angles.v[1];
    v8->angles.v[2] = pose->angles.v[2];
    v8->fov = pose->fov;
    v8->hasBeenSet = 1;
  }
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraAngles
==============
*/
void CgMLGCameraManager::SetMLGTargetCameraAngles(CgMLGCameraManager *this, const vec3_t *angles)
{
  this->m_mlgTargetCameraAngles = *angles;
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraFoV
==============
*/

void __fastcall CgMLGCameraManager::SetMLGTargetCameraFoV(CgMLGCameraManager *this, double fov)
{
  __asm { vmovss  dword ptr [rcx+3Ch], xmm1 }
}

/*
==============
CgMLGCameraManager::SetMLGTargetCameraPosition
==============
*/
void CgMLGCameraManager::SetMLGTargetCameraPosition(CgMLGCameraManager *this, const vec3_t *pos)
{
  this->m_mlgTargetCameraPos = *pos;
}

/*
==============
CgMLGCameraManager::SetMemorizedCameraPose
==============
*/
void CgMLGCameraManager::SetMemorizedCameraPose(CgMLGCameraManager *this, const CameraPose *pose)
{
  *(_QWORD *)this->m_mlgMemorizedFreeCamPose.pos.v = *(_QWORD *)pose->pos.v;
  this->m_mlgMemorizedFreeCamPose.pos.v[2] = pose->pos.v[2];
  this->m_mlgMemorizedFreeCamPose.angles = pose->angles;
  this->m_mlgMemorizedFreeCamPose.fov = pose->fov;
  this->m_mlgMemorizedFreeCamPose.hasBeenSet = 1;
}

/*
==============
CgMLGCameraManager::SetShouldRenderThirdPerson
==============
*/
void CgMLGCameraManager::SetShouldRenderThirdPerson(CgMLGCameraManager *this, bool shouldRenderThirdPerson)
{
  this->m_shouldRenderThirdPerson = shouldRenderThirdPerson;
}

/*
==============
CgMLGCameraManager::ShouldRenderThirdPerson
==============
*/
_BOOL8 CgMLGCameraManager::ShouldRenderThirdPerson(CgMLGCameraManager *this)
{
  return this->m_shouldRenderThirdPerson;
}

/*
==============
AerialCamActiveCameraState::StartVFXInternal
==============
*/
void AerialCamActiveCameraState::StartVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const int clientNum)
{
  __int64 v6; 
  ParticleSystem *v8; 
  __int64 v10; 
  ParticleSystemHandle v11; 
  unsigned int v12; 
  __int64 v13; 
  ParticleSystem *v14; 
  __int64 v15; 
  ParticleManager *ParticleManager; 
  unsigned int v18; 
  unsigned int v19; 
  const DObj *v20; 
  scr_string_t j_base; 
  const characterInfo_t *CharacterInfo; 
  unsigned int boneIndex; 
  ParticleManager *v44; 
  ParticleSystemHandle v49; 
  __int64 v50; 
  __int64 v51; 
  team_t team; 
  unsigned __int8 v53; 
  __int64 spawnTimeMsec; 
  int spawnTimeMseca; 
  ParticleSystemFlags particleSystemFlags; 
  int dobjHandle; 
  unsigned __int8 inOutIndex[8]; 
  int modelIndex; 
  cg_t *cgGlobals; 
  __int64 v64; 
  vec3_t angles; 
  float4 emitterOrientationQuat; 
  vec4_t out; 
  float4 emitterPos; 
  tmat33_t<vec3_t> axis; 

  v6 = clientNum;
  v8 = NULL;
  v10 = (__int64)(int)localClientNum << 12;
  v11 = this->m_arrowFx[clientNum];
  v64 = v10;
  v12 = 0;
  if ( g_particleSystemsGeneration[v10 + (v11 & 0xFFF)].__all32 == v11 )
    v12 = v11 & 0xFFF;
  v13 = v12;
  v14 = NULL;
  v15 = v10 + v13;
  if ( g_particleSystems[0][v15] >= (ParticleSystem *)0x1000 )
    v14 = g_particleSystems[0][v15];
  if ( v14 && v11 )
  {
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::StopSystem(ParticleManager, this->m_arrowFx[v6]);
    this->m_arrowFx[v6] = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  cgGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !cgGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1751, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RSI = CG_GetEntity(localClientNum, v6);
  if ( _RSI )
  {
    if ( (unsigned int)v6 > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v6) )
      __debugbreak();
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(particleSystemFlags) = 2;
      LODWORD(spawnTimeMsec) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, particleSystemFlags) )
        __debugbreak();
    }
    v18 = v6 + 2533 * localClientNum;
    if ( v18 >= 0x13CA )
    {
      LODWORD(particleSystemFlags) = v6 + 2533 * localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", particleSystemFlags) )
        __debugbreak();
    }
    v19 = clientObjMap[v18];
    if ( v19 )
    {
      if ( v19 >= (unsigned int)s_objCount )
      {
        LODWORD(particleSystemFlags) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", particleSystemFlags) )
          __debugbreak();
      }
      v20 = (const DObj *)s_objBuf[v19];
      if ( v20 )
      {
        j_base = scr_const.j_base;
        if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
          __debugbreak();
        __asm
        {
          vmovaps [rsp+150h+var_40], xmm6
          vmovaps [rsp+150h+var_50], xmm7
          vmovaps [rsp+150h+var_60], xmm8
        }
        inOutIndex[0] = -2;
        if ( DObjGetBoneIndexInternal_75(v20, j_base, inOutIndex, &modelIndex) && (_RAX = CG_DObjGetLocalBoneMatrix(&_RSI->pose, v20, inOutIndex[0])) != NULL )
        {
          _RCX = g_activeRefDef;
          __asm
          {
            vmovss  xmm1, dword ptr [rax+14h]
            vmovss  xmm0, dword ptr [rcx+7Ch]
            vaddss  xmm6, xmm0, dword ptr [rax+10h]
            vmovss  xmm0, dword ptr [rax+18h]
            vaddss  xmm8, xmm0, dword ptr [rcx+84h]
            vaddss  xmm7, xmm1, dword ptr [rcx+80h]
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vxorps  xmm7, xmm7, xmm7
            vxorps  xmm8, xmm8, xmm8
          }
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rsi+48h]
          vmovss  dword ptr [rbp+50h+angles], xmm2
          vmovss  xmm0, dword ptr [rsi+4Ch]
          vmovss  dword ptr [rbp+50h+angles+4], xmm0
          vmovss  xmm1, dword ptr [rsi+50h]
          vmovss  dword ptr [rbp+50h+angles+8], xmm1
          vmovss  [rsp+150h+modelIndex], xmm2
        }
        if ( _fdtest((float *)&modelIndex) == 2 )
          goto LABEL_47;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+50h+angles+4]
          vmovss  [rsp+150h+modelIndex], xmm0
        }
        if ( _fdtest((float *)&modelIndex) == 2 )
          goto LABEL_47;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+50h+angles+8]
          vmovss  [rsp+150h+modelIndex], xmm0
        }
        if ( _fdtest((float *)&modelIndex) == 2 )
          goto LABEL_47;
        AnglesToAxis(&angles, &axis);
        AxisToQuat(&axis, &out);
        CharacterInfo = CG_GetCharacterInfo(cgGlobals, v6);
        boneIndex = DObjGetNextBoneIndex(v20, scr_const.tag_sync, 0xFEu);
        emitterOrientationQuat.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp-70h]
          vmovss  xmm0, xmm0, xmm6
          vinsertps xmm0, xmm0, xmm7, 10h
          vinsertps xmm0, xmm0, xmm8, 20h ; ' '
          vmovups xmmword ptr [rbp-70h], xmm0
          vmovups xmmword ptr [rbp+50h+emitterPos.v], xmm0
        }
        v44 = ParticleManager::GetParticleManager(localClientNum);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+50h+out]
          vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+4], 50h+var_40
          vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+8], 20h
          vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+0Ch], 30h
        }
        dobjHandle = v20->entnum - 1;
        spawnTimeMseca = cgGlobals->time;
        __asm { vmovups xmmword ptr [rbp+50h+emitterOrientationQuat.v], xmm0 }
        v49 = ParticleManager::AddSystem(v44, localClientNum, cgMedia.fxMlgArrow.m_particleSystemDef, &emitterPos, &emitterOrientationQuat, spawnTimeMseca, (ParticleSystemFlags)0x1000000000i64, dobjHandle, boneIndex, NULL, NULL, NULL);
        v50 = v49 & 0xFFF;
        if ( g_particleSystemsGeneration[v64 + v50].__all32 != v49 )
          v50 = 0i64;
        v51 = v64 + v50;
        if ( g_particleSystems[0][v51] >= (ParticleSystem *)0x1000 )
          v8 = g_particleSystems[0][v51];
        if ( v8 )
        {
          team = CharacterInfo->team;
          if ( team == TEAM_TWO )
          {
            v53 = 1;
LABEL_45:
            ParticleSystem::SetGlobalTintIndex(v8, v53);
            goto LABEL_46;
          }
          if ( team == TEAM_ONE )
          {
            v53 = 2;
            goto LABEL_45;
          }
        }
LABEL_46:
        this->m_arrowFx[v6] = v49;
LABEL_47:
        __asm
        {
          vmovaps xmm7, [rsp+150h+var_50]
          vmovaps xmm6, [rsp+150h+var_40]
          vmovaps xmm8, [rsp+150h+var_60]
        }
      }
    }
  }
}

/*
==============
AerialCamActiveCameraState::StopVFXInternal
==============
*/
void AerialCamActiveCameraState::StopVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const int clientNum)
{
  ParticleSystemHandle *v3; 
  ParticleManager *ParticleManager; 

  v3 = &this->m_arrowFx[clientNum];
  if ( *v3 )
  {
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::StopSystem(ParticleManager, *v3);
    *v3 = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
SpectatorEnteringCameraState::TrySpectateClient
==============
*/
char SpectatorEnteringCameraState::TrySpectateClient(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum, const int followedClient, vec3_t *outTargetPosition, vec3_t *outTargetAngles, float *outTargetFoV)
{
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  _R14 = outTargetAngles;
  _RBP = outTargetPosition;
  _R15 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CG_MLG_TryGetClientPose(localClientNum, followedClient, _RBP, outTargetAngles, outTargetFoV) )
    return 0;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+98h+angles], xmm1
    vmovss  dword ptr [rsp+98h+angles+4], xmm0
    vmovss  dword ptr [rsp+98h+angles+8], xmm1
  }
  AnglesToAxis(&angles, &axis);
  __asm
  {
    vmovss  xmm5, dword ptr [r15+1F0h]
    vmovss  xmm4, cs:__real@41200000
    vmulss  xmm2, xmm5, dword ptr [rsp+98h+axis+18h]
    vmulss  xmm0, xmm4, dword ptr [rsp+98h+axis]
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm3, xmm2, dword ptr [rbp+0]
    vmulss  xmm2, xmm4, dword ptr [rsp+98h+axis+4]
    vmovss  dword ptr [rbp+0], xmm3
    vmulss  xmm3, xmm5, dword ptr [rsp+98h+axis+1Ch]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rbp+4]
    vmulss  xmm2, xmm4, dword ptr [rsp+98h+axis+8]
    vmovss  dword ptr [rbp+4], xmm3
    vmulss  xmm3, xmm5, dword ptr [rsp+98h+axis+20h]
    vaddss  xmm0, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rbp+8], xmm3
  }
  return 1;
}

/*
==============
AerialCamActiveCameraState::UpdateGroundPosition
==============
*/
void AerialCamActiveCameraState::UpdateGroundPosition(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob)
{
  int FocusedPlayer; 
  bool v8; 
  bool v9; 
  bool v10; 
  char v11; 
  int v12; 
  int v13; 
  centity_t *ClientEntity; 
  bool v15; 
  CgMLGSpectator *MLGSpectator; 
  float outHeight; 
  vec3_t outPosition; 

  _RDI = this;
  FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
  v10 = __OFSUB__(FocusedPlayer, -1);
  v8 = FocusedPlayer == -1;
  v9 = FocusedPlayer + 1 < 0;
  LOBYTE(FocusedPlayer) = _RDI->m_lastLockStatus;
  v11 = !(v9 ^ v10 | v8);
  _RDI->m_lastLockStatus = v11;
  if ( (_BYTE)FocusedPlayer != v11 )
  {
    if ( v9 ^ v10 | v8 )
      goto LABEL_16;
    *(_QWORD *)_RDI->m_currentOffset.v = 0i64;
    _RDI->m_elapsedTransitionTime = 0.0;
  }
  if ( !(v9 ^ v10 | v8) )
  {
    v12 = CgMLGCameraManager::GetFocusedPlayer(_RDI->m_cameraManager, localClientNum);
    _RDI->m_focusOnBarycenter = 0;
    v13 = v12;
    if ( v12 != cgameGlob->clientNum )
    {
      if ( v12 != -1 )
      {
        ClientEntity = CG_MLG_GetClientEntity(localClientNum, v12);
        if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v15 = _RDI->m_lastFollowedClientNum != v13, CG_GetPoseOrigin(&ClientEntity->pose, &_RDI->m_groundPosition), v15) )
        {
          *(_QWORD *)_RDI->m_currentOffset.v = 0i64;
          _RDI->m_elapsedTransitionTime = 0.0;
        }
        else
        {
          MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
          if ( !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v13) )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vucomiss xmm0, dword ptr [rdi+28h]
              vucomiss xmm0, dword ptr [rdi+2Ch]
            }
          }
        }
      }
      _RDI->m_lastFollowedClientNum = v13;
    }
    return;
  }
LABEL_16:
  if ( _RDI->m_focusOnBarycenter )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rsp+58h+outPosition], xmm0
      vmovss  dword ptr [rsp+58h+outPosition+4], xmm0
      vmovss  dword ptr [rsp+58h+outPosition+8], xmm0
      vmovss  [rsp+58h+outHeight], xmm0
    }
    if ( CG_GetPlayersBarycenter(localClientNum, &outPosition, &outHeight) )
    {
      __asm
      {
        vmovss  xmm0, [rsp+58h+outHeight]
        vmovss  xmm1, dword ptr [rsp+58h+outPosition]
        vmovss  dword ptr [rdi+30h], xmm0
        vmovss  xmm0, dword ptr [rsp+58h+outPosition+4]
        vmovss  dword ptr [rdi+40h], xmm1
        vmovss  xmm1, dword ptr [rsp+58h+outPosition+8]
        vmovss  dword ptr [rdi+48h], xmm1
        vmovss  dword ptr [rdi+44h], xmm0
      }
    }
  }
}

/*
==============
CgMLGCameraManager::UpdateMLGCameraState
==============
*/
CameraStateInterface *CgMLGCameraManager::UpdateMLGCameraState(CgMLGCameraManager *this, const LocalClientNum_t localClientNum, const CoDCasterCameraState *state)
{
  CameraStateInterface *m_mlgCurrentCameraState; 
  CameraStateInterface *v8; 
  float v10; 
  float v12; 
  CameraStateInterface *v13; 
  int v14; 
  int v15; 

  _RBX = this;
  m_mlgCurrentCameraState = this->m_mlgCurrentCameraState;
  if ( m_mlgCurrentCameraState && *state == (unsigned __int8)m_mlgCurrentCameraState->GetCameraState(m_mlgCurrentCameraState) )
    return _RBX->m_mlgCurrentCameraState;
  v8 = _RBX->m_mlgCurrentCameraState;
  if ( v8 )
    v8->ExitState(v8, localClientNum);
  if ( *state >= CAMERA_STATE_COUNT )
  {
    v15 = 6;
    v14 = *(unsigned __int8 *)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( CoDCasterCameraState::CAMERA_STATE_COUNT )", "state doesn't index CoDCasterCameraState::CAMERA_STATE_COUNT\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( *state != (unsigned __int8)_RBX->m_mlgCurrentCameraState->GetCameraState(_RBX->m_mlgCurrentCameraState) )
  {
    __asm { vmovsd  xmm0, qword ptr [rbx+14h] }
    v10 = _RBX->m_mlgCurrentCameraAngles.v[2];
    __asm
    {
      vmovsd  qword ptr [rbx+30h], xmm0
      vmovsd  xmm0, qword ptr [rbx+8]
    }
    _RBX->m_mlgTargetCameraAngles.v[2] = v10;
    v12 = _RBX->m_mlgCurrentCameraPos.v[2];
    __asm { vmovsd  qword ptr [rbx+24h], xmm0 }
    _RBX->m_mlgTargetCameraPos.v[2] = v12;
    _RBX->m_mlgCurrentCameraState = CgMLGCameraManager::GetCameraState(_RBX, state);
  }
  v13 = _RBX->m_mlgCurrentCameraState;
  if ( v13 )
  {
    v13->EnterState(v13, localClientNum);
    return _RBX->m_mlgCurrentCameraState;
  }
  return v13;
}

/*
==============
AerialCamActiveCameraState::UpdatePositionInternal
==============
*/
void AerialCamActiveCameraState::UpdatePositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  char v49; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v100; 
  const dvar_t *v108; 
  _BYTE v142[32]; 
  __int64 v150; 
  __int64 v152; 
  float v154; 
  int v156; 
  char v157; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RBX = this;
  _RCX = this->m_cameraManager;
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovsd  xmm11, qword ptr [rcx+8]
    vucomiss xmm11, xmm9
    vmovsd  xmm0, qword ptr [rcx+14h]
    vmovsd  xmm6, qword ptr [rcx+24h]
  }
  *(float *)&_RAX = _RCX->m_mlgCurrentCameraAngles.v[2];
  __asm
  {
    vmovss  xmm14, dword ptr [rcx+20h]
    vmovsd  [rbp+60h+var_D8], xmm0
    vmovsd  xmm0, qword ptr [rcx+30h]
    vmovsd  qword ptr [rsp+160h+var_F8], xmm0
    vmovss  xmm0, dword ptr [rcx+3Ch]
  }
  v156 = (int)_RAX;
  *(float *)&v150 = _RCX->m_mlgCurrentCameraPos.v[2];
  *(float *)&_RAX = _RCX->m_mlgTargetCameraPos.v[2];
  __asm
  {
    vmovss  xmm13, dword ptr [rsp+160h+var_100]
    vmovss  [rsp+160h+var_120], xmm0
  }
  v154 = *(float *)&_RAX;
  __asm { vmovss  xmm8, [rbp+60h+var_E0] }
  *(float *)&_RAX = _RCX->m_mlgTargetCameraAngles.v[2];
  __asm
  {
    vsubss  xmm2, xmm6, xmm11
    vmovsd  [rsp+160h+var_E8], xmm6
    vmovss  xmm7, dword ptr [rsp+160h+var_E8+4]
    vmovsd  qword ptr [rsp+160h+var_108], xmm11
    vmovss  xmm12, [rsp+160h+var_104]
    vsubss  xmm0, xmm7, xmm12
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vsubss  xmm3, xmm8, xmm13
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vmovss  [rsp+160h+var_11C], xmm14
    vmovss  [rsp+160h+var_118], xmm7
    vmovss  [rsp+160h+var_114], xmm8
  }
  LODWORD(v152) = (_DWORD)_RAX;
  if ( (unsigned __int64)v142 == _security_cookie )
  {
    __asm { vucomiss xmm12, xmm9 }
    if ( (unsigned __int64)v142 == _security_cookie )
    {
      __asm { vucomiss xmm13, xmm9 }
      if ( (unsigned __int64)v142 == _security_cookie )
      {
        *(float *)&v150 = _RCX->m_mlgTargetCameraPos.v[2];
        __asm
        {
          vmovss  xmm13, dword ptr [rsp+160h+var_100]
          vmovsd  qword ptr [rsp+160h+var_108], xmm6
          vmovss  xmm11, [rsp+160h+var_108]
          vshufps xmm12, xmm6, xmm6, 55h ; 'U'
        }
      }
    }
  }
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vcomiss xmm4, xmm10
    vmovss  xmm3, dword ptr [rbx+18h]
    vmovss  xmm4, dword ptr [rbx+4Ch]
    vcomiss xmm3, xmm4
  }
  if ( (unsigned __int64)v142 != _security_cookie )
  {
    __asm
    {
      vmovss  xmm15, dword ptr [rsp+160h+var_F0]
      vmovss  xmm8, [rsp+160h+var_F4]
      vmovss  xmm7, [rsp+160h+var_F8]
    }
  }
  else
  {
    __asm { vucomiss xmm3, xmm9 }
    if ( (unsigned __int64)v142 == _security_cookie )
    {
      *(double *)&_XMM0 = CG_MLG_GetTransitionDuration(localClientNum);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+18h]
        vmovss  dword ptr [rbx+4Ch], xmm0
        vmovaps xmm4, xmm0
      }
    }
    __asm
    {
      vunpcklps xmm0, xmm9, xmm9
      vmovsd  qword ptr [rbx+1Ch], xmm0
      vmovss  [rbp+60h+var_E0], xmm9
      vdivss  xmm0, xmm3, xmm4; val
      vmovaps xmm2, xmm10; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    _RBX->m_lastInputVector.v[2] = v154;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm15, cs:__real@3f000000
      vcomiss xmm0, xmm15
      vmulss  xmm1, xmm0, cs:__real@40000000
      vmovaps xmm2, xmm0
    }
    if ( v49 )
    {
      __asm { vmulss  xmm14, xmm1, xmm0 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:__real@40800000
        vsubss  xmm1, xmm0, xmm1
        vmulss  xmm2, xmm1, xmm2
        vsubss  xmm14, xmm2, xmm10
      }
    }
    __asm
    {
      vsubss  xmm0, xmm6, xmm11
      vmovss  xmm6, cs:__real@43b40000
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, xmm11
      vmovsd  qword ptr [rsp+160h+var_108], xmm2
      vsubss  xmm2, xmm7, xmm12
      vmovss  xmm7, cs:__real@3b360b61
      vmulss  xmm0, xmm2, xmm14
      vaddss  xmm0, xmm0, xmm12
      vmovss  [rsp+160h+var_118], xmm0
      vsubss  xmm1, xmm8, xmm13
      vmulss  xmm2, xmm1, xmm14
      vaddss  xmm0, xmm2, xmm13
      vmovss  [rsp+160h+var_114], xmm0
      vmovss  xmm0, [rsp+160h+var_F8]
      vsubss  xmm1, xmm0, dword ptr [rbp+60h+var_D8]
      vmulss  xmm3, xmm1, xmm7
      vaddss  xmm1, xmm3, xmm15
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm2, xmm8, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm6
      vmulss  xmm1, xmm0, xmm14
      vaddss  xmm2, xmm1, dword ptr [rbp+60h+var_D8]
      vmovss  xmm0, [rsp+160h+var_F4]
      vsubss  xmm1, xmm0, dword ptr [rbp+60h+var_D8+4]
      vmulss  xmm4, xmm1, xmm7
      vmovss  dword ptr [rsp+160h+var_110], xmm2
      vaddss  xmm2, xmm4, xmm15
      vroundss xmm3, xmm8, xmm2, 1
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [rsp+160h+var_F0]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, [rbp+60h+var_D0]
      vaddss  xmm3, xmm2, dword ptr [rbp+60h+var_D8+4]
      vmulss  xmm4, xmm1, xmm7
      vmovss  xmm7, dword ptr [rsp+160h+var_110]
      vaddss  xmm2, xmm4, xmm15
      vmovss  dword ptr [rsp+160h+var_110+4], xmm3
      vroundss xmm3, xmm8, xmm2, 1
      vmovss  xmm8, dword ptr [rsp+160h+var_110+4]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm6
      vmovsd  xmm6, qword ptr [rsp+160h+var_108]
      vmulss  xmm2, xmm1, xmm14
      vmulss  xmm1, xmm14, [rsp+160h+var_120]
      vaddss  xmm15, xmm2, [rbp+60h+var_D0]
      vsubss  xmm0, xmm10, xmm14
      vmulss  xmm2, xmm0, [rsp+160h+var_11C]
      vmovss  xmm14, [rsp+160h+var_11C]
      vaddss  xmm0, xmm2, xmm1
      vmovss  [rsp+160h+var_120], xmm0
    }
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v100 = DVARFLT_cg_mlg_cam_smooth_factor;
  _RSI = LocalClientGlobals;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v100);
  __asm
  {
    vmovd   xmm0, dword ptr [rsi+65E4h]
    vcvtdq2ps xmm0, xmm0
    vmulss  xmm0, xmm0, dword ptr [rdi+28h]; val
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  xmm3, [rsp+160h+var_118] }
  v108 = DVARFLT_cg_mlg_cam_smooth_factor;
  __asm
  {
    vsubss  xmm1, xmm6, xmm11
    vmulss  xmm2, xmm1, xmm0
    vaddss  xmm6, xmm2, xmm11
    vmovss  xmm2, [rsp+160h+var_114]
    vsubss  xmm3, xmm3, xmm12
    vmulss  xmm1, xmm3, xmm0
    vsubss  xmm2, xmm2, xmm13
    vmulss  xmm0, xmm2, xmm0
    vaddss  xmm11, xmm1, xmm12
    vaddss  xmm12, xmm0, xmm13
  }
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v108);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
    vmulss  xmm0, xmm0, dword ptr [rdi+28h]; val
    vmovaps xmm2, xmm10; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vsubss  xmm1, xmm10, xmm0
    vmulss  xmm0, xmm0, [rsp+160h+var_120]
    vmulss  xmm2, xmm1, xmm14
    vmovss  dword ptr [rax+8], xmm6
    vmovss  dword ptr [rax+0Ch], xmm11
    vmovss  dword ptr [rax+10h], xmm12
  }
  _RAX = _RBX->m_cameraManager;
  __asm
  {
    vaddss  xmm3, xmm2, xmm0
    vmovss  dword ptr [rax+14h], xmm7
    vmovss  dword ptr [rax+18h], xmm8
    vmovss  dword ptr [rax+1Ch], xmm15
  }
  _RAX = _RBX->m_cameraManager;
  __asm { vmovss  dword ptr [rax+20h], xmm3 }
  _R11 = &v157;
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
AerialCamActiveCameraState::UpdateState
==============
*/
AerialCamActiveCameraState *AerialCamActiveCameraState::UpdateState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  CgMLGCameraManager *v8; 
  CgGlobalsMP *LocalClientGlobals; 
  int FocusedPlayer; 
  bool v11; 
  bool v12; 
  bool v13; 
  char v14; 
  int v15; 
  int v16; 
  centity_t *ClientEntity; 
  bool v18; 
  CgMLGSpectator *MLGSpectator; 
  CoDCasterCameraState state[4]; 
  float outHeight; 
  vec3_t outPosition; 

  _RDI = this;
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == FREE )
  {
    m_cameraManager = _RDI->m_cameraManager;
    state[0] = FREECAM_ENTERING;
    return (AerialCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    {
      CG_MLG_UpdateFollowerCamera(localClientNum, _RDI->m_cameraManager);
      AerialCamActiveCameraState::UpdateVFXInternal(_RDI, localClientNum);
    }
    else if ( CL_Keys_GetActiveInputContext(localClientNum) == (VEC3_POINTER|INT_VALUE) )
    {
      AerialCamActiveCameraState::HandleInputsInternal(_RDI, localClientNum);
      FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(_RDI->m_cameraManager, localClientNum);
      v13 = __OFSUB__(FocusedPlayer, -1);
      v11 = FocusedPlayer == -1;
      v12 = FocusedPlayer + 1 < 0;
      LOBYTE(FocusedPlayer) = _RDI->m_lastLockStatus;
      v14 = !(v12 ^ v13 | v11);
      _RDI->m_lastLockStatus = v14;
      if ( (_BYTE)FocusedPlayer != v14 && !(v12 ^ v13 | v11) )
      {
        *(_QWORD *)_RDI->m_currentOffset.v = 0i64;
        _RDI->m_elapsedTransitionTime = 0.0;
      }
      if ( v12 ^ v13 | v11 )
      {
        if ( _RDI->m_focusOnBarycenter )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vmovss  dword ptr [rsp+68h+outPosition], xmm0
            vmovss  dword ptr [rsp+68h+outPosition+4], xmm0
            vmovss  dword ptr [rsp+68h+outPosition+8], xmm0
            vmovss  [rsp+68h+outHeight], xmm0
          }
          if ( CG_GetPlayersBarycenter(localClientNum, &outPosition, &outHeight) )
          {
            __asm
            {
              vmovss  xmm0, [rsp+68h+outHeight]
              vmovss  xmm1, dword ptr [rsp+68h+outPosition]
              vmovss  dword ptr [rdi+30h], xmm0
              vmovss  xmm0, dword ptr [rsp+68h+outPosition+4]
              vmovss  dword ptr [rdi+40h], xmm1
              vmovss  xmm1, dword ptr [rsp+68h+outPosition+8]
              vmovss  dword ptr [rdi+48h], xmm1
              vmovss  dword ptr [rdi+44h], xmm0
            }
          }
        }
      }
      else
      {
        v15 = CgMLGCameraManager::GetFocusedPlayer(_RDI->m_cameraManager, localClientNum);
        _RDI->m_focusOnBarycenter = 0;
        v16 = v15;
        if ( v15 != LocalClientGlobals->clientNum )
        {
          if ( v15 != -1 )
          {
            ClientEntity = CG_MLG_GetClientEntity(localClientNum, v15);
            if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v18 = _RDI->m_lastFollowedClientNum != v16, CG_GetPoseOrigin(&ClientEntity->pose, &_RDI->m_groundPosition), v18) )
            {
              *(_QWORD *)_RDI->m_currentOffset.v = 0i64;
              _RDI->m_elapsedTransitionTime = 0.0;
            }
            else
            {
              MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
              if ( !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v16) )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vucomiss xmm0, dword ptr [rdi+28h]
                  vucomiss xmm0, dword ptr [rdi+2Ch]
                }
              }
            }
          }
          _RDI->m_lastFollowedClientNum = v16;
        }
      }
      AerialCamActiveCameraState::ApplyOffsetInternal(_RDI, localClientNum);
      AerialCamActiveCameraState::UpdatePositionInternal(_RDI, localClientNum);
      AerialCamActiveCameraState::UpdateVFXInternal(_RDI, localClientNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r14+65E4h]
        vaddss  xmm1, xmm0, dword ptr [rdi+18h]
        vmovss  dword ptr [rdi+18h], xmm1
      }
    }
    return _RDI;
  }
  else
  {
    v8 = _RDI->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (AerialCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v8, localClientNum, state);
  }
}

/*
==============
AerialCamEnteringCameraState::UpdateState
==============
*/
CameraStateInterface *AerialCamEnteringCameraState::UpdateState(AerialCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  CoDCasterCameraState state; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  m_cameraManager = this->m_cameraManager;
  if ( MLGCameraType == FREE )
  {
    state = FREECAM_ENTERING;
  }
  else
  {
    state = SPECTATOR_ENTERING;
    if ( MLGCameraType )
      state = AERIALCAM_ACTIVE;
  }
  return CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, &state);
}

/*
==============
FreeCamActiveCameraState::UpdateState
==============
*/
FreeCamActiveCameraState *FreeCamActiveCameraState::UpdateState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  CgMLGCameraManager *v17; 
  CgGlobalsMP *LocalClientGlobals; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  bool v36; 
  char v37; 
  CoDCasterCameraState state[4]; 
  float v109; 
  CameraPose pose2; 
  CameraPose pose1; 
  float v113; 
  float v115; 
  float v117; 

  _RBX = this;
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == AERIAL )
  {
    m_cameraManager = _RBX->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (FreeCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    {
      CG_MLG_UpdateFollowerCamera(localClientNum, _RBX->m_cameraManager);
    }
    else if ( CL_Keys_GetActiveInputContext(localClientNum) == (STRUCT_POINTER|BYTE_VALUE) )
    {
      _RAX = (float *)_RBX->m_cameraManager;
      v20 = _RAX[11];
      v21 = _RAX[4];
      v22 = _RAX[7];
      v23 = _RAX[14];
      __asm
      {
        vmovaps [rsp+180h+var_40], xmm6
        vmovsd  xmm6, qword ptr [rax+24h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
        vaddss  xmm1, xmm0, dword ptr [rbx+2Ch]
        vmovsd  xmm0, qword ptr [rbx+34h]
        vmovaps [rsp+180h+var_50], xmm7
        vmovsd  xmm7, qword ptr [rax+30h]
        vmovaps [rsp+180h+var_60], xmm8
        vmovss  xmm8, dword ptr [rax+3Ch]
        vmovaps [rsp+180h+var_70], xmm9
        vmovsd  xmm9, qword ptr [rax+8]
        vmovsd  qword ptr [rsp+180h+pose1.pos], xmm0
        vmovsd  xmm0, qword ptr [rbx+40h]
        vmovaps [rsp+180h+var_80], xmm10
        vmovsd  xmm10, qword ptr [rax+14h]
        vmovsd  qword ptr [rsp+180h+pose1.angles], xmm0
        vmovss  xmm0, dword ptr [rbx+64h]
        vmovaps [rsp+180h+var_90], xmm11
        vmovss  xmm11, dword ptr [rax+20h]
      }
      pose1.pos.v[2] = _RBX->m_lastTargetPos.v[2];
      pose1.angles.v[2] = _RBX->m_lastTargetAngles.v[2];
      __asm
      {
        vmovss  [rsp+180h+var_15C], xmm11
        vmovss  [rsp+180h+var_158], xmm8
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmovss  [rsp+180h+pose2.fov], xmm8
        vmovss  [rsp+180h+pose1.fov], xmm0
        vmovsd  [rbp+80h+var_E0], xmm9
      }
      v117 = v21;
      __asm { vmovsd  [rbp+80h+var_100], xmm10 }
      v113 = v22;
      __asm { vmovsd  [rsp+180h+var_150], xmm6 }
      v109 = v20;
      __asm { vmovsd  [rbp+80h+var_F0], xmm7 }
      v115 = v23;
      __asm { vmovsd  qword ptr [rsp+180h+pose2.pos], xmm6 }
      pose2.pos.v[2] = v20;
      __asm { vmovsd  qword ptr [rsp+180h+pose2.angles], xmm7 }
      pose2.angles.v[2] = v23;
      pose2.hasBeenSet = 0;
      pose1.hasBeenSet = 0;
      v36 = CG_MLG_ArePosesNearlyEqual(&pose1, &pose2);
      v37 = 0;
      if ( !v36 )
      {
        __asm
        {
          vmovsd  qword ptr [rbx+34h], xmm6
          vmovsd  qword ptr [rbx+40h], xmm7
        }
        _RBX->m_lastTargetPos.v[2] = v20;
        _RBX->m_lastTargetAngles.v[2] = v23;
        __asm { vmovss  dword ptr [rbx+64h], xmm8 }
        _RBX->m_elapsedTransitionTime = 0.0;
        *(double *)&_XMM0 = CG_MLG_GetTransitionDuration(localClientNum);
        __asm { vmovss  dword ptr [rbx+30h], xmm0 }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+30h]
        vcomiss xmm0, dword ptr [rbx+2Ch]
      }
      if ( v37 )
        goto LABEL_13;
      pose1.pos.v[2] = v20;
      pose1.angles.v[2] = v23;
      __asm
      {
        vmovss  [rsp+180h+pose1.fov], xmm8
        vmovss  [rsp+180h+pose2.fov], xmm11
        vmovsd  qword ptr [rsp+180h+pose1.pos], xmm6
        vmovsd  qword ptr [rsp+180h+pose1.angles], xmm7
      }
      pose1.hasBeenSet = 0;
      __asm { vmovsd  qword ptr [rsp+180h+pose2.pos], xmm9 }
      pose2.pos.v[2] = v21;
      __asm { vmovsd  qword ptr [rsp+180h+pose2.angles], xmm10 }
      pose2.angles.v[2] = v22;
      pose2.hasBeenSet = 0;
      if ( CG_MLG_ArePosesNearlyEqual(&pose2, &pose1) )
      {
LABEL_13:
        FreeCamActiveCameraState::HandleInputsInternal(_RBX, localClientNum);
        FreeCamActiveCameraState::HandleMovementsInternal(_RBX, localClientNum);
        *(_QWORD *)&_RBX->m_elapsedTransitionTime = 0i64;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vdivss  xmm0, xmm0, dword ptr [rbx+30h]; val
          vmovaps [rsp+180h+var_A0], xmm13
          vmovaps [rsp+180h+var_B0], xmm14
          vmovss  xmm14, cs:__real@3f800000
          vmovaps xmm2, xmm14; max
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps [rsp+180h+var_C0], xmm15
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        *(double *)&_XMM0 = CG_MLG_GetEaseInOutFactor(*(float *)&_XMM0);
        _RAX = _RBX->m_cameraManager;
        __asm
        {
          vmovss  xmm6, cs:__real@3b360b61
          vmovss  xmm10, cs:__real@43b40000
          vmovss  xmm1, dword ptr [rsp+180h+var_150]
          vsubss  xmm2, xmm1, dword ptr [rbp+80h+var_E0]
          vmovss  xmm1, dword ptr [rsp+180h+var_150+4]
          vmulss  xmm3, xmm2, xmm0
          vsubss  xmm2, xmm1, dword ptr [rbp+80h+var_E0+4]
          vaddss  xmm11, xmm3, dword ptr [rbp+80h+var_E0]
          vmovss  xmm1, dword ptr [rbp+80h+var_F0]
          vmulss  xmm3, xmm2, xmm0
          vsubss  xmm2, xmm1, dword ptr [rbp+80h+var_100]
          vaddss  xmm9, xmm3, dword ptr [rbp+80h+var_E0+4]
          vmovaps xmm15, xmm0
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vmovss  dword ptr [rax+8], xmm11
          vmovss  dword ptr [rax+0Ch], xmm9
          vxorps  xmm13, xmm13, xmm13
          vroundss xmm2, xmm13, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, xmm10
          vmulss  xmm1, xmm0, xmm15
          vaddss  xmm8, xmm1, dword ptr [rbp+80h+var_100]
          vmovss  xmm0, dword ptr [rbp+80h+var_F0+4]
          vsubss  xmm1, xmm0, dword ptr [rbp+80h+var_100+4]
          vmulss  xmm4, xmm1, xmm6
          vaddss  xmm2, xmm4, cs:__real@3f000000
          vroundss xmm3, xmm13, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm10
          vmovss  xmm0, [rbp+80h+var_E8]
          vmulss  xmm2, xmm1, xmm15
          vsubss  xmm1, xmm0, [rbp+80h+var_F8]
          vaddss  xmm4, xmm2, dword ptr [rbp+80h+var_100+4]
          vmulss  xmm5, xmm1, xmm6
          vmulss  xmm1, xmm15, [rsp+180h+var_158]
          vsubss  xmm0, xmm14, xmm15
          vmulss  xmm2, xmm0, [rsp+180h+var_15C]
          vmovss  xmm0, [rsp+180h+var_148]
          vmovaps xmm14, [rsp+180h+var_B0]
          vaddss  xmm6, xmm2, xmm1
          vsubss  xmm1, xmm0, [rbp+80h+var_D8]
          vmulss  xmm2, xmm1, xmm15
          vaddss  xmm3, xmm2, [rbp+80h+var_D8]
          vaddss  xmm1, xmm5, cs:__real@3f000000
          vmovss  dword ptr [rax+10h], xmm3
        }
        _RAX = _RBX->m_cameraManager;
        __asm
        {
          vroundss xmm2, xmm13, xmm1, 1
          vmovaps xmm13, [rsp+180h+var_A0]
          vsubss  xmm0, xmm5, xmm2
          vmovss  dword ptr [rax+14h], xmm8
          vmovss  dword ptr [rax+18h], xmm4
          vmulss  xmm1, xmm0, xmm10
          vmulss  xmm2, xmm1, xmm15
          vaddss  xmm3, xmm2, [rbp+80h+var_F8]
          vmovaps xmm15, [rsp+180h+var_C0]
          vmovss  dword ptr [rax+1Ch], xmm3
        }
        _RAX = _RBX->m_cameraManager;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+180h+var_148], xmm0
          vunpcklps xmm0, xmm0, xmm0
          vmovss  dword ptr [rax+20h], xmm6
        }
        *(float *)&_RAX = v109;
        __asm { vmovsd  qword ptr [rbx+58h], xmm0 }
        LODWORD(_RBX->m_lastInputVector.v[2]) = (_DWORD)_RAX;
        __asm { vmovss  dword ptr [rbx+6Ch], xmm6 }
        _RBX->m_lastInputFoV = 0.0;
      }
      __asm
      {
        vmovaps xmm10, [rsp+180h+var_80]
        vmovaps xmm9, [rsp+180h+var_70]
        vmovaps xmm8, [rsp+180h+var_60]
        vmovaps xmm7, [rsp+180h+var_50]
        vmovaps xmm6, [rsp+180h+var_40]
        vmovaps xmm11, [rsp+180h+var_90]
      }
    }
    return _RBX;
  }
  else
  {
    v17 = _RBX->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (FreeCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v17, localClientNum, state);
  }
}

/*
==============
FreeCamEnteringCameraState::UpdateState
==============
*/
FreeCamEnteringCameraState *FreeCamEnteringCameraState::UpdateState(FreeCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  FreeCamEnteringCameraState *result; 
  CgMLGCameraManager *v16; 
  CgGlobalsMP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  bool v20; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  CgMLGCameraManager *v94; 
  CoDCasterCameraState state[4]; 
  float v101; 
  float v103; 
  float v105; 
  float v107; 
  CameraPose pose2; 
  CameraPose pose1; 

  _RBX = this;
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == AERIAL )
  {
    m_cameraManager = _RBX->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum);
    _RCX = _RBX->m_cameraManager;
    v20 = CharacterInfo->team < (unsigned int)TEAM_FOLLOWER;
    if ( CharacterInfo->team == TEAM_FOLLOWER )
    {
      state[0] = FREECAM_ACTIVE;
      return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(_RCX, localClientNum, state);
    }
    else
    {
      __asm
      {
        vmovsd  xmm2, qword ptr [rcx+24h]
        vmovsd  xmm3, qword ptr [rcx+30h]
        vmovsd  xmm4, qword ptr [rcx+8]
        vmovsd  xmm5, qword ptr [rcx+14h]
      }
      v25 = _RCX->m_mlgTargetCameraPos.v[2];
      v26 = _RCX->m_mlgTargetCameraAngles.v[2];
      v27 = _RCX->m_mlgCurrentCameraPos.v[2];
      v28 = _RCX->m_mlgCurrentCameraAngles.v[2];
      __asm
      {
        vmovaps [rsp+150h+var_20], xmm6
        vmovss  xmm6, dword ptr [rcx+3Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
        vaddss  xmm1, xmm0, dword ptr [rbx+14h]
        vcomiss xmm1, dword ptr [rbx+10h]
        vmovaps [rsp+150h+var_30], xmm7
        vmovss  xmm7, dword ptr [rcx+20h]
        vmovss  [rsp+150h+var_128], xmm6
        vmovss  [rsp+150h+var_12C], xmm7
        vmovss  dword ptr [rbx+14h], xmm1
        vmovsd  [rsp+150h+var_F0], xmm2
      }
      v107 = v25;
      __asm { vmovsd  [rsp+150h+var_110], xmm3 }
      v103 = v26;
      __asm { vmovsd  [rsp+150h+var_100], xmm4 }
      v105 = v27;
      __asm { vmovsd  [rsp+150h+var_120], xmm5 }
      v101 = v28;
      if ( !v20 )
        goto LABEL_10;
      pose2.angles.v[2] = v26;
      pose2.pos.v[2] = v25;
      __asm
      {
        vmovss  [rbp+50h+pose2.fov], xmm6
        vmovss  [rbp+50h+pose1.fov], xmm7
        vmovsd  qword ptr [rsp+150h+pose2.pos], xmm2
        vmovsd  qword ptr [rsp+150h+pose2.angles], xmm3
      }
      pose2.hasBeenSet = 0;
      __asm { vmovsd  qword ptr [rbp+50h+pose1.pos], xmm4 }
      pose1.pos.v[2] = v27;
      __asm { vmovsd  qword ptr [rbp+50h+pose1.angles], xmm5 }
      pose1.angles.v[2] = v28;
      pose1.hasBeenSet = 0;
      if ( CG_MLG_ArePosesNearlyEqual(&pose1, &pose2) )
      {
LABEL_10:
        v94 = _RBX->m_cameraManager;
        state[0] = FREECAM_ACTIVE;
        result = (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v94, localClientNum, state);
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+14h]
          vdivss  xmm0, xmm0, dword ptr [rbx+10h]; val
          vmovaps [rsp+150h+var_40], xmm8
          vmovaps [rsp+150h+var_50], xmm9
          vmovaps [rsp+150h+var_60], xmm11
          vmovaps [rsp+150h+var_70], xmm13
          vmovaps [rsp+150h+var_80], xmm14
          vmovaps [rsp+150h+var_90], xmm15
          vmovss  xmm15, cs:__real@3f800000
          vmovaps xmm2, xmm15; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        *(double *)&_XMM0 = CG_MLG_GetEaseInOutFactor(*(float *)&_XMM0);
        _RAX = _RBX->m_cameraManager;
        __asm
        {
          vmovss  xmm7, cs:__real@3b360b61
          vmovss  xmm1, dword ptr [rsp+150h+var_F0]
          vsubss  xmm2, xmm1, dword ptr [rsp+150h+var_100]
          vmovss  xmm1, dword ptr [rsp+150h+var_F0+4]
          vmulss  xmm3, xmm2, xmm0
          vsubss  xmm2, xmm1, dword ptr [rsp+150h+var_100+4]
          vaddss  xmm11, xmm3, dword ptr [rsp+150h+var_100]
          vmovss  xmm1, dword ptr [rsp+150h+var_110]
          vmulss  xmm3, xmm2, xmm0
          vsubss  xmm2, xmm1, dword ptr [rsp+150h+var_120]
          vaddss  xmm9, xmm3, dword ptr [rsp+150h+var_100+4]
          vmovaps xmm14, xmm0
          vmulss  xmm3, xmm2, xmm7
          vaddss  xmm1, xmm3, cs:__real@3f000000
          vmovss  dword ptr [rax+8], xmm11
          vmovaps xmm11, [rsp+150h+var_60]
          vmovss  dword ptr [rax+0Ch], xmm9
          vmovaps xmm9, [rsp+150h+var_50]
          vxorps  xmm13, xmm13, xmm13
          vroundss xmm2, xmm13, xmm1, 1
          vsubss  xmm0, xmm3, xmm2
          vmulss  xmm0, xmm0, cs:__real@43b40000
          vmulss  xmm1, xmm0, xmm14
          vaddss  xmm8, xmm1, dword ptr [rsp+150h+var_120]
          vmovss  xmm0, dword ptr [rsp+150h+var_110+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+150h+var_120+4]
          vmulss  xmm4, xmm1, xmm7
          vaddss  xmm2, xmm4, cs:__real@3f000000
          vroundss xmm3, xmm13, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmovss  xmm0, [rsp+150h+var_108]
          vmulss  xmm2, xmm1, xmm14
          vsubss  xmm1, xmm0, [rsp+150h+var_118]
          vaddss  xmm4, xmm2, dword ptr [rsp+150h+var_120+4]
          vmovss  xmm0, [rsp+150h+var_E8]
          vmulss  xmm5, xmm1, xmm7
          vsubss  xmm1, xmm0, [rsp+150h+var_F8]
          vmulss  xmm2, xmm1, xmm14
          vaddss  xmm3, xmm2, [rsp+150h+var_F8]
          vaddss  xmm1, xmm5, cs:__real@3f000000
          vmovss  dword ptr [rax+10h], xmm3
        }
        _RCX = _RBX->m_cameraManager;
        result = _RBX;
        __asm
        {
          vroundss xmm2, xmm13, xmm1, 1
          vmovaps xmm13, [rsp+150h+var_70]
          vsubss  xmm0, xmm5, xmm2
          vmulss  xmm1, xmm0, cs:__real@43b40000
          vmulss  xmm2, xmm1, xmm14
          vaddss  xmm3, xmm2, [rsp+150h+var_118]
          vmovss  dword ptr [rcx+1Ch], xmm3
          vmovss  dword ptr [rcx+14h], xmm8
          vmovaps xmm8, [rsp+150h+var_40]
          vsubss  xmm0, xmm15, xmm14
          vmulss  xmm2, xmm0, [rsp+150h+var_12C]
          vmovaps xmm15, [rsp+150h+var_90]
          vmovss  dword ptr [rcx+18h], xmm4
        }
        _RCX = _RBX->m_cameraManager;
        __asm
        {
          vmulss  xmm1, xmm14, xmm6
          vmovaps xmm14, [rsp+150h+var_80]
          vaddss  xmm3, xmm2, xmm1
          vmovss  dword ptr [rcx+20h], xmm3
        }
      }
      __asm
      {
        vmovaps xmm6, [rsp+150h+var_20]
        vmovaps xmm7, [rsp+150h+var_30]
      }
    }
  }
  else
  {
    v16 = _RBX->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v16, localClientNum, state);
  }
  return result;
}

/*
==============
SpectatorActiveCameraState::UpdateState
==============
*/
SpectatorActiveCameraState *SpectatorActiveCameraState::UpdateState(SpectatorActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  SpectatorActiveCameraState *v9; 
  CgMLGCameraManager *v10; 
  CoDCasterCameraState state[8]; 
  ClientFov result; 
  vec3_t outOrg; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == FREE )
  {
    m_cameraManager = this->m_cameraManager;
    state[0] = FREECAM_ENTERING;
    return (SpectatorActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType == AERIAL )
  {
    v10 = this->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (SpectatorActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v10, localClientNum, state);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+88h+var_18], xmm6
      vmovaps [rsp+88h+var_28], xmm7
      vmovaps [rsp+88h+var_38], xmm8
    }
    _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+178C0h]
      vmovss  xmm7, dword ptr [rbx+178C4h]
      vmovss  xmm8, dword ptr [rbx+178C8h]
    }
    _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
    _RCX = this->m_cameraManager;
    __asm
    {
      vmovss  xmm2, dword ptr [rsp+88h+outOrg]
      vmovss  xmm1, dword ptr [rsp+88h+outOrg+4]
      vmovsd  xmm3, qword ptr [rax]
      vmovss  xmm0, dword ptr [rsp+88h+outOrg+8]
    }
    v9 = this;
    __asm
    {
      vmovss  dword ptr [rcx+8], xmm2
      vmovss  dword ptr [rcx+0Ch], xmm1
      vmovss  dword ptr [rcx+10h], xmm0
      vmovss  dword ptr [rcx+14h], xmm6
      vmovss  dword ptr [rcx+18h], xmm7
      vmovss  dword ptr [rcx+1Ch], xmm8
      vmovss  dword ptr [rcx+20h], xmm3
      vmovss  dword ptr [rcx+24h], xmm2
      vmovss  dword ptr [rcx+28h], xmm1
      vmovss  dword ptr [rcx+2Ch], xmm0
      vmovss  dword ptr [rcx+30h], xmm6
      vmovaps xmm6, [rsp+88h+var_18]
      vmovss  dword ptr [rcx+34h], xmm7
      vmovaps xmm7, [rsp+88h+var_28]
      vmovss  dword ptr [rcx+38h], xmm8
      vmovaps xmm8, [rsp+88h+var_38]
      vmovss  dword ptr [rcx+3Ch], xmm3
    }
  }
  return v9;
}

/*
==============
SpectatorEnteringCameraState::UpdateState
==============
*/
SpectatorEnteringCameraState *SpectatorEnteringCameraState::UpdateState(SpectatorEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CoDCasterCameraType MLGCameraType; 
  CgMLGCameraManager *m_cameraManager; 
  SpectatorEnteringCameraState *result; 
  CgMLGCameraManager *v18; 
  char v19; 
  float v23; 
  float v25; 
  float v28; 
  float v34; 
  int FocusedPlayer; 
  centity_t *Entity; 
  char v54; 
  CoDCasterCameraState state[4]; 
  vec3_t outOrigin; 
  float v186; 
  float v188; 
  float v190; 
  tmat33_t<vec3_t> pose1; 
  vec3_t angles; 
  CameraPose pose2; 

  _RBX = this;
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == FREE )
  {
    m_cameraManager = _RBX->m_cameraManager;
    state[0] = FREECAM_ENTERING;
    return (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType == AERIAL )
  {
    v18 = _RBX->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v18, localClientNum, state);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+190h+var_20], xmm6
      vmovaps [rsp+190h+var_30], xmm7
      vmovaps [rsp+190h+var_40], xmm8
      vmovaps [rsp+190h+var_50], xmm9
      vmovaps [rsp+190h+var_60], xmm10
      vmovaps [rsp+190h+var_70], xmm11
    }
    CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    _RCX = _RBX->m_cameraManager;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovsd  xmm8, qword ptr [rcx+8]
    }
    v23 = _RCX->m_mlgCurrentCameraPos.v[2];
    __asm { vmovsd  xmm9, qword ptr [rcx+14h] }
    v25 = _RCX->m_mlgCurrentCameraAngles.v[2];
    __asm
    {
      vmovss  xmm11, dword ptr [rcx+20h]
      vmovsd  xmm6, qword ptr [rcx+24h]
      vmovsd  qword ptr [rsp+190h+outOrigin], xmm6
    }
    v28 = _RCX->m_mlgTargetCameraPos.v[2];
    __asm { vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4] }
    outOrigin.v[2] = v28;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
      vaddss  xmm5, xmm0, dword ptr [rbx+10h]
      vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
      vmovsd  xmm10, qword ptr [rcx+30h]
    }
    v34 = _RCX->m_mlgTargetCameraAngles.v[2];
    __asm
    {
      vmovss  xmm7, dword ptr [rcx+3Ch]
      vsubss  xmm4, xmm0, xmm8
      vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
      vmovsd  [rsp+190h+var_130], xmm8
      vsubss  xmm2, xmm1, dword ptr [rsp+190h+var_130+4]
      vmulss  xmm1, xmm2, xmm2
    }
    v188 = v23;
    __asm
    {
      vsubss  xmm3, xmm0, [rsp+190h+var_128]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcomiss xmm2, cs:__real@44610000
      vmovss  [rsp+190h+var_16C], xmm11
      vmovss  dword ptr [rbx+10h], xmm5
      vmovsd  [rsp+190h+var_120], xmm9
    }
    v190 = v25;
    __asm { vmovsd  [rsp+190h+var_140], xmm10 }
    v186 = v34;
    if ( v19 | v54 )
    {
      _RCX->m_shouldRenderThirdPerson = 0;
      __asm { vmovss  xmm5, dword ptr [rbx+10h] }
      v28 = outOrigin.v[2];
      __asm { vmovsd  xmm6, qword ptr [rsp+190h+outOrigin] }
    }
    __asm { vcomiss xmm5, dword ptr [rbx+14h] }
    if ( !v19 )
      goto LABEL_20;
    pose2.pos.v[2] = v28;
    pose2.angles.v[2] = v34;
    __asm
    {
      vmovss  [rbp+90h+pose2.fov], xmm7
      vmovss  [rbp+90h+pose1.fov], xmm11
      vmovsd  qword ptr [rbp+90h+pose2.pos], xmm6
      vmovsd  qword ptr [rbp+90h+pose2.angles], xmm10
    }
    pose2.hasBeenSet = 0;
    __asm { vmovsd  qword ptr [rbp+90h+pose1.pos], xmm8 }
    pose1.m[0].v[2] = v23;
    __asm { vmovsd  qword ptr [rbp+90h+pose1.angles], xmm9 }
    pose1.m[1].v[2] = v25;
    LOBYTE(pose1.row2.y) = 0;
    if ( CG_MLG_ArePosesNearlyEqual((const CameraPose *)&pose1, &pose2) )
    {
LABEL_20:
      _RAX = _RBX->m_cameraManager;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+var_140]
        vmovss  xmm1, dword ptr [rsp+190h+var_140+4]
      }
      state[0] = SPECTATOR_ACTIVE;
      __asm
      {
        vmovss  dword ptr [rax+14h], xmm0
        vmovss  xmm0, [rsp+190h+var_138]
        vmovss  dword ptr [rax+1Ch], xmm0
        vmovss  dword ptr [rax+18h], xmm1
      }
      _RAX = _RBX->m_cameraManager;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+190h+outOrigin]
        vmovss  dword ptr [rax+8], xmm0
        vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4]
        vmovss  dword ptr [rax+0Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+190h+outOrigin+8]
        vmovss  dword ptr [rax+10h], xmm0
      }
      _RAX = _RBX->m_cameraManager;
      __asm { vmovss  dword ptr [rax+20h], xmm7 }
      result = (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(_RBX->m_cameraManager, localClientNum, state);
    }
    else
    {
      FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(_RBX->m_cameraManager, localClientNum);
      if ( FocusedPlayer != -1 )
      {
        _R14 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
        Entity = CG_GetEntity(localClientNum, FocusedPlayer);
        _RSI = Entity;
        if ( Entity )
        {
          if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 )
          {
            __asm
            {
              vmovaps [rsp+190h+var_80], xmm12
              vmovaps [rsp+190h+var_90], xmm13
              vmovaps [rsp+190h+var_A0], xmm14
              vmovaps [rsp+190h+var_B0], xmm15
            }
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            __asm
            {
              vmovss  xmm14, dword ptr [rsi+48h]
              vmovss  xmm12, dword ptr [rsi+4Ch]
              vmovss  xmm13, dword ptr [rsi+50h]
            }
            *(double *)&_XMM0 = CG_View_GetFovDvarDefaultValue(localClientNum);
            __asm
            {
              vxorps  xmm11, xmm11, xmm11
              vmovss  dword ptr [rbp+90h+angles], xmm11
              vmovss  dword ptr [rbp+90h+angles+8], xmm11
              vmovss  [rsp+190h+var_168], xmm0
              vmovss  dword ptr [rbp+90h+angles+4], xmm12
              vmovaps xmm9, xmm0
            }
            AnglesToAxis(&angles, &pose1);
            __asm { vmovss  xmm5, dword ptr [r14+1F0h] }
            _RAX = _RBX->m_cameraManager;
            __asm
            {
              vmovss  xmm6, cs:__real@41200000
              vmulss  xmm3, xmm5, [rbp+90h+pose1.fov]
              vmulss  xmm2, xmm6, dword ptr [rbp+90h+pose1.pos]
              vmulss  xmm1, xmm6, dword ptr [rbp+90h+pose1.pos+4]
              vaddss  xmm4, xmm3, xmm2
              vaddss  xmm7, xmm4, dword ptr [rsp+190h+outOrigin]
              vmulss  xmm2, xmm5, dword ptr [rbp+90h+pose1.hasBeenSet]
              vmulss  xmm4, xmm5, [rbp+90h+var_F0]
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm0, xmm3, dword ptr [rsp+190h+outOrigin+4]
              vmovss  dword ptr [rsp+190h+outOrigin+4], xmm0
              vmulss  xmm0, xmm6, dword ptr [rbp+90h+pose1.pos+8]
              vmovss  xmm6, dword ptr [rsp+190h+var_130+4]
              vmovss  dword ptr [rsp+190h+outOrigin], xmm7
              vaddss  xmm3, xmm4, xmm0
              vaddss  xmm1, xmm3, dword ptr [rsp+190h+outOrigin+8]
              vmovss  dword ptr [rsp+190h+outOrigin+8], xmm1
              vmovss  dword ptr [rax+24h], xmm7
              vmovss  xmm0, dword ptr [rsp+190h+outOrigin+4]
              vmovss  xmm7, [rsp+190h+var_128]
              vmovss  dword ptr [rax+28h], xmm0
              vmovss  xmm1, dword ptr [rsp+190h+outOrigin+8]
              vmovss  dword ptr [rax+2Ch], xmm1
            }
            _RAX = _RBX->m_cameraManager;
            __asm
            {
              vmovss  [rsp+190h+var_158], xmm12
              vmovss  [rsp+190h+var_15C], xmm13
              vmovss  [rsp+190h+var_164], xmm13
              vmovss  dword ptr [rax+30h], xmm14
              vmovss  dword ptr [rax+34h], xmm12
              vmovss  dword ptr [rax+38h], xmm13
            }
            _RAX = _RBX->m_cameraManager;
            __asm
            {
              vmovss  [rsp+190h+var_160], xmm13
              vmovaps xmm5, xmm14
              vmovaps xmm10, xmm12
              vmovss  dword ptr [rax+3Ch], xmm9
              vmovss  xmm0, dword ptr [rsp+190h+outOrigin+4]
              vmovss  xmm1, dword ptr [rsp+190h+outOrigin+8]
              vmovss  xmm15, dword ptr [rsp+190h+outOrigin]
              vsubss  xmm3, xmm1, xmm7
              vsubss  xmm2, xmm0, xmm6
              vmulss  xmm1, xmm2, xmm2
              vsubss  xmm4, xmm15, xmm8
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmovss  xmm1, cs:__real@3f800000
              vcomiss xmm3, xmm1
            }
            if ( v19 )
            {
              __asm { vmovaps xmm3, xmm13 }
            }
            else
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+10h]
                vdivss  xmm0, xmm0, dword ptr [rbx+14h]; val
                vmovaps xmm2, xmm1; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              *(double *)&_XMM0 = CG_MLG_GetEaseInOutFactor(*(float *)&_XMM0);
              __asm
              {
                vmovss  xmm1, dword ptr [rsp+190h+outOrigin]
                vmovaps xmm10, xmm0
                vsubss  xmm2, xmm1, xmm8
                vmovss  xmm1, dword ptr [rsp+190h+outOrigin+4]
                vmulss  xmm3, xmm2, xmm0
                vsubss  xmm2, xmm1, xmm6
                vmovss  xmm1, dword ptr [rsp+190h+outOrigin+8]
                vaddss  xmm15, xmm3, xmm8
                vmovss  xmm8, cs:__real@3b360b61
                vmulss  xmm3, xmm2, xmm0
                vsubss  xmm2, xmm1, xmm7
                vaddss  xmm4, xmm3, xmm6
                vmovss  xmm6, cs:__real@43b40000
                vmulss  xmm3, xmm2, xmm0
                vsubss  xmm0, xmm14, dword ptr [rsp+190h+var_120]
                vxorps  xmm9, xmm9, xmm9
                vmovss  dword ptr [rsp+190h+outOrigin+4], xmm4
                vaddss  xmm4, xmm3, xmm7
                vmovss  xmm7, cs:__real@3f000000
                vmulss  xmm3, xmm0, xmm8
                vaddss  xmm1, xmm3, xmm7
                vroundss xmm2, xmm9, xmm1, 1
                vsubss  xmm0, xmm3, xmm2
                vmulss  xmm0, xmm0, xmm6
                vmulss  xmm1, xmm0, xmm10
                vaddss  xmm14, xmm1, dword ptr [rsp+190h+var_120]
                vsubss  xmm0, xmm12, dword ptr [rsp+190h+var_120+4]
                vmovss  dword ptr [rsp+190h+outOrigin+8], xmm4
                vmulss  xmm4, xmm0, xmm8
                vaddss  xmm2, xmm4, xmm7
                vroundss xmm3, xmm9, xmm2, 1
                vsubss  xmm1, xmm4, xmm3
                vmulss  xmm0, xmm1, xmm6
                vmulss  xmm2, xmm0, xmm10
                vaddss  xmm12, xmm2, dword ptr [rsp+190h+var_120+4]
                vsubss  xmm0, xmm13, [rsp+190h+var_118]
                vmulss  xmm4, xmm0, xmm8
                vaddss  xmm2, xmm4, xmm7
                vroundss xmm3, xmm9, xmm2, 1
                vsubss  xmm1, xmm4, xmm3
                vmulss  xmm0, xmm1, xmm6
                vmulss  xmm1, xmm10, [rsp+190h+var_168]
                vmulss  xmm2, xmm0, xmm10
                vaddss  xmm13, xmm2, [rsp+190h+var_118]
                vmovss  xmm0, cs:__real@3f800000
                vmovaps xmm3, xmm13
                vsubss  xmm0, xmm0, xmm10
                vmulss  xmm2, xmm0, [rsp+190h+var_16C]
                vaddss  xmm9, xmm2, xmm1
                vmovss  [rsp+190h+var_158], xmm12
                vmovss  [rsp+190h+var_15C], xmm3
                vmovss  [rsp+190h+var_164], xmm3
                vmovss  [rsp+190h+var_160], xmm3
                vmovaps xmm5, xmm14
                vmovaps xmm10, xmm12
              }
            }
            __asm
            {
              vmovss  xmm1, cs:__real@80000000
              vmovss  xmm2, [rsp+190h+var_164]
              vmovss  xmm4, [rsp+190h+var_160]
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm14, xmm11, xmm0
              vmovaps xmm14, [rsp+190h+var_A0]
              vmovss  dword ptr [rsp+190h+var_140], xmm0
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm2, xmm4, xmm0
              vmovss  xmm2, [rsp+190h+var_15C]
              vmovss  [rsp+190h+var_168], xmm0
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm3, xmm2, xmm0
              vmovss  xmm2, [rsp+190h+var_158]
              vmovss  [rsp+190h+var_16C], xmm0
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm10, xmm2, xmm0
              vucomiss xmm0, xmm1
            }
            if ( v54 )
            {
              __asm
              {
                vmovss  xmm0, [rsp+190h+var_168]
                vxorps  xmm12, xmm12, xmm12
              }
            }
            else
            {
              __asm { vmovss  xmm0, [rsp+190h+var_16C] }
            }
            _RCX = _RBX->m_cameraManager;
            __asm
            {
              vcmpeqss xmm0, xmm0, xmm1
              vblendvps xmm2, xmm13, xmm11, xmm0
              vmovaps xmm13, [rsp+190h+var_90]
              vmovss  dword ptr [rcx+8], xmm15
              vmovss  xmm0, dword ptr [rsp+190h+outOrigin+4]
              vmovaps xmm15, [rsp+190h+var_B0]
              vmovss  dword ptr [rcx+0Ch], xmm0
              vmovss  xmm1, dword ptr [rsp+190h+outOrigin+8]
              vmovss  xmm0, dword ptr [rsp+190h+var_140]
              vmovss  dword ptr [rcx+10h], xmm1
            }
            _RCX = _RBX->m_cameraManager;
            __asm
            {
              vmovss  dword ptr [rcx+18h], xmm12
              vmovaps xmm12, [rsp+190h+var_80]
              vmovss  dword ptr [rcx+14h], xmm0
              vmovss  dword ptr [rcx+1Ch], xmm2
            }
            _RCX = _RBX->m_cameraManager;
            __asm { vmovss  dword ptr [rcx+20h], xmm9 }
          }
        }
      }
      result = _RBX;
    }
    __asm
    {
      vmovaps xmm9, [rsp+190h+var_50]
      vmovaps xmm8, [rsp+190h+var_40]
      vmovaps xmm7, [rsp+190h+var_30]
      vmovaps xmm6, [rsp+190h+var_20]
      vmovaps xmm10, [rsp+190h+var_60]
      vmovaps xmm11, [rsp+190h+var_70]
    }
  }
  return result;
}

/*
==============
AerialCamActiveCameraState::UpdateTetheredPositionInternal
==============
*/
void AerialCamActiveCameraState::UpdateTetheredPositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob)
{
  int FocusedPlayer; 
  int v8; 
  centity_t *ClientEntity; 
  bool v10; 
  CgMLGSpectator *MLGSpectator; 

  _RDI = this;
  FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
  _RDI->m_focusOnBarycenter = 0;
  v8 = FocusedPlayer;
  if ( FocusedPlayer != cgameGlob->clientNum )
  {
    if ( FocusedPlayer != -1 )
    {
      ClientEntity = CG_MLG_GetClientEntity(localClientNum, FocusedPlayer);
      if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v10 = _RDI->m_lastFollowedClientNum != v8, CG_GetPoseOrigin(&ClientEntity->pose, &_RDI->m_groundPosition), v10) )
      {
        *(_QWORD *)_RDI->m_currentOffset.v = 0i64;
        _RDI->m_elapsedTransitionTime = 0.0;
      }
      else
      {
        MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
        if ( !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v8) )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vucomiss xmm0, dword ptr [rdi+28h]
            vucomiss xmm0, dword ptr [rdi+2Ch]
          }
        }
      }
    }
    _RDI->m_lastFollowedClientNum = v8;
  }
}

/*
==============
AerialCamActiveCameraState::UpdateVFXInternal
==============
*/
void AerialCamActiveCameraState::UpdateVFXInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int v5; 
  ParticleSystemHandle *m_arrowFx; 
  cg_t *v7; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __int64 v10; 
  int v11; 
  int v12; 
  ParticleManager *ParticleManager; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = 0;
  m_arrowFx = this->m_arrowFx;
  do
  {
    v7 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( v7->HasCharacterInfo(v7, v5) )
    {
      CharacterInfo = CG_GetCharacterInfo(v7, v5);
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v2, CharacterInfo->entityNum);
        if ( Entity )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
          {
            LODWORD(v17) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
            LODWORD(v16) = 2;
            LODWORD(v15) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v15, v16, v17) )
              __debugbreak();
          }
          if ( (unsigned int)v2 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v15) = CgCompassSystem::ms_allocatedCount;
            LODWORD(v14) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v2] )
          {
            LODWORD(v15) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v15) )
              __debugbreak();
          }
          v10 = CgCompassSystem::ms_compassSystemArray[v2]->GetCompassActor(CgCompassSystem::ms_compassSystemArray[v2], v5);
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 4);
            v12 = LocalClientGlobals->time - 500;
            if ( ((Entity->nextState.eType - 1) & 0xFFEF) != 0 || !LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v5) || v11 < v12 )
            {
              if ( *m_arrowFx )
              {
                ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v2);
                ParticleManager::StopSystem(ParticleManager, *m_arrowFx);
                *m_arrowFx = PARTICLE_SYSTEM_INVALID_HANDLE;
              }
            }
            else if ( *m_arrowFx == PARTICLE_SYSTEM_INVALID_HANDLE )
            {
              AerialCamActiveCameraState::StartVFXInternal(this, (const LocalClientNum_t)v2, v5);
            }
          }
        }
      }
    }
    ++v5;
    ++m_arrowFx;
  }
  while ( v5 < 200 );
}

