/*
==============
CG_LoadSlide
==============
*/

void __fastcall CG_LoadSlide(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_LoadSlide@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_View_SetScreenView
==============
*/

void __fastcall CG_View_SetScreenView(const LocalClientNum_t localClientNum, int activeClientIndex, int activeClientCount)
{
  ?CG_View_SetScreenView@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, activeClientIndex, activeClientCount);
}

/*
==============
CG_LoadCinematicLetterBoxInfo
==============
*/

void __fastcall CG_LoadCinematicLetterBoxInfo(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_LoadCinematicLetterBoxInfo@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_View_CalcRadialMotionBlurInternal
==============
*/

void __fastcall CG_View_CalcRadialMotionBlurInternal(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcRadialMotionBlurInternal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::UpdateViewKickState
==============
*/

void __fastcall CgViewSystem::UpdateViewKickState(CgViewSystem *this, vec3_t *outCorrectionThisFrame)
{
  ?UpdateViewKickState@CgViewSystem@@QEAAXAEATvec3_t@@@Z(this, outCorrectionThisFrame);
}

/*
==============
CG_View_IsThermalVisionShadowOn
==============
*/

bool __fastcall CG_View_IsThermalVisionShadowOn(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsThermalVisionShadowOn@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_StopWaterSheetFX
==============
*/

void __fastcall CG_View_StopWaterSheetFX(const LocalClientNum_t localClientNum)
{
  ?CG_View_StopWaterSheetFX@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_SetViewNowDvar
==============
*/

void __fastcall CG_View_SetViewNowDvar(const LocalClientNum_t localClientNum)
{
  ?CG_View_SetViewNowDvar@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_DumpDObj
==============
*/

void __fastcall CG_View_DumpDObj(const LocalClientNum_t localClientNum)
{
  ?CG_View_DumpDObj@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_ThermalScoped
==============
*/

bool __fastcall CG_View_ThermalScoped(LocalClientNum_t localClientNum, const cg_t *cgameGlob)
{
  return ?CG_View_ThermalScoped@@YA_NW4LocalClientNum_t@@PEBVcg_t@@@Z(localClientNum, cgameGlob);
}

/*
==============
CG_View_IsUAVJammed
==============
*/

bool __fastcall CG_View_IsUAVJammed(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsUAVJammed@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_UpdateSceneLensProfile
==============
*/

void __fastcall CG_View_UpdateSceneLensProfile(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateSceneLensProfile@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcRemoteEyeValues
==============
*/

int __fastcall CG_View_CalcRemoteEyeValues(const LocalClientNum_t localClientNum)
{
  return ?CG_View_CalcRemoteEyeValues@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_UpdateWeaponMovement_Post
==============
*/

void __fastcall CG_View_UpdateWeaponMovement_Post(cg_t *cgameGlob)
{
  ?CG_View_UpdateWeaponMovement_Post@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CgViewSystem::StorePreviousFrameKickValues
==============
*/

void __fastcall CgViewSystem::StorePreviousFrameKickValues(CgViewSystem *this, const cg_t *cgameGlob, const bool hasCameraInput)
{
  ?StorePreviousFrameKickValues@CgViewSystem@@IEAAXPEBVcg_t@@_N@Z(this, cgameGlob, hasCameraInput);
}

/*
==============
CG_View_GetFovDvarDefaultValue
==============
*/

double __fastcall CG_View_GetFovDvarDefaultValue(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetFovDvarDefaultValue@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_UpdateSceneDepthOfField
==============
*/

void __fastcall CG_View_UpdateSceneDepthOfField(const LocalClientNum_t localClientNum, bool isMultiplayer, bool isThirdPerson, float multiplayerAdsStart, float multiplayerAdsEnd)
{
  ?CG_View_UpdateSceneDepthOfField@@YAXW4LocalClientNum_t@@_N1MM@Z(localClientNum, isMultiplayer, isThirdPerson, multiplayerAdsStart, multiplayerAdsEnd);
}

/*
==============
CG_View_UpdateFovUserScale
==============
*/

void __fastcall CG_View_UpdateFovUserScale(cg_t *cgameGlob)
{
  ?CG_View_UpdateFovUserScale@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_View_GetScopeHudOutlineSettings
==============
*/

void __fastcall CG_View_GetScopeHudOutlineSettings(const LocalClientNum_t localClientNum, GfxScopeHudOutlineInfo *outlineInfo)
{
  ?CG_View_GetScopeHudOutlineSettings@@YAXW4LocalClientNum_t@@PEAUGfxScopeHudOutlineInfo@@@Z(localClientNum, outlineInfo);
}

/*
==============
CG_View_SetThermal
==============
*/

void __fastcall CG_View_SetThermal(const LocalClientNum_t localClientNum)
{
  ?CG_View_SetThermal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_DumpAnims
==============
*/

void __fastcall CG_View_DumpAnims(const LocalClientNum_t localClientNum)
{
  ?CG_View_DumpAnims@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_InitXCamView
==============
*/

void __fastcall CG_View_InitXCamView(cg_t *cgameGlob)
{
  ?CG_View_InitXCamView@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_View_ClientHasAntiJammer
==============
*/

bool __fastcall CG_View_ClientHasAntiJammer(const LocalClientNum_t localClientNum)
{
  return ?CG_View_ClientHasAntiJammer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DebugDrawXAnimTreeFreeDobjInfo
==============
*/

void CG_DebugDrawXAnimTreeFreeDobjInfo(void)
{
  ?CG_DebugDrawXAnimTreeFreeDobjInfo@@YAXXZ();
}

/*
==============
CG_View_CalcCameraTweaks
==============
*/

void __fastcall CG_View_CalcCameraTweaks(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcCameraTweaks@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_InitFocusParamsFromWeaponInspect
==============
*/

void __fastcall CG_InitFocusParamsFromWeaponInspect(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams)
{
  ?CG_InitFocusParamsFromWeaponInspect@@YAXPEBUplayerState_s@@PEAVcg_t@@W4LocalClientNum_t@@PEAUFocusParams@@@Z(ps, cgameGlob, localClientNum, focusParams);
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/

bool __fastcall CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, const int *skipEntities, int skipEntityCount, vec3_t *result)
{
  return ?CG_View_ThirdPersonViewTrace@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@AEBTvec3_t@@2HMPEBHHAEAT3@@Z(localClientNum, ps, start, end, contentMask, startSolidOffset, skipEntities, skipEntityCount, result);
}

/*
==============
CgViewSystem::CalculateCounterKickMagnitude
==============
*/

void __fastcall CgViewSystem::CalculateCounterKickMagnitude(CgViewSystem *this, const cg_t *cgameGlob, const bool hasCameraInput)
{
  ?CalculateCounterKickMagnitude@CgViewSystem@@IEAAXPEBVcg_t@@_N@Z(this, cgameGlob, hasCameraInput);
}

/*
==============
CG_SaveViewLinkedEntities
==============
*/

void __fastcall CG_SaveViewLinkedEntities(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_SaveViewLinkedEntities@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_View_FxTest
==============
*/

void CG_View_FxTest(void)
{
  ?CG_View_FxTest@@YAXXZ();
}

/*
==============
CG_View_UpdateDepthScanParams
==============
*/

void __fastcall CG_View_UpdateDepthScanParams(LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateDepthScanParams@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_GetFovUserScale
==============
*/

double __fastcall CG_View_GetFovUserScale()
{
  double result; 

  *(float *)&result = ?CG_View_GetFovUserScale@@YAMXZ();
  return result;
}

/*
==============
CG_CalcErrorDecay
==============
*/

void __fastcall CG_CalcErrorDecay(const LocalClientNum_t localClientNum, vec3_t *inOutOrigin)
{
  ?CG_CalcErrorDecay@@YAXW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, inOutOrigin);
}

/*
==============
CG_SetVignetteParams
==============
*/

void __fastcall CG_SetVignetteParams(LocalClientNum_t localClientNum, float intensity, float squareAspectRatioWeight, float sizeX, float sizeY, float falloff, float falloffStart, float boxSizeX, float boxSizeY, float offsetX, float offsetY)
{
  ?CG_SetVignetteParams@@YAXW4LocalClientNum_t@@MMMMMMMMMM@Z(localClientNum, intensity, squareAspectRatioWeight, sizeX, sizeY, falloff, falloffStart, boxSizeX, boxSizeY, offsetX, offsetY);
}

/*
==============
CG_View_CalcRemoteEyes
==============
*/

void __fastcall CG_View_CalcRemoteEyes(LocalClientNum_t localClientNum, int *outIsRemoteEyes)
{
  ?CG_View_CalcRemoteEyes@@YAXW4LocalClientNum_t@@PEAH@Z(localClientNum, outIsRemoteEyes);
}

/*
==============
CG_View_CalcVehicleCamera
==============
*/

int __fastcall CG_View_CalcVehicleCamera(const LocalClientNum_t localClientNum, int *outIsRemoteEyes)
{
  return ?CG_View_CalcVehicleCamera@@YAHW4LocalClientNum_t@@PEAH@Z(localClientNum, outIsRemoteEyes);
}

/*
==============
CG_View_UpdateShellShock
==============
*/

void __fastcall CG_View_UpdateShellShock(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateShellShock@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcViewOrigin
==============
*/

void __fastcall CG_View_CalcViewOrigin(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcViewOrigin@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_UpdateWaterSheetingFX
==============
*/

void __fastcall CG_View_UpdateWaterSheetingFX(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateWaterSheetingFX@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_IsEMPJammed
==============
*/

bool __fastcall CG_View_IsEMPJammed(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsEMPJammed@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_SetRadialMotionBlur
==============
*/

void __fastcall CG_View_SetRadialMotionBlur(GfxRadialMotionBlur *radialMotionBlur, const SuitDef *suit, const RadialMotionBlurState *radialMotionBlurState, const RadialMotionBlurType blurType, const float normalizedTime)
{
  ?CG_View_SetRadialMotionBlur@@YAXPEAUGfxRadialMotionBlur@@PEBUSuitDef@@PEBURadialMotionBlurState@@W4RadialMotionBlurType@@M@Z(radialMotionBlur, suit, radialMotionBlurState, blurType, normalizedTime);
}

/*
==============
CG_View_SetFovDvarValue
==============
*/

void __fastcall CG_View_SetFovDvarValue(const LocalClientNum_t localClientNum, const float fov)
{
  ?CG_View_SetFovDvarValue@@YAXW4LocalClientNum_t@@M@Z(localClientNum, fov);
}

/*
==============
CG_View_SetupViewport
==============
*/

void __fastcall CG_View_SetupViewport(const LocalClientNum_t localClientNum)
{
  ?CG_View_SetupViewport@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_UpdateXCamView
==============
*/

void __fastcall CG_View_UpdateXCamView(LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateXCamView@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_SetHudOutline
==============
*/

void __fastcall CG_View_SetHudOutline(const LocalClientNum_t localClientNum)
{
  ?CG_View_SetHudOutline@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_FinalizeViewValues
==============
*/

void __fastcall CG_View_FinalizeViewValues(const LocalClientNum_t localClientNum)
{
  ?CG_View_FinalizeViewValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcDrivingCamera
==============
*/

void __fastcall CG_View_CalcDrivingCamera(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcDrivingCamera@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_SetupAimAssist
==============
*/

void __fastcall CG_View_SetupAimAssist(const LocalClientNum_t localClientNum)
{
  ?CG_View_SetupAimAssist@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_GetFovDvarValue
==============
*/

double __fastcall CG_View_GetFovDvarValue(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetFovDvarValue@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_UpdateMainThreadTraceSafeLogic
==============
*/

void __fastcall CG_View_UpdateMainThreadTraceSafeLogic(LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateMainThreadTraceSafeLogic@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_ShouldRenderGunAtDifferentFov
==============
*/

bool __fastcall CG_View_ShouldRenderGunAtDifferentFov(const cg_t *const cgameGlob, const playerState_s *ps)
{
  return ?CG_View_ShouldRenderGunAtDifferentFov@@YA_NQEBVcg_t@@PEBUplayerState_s@@@Z(cgameGlob, ps);
}

/*
==============
CG_View_CalcFovCompensation
==============
*/

double __fastcall CG_View_CalcFovCompensation(const cg_t *cgameGlob)
{
  double result; 

  *(float *)&result = ?CG_View_CalcFovCompensation@@YAMPEBVcg_t@@@Z(cgameGlob);
  return result;
}

/*
==============
CG_View_IsUsingDualFOV
==============
*/

bool __fastcall CG_View_IsUsingDualFOV(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsUsingDualFOV@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_FxSetTestPosition
==============
*/

void CG_View_FxSetTestPosition(void)
{
  ?CG_View_FxSetTestPosition@@YAXXZ();
}

/*
==============
CgViewSystem::SetViewValues
==============
*/

void __fastcall CgViewSystem::SetViewValues(CgViewSystem *this)
{
  ?SetViewValues@CgViewSystem@@UEBAXXZ(this);
}

/*
==============
CG_View_UpdateShieldViewFx
==============
*/

void __fastcall CG_View_UpdateShieldViewFx(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateShieldViewFx@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetViewFovBySpace
==============
*/

ClientFov *__fastcall CG_GetViewFovBySpace(ClientFov *result, const LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const bool updateFovWeights)
{
  return ?CG_GetViewFovBySpace@@YA?AUClientFov@@W4LocalClientNum_t@@W4CG_FovSpace@@_N@Z(result, localClientNum, fovSpace, updateFovWeights);
}

/*
==============
CG_View_IsKillCamView
==============
*/

bool __fastcall CG_View_IsKillCamView(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsKillCamView@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_OffsetCrosshair
==============
*/

void __fastcall CG_View_OffsetCrosshair(const LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  ?CG_View_OffsetCrosshair@@YAXW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, inOutViewAngles);
}

/*
==============
CG_View_CalcCubemapViewValues
==============
*/

void __fastcall CG_View_CalcCubemapViewValues(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcCubemapViewValues@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SmoothCameraZ
==============
*/

void __fastcall CG_SmoothCameraZ(const cg_t *cgameGlob, vec3_t *inOutOrigin)
{
  ?CG_SmoothCameraZ@@YAXPEBVcg_t@@AEATvec3_t@@@Z(cgameGlob, inOutOrigin);
}

/*
==============
CG_View_StartWaterSheetFX
==============
*/

void __fastcall CG_View_StartWaterSheetFX(const LocalClientNum_t localClientNum, int duration)
{
  ?CG_View_StartWaterSheetFX@@YAXW4LocalClientNum_t@@H@Z(localClientNum, duration);
}

/*
==============
CG_View_UpdateFov
==============
*/

void __fastcall CG_View_UpdateFov(const LocalClientNum_t localClientNum, const float fov_x)
{
  ?CG_View_UpdateFov@@YAXW4LocalClientNum_t@@M@Z(localClientNum, fov_x);
}

/*
==============
CG_View_UpdateViewmodelOutline
==============
*/

void __fastcall CG_View_UpdateViewmodelOutline(LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateViewmodelOutline@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_LoadFOVLerp
==============
*/

void __fastcall CG_LoadFOVLerp(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_LoadFOVLerp@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_GetLocalClientViewParams
==============
*/

const ClientViewParams *__fastcall CG_GetLocalClientViewParams(LocalClientNum_t localClientNum)
{
  return ?CG_GetLocalClientViewParams@@YAPEBUClientViewParams@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_TraceProfiling
==============
*/

void __fastcall CG_View_TraceProfiling(const LocalClientNum_t localClientNum)
{
  ?CG_View_TraceProfiling@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_IsThermalVisionOn
==============
*/

bool __fastcall CG_View_IsThermalVisionOn(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsThermalVisionOn@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_DumpAnims3D
==============
*/

void __fastcall CG_View_DumpAnims3D(const LocalClientNum_t localClientNum)
{
  ?CG_View_DumpAnims3D@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystem::HasCameraInput
==============
*/

bool __fastcall CgViewSystem::HasCameraInput(CgViewSystem *this, const cg_t *cgameGlob)
{
  return ?HasCameraInput@CgViewSystem@@IEBA_NPEBVcg_t@@@Z(this, cgameGlob);
}

/*
==============
CG_View_IsOutOfBody
==============
*/

bool __fastcall CG_View_IsOutOfBody(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsOutOfBody@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_IsKillCamEntityView
==============
*/

bool __fastcall CG_View_IsKillCamEntityView(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsKillCamEntityView@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcWeaponInspectDoF
==============
*/

void __fastcall CG_View_CalcWeaponInspectDoF(cg_t *cgameGlob)
{
  ?CG_View_CalcWeaponInspectDoF@@YAXPEAVcg_t@@@Z(cgameGlob);
}

/*
==============
CG_View_UpdateScopeOutlineInfo
==============
*/

void __fastcall CG_View_UpdateScopeOutlineInfo(LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateScopeOutlineInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SaveFOVLerp
==============
*/

void __fastcall CG_SaveFOVLerp(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_SaveFOVLerp@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_GetViewZoomScale
==============
*/

double __fastcall CG_GetViewZoomScale(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_GetViewZoomScale@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_UpdatePlayerView
==============
*/

void __fastcall CG_View_UpdatePlayerView(const LocalClientNum_t localClientNum, const bool saveLastTime, const int msec, const int inputTime, const int serverTime, PlayerViewState *const viewState)
{
  ?CG_View_UpdatePlayerView@@YAXW4LocalClientNum_t@@_NHHHQEAUPlayerViewState@@@Z(localClientNum, saveLastTime, msec, inputTime, serverTime, viewState);
}

/*
==============
CG_View_UpdateTurretZoom
==============
*/

void __fastcall CG_View_UpdateTurretZoom(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateTurretZoom@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_GetClientAspectRatio
==============
*/

double __fastcall CG_View_GetClientAspectRatio(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetClientAspectRatio@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_InitFocusParamsFromHyperfocalMode
==============
*/

void __fastcall CG_InitFocusParamsFromHyperfocalMode(const playerState_s *ps, cg_t *cgameGlob, FocusParams *focusParams, bool mpMode)
{
  ?CG_InitFocusParamsFromHyperfocalMode@@YAXPEBUplayerState_s@@PEAVcg_t@@PEAUFocusParams@@_N@Z(ps, cgameGlob, focusParams, mpMode);
}

/*
==============
CG_View_AddViewHeight
==============
*/

bool __fastcall CG_View_AddViewHeight(const LocalClientNum_t localClientNum, vec3_t *inOutViewOrigin)
{
  return ?CG_View_AddViewHeight@@YA_NW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, inOutViewOrigin);
}

/*
==============
CG_View_IsKillCamDefaultView
==============
*/

bool __fastcall CG_View_IsKillCamDefaultView(const LocalClientNum_t localClientNum)
{
  return ?CG_View_IsKillCamDefaultView@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_InterpolateFocusParams
==============
*/

void __fastcall CG_InterpolateFocusParams(const FocusParams *focusParams1, const FocusParams *focusParams2, float w, FocusParams *focusParams)
{
  ?CG_InterpolateFocusParams@@YAXPEBUFocusParams@@0MPEAU1@@Z(focusParams1, focusParams2, w, focusParams);
}

/*
==============
CG_View_UpdateThirdPersonCameraCollision
==============
*/

void __fastcall CG_View_UpdateThirdPersonCameraCollision(LocalClientNum_t localClientNum, int ignoreEntNum, const vec3_t *pivotOrigin, const vec3_t *cameraOffset, const vec3_t *viewAngles, bool useUniveralUpTrace, bool isInPhase, vec3_t *outCameraOrigin, vec3_t *outCameraAngles)
{
  ?CG_View_UpdateThirdPersonCameraCollision@@YAXW4LocalClientNum_t@@HAEBTvec3_t@@11_N2AEAT2@3@Z(localClientNum, ignoreEntNum, pivotOrigin, cameraOffset, viewAngles, useUniveralUpTrace, isInPhase, outCameraOrigin, outCameraAngles);
}

/*
==============
CG_View_UpdateTestFX
==============
*/

void __fastcall CG_View_UpdateTestFX(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateTestFX@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_ApplyLinkCameraAnimation
==============
*/

bool __fastcall CG_View_ApplyLinkCameraAnimation(const LocalClientNum_t localClientNum)
{
  return ?CG_View_ApplyLinkCameraAnimation@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_ToggleCenterView
==============
*/

void __fastcall CG_View_ToggleCenterView(LocalClientNum_t localClientNum)
{
  ?CG_View_ToggleCenterView@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_GetZNearDvar
==============
*/

double __fastcall CG_View_GetZNearDvar(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetZNearDvar@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_DrawShellshockBlend
==============
*/

void __fastcall CG_View_DrawShellshockBlend(LocalClientNum_t localClientNum)
{
  ?CG_View_DrawShellshockBlend@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalculateViewJostle
==============
*/

void __fastcall CG_View_CalculateViewJostle(const cg_t *cgameGlob, const CgViewSystem::JostleConfig *config, const tmat43_t<vec3_t> *linkedTagAxis, const vec3_t *targetAngles, vec3_t *outAngles, ViewJostleState *outJostleState)
{
  ?CG_View_CalculateViewJostle@@YAXPEBVcg_t@@PEBUJostleConfig@CgViewSystem@@AEBT?$tmat43_t@Tvec3_t@@@@AEBTvec3_t@@AEAT5@PEAUViewJostleState@@@Z(cgameGlob, config, linkedTagAxis, targetAngles, outAngles, outJostleState);
}

/*
==============
CG_SaveSlide
==============
*/

void __fastcall CG_SaveSlide(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_SaveSlide@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_InitDofPhysical
==============
*/

void __fastcall CG_InitDofPhysical(const playerState_s *ps, cg_t *cgameGlob)
{
  ?CG_InitDofPhysical@@YAXPEBUplayerState_s@@PEAVcg_t@@@Z(ps, cgameGlob);
}

/*
==============
CG_View_CalcWeaponFireMotionBlurInternal
==============
*/

void __fastcall CG_View_CalcWeaponFireMotionBlurInternal(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcWeaponFireMotionBlurInternal@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_UpdateLocSelInfo
==============
*/

void __fastcall CG_View_UpdateLocSelInfo(const LocalClientNum_t localClientNum)
{
  ?CG_View_UpdateLocSelInfo@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_GetEffectiveFOVForWeapon
==============
*/

double __fastcall CG_View_GetEffectiveFOVForWeapon(const LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const Weapon *weapon, const bool isAlternate, const bool updateFovWeights, bool *outRanVelocityBasedFovIncreaseCalculation)
{
  double result; 

  *(float *)&result = ?CG_View_GetEffectiveFOVForWeapon@@YAMW4LocalClientNum_t@@W4CG_FovSpace@@AEBUWeapon@@_N3PEA_N@Z(localClientNum, fovSpace, weapon, isAlternate, updateFovWeights, outRanVelocityBasedFovIncreaseCalculation);
  return result;
}

/*
==============
CG_SaveCinematicLetterBoxInfo
==============
*/

void __fastcall CG_SaveCinematicLetterBoxInfo(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_SaveCinematicLetterBoxInfo@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_View_GetFovUnscaledDvarValue
==============
*/

double __fastcall CG_View_GetFovUnscaledDvarValue(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetFovUnscaledDvarValue@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_GetCrosshairVerticalOffset
==============
*/

double __fastcall CG_View_GetCrosshairVerticalOffset(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  double result; 

  *(float *)&result = ?CG_View_GetCrosshairVerticalOffset@@YAMW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
  return result;
}

/*
==============
CG_View_CalcTurretCamera
==============
*/

void __fastcall CG_View_CalcTurretCamera(const LocalClientNum_t localClientNum, bool calcWorldSpaceTurret)
{
  ?CG_View_CalcTurretCamera@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, calcWorldSpaceTurret);
}

/*
==============
CG_View_GetZNear
==============
*/

double __fastcall CG_View_GetZNear(const LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_View_GetZNear@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_View_CalcFov
==============
*/

void __fastcall CG_View_CalcFov(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcFov@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcVignette
==============
*/

void __fastcall CG_View_CalcVignette(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcVignette@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_OffsetFirstPersonView
==============
*/

void __fastcall CG_View_OffsetFirstPersonView(const LocalClientNum_t localClientNum, const bool ranPrediction, vec3_t *inOutViewAngles, vec3_t *inOutViewOrigin)
{
  ?CG_View_OffsetFirstPersonView@@YAXW4LocalClientNum_t@@_NAEATvec3_t@@2@Z(localClientNum, ranPrediction, inOutViewAngles, inOutViewOrigin);
}

/*
==============
CG_View_ApplySmoothing
==============
*/

void __fastcall CG_View_ApplySmoothing(const LocalClientNum_t localClientNum, bool isSmoothingActive, vec3_t *inOutAngles)
{
  ?CG_View_ApplySmoothing@@YAXW4LocalClientNum_t@@_NAEATvec3_t@@@Z(localClientNum, isSmoothingActive, inOutAngles);
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/

bool __fastcall CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, vec3_t *result)
{
  return ?CG_View_ThirdPersonViewTrace@@YA_NW4LocalClientNum_t@@PEBUplayerState_s@@AEBTvec3_t@@2HMAEAT3@@Z(localClientNum, ps, start, end, contentMask, startSolidOffset, result);
}

/*
==============
CG_View_SetupRefDef
==============
*/

void __fastcall CG_View_SetupRefDef(const LocalClientNum_t localClientNum, const float zNear, const float uiBlurRadius)
{
  ?CG_View_SetupRefDef@@YAXW4LocalClientNum_t@@MM@Z(localClientNum, zNear, uiBlurRadius);
}

/*
==============
CgViewSystem::UpdateCurrentFrameKickValues
==============
*/

void __fastcall CgViewSystem::UpdateCurrentFrameKickValues(CgViewSystem *this, const cg_t *cgameGlob)
{
  ?UpdateCurrentFrameKickValues@CgViewSystem@@IEAAXPEBVcg_t@@@Z(this, cgameGlob);
}

/*
==============
CG_InitFocusParamsFromAds
==============
*/

void __fastcall CG_InitFocusParamsFromAds(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams, bool isMultiplayer, float multiplayerAdsStart, float multiplayerAdsEnd)
{
  ?CG_InitFocusParamsFromAds@@YAXPEBUplayerState_s@@PEAVcg_t@@W4LocalClientNum_t@@PEAUFocusParams@@_NMM@Z(ps, cgameGlob, localClientNum, focusParams, isMultiplayer, multiplayerAdsStart, multiplayerAdsEnd);
}

/*
==============
CG_LoadViewLinkedEntities
==============
*/

void __fastcall CG_LoadViewLinkedEntities(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  ?CG_LoadViewLinkedEntities@@YAXPEAUMemoryFile@@W4LocalClientNum_t@@@Z(memFile, localClientNum);
}

/*
==============
CG_View_PrintPlayerViewState
==============
*/

void __fastcall CG_View_PrintPlayerViewState(const LocalClientNum_t localClientNum, const PlayerViewState *viewState)
{
  ?CG_View_PrintPlayerViewState@@YAXW4LocalClientNum_t@@AEBUPlayerViewState@@@Z(localClientNum, viewState);
}

/*
==============
CG_View_CalcViewAnimation
==============
*/

void __fastcall CG_View_CalcViewAnimation(const LocalClientNum_t localClientNum)
{
  ?CG_View_CalcViewAnimation@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_View_CalcWeaponViewEyeValues
==============
*/

int __fastcall CG_View_CalcWeaponViewEyeValues(const LocalClientNum_t localClientNum)
{
  return ?CG_View_CalcWeaponViewEyeValues@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddGroundTiltToAngles
==============
*/
void CG_AddGroundTiltToAngles(LocalClientNum_t localClientNum, vec3_t *inOutAngles, const cg_t *cgameGlob)
{
  bool v7; 
  bool v8; 
  int groundRefEnt; 
  CgHandler *Handler; 
  int v11; 
  bool v12; 
  bool v15; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  _RDI = cgameGlob;
  v7 = Com_GameMode_SupportsFeature(WEAPON_MELEE);
  v8 = Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER);
  if ( !v7 )
  {
    v12 = !v8;
    if ( v8 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+2A8h]
        vmovss  xmm1, dword ptr [rdi+2ACh]
        vmovss  dword ptr [rsp+0D8h+angles], xmm0
        vmovss  xmm0, dword ptr [rdi+2B0h]
        vmovss  dword ptr [rsp+0D8h+angles+8], xmm0
        vmovss  dword ptr [rsp+0D8h+angles+4], xmm1
      }
    }
    else
    {
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 670, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false");
      v12 = !v15;
      if ( v15 )
        __debugbreak();
    }
    goto LABEL_12;
  }
  if ( v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 657, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
    __debugbreak();
  groundRefEnt = _RDI->predictedPlayerState.groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    v11 = Handler->GetEntityAngles(Handler, groundRefEnt, &angles);
    v12 = v11 == 0;
    if ( v11 )
    {
LABEL_12:
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+angles]
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm0, xmm1
      }
      if ( !v12 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+angles+4]
        vucomiss xmm0, xmm1
      }
      if ( !v12 )
        goto LABEL_15;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0D8h+angles+8]
        vucomiss xmm0, xmm1
      }
      if ( !v12 )
      {
LABEL_15:
        AnglesToAxis(&angles, &axis);
        AnglesToAxis(inOutAngles, &in1);
        MatrixMultiply(&in1, &axis, &out);
        AxisToAngles(&out, inOutAngles);
      }
    }
  }
}

/*
==============
CG_CalcErrorDecay
==============
*/
void CG_CalcErrorDecay(const LocalClientNum_t localClientNum, vec3_t *inOutOrigin)
{
  int pm_type; 
  char v10; 
  char v14; 
  char *fmt; 
  double v36; 

  _RSI = inOutOrigin;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5385, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  *(_QWORD *)_RDI->predictedErrorCurrentFrame.v = 0i64;
  _RDI->predictedErrorCurrentFrame.v[2] = 0.0;
  pm_type = _RDI->predictedPlayerState.pm_type;
  if ( pm_type != 1 && pm_type != 8 && !BGMovingPlatforms::IsOnMovingPlatform(&_RDI->predictedPlayerState) && !BG_IsPlayerZeroG(&_RDI->predictedPlayerState) )
  {
    __asm { vmovaps [rsp+58h+var_28], xmm7 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcomiss xmm0, xmm7
    }
    if ( !(v14 | v10) )
    {
      __asm { vmovaps [rsp+58h+var_18], xmm6 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vsubss  xmm6, xmm0, xmm1
      }
      Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
      __asm
      {
        vdivss  xmm6, xmm6, xmm0
        vcomiss xmm6, xmm7
      }
      if ( v14 | v10 )
        goto LABEL_13;
      __asm { vcomiss xmm6, cs:__real@3f800000 }
      if ( !v14 )
      {
LABEL_13:
        _RDI->predictedErrorTime = 0;
      }
      else
      {
        __asm
        {
          vmulss  xmm2, xmm6, dword ptr [rdi+53C0h]
          vmovss  dword ptr [rdi+53CCh], xmm2
          vmulss  xmm0, xmm6, dword ptr [rdi+53C4h]
          vmovss  dword ptr [rdi+53D0h], xmm0
          vmulss  xmm1, xmm6, dword ptr [rdi+53C8h]
          vmovss  dword ptr [rdi+53D4h], xmm1
          vaddss  xmm0, xmm2, dword ptr [rsi]
          vmovss  dword ptr [rsi], xmm0
          vmovss  xmm0, dword ptr [rdi+53D0h]
          vaddss  xmm1, xmm0, dword ptr [rsi+4]
          vmovss  dword ptr [rsi+4], xmm1
          vmovss  xmm0, dword ptr [rdi+53D4h]
          vaddss  xmm1, xmm0, dword ptr [rsi+8]
          vmovss  dword ptr [rsi+8], xmm1
        }
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_showmiss, "cg_showmiss") )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+53D4h]
            vmovss  xmm3, dword ptr [rdi+53CCh]
            vmovss  xmm1, dword ptr [rdi+53D0h]
            vcvtss2sd xmm0, xmm0, xmm0
            vcvtss2sd xmm3, xmm3, xmm3
            vcvtss2sd xmm2, xmm6, xmm6
            vcvtss2sd xmm1, xmm1, xmm1
            vmovsd  [rsp+58h+var_30], xmm0
            vmovq   r9, xmm3
            vmovq   r8, xmm2
            vmovsd  [rsp+58h+fmt], xmm1
          }
          Com_Printf(17, "Adjusting view.org/legs with factor %f (%f %f %f)\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt, v36);
        }
      }
      __asm { vmovaps xmm6, [rsp+58h+var_18] }
    }
    __asm { vmovaps xmm7, [rsp+58h+var_28] }
  }
}

/*
==============
CG_CalcVehicleViewValues
==============
*/
void CG_CalcVehicleViewValues(LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  ClActiveClient *v33; 
  usercmd_s ucmd; 
  vec3_t angles; 
  tmat33_t<vec3_t> in; 
  vec4_t qb; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 
  vec4_t qa; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v47; 
  tmat33_t<vec3_t> v48; 
  vec3_t v49; 
  tmat33_t<vec3_t> axis; 

  _R14 = inOutViewAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT) || BG_IsVehicleActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum != 2047 )
  {
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2804, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj && CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_body_animate, &outTagMat, &outOrigin) && CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_player, &v48, &v49) )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+1C0h+outTagMat]
        vmovss  xmm1, dword ptr [rbp+1C0h+var_7C]
        vmovups ymmword ptr [rbp+1C0h+in], ymm0
        vmovss  xmm0, dword ptr [rbp+1C0h+outTagMat+20h]
        vmovss  dword ptr [rbp+1C0h+in+20h], xmm0
        vmovss  xmm0, dword ptr [rbp+1C0h+var_7C+4]
        vmovss  [rbp+1C0h+var_14C], xmm1
        vmovss  xmm1, dword ptr [rbp+1C0h+var_7C+8]
        vmovss  [rbp+1C0h+var_148], xmm0
        vmovss  [rbp+1C0h+var_144], xmm1
      }
      if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT) && (!BG_IsVehicleActive(&LocalClientGlobals->predictedPlayerState) || LocalClientGlobals->predictedPlayerState.viewlocked_entNum == 2047) )
      {
        if ( LocalClientGlobals->predictedPlayerState.vehicleType != VEH_HELICOPTER )
          MatrixTranspose(&in, &LocalClientGlobals->prevVehicleInvAxis);
      }
      else
      {
        if ( LocalClientGlobals->vehicleInitView )
        {
          MatrixTranspose(&in, &LocalClientGlobals->prevVehicleInvAxis);
          LocalClientGlobals->vehicleInitView = 0;
        }
        MatrixMultiply(&LocalClientGlobals->prevVehicleInvAxis, &in, &out);
        MatrixTranspose(&in, &LocalClientGlobals->prevVehicleInvAxis);
        __asm
        {
          vmovups xmm0, cs:__xmm@3f800000000000000000000000000000
          vmovups xmmword ptr [rbp+1C0h+qa], xmm0
        }
        AxisToQuat(&out, &qb);
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_viewVehicleInfluence, "cg_viewVehicleInfluence");
        __asm { vmovaps xmm2, xmm0; frac }
        QuatLerp(&qa, &qb, *(float *)&_XMM2, &qb);
        QuatToAxis(&qb, &out);
        AnglesToAxis(_R14, &axis);
        MatrixMultiply(&axis, &out, &v47);
        AxisToAngles(&v47, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+angles]
          vmovss  dword ptr [r14], xmm0
        }
        if ( VehicleSystem->IsYawLocked(VehicleSystem) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1C0h+angles+4]
            vmovss  dword ptr [r14+4], xmm0
          }
        }
        if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT) && ((LocalClientGlobals->predictedPlayerState.vehicleType - 4) & 0xFD) == 0 )
        {
          Client = ClActiveClient::GetClient(localClientNum);
          CmdNumber = ClActiveClient_GetCmdNumber(Client);
          if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
          {
            if ( !ucmd.pitchmove )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
                vmovaps [rsp+2C0h+var_40], xmm6
                vmulss  xmm6, xmm0, cs:__real@3a83126f
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterFreeLookReleaseSpeed, "vehHelicopterFreeLookReleaseSpeed");
              __asm
              {
                vmovss  xmm1, dword ptr [r14]; cur
                vmovaps xmm2, xmm0; rate
                vxorps  xmm0, xmm0, xmm0; tgt
                vmovaps xmm3, xmm6; deltaTime
              }
              *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
              __asm
              {
                vmovaps xmm6, [rsp+2C0h+var_40]
                vmovss  dword ptr [r14], xmm0
              }
            }
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [r14]
          vsubss  xmm1, xmm0, dword ptr [rdi+0BCh]
          vmovss  xmm2, dword ptr [r14+4]
          vmovss  dword ptr [rbp+1C0h+angles], xmm1
          vsubss  xmm0, xmm2, dword ptr [rdi+0C0h]
          vmovss  xmm1, dword ptr [r14+8]
          vmovss  dword ptr [rbp+1C0h+angles+4], xmm0
          vsubss  xmm0, xmm1, dword ptr [rdi+0C4h]
          vmovss  dword ptr [rbp+1C0h+angles+8], xmm0
        }
        v33 = ClActiveClient::GetClient(localClientNum);
        ClActiveClient_SetCLViewangles(v33, &angles);
        MatrixMultiply(&axis, &LocalClientGlobals->prevVehicleInvAxis, &v47);
        AxisToAngles(&v47, &angles);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+1C0h+angles+8]
          vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
          vmovss  dword ptr [r14+8], xmm1
        }
      }
    }
  }
}

/*
==============
CG_DebugDrawAnimDebugNode_r
==============
*/
void CG_DebugDrawAnimDebugNode_r(const DObj *obj, const centity_t *cent, int *dobjInfoIndexPtr, XAnimTreeDebugNode *debugNodes, int nodeIndex, bool isRootDontDraw, vec3_t *origin, vec3_t *angles)
{
  char v18; 
  int v23; 
  int v24; 
  int parentIndex; 
  unsigned __int64 i; 
  __int64 v27; 
  int j; 
  __int64 v29; 
  __int64 v30; 
  bool v33; 
  char v40; 
  int firstChildIndex; 
  XAnimTreeDebugNode *v71; 
  XAnimTreeDebugNode *v82; 
  float fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 duration; 
  int destPos; 
  vec3_t v91; 
  vec3_t v92; 
  int *v93; 
  const centity_t *v94; 
  const DObj *v95; 
  vec4_t v96; 
  vec3_t end; 
  vec3_t right; 
  char dest[256]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R13 = origin;
  _R12 = angles;
  v95 = obj;
  v93 = dobjInfoIndexPtr;
  v94 = cent;
  if ( !debugNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4255, ASSERT_TYPE_ASSERT, "(debugNodes)", (const char *)&queryFormat, "debugNodes") )
    __debugbreak();
  if ( (unsigned int)nodeIndex >= 0x40 )
  {
    LODWORD(duration) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4256, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( 64 )", "nodeIndex doesn't index MAX_ANIM_DEBUG_VISUAL_NODES\n\t%i not in [0, %i)", duration, 64) )
      __debugbreak();
  }
  _R14 = &debugNodes[nodeIndex];
  v18 = *((_BYTE *)_R14 + 88);
  if ( (v18 & 0x40) != 0 )
  {
    _RSI = &colorRed;
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [r14+8]
      vcomiss xmm1, cs:__real@3ba3d70a
    }
    if ( (v18 & 0x40) != 0 )
    {
      if ( (v18 & 0x10) != 0 )
      {
        _RSI = &colorCyan;
      }
      else if ( (v18 & 8) != 0 )
      {
        _RSI = &colorYellow;
      }
      else if ( (v18 & 2) != 0 )
      {
        _RSI = &colorGreen;
        if ( (v18 & 4) != 0 )
          _RSI = &colorMagenta;
      }
      else
      {
        _RSI = &colorWhite;
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
      }
      _RSI = &colorLtGrey;
      if ( (v18 & 0x40) == 0 )
        _RSI = &colorMdGrey;
    }
  }
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  v23 = 0;
  if ( !isRootDontDraw && _R14->numChildrenWithLeafOrCustomNodeBelow != 1 && obj->tree->anims->size )
  {
    v24 = (*v93)++;
    parentIndex = _R14->nodeIndex;
    for ( i = 1i64 << parentIndex; parentIndex != -1; parentIndex = debugNodes[v30].parentIndex )
    {
      v27 = parentIndex;
      if ( (*((_BYTE *)&debugNodes[v27] + 88) & 0x14) != 0 )
      {
        for ( j = debugNodes[v27].prevSiblingIndex; j != -1; j = debugNodes[v29].prevSiblingIndex )
        {
          v29 = j;
          if ( (*((_BYTE *)&debugNodes[v29] + 88) & 4) == 0 )
          {
            parentIndex = 0;
            _bittestandset64((__int64 *)&i, debugNodes[v29].nodeIndex);
          }
        }
      }
      v30 = parentIndex;
      if ( (*((_BYTE *)&debugNodes[v30] + 88) & 0x14) == 20 )
        _bittestandset64((__int64 *)&i, debugNodes[v30].nodeIndex);
    }
    __asm { vmovsd  xmm0, qword ptr [r12] }
    v91.v[2] = angles->v[2];
    v92.v[2] = origin->v[2];
    __asm
    {
      vmovsd  qword ptr [rsp+240h+var_1F0], xmm0
      vmovsd  xmm0, qword ptr [r13+0]
      vmovsd  qword ptr [rsp+240h+var_1E0], xmm0
    }
    CG_DebugDrawAnimPose(obj, v94, v24, i, &v92, &v91);
    __asm { vucomiss xmm7, dword ptr [r14+8] }
    if ( !v33 || (*((_BYTE *)_R14 + 88) & 2) != 0 )
    {
      AngleVectors(angles, NULL, &right, NULL);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovsd  xmm1, qword ptr [rbp+140h+right]
        vmovss  xmm3, cs:__real@41c80000
        vmovss  xmm2, dword ptr [r14+8]
        vmovups [rbp+140h+var_1B0], xmm0
        vmovsd  xmm0, qword ptr [r13+0]
      }
      v92.v[2] = right.v[2];
      v91.v[2] = origin->v[2];
      __asm
      {
        vmovsd  qword ptr [rsp+240h+var_1F0], xmm0
        vmovss  xmm0, cs:__real@40200000
        vmovss  dword ptr [rsp+240h+fmt], xmm0
        vmovsd  qword ptr [rsp+240h+var_1E0], xmm1
      }
      CG_DebugBar(&v91, &v92, *(float *)&_XMM2, *(float *)&_XMM3, fmt, &v96, 0, 1);
    }
  }
  v40 = *((_BYTE *)_R14 + 88);
  destPos = 0;
  if ( (v40 & 0x40) != 0 )
  {
    Com_sprintfPos(dest, 0x100ui64, &destPos, "... INCOMPLETE TREE ...");
  }
  else
  {
    if ( (v40 & 4) != 0 )
      Com_sprintfPos(dest, 0x100ui64, &destPos, "+ ");
    Com_sprintfPos(dest, 0x100ui64, &destPos, (const char *)&queryFormat, _R14->animName);
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vucomiss xmm0, xmm7
    }
    if ( !v33 || (*((_BYTE *)_R14 + 88) & 2) != 0 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+240h+fmt], xmm0
      }
      Com_sprintfPos(dest, 0x100ui64, &destPos, " [w%.2f]", *(double *)&fmta);
    }
    if ( (*((_BYTE *)_R14 + 88) & 1) != 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r14+20h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+240h+fmt], xmm0
      }
      Com_sprintfPos(dest, 0x100ui64, &destPos, " (t%.2f)", *(double *)&fmtb);
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  xmm6, cs:__real@40e00000
    vsubss  xmm0, xmm0, xmm6
    vmovss  dword ptr [r13+8], xmm0
  }
  AngleVectors(angles, NULL, &right, NULL);
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  CL_AddDebugString(origin, _RSI, *(float *)&_XMM2, dest, 0, 1);
  __asm { vaddss  xmm4, xmm6, dword ptr [r13+8] }
  _EAX = _R14->numChildrenWithLeafOrCustomNodeBelow;
  __asm { vmovss  dword ptr [r13+8], xmm4 }
  if ( _EAX > 0 )
  {
    _EDX = 1;
    firstChildIndex = _R14->firstChildIndex;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm5, xmm1, cs:__real@42160000
      vmulss  xmm0, xmm5, dword ptr [rbp+140h+right]
      vaddss  xmm1, xmm0, dword ptr [r13+0]
      vmulss  xmm0, xmm5, dword ptr [rbp+140h+right+4]
      vmovss  dword ptr [rbp+140h+end], xmm1
      vaddss  xmm1, xmm0, dword ptr [r13+4]
      vmovd   xmm0, eax
      vmovd   xmm2, edx
      vpcmpgtd xmm3, xmm0, xmm2
      vmulss  xmm2, xmm5, dword ptr [rbp+140h+right+8]
      vmovss  dword ptr [rbp+140h+end+4], xmm1
      vmovss  xmm1, cs:__real@428c0000
      vblendvps xmm0, xmm6, xmm1, xmm3
      vaddss  xmm4, xmm0, xmm4
      vaddss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+140h+end+8], xmm0
    }
    if ( _R14->numChildren > 0 )
    {
      __asm
      {
        vmovss  xmm7, cs:__real@c2960000
        vmovaps [rsp+240h+var_78+8], xmm8
        vmovss  xmm8, cs:__real@42960000
      }
      do
      {
        v71 = &debugNodes[firstChildIndex];
        if ( (*((_BYTE *)v71 + 88) & 0x20) != 0 )
        {
          CG_DebugLine(origin, &end, &colorWhite, 0, 1);
          __asm { vmovsd  xmm0, qword ptr [r12] }
          v92.v[2] = angles->v[2];
          v91.v[2] = end.v[2];
          __asm
          {
            vmovsd  qword ptr [rsp+240h+var_1E0], xmm0
            vmovsd  xmm0, qword ptr [rbp+140h+end]
            vmovsd  qword ptr [rsp+240h+var_1F0], xmm0
          }
          CG_DebugDrawAnimDebugNode_r(v95, v94, v93, debugNodes, firstChildIndex, 0, &v91, &v92);
          if ( _R14->numChildrenWithLeafOrCustomNodeBelow > 1 )
          {
            v33 = v71->numChildrenWithLeafOrCustomNodeBelow == 1;
            __asm
            {
              vmulss  xmm3, xmm7, dword ptr [rbp+140h+right+4]
              vmovss  xmm1, dword ptr [rbp+140h+end+8]
              vmulss  xmm2, xmm7, dword ptr [rbp+140h+right]
              vaddss  xmm2, xmm2, dword ptr [rbp+140h+end]
              vmovss  dword ptr [rbp+140h+end], xmm2
              vaddss  xmm2, xmm3, dword ptr [rbp+140h+end+4]
              vmulss  xmm3, xmm8, dword ptr [rbp+140h+right+8]
              vmovss  dword ptr [rbp+140h+end+4], xmm2
              vsubss  xmm2, xmm1, xmm3
              vaddss  xmm0, xmm2, xmm6
              vmovss  dword ptr [rbp+140h+end+8], xmm0
            }
            if ( v33 )
            {
              v82 = &debugNodes[firstChildIndex];
              do
              {
                __asm { vaddss  xmm0, xmm0, xmm6 }
                v82 = &debugNodes[v82->firstChildIndex];
              }
              while ( v82->numChildrenWithLeafOrCustomNodeBelow == 1 );
              __asm { vmovss  dword ptr [rbp+140h+end+8], xmm0 }
            }
          }
        }
        firstChildIndex = v71->nextSiblingIndex;
        ++v23;
      }
      while ( v23 < _R14->numChildren );
      __asm { vmovaps xmm8, [rsp+240h+var_78+8] }
    }
  }
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+240h+var_58+8]
    vmovaps xmm7, [rsp+240h+var_68+8]
  }
}

/*
==============
CG_DebugDrawAnimPose
==============
*/
__int64 CG_DebugDrawAnimPose(const DObj *obj, const centity_t *cent, int dobjInfoIndex, unsigned __int64 nodeIndexShowMask, vec3_t *origin, vec3_t *angles)
{
  __int64 v7; 
  XAnimDebugVisualDObjInfo *v10; 
  unsigned __int64 v11; 
  unsigned __int16 maxParameters; 
  void *v13; 
  void *v14; 
  unsigned int AllocSkelSize; 
  char *v16; 
  int SkelTimeStamp; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  void (__fastcall *v22)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v26; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  vec3_t *v38; 
  unsigned __int16 v39; 
  __int64 result; 
  __int64 randomIntSet; 
  __int64 randomIntSeta; 
  __int64 randomIntSetb; 
  __int64 randomIntGet; 
  __int64 randomIntGeta; 
  __int64 randomIntGetb; 
  float randomIntGetc; 
  float randomIntGetd; 
  bdRandom v66; 
  bdRandom v67[2]; 
  unsigned __int64 nodeIndexShowMaska; 
  vec3_t outOrigin; 
  vec3_t *lightingOrigin; 
  __int64 v71; 
  shaderOverride_t v72; 
  GfxSceneHudOutlineInfo v73; 
  GfxSceneEntityMutableShaderData v74; 
  vec3_t inOrigin; 
  vec3_t v76; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  v71 = -2i64;
  __asm { vmovaps [rsp+2D0h+var_50], xmm6 }
  nodeIndexShowMaska = nodeIndexShowMask;
  v7 = dobjInfoIndex;
  lightingOrigin = origin;
  if ( (unsigned int)dobjInfoIndex >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4168, ASSERT_TYPE_ASSERT, "(unsigned)( dobjInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_XAnimDebugVisualDObjInfo ) ) + 0 ) )", "dobjInfoIndex doesn't index ARRAY_COUNT( s_XAnimDebugVisualDObjInfo )\n\t%i not in [0, %i)", dobjInfoIndex, 32) )
    __debugbreak();
  v10 = &s_XAnimDebugVisualDObjInfo[v7];
  v10->inUse = 1;
  DObjCloneWithClientFlag(obj, v10->clonedObjBuf, 1);
  v10->clonedDObj = (DObj *)v10;
  v10->clonedTree.anims = obj->tree->anims;
  v10->clonedTree.owner[0] = obj->tree->owner[0];
  v11 = 0i64;
  v10->clonedTree.info_usage = 0;
  v10->clonedTree.calcRefCount = 0;
  v10->clonedTree.modifyRefCount = 0;
  maxParameters = obj->tree->maxParameters;
  v10->clonedTree.maxParameters = maxParameters;
  v10->clonedTree.parametersDirty = obj->tree->parametersDirty;
  v10->clonedTree.parameterValues = NULL;
  if ( maxParameters )
  {
    v13 = MT_Alloc(24i64 * obj->tree->maxParameters + 4, 25);
    v14 = v13;
    if ( v13 )
    {
      v11 = ((unsigned __int64)v13 + 4) & 0xFFFFFFFFFFFFFFFCui64;
      if ( v11 <= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)(((unsigned __int64)v13 + 4) & 0xFFFFFFFFFFFFFFFCui64), v13) )
        __debugbreak();
      if ( v11 - (unsigned __int64)v14 > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v11 - (_QWORD)v14, 4i64) )
        __debugbreak();
      *(_BYTE *)(v11 - 1) = v11 - (_BYTE)v14;
    }
    v10->clonedTree.parameterValues = (XAnimParameterValue *)v11;
  }
  XAnimCloneClientAnimTree(obj->tree, &v10->clonedTree, 0);
  DObjSetTree(v10->clonedDObj, &v10->clonedTree);
  if ( DObjNumBones(v10->clonedDObj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4196, ASSERT_TYPE_ASSERT, "(DObjNumBones( dobjInfo->clonedDObj ) > 0)", (const char *)&queryFormat, "DObjNumBones( dobjInfo->clonedDObj ) > 0") )
    __debugbreak();
  AllocSkelSize = DObjGetAllocSkelSize(v10->clonedDObj);
  v16 = CL_Pose_AllocSkelMemory(v10->clonedDObj, AllocSkelSize);
  if ( v16 )
  {
    SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
    DObjLock(v10->clonedDObj);
    DObjCreateSkel(v10->clonedDObj, v16, SkelTimeStamp);
    DObjUnlock(v10->clonedDObj);
  }
  XAnimMarkDebugVisualShow(obj->tree, obj->tree->anims, v10->clonedTree.children, nodeIndexShowMaska);
  bdRandom::bdRandom(&v66);
  v18 = bdRandom::nextUInt(&v66);
  v19 = v18 % 0x22;
  bdRandom::~bdRandom(&v66);
  bdRandom::bdRandom(v67);
  v20 = bdRandom::nextUInt(v67) % 0x22;
  bdRandom::~bdRandom(v67);
  __asm
  {
    vmovss  xmm6, cs:__real@4f800000
    vmovss  dword ptr [rbp+1D0h+inOrigin], xmm6
    vmovss  dword ptr [rbp+1D0h+inOrigin+4], xmm6
    vmovss  dword ptr [rbp+1D0h+inOrigin+8], xmm6
  }
  if ( v20 >= 0x22 )
  {
    LODWORD(randomIntGet) = 34;
    LODWORD(randomIntSet) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
      __debugbreak();
  }
  SetObfuscatedFunction(v20, (unsigned __int64)&v10->pose.origin.Get_origin, (unsigned __int64)&v10->pose.origin, &v10->pose.origin.Set_origin, &v10->pose.origin.Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
  CG_SetPoseOrigin(&v10->pose, &inOrigin);
  __asm
  {
    vmovss  dword ptr [rbp+1D0h+var_120], xmm6
    vmovss  dword ptr [rbp+1D0h+var_120+4], xmm6
    vmovss  dword ptr [rbp+1D0h+var_120+8], xmm6
  }
  if ( v19 >= 0x22 )
  {
    LODWORD(randomIntGeta) = 34;
    LODWORD(randomIntSeta) = v18 % 0x22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSeta, randomIntGeta) )
      __debugbreak();
  }
  SetObfuscatedFunction(v19, (unsigned __int64)&v10->pose.prevOrigin.Get_prevOrigin, (unsigned __int64)&v10->pose.prevOrigin, &v10->pose.prevOrigin.Set_prevOrigin, &v10->pose.prevOrigin.Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
  CG_SetPrevPoseOrigin(&v10->pose, &v76);
  v22 = ObfuscateSetFunctionPointer_origin(v10->pose.origin.Set_origin, &v10->pose);
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v10->pose.origin.Get_origin, &v10->pose);
  nodeIndexShowMaska = (unsigned __int64)ObfuscateSetFunctionPointer_prevOrigin(v10->pose.prevOrigin.Set_prevOrigin, &v10->pose);
  *(_QWORD *)&v67[0].m_val = ObfuscateGetFunctionPointer_prevOrigin(v10->pose.prevOrigin.Get_prevOrigin, &v10->pose);
  _RCX = &v10->pose;
  _RDX = cent;
  v26 = 2i64;
  do
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rdx+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rdx+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rdx+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rdx+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rdx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
    }
    _RCX = (cpose_t *)((char *)_RCX + 128);
    __asm
    {
      vmovups xmm1, xmmword ptr [rdx+70h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    _RDX = (const centity_t *)((char *)_RDX + 128);
    --v26;
  }
  while ( v26 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  v10->pose.origin.Set_origin = NULL;
  v10->pose.origin.Get_origin = NULL;
  v10->pose.prevOrigin.Set_prevOrigin = NULL;
  v10->pose.prevOrigin.Get_prevOrigin = NULL;
  v10->pose.origin.Set_origin = ObfuscateSetFunctionPointer_origin(v22, &v10->pose);
  v10->pose.origin.Get_origin = ObfuscateGetFunctionPointer_origin(FunctionPointer_origin, &v10->pose);
  v10->pose.prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin((void (__fastcall *const)(const vec3_t *, vec4_t *))nodeIndexShowMaska, &v10->pose);
  v10->pose.prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))&v67[0].m_val, &v10->pose);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_SetPoseOrigin(&v10->pose, &outOrigin);
  if ( cent->pose.prevOrigin.Get_prevOrigin == (void (__fastcall *)(const vec4_t *, vec3_t *))(unsigned __int8)v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
    __debugbreak();
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
  FunctionPointer_prevOrigin(&cent->pose.prevOrigin.prevOrigin, &outOrigin);
  CG_SetPrevPoseOrigin(&v10->pose, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
  v38 = lightingOrigin;
  CG_SetPoseOrigin(&v10->pose, lightingOrigin);
  v10->pose.angles = *angles;
  v39 = v7 + 2533;
  if ( (unsigned int)(__int16)v39 >= 0xA05 )
  {
    LODWORD(randomIntGetb) = 2565;
    LODWORD(randomIntSetb) = (__int16)v39;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4222, ASSERT_TYPE_ASSERT, "(unsigned)( debugEntityNum ) < (unsigned)( ENTITYNUM_ANMIMDEBUG_ENT_END )", "debugEntityNum doesn't index ENTITYNUM_ANMIMDEBUG_ENT_END\n\t%i not in [0, %i)", randomIntSetb, randomIntGetb) )
      __debugbreak();
  }
  v10->clonedDObj->entnum = v39 + 1;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_5.scrollRateX
    vmovups [rbp+1D0h+var_240], ymm0
  }
  v72.atlasTime = NULL_SHADER_OVERRIDE_5.atlasTime;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_6.color
    vmovups [rbp+1D0h+var_210], ymm0
  }
  v73.characterEVOffset = NULL_HUDOUTLINE_INFO_6.characterEVOffset;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+2D0h+randomIntGet], xmm6
  }
  _RAX = CG_Entity_GetMutableShaderData(&v74, LOCAL_CLIENT_0, v10->clonedDObj, 0, &v73, &v72, randomIntGetc);
  _RCX = &entityMutableShaderData;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm1, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups xmm0, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rcx+80h], xmm0
    vmovups xmm1, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rcx+90h], xmm1
    vmovups xmm0, xmmword ptr [rax+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm0
    vmovss  [rsp+2D0h+randomIntGet], xmm6
  }
  R_AddDObjToScene(v10->clonedDObj, &v10->pose, (__int16)v39, 0, &entityMutableShaderData, v38, randomIntGetd);
  result = v39;
  __asm { vmovaps xmm6, [rsp+2D0h+var_50] }
  return result;
}

/*
==============
CG_DebugDrawXAnimTreeFreeDobjInfo
==============
*/
void CG_DebugDrawXAnimTreeFreeDobjInfo(void)
{
  __int64 i; 

  for ( i = 0i64; i < 32; ++i )
  {
    if ( s_XAnimDebugVisualDObjInfo[i].inUse )
    {
      XAnimClearTreeNoObj(&s_XAnimDebugVisualDObjInfo[i].clonedTree);
      if ( s_XAnimDebugVisualDObjInfo[i].clonedTree.parameterValues )
      {
        if ( !s_XAnimDebugVisualDObjInfo[i].clonedTree.maxParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4154, ASSERT_TYPE_ASSERT, "(dobjInfo->clonedTree.maxParameters > 0)", (const char *)&queryFormat, "dobjInfo->clonedTree.maxParameters > 0") )
          __debugbreak();
        MT_Free(s_XAnimDebugVisualDObjInfo[i].clonedTree.parameterValues, 24i64 * s_XAnimDebugVisualDObjInfo[i].clonedTree.maxParameters);
      }
      DObjFree(s_XAnimDebugVisualDObjInfo[i].clonedDObj);
      DObjClearSkel(s_XAnimDebugVisualDObjInfo[i].clonedDObj);
      s_XAnimDebugVisualDObjInfo[i].inUse = 0;
    }
  }
}

/*
==============
CG_GetADSAltSwitchViewFovBySpace
==============
*/
float CG_GetADSAltSwitchViewFovBySpace(LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const Weapon *r_weapon, const bool usingAlternate)
{
  char v14; 
  bool v15; 
  const WeaponAttachment *UnderbarrelAttachment; 
  AdsAltSwitchInterpType fovInterpTypeAltToMain; 
  bool v22; 
  bool adsAltSwitchNextWeaponIsDualFOV; 
  bool *outRanVelocityBasedFovIncreaseCalculation; 
  char v57; 

  __asm
  {
    vmovaps [rsp+0A8h+var_28], xmm6
    vmovaps [rsp+0A8h+var_68], xmm10
  }
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  *(float *)&_XMM0 = CG_View_GetFovDvarValue_ForSpace(localClientNum, fovSpace);
  __asm
  {
    vmovss  xmm10, cs:__real@3f800000
    vcomiss xmm0, xmm10
    vmovaps xmm6, xmm0
  }
  if ( v14 )
    goto LABEL_42;
  __asm { vcomiss xmm0, cs:__real@43200000 }
  if ( !(v14 | v15) )
  {
LABEL_42:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0A8h+outRanVelocityBasedFovIncreaseCalculation], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1553, ASSERT_TYPE_SANITY, "( ( defaultFov >= 1.0f && defaultFov <= 160.0f ) )", "( defaultFov ) = %g", *(double *)&outRanVelocityBasedFovIncreaseCalculation) )
      __debugbreak();
  }
  if ( fovSpace == CG_FovSpace_DepthHack )
  {
    if ( !CG_View_IsSeparateViewModelFovUsed() )
    {
      _RBX = DVARFLT_cg_dualViewScopeFOV;
      if ( !DVARFLT_cg_dualViewScopeFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dualViewScopeFOV") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    }
    goto LABEL_38;
  }
  if ( fovSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1561, ASSERT_TYPE_ASSERT, "(fovSpace == CG_FovSpace_Scene)", (const char *)&queryFormat, "fovSpace == CG_FovSpace_Scene") )
    __debugbreak();
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(r_weapon);
  if ( !UnderbarrelAttachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1564, ASSERT_TYPE_ASSERT, "(underBarrelAttachment)", (const char *)&queryFormat, "underBarrelAttachment") )
    __debugbreak();
  if ( !UnderbarrelAttachment->adsAltSwitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1565, ASSERT_TYPE_ASSERT, "(underBarrelAttachment->adsAltSwitch)", (const char *)&queryFormat, "underBarrelAttachment->adsAltSwitch") )
    __debugbreak();
  _RAX = UnderbarrelAttachment->adsAltSwitch;
  if ( _RAX )
  {
    v15 = !_RSI->adsAltSwitchIsMainToAlt;
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm7
      vmovaps [rsp+0A8h+var_48], xmm8
      vmovaps [rsp+0A8h+var_58], xmm9
    }
    if ( v15 )
    {
      fovInterpTypeAltToMain = _RAX->fovInterpTypeAltToMain;
      v22 = 0;
      __asm { vmovss  xmm7, dword ptr [rax+18h] }
    }
    else
    {
      fovInterpTypeAltToMain = _RAX->fovInterpTypeMainToAlt;
      v22 = 1;
      __asm { vmovss  xmm7, dword ptr [rax+8] }
    }
    __asm { vmovss  xmm8, dword ptr [rsi+18274h] }
    *(double *)&_XMM0 = CG_View_GetEffectiveFOVForWeapon(localClientNum, fovSpace, r_weapon, v22, 1, NULL);
    adsAltSwitchNextWeaponIsDualFOV = _RSI->adsAltSwitchNextWeaponIsDualFOV;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+18278h]
      vmovaps xmm9, xmm0
    }
    if ( _RSI->adsAltSwitchCurrentWeaponIsDualFOV != adsAltSwitchNextWeaponIsDualFOV )
    {
      if ( adsAltSwitchNextWeaponIsDualFOV )
      {
        __asm
        {
          vcomiss xmm1, xmm7
          vsubss  xmm2, xmm10, xmm7
          vandps  xmm0, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm0, cs:__real@3a83126f
          vsubss  xmm1, xmm1, xmm7
          vdivss  xmm1, xmm1, xmm2
          vmovaps xmm8, xmm6
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm2, xmm10, xmm7
          vsubss  xmm0, xmm10, xmm1
          vcomiss xmm0, xmm2
          vcomiss xmm7, cs:__real@3a83126f
          vmovaps xmm9, xmm6
        }
      }
    }
    __asm { vmovaps xmm7, [rsp+0A8h+var_38] }
    if ( fovInterpTypeAltToMain )
    {
      if ( fovInterpTypeAltToMain == ADS_ALT_SWITCH_INTERP_TYPE_COSINE )
      {
        __asm { vmulss  xmm0, xmm1, cs:__real@3fc90fdb; X }
        cosf_0(*(float *)&_XMM0);
        __asm
        {
          vsubss  xmm1, xmm10, xmm0
          vsubss  xmm0, xmm10, xmm1
          vmulss  xmm1, xmm1, xmm9
        }
      }
      else
      {
        if ( fovInterpTypeAltToMain != ADS_ALT_SWITCH_INTERP_TYPE_SINE )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1668, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnknown interpolation type %d", "0", fovInterpTypeAltToMain) )
            __debugbreak();
          goto LABEL_37;
        }
        __asm { vmulss  xmm0, xmm1, cs:__real@3fc90fdb; X }
        *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
        __asm
        {
          vmovaps xmm1, xmm0
          vmulss  xmm1, xmm1, xmm9
          vsubss  xmm0, xmm10, xmm0
        }
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm10, xmm1
        vmulss  xmm1, xmm9, xmm1
      }
    }
    __asm
    {
      vmulss  xmm2, xmm0, xmm8
      vaddss  xmm6, xmm2, xmm1
    }
LABEL_37:
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_58]
      vmovaps xmm8, [rsp+0A8h+var_48]
    }
  }
LABEL_38:
  _R11 = &v57;
  __asm
  {
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_GetBaseFOVAdjustment
==============
*/

float __fastcall CG_GetBaseFOVAdjustment(const LocalClientNum_t localClientNum, const CG_FovSpace fovSpace, double viewFov)
{
  const dvar_t *v12; 
  char v23; 
  bool v24; 
  bool v27; 
  bool v30; 
  bool v32; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  char v57; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm8, xmm2
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_OFFHAND_END) || fovSpace )
    goto LABEL_25;
  v12 = DVARFLT_cg_targetBaseFov;
  if ( !DVARFLT_cg_targetBaseFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  __asm
  {
    vmovss  xmm7, cs:__real@42820000
    vsubss  xmm10, xmm7, dword ptr [rbx+28h]
    vandps  xmm0, xmm10, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm1, xmm0, xmm0
    vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v23 | v24 )
  {
LABEL_25:
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt;
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovaps [rsp+0A8h+var_48], xmm9
    }
    if ( !DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFovDecreaseStopAt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vcomiss xmm6, xmm7
      vmovsd  xmm9, cs:__real@4050400000000000
    }
    if ( !v23 )
    {
      __asm
      {
        vmovsd  [rsp+0A8h+var_68], xmm9
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_70], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1756, ASSERT_TYPE_ASSERT, "( targetBaseFovDecreaseStopAt ) < ( (65.0f) )", "%s < %s\n\t%g, %g", "targetBaseFovDecreaseStopAt", "DEFAULT_FOV", v53, v54) )
        __debugbreak();
    }
    __asm
    {
      vmovaps xmm2, xmm7; max
      vmovaps xmm1, xmm6; min
      vmovaps xmm0, xmm8; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm6, xmm7
      vmovaps xmm8, xmm0
    }
    if ( !(v23 | v24) )
    {
      __asm
      {
        vcvtss2sd xmm1, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_78], xmm9
        vmovsd  [rsp+0A8h+var_80], xmm1
      }
      v27 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 826, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v47, v50);
      v23 = 0;
      v24 = !v27;
      if ( v27 )
        __debugbreak();
    }
    __asm { vcomiss xmm8, xmm6 }
    if ( v23 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+0A8h+var_78], xmm0
        vcvtss2sd xmm1, xmm8, xmm8
        vmovsd  [rsp+0A8h+var_80], xmm1
      }
      v30 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 827, ASSERT_TYPE_SANITY, "( dist ) >= ( min )", "dist >= min\n\t%g, %g", v48, v51);
      v23 = 0;
      v24 = !v30;
      if ( v30 )
        __debugbreak();
    }
    __asm { vcomiss xmm8, xmm7 }
    if ( !(v23 | v24) )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm8, xmm8
        vmovsd  [rsp+0A8h+var_78], xmm9
        vmovsd  [rsp+0A8h+var_80], xmm0
      }
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 828, ASSERT_TYPE_SANITY, "( dist ) <= ( max )", "dist <= max\n\t%g, %g", v49, v52);
      v23 = 0;
      v24 = !v32;
      if ( v32 )
        __debugbreak();
    }
    __asm
    {
      vmovaps xmm9, [rsp+0A8h+var_48]
      vsubss  xmm1, xmm7, xmm6
      vcvtss2sd xmm0, xmm1, xmm1
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v23 | v24 )
    {
      __asm
      {
        vmovaps xmm6, [rsp+0A8h+var_18]
        vxorps  xmm0, xmm0, xmm0
        vmulss  xmm0, xmm0, xmm10
      }
    }
    else
    {
      __asm
      {
        vsubss  xmm0, xmm8, xmm6
        vmovaps xmm6, [rsp+0A8h+var_18]
        vdivss  xmm0, xmm0, xmm1
        vmulss  xmm0, xmm0, xmm10
      }
    }
  }
  _R11 = &v57;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_GetLocalClientViewParams
==============
*/
ClientViewParams *CG_GetLocalClientViewParams(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 

  v1 = localClientNum;
  v2 = CL_GetLocalClientActiveCount() - 1;
  if ( (unsigned int)v1 >= 2 )
  {
    v7 = 2;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4049, ASSERT_TYPE_ASSERT, "(unsigned)( activeClientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray[0] ) ) + 0 ) )", "activeClientIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray[0] )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4050, ASSERT_TYPE_ASSERT, "(unsigned)( activeClientCountArrayIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray ) ) + 0 ) )", "activeClientCountArrayIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray )\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  if ( (int)v1 > v2 )
  {
    v9 = v2;
    v8 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4051, ASSERT_TYPE_ASSERT, "( activeClientIndex ) <= ( activeClientCountArrayIndex )", "%s <= %s\n\t%i, %i", "activeClientIndex", "activeClientCountArrayIndex", v8, v9) )
      __debugbreak();
  }
  return &s_clientViewParamsArray[v2][v1];
}

/*
==============
CG_GetViewFovBySpace
==============
*/
ClientFov *CG_GetViewFovBySpace(ClientFov *result, const LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const bool updateFovWeights)
{
  __int64 v10; 
  __int64 v11; 
  CgWeaponMap *v14; 
  __int64 v16; 
  char v22; 
  char v23; 
  CgVehicleSystem *VehicleSystem; 
  const dvar_t *v33; 
  const dvar_t *v43; 
  CgWeaponMap *Instance; 
  const dvar_t *v45; 
  const char *v46; 
  float outViewFOV; 
  bool outIsAlternate; 
  bool outRanVelocityBasedFovIncreaseCalculation; 
  CG_FovSpace fovSpacea; 
  float overrideFovDeg; 
  Weapon r_weapon; 

  v10 = localClientNum;
  v11 = fovSpace;
  fovSpacea = fovSpace;
  _RSI = result;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v14 = CgWeaponMap::ms_instance[v10];
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  *(_QWORD *)&_RSI->finalFov = 0i64;
  _RSI->baseFovAdjustment = 0.0;
  if ( updateFovWeights )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1785, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v16 = v11;
    *(_QWORD *)_RDI->fovCalcWeights.fovSpaces[v16].weights = 0i64;
    *(_QWORD *)&_RDI->fovCalcWeights.fovSpaces[v16].weights[2] = 0i64;
    *(_QWORD *)&_RDI->fovCalcWeights.fovSpaces[v16].weights[4] = 0i64;
  }
  if ( !_RDI->m_frontEndScene )
  {
    __asm { vmovaps [rsp+120h+var_80], xmm10 }
    _RAX = BG_GetViewmodelOrOffhandADSSupportWeapon(v14, &_RDI->predictedPlayerState, &outIsAlternate);
    outRanVelocityBasedFovIncreaseCalculation = 0;
    __asm
    {
      vxorps  xmm10, xmm10, xmm10
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+57h+r_weapon.weaponIdx], ymm0
      vmovups xmm1, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rbp+57h+r_weapon.attachmentVariationIndices+5], xmm1
      vmovsd  xmm0, qword ptr [rax+30h]
      vmovsd  qword ptr [rbp+57h+r_weapon.attachmentVariationIndices+15h], xmm0
    }
    *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
    if ( _RDI->predictedPlayerState.pm_type == 6 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@42b40000
        vmovss  [rsp+120h+outViewFOV], xmm0
      }
    }
    else if ( (_RDI->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 && r_weapon.weaponIdx )
    {
      *(float *)&_XMM0 = CG_View_ADSZoomFov((const LocalClientNum_t)v10, (const CG_FovSpace)v11, v14, &_RDI->predictedPlayerState, &r_weapon, outIsAlternate, NULL);
      __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
    }
    else if ( _RDI->cvsData.transitory.remoteMissileCam )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_missileRemoteFOV, "missileRemoteFOV");
      __asm
      {
        vcomiss xmm0, xmm10
        vmovss  [rsp+120h+outViewFOV], xmm0
      }
      if ( v22 | v23 )
      {
        *(double *)&_XMM0 = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v10);
        __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
      }
    }
    else if ( BG_IsUfoViewmodel(&_RDI->predictedPlayerState) )
    {
      *(double *)&_XMM0 = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v10);
      __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
    }
    else if ( CG_VehicleCam_IsRemoteDriveCam((LocalClientNum_t)v10) )
    {
      *(double *)&_XMM0 = CG_VehicleCam_GetRemoteDriveFov((LocalClientNum_t)v10);
      __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
    }
    else if ( BG_IsTurretActive(&_RDI->predictedPlayerState) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+59EC4h]
        vmovss  [rsp+120h+outViewFOV], xmm0
      }
    }
    else if ( BG_IsPlayerOnRemoteTurret(&_RDI->predictedPlayerState) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+59EC4h]
        vmovss  [rsp+120h+outViewFOV], xmm0
      }
    }
    else
    {
      if ( CG_Camera_DeathCam_IsFOVSet((LocalClientNum_t)v10, &outViewFOV) )
      {
        __asm
        {
          vmovss  xmm0, [rsp+120h+outViewFOV]
          vmovss  dword ptr [rsi], xmm0
        }
LABEL_78:
        __asm { vmovaps xmm10, [rsp+120h+var_80] }
        goto LABEL_79;
      }
      if ( _RDI->m_isMLGSpectator && _RDI->spectatingThirdPerson )
      {
        *(double *)&_XMM0 = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v10);
        __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
      }
      else if ( r_weapon.weaponIdx && _RDI->adsAltSwitchInProgress )
      {
        *(float *)&_XMM0 = CG_GetADSAltSwitchViewFovBySpace((LocalClientNum_t)v10, (CG_FovSpace)v11, &r_weapon, outIsAlternate);
        __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
      }
      else
      {
        *(double *)&_XMM0 = CG_View_GetEffectiveFOVForWeapon((const LocalClientNum_t)v10, (CG_FovSpace)v11, &r_weapon, outIsAlternate, updateFovWeights, &outRanVelocityBasedFovIncreaseCalculation);
        __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
        if ( outRanVelocityBasedFovIncreaseCalculation )
          goto LABEL_37;
      }
    }
    *(float *)&_XMM0 = CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v10, 1);
    __asm
    {
      vaddss  xmm0, xmm0, [rsp+120h+outViewFOV]
      vmovss  [rsp+120h+outViewFOV], xmm0
    }
LABEL_37:
    __asm
    {
      vmovaps [rsp+120h+var_40], xmm6
      vmovaps [rsp+120h+var_50], xmm7
    }
    *(double *)&_XMM0 = CG_Skydive_GetFovDelta((const LocalClientNum_t)v10);
    __asm
    {
      vaddss  xmm0, xmm0, [rsp+120h+outViewFOV]
      vmovss  [rsp+120h+outViewFOV], xmm0
    }
    if ( CG_Vehicle_GetRemoteControlledVehicleDef((LocalClientNum_t)v10) )
    {
      VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v10);
      *(double *)&_XMM0 = CgVehicleSystem::PhysicsGetFovDelta(VehicleSystem, &_RDI->predictedPlayerState);
      __asm
      {
        vaddss  xmm0, xmm0, [rsp+120h+outViewFOV]
        vmovss  [rsp+120h+outViewFOV], xmm0
      }
    }
    if ( _RDI->fovLerpTimer <= 0 )
    {
      v43 = DVARFLT_cg_fovScale;
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      __asm
      {
        vmovss  xmm0, [rsp+120h+outViewFOV]
        vmulss  xmm3, xmm0, dword ptr [r15+28h]
      }
    }
    else
    {
      __asm
      {
        vmovaps [rsp+120h+var_60], xmm8
        vmovaps [rsp+120h+var_70], xmm9
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1873, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
        __debugbreak();
      I_clamp(_RDI->fovLerpTimer - _RDI->frametime, 0, _RDI->fovLerpDuration);
      __asm { vmovss  xmm7, cs:__real@3f800000 }
      if ( _RDI->fovLerpDuration )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm6, xmm1, xmm0
        }
      }
      else
      {
        __asm { vmovaps xmm6, xmm7 }
      }
      v33 = DVARFLT_cg_fovScale;
      __asm
      {
        vmovss  xmm8, dword ptr [rdi+66A80h]
        vmovss  xmm9, dword ptr [rdi+66A7Ch]
      }
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [r15+28h]
        vmovaps xmm8, [rsp+120h+var_60]
        vsubss  xmm0, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm9, xmm6
        vmovaps xmm9, [rsp+120h+var_70]
        vaddss  xmm3, xmm2, xmm1
      }
    }
    __asm { vmovss  [rsp+120h+outViewFOV], xmm3 }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) )
    {
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v10);
      if ( !BG_IsThirdPersonMode(Instance, &_RDI->predictedPlayerState) )
      {
LABEL_63:
        if ( CG_VehicleCam_IsDriveCam((LocalClientNum_t)v10) )
        {
          __asm { vmovss  xmm1, [rsp+120h+outViewFOV]; fov }
          *(double *)&_XMM0 = CG_VehicleCam_ScaleFov(_RDI, *(float *)&_XMM1);
          __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
        }
        if ( CG_IsCinematicCameraActive((LocalClientNum_t)v10) )
        {
          __asm { vmovss  xmm1, [rsp+120h+outViewFOV]; currentFov }
          *(double *)&_XMM0 = CG_CinematicCameraGetFov((LocalClientNum_t)v10, *(const float *)&_XMM1);
          __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
        }
        if ( !BG_IsUfoViewmodel(&_RDI->predictedPlayerState) )
        {
          __asm { vmovss  xmm2, [rsp+120h+outViewFOV]; viewFov }
          *(float *)&_XMM0 = CG_GetBaseFOVAdjustment((const LocalClientNum_t)v10, fovSpacea, *(double *)&_XMM2);
          __asm { vmovaps xmm10, xmm0 }
        }
        __asm
        {
          vmovss  xmm6, [rsp+120h+outViewFOV]
          vsubss  xmm0, xmm6, xmm10
          vmovss  [rsp+120h+outViewFOV], xmm0
          vmovss  dword ptr [rsi+8], xmm10
        }
        if ( CL_Cameraman_isActive() )
        {
          __asm { vmovss  xmm0, [rsp+120h+outViewFOV]; fov }
          *(double *)&_XMM0 = CL_Cameraman_GetFov(*(float *)&_XMM0);
          __asm { vmovss  [rsp+120h+outViewFOV], xmm0 }
        }
        LOBYTE(_EAX) = CG_Camera_GetOverrideFOV((const LocalClientNum_t)v10, &overrideFovDeg);
        __asm { vmovss  xmm2, [rsp+120h+outViewFOV] }
        _RBX = DVARFLT_cg_fovMin;
        _ECX = 0;
        _EAX = (unsigned __int8)_EAX;
        __asm
        {
          vmovd   xmm1, ecx
          vmovd   xmm0, eax
          vpcmpeqd xmm3, xmm0, xmm1
          vmovss  xmm1, [rbp+57h+overrideFovDeg]
          vblendvps xmm7, xmm1, xmm2, xmm3
          vmovss  [rsp+120h+outViewFOV], xmm7
        }
        if ( !DVARFLT_cg_fovMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovMin") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmaxss  xmm1, xmm0, xmm7
          vminss  xmm2, xmm1, cs:__real@432a0000
          vsubss  xmm0, xmm2, xmm7
          vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmovaps xmm7, [rsp+120h+var_50]
          vcvtss2sd xmm0, xmm0, xmm0
          vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
          vmovss  dword ptr [rsi], xmm2
        }
        if ( v22 | v23 )
        {
          __asm { vmovss  xmm0, dword ptr [rsi+8] }
        }
        else
        {
          __asm
          {
            vsubss  xmm0, xmm6, xmm2
            vmovss  dword ptr [rsi+8], xmm0
          }
        }
        __asm
        {
          vmovaps xmm6, [rsp+120h+var_40]
          vaddss  xmm0, xmm2, xmm0
        }
        goto LABEL_78;
      }
      v45 = DCONST_DVARMPSPFLT_camera_thirdPersonFovScale;
      if ( !DCONST_DVARMPSPFLT_camera_thirdPersonFovScale )
      {
        v46 = "camera_thirdPersonFovScale";
        goto LABEL_60;
      }
    }
    else
    {
      v45 = DVARFLT_cg_playerFovScale;
      if ( !DVARFLT_cg_playerFovScale )
      {
        v46 = "cg_playerFovScale";
LABEL_60:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v46) )
          __debugbreak();
      }
    }
    Dvar_CheckFrontendServerThread(v45);
    __asm
    {
      vmovss  xmm0, [rsp+120h+outViewFOV]
      vmulss  xmm1, xmm0, dword ptr [r15+28h]
      vmovss  [rsp+120h+outViewFOV], xmm1
    }
    goto LABEL_63;
  }
  *(double *)&_XMM0 = CG_FrontEndScene_GetCameraFOV();
  __asm { vmovss  dword ptr [rsi], xmm0 }
LABEL_79:
  __asm { vmovss  dword ptr [rsi+4], xmm0 }
  return _RSI;
}

/*
==============
CG_GetViewZoomScale
==============
*/
float CG_GetViewZoomScale(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = DVARFLT_cg_fovScale;
  _RDI = LocalClientGlobals;
  if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+6934h]
    vmulss  xmm1, xmm0, cs:__real@40079857
    vdivss  xmm0, xmm1, dword ptr [rbx+28h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_InitDofPhysical
==============
*/
void CG_InitDofPhysical(const playerState_s *ps, cg_t *cgameGlob)
{
  bool v5; 
  int integer; 
  float focusDistance; 
  DofPhysicalScriptingState dofPhysicalScriptingState; 
  bool v10; 
  const dvar_t *v11; 
  bool v12; 

  _RDI = cgameGlob;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = ps;
  v5 = ps->dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && r_dof_physical_hipEnable->current.enabled;
  cgameGlob->refdef.dofPhysical.hipEnabled = v5;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  cgameGlob->refdef.dofPhysical.scriptingEnabled = ps->dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
  __asm { vcomiss xmm6, dword ptr [rcx+730h] }
  cgameGlob->refdef.dofPhysical.adsEnabled = 0;
  LODWORD(cgameGlob->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
  LODWORD(cgameGlob->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
  integer = r_dof_physical_maxCocDiameter->current.integer;
  cgameGlob->refdef.dofPhysical.fstop = cgameGlob->refdef.dofPhysicalFocusState.fstop;
  focusDistance = cgameGlob->refdef.dofPhysicalFocusState.focusDistance;
  LODWORD(cgameGlob->refdef.dofPhysical.maxCocDiameter) = integer;
  cgameGlob->refdef.dofPhysical.focusDistance = focusDistance;
  dofPhysicalScriptingState = _RSI->dofPhysicalScriptingState;
  v10 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  v11 = DVARBOOL_killswitch_weapon_based_dof_disable;
  v12 = v10;
  if ( !DVARBOOL_killswitch_weapon_based_dof_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_based_dof_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled && dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && v12 )
    __asm { vcomiss xmm6, dword ptr [rsi+730h] }
  __asm { vmovss  dword ptr [rdi+17844h], xmm6 }
  _RDI->refdef.dofPhysical.cocScale = _RDI->refdef.dofPhysicalFocusState.cocScale;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
CG_InitFocusParamsFromAds
==============
*/
void CG_InitFocusParamsFromAds(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams, bool isMultiplayer, float multiplayerAdsStart, float multiplayerAdsEnd)
{
  FocusParams *fstop; 
  char v25; 
  float v32; 
  float v33; 
  float v34; 

  _RAX = r_dof_physical_filmDiagonal;
  fstop = focusParams;
  __asm { vmovss  xmm0, cs:__real@3a9acf3e; sharpCocDiameter }
  _RSI = cgameGlob;
  _RBX = ps;
  __asm { vmovss  xmm1, dword ptr [rax+28h]; filmDiagonalLength }
  *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovaps xmm4, xmm0 }
  if ( isMultiplayer )
  {
    __asm
    {
      vmovss  xmm1, [rsp+58h+multiplayerAdsStart]
      vmovss  xmm2, [rsp+58h+multiplayerAdsEnd]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+1228h]; start
      vmovss  xmm2, dword ptr [rbx+122Ch]; end
    }
  }
  _RAX = r_dof_physical_minFocusDistance;
  _RBX = &fstop->focusDistance;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = r_dof_physical_adsMaxFstop;
  __asm
  {
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  xmm3, dword ptr [rax+28h]
  }
  _RAX = r_dof_physical_adsMinFstop;
  __asm
  {
    vmovss  [rsp+58h+var_30], xmm3
    vmovaps xmm3, xmm4; sharpCoc
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  [rsp+58h+var_38], xmm0
    vmovss  xmm0, dword ptr [rsi+6974h]; focalLength
  }
  R_GetFocusPlaneAndApertureFromRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v32, v33, v34, &fstop->focusDistance, &fstop->fstop);
  __asm { vmovss  xmm0, dword ptr [rbx] }
  fstop->cocScale = 1.0;
  __asm { vcomiss xmm0, dword ptr [rsi+6BD0h] }
  _RAX = r_dof_physical_adsFocusSpeed;
  if ( v25 )
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  else
    __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  __asm
  {
    vmovss  dword ptr [rdi+0Ch], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, dword ptr [rsi+6BCCh]
  }
  _RAX = r_dof_physical_adsFocusSpeed;
  if ( v25 )
    __asm { vmovss  xmm0, dword ptr [rax+30h] }
  else
    __asm { vmovss  xmm0, dword ptr [rax+34h] }
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
}

/*
==============
CG_InitFocusParamsFromHyperfocalMode
==============
*/
void CG_InitFocusParamsFromHyperfocalMode(const playerState_s *ps, cg_t *cgameGlob, FocusParams *focusParams, bool mpMode)
{
  char v15; 

  _RAX = r_dof_physical_hipSharpCocDiameter;
  _RBX = focusParams;
  _RDI = cgameGlob;
  __asm { vmovss  xmm0, dword ptr [rax+28h] }
  _RAX = r_dof_physical_filmDiagonal;
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3d21428b; sharpCocDiameter
    vmovss  xmm1, dword ptr [rax+28h]; filmDiagonalLength
  }
  *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
  _RAX = r_dof_physical_hipFstop;
  __asm
  {
    vmovaps xmm2, xmm0; sharpCoc
    vmovss  xmm0, dword ptr [rdi+6974h]; focalLength
    vmovss  xmm1, dword ptr [rax+28h]; fstop
  }
  *(double *)&_XMM0 = R_GetHyperfocalDistance(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = r_dof_physical_hipFstop;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+28h]
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm0
  }
  _RBX->cocScale = 0.0;
  __asm { vcomiss xmm0, dword ptr [rdi+6BD0h] }
  _RAX = r_dof_physical_hipFocusSpeed;
  if ( v15 )
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  else
    __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  __asm
  {
    vmovss  dword ptr [rbx+0Ch], xmm0
    vcomiss xmm1, dword ptr [rdi+6BCCh]
  }
  _RAX = r_dof_physical_hipFocusSpeed;
  if ( v15 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+30h]
      vmovss  dword ptr [rbx+10h], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+34h]
      vmovss  dword ptr [rbx+10h], xmm0
    }
  }
}

/*
==============
CG_InitFocusParamsFromScriptMode
==============
*/
void CG_InitFocusParamsFromScriptMode(LocalClientNum_t localClientNum, const playerState_s *ps, FocusParams *focusParams)
{
  char v12; 
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 
  __int64 v38; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  v38 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
  }
  _RBX = focusParams;
  _RDI = ps;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1210h]
    vmovss  xmm8, dword ptr [rdi+121Ch]
    vmovss  xmm9, dword ptr [rdi+1218h]
    vmovss  xmm10, dword ptr [rdi+1204h]
    vmovss  xmm7, dword ptr [rdi+1208h]
    vmovss  xmm6, dword ptr [rdi+120Ch]
    vmovss  xmm2, dword ptr [rdi+1214h]
    vmovss  dword ptr [rbx], xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm10, xmm1
  }
  if ( !v12 )
    goto LABEL_5;
  __asm { vucomiss xmm7, xmm1 }
  if ( !v12 )
    goto LABEL_5;
  __asm { vucomiss xmm6, xmm1 }
  if ( v12 )
  {
    __asm { vmovss  dword ptr [rbx+4], xmm2 }
  }
  else
  {
LABEL_5:
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    __asm
    {
      vsubss  xmm2, xmm10, dword ptr [rsp+98h+outOrg]
      vsubss  xmm0, xmm7, dword ptr [rsp+98h+outOrg+4]
      vsubss  xmm3, xmm6, dword ptr [rsp+98h+outOrg+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  dword ptr [rbx+4], xmm0
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  _RBX->cocScale = 1.0;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm8
    vmovss  dword ptr [rbx+0Ch], xmm9
  }
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_InitFocusParamsFromWeaponInspect
==============
*/
void CG_InitFocusParamsFromWeaponInspect(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams)
{
  FocusParams *fstop; 
  char v35; 
  float fmt; 
  float maxFstop; 
  float minFocusDistance; 
  char v51; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBX = DCONST_DVARFLT_bg_weapon_inspect_dof_coc_diameter_mm;
  __asm { vmovaps xmmword ptr [r11-18h], xmm6 }
  fstop = focusParams;
  __asm { vmovaps [rsp+98h+var_28], xmm7 }
  _RSI = cgameGlob;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
  }
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_coc_diameter_mm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  _RAX = r_dof_physical_filmDiagonal;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm0, xmm0, cs:__real@3d21428b; sharpCocDiameter
    vmovss  xmm1, dword ptr [rax+28h]; filmDiagonalLength
  }
  *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
  _RAX = r_dof_physical_minFocusDistance;
  _RBX = DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min;
  __asm
  {
    vmovaps xmm9, xmm0
    vmovss  xmm8, dword ptr [rax+28h]
  }
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_fstop_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_fstop_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_bg_weapon_inspect_dof_width;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm4, dword ptr [rbx+28h]
    vmulss  xmm3, xmm4, cs:__real@3f000000
    vmovss  xmm2, dword ptr [rsi+18228h]
    vsubss  xmm0, xmm2, xmm3
  }
  _RBX = &fstop->focusDistance;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm8; start
    vaddss  xmm0, xmm1, xmm4
    vaddss  xmm2, xmm2, xmm3
    vmaxss  xmm2, xmm2, xmm0; end
    vmovss  xmm0, dword ptr [rsi+6974h]; focalLength
    vmovss  [rsp+98h+minFocusDistance], xmm8
    vmovss  [rsp+98h+maxFstop], xmm6
    vmovaps xmm3, xmm9; sharpCoc
    vmovss  dword ptr [rsp+98h+fmt], xmm7
  }
  R_GetFocusPlaneAndApertureFromRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maxFstop, minFocusDistance, &fstop->focusDistance, &fstop->fstop);
  __asm { vmovss  xmm0, dword ptr [rbx] }
  fstop->cocScale = 1.0;
  __asm { vcomiss xmm0, dword ptr [rsi+6BD0h] }
  _RAX = r_dof_physical_adsFocusSpeed;
  if ( v35 )
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
  else
    __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
  __asm
  {
    vmovss  dword ptr [rdi+0Ch], xmm0
    vmovss  xmm0, dword ptr [rdi]
    vcomiss xmm0, dword ptr [rsi+6BCCh]
  }
  _RAX = r_dof_physical_adsFocusSpeed;
  if ( v35 )
    __asm { vmovss  xmm0, dword ptr [rax+30h] }
  else
    __asm { vmovss  xmm0, dword ptr [rax+34h] }
  __asm { vmovaps xmm7, [rsp+98h+var_28] }
  _R11 = &v51;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovss  dword ptr [rdi+10h], xmm0
  }
}

/*
==============
CG_InterpolateFocusParams
==============
*/

void __fastcall CG_InterpolateFocusParams(const FocusParams *focusParams1, const FocusParams *focusParams2, double w, FocusParams *focusParams)
{
  __asm
  {
    vmulss  xmm1, xmm2, dword ptr [rdx]
    vmovss  xmm0, cs:__real@3f800000
    vsubss  xmm4, xmm0, xmm2
    vmulss  xmm0, xmm4, dword ptr [rcx]
    vaddss  xmm1, xmm1, xmm0
    vmovss  dword ptr [r9], xmm1
    vmulss  xmm0, xmm2, dword ptr [rdx+4]
    vmulss  xmm3, xmm4, dword ptr [rcx+4]
    vmovaps xmm5, xmm2
    vaddss  xmm1, xmm3, xmm0
    vmovss  dword ptr [r9+4], xmm1
    vmulss  xmm2, xmm4, dword ptr [rcx+8]
    vmulss  xmm0, xmm5, dword ptr [rdx+8]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [r9+8], xmm1
    vmulss  xmm2, xmm4, dword ptr [rcx+0Ch]
    vmulss  xmm0, xmm5, dword ptr [rdx+0Ch]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [r9+0Ch], xmm1
    vmulss  xmm2, xmm4, dword ptr [rcx+10h]
    vmulss  xmm0, xmm5, dword ptr [rdx+10h]
    vaddss  xmm1, xmm2, xmm0
    vmovss  dword ptr [r9+10h], xmm1
  }
}

/*
==============
CG_LoadCinematicLetterBoxInfo
==============
*/
void CG_LoadCinematicLetterBoxInfo(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int p; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.scaleTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.scaleDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.fadeTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.fadeDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.currentState = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->cinematicLetterboxInfo.wantedState = p;
}

/*
==============
CG_LoadFOVLerp
==============
*/
void CG_LoadFOVLerp(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  int p; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2506, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66A7Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66A80h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovLerpDuration = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66A8Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66A90h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovScaleLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovScaleLerpDuration = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66A9Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+66AA0h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovPresetLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovPresetLerpDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RBX->fovLastPresetIndex = p;
}

/*
==============
CG_LoadSlide
==============
*/
void CG_LoadSlide(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool p; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  MemFile_ReadData(memFile, 1ui64, &p);
  LocalClientGlobals->slideRumblePlaying = p;
}

/*
==============
CG_LoadViewLinkedEntities
==============
*/
void CG_LoadViewLinkedEntities(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  __int64 v4; 
  __int16 p[12]; 
  char v7; 
  char v8; 

  v4 = 4i64;
  _RBX = &CG_GetLocalClientGlobals(localClientNum)->linkedToPlayerView[0].viewToLinkedTagTransform.m[1].v[2];
  do
  {
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-14h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-10h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-0Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-8], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx-4], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+4], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+8], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+0Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+10h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+14h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+18h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+20h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+24h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+28h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+30h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+34h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+38h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+3Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+40h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+44h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+48h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+4Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+50h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+54h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+58h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+5Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [rbx+60h], xmm0 }
    MemFile_ReadData(memFile, 2ui64, p);
    *((_WORD *)_RBX + 50) = p[0];
    MemFile_ReadData(memFile, 1ui64, &v7);
    *((_BYTE *)_RBX + 102) = v7;
    MemFile_ReadData(memFile, 1ui64, &v8);
    *((_BYTE *)_RBX + 103) = v8;
    _RBX += 31;
    --v4;
  }
  while ( v4 );
}

/*
==============
CG_SaveCinematicLetterBoxInfo
==============
*/
void CG_SaveCinematicLetterBoxInfo(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int p; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p = LocalClientGlobals->cinematicLetterboxInfo.scaleTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->cinematicLetterboxInfo.scaleDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->cinematicLetterboxInfo.fadeTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->cinematicLetterboxInfo.fadeDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->cinematicLetterboxInfo.currentState;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->cinematicLetterboxInfo.wantedState;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
CG_SaveFOVLerp
==============
*/
void CG_SaveFOVLerp(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  int p; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2475, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm1, dword ptr [rax+66A7Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+66A80h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  p = _RBX->fovLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->fovLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+66A8Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+66A90h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  p = _RBX->fovScaleLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->fovScaleLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+66A9Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+66AA0h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  p = _RBX->fovPresetLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->fovPresetLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = _RBX->fovLastPresetIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
CG_SaveSlide
==============
*/
void CG_SaveSlide(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  bool p; 

  p = CG_GetLocalClientGlobals(localClientNum)->slideRumblePlaying;
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
CG_SaveViewLinkedEntities
==============
*/
void CG_SaveViewLinkedEntities(MemoryFile *memFile, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  vec3_t *v4; 
  __int16 p; 

  v3 = 4i64;
  v4 = &CG_GetLocalClientGlobals(localClientNum)->linkedToPlayerView[0].viewToLinkedTagTransform.m[2];
  do
  {
    MemFile_WriteData(memFile, 0xCui64, &v4[-2]);
    MemFile_WriteData(memFile, 0xCui64, &v4[-1]);
    MemFile_WriteData(memFile, 0xCui64, v4);
    MemFile_WriteData(memFile, 0xCui64, &v4[1]);
    MemFile_WriteData(memFile, 0xCui64, &v4[2]);
    MemFile_WriteData(memFile, 0xCui64, &v4[3]);
    MemFile_WriteData(memFile, 0xCui64, &v4[4]);
    MemFile_WriteData(memFile, 0xCui64, &v4[5]);
    MemFile_WriteData(memFile, 0xCui64, &v4[6]);
    MemFile_WriteData(memFile, 0xCui64, &v4[7]);
    p = LOWORD(v4[8].v[0]);
    MemFile_WriteData(memFile, 2ui64, &p);
    LOBYTE(p) = BYTE2(v4[8].x);
    MemFile_WriteData(memFile, 1ui64, &p);
    LOBYTE(p) = HIBYTE(v4[8].x);
    MemFile_WriteData(memFile, 1ui64, &p);
    v4 = (vec3_t *)((char *)v4 + 124);
    --v3;
  }
  while ( v3 );
}

/*
==============
CG_SetVignetteParams
==============
*/

void __fastcall CG_SetVignetteParams(LocalClientNum_t localClientNum, double intensity, double squareAspectRatioWeight, double sizeX, float sizeY, float falloff, float falloffStart, float boxSizeX, float boxSizeY, float offsetX, float offsetY)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, [rsp+58h+sizeY]
    vmovss  xmm1, [rsp+58h+falloff]
    vmovss  dword ptr [rax+171A8h], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rax+171ACh], xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vmovss  dword ptr [rax+171B4h], xmm0
    vmovss  xmm0, [rsp+58h+falloffStart]
    vmovss  dword ptr [rax+171B0h], xmm8
    vmovaps xmm8, [rsp+58h+var_38]
    vmovss  dword ptr [rax+171BCh], xmm0
    vmovss  xmm0, [rsp+58h+boxSizeY]
    vmovss  dword ptr [rax+171B8h], xmm1
    vmovss  xmm1, [rsp+58h+boxSizeX]
    vmovss  dword ptr [rax+171C4h], xmm0
    vmovss  xmm0, [rsp+58h+offsetY]
    vmovss  dword ptr [rax+171C0h], xmm1
    vmovss  xmm1, [rsp+58h+offsetX]
    vmovss  dword ptr [rax+171CCh], xmm0
    vmovss  dword ptr [rax+171C8h], xmm1
  }
}

/*
==============
CG_SmoothCameraZ
==============
*/
void CG_SmoothCameraZ(const cg_t *cgameGlob, vec3_t *inOutOrigin)
{
  bool v7; 
  bool v8; 
  LocalClientNum_t localClientNum; 
  CgHandler *Handler; 
  unsigned int time; 
  bool v13; 
  int v14; 
  const dvar_t *v18; 
  int integer; 
  WorldUpReferenceFrame v33; 

  __asm { vmovaps [rsp+0A8h+var_18], xmm6 }
  _RBX = cgameGlob;
  v7 = cgameGlob == NULL;
  if ( !cgameGlob )
  {
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 637, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob");
    v7 = !v8;
    if ( v8 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm6, dword ptr [rbx+59694h]
  }
  if ( !v7 && _RBX->time - _RBX->stepViewStart >= 0 )
  {
    localClientNum = _RBX->localClientNum;
    __asm
    {
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovaps [rsp+0A8h+var_38], xmm8
    }
    Handler = CgHandler::getHandler(localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v33, &_RBX->predictedPlayerState, Handler);
    time = _RBX->time;
    v13 = time < _RBX->stepViewStart;
    v14 = time - _RBX->stepViewStart;
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm8, xmm8, xmm8
      vcvtsi2ss xmm8, xmm8, eax
      vcomiss xmm8, dword ptr [rbx+5969Ch]
    }
    if ( v13 )
    {
      if ( v14 >= 0 )
      {
        v18 = DCONST_DVARINT_cg_viewZSmoothingInterpType;
        if ( !DCONST_DVARINT_cg_viewZSmoothingInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingInterpType") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        integer = v18->current.integer;
        __asm { vmovss  xmm0, dword ptr [rbx+5969Ch] }
        if ( integer )
        {
          __asm { vdivss  xmm1, xmm8, xmm0 }
          if ( integer == 1 )
          {
            __asm
            {
              vsubss  xmm1, xmm1, xmm7
              vmulss  xmm0, xmm1, xmm1
              vmulss  xmm1, xmm0, xmm1
              vaddss  xmm6, xmm1, xmm7
            }
          }
          else
          {
            __asm
            {
              vsubss  xmm0, xmm1, cs:__real@3f000000
              vmulss  xmm0, xmm0, cs:__real@40490fdb; X
            }
            *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
            __asm
            {
              vaddss  xmm1, xmm0, xmm7
              vmulss  xmm6, xmm1, cs:__real@3f000000
            }
          }
        }
        else
        {
          __asm { vdivss  xmm6, xmm8, xmm0 }
        }
      }
    }
    else
    {
      __asm { vmovaps xmm6, xmm7 }
    }
    __asm
    {
      vsubss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, dword ptr [rbx+59694h]; height
    }
    WorldUpReferenceFrame::AddUpContribution(&v33, *(float *)&_XMM1, inOutOrigin);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
    }
  }
  __asm { vmovaps xmm6, [rsp+0A8h+var_18] }
}

/*
==============
CG_UpdateVignette
==============
*/

void __fastcall CG_UpdateVignette(LocalClientNum_t localClientNum, double _XMM1_8)
{
  int v17; 
  char v24; 
  float fmt; 
  float falloff; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 

  _RAX = CG_GetLocalClientGlobals(localClientNum);
  _RBX = _RAX;
  if ( _RAX->vignetteLerpTimer > 0 )
  {
    __asm
    {
      vmovd   xmm0, dword ptr [rax+66B04h]
      vmovaps [rsp+0F8h+var_18], xmm6
      vmovaps [rsp+0F8h+var_28], xmm7
      vmovaps [rsp+0F8h+var_38], xmm8
      vmovaps [rsp+0F8h+var_48], xmm9
      vmovaps [rsp+0F8h+var_58], xmm10
      vmovaps [rsp+0F8h+var_68], xmm11
      vmovaps [rsp+0F8h+var_78], xmm12
      vmovaps [rsp+0F8h+var_88], xmm13
      vmovaps [rsp+0F8h+var_98], xmm14
      vxorps  xmm14, xmm14, xmm14
      vcvtdq2ps xmm0, xmm0
      vcomiss xmm0, xmm14
    }
    if ( !_RAX->vignetteLerpTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2260, ASSERT_TYPE_ASSERT, "(cgameGlob->vignetteLerpDuration > 0.0f)", (const char *)&queryFormat, "cgameGlob->vignetteLerpDuration > 0.0f") )
      __debugbreak();
    v17 = I_clamp(_RBX->vignetteLerpTimer - _RBX->frametime, 0, _RBX->vignetteLerpDuration);
    __asm
    {
      vmovss  xmm5, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+66B04h]
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm3, xmm1, xmm0
      vcomiss xmm3, xmm14
    }
    _RBX->vignetteLerpTimer = v17;
    if ( !v24 )
    {
      __asm
      {
        vcomiss xmm3, xmm5
        vmovaps xmm14, xmm5
      }
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+66AE0h]
      vmovss  xmm4, dword ptr [rbx+66AE4h]
      vmovss  xmm0, dword ptr [rbx+66AB8h]
      vsubss  xmm1, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbx+66ABCh]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, xmm4
      vmovss  xmm0, dword ptr [rbx+66AC8h]
      vaddss  xmm13, xmm2, xmm3
      vmovss  xmm3, dword ptr [rbx+66AF0h]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbx+66ACCh]
      vaddss  xmm12, xmm2, xmm4
      vmovss  xmm4, dword ptr [rbx+66AF4h]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, xmm4
      vmovss  xmm0, dword ptr [rbx+66AD0h]
      vaddss  xmm11, xmm2, xmm3
      vmovss  xmm3, dword ptr [rbx+66AF8h]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, xmm3
      vmovss  xmm0, dword ptr [rbx+66AD4h]
      vaddss  xmm10, xmm2, xmm4
      vmovss  xmm4, dword ptr [rbx+66AFCh]
      vmulss  xmm2, xmm1, xmm14
      vsubss  xmm1, xmm0, xmm4
      vaddss  xmm9, xmm2, xmm3
      vsubss  xmm6, xmm5, xmm14
      vmulss  xmm0, xmm6, dword ptr [rbx+66AECh]
      vmulss  xmm2, xmm1, xmm14
      vmulss  xmm1, xmm14, dword ptr [rbx+66AC4h]
      vaddss  xmm7, xmm1, xmm0
      vmulss  xmm0, xmm6, dword ptr [rbx+66AE8h]
      vmulss  xmm1, xmm14, dword ptr [rbx+66AB4h]
      vaddss  xmm8, xmm2, xmm4
      vmulss  xmm2, xmm14, dword ptr [rbx+66AC0h]
      vmulss  xmm4, xmm14, dword ptr [rbx+66AB0h]
      vmovss  [rsp+0F8h+var_A8], xmm8
      vaddss  xmm5, xmm2, xmm0
      vmulss  xmm0, xmm6, dword ptr [rbx+66ADCh]
      vmovss  [rsp+0F8h+var_B0], xmm9
      vmovss  [rsp+0F8h+var_B8], xmm10
      vaddss  xmm2, xmm1, xmm0; squareAspectRatioWeight
      vmulss  xmm0, xmm6, dword ptr [rbx+66AD8h]
      vmovss  [rsp+0F8h+var_C0], xmm11
      vmovss  [rsp+0F8h+var_C8], xmm7
      vmovss  [rsp+0F8h+falloff], xmm5
      vaddss  xmm1, xmm4, xmm0; intensity
      vmovaps xmm3, xmm13; sizeX
      vmovss  dword ptr [rsp+0F8h+fmt], xmm12
    }
    CG_SetVignetteParams(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, falloff, v80, v81, v82, v83, v84);
    __asm
    {
      vmovaps xmm14, [rsp+0F8h+var_98]
      vmovaps xmm13, [rsp+0F8h+var_88]
      vmovaps xmm12, [rsp+0F8h+var_78]
      vmovaps xmm11, [rsp+0F8h+var_68]
      vmovaps xmm10, [rsp+0F8h+var_58]
      vmovaps xmm9, [rsp+0F8h+var_48]
      vmovaps xmm8, [rsp+0F8h+var_38]
      vmovaps xmm7, [rsp+0F8h+var_28]
      vmovaps xmm6, [rsp+0F8h+var_18]
    }
  }
}

/*
==============
CG_View_ADSZoomFov
==============
*/
float CG_View_ADSZoomFov(const LocalClientNum_t localClientNum, const CG_FovSpace fovSpace, const BgWeaponMap *weaponMap, const playerState_s *ps, const Weapon *r_weapon, bool isAlternate, ClientFovTypeWeights *outFovTypeWeights)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v15; 
  const BgHybridScopeFraction *p_fractionInfo; 
  CgHandler *Handler; 
  const dvar_t *v21; 
  double ADSZoomLevelFraction; 
  __int64 v27; 
  const dvar_t *v28; 
  LocalClientNum_t _localClientNum[2]; 
  BgWeaponMap *weaponMapa; 
  BgAdsZoomInfo outZoomInfo; 
  float outZoomLevelWeights[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _RSI = outFovTypeWeights;
  weaponMapa = (BgWeaponMap *)weaponMap;
  _localClientNum[1] = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1284, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BYTE1(_localClientNum[0]) = BG_CanHybridToggle(ps, r_weapon, isAlternate);
  if ( fovSpace == CG_FovSpace_Scene )
  {
    v15 = DVARBOOL_com_useAdsFovUserScale;
    if ( !DVARBOOL_com_useAdsFovUserScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_useAdsFovUserScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
  }
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  p_fractionInfo = &LocalClientGlobals->scopeToggleInfo.fractionInfo;
  BG_GetADSZoomInfo(weaponMapa, r_weapon, isAlternate, p_fractionInfo, &outZoomInfo);
  LOBYTE(_localClientNum[0]) = 0;
  Handler = CgHandler::getHandler(_localClientNum[1]);
  *(double *)&_XMM0 = BG_ADSZoomFov(Handler, ps, r_weapon, isAlternate, p_fractionInfo, fovSpace == CG_FovSpace_DepthHack, (bool *)_localClientNum);
  __asm
  {
    vmovaps xmm7, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( fovSpace == CG_FovSpace_DepthHack && !LOBYTE(_localClientNum[0]) )
  {
    __asm
    {
      vmovss  xmm1, [rbp+3Fh+outZoomInfo.depthHackZoomFov]
      vcomiss xmm1, xmm6
    }
  }
  v21 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
  if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( LOWORD(_localClientNum[0]) )
  {
    if ( outFovTypeWeights )
    {
      if ( LOBYTE(_localClientNum[0]) )
      {
        outFovTypeWeights->weights[5] = 1.0;
      }
      else if ( outZoomInfo.zoomCount >= 1 )
      {
LABEL_32:
        outFovTypeWeights->weights[1] = 1.0;
      }
    }
LABEL_33:
    __asm { vmovaps xmm0, xmm7 }
    goto LABEL_34;
  }
  if ( outZoomInfo.zoomCount <= 1 )
  {
    if ( !outFovTypeWeights || outZoomInfo.zoomCount != 1 )
      goto LABEL_33;
    goto LABEL_32;
  }
  ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(weaponMapa, ps, r_weapon, isAlternate, ps->serverTimeInterpolated);
  BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, outZoomLevelWeights);
  if ( outFovTypeWeights )
  {
    __asm
    {
      vmovss  xmm0, [rbp+3Fh+outZoomLevelWeights]
      vmovss  xmm1, [rbp+3Fh+var_7C]
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm0, [rbp+3Fh+var_78]
      vmovss  dword ptr [rsi+0Ch], xmm0
      vmovss  dword ptr [rsi+8], xmm1
    }
  }
  _RBX = 0i64;
  v27 = 3i64;
  do
  {
    v28 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
    if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    __asm
    {
      vmovss  xmm1, [rbp+rbx+3Fh+outZoomInfo.zoomFov]
      vmulss  xmm1, xmm1, [rbp+rbx+3Fh+outZoomLevelWeights]
    }
    _RBX += 4i64;
    __asm { vaddss  xmm6, xmm1, xmm6 }
    --v27;
  }
  while ( v27 );
  __asm { vmovaps xmm0, xmm6 }
LABEL_34:
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+110h+var_58+8]
    vmovaps xmm7, [rsp+110h+var_68+8]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_AddViewHeight
==============
*/
char CG_View_AddViewHeight(const LocalClientNum_t localClientNum, vec3_t *inOutViewOrigin)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  WorldUpReferenceFrame v10; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RDI = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->renderingThirdPerson )
    return 0;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&p_predictedPlayerState->eFlags) || p_predictedPlayerState->pm_type == 6 )
    return 0;
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v10, p_predictedPlayerState, Handler, 1);
  __asm { vmovss  xmm1, dword ptr [rdi+1F0h]; height }
  WorldUpReferenceFrame::AddUpContribution(&v10, *(float *)&_XMM1, inOutViewOrigin);
  return 1;
}

/*
==============
CG_View_ApplyLinkCameraAnimation
==============
*/
char CG_View_ApplyLinkCameraAnimation(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int16 linkEnt; 
  centity_t *Entity; 
  const cpose_t *Pose; 
  const DObj *ClientDObj; 
  const DObj *v7; 
  CgWeaponMap *Instance; 
  PlayerHandIndex WeaponHandForViewWeapon; 
  PlayerHandIndex v10; 
  PlayerHandIndex v11; 
  WeaponHand *ViewModelHand; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t outPos; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_LADDER_AIM|0x80) )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5635, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5638, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
  if ( linkEnt == 2047 )
    return 0;
  Entity = CG_GetEntity(localClientNum, linkEnt);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5646, ASSERT_TYPE_ASSERT, "(parentEnt)", (const char *)&queryFormat, "parentEnt") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 || Entity->nextState.eType != ET_SCRIPTMOVER || (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 0x40) == 0 && (LOBYTE(Entity->nextState.lerp.u.vehicle.bodyPitch) & 0x40) == 0 )
    return 0;
  Pose = CG_GetPose(localClientNum, LocalClientGlobals->predictedPlayerState.linkEnt);
  if ( !Pose )
    return 0;
  ClientDObj = Com_GetClientDObj(LocalClientGlobals->predictedPlayerState.linkEnt, localClientNum);
  v7 = ClientDObj;
  if ( !ClientDObj )
    return 0;
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_65(ClientDObj, scr_const.tag_camera_scripted, inOutIndex, &modelIndex) )
    return 0;
  CG_DObjGetWorldTagPos(Pose, v7, scr_const.tag_camera_scripted, &outPos);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outPos);
  Instance = CgWeaponMap::GetInstance(localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5686, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  cg_t::SetViewModelTransform(LocalClientGlobals, &LocalClientGlobals->refdef.view.axis, &outPos);
  WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(Instance, &LocalClientGlobals->predictedPlayerState);
  v10 = WEAPON_HAND_DEFAULT;
  v11 = WeaponHandForViewWeapon;
  while ( v10 <= v11 )
  {
    ViewModelHand = cg_t::GetViewModelHand(LocalClientGlobals, v10);
    CG_UpdateViewModelPreviousPositionForHand(localClientNum, v10);
    CG_UpdateViewModelPoseForHand(ViewModelHand->viewModelDObj, localClientNum, v10++, 0);
  }
  return 1;
}

/*
==============
CG_View_ApplySmoothing
==============
*/
void CG_View_ApplySmoothing(const LocalClientNum_t localClientNum, bool isSmoothingActive, vec3_t *inOutAngles)
{
  const dvar_t *v7; 
  char v8; 
  const char *v9; 
  const char *v12; 
  float fmt; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_IsSpectating(&_RBX->predictedPlayerState) || CG_GetLocalClientGlobals(localClientNum)->inKillCam )
  {
    v7 = DCONST_DVARBOOL_smoothCameraEnabledSpectate;
    v8 = 1;
    if ( DCONST_DVARBOOL_smoothCameraEnabledSpectate )
      goto LABEL_9;
    v9 = "smoothCameraEnabledSpectate";
  }
  else
  {
    v7 = DCONST_DVARBOOL_smoothCameraEnabled;
    v8 = 0;
    if ( DCONST_DVARBOOL_smoothCameraEnabled )
      goto LABEL_9;
    v9 = "smoothCameraEnabled";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v9) )
    __debugbreak();
LABEL_9:
  Dvar_CheckFrontendServerThread(v7);
  if ( !isSmoothingActive || !v7->current.enabled )
  {
    AngularSmoothing::Reset(&_RBX->viewSmoothing);
    return;
  }
  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovss  xmm6, dword ptr [rbx+7C660h]
  }
  if ( v8 )
  {
    _RDI = DCONST_DVARFLT_smoothCameraSpeedSpectate;
    if ( !DCONST_DVARFLT_smoothCameraSpeedSpectate )
    {
      v12 = "smoothCameraSpeedSpectate";
      goto LABEL_16;
    }
  }
  else
  {
    _RDI = DCONST_DVARFLT_smoothCameraSpeed;
    if ( !DCONST_DVARFLT_smoothCameraSpeed )
    {
      v12 = "smoothCameraSpeed";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  if ( v8 )
    __asm { vmovss  xmm3, cs:?cls@@3UClStatic@@A.frametime_base; ClStatic cls }
  else
    __asm { vmovss  xmm3, dword ptr [rbx+65E8h]; frametime }
  __asm
  {
    vmovaps xmm2, xmm6; adsFrac
    vmovss  dword ptr [rsp+68h+fmt], xmm0
  }
  AngularSmoothing::Update(&_RBX->viewSmoothing, _RBX, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, &_RBX->refdefViewAngles);
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
CG_View_CalcCameraTweaks
==============
*/
void CG_View_CalcCameraTweaks(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v17; 
  bool v18; 
  vec3_t outOrg; 
  __int64 v57; 
  tmat33_t<vec3_t> axis; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RDI = DVARVEC3_cg_camAngleOffset;
  if ( !DVARVEC3_cg_camAngleOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camAngleOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  xmm7, dword ptr [rdi+2Ch]
    vmovss  xmm8, dword ptr [rdi+30h]
  }
  v17 = DVARBOOL_cg_camAngleOverride;
  if ( !DVARBOOL_cg_camAngleOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camAngleOverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v18 = !v17->current.enabled;
  _RDI = &LocalClientGlobals->refdefViewAngles;
  if ( v18 )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [rdi]
      vmovss  dword ptr [rdi], xmm0
      vaddss  xmm1, xmm7, dword ptr [rdi+4]
      vmovss  dword ptr [rdi+4], xmm1
      vaddss  xmm0, xmm8, dword ptr [rdi+8]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rdi], xmm6
      vmovss  dword ptr [rdi+4], xmm7
      vmovss  dword ptr [rdi+8], xmm8
    }
  }
  _RSI = DVARVEC3_cg_camOffset;
  if ( !DVARVEC3_cg_camOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+28h]
    vmovss  xmm6, dword ptr [rsi+2Ch]
    vmovss  xmm11, dword ptr [rsi+30h]
  }
  AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
  __asm
  {
    vmulss  xmm15, xmm6, dword ptr [rsp+148h+axis+0Ch]
    vmulss  xmm12, xmm8, dword ptr [rsp+148h+axis]
    vmulss  xmm9, xmm11, dword ptr [rsp+148h+axis+18h]
    vmulss  xmm14, xmm6, dword ptr [rsp+148h+axis+10h]
    vmulss  xmm10, xmm8, dword ptr [rsp+148h+axis+4]
    vmulss  xmm7, xmm11, dword ptr [rsp+148h+axis+1Ch]
    vmulss  xmm13, xmm6, dword ptr [rsp+148h+axis+14h]
    vmulss  xmm8, xmm8, dword ptr [rsp+148h+axis+8]
    vmulss  xmm6, xmm11, dword ptr [rsp+148h+axis+20h]
  }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vaddss  xmm0, xmm15, xmm12
    vaddss  xmm2, xmm0, xmm9
    vaddss  xmm2, xmm2, dword ptr [rsp+148h+outOrg]
    vmovss  dword ptr [rsp+148h+outOrg], xmm2
    vaddss  xmm0, xmm10, xmm14
    vaddss  xmm3, xmm0, xmm7
    vaddss  xmm2, xmm3, dword ptr [rsp+148h+outOrg+4]
    vmovss  dword ptr [rsp+148h+outOrg+4], xmm2
    vaddss  xmm0, xmm8, xmm13
    vaddss  xmm3, xmm0, xmm6
    vaddss  xmm2, xmm3, dword ptr [rsp+148h+outOrg+8]
    vmovss  dword ptr [rsp+148h+outOrg+8], xmm2
  }
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v59;
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
CG_View_CalcCubemapViewValues
==============
*/
void CG_View_CalcCubemapViewValues(const LocalClientNum_t localClientNum)
{
  CgHandler *Handler; 
  vec3_t vec; 
  __int64 v9; 
  WorldUpReferenceFrame v10; 

  v9 = -2i64;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2664, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+88h+vec], xmm0
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+88h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+88h+vec+8], xmm0
  }
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v10, &_RBX->predictedPlayerState, Handler, 1);
  __asm { vmovss  xmm1, dword ptr [rbx+1F0h]; height }
  WorldUpReferenceFrame::AddUpContribution(&v10, *(float *)&_XMM1, &vec);
  RefdefView_SetOrg(&_RBX->refdef.view, &vec);
  R_CalcCubeMapViewValues(&_RBX->refdef, _RBX->cubemapShot, _RBX->cubemapSize);
  memset(&vec, 0, sizeof(vec));
}

/*
==============
CG_View_CalcDrivingCamera
==============
*/
void CG_View_CalcDrivingCamera(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  vec3_t outOrg; 

  if ( CG_VehicleCam_IsDriveCam(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5452, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob", -2i64) )
      __debugbreak();
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    CG_VehicleCam_UpdateDriveCam(localClientNum, LocalClientGlobals, &outOrg, &LocalClientGlobals->refdefViewAngles);
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    CG_View_CalcCameraTweaks(localClientNum);
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_View_CalcFov
==============
*/
void CG_View_CalcFov(const LocalClientNum_t localClientNum)
{
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v20; 
  char v22; 
  char v23; 
  bool v24; 
  ClientFov v60; 
  ClientFov result; 
  float overrideFovDeg; 
  BgAdsZoomInfo outZoomInfo; 
  char v64; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
  }
  CG_View_UpdateFovLerpPreset(localClientNum);
  _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 1);
  __asm { vmovsd  xmm7, qword ptr [rax] }
  v60.baseFovAdjustment = _RAX->baseFovAdjustment;
  __asm
  {
    vmovss  xmm0, [rbp+57h+var_B8]
    vmovsd  [rbp+57h+var_C0], xmm7
    vmovss  xmm6, dword ptr [rbp+57h+var_C0+4]
    vmovss  [rbp+57h+result.baseFovAdjustment], xmm0
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  dword ptr [rax+17FF8h], xmm7 }
  _RAX = CG_GetLocalClientStaticGlobals(localClientNum);
  __asm
  {
    vunpcklps xmm1, xmm7, xmm6
    vmovsd  [rbp+57h+var_C0], xmm1
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmulss  xmm8, xmm0, dword ptr [rax+18h]
    vmovaps xmm2, xmm8
  }
  v60.baseFovAdjustment = result.baseFovAdjustment;
  CG_View_UpdateFovInternal(_RDI, &v60, *(float *)&_XMM2);
  _RSI = &_RDI->predictedPlayerState;
  if ( _RDI == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2161, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( CG_Camera_GetOverrideFOV((const LocalClientNum_t)_RDI->localClientNum, &overrideFovDeg) )
    goto LABEL_10;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)_RDI->localClientNum);
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, &_RDI->predictedPlayerState);
  v20 = BG_UsingAlternate(&_RDI->predictedPlayerState);
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  BG_GetADSZoomInfo(Instance, ViewmodelWeapon, v20, &_RDI->scopeToggleInfo.fractionInfo, &outZoomInfo);
  __asm
  {
    vmovss  xmm0, [rbp+57h+outZoomInfo.depthHackZoomFov]
    vcomiss xmm0, xmm6
  }
  if ( !(v22 | v23) )
    goto LABEL_9;
  if ( !CG_View_IsSeparateViewModelFovUsed() && ((v24 = BG_SyncedFOVInDualFOV(ViewmodelWeapon, v20), !_RDI->dualViewScope) || v24) )
  {
LABEL_10:
    __asm { vmovsd  xmm0, qword ptr [rdi+6930h] }
    _RAX = _RDI;
    __asm { vmovsd  qword ptr [rax+696Ch], xmm0 }
  }
  else
  {
LABEL_9:
    _RAX = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_DepthHack, 1);
    __asm
    {
      vmovaps xmm1, xmm8; viewAspect
      vmovsd  xmm0, qword ptr [rax]; fovdeg_x
    }
    TanHalfAngles(*(float *)&_XMM0, *(float *)&_XMM1, (float *)&_RDI->refdef.view.depthHackFov, &_RDI->refdef.view.depthHackFov.tanHalfFovY);
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  _RCX = r_dof_physical_filmDiagonal;
  _RBX = _RAX;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+6930h]
    vmovss  xmm0, dword ptr [rax+6934h]; tanHalfFovY
    vdivss  xmm2, xmm1, xmm0; aspectRatio
    vmovss  xmm1, dword ptr [rcx+28h]; filmDiagonalLength
  }
  *(double *)&_XMM0 = R_GetFocalLengthFromFovy(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm8, cs:__real@3d21428b
    vmulss  xmm0, xmm0, xmm8
    vmovss  dword ptr [rbx+6974h], xmm0
  }
  if ( R_DOF_GetPhysicalEnable() && r_dof_physical_accurateFov->current.enabled )
  {
    __asm { vcomiss xmm6, dword ptr [rsi+730h] }
    if ( _RDI->predictedPlayerState.dofPhysicalScriptingState )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+6930h]
        vdivss  xmm7, xmm0, dword ptr [rdi+6934h]
        vmovss  xmm1, dword ptr [rdi+6BD0h]; focusDistance
        vmulss  xmm6, xmm8, dword ptr [rax+28h]
      }
      _RAX = r_dof_physical_minFocusDistance;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+6974h]; focalLength
        vmovss  xmm2, dword ptr [rax+28h]; minFocusDistance
      }
      *(double *)&_XMM0 = R_GetEffectiveFocalLength(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm2, xmm7; aspectRatio
        vmovaps xmm1, xmm6; filmDiagonalLength
      }
      *(double *)&_XMM0 = R_GetFovyFromFocalLength(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm0, xmm0, cs:__real@3c0efa35; X
        vmovss  xmm6, dword ptr [rsi+730h]
      }
      *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm2, xmm1, xmm6
        vmulss  xmm3, xmm0, xmm6
        vmulss  xmm0, xmm2, dword ptr [rdi+6934h]
        vaddss  xmm3, xmm3, xmm0
        vmulss  xmm1, xmm3, xmm7
        vmovss  dword ptr [rdi+6930h], xmm1
        vmovss  dword ptr [rdi+6934h], xmm3
      }
    }
  }
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
  }
}

/*
==============
CG_View_CalcFovCompensation
==============
*/
double CG_View_CalcFovCompensation(const cg_t *cgameGlob)
{
  const CameraDef *Def; 
  char v12; 
  char v13; 

  _RBX = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 259, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Def = CG_Camera_Active_TryGetDef(_RBX->localClientNum);
  if ( (!Def || Def->profile || !Def->firstPerson.disableFOVWeaponOffset) && Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
  {
    _RDI = DCONST_DVARFLT_cg_fov_default_nocomp;
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm7
      vmovaps [rsp+78h+var_38], xmm8
    }
    if ( !DCONST_DVARFLT_cg_fov_default_nocomp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_default_nocomp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_fov_comp_max;
    if ( !DCONST_DVARFLT_cg_fov_comp_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_comp_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm7, dword ptr [rdi+28h]
      vcomiss xmm7, xmm6
    }
    if ( v12 | v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 281, ASSERT_TYPE_ASSERT, "(maxCompFov > baseFov)", (const char *)&queryFormat, "maxCompFov > baseFov") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+17FF8h]; val
      vmovaps xmm2, xmm7; max
      vmovaps xmm1, xmm6; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm8, xmm0, xmm6
      vsubss  xmm6, xmm7, xmm6
      vmovaps xmm7, [rsp+78h+var_28]
      vcvtss2sd xmm1, xmm6, xmm6
      vcomisd xmm1, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( v12 | v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 285, ASSERT_TYPE_ASSERT, "(fullFovCompRange > 1.0E-6)", (const char *)&queryFormat, "fullFovCompRange > ZERO_EPSILON") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vsubss  xmm1, xmm2, dword ptr [rbx+738h]
      vdivss  xmm0, xmm8, xmm6
      vmulss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm8, [rsp+78h+var_38]
      vmovaps xmm6, [rsp+78h+var_18]
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(double *)&_XMM0;
}

/*
==============
CG_View_CalcRadialMotionBlurInternal
==============
*/

void __fastcall CG_View_CalcRadialMotionBlurInternal(const LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  GfxRadialMotionBlur *p_radialMotionBlur; 
  const SuitDef *SuitDef; 
  CgVehicleSystem *VehicleSystem; 
  char v14; 
  char v19; 
  bool v24; 
  unsigned int radialMotionBlur_interpTimeIn; 
  int *p_startTime; 
  unsigned int v33; 
  bool v34; 
  float goalMinStrength; 
  unsigned int v40; 
  unsigned int radialMotionBlur_interpTimeOut; 
  char v57; 
  float maxStrength[4]; 
  float minRadius; 
  float maxRadius; 
  float minStrength; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = DVARBOOL_cg_velocityBasedBlur_Enable;
  _RBX = LocalClientGlobals;
  p_radialMotionBlur = &LocalClientGlobals->refdef.radialMotionBlur;
  if ( !DVARBOOL_cg_velocityBasedBlur_Enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_velocityBasedBlur_Enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    if ( !p_radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3751, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
      __debugbreak();
    p_radialMotionBlur->enabled = 0;
    *(_QWORD *)&p_radialMotionBlur->radius = 0i64;
    return;
  }
  SuitDef = BG_GetSuitDef(_RBX->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3776, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  if ( !CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum) || (VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum), !CgVehicleSystem::PhysicsRadialMotionBlur(VehicleSystem, &_RBX->predictedPlayerState)) )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
    }
    v14 = CG_View_RadialMotionBlurEnabled(localClientNum, &_RBX->predictedPlayerState, SuitDef, &minStrength, maxStrength, &minRadius, &maxRadius);
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm8, xmm8, xmm8
    }
    if ( !v14 )
    {
      p_startTime = &_RBX->radialMotionBlurState.startTime;
      if ( _RBX->radialMotionBlurState.lastBlurType[0] )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0B5390h]
          vmovss  xmm1, dword ptr [rbx+0B5394h]
        }
        *p_startTime = _RBX->time;
        _RBX->radialMotionBlurState.goalMaxRadius = _RBX->radialMotionBlurState.goalMinRadius;
        goalMinStrength = _RBX->radialMotionBlurState.goalMinStrength;
        __asm { vmovss  dword ptr [rbx+0B5370h], xmm1 }
        _RBX->radialMotionBlurState.goalMaxStrength = goalMinStrength;
        __asm
        {
          vmovss  dword ptr [rbx+0B5388h], xmm0
          vmovss  dword ptr [rbx+0B538Ch], xmm1
          vmovss  dword ptr [rbx+0B5378h], xmm0
        }
        *(_QWORD *)&_RBX->radialMotionBlurState.radiusCatchupDelta = 0i64;
      }
      v40 = _RBX->time - *p_startTime;
      radialMotionBlur_interpTimeOut = SuitDef->radialMotionBlur_interpTimeOut;
      v34 = v40 < radialMotionBlur_interpTimeOut;
      if ( (int)v40 <= (int)radialMotionBlur_interpTimeOut )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edx
          vcomiss xmm1, cs:__real@3a83126f
        }
        if ( v40 > radialMotionBlur_interpTimeOut )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
          }
LABEL_41:
          __asm
          {
            vdivss  xmm6, xmm0, xmm1
            vcomiss xmm6, xmm8
          }
          if ( v34 )
          {
            *p_startTime = 0;
            _RBX->radialMotionBlurState.lastBlurType[0] = 0;
            CG_View_DisableRadialMotionBlur(p_radialMotionBlur);
LABEL_51:
            __asm
            {
              vmovaps xmm7, [rsp+0A8h+var_48]
              vmovaps xmm6, [rsp+0A8h+var_38]
              vmovaps xmm8, [rsp+0A8h+var_58]
            }
            return;
          }
LABEL_44:
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0B5380h]
            vaddss  xmm1, xmm0, dword ptr [rbx+0B5378h]
            vmulss  xmm0, xmm6, dword ptr [rbx+0B537Ch]
            vsubss  xmm3, xmm7, xmm6
            vmulss  xmm2, xmm1, xmm3
            vaddss  xmm1, xmm2, xmm0
            vmovss  xmm0, dword ptr [rbx+0B5384h]
            vmovss  dword ptr [rbx+0B5390h], xmm1
            vaddss  xmm1, xmm0, dword ptr [rbx+0B5370h]
            vmulss  xmm0, xmm6, dword ptr [rbx+0B5374h]
            vmulss  xmm2, xmm1, xmm3
            vaddss  xmm1, xmm2, xmm0
            vmovss  dword ptr [rbx+0B5394h], xmm1
          }
          if ( !p_radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3738, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
            __debugbreak();
          if ( v14 )
          {
            v57 = 1;
          }
          else
          {
            __asm { vcomiss xmm6, cs:__real@3f7fbe77 }
            v57 = 0;
          }
          p_radialMotionBlur->enabled = v57;
          p_radialMotionBlur->radius = _RBX->radialMotionBlurState.currentRadius;
          p_radialMotionBlur->strength = _RBX->radialMotionBlurState.currentStrength;
          _RBX->radialMotionBlurState.lastBlurType[0] = v14;
          goto LABEL_51;
        }
      }
LABEL_43:
      __asm { vmovaps xmm6, xmm7 }
      goto LABEL_44;
    }
    if ( (unsigned __int8)(v14 - 9) <= 1u )
    {
      __asm
      {
        vmovss  xmm0, [rsp+0A8h+minStrength]
        vucomiss xmm0, dword ptr [rbx+0B5370h]
      }
      if ( v14 != 10 )
      {
        v19 = 1;
LABEL_20:
        if ( _RBX->radialMotionBlurState.lastBlurType[0] != v14 || v19 )
        {
          _RBX->radialMotionBlurState.startTime = _RBX->time;
          __asm
          {
            vmovss  xmm0, [rsp+0A8h+minStrength]
            vmovss  dword ptr [rbx+0B5370h], xmm0
            vmovss  xmm1, [rsp+0A8h+maxStrength]
            vmovss  dword ptr [rbx+0B5374h], xmm1
            vmovss  xmm0, [rsp+0A8h+arg_8]
            vmovss  dword ptr [rbx+0B5378h], xmm0
            vmovss  xmm1, [rsp+0A8h+arg_10]
            vmovss  dword ptr [rbx+0B537Ch], xmm1
          }
          v24 = !p_radialMotionBlur->enabled;
          if ( p_radialMotionBlur->enabled )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rbx+0B5390h]
              vmovss  xmm3, dword ptr [rbx+0B5378h]
              vcomiss xmm1, xmm3
              vmovss  xmm0, dword ptr [rbx+0B5394h]
              vmovss  dword ptr [rbx+0B5388h], xmm1
              vmovss  dword ptr [rbx+0B538Ch], xmm0
              vxorps  xmm2, xmm2, xmm2
              vmovss  xmm3, dword ptr [rbx+0B537Ch]
              vcomiss xmm1, xmm3
            }
            if ( !v24 )
              __asm { vsubss  xmm2, xmm1, xmm3 }
            __asm
            {
              vmovss  xmm3, dword ptr [rbx+0B5370h]
              vcomiss xmm0, xmm3
              vmovss  dword ptr [rbx+0B5380h], xmm2
              vxorps  xmm1, xmm1, xmm1
              vmovss  xmm2, dword ptr [rbx+0B5374h]
              vcomiss xmm0, xmm2
            }
            if ( !v24 )
              __asm { vsubss  xmm1, xmm0, xmm2 }
            __asm { vmovss  dword ptr [rbx+0B5384h], xmm1 }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, [rsp+0A8h+arg_8]
              vmovss  dword ptr [rbx+0B5388h], xmm0
              vmovss  xmm1, [rsp+0A8h+arg_10]
              vmovss  dword ptr [rbx+0B538Ch], xmm1
            }
            *(_QWORD *)&_RBX->radialMotionBlurState.radiusCatchupDelta = 0i64;
          }
        }
        radialMotionBlur_interpTimeIn = SuitDef->radialMotionBlur_interpTimeIn;
        if ( v14 == 10 )
        {
          radialMotionBlur_interpTimeIn = 0;
        }
        else if ( v14 == 9 )
        {
          radialMotionBlur_interpTimeIn = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_skydive_rmbTimeInMs, "cg_skydive_rmbTimeInMs");
        }
        p_startTime = &_RBX->radialMotionBlurState.startTime;
        v33 = _RBX->time - _RBX->radialMotionBlurState.startTime;
        v34 = v33 < radialMotionBlur_interpTimeIn;
        if ( (int)v33 <= (int)radialMotionBlur_interpTimeIn )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vcomiss xmm1, cs:__real@3a83126f
          }
          if ( v33 > radialMotionBlur_interpTimeIn )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, edx
            }
            goto LABEL_41;
          }
        }
        goto LABEL_43;
      }
      __asm
      {
        vmovss  xmm0, [rsp+0A8h+maxStrength]
        vucomiss xmm0, dword ptr [rbx+0B5374h]
        vmovss  xmm0, [rsp+0A8h+arg_8]
        vucomiss xmm0, dword ptr [rbx+0B5378h]
        vmovss  xmm0, [rsp+0A8h+arg_10]
        vucomiss xmm0, dword ptr [rbx+0B537Ch]
      }
    }
    v19 = 0;
    goto LABEL_20;
  }
}

/*
==============
CG_View_CalcRemoteEyeValues
==============
*/
__int64 CG_View_CalcRemoteEyeValues(const LocalClientNum_t localClientNum)
{
  unsigned int v3; 
  __int16 remoteEyesEnt; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  ClConfigStrings *ClConfigStrings; 
  const char *v8; 
  const char *v9; 
  scr_string_t String; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  vec3_t outOrigin; 
  __int64 v18; 
  tmat33_t<vec3_t> outTagMat; 
  usercmd_s ucmd; 

  v18 = -2i64;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  v3 = 1;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3187, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( _RBX->predictedPlayerState.pm_type == 3 )
    return 0i64;
  remoteEyesEnt = _RBX->predictedPlayerState.remoteEyesEnt;
  if ( remoteEyesEnt == 2047 )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, remoteEyesEnt);
  if ( Entity->nextState.eType == ET_MISSILE && Entity->nextState.lerp.u.anonymous.data[2] > CG_GetLocalClientGlobals(localClientNum)->time )
    return 0i64;
  ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0i64;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v8 = ClConfigStrings->GetClientTagString(ClConfigStrings, _RBX->predictedPlayerState.remoteEyesTagname);
  v9 = v8;
  if ( !v8 )
  {
    Com_PrintWarning(14, "CalcRemoteEyesViewValues(): Couldn't get configString for remoteEyesTagname.\n");
    return 0i64;
  }
  String = SL_FindString(v8);
  if ( String )
  {
    if ( CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, String, &outTagMat, &outOrigin) || (Com_PrintWarning(14, "CalcRemoteEyesViewValues(): Couldn't find tag '%s' in dobj for ent #%i.\n", v9, (unsigned int)Entity->nextState.number), CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_origin, &outTagMat, &outOrigin)) )
    {
      RefdefView_SetOrg(&_RBX->refdef.view, &outOrigin);
      if ( !BG_IsPlayer(&_RBX->predictedPlayerState) || (_RBX->predictedPlayerState.linkFlags.m_flags[0] & 0x20) != 0 )
      {
        AxisToAngles(&outTagMat, &_RBX->refdefViewAngles);
      }
      else
      {
        if ( _RBX->remoteMissileCamInitialized && _RBX->remoteMissileCamEnt == _RBX->predictedPlayerState.remoteEyesEnt )
        {
          _RDI = &_RBX->remoteMissileCamAngles;
        }
        else
        {
          _RDI = &_RBX->remoteMissileCamAngles;
          AxisToAngles(&outTagMat, &_RBX->remoteMissileCamAngles);
          _RBX->remoteMissileCamInitialized = 1;
          _RBX->remoteMissileCamEnt = _RBX->predictedPlayerState.remoteEyesEnt;
        }
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
        {
          Client = ClActiveClient::GetClient(localClientNum);
          CmdNumber = ClActiveClient_GetCmdNumber(Client);
          if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
            BG_UpdateClientControlledMissile(_RDI, ucmd.remoteControlAngles, _RBX->frametime);
        }
        _RBX->refdefViewAngles.v[0] = _RDI->v[0];
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vmovss  dword ptr [rbx+178C4h], xmm0
          vmovss  xmm1, dword ptr [rdi+8]
          vmovss  dword ptr [rbx+178C8h], xmm1
        }
      }
      if ( Entity->nextState.eType == ET_MISSILE )
      {
        CG_View_RemoteEyesShake(_RBX, Entity);
        _RBX->cvsData.transitory.remoteMissileCam = 1;
      }
    }
    else
    {
      v3 = 0;
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    return v3;
  }
  else
  {
    Com_PrintWarning(14, "CalcRemoteEyesViewValues(): Couldn't find const string for tagname '%s'.\n", v9);
    return 0i64;
  }
}

/*
==============
CG_View_CalcRemoteEyes
==============
*/
void CG_View_CalcRemoteEyes(LocalClientNum_t localClientNum, int *outIsRemoteEyes)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  cg_t *v6; 
  centity_t *Entity; 
  centity_t *v8; 
  const DObj *ClientDObj; 
  const DObj *v10; 
  int WorldTagPos; 
  centity_t *v12; 
  vec3_t outPos; 
  __int64 v14; 
  tmat33_t<vec3_t> outTagMat; 

  v14 = -2i64;
  if ( !outIsRemoteEyes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3313, ASSERT_TYPE_ASSERT, "(outIsRemoteEyes)", (const char *)&queryFormat, "outIsRemoteEyes") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 3 )
  {
    if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
    {
      v6 = CG_GetLocalClientGlobals(localClientNum);
      if ( (v6->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3138, ASSERT_TYPE_ASSERT, "(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ))", (const char *)&queryFormat, "ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY )") )
        __debugbreak();
      if ( v6->predictedPlayerState.linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3139, ASSERT_TYPE_ASSERT, "(ps->linkEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->linkEnt != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity(localClientNum, v6->predictedPlayerState.linkEnt);
      v8 = Entity;
      if ( (Entity->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
        v10 = ClientDObj;
        if ( ClientDObj )
        {
          WorldTagPos = CG_DObjGetWorldTagPos(&v8->pose, ClientDObj, scr_const.tag_player, &outPos);
          if ( WorldTagPos || (WorldTagPos = CG_DObjGetWorldTagMatrix(&v8->pose, v10, scr_const.tag_origin, &outTagMat, &outPos)) != 0 )
            RefdefView_SetOrg(&v6->refdef.view, &outPos);
          if ( v8->nextState.eType == ET_HELICOPTER )
            CG_View_RemoteEyesShake(v6, v8);
          memset(&outPos, 0, sizeof(outPos));
          if ( WorldTagPos )
          {
            v12 = CG_GetEntity(localClientNum, p_predictedPlayerState->linkEnt);
            if ( v12->nextState.eType == ET_TURRET && (BG_IsPlayer(p_predictedPlayerState) || BG_IsSpectating(p_predictedPlayerState) || CG_GetLocalClientGlobals(localClientNum)->inKillCam) )
              CG_View_CalcRemoteViewTurret(localClientNum, v12);
            *outIsRemoteEyes = 1;
          }
        }
        else
        {
          Com_PrintWarning(14, "Couldn't get dobj of linked entity (#%i) for client #%i.\n", (unsigned int)v6->predictedPlayerState.linkEnt, (unsigned int)localClientNum);
        }
      }
      else
      {
        Com_PrintWarning(14, "Weaponview linked entity (#%i) is not in local client #%i's snapshot.\n", (unsigned int)v6->predictedPlayerState.linkEnt, (unsigned int)localClientNum);
      }
    }
    else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) )
    {
      *outIsRemoteEyes = CG_View_CalcRemoteEyeValues(localClientNum);
    }
  }
}

/*
==============
CG_View_CalcRemoteViewTurret
==============
*/
void CG_View_CalcRemoteViewTurret(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3282, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3283, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3284, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3285, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3288, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &cent->nextState);
    if ( !BG_WeaponDef(WeaponForEntity, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3300, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
      __debugbreak();
    *(double *)&_XMM0 = I_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+0CC4h]
      vaddss  xmm0, xmm1, dword ptr [rdi+178C0h]
      vmovss  dword ptr [rdi+178C0h], xmm0
    }
    *(double *)&_XMM0 = I_crandom();
    __asm
    {
      vmulss  xmm1, xmm0, dword ptr [rbx+0CC0h]
      vaddss  xmm0, xmm1, dword ptr [rdi+178C4h]
      vmovss  dword ptr [rdi+178C4h], xmm0
    }
  }
}

/*
==============
CG_View_CalcTurretCamera
==============
*/
void CG_View_CalcTurretCamera(const LocalClientNum_t localClientNum, bool calcWorldSpaceTurret)
{
  const playerState_s *p_predictedPlayerState; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const entityState_t *p_nextState; 
  const DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v17; 
  CgHandler *Handler; 
  char v57; 
  vec3_t outOrigin; 
  __int64 v68; 
  tmat33_t<vec3_t> outTagMat; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &_RDI->predictedPlayerState;
  if ( _RDI == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&_RDI->predictedPlayerState.eFlags) )
  {
    if ( _RDI->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2692, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
      __debugbreak();
    if ( _RDI->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2693, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    Entity = CG_GetEntity(localClientNum, _RDI->predictedPlayerState.viewlocked_entNum);
    p_pose = &Entity->pose;
    if ( (Entity->flags & 1) != 0 )
    {
      p_nextState = &Entity->nextState;
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
      if ( ClientDObj )
      {
        if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
          __debugbreak();
        if ( BG_IsTurretActiveFlags(&p_nextState->lerp.eFlags) )
        {
          if ( !CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, scr_const.tag_player, &outTagMat, &outOrigin) )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EBDF8, 1182i64);
          RefdefView_SetOrg(&_RDI->refdef.view, &outOrigin);
          Instance = CgWeaponMap::GetInstance(localClientNum);
          if ( BG_IsUsingTurretViewarms(Instance, p_predictedPlayerState) )
          {
            if ( _RDI == (cg_t *)-384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
              __debugbreak();
            if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RDI->predictedPlayerState.eFlags, ACTIVE, 7u) )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
                __debugbreak();
            }
            else
            {
              AxisToAngles(&outTagMat, &_RDI->refdefViewAngles);
            }
          }
          WeaponForEntity = BG_GetWeaponForEntity(Instance, p_nextState);
          v17 = BG_WeaponDef(WeaponForEntity, 0);
          if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2731, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
            __debugbreak();
          _ER14 = 0;
          if ( _RDI->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_WEAPONJITTER && (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) ? _RDI->renderingThirdPerson == 0 : _RDI->IsClientGamePaused(_RDI) == 0) )
          {
            *(double *)&_XMM0 = I_crandom();
            __asm
            {
              vmulss  xmm1, xmm0, dword ptr [rsi+0CC4h]
              vaddss  xmm0, xmm1, dword ptr [rdi+178C0h]
              vmovss  dword ptr [rdi+178C0h], xmm0
            }
            *(double *)&_XMM0 = I_crandom();
            __asm
            {
              vmulss  xmm1, xmm0, dword ptr [rsi+0CC0h]
              vaddss  xmm0, xmm1, dword ptr [rdi+178C4h]
              vmovss  dword ptr [rdi+178C4h], xmm0
            }
          }
          if ( v17->enableViewBounceFire )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcomiss xmm0, dword ptr [rdi+180A4h]
            }
            if ( !v17->enableViewBounceFire )
            {
              Handler = CgHandler::getHandler(localClientNum);
              __asm { vmovd   xmm1, r14d }
              _ECX = BG_ShouldHandleThirdPersonVehicleCamera(p_predictedPlayerState, Handler);
              __asm
              {
                vmovd   xmm0, ecx
                vpcmpeqd xmm3, xmm0, xmm1
                vmovss  xmm2, cs:__real@3f800000
                vmovss  xmm1, cs:__real@3f333333
                vblendvps xmm9, xmm1, xmm2, xmm3
                vmovss  xmm6, dword ptr [rdi+180A4h]
                vmovd   xmm1, r14d
              }
              _EAX = _ECX;
              __asm
              {
                vmovd   xmm0, eax
                vpcmpeqd xmm3, xmm0, xmm1
                vmovss  xmm2, cs:__real@bf800000
                vmovss  xmm1, cs:__real@bf8ccccd
                vblendvps xmm0, xmm1, xmm2, xmm3
                vmulss  xmm2, xmm0, dword ptr [rsi+0CCCh]
                vmulss  xmm1, xmm2, xmm6; Y
                vmovss  xmm0, cs:__real@402df854; X
              }
              *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
              __asm
              {
                vmovaps xmm7, xmm0
                vmulss  xmm6, xmm6, dword ptr [rsi+0CD0h]
                vmovaps xmm0, xmm6; X
              }
              cosf_0(*(float *)&_XMM0);
              __asm
              {
                vmulss  xmm1, xmm7, xmm0
                vmulss  xmm8, xmm1, xmm9
                vsubss  xmm0, xmm6, cs:__real@3fc90fdb; X
              }
              cosf_0(*(float *)&_XMM0);
              __asm
              {
                vmulss  xmm1, xmm7, xmm0
                vmulss  xmm2, xmm1, xmm9
                vmulss  xmm0, xmm8, dword ptr [rsi+0CD4h]
                vaddss  xmm0, xmm0, dword ptr [rdi+178C0h]
                vmovss  dword ptr [rdi+178C0h], xmm0
                vmulss  xmm1, xmm2, dword ptr [rsi+0CD8h]
                vaddss  xmm0, xmm1, dword ptr [rdi+178C8h]
                vmovss  dword ptr [rdi+178C8h], xmm0
                vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
                vmovss  xmm1, cs:__real@3a83126f
                vcomiss xmm8, xmm1
              }
              if ( v57 )
              {
                _RDI->turretTimeSinceFire = -1.0;
              }
              else
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
                  vmulss  xmm1, xmm0, xmm1
                  vaddss  xmm2, xmm1, dword ptr [rdi+180A4h]
                  vmovss  dword ptr [rdi+180A4h], xmm2
                }
              }
            }
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
  }
  _R11 = &v70;
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
CG_View_CalcVehicleCamera
==============
*/
__int64 CG_View_CalcVehicleCamera(const LocalClientNum_t localClientNum, int *outIsRemoteEyes)
{
  cg_t *LocalClientGlobals; 
  bool IsRemoteControlCam; 
  vec3_t outOrg; 

  if ( !outIsRemoteEyes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5309, ASSERT_TYPE_ASSERT, "(outIsRemoteEyes)", (const char *)&queryFormat, "outIsRemoteEyes", -2i64) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5312, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 3 )
  {
    if ( CG_VehicleCam_IsRemoteDriveCam(localClientNum) )
    {
      *outIsRemoteEyes = 1;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_VehicleCam_UpdateRemoteDriveCam(localClientNum, LocalClientGlobals, &outOrg, &LocalClientGlobals->refdefViewAngles);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_AddGroundTiltToAngles(localClientNum, &LocalClientGlobals->refdefViewAngles, LocalClientGlobals);
LABEL_10:
      memset(&outOrg, 0, sizeof(outOrg));
      return 1i64;
    }
    if ( CG_VehicleCam_IsPlayerControlCam(localClientNum) )
    {
      *outIsRemoteEyes = 1;
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_VehicleCam_UpdatePlayerControlCam(localClientNum, LocalClientGlobals, &outOrg, &LocalClientGlobals->refdefViewAngles);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_AddGroundTiltToAngles(localClientNum, &LocalClientGlobals->refdefViewAngles, LocalClientGlobals);
      goto LABEL_10;
    }
    IsRemoteControlCam = CG_VehicleCam_IsRemoteControlCam(localClientNum);
    *outIsRemoteEyes = 0;
    if ( IsRemoteControlCam )
    {
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_VehicleCam_UpdateRemoteControlCam(localClientNum, LocalClientGlobals, &outOrg, &LocalClientGlobals->refdefViewAngles);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_AddGroundTiltToAngles(localClientNum, &LocalClientGlobals->refdefViewAngles, LocalClientGlobals);
      goto LABEL_10;
    }
    if ( !CG_VehicleCam_IsDriveCam(localClientNum) )
    {
      CG_CalcVehicleViewValues(localClientNum, &LocalClientGlobals->refdefViewAngles);
      CG_Turret_UpdateCamera(localClientNum, &LocalClientGlobals->refdefViewAngles);
    }
  }
  return 0i64;
}

/*
==============
CG_View_CalcViewAnimation
==============
*/
void CG_View_CalcViewAnimation(const LocalClientNum_t localClientNum)
{
  __int64 v8; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v11; 
  PlayerHandIndex v13; 
  DObj **p_viewModelDObj; 
  const dvar_t *v17; 
  const cpose_t *ViewModelPoseForHand; 
  int v21; 
  char v29; 
  const tmat33_t<vec3_t> *ViewModelTransform; 
  char v48; 
  unsigned int v63; 
  GestureState *p_gestureState; 
  const Gesture *CurrentAsset; 
  __int64 v73; 
  __int64 v74; 
  vec3_t outOrigin; 
  int *p_weaponState; 
  cg_t *v77; 
  __int64 v78; 
  __int64 WeaponHandForViewWeapon; 
  CgWeaponMap *v80; 
  vec3_t outOrg; 
  __int64 v82; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t outAngles; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  v82 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
  }
  v8 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "CG_View_CalcViewAnimation");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  v77 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[v8];
  v80 = v11;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && !BG_IsVehicleActive(p_predictedPlayerState) || BG_IsUsingTurretViewarms(v11, p_predictedPlayerState) )
  {
    BG_GetViewmodelWeapon(v11, p_predictedPlayerState);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _R15 = &LocalClientGlobals->refdef.view.axis;
    cg_t::SetViewModelTransform(LocalClientGlobals, &LocalClientGlobals->refdef.view.axis, &outOrg);
    v13 = WEAPON_HAND_DEFAULT;
    WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(v11, p_predictedPlayerState);
    if ( WeaponHandForViewWeapon >= 0 )
    {
      v78 = 0i64;
      p_weaponState = &LocalClientGlobals->predictedPlayerState.weapState[0].weaponState;
      p_viewModelDObj = &LocalClientGlobals->m_weaponHand[0].viewModelDObj;
      __asm
      {
        vmovss  xmm10, cs:__real@3f800000
        vxorps  xmm11, xmm11, xmm11
      }
      do
      {
        if ( (unsigned int)v13 >= NUM_WEAPON_HANDS )
        {
          LODWORD(v74) = 2;
          LODWORD(v73) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v73, v74) )
            __debugbreak();
        }
        CG_UpdateViewModelPreviousPositionForHand((LocalClientNum_t)v8, v13);
        CG_UpdateViewModelPoseForHand(*p_viewModelDObj, (LocalClientNum_t)v8, v13, 0);
        if ( !*p_viewModelDObj )
          break;
        v17 = DCONST_DVARBOOL_cg_disableViewAnimation;
        if ( !DCONST_DVARBOOL_cg_disableViewAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disableViewAnimation") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( !v17->current.enabled )
        {
          ViewModelPoseForHand = CG_GetViewModelPoseForHand((LocalClientNum_t)v8, v13);
          if ( !CG_DObjGetWorldTagMatrix(ViewModelPoseForHand, *p_viewModelDObj, scr_const.tag_camera, _R15, &outOrigin) )
            goto LABEL_64;
          __asm
          {
            vmovaps xmm9, xmm10
            vmovaps xmm8, xmm10
          }
          v21 = CG_Camera_Active_Get((LocalClientNum_t)v8);
          if ( v21 )
          {
            if ( v21 < 256 && (unsigned int)(v21 - 1) < 0xFA )
            {
              _RAX = BG_Camera_GetDef(v21);
              if ( _RAX )
              {
                if ( _RAX->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
                {
                  __asm
                  {
                    vmovss  xmm9, dword ptr [rax+58h]
                    vmovss  xmm8, dword ptr [rax+5Ch]
                  }
                }
              }
            }
          }
          _RDI = DVARFLT_com_viewAnimCameraRotationScale;
          if ( !DVARFLT_com_viewAnimCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraRotationScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm6, dword ptr [rdi+28h] }
          _RDI = DVARFLT_com_viewAnimCameraTranslationScale;
          if ( !DVARFLT_com_viewAnimCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraTranslationScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vmovss  xmm7, dword ptr [rdi+28h] }
          ViewModelTransform = (const tmat33_t<vec3_t> *)cg_t::GetViewModelTransform(LocalClientGlobals);
          __asm
          {
            vmulss  xmm6, xmm6, xmm8
            vucomiss xmm6, xmm10
          }
          if ( !v29 )
          {
            AxisToAngles(ViewModelTransform, &angles);
            AxisToAngles(_R15, &end);
            __asm { vmovaps xmm2, xmm6; fraction }
            SlerpAngles(&angles, &end, *(const float *)&_XMM2, &outAngles);
            AnglesToAxis(&outAngles, _R15);
          }
          __asm
          {
            vmulss  xmm4, xmm7, xmm9
            vucomiss xmm4, xmm10
          }
          if ( !v29 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+150h+outOrigin]
              vsubss  xmm2, xmm0, dword ptr [rdi+24h]
              vmovss  xmm1, dword ptr [rsp+150h+outOrigin+4]
              vsubss  xmm3, xmm1, dword ptr [rdi+28h]
              vmovss  xmm0, dword ptr [rsp+150h+outOrigin+8]
              vsubss  xmm1, xmm0, dword ptr [rdi+2Ch]
              vmulss  xmm2, xmm2, xmm4
              vmulss  xmm3, xmm3, xmm4
              vmulss  xmm4, xmm1, xmm4
              vaddss  xmm0, xmm2, dword ptr [rdi+24h]
              vmovss  dword ptr [rsp+150h+outOrigin], xmm0
              vaddss  xmm1, xmm3, dword ptr [rdi+28h]
              vmovss  dword ptr [rsp+150h+outOrigin+4], xmm1
              vaddss  xmm0, xmm4, dword ptr [rdi+2Ch]
              vmovss  dword ptr [rsp+150h+outOrigin+8], xmm0
            }
          }
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
          AxisToAngles(_R15, &LocalClientGlobals->refdefViewAngles);
          _RDI = DCONST_DVARFLT_cg_viewModelDebugDist;
          if ( !DCONST_DVARFLT_cg_viewModelDebugDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewModelDebugDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+28h]
            vcomiss xmm0, xmm11
          }
          if ( !(v48 | v29) )
          {
            __asm
            {
              vmovss  xmm6, dword ptr [r15]
              vmovss  xmm7, dword ptr [r15+4]
              vmovss  xmm8, dword ptr [r15+8]
            }
            _RDI = DCONST_DVARFLT_cg_viewModelDebugDist;
            if ( !DCONST_DVARFLT_cg_viewModelDebugDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewModelDebugDist") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm
            {
              vmovss  xmm3, dword ptr [rdi+28h]
              vmulss  xmm1, xmm3, xmm6
              vmovss  xmm0, dword ptr [rsp+150h+outOrigin]
              vsubss  xmm1, xmm0, xmm1
              vmovss  dword ptr [rsp+150h+outOrigin], xmm1
              vmulss  xmm2, xmm3, xmm7
              vmovss  xmm0, dword ptr [rsp+150h+outOrigin+4]
              vsubss  xmm1, xmm0, xmm2
              vmovss  dword ptr [rsp+150h+outOrigin+4], xmm1
              vmulss  xmm3, xmm3, xmm8
              vmovss  xmm0, dword ptr [rsp+150h+outOrigin+8]
              vsubss  xmm1, xmm0, xmm3
              vmovss  dword ptr [rsp+150h+outOrigin+8], xmm1
            }
            RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
          }
          if ( v13 == WEAPON_HAND_DEFAULT )
          {
            if ( *p_weaponState )
            {
LABEL_64:
              memset(&outOrigin, 0, sizeof(outOrigin));
              break;
            }
            if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5466, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5467, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( WeaponHandForViewWeapon )
            {
              v63 = 0;
              p_gestureState = &p_predictedPlayerState->gestureState;
              while ( 1 )
              {
                CurrentAsset = BG_Gesture_GetCurrentAsset(p_predictedPlayerState, v63);
                if ( CurrentAsset->priority == GESTURE_PRIORITY_MANTLE && p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
                  break;
                ++v63;
                p_gestureState = (GestureState *)((char *)p_gestureState + 32);
                if ( v63 >= 2 )
                  goto LABEL_60;
              }
              if ( CurrentAsset->weaponSettings.splitAnimsAkimbo )
                goto LABEL_64;
LABEL_60:
              LocalClientGlobals = v77;
            }
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        ++v13;
        ++v78;
        p_viewModelDObj += 5;
        p_weaponState += 20;
      }
      while ( v78 <= WeaponHandForViewWeapon );
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v86;
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
CG_View_CalcViewOrigin
==============
*/
void CG_View_CalcViewOrigin(const LocalClientNum_t localClientNum)
{
  int pm_type; 
  CgHandler *Handler; 
  unsigned int time; 
  bool v13; 
  int v14; 
  const dvar_t *v18; 
  int integer; 
  vec3_t vec; 
  __int64 v43; 
  vec3_t outWorldOffset; 
  WorldUpReferenceFrame v45; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  v43 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5285, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+0D8h+vec], xmm0
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+0D8h+vec+4], xmm1
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+0D8h+vec+8], xmm0
  }
  if ( !_RBX->playerTeleported )
  {
    pm_type = _RBX->predictedPlayerState.pm_type;
    if ( (pm_type & 0xFFFFFFFC) == 0 && pm_type != 1 )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vucomiss xmm6, dword ptr [rbx+59694h]
      }
      if ( _RBX->time - _RBX->stepViewStart >= 0 )
      {
        Handler = CgHandler::getHandler(_RBX->localClientNum);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v45, &_RBX->predictedPlayerState, Handler);
        time = _RBX->time;
        v13 = time < _RBX->stepViewStart;
        v14 = time - _RBX->stepViewStart;
        __asm
        {
          vxorps  xmm8, xmm8, xmm8
          vcvtsi2ss xmm8, xmm8, eax
          vmovss  xmm7, cs:__real@3f800000
          vcomiss xmm8, dword ptr [rbx+5969Ch]
        }
        if ( v13 )
        {
          if ( v14 >= 0 )
          {
            v18 = DCONST_DVARINT_cg_viewZSmoothingInterpType;
            if ( !DCONST_DVARINT_cg_viewZSmoothingInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingInterpType") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v18);
            integer = v18->current.integer;
            if ( integer )
            {
              __asm { vdivss  xmm0, xmm8, dword ptr [rbx+5969Ch] }
              if ( integer == 1 )
              {
                __asm
                {
                  vsubss  xmm2, xmm0, xmm7
                  vmulss  xmm1, xmm2, xmm2
                  vmulss  xmm2, xmm1, xmm2
                  vaddss  xmm6, xmm2, xmm7
                }
              }
              else
              {
                __asm
                {
                  vsubss  xmm0, xmm0, cs:__real@3f000000
                  vmulss  xmm0, xmm0, cs:__real@40490fdb; X
                }
                *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
                __asm
                {
                  vaddss  xmm1, xmm0, xmm7
                  vmulss  xmm6, xmm1, cs:__real@3f000000
                }
              }
            }
            else
            {
              __asm { vdivss  xmm6, xmm8, dword ptr [rbx+5969Ch] }
            }
          }
        }
        else
        {
          __asm { vmovaps xmm6, xmm7 }
        }
        __asm
        {
          vsubss  xmm0, xmm6, xmm7
          vmulss  xmm1, xmm0, dword ptr [rbx+59694h]; height
        }
        WorldUpReferenceFrame::AddUpContribution(&v45, *(float *)&_XMM1, &vec);
      }
    }
  }
  __asm { vmovss  xmm1, dword ptr [rbx+738h]; adsFraction }
  CG_ViewMotion_GetSpringOffset(&_RBX->predictedPlayerState, *(const float *)&_XMM1, &_RBX->viewSpring, &_RBX->predictedPlayerState.viewangles, NULL, &outWorldOffset);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+vec]
    vaddss  xmm1, xmm0, dword ptr [rsp+0D8h+var_80]
    vmovss  dword ptr [rsp+0D8h+vec], xmm1
    vmovss  xmm2, dword ptr [rsp+0D8h+vec+4]
    vaddss  xmm0, xmm2, dword ptr [rsp+0D8h+var_80+4]
    vmovss  dword ptr [rsp+0D8h+vec+4], xmm0
    vmovss  xmm1, dword ptr [rsp+0D8h+vec+8]
    vaddss  xmm2, xmm1, dword ptr [rsp+0D8h+var_80+8]
    vmovss  dword ptr [rsp+0D8h+vec+8], xmm2
  }
  RefdefView_SetOrg(&_RBX->refdef.view, &vec);
  _RBX->refdefViewAngles.v[0] = _RBX->predictedPlayerState.viewangles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+1E4h]
    vmovss  dword ptr [rbx+178C4h], xmm0
    vmovss  xmm1, dword ptr [rbx+1E8h]
    vmovss  dword ptr [rbx+178C8h], xmm1
  }
  memset(&vec, 0, sizeof(vec));
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_View_CalcVignette
==============
*/

void __fastcall CG_View_CalcVignette(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  cg_t *v18; 
  char v32; 
  float fmt; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps [rsp+108h+var_98], xmm14
    vmovaps [rsp+108h+var_A8], xmm15
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vxorps  xmm2, xmm2, xmm2
  }
  v18 = _RAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1250h]
    vmovss  xmm7, dword ptr [rax+124Ch]
    vcomiss xmm7, xmm3
    vmovss  xmm9, dword ptr [rax+1254h]
    vmovss  xmm10, dword ptr [rax+1258h]
    vmovss  xmm11, dword ptr [rax+125Ch]
    vmovss  xmm12, dword ptr [rax+1260h]
    vmovss  xmm13, dword ptr [rax+1264h]
    vmovss  xmm14, dword ptr [rax+1268h]
    vmovss  xmm15, dword ptr [rax+126Ch]
    vcvttss2si edi, dword ptr [rax+1274h]
    vcmpneqss xmm1, xmm0, xmm2
    vblendvps xmm0, xmm2, xmm3, xmm1
    vmovss  [rsp+108h+arg_10], xmm0
    vmovss  xmm0, dword ptr [rax+1270h]
    vmovss  [rsp+108h+arg_8], xmm0
  }
  if ( v32 )
  {
    _RDI = r_vignetteVisionSetLerpDuration;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+171FCh]
      vmovss  xmm7, dword ptr [rax+171D8h]
      vmovss  xmm8, dword ptr [rax+171DCh]
      vmovss  xmm9, dword ptr [rax+171E0h]
      vmovss  xmm10, dword ptr [rax+171E4h]
      vmovss  xmm11, dword ptr [rax+171E8h]
      vmovss  xmm12, dword ptr [rax+171ECh]
      vmovss  xmm13, dword ptr [rax+171F0h]
      vmovss  xmm14, dword ptr [rax+171F4h]
      vmovss  xmm15, dword ptr [rax+171F8h]
      vmovss  [rsp+108h+arg_8], xmm0
    }
    if ( !r_vignetteVisionSetLerpDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si edi, xmm1
    }
  }
  else
  {
    __asm { vmovss  xmm8, [rsp+108h+arg_10] }
  }
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm6, cs:__real@358637be }
  if ( _EDI )
  {
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    if ( _EDI > 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+66AD8h]
        vsubss  xmm1, xmm0, xmm7
        vmulss  xmm2, xmm1, xmm1
        vcomiss xmm2, xmm6
        vmovss  xmm0, [rsp+108h+arg_8]
      }
      _RDX = CG_GetLocalClientGlobals(localClientNum);
      _RDX->vignetteLerpBaseIntensity = _RDX->refdef.vignette.intensity;
      _RDX->vignetteLerpBaseSquareAspectRatioWeight = _RDX->refdef.vignette.squareAspectRatioWeight;
      _RDX->vignetteLerpBaseScale = _RDX->refdef.vignette.size;
      _RDX->vignetteLerpBaseFalloff = _RDX->refdef.vignette.falloff;
      _RDX->vignetteLerpBaseFalloffStart = _RDX->refdef.vignette.falloffStart;
      _RDX->vignetteLerpBaseBoxSize = _RDX->refdef.vignette.boxSize;
      _RDX->vignetteLerpBaseOffset = _RDX->refdef.vignette.offset;
      __asm
      {
        vmovss  dword ptr [rdx+66AD8h], xmm7
        vmovss  dword ptr [rdx+66ADCh], xmm8
        vmovss  dword ptr [rdx+66AE0h], xmm9
        vmovss  dword ptr [rdx+66AE4h], xmm10
        vmovss  dword ptr [rdx+66AE8h], xmm11
        vmovss  dword ptr [rdx+66AECh], xmm12
        vmovss  dword ptr [rdx+66AF0h], xmm13
        vmovss  dword ptr [rdx+66AF4h], xmm14
        vmovss  dword ptr [rdx+66AF8h], xmm15
        vmovss  dword ptr [rdx+66AFCh], xmm0
      }
      _RDX->vignetteLerpDuration = _EDI;
      _RDX->vignetteLerpTimer = _EDI;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+171A8h]
      vsubss  xmm1, xmm0, xmm7
      vmulss  xmm2, xmm1, xmm1
      vcomiss xmm2, xmm6
      vmovss  xmm0, [rsp+108h+arg_8]
      vmovss  [rsp+108h+var_B8], xmm0
      vmovss  [rsp+108h+var_C0], xmm15
      vmovss  [rsp+108h+var_C8], xmm14
      vmovss  [rsp+108h+var_D0], xmm13
      vmovss  [rsp+108h+var_D8], xmm12
      vmovss  dword ptr [rsp+108h+var_E0], xmm11
      vmovaps xmm3, xmm9; sizeX
      vmovaps xmm2, xmm8; squareAspectRatioWeight
      vmovaps xmm1, xmm7; intensity
      vmovss  dword ptr [rsp+108h+fmt], xmm10
    }
    *(_QWORD *)&v18->vignetteLerpTimer = 0i64;
    CG_SetVignetteParams(localClientNum, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v62, v63, v64, v65, v66, v67);
  }
  __asm { vmovaps xmm14, [rsp+108h+var_98] }
  _R11 = &v70;
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
    vmovaps xmm15, [rsp+108h+var_A8]
  }
  CG_UpdateVignette(localClientNum, *(double *)&_XMM1);
}

/*
==============
CG_View_CalcWeaponFireMotionBlurInternal
==============
*/

void __fastcall CG_View_CalcWeaponFireMotionBlurInternal(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v13; 
  char v23; 
  float fmt; 
  float outBlurDecayExponent; 
  int outBlurDurationMs; 
  float outBlur; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale;
  _RDI = LocalClientGlobals;
  if ( !DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewmodelMotionBlurFireScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+88h+var_28], xmm6
      vmovaps [rsp+88h+var_38], xmm7
      vmovaps [rsp+88h+var_48], xmm8
    }
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, &_RDI->predictedPlayerState);
    v13 = BG_UsingAlternate(&_RDI->predictedPlayerState);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+738h]
      vmovss  dword ptr [rsp+88h+fmt], xmm0
    }
    BG_GetMotionBlurProperties(&_RDI->predictedPlayerState, &_RDI->scopeToggleInfo.fractionInfo, ViewmodelWeapon, v13, fmt, &outBlur, &outBlurDurationMs, &outBlurDecayExponent);
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( outBlurDurationMs <= 0 )
      goto LABEL_13;
    __asm
    {
      vmovss  xmm7, cs:__real@3f800000
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, eax
      vcvtsi2ss xmm0, xmm0, ecx
      vdivss  xmm0, xmm1, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm2, xmm7; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovaps xmm8, xmm0
    }
    if ( v23 )
      goto LABEL_13;
    __asm { vcomiss xmm0, xmm7 }
    if ( !v23 )
    {
LABEL_13:
      __asm { vmovss  dword ptr [rdi+17840h], xmm6 }
    }
    else
    {
      __asm
      {
        vmovss  xmm1, [rsp+88h+arg_8]
        vcomiss xmm1, xmm6
      }
      if ( v23 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3507, ASSERT_TYPE_ASSERT, "(0.0f <= blurDecayExponent)", (const char *)&queryFormat, "0.0f <= blurDecayExponent") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm1, [rsp+88h+arg_8]; Y
        vmovaps xmm0, xmm8; X
      }
      powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vsubss  xmm0, xmm7, xmm0
        vmulss  xmm1, xmm0, [rsp+88h+arg_18]
        vmovss  dword ptr [rdi+17840h], xmm1
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+88h+var_38]
      vmovaps xmm6, [rsp+88h+var_28]
      vmovaps xmm8, [rsp+88h+var_48]
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  dword ptr [rdi+17840h], xmm0
    }
  }
}

/*
==============
CG_View_CalcWeaponInspectDoF
==============
*/
void CG_View_CalcWeaponInspectDoF(cg_t *cgameGlob)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const DObj *viewModelDObj; 
  unsigned __int8 outBoneIndex[8]; 
  vec3_t outOrg; 
  scr_string_t outTagName; 
  TagPair v21; 
  __int64 v22; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  v22 = -2i64;
  _RDI = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6147, ASSERT_TYPE_ASSERT, "(cgameGlob != nullptr)", (const char *)&queryFormat, "cgameGlob != nullptr") )
    __debugbreak();
  _RDI->weaponInspectDofActive = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT|0x80) )
  {
    v2 = DVARBOOL_killswitch_weapon_inspect_enabled;
    if ( !DVARBOOL_killswitch_weapon_inspect_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      v3 = DVARBOOL_killswitch_weapon_inspect_dof_enabled;
      if ( !DVARBOOL_killswitch_weapon_inspect_dof_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_inspect_dof_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled && _RDI->predictedPlayerState.weapState[0].weaponState == 78 && (!_RDI->m_isMLGSpectator || !_RDI->renderingThirdPerson) )
      {
        v4 = DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms;
        if ( !DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_off_time_ms") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( _RDI->predictedPlayerState.weapState[0].weaponTime - v4->current.integer > 0 && _RDI != (cg_t *)-807496i64 )
        {
          viewModelDObj = _RDI->m_weaponHand[0].viewModelDObj;
          if ( viewModelDObj )
          {
            TagPair::TagPair(&v21, scr_const.tag_barrel_attach, scr_const.j_gun);
            outBoneIndex[0] = -2;
            if ( TagPair::GetTagNameAndBoneIndex(&v21, viewModelDObj, &outTagName, outBoneIndex) )
            {
              if ( CG_DObjGetWorldBoneMatrix(&_RDI->viewModelPose, viewModelDObj, outBoneIndex[0], &outTagMat, &outOrigin) )
              {
                RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin]
                  vsubss  xmm3, xmm0, dword ptr [rsp+0B8h+outOrg]
                  vmovss  xmm1, dword ptr [rsp+0B8h+outOrigin+4]
                  vsubss  xmm2, xmm1, dword ptr [rsp+0B8h+outOrg+4]
                  vmovss  xmm0, dword ptr [rsp+0B8h+outOrigin+8]
                  vsubss  xmm4, xmm0, dword ptr [rsp+0B8h+outOrg+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm1, xmm2, xmm2
                  vmovss  dword ptr [rdi+18228h], xmm1
                }
                _RDI->weaponInspectDofActive = 1;
                memset(&outOrg, 0, sizeof(outOrg));
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
CG_View_CalcWeaponViewEyeValues
==============
*/
__int64 CG_View_CalcWeaponViewEyeValues(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  centity_t *v4; 
  const DObj *ClientDObj; 
  const DObj *v7; 
  unsigned int WorldTagPos; 
  vec3_t outPos; 
  __int64 v10; 
  tmat33_t<vec3_t> outTagMat; 

  v10 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3138, ASSERT_TYPE_ASSERT, "(ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY ))", (const char *)&queryFormat, "ps->linkFlags.TestFlag( PLinkFlagsCommon::WEAPONVIEW_ONLY )") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3139, ASSERT_TYPE_ASSERT, "(ps->linkEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->linkEnt != ENTITYNUM_NONE") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.linkEnt);
  v4 = Entity;
  if ( (Entity->flags & 1) != 0 )
  {
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    v7 = ClientDObj;
    if ( ClientDObj )
    {
      WorldTagPos = CG_DObjGetWorldTagPos(&v4->pose, ClientDObj, scr_const.tag_player, &outPos);
      if ( WorldTagPos || (WorldTagPos = CG_DObjGetWorldTagMatrix(&v4->pose, v7, scr_const.tag_origin, &outTagMat, &outPos)) != 0 )
        RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outPos);
      if ( v4->nextState.eType == ET_HELICOPTER )
        CG_View_RemoteEyesShake(LocalClientGlobals, v4);
      memset(&outPos, 0, sizeof(outPos));
      return WorldTagPos;
    }
    else
    {
      Com_PrintWarning(14, "Couldn't get dobj of linked entity (#%i) for client #%i.\n", (unsigned int)LocalClientGlobals->predictedPlayerState.linkEnt, (unsigned int)localClientNum);
      return 0i64;
    }
  }
  else
  {
    Com_PrintWarning(14, "Weaponview linked entity (#%i) is not in local client #%i's snapshot.\n", (unsigned int)LocalClientGlobals->predictedPlayerState.linkEnt, (unsigned int)localClientNum);
    return 0i64;
  }
}

/*
==============
CG_View_CalculateFovDeltaBasedOnVelocity
==============
*/
float CG_View_CalculateFovDeltaBasedOnVelocity(LocalClientNum_t localClientNum, const bool easeOutOnly)
{
  const dvar_t *v14; 
  bool v16; 
  char v17; 
  bool v18; 
  const dvar_t *v22; 
  const dvar_t *v28; 
  unsigned int pm_type; 
  bool v66; 
  bool v67; 
  bool v68; 
  vec3_t forward; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  _RDI = BG_GetSuitDef(_RBX->predictedPlayerState.suitIndex);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1213, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  v14 = DCONST_DVARMPBOOL_fovUseTimeBasedBlends;
  if ( !DCONST_DVARMPBOOL_fovUseTimeBasedBlends && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovUseTimeBasedBlends") )
    __debugbreak();
  __asm { vmovaps [rsp+108h+var_38], xmm6 }
  Dvar_CheckFrontendServerThread(v14);
  if ( !v14->current.enabled )
  {
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+48h]
      vmovss  xmm3, dword ptr [rbx+44h]
      vmovss  xmm2, dword ptr [rbx+4Ch]
      vmovaps [rsp+108h+var_48], xmm7
      vmovaps [rsp+108h+var_58], xmm8
      vmovaps [rsp+108h+var_68], xmm9
      vmovaps [rsp+108h+var_78], xmm10
      vmovss  xmm10, dword ptr [rdi+8]
      vmovaps [rsp+108h+var_88], xmm11
      vmovss  xmm11, dword ptr [rdi+0Ch]
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vmovaps [rsp+108h+var_98], xmm12
      vaddss  xmm12, xmm1, xmm0
      vmulss  xmm1, xmm2, xmm2
      vaddss  xmm0, xmm1, xmm12
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm9, xmm0, xmm0
      vcmpless xmm0, xmm9, cs:__real@80000000
      vblendvps xmm0, xmm9, xmm1, xmm0
      vdivss  xmm1, xmm1, xmm0
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovaps [rsp+108h+var_A8], xmm13
      vmulss  xmm13, xmm0, xmm0
      vmulss  xmm6, xmm1, xmm3
      vmulss  xmm7, xmm1, xmm4
      vmulss  xmm8, xmm1, xmm2
    }
    AngleVectors(&_RBX->predictedPlayerState.viewangles, &forward, NULL, NULL);
    __asm
    {
      vmulss  xmm1, xmm6, dword ptr [rsp+108h+forward]
      vmulss  xmm0, xmm7, dword ptr [rsp+108h+forward+4]
    }
    pm_type = _RBX->predictedPlayerState.pm_type;
    __asm
    {
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rsp+108h+forward+8]
      vmovaps xmm8, [rsp+108h+var_58]
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm7, xmm2, xmm9
      vmovaps xmm9, [rsp+108h+var_68]
      vxorps  xmm6, xmm6, xmm6
    }
    if ( pm_type == 5 && (v66 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RBX->predictedPlayerState.otherFlags, (POtherFlagsMP)33), v67 = 0, v68 = !v66) || (v67 = 0, v68 = !easeOutOnly, easeOutOnly) || (v67 = pm_type < 3, v68 = pm_type == 3) )
    {
      __asm { vxorps  xmm3, xmm3, xmm3 }
      _RBX->lastVelocityBasedFovIncreaseRatioTarget = 0.0;
      __asm { vxorps  xmm4, xmm4, xmm4 }
    }
    else
    {
      __asm
      {
        vucomiss xmm10, xmm6
        vucomiss xmm11, xmm6
        vucomiss xmm6, dword ptr [rdi+14h]
        vmovaps xmm2, xmm11; max
        vmovaps xmm1, xmm10; min
        vmovaps xmm0, xmm7; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm4, dword ptr [rbx+18000h]
        vsubss  xmm2, xmm0, xmm10
        vsubss  xmm1, xmm11, xmm10
        vdivss  xmm3, xmm2, xmm1
        vcomiss xmm3, xmm4
      }
      if ( !v67 && !v68 )
      {
LABEL_35:
        __asm
        {
          vmovss  dword ptr [rbx+18000h], xmm3
          vmovaps xmm4, xmm3
        }
LABEL_36:
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+17FFCh]
          vcomiss xmm4, xmm3
          vmovaps xmm13, [rsp+108h+var_A8]
          vmovaps xmm12, [rsp+108h+var_98]
          vmovaps xmm11, [rsp+108h+var_88]
          vmovaps xmm10, [rsp+108h+var_78]
          vmovaps xmm7, [rsp+108h+var_48]
        }
        if ( v67 || v68 )
        {
          if ( !v67 )
          {
LABEL_41:
            __asm { vmulss  xmm0, xmm3, dword ptr [rdi+14h] }
            goto LABEL_42;
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
            vmulss  xmm1, xmm0, dword ptr [rdi+1Ch]
            vsubss  xmm2, xmm3, xmm1
            vmaxss  xmm3, xmm2, xmm6
          }
        }
        else
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
            vmulss  xmm1, xmm0, dword ptr [rdi+18h]
            vaddss  xmm2, xmm1, xmm3
            vminss  xmm3, xmm2, xmm4
          }
        }
        __asm { vmovss  dword ptr [rbx+17FFCh], xmm3 }
        goto LABEL_41;
      }
    }
    __asm { vcomiss xmm12, xmm13 }
    if ( !v67 && !v68 )
      goto LABEL_36;
    goto LABEL_35;
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  v16 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.pm_flags, ACTIVE, 0x14u);
  v17 = 0;
  v18 = !v16;
  if ( v16 )
  {
    _RDI = DCONST_DVARFLT_fovIncreaseForSprint;
    if ( !DCONST_DVARFLT_fovIncreaseForSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovIncreaseForSprint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  __asm
  {
    vmovss  dword ptr [rbx+18008h], xmm6
    vmovss  xmm0, dword ptr [rbx+18004h]
    vcomiss xmm6, xmm0
  }
  if ( v17 | v18 )
  {
    if ( v17 )
    {
      v28 = DCONST_DVARFLT_fovBlendSpeedOut;
      if ( !DCONST_DVARFLT_fovBlendSpeedOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovBlendSpeedOut") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+18004h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
        vmulss  xmm1, xmm0, cs:__real@3a83126f
        vmulss  xmm3, xmm1, dword ptr [rdi+28h]
        vsubss  xmm0, xmm2, xmm3
        vmaxss  xmm0, xmm0, xmm6
        vmovss  dword ptr [rbx+18004h], xmm0
      }
    }
  }
  else
  {
    v22 = DCONST_DVARFLT_fovBlendSpeedIn;
    if ( !DCONST_DVARFLT_fovBlendSpeedIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovBlendSpeedIn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmulss  xmm2, xmm1, dword ptr [rdi+28h]
      vaddss  xmm3, xmm2, dword ptr [rbx+18004h]
      vminss  xmm0, xmm3, xmm6
      vmovss  dword ptr [rbx+18004h], xmm0
    }
  }
LABEL_42:
  __asm { vmovaps xmm6, [rsp+108h+var_38] }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_CalculateViewJostle
==============
*/
void CG_View_CalculateViewJostle(const cg_t *cgameGlob, const CgViewSystem::JostleConfig *config, const tmat43_t<vec3_t> *linkedTagAxis, const vec3_t *targetAngles, vec3_t *outAngles, ViewJostleState *outJostleState)
{
  CgHandler *Handler; 
  char v24; 
  char v30; 
  const tmat33_t<vec3_t> *v43; 
  int v235; 
  int v237; 
  int v238; 
  int v239; 
  int v240; 
  int v241; 
  int v242; 
  int v243; 
  int v244; 
  int v245; 
  int v246; 
  int v247; 
  int v248; 
  int v249; 
  int v250; 
  int v251; 
  int v252; 
  int v253; 
  int v254; 
  int v255; 
  int v256; 
  int v257; 
  int v258; 
  int v259; 
  int v260; 
  vec3_t axis; 
  vec3_t v1; 
  vec3_t angles; 
  vec3_t v3; 
  tmat33_t<vec3_t> outAxis; 
  WorldUpReferenceFrame v271; 
  char v282; 

  __asm { vmovaps [rsp+1B0h+var_80], xmm10 }
  _RSI = outAngles;
  _R15 = (vec3_t *)targetAngles;
  _RDI = outJostleState;
  _R12 = config;
  *(_QWORD *)axis.v = linkedTagAxis;
  _R13 = cgameGlob;
  if ( !config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5892, ASSERT_TYPE_ASSERT, "(config)", (const char *)&queryFormat, "config") )
    __debugbreak();
  if ( !outJostleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5893, ASSERT_TYPE_ASSERT, "(outJostleState)", (const char *)&queryFormat, "outJostleState") )
    __debugbreak();
  Handler = CgHandler::getHandler(_R13->localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v271, &_R13->predictedPlayerState, Handler, 1);
  __asm
  {
    vmovss  xmm2, dword ptr [r13+65E8h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r13+65E4h]
    vmulss  xmm10, xmm0, cs:__real@3a83126f
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm10, xmm1
    vmovss  [rsp+1B0h+var_174], xmm10
  }
  if ( v30 | v24 )
  {
    *outAngles = *_R15;
  }
  else
  {
    __asm
    {
      vmovaps [rsp+1B0h+var_40], xmm6
      vmovaps [rsp+1B0h+var_50], xmm7
      vmovaps [rsp+1B0h+var_60], xmm8
      vmovaps [rsp+1B0h+var_70], xmm9
      vmovaps [rsp+1B0h+var_90], xmm11
      vmovaps [rsp+1B0h+var_A0], xmm12
      vmovaps [rsp+1B0h+var_B0], xmm13
      vcmpless xmm0, xmm2, xmm1
      vblendvps xmm6, xmm2, xmm10, xmm0
      vucomiss xmm6, xmm1
      vmovaps [rsp+1B0h+var_C0], xmm14
      vmovaps [rsp+1B0h+var_D0], xmm15
      vmovss  [rsp+1B0h+var_180], xmm6
    }
    if ( v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5919, ASSERT_TYPE_ASSERT, "(frametimeInputSec != 0.0f)", (const char *)&queryFormat, "frametimeInputSec != 0.0f", v235) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r12+18h]
      vmovss  xmm7, cs:__real@3c888889
      vdivss  xmm1, xmm0, xmm6
      vmovss  xmm0, dword ptr [r13+1E0h]
      vmovss  dword ptr [rsp+1B0h+v1], xmm0
      vmovss  xmm0, dword ptr [r13+1E8h]
      vmulss  xmm6, xmm1, xmm7
      vmovss  xmm1, dword ptr [r13+1E4h]
      vmovss  dword ptr [rsp+1B0h+v1+8], xmm0
      vmovss  dword ptr [rsp+1B0h+v1+4], xmm1
    }
    AnglesSubtract(&v1, &outJostleState->oldViewanglesLocal, &v3);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+1B0h+v1]
      vmovss  xmm1, dword ptr [rsp+1B0h+v1+4]
      vmulss  xmm8, xmm6, dword ptr [rsp+1B0h+v3]
    }
    v43 = *(const tmat33_t<vec3_t> **)axis.v;
    __asm
    {
      vmulss  xmm6, xmm6, dword ptr [rsp+1B0h+v3+4]
      vmovss  dword ptr [rdi+30h], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+v1+8]
      vmovss  dword ptr [rdi+38h], xmm0
      vmovss  dword ptr [rdi+34h], xmm1
    }
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v271, v43, &outAxis);
    AxisToAngles(&outAxis, &angles);
    AnglesSubtract(&angles, &outJostleState->oldLinkedTagAnglesLocal, &v1);
    if ( outJostleState->isAttachmentCached && outJostleState->isAttachedToCam )
      AnglesSubtract(&v1, &v3, &v1);
    _RAX = *(_QWORD *)axis.v;
    __asm
    {
      vmovss  xmm0, dword ptr [r12+1Ch]
      vdivss  xmm1, xmm0, xmm10
      vmulss  xmm3, xmm1, xmm7
      vmulss  xmm2, xmm3, dword ptr [rsp+1B0h+v1+4]
      vmulss  xmm0, xmm3, dword ptr [rsp+1B0h+v1]
      vmovss  xmm1, dword ptr [rsp+1B0h+angles]
      vaddss  xmm0, xmm8, xmm0
      vmovss  dword ptr [rdi+3Ch], xmm1
      vmovss  xmm1, dword ptr [rsp+1B0h+angles+8]
      vmovss  dword ptr [rdi+44h], xmm1
      vmovss  [rsp+1B0h+var_178], xmm0
      vmulss  xmm0, xmm3, dword ptr [rsp+1B0h+v1+8]
      vmovss  [rsp+1B0h+var_17C], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+angles+4]
      vmovss  dword ptr [rdi+40h], xmm0
      vmovss  xmm3, dword ptr [rax+2Ch]
      vmovss  xmm0, dword ptr [rax+24h]
      vmovss  xmm1, dword ptr [rax+28h]
      vmovss  xmm9, dword ptr [rax+8]
      vmovss  xmm7, dword ptr [rax]
      vmovss  xmm8, dword ptr [rax+4]
      vmovss  [rsp+1B0h+var_170], xmm0
      vsubss  xmm0, xmm0, dword ptr [rdi+48h]
      vaddss  xmm15, xmm6, xmm2
      vmovss  xmm2, cs:__real@3f800000
      vdivss  xmm2, xmm2, xmm10
      vmulss  xmm10, xmm0, xmm2
      vsubss  xmm0, xmm3, dword ptr [rdi+50h]
      vmulss  xmm12, xmm0, xmm2
      vmulss  xmm0, xmm7, dword ptr [rbp+0B0h+var_100.m_axis+18h]
      vmovss  dword ptr [rsp+1B0h+axis], xmm1
      vsubss  xmm1, xmm1, dword ptr [rdi+4Ch]
      vmulss  xmm11, xmm1, xmm2
      vmulss  xmm1, xmm8, dword ptr [rbp+0B0h+var_100.m_axis+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm9, dword ptr [rbp+0B0h+var_100.m_axis+20h]
      vaddss  xmm0, xmm2, xmm1
      vmovss  [rsp+1B0h+var_180], xmm3
      vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm2, xmm3, dword ptr [rbp+0B0h+var_100.m_axis+18h]
      vmulss  xmm0, xmm3, dword ptr [rbp+0B0h+var_100.m_axis+1Ch]
      vmulss  xmm1, xmm3, dword ptr [rbp+0B0h+var_100.m_axis+20h]
      vaddss  xmm6, xmm0, xmm8
      vaddss  xmm7, xmm2, xmm7
      vaddss  xmm5, xmm1, xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm2, xmm6, xmm6
      vaddss  xmm3, xmm2, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm3, xmm1
      vsqrtss xmm4, xmm2, xmm2
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
      vdivss  xmm2, xmm9, xmm0
      vmulss  xmm0, xmm7, xmm2
      vmovss  dword ptr [rsp+1B0h+angles], xmm0
      vmulss  xmm0, xmm5, xmm2
      vmulss  xmm1, xmm6, xmm2
      vmovss  dword ptr [rsp+1B0h+angles+8], xmm0
      vmovss  dword ptr [rsp+1B0h+angles+4], xmm1
    }
    BgSpaceshipPlayer::BuildAxisFromForward(&angles, &v271.m_axis, &outAxis);
    __asm
    {
      vmulss  xmm3, xmm10, dword ptr [rbp+0B0h+outAxis]
      vmulss  xmm2, xmm11, dword ptr [rbp+0B0h+outAxis+4]
      vmulss  xmm1, xmm12, dword ptr [rbp+0B0h+outAxis+8]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm10, dword ptr [rbp+0B0h+outAxis+0Ch]
      vmulss  xmm2, xmm11, dword ptr [rbp+0B0h+outAxis+10h]
      vaddss  xmm14, xmm4, xmm1
      vmulss  xmm1, xmm12, dword ptr [rbp+0B0h+outAxis+14h]
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm3, xmm10, dword ptr [rbp+0B0h+outAxis+18h]
      vmulss  xmm2, xmm11, dword ptr [rbp+0B0h+outAxis+1Ch]
      vaddss  xmm13, xmm4, xmm1
      vmulss  xmm1, xmm12, dword ptr [rbp+0B0h+outAxis+20h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm10, xmm4, xmm1
      vsubss  xmm0, xmm14, dword ptr [rdi+54h]
      vaddss  xmm6, xmm0, dword ptr [rdi+60h]
      vmovss  dword ptr [rdi+60h], xmm6
      vsubss  xmm0, xmm13, dword ptr [rdi+58h]
      vaddss  xmm5, xmm0, dword ptr [rdi+64h]
      vmovss  dword ptr [rdi+64h], xmm5
      vsubss  xmm0, xmm10, dword ptr [rdi+5Ch]
      vaddss  xmm4, xmm0, dword ptr [rdi+68h]
      vmulss  xmm0, xmm5, xmm5
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
      vdivss  xmm1, xmm9, xmm0
      vmulss  xmm7, xmm6, xmm1
      vmulss  xmm8, xmm1, xmm5
      vmulss  xmm9, xmm1, xmm4
      vmovss  dword ptr [rdi+68h], xmm4
      vmovss  xmm2, dword ptr [r12+20h]; max
      vxorps  xmm1, xmm1, xmm1; min
      vmovaps xmm0, xmm3; val
      vxorps  xmm12, xmm12, xmm12
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vmovss  xmm11, [rsp+1B0h+var_174]
      vmulss  xmm5, xmm7, xmm0
      vmovss  dword ptr [rdi+60h], xmm5
      vmovaps xmm6, xmm0
      vmulss  xmm0, xmm8, xmm0
      vmovss  dword ptr [rdi+64h], xmm0
      vmulss  xmm1, xmm9, xmm6
      vmovss  dword ptr [rdi+68h], xmm1
      vmovss  xmm4, dword ptr [r12+20h]
      vdivss  xmm2, xmm2, xmm4
      vmulss  xmm0, xmm2, xmm0
      vmulss  xmm1, xmm0, dword ptr [r12+4]
      vmulss  xmm0, xmm2, dword ptr [rdi+68h]
      vmulss  xmm3, xmm0, dword ptr [r12+8]
      vsubss  xmm15, xmm15, xmm1
      vmulss  xmm1, xmm5, xmm2
      vmulss  xmm2, xmm1, dword ptr [r12]
      vaddss  xmm0, xmm2, [rsp+1B0h+var_178]
      vdivss  xmm1, xmm4, cs:MAX_LINEAR_CONTRIBUTION_DECAY_TIME
      vaddss  xmm5, xmm3, xmm0
      vmulss  xmm2, xmm1, xmm11
      vsubss  xmm0, xmm6, xmm2
      vmaxss  xmm3, xmm0, xmm12
      vmulss  xmm0, xmm7, xmm3
      vmovss  xmm7, [rsp+1B0h+var_17C]
      vmovss  dword ptr [rdi+60h], xmm0
      vmulss  xmm0, xmm9, xmm3
      vmovaps xmm9, [rsp+1B0h+var_70]
      vmovss  dword ptr [rdi+68h], xmm0
      vmovss  xmm0, dword ptr [rsp+1B0h+axis]
      vmulss  xmm1, xmm8, xmm3
      vmovss  dword ptr [rdi+64h], xmm1
      vmovss  xmm1, [rsp+1B0h+var_170]
      vmovss  dword ptr [rdi+4Ch], xmm0
      vmovss  xmm0, [rsp+1B0h+var_180]
      vmovss  dword ptr [rdi+48h], xmm1
      vmovss  dword ptr [rdi+50h], xmm0
      vmovss  [rsp+1B0h+var_180], xmm5
      vmovss  dword ptr [rdi+54h], xmm14
      vmovaps xmm14, [rsp+1B0h+var_C0]
      vmovss  dword ptr [rdi+58h], xmm13
      vmovaps xmm13, [rsp+1B0h+var_B0]
      vmovss  [rsp+1B0h+var_178], xmm5
      vmovss  dword ptr [rdi+5Ch], xmm10
    }
    if ( (v237 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+1B0h+var_180], xmm15 }
    if ( (v238 & 0x7F800000) == 2139095040 )
      goto LABEL_62;
    __asm { vmovss  [rsp+1B0h+var_180], xmm7 }
    if ( (v239 & 0x7F800000) == 2139095040 )
    {
LABEL_62:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6019, ASSERT_TYPE_SANITY, "( !IS_NAN( ( offsetAngles )[0] ) && !IS_NAN( ( offsetAngles )[1] ) && !IS_NAN( ( offsetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( offsetAngles )[0] ) && !IS_NAN( ( offsetAngles )[1] ) && !IS_NAN( ( offsetAngles )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+6Ch]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v240 & 0x7F800000) == 2139095040 )
      goto LABEL_63;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+70h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v241 & 0x7F800000) == 2139095040 )
      goto LABEL_63;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+74h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v242 & 0x7F800000) == 2139095040 )
    {
LABEL_63:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6020, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldOffsetangles )[0] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[1] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldOffsetangles )[0] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[1] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3Ch]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v243 & 0x7F800000) == 2139095040 )
      goto LABEL_64;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+40h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v244 & 0x7F800000) == 2139095040 )
      goto LABEL_64;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+44h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v245 & 0x7F800000) == 2139095040 )
    {
LABEL_64:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6021, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[0] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[1] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[0] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[1] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+48h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v246 & 0x7F800000) == 2139095040 )
      goto LABEL_65;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4Ch]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v247 & 0x7F800000) == 2139095040 )
      goto LABEL_65;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+50h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v248 & 0x7F800000) == 2139095040 )
    {
LABEL_65:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6022, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldPos )[0] ) && !IS_NAN( ( outJostleState->oldPos )[1] ) && !IS_NAN( ( outJostleState->oldPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldPos )[0] ) && !IS_NAN( ( outJostleState->oldPos )[1] ) && !IS_NAN( ( outJostleState->oldPos )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+54h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v249 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+58h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v250 & 0x7F800000) == 2139095040 )
      goto LABEL_66;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+5Ch]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v251 & 0x7F800000) == 2139095040 )
    {
LABEL_66:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6023, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+60h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v252 & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+64h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v253 & 0x7F800000) == 2139095040 )
      goto LABEL_67;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+68h]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v254 & 0x7F800000) == 2139095040 )
    {
LABEL_67:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6024, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->accumulatedLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm2, cs:TIME_SMOOTHING_RATE; rate
      vmovss  xmm1, dword ptr [rdi+6Ch]; cur
      vmovss  xmm0, [rsp+1B0h+var_178]; tgt
      vmovaps xmm3, xmm11; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm2, cs:TIME_SMOOTHING_RATE; rate
      vmovss  xmm1, dword ptr [rdi+70h]; cur
      vmovaps xmm8, xmm0
      vmovaps xmm0, xmm15; tgt
      vmovaps xmm3, xmm11; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovss  xmm2, cs:TIME_SMOOTHING_RATE; rate
      vmovss  xmm1, dword ptr [rdi+74h]; cur
      vmovaps xmm6, xmm0
      vmovaps xmm0, xmm7; tgt
      vmovaps xmm3, xmm11; deltaTime
    }
    *(double *)&_XMM0 = DiffTrackAngle(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
    __asm
    {
      vmovaps xmm15, [rsp+1B0h+var_D0]
      vmovaps xmm11, [rsp+1B0h+var_90]
      vmovss  [rsp+1B0h+var_180], xmm8
      vmovss  dword ptr [rdi+6Ch], xmm8
      vmovss  dword ptr [rdi+70h], xmm6
      vmovss  dword ptr [rdi+74h], xmm0
      vmovaps xmm7, xmm0
    }
    if ( (v255 & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm { vmovss  [rsp+1B0h+var_180], xmm6 }
    if ( (v256 & 0x7F800000) == 2139095040 )
      goto LABEL_68;
    __asm { vmovss  [rsp+1B0h+var_180], xmm0 }
    if ( (v257 & 0x7F800000) == 2139095040 )
    {
LABEL_68:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6035, ASSERT_TYPE_SANITY, "( !IS_NAN( ( smoothedOffsetAngles )[0] ) && !IS_NAN( ( smoothedOffsetAngles )[1] ) && !IS_NAN( ( smoothedOffsetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( smoothedOffsetAngles )[0] ) && !IS_NAN( ( smoothedOffsetAngles )[1] ) && !IS_NAN( ( smoothedOffsetAngles )[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  xmm1, dword ptr [r15+4]
      vmovss  dword ptr [rsp+1B0h+axis], xmm0
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  [rsp+1B0h+var_160], xmm0
      vmovss  dword ptr [rsp+1B0h+axis+4], xmm1
    }
    WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&v271, &axis);
    __asm
    {
      vaddss  xmm0, xmm8, dword ptr [rsp+1B0h+axis]; angle1
      vmovss  xmm2, dword ptr [r12+0Ch]; range
      vmovss  xmm1, dword ptr [rsp+1B0h+axis]; angle2
      vaddss  xmm6, xmm6, dword ptr [rsp+1B0h+axis+4]
      vaddss  xmm7, xmm7, [rsp+1B0h+var_160]
    }
    *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+1B0h+axis+4]; angle2
      vmovss  dword ptr [rsi], xmm0
      vmovss  xmm2, dword ptr [r12+10h]; range
      vmovaps xmm0, xmm6; angle1
    }
    *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, [rsp+1B0h+var_160]; angle2
      vmovss  dword ptr [rsi+4], xmm0
      vmovss  xmm2, dword ptr [r12+14h]; range
      vmovaps xmm0, xmm7; angle1
    }
    *(double *)&_XMM0 = AngleClamp(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2);
    __asm
    {
      vmovaps xmm8, [rsp+1B0h+var_60]
      vmovaps xmm7, [rsp+1B0h+var_50]
      vmovss  dword ptr [rsi+8], xmm0
    }
    if ( _R12->respectBlendOut )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm0, xmm6
      }
      if ( _R13->predictedPlayerState.viewLinkedBlendDuration > 0 )
      {
        __asm
        {
          vxorps  xmm2, xmm2, xmm2
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm2, xmm2, eax
          vcvtsi2ss xmm0, xmm0, ecx
          vdivss  xmm0, xmm2, xmm0; val
          vmovaps xmm2, xmm6; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      }
      __asm { vmovd   xmm1, dword ptr [r13+53A4h] }
      _EAX = 0;
      __asm
      {
        vmovd   xmm2, eax
        vpcmpeqd xmm3, xmm1, xmm2
        vsubss  xmm4, xmm6, xmm0
        vblendvps xmm2, xmm4, xmm0, xmm3; frac
      }
      LerpAngles(&axis, outAngles, *(const float *)&_XMM2, outAngles);
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v271, outAngles);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovaps xmm12, [rsp+1B0h+var_A0]
      vmovaps xmm6, [rsp+1B0h+var_40]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v258 & 0x7F800000) == 2139095040 )
      goto LABEL_69;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v259 & 0x7F800000) == 2139095040 )
      goto LABEL_69;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+1B0h+var_180], xmm0
    }
    if ( (v260 & 0x7F800000) == 2139095040 )
    {
LABEL_69:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6072, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] )") )
        __debugbreak();
    }
  }
  _R11 = &v282;
  __asm { vmovaps xmm10, xmmword ptr [r11-50h] }
}

/*
==============
CG_View_ClientHasAntiJammer
==============
*/
bool CG_View_ClientHasAntiJammer(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x2Cu);
  v3 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    return 0;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
    __debugbreak();
  return ((0x80000000 >> (v3 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v3 >> 5]) != 0;
}

/*
==============
CG_View_DebugDrawAnimTree
==============
*/
void CG_View_DebugDrawAnimTree(const DObj *obj, const centity_t *cent, int cgDumpAnimsEntNum, LocalClientNum_t localClientNum, const vec3_t *rootDrawOrigin, const vec3_t *rootDrawAngles, bool isRootDontDraw)
{
  __int64 i; 
  int v14[4]; 
  vec3_t v15; 
  vec3_t v16; 
  XAnimTreeDebugNode dbgNodes; 

  _RSI = rootDrawOrigin;
  _RBP = rootDrawAngles;
  if ( !s_XAnimDebugVisualDObjInfoInitialized )
  {
    s_XAnimDebugVisualDObjInfo[0].inUse = 0;
    s_XAnimDebugVisualDObjInfo[1].inUse = 0;
    s_XAnimDebugVisualDObjInfo[2].inUse = 0;
    s_XAnimDebugVisualDObjInfo[3].inUse = 0;
    s_XAnimDebugVisualDObjInfo[4].inUse = 0;
    s_XAnimDebugVisualDObjInfo[5].inUse = 0;
    s_XAnimDebugVisualDObjInfo[6].inUse = 0;
    s_XAnimDebugVisualDObjInfo[7].inUse = 0;
    s_XAnimDebugVisualDObjInfo[8].inUse = 0;
    s_XAnimDebugVisualDObjInfo[9].inUse = 0;
    s_XAnimDebugVisualDObjInfo[10].inUse = 0;
    s_XAnimDebugVisualDObjInfo[11].inUse = 0;
    s_XAnimDebugVisualDObjInfo[12].inUse = 0;
    s_XAnimDebugVisualDObjInfo[13].inUse = 0;
    s_XAnimDebugVisualDObjInfo[14].inUse = 0;
    s_XAnimDebugVisualDObjInfo[15].inUse = 0;
    s_XAnimDebugVisualDObjInfo[16].inUse = 0;
    s_XAnimDebugVisualDObjInfo[17].inUse = 0;
    s_XAnimDebugVisualDObjInfo[18].inUse = 0;
    s_XAnimDebugVisualDObjInfo[19].inUse = 0;
    s_XAnimDebugVisualDObjInfo[20].inUse = 0;
    s_XAnimDebugVisualDObjInfo[21].inUse = 0;
    s_XAnimDebugVisualDObjInfo[22].inUse = 0;
    s_XAnimDebugVisualDObjInfo[23].inUse = 0;
    s_XAnimDebugVisualDObjInfo[24].inUse = 0;
    s_XAnimDebugVisualDObjInfo[25].inUse = 0;
    s_XAnimDebugVisualDObjInfo[26].inUse = 0;
    s_XAnimDebugVisualDObjInfo[27].inUse = 0;
    s_XAnimDebugVisualDObjInfo[28].inUse = 0;
    s_XAnimDebugVisualDObjInfo[29].inUse = 0;
    s_XAnimDebugVisualDObjInfo[30].inUse = 0;
    s_XAnimDebugVisualDObjInfo[31].inUse = 0;
    s_XAnimDebugVisualDObjInfoInitialized = 1;
  }
  for ( i = 0i64; i < 32; ++i )
  {
    if ( s_XAnimDebugVisualDObjInfo[i].inUse )
    {
      XAnimClearTreeNoObj(&s_XAnimDebugVisualDObjInfo[i].clonedTree);
      if ( s_XAnimDebugVisualDObjInfo[i].clonedTree.parameterValues )
      {
        if ( !s_XAnimDebugVisualDObjInfo[i].clonedTree.maxParameters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4154, ASSERT_TYPE_ASSERT, "(dobjInfo->clonedTree.maxParameters > 0)", (const char *)&queryFormat, "dobjInfo->clonedTree.maxParameters > 0") )
          __debugbreak();
        MT_Free(s_XAnimDebugVisualDObjInfo[i].clonedTree.parameterValues, 24i64 * s_XAnimDebugVisualDObjInfo[i].clonedTree.maxParameters);
      }
      DObjFree(s_XAnimDebugVisualDObjInfo[i].clonedDObj);
      DObjClearSkel(s_XAnimDebugVisualDObjInfo[i].clonedDObj);
      s_XAnimDebugVisualDObjInfo[i].inUse = 0;
    }
  }
  if ( obj )
  {
    if ( obj->tree )
    {
      XAnimGetDebugVisualAnimWeights(obj->tree, obj->tree->children, &dbgNodes);
      __asm { vmovsd  xmm0, qword ptr [rbp+0] }
      v15.v[2] = rootDrawAngles->v[2];
      v16.v[2] = rootDrawOrigin->v[2];
      v14[0] = 0;
      __asm
      {
        vmovsd  [rsp+18B8h+var_1868], xmm0
        vmovsd  xmm0, qword ptr [rsi]
        vmovsd  [rsp+18B8h+var_1858], xmm0
      }
      CG_DebugDrawAnimDebugNode_r(obj, cent, v14, &dbgNodes, 0, isRootDontDraw, &v16, &v15);
    }
  }
}

/*
==============
CG_View_DisableRadialMotionBlur
==============
*/
void CG_View_DisableRadialMotionBlur(GfxRadialMotionBlur *radialMotionBlur)
{
  if ( !radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3751, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
    __debugbreak();
  radialMotionBlur->enabled = 0;
  *(_QWORD *)&radialMotionBlur->radius = 0i64;
}

/*
==============
CG_View_DrawShellshockBlend
==============
*/
void CG_View_DrawShellshockBlend(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  cg_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  ShockViewTypes type; 
  int v8; 
  int ShellShockBlendTime; 
  int ThermalBlurFactor; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam || LocalClientGlobals->killCamEntityType == KC_NO_ENTITY )
  {
    v3 = CG_GetLocalClientGlobals(localClientNum);
    v4 = v3;
    if ( v3->m_useSellShock )
    {
      if ( v3->cvsData.transitory.thermalVisionActive )
        goto LABEL_9;
      v5 = DCONST_DVARBOOL_cg_drawShellshock;
      if ( !DCONST_DVARBOOL_cg_drawShellshock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawShellshock") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
      {
LABEL_9:
        v6 = DCONST_DVARBOOL_cg_drawShellshock;
        type = v4->shellshock.parms->screenBlend.type;
        if ( !DCONST_DVARBOOL_cg_drawShellshock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawShellshock") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        v8 = 0;
        if ( v6->current.enabled )
        {
          ShellShockBlendTime = CG_GetShellShockBlendTime(localClientNum);
          if ( ShellShockBlendTime > 0 )
          {
            switch ( type )
            {
              case SHELLSHOCK_VIEWTYPE_PHOTO:
                CG_DrawShellShockSavedScreenBlendPhoto(localClientNum);
                return;
              case SHELLSHOCK_VIEWTYPE_FLASHED:
                CG_DrawShellShockSavedScreenBlendFlashed(localClientNum);
                return;
              case SHELLSHOCK_VIEWTYPE_BLURRED:
                v8 = ShellShockBlendTime;
                break;
            }
          }
        }
        else
        {
          ShellShockBlendTime = 0;
        }
        if ( v4->cvsData.transitory.thermalVisionActive && ShellShockBlendTime )
        {
          ThermalBlurFactor = CG_View_GetThermalBlurFactor(localClientNum);
          if ( ThermalBlurFactor > v8 )
            v8 = ThermalBlurFactor;
        }
        CG_DrawShellShockSavedScreenBlendBlurred(localClientNum, v8);
      }
    }
  }
}

/*
==============
CG_View_DumpAnims3D
==============
*/
void CG_View_DumpAnims3D(const LocalClientNum_t localClientNum)
{
  const dvar_t *v3; 
  int integer; 
  const dvar_t *v7; 
  cg_t *LocalClientGlobals; 
  const DObj *viewModelDObj; 
  __int64 v11; 
  bool v34; 
  __int64 v73; 
  vec3_t v74; 
  vec3_t outOrigin; 
  vec3_t out; 
  vec3_t forward; 

  v3 = DVARINT_cg_dumpAnims3D;
  if ( !DVARINT_cg_dumpAnims3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnims3D") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( (unsigned int)(integer + 1) > 0x800 )
  {
    LODWORD(v73) = v3->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4461, ASSERT_TYPE_ASSERT, "( ( cgDumpAnimsEntNum >= -1 && cgDumpAnimsEntNum < ( 2048 ) ) )", "( cgDumpAnimsEntNum ) = %i", v73) )
      __debugbreak();
  }
  if ( integer >= 0 )
  {
    __asm { vmovaps [rsp+0D0h+var_30], xmm6 }
    _R14 = CG_GetEntity(localClientNum, integer);
    if ( integer != localClientNum )
      goto LABEL_18;
    v7 = DVARBOOL_cg_dumpViewmodelAnims;
    if ( !DVARBOOL_cg_dumpViewmodelAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpViewmodelAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      _R13 = LocalClientGlobals;
      viewModelDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
      if ( viewModelDObj )
      {
        if ( (_R14->flags & 1) != 0 )
        {
          v11 = (__int64)LocalClientGlobals->snap->GetPlayerState(LocalClientGlobals->snap, (unsigned int)localClientNum);
          _RAX = (__int64)_R13->nextSnap->GetPlayerState(_R13->nextSnap, (unsigned int)localClientNum);
          __asm
          {
            vmovss  xmm6, dword ptr [r13+65E0h]
            vmovss  xmm0, dword ptr [rax+30h]
            vsubss  xmm1, xmm0, dword ptr [rdi+30h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+30h]
            vmovss  dword ptr [rbp+57h+outOrigin], xmm3
            vmovss  xmm0, dword ptr [rax+34h]
            vsubss  xmm1, xmm0, dword ptr [rdi+34h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+34h]
            vmovss  dword ptr [rbp+57h+outOrigin+4], xmm3
            vmovss  xmm0, dword ptr [rax+38h]
            vsubss  xmm1, xmm0, dword ptr [rdi+38h]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rdi+38h]
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm3
            vmovss  xmm2, dword ptr [r13+65E0h]; frac
          }
          LerpAngles((const vec3_t *)(v11 + 472), (const vec3_t *)(_RAX + 472), *(const float *)&_XMM2, &out);
          __asm
          {
            vmovss  xmm3, dword ptr [r13+65E0h]
            vmovss  xmm0, cs:__real@3f800000
            vsubss  xmm1, xmm0, xmm3
            vmulss  xmm2, xmm1, dword ptr [rdi+1E8h]
            vmulss  xmm0, xmm3, dword ptr [rbx+1E8h]
            vaddss  xmm2, xmm2, xmm0
            vaddss  xmm2, xmm2, dword ptr [rbp+57h+outOrigin+8]
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm2
          }
        }
        else
        {
          CG_GetPoseOrigin(&_R14->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [r13+1E0h]
            vmovss  dword ptr [rbp+57h+out], xmm0
            vmovss  xmm1, dword ptr [r13+1E4h]
            vmovss  dword ptr [rbp+57h+out+4], xmm1
            vmovss  xmm0, dword ptr [r13+1E8h]
            vmovss  xmm1, dword ptr [rbp+57h+outOrigin+8]
            vmovss  dword ptr [rbp+57h+out+8], xmm0
            vaddss  xmm2, xmm1, dword ptr [r13+1F0h]
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm2
          }
        }
        v34 = 0;
LABEL_23:
        __asm { vmovsd  xmm0, qword ptr [rbp+57h+out] }
        forward.v[2] = out.v[2];
        v74.v[2] = outOrigin.v[2];
        __asm
        {
          vmovsd  qword ptr [rbp+57h+forward], xmm0
          vmovsd  xmm0, qword ptr [rbp+57h+outOrigin]
          vmovsd  [rbp+57h+var_90], xmm0
        }
        CG_View_DebugDrawAnimTree(viewModelDObj, _R14, integer, localClientNum, &v74, &forward, v34);
      }
    }
    else
    {
LABEL_18:
      viewModelDObj = Com_GetClientDObj(integer, localClientNum);
      if ( viewModelDObj )
      {
        CG_GetPoseOrigin(&_R14->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [r14+48h]
          vmovss  dword ptr [rbp+57h+out], xmm0
          vmovss  xmm1, dword ptr [r14+4Ch]
          vmovss  dword ptr [rbp+57h+out+4], xmm1
          vmovss  xmm0, dword ptr [r14+50h]
          vmovss  dword ptr [rbp+57h+out+8], xmm0
        }
        if ( integer == localClientNum )
        {
          __asm { vmovaps [rsp+0D0h+var_40], xmm7 }
          AngleVectors(&out, &forward, NULL, NULL);
          __asm
          {
            vmovss  xmm4, dword ptr [rbp+57h+forward]
            vmovss  xmm7, dword ptr [rbp+57h+forward+8]
            vmovss  xmm6, dword ptr [rbp+57h+forward+4]
            vmulss  xmm1, xmm4, xmm4
            vmulss  xmm0, xmm6, xmm6
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm7, xmm7
            vaddss  xmm0, xmm2, xmm1
            vmovss  xmm1, cs:__real@3f800000
            vsqrtss xmm3, xmm0, xmm0
            vcmpless xmm0, xmm3, cs:__real@80000000
            vblendvps xmm0, xmm3, xmm1, xmm0
            vdivss  xmm5, xmm1, xmm0
            vmulss  xmm1, xmm4, xmm5
            vmovss  xmm4, cs:__real@44000000
            vmulss  xmm2, xmm1, xmm4
            vaddss  xmm1, xmm2, dword ptr [rbp+57h+outOrigin]
            vmulss  xmm2, xmm6, xmm5
            vmulss  xmm3, xmm2, xmm4
            vmulss  xmm2, xmm7, xmm5
            vmovaps xmm7, [rsp+0D0h+var_40]
            vmovss  dword ptr [rbp+57h+outOrigin], xmm1
            vaddss  xmm1, xmm3, dword ptr [rbp+57h+outOrigin+4]
            vmulss  xmm0, xmm2, xmm4
            vmovss  dword ptr [rbp+57h+outOrigin+4], xmm1
            vaddss  xmm1, xmm0, dword ptr [rbp+57h+outOrigin+8]
            vaddss  xmm3, xmm1, cs:__real@41a00000
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm3
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+57h+outOrigin+8]
            vaddss  xmm1, xmm0, cs:__real@428c0000
            vmovss  dword ptr [rbp+57h+outOrigin+8], xmm1
          }
        }
        v34 = 1;
        goto LABEL_23;
      }
    }
    __asm { vmovaps xmm6, [rsp+0D0h+var_30] }
  }
}

/*
==============
CG_View_DumpAnims
==============
*/
void CG_View_DumpAnims(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  const DObj *ClientDObj; 
  const char *v7; 
  __int64 v8; 

  v1 = DVARINT_cg_dumpAnims;
  if ( !DVARINT_cg_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)(integer + 1) > 0x800 )
  {
    LODWORD(v8) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4436, ASSERT_TYPE_ASSERT, "( ( cgDumpAnimsEntNum >= -1 && cgDumpAnimsEntNum < ( 2048 ) ) )", "( cgDumpAnimsEntNum ) = %i", v8) )
      __debugbreak();
  }
  if ( integer >= 0 && !LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) )
  {
    if ( integer != localClientNum )
      goto LABEL_15;
    v5 = DVARBOOL_cg_dumpViewmodelAnims;
    if ( !DVARBOOL_cg_dumpViewmodelAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpViewmodelAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      CG_DisplayViewmodelAnim(localClientNum);
    }
    else
    {
LABEL_15:
      ClientDObj = Com_GetClientDObj(integer, localClientNum);
      if ( ClientDObj )
      {
        v7 = j_va("client %d:\n", (unsigned int)localClientNum);
        DObjDisplayAnim(ClientDObj, v7);
      }
    }
  }
}

/*
==============
CG_View_DumpDObj
==============
*/
void CG_View_DumpDObj(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  const DObj *ClientDObj; 
  __int64 v5; 

  v1 = DVARINT_cg_dobjdump;
  if ( !DVARINT_cg_dobjdump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dobjdump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( (unsigned int)(integer + 1) > 0x800 )
  {
    LODWORD(v5) = integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4537, ASSERT_TYPE_ASSERT, "( ( dumpDObj >= -1 && dumpDObj < ( 2048 ) ) )", "( dumpDObj ) = %i", v5) )
      __debugbreak();
  }
  if ( integer >= 0 )
  {
    Dvar_SetInt_Internal(DVARINT_cg_dobjdump, -1);
    ClientDObj = Com_GetClientDObj(integer, localClientNum);
    if ( ClientDObj )
      DObjDumpInfo(ClientDObj);
  }
}

/*
==============
CG_View_FinalizeViewValues
==============
*/
void CG_View_FinalizeViewValues(const LocalClientNum_t localClientNum)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  cg_t *v10; 
  CgWeaponMap *v11; 
  const playerState_s *p_predictedPlayerState; 
  const dvar_t *v13; 
  const dvar_t *v22; 
  vec3_t outViewOrigin; 
  vec3_t outOrg; 
  __int64 v45; 
  GfxScopeHudOutlineInfo v46; 
  char v47; 
  void *retaddr; 

  _RAX = &retaddr;
  v45 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  v5 = localClientNum;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5821, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX->aimAssistViewAngles.v[0] = _RBX->baseGunAngles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178D0h]
    vmovss  dword ptr [rbx+18040h], xmm0
    vmovss  xmm1, dword ptr [rbx+178D4h]
    vmovss  dword ptr [rbx+18044h], xmm1
  }
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  if ( !_RBX->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  _RBX->aimAssistViewOrigin.secureInt32_3_aab += _RBX->aimAssistViewOrigin.secureInt32_3_set_aab;
  _RBX->aimAssistViewOrigin.data[0] = ((((_DWORD)_RBX + 98340) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)_RBX + 98340) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[0]);
  _RBX->aimAssistViewOrigin.data[1] = ((_RBX->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98344)) * ((_RBX->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98344)) + 2)) ^ LODWORD(outOrg.v[1]);
  _RBX->aimAssistViewOrigin.data[2] = ((_RBX->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98348)) * ((_RBX->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98348)) + 2)) ^ LODWORD(outOrg.v[2]);
  CG_VisionSetApplyToRefdef(&_RBX->refdef, &_RBX->cvsData);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = CgWeaponMap::ms_instance[v5];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v10->predictedPlayerState;
  BG_GetHudOutlineInScopeColor(v11, p_predictedPlayerState, &v46.foeColor);
  BG_GetHudOutlineAltInScopeColor(v11, p_predictedPlayerState, &v46.friendColor);
  v46.depthTest = BG_GetHudOutlineDepthTest(v11, p_predictedPlayerState);
  v46.fill = BG_GetHudOutlineFill(v11, p_predictedPlayerState);
  BG_GetHudOutlineFillColor0(v11, p_predictedPlayerState, &v46.fillColor0);
  BG_GetHudOutlineFillColor1(v11, p_predictedPlayerState, &v46.fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v11, p_predictedPlayerState, &v46.occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v11, p_predictedPlayerState, &v46.occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v11, p_predictedPlayerState, &v46.occludedInteriorColor);
  *(double *)&_XMM0 = BG_GetHudOutlineWidth(v11, p_predictedPlayerState);
  __asm { vmovss  [rbp+50h+var_70], xmm0 }
  R_HudOutlineApplyToRefdef(&LocalClientGlobals->refdef, &v46);
  CG_View_CalcFov((const LocalClientNum_t)v5);
  CG_View_UpdateRadiantView((LocalClientNum_t)v5);
  v13 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled )
  {
    _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    XCamValues::XCamValues((XCamValues *)&v46);
    if ( XCamData::IsActive(&_RDI->xCam) && XCamData::GetValues(&_RDI->xCam, (XCamValues *)&v46) )
    {
      RefdefView_SetOrg(&_RDI->refdef.view, (const vec3_t *)&v46);
      _RCX = &_RDI->refdef.view.axis;
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+150h+var_E0+0Ch]
        vmovups ymmword ptr [rcx], ymm0
      }
      _RDI->refdef.view.axis.m[2].v[2] = v46.occludedOutlineColor.v[3];
      AxisToAngles(&_RDI->refdef.view.axis, &_RDI->refdefViewAngles);
      if ( LODWORD(v46.occludedInlineColor.v[0]) )
      {
        if ( LODWORD(v46.occludedInlineColor.v[0]) == 1 )
        {
          __asm { vmovss  xmm1, dword ptr [rbp+50h+var_B0+4]; fov_x }
          CG_View_UpdateFov((const LocalClientNum_t)v5, *(const float *)&_XMM1);
          _RDI->refdef.xcamOverridesSceneDoF = 1;
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+50h+var_B0+4]
            vmovss  dword ptr [rdi+6974h], xmm0
            vmovss  xmm1, dword ptr [rbp+50h+var_B0+0Ch]
            vmovss  dword ptr [rdi+6BCCh], xmm1
            vmovss  xmm0, dword ptr [rbp+50h+var_B0+8]
            vmovss  dword ptr [rdi+6BD0h], xmm0
          }
          _RDI->refdef.dofPhysicalFocusState.cocScale = 1.0;
        }
      }
      else
      {
        __asm { vmovss  xmm1, dword ptr [rbp+50h+var_B0+4]; fov_x }
        CG_View_UpdateFov((const LocalClientNum_t)v5, *(const float *)&_XMM1);
      }
      CG_PlayerState_ClearExtrapolatedPlayerState((const LocalClientNum_t)v5);
    }
  }
  CG_Camera_OnFinalizeViewValues((const LocalClientNum_t)v5, &_RBX->refdef.view);
  if ( _RBX->predictedPlayerState.pm_type == 4 )
  {
    RefdefView_GetOrg(&_RBX->refdef.view, &outViewOrigin);
    CG_ModelPreviewerUpdateView(&outViewOrigin, &_RBX->refdef.view.axis, &_RBX->refdefViewAngles, &_RBX->refdef.view.zNear);
    RefdefView_SetOrg(&_RBX->refdef.view, &outViewOrigin);
    memset(&outViewOrigin, 0, sizeof(outViewOrigin));
  }
  *(_QWORD *)_RBX->refdef.view.visibilityOffset.v = 0i64;
  *(_QWORD *)&_RBX->refdef.view.visibilityOffset.z = 0i64;
  _RBX->refdef.view.visibilityOffsetApplyToRefPoint = 0;
  v22 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  if ( v22->current.enabled )
    CG_ContextMount_CalcVisibilityMode((const LocalClientNum_t)_RBX->localClientNum);
  _RAX = cg_t::GetViewModelTransform(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rax+24h]
    vcvtss2sd xmm6, xmm6, xmm6
    vmovss  xmm7, dword ptr [rax+28h]
    vcvtss2sd xmm7, xmm7, xmm7
    vmovss  xmm8, dword ptr [rax+2Ch]
    vcvtss2sd xmm8, xmm8, xmm8
  }
  RefdefView_GetOrg(&_RBX->refdef.view, &outViewOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+150h+outViewOrigin]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rsp+150h+outViewOrigin+4]
    vcvtss2sd xmm1, xmm1, xmm1
    vmovss  xmm2, dword ptr [rsp+150h+outViewOrigin+8]
    vcvtss2sd xmm2, xmm2, xmm2
    vsubsd  xmm0, xmm6, xmm0
    vmovsd  qword ptr [rbx+4A320h], xmm0
    vsubsd  xmm1, xmm7, xmm1
    vmovsd  qword ptr [rbx+4A328h], xmm1
    vsubsd  xmm0, xmm8, xmm2
    vmovsd  qword ptr [rbx+4A330h], xmm0
  }
  memset(&outViewOrigin, 0, sizeof(outViewOrigin));
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v47;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_View_FxSetTestPosition
==============
*/
void CG_View_FxSetTestPosition(void)
{
  LocalClientNum_t v0; 
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  double v17; 
  vec3_t outOrg; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  if ( CG_IsFullyInitialized((const LocalClientNum_t)v1) )
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _RDX = 84 * v1;
    _RAX = &s_testEffect[0].pos;
    __asm
    {
      vmovss  xmm2, cs:__real@42c80000
      vmulss  xmm0, xmm2, dword ptr [rbx+6944h]
      vaddss  xmm4, xmm0, dword ptr [rsp+58h+outOrg]
      vmovss  dword ptr [rdx+rax], xmm4
      vmulss  xmm0, xmm2, dword ptr [rbx+6948h]
      vaddss  xmm3, xmm0, dword ptr [rsp+58h+outOrg+4]
      vmovss  dword ptr [rdx+rax+4], xmm3
      vmulss  xmm0, xmm2, dword ptr [rbx+694Ch]
      vaddss  xmm2, xmm0, dword ptr [rsp+58h+outOrg+8]
      vmovss  dword ptr [rdx+rax+8], xmm2
      vcvtss2sd xmm1, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm2, xmm4, xmm4
      vmovsd  [rsp+58h+var_38], xmm1
      vmovq   r9, xmm3
      vmovq   r8, xmm2
    }
    Com_Printf(21, "\n\nFX Testing position set to: (%f, %f, %f)\n\n", *(double *)&_XMM2, *(double *)&_XMM3, v17);
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_View_FxTest
==============
*/

void __fastcall CG_View_FxTest(double _XMM0_8)
{
  LocalClientNum_t v1; 
  __int64 v2; 
  __int64 v3; 
  TestEffect *v4; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  char v10; 
  const char *v11; 

  v1 = Cmd_LocalClientNum();
  v2 = v1;
  if ( CG_IsFullyInitialized(v1) )
  {
    if ( Cmd_Argc() < 2 )
      Com_Printf(21, "Must supply filename from base path.  Optional restart time.\n");
    v3 = v2;
    v4 = &s_testEffect[v2];
    v5 = Cmd_Argv(1);
    Core_strcpy_truncate(v4->name, 0x40ui64, v5);
    v6 = "fx/";
    v7 = 3i64;
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v8 = v6[(char *)v4 - "fx/"];
      v9 = v7;
      v10 = *v6++;
      --v7;
      if ( !v9 )
      {
LABEL_10:
        Com_PrintError(1, "Fx path [%s] must not inclue \"fx/\" \n", s_testEffect[v2].name);
        return;
      }
      if ( v8 != v10 )
        break;
      if ( !v8 )
        goto LABEL_10;
    }
    Com_Printf(21, "Spawning Fx %s\n", s_testEffect[v2].name);
    CG_View_PlayTestFx((LocalClientNum_t)v2);
    if ( Cmd_Argc() == 3 )
    {
      v11 = Cmd_Argv(2);
      _XMM0_8 = atof(v11);
      __asm
      {
        vmulsd  xmm1, xmm0, cs:__real@408f400000000000
        vcvttsd2si eax, xmm1
      }
      s_testEffect[v3].respawnTime = _EAX;
    }
    else
    {
      s_testEffect[v3].respawnTime = 0;
    }
  }
}

/*
==============
CG_View_GetClientAspectRatio
==============
*/
float CG_View_GetClientAspectRatio(LocalClientNum_t localClientNum)
{
  _RAX = CG_GetLocalClientStaticGlobals(localClientNum);
  __asm
  {
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmulss  xmm0, xmm0, dword ptr [rax+18h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetCrosshairVerticalOffset
==============
*/
float CG_View_GetCrosshairVerticalOffset(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  __int64 v2; 
  const dvar_t *v4; 

  v2 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1108, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v4 = DVARBOOL_camera_thirdPerson;
  if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, GameModeFlagValues::ms_mpValue, 0x2Du) )
  {
    if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    *(double *)&_XMM0 = BG_GetThirdPersonCrosshairOffset(CgWeaponMap::ms_instance[v2], ps);
  }
  else
  {
    _RBX = DVARFLT_cg_crosshairVerticalOffset;
    if ( !DVARFLT_cg_crosshairVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairVerticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetEffectiveFOVForWeapon
==============
*/
float CG_View_GetEffectiveFOVForWeapon(const LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const Weapon *weapon, const bool isAlternate, const bool updateFovWeights, bool *outRanVelocityBasedFovIncreaseCalculation)
{
  __int64 v17; 
  __int64 v18; 
  __int64 outFovTypeWeights; 
  char v21; 
  char v22; 
  CgWeaponMap *v26; 
  playerState_s *p_predictedPlayerState; 
  const CgHandler *Handler; 
  cg_t *LocalClientGlobals; 
  bool v45; 
  bool v46; 
  char v47; 
  AdsOffsetInterpolationType zoomLerpType; 
  double isAlternatea; 
  BgAdsZoomInfo outZoomInfo; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v17 = localClientNum;
  v18 = fovSpace;
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1422, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  outFovTypeWeights = 0i64;
  if ( updateFovWeights )
  {
    outFovTypeWeights = (__int64)&_R14->fovCalcWeights.fovSpaces[v18];
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1429, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
  }
  if ( outRanVelocityBasedFovIncreaseCalculation )
    *outRanVelocityBasedFovIncreaseCalculation = 0;
  *(float *)&_XMM0 = CG_View_GetFovDvarValue_ForSpace((const LocalClientNum_t)v17, (CG_FovSpace)v18);
  __asm
  {
    vmovss  xmm11, cs:__real@3f800000
    vcomiss xmm0, xmm11
    vmovaps xmm7, xmm0
  }
  if ( v21 )
    goto LABEL_61;
  __asm { vcomiss xmm0, cs:__real@43200000 }
  if ( !(v21 | v22) )
  {
LABEL_61:
    __asm
    {
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  qword ptr [rsp+158h+isAlternate], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1438, ASSERT_TYPE_SANITY, "( ( hipFov >= 1.0f && hipFov <= 160.0f ) )", "( hipFov ) = %g", isAlternatea) )
      __debugbreak();
  }
  if ( !CgWeaponMap::ms_instance[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v26 = CgWeaponMap::ms_instance[v17];
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v17)->predictedPlayerState;
  if ( BG_HasLadderHand(p_predictedPlayerState) && (_DWORD)v18 == 1 )
  {
    *(double *)&_XMM0 = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v17);
    __asm
    {
      vmovaps xmm2, xmm0; sceneFov
      vmovaps xmm1, xmm7; hackFov
    }
    *(double *)&_XMM0 = CG_Ladder_GetDepthHackFoV((const LocalClientNum_t)v17, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovaps xmm7, xmm0 }
  }
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  BG_GetADSZoomInfo(v26, weapon, isAlternate, &_R14->scopeToggleInfo.fractionInfo, &outZoomInfo);
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( (_DWORD)v18 != 1 || CG_View_IsSeparateViewModelFovUsed() )
  {
    if ( BG_IsAimDownSight(weapon, isAlternate) )
    {
      __asm
      {
        vmovaps [rsp+158h+var_58], xmm6
        vmovaps [rsp+158h+var_88], xmm9
        vmovaps [rsp+158h+var_98], xmm10
        vmovaps [rsp+158h+var_B8], xmm12
        vmovaps [rsp+158h+var_C8], xmm13
      }
      if ( outFovTypeWeights )
      {
        *(_DWORD *)outFovTypeWeights = 1065353216;
        *(_DWORD *)(outFovTypeWeights + 16) = 1065353216;
      }
      Handler = CgHandler::getHandler((LocalClientNum_t)v17);
      *(float *)&_XMM0 = CG_View_GetWeightedReloadFov(&outZoomInfo, (const CG_FovSpace)v18, Handler, p_predictedPlayerState, weapon, isAlternate);
      __asm { vminss  xmm13, xmm0, xmm7 }
      *(float *)&_XMM0 = CG_View_ADSZoomFov((const LocalClientNum_t)v17, (const CG_FovSpace)v18, v26, p_predictedPlayerState, weapon, isAlternate, (ClientFovTypeWeights *)outFovTypeWeights);
      __asm { vminss  xmm12, xmm0, xmm7 }
      if ( !_R14->dualViewScope )
      {
        BG_GetMountFOVScale(weapon, isAlternate);
        __asm
        {
          vsubss  xmm1, xmm11, xmm0
          vmulss  xmm2, xmm1, dword ptr [rbp+4C0h]
          vsubss  xmm0, xmm11, xmm2
          vmulss  xmm12, xmm12, xmm0
        }
      }
      if ( BG_ADSReloadEnabled(v26, p_predictedPlayerState, weapon, isAlternate) )
      {
        *(double *)&_XMM0 = BG_WeaponReloadingFraction(v26, p_predictedPlayerState);
        __asm { vmovaps xmm10, xmm0 }
      }
      else
      {
        __asm { vxorps  xmm10, xmm10, xmm10 }
      }
      __asm { vmovss  xmm6, dword ptr [r14+7C64Ch] }
      if ( BG_IsUsingOffhandGestureWeaponADSSupport(v26, p_predictedPlayerState) )
      {
        *(double *)&_XMM0 = BG_GetOffhandAdsFrac(p_predictedPlayerState);
        __asm { vmovaps xmm6, xmm0 }
      }
      __asm { vmovaps xmm2, xmm6; weapPosFrac }
      *(double *)&_XMM0 = CG_GetWeaponZoom(_R14, weapon, *(const float *)&_XMM2, (const CG_FovSpace)v18);
      __asm { vmovaps xmm9, xmm0 }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v17);
      if ( !CgWeaponMap::ms_instance[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      if ( !BG_IsUsingDualFOV(CgWeaponMap::ms_instance[v17], &LocalClientGlobals->predictedPlayerState) || (v45 = BG_SyncedFOVInDualFOV(weapon, isAlternate), v46 = !v45, v45) )
      {
        v47 = 0;
        v46 = 1;
      }
      else
      {
        v47 = 1;
      }
      __asm { vucomiss xmm8, dword ptr [r14+18274h] }
      if ( v46 && v47 )
      {
        _EAX = 0;
        __asm { vmovd   xmm1, eax }
        _EAX = _R14->dualViewScope;
        __asm
        {
          vmovd   xmm0, eax
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm9, xmm9, xmm8, xmm2
        }
      }
      zoomLerpType = outZoomInfo.zoomLerpType;
      __asm { vmovaps xmm0, xmm10; weaponPosFrac }
      if ( (_DWORD)v18 == 1 )
        zoomLerpType = outZoomInfo.depthHackZoomLerpType;
      *(double *)&_XMM0 = BG_CalculateEaseMotionFactor(*(const float *)&_XMM0, zoomLerpType);
      __asm
      {
        vmovaps xmm6, xmm0
        vmovaps xmm0, xmm9; weaponPosFrac
      }
      BG_CalculateEaseMotionFactor(*(const float *)&_XMM0, zoomLerpType);
      __asm
      {
        vmovaps xmm10, [rsp+158h+var_98]
        vsubss  xmm1, xmm11, xmm6
        vmulss  xmm3, xmm1, xmm12
        vmovaps xmm12, [rsp+158h+var_B8]
        vmulss  xmm2, xmm6, xmm13
        vmovaps xmm13, [rsp+158h+var_C8]
        vaddss  xmm3, xmm3, xmm2
        vmulss  xmm4, xmm3, xmm0
        vsubss  xmm0, xmm11, xmm0
        vmulss  xmm1, xmm0, xmm7
        vcomiss xmm9, xmm8
        vmovaps xmm9, [rsp+158h+var_88]
        vaddss  xmm6, xmm4, xmm1
      }
      if ( v21 | v22 )
      {
        CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v17, 0);
        __asm { vaddss  xmm6, xmm6, xmm0 }
        if ( outRanVelocityBasedFovIncreaseCalculation )
          *outRanVelocityBasedFovIncreaseCalculation = 1;
      }
      __asm
      {
        vmovaps xmm0, xmm6
        vmovaps xmm6, [rsp+158h+var_58]
      }
    }
    else
    {
      if ( outFovTypeWeights )
        *(_DWORD *)outFovTypeWeights = 1065353216;
      CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v17, 0);
      __asm { vaddss  xmm0, xmm7, xmm0 }
      if ( outRanVelocityBasedFovIncreaseCalculation )
        *outRanVelocityBasedFovIncreaseCalculation = 1;
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+158h+outZoomInfo.depthHackZoomFov]
      vcomiss xmm0, xmm8
    }
    _RBX = DVARFLT_cg_dualViewScopeFOV;
    if ( !DVARFLT_cg_dualViewScopeFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dualViewScopeFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  }
  _R11 = &v83;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetFovDvarDefaultValue
==============
*/
float CG_View_GetFovDvarDefaultValue(const LocalClientNum_t localClientNum)
{
  _RBX = DVARFLT_cg_fov1;
  if ( localClientNum != LOCAL_CLIENT_1 )
    _RBX = DVARFLT_cg_fov;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+48h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetFovDvarValue
==============
*/

double __fastcall CG_View_GetFovDvarValue(const LocalClientNum_t localClientNum)
{
  return CG_View_GetFovUnscaledDvarValue(localClientNum);
}

/*
==============
CG_View_GetFovDvarValue_ForSpace
==============
*/
double CG_View_GetFovDvarValue_ForSpace(const LocalClientNum_t localClientNum, CG_FovSpace fovSpace)
{
  if ( fovSpace != CG_FovSpace_DepthHack || !CG_View_IsSeparateViewModelFovUsed() )
    return CG_View_GetFovUnscaledDvarValue(localClientNum);
  _RBX = DCONST_DVARFLT_cg_fov_viewmodel;
  if ( !DCONST_DVARFLT_cg_fov_viewmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_viewmodel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(double *)&_XMM0;
}

/*
==============
CG_View_GetFovUnscaledDvarValue
==============
*/
float CG_View_GetFovUnscaledDvarValue(const LocalClientNum_t localClientNum)
{
  const char *v2; 

  if ( localClientNum == LOCAL_CLIENT_1 )
  {
    _RBX = DVARFLT_cg_fov1;
    if ( DVARFLT_cg_fov1 )
      goto LABEL_8;
    v2 = "cg_fov1";
  }
  else
  {
    _RBX = DVARFLT_cg_fov;
    if ( DVARFLT_cg_fov )
      goto LABEL_8;
    v2 = "cg_fov";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v2) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetFovUserScale
==============
*/
float CG_View_GetFovUserScale()
{
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetScopeHudOutlineSettings
==============
*/
void CG_View_GetScopeHudOutlineSettings(const LocalClientNum_t localClientNum, GfxScopeHudOutlineInfo *outlineInfo)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v6; 
  const playerState_s *p_predictedPlayerState; 

  v3 = localClientNum;
  _RDI = outlineInfo;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v3];
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5714, ASSERT_TYPE_ASSERT, "(outlineInfo)", (const char *)&queryFormat, "outlineInfo") )
    __debugbreak();
  BG_GetHudOutlineInScopeColor(v6, p_predictedPlayerState, &_RDI->foeColor);
  BG_GetHudOutlineAltInScopeColor(v6, p_predictedPlayerState, &_RDI->friendColor);
  _RDI->depthTest = BG_GetHudOutlineDepthTest(v6, p_predictedPlayerState);
  _RDI->fill = BG_GetHudOutlineFill(v6, p_predictedPlayerState);
  BG_GetHudOutlineFillColor0(v6, p_predictedPlayerState, &_RDI->fillColor0);
  BG_GetHudOutlineFillColor1(v6, p_predictedPlayerState, &_RDI->fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v6, p_predictedPlayerState, &_RDI->occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v6, p_predictedPlayerState, &_RDI->occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v6, p_predictedPlayerState, &_RDI->occludedInteriorColor);
  *(double *)&_XMM0 = BG_GetHudOutlineWidth(v6, p_predictedPlayerState);
  __asm { vmovss  dword ptr [rdi+70h], xmm0 }
}

/*
==============
CG_View_GetThermalBlurFactor
==============
*/
__int64 CG_View_GetThermalBlurFactor(LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  cg_t *v5; 
  playerState_s *p_predictedPlayerState; 
  cg_t *v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( CG_View_ThermalScoped(localClientNum, LocalClientGlobals) )
  {
    v3 = DVARINT_thermalBlurFactorScope;
    if ( !DVARINT_thermalBlurFactorScope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalBlurFactorScope") )
      __debugbreak();
LABEL_5:
    Dvar_CheckFrontendServerThread(v3);
    return v3->current.unsignedInt;
  }
  v5 = CG_GetLocalClientGlobals(localClientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4612, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v5->predictedPlayerState;
  v7 = CG_GetLocalClientGlobals(localClientNum);
  if ( (!v7->inKillCam || v7->killCamEntityType == KC_NO_ENTITY) && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 3u) )
  {
    if ( !CG_GetLocalClientGlobals(localClientNum)->inKillCam )
      goto LABEL_17;
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2481, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x28u) )
    {
LABEL_17:
      v3 = DVARINT_thermalBlurFactorNoScope;
      if ( !DVARINT_thermalBlurFactorNoScope && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thermalBlurFactorNoScope") )
        __debugbreak();
      goto LABEL_5;
    }
  }
  return 0i64;
}

/*
==============
CG_View_GetWeightedReloadFov
==============
*/
float CG_View_GetWeightedReloadFov(const BgAdsZoomInfo *adsZoomInfo, const CG_FovSpace fovSpace, const CgHandler *handler, const playerState_s *ps, const Weapon *weapon, const bool isAlternate)
{
  const dvar_t *v13; 
  const dvar_t *v14; 
  int serverTimeInterpolated; 
  const BgWeaponMap *v20; 
  double ADSZoomLevelFraction; 
  const dvar_t *v23; 
  float outZoomLevelWeights[4]; 

  _RBP = adsZoomInfo;
  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1373, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( fovSpace == CG_FovSpace_Scene )
  {
    v13 = DVARBOOL_com_useAdsFovUserScale;
    if ( !DVARBOOL_com_useAdsFovUserScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_useAdsFovUserScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
  }
  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  if ( ps && BG_PlayerUsesNVGHalfADS(ps, handler) )
  {
    *(double *)&_XMM0 = BG_GetADSReloadNVGFOV(weapon, isAlternate, fovSpace == CG_FovSpace_DepthHack);
    v14 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
    __asm { vmovaps xmm6, xmm0 }
    if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    __asm { vmovaps xmm0, xmm6 }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0B8h+var_58], xmm7
      vxorps  xmm6, xmm6, xmm6
    }
    if ( fovSpace == CG_FovSpace_DepthHack )
    {
      __asm
      {
        vmovss  xmm7, dword ptr [rbp+8]
        vcomiss xmm7, xmm6
      }
    }
    serverTimeInterpolated = ps->serverTimeInterpolated;
    v20 = handler->GetWeaponMap(handler);
    ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(v20, ps, weapon, isAlternate, serverTimeInterpolated);
    BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, outZoomLevelWeights);
    _RBX = 0i64;
    do
    {
      v23 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
      if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      __asm
      {
        vmovss  xmm1, [rsp+rbx*4+0B8h+outZoomLevelWeights]
        vmulss  xmm2, xmm1, dword ptr [rbp+rbx*4+2Ch]
      }
      ++_RBX;
      __asm { vaddss  xmm6, xmm2, xmm6 }
    }
    while ( _RBX < 3 );
    __asm
    {
      vmovaps xmm0, xmm6
      vmovaps xmm7, [rsp+0B8h+var_58]
    }
  }
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_GetZNear
==============
*/
double CG_View_GetZNear(const LocalClientNum_t localClientNum)
{
  bool IsRemoteControlCam; 
  LocalClientNum_t v5; 
  bool IsPlayerControlCam; 
  unsigned int v8; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3434, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  IsRemoteControlCam = CG_VehicleCam_IsRemoteControlCam(localClientNum);
  v5 = localClientNum;
  if ( IsRemoteControlCam )
    goto LABEL_8;
  IsPlayerControlCam = CG_VehicleCam_IsPlayerControlCam(localClientNum);
  v5 = localClientNum;
  if ( IsPlayerControlCam )
    goto LABEL_8;
  if ( !CG_VehicleCam_IsRemoteDriveCam(localClientNum) && _RDI->predictedPlayerState.pm_type != 3 )
  {
    v8 = _RDI->predictedPlayerState.linkFlags.m_flags[0];
    if ( (v8 & 8) != 0 )
      goto LABEL_14;
    if ( (v8 & 0x10) == 0 )
    {
      if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RDI->predictedPlayerState.otherFlags, ACTIVE, 1u) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcomiss xmm0, dword ptr [rdi+4C8h]
        }
        goto LABEL_7;
      }
LABEL_14:
      __asm { vmovss  xmm0, cs:__real@42c80000 }
      return *(double *)&_XMM0;
    }
  }
LABEL_7:
  v5 = localClientNum;
LABEL_8:
  *(double *)&_XMM0 = CG_View_GetZNearDvar(v5);
  return *(double *)&_XMM0;
}

/*
==============
CG_View_GetZNearDvar
==============
*/
float CG_View_GetZNearDvar(const LocalClientNum_t localClientNum)
{
  char v10; 
  char v16; 
  cg_t *LocalClientGlobals; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_OFFHAND_END) )
    goto LABEL_7;
  _RBX = DVARFLT_sv_znear;
  if ( !DVARFLT_sv_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm6, dword ptr [rbx+28h]
    vucomiss xmm6, xmm7
  }
  if ( v10 )
  {
LABEL_7:
    _RBX = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp;
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vucomiss xmm7, dword ptr [rbx+28h] }
    if ( !v10 )
    {
      __asm { vmovaps [rsp+88h+var_48], xmm8 }
      _RAX = CG_GetLocalClientGlobals(localClientNum);
      __asm { vmovss  xmm0, dword ptr [rax+6978h]; X }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      _RBX = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp;
      __asm { vmulss  xmm8, xmm0, cs:__real@42e52ee0 }
      if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClamp") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vcomiss xmm8, dword ptr [rbx+28h]
        vmovaps xmm8, [rsp+88h+var_48]
      }
      if ( !(v16 | v10) )
      {
        _RBX = DCONST_DVARFLT_cg_viewZNearClampValueForHighFov;
        if ( !DCONST_DVARFLT_cg_viewZNearClampValueForHighFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZNearClampValueForHighFov") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RBX);
        __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      }
    }
    __asm { vucomiss xmm6, xmm7 }
    if ( !v10 )
      goto LABEL_33;
    _RBX = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter;
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClampForSmallCharacter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vucomiss xmm7, dword ptr [rbx+28h] }
    if ( v10 )
      goto LABEL_33;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3418, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !BG_Suit_IsSmallBoundsRadius(&LocalClientGlobals->predictedPlayerState) )
      goto LABEL_33;
    _RAX = CG_GetLocalClientGlobals(localClientNum);
    __asm { vmovss  xmm0, dword ptr [rax+6978h]; X }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    _RBX = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter;
    __asm { vmulss  xmm7, xmm0, cs:__real@42e52ee0 }
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClampForSmallCharacter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm7, dword ptr [rbx+28h] }
    if ( v16 | v10 )
LABEL_33:
      __asm { vmovaps xmm0, xmm6 }
    else
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZNearClampValueForHighFov, "cg_viewZNearClampValueForHighFov");
  }
  else
  {
    __asm { vmovaps xmm0, xmm6 }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_InitXCamView
==============
*/
void CG_View_InitXCamView(cg_t *cgameGlob)
{
  if ( cgameGlob )
  {
    cgameGlob->refdef.xcamOverridesSceneDoF = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3035, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x69CD] = 0;
  }
}

/*
==============
CG_View_IsEMPJammed
==============
*/
bool CG_View_IsEMPJammed(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_IsEMPJammed(&LocalClientGlobals->predictedPlayerState) != 0;
}

/*
==============
CG_View_IsKillCamDefaultView
==============
*/
bool CG_View_IsKillCamDefaultView(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int killCamEntityType; 
  int v3; 
  bool result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  result = 0;
  if ( LocalClientGlobals->inKillCam )
  {
    killCamEntityType = LocalClientGlobals->killCamEntityType;
    if ( killCamEntityType <= 0xA )
    {
      v3 = 1178;
      if ( _bittest(&v3, killCamEntityType) )
        return 1;
    }
  }
  return result;
}

/*
==============
CG_View_IsKillCamEntityView
==============
*/
bool CG_View_IsKillCamEntityView(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return LocalClientGlobals->inKillCam && LocalClientGlobals->killCamEntityType != KC_NO_ENTITY;
}

/*
==============
CG_View_IsKillCamView
==============
*/
bool CG_View_IsKillCamView(const LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->inKillCam != 0;
}

/*
==============
CG_View_IsOutOfBody
==============
*/
bool CG_View_IsOutOfBody(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 && LocalClientGlobals->predictedPlayerState.linkEnt != 2047 )
    return 1;
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) )
    return 1;
  result = BG_IsPlayerOnRemoteTurret(&LocalClientGlobals->predictedPlayerState);
  if ( result )
    return 1;
  return result;
}

/*
==============
CG_View_IsSeparateViewModelFovUsed
==============
*/
bool CG_View_IsSeparateViewModelFovUsed()
{
  char v2; 
  char v3; 

  _RBX = DCONST_DVARFLT_cg_fov_viewmodel;
  if ( !DCONST_DVARFLT_cg_fov_viewmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_viewmodel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  return v2 | v3;
}

/*
==============
CG_View_IsThermalVisionOn
==============
*/
bool CG_View_IsThermalVisionOn(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  cg_t *v4; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4612, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v4 = CG_GetLocalClientGlobals(localClientNum);
  if ( v4->inKillCam && v4->killCamEntityType || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 3u) )
    return 0;
  if ( !CG_GetLocalClientGlobals(localClientNum)->inKillCam )
    return 1;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2481, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  return !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x28u);
}

/*
==============
CG_View_IsThermalVisionShadowOn
==============
*/
bool CG_View_IsThermalVisionShadowOn(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4634, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  return !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0xCu);
}

/*
==============
CG_View_IsUAVJammed
==============
*/
bool CG_View_IsUAVJammed(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_IsUAVJammed(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_View_IsUsingDualFOV
==============
*/
bool CG_View_IsUsingDualFOV(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  bool v3; 
  const BgWeaponMap **v4; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CgWeaponMap::ms_instance[v1] == NULL;
  v4 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v1];
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return BG_IsUsingDualFOV(*v4, &LocalClientGlobals->predictedPlayerState);
}

/*
==============
CG_View_OffsetCrosshair
==============
*/
void CG_View_OffsetCrosshair(const LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v6; 

  v3 = localClientNum;
  _RSI = inOutViewAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 883, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->baseGunAngles.v[0] = _RSI->v[0];
  LocalClientGlobals->baseGunAngles.v[1] = _RSI->v[1];
  LocalClientGlobals->baseGunAngles.v[2] = _RSI->v[2];
  if ( (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) > 4 && !LocalClientGlobals->renderingThirdPerson && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) )
  {
    v6 = DVARBOOL_camera_thirdPerson;
    if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x2Du) )
    {
      if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      *(double *)&_XMM0 = BG_GetThirdPersonCrosshairOffset(CgWeaponMap::ms_instance[v3], &LocalClientGlobals->predictedPlayerState);
    }
    else
    {
      _RDI = DVARFLT_cg_crosshairVerticalOffset;
      if ( !DVARFLT_cg_crosshairVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairVerticalOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    }
    __asm { vmulss  xmm0, xmm0, dword ptr [rbx+6934h]; X }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vaddss  xmm2, xmm1, dword ptr [rsi]
      vmovss  dword ptr [rsi], xmm2
    }
  }
}

/*
==============
CG_View_OffsetFirstPersonView
==============
*/
void CG_View_OffsetFirstPersonView(const LocalClientNum_t localClientNum, const bool ranPrediction, vec3_t *inOutViewAngles, vec3_t *inOutViewOrigin)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  unsigned int pm_type; 
  int v18; 
  CgWeaponMap *Instance; 
  const Weapon *Weapon; 
  int time; 
  BgHandler *v43; 
  bool Bool_Internal_DebugName; 
  bool v51; 
  char v55; 
  SecureVec3 outData; 
  BgHandler *handler; 
  __int64 v63; 
  WorldUpReferenceFrame v64; 
  vec3_t outUp; 
  char v66; 
  void *retaddr; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _RBX = inOutViewAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBP = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsTurretActiveFlags(&p_predictedPlayerState->eFlags) )
    {
      pm_type = p_predictedPlayerState->pm_type;
      if ( pm_type > 8 || (v18 = 332, !_bittest(&v18, pm_type)) )
      {
        if ( pm_type == 7 )
        {
          _RBX->v[2] = 40.0;
          _RBX->v[0] = -15.0;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rsi+25Ch]
            vmovss  dword ptr [rbx+4], xmm0
          }
        }
        else
        {
          handler = CgHandler::getHandler(localClientNum);
          Instance = CgWeaponMap::GetInstance(localClientNum);
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v64, p_predictedPlayerState, handler, 1);
          WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&v64, _RBX);
          __asm
          {
            vmovss  xmm6, dword ptr [rbp+61C0h]
            vmovss  xmm7, dword ptr [rbp+61C4h]
            vmovss  xmm8, dword ptr [rbp+61C8h]
          }
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END) )
          {
            secure_uint32_3_t::secureInt32_3_Get(&_RBP->kickAngles, &outData);
            __asm
            {
              vaddss  xmm0, xmm6, dword ptr [rsp+0F8h+outData.___u0]
              vaddss  xmm1, xmm7, dword ptr [rsp+0F8h+outData.___u0+4]
              vaddss  xmm2, xmm8, dword ptr [rsp+0F8h+outData.___u0+8]
              vaddss  xmm6, xmm0, dword ptr [rbp+49DD4h]
              vaddss  xmm7, xmm1, dword ptr [rbp+49DD8h]
              vaddss  xmm8, xmm2, dword ptr [rbp+49DDCh]
            }
            memset(&outData, 0, sizeof(outData));
          }
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rbx]
            vmovss  dword ptr [rbx], xmm0
            vaddss  xmm1, xmm7, dword ptr [rbx+4]
            vmovss  dword ptr [rbx+4], xmm1
            vaddss  xmm0, xmm8, dword ptr [rbx+8]
            vmovss  dword ptr [rbx+8], xmm0
          }
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          Weapon = BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weapCommon.weaponHandle);
          if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END) && Weapon->weaponIdx )
          {
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_view_pitch_up, "player_view_pitch_up");
            __asm { vmovaps xmm6, xmm0 }
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_view_pitch_down, "player_view_pitch_down");
            __asm
            {
              vmovaps xmm8, xmm0
              vmovss  xmm1, dword ptr [rbx]
              vmulss  xmm7, xmm1, cs:__real@3b360b61
              vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000; min
              vaddss  xmm4, xmm7, cs:__real@3f000000
              vxorps  xmm3, xmm3, xmm3
              vroundss xmm5, xmm3, xmm4, 1
              vsubss  xmm2, xmm7, xmm5
              vmulss  xmm0, xmm2, cs:__real@43b40000; val
              vmovaps xmm2, xmm8; max
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovss  dword ptr [rbx], xmm0 }
          }
          CG_ContextMount_UpdateViewAngles(p_predictedPlayerState, _RBX);
          WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v64, _RBX);
          CG_AddGroundTiltToAngles(localClientNum, _RBX, _RBP);
          if ( ranPrediction )
            time = _RBP->time;
          else
            time = p_predictedPlayerState->serverTimeInterpolated;
          v43 = handler;
          BG_ApplyViewBobAndScriptOffsets(p_predictedPlayerState, time, (const int (*)[2])p_predictedPlayerState->packedBobCycle, handler, inOutViewOrigin);
          __asm
          {
            vxorps  xmm6, xmm6, xmm6
            vcvtsi2ss xmm6, xmm6, eax
          }
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_cg_viewmotion_spring_enable, "cg_viewmotion_spring_enable");
          __asm { vmovss  xmm3, cs:__real@3f800000 }
          if ( Bool_Internal_DebugName )
            __asm { vmovss  xmm0, dword ptr [rbp+5A498h] }
          else
            __asm { vmovaps xmm0, xmm3 }
          __asm
          {
            vmulss  xmm2, xmm0, dword ptr [rbp+6600h]
            vxorps  xmm0, xmm0, xmm0
            vcomiss xmm6, xmm0
          }
          if ( Bool_Internal_DebugName )
          {
            __asm
            {
              vmovss  xmm0, cs:__real@43160000
              vcomiss xmm6, xmm0
              vcomiss xmm6, cs:__real@43e10000
            }
          }
          CG_GameInterface_View_OffsetFirstPersonView(localClientNum, _RBX, inOutViewOrigin);
          WorldUpReferenceFrame::GetUpVector(&v64, &outUp);
          v51 = BG_UsingAlternate(p_predictedPlayerState);
          BG_ContextMount_GetEyePoint(v43, &p_predictedPlayerState->mountState, &outUp, Weapon, v51, inOutViewOrigin);
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v64, inOutViewOrigin);
          __asm { vmovaps xmm6, xmm0 }
          *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v64, &p_predictedPlayerState->origin);
          __asm
          {
            vmovss  xmm7, cs:__real@41000000
            vaddss  xmm1, xmm0, xmm7
            vcomiss xmm6, xmm1
          }
          if ( v55 )
          {
            *(double *)&_XMM0 = WorldUpReferenceFrame::GetUpContribution(&v64, &p_predictedPlayerState->origin);
            __asm { vaddss  xmm1, xmm0, xmm7; height }
            WorldUpReferenceFrame::SetUpContribution(&v64, *(float *)&_XMM1, inOutViewOrigin);
          }
        }
      }
    }
  }
  _R11 = &v66;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_View_PlayTestFx
==============
*/

void __fastcall CG_View_PlayTestFx(LocalClientNum_t localClientNum, double _XMM1_8)
{
  TestEffect *v3; 
  int time; 
  FXRegisteredDef outDef; 
  tmat33_t<vec3_t> axis; 

  outDef.m_particleSystemDef = NULL;
  v3 = &s_testEffect[localClientNum];
  FX_LoadEffect(v3->name, &outDef);
  __asm
  {
    vmovups ymm0, cs:__ymm@3f8000000000000000000000000000003f8000003f8000000000000000000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+78h+var_40+20h], xmm1
    vmovups ymmword ptr [rsp+78h+var_40], ymm0
  }
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  FX_PlayOrientedEffect(localClientNum, &outDef, time, &v3->pos, &axis);
  v3->time = time;
}

/*
==============
CG_View_PrintPlayerViewState
==============
*/
void CG_View_PrintPlayerViewState(const LocalClientNum_t localClientNum, const PlayerViewState *viewState)
{
  const dvar_t *v12; 
  cg_t *LocalClientGlobals; 
  unsigned int v50; 
  WeaponIdleMotionCache *p_idleMotionCache; 
  cg_t *v52; 
  unsigned int v67; 
  __int64 v68; 
  __int64 weaponIdx_low; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  int v75; 
  unsigned __int8 *stickerIndices; 
  __int64 v77; 
  unsigned __int64 v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  unsigned int v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  unsigned int v90; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  unsigned int v94; 
  unsigned int v95; 
  unsigned int v96; 
  unsigned int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  unsigned int v102; 
  unsigned __int64 v103; 
  unsigned int v104; 
  unsigned __int64 v105; 
  unsigned int v106; 
  unsigned int v107; 
  int commandTime; 
  int v109; 
  int v113; 
  char *fmt; 
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
  double v146; 
  double v147; 
  double v148; 
  double v149; 
  double v150; 
  double v151; 
  double v152; 
  double v153; 
  double v154; 
  double v155; 
  double v156; 
  double v157; 
  double v158; 
  double v159; 
  double v160; 
  double v161; 

  v12 = DVARINT_bg_shootingAnglesLog;
  _RBX = viewState;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.integer == 2 )
  {
    __asm
    {
      vmovaps [rsp+208h+var_28], xmm6
      vmovaps [rsp+208h+var_38], xmm7
      vmovaps [rsp+208h+var_48], xmm8
      vmovaps [rsp+208h+var_58], xmm9
      vmovaps [rsp+208h+var_68], xmm10
      vmovaps [rsp+208h+var_78], xmm11
      vmovaps [rsp+208h+var_88], xmm12
      vmovaps [rsp+208h+var_98], xmm13
      vmovaps [rsp+208h+var_A8], xmm14
      vmovaps [rsp+208h+var_B8], xmm15
    }
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+718h]
      vmovss  xmm2, dword ptr [rbx+750h]
      vmovss  xmm3, dword ptr [rbx+74Ch]
      vmovss  xmm4, dword ptr [rbx+748h]
      vmovss  xmm5, dword ptr [rbx+744h]
      vmovss  xmm6, dword ptr [rbx+740h]
      vmovss  xmm7, dword ptr [rbx+73Ch]
      vmovss  xmm8, dword ptr [rbx+738h]
      vmovss  xmm9, dword ptr [rbx+734h]
      vmovss  xmm10, dword ptr [rbx+730h]
      vmovss  xmm11, dword ptr [rbx+72Ch]
      vmovss  xmm12, dword ptr [rbx+728h]
      vmovss  xmm13, dword ptr [rbx+724h]
      vmovss  xmm14, dword ptr [rbx+720h]
      vmovss  xmm15, dword ptr [rbx+71Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+arg_10], xmm0
      vmovss  xmm0, dword ptr [rbx+714h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+arg_18], xmm0
      vmovss  xmm0, dword ptr [rbx+710h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_F8], xmm0
      vmovss  xmm0, dword ptr [rbx+70Ch]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_F0], xmm0
      vmovss  xmm0, dword ptr [rbx+6FCh]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_E8], xmm0
      vmovss  xmm0, dword ptr [rbx+6F8h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_E0], xmm0
      vmovss  xmm0, dword ptr [rbx+6F4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_D8], xmm0
      vmovss  xmm0, dword ptr [rbx+6D8h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_D0], xmm0
      vmovss  xmm0, dword ptr [rbx+6D4h]
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_C8], xmm0
      vmovss  xmm0, dword ptr [rbx+6D0h]
      vcvtss2sd xmm0, xmm0, xmm0
    }
    v50 = -1;
    p_idleMotionCache = &_RBX->weapMoveState.idleMotionCache;
    __asm { vmovsd  [rsp+208h+var_C0], xmm0 }
    v52 = LocalClientGlobals;
    __asm
    {
      vcvtss2sd xmm2, xmm2, xmm2
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm4, xmm4, xmm4
      vcvtss2sd xmm5, xmm5, xmm5
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm9, xmm9, xmm9
      vcvtss2sd xmm10, xmm10, xmm10
      vcvtss2sd xmm11, xmm11, xmm11
      vcvtss2sd xmm12, xmm12, xmm12
      vcvtss2sd xmm13, xmm13, xmm13
      vcvtss2sd xmm14, xmm14, xmm14
      vcvtss2sd xmm15, xmm15, xmm15
    }
    v67 = -1;
    v68 = 278i64;
    do
    {
      weaponIdx_low = LOBYTE(p_idleMotionCache->weapon.weaponIdx);
      p_idleMotionCache = (WeaponIdleMotionCache *)((char *)p_idleMotionCache + 6);
      v70 = (v67 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v67];
      v71 = (v70 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvT.y) ^ (unsigned __int64)(unsigned __int8)v70];
      v72 = (v71 >> 8) ^ g_crc32Table[LOBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v71];
      v73 = (v72 >> 8) ^ g_crc32Table[BYTE1(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v72];
      v74 = (v73 >> 8) ^ g_crc32Table[BYTE2(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v73];
      v67 = (v74 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v74];
      --v68;
    }
    while ( v68 );
    v75 = ~v67;
    stickerIndices = (unsigned __int8 *)_RBX->weapMoveState.weapon.stickerIndices;
    v77 = 2i64;
    do
    {
      v78 = (unsigned __int8)v50 ^ (unsigned __int64)*(stickerIndices - 2);
      v79 = (((v50 >> 8) ^ g_crc32Table[v78]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v50) ^ g_crc32Table[v78]) ^ (unsigned __int64)*(stickerIndices - 1)];
      v80 = (v79 >> 8) ^ g_crc32Table[*stickerIndices ^ (unsigned __int64)(unsigned __int8)v79];
      v81 = (v80 >> 8) ^ g_crc32Table[(unsigned __int8)v80 ^ (unsigned __int64)stickerIndices[1]];
      v82 = (v81 >> 8) ^ g_crc32Table[(unsigned __int8)v81 ^ (unsigned __int64)stickerIndices[2]];
      v83 = (v82 >> 8) ^ g_crc32Table[(unsigned __int8)v82 ^ (unsigned __int64)stickerIndices[3]];
      v84 = (v83 >> 8) ^ g_crc32Table[(unsigned __int8)v83 ^ (unsigned __int64)stickerIndices[4]];
      v85 = (v84 >> 8) ^ g_crc32Table[(unsigned __int8)v84 ^ (unsigned __int64)stickerIndices[5]];
      v86 = (v85 >> 8) ^ g_crc32Table[(unsigned __int8)v85 ^ (unsigned __int64)stickerIndices[6]];
      v87 = (v86 >> 8) ^ g_crc32Table[(unsigned __int8)v86 ^ (unsigned __int64)stickerIndices[7]];
      v88 = (v87 >> 8) ^ g_crc32Table[(unsigned __int8)v87 ^ (unsigned __int64)stickerIndices[8]];
      v89 = (v88 >> 8) ^ g_crc32Table[(unsigned __int8)v88 ^ (unsigned __int64)stickerIndices[9]];
      v90 = g_crc32Table[(unsigned __int8)v89 ^ (unsigned __int64)stickerIndices[10]];
      v91 = (((v89 >> 8) ^ v90) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v89) ^ v90) ^ (unsigned __int64)stickerIndices[11]];
      v92 = (v91 >> 8) ^ g_crc32Table[(unsigned __int8)v91 ^ (unsigned __int64)stickerIndices[12]];
      v93 = (v92 >> 8) ^ g_crc32Table[(unsigned __int8)v92 ^ (unsigned __int64)stickerIndices[13]];
      v94 = (v93 >> 8) ^ g_crc32Table[(unsigned __int8)v93 ^ (unsigned __int64)stickerIndices[14]];
      v95 = (v94 >> 8) ^ g_crc32Table[(unsigned __int8)v94 ^ (unsigned __int64)stickerIndices[15]];
      v96 = (v95 >> 8) ^ g_crc32Table[(unsigned __int8)v95 ^ (unsigned __int64)stickerIndices[16]];
      v97 = (v96 >> 8) ^ g_crc32Table[(unsigned __int8)v96 ^ (unsigned __int64)stickerIndices[17]];
      v98 = (v97 >> 8) ^ g_crc32Table[(unsigned __int8)v97 ^ (unsigned __int64)stickerIndices[18]];
      v99 = (v98 >> 8) ^ g_crc32Table[(unsigned __int8)v98 ^ (unsigned __int64)stickerIndices[19]];
      v100 = (v99 >> 8) ^ g_crc32Table[(unsigned __int8)v99 ^ (unsigned __int64)stickerIndices[20]];
      v101 = (v100 >> 8) ^ g_crc32Table[(unsigned __int8)v100 ^ (unsigned __int64)stickerIndices[21]];
      v102 = (v101 >> 8) ^ g_crc32Table[(unsigned __int8)v101 ^ (unsigned __int64)stickerIndices[22]];
      v103 = (unsigned __int8)v102 ^ (unsigned __int64)stickerIndices[23];
      v104 = (((v102 >> 8) ^ g_crc32Table[v103]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v102) ^ g_crc32Table[v103]) ^ (unsigned __int64)stickerIndices[24]];
      v105 = stickerIndices[25];
      stickerIndices += 30;
      v106 = (v104 >> 8) ^ g_crc32Table[(unsigned __int8)v104 ^ v105];
      v107 = (v106 >> 8) ^ g_crc32Table[(unsigned __int8)v106 ^ (unsigned __int64)*(stickerIndices - 4)];
      v50 = (v107 >> 8) ^ g_crc32Table[(unsigned __int8)v107 ^ (unsigned __int64)*(stickerIndices - 3)];
      --v77;
    }
    while ( v77 );
    commandTime = v52->savedPlayerState.commandTime;
    v109 = ~v50;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6CCh]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovsd  [rsp+208h+var_108], xmm2
      vmovsd  xmm2, [rsp+208h+arg_10]
    }
    v113 = v52->predictedPlayerState.commandTime - commandTime;
    __asm
    {
      vmovsd  [rsp+208h+var_110], xmm3
      vmovsd  xmm3, [rsp+208h+arg_18]
      vmovsd  [rsp+208h+var_118], xmm4
      vmovsd  xmm4, [rsp+208h+var_F8]
      vmovsd  [rsp+208h+var_120], xmm5
      vmovsd  [rsp+208h+var_128], xmm6
      vmovsd  [rsp+208h+var_130], xmm7
      vmovsd  [rsp+208h+var_138], xmm8
      vmovsd  [rsp+208h+var_140], xmm9
      vmovsd  [rsp+208h+var_148], xmm10
      vmovsd  [rsp+208h+var_150], xmm11
      vmovsd  [rsp+208h+var_158], xmm12
      vmovsd  [rsp+208h+var_160], xmm13
      vmovsd  [rsp+208h+var_168], xmm14
      vmovsd  [rsp+208h+var_170], xmm15
      vmovsd  [rsp+208h+var_178], xmm2
      vmovsd  xmm2, [rsp+208h+var_F0]
      vmovsd  [rsp+208h+var_180], xmm3
      vmovsd  xmm3, [rsp+208h+var_E8]
      vmovsd  [rsp+208h+var_188], xmm4
      vmovsd  xmm4, [rsp+208h+var_E0]
      vmovsd  [rsp+208h+var_190], xmm2
      vmovsd  xmm2, [rsp+208h+var_D8]
      vmovsd  [rsp+208h+var_198], xmm3
      vmovsd  xmm3, [rsp+208h+var_D0]
      vmovsd  [rsp+208h+var_1A0], xmm4
      vmovsd  xmm4, [rsp+208h+var_C8]
      vmovsd  [rsp+208h+var_1A8], xmm2
      vmovsd  xmm2, [rsp+208h+var_C0]
      vmovsd  [rsp+208h+var_1B0], xmm3
      vmovsd  [rsp+208h+var_1B8], xmm4
      vmovsd  [rsp+208h+var_1C0], xmm2
    }
    if ( !commandTime )
      v113 = 0;
    __asm
    {
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+208h+var_1D8], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+208h+var_1E0], xmm1
    }
    LODWORD(fmt) = v113;
    Com_Printf(17, "C->  Time:%d  CmdTime:%d  EX:%d  VI:%f  WI:%f  WP:%d  MC:%d  BA[%f %f %f]  BO:[%f %f %f]  RA:[%f %f %f]  RS:[%f %f %f]  SA:[%f %f %f]  SO:[%f %f %f]  SVA:[%f %f %f]  BA:[%f %f %f]\n", (unsigned int)v52->time, (unsigned int)v52->predictedPlayerState.commandTime, fmt, v136, v137, v109, v75, v138, v139, v140, v141, v142, v143, v144, v145, v146, v147, v148, v149, v150, v151, v152, v153, v154, v155, v156, v157, v158, v159, v160, v161);
    __asm
    {
      vmovaps xmm15, [rsp+208h+var_B8]
      vmovaps xmm14, [rsp+208h+var_A8]
      vmovaps xmm13, [rsp+208h+var_98]
      vmovaps xmm12, [rsp+208h+var_88]
      vmovaps xmm11, [rsp+208h+var_78]
      vmovaps xmm10, [rsp+208h+var_68]
      vmovaps xmm9, [rsp+208h+var_58]
      vmovaps xmm8, [rsp+208h+var_48]
      vmovaps xmm7, [rsp+208h+var_38]
      vmovaps xmm6, [rsp+208h+var_28]
    }
  }
}

/*
==============
CG_View_RadialMotionBlurEnabled
==============
*/
char CG_View_RadialMotionBlurEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, const SuitDef *suit, float *minStrength, float *maxStrength, float *minRadius, float *maxRadius)
{
  char result; 
  bool v17; 
  bool v18; 
  bool v19; 
  float outOverrideStrength; 
  float outOverrideRadius; 

  _R12 = minStrength;
  _RBX = suit;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3522, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3523, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  if ( !_R12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3524, ASSERT_TYPE_ASSERT, "(minStrength)", (const char *)&queryFormat, "minStrength") )
    __debugbreak();
  _R15 = maxStrength;
  if ( !maxStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3525, ASSERT_TYPE_ASSERT, "(maxStrength)", (const char *)&queryFormat, "maxStrength") )
    __debugbreak();
  _RBP = minRadius;
  if ( !minRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3526, ASSERT_TYPE_ASSERT, "(minRadius)", (const char *)&queryFormat, "minRadius") )
    __debugbreak();
  _RSI = maxRadius;
  if ( !maxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3527, ASSERT_TYPE_ASSERT, "(maxRadius)", (const char *)&queryFormat, "maxRadius") )
    __debugbreak();
  if ( ps->pm_type )
    return 0;
  if ( CG_Camera_GetOverrideRadialBlur(localClientNum, &outOverrideRadius, &outOverrideStrength) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+68h+outOverrideStrength]
      vmovss  xmm1, [rsp+68h+outOverrideRadius]
      vmovss  dword ptr [r12], xmm0
      vmovss  dword ptr [r15], xmm0
      vmovss  dword ptr [rbp+0], xmm1
      vmovss  dword ptr [rsi], xmm1
    }
    return 10;
  }
  result = CG_Skydive_RadialMotionBlurEnabled(localClientNum, ps, _R12, _R15, _RBP, _RSI);
  if ( !result )
  {
    if ( !BGVehicles::IsRemoteDrivingVehicle(ps) )
    {
      v17 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_superSprintEnableMotionBlur, "superSprintEnableMotionBlur") && BG_IsSuperSprinting(ps);
      v18 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du);
      v19 = !v18;
      if ( v18 || (v19 = !v17, v17) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+298h]
          vmovss  xmm0, cs:__real@3a83126f
          vcomiss xmm1, xmm0
        }
        if ( !v19 )
        {
          __asm
          {
            vmovss  dword ptr [r12], xmm1
            vmovss  xmm1, cs:__real@3f800000
          }
          *_R15 = _RBX->radialMotionBlur_slideMaxStrength;
          result = 2;
          __asm
          {
            vsubss  xmm0, xmm1, dword ptr [rbx+290h]
            vmovss  dword ptr [rbp+0], xmm0
            vsubss  xmm1, xmm1, dword ptr [rbx+294h]
            vmovss  dword ptr [rsi], xmm1
          }
          return result;
        }
        __asm
        {
          vcomiss xmm0, dword ptr [rbx+29Ch]
          vcomiss xmm0, dword ptr [rbx+290h]
          vcomiss xmm0, dword ptr [rbx+294h]
        }
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+288h]
          vmovss  xmm0, cs:__real@3a83126f
          vcomiss xmm1, xmm0
          vmovss  dword ptr [r12], xmm1
          vmovss  xmm1, cs:__real@3f800000
        }
        *_R15 = _RBX->radialMotionBlur_sprintMaxStrength;
        result = 1;
        __asm
        {
          vsubss  xmm0, xmm1, dword ptr [rbx+280h]
          vmovss  dword ptr [rbp+0], xmm0
          vsubss  xmm1, xmm1, dword ptr [rbx+284h]
          vmovss  dword ptr [rsi], xmm1
        }
        return result;
      }
    }
    return 0;
  }
  return result;
}

/*
==============
CG_View_RemoteEyesShake
==============
*/
void CG_View_RemoteEyesShake(cg_t *cgameGlob, centity_t *possessedEnt)
{
  entityType_s eType; 
  const char *v23; 
  char v47; 
  char v79; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _R14 = cgameGlob;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps [rsp+0E8h+var_88], xmm12
    vmovaps [rsp+0E8h+var_98], xmm13
  }
  _RBP = possessedEnt;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3084, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3085, ASSERT_TYPE_ASSERT, "(possessedEnt)", (const char *)&queryFormat, "possessedEnt") )
    __debugbreak();
  eType = _RBP->nextState.eType;
  if ( eType == ET_HELICOPTER )
  {
    _RSI = DVARVEC3_cameraShakeRemoteHelo_Angles;
    if ( !DVARVEC3_cameraShakeRemoteHelo_Angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteHelo_Angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm11, dword ptr [rsi+28h]
      vmovss  xmm12, dword ptr [rsi+2Ch]
      vmovss  xmm13, dword ptr [rsi+30h]
    }
    _RSI = DVARVEC3_cameraShakeRemoteHelo_Freqs;
    if ( !DVARVEC3_cameraShakeRemoteHelo_Freqs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteHelo_Freqs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm8, dword ptr [rsi+28h]
      vmovss  xmm9, dword ptr [rsi+2Ch]
      vmovss  xmm10, dword ptr [rsi+30h]
    }
    _RSI = DVARVEC2_cameraShakeRemoteHelo_SpeedRange;
    if ( !DVARVEC2_cameraShakeRemoteHelo_SpeedRange )
    {
      v23 = "cameraShakeRemoteHelo_SpeedRange";
      goto LABEL_26;
    }
  }
  else
  {
    if ( eType != ET_MISSILE )
      Com_PrintWarning(14, "RemoteEyesShake(): Enttype '%d' not expected, code should be modified to handle it.\n", (unsigned int)eType);
    _RSI = DVARVEC3_cameraShakeRemoteMissile_Angles;
    if ( !DVARVEC3_cameraShakeRemoteMissile_Angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteMissile_Angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm11, dword ptr [rsi+28h]
      vmovss  xmm12, dword ptr [rsi+2Ch]
      vmovss  xmm13, dword ptr [rsi+30h]
    }
    _RSI = DVARVEC3_cameraShakeRemoteMissile_Freqs;
    if ( !DVARVEC3_cameraShakeRemoteMissile_Freqs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteMissile_Freqs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm8, dword ptr [rsi+28h]
      vmovss  xmm9, dword ptr [rsi+2Ch]
      vmovss  xmm10, dword ptr [rsi+30h]
    }
    _RSI = DVARVEC2_cameraShakeRemoteMissile_SpeedRange;
    if ( !DVARVEC2_cameraShakeRemoteMissile_SpeedRange )
    {
      v23 = "cameraShakeRemoteMissile_SpeedRange";
LABEL_26:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v23) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+28h]
    vmovss  xmm2, dword ptr [rsi+2Ch]
    vmovss  xmm3, dword ptr [rbp+1C0h]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm4, xmm1, xmm6, xmm0
    vcmpless xmm0, xmm2, xmm4
    vaddss  xmm1, xmm4, xmm7
    vblendvps xmm5, xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rbp+1B8h]
    vmovss  xmm2, dword ptr [rbp+1BCh]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vcomiss xmm0, xmm4
    vmovss  [rsp+0E8h+var_A8], xmm5
  }
  if ( !v47 )
    __asm { vminss  xmm4, xmm5, xmm0 }
  __asm
  {
    vdivss  xmm0, xmm4, xmm5; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovd   xmm1, dword ptr [r14+69B4h]
    vcvtdq2ps xmm1, xmm1
    vmulss  xmm6, xmm1, cs:__real@3b4de32e
    vmovaps xmm7, xmm0
    vmulss  xmm0, xmm8, xmm6; X
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm11
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [r14+178C0h]
    vmulss  xmm0, xmm9, xmm6; X
    vmovss  dword ptr [r14+178C0h], xmm3
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, xmm12
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [r14+178C4h]
    vmulss  xmm0, xmm10, xmm6; X
    vmovss  dword ptr [r14+178C4h], xmm3
  }
  *(float *)&_XMM0 = sinf_0(*(float *)&_XMM0);
  _R11 = &v79;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm9, xmmword ptr [r11-50h]
    vmovaps xmm10, xmmword ptr [r11-60h]
    vmovaps xmm11, xmmword ptr [r11-70h]
    vmovaps xmm12, xmmword ptr [r11-80h]
    vmulss  xmm1, xmm0, xmm13
    vmovaps xmm13, [rsp+0E8h+var_98]
    vmulss  xmm2, xmm1, xmm7
    vaddss  xmm3, xmm2, dword ptr [r14+178C8h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovss  dword ptr [r14+178C8h], xmm3
  }
}

/*
==============
CG_View_ResetLocSelInfo
==============
*/
void CG_View_ResetLocSelInfo(cg_t *cgameGlob)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1121, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  cgameGlob->locationSelectorCursor.v[0] = 0.5;
  *(_QWORD *)&cgameGlob->locationSelectorCursor.y = 1056964608i64;
  cgameGlob->locationSelectorNumInputs = 0;
}

/*
==============
CG_View_RestoreCachedMPDvarsForRadiantView
==============
*/
void CG_View_RestoreCachedMPDvarsForRadiantView()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  if ( s_dvars_cached )
  {
    v0 = DVARBOOL_cg_drawGun;
    if ( !DVARBOOL_cg_drawGun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawGun") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled != s_cg_drawgun_value )
      Dvar_SetBoolByName("SROLTPQLK", s_cg_drawgun_value);
    v1 = DVARBOOL_cg_draw2D;
    if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled != s_cg_draw2D_value )
      Dvar_SetBoolByName("NNTRRPNLQ", s_cg_draw2D_value);
    s_dvars_cached = 0;
  }
}

/*
==============
CG_View_SetFovDvarValue
==============
*/
void CG_View_SetFovDvarValue(const LocalClientNum_t localClientNum, const float fov)
{
  bool v2; 
  const dvar_t *v3; 

  v2 = localClientNum == LOCAL_CLIENT_1;
  v3 = DVARFLT_cg_fov1;
  if ( !v2 )
    v3 = DVARFLT_cg_fov;
  Dvar_SetFloat_Internal(v3, fov);
}

/*
==============
CG_View_SetHudOutline
==============
*/
void CG_View_SetHudOutline(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  CgWeaponMap *v5; 
  GfxScopeHudOutlineInfo v6; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BG_GetHudOutlineInScopeColor(v5, &v4->predictedPlayerState, &v6.foeColor);
  BG_GetHudOutlineAltInScopeColor(v5, &v4->predictedPlayerState, &v6.friendColor);
  v6.depthTest = BG_GetHudOutlineDepthTest(v5, &v4->predictedPlayerState);
  v6.fill = BG_GetHudOutlineFill(v5, &v4->predictedPlayerState);
  BG_GetHudOutlineFillColor0(v5, &v4->predictedPlayerState, &v6.fillColor0);
  BG_GetHudOutlineFillColor1(v5, &v4->predictedPlayerState, &v6.fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v5, &v4->predictedPlayerState, &v6.occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v5, &v4->predictedPlayerState, &v6.occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v5, &v4->predictedPlayerState, &v6.occludedInteriorColor);
  *(double *)&_XMM0 = BG_GetHudOutlineWidth(v5, &v4->predictedPlayerState);
  __asm { vmovss  [rsp+0D8h+var_38], xmm0 }
  R_HudOutlineApplyToRefdef(&LocalClientGlobals->refdef, &v6);
}

/*
==============
CG_View_SetRadialMotionBlur
==============
*/
void CG_View_SetRadialMotionBlur(GfxRadialMotionBlur *radialMotionBlur, const SuitDef *suit, const RadialMotionBlurState *radialMotionBlurState, const RadialMotionBlurType blurType, const float normalizedTime)
{
  char v5; 
  bool v9; 

  v5 = blurType;
  if ( !radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3738, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
    __debugbreak();
  if ( !radialMotionBlurState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3739, ASSERT_TYPE_ASSERT, "(radialMotionBlurState)", (const char *)&queryFormat, "radialMotionBlurState") )
    __debugbreak();
  if ( v5 )
  {
    v9 = 1;
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+38h+normalizedTime]
      vcomiss xmm0, cs:__real@3f7fbe77
    }
    v9 = 0;
  }
  radialMotionBlur->enabled = v9;
  radialMotionBlur->radius = radialMotionBlurState->currentRadius;
  radialMotionBlur->strength = radialMotionBlurState->currentStrength;
}

/*
==============
CG_View_SetScreenView
==============
*/
void CG_View_SetScreenView(const LocalClientNum_t localClientNum, int activeClientIndex, int activeClientCount)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int v31; 
  int viewX; 
  int viewY; 
  int viewHeight; 
  bool v35; 
  bool v36; 
  int viewWidth; 
  int v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  int v49; 
  int v50; 
  int height; 
  int width; 
  float aspect; 

  v4 = activeClientCount;
  v5 = activeClientIndex;
  v6 = localClientNum;
  if ( (unsigned int)(activeClientCount - 1) >= 2 )
  {
    v48 = 2;
    v46 = activeClientCount - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4093, ASSERT_TYPE_ASSERT, "(unsigned)( clientCountArrayIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray ) ) + 0 ) )", "clientCountArrayIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray )\n\t%i not in [0, %i)", v46, v48) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v47) = 2;
    LODWORD(v45) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4094, ASSERT_TYPE_ASSERT, "(unsigned)( activeClientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray[0] ) ) + 0 ) )", "activeClientIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray[0] )\n\t%i not in [0, %i)", v45, v47) )
      __debugbreak();
  }
  if ( (int)v5 >= (int)v4 )
  {
    v50 = v4;
    v49 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4095, ASSERT_TYPE_ASSERT, "( activeClientIndex ) < ( activeClientCount )", "%s < %s\n\t%i, %i", "activeClientIndex", "activeClientCount", v49, v50) )
      __debugbreak();
  }
  _R14 = 3 * (v5 + 2 * v4 - 2);
  _R13 = s_clientViewParamsArray;
  CL_GetScreenDimensions(&width, &height, &aspect);
  _RBX = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
  __asm
  {
    vmovss  xmm3, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+88h+width]
    vmulss  xmm1, xmm0, dword ptr [r13+r14*8+0]
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm1, xmm3
    vcvttss2si ecx, xmm1
  }
  _RBX->viewX = _ECX;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, [rsp+88h+height]
    vmulss  xmm0, xmm0, dword ptr [r13+r14*8+4]
    vaddss  xmm1, xmm0, xmm3
    vcvttss2si ecx, xmm1
  }
  _RBX->viewY = _ECX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+88h+width]
    vmulss  xmm1, xmm0, dword ptr [r13+r14*8+8]
    vaddss  xmm2, xmm1, xmm3
    vcvttss2si eax, xmm2
  }
  _RBX->viewWidth = _EAX;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+88h+height]
    vmulss  xmm1, xmm0, dword ptr [r13+r14*8+0Ch]
    vaddss  xmm2, xmm1, xmm3
    vcvttss2si esi, xmm2
  }
  _RBX->viewHeight = _ESI;
  v31 = height;
  if ( (int)v4 > 1 )
  {
    if ( _ESI <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4065, ASSERT_TYPE_ASSERT, "(curViewHeight > 1)", (const char *)&queryFormat, "curViewHeight > 1") )
      __debugbreak();
    if ( (_DWORD)v4 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4066, ASSERT_TYPE_ASSERT, "(activeClientCount == 2)", (const char *)&queryFormat, "activeClientCount == 2") )
      __debugbreak();
    if ( (v31 & (unsigned int)v5) != 0 )
      --_ESI;
  }
  viewX = _RBX->viewX;
  _RBX->viewHeight = _ESI;
  if ( viewX < 0 || viewX >= width )
  {
    LODWORD(v45) = viewX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4111, ASSERT_TYPE_SANITY, "( ( cgs->viewX >= 0 && cgs->viewX < clientWidth ) )", "( cgs->viewX ) = %i", v45) )
      __debugbreak();
  }
  viewY = _RBX->viewY;
  if ( viewY < 0 || viewY >= height )
  {
    LODWORD(v45) = _RBX->viewY;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4112, ASSERT_TYPE_SANITY, "( ( cgs->viewY >= 0 && cgs->viewY < clientHeight ) )", "( cgs->viewY ) = %i", v45) )
      __debugbreak();
  }
  if ( _RBX->viewWidth <= 0 )
  {
    LODWORD(v45) = _RBX->viewWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4113, ASSERT_TYPE_SANITY, "( ( cgs->viewWidth > 0 ) )", "( cgs->viewWidth ) = %i", v45) )
      __debugbreak();
  }
  viewHeight = _RBX->viewHeight;
  v35 = viewHeight == 0;
  if ( viewHeight <= 0 )
  {
    LODWORD(v45) = _RBX->viewHeight;
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4114, ASSERT_TYPE_SANITY, "( ( cgs->viewHeight > 0 ) )", "( cgs->viewHeight ) = %i", v45);
    v35 = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+88h+aspect]
    vmulss  xmm1, xmm0, dword ptr [r13+r14*8+8]
    vdivss  xmm2, xmm1, dword ptr [r13+r14*8+0Ch]
    vmovss  dword ptr [rbx+18h], xmm2
    vmovss  xmm0, [rsp+88h+aspect]
    vcomiss xmm0, cs:__real@3faaaaab
  }
  if ( v35 )
    __asm { vmovss  xmm0, dword ptr [r13+r14*8+10h] }
  else
    __asm { vmovss  xmm0, dword ptr [r13+r14*8+14h] }
  viewWidth = _RBX->viewWidth;
  v43 = _RBX->viewY;
  v44 = _RBX->viewX;
  __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
  ScrPlace_SetupViewport(&scrPlaceViewDisplay[v6], v44, v43, viewWidth, _RBX->viewHeight);
}

/*
==============
CG_View_SetThermal
==============
*/
void CG_View_SetThermal(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_View_SetViewNowDvar
==============
*/
void CG_View_SetViewNowDvar(const LocalClientNum_t localClientNum)
{
  char v10; 
  vec3_t outOrg; 
  __int64 v22; 
  char v24; 
  void *retaddr; 

  _RAX = &retaddr;
  v22 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4025, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovss  xmm7, dword ptr [rbx+2Ch]
    vmovss  xmm6, dword ptr [rbx+30h]
  }
  RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+98h+outOrg+8]; z
    vmovss  xmm2, dword ptr [rsp+98h+outOrg+4]; y
    vmovss  xmm1, dword ptr [rsp+98h+outOrg]; x
    vucomiss xmm8, xmm1
  }
  if ( !v10 )
    goto LABEL_10;
  __asm { vucomiss xmm7, xmm2 }
  if ( !v10 )
    goto LABEL_10;
  __asm { vucomiss xmm6, xmm3 }
  if ( !v10 )
LABEL_10:
    Dvar_SetVec3_Internal(DVARVEC3_viewposNow, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vucomiss xmm8, dword ptr [rdi+6944h] }
  if ( !v10 )
    goto LABEL_14;
  __asm { vucomiss xmm7, dword ptr [rdi+6948h] }
  if ( !v10 )
    goto LABEL_14;
  __asm { vucomiss xmm6, dword ptr [rdi+694Ch] }
  if ( !v10 )
  {
LABEL_14:
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; z
      vmovss  xmm2, dword ptr [rdi+178C0h]; y
      vmovss  xmm1, dword ptr [rdi+178C4h]; x
    }
    Dvar_SetVec3_Internal(DVARVEC3_viewangNow, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v24;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_View_SetupAimAssist
==============
*/
void CG_View_SetupAimAssist(const LocalClientNum_t localClientNum)
{
  float v3; 
  float v5; 
  __int64 v6[3]; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovsd  xmm0, qword ptr [rax+38h]
    vmovsd  [rsp+68h+var_30], xmm0
  }
  v3 = _RBX->predictedPlayerState.origin.v[2];
  *(float *)&v6[1] = v3;
  if ( !_RBX->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized", -2i64) )
    __debugbreak();
  _RBX->aimAssistEyeOrigin.secureInt32_3_aab += _RBX->aimAssistEyeOrigin.secureInt32_3_set_aab;
  _RBX->aimAssistEyeOrigin.data[0] = ((((_DWORD)_RBX + 98316) ^ _RBX->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)_RBX + 98316) ^ _RBX->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v6[0]);
  _RBX->aimAssistEyeOrigin.data[1] = ((_RBX->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98320)) * ((_RBX->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98320)) + 2)) ^ HIDWORD(v6[0]);
  _RBX->aimAssistEyeOrigin.data[2] = ((_RBX->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98324)) * ((_RBX->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)_RBX + 98324)) + 2)) ^ LODWORD(v3);
  memset(v6, 0, 0xCui64);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+38h]
    vmovsd  [rsp+68h+var_30], xmm0
  }
  v5 = _RBX->predictedPlayerState.origin.v[2];
  *(float *)&v6[1] = v5;
  if ( !_RBX->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  _RBX->aimAssistViewOrigin.secureInt32_3_aab += _RBX->aimAssistViewOrigin.secureInt32_3_set_aab;
  _RBX->aimAssistViewOrigin.data[0] = ((((_DWORD)_RBX + 98340) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)_RBX + 98340) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v6[0]);
  _RBX->aimAssistViewOrigin.data[1] = ((((_DWORD)_RBX + 98344) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)_RBX + 98344) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ HIDWORD(v6[0]);
  _RBX->aimAssistViewOrigin.data[2] = ((((_DWORD)_RBX + 98348) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)_RBX + 98348) ^ _RBX->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v5);
  memset(v6, 0, 0xCui64);
  _RBX->aimAssistViewAngles.v[0] = _RBX->predictedPlayerState.viewangles.v[0];
  _RBX->aimAssistViewAngles.v[1] = _RBX->predictedPlayerState.viewangles.v[1];
  _RBX->aimAssistViewAngles.v[2] = _RBX->predictedPlayerState.viewangles.v[2];
}

/*
==============
CG_View_SetupRefDef
==============
*/

void __fastcall CG_View_SetupRefDef(const LocalClientNum_t localClientNum, double zNear, double uiBlurRadius)
{
  __int64 v6; 
  int ControllerFromClient; 
  int v11; 
  char v22; 
  char v23; 
  GfxResolutionStep v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 

  v6 = localClientNum;
  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5240, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX->refdef.time = _RBX->time;
  _RBX->refdef.frameTime = _RBX->frametime;
  __asm { vmovss  dword ptr [rbx+6968h], xmm7 }
  _RBX->refdef.localClientNum = v6;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
  _RBX->refdef.daltonizeMode = GamerProfile_ColorBlindMode(ControllerFromClient);
  v11 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
  _RBX->refdef.daltonizeTargets = GamerProfile_ColorBlindTargets(v11);
  *(double *)&_XMM0 = CG_GetBlurRadius((LocalClientNum_t)v6);
  _RAX = &cgDC[0].blurRadiusOut;
  __asm { vmulss  xmm0, xmm0, xmm0 }
  _RCX = 5 * v6;
  __asm
  {
    vmovss  xmm1, dword ptr [rax+rcx*8]
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm3, xmm1
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
    vsqrtss xmm0, xmm2, xmm2
  }
  _RBX->cvsData.transitory.remoteMissileCam = 0;
  _RBX->refdef.uiBlur = !(v22 | v23);
  _RBX->refdef.playerTeleported = _RBX->playerTeleported;
  __asm { vmovss  dword ptr [rbx+69D0h], xmm0 }
  memset_0(&_RBX->refdef.brCircle, 0, sizeof(_RBX->refdef.brCircle));
  v24 = _RBX->refdef.resolution.history[0];
  _RBX->refdef.resolution.history[1] = v24;
  _RBX->refdef.resolution.history[2] = v24;
  _RBX->refdef.resolution.history[0] = _RBX->refdef.resolution.step;
  v25 = DVARBOOL_r_sceneResDynamic;
  if ( !DVARBOOL_r_sceneResDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( v25->current.enabled )
  {
    v26 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    _RBX->refdef.resolution.step = v26->current.integer;
  }
  else
  {
    _RBX->refdef.resolution.step = GFX_RESOLUTION_STEP_NONE;
  }
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
CG_View_SetupViewport
==============
*/
void CG_View_SetupViewport(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  LocalClientGlobals->refdef.displayViewport.x = LocalClientStaticGlobals->viewX;
  LocalClientGlobals->refdef.displayViewport.y = LocalClientStaticGlobals->viewY;
  LocalClientGlobals->refdef.displayViewport.width = LocalClientStaticGlobals->viewWidth;
  LocalClientGlobals->refdef.displayViewport.height = LocalClientStaticGlobals->viewHeight;
  LocalClientGlobals->refdef.useScissorViewport = 0;
}

/*
==============
CG_View_ShouldRenderGunAtDifferentFov
==============
*/
bool CG_View_ShouldRenderGunAtDifferentFov(const cg_t *const cgameGlob, const playerState_s *ps)
{
  bool result; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v8; 
  char v11; 
  char v12; 
  bool v13; 
  float overrideFovDeg; 
  BgAdsZoomInfo outZoomInfo; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2160, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2161, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( CG_Camera_GetOverrideFOV((const LocalClientNum_t)cgameGlob->localClientNum, &overrideFovDeg) )
    return 0;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  v8 = BG_UsingAlternate(ps);
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  BG_GetADSZoomInfo(Instance, ViewmodelWeapon, v8, &cgameGlob->scopeToggleInfo.fractionInfo, &outZoomInfo);
  __asm
  {
    vmovss  xmm0, [rsp+98h+outZoomInfo.depthHackZoomFov]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  result = 1;
  if ( v11 | v12 )
  {
    if ( !CG_View_IsSeparateViewModelFovUsed() )
    {
      v13 = BG_SyncedFOVInDualFOV(ViewmodelWeapon, v8);
      if ( !cgameGlob->dualViewScope || v13 )
        return 0;
    }
  }
  return result;
}

/*
==============
CG_View_StartWaterSheetFX
==============
*/
void CG_View_StartWaterSheetFX(const LocalClientNum_t localClientNum, int duration)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  int v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->refdef.waterSheetingFx.startMSec = LocalClientGlobals->time;
  *(_WORD *)&LocalClientGlobals->refdef.waterSheetingFx.enabled = 257;
  v4 = DVARFLT_cg_waterSheeting_radius;
  if ( !DVARFLT_cg_waterSheeting_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_waterSheeting_radius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  LODWORD(LocalClientGlobals->refdef.waterSheetingFx.blurRadius) = v4->current.integer;
  v5 = DVARFLT_cg_waterSheeting_magnitude;
  if ( !DVARFLT_cg_waterSheeting_magnitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_waterSheeting_magnitude") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  LODWORD(LocalClientGlobals->refdef.waterSheetingFx.distortionMagnitude) = v5->current.integer;
  v6 = DVARVEC2_cg_waterSheeting_distortionScaleFactor;
  if ( !DVARVEC2_cg_waterSheeting_distortionScaleFactor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_waterSheeting_distortionScaleFactor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  LODWORD(LocalClientGlobals->refdef.waterSheetingFx.distortionScale.v[0]) = v6->current.integer;
  LocalClientGlobals->refdef.waterSheetingFx.distortionScale.v[1] = v6->current.vector.v[1];
  v7 = 3000;
  if ( duration >= 0 )
    v7 = duration;
  LocalClientGlobals->refdef.waterSheetingFx.distortionScale.v[2] = 0.30000001;
  LocalClientGlobals->refdef.waterSheetingFx.duration = v7;
}

/*
==============
CG_View_StopWaterSheetFX
==============
*/
void CG_View_StopWaterSheetFX(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4944, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  *(_WORD *)&LocalClientGlobals->refdef.waterSheetingFx.enabled = 0;
  LocalClientGlobals->refdef.waterSheetingFx.duration = 0;
  LocalClientGlobals->refdef.waterSheetingFx.blurRadius = 0.0;
}

/*
==============
CG_View_ThermalScoped
==============
*/
bool CG_View_ThermalScoped(LocalClientNum_t localClientNum, const cg_t *cgameGlob)
{
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelOrOffhandADSWeapon; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  const PlayerEquippedWeaponState *v9; 
  char v13; 
  char v14; 
  __int64 v15; 
  BgAdsVisionSetInfo result; 
  bool outIsAlternate; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4554, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_PlayerUsingThermalTurret(localClientNum) )
    return 1;
  if ( cgameGlob == (const cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&cgameGlob->predictedPlayerState.eFlags) )
    return 0;
  if ( cgameGlob->renderingThirdPerson )
    return 0;
  Instance = CgWeaponMap::GetInstance(localClientNum);
  ViewmodelOrOffhandADSWeapon = BG_GetViewmodelOrOffhandADSWeapon(Instance, &cgameGlob->predictedPlayerState, &outIsAlternate);
  if ( !BG_HasThermalScope(&cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon, outIsAlternate) )
    return 0;
  if ( BG_CanThermalToggle(ViewmodelOrOffhandADSWeapon, outIsAlternate) )
  {
    EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, &cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon);
    if ( !EquippedWeaponStateConst || !EquippedWeaponStateConst->thermalEnabled )
      return 0;
  }
  if ( BG_CanHybridToggle(&cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon, outIsAlternate) )
  {
    v9 = BG_GetEquippedWeaponStateConst(Instance, &cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon);
    if ( !v9 || v9->hybridScope )
      return 0;
  }
  _RAX = BG_GetAdsVisionSetInfo(&result, Instance, &cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon, outIsAlternate);
  __asm
  {
    vmovsd  xmm1, qword ptr [rax+10h]
    vmovsd  [rsp+68h+var_28], xmm1
  }
  if ( !BYTE4(v15) )
    return 0;
  *(double *)&_XMM0 = CG_VisionSetGetLerp(&cgameGlob->cvsData.archived.visionBlends[14], cgameGlob->time);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  return !(v13 | v14);
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/
bool CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, vec3_t *result)
{
  int entity; 
  float v10; 
  int skipEntities; 

  entity = ps->vehicleState.entity;
  if ( entity == 2047 )
  {
    entity = ps->remoteControlEnt;
    if ( (_WORD)entity == 2047 )
      entity = ps->clientNum;
  }
  __asm { vmovss  xmm0, [rsp+58h+startSolidOffset] }
  skipEntities = entity;
  __asm { vmovss  [rsp+58h+var_30], xmm0 }
  return CG_View_ThirdPersonViewTrace(localClientNum, ps, start, end, contentMask, v10, &skipEntities, 1, result);
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/
bool CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, const int *skipEntities, int skipEntityCount, vec3_t *result)
{
  __int32 v19; 
  int v22; 
  bool v26; 
  Bounds bounds; 
  trace_t results; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RBP = end;
  _RSI = result;
  if ( (!skipEntities || skipEntityCount <= 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 455, ASSERT_TYPE_ASSERT, "(skipEntities && skipEntityCount > 0)", (const char *)&queryFormat, "skipEntities && skipEntityCount > 0") )
    __debugbreak();
  __asm { vmovss  xmm6, cs:__real@41200000 }
  v19 = 3 * localClientNum + 2;
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm9, cs:__real@3f000000
  }
  v22 = 0;
  __asm { vxorps  xmm7, xmm7, xmm7 }
  while ( 1 )
  {
    __asm
    {
      vmovss  dword ptr [rsp+178h+bounds.midPoint], xmm7
      vmovss  dword ptr [rsp+178h+bounds.midPoint+4], xmm7
      vmovss  dword ptr [rsp+178h+bounds.midPoint+8], xmm7
      vmovss  dword ptr [rsp+178h+bounds.halfSize], xmm6
      vmovss  dword ptr [rsp+178h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rsp+178h+bounds.halfSize+8], xmm6
    }
    PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v19, &results, start, _RBP, &bounds, skipEntities, skipEntityCount, 0, contentMask, 0, NULL, All);
    __asm { vmovss  xmm5, [rsp+178h+results.fraction] }
    if ( !results.startsolid )
      break;
    __asm { vucomiss xmm5, xmm8 }
    ++v22;
    __asm { vmulss  xmm6, xmm6, xmm9 }
    if ( v22 >= tracePassesCount )
    {
      __asm { vmovss  xmm0, [rsp+178h+startSolidOffset] }
      *(_QWORD *)result->v = *(_QWORD *)start->v;
      v26 = 0;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
      goto LABEL_10;
    }
  }
  __asm
  {
    vucomiss xmm5, xmm8
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  dword ptr [rsi], xmm0
  }
  *(_QWORD *)&result->y = *(_QWORD *)&_RBP->y;
  v26 = 1;
LABEL_10:
  _R11 = &v36;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return v26;
}

/*
==============
CG_View_ToggleCenterView
==============
*/
void CG_View_ToggleCenterView(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals )
  {
    LocalClientGlobals->extraButtons |= 0x4000000ui64;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6716, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0x59678] |= 0x4000000ui64;
  }
}

/*
==============
CG_View_TraceProfiling
==============
*/
void CG_View_TraceProfiling(const LocalClientNum_t localClientNum)
{
  char v5; 
  char v6; 
  cg_t *LocalClientGlobals; 
  long double duration; 
  vec3_t outOrg; 
  vec3_t forward; 
  vec3_t end; 
  trace_t results; 

  _RBX = DVARFLT_cg_traceProfilingDist;
  if ( !DVARFLT_cg_traceProfilingDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_traceProfilingDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+28h]
  }
  if ( v5 | v6 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3374, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0, "CG_TraceProfiling");
    Profile_Begin(36);
    AngleVectors(&LocalClientGlobals->refdefViewAngles, &forward, NULL, NULL);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    _RBX = DVARFLT_cg_traceProfilingDist;
    if ( !DVARFLT_cg_traceProfilingDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_traceProfilingDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]
      vmulss  xmm1, xmm3, dword ptr [rsp+128h+forward]
      vaddss  xmm2, xmm1, dword ptr [rsp+128h+outOrg]
      vmulss  xmm1, xmm3, dword ptr [rsp+128h+forward+4]
      vmovss  dword ptr [rsp+128h+end], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+128h+outOrg+4]
      vmulss  xmm1, xmm3, dword ptr [rsp+128h+forward+8]
      vmovss  dword ptr [rsp+128h+end+4], xmm2
      vaddss  xmm2, xmm1, dword ptr [rsp+128h+outOrg+8]
      vmovss  dword ptr [rsp+128h+end+8], xmm2
    }
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &bounds_origin, 2047, 0, 41969969, 1, NULL, All);
    Profile_EndInternal(&duration);
    Sys_ProfEndNamedEvent();
    __asm
    {
      vmovsd  xmm1, [rsp+128h+duration]
      vmovq   rdx, xmm1
    }
    Com_Printf_NoFilter("profile %f\n", *(double *)&_XMM1);
  }
}

/*
==============
CG_View_UpdateDepthScanParams
==============
*/
void CG_View_UpdateDepthScanParams(LocalClientNum_t localClientNum)
{
  if ( !CG_OffhandShield_PopulateDepthScanParams(localClientNum) )
  {
    _R8 = CG_GetLocalClientGlobals(localClientNum);
    __asm { vxorps  xmm0, xmm0, xmm0 }
    _R8->refdef.depthScanParams.color = (vec4_t)r_depthScanColor->current;
    _R8->refdef.depthScanParams.outlineColor = (vec4_t)r_depthScanOutlineColor->current;
    _R8->refdef.depthScanParams.overlayColor = (vec4_t)r_depthScanOverlayColor->current;
    _R8->refdef.depthScanParams.scrollParams = (vec4_t)r_depthScanScrollParams->current;
    _R8->refdef.depthScanParams.enabled = r_depthScanEffectEnable->current.enabled;
    _R8->refdef.depthScanParams.overlayEnabled = r_depthScanOverlayEffect->current.enabled;
    LODWORD(_R8->refdef.depthScanParams.depth) = r_depthScanDistance->current.integer;
    LODWORD(_R8->refdef.depthScanParams.outlineThickness) = r_depthScanOutlineThickness->current.integer;
    LODWORD(_R8->refdef.depthScanParams.thickness) = r_depthScanThickness->current.integer;
    LODWORD(_R8->refdef.depthScanParams.overlayStrength) = r_depthScanOverlayStrength->current.integer;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, ecx
      vmovss  dword ptr [r8+17858h], xmm0
    }
  }
}

/*
==============
CG_View_UpdateFov
==============
*/

void __fastcall CG_View_UpdateFov(const LocalClientNum_t localClientNum, double fov_x)
{
  __int64 v13; 
  ClientFov v14; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  _RAX = CG_GetLocalClientStaticGlobals(localClientNum);
  HIDWORD(v13) = 0;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+20h]
    vmovss  xmm0, xmm0, xmm6
    vmovsd  [rsp+58h+var_28], xmm0
    vmovss  xmm0, dword ptr [rax+1Ch]
    vmulss  xmm2, xmm0, dword ptr [rax+18h]
  }
  v14.baseFovAdjustment = 0.0;
  CG_View_UpdateFovInternal(_RDI, &v14, *(float *)&_XMM2);
  __asm
  {
    vmovsd  xmm0, qword ptr [rdi+6930h]
    vmovaps xmm6, [rsp+58h+var_18]
    vmovsd  qword ptr [rdi+696Ch], xmm0
  }
}

/*
==============
CG_View_UpdateFovInternal
==============
*/

void __fastcall CG_View_UpdateFovInternal(cg_t *cgameGlob, const ClientFov *fov, double clientAspectRatio)
{
  LocalClientNum_t localClientNum; 
  int ControllerFromClient; 
  char v25; 
  char v26; 
  int fovLerpTimer; 
  const dvar_t *v43; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm8 }
  _RBX = cgameGlob;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _R14 = fov;
  __asm
  {
    vmovss  xmm6, dword ptr [rdx]
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm0, xmm6; fovdeg_x
    vmovaps xmm1, xmm2; viewAspect
    vmovaps [rsp+0C8h+var_88], xmm11
    vmovaps xmm10, xmm2
  }
  TanHalfAngles(*(float *)&_XMM0, *(float *)&_XMM1, (float *)&cgameGlob->refdef.view.0, &cgameGlob->refdef.view.fov.tanHalfFovY);
  __asm
  {
    vmovss  xmm9, cs:__real@3f400000
    vmulss  xmm1, xmm9, cs:dxDzFixedFOV
  }
  localClientNum = _RBX->localClientNum;
  __asm
  {
    vmovss  dword ptr [rbx+697Ch], xmm1
    vmulss  xmm1, xmm1, xmm10
    vmovss  dword ptr [rbx+6978h], xmm1
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  __asm
  {
    vmovss  xmm7, cs:__real@3c0efa35
    vxorps  xmm11, xmm11, xmm11
  }
  if ( GamerProfile_GetMouseAdsUseMonitorDistance(ControllerFromClient) )
  {
    *(double *)&_XMM0 = GamerProfile_GetMouseMonitorDistanceCoef(ControllerFromClient);
    __asm
    {
      vmovaps xmm8, xmm0
      vcomiss xmm8, xmm11
      vmovss  xmm0, dword ptr [rbx+6934h]
    }
    if ( v25 | v26 )
    {
      __asm { vmulss  xmm1, xmm0, cs:__real@4005f24e }
    }
    else
    {
      __asm { vmulss  xmm0, xmm0, xmm8; X }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm
      {
        vmovaps xmm6, xmm0
        vmulss  xmm0, xmm8, cs:__real@3ef4a28e; X
      }
      *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
      __asm { vdivss  xmm1, xmm6, xmm0 }
    }
  }
  else
  {
    __asm { vmulss  xmm0, xmm6, xmm7; X }
    *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm1, xmm0, cs:__real@3fc8eb75 }
  }
  __asm
  {
    vmovss  dword ptr [rbx+18070h], xmm1
    vmovss  xmm8, cs:__real@3f800000
  }
  if ( _RBX->refdef.forceFoVEnabled )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1782Ch]
      vcomiss xmm0, xmm8
      vmovss  xmm6, dword ptr [rbx+17830h]
    }
    if ( _RBX->refdef.forceFoVEnabled )
    {
      __asm { vmulss  xmm0, xmm0, xmm7; X }
      *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
      __asm
      {
        vcomiss xmm6, xmm8
        vmulss  xmm1, xmm0, xmm9
        vmulss  xmm2, xmm1, xmm10
        vmovss  dword ptr [rbx+6930h], xmm2
      }
      if ( !(v25 | v26) )
      {
        __asm { vmulss  xmm0, xmm6, xmm7; X }
        *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
      }
      __asm
      {
        vmulss  xmm0, xmm0, xmm9
        vmovss  dword ptr [rbx+6934h], xmm0
      }
      _RBX->fovLerpTimer = 0;
      fovLerpTimer = 0;
    }
    else
    {
      __asm { vcomiss xmm6, xmm8 }
      if ( _RBX->refdef.forceFoVEnabled )
      {
        __asm { vmulss  xmm0, xmm6, xmm7; X }
        *(float *)&_XMM0 = tanf_0(*(float *)&_XMM0);
        __asm
        {
          vmulss  xmm1, xmm0, xmm9
          vmovss  dword ptr [rbx+6934h], xmm1
          vmulss  xmm1, xmm1, xmm10
          vmovss  dword ptr [rbx+6930h], xmm1
        }
      }
      _RBX->fovLerpTimer = 0;
      fovLerpTimer = 0;
    }
  }
  else
  {
    fovLerpTimer = _RBX->fovLerpTimer;
  }
  __asm
  {
    vmovaps xmm10, [rsp+0C8h+var_78]
    vmovaps xmm9, [rsp+0C8h+var_68]
    vmovss  xmm7, dword ptr [r14+4]
  }
  if ( fovLerpTimer <= 0 )
  {
    __asm { vmovss  dword ptr [rbx+66A7Ch], xmm7 }
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2041, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
      __debugbreak();
    _RBX->fovLerpTimer -= _RBX->frametime;
    if ( _RBX->fovLerpTimer <= 0 )
    {
      _RBX->turretFov = _R14->finalFov;
      _RBX->fovLerpTimer = 0;
      _RDI = DVARFLT_cg_fovScale;
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm11, dword ptr [rdi+28h] }
      if ( !(v25 | v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2050, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_cg_fovScale, \"cg_fovScale\" ) >= 0.f)", (const char *)&queryFormat, "Dvar_GetFloat( cg_fovScale ) >= 0.f") )
        __debugbreak();
      _RDI = DVARFLT_cg_playerFovScale;
      if ( !DVARFLT_cg_playerFovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vcomiss xmm11, dword ptr [rdi+28h] }
      if ( !(v25 | v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2051, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_cg_playerFovScale, \"cg_playerFovScale\" ) >= 0.f)", (const char *)&queryFormat, "Dvar_GetFloat( cg_playerFovScale ) >= 0.f") )
        __debugbreak();
      _RDI = DVARFLT_cg_fovScale;
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vmovss  xmm6, dword ptr [rdi+28h] }
      v43 = DVARFLT_cg_playerFovScale;
      if ( !DVARFLT_cg_playerFovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      __asm
      {
        vmulss  xmm0, xmm6, dword ptr [rdi+28h]
        vdivss  xmm1, xmm7, xmm0; value
      }
      if ( _RBX->localClientNum == LOCAL_CLIENT_1 )
        Dvar_SetFloat_Internal(DVARFLT_cg_fov1, *(float *)&_XMM1);
      else
        Dvar_SetFloat_Internal(DVARFLT_cg_fov, *(float *)&_XMM1);
    }
  }
  __asm
  {
    vmovaps xmm11, [rsp+0C8h+var_88]
    vmovaps xmm7, [rsp+0C8h+var_48]
    vmovaps xmm6, [rsp+0C8h+var_38]
  }
  if ( _RBX->baseFovLerpInfo.timer > 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1707, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_BASE_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_BASE_FOV_LERP )") )
      __debugbreak();
    _RBX->baseFovLerpInfo.timer -= _RBX->frametime;
    __asm { vmovss  xmm2, dword ptr [rbx+66A70h] }
    if ( _RBX->baseFovLerpInfo.timer > 0 )
    {
      if ( _RBX->baseFovLerpInfo.duration > 0 )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, ecx
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm3, xmm1, xmm0
          vmulss  xmm0, xmm3, dword ptr [rbx+66A6Ch]
          vsubss  xmm1, xmm8, xmm3
          vmulss  xmm2, xmm1, xmm2
          vaddss  xmm1, xmm2, xmm0; value
        }
        goto LABEL_51;
      }
    }
    else
    {
      _RBX->baseFovLerpInfo.timer = 0;
    }
    __asm { vmovaps xmm1, xmm2 }
LABEL_51:
    Dvar_SetFloat_Internal(DVARFLT_cg_targetBaseFov, *(float *)&_XMM1);
  }
  __asm { vmovaps xmm8, [rsp+0C8h+var_58] }
}

/*
==============
CG_View_UpdateFovLerpPreset
==============
*/
void CG_View_UpdateFovLerpPreset(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  int CurrentPresetIndex; 
  const dvar_t *v8; 
  int v9; 
  int integer; 
  bool v11; 
  int v12; 
  int fovLastPresetIndex; 
  int v14; 
  int fovPresetLerpTimer; 
  int v22; 
  bool v23; 
  const dvar_t *v32; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) )
  {
    _RDI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2087, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    CurrentPresetIndex = BG_FovLerp_GetCurrentPresetIndex(p_predictedPlayerState);
    v8 = DCONST_DVARINT_fovLerpDefaultPresetIndex;
    v9 = CurrentPresetIndex;
    if ( !DCONST_DVARINT_fovLerpDefaultPresetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovLerpDefaultPresetIndex") )
      __debugbreak();
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    v11 = 0;
    v12 = 0;
    if ( (v9 || (fovLastPresetIndex = _RDI->fovLastPresetIndex) == 0 || (_RDI->fovLastPresetIndex = 0, v11 = fovLastPresetIndex != integer, fovLastPresetIndex == integer)) && v9 == _RDI->fovLastPresetIndex )
    {
      fovPresetLerpTimer = _RDI->fovPresetLerpTimer;
    }
    else
    {
      if ( _RDI->fovLerpTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2108, ASSERT_TYPE_ASSERT, "(cgameGlob->fovLerpTimer == 0)", "%s\n\tYou cannot use FOV lerp system at the same time as using FOV Preset Lerp system", "cgameGlob->fovLerpTimer == 0") )
        __debugbreak();
      if ( !v9 && !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2109, ASSERT_TYPE_ASSERT, "((presetIndex != ( 0 )) || forceToDefaultFov)", (const char *)&queryFormat, "(presetIndex != INVALID_FOV_LERP_PRESET_INDEX) || forceToDefaultFov") )
        __debugbreak();
      v14 = v9;
      if ( v11 )
        v14 = integer;
      fovPresetLerpTimer = BG_FovLerp_GetDuration(v14);
      *(double *)&_XMM0 = BG_FovLerp_GetTargetFov(v14);
      __asm { vmovaps xmm6, xmm0 }
      BG_FovLerp_IsAbsoluteValue(v14);
      _RBX = DVARFLT_cg_fov1;
      if ( localClientNum != LOCAL_CLIENT_1 )
        _RBX = DVARFLT_cg_fov;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+5Ch]; max
        vmovss  xmm1, dword ptr [rbx+58h]; min
        vmovaps xmm0, xmm6; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = CG_View_GetFovUnscaledDvarValue(localClientNum);
      __asm
      {
        vmovss  dword ptr [rdi+66A9Ch], xmm0
        vmovss  dword ptr [rdi+66AA0h], xmm6
      }
      _RDI->fovPresetLerpTimer = fovPresetLerpTimer;
      _RDI->fovPresetLerpDuration = fovPresetLerpTimer;
      _RDI->fovLastPresetIndex = v9;
    }
    if ( fovPresetLerpTimer > 0 )
    {
      v22 = fovPresetLerpTimer - _RDI->frametime;
      if ( v22 > 0 )
        v12 = v22;
      v23 = _RDI->fovPresetLerpDuration <= 0;
      _RDI->fovPresetLerpTimer = v12;
      if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2136, ASSERT_TYPE_ASSERT, "(cgameGlob->fovPresetLerpDuration > 0)", (const char *)&queryFormat, "cgameGlob->fovPresetLerpDuration > 0") )
        __debugbreak();
      __asm
      {
        vmovd   xmm1, dword ptr [rdi+66AA4h]
        vmovd   xmm0, dword ptr [rdi+66AA8h]
        vmovss  xmm6, cs:__real@3f800000
        vcvtdq2ps xmm1, xmm1
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      v32 = DVARFLT_cg_fov1;
      __asm
      {
        vsubss  xmm3, xmm6, xmm0
        vmulss  xmm0, xmm3, dword ptr [rdi+66AA0h]
        vsubss  xmm1, xmm6, xmm3
        vmulss  xmm2, xmm1, dword ptr [rdi+66A9Ch]
        vaddss  xmm1, xmm2, xmm0; value
      }
      if ( localClientNum != LOCAL_CLIENT_1 )
        v32 = DVARFLT_cg_fov;
      Dvar_SetFloat_Internal(v32, *(float *)&_XMM1);
    }
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
CG_View_UpdateFovUserScale
==============
*/
void CG_View_UpdateFovUserScale(cg_t *cgameGlob)
{
  ;
}

/*
==============
CG_View_UpdateLocSelInfo
==============
*/
void CG_View_UpdateLocSelInfo(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  bool v4; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  __int64 locationSelectorNumInputs; 
  usercmd_s ucmd; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  v4 = LocalClientGlobals->predictedPlayerState.pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( (!BG_IsLocationSelectorActive(CgWeaponMap::ms_instance[v1], &v3->predictedPlayerState) || v4) && !CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 16) )
  {
    if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 8) )
      return;
    CL_Keys_RemoveCatcher((LocalClientNum_t)v1, -9);
    goto LABEL_19;
  }
  if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 8) )
  {
    CL_Keys_AddCatcher((LocalClientNum_t)v1, 8);
LABEL_19:
    if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v1, 16) )
      CG_View_ResetLocSelInfo(v3);
    return;
  }
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( CL_GetUserCmd((LocalClientNum_t)v1, CmdNumber, &ucmd) )
  {
    if ( (ucmd.buttons & 0x8000000000004000ui64) != 0 )
    {
      locationSelectorNumInputs = v3->locationSelectorNumInputs;
      if ( (int)locationSelectorNumInputs < 4 )
      {
        v3->locationSelectorInputs[locationSelectorNumInputs].v[0] = v3->locationSelectorCursor.v[0];
        v3->locationSelectorInputs[locationSelectorNumInputs].v[1] = v3->locationSelectorCursor.v[1];
        v3->locationSelectorAngles[v3->locationSelectorNumInputs] = v3->locationSelectorAngle;
        v3->locationSelectorInputTimes[v3->locationSelectorNumInputs++] = v3->time;
      }
    }
  }
}

/*
==============
CG_View_UpdateMainThreadTraceSafeLogic
==============
*/
void CG_View_UpdateMainThreadTraceSafeLogic(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  CG_ContextMount_UpdateHintIcon(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6705, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( XCamData::IsActive(&LocalClientGlobals->xCam) )
    XCamData::CalcValues(&LocalClientGlobals->xCam, LocalClientGlobals->time, 1);
}

/*
==============
CG_View_UpdatePlayerView
==============
*/
void CG_View_UpdatePlayerView(const LocalClientNum_t localClientNum, const bool saveLastTime, const int msec, const int inputTime, const int serverTime, PlayerViewState *const viewState)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v10; 
  const playerState_s *p_predictedPlayerState; 
  int integer; 
  int v14; 
  __int64 v15; 
  LocalClientNum_t v16; 
  int damageTime; 
  __int64 v23; 
  __int64 v24; 
  ViewMovementParams params; 

  if ( !viewState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 831, ASSERT_TYPE_ASSERT, "(viewState)", (const char *)&queryFormat, "viewState") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v10 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  _RBX = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v14 = inputTime - viewState->inputTime;
  if ( integer < 0 )
  {
    LODWORD(v24) = integer;
    LODWORD(v23) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v23, v24) )
      __debugbreak();
  }
  if ( integer < v14 )
    v14 = integer;
  if ( v14 < 0 )
    v14 = 0;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 768, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(p_predictedPlayerState->pm_type - 4) > 2 )
  {
    if ( viewState == (PlayerViewState *const)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 688, ASSERT_TYPE_ASSERT, "(viewMoveState)", (const char *)&queryFormat, "viewMoveState") )
      __debugbreak();
    if ( _RBX == (cg_t *)-25024i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 689, ASSERT_TYPE_ASSERT, "(outViewValues)", (const char *)&queryFormat, "outViewValues") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 690, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v15 = _RBX->localClientNum;
    params.ps = p_predictedPlayerState;
    if ( !CgWeaponMap::ms_instance[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v16 = _RBX->localClientNum;
    params.weaponMap = CgWeaponMap::ms_instance[v15];
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+0A8h+msec]
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vmovss  [rsp+0A8h+params.updateTime], xmm1
    }
    params.handler = CgHandler::getHandler(v16);
    params.serverTime = serverTime;
    *(double *)&_XMM0 = BG_GetSpeed(params.ps, serverTime, params.handler);
    damageTime = _RBX->damageTime;
    __asm { vmovss  [rsp+0A8h+params.xySpeed], xmm0 }
    if ( damageTime )
      params.damageTime = _RBX->time - damageTime;
    else
      params.damageTime = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+49D7Ch]
      vmovss  xmm1, dword ptr [rbx+49D80h]
      vmovss  [rsp+0A8h+params.damagePitch], xmm0
      vmovss  [rsp+0A8h+params.damageRoll], xmm1
    }
    BG_CalculateViewMovement_Angles(&params, &viewState->viewMoveState, &_RBX->playerViewValues.viewMoveAngles);
    CG_View_UpdateWeaponMovement(&viewState->weapMoveState, &_RBX->playerViewValues, _RBX, msec, v14, serverTime);
  }
  if ( saveLastTime )
  {
    viewState->commandTime = p_predictedPlayerState->commandTime;
    viewState->inputTime = inputTime;
  }
}

/*
==============
CG_View_UpdateRadiantView
==============
*/
void CG_View_UpdateRadiantView(LocalClientNum_t localClientNum)
{
  _QWORD *v5; 
  bool v9; 
  bool v11; 
  bool v12; 
  bool v13; 
  int v14; 
  const dvar_t *v15; 
  bool enabled; 
  const dvar_t *v17; 
  int v84; 
  int v89; 
  char v93; 

  v5 = NtCurrentTeb()->Reserved1[11];
  __asm { vmovaps [rsp+88h+var_48], xmm9 }
  if ( dword_1512F3638 > *(_DWORD *)(v5[tls_index] + 1772i64) )
  {
    j__Init_thread_header(&dword_1512F3638);
    if ( dword_1512F3638 == -1 )
    {
      v89 = clock();
      *(_QWORD *)&camera_timelock.delay = 500i64;
      camera_timelock.ref = v89;
      j__Init_thread_footer(&dword_1512F3638);
    }
  }
  __asm
  {
    vmovss  xmm9, cs:__real@3f000000
    vmovaps xmm2, xmm9; epsilon
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  v9 = VecNCompareCustomEpsilon(debug_last_origin.v, _RDI->predictedPlayerState.origin.v, *(float *)&_XMM2, 3);
  __asm { vmovaps xmm2, xmm9; epsilon }
  v11 = v9;
  v12 = !VecNCompareCustomEpsilon(debug_last_viewangles.v, _RDI->predictedPlayerState.viewangles.v, *(float *)&_XMM2, 3);
  if ( !v11 || v12 )
    v12 = 1;
  v13 = _RDI->predictedPlayerState.pm_type == 3 || _RDI->radiantCamInUse;
  if ( _RDI->radiantCamReceived )
  {
    _RDI->radiantCamReceived = 0;
    if ( camera_timelock.value == 1 )
      goto LABEL_14;
    v14 = clock() - camera_timelock.ref;
    if ( v14 < 0 )
      camera_timelock.ref = clock();
    if ( v14 > camera_timelock.delay )
    {
LABEL_14:
      camera_timelock.value = 1;
      camera_timelock.ref = clock();
      if ( v13 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
        {
          if ( !s_dvars_cached )
          {
            v15 = DVARBOOL_cg_drawGun;
            if ( !DVARBOOL_cg_drawGun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawGun") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v15);
            enabled = v15->current.enabled;
            v17 = DVARBOOL_cg_draw2D;
            s_cg_drawgun_value = enabled;
            if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v17);
            s_cg_draw2D_value = v17->current.enabled;
            Dvar_SetBool_Internal(DVARBOOL_cg_drawGun, 0);
            Dvar_SetBool_Internal(DVARBOOL_cg_draw2D, 0);
            s_dvars_cached = 1;
          }
          _RDI->radiantCamUseOriginOverride = 1;
        }
        else
        {
          __asm { vmovaps [rsp+88h+var_28], xmm6 }
          _RDI->predictedPlayerState.origin.v[0] = _RDI->radiantCameraOrigin.v[0];
          _RDI->predictedPlayerState.origin.v[1] = _RDI->radiantCameraOrigin.v[1];
          _RDI->predictedPlayerState.origin.v[2] = _RDI->radiantCameraOrigin.v[2];
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+40h]
            vsubss  xmm1, xmm0, dword ptr [rdi+1F0h]
            vmovss  dword ptr [rdi+40h], xmm1
            vmovss  xmm0, dword ptr [rdi+18054h]
            vsubss  xmm1, xmm0, dword ptr [rdi+1E0h]
            vaddss  xmm6, xmm1, dword ptr [rdi+0BCh]
            vmovss  xmm3, dword ptr [rdi+18058h]
            vmovss  xmm5, dword ptr [rdi+1805Ch]
            vmovss  dword ptr [rdi+0BCh], xmm6
            vsubss  xmm0, xmm3, dword ptr [rdi+1E4h]
            vaddss  xmm1, xmm0, dword ptr [rdi+0C0h]
            vmovss  dword ptr [rdi+0C0h], xmm1
            vsubss  xmm0, xmm5, dword ptr [rdi+1E8h]
            vaddss  xmm1, xmm0, dword ptr [rdi+0C4h]
            vmulss  xmm0, xmm6, cs:__real@43360b61
            vmovss  xmm5, cs:__real@43b40000
            vmovss  xmm6, cs:__real@37800000
            vmovss  dword ptr [rdi+0C4h], xmm1
            vaddss  xmm2, xmm0, xmm9
            vmovaps [rsp+88h+var_38], xmm8
            vxorps  xmm8, xmm8, xmm8
            vroundss xmm0, xmm8, xmm2, 1
            vcvttss2si eax, xmm0
          }
          _ECX = (unsigned __int16)_EAX;
          __asm
          {
            vmovd   xmm1, ecx
            vcvtdq2ps xmm1, xmm1
            vmulss  xmm4, xmm1, xmm6
            vaddss  xmm2, xmm4, xmm9
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm0, xmm4, xmm3
            vmulss  xmm0, xmm0, xmm5
            vmovss  dword ptr [rdi+0BCh], xmm0
            vmovss  xmm1, dword ptr [rdi+0C0h]
            vmulss  xmm0, xmm1, cs:__real@43360b61
            vaddss  xmm3, xmm0, xmm9
            vroundss xmm0, xmm8, xmm3, 1
            vcvttss2si eax, xmm0
          }
          _ECX = (unsigned __int16)_EAX;
          __asm
          {
            vmovd   xmm0, ecx
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm4, xmm0, xmm6
            vaddss  xmm2, xmm4, xmm9
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm5
            vmovss  dword ptr [rdi+0C0h], xmm0
            vmovss  xmm1, dword ptr [rdi+0C4h]
            vmulss  xmm0, xmm1, cs:__real@43360b61
            vaddss  xmm3, xmm0, xmm9
            vroundss xmm0, xmm8, xmm3, 1
            vcvttss2si eax, xmm0
          }
          _ECX = (unsigned __int16)_EAX;
          __asm
          {
            vmovd   xmm0, ecx
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm4, xmm0, xmm6
            vaddss  xmm2, xmm4, xmm9
            vroundss xmm3, xmm8, xmm2, 1
            vsubss  xmm1, xmm4, xmm3
            vmulss  xmm0, xmm1, xmm5
            vmovss  dword ptr [rdi+0C4h], xmm0
          }
          _RDI->predictedPlayerState.viewangles.v[0] = _RDI->radiantCameraAngles.v[0];
          _RDI->predictedPlayerState.viewangles.v[1] = _RDI->radiantCameraAngles.v[1];
          _RDI->predictedPlayerState.viewangles.v[2] = _RDI->radiantCameraAngles.v[2];
          RefdefView_SetOrg(&_RDI->refdef.view, &_RDI->radiantCameraOrigin);
          _RDI->refdefViewAngles.v[0] = _RDI->radiantCameraAngles.v[0];
          _RDI->refdefViewAngles.v[1] = _RDI->radiantCameraAngles.v[1];
          _RDI->refdefViewAngles.v[2] = _RDI->radiantCameraAngles.v[2];
          AnglesToAxis(&_RDI->refdefViewAngles, &_RDI->refdef.view.axis);
          CG_PlayerState_ClearExtrapolatedPlayerState(localClientNum);
          __asm
          {
            vmovaps xmm8, [rsp+88h+var_38]
            vmovaps xmm6, [rsp+88h+var_28]
          }
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+38h]
          vmovss  dword ptr cs:debug_last_origin, xmm0
          vmovss  xmm1, dword ptr [rdi+3Ch]
          vmovss  dword ptr cs:debug_last_origin+4, xmm1
          vmovss  xmm0, dword ptr [rdi+40h]
          vmovss  dword ptr cs:debug_last_origin+8, xmm0
          vmovss  xmm1, dword ptr [rdi+1E0h]
          vmovss  dword ptr cs:debug_last_viewangles, xmm1
          vmovss  xmm0, dword ptr [rdi+1E4h]
          vmovss  dword ptr cs:debug_last_viewangles+4, xmm0
          vmovss  xmm1, dword ptr [rdi+1E8h]
          vmovss  dword ptr cs:debug_last_viewangles+8, xmm1
        }
      }
    }
  }
  else if ( v12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+38h]
      vmovss  dword ptr cs:debug_last_origin, xmm0
      vmovss  xmm1, dword ptr [rdi+3Ch]
      vmovss  dword ptr cs:debug_last_origin+4, xmm1
      vmovss  xmm0, dword ptr [rdi+40h]
      vmovss  dword ptr cs:debug_last_origin+8, xmm0
      vmovss  xmm1, dword ptr [rdi+1E0h]
      vmovss  dword ptr cs:debug_last_viewangles, xmm1
      vmovss  xmm0, dword ptr [rdi+1E4h]
      vmovss  dword ptr cs:debug_last_viewangles+4, xmm0
      vmovss  xmm1, dword ptr [rdi+1E8h]
      vmovss  dword ptr cs:debug_last_viewangles+8, xmm1
    }
    if ( camera_timelock.value == 2 )
      goto LABEL_32;
    v84 = clock() - camera_timelock.ref;
    if ( v84 < 0 )
      camera_timelock.ref = clock();
    if ( v84 > camera_timelock.delay )
    {
LABEL_32:
      camera_timelock.value = 2;
      camera_timelock.ref = clock();
      _RDI->radiantCameraOrigin.v[0] = _RDI->predictedPlayerState.origin.v[0];
      _RDI->radiantCameraOrigin.v[1] = _RDI->predictedPlayerState.origin.v[1];
      _RDI->radiantCameraOrigin.v[2] = _RDI->predictedPlayerState.origin.v[2];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1F0h]
        vaddss  xmm1, xmm0, dword ptr [rdi+18050h]
        vmovss  dword ptr [rdi+18050h], xmm1
      }
      _RDI->radiantCameraAngles.v[0] = _RDI->predictedPlayerState.viewangles.v[0];
      _RDI->radiantCameraAngles.v[1] = _RDI->predictedPlayerState.viewangles.v[1];
      _RDI->radiantCameraAngles.v[2] = _RDI->predictedPlayerState.viewangles.v[2];
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
      {
        CG_View_RestoreCachedMPDvarsForRadiantView();
        _RDI->radiantCamUseOriginOverride = 0;
      }
      if ( CG_IsRadiantSync(RADIANT_SYNC_TYPE_CAMERA) )
      {
        rdbgRadiantSendCameraPosition(&_RDI->radiantCameraOrigin, &_RDI->radiantCameraAngles);
        _RDI->radiantCamUFOmode = 1;
      }
    }
  }
  else if ( !v13 && _RDI->radiantCamUFOmode )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
    {
      CG_View_RestoreCachedMPDvarsForRadiantView();
      _RDI->radiantCamUseOriginOverride = 0;
    }
    _RDI->radiantCamUFOmode = 0;
  }
  _R11 = &v93;
  __asm { vmovaps xmm9, xmmword ptr [r11-30h] }
}

/*
==============
CG_View_UpdateSceneDepthOfField
==============
*/

void __fastcall CG_View_UpdateSceneDepthOfField(const LocalClientNum_t localClientNum, bool isMultiplayer, bool isThirdPerson, double multiplayerAdsStart, float multiplayerAdsEnd)
{
  CgWeaponMap *Instance; 
  DofPhysicalScriptingState dofPhysicalScriptingState; 
  char v45; 
  char v60; 
  bool v79; 
  bool v80; 
  bool v81; 
  bool v113; 
  int integer; 
  float v115; 
  DofPhysicalScriptingState v116; 
  bool v117; 
  const dvar_t *v118; 
  bool v119; 
  float fmt; 
  float fmta; 
  float maxFstop; 
  float maxFstopa; 
  float v127; 
  float v128; 
  FocusParams focusParams; 
  FocusParams focusDistance; 
  FocusParams v131; 
  char v139; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmm6, xmm3
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6436, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+150h+focusParams.apertureSpeed], xmm7
    vmovss  [rsp+150h+focusParams.focusSpeed], xmm7
    vmovss  [rsp+150h+focusParams.cocScale], xmm7
  }
  _RDI->refdef.dofPhysical.enabled = R_DOF_GetPhysicalEnable();
  if ( R_DOF_GetPhysicalEnable() )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+150h+var_58+8], xmm8
      vmovaps [rsp+150h+var_88+8], xmm11
      vmovaps [rsp+150h+var_A8+8], xmm13
      vmovaps [rsp+150h+var_B8+8], xmm14
    }
    Instance = CgWeaponMap::GetInstance(localClientNum);
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+738h]
      vmovss  xmm13, dword ptr [rdi+748h]
    }
    if ( BG_IsUsingOffhandGestureWeaponADSSupport(Instance, &_RDI->predictedPlayerState) )
    {
      *(double *)&_XMM0 = BG_GetOffhandAdsFrac(&_RDI->predictedPlayerState);
      __asm
      {
        vmovss  xmm13, dword ptr [rdi+720h]
        vmovaps xmm8, xmm0
      }
    }
    dofPhysicalScriptingState = _RDI->predictedPlayerState.dofPhysicalScriptingState;
    __asm
    {
      vmovaps [rsp+150h+var_68+8], xmm9
      vmovaps [rsp+150h+var_78+8], xmm10
      vmovaps [rsp+150h+var_98+8], xmm12
      vmovss  xmm14, cs:__real@3f800000
    }
    if ( dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_BOTH )
    {
      CG_InitFocusParamsFromScriptMode(localClientNum, &_RDI->predictedPlayerState, &focusParams);
      __asm
      {
        vmovss  xmm0, [rsp+150h+focusParams.apertureSpeed]
        vmovss  xmm5, [rsp+150h+focusParams.fstop]
        vmovss  xmm12, [rsp+150h+focusParams.focusSpeed]
        vmovss  xmm9, [rsp+150h+focusParams.cocScale]
        vmovss  xmm10, [rsp+150h+focusParams.focusDistance]
      }
    }
    else
    {
      if ( dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_ADS )
      {
        CG_InitFocusParamsFromScriptMode(localClientNum, &_RDI->predictedPlayerState, &focusDistance);
      }
      else
      {
        _RAX = r_dof_physical_filmDiagonal;
        __asm
        {
          vmovss  xmm0, cs:__real@3a9acf3e; sharpCocDiameter
          vmovss  xmm1, dword ptr [rax+28h]; filmDiagonalLength
        }
        *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm { vmovaps xmm3, xmm0; sharpCoc }
        if ( isMultiplayer )
        {
          __asm { vmovss  xmm1, [rbp+50h+multiplayerAdsEnd] }
        }
        else
        {
          __asm
          {
            vmovss  xmm6, dword ptr [rdi+1230h]
            vmovss  xmm1, dword ptr [rdi+1234h]
          }
        }
        _RAX = r_dof_physical_minFocusDistance;
        __asm { vmovss  xmm0, dword ptr [rax+28h] }
        _RAX = r_dof_physical_adsMaxFstop;
        __asm
        {
          vmovss  dword ptr [rsp+150h+var_120], xmm0
          vmovss  xmm2, dword ptr [rax+28h]
        }
        _RAX = r_dof_physical_adsMinFstop;
        __asm
        {
          vmovss  [rsp+150h+maxFstop], xmm2
          vmovaps xmm2, xmm1; end
          vmovaps xmm1, xmm6; start
          vmovss  xmm0, dword ptr [rax+28h]
          vmovss  dword ptr [rsp+150h+fmt], xmm0
          vmovss  xmm0, dword ptr [rdi+6974h]; focalLength
        }
        R_GetFocusPlaneAndApertureFromRange(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, maxFstop, v127, &focusDistance.focusDistance, &focusDistance.fstop);
        __asm { vmovss  xmm0, [rsp+150h+var_E8.focusDistance] }
        _RAX = r_dof_physical_adsFocusSpeed;
        __asm
        {
          vmovss  [rsp+150h+var_E8.cocScale], xmm14
          vcomiss xmm0, dword ptr [rdi+6BD0h]
        }
        if ( v45 )
          __asm { vmovss  xmm0, dword ptr [rax+28h] }
        else
          __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
        __asm
        {
          vmovss  [rsp+150h+var_E8.focusSpeed], xmm0
          vmovss  xmm0, [rsp+150h+var_E8.fstop]
          vcomiss xmm0, dword ptr [rdi+6BCCh]
        }
        if ( v45 )
          __asm { vmovss  xmm0, dword ptr [rax+30h] }
        else
          __asm { vmovss  xmm0, dword ptr [rax+34h] }
        __asm { vmovss  [rsp+150h+var_E8.apertureSpeed], xmm0 }
      }
      if ( _RDI->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_HIP )
      {
        CG_InitFocusParamsFromScriptMode(localClientNum, &_RDI->predictedPlayerState, &v131);
      }
      else if ( _RDI->weaponInspectDofActive )
      {
        CG_InitFocusParamsFromWeaponInspect(&_RDI->predictedPlayerState, _RDI, localClientNum, &v131);
      }
      else
      {
        _RAX = r_dof_physical_hipSharpCocDiameter;
        __asm { vmovss  xmm0, dword ptr [rax+28h] }
        _RAX = r_dof_physical_filmDiagonal;
        __asm
        {
          vmulss  xmm0, xmm0, cs:__real@3d21428b; sharpCocDiameter
          vmovss  xmm1, dword ptr [rax+28h]; filmDiagonalLength
        }
        *(double *)&_XMM0 = R_GetScaledSharpCocDiameter(*(float *)&_XMM0, *(float *)&_XMM1);
        _RAX = r_dof_physical_hipFstop;
        __asm
        {
          vmovaps xmm2, xmm0; sharpCoc
          vmovss  xmm0, dword ptr [rdi+6974h]; focalLength
          vmovss  xmm1, dword ptr [rax+28h]; fstop
        }
        *(double *)&_XMM0 = R_GetHyperfocalDistance(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        _RAX = r_dof_physical_hipFstop;
        __asm { vmovss  xmm1, dword ptr [rax+28h] }
        _RAX = r_dof_physical_hipFocusSpeed;
        __asm
        {
          vmovss  [rbp+50h+var_D0.fstop], xmm1
          vmovss  [rbp+50h+var_D0.focusDistance], xmm0
          vmovss  [rbp+50h+var_D0.cocScale], xmm7
          vcomiss xmm0, dword ptr [rdi+6BD0h]
        }
        if ( v60 )
          __asm { vmovss  xmm0, dword ptr [rax+28h] }
        else
          __asm { vmovss  xmm0, dword ptr [rax+2Ch] }
        __asm
        {
          vmovss  [rbp+50h+var_D0.focusSpeed], xmm0
          vcomiss xmm1, dword ptr [rdi+6BCCh]
        }
        if ( v60 )
          __asm { vmovss  xmm0, dword ptr [rax+30h] }
        else
          __asm { vmovss  xmm0, dword ptr [rax+34h] }
        __asm { vmovss  [rbp+50h+var_D0.apertureSpeed], xmm0 }
      }
      __asm
      {
        vmulss  xmm1, xmm8, [rsp+150h+var_E8.fstop]
        vsubss  xmm4, xmm14, xmm8
        vmulss  xmm2, xmm4, [rbp+50h+var_D0.fstop]
        vmulss  xmm3, xmm4, [rbp+50h+var_D0.focusDistance]
        vaddss  xmm5, xmm2, xmm1
        vmulss  xmm1, xmm8, [rsp+150h+var_E8.focusDistance]
        vmulss  xmm2, xmm4, [rbp+50h+var_D0.cocScale]
        vaddss  xmm10, xmm3, xmm1
        vmulss  xmm1, xmm8, [rsp+150h+var_E8.cocScale]
        vmulss  xmm3, xmm4, [rbp+50h+var_D0.focusSpeed]
        vaddss  xmm9, xmm2, xmm1
        vmulss  xmm1, xmm8, [rsp+150h+var_E8.focusSpeed]
        vmulss  xmm2, xmm4, [rbp+50h+var_D0.apertureSpeed]
        vaddss  xmm12, xmm3, xmm1
        vmulss  xmm1, xmm8, [rsp+150h+var_E8.apertureSpeed]
        vaddss  xmm0, xmm2, xmm1
      }
    }
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vcvtsi2ss xmm11, xmm11, dword ptr [rdi+65E4h]
    }
    v79 = _RDI->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && (r_dof_physical_hipEnable->current.enabled || _RDI->weaponInspectDofActive);
    _RDI->refdef.dofPhysical.hipEnabled = v79;
    v80 = _RDI->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED;
    _RDI->refdef.dofPhysical.scriptingEnabled = _RDI->predictedPlayerState.dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
    __asm { vcomiss xmm8, xmm7 }
    v81 = !v80;
    v80 = !_RDI->refdef.xcamOverridesSceneDoF;
    _RDI->refdef.dofPhysical.adsEnabled = v81;
    LODWORD(_RDI->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
    LODWORD(_RDI->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
    if ( v80 )
    {
      if ( r_dof_physical_hipEnable->current.enabled )
        goto LABEL_43;
      __asm { vucomiss xmm13, xmm7 }
      if ( r_dof_physical_hipEnable->current.enabled )
        goto LABEL_43;
      __asm { vcomiss xmm8, xmm7 }
      if ( !r_dof_physical_hipEnable->current.enabled )
      {
LABEL_43:
        __asm { vmulss  xmm2, xmm0, cs:__real@3a83126f; speed }
        _RBX = &_RDI->refdef.dofPhysicalFocusState;
        __asm
        {
          vmovaps xmm1, xmm11; elapsedTime
          vmovaps xmm0, xmm5; targetFstop
        }
        R_UpdateAperture(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &_RDI->refdef.dofPhysicalFocusState.fstop);
        __asm
        {
          vmulss  xmm4, xmm12, cs:__real@3a83126f
          vmovss  xmm1, dword ptr [rbx]; fstop
          vmovss  xmm0, dword ptr [rdi+6974h]; focalLength
        }
        _R14 = &_RDI->refdef.dofPhysicalFocusState.focusDistance;
        _RAX = r_dof_physical_minFocusDistance;
        __asm
        {
          vmovaps xmm2, xmm10; targetFocusDistance
          vmovss  xmm3, dword ptr [rax+28h]
          vmovss  dword ptr [rsp+150h+var_120], xmm3
          vmovss  [rsp+150h+maxFstop], xmm7
          vmovaps xmm3, xmm11; elapsedTime
          vmovss  dword ptr [rsp+150h+fmt], xmm4
        }
        R_UpdateFocus(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, maxFstopa, v128, &_RDI->refdef.dofPhysicalFocusState.focusDistance, &_RDI->refdef.dofPhysicalFocusState.focusGradient);
        __asm
        {
          vmovss  xmm2, cs:__real@3c23d70a; scaleSpeed
          vmovaps xmm1, xmm11; elapsedTime
          vmovaps xmm0, xmm9; targetCocScale
        }
        R_UpdateCocScale(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, &_RDI->refdef.dofPhysicalFocusState.cocScale);
      }
      else
      {
        _RBX = &_RDI->refdef.dofPhysicalFocusState;
        _RDI->refdef.dofPhysicalFocusState.focusGradient = 0.0;
        _R14 = &_RDI->refdef.dofPhysicalFocusState.focusDistance;
        __asm
        {
          vmovss  dword ptr [rbx], xmm5
          vmovss  dword ptr [r14], xmm10
          vmovss  dword ptr [rdi+6BD4h], xmm9
        }
      }
      if ( _RDI->refdef.weaponOverridesSceneDoF )
      {
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rdi+69C8h]
          vmovss  xmm2, cs:__real@41f00000; max
          vsubss  xmm6, xmm14, xmm8
          vmulss  xmm0, xmm6, dword ptr [rbx]
          vaddss  xmm0, xmm1, xmm0; val
          vmovss  xmm1, cs:__real@3e000000; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm1, xmm8, dword ptr [rdi+69C4h]
          vmovss  dword ptr [rbx], xmm0
          vmulss  xmm0, xmm6, dword ptr [r14]
          vaddss  xmm1, xmm1, xmm0
          vmovss  dword ptr [r14], xmm1
        }
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+150h+var_B8+8]
      vmovaps xmm13, [rsp+150h+var_A8+8]
      vmovaps xmm12, [rsp+150h+var_98+8]
      vmovaps xmm11, [rsp+150h+var_88+8]
      vmovaps xmm10, [rsp+150h+var_78+8]
      vmovaps xmm9, [rsp+150h+var_68+8]
      vmovaps xmm8, xmmword ptr [rsp+150h+var_58+8]
    }
    v113 = _RDI->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && r_dof_physical_hipEnable->current.enabled;
    _RDI->refdef.dofPhysical.hipEnabled = v113;
    _RDI->refdef.dofPhysical.scriptingEnabled = _RDI->predictedPlayerState.dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
    __asm { vcomiss xmm7, dword ptr [rdi+738h] }
    _RDI->refdef.dofPhysical.adsEnabled = 0;
    LODWORD(_RDI->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
    LODWORD(_RDI->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
    integer = r_dof_physical_maxCocDiameter->current.integer;
    _RDI->refdef.dofPhysical.fstop = _RDI->refdef.dofPhysicalFocusState.fstop;
    v115 = _RDI->refdef.dofPhysicalFocusState.focusDistance;
    LODWORD(_RDI->refdef.dofPhysical.maxCocDiameter) = integer;
    _RDI->refdef.dofPhysical.focusDistance = v115;
    v116 = _RDI->predictedPlayerState.dofPhysicalScriptingState;
    v117 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
    v118 = DVARBOOL_killswitch_weapon_based_dof_disable;
    v119 = v117;
    if ( !DVARBOOL_killswitch_weapon_based_dof_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_based_dof_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v118);
    if ( !v118->current.enabled && v116 == DOF_PHYSICAL_SCRIPTING_DISABLED && v119 )
      __asm { vcomiss xmm7, dword ptr [rdi+738h] }
    __asm { vmovss  dword ptr [rdi+17844h], xmm7 }
    _RDI->refdef.dofPhysical.cocScale = _RDI->refdef.dofPhysicalFocusState.cocScale;
  }
  _R11 = &v139;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_View_UpdateSceneLensProfile
==============
*/
void CG_View_UpdateSceneLensProfile(const LocalClientNum_t localClientNum)
{
  int lensProfileMode; 
  float outScale; 
  float outUVScale[5]; 
  int outOverrideProfile; 
  float outFocalLength; 
  float outFStop; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6663, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Camera_GetOverrideLensProfile(localClientNum, &outOverrideProfile, &outFocalLength, &outFStop, &outScale, outUVScale) )
  {
    if ( !outOverrideProfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6675, ASSERT_TYPE_ASSERT, "( camOverrideLensProfile ) != ( LENS_PROFILE_NONE )", "%s != %s\n\t%i, %i", "camOverrideLensProfile", "LENS_PROFILE_NONE", 0, 0i64) )
      __debugbreak();
    _RBX->refdef.lensProfile.mode = outOverrideProfile;
    __asm
    {
      vmovss  xmm0, [rsp+68h+outFocalLength]
      vmovss  dword ptr [rbx+6C10h], xmm0
      vmovss  xmm1, [rsp+68h+outFStop]
      vmovss  dword ptr [rbx+6C14h], xmm1
      vmovss  xmm0, [rsp+68h+outScale]
      vmovss  dword ptr [rbx+6C18h], xmm0
      vmovss  xmm1, [rsp+68h+var_14]
      vmovss  dword ptr [rbx+6C1Ch], xmm1
    }
  }
  else
  {
    lensProfileMode = _RBX->predictedPlayerState.lensProfileMode;
    if ( lensProfileMode )
    {
      _RBX->refdef.lensProfile.mode = lensProfileMode;
      _RBX->refdef.lensProfile.focalLength = _RBX->predictedPlayerState.lensProfileDistortFocalLength;
      _RBX->refdef.lensProfile.aperture = _RBX->predictedPlayerState.lensProfileDistortAperture;
      _RBX->refdef.lensProfile.scale = _RBX->predictedPlayerState.lensProfileScale;
      _RBX->refdef.lensProfile.UVScale = _RBX->predictedPlayerState.lensProfileUVScale;
    }
    else
    {
      _RBX->refdef.lensProfile.mode = 0;
    }
  }
}

/*
==============
CG_View_UpdateScopeOutlineInfo
==============
*/
void CG_View_UpdateScopeOutlineInfo(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  cg_t *v4; 
  unsigned int killCamEntityType; 
  int v6; 
  CgWeaponMap *Instance; 
  bool v12; 
  bool HasThermalScope; 
  bool v14; 
  bool v15; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  const PlayerEquippedWeaponState *v17; 
  Weapon r_weapon; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4666, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->scopeForceEnemyOutlines = 0;
  LocalClientGlobals->scopeForceEnemyOutlinesDisableDepthTest = 0;
  v3 = CG_GetLocalClientGlobals(localClientNum);
  if ( !BG_IsEMPJammed(&v3->predictedPlayerState) )
  {
    v4 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v4->inKillCam || (killCamEntityType = v4->killCamEntityType, killCamEntityType > 0xA) || (v6 = 1178, !_bittest(&v6, killCamEntityType)) )
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      _RAX = BG_GetViewmodelWeapon(Instance, &LocalClientGlobals->predictedPlayerState);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+98h+r_weapon.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rsp+98h+r_weapon.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rax+30h]
        vmovsd  qword ptr [rsp+98h+r_weapon.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
      v12 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
      if ( CG_PlayerUsingOutlineEnemiesTurret(localClientNum) )
      {
        HasThermalScope = CG_PlayerUsingThermalTurret(localClientNum);
LABEL_33:
        LocalClientGlobals->scopeForceEnemyOutlines = 1;
        LocalClientGlobals->scopeForceEnemyOutlinesDisableDepthTest = 0;
        LocalClientGlobals->scopeForceEnemyOutlineColorIndex = 4 * !HasThermalScope + 1;
        return;
      }
      if ( !BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
      {
        v14 = BG_CanHybridToggle(&LocalClientGlobals->predictedPlayerState, &r_weapon, v12) || BG_ScopeOutlinesEnemies(&r_weapon, v12);
        v15 = BG_HasDualFOVEquipped(Instance, &LocalClientGlobals->predictedPlayerState) && v14 ? !LocalClientGlobals->dualViewScope : !CG_GetWeapReticleZoom(LocalClientGlobals, NULL);
        if ( !v15 && !LocalClientGlobals->renderingThirdPerson && BG_ScopeOutlinesEnemies(&r_weapon, v12) )
        {
          if ( BG_CanThermalToggle(&r_weapon, v12) )
          {
            EquippedWeaponStateConst = BG_GetEquippedWeaponStateConst(Instance, &LocalClientGlobals->predictedPlayerState, &r_weapon);
            if ( EquippedWeaponStateConst && EquippedWeaponStateConst->thermalEnabled )
            {
              HasThermalScope = 1;
              goto LABEL_33;
            }
          }
          else
          {
            if ( !BG_CanHybridToggle(&LocalClientGlobals->predictedPlayerState, &r_weapon, v12) )
            {
              HasThermalScope = BG_HasThermalScope(&LocalClientGlobals->predictedPlayerState, &r_weapon, v12);
              goto LABEL_33;
            }
            v17 = BG_GetEquippedWeaponStateConst(Instance, &LocalClientGlobals->predictedPlayerState, &r_weapon);
            if ( v17 && !v17->hybridScope && BG_HasThermalScope(&LocalClientGlobals->predictedPlayerState, &r_weapon, v12) )
            {
              HasThermalScope = 1;
              goto LABEL_33;
            }
          }
          HasThermalScope = 0;
          goto LABEL_33;
        }
      }
    }
  }
}

/*
==============
CG_View_UpdateShellShock
==============
*/

void __fastcall CG_View_UpdateShellShock(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  cg_t *LocalClientGlobals; 
  bool v9; 
  cg_t *v10; 
  const dvar_t *v11; 
  ShockViewTypes type; 
  int time; 
  int ShellShockBlendTime; 
  bool v15; 
  char v18; 
  __int32 v19; 
  __int32 v20; 
  char v34; 
  bool v43; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6554, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->inKillCam && LocalClientGlobals->killCamEntityType )
  {
    v9 = 0;
  }
  else if ( MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator(localClientNum) )
  {
    v9 = 0;
  }
  else
  {
    v10 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6540, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v9 = v10->m_useSellShock && (v10->cvsData.transitory.thermalVisionActive || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_drawShellshock, "cg_drawShellshock"));
  }
  v11 = DCONST_DVARBOOL_cg_drawShellshock;
  type = _RBX->shellshock.parms->screenBlend.type;
  if ( !DCONST_DVARBOOL_cg_drawShellshock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawShellshock") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  time = 0;
  if ( v11->current.enabled )
    ShellShockBlendTime = CG_GetShellShockBlendTime(localClientNum);
  else
    ShellShockBlendTime = 0;
  v15 = 0;
  if ( ShellShockBlendTime > 0 )
    v15 = v9;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( !v15 )
  {
    _RBX->refdef.shellshock.capture = 0;
    _RBX->refdef.shellshock.blend = GFX_SHELLSHOCK_BLEND_NONE;
    goto LABEL_51;
  }
  v18 = 0;
  if ( type )
  {
    v19 = type - 1;
    if ( !v19 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+0Ch]
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, edx
      }
      if ( !_RBX->refdef.shellshock.enabled )
        time = _RBX->time;
      __asm
      {
        vmovaps [rsp+88h+var_48], xmm8
        vcomiss xmm6, xmm0
        vmovss  xmm8, cs:__real@3f800000
        vmovaps xmm0, xmm8; percent
      }
      *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
      __asm
      {
        vmovaps xmm7, xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbp+8]
        vcomiss xmm6, xmm0
      }
      if ( v34 )
        __asm { vdivss  xmm8, xmm6, xmm0 }
      __asm { vmovaps xmm0, xmm8; percent }
      *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
      __asm { vmovaps xmm8, [rsp+88h+var_48] }
      v18 = 2;
      __asm { vmovaps xmm6, xmm0 }
      goto LABEL_46;
    }
    v20 = v19 - 1;
    if ( v20 )
    {
      if ( v20 == 1 )
        v15 = 0;
      goto LABEL_46;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+0Ch]
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
    }
    if ( !_RBX->refdef.shellshock.enabled )
      time = _RBX->time;
    __asm
    {
      vcomiss xmm1, xmm0
      vmovss  xmm0, cs:__real@3f800000; percent
    }
    *(double *)&_XMM0 = BG_ShellshockBlendSmooth(*(float *)&_XMM0);
    __asm { vmovaps xmm7, xmm0 }
  }
  else
  {
    if ( _RBX->cvsData.transitory.thermalVisionActive && ShellShockBlendTime )
      CG_View_GetThermalBlurFactor(localClientNum);
    time = _RBX->time;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, esi
      vcvtsi2ss xmm1, xmm1, eax
      vdivss  xmm1, xmm1, xmm0; Y
      vmovss  xmm0, cs:__real@3c23d70a; X
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vminss  xmm7, xmm0, cs:__real@3f7d70a4 }
  }
  v18 = 1;
LABEL_46:
  v43 = !_RBX->refdef.shellshock.enabled;
  _RBX->refdef.shellshock.capture = time;
  _RBX->refdef.shellshock.blend = v18;
  _RBX->refdef.shellshock.blendCapture = !v43 && v15;
LABEL_51:
  __asm
  {
    vmovss  dword ptr [rbx+174F0h], xmm7
    vmovss  dword ptr [rbx+174F4h], xmm6
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
  _RBX->refdef.shellshock.enabled = v15;
}

/*
==============
CG_View_UpdateShieldViewFx
==============
*/
void CG_View_UpdateShieldViewFx(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_View_UpdateTestFX
==============
*/
void CG_View_UpdateTestFX(const LocalClientNum_t localClientNum, double a2)
{
  __int64 v3; 

  v3 = localClientNum;
  if ( s_testEffect[v3].respawnTime >= 1 && CG_GetLocalClientGlobals(localClientNum)->time > s_testEffect[v3].respawnTime + s_testEffect[v3].time )
    CG_View_PlayTestFx(localClientNum, a2);
}

/*
==============
CG_View_UpdateThirdPersonCameraCollision
==============
*/
void CG_View_UpdateThirdPersonCameraCollision(LocalClientNum_t localClientNum, int ignoreEntNum, const vec3_t *pivotOrigin, const vec3_t *cameraOffset, const vec3_t *viewAngles, bool useUniveralUpTrace, bool isInPhase, vec3_t *outCameraOrigin, vec3_t *outCameraAngles)
{
  cg_t *LocalClientGlobals; 
  __int16 viewlocked_entNum; 
  __int32 v36; 
  int skipEntityCount; 
  int skipEntities[2]; 
  vec3_t *angles; 
  vec3_t end; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 
  char v123; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R14 = cameraOffset;
  _R13 = outCameraOrigin;
  angles = outCameraAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6085, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@41200000
    vmovups xmm0, cs:__xmm@41200000000000000000000000000000
    vmovss  dword ptr [rbp+0A0h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+0A0h+bounds.halfSize+8], xmm1
    vmovups xmmword ptr [rbp+0A0h+bounds.midPoint], xmm0
  }
  AnglesToAxis(viewAngles, &axis);
  __asm
  {
    vmovss  xmm2, dword ptr [r14+4]
    vmulss  xmm1, xmm2, dword ptr [rbp+0A0h+axis+0Ch]
    vaddss  xmm5, xmm1, dword ptr [rsi]
    vmulss  xmm1, xmm2, dword ptr [rbp+0A0h+axis+10h]
    vaddss  xmm6, xmm1, dword ptr [rsi+4]
    vmulss  xmm1, xmm2, dword ptr [rbp+0A0h+axis+14h]
    vaddss  xmm4, xmm1, dword ptr [rsi+8]
    vmovss  xmm3, dword ptr [r14+8]
    vmovss  dword ptr [rsp+1A0h+end], xmm5
    vmovss  dword ptr [rsp+1A0h+end+4], xmm6
  }
  if ( useUniveralUpTrace )
  {
    __asm
    {
      vaddss  xmm0, xmm4, xmm3
      vmovss  dword ptr [rsp+1A0h+end+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+18h]
      vaddss  xmm2, xmm1, xmm5
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+1Ch]
      vmovss  dword ptr [rsp+1A0h+end], xmm2
      vaddss  xmm2, xmm1, xmm6
      vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+20h]
      vmovss  dword ptr [rsp+1A0h+end+4], xmm2
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    }
  }
  skipEntities[0] = ignoreEntNum;
  viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
  if ( viewlocked_entNum != 2047 )
    skipEntities[1] = viewlocked_entNum;
  v36 = 3 * localClientNum + 2;
  skipEntityCount = (viewlocked_entNum != 2047) + 1;
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v36, &results, pivotOrigin, &end, &bounds, skipEntities, skipEntityCount, 0, 65553, 0, NULL, All);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1A0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm5, [rbp+0A0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
    vmovss  xmm3, dword ptr [r14]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm1, dword ptr [rsi]
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm6, xmm2, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm5, xmm2, dword ptr [rsi+8]
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis]
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+4]
    vunpcklps xmm0, xmm7, xmm6
    vmovss  dword ptr [rsp+1A0h+end+8], xmm5
    vmovsd  qword ptr [rsp+1A0h+end], xmm0
  }
  start.v[2] = end.v[2];
  __asm
  {
    vmovss  dword ptr [rsp+1A0h+end], xmm2
    vaddss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+8]
    vmovss  dword ptr [rsp+1A0h+end+4], xmm2
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+1A0h+end+8], xmm2
    vmovsd  qword ptr [rbp+0A0h+start], xmm0
  }
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v36, &results, &start, &end, &bounds, skipEntities, skipEntityCount, 0, 65553, 0, NULL, All);
  __asm
  {
    vmovss  xmm5, [rbp+0A0h+results.fraction]
    vmovss  xmm0, dword ptr [rsp+1A0h+end]
    vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+start]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+4]
    vmulss  xmm1, xmm1, xmm5
    vaddss  xmm7, xmm1, dword ptr [rbp+0A0h+start]
    vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+start+4]
    vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm6, xmm2, dword ptr [rbp+0A0h+start+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+0A0h+start+8]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm5, xmm2, dword ptr [rbp+0A0h+start+8]
    vmovss  dword ptr [rsp+1A0h+end+8], xmm5
    vmovss  dword ptr [rsp+1A0h+end], xmm7
    vmovss  dword ptr [rsp+1A0h+end+4], xmm6
    vmovss  xmm3, cs:__real@46000000
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis]
    vaddss  xmm2, xmm1, xmm7
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+4]
    vmovss  dword ptr [rbp+0A0h+start], xmm2
    vaddss  xmm2, xmm1, xmm6
    vmulss  xmm1, xmm3, dword ptr [rbp+0A0h+axis+8]
    vmovss  dword ptr [rbp+0A0h+start+4], xmm2
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rbp+0A0h+start+8], xmm2
  }
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v36, &results, &end, &start, &bounds_origin, skipEntities, skipEntityCount, 0, 8399153, 1, NULL, All);
  __asm
  {
    vmovss  xmm6, [rbp+0A0h+results.fraction]
    vmovss  xmm0, dword ptr [rbp+0A0h+start]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+end]
    vmovss  xmm0, dword ptr [rbp+0A0h+start+4]
    vmulss  xmm1, xmm1, xmm6
    vaddss  xmm7, xmm1, dword ptr [rsp+1A0h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+end+4]
    vmovss  xmm0, dword ptr [rbp+0A0h+start+8]
    vsubss  xmm4, xmm7, dword ptr [rsi]
    vmulss  xmm2, xmm1, xmm6
    vsubss  xmm1, xmm0, dword ptr [rsp+1A0h+end+8]
    vaddss  xmm5, xmm2, dword ptr [rsp+1A0h+end+4]
    vmulss  xmm2, xmm1, xmm6
    vaddss  xmm3, xmm2, dword ptr [rsp+1A0h+end+8]
    vsubss  xmm6, xmm3, dword ptr [rsi+8]
    vmulss  xmm0, xmm4, xmm4
    vmovss  dword ptr [rbp+0A0h+start+4], xmm5
    vsubss  xmm5, xmm5, dword ptr [rsi+4]
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovss  dword ptr [rbp+0A0h+start+8], xmm3
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rbp+0A0h+vec], xmm0
    vmulss  xmm0, xmm6, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rbp+0A0h+vec+8], xmm0
    vmovss  dword ptr [rbp+0A0h+start], xmm7
    vmovss  dword ptr [rbp+0A0h+vec+4], xmm1
  }
  vectoangles(&vec, angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1A0h+end]
    vmovss  xmm1, dword ptr [rsp+1A0h+end+4]
    vmovss  dword ptr [r13+0], xmm0
    vmovss  xmm0, dword ptr [rsp+1A0h+end+8]
    vmovss  dword ptr [r13+8], xmm0
    vmovss  dword ptr [r13+4], xmm1
  }
  _R11 = &v123;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_View_UpdateTurretZoom
==============
*/

void __fastcall CG_View_UpdateTurretZoom(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v4; 
  CgHandler *Handler; 
  const Weapon *v7; 
  LocalClientNum_t v9; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  char v12; 
  char v13; 
  WeaponSFXPackage *sfxPackage; 
  CgSoundSystem *v28; 
  const SndAliasList *Alias; 
  __int64 v37; 
  __int64 v38; 
  usercmd_s ucmd; 

  v4 = localClientNum;
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4861, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(_RDI->localClientNum);
  v7 = Handler->PlayerTurret(Handler, &_RDI->predictedPlayerState);
  if ( v7->weaponIdx )
  {
    _RSI = BG_WeaponDef(v7, 0);
    if ( CG_PlayerUsingScopedTurret(_RDI->localClientNum) && _RSI->overlayInterface == WEAPOVERLAYINTERFACE_TURRETSCOPE )
    {
      v9 = _RDI->localClientNum;
      __asm { vmovaps [rsp+168h+var_18], xmm6 }
      Client = ClActiveClient::GetClient(v9);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd(_RDI->localClientNum, CmdNumber, &ucmd);
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+59EC4h]
        vmovss  xmm6, dword ptr [rsi+0DC4h]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rdi+65E4h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, cs:__real@37041aa4
        vmulss  xmm3, xmm2, dword ptr [rsi+0DC0h]
        vsubss  xmm4, xmm5, xmm3
        vcomiss xmm4, xmm6
      }
      if ( !v12 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+0DC8h]
          vminss  xmm6, xmm0, xmm4
        }
      }
      __asm
      {
        vsubss  xmm1, xmm6, xmm5
        vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm1, xmm0
      }
      if ( !(v12 | v13) )
      {
        sfxPackage = _RSI->sfxPackage;
        if ( sfxPackage )
        {
          if ( sfxPackage->sounds->fireStopSoundPlayer.name )
          {
            if ( !(_BYTE)CgSoundSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
              __debugbreak();
            if ( (unsigned int)v4 >= CgSoundSystem::ms_allocatedCount )
            {
              LODWORD(v38) = CgSoundSystem::ms_allocatedCount;
              LODWORD(v37) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v37, v38) )
                __debugbreak();
            }
            if ( !CgSoundSystem::ms_soundSystemArray[v4] )
            {
              LODWORD(v38) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v38) )
                __debugbreak();
            }
            v28 = CgSoundSystem::ms_soundSystemArray[v4];
            Alias = SND_FindAlias(_RSI->sfxPackage->sounds->fireStopSoundPlayer.name);
            CgSoundSystem::PlayClientSoundAlias(v28, Alias);
          }
        }
      }
      __asm
      {
        vmovss  dword ptr [rdi+59EC4h], xmm6
        vmovaps xmm6, [rsp+168h+var_18]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rdi+738h]
        vmovss  xmm0, cs:__real@3f800000
        vsubss  xmm1, xmm0, xmm3
        vmulss  xmm2, xmm1, dword ptr [rsi+0DB8h]
        vmulss  xmm0, xmm3, dword ptr [rsi+0DBCh]
        vaddss  xmm1, xmm2, xmm0
        vmovss  dword ptr [rdi+59EC4h], xmm1
      }
    }
  }
}

/*
==============
CG_View_UpdateViewmodelOutline
==============
*/
void CG_View_UpdateViewmodelOutline(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4742, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4743, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F) != 0 )
  {
    if ( LocalClientGlobals->currentHudOutlineIndex != (*(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F) )
    {
      LocalClientGlobals->hudOutlineStartTime = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
      LocalClientGlobals->currentHudOutlineIndex = *(_DWORD *)&LocalClientGlobals->predictedPlayerState.outlineData.viewmodel & 0x3F;
    }
  }
  else
  {
    LocalClientGlobals->currentHudOutlineIndex = 0;
  }
}

/*
==============
CG_View_UpdateWaterSheetingFX
==============
*/
void CG_View_UpdateWaterSheetingFX(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int duration; 
  int time; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4906, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->snap )
  {
    if ( LocalClientGlobals->refdef.waterSheetingFx.enabled )
    {
      duration = LocalClientGlobals->refdef.waterSheetingFx.duration;
      if ( duration > 0 )
      {
        time = LocalClientGlobals->time;
        LocalClientGlobals->refdef.waterSheetingFx.currentTime = time;
        if ( time - LocalClientGlobals->refdef.waterSheetingFx.startMSec > duration )
          *(_WORD *)&LocalClientGlobals->refdef.waterSheetingFx.enabled = 0;
      }
    }
  }
}

/*
==============
CG_View_UpdateWeaponMovement
==============
*/
void CG_View_UpdateWeaponMovement(WeaponMovementState *weapMoveState, PlayerViewValues *outViewValues, const cg_t *const cgameGlob, const int msec, const int inputMsec, const int serverTime)
{
  __int64 localClientNum; 
  LocalClientNum_t v10; 
  int damageTime; 
  int time; 
  const shellshock_parms_t *parms; 
  WeaponMovementParams params; 

  _RBX = cgameGlob;
  if ( !weapMoveState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 711, ASSERT_TYPE_ASSERT, "(weapMoveState)", (const char *)&queryFormat, "weapMoveState") )
    __debugbreak();
  if ( !outViewValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 712, ASSERT_TYPE_ASSERT, "(outViewValues)", (const char *)&queryFormat, "outViewValues") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 713, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = _RBX->localClientNum;
  params.ps = &_RBX->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = _RBX->localClientNum;
  params.weaponMap = CgWeaponMap::ms_instance[localClientNum];
  params.handler = CgHandler::getHandler(v10);
  _RAX = BG_GetViewmodelWeapon(params.weaponMap, params.ps);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+47h+params.weapon.weaponIdx], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbp+47h+params.weapon.attachmentVariationIndices+5], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbp+47h+params.weapon.attachmentVariationIndices+15h], xmm0
  }
  LODWORD(_RAX) = *(_DWORD *)&_RAX->weaponCamo;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rbp+47h+inputMsec]
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vcvtsi2ss xmm0, xmm0, r15d
    vmulss  xmm0, xmm0, cs:__real@3a83126f
    vmovss  [rsp+120h+params.updateTime], xmm0
    vmovss  [rsp+120h+params.inputDeltaTime], xmm2
  }
  *(_DWORD *)&params.weapon.weaponCamo = (_DWORD)_RAX;
  params.serverTime = serverTime;
  *(double *)&_XMM0 = BG_GetSpeed(params.ps, serverTime, params.handler);
  damageTime = _RBX->damageTime;
  time = _RBX->time;
  __asm { vmovss  [rbp+47h+params.xySpeed], xmm0 }
  if ( damageTime )
    params.damageTime = time - damageTime;
  else
    params.damageTime = 0;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+49D7Ch]
    vmovss  xmm1, dword ptr [rbx+49D80h]
    vmovss  [rbp+47h+params.damagePitch], xmm0
    vmovss  [rbp+47h+params.damageRoll], xmm1
  }
  parms = _RBX->shellshock.parms;
  params.shellShockDeltaTime = _RBX->shellshock.duration + _RBX->shellshock.startTime + params.ps->deltaTime - time;
  if ( parms )
    params.shellShockFadeTime = parms->view.fadeTime;
  else
    params.shellShockFadeTime = 3000;
  params.flags = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM) && _RBX->playerTeleported )
    params.flags |= 1u;
  BG_CalculateWeaponMovement(&params, weapMoveState, &outViewValues->weapTiltOffset, &outViewValues->weapMoveTiltOffset, &outViewValues->weapStandAnglesPivotOffset, &outViewValues->weapDuckedAnglesPivotOffset, &outViewValues->weapMoveAngles, (vec3_t (*)[30])outViewValues->weapMoveAnglesCategorized, &outViewValues->weapMoveOrigin);
}

/*
==============
CG_View_UpdateWeaponMovement_Post
==============
*/
void CG_View_UpdateWeaponMovement_Post(cg_t *cgameGlob)
{
  _RBP = cgameGlob;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 747, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  AdvancedSwayState::Update(&_RBP->vmMotionState, _RBP, &_RBP->baseGunAngles);
  AdvancedSwayState::GetAngleOffsets(&_RBP->vmMotionState, &_RBP->playerViewValues.weapMoveAnglesCategorized[15], &_RBP->playerViewValues.weapMoveAnglesCategorized[16], &_RBP->playerViewValues.weapVmMotionPivotOffset);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+61D8h]
    vaddss  xmm2, xmm0, dword ptr [rbp+6298h]
    vmovss  dword ptr [rbp+61D8h], xmm2
    vmovss  xmm0, dword ptr [rbp+629Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+61DCh]
    vmovss  dword ptr [rbp+61DCh], xmm1
    vmovss  xmm0, dword ptr [rbp+62A0h]
    vaddss  xmm1, xmm0, dword ptr [rbp+61E0h]
    vmovss  dword ptr [rbp+61E0h], xmm1
    vaddss  xmm2, xmm2, dword ptr [rbp+62A4h]
    vmovss  dword ptr [rbp+61D8h], xmm2
    vmovss  xmm0, dword ptr [rbp+62A8h]
    vaddss  xmm1, xmm0, dword ptr [rbp+61DCh]
    vmovss  dword ptr [rbp+61DCh], xmm1
    vmovss  xmm2, dword ptr [rbp+62ACh]
    vaddss  xmm0, xmm2, dword ptr [rbp+61E0h]
    vmovss  dword ptr [rbp+61E0h], xmm0
  }
}

/*
==============
CG_View_UpdateXCamView
==============
*/
void CG_View_UpdateXCamView(LocalClientNum_t localClientNum)
{
  XCamValues outValues; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  XCamValues::XCamValues(&outValues);
  if ( XCamData::IsActive(&_RBX->xCam) && XCamData::GetValues(&_RBX->xCam, &outValues) )
  {
    RefdefView_SetOrg(&_RBX->refdef.view, &outValues.origin);
    __asm { vmovups ymm0, ymmword ptr [rsp+88h+outValues.axis] }
    _RCX = &_RBX->refdef.view.axis;
    __asm { vmovups ymmword ptr [rcx], ymm0 }
    _RBX->refdef.view.axis.m[2].v[2] = outValues.axis.m[2].v[2];
    AxisToAngles(&_RBX->refdef.view.axis, &_RBX->refdefViewAngles);
    if ( outValues.apertureType )
    {
      if ( outValues.apertureType == XCAM_FOCAL_LENGTH_APERTURE )
      {
        __asm { vmovss  xmm1, dword ptr [rsp+88h+outValues.lens]; fov_x }
        CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
        _RBX->refdef.xcamOverridesSceneDoF = 1;
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+88h+outValues.lens]
          vmovss  dword ptr [rbx+6974h], xmm0
          vmovss  xmm1, dword ptr [rsp+88h+outValues.lens+8]
          vmovss  dword ptr [rbx+6BCCh], xmm1
          vmovss  xmm0, dword ptr [rsp+88h+outValues.lens+4]
          vmovss  dword ptr [rbx+6BD0h], xmm0
        }
        _RBX->refdef.dofPhysicalFocusState.cocScale = 1.0;
      }
    }
    else
    {
      __asm { vmovss  xmm1, dword ptr [rsp+88h+outValues.lens]; fov_x }
      CG_View_UpdateFov(localClientNum, *(const float *)&_XMM1);
    }
    CG_PlayerState_ClearExtrapolatedPlayerState(localClientNum);
  }
}

/*
==============
CgViewSystem::CalculateCounterKickMagnitude
==============
*/
void CgViewSystem::CalculateCounterKickMagnitude(CgViewSystem *this, const cg_t *cgameGlob, const bool hasCameraInput)
{
  _RBX = this;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5006, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( _RBX->m_viewKickState.hadCameraInput )
  {
    if ( !hasCameraInput )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm2, dword ptr [rbx+10h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm2, xmm1, xmm1
        vminss  xmm3, xmm2, dword ptr [rbx+50h]
        vmovss  dword ptr [rbx+50h], xmm3
      }
      return;
    }
  }
  else if ( !hasCameraInput )
  {
    return;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+48h]
    vmovss  xmm2, dword ptr [rbx+4Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm2, xmm1, xmm1
    vaddss  xmm3, xmm2, dword ptr [rbx+50h]
    vmovss  dword ptr [rbx+50h], xmm3
  }
}

/*
==============
CgViewSystem::HasCameraInput
==============
*/
bool CgViewSystem::HasCameraInput(CgViewSystem *this, const cg_t *cgameGlob)
{
  const ClActiveClient *Client; 
  int CmdNumber; 
  char v13; 
  usercmd_s ucmd; 
  vec2_t StickCartesianCoords; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4974, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)cgameGlob->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( !CL_GetUserCmd(cgameGlob->localClientNum, CmdNumber, &ucmd) )
    return 0;
  if ( !CL_Input_IsGamepadEnabled(cgameGlob->localClientNum) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm0, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vucomiss xmm0, xmm1
    }
    return 0;
  }
  StickCartesianCoords = BG_GetStickCartesianCoords(ucmd.yawmove, ucmd.pitchmove);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+158h+var_18]
    vmovss  xmm1, dword ptr [rsp+158h+var_18+4]
    vmulss  xmm3, xmm0, xmm0
    vmulss  xmm2, xmm1, xmm1
    vaddss  xmm0, xmm3, xmm2
    vcomiss xmm0, cs:MIN_STICK_DEFLECTION_SQR
  }
  return !v13;
}

/*
==============
CgViewSystem::SetViewValues
==============
*/
void CgViewSystem::SetViewValues(CgViewSystem *this)
{
  __int64 m_localClientNum; 
  CgDrawSystem *v7; 
  char v13; 
  __int64 v24; 
  __int64 v25; 
  vec3_t outOrg; 
  __int64 v27; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  v27 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v25) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v24) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[m_localClientNum] )
  {
    LODWORD(v25) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v25) )
      __debugbreak();
  }
  v7 = CgDrawSystem::ms_drawSystemArray[m_localClientNum];
  _RDI = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4025, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RSI = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm
  {
    vmovss  xmm8, dword ptr [rsi+28h]
    vmovss  xmm7, dword ptr [rsi+2Ch]
    vmovss  xmm6, dword ptr [rsi+30h]
  }
  RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+98h+outOrg+8]; z
    vmovss  xmm2, dword ptr [rsp+98h+outOrg+4]; y
    vmovss  xmm1, dword ptr [rsp+98h+outOrg]; x
    vucomiss xmm8, xmm1
  }
  if ( !v13 )
    goto LABEL_19;
  __asm { vucomiss xmm7, xmm2 }
  if ( !v13 )
    goto LABEL_19;
  __asm { vucomiss xmm6, xmm3 }
  if ( !v13 )
LABEL_19:
    Dvar_SetVec3_Internal(DVARVEC3_viewposNow, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm { vucomiss xmm8, dword ptr [rdi+6944h] }
  if ( !v13 )
    goto LABEL_23;
  __asm { vucomiss xmm7, dword ptr [rdi+6948h] }
  if ( !v13 )
    goto LABEL_23;
  __asm { vucomiss xmm6, dword ptr [rdi+694Ch] }
  if ( !v13 )
  {
LABEL_23:
    __asm
    {
      vxorps  xmm3, xmm3, xmm3; z
      vmovss  xmm2, dword ptr [rdi+178C0h]; y
      vmovss  xmm1, dword ptr [rdi+178C4h]; x
    }
    Dvar_SetVec3_Internal(DVARVEC3_viewangNow, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  }
  memset(&outOrg, 0, sizeof(outOrg));
  CG_ViewmodelShieldHitsProcess(this->m_localClientNum);
  CG_AddViewWeapon(this->m_localClientNum);
  CG_ViewWeaponCleanUp((const LocalClientNum_t)this->m_localClientNum);
  CG_Heat_UpdateViewmodel(this->m_localClientNum);
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  v7->UpdateScissor(v7);
}

/*
==============
CgViewSystem::StorePreviousFrameKickValues
==============
*/
void CgViewSystem::StorePreviousFrameKickValues(CgViewSystem *this, const cg_t *cgameGlob, const bool hasCameraInput)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5042, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  this->m_viewKickState.prevViewKickAngles.v[0] = this->m_viewKickState.viewKickAngles.v[0];
  this->m_viewKickState.prevViewKickAngles.v[1] = this->m_viewKickState.viewKickAngles.v[1];
  this->m_viewKickState.prevViewKickAngles.v[2] = this->m_viewKickState.viewKickAngles.v[2];
  this->m_viewKickState.prevViewAngles.v[0] = this->m_viewKickState.viewAngles.v[0];
  this->m_viewKickState.prevViewAngles.v[1] = this->m_viewKickState.viewAngles.v[1];
  this->m_viewKickState.prevViewAngles.v[2] = this->m_viewKickState.viewAngles.v[2];
  this->m_viewKickState.hadCameraInput = hasCameraInput;
}

/*
==============
CgViewSystem::UpdateCurrentFrameKickValues
==============
*/
void CgViewSystem::UpdateCurrentFrameKickValues(CgViewSystem *this, const cg_t *cgameGlob)
{
  const ClActiveClient *Client; 
  secure_uint32_3_t *p_kickAngles; 
  unsigned int secureInt32_3_aab; 
  int v53[3]; 
  char v55; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RBX = this;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5023, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob", -2i64) )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)_RBX->m_localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5026, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  p_kickAngles = &cgameGlob->kickAngles;
  if ( !cgameGlob->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  secureInt32_3_aab = cgameGlob->kickAngles.secureInt32_3_aab;
  v53[0] = (((unsigned int)p_kickAngles ^ p_kickAngles->secureInt32_3_aab) * (((unsigned int)p_kickAngles ^ p_kickAngles->secureInt32_3_aab) + 2)) ^ p_kickAngles->data[0];
  v53[1] = p_kickAngles->data[1] ^ ((((_DWORD)p_kickAngles + 4) ^ secureInt32_3_aab) * ((((_DWORD)p_kickAngles + 4) ^ secureInt32_3_aab) + 2));
  v53[2] = ((((_DWORD)p_kickAngles + 8) ^ secureInt32_3_aab) * ((((_DWORD)p_kickAngles + 8) ^ secureInt32_3_aab) + 2)) ^ p_kickAngles->data[2];
  __asm
  {
    vmovss  xmm0, [rsp+98h+var_5C]
    vmovss  dword ptr [rbx+10h], xmm0
    vmovss  xmm1, [rsp+98h+var_58]
    vmovss  dword ptr [rbx+14h], xmm1
    vmovss  xmm9, cs:__real@3b360b61
    vmulss  xmm3, xmm9, [rsp+98h+var_60]
    vmovss  xmm8, cs:__real@3f000000
    vaddss  xmm1, xmm3, xmm8
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm0, xmm7, xmm1, 1
    vsubss  xmm0, xmm3, xmm0
    vmovss  xmm6, cs:__real@43b40000
    vmulss  xmm0, xmm0, xmm6
    vmovss  dword ptr [rbx+0Ch], xmm0
    vmulss  xmm4, xmm9, dword ptr [rbx+10h]
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+10h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rbx+14h]
    vaddss  xmm1, xmm4, xmm8
    vroundss xmm3, xmm7, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+14h], xmm1
  }
  ClActiveClient_GetCLViewangles(Client, &_RBX->m_viewKickState.viewAngles);
  __asm
  {
    vmulss  xmm4, xmm9, dword ptr [rbx+24h]
    vaddss  xmm2, xmm4, xmm8
    vroundss xmm3, xmm7, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+24h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rbx+28h]
    vaddss  xmm1, xmm4, xmm8
    vroundss xmm3, xmm7, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+28h], xmm1
    vmulss  xmm4, xmm9, dword ptr [rbx+2Ch]
    vaddss  xmm1, xmm4, xmm8
    vroundss xmm3, xmm7, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rbx+2Ch], xmm1
  }
  AnglesSubtract((const vec2_t *)&_RBX->m_viewKickState.viewAngles, (const vec2_t *)&_RBX->m_viewKickState.prevViewAngles, &_RBX->m_viewKickState.viewAnglesChange);
  memset(v53, 0, sizeof(v53));
  _R11 = &v55;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
CgViewSystem::UpdateViewKickState
==============
*/
void CgViewSystem::UpdateViewKickState(CgViewSystem *this, vec3_t *outCorrectionThisFrame)
{
  cg_t *LocalClientGlobals; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  char v25; 
  ClActiveClient *v30; 
  CgWeaponMap *Instance; 
  CgWeaponMap *v32; 
  const Weapon *ViewmodelWeapon; 
  char v34; 
  char v35; 
  bool v36; 
  char v68; 
  char v69; 
  char v139; 
  bool v140; 
  usercmd_s ucmd; 
  vec3_t clViewangles; 
  char v198; 
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
  _R14 = outCorrectionThisFrame;
  _RBX = this;
  *(_QWORD *)outCorrectionThisFrame->v = 0i64;
  outCorrectionThisFrame->v[2] = 0.0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5055, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4974, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Client = ClActiveClient::GetClient((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    __asm { vxorps  xmm11, xmm11, xmm11 }
    if ( CL_GetUserCmd(LocalClientGlobals->localClientNum, CmdNumber, &ucmd) )
    {
      if ( CL_Input_IsGamepadEnabled(LocalClientGlobals->localClientNum) )
      {
        *(vec2_t *)clViewangles.v = BG_GetStickCartesianCoords(ucmd.yawmove, ucmd.pitchmove);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+248h+clViewangles]
          vmulss  xmm3, xmm0, xmm0
          vmovss  xmm1, dword ptr [rsp+248h+clViewangles+4]
          vmulss  xmm2, xmm1, xmm1
          vaddss  xmm0, xmm3, xmm2
          vcomiss xmm0, cs:MIN_STICK_DEFLECTION_SQR
        }
        if ( !v34 )
        {
          v25 = 1;
LABEL_15:
          CgViewSystem::UpdateCurrentFrameKickValues(_RBX, LocalClientGlobals);
          v30 = ClActiveClient::GetClient((const LocalClientNum_t)_RBX->m_localClientNum);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5071, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
            __debugbreak();
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)_RBX->m_localClientNum);
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5074, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v32 = CgWeaponMap::GetInstance((const LocalClientNum_t)_RBX->m_localClientNum);
          ViewmodelWeapon = BG_GetViewmodelWeapon(v32, &LocalClientGlobals->predictedPlayerState);
          v36 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+10h]
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm3, xmm2, xmm1
            vmovss  xmm1, dword ptr [rbx+1Ch]
            vmovss  xmm0, dword ptr [rbx+18h]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm2, xmm1
            vcomiss xmm2, xmm3
            vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
            vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vmovsd  xmm14, cs:__real@3eb0c6f7a0b5ed8d
          }
          if ( LocalClientGlobals->predictedPlayerState.weapState[0].weaponState != 16 )
          {
            if ( !(v34 | v35) && _RBX->m_viewKickState.currentState[0] == 1 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbx+14h]
                vmulss  xmm1, xmm0, xmm0
                vaddss  xmm2, xmm1, xmm3
                vsqrtss xmm0, xmm2, xmm2
                vmovss  [rsp+248h+var_218], xmm0
                vcomiss xmm0, cs:__real@3a83126f
              }
              if ( _RBX->m_viewKickState.currentState[0] <= 1u )
                goto LABEL_39;
              BG_GetViewKickMaintainFraction(Instance, &LocalClientGlobals->predictedPlayerState, ViewmodelWeapon, v36);
              __asm
              {
                vmovss  xmm9, dword ptr [rbx+0Ch]
                vmulss  xmm8, xmm9, xmm0
                vmovss  xmm5, dword ptr [rbx+10h]
                vmulss  xmm6, xmm5, xmm0
                vmovss  xmm4, dword ptr [rbx+14h]
                vmulss  xmm7, xmm4, xmm0
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm9, xmm9
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm4, xmm4
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm3, xmm2, xmm2
                vcmpless xmm0, xmm3, cs:__real@80000000
                vmovss  xmm2, cs:__real@3f800000
                vblendvps xmm1, xmm3, xmm2, xmm0
                vmovss  dword ptr [rsp+248h+clViewangles], xmm1
                vdivss  xmm0, xmm2, xmm1
                vmulss  xmm2, xmm9, xmm0
                vmulss  xmm3, xmm5, xmm0
                vmulss  xmm4, xmm4, xmm0
                vmovss  xmm1, dword ptr [rbx+50h]
                vmulss  xmm2, xmm1, xmm2
                vmulss  xmm0, xmm1, xmm3
                vmulss  xmm3, xmm1, xmm4
                vaddss  xmm5, xmm2, xmm8
                vaddss  xmm6, xmm0, xmm6
                vaddss  xmm10, xmm3, xmm7
                vmovss  xmm9, cs:__real@3b360b61
                vmulss  xmm4, xmm5, xmm9
                vmovss  xmm8, cs:__real@3f000000
                vaddss  xmm1, xmm4, xmm8
                vxorps  xmm7, xmm7, xmm7
                vroundss xmm0, xmm7, xmm1, 1
                vsubss  xmm0, xmm4, xmm0
                vmovss  xmm5, cs:__real@43b40000
                vmulss  xmm13, xmm0, xmm5
                vmulss  xmm4, xmm6, xmm9
                vaddss  xmm1, xmm4, xmm8
                vroundss xmm3, xmm7, xmm1, 1
                vsubss  xmm0, xmm4, xmm3
                vmulss  xmm6, xmm0, xmm5
                vmulss  xmm4, xmm10, xmm9
                vaddss  xmm1, xmm4, xmm8
                vroundss xmm3, xmm7, xmm1, 1
                vsubss  xmm4, xmm4, xmm3
                vmulss  xmm3, xmm4, xmm5
                vandps  xmm0, xmm13, xmm12
                vmovss  xmm2, dword ptr [rbx+0Ch]
                vandps  xmm2, xmm2, xmm12
                vcomiss xmm0, xmm2
              }
              if ( !(v68 | v69) )
              {
                __asm
                {
                  vxorps  xmm1, xmm2, xmm15
                  vcmpless xmm0, xmm11, xmm13
                  vblendvps xmm1, xmm1, xmm2, xmm0
                  vmovaps xmm13, xmm1
                  vmovss  dword ptr [rsp+248h+clViewangles], xmm1
                }
              }
              __asm
              {
                vandps  xmm0, xmm6, xmm12
                vmovss  xmm2, dword ptr [rbx+10h]
                vandps  xmm2, xmm2, xmm12
                vcomiss xmm0, xmm2
              }
              if ( !(v68 | v69) )
              {
                __asm
                {
                  vxorps  xmm1, xmm2, xmm15
                  vcmpless xmm0, xmm11, xmm6
                  vblendvps xmm1, xmm1, xmm2, xmm0
                  vmovaps xmm6, xmm1
                  vmovss  dword ptr [rsp+248h+clViewangles], xmm1
                }
              }
              __asm
              {
                vandps  xmm0, xmm13, xmm12
                vcvtss2sd xmm0, xmm0, xmm0
                vcomisd xmm0, xmm14
              }
              if ( !(v68 | v69) )
                goto LABEL_38;
              __asm
              {
                vandps  xmm0, xmm6, xmm12
                vcvtss2sd xmm0, xmm0, xmm0
                vcomisd xmm0, xmm14
              }
              if ( v68 | v69 )
              {
LABEL_39:
                _RBX->m_viewKickState.currentState[0] = 0;
                _RBX->m_viewKickState.idleStartTime = LocalClientGlobals->time;
              }
              else
              {
LABEL_38:
                __asm
                {
                  vmovss  dword ptr [rbx+3Ch], xmm13
                  vmovss  dword ptr [rbx+40h], xmm6
                  vmovss  dword ptr [rbx+44h], xmm3
                  vmulss  xmm1, xmm6, xmm6
                  vmulss  xmm0, xmm13, xmm13
                  vaddss  xmm3, xmm1, xmm0
                  vmulss  xmm1, xmm4, xmm4
                  vmulss  xmm2, xmm1, cs:__real@47fd2000
                  vaddss  xmm0, xmm3, xmm2
                  vsqrtss xmm3, xmm0, xmm0
                  vmovss  dword ptr [rbx+54h], xmm3
                  vmovss  xmm1, [rsp+248h+var_218]
                  vmovss  dword ptr [rbx+58h], xmm1
                }
                _RBX->m_viewKickState.currentState[0] = 2;
                _RBX->m_viewKickState.returnToCenterRatio = 0.0;
              }
            }
            goto LABEL_40;
          }
          _RBX->m_viewKickState.currentState[0] = 1;
          if ( BG_DisableInputDrivenViewReturnDampening(Instance, &LocalClientGlobals->predictedPlayerState, ViewmodelWeapon, v36) )
          {
            _RBX->m_viewKickState.viewKickCounterMag = 0.0;
            goto LABEL_40;
          }
          if ( _RBX->m_viewKickState.hadCameraInput )
          {
            if ( !v25 )
            {
              __asm
              {
                vmovss  xmm1, dword ptr [rbx+10h]
                vmovss  xmm0, dword ptr [rbx+0Ch]
                vmulss  xmm2, xmm0, xmm0
                vmulss  xmm1, xmm1, xmm1
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm0, xmm2, xmm2
                vminss  xmm0, xmm0, dword ptr [rbx+50h]
                vmovss  dword ptr [rbx+50h], xmm0
              }
LABEL_40:
              v139 = _RBX->m_viewKickState.currentState[0];
              if ( v139 == 2 )
              {
                __asm { vcomiss xmm11, dword ptr [rbx+58h] }
                v140 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5163, ASSERT_TYPE_ASSERT, "(m_viewKickState.kickMagFiringEnd > 0)", (const char *)&queryFormat, "m_viewKickState.kickMagFiringEnd > 0");
                if ( v140 )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm4, dword ptr [rbx+10h]
                  vmovss  xmm3, dword ptr [rbx+0Ch]
                  vmovss  xmm5, dword ptr [rbx+14h]
                  vmulss  xmm1, xmm3, xmm3
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm2, xmm2, xmm1
                  vcvtss2sd xmm0, xmm2, xmm2
                  vcomisd xmm0, xmm14
                  vsubss  xmm6, xmm3, dword ptr [rbx+18h]
                  vsubss  xmm4, xmm4, dword ptr [rbx+1Ch]
                  vsubss  xmm3, xmm5, dword ptr [rbx+20h]
                  vmulss  xmm1, xmm4, xmm4
                  vmulss  xmm0, xmm6, xmm6
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm2, xmm2, xmm1
                  vsqrtss xmm0, xmm2, xmm2
                  vdivss  xmm3, xmm0, dword ptr [rbx+58h]
                  vmovss  xmm10, cs:__real@3f800000
                }
                if ( !v140 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
                    vdivss  xmm1, xmm0, cs:CATCH_UP_TIME
                    vminss  xmm3, xmm1, xmm10
                  }
                }
                __asm
                {
                  vmulss  xmm8, xmm3, dword ptr [rbx+3Ch]
                  vmulss  xmm7, xmm3, dword ptr [rbx+40h]
                  vmulss  xmm9, xmm3, dword ptr [rbx+44h]
                  vandps  xmm6, xmm6, xmm12
                  vcvtss2sd xmm0, xmm6, xmm6
                  vcomisd xmm0, xmm14
                  vandps  xmm4, xmm4, xmm12
                  vcvtss2sd xmm0, xmm4, xmm4
                  vcomisd xmm0, xmm14
                  vmulss  xmm1, xmm8, xmm8
                  vmulss  xmm0, xmm7, xmm7
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm9, xmm9
                  vaddss  xmm2, xmm2, xmm1
                  vsqrtss xmm6, xmm2, xmm2
                  vmovss  xmm0, dword ptr [rbx+50h]
                  vsubss  xmm1, xmm0, xmm6
                  vmaxss  xmm1, xmm1, xmm11
                  vmovss  dword ptr [rbx+50h], xmm1
                  vaddss  xmm0, xmm3, dword ptr [rbx+5Ch]
                  vmovss  dword ptr [rbx+5Ch], xmm0
                }
                ClActiveClient_GetCLViewangles(v30, &clViewangles);
                __asm
                {
                  vaddss  xmm1, xmm8, dword ptr [rsp+248h+clViewangles]
                  vmovss  dword ptr [rsp+248h+clViewangles], xmm1
                  vaddss  xmm0, xmm7, dword ptr [rsp+248h+clViewangles+4]
                  vmovss  dword ptr [rsp+248h+clViewangles+4], xmm0
                  vaddss  xmm2, xmm9, dword ptr [rsp+248h+clViewangles+8]
                  vmovss  dword ptr [rsp+248h+clViewangles+8], xmm2
                }
                ClActiveClient_SetCLViewangles(v30, &clViewangles);
                __asm
                {
                  vmovss  dword ptr [r14], xmm8
                  vmovss  dword ptr [r14+4], xmm7
                  vmovss  dword ptr [r14+8], xmm9
                  vcomiss xmm10, dword ptr [rbx+5Ch]
                }
                if ( v34 | v35 )
                {
                  _RBX->m_viewKickState.currentState[0] = 0;
                  _RBX->m_viewKickState.idleStartTime = LocalClientGlobals->time;
                }
                memset(&clViewangles, 0, sizeof(clViewangles));
              }
              else if ( !v139 && LocalClientGlobals->time - _RBX->m_viewKickState.idleStartTime >= COUNTER_FORCE_RESET_TIME_MS )
              {
                _RBX->m_viewKickState.viewKickCounterMag = 0.0;
              }
              _RBX->m_viewKickState.prevViewKickAngles.v[0] = _RBX->m_viewKickState.viewKickAngles.v[0];
              _RBX->m_viewKickState.prevViewKickAngles.v[1] = _RBX->m_viewKickState.viewKickAngles.v[1];
              _RBX->m_viewKickState.prevViewKickAngles.v[2] = _RBX->m_viewKickState.viewKickAngles.v[2];
              _RBX->m_viewKickState.prevViewAngles.v[0] = _RBX->m_viewKickState.viewAngles.v[0];
              _RBX->m_viewKickState.prevViewAngles.v[1] = _RBX->m_viewKickState.viewAngles.v[1];
              _RBX->m_viewKickState.prevViewAngles.v[2] = _RBX->m_viewKickState.viewAngles.v[2];
              _RBX->m_viewKickState.hadCameraInput = v25;
              goto LABEL_53;
            }
          }
          else if ( !v25 )
          {
            goto LABEL_40;
          }
          __asm
          {
            vmovss  xmm1, dword ptr [rbx+4Ch]
            vmovss  xmm0, dword ptr [rbx+48h]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm1, xmm1, xmm1
            vaddss  xmm2, xmm2, xmm1
            vsqrtss xmm0, xmm2, xmm2
            vaddss  xmm0, xmm0, dword ptr [rbx+50h]
            vmovss  dword ptr [rbx+50h], xmm0
          }
          goto LABEL_40;
        }
      }
      else
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vucomiss xmm0, xmm11
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vucomiss xmm0, xmm11
        }
      }
    }
    v25 = 0;
    goto LABEL_15;
  }
LABEL_53:
  _R11 = &v198;
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

