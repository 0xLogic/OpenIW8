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
void CgMLGCameraManager::CgMLGCameraManager(CgMLGCameraManager *this)
{
  CameraPose (*m_mlgFreeCamPoses)[20]; 
  __int64 v3; 
  CameraPose v4; 

  this->m_localCameraType = SPECTATOR;
  m_mlgFreeCamPoses = this->m_mlgFreeCamPoses;
  v3 = 2560i64;
  do
  {
    CameraPose::CameraPose((CameraPose *)m_mlgFreeCamPoses);
    m_mlgFreeCamPoses = (CameraPose (*)[20])((char *)m_mlgFreeCamPoses + 32);
    --v3;
  }
  while ( v3 );
  this->m_shouldRenderThirdPerson = 0;
  this->m_aerialMinHeight = 0.0;
  this->m_aerialMaxHeight = 4000.0;
  this->m_aerialCameraEnabled = 1;
  v4.angles.v[1] = 0.0;
  v4.angles.v[2] = 0.0;
  v4.fov = 0.0;
  *(_OWORD *)v4.pos.v = 0i64;
  v4.hasBeenSet = 0;
  this->m_mlgMemorizedFreeCamPose = v4;
  this->m_spectatorActiveCameraState.__vftable = (SpectatorActiveCameraState_vtbl *)&SpectatorActiveCameraState::`vftable';
  this->m_spectatorActiveCameraState.m_cameraManager = this;
  this->m_spectatorEnteringCameraState.__vftable = (SpectatorEnteringCameraState_vtbl *)&SpectatorEnteringCameraState::`vftable';
  this->m_spectatorEnteringCameraState.m_cameraManager = this;
  this->m_freeCamEnteringCameraState.__vftable = (FreeCamEnteringCameraState_vtbl *)&FreeCamEnteringCameraState::`vftable';
  this->m_freeCamEnteringCameraState.m_cameraManager = this;
  this->m_freeCamActiveCameraState.__vftable = (FreeCamActiveCameraState_vtbl *)&FreeCamActiveCameraState::`vftable';
  this->m_freeCamActiveCameraState.m_cameraManager = this;
  this->m_aerialCamEnteringCameraState.__vftable = (AerialCamEnteringCameraState_vtbl *)&AerialCamEnteringCameraState::`vftable';
  this->m_aerialCamEnteringCameraState.m_cameraManager = this;
  this->m_aerialCamActiveCameraState.__vftable = (AerialCamActiveCameraState_vtbl *)&AerialCamActiveCameraState::`vftable';
  this->m_aerialCamActiveCameraState.m_cameraManager = this;
  this->m_mlgCameraStates[(unsigned __int8)this->m_spectatorEnteringCameraState.GetCameraState(&this->m_spectatorEnteringCameraState)] = &this->m_spectatorEnteringCameraState;
  this->m_mlgCameraStates[(unsigned __int8)this->m_spectatorActiveCameraState.GetCameraState(&this->m_spectatorActiveCameraState)] = &this->m_spectatorActiveCameraState;
  this->m_mlgCameraStates[(unsigned __int8)this->m_freeCamEnteringCameraState.GetCameraState(&this->m_freeCamEnteringCameraState)] = &this->m_freeCamEnteringCameraState;
  this->m_mlgCameraStates[(unsigned __int8)this->m_freeCamActiveCameraState.GetCameraState(&this->m_freeCamActiveCameraState)] = &this->m_freeCamActiveCameraState;
  this->m_mlgCameraStates[(unsigned __int8)this->m_aerialCamEnteringCameraState.GetCameraState(&this->m_aerialCamEnteringCameraState)] = &this->m_aerialCamEnteringCameraState;
  this->m_mlgCameraStates[(unsigned __int8)this->m_aerialCamActiveCameraState.GetCameraState(&this->m_aerialCamActiveCameraState)] = &this->m_aerialCamActiveCameraState;
  this->m_mlgCurrentCameraState = this->m_mlgCameraStates[1];
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
  const dvar_t *v2; 
  CgMLGCameraManager *m_cameraManager; 
  float value; 
  float v6; 
  float v7; 
  const dvar_t *v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  CgMLGCameraManager *v13; 
  float v14; 
  float m_aerialMinHeight; 
  const dvar_t *v16; 
  double v17; 
  CgMLGCameraManager *v18; 

  v2 = DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor;
  if ( !DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_horizontal_distance_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  m_cameraManager = this->m_cameraManager;
  value = v2->current.value;
  v6 = this->m_currentOffset.v[0] + this->m_groundPosition.v[0];
  v7 = this->m_currentOffset.v[1] + this->m_groundPosition.v[1];
  v8 = DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance;
  v9 = m_cameraManager->m_mlgTargetCameraAngles.v[2] + this->m_currentAngles.v[2];
  v10 = this->m_groundPosition.v[2];
  v11 = COERCE_FLOAT(*(_QWORD *)m_cameraManager->m_mlgTargetCameraAngles.v) + this->m_currentAngles.v[0];
  v12 = COERCE_FLOAT(HIDWORD(*(_QWORD *)m_cameraManager->m_mlgTargetCameraAngles.v)) + this->m_currentAngles.v[1];
  if ( !DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_minimal_vertical_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v13 = this->m_cameraManager;
  v14 = this->m_groundPosition.v[2];
  m_aerialMinHeight = v13->m_aerialMinHeight;
  if ( (float)(v14 + v8->current.value) > m_aerialMinHeight )
  {
    v16 = DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance;
    if ( !DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_minimal_vertical_distance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v14 = this->m_groundPosition.v[2];
    m_aerialMinHeight = v14 + v16->current.value;
    v13 = this->m_cameraManager;
  }
  *(float *)&v17 = v13->m_aerialMaxHeight;
  if ( m_aerialMinHeight <= *(float *)&v17 )
  {
    v17 = I_fclamp(this->m_currentOffset.v[2], m_aerialMinHeight, v13->m_aerialMaxHeight);
    v14 = this->m_groundPosition.v[2];
    v13 = this->m_cameraManager;
  }
  this->m_currentOffset.v[2] = *(float *)&v17;
  v13->m_mlgTargetCameraPos.v[1] = v7;
  v13->m_mlgTargetCameraPos.v[0] = v6 - (float)((float)(*(float *)&v17 - v14) / value);
  v13->m_mlgTargetCameraPos.v[2] = v10 + (float)(*(float *)&v17 - v14);
  v18 = this->m_cameraManager;
  v18->m_mlgTargetCameraAngles.v[0] = v11;
  v18->m_mlgTargetCameraAngles.v[1] = v12;
  v18->m_mlgTargetCameraAngles.v[2] = v9;
}

/*
==============
CG_GetPlayersBarycenter
==============
*/
char CG_GetPlayersBarycenter(const LocalClientNum_t localClientNum, vec3_t *outPosition, float *outHeight)
{
  __int64 v6; 
  int v9; 
  int v10; 
  CgGlobalsMP *LocalClientGlobals; 
  cg_t *v17; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __int64 v20; 
  int v21; 
  int v22; 
  __int128 v23; 
  double ClientAspectRatio; 
  float v25; 
  __int128 v28; 
  __int128 v32; 
  __int128 v36; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  vec3_t outOrigin; 

  v6 = localClientNum;
  _XMM8 = LODWORD(FLOAT_2_1474836e9);
  _XMM9 = LODWORD(FLOAT_N2_1474836e9);
  v9 = 0;
  v10 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  __asm
  {
    vxorpd  xmm7, xmm7, xmm7
    vxorpd  xmm10, xmm10, xmm10
    vxorpd  xmm11, xmm11, xmm11
  }
  _XMM12 = LODWORD(FLOAT_2_1474836e9);
  _XMM13 = LODWORD(FLOAT_N2_1474836e9);
  do
  {
    v17 = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
    if ( v17->HasCharacterInfo(v17, v10) )
    {
      CharacterInfo = CG_GetCharacterInfo(v17, v10);
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v6, CharacterInfo->entityNum);
        if ( Entity )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
          {
            LODWORD(v43) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
            LODWORD(v42) = 2;
            LODWORD(v41) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v41, v42, v43) )
              __debugbreak();
          }
          if ( (unsigned int)v6 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v41) = CgCompassSystem::ms_allocatedCount;
            LODWORD(v40) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v40, v41) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v6] )
          {
            LODWORD(v41) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v41) )
              __debugbreak();
          }
          v20 = CgCompassSystem::ms_compassSystemArray[v6]->GetCompassActor(CgCompassSystem::ms_compassSystemArray[v6], v10);
          if ( v20 )
          {
            v21 = *(_DWORD *)(v20 + 4);
            v22 = LocalClientGlobals->time - 500;
            if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 && LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, v10) && v21 >= v22 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM7 + 1);
              *(double *)&v23 = *(double *)&_XMM7 + outOrigin.v[0];
              _XMM7 = v23;
              *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM11 + 1);
              *(double *)&v23 = *(double *)&_XMM11 + outOrigin.v[2];
              _XMM11 = v23;
              *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM10 + 1);
              *(double *)&v23 = *(double *)&_XMM10 + outOrigin.v[1];
              _XMM10 = v23;
              ++v9;
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
    ++v10;
  }
  while ( v10 < 200 );
  if ( v9 <= 0 )
    return 0;
  ClientAspectRatio = CG_View_GetClientAspectRatio((LocalClientNum_t)v6);
  v25 = *(float *)&ClientAspectRatio;
  _XMM3 = (unsigned int)v9;
  __asm { vcvtdq2pd xmm3, xmm3 }
  *(float *)&ClientAspectRatio = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr)->m_mlgTargetCameraFoV * 0.0087266462;
  v28 = COERCE_UNSIGNED_INT64(1.0 / *(double *)&_XMM3);
  _XMM1 = COERCE_UNSIGNED_INT64(1.0 / *(double *)&_XMM3 * *(double *)&_XMM7);
  __asm { vcvtsd2ss xmm3, xmm1, xmm1 }
  outPosition->v[0] = *(float *)&_XMM3;
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v28 + 1);
  *(double *)&v32 = *(double *)&v28 * *(double *)&_XMM10;
  _XMM2 = v32;
  __asm { vcvtsd2ss xmm1, xmm2, xmm2 }
  *((_QWORD *)&v32 + 1) = *((_QWORD *)&v28 + 1);
  *(double *)&v32 = *(double *)&v28 * *(double *)&_XMM11;
  _XMM3 = v32;
  __asm { vcvtsd2ss xmm2, xmm3, xmm3 }
  outPosition->v[1] = *(float *)&_XMM1;
  v36 = _XMM9;
  *(float *)&v36 = (float)(*(float *)&_XMM9 - *(float *)&_XMM8) * v25;
  _XMM3 = v36;
  outPosition->v[2] = *(float *)&_XMM2;
  __asm { vmaxss  xmm3, xmm3, xmm2 }
  *outHeight = (float)((float)(*(float *)&_XMM3 * 0.5) + 150.0) / tanf_0(*(float *)&ClientAspectRatio);
  return 1;
}

/*
==============
CG_MLGCameraShouldRenderCharacter
==============
*/
_BOOL8 CG_MLGCameraShouldRenderCharacter(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  CoDCasterCameraType MLGCameraType; 
  unsigned __int8 v7; 
  float v8; 
  vec3_t m_mlgCurrentCameraPos; 
  vec3_t outOrigin; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 674, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(CameraManager, localClientNum);
  m_mlgCurrentCameraPos = CameraManager->m_mlgCurrentCameraPos;
  v7 = MLGCameraType - 1;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  v8 = m_mlgCurrentCameraPos.v[2] - outOrigin.v[2];
  return v7 > 1u || (float)((float)((float)(outOrigin.v[1] - m_mlgCurrentCameraPos.v[1]) * (float)(outOrigin.v[1] - m_mlgCurrentCameraPos.v[1])) + (float)((float)(outOrigin.v[0] - m_mlgCurrentCameraPos.v[0]) * (float)(outOrigin.v[0] - m_mlgCurrentCameraPos.v[0]))) >= 225.0 || v8 < 0.0 || v8 >= cent->pose.actor.height;
}

/*
==============
CG_MLG_AngleDistance
==============
*/
float CG_MLG_AngleDistance(const vec3_t *v1, const vec3_t *v2)
{
  float xmm2_4_1; 
  float v3; 
  float result; 

  xmm2_4_1 = v2->v[1] - v1->v[1];
  v3 = v2->v[2] - v1->v[2];
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  LODWORD(result) = COERCE_UNSIGNED_INT((float)((float)(fsqrt((float)((float)(xmm2_4_1 * xmm2_4_1) + (float)((float)(v2->v[0] - v1->v[0]) * (float)(v2->v[0] - v1->v[0]))) + (float)(v3 * v3)) * 0.0027777778) - *(float *)&_XMM4) * 360.0) & _xmm;
  return result;
}

/*
==============
CG_MLG_ArePosesNearlyEqual
==============
*/
bool CG_MLG_ArePosesNearlyEqual(const CameraPose *pose1, const CameraPose *pose2)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 

  v2 = pose2->pos.v[1] - pose1->pos.v[1];
  v3 = pose2->pos.v[2] - pose1->pos.v[2];
  if ( (float)((float)((float)(v2 * v2) + (float)((float)(pose2->pos.v[0] - pose1->pos.v[0]) * (float)(pose2->pos.v[0] - pose1->pos.v[0]))) + (float)(v3 * v3)) > 1.0 )
    return 0;
  v4 = pose2->angles.v[0] - pose1->angles.v[0];
  v5 = pose2->angles.v[1] - pose1->angles.v[1];
  v6 = pose2->angles.v[2] - pose1->angles.v[2];
  v7 = fsqrt((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6)) * 0.0027777778;
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm3, 1 }
  return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v7 - *(float *)&_XMM4) * 360.0) & _xmm) <= 1.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT(pose1->fov - pose2->fov) & _xmm) <= 1.0;
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
float CG_MLG_GetEaseInOutFactor(float linearFactor)
{
  if ( linearFactor >= 0.5 )
    return (float)((float)(4.0 - (float)(linearFactor * 2.0)) * linearFactor) - 1.0;
  else
    return (float)(linearFactor * 2.0) * linearFactor;
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

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, outPosition);
  *outAngles = LocalClientGlobals->refdefViewAngles;
  *outFoV = COERCE_FLOAT(*(_QWORD *)&CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0)->finalFov);
}

/*
==============
CG_MLG_GetTransitionDuration
==============
*/
float CG_MLG_GetTransitionDuration(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  float value; 
  const dvar_t *v4; 
  float v5; 
  CgMLGSpectator *MLGSpectator; 
  CgMLGCameraManager *CameraManager; 
  const dvar_t *v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v11; 
  float v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  float v17; 
  __m128 v20; 
  double v24; 

  v1 = DVARFLT_cg_mlg_cam_animation_min_duration;
  if ( !DVARFLT_cg_mlg_cam_animation_min_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_min_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  value = v1->current.value;
  v4 = DVARFLT_cg_mlg_cam_animation_max_duration;
  if ( !DVARFLT_cg_mlg_cam_animation_max_duration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_max_duration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.value * 1000.0;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  CameraManager = CgMLGSpectator::GetCameraManager(MLGSpectator);
  v8 = DVARFLT_cg_mlg_cam_animation_distance_max_time;
  v9 = (__m128)*(unsigned __int64 *)CameraManager->m_mlgTargetCameraPos.v;
  v10 = (__m128)*(unsigned __int64 *)CameraManager->m_mlgCurrentCameraPos.v;
  v11 = (__m128)*(unsigned __int64 *)CameraManager->m_mlgTargetCameraAngles.v;
  v12 = v9.m128_f32[0] - v10.m128_f32[0];
  v13 = _mm_shuffle_ps(v9, v9, 85);
  v9.m128_f32[0] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v14 = (__m128)*(unsigned __int64 *)CameraManager->m_mlgCurrentCameraAngles.v;
  v16 = v13;
  v16.m128_f32[0] = v13.m128_f32[0] - v9.m128_f32[0];
  v15 = v16;
  v17 = CameraManager->m_mlgTargetCameraPos.v[2] - CameraManager->m_mlgCurrentCameraPos.v[2];
  v9.m128_f32[0] = _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
  v16.m128_f32[0] = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
  fsqrt((float)((float)((float)(v16.m128_f32[0] - v9.m128_f32[0]) * (float)(v16.m128_f32[0] - v9.m128_f32[0])) + (float)((float)(v11.m128_f32[0] - v14.m128_f32[0]) * (float)(v11.m128_f32[0] - v14.m128_f32[0]))) + (float)((float)(CameraManager->m_mlgTargetCameraAngles.v[2] - CameraManager->m_mlgCurrentCameraAngles.v[2]) * (float)(CameraManager->m_mlgTargetCameraAngles.v[2] - CameraManager->m_mlgCurrentCameraAngles.v[2])));
  _XMM1 = 0i64;
  __asm { vroundss xmm4, xmm1, xmm2, 1 }
  v20 = v15;
  v20.m128_f32[0] = fsqrt((float)((float)(v15.m128_f32[0] * v15.m128_f32[0]) + (float)(v12 * v12)) + (float)(v17 * v17));
  _XMM0 = v20;
  __asm
  {
    vmaxss  xmm3, xmm0, xmm3
    vmaxss  xmm6, xmm3, xmm4
  }
  if ( !DVARFLT_cg_mlg_cam_animation_distance_max_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_animation_distance_max_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v24 = I_fclamp(*(float *)&_XMM6 / v8->current.value, 0.0, 1.0);
  return (float)((float)((float)(1.0 - *(float *)&v24) * value) * 1000.0) + (float)(*(float *)&v24 * v5);
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
  double FovDvarDefaultValue; 

  if ( clientNum == -1 )
    return 0;
  Entity = CG_GetEntity(localClientNum, clientNum);
  p_pose = &Entity->pose;
  if ( !Entity || ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
    return 0;
  CG_GetPoseOrigin(&Entity->pose, outPosition);
  CG_GetPoseAngles(p_pose, outAngles);
  FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
  *outFoV = *(float *)&FovDvarDefaultValue;
  return 1;
}

/*
==============
CG_MLG_UpdateFollowerCamera
==============
*/
void CG_MLG_UpdateFollowerCamera(const LocalClientNum_t localClientNum, CgMLGCameraManager *const cameraManager)
{
  CgGlobalsMP *LocalClientGlobals; 
  const MLGSpectatorClientInfo *MLGSpectatorClientInfo; 
  const MLGSpectatorClientInfo *v5; 
  double v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  double v15; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v23; 
  float v24; 
  float v26; 
  float v28; 
  float m_mlgCurrentCameraFoV; 
  vec3_t from; 
  __int64 v31; 
  float v32; 
  __int64 v33; 
  float v34; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  MLGSpectatorClientInfo = CgMLGSpectator::GetMLGSpectatorClientInfo(LocalClientGlobals->m_mlgSpectatorPtr, LocalClientGlobals->predictedPlayerState.clientNum);
  v5 = MLGSpectatorClientInfo;
  if ( MLGSpectatorClientInfo )
  {
    v6 = I_fclamp((float)(MLGSpectatorClientInfo->clientFoV + 60), 60.0, 120.0);
    v7 = v5->clientViewAngles.v[0];
    v8 = v5->clientViewAngles.v[1];
    v9 = LocalClientGlobals->predictedPlayerState.origin.v[0];
    v10 = LocalClientGlobals->predictedPlayerState.origin.v[1];
    v11 = LocalClientGlobals->predictedPlayerState.origin.v[2];
    cameraManager->m_mlgTargetCameraPos.v[0] = v9;
    cameraManager->m_mlgTargetCameraPos.v[1] = v10;
    cameraManager->m_mlgTargetCameraPos.v[2] = v11;
    cameraManager->m_mlgTargetCameraAngles.v[0] = v7;
    cameraManager->m_mlgTargetCameraAngles.v[1] = v8;
    cameraManager->m_mlgTargetCameraAngles.v[2] = 0.0;
    v12 = cameraManager->m_mlgCurrentCameraPos.v[2];
    cameraManager->m_mlgTargetCameraFoV = *(float *)&v6;
    v13 = DVARFLT_cg_mlg_cam_smooth_factor;
    v32 = v12;
    v34 = cameraManager->m_mlgCurrentCameraAngles.v[2];
    v14 = *(float *)&v6;
    v31 = *(_QWORD *)cameraManager->m_mlgCurrentCameraPos.v;
    v33 = *(_QWORD *)cameraManager->m_mlgCurrentCameraAngles.v;
    m_mlgCurrentCameraFoV = cameraManager->m_mlgCurrentCameraFoV;
    from.v[0] = v7;
    from.v[1] = v8;
    from.v[2] = 0.0;
    if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v15 = I_fclamp((float)((float)LocalClientGlobals->frametime * v13->current.value) * 0.94999999, 0.0, 1.0);
    v16 = DVARFLT_cg_mlg_cam_smooth_factor;
    v17 = (float)((float)(v9 - *(float *)&v31) * *(float *)&v15) + *(float *)&v31;
    v18 = (float)((float)(v10 - *((float *)&v31 + 1)) * *(float *)&v15) + *((float *)&v31 + 1);
    v28 = (float)((float)(v11 - v32) * *(float *)&v15) + v32;
    if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v19 = I_fclamp((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0] * v16->current.value) * 0.94999999, 0.0, 1.0);
    v20 = *(float *)&v19;
    AnglesNormalize360(&from, &from);
    _XMM10 = 0i64;
    __asm { vroundss xmm0, xmm10, xmm2, 1 }
    v23 = (float)((float)((float)((float)((float)(from.v[0] - *(float *)&v33) * 0.0027777778) - *(float *)&_XMM0) * 360.0) * v20) + *(float *)&v33;
    v24 = (float)(from.v[1] - *((float *)&v33 + 1)) * 0.0027777778;
    cameraManager->m_mlgCurrentCameraPos.v[0] = v17;
    cameraManager->m_mlgCurrentCameraPos.v[1] = v18;
    __asm { vroundss xmm3, xmm10, xmm2, 1 }
    *(float *)&_XMM3 = (float)((float)((float)(v24 - *(float *)&_XMM3) * 360.0) * v20) + *((float *)&v33 + 1);
    v26 = from.v[2] - v34;
    cameraManager->m_mlgCurrentCameraPos.v[2] = v28;
    __asm { vroundss xmm2, xmm10, xmm1, 1 }
    cameraManager->m_mlgCurrentCameraAngles.v[1] = *(float *)&_XMM3;
    *(float *)&_XMM3 = (float)((float)((float)((float)(v26 * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v20) + v34;
    cameraManager->m_mlgCurrentCameraAngles.v[0] = v23;
    cameraManager->m_mlgCurrentCameraAngles.v[2] = *(float *)&_XMM3;
    cameraManager->m_mlgCurrentCameraFoV = (float)((float)(1.0 - v20) * m_mlgCurrentCameraFoV) + (float)(v20 * v14);
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
  const dvar_t *v2; 
  const dvar_t *v6; 
  float value; 
  ParticleSystemHandle *m_arrowFx; 
  __int64 v9; 
  CgMLGCameraManager *m_cameraManager; 
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  CgGlobalsMP *LocalClientGlobals; 
  int cameraAerialFocusedClient; 
  CgMLGCameraManager *v18; 
  int v19; 
  CgMLGSpectator *v20; 
  CgGlobalsMP *v21; 
  unsigned int m_localFocusedPlayer; 
  cg_t *v23; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __m128 v26; 
  CgMLGCameraManager *v27; 
  CgMLGCameraManager *v28; 
  double FovDvarDefaultValue; 
  float v31; 

  v2 = DVARFLT_cg_mlg_aerialcam_pitch;
  if ( !DVARFLT_cg_mlg_aerialcam_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  _XMM7 = v2->current.unsignedInt;
  v6 = DVARFLT_cg_mlg_aerialcam_base_vertical_distance;
  if ( !DVARFLT_cg_mlg_aerialcam_base_vertical_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_base_vertical_distance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  m_arrowFx = this->m_arrowFx;
  v9 = 12i64;
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
    --v9;
  }
  while ( v9 );
  *(_QWORD *)m_arrowFx = 0i64;
  *((_QWORD *)m_arrowFx + 1) = 0i64;
  *((_QWORD *)m_arrowFx + 2) = 0i64;
  *((_QWORD *)m_arrowFx + 3) = 0i64;
  v31 = value;
  _XMM6 = 0i64;
  __asm { vunpcklps xmm0, xmm6, xmm6 }
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  m_cameraManager = this->m_cameraManager;
  *(double *)this->m_currentOffset.v = *(double *)&_XMM0;
  __asm { vunpcklps xmm0, xmm7, xmm6 }
  this->m_currentOffset.v[2] = v31;
  *(double *)this->m_currentAngles.v = *(double *)&_XMM0;
  this->m_currentAngles.v[2] = 0.0;
  clientNum = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    cameraAerialFocusedClient = CgMLGSpectator::GetMLGSpectatorClientInfo(MLGSpectator, clientNum)->cameraAerialFocusedClient;
  else
    cameraAerialFocusedClient = m_cameraManager->m_localFocusedPlayer;
  v18 = this->m_cameraManager;
  this->m_focusOnBarycenter = 0;
  this->m_lastLockStatus = cameraAerialFocusedClient >= 0;
  *(double *)this->m_groundPosition.v = *(double *)v18->m_mlgCurrentCameraPos.v;
  this->m_groundPosition.v[2] = v18->m_mlgCurrentCameraPos.v[2];
  this->m_lastFollowedClientNum = -1;
  this->m_elapsedTransitionTime = 0.0;
  this->m_currentTransitionDuration = 0.0;
  v19 = CG_GetLocalClientGlobals(localClientNum)->clientNum;
  v20 = CgMLGSpectator::GetMLGSpectator(localClientNum);
  v21 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( CG_GetCharacterInfo(v21, v21->clientNum)->team == TEAM_FOLLOWER )
    m_localFocusedPlayer = CgMLGSpectator::GetMLGSpectatorClientInfo(v20, v19)->cameraAerialFocusedClient;
  else
    m_localFocusedPlayer = v18->m_localFocusedPlayer;
  v23 = CG_GetLocalClientGlobals(localClientNum);
  if ( v23->HasCharacterInfo(v23, m_localFocusedPlayer) && (CharacterInfo = CG_GetCharacterInfo(v23, m_localFocusedPlayer)) != NULL && (Entity = CG_GetEntity(localClientNum, CharacterInfo->entityNum)) != NULL && ((Entity->nextState.eType - 1) & 0xFFEF) == 0 )
  {
    CG_GetPoseOrigin(&Entity->pose, &this->m_groundPosition);
  }
  else
  {
    v26 = (__m128)*(unsigned __int64 *)this->m_cameraManager->m_mlgCurrentCameraPos.v;
    this->m_groundPosition.v[1] = _mm_shuffle_ps(v26, v26, 85).m128_f32[0];
    this->m_groundPosition.v[0] = v26.m128_f32[0];
    this->m_groundPosition.v[2] = 0.0;
  }
  v27 = this->m_cameraManager;
  v27->m_mlgTargetCameraAngles.v[0] = *(float *)&_XMM7;
  *(_QWORD *)&v27->m_mlgTargetCameraAngles.y = 0i64;
  v28 = this->m_cameraManager;
  FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
  v28->m_mlgTargetCameraFoV = *(float *)&FovDvarDefaultValue;
  __asm { vunpcklps xmm0, xmm6, xmm6 }
  *(double *)this->m_lastInputVector.v = *(double *)&_XMM0;
  this->m_lastInputVector.v[2] = 0.0;
}

/*
==============
AerialCamEnteringCameraState::EnterState
==============
*/
void AerialCamEnteringCameraState::EnterState(AerialCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v7; 
  ClientFov *ViewFovBySpace; 
  CgMLGCameraManager *m_cameraManager; 
  float v10; 
  float v11; 
  __int64 v12; 
  float v13; 
  const dvar_t *v14; 
  CgMLGCameraManager *v15; 
  double FovDvarDefaultValue; 
  ClientFov result; 
  vec3_t outOrg; 

  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v5 = LocalClientGlobals->refdefViewAngles.v[0];
  v6 = LocalClientGlobals->refdefViewAngles.v[1];
  v7 = LocalClientGlobals->refdefViewAngles.v[2];
  ViewFovBySpace = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
  m_cameraManager = this->m_cameraManager;
  v10 = outOrg.v[0];
  v11 = outOrg.v[1];
  v12 = *(_QWORD *)&ViewFovBySpace->finalFov;
  v13 = outOrg.v[2];
  m_cameraManager->m_mlgCurrentCameraPos.v[0] = outOrg.v[0];
  m_cameraManager->m_mlgCurrentCameraPos.v[1] = v11;
  m_cameraManager->m_mlgCurrentCameraPos.v[2] = v13;
  m_cameraManager->m_mlgCurrentCameraAngles.v[0] = v5;
  m_cameraManager->m_mlgCurrentCameraAngles.v[1] = v6;
  m_cameraManager->m_mlgCurrentCameraAngles.v[2] = v7;
  m_cameraManager->m_mlgCurrentCameraFoV = *(float *)&v12;
  v14 = DVARFLT_cg_mlg_aerialcam_pitch;
  if ( !DVARFLT_cg_mlg_aerialcam_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_pitch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  m_cameraManager->m_mlgTargetCameraAngles.v[0] = v14->current.value;
  *(_QWORD *)&m_cameraManager->m_mlgTargetCameraAngles.y = 0i64;
  v15 = this->m_cameraManager;
  v15->m_mlgTargetCameraPos.v[0] = v10;
  v15->m_mlgTargetCameraPos.v[1] = v11;
  v15->m_mlgTargetCameraPos.v[2] = v13;
  FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
  v15->m_mlgTargetCameraFoV = *(float *)&FovDvarDefaultValue;
}

/*
==============
FreeCamActiveCameraState::EnterState
==============
*/
void FreeCamActiveCameraState::EnterState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  float v4; 

  _XMM3 = 0i64;
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  m_cameraManager = this->m_cameraManager;
  *(_QWORD *)&this->m_elapsedTransitionTime = 0i64;
  this->m_lastTargetPos = m_cameraManager->m_mlgTargetCameraPos;
  *(double *)this->m_lastTargetAngles.v = *(double *)m_cameraManager->m_mlgTargetCameraAngles.v;
  v4 = m_cameraManager->m_mlgTargetCameraAngles.v[2];
  __asm { vunpcklps xmm0, xmm3, xmm3 }
  *(double *)this->m_lastInputVector.v = *(double *)&_XMM0;
  this->m_lastTargetAngles.v[2] = v4;
  __asm { vunpcklps xmm0, xmm3, xmm3 }
  this->m_lastInputVector.v[2] = 0.0;
  *(double *)this->m_lastInputAngles.v = *(double *)&_XMM0;
  this->m_lastInputAngles.v[2] = 0.0;
  this->m_lastInputFoV = 0.0;
  *(float *)&_XMM0 = m_cameraManager->m_mlgTargetCameraFoV;
  this->m_lastTargetFoV = *(float *)&_XMM0;
  this->m_entryFoV = *(float *)&_XMM0;
}

/*
==============
FreeCamEnteringCameraState::EnterState
==============
*/
void FreeCamEnteringCameraState::EnterState(FreeCamEnteringCameraState *this, const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v5; 
  float v6; 
  float v7; 
  double v8; 
  CgMLGCameraManager *m_cameraManager; 
  CameraPose *p_m_mlgMemorizedFreeCamPose; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  double FovDvarDefaultValue; 
  float v18; 
  float v19; 
  float v20; 
  CgMLGCameraManager *v21; 
  CgMLGCameraManager *v22; 
  CgMLGCameraManager *v23; 
  CgMLGCameraManager *v24; 
  CgMLGCameraManager *v25; 
  double TransitionDuration; 
  float v27; 
  float v28; 
  double v29; 
  ClientFov result; 
  vec3_t outOrg; 
  tmat33_t<vec3_t> axis; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  v5 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&v5->refdef.view, &outOrg);
  v6 = v5->refdefViewAngles.v[0];
  v7 = v5->refdefViewAngles.v[1];
  v27 = v6;
  v28 = v7;
  v8 = *(double *)&CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0)->finalFov;
  m_cameraManager = this->m_cameraManager;
  v29 = v8;
  p_m_mlgMemorizedFreeCamPose = &m_cameraManager->m_mlgMemorizedFreeCamPose;
  if ( !m_cameraManager )
    p_m_mlgMemorizedFreeCamPose = NULL;
  if ( p_m_mlgMemorizedFreeCamPose && p_m_mlgMemorizedFreeCamPose->hasBeenSet )
  {
    v11 = p_m_mlgMemorizedFreeCamPose->pos.v[0];
    v12 = p_m_mlgMemorizedFreeCamPose->pos.v[1];
    v13 = p_m_mlgMemorizedFreeCamPose->pos.v[2];
    v14 = p_m_mlgMemorizedFreeCamPose->angles.v[0];
    v15 = p_m_mlgMemorizedFreeCamPose->angles.v[1];
    v16 = p_m_mlgMemorizedFreeCamPose->angles.v[2];
    *(float *)&FovDvarDefaultValue = p_m_mlgMemorizedFreeCamPose->fov;
    v18 = outOrg.v[2];
    v19 = outOrg.v[1];
    v20 = outOrg.v[0];
    p_m_mlgMemorizedFreeCamPose->hasBeenSet = 0;
  }
  else
  {
    v20 = outOrg.v[0];
    v19 = outOrg.v[1];
    v14 = v6;
    v18 = outOrg.v[2] + LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
    outOrg.v[0] = 0.0;
    outOrg.v[1] = v7;
    outOrg.v[2] = 0.0;
    v15 = v7;
    v16 = 0.0;
    AnglesToAxis(&outOrg, &axis);
    v11 = (float)((float)(20.0 * axis.m[2].v[0]) - (float)(50.0 * axis.m[0].v[0])) + v20;
    v13 = (float)((float)(20.0 * axis.m[2].v[2]) - (float)(50.0 * axis.m[0].v[2])) + v18;
    v12 = (float)((float)(20.0 * axis.m[2].v[1]) - (float)(50.0 * axis.m[0].v[1])) + v19;
    FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
  }
  v21 = this->m_cameraManager;
  v21->m_mlgTargetCameraPos.v[0] = v11;
  v21->m_mlgTargetCameraPos.v[1] = v12;
  v21->m_mlgTargetCameraPos.v[2] = v13;
  v22 = this->m_cameraManager;
  v22->m_mlgTargetCameraAngles.v[0] = v14;
  v22->m_mlgTargetCameraAngles.v[1] = v15;
  v22->m_mlgTargetCameraAngles.v[2] = v16;
  this->m_cameraManager->m_mlgTargetCameraFoV = *(float *)&FovDvarDefaultValue;
  if ( v20 == 0.0 && v19 == 0.0 && v18 == 0.0 )
  {
    v23 = this->m_cameraManager;
    v23->m_mlgCurrentCameraPos.v[0] = v11;
    v23->m_mlgCurrentCameraPos.v[1] = v12;
    v23->m_mlgCurrentCameraPos.v[2] = v13;
  }
  else
  {
    v24 = this->m_cameraManager;
    v24->m_mlgCurrentCameraPos.v[0] = v20;
    v24->m_mlgCurrentCameraPos.v[1] = v19;
    v24->m_mlgCurrentCameraPos.v[2] = v18;
  }
  v25 = this->m_cameraManager;
  v25->m_mlgCurrentCameraAngles.v[0] = v27;
  v25->m_mlgCurrentCameraAngles.v[1] = v28;
  v25->m_mlgCurrentCameraAngles.v[2] = 0.0;
  this->m_cameraManager->m_mlgCurrentCameraFoV = *(float *)&v29;
  this->m_elapsedTransitionTime = 0.0;
  TransitionDuration = CG_MLG_GetTransitionDuration(localClientNum);
  this->m_currentTransitionDuration = *(float *)&TransitionDuration;
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
  centity_t *v7; 
  __m128 v8; 
  float v9; 
  float v10; 
  double FovDvarDefaultValue; 
  CgMLGCameraManager *m_cameraManager; 
  float m_mlgCurrentCameraFoV; 
  float v14; 
  CgMLGCameraManager *v15; 
  double TransitionDuration; 
  vec3_t outOrigin; 
  float v18; 

  MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
  SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
  this->m_cameraManager->m_shouldRenderThirdPerson = 1;
  this->m_elapsedTransitionTime = 0.0;
  if ( SelectedClientNum == -1 || (Entity = CG_GetEntity(localClientNum, SelectedClientNum), (v7 = Entity) == NULL) || ((Entity->nextState.eType - 1) & 0xFFEF) != 0 )
  {
    m_cameraManager = this->m_cameraManager;
    v14 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
    *(_QWORD *)outOrigin.v = *(_QWORD *)m_cameraManager->m_mlgCurrentCameraPos.v;
    outOrigin.v[2] = v14;
    v8 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraAngles.v;
    m_mlgCurrentCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
    v18 = m_cameraManager->m_mlgCurrentCameraAngles.v[2];
    v10 = v18;
    LODWORD(v9) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
  }
  else
  {
    CG_GetPoseOrigin(&Entity->pose, &outOrigin);
    v8.m128_i32[0] = LODWORD(v7->pose.angles.v[0]);
    v9 = v7->pose.angles.v[1];
    v10 = v7->pose.angles.v[2];
    FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
    m_cameraManager = this->m_cameraManager;
    m_mlgCurrentCameraFoV = *(float *)&FovDvarDefaultValue;
  }
  m_cameraManager->m_mlgTargetCameraPos = outOrigin;
  v15 = this->m_cameraManager;
  v15->m_mlgTargetCameraAngles.v[0] = v8.m128_f32[0];
  v15->m_mlgTargetCameraAngles.v[1] = v9;
  v15->m_mlgTargetCameraAngles.v[2] = v10;
  this->m_cameraManager->m_mlgTargetCameraFoV = m_mlgCurrentCameraFoV;
  if ( (unsigned __int8)(CG_MainMP_GetPostGameState(localClientNum) - 3) <= 1u )
    LODWORD(TransitionDuration) = 0;
  else
    TransitionDuration = CG_MLG_GetTransitionDuration(localClientNum);
  this->m_currentTransitionDuration = *(float *)&TransitionDuration;
}

/*
==============
AerialCamActiveCameraState::ExitState
==============
*/
void AerialCamActiveCameraState::ExitState(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  ParticleSystemHandle *m_arrowFx; 
  __int64 v4; 
  __int64 v5; 
  __m128 v6; 
  float v7; 
  float v8; 
  __m128 v9; 
  __int64 v10; 
  __int64 v11; 

  m_cameraManager = this->m_cameraManager;
  m_arrowFx = this->m_arrowFx;
  v4 = localClientNum;
  v5 = 200i64;
  v6 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraPos.v;
  v7 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
  m_cameraManager->m_mlgTargetCameraPos.v[0] = v6.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[1] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[2] = v7;
  v8 = m_cameraManager->m_mlgCurrentCameraAngles.v[2];
  v9 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraAngles.v;
  m_cameraManager->m_mlgTargetCameraAngles.v[1] = _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraAngles.v[2] = v8;
  m_cameraManager->m_mlgTargetCameraAngles.v[0] = v9.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
  do
  {
    if ( *m_arrowFx )
    {
      if ( (unsigned int)v4 >= 2 )
      {
        LODWORD(v11) = 2;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
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
  CgMLGCameraManager *m_cameraManager; 
  __m128 v3; 
  float v4; 
  float v5; 
  __m128 v6; 

  m_cameraManager = this->m_cameraManager;
  v3 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraPos.v;
  v4 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
  m_cameraManager->m_mlgTargetCameraPos.v[0] = v3.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[1] = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[2] = v4;
  v5 = m_cameraManager->m_mlgCurrentCameraAngles.v[2];
  v6 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraAngles.v;
  m_cameraManager->m_mlgTargetCameraAngles.v[1] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraAngles.v[2] = v5;
  m_cameraManager->m_mlgTargetCameraAngles.v[0] = v6.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
}

/*
==============
FreeCamActiveCameraState::ExitState
==============
*/
void FreeCamActiveCameraState::ExitState(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  __m128 v3; 
  float v4; 
  float v5; 
  __m128 v6; 

  m_cameraManager = this->m_cameraManager;
  v3 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraPos.v;
  v4 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
  m_cameraManager->m_mlgTargetCameraPos.v[0] = v3.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[1] = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[2] = v4;
  v5 = m_cameraManager->m_mlgCurrentCameraAngles.v[2];
  v6 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraAngles.v;
  m_cameraManager->m_mlgTargetCameraAngles.v[1] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraAngles.v[2] = v5;
  m_cameraManager->m_mlgTargetCameraAngles.v[0] = v6.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
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
  CgMLGCameraManager *m_cameraManager; 
  __m128 v3; 
  float v4; 
  float v5; 
  __m128 v6; 

  m_cameraManager = this->m_cameraManager;
  v3 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraAngles.v;
  v4 = m_cameraManager->m_mlgCurrentCameraAngles.v[2];
  m_cameraManager->m_mlgTargetCameraAngles.v[0] = v3.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraAngles.v[1] = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraAngles.v[2] = v4;
  v5 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
  v6 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgCurrentCameraPos.v;
  m_cameraManager->m_mlgTargetCameraPos.v[1] = _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
  m_cameraManager->m_mlgTargetCameraPos.v[2] = v5;
  m_cameraManager->m_mlgTargetCameraPos.v[0] = v6.m128_f32[0];
  m_cameraManager->m_mlgTargetCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
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
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int64 v7; 
  CgGlobalsMP *LocalClientGlobals; 
  float v9; 
  float v10; 
  float v11; 
  CgGlobalsMP *v12; 
  unsigned int clientNum; 
  int i; 
  cg_t *v15; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  __int64 v18; 
  int v19; 
  int v20; 
  float v21; 
  CgMLGCameraManager *m_cameraManager; 
  cg_t *v23; 
  const char *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  vec3_t outOrigin; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 

  v34 = v2;
  v33 = v3;
  v7 = localClientNum;
  v32 = v4;
  v31 = v5;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v9 = this->m_currentOffset.v[0] + this->m_groundPosition.v[0];
  v10 = this->m_groundPosition.v[1] + this->m_currentOffset.v[1];
  v11 = FLOAT_N1_0;
  v12 = LocalClientGlobals;
  clientNum = -1;
  for ( i = 0; i < 200; ++i )
  {
    v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    if ( v15->HasCharacterInfo(v15, i) )
    {
      CharacterInfo = CG_GetCharacterInfo(v15, i);
      if ( CharacterInfo )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v7, CharacterInfo->entityNum);
        if ( Entity )
        {
          if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
          {
            LODWORD(v28) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
            LODWORD(v27) = 2;
            LODWORD(v26) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v26, v27, v28) )
              __debugbreak();
          }
          if ( (unsigned int)v7 >= CgCompassSystem::ms_allocatedCount )
          {
            LODWORD(v26) = CgCompassSystem::ms_allocatedCount;
            LODWORD(v25) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v25, v26) )
              __debugbreak();
          }
          if ( !CgCompassSystem::ms_compassSystemArray[v7] )
          {
            LODWORD(v26) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v26) )
              __debugbreak();
          }
          v18 = CgCompassSystem::ms_compassSystemArray[v7]->GetCompassActor(CgCompassSystem::ms_compassSystemArray[v7], i);
          if ( v18 )
          {
            v19 = *(_DWORD *)(v18 + 4);
            v20 = v12->time - 500;
            if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 && v12->HasCharacterInfo(v12, i) && v19 >= v20 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              v21 = fsqrt((float)((float)(outOrigin.v[1] - v10) * (float)(outOrigin.v[1] - v10)) + (float)((float)(outOrigin.v[0] - v9) * (float)(outOrigin.v[0] - v9)));
              if ( v11 < 0.0 || v21 < v11 )
              {
                clientNum = Entity->nextState.clientNum;
                v11 = v21;
              }
            }
          }
        }
      }
    }
  }
  if ( clientNum != -1 )
  {
    this->m_focusOnBarycenter = 0;
    m_cameraManager = this->m_cameraManager;
    v23 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    v24 = j_va("setmlgcamerafocusedclient %i %i\n", (unsigned int)v23->clientNum, clientNum);
    Cbuf_AddText((LocalClientNum_t)v7, v24);
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
  return this->m_aerialMaxHeight;
}

/*
==============
CgMLGCameraManager::GetAerialMinHeight
==============
*/
float CgMLGCameraManager::GetAerialMinHeight(CgMLGCameraManager *this)
{
  return this->m_aerialMinHeight;
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
  *(double *)result->v = *(double *)this->m_mlgCurrentCameraAngles.v;
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
  return this->m_mlgCurrentCameraFoV;
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
  *(double *)result->v = *(double *)this->m_mlgCurrentCameraPos.v;
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
  *(double *)result->v = *(double *)this->m_mlgTargetCameraAngles.v;
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
  return this->m_mlgTargetCameraFoV;
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
  *(double *)result->v = *(double *)this->m_mlgTargetCameraPos.v;
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
  __int128 v2; 
  int v5; 
  int v6; 
  int v7; 
  const char *CommandForBinding; 
  int GamepadKeyNum; 
  const char *v10; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  float value; 
  const dvar_t *v15; 
  const char *v16; 
  float v17; 
  __int128 v18; 
  double v19; 
  float v20; 
  double v21; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  __int128 v29; 
  __int128 v30; 
  const dvar_t *v31; 
  __int128 v32; 
  float v36; 
  float v37; 
  float v38; 
  double v39; 
  float v40; 
  float v41; 
  float v42; 
  double v43; 
  int frametime; 
  float v45; 
  int v46; 
  double v47; 
  int v48; 
  const dvar_t *v49; 
  float v50; 
  __int128 v51; 
  __int128 v52; 
  int keynum; 
  int v57; 
  int v58; 
  int BoundKey; 
  int v60; 
  CgGlobalsMP *LocalClientGlobals; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  BoundKey = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_UP, INVALID, 1);
  v60 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_DOWN, INVALID, 1);
  keynum = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_FORWARD, INVALID, 1);
  v5 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_BACKWARD, INVALID, 1);
  v57 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_LEFT, INVALID, 1);
  v58 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_RIGHT, INVALID, 1);
  v6 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_SPEEDUP, INVALID, 1);
  v7 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, VEC3_POINTER|INT_VALUE, BIND_CODCASTER_MLGCAMERA_SLOWDOWN, INVALID, 1);
  CommandForBinding = Com_Keys_GetCommandForBinding(230);
  GamepadKeyNum = CG_MLG_GetGamepadKeyNum(localClientNum, CommandForBinding);
  v10 = Com_Keys_GetCommandForBinding(231);
  v11 = CG_MLG_GetGamepadKeyNum(localClientNum, v10);
  v12 = 0;
  if ( CL_Keys_IsKeyDown(localClientNum, v6) || CL_Keys_IsKeyDown(localClientNum, GamepadKeyNum) )
    v12 = 1;
  if ( CL_Keys_IsKeyDown(localClientNum, v7) || CL_Keys_IsKeyDown(localClientNum, v11) )
    --v12;
  v13 = DVARFLT_cg_mlg_freecam_speed_base;
  if ( !DVARFLT_cg_mlg_freecam_speed_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_base") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  if ( v12 <= 0 )
  {
    if ( v12 >= 0 )
      goto LABEL_19;
    v15 = DVARFLT_cg_mlg_freecam_speed_slow_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_slow_factor )
    {
      v16 = "cg_mlg_freecam_speed_slow_factor";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v16) )
        __debugbreak();
    }
  }
  else
  {
    v15 = DVARFLT_cg_mlg_freecam_speed_fast_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_fast_factor )
    {
      v16 = "cg_mlg_freecam_speed_fast_factor";
      goto LABEL_16;
    }
  }
  Dvar_CheckFrontendServerThread(v15);
  value = value * v15->current.value;
LABEL_19:
  *(double *)&v2 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_Y);
  v17 = *(float *)&v2;
  *(double *)&v2 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_X);
  v18 = v2;
  v19 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LTRIGGER);
  v20 = *(float *)&v19;
  v21 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RTRIGGER);
  _XMM10 = 0i64;
  v24 = v20 - *(float *)&v21;
  v23 = v20 - *(float *)&v21;
  if ( v17 == 0.0 )
    v25 = FLOAT_1_0;
  else
    LODWORD(v25) = LODWORD(v17) & _xmm;
  if ( *(float *)&v18 == 0.0 )
    v26 = FLOAT_1_0;
  else
    LODWORD(v26) = v18 & _xmm;
  if ( v24 == 0.0 )
    v27 = FLOAT_1_0;
  else
    LODWORD(v27) = LODWORD(v24) & _xmm;
  __asm { vunpcklps xmm0, xmm10, xmm10 }
  *(double *)this->m_currentAngles.v = *(double *)&_XMM0;
  this->m_currentAngles.v[2] = 0.0;
  if ( CL_Keys_IsKeyDown(localClientNum, keynum) )
    v17 = v17 + 1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, v5) )
    v17 = v17 + -1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, v57) )
  {
    v29 = v18;
    *(float *)&v29 = *(float *)&v18 + -1.0;
    v18 = v29;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, v58) )
  {
    v30 = v18;
    *(float *)&v30 = *(float *)&v18 + 1.0;
    v18 = v30;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, BoundKey) )
    v23 = v23 + 1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, v60) )
    v23 = v23 + -1.0;
  v31 = DVARFLT_cg_mlg_cam_smooth_factor;
  v32 = v18;
  *(float *)&v32 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(v17 * v17)) + (float)(v23 * v23));
  _XMM3 = v32;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v36 = (float)(v17 * (float)(1.0 / *(float *)&_XMM0)) * v25;
  v37 = (float)(v23 * (float)(1.0 / *(float *)&_XMM0)) * v27;
  v38 = (float)(*(float *)&v18 * (float)(1.0 / *(float *)&_XMM0)) * v26;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  v39 = I_fclamp((float)LocalClientGlobals->frametime * v31->current.value, 0.0, 1.0);
  v40 = (float)((float)(v36 - this->m_lastInputVector.v[0]) * *(float *)&v39) + this->m_lastInputVector.v[0];
  v41 = (float)((float)(v38 - this->m_lastInputVector.v[1]) * *(float *)&v39) + this->m_lastInputVector.v[1];
  v42 = (float)((float)(v37 - this->m_lastInputVector.v[2]) * *(float *)&v39) + this->m_lastInputVector.v[2];
  this->m_lastInputVector.v[2] = v42;
  this->m_lastInputVector.v[0] = v40;
  this->m_lastInputVector.v[1] = v41;
  v43 = I_fclamp(v40, -1.0, 1.0);
  frametime = LocalClientGlobals->frametime;
  v45 = *(float *)&v43;
  I_fclamp(v41, -1.0, 1.0);
  v46 = LocalClientGlobals->frametime;
  v47 = I_fclamp(v42, -1.0, 1.0);
  v48 = LocalClientGlobals->frametime;
  this->m_currentOffset.v[0] = (float)((float)(v45 * value) * (float)frametime) + this->m_currentOffset.v[0];
  this->m_currentOffset.v[1] = this->m_currentOffset.v[1] - (float)((float)(v41 * value) * (float)v46);
  this->m_currentOffset.v[2] = (float)((float)(*(float *)&v47 * value) * (float)v48) + this->m_currentOffset.v[2];
  v49 = DVARFLT_cg_mlg_aerialcam_maximal_tether_radius;
  if ( !DVARFLT_cg_mlg_aerialcam_maximal_tether_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_aerialcam_maximal_tether_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v49);
  v50 = v49->current.value;
  if ( CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum) > -1 )
  {
    v51 = LODWORD(this->m_currentOffset.v[0]);
    v52 = v51;
    *(float *)&v52 = (float)(*(float *)&v51 * *(float *)&v51) + (float)(this->m_currentOffset.v[1] * this->m_currentOffset.v[1]);
    if ( *(float *)&v52 > (float)(v50 * v50) )
    {
      *(float *)&v52 = fsqrt(*(float *)&v52);
      _XMM1 = v52;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm9, xmm0
      }
      this->m_currentOffset.v[0] = *(float *)&v51 * (float)(1.0 / *(float *)&_XMM0);
      this->m_currentOffset.v[1] = (float)(1.0 / *(float *)&_XMM0) * this->m_currentOffset.v[1];
      this->m_currentOffset.v[0] = v50 * this->m_currentOffset.v[0];
      this->m_currentOffset.v[1] = v50 * this->m_currentOffset.v[1];
    }
  }
}

/*
==============
FreeCamActiveCameraState::HandleInputsInternal
==============
*/
void FreeCamActiveCameraState::HandleInputsInternal(FreeCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  keyNum_t v5; 
  const char *CommandForBinding; 
  int GamepadKeyNum; 
  const char *v8; 
  int v9; 
  int v10; 
  int v13; 
  float v16; 
  const dvar_t *v17; 
  double v18; 
  float v19; 
  const dvar_t *v20; 
  __int128 unsignedInt; 
  const dvar_t *v22; 
  bool enabled; 
  bool v24; 
  const dvar_t *v25; 
  int v26; 
  float value; 
  const dvar_t *v28; 
  const char *v29; 
  __int128 v30; 
  double v31; 
  float v32; 
  double v33; 
  float v34; 
  double v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  __int128 v41; 
  __int128 v42; 
  const dvar_t *v43; 
  __int128 v44; 
  float v48; 
  float v49; 
  float v50; 
  double v51; 
  float v52; 
  float v53; 
  float v54; 
  double v55; 
  float v56; 
  double v57; 
  float v58; 
  double v59; 
  float v60; 
  double v61; 
  float v62; 
  double ClientLookInversion; 
  float v64; 
  double v65; 
  const dvar_t *v66; 
  float v67; 
  float v68; 
  double v69; 
  float v72; 
  float v74; 
  float v75; 
  float v77; 
  keyNum_t v78; 
  keyNum_t v79; 
  keyNum_t v80; 
  keyNum_t v81; 
  keyNum_t v82; 
  keyNum_t BoundKey; 
  keyNum_t v84; 
  float v85; 
  int keynum; 
  int keynuma; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  BoundKey = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_UP, INVALID, 1);
  v84 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_DOWN, INVALID, 1);
  v79 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_FORWARD, INVALID, 1);
  v80 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_BACKWARD, INVALID, 1);
  v81 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_LEFT, INVALID, 1);
  v82 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_RIGHT, INVALID, 1);
  v5 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_SPEEDUP, INVALID, 1);
  v78 = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_MLGCAMERA_SLOWDOWN, INVALID, 1);
  CommandForBinding = Com_Keys_GetCommandForBinding(230);
  GamepadKeyNum = CG_MLG_GetGamepadKeyNum(localClientNum, CommandForBinding);
  v8 = Com_Keys_GetCommandForBinding(231);
  keynum = CG_MLG_GetGamepadKeyNum(localClientNum, v8);
  v9 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_FOV_INCREASE, INVALID, 1);
  v10 = (unsigned __int8)CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_FOV_DECREASE, INVALID, 1);
  _XMM9 = LODWORD(FLOAT_1_0);
  _XMM0 = (unsigned int)CL_Keys_IsKeyDown(localClientNum, v9);
  v13 = 0;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm9, xmm15, xmm2
  }
  if ( CL_Keys_IsKeyDown(localClientNum, v10) )
    v16 = *(float *)&_XMM0 + -1.0;
  else
    v16 = *(float *)&_XMM0;
  v17 = DVARFLT_cg_mlg_cam_smooth_factor;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = I_fclamp((float)LocalClientGlobals->frametime * v17->current.value, 0.0, 1.0);
  v19 = (float)((float)(v16 - this->m_lastInputFoV) * *(float *)&v18) + this->m_lastInputFoV;
  this->m_lastInputFoV = v19;
  this->m_updatedFoV = (float)((float)LocalClientGlobals->frametime * v19) * 0.050000001;
  v20 = DVARFLT_cg_mlg_freecam_sensitivity;
  if ( !DVARFLT_cg_mlg_freecam_sensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_sensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  unsignedInt = v20->current.unsignedInt;
  v22 = DVARBOOL_cg_mlg_freecam_speed_toggle;
  v85 = *(float *)&unsignedInt;
  if ( !DVARBOOL_cg_mlg_freecam_speed_toggle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_toggle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  enabled = v22->current.enabled;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v5) || CL_Keys_IsKeyDown(localClientNum, GamepadKeyNum) )
  {
    if ( enabled )
    {
      if ( !this->m_speedUpKeyDown )
      {
        v24 = !this->m_speedUp;
        this->m_slowDown = 0;
        this->m_speedUp = v24;
      }
    }
    else
    {
      this->m_speedUp = 1;
    }
    this->m_speedUpKeyDown = 1;
  }
  else
  {
    this->m_speedUpKeyDown = 0;
    if ( !enabled )
      this->m_speedUp = 0;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v78) || CL_Keys_IsKeyDown(localClientNum, keynum) )
  {
    if ( enabled )
    {
      if ( !this->m_slowDownKeyDown )
      {
        v24 = !this->m_slowDown;
        this->m_speedUp = 0;
        this->m_slowDown = v24;
      }
    }
    else
    {
      this->m_slowDown = 1;
    }
    this->m_slowDownKeyDown = 1;
  }
  else
  {
    this->m_slowDownKeyDown = 0;
    if ( !enabled )
      this->m_slowDown = 0;
  }
  v25 = DVARFLT_cg_mlg_freecam_speed_base;
  LOBYTE(v13) = this->m_speedUp;
  v26 = v13 - 1;
  if ( !this->m_slowDown )
    v26 = v13;
  if ( !DVARFLT_cg_mlg_freecam_speed_base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_freecam_speed_base") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  value = v25->current.value;
  if ( v26 <= 0 )
  {
    if ( v26 >= 0 )
      goto LABEL_45;
    v28 = DVARFLT_cg_mlg_freecam_speed_slow_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_slow_factor )
    {
      v29 = "cg_mlg_freecam_speed_slow_factor";
LABEL_42:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v29) )
        __debugbreak();
    }
  }
  else
  {
    v28 = DVARFLT_cg_mlg_freecam_speed_fast_factor;
    if ( !DVARFLT_cg_mlg_freecam_speed_fast_factor )
    {
      v29 = "cg_mlg_freecam_speed_fast_factor";
      goto LABEL_42;
    }
  }
  Dvar_CheckFrontendServerThread(v28);
  value = value * v28->current.value;
LABEL_45:
  *(double *)&unsignedInt = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_Y);
  v30 = unsignedInt;
  v31 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LSTICK_X);
  v32 = *(float *)&v31;
  v33 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_LTRIGGER);
  v34 = *(float *)&v33;
  v35 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RTRIGGER);
  v37 = v34 - *(float *)&v35;
  v36 = v34 - *(float *)&v35;
  if ( *(float *)&v30 == 0.0 )
    v38 = FLOAT_1_0;
  else
    LODWORD(v38) = v30 & _xmm;
  if ( v32 == 0.0 )
    v39 = FLOAT_1_0;
  else
    LODWORD(v39) = LODWORD(v32) & _xmm;
  if ( v37 == 0.0 )
    v40 = FLOAT_1_0;
  else
    LODWORD(v40) = LODWORD(v37) & _xmm;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v79) )
  {
    v41 = v30;
    *(float *)&v41 = *(float *)&v30 + 1.0;
    v30 = v41;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v80) )
  {
    v42 = v30;
    *(float *)&v42 = *(float *)&v30 + -1.0;
    v30 = v42;
  }
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v81) )
    v32 = v32 + -1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v82) )
    v32 = v32 + 1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)BoundKey) )
    v36 = v36 + 1.0;
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)v84) )
    v36 = v36 + -1.0;
  v43 = DVARFLT_cg_mlg_cam_smooth_factor;
  v44 = v30;
  *(float *)&v44 = fsqrt((float)((float)(*(float *)&v30 * *(float *)&v30) + (float)(v32 * v32)) + (float)(v36 * v36));
  _XMM3 = v44;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm9, xmm0
  }
  v48 = (float)(*(float *)&v30 * (float)(1.0 / *(float *)&_XMM0)) * v38;
  v49 = (float)(v36 * (float)(1.0 / *(float *)&_XMM0)) * v40;
  v50 = (float)(v32 * (float)(1.0 / *(float *)&_XMM0)) * v39;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  v51 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0] * v43->current.value, 0.0, 1.0);
  v52 = (float)((float)(v48 - this->m_lastInputVector.v[0]) * *(float *)&v51) + this->m_lastInputVector.v[0];
  v53 = (float)((float)(v50 - this->m_lastInputVector.v[1]) * *(float *)&v51) + this->m_lastInputVector.v[1];
  v54 = (float)((float)(v49 - this->m_lastInputVector.v[2]) * *(float *)&v51) + this->m_lastInputVector.v[2];
  this->m_lastInputVector.v[2] = v54;
  this->m_lastInputVector.v[0] = v52;
  this->m_lastInputVector.v[1] = v53;
  v55 = I_fclamp(v52, -1.0, 1.0);
  v56 = (float)(*(float *)&v55 * value) * _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0];
  v57 = I_fclamp(v53, -1.0, 1.0);
  LODWORD(v58) = COERCE_UNSIGNED_INT((float)(*(float *)&v57 * value) * _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0]) ^ _xmm;
  v59 = I_fclamp(v54, -1.0, 1.0);
  v60 = (float)(*(float *)&v59 * value) * _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0];
  v61 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RSTICK_Y);
  v62 = *(float *)&v61;
  ClientLookInversion = CL_Input_GetClientLookInversion(localClientNum);
  v64 = v62 * *(float *)&ClientLookInversion;
  v65 = CL_GamepadPhysicalAxisValue(localClientNum, GPAD_PHYSAXIS_RSTICK_X);
  v66 = DVARFLT_cg_mlg_cam_smooth_factor;
  v67 = _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0];
  v68 = (float)((float)(v64 * v67) * 57.295776) * v85;
  keynuma = COERCE_UNSIGNED_INT((float)((float)(*(float *)&v65 * 57.295776) * v67) * v85) ^ _xmm;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v66);
  v69 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->frametime).m128_f32[0] * v66->current.value, 0.0, 1.0);
  _XMM9 = 0i64;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v72 = (float)((float)((float)((float)((float)(v68 - this->m_lastInputAngles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&v69) + this->m_lastInputAngles.v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v74 = this->m_lastInputAngles.v[2];
  v75 = (float)((float)((float)((float)((float)(*(float *)&keynuma - this->m_lastInputAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&v69) + this->m_lastInputAngles.v[1];
  this->m_updatedPos.v[0] = v56;
  this->m_updatedPos.v[1] = v58;
  this->m_updatedPos.v[2] = v60;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  this->m_updatedAngles.v[0] = v72;
  this->m_updatedAngles.v[1] = v75;
  v77 = (float)((float)((float)((float)(v74 * -0.0027777778) - *(float *)&_XMM2) * 360.0) * *(float *)&v69) + v74;
  this->m_updatedAngles.v[2] = v77;
  this->m_lastInputAngles.v[0] = v72;
  this->m_lastInputAngles.v[1] = v75;
  this->m_lastInputAngles.v[2] = v77;
}

/*
==============
CgMLGCameraManager::HandleMLGSpectatorCameraInputs
==============
*/
void CgMLGCameraManager::HandleMLGSpectatorCameraInputs(CgMLGCameraManager *this, cg_t *cgameGlob, usercmd_s *cmd)
{
  __int128 v3; 
  characterInfo_t *CharacterInfo; 
  CgMLGCameraManager *CameraManager; 
  CoDCasterCameraState v8; 
  float v9; 
  float v14; 
  int FocusedPlayer; 
  char v16; 
  playerState_s *ps; 
  ClActiveClientMP *ClientMP; 
  vec3_t outOrg; 
  __int128 v20; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 91, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 92, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(cgameGlob, cgameGlob->clientNum);
  CameraManager = CgMLGSpectator::GetCameraManager(cgameGlob->m_mlgSpectatorPtr);
  v8 = CameraManager->m_mlgCurrentCameraState->GetCameraState(CameraManager->m_mlgCurrentCameraState);
  if ( CharacterInfo->team == TEAM_SPECTATOR )
  {
    if ( v8 != SPECTATOR_ACTIVE )
    {
      v9 = cgameGlob->refdefViewAngles.v[0] * 0.0027777778;
      v20 = v3;
      _XMM10 = 0i64;
      __asm { vroundss xmm2, xmm10, xmm1, 1 }
      cmd->angles.v[0] = MSG_PackSignedFloat((float)(v9 - *(float *)&_XMM2) * 360.0, 180.0, 0x14u);
      __asm { vroundss xmm3, xmm10, xmm2, 1 }
      cmd->angles.v[1] = MSG_PackSignedFloat((float)((float)(cgameGlob->refdefViewAngles.v[1] * 0.0027777778) - *(float *)&_XMM3) * 360.0, 180.0, 0x14u);
      __asm { vroundss xmm4, xmm10, xmm3, 1 }
      cmd->angles.v[2] = MSG_PackSignedFloat((float)((float)(cgameGlob->refdefViewAngles.v[2] * 0.0027777778) - *(float *)&_XMM4) * 360.0, 180.0, 0x14u);
      RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
      v14 = outOrg.v[1];
      cmd->vehOrgX = outOrg.v[0];
      cmd->vehOrgZ = outOrg.v[2];
      cmd->vehOrgY = v14;
      cmd->mlgSelectedAngle = I_clamp((int)CameraManager->m_mlgCurrentCameraFoV, 60, 120);
    }
    FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(CameraManager, (const LocalClientNum_t)cgameGlob->localClientNum);
    v16 = FocusedPlayer;
    if ( (unsigned int)(FocusedPlayer + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)FocusedPlayer, "signed", FocusedPlayer) )
      __debugbreak();
    cmd->mlgSelectedLoc[0] = v16;
    cmd->mlgSelectedLoc[1] = CgMLGCameraManager::GetMLGCameraType(CameraManager, (const LocalClientNum_t)cgameGlob->localClientNum);
  }
  else
  {
    ps = cgameGlob->ps;
    if ( ps && CgMLGSpectator::GetMLGSpectatorClientInfo(cgameGlob->m_mlgSpectatorPtr, ps->clientNum)->mlgMessageSent )
    {
      ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)cgameGlob->localClientNum);
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
  float m_entryFoV; 
  unsigned int clviewangles_aab; 
  float v8; 
  CgMLGCameraManager *m_cameraManager; 
  CgMLGCameraManager *v10; 
  vec3_t *p_m_updatedPos; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  CgMLGCameraManager *v18; 
  CgMLGCameraManager *v19; 
  float v20; 
  double v21; 
  keyNum_t BoundKey; 
  CgMLGCameraManager *v23; 
  double FovDvarDefaultValue; 
  vec3_t outOrg; 
  __int64 v26; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  v26 = -2i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  m_entryFoV = this->m_entryFoV;
  if ( !ClientMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 264, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  clviewangles_aab = ClientMP->clviewangles_aab;
  LODWORD(angles.v[0]) = LODWORD(ClientMP->clViewangles.clViewangles.v[0]) ^ ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 428) ^ clviewangles_aab) + 2));
  LODWORD(angles.v[1]) = LODWORD(ClientMP->clViewangles.clViewangles.v[1]) ^ ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 432) ^ clviewangles_aab) + 2));
  LODWORD(angles.v[2]) = ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) * ((((_DWORD)ClientMP + 436) ^ clviewangles_aab) + 2)) ^ LODWORD(ClientMP->clViewangles.clViewangles.v[2]);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  v8 = angles.v[0] + this->m_updatedAngles.v[0];
  this->m_updatedAngles.v[0] = v8;
  this->m_updatedAngles.v[1] = angles.v[1] + this->m_updatedAngles.v[1];
  this->m_updatedAngles.v[2] = angles.v[2] + this->m_updatedAngles.v[2];
  m_cameraManager = this->m_cameraManager;
  m_cameraManager->m_mlgCurrentCameraAngles.v[0] = v8;
  m_cameraManager->m_mlgCurrentCameraAngles.v[1] = this->m_updatedAngles.v[1];
  m_cameraManager->m_mlgCurrentCameraAngles.v[2] = this->m_updatedAngles.v[2];
  v10 = this->m_cameraManager;
  v10->m_mlgTargetCameraAngles.v[0] = this->m_updatedAngles.v[0];
  v10->m_mlgTargetCameraAngles.v[1] = this->m_updatedAngles.v[1];
  v10->m_mlgTargetCameraAngles.v[2] = this->m_updatedAngles.v[2];
  *(_QWORD *)angles.v = *(_QWORD *)this->m_updatedAngles.v;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  p_m_updatedPos = &this->m_updatedPos;
  if ( &this->m_updatedPos == &angles && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v12 = this->m_updatedPos.v[1];
  v13 = p_m_updatedPos->v[0];
  v14 = this->m_updatedPos.v[2];
  outOrg.v[0] = (float)((float)((float)(p_m_updatedPos->v[0] * axis.m[0].v[0]) + (float)(v12 * axis.m[1].v[0])) + (float)(v14 * axis.m[2].v[0])) + outOrg.v[0];
  v15 = outOrg.v[0];
  outOrg.v[1] = (float)((float)((float)(v13 * axis.m[0].v[1]) + (float)(v12 * axis.m[1].v[1])) + (float)(v14 * axis.m[2].v[1])) + outOrg.v[1];
  v16 = outOrg.v[1];
  outOrg.v[2] = (float)((float)((float)(v13 * axis.m[0].v[2]) + (float)(v12 * axis.m[1].v[2])) + (float)(v14 * axis.m[2].v[2])) + outOrg.v[2];
  v17 = outOrg.v[2];
  v18 = this->m_cameraManager;
  v18->m_mlgCurrentCameraPos.v[0] = outOrg.v[0];
  v18->m_mlgCurrentCameraPos.v[1] = v16;
  v18->m_mlgCurrentCameraPos.v[2] = v17;
  v19 = this->m_cameraManager;
  v19->m_mlgTargetCameraPos.v[0] = v15;
  v19->m_mlgTargetCameraPos.v[1] = v16;
  v19->m_mlgTargetCameraPos.v[2] = v17;
  v20 = m_entryFoV + this->m_updatedFoV;
  if ( v20 > 110.0 || v20 < 65.0 )
    this->m_lastInputFoV = 0.0;
  v21 = I_fclamp(v20, 65.0, 110.0);
  this->m_entryFoV = *(float *)&v21;
  this->m_cameraManager->m_mlgCurrentCameraFoV = *(float *)&v21;
  BoundKey = CL_Keys_GetBoundKey(localClientNum, STRUCT_POINTER|BYTE_VALUE, BIND_CODCASTER_PLAYERCARD, INVALID, 1);
  if ( CL_Keys_IsKeyDown(localClientNum, (unsigned __int8)BoundKey) )
  {
    v23 = this->m_cameraManager;
    FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
    v23->m_mlgTargetCameraFoV = *(float *)&FovDvarDefaultValue;
  }
  else
  {
    this->m_cameraManager->m_mlgTargetCameraFoV = *(float *)&v21;
  }
  memset(&outOrg, 0, sizeof(outOrg));
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
  float v1; 
  float fov; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 

  if ( this->m_mlgMemorizedFreeCamPose.hasBeenSet )
  {
    v1 = this->m_mlgMemorizedFreeCamPose.pos.v[2];
    fov = this->m_mlgMemorizedFreeCamPose.fov;
    *(double *)this->m_mlgCurrentCameraPos.v = *(double *)this->m_mlgMemorizedFreeCamPose.pos.v;
    *(double *)this->m_mlgCurrentCameraAngles.v = *(double *)this->m_mlgMemorizedFreeCamPose.angles.v;
    v3 = *(double *)this->m_mlgMemorizedFreeCamPose.pos.v;
    this->m_mlgCurrentCameraPos.v[2] = v1;
    v4 = this->m_mlgMemorizedFreeCamPose.angles.v[2];
    *(double *)this->m_mlgTargetCameraPos.v = v3;
    v5 = *(double *)this->m_mlgMemorizedFreeCamPose.angles.v;
    this->m_mlgCurrentCameraAngles.v[2] = v4;
    this->m_mlgTargetCameraPos.v[2] = this->m_mlgMemorizedFreeCamPose.pos.v[2];
    v6 = this->m_mlgMemorizedFreeCamPose.angles.v[2];
    *(double *)this->m_mlgTargetCameraAngles.v = v5;
    this->m_mlgTargetCameraAngles.v[2] = v6;
    this->m_mlgCurrentCameraFoV = fov;
    this->m_mlgTargetCameraFoV = fov;
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
void CgMLGCameraManager::SetAerialMaxHeight(CgMLGCameraManager *this, const float maxHeight)
{
  this->m_aerialMaxHeight = maxHeight;
}

/*
==============
CgMLGCameraManager::SetAerialMinHeight
==============
*/
void CgMLGCameraManager::SetAerialMinHeight(CgMLGCameraManager *this, const float minHeight)
{
  this->m_aerialMinHeight = minHeight;
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
void CgMLGCameraManager::SetMLGCurrentCameraFoV(CgMLGCameraManager *this, const float fov)
{
  this->m_mlgCurrentCameraFoV = fov;
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
  float v4; 
  double v5; 
  float v6; 
  int v7; 
  int v8; 

  if ( *state >= CAMERA_STATE_COUNT )
  {
    v8 = 6;
    v7 = *(unsigned __int8 *)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( CoDCasterCameraState::CAMERA_STATE_COUNT )", "state doesn't index CoDCasterCameraState::CAMERA_STATE_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( *state != (unsigned __int8)this->m_mlgCurrentCameraState->GetCameraState(this->m_mlgCurrentCameraState) )
  {
    v4 = this->m_mlgCurrentCameraAngles.v[2];
    *(double *)this->m_mlgTargetCameraAngles.v = *(double *)this->m_mlgCurrentCameraAngles.v;
    v5 = *(double *)this->m_mlgCurrentCameraPos.v;
    this->m_mlgTargetCameraAngles.v[2] = v4;
    v6 = this->m_mlgCurrentCameraPos.v[2];
    *(double *)this->m_mlgTargetCameraPos.v = v5;
    this->m_mlgTargetCameraPos.v[2] = v6;
    this->m_mlgCurrentCameraState = CgMLGCameraManager::GetCameraState(this, state);
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
void CgMLGCameraManager::SetMLGTargetCameraFoV(CgMLGCameraManager *this, const float fov)
{
  this->m_mlgTargetCameraFoV = fov;
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
  __int64 v3; 
  ParticleSystem *v5; 
  __int64 v7; 
  ParticleSystemHandle v8; 
  unsigned int v9; 
  __int64 v10; 
  ParticleSystem *v11; 
  __int64 v12; 
  ParticleManager *ParticleManager; 
  centity_t *Entity; 
  unsigned int v15; 
  unsigned int v16; 
  const DObj *v17; 
  scr_string_t j_base; 
  DObjAnimMat *LocalBoneMatrix; 
  float v20; 
  const characterInfo_t *CharacterInfo; 
  unsigned int boneIndex; 
  __m128 v; 
  ParticleManager *v27; 
  ParticleSystemHandle v32; 
  __int64 v33; 
  __int64 v34; 
  team_t team; 
  unsigned __int8 v36; 
  __int64 spawnTimeMsec; 
  int spawnTimeMseca; 
  ParticleSystemFlags particleSystemFlags; 
  int dobjHandle; 
  unsigned __int8 inOutIndex[8]; 
  int modelIndex; 
  cg_t *cgGlobals; 
  __int64 v44; 
  vec3_t angles; 
  float4 emitterOrientationQuat; 
  vec4_t out; 
  float4 emitterPos; 
  tmat33_t<vec3_t> axis; 

  v3 = clientNum;
  v5 = NULL;
  v7 = (__int64)(int)localClientNum << 12;
  v8 = this->m_arrowFx[clientNum];
  v44 = v7;
  v9 = 0;
  if ( g_particleSystemsGeneration[v7 + (v8 & 0xFFF)].__all32 == v8 )
    v9 = v8 & 0xFFF;
  v10 = v9;
  v11 = NULL;
  v12 = v7 + v10;
  if ( g_particleSystems[0][v12] >= (ParticleSystem *)0x1000 )
    v11 = g_particleSystems[0][v12];
  if ( v11 && v8 )
  {
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::StopSystem(ParticleManager, this->m_arrowFx[v3]);
    this->m_arrowFx[v3] = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
  cgGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !cgGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 1751, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, v3);
  if ( Entity )
  {
    if ( (unsigned int)v3 > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v3) )
      __debugbreak();
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(particleSystemFlags) = 2;
      LODWORD(spawnTimeMsec) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, particleSystemFlags) )
        __debugbreak();
    }
    v15 = v3 + 2533 * localClientNum;
    if ( v15 >= 0x13CA )
    {
      LODWORD(particleSystemFlags) = v3 + 2533 * localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", particleSystemFlags) )
        __debugbreak();
    }
    v16 = clientObjMap[v15];
    if ( v16 )
    {
      if ( v16 >= (unsigned int)s_objCount )
      {
        LODWORD(particleSystemFlags) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", particleSystemFlags) )
          __debugbreak();
      }
      v17 = (const DObj *)s_objBuf[v16];
      if ( v17 )
      {
        j_base = scr_const.j_base;
        if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 117, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
          __debugbreak();
        inOutIndex[0] = -2;
        if ( DObjGetBoneIndexInternal_75(v17, j_base, inOutIndex, &modelIndex) && (LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(&Entity->pose, v17, inOutIndex[0])) != NULL )
          v20 = g_activeRefDef->viewOffset.v[0] + LocalBoneMatrix->trans.v[0];
        else
          v20 = 0.0;
        angles = Entity->pose.angles;
        modelIndex = SLODWORD(angles.v[0]);
        if ( _fdtest((float *)&modelIndex) != 2 )
        {
          modelIndex = SLODWORD(angles.v[1]);
          if ( _fdtest((float *)&modelIndex) != 2 )
          {
            modelIndex = SLODWORD(angles.v[2]);
            if ( _fdtest((float *)&modelIndex) != 2 )
            {
              AnglesToAxis(&angles, &axis);
              AxisToQuat(&axis, &out);
              CharacterInfo = CG_GetCharacterInfo(cgGlobals, v3);
              boneIndex = DObjGetNextBoneIndex(v17, scr_const.tag_sync, 0xFEu);
              emitterOrientationQuat.v.m128_i32[3] = 0;
              v = emitterOrientationQuat.v;
              v.m128_f32[0] = v20;
              _XMM0 = v;
              __asm
              {
                vinsertps xmm0, xmm0, xmm7, 10h
                vinsertps xmm0, xmm0, xmm8, 20h ; ' '
              }
              emitterOrientationQuat.v = _XMM0;
              emitterPos.v = _XMM0;
              v27 = ParticleManager::GetParticleManager(localClientNum);
              _XMM0 = LODWORD(out.v[0]);
              __asm
              {
                vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+4], 50h+var_40
                vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+8], 20h
                vinsertps xmm0, xmm0, dword ptr [rbp+50h+out+0Ch], 30h
              }
              dobjHandle = v17->entnum - 1;
              spawnTimeMseca = cgGlobals->time;
              emitterOrientationQuat.v = _XMM0;
              v32 = ParticleManager::AddSystem(v27, localClientNum, cgMedia.fxMlgArrow.m_particleSystemDef, &emitterPos, &emitterOrientationQuat, spawnTimeMseca, (ParticleSystemFlags)0x1000000000i64, dobjHandle, boneIndex, NULL, NULL, NULL);
              v33 = v32 & 0xFFF;
              if ( g_particleSystemsGeneration[v44 + v33].__all32 != v32 )
                v33 = 0i64;
              v34 = v44 + v33;
              if ( g_particleSystems[0][v34] >= (ParticleSystem *)0x1000 )
                v5 = g_particleSystems[0][v34];
              if ( !v5 )
                goto LABEL_46;
              team = CharacterInfo->team;
              if ( team == TEAM_TWO )
              {
                v36 = 1;
              }
              else
              {
                if ( team != TEAM_ONE )
                {
LABEL_46:
                  this->m_arrowFx[v3] = v32;
                  return;
                }
                v36 = 2;
              }
              ParticleSystem::SetGlobalTintIndex(v5, v36);
              goto LABEL_46;
            }
          }
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
  CgGlobalsMP *LocalClientGlobals; 
  float v10; 
  float viewHeightCurrent; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CG_MLG_TryGetClientPose(localClientNum, followedClient, outTargetPosition, outTargetAngles, outTargetFoV) )
    return 0;
  v10 = outTargetAngles->v[1];
  angles.v[0] = 0.0;
  angles.v[1] = v10;
  angles.v[2] = 0.0;
  AnglesToAxis(&angles, &axis);
  viewHeightCurrent = LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
  v12 = 10.0 * axis.m[0].v[1];
  outTargetPosition->v[0] = (float)((float)(viewHeightCurrent * axis.m[2].v[0]) + (float)(10.0 * axis.m[0].v[0])) + outTargetPosition->v[0];
  v13 = (float)((float)(viewHeightCurrent * axis.m[2].v[1]) + v12) + outTargetPosition->v[1];
  v14 = 10.0 * axis.m[0].v[2];
  outTargetPosition->v[1] = v13;
  outTargetPosition->v[2] = (float)((float)(viewHeightCurrent * axis.m[2].v[2]) + v14) + outTargetPosition->v[2];
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
  bool v7; 
  bool v8; 
  bool v9; 
  char v10; 
  int v11; 
  int v12; 
  centity_t *ClientEntity; 
  bool v14; 
  CgMLGSpectator *MLGSpectator; 
  float v16; 
  float v17; 
  float outHeight; 
  vec3_t outPosition; 

  FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
  v9 = __OFSUB__(FocusedPlayer, -1);
  v7 = FocusedPlayer == -1;
  v8 = FocusedPlayer + 1 < 0;
  LOBYTE(FocusedPlayer) = this->m_lastLockStatus;
  v10 = !(v8 ^ v9 | v7);
  this->m_lastLockStatus = v10;
  if ( (_BYTE)FocusedPlayer != v10 )
  {
    if ( v8 ^ v9 | v7 )
      goto LABEL_16;
    *(_QWORD *)this->m_currentOffset.v = 0i64;
    this->m_elapsedTransitionTime = 0.0;
  }
  if ( !(v8 ^ v9 | v7) )
  {
    v11 = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
    this->m_focusOnBarycenter = 0;
    v12 = v11;
    if ( v11 != cgameGlob->clientNum )
    {
      if ( v11 != -1 )
      {
        ClientEntity = CG_MLG_GetClientEntity(localClientNum, v11);
        if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v14 = this->m_lastFollowedClientNum != v12, CG_GetPoseOrigin(&ClientEntity->pose, &this->m_groundPosition), v14) || (MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum), !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v12)) && (this->m_currentOffset.v[0] != 0.0 || this->m_currentOffset.v[1] != 0.0) )
        {
          *(_QWORD *)this->m_currentOffset.v = 0i64;
          this->m_elapsedTransitionTime = 0.0;
        }
      }
      this->m_lastFollowedClientNum = v12;
    }
    return;
  }
LABEL_16:
  if ( this->m_focusOnBarycenter )
  {
    outPosition.v[0] = 0.0;
    outPosition.v[1] = 0.0;
    outPosition.v[2] = 0.0;
    outHeight = 0.0;
    if ( CG_GetPlayersBarycenter(localClientNum, &outPosition, &outHeight) )
    {
      v16 = outPosition.v[0];
      this->m_currentOffset.v[2] = outHeight;
      v17 = outPosition.v[1];
      this->m_groundPosition.v[0] = v16;
      this->m_groundPosition.v[2] = outPosition.v[2];
      this->m_groundPosition.v[1] = v17;
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
  float v9; 
  double v10; 
  float v11; 
  CameraStateInterface *v12; 
  int v13; 
  int v14; 

  m_mlgCurrentCameraState = this->m_mlgCurrentCameraState;
  if ( m_mlgCurrentCameraState && *state == (unsigned __int8)m_mlgCurrentCameraState->GetCameraState(m_mlgCurrentCameraState) )
    return this->m_mlgCurrentCameraState;
  v8 = this->m_mlgCurrentCameraState;
  if ( v8 )
    v8->ExitState(v8, localClientNum);
  if ( *state >= CAMERA_STATE_COUNT )
  {
    v14 = 6;
    v13 = *(unsigned __int8 *)state;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_mlg_spectator_cameras.cpp", 408, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( CoDCasterCameraState::CAMERA_STATE_COUNT )", "state doesn't index CoDCasterCameraState::CAMERA_STATE_COUNT\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( *state != (unsigned __int8)this->m_mlgCurrentCameraState->GetCameraState(this->m_mlgCurrentCameraState) )
  {
    v9 = this->m_mlgCurrentCameraAngles.v[2];
    *(double *)this->m_mlgTargetCameraAngles.v = *(double *)this->m_mlgCurrentCameraAngles.v;
    v10 = *(double *)this->m_mlgCurrentCameraPos.v;
    this->m_mlgTargetCameraAngles.v[2] = v9;
    v11 = this->m_mlgCurrentCameraPos.v[2];
    *(double *)this->m_mlgTargetCameraPos.v = v10;
    this->m_mlgTargetCameraPos.v[2] = v11;
    this->m_mlgCurrentCameraState = CgMLGCameraManager::GetCameraState(this, state);
  }
  v12 = this->m_mlgCurrentCameraState;
  if ( v12 )
  {
    v12->EnterState(v12, localClientNum);
    return this->m_mlgCurrentCameraState;
  }
  return v12;
}

/*
==============
AerialCamActiveCameraState::UpdatePositionInternal
==============
*/
void AerialCamActiveCameraState::UpdatePositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum)
{
  CgMLGCameraManager *m_cameraManager; 
  __int64 v6; 
  __m128 v7; 
  float m_mlgCurrentCameraFoV; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float m_elapsedTransitionTime; 
  float m_currentTransitionDuration; 
  double TransitionDuration; 
  double v18; 
  float v19; 
  float v23; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v30; 
  CgGlobalsMP *v31; 
  double v32; 
  const dvar_t *v33; 
  float v34; 
  float v35; 
  float v36; 
  double v37; 
  CgMLGCameraManager *v38; 
  CgMLGCameraManager *v39; 
  float m_mlgTargetCameraFoV; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  vec3_t m_mlgTargetCameraAngles; 
  vec3_t m_mlgCurrentCameraAngles; 

  m_cameraManager = this->m_cameraManager;
  _XMM9 = 0i64;
  v6 = *(_QWORD *)m_cameraManager->m_mlgCurrentCameraPos.v;
  v7 = (__m128)*(unsigned __int64 *)m_cameraManager->m_mlgTargetCameraPos.v;
  m_mlgCurrentCameraFoV = m_cameraManager->m_mlgCurrentCameraFoV;
  m_mlgCurrentCameraAngles = m_cameraManager->m_mlgCurrentCameraAngles;
  m_mlgTargetCameraAngles = m_cameraManager->m_mlgTargetCameraAngles;
  v9 = m_cameraManager->m_mlgCurrentCameraPos.v[2];
  m_mlgTargetCameraFoV = m_cameraManager->m_mlgTargetCameraFoV;
  v10 = m_cameraManager->m_mlgTargetCameraPos.v[2];
  LODWORD(v11) = HIDWORD(*(_QWORD *)m_cameraManager->m_mlgTargetCameraPos.v);
  v12 = *((float *)&v6 + 1);
  v13 = (float)((float)((float)(v11 - v12) * (float)(v11 - v12)) + (float)((float)(v7.m128_f32[0] - *(float *)&v6) * (float)(v7.m128_f32[0] - *(float *)&v6))) + (float)((float)(v10 - v9) * (float)(v10 - v9));
  v41 = m_mlgCurrentCameraFoV;
  v42 = v11;
  v43 = v10;
  if ( *(float *)&v6 == 0.0 && *((float *)&v6 + 1) == 0.0 && v9 == 0.0 )
  {
    v9 = m_cameraManager->m_mlgTargetCameraPos.v[2];
    LODWORD(v6) = *(_QWORD *)m_cameraManager->m_mlgTargetCameraPos.v;
    LODWORD(v12) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  }
  if ( v13 < 1.0 || (m_elapsedTransitionTime = this->m_elapsedTransitionTime, m_currentTransitionDuration = this->m_currentTransitionDuration, m_elapsedTransitionTime > m_currentTransitionDuration) )
  {
    v27 = m_cameraManager->m_mlgTargetCameraAngles.v[2];
    v25 = m_mlgTargetCameraAngles.v[1];
    v23 = m_mlgTargetCameraAngles.v[0];
  }
  else
  {
    if ( m_elapsedTransitionTime == 0.0 )
    {
      TransitionDuration = CG_MLG_GetTransitionDuration(localClientNum);
      m_elapsedTransitionTime = this->m_elapsedTransitionTime;
      this->m_currentTransitionDuration = *(float *)&TransitionDuration;
      m_currentTransitionDuration = *(float *)&TransitionDuration;
    }
    __asm { vunpcklps xmm0, xmm9, xmm9 }
    *(double *)this->m_lastInputVector.v = *(double *)&_XMM0;
    this->m_lastInputVector.v[2] = 0.0;
    v18 = I_fclamp(m_elapsedTransitionTime / m_currentTransitionDuration, 0.0, 1.0);
    if ( *(float *)&v18 >= 0.5 )
      v19 = (float)((float)(4.0 - (float)(*(float *)&v18 * 2.0)) * *(float *)&v18) - 1.0;
    else
      v19 = (float)(*(float *)&v18 * 2.0) * *(float *)&v18;
    v42 = (float)((float)(v11 - v12) * v19) + v12;
    v43 = (float)((float)(v10 - v9) * v19) + v9;
    _XMM8 = 0i64;
    __asm { vroundss xmm2, xmm8, xmm1, 1 }
    v44 = (float)((float)((float)((float)((float)(m_mlgTargetCameraAngles.v[0] - m_mlgCurrentCameraAngles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v19) + m_mlgCurrentCameraAngles.v[0];
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    *(float *)&_XMM2 = (float)((float)((float)((float)(m_mlgTargetCameraAngles.v[1] - m_mlgCurrentCameraAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v19;
    v23 = v44;
    __asm { vroundss xmm3, xmm8, xmm2, 1 }
    v25 = *(float *)&_XMM2 + m_mlgCurrentCameraAngles.v[1];
    v7.m128_f32[0] = (float)((float)(v7.m128_f32[0] - *(float *)&v6) * v19) + *(float *)&v6;
    v26 = v19 * m_mlgTargetCameraFoV;
    v27 = (float)((float)((float)((float)((float)(m_mlgTargetCameraAngles.v[2] - m_mlgCurrentCameraAngles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v19) + m_mlgCurrentCameraAngles.v[2];
    v28 = (float)(1.0 - v19) * v41;
    m_mlgCurrentCameraFoV = v41;
    m_mlgTargetCameraFoV = v28 + v26;
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v30 = DVARFLT_cg_mlg_cam_smooth_factor;
  v31 = LocalClientGlobals;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v32 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)v31->frametime).m128_f32[0] * v30->current.value, 0.0, 1.0);
  v33 = DVARFLT_cg_mlg_cam_smooth_factor;
  v34 = (float)((float)(v7.m128_f32[0] - *(float *)&v6) * *(float *)&v32) + *(float *)&v6;
  v35 = (float)((float)(v42 - v12) * *(float *)&v32) + v12;
  v36 = (float)((float)(v43 - v9) * *(float *)&v32) + v9;
  if ( !DVARFLT_cg_mlg_cam_smooth_factor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mlg_cam_smooth_factor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  v37 = I_fclamp((float)v31->frametime * v33->current.value, 0.0, 1.0);
  v38 = this->m_cameraManager;
  v38->m_mlgCurrentCameraPos.v[0] = v34;
  v38->m_mlgCurrentCameraPos.v[1] = v35;
  v38->m_mlgCurrentCameraPos.v[2] = v36;
  v39 = this->m_cameraManager;
  v39->m_mlgCurrentCameraAngles.v[0] = v23;
  v39->m_mlgCurrentCameraAngles.v[1] = v25;
  v39->m_mlgCurrentCameraAngles.v[2] = v27;
  this->m_cameraManager->m_mlgCurrentCameraFoV = (float)((float)(1.0 - *(float *)&v37) * m_mlgCurrentCameraFoV) + (float)(*(float *)&v37 * m_mlgTargetCameraFoV);
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
  CgMLGCameraManager *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  int FocusedPlayer; 
  bool v10; 
  bool v11; 
  bool v12; 
  char v13; 
  int v14; 
  int v15; 
  centity_t *ClientEntity; 
  bool v17; 
  CgMLGSpectator *MLGSpectator; 
  float v19; 
  float v20; 
  CoDCasterCameraState state[4]; 
  float outHeight; 
  vec3_t outPosition; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == FREE )
  {
    m_cameraManager = this->m_cameraManager;
    state[0] = FREECAM_ENTERING;
    return (AerialCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    {
      CG_MLG_UpdateFollowerCamera(localClientNum, this->m_cameraManager);
      AerialCamActiveCameraState::UpdateVFXInternal(this, localClientNum);
    }
    else if ( CL_Keys_GetActiveInputContext(localClientNum) == (VEC3_POINTER|INT_VALUE) )
    {
      AerialCamActiveCameraState::HandleInputsInternal(this, localClientNum);
      FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
      v12 = __OFSUB__(FocusedPlayer, -1);
      v10 = FocusedPlayer == -1;
      v11 = FocusedPlayer + 1 < 0;
      LOBYTE(FocusedPlayer) = this->m_lastLockStatus;
      v13 = !(v11 ^ v12 | v10);
      this->m_lastLockStatus = v13;
      if ( (_BYTE)FocusedPlayer != v13 && !(v11 ^ v12 | v10) )
      {
        *(_QWORD *)this->m_currentOffset.v = 0i64;
        this->m_elapsedTransitionTime = 0.0;
      }
      if ( v11 ^ v12 | v10 )
      {
        if ( this->m_focusOnBarycenter )
        {
          outPosition.v[0] = 0.0;
          outPosition.v[1] = 0.0;
          outPosition.v[2] = 0.0;
          outHeight = 0.0;
          if ( CG_GetPlayersBarycenter(localClientNum, &outPosition, &outHeight) )
          {
            v19 = outPosition.v[0];
            this->m_currentOffset.v[2] = outHeight;
            v20 = outPosition.v[1];
            this->m_groundPosition.v[0] = v19;
            this->m_groundPosition.v[2] = outPosition.v[2];
            this->m_groundPosition.v[1] = v20;
          }
        }
      }
      else
      {
        v14 = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
        this->m_focusOnBarycenter = 0;
        v15 = v14;
        if ( v14 != LocalClientGlobals->clientNum )
        {
          if ( v14 != -1 )
          {
            ClientEntity = CG_MLG_GetClientEntity(localClientNum, v14);
            if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v17 = this->m_lastFollowedClientNum != v15, CG_GetPoseOrigin(&ClientEntity->pose, &this->m_groundPosition), v17) || (MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum), !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v15)) && (this->m_currentOffset.v[0] != 0.0 || this->m_currentOffset.v[1] != 0.0) )
            {
              *(_QWORD *)this->m_currentOffset.v = 0i64;
              this->m_elapsedTransitionTime = 0.0;
            }
          }
          this->m_lastFollowedClientNum = v15;
        }
      }
      AerialCamActiveCameraState::ApplyOffsetInternal(this, localClientNum);
      AerialCamActiveCameraState::UpdatePositionInternal(this, localClientNum);
      AerialCamActiveCameraState::UpdateVFXInternal(this, localClientNum);
      this->m_elapsedTransitionTime = (float)LocalClientGlobals->frametime + this->m_elapsedTransitionTime;
    }
    return this;
  }
  else
  {
    v7 = this->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (AerialCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v7, localClientNum, state);
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
  CgMLGCameraManager *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double v14; 
  float v15; 
  double v16; 
  float m_mlgTargetCameraFoV; 
  double v18; 
  double v19; 
  float m_lastTargetFoV; 
  float m_mlgCurrentCameraFoV; 
  double TransitionDuration; 
  double v23; 
  double EaseInOutFactor; 
  CgMLGCameraManager *v25; 
  float v26; 
  float v27; 
  float v30; 
  float v32; 
  float v33; 
  float v34; 
  CgMLGCameraManager *v35; 
  CgMLGCameraManager *v37; 
  CoDCasterCameraState state[4]; 
  float v41; 
  float v42; 
  double v43; 
  float v44; 
  CameraPose pose2; 
  CameraPose pose1; 
  double v47; 
  float v48; 
  double v49; 
  float v50; 
  double v51; 
  float v52; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == AERIAL )
  {
    m_cameraManager = this->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (FreeCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    if ( CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum)->team == TEAM_FOLLOWER )
    {
      CG_MLG_UpdateFollowerCamera(localClientNum, this->m_cameraManager);
    }
    else if ( CL_Keys_GetActiveInputContext(localClientNum) == (STRUCT_POINTER|BYTE_VALUE) )
    {
      v9 = this->m_cameraManager;
      v10 = v9->m_mlgTargetCameraPos.v[2];
      v11 = v9->m_mlgCurrentCameraPos.v[2];
      v12 = v9->m_mlgCurrentCameraAngles.v[2];
      v13 = v9->m_mlgTargetCameraAngles.v[2];
      v14 = *(double *)v9->m_mlgTargetCameraPos.v;
      v15 = (float)LocalClientGlobals->frametime + this->m_elapsedTransitionTime;
      v16 = *(double *)v9->m_mlgTargetCameraAngles.v;
      m_mlgTargetCameraFoV = v9->m_mlgTargetCameraFoV;
      v18 = *(double *)v9->m_mlgCurrentCameraPos.v;
      *(_QWORD *)pose1.pos.v = *(_QWORD *)this->m_lastTargetPos.v;
      v19 = *(double *)v9->m_mlgCurrentCameraAngles.v;
      *(_QWORD *)pose1.angles.v = *(_QWORD *)this->m_lastTargetAngles.v;
      m_lastTargetFoV = this->m_lastTargetFoV;
      m_mlgCurrentCameraFoV = v9->m_mlgCurrentCameraFoV;
      pose1.pos.v[2] = this->m_lastTargetPos.v[2];
      pose1.angles.v[2] = this->m_lastTargetAngles.v[2];
      v41 = m_mlgCurrentCameraFoV;
      v42 = m_mlgTargetCameraFoV;
      this->m_elapsedTransitionTime = v15;
      pose2.fov = m_mlgTargetCameraFoV;
      pose1.fov = m_lastTargetFoV;
      v51 = v18;
      v52 = v11;
      v47 = v19;
      v48 = v12;
      v43 = v14;
      v44 = v10;
      v49 = v16;
      v50 = v13;
      *(double *)pose2.pos.v = v14;
      pose2.pos.v[2] = v10;
      *(double *)pose2.angles.v = v16;
      pose2.angles.v[2] = v13;
      pose2.hasBeenSet = 0;
      pose1.hasBeenSet = 0;
      if ( !CG_MLG_ArePosesNearlyEqual(&pose1, &pose2) )
      {
        *(double *)this->m_lastTargetPos.v = v14;
        *(double *)this->m_lastTargetAngles.v = v16;
        this->m_lastTargetPos.v[2] = v10;
        this->m_lastTargetAngles.v[2] = v13;
        this->m_lastTargetFoV = m_mlgTargetCameraFoV;
        this->m_elapsedTransitionTime = 0.0;
        TransitionDuration = CG_MLG_GetTransitionDuration(localClientNum);
        this->m_currentTransitionDuration = *(float *)&TransitionDuration;
      }
      if ( this->m_currentTransitionDuration < this->m_elapsedTransitionTime )
        goto LABEL_13;
      pose1.pos.v[2] = v10;
      pose1.angles.v[2] = v13;
      pose1.fov = m_mlgTargetCameraFoV;
      pose2.fov = m_mlgCurrentCameraFoV;
      *(double *)pose1.pos.v = v14;
      *(double *)pose1.angles.v = v16;
      pose1.hasBeenSet = 0;
      *(double *)pose2.pos.v = v18;
      pose2.pos.v[2] = v11;
      *(double *)pose2.angles.v = v19;
      pose2.angles.v[2] = v12;
      pose2.hasBeenSet = 0;
      if ( CG_MLG_ArePosesNearlyEqual(&pose2, &pose1) )
      {
LABEL_13:
        FreeCamActiveCameraState::HandleInputsInternal(this, localClientNum);
        FreeCamActiveCameraState::HandleMovementsInternal(this, localClientNum);
        *(_QWORD *)&this->m_elapsedTransitionTime = 0i64;
      }
      else
      {
        v23 = I_fclamp(this->m_elapsedTransitionTime / this->m_currentTransitionDuration, 0.0, 1.0);
        EaseInOutFactor = CG_MLG_GetEaseInOutFactor(*(float *)&v23);
        v25 = this->m_cameraManager;
        v26 = (float)((float)(*((float *)&v43 + 1) - *((float *)&v51 + 1)) * *(float *)&EaseInOutFactor) + *((float *)&v51 + 1);
        v27 = (float)(*(float *)&v49 - *(float *)&v47) * 0.0027777778;
        v25->m_mlgCurrentCameraPos.v[0] = (float)((float)(*(float *)&v43 - *(float *)&v51) * *(float *)&EaseInOutFactor) + *(float *)&v51;
        v25->m_mlgCurrentCameraPos.v[1] = v26;
        _XMM13 = 0i64;
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v30 = (float)((float)((float)(v27 - *(float *)&_XMM2) * 360.0) * *(float *)&EaseInOutFactor) + *(float *)&v47;
        __asm { vroundss xmm3, xmm13, xmm2, 1 }
        v32 = (float)((float)((float)((float)((float)(*((float *)&v49 + 1) - *((float *)&v47 + 1)) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&EaseInOutFactor) + *((float *)&v47 + 1);
        v33 = (float)(v50 - v48) * 0.0027777778;
        v34 = (float)((float)(1.0 - *(float *)&EaseInOutFactor) * v41) + (float)(*(float *)&EaseInOutFactor * v42);
        v25->m_mlgCurrentCameraPos.v[2] = (float)((float)(v44 - v52) * *(float *)&EaseInOutFactor) + v52;
        v35 = this->m_cameraManager;
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v35->m_mlgCurrentCameraAngles.v[0] = v30;
        v35->m_mlgCurrentCameraAngles.v[1] = v32;
        v35->m_mlgCurrentCameraAngles.v[2] = (float)((float)((float)(v33 - *(float *)&_XMM2) * 360.0) * *(float *)&EaseInOutFactor) + v48;
        v37 = this->m_cameraManager;
        _XMM0 = 0i64;
        v44 = 0.0;
        __asm { vunpcklps xmm0, xmm0, xmm0 }
        v37->m_mlgCurrentCameraFoV = v34;
        *(float *)&v37 = v44;
        *(double *)this->m_lastInputVector.v = *(double *)&_XMM0;
        LODWORD(this->m_lastInputVector.v[2]) = (_DWORD)v37;
        this->m_entryFoV = v34;
        this->m_lastInputFoV = 0.0;
      }
    }
    return this;
  }
  else
  {
    v7 = this->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (FreeCamActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v7, localClientNum, state);
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
  CgMLGCameraManager *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  CgMLGCameraManager *v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float m_mlgTargetCameraFoV; 
  float v20; 
  bool v21; 
  float m_mlgCurrentCameraFoV; 
  double v23; 
  double EaseInOutFactor; 
  CgMLGCameraManager *v25; 
  float v26; 
  float v27; 
  float v30; 
  float v32; 
  float v33; 
  CgMLGCameraManager *v34; 
  CgMLGCameraManager *v36; 
  CoDCasterCameraState state[4]; 
  float v38; 
  float v39; 
  double v40; 
  float v41; 
  double v42; 
  float v43; 
  double v44; 
  float v45; 
  double v46; 
  float v47; 
  CameraPose pose2; 
  CameraPose pose1; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == AERIAL )
  {
    m_cameraManager = this->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, LocalClientGlobals->clientNum);
    v10 = this->m_cameraManager;
    if ( CharacterInfo->team == TEAM_FOLLOWER )
    {
      state[0] = FREECAM_ACTIVE;
      return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v10, localClientNum, state);
    }
    else
    {
      v11 = *(double *)v10->m_mlgTargetCameraPos.v;
      v12 = *(double *)v10->m_mlgTargetCameraAngles.v;
      v13 = *(double *)v10->m_mlgCurrentCameraPos.v;
      v14 = *(double *)v10->m_mlgCurrentCameraAngles.v;
      v15 = v10->m_mlgTargetCameraPos.v[2];
      v16 = v10->m_mlgTargetCameraAngles.v[2];
      v17 = v10->m_mlgCurrentCameraPos.v[2];
      v18 = v10->m_mlgCurrentCameraAngles.v[2];
      m_mlgTargetCameraFoV = v10->m_mlgTargetCameraFoV;
      v20 = (float)LocalClientGlobals->frametime + this->m_elapsedTransitionTime;
      v21 = v20 < this->m_currentTransitionDuration;
      m_mlgCurrentCameraFoV = v10->m_mlgCurrentCameraFoV;
      v39 = m_mlgTargetCameraFoV;
      v38 = m_mlgCurrentCameraFoV;
      this->m_elapsedTransitionTime = v20;
      v46 = v11;
      v47 = v15;
      v42 = v12;
      v43 = v16;
      v44 = v13;
      v45 = v17;
      v40 = v14;
      v41 = v18;
      if ( !v21 )
        goto LABEL_10;
      pose2.angles.v[2] = v16;
      pose2.pos.v[2] = v15;
      pose2.fov = m_mlgTargetCameraFoV;
      pose1.fov = m_mlgCurrentCameraFoV;
      *(double *)pose2.pos.v = v11;
      *(double *)pose2.angles.v = v12;
      pose2.hasBeenSet = 0;
      *(double *)pose1.pos.v = v13;
      pose1.pos.v[2] = v17;
      *(double *)pose1.angles.v = v14;
      pose1.angles.v[2] = v18;
      pose1.hasBeenSet = 0;
      if ( CG_MLG_ArePosesNearlyEqual(&pose1, &pose2) )
      {
LABEL_10:
        v36 = this->m_cameraManager;
        state[0] = FREECAM_ACTIVE;
        return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v36, localClientNum, state);
      }
      else
      {
        v23 = I_fclamp(this->m_elapsedTransitionTime / this->m_currentTransitionDuration, 0.0, 1.0);
        EaseInOutFactor = CG_MLG_GetEaseInOutFactor(*(float *)&v23);
        v25 = this->m_cameraManager;
        v26 = (float)((float)(*((float *)&v46 + 1) - *((float *)&v44 + 1)) * *(float *)&EaseInOutFactor) + *((float *)&v44 + 1);
        v27 = (float)(*(float *)&v42 - *(float *)&v40) * 0.0027777778;
        v25->m_mlgCurrentCameraPos.v[0] = (float)((float)(*(float *)&v46 - *(float *)&v44) * *(float *)&EaseInOutFactor) + *(float *)&v44;
        v25->m_mlgCurrentCameraPos.v[1] = v26;
        _XMM13 = 0i64;
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v30 = (float)((float)((float)(v27 - *(float *)&_XMM2) * 360.0) * *(float *)&EaseInOutFactor) + *(float *)&v40;
        __asm { vroundss xmm3, xmm13, xmm2, 1 }
        v32 = v43 - v41;
        v33 = (float)((float)((float)((float)((float)(*((float *)&v42 + 1) - *((float *)&v40 + 1)) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&EaseInOutFactor) + *((float *)&v40 + 1);
        v25->m_mlgCurrentCameraPos.v[2] = (float)((float)(v47 - v45) * *(float *)&EaseInOutFactor) + v45;
        v34 = this->m_cameraManager;
        result = this;
        __asm { vroundss xmm2, xmm13, xmm1, 1 }
        v34->m_mlgCurrentCameraAngles.v[2] = (float)((float)((float)((float)(v32 * 0.0027777778) - *(float *)&_XMM2) * 360.0) * *(float *)&EaseInOutFactor) + v41;
        v34->m_mlgCurrentCameraAngles.v[0] = v30;
        *(float *)&_XMM2 = (float)(1.0 - *(float *)&EaseInOutFactor) * v38;
        v34->m_mlgCurrentCameraAngles.v[1] = v33;
        this->m_cameraManager->m_mlgCurrentCameraFoV = *(float *)&_XMM2 + (float)(*(float *)&EaseInOutFactor * m_mlgTargetCameraFoV);
      }
    }
  }
  else
  {
    v7 = this->m_cameraManager;
    state[0] = SPECTATOR_ENTERING;
    return (FreeCamEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v7, localClientNum, state);
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
  SpectatorActiveCameraState *v6; 
  CgMLGCameraManager *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  float v9; 
  float v10; 
  float v11; 
  ClientFov *ViewFovBySpace; 
  CgMLGCameraManager *v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  float v17; 
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
    v7 = this->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (SpectatorActiveCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v7, localClientNum, state);
  }
  else
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v9 = LocalClientGlobals->refdefViewAngles.v[0];
    v10 = LocalClientGlobals->refdefViewAngles.v[1];
    v11 = LocalClientGlobals->refdefViewAngles.v[2];
    ViewFovBySpace = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 0);
    v13 = this->m_cameraManager;
    v14 = outOrg.v[0];
    v15 = outOrg.v[1];
    v16 = *(_QWORD *)&ViewFovBySpace->finalFov;
    v17 = outOrg.v[2];
    v6 = this;
    v13->m_mlgCurrentCameraPos.v[0] = outOrg.v[0];
    v13->m_mlgCurrentCameraPos.v[1] = v15;
    v13->m_mlgCurrentCameraPos.v[2] = v17;
    v13->m_mlgCurrentCameraAngles.v[0] = v9;
    v13->m_mlgCurrentCameraAngles.v[1] = v10;
    v13->m_mlgCurrentCameraAngles.v[2] = v11;
    v13->m_mlgCurrentCameraFoV = *(float *)&v16;
    v13->m_mlgTargetCameraPos.v[0] = v14;
    v13->m_mlgTargetCameraPos.v[1] = v15;
    v13->m_mlgTargetCameraPos.v[2] = v17;
    v13->m_mlgTargetCameraAngles.v[0] = v9;
    v13->m_mlgTargetCameraAngles.v[1] = v10;
    v13->m_mlgTargetCameraAngles.v[2] = v11;
    v13->m_mlgTargetCameraFoV = *(float *)&v16;
  }
  return v6;
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
  CgMLGCameraManager *v7; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  float m_mlgCurrentCameraFoV; 
  double v15; 
  float v16; 
  float m_elapsedTransitionTime; 
  double v18; 
  float v19; 
  float m_mlgTargetCameraFoV; 
  float v21; 
  int FocusedPlayer; 
  CgGlobalsMP *v23; 
  centity_t *Entity; 
  unsigned int *p_eType; 
  __int128 v27; 
  double FovDvarDefaultValue; 
  float v30; 
  float viewHeightCurrent; 
  CgMLGCameraManager *v32; 
  float v33; 
  float v34; 
  CgMLGCameraManager *v35; 
  CgMLGCameraManager *v36; 
  float v39; 
  double v40; 
  double EaseInOutFactor; 
  __int128 v42; 
  __int128 v45; 
  __int128 v47; 
  CgMLGCameraManager *v60; 
  CgMLGCameraManager *v63; 
  CgMLGCameraManager *v64; 
  float v65; 
  CoDCasterCameraState state[4]; 
  float v67; 
  float v68; 
  unsigned int v69; 
  int v70; 
  int v71; 
  int v72; 
  vec3_t outOrigin; 
  double v74; 
  float v75; 
  double v76; 
  float v77; 
  double v78; 
  float v79; 
  tmat33_t<vec3_t> pose1; 
  vec3_t angles; 
  CameraPose pose2; 

  MLGCameraType = CgMLGCameraManager::GetMLGCameraType(this->m_cameraManager, localClientNum);
  if ( MLGCameraType == FREE )
  {
    m_cameraManager = this->m_cameraManager;
    state[0] = FREECAM_ENTERING;
    return (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(m_cameraManager, localClientNum, state);
  }
  else if ( MLGCameraType == AERIAL )
  {
    v7 = this->m_cameraManager;
    state[0] = AERIALCAM_ENTERING;
    return (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(v7, localClientNum, state);
  }
  else
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    v9 = this->m_cameraManager;
    v10 = *(double *)v9->m_mlgCurrentCameraPos.v;
    v11 = v9->m_mlgCurrentCameraPos.v[2];
    v12 = *(double *)v9->m_mlgCurrentCameraAngles.v;
    v13 = v9->m_mlgCurrentCameraAngles.v[2];
    m_mlgCurrentCameraFoV = v9->m_mlgCurrentCameraFoV;
    v15 = *(double *)v9->m_mlgTargetCameraPos.v;
    *(double *)outOrigin.v = v15;
    v16 = v9->m_mlgTargetCameraPos.v[2];
    outOrigin.v[2] = v16;
    m_elapsedTransitionTime = (float)LocalClientGlobals->frametime + this->m_elapsedTransitionTime;
    v18 = *(double *)v9->m_mlgTargetCameraAngles.v;
    v19 = v9->m_mlgTargetCameraAngles.v[2];
    m_mlgTargetCameraFoV = v9->m_mlgTargetCameraFoV;
    v76 = v10;
    v77 = v11;
    v21 = (float)((float)((float)(*((float *)&v15 + 1) - *((float *)&v76 + 1)) * (float)(*((float *)&v15 + 1) - *((float *)&v76 + 1))) + (float)((float)(*(float *)&v15 - *(float *)&v10) * (float)(*(float *)&v15 - *(float *)&v10))) + (float)((float)(outOrigin.v[2] - v11) * (float)(outOrigin.v[2] - v11));
    v67 = m_mlgCurrentCameraFoV;
    this->m_elapsedTransitionTime = m_elapsedTransitionTime;
    v78 = v12;
    v79 = v13;
    v74 = v18;
    v75 = v19;
    if ( v21 <= 900.0 )
    {
      v9->m_shouldRenderThirdPerson = 0;
      m_elapsedTransitionTime = this->m_elapsedTransitionTime;
      v16 = outOrigin.v[2];
      v15 = *(double *)outOrigin.v;
    }
    if ( m_elapsedTransitionTime >= this->m_currentTransitionDuration )
      goto LABEL_20;
    pose2.pos.v[2] = v16;
    pose2.angles.v[2] = v19;
    pose2.fov = m_mlgTargetCameraFoV;
    pose1.m[2].v[0] = m_mlgCurrentCameraFoV;
    *(double *)pose2.pos.v = v15;
    *(double *)pose2.angles.v = v18;
    pose2.hasBeenSet = 0;
    *(double *)pose1.m[0].v = v10;
    pose1.m[0].v[2] = v11;
    *(double *)pose1.row1.v = v12;
    pose1.m[1].v[2] = v13;
    LOBYTE(pose1.row2.y) = 0;
    if ( CG_MLG_ArePosesNearlyEqual((const CameraPose *)&pose1, &pose2) )
    {
LABEL_20:
      v64 = this->m_cameraManager;
      v65 = *((float *)&v74 + 1);
      state[0] = SPECTATOR_ACTIVE;
      v64->m_mlgCurrentCameraAngles.v[0] = *(float *)&v74;
      v64->m_mlgCurrentCameraAngles.v[2] = v75;
      v64->m_mlgCurrentCameraAngles.v[1] = v65;
      this->m_cameraManager->m_mlgCurrentCameraPos = outOrigin;
      this->m_cameraManager->m_mlgCurrentCameraFoV = m_mlgTargetCameraFoV;
      return (SpectatorEnteringCameraState *)CgMLGCameraManager::UpdateMLGCameraState(this->m_cameraManager, localClientNum, state);
    }
    else
    {
      FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
      if ( FocusedPlayer != -1 )
      {
        v23 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
        Entity = CG_GetEntity(localClientNum, FocusedPlayer);
        p_eType = (unsigned int *)&Entity->pose.eType;
        if ( Entity )
        {
          if ( ((Entity->nextState.eType - 1) & 0xFFEF) == 0 )
          {
            CG_GetPoseOrigin(&Entity->pose, &outOrigin);
            _XMM14 = p_eType[18];
            v27 = p_eType[19];
            _XMM13 = p_eType[20];
            FovDvarDefaultValue = CG_View_GetFovDvarDefaultValue(localClientNum);
            angles.v[0] = 0.0;
            angles.v[2] = 0.0;
            v68 = *(float *)&FovDvarDefaultValue;
            angles.v[1] = *(float *)&v27;
            v30 = *(float *)&FovDvarDefaultValue;
            AnglesToAxis(&angles, &pose1);
            viewHeightCurrent = v23->predictedPlayerState.viewHeightCurrent;
            v32 = this->m_cameraManager;
            outOrigin.v[1] = (float)((float)(viewHeightCurrent * pose1.m[2].v[1]) + (float)(10.0 * pose1.m[0].v[1])) + outOrigin.v[1];
            v33 = *((float *)&v76 + 1);
            outOrigin.v[0] = (float)((float)(viewHeightCurrent * pose1.m[2].v[0]) + (float)(10.0 * pose1.m[0].v[0])) + outOrigin.v[0];
            outOrigin.v[2] = (float)((float)(viewHeightCurrent * pose1.m[2].v[2]) + (float)(10.0 * pose1.m[0].v[2])) + outOrigin.v[2];
            v32->m_mlgTargetCameraPos.v[0] = outOrigin.v[0];
            v34 = v77;
            v32->m_mlgTargetCameraPos.v[1] = outOrigin.v[1];
            v32->m_mlgTargetCameraPos.v[2] = outOrigin.v[2];
            v35 = this->m_cameraManager;
            v72 = v27;
            v71 = _XMM13;
            v69 = _XMM13;
            v35->m_mlgTargetCameraAngles.v[0] = *(float *)&_XMM14;
            v35->m_mlgTargetCameraAngles.v[1] = *(float *)&v27;
            v35->m_mlgTargetCameraAngles.v[2] = *(float *)&_XMM13;
            v36 = this->m_cameraManager;
            v70 = _XMM13;
            _XMM5 = _XMM14;
            _XMM10 = v27;
            v36->m_mlgTargetCameraFoV = *(float *)&FovDvarDefaultValue;
            v39 = outOrigin.v[0];
            if ( (float)((float)((float)((float)(outOrigin.v[1] - v33) * (float)(outOrigin.v[1] - v33)) + (float)((float)(outOrigin.v[0] - *(float *)&v10) * (float)(outOrigin.v[0] - *(float *)&v10))) + (float)((float)(outOrigin.v[2] - v34) * (float)(outOrigin.v[2] - v34))) < 1.0 )
            {
              _XMM3 = _XMM13;
            }
            else
            {
              v40 = I_fclamp(this->m_elapsedTransitionTime / this->m_currentTransitionDuration, 0.0, 1.0);
              EaseInOutFactor = CG_MLG_GetEaseInOutFactor(*(float *)&v40);
              v39 = (float)((float)(outOrigin.v[0] - *(float *)&v10) * *(float *)&EaseInOutFactor) + *(float *)&v10;
              v42 = _XMM14;
              _XMM9 = 0i64;
              outOrigin.v[1] = (float)((float)(outOrigin.v[1] - v33) * *(float *)&EaseInOutFactor) + v33;
              __asm { vroundss xmm2, xmm9, xmm1, 1 }
              *(float *)&v42 = (float)((float)((float)((float)((float)(*(float *)&_XMM14 - *(float *)&v78) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * *(float *)&EaseInOutFactor) + *(float *)&v78;
              _XMM14 = v42;
              v45 = v27;
              outOrigin.v[2] = (float)((float)(outOrigin.v[2] - v34) * *(float *)&EaseInOutFactor) + v34;
              __asm { vroundss xmm3, xmm9, xmm2, 1 }
              *(float *)&v45 = (float)((float)((float)((float)((float)(*(float *)&v27 - *((float *)&v78 + 1)) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&EaseInOutFactor) + *((float *)&v78 + 1);
              v27 = v45;
              v47 = _XMM13;
              __asm { vroundss xmm3, xmm9, xmm2, 1 }
              *(float *)&v47 = (float)((float)((float)((float)((float)(*(float *)&_XMM13 - v79) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * *(float *)&EaseInOutFactor) + v79;
              _XMM13 = v47;
              _XMM3 = v47;
              v30 = (float)((float)(1.0 - *(float *)&EaseInOutFactor) * v67) + (float)(*(float *)&EaseInOutFactor * v68);
              v72 = v27;
              v71 = v47;
              v69 = v47;
              v70 = v47;
              _XMM5 = _XMM14;
              _XMM10 = v27;
            }
            _XMM2 = v69;
            __asm
            {
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm14, xmm11, xmm0
            }
            *(float *)&v74 = *(float *)&_XMM0;
            __asm
            {
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm2, xmm4, xmm0
            }
            v68 = *(float *)&_XMM0;
            __asm
            {
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm3, xmm2, xmm0
            }
            v67 = *(float *)&_XMM0;
            __asm
            {
              vcmpeqss xmm0, xmm5, xmm1
              vblendvps xmm0, xmm10, xmm2, xmm0
            }
            if ( *(float *)&_XMM0 == -0.0 )
            {
              _XMM0 = LODWORD(v68);
              LODWORD(v27) = 0;
            }
            else
            {
              _XMM0 = LODWORD(v67);
            }
            v60 = this->m_cameraManager;
            __asm
            {
              vcmpeqss xmm0, xmm0, xmm1
              vblendvps xmm2, xmm13, xmm11, xmm0
            }
            v60->m_mlgCurrentCameraPos.v[0] = v39;
            v60->m_mlgCurrentCameraPos.v[1] = outOrigin.v[1];
            LODWORD(_XMM0) = LODWORD(v74);
            v60->m_mlgCurrentCameraPos.v[2] = outOrigin.v[2];
            v63 = this->m_cameraManager;
            v63->m_mlgCurrentCameraAngles.v[1] = *(float *)&v27;
            v63->m_mlgCurrentCameraAngles.v[0] = *(float *)&_XMM0;
            v63->m_mlgCurrentCameraAngles.v[2] = *(float *)&_XMM2;
            this->m_cameraManager->m_mlgCurrentCameraFoV = v30;
          }
        }
      }
      return this;
    }
  }
}

/*
==============
AerialCamActiveCameraState::UpdateTetheredPositionInternal
==============
*/
void AerialCamActiveCameraState::UpdateTetheredPositionInternal(AerialCamActiveCameraState *this, const LocalClientNum_t localClientNum, const CgGlobalsMP *const cgameGlob)
{
  int FocusedPlayer; 
  int v7; 
  centity_t *ClientEntity; 
  bool v9; 
  CgMLGSpectator *MLGSpectator; 

  FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(this->m_cameraManager, localClientNum);
  this->m_focusOnBarycenter = 0;
  v7 = FocusedPlayer;
  if ( FocusedPlayer != cgameGlob->clientNum )
  {
    if ( FocusedPlayer != -1 )
    {
      ClientEntity = CG_MLG_GetClientEntity(localClientNum, FocusedPlayer);
      if ( !ClientEntity || ((ClientEntity->nextState.eType - 1) & 0xFFEF) != 0 || (v9 = this->m_lastFollowedClientNum != v7, CG_GetPoseOrigin(&ClientEntity->pose, &this->m_groundPosition), v9) || (MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum), !CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v7)) && (this->m_currentOffset.v[0] != 0.0 || this->m_currentOffset.v[1] != 0.0) )
      {
        *(_QWORD *)this->m_currentOffset.v = 0i64;
        this->m_elapsedTransitionTime = 0.0;
      }
    }
    this->m_lastFollowedClientNum = v7;
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

