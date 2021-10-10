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
  bool v6; 
  bool v7; 
  int groundRefEnt; 
  CgHandler *Handler; 
  float v10; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  v6 = Com_GameMode_SupportsFeature(WEAPON_MELEE);
  v7 = Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER);
  if ( !v6 )
  {
    if ( v7 )
    {
      v10 = cgameGlob->predictedPlayerState.groundTiltAngles.v[1];
      angles.v[0] = cgameGlob->predictedPlayerState.groundTiltAngles.v[0];
      angles.v[2] = cgameGlob->predictedPlayerState.groundTiltAngles.v[2];
      angles.v[1] = v10;
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 670, ASSERT_TYPE_ASSERT, "(false)", (const char *)&queryFormat, "false") )
    {
      __debugbreak();
    }
    goto LABEL_12;
  }
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 657, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_AIM_ASSIST_REF )") )
    __debugbreak();
  groundRefEnt = cgameGlob->predictedPlayerState.groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    Handler = CgHandler::getHandler(localClientNum);
    if ( Handler->GetEntityAngles(Handler, groundRefEnt, &angles) )
    {
LABEL_12:
      if ( angles.v[0] != 0.0 || angles.v[1] != 0.0 || angles.v[2] != 0.0 )
      {
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
  cg_t *LocalClientGlobals; 
  int pm_type; 
  double Float_Internal_DebugName; 
  int v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  float v11; 
  float v12; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5385, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  *(_QWORD *)LocalClientGlobals->predictedErrorCurrentFrame.v = 0i64;
  LocalClientGlobals->predictedErrorCurrentFrame.v[2] = 0.0;
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  if ( pm_type != 1 && pm_type != 8 && !BGMovingPlatforms::IsOnMovingPlatform(&LocalClientGlobals->predictedPlayerState) && !BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState) )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
    if ( *(float *)&Float_Internal_DebugName > 0.0 )
    {
      v6 = LocalClientGlobals->time - LocalClientGlobals->predictedErrorTime;
      v7 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
      v8 = *(float *)&v7 - (float)v6;
      v9 = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_errordecay, "cg_errordecay");
      v11 = v8 / *(float *)&v9;
      v10 = v11;
      if ( v11 <= 0.0 || v11 >= 1.0 )
      {
        LocalClientGlobals->predictedErrorTime = 0;
      }
      else
      {
        v12 = v11 * LocalClientGlobals->predictedError.v[0];
        LocalClientGlobals->predictedErrorCurrentFrame.v[0] = v12;
        LocalClientGlobals->predictedErrorCurrentFrame.v[1] = v10 * LocalClientGlobals->predictedError.v[1];
        LocalClientGlobals->predictedErrorCurrentFrame.v[2] = v10 * LocalClientGlobals->predictedError.v[2];
        inOutOrigin->v[0] = v12 + inOutOrigin->v[0];
        inOutOrigin->v[1] = LocalClientGlobals->predictedErrorCurrentFrame.v[1] + inOutOrigin->v[1];
        inOutOrigin->v[2] = LocalClientGlobals->predictedErrorCurrentFrame.v[2] + inOutOrigin->v[2];
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_cg_showmiss, "cg_showmiss") )
          Com_Printf(17, "Adjusting view.org/legs with factor %f (%f %f %f)\n", v10, LocalClientGlobals->predictedErrorCurrentFrame.v[0], LocalClientGlobals->predictedErrorCurrentFrame.v[1], LocalClientGlobals->predictedErrorCurrentFrame.v[2]);
      }
    }
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
  double Float_Internal_DebugName; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  float v11; 
  double v12; 
  double v13; 
  float v14; 
  float v15; 
  ClActiveClient *v16; 
  usercmd_s ucmd; 
  vec3_t angles; 
  tmat33_t<vec3_t> in; 
  vec3_t v20; 
  vec4_t qb; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 
  vec4_t qa; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v26; 
  tmat33_t<vec3_t> v27; 
  vec3_t v28; 
  tmat33_t<vec3_t> axis; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT) || BG_IsVehicleActive(&LocalClientGlobals->predictedPlayerState) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum != 2047 )
  {
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2804, ASSERT_TYPE_ASSERT, "(vehicle)", (const char *)&queryFormat, "vehicle") )
      __debugbreak();
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj && CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_body_animate, &outTagMat, &outOrigin) && CG_DObjGetWorldTagMatrix(&Entity->pose, ClientDObj, scr_const.tag_player, &v27, &v28) )
    {
      in = outTagMat;
      v20 = v28;
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
        qa = (vec4_t)_xmm;
        AxisToQuat(&out, &qb);
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_cg_viewVehicleInfluence, "cg_viewVehicleInfluence");
        QuatLerp(&qa, &qb, *(float *)&Float_Internal_DebugName, &qb);
        QuatToAxis(&qb, &out);
        AnglesToAxis(inOutViewAngles, &axis);
        MatrixMultiply(&axis, &out, &v26);
        AxisToAngles(&v26, &angles);
        inOutViewAngles->v[0] = angles.v[0];
        if ( VehicleSystem->IsYawLocked(VehicleSystem) )
          inOutViewAngles->v[1] = angles.v[1];
        if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_OUT) && ((LocalClientGlobals->predictedPlayerState.vehicleType - 4) & 0xFD) == 0 )
        {
          Client = ClActiveClient::GetClient(localClientNum);
          CmdNumber = ClActiveClient_GetCmdNumber(Client);
          if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
          {
            if ( !ucmd.pitchmove )
            {
              v11 = (float)LocalClientGlobals->frametime * 0.001;
              v12 = Dvar_GetFloat_Internal_DebugName(DVARFLT_vehHelicopterFreeLookReleaseSpeed, "vehHelicopterFreeLookReleaseSpeed");
              v13 = DiffTrackAngle(0.0, inOutViewAngles->v[0], *(float *)&v12, v11);
              inOutViewAngles->v[0] = *(float *)&v13;
            }
          }
        }
        v14 = inOutViewAngles->v[1];
        angles.v[0] = inOutViewAngles->v[0] - LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
        v15 = inOutViewAngles->v[2];
        angles.v[1] = v14 - LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
        angles.v[2] = v15 - LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
        v16 = ClActiveClient::GetClient(localClientNum);
        ClActiveClient_SetCLViewangles(v16, &angles);
        MatrixMultiply(&axis, &LocalClientGlobals->prevVehicleInvAxis, &v26);
        AxisToAngles(&v26, &angles);
        inOutViewAngles->v[2] = COERCE_FLOAT(LODWORD(angles.v[2]) ^ _xmm);
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
  XAnimTreeDebugNode *v10; 
  char v11; 
  float globalWeight; 
  vec4_t *v13; 
  int v14; 
  int v15; 
  int parentIndex; 
  unsigned __int64 i; 
  __int64 v18; 
  int j; 
  __int64 v20; 
  __int64 v21; 
  double v22; 
  float v23; 
  double v24; 
  char v25; 
  float v26; 
  float v28; 
  int numChildrenWithLeafOrCustomNodeBelow; 
  int firstChildIndex; 
  float v31; 
  XAnimTreeDebugNode *v35; 
  double v36; 
  bool v37; 
  __int128 v38; 
  __int128 v39; 
  XAnimTreeDebugNode *v40; 
  __int128 v41; 
  __int64 duration; 
  int destPos; 
  vec3_t v44; 
  vec3_t v45; 
  int *v46; 
  const centity_t *v47; 
  const DObj *v48; 
  vec4_t v49; 
  vec3_t end; 
  vec3_t right; 
  char dest[256]; 

  v48 = obj;
  v46 = dobjInfoIndexPtr;
  v47 = cent;
  if ( !debugNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4255, ASSERT_TYPE_ASSERT, "(debugNodes)", (const char *)&queryFormat, "debugNodes") )
    __debugbreak();
  if ( (unsigned int)nodeIndex >= 0x40 )
  {
    LODWORD(duration) = nodeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4256, ASSERT_TYPE_ASSERT, "(unsigned)( nodeIndex ) < (unsigned)( 64 )", "nodeIndex doesn't index MAX_ANIM_DEBUG_VISUAL_NODES\n\t%i not in [0, %i)", duration, 64) )
      __debugbreak();
  }
  v10 = &debugNodes[nodeIndex];
  v11 = *((_BYTE *)v10 + 88);
  if ( (v11 & 0x40) != 0 )
  {
    v13 = &colorRed;
  }
  else
  {
    globalWeight = v10->globalWeight;
    if ( globalWeight <= 0.0049999999 )
    {
      v13 = &colorLtGrey;
      if ( globalWeight <= 0.0 )
        v13 = &colorMdGrey;
    }
    else if ( (v11 & 0x10) != 0 )
    {
      v13 = &colorCyan;
    }
    else if ( (v11 & 8) != 0 )
    {
      v13 = &colorYellow;
    }
    else if ( (v11 & 2) != 0 )
    {
      v13 = &colorGreen;
      if ( (v11 & 4) != 0 )
        v13 = &colorMagenta;
    }
    else
    {
      v13 = &colorWhite;
    }
  }
  v14 = 0;
  if ( !isRootDontDraw && v10->numChildrenWithLeafOrCustomNodeBelow != 1 && obj->tree->anims->size )
  {
    v15 = (*v46)++;
    parentIndex = v10->nodeIndex;
    for ( i = 1i64 << parentIndex; parentIndex != -1; parentIndex = debugNodes[v21].parentIndex )
    {
      v18 = parentIndex;
      if ( (*((_BYTE *)&debugNodes[v18] + 88) & 0x14) != 0 )
      {
        for ( j = debugNodes[v18].prevSiblingIndex; j != -1; j = debugNodes[v20].prevSiblingIndex )
        {
          v20 = j;
          if ( (*((_BYTE *)&debugNodes[v20] + 88) & 4) == 0 )
          {
            parentIndex = 0;
            _bittestandset64((__int64 *)&i, debugNodes[v20].nodeIndex);
          }
        }
      }
      v21 = parentIndex;
      if ( (*((_BYTE *)&debugNodes[v21] + 88) & 0x14) == 20 )
        _bittestandset64((__int64 *)&i, debugNodes[v21].nodeIndex);
    }
    v22 = *(double *)angles->v;
    v44.v[2] = angles->v[2];
    v45.v[2] = origin->v[2];
    *(double *)v44.v = v22;
    *(_QWORD *)v45.v = *(_QWORD *)origin->v;
    CG_DebugDrawAnimPose(obj, v47, v15, i, &v45, &v44);
    if ( 1.0 != v10->globalWeight || (*((_BYTE *)v10 + 88) & 2) != 0 )
    {
      AngleVectors(angles, NULL, &right, NULL);
      v23 = v10->globalWeight;
      v49 = *v13;
      v24 = *(double *)origin->v;
      v45.v[2] = right.v[2];
      v44.v[2] = origin->v[2];
      *(double *)v44.v = v24;
      *(double *)v45.v = *(double *)right.v;
      CG_DebugBar(&v44, &v45, v23, 25.0, 2.5, &v49, 0, 1);
    }
  }
  v25 = *((_BYTE *)v10 + 88);
  destPos = 0;
  if ( (v25 & 0x40) != 0 )
  {
    Com_sprintfPos(dest, 0x100ui64, &destPos, "... INCOMPLETE TREE ...");
  }
  else
  {
    if ( (v25 & 4) != 0 )
      Com_sprintfPos(dest, 0x100ui64, &destPos, "+ ");
    Com_sprintfPos(dest, 0x100ui64, &destPos, (const char *)&queryFormat, v10->animName);
    v26 = v10->globalWeight;
    if ( v26 != 1.0 || (*((_BYTE *)v10 + 88) & 2) != 0 )
      Com_sprintfPos(dest, 0x100ui64, &destPos, " [w%.2f]", v26);
    if ( (*((_BYTE *)v10 + 88) & 1) != 0 )
      Com_sprintfPos(dest, 0x100ui64, &destPos, " (t%.2f)", v10->currentTime);
  }
  _XMM6 = LODWORD(FLOAT_7_0);
  origin->v[2] = origin->v[2] - 7.0;
  AngleVectors(angles, NULL, &right, NULL);
  CL_AddDebugString(origin, v13, 0.5, dest, 0, 1);
  v28 = origin->v[2] + 7.0;
  numChildrenWithLeafOrCustomNodeBelow = v10->numChildrenWithLeafOrCustomNodeBelow;
  origin->v[2] = v28;
  if ( numChildrenWithLeafOrCustomNodeBelow > 0 )
  {
    firstChildIndex = v10->firstChildIndex;
    v31 = (float)((float)numChildrenWithLeafOrCustomNodeBelow - 1.0) * 37.5;
    end.v[0] = (float)(v31 * right.v[0]) + origin->v[0];
    _XMM0 = (unsigned int)numChildrenWithLeafOrCustomNodeBelow;
    __asm { vpcmpgtd xmm3, xmm0, xmm2 }
    end.v[1] = (float)(v31 * right.v[1]) + origin->v[1];
    __asm { vblendvps xmm0, xmm6, xmm1, xmm3 }
    end.v[2] = (float)(*(float *)&_XMM0 + v28) + (float)(v31 * right.v[2]);
    if ( v10->numChildren > 0 )
    {
      do
      {
        v35 = &debugNodes[firstChildIndex];
        if ( (*((_BYTE *)v35 + 88) & 0x20) != 0 )
        {
          CG_DebugLine(origin, &end, &colorWhite, 0, 1);
          v36 = *(double *)angles->v;
          v45.v[2] = angles->v[2];
          v44 = end;
          *(double *)v45.v = v36;
          CG_DebugDrawAnimDebugNode_r(v48, v47, v46, debugNodes, firstChildIndex, 0, &v44, &v45);
          if ( v10->numChildrenWithLeafOrCustomNodeBelow > 1 )
          {
            v37 = v35->numChildrenWithLeafOrCustomNodeBelow == 1;
            end.v[0] = (float)(-75.0 * right.v[0]) + end.v[0];
            end.v[1] = (float)(-75.0 * right.v[1]) + end.v[1];
            v38 = LODWORD(end.v[2]);
            *(float *)&v38 = (float)(end.v[2] - (float)(75.0 * right.v[2])) + 7.0;
            v39 = v38;
            end.v[2] = *(float *)&v38;
            if ( v37 )
            {
              v40 = &debugNodes[firstChildIndex];
              do
              {
                v41 = v39;
                *(float *)&v41 = *(float *)&v39 + 7.0;
                v39 = v41;
                v40 = &debugNodes[v40->firstChildIndex];
              }
              while ( v40->numChildrenWithLeafOrCustomNodeBelow == 1 );
              end.v[2] = *(float *)&v41;
            }
          }
        }
        firstChildIndex = v35->nextSiblingIndex;
        ++v14;
      }
      while ( v14 < v10->numChildren );
    }
  }
}

/*
==============
CG_DebugDrawAnimPose
==============
*/
__int64 CG_DebugDrawAnimPose(const DObj *obj, const centity_t *cent, int dobjInfoIndex, unsigned __int64 nodeIndexShowMask, vec3_t *origin, vec3_t *angles)
{
  __int64 v6; 
  XAnimDebugVisualDObjInfo *v9; 
  unsigned __int64 v10; 
  unsigned __int16 maxParameters; 
  void *v12; 
  void *v13; 
  unsigned int AllocSkelSize; 
  char *v15; 
  int SkelTimeStamp; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  void (__fastcall *v20)(const vec3_t *, vec4_t *); 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  cpose_t *p_pose; 
  const centity_t *v23; 
  __int64 v24; 
  void (__fastcall *FunctionPointer_prevOrigin)(const vec4_t *, vec3_t *); 
  vec3_t *v26; 
  unsigned __int16 v27; 
  __int64 randomIntSet; 
  __int64 randomIntSeta; 
  __int64 randomIntSetb; 
  __int64 randomIntGet; 
  __int64 randomIntGeta; 
  __int64 randomIntGetb; 
  bdRandom v35; 
  bdRandom v36[2]; 
  unsigned __int64 nodeIndexShowMaska; 
  vec3_t outOrigin; 
  vec3_t *lightingOrigin; 
  __int64 v40; 
  shaderOverride_t v41; 
  GfxSceneHudOutlineInfo v42; 
  GfxSceneEntityMutableShaderData v43; 
  vec3_t inOrigin; 
  vec3_t v45; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  v40 = -2i64;
  nodeIndexShowMaska = nodeIndexShowMask;
  v6 = dobjInfoIndex;
  lightingOrigin = origin;
  if ( (unsigned int)dobjInfoIndex >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4168, ASSERT_TYPE_ASSERT, "(unsigned)( dobjInfoIndex ) < (unsigned)( ( sizeof( *array_counter( s_XAnimDebugVisualDObjInfo ) ) + 0 ) )", "dobjInfoIndex doesn't index ARRAY_COUNT( s_XAnimDebugVisualDObjInfo )\n\t%i not in [0, %i)", dobjInfoIndex, 32) )
    __debugbreak();
  v9 = &s_XAnimDebugVisualDObjInfo[v6];
  v9->inUse = 1;
  DObjCloneWithClientFlag(obj, v9->clonedObjBuf, 1);
  v9->clonedDObj = (DObj *)v9;
  v9->clonedTree.anims = obj->tree->anims;
  v9->clonedTree.owner[0] = obj->tree->owner[0];
  v10 = 0i64;
  v9->clonedTree.info_usage = 0;
  v9->clonedTree.calcRefCount = 0;
  v9->clonedTree.modifyRefCount = 0;
  maxParameters = obj->tree->maxParameters;
  v9->clonedTree.maxParameters = maxParameters;
  v9->clonedTree.parametersDirty = obj->tree->parametersDirty;
  v9->clonedTree.parameterValues = NULL;
  if ( maxParameters )
  {
    v12 = MT_Alloc(24i64 * obj->tree->maxParameters + 4, 25);
    v13 = v12;
    if ( v12 )
    {
      v10 = ((unsigned __int64)v12 + 4) & 0xFFFFFFFFFFFFFFFCui64;
      if ( v10 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 69, ASSERT_TYPE_ASSERT, "( retPtr ) > ( bytePtr )", "%s > %s\n\t%p, %p", "retPtr", "bytePtr", (const void *)(((unsigned __int64)v12 + 4) & 0xFFFFFFFFFFFFFFFCui64), v12) )
        __debugbreak();
      if ( v10 - (unsigned __int64)v13 > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memorytree.h", 70, ASSERT_TYPE_ASSERT, "( static_cast<size_t>( retPtr - bytePtr ) ) <= ( alignment )", "%s <= %s\n\t%llu, %llu", "static_cast<size_t>( retPtr - bytePtr )", "alignment", v10 - (_QWORD)v13, 4i64) )
        __debugbreak();
      *(_BYTE *)(v10 - 1) = v10 - (_BYTE)v13;
    }
    v9->clonedTree.parameterValues = (XAnimParameterValue *)v10;
  }
  XAnimCloneClientAnimTree(obj->tree, &v9->clonedTree, 0);
  DObjSetTree(v9->clonedDObj, &v9->clonedTree);
  if ( DObjNumBones(v9->clonedDObj) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4196, ASSERT_TYPE_ASSERT, "(DObjNumBones( dobjInfo->clonedDObj ) > 0)", (const char *)&queryFormat, "DObjNumBones( dobjInfo->clonedDObj ) > 0") )
    __debugbreak();
  AllocSkelSize = DObjGetAllocSkelSize(v9->clonedDObj);
  v15 = CL_Pose_AllocSkelMemory(v9->clonedDObj, AllocSkelSize);
  if ( v15 )
  {
    SkelTimeStamp = CL_Pose_GetSkelTimeStamp();
    DObjLock(v9->clonedDObj);
    DObjCreateSkel(v9->clonedDObj, v15, SkelTimeStamp);
    DObjUnlock(v9->clonedDObj);
  }
  XAnimMarkDebugVisualShow(obj->tree, obj->tree->anims, v9->clonedTree.children, nodeIndexShowMaska);
  bdRandom::bdRandom(&v35);
  v17 = bdRandom::nextUInt(&v35);
  v18 = v17 % 0x22;
  bdRandom::~bdRandom(&v35);
  bdRandom::bdRandom(v36);
  v19 = bdRandom::nextUInt(v36) % 0x22;
  bdRandom::~bdRandom(v36);
  inOrigin.v[0] = FLOAT_4_2949673e9;
  inOrigin.v[1] = FLOAT_4_2949673e9;
  inOrigin.v[2] = FLOAT_4_2949673e9;
  if ( v19 >= 0x22 )
  {
    LODWORD(randomIntGet) = 34;
    LODWORD(randomIntSet) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 544, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSet, randomIntGet) )
      __debugbreak();
  }
  SetObfuscatedFunction(v19, (unsigned __int64)&v9->pose.origin.Get_origin, (unsigned __int64)&v9->pose.origin, &v9->pose.origin.Set_origin, &v9->pose.origin.Get_origin, s_aab_set_pointer_origin, s_aab_get_pointer_origin);
  CG_SetPoseOrigin(&v9->pose, &inOrigin);
  v45.v[0] = FLOAT_4_2949673e9;
  v45.v[1] = FLOAT_4_2949673e9;
  v45.v[2] = FLOAT_4_2949673e9;
  if ( v18 >= 0x22 )
  {
    LODWORD(randomIntGeta) = 34;
    LODWORD(randomIntSeta) = v17 % 0x22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 628, ASSERT_TYPE_ASSERT, "(unsigned)( randVal ) < (unsigned)( NUM_AAB_FUNCTIONS )", "randVal doesn't index NUM_AAB_FUNCTIONS\n\t%i not in [0, %i)", randomIntSeta, randomIntGeta) )
      __debugbreak();
  }
  SetObfuscatedFunction(v18, (unsigned __int64)&v9->pose.prevOrigin.Get_prevOrigin, (unsigned __int64)&v9->pose.prevOrigin, &v9->pose.prevOrigin.Set_prevOrigin, &v9->pose.prevOrigin.Get_prevOrigin, s_aab_set_pointer_prevorigin, s_aab_get_pointer_prevorigin);
  CG_SetPrevPoseOrigin(&v9->pose, &v45);
  v20 = ObfuscateSetFunctionPointer_origin(v9->pose.origin.Set_origin, &v9->pose);
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(v9->pose.origin.Get_origin, &v9->pose);
  nodeIndexShowMaska = (unsigned __int64)ObfuscateSetFunctionPointer_prevOrigin(v9->pose.prevOrigin.Set_prevOrigin, &v9->pose);
  *(_QWORD *)&v36[0].m_val = ObfuscateGetFunctionPointer_prevOrigin(v9->pose.prevOrigin.Get_prevOrigin, &v9->pose);
  p_pose = &v9->pose;
  v23 = cent;
  v24 = 2i64;
  do
  {
    *(_OWORD *)&p_pose->eType = *(_OWORD *)&v23->pose.eType;
    *(_OWORD *)&p_pose->ragdollHandle = *(_OWORD *)&v23->pose.ragdollHandle;
    *(_OWORD *)&p_pose->actualOrigin.y = *(_OWORD *)&v23->pose.actualOrigin.y;
    *(_OWORD *)&p_pose->origin.Get_origin = *(_OWORD *)&v23->pose.origin.Get_origin;
    *(SecureOrigin::secureUnion *)((char *)&p_pose->origin.origin + 8) = *(SecureOrigin::secureUnion *)((char *)&v23->pose.origin.origin + 8);
    *(_OWORD *)&p_pose->angles.z = *(_OWORD *)&v23->pose.angles.z;
    *(_OWORD *)&p_pose->prevOrigin.Get_prevOrigin = *(_OWORD *)&v23->pose.prevOrigin.Get_prevOrigin;
    p_pose = (cpose_t *)((char *)p_pose + 128);
    *((_OWORD *)&p_pose[-1].moverFx + 7) = *(vec4_t *)((char *)&v23->pose.prevOrigin.prevOrigin + 8);
    v23 = (const centity_t *)((char *)v23 + 128);
    --v24;
  }
  while ( v24 );
  *(_OWORD *)&p_pose->eType = *(_OWORD *)&v23->pose.eType;
  *(_OWORD *)&p_pose->ragdollHandle = *(_OWORD *)&v23->pose.ragdollHandle;
  v9->pose.origin.Set_origin = NULL;
  v9->pose.origin.Get_origin = NULL;
  v9->pose.prevOrigin.Set_prevOrigin = NULL;
  v9->pose.prevOrigin.Get_prevOrigin = NULL;
  v9->pose.origin.Set_origin = ObfuscateSetFunctionPointer_origin(v20, &v9->pose);
  v9->pose.origin.Get_origin = ObfuscateGetFunctionPointer_origin(FunctionPointer_origin, &v9->pose);
  v9->pose.prevOrigin.Set_prevOrigin = ObfuscateSetFunctionPointer_prevOrigin((void (__fastcall *const)(const vec3_t *, vec4_t *))nodeIndexShowMaska, &v9->pose);
  v9->pose.prevOrigin.Get_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(*(void (__fastcall *const *)(const vec4_t *, vec3_t *))&v36[0].m_val, &v9->pose);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_SetPoseOrigin(&v9->pose, &outOrigin);
  if ( !cent->pose.prevOrigin.Get_prevOrigin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 568, ASSERT_TYPE_ASSERT, "(pose->prevOrigin.Get_prevOrigin)", (const char *)&queryFormat, "pose->prevOrigin.Get_prevOrigin") )
    __debugbreak();
  FunctionPointer_prevOrigin = ObfuscateGetFunctionPointer_prevOrigin(cent->pose.prevOrigin.Get_prevOrigin, &cent->pose);
  FunctionPointer_prevOrigin(&cent->pose.prevOrigin.prevOrigin, &outOrigin);
  CG_SetPrevPoseOrigin(&v9->pose, &outOrigin);
  memset(&outOrigin, 0, sizeof(outOrigin));
  v26 = lightingOrigin;
  CG_SetPoseOrigin(&v9->pose, lightingOrigin);
  v9->pose.angles = *angles;
  v27 = v6 + 2533;
  if ( (unsigned int)(__int16)v27 >= 0xA05 )
  {
    LODWORD(randomIntGetb) = 2565;
    LODWORD(randomIntSetb) = (__int16)v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4222, ASSERT_TYPE_ASSERT, "(unsigned)( debugEntityNum ) < (unsigned)( ENTITYNUM_ANMIMDEBUG_ENT_END )", "debugEntityNum doesn't index ENTITYNUM_ANMIMDEBUG_ENT_END\n\t%i not in [0, %i)", randomIntSetb, randomIntGetb) )
      __debugbreak();
  }
  v9->clonedDObj->entnum = v27 + 1;
  memset(&v41, 0, sizeof(v41));
  memset(&v42, 0, sizeof(v42));
  entityMutableShaderData = *CG_Entity_GetMutableShaderData(&v43, LOCAL_CLIENT_0, v9->clonedDObj, 0, &v42, &v41, 0.0);
  R_AddDObjToScene(v9->clonedDObj, &v9->pose, (__int16)v27, 0, &entityMutableShaderData, v26, 0.0);
  return v27;
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
  cg_t *LocalClientGlobals; 
  float FovDvarValue_ForSpace; 
  float v9; 
  const dvar_t *v10; 
  const WeaponAttachment *UnderbarrelAttachment; 
  AdsAltSwitch *adsAltSwitch; 
  AdsAltSwitchInterpType fovInterpTypeMainToAlt; 
  bool v14; 
  float dualFovSwitchRateMainToAlt; 
  float adsAltSwitchBaseFOV; 
  double EffectiveFOVForWeapon; 
  bool adsAltSwitchNextWeaponIsDualFOV; 
  float adsAltSwitchFOVFrac; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  FovDvarValue_ForSpace = CG_View_GetFovDvarValue_ForSpace(localClientNum, fovSpace);
  v9 = FovDvarValue_ForSpace;
  if ( (FovDvarValue_ForSpace < 1.0 || FovDvarValue_ForSpace > 160.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1553, ASSERT_TYPE_SANITY, "( ( defaultFov >= 1.0f && defaultFov <= 160.0f ) )", "( defaultFov ) = %g", FovDvarValue_ForSpace) )
    __debugbreak();
  if ( fovSpace == CG_FovSpace_DepthHack )
  {
    if ( !CG_View_IsSeparateViewModelFovUsed() )
    {
      v10 = DVARFLT_cg_dualViewScopeFOV;
      if ( !DVARFLT_cg_dualViewScopeFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dualViewScopeFOV") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      return v10->current.value;
    }
    return v9;
  }
  if ( fovSpace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1561, ASSERT_TYPE_ASSERT, "(fovSpace == CG_FovSpace_Scene)", (const char *)&queryFormat, "fovSpace == CG_FovSpace_Scene") )
    __debugbreak();
  UnderbarrelAttachment = BG_GetUnderbarrelAttachment(r_weapon);
  if ( !UnderbarrelAttachment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1564, ASSERT_TYPE_ASSERT, "(underBarrelAttachment)", (const char *)&queryFormat, "underBarrelAttachment") )
    __debugbreak();
  if ( !UnderbarrelAttachment->adsAltSwitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1565, ASSERT_TYPE_ASSERT, "(underBarrelAttachment->adsAltSwitch)", (const char *)&queryFormat, "underBarrelAttachment->adsAltSwitch") )
    __debugbreak();
  adsAltSwitch = UnderbarrelAttachment->adsAltSwitch;
  if ( adsAltSwitch )
  {
    if ( LocalClientGlobals->adsAltSwitchIsMainToAlt )
    {
      fovInterpTypeMainToAlt = adsAltSwitch->fovInterpTypeMainToAlt;
      v14 = 1;
      dualFovSwitchRateMainToAlt = adsAltSwitch->dualFovSwitchRateMainToAlt;
    }
    else
    {
      fovInterpTypeMainToAlt = adsAltSwitch->fovInterpTypeAltToMain;
      v14 = 0;
      dualFovSwitchRateMainToAlt = adsAltSwitch->dualFovSwitchRateAltToMain;
    }
    adsAltSwitchBaseFOV = LocalClientGlobals->adsAltSwitchBaseFOV;
    EffectiveFOVForWeapon = CG_View_GetEffectiveFOVForWeapon(localClientNum, fovSpace, r_weapon, v14, 1, NULL);
    adsAltSwitchNextWeaponIsDualFOV = LocalClientGlobals->adsAltSwitchNextWeaponIsDualFOV;
    adsAltSwitchFOVFrac = LocalClientGlobals->adsAltSwitchFOVFrac;
    v20 = *(float *)&EffectiveFOVForWeapon;
    if ( LocalClientGlobals->adsAltSwitchCurrentWeaponIsDualFOV == adsAltSwitchNextWeaponIsDualFOV )
      goto LABEL_35;
    if ( adsAltSwitchNextWeaponIsDualFOV )
    {
      if ( adsAltSwitchFOVFrac <= dualFovSwitchRateMainToAlt )
      {
LABEL_27:
        if ( dualFovSwitchRateMainToAlt > 0.001 )
          adsAltSwitchFOVFrac = adsAltSwitchFOVFrac / dualFovSwitchRateMainToAlt;
        v20 = v9;
        goto LABEL_35;
      }
      v21 = 1.0 - dualFovSwitchRateMainToAlt;
    }
    else
    {
      v21 = 1.0 - dualFovSwitchRateMainToAlt;
      if ( (float)(1.0 - adsAltSwitchFOVFrac) >= (float)(1.0 - dualFovSwitchRateMainToAlt) )
        goto LABEL_27;
    }
    v22 = adsAltSwitchFOVFrac - dualFovSwitchRateMainToAlt;
    adsAltSwitchFOVFrac = adsAltSwitchFOVFrac - dualFovSwitchRateMainToAlt;
    if ( COERCE_FLOAT(LODWORD(v21) & _xmm) > 0.001 )
      adsAltSwitchFOVFrac = v22 / v21;
    adsAltSwitchBaseFOV = v9;
LABEL_35:
    if ( fovInterpTypeMainToAlt )
    {
      if ( fovInterpTypeMainToAlt == ADS_ALT_SWITCH_INTERP_TYPE_COSINE )
      {
        v26 = 1.0 - cosf_0(adsAltSwitchFOVFrac * 1.5707964);
        v25 = 1.0 - v26;
        v24 = v26 * v20;
      }
      else
      {
        if ( fovInterpTypeMainToAlt != ADS_ALT_SWITCH_INTERP_TYPE_SINE )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1668, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tUnknown interpolation type %d", "0", fovInterpTypeMainToAlt) )
            __debugbreak();
          return v9;
        }
        v23 = sinf_0(adsAltSwitchFOVFrac * 1.5707964);
        v24 = v23 * v20;
        v25 = 1.0 - v23;
      }
    }
    else
    {
      v25 = 1.0 - adsAltSwitchFOVFrac;
      v24 = v20 * adsAltSwitchFOVFrac;
    }
    return (float)(v25 * adsAltSwitchBaseFOV) + v24;
  }
  return v9;
}

/*
==============
CG_GetBaseFOVAdjustment
==============
*/
float CG_GetBaseFOVAdjustment(const LocalClientNum_t localClientNum, const CG_FovSpace fovSpace, const float viewFov)
{
  const dvar_t *v4; 
  float v5; 
  const dvar_t *v6; 
  float value; 
  double v8; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_OFFHAND_END) || fovSpace )
    return 0.0;
  v4 = DVARFLT_cg_targetBaseFov;
  if ( !DVARFLT_cg_targetBaseFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFov") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = 65.0 - v4->current.value;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) <= 0.000001 )
    return 0.0;
  v6 = DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt;
  if ( !DCONST_DVARFLT_cg_targetBaseFovDecreaseStopAt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_targetBaseFovDecreaseStopAt") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  if ( value >= 65.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1756, ASSERT_TYPE_ASSERT, "( targetBaseFovDecreaseStopAt ) < ( (65.0f) )", "%s < %s\n\t%g, %g", "targetBaseFovDecreaseStopAt", "DEFAULT_FOV", value, DOUBLE_65_0) )
    __debugbreak();
  v8 = I_fclamp(viewFov, value, 65.0);
  if ( value > 65.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 826, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", value, DOUBLE_65_0) )
    __debugbreak();
  if ( *(float *)&v8 < value && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 827, ASSERT_TYPE_SANITY, "( dist ) >= ( min )", "dist >= min\n\t%g, %g", *(float *)&v8, value) )
    __debugbreak();
  if ( *(float *)&v8 > 65.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 828, ASSERT_TYPE_SANITY, "( dist ) <= ( max )", "dist <= max\n\t%g, %g", *(float *)&v8, DOUBLE_65_0) )
    __debugbreak();
  if ( (float)(65.0 - value) > 0.000001 )
    return (float)((float)(*(float *)&v8 - value) / (float)(65.0 - value)) * v5;
  else
    return 0.0 * v5;
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
  __int128 v4; 
  __int128 v5; 
  __int64 v6; 
  __int64 v7; 
  CgWeaponMap *v10; 
  cg_t *LocalClientGlobals; 
  __int64 v12; 
  double CameraFOV; 
  Weapon *ViewmodelOrOffhandADSSupportWeapon; 
  float BaseFOVAdjustment; 
  double Float_Internal_DebugName; 
  double FovUnscaledDvarValue; 
  double RemoteDriveFov; 
  double v19; 
  double EffectiveFOVForWeapon; 
  double FovDelta; 
  CgVehicleSystem *VehicleSystem; 
  double v23; 
  int v24; 
  int fovLerpDuration; 
  float v26; 
  const dvar_t *v27; 
  float fovLerpTarget; 
  float fovLerpBase; 
  float v30; 
  const dvar_t *v31; 
  CgWeaponMap *Instance; 
  const dvar_t *v33; 
  const char *v34; 
  double v35; 
  double Fov; 
  float v37; 
  double v38; 
  bool OverrideFOV; 
  const dvar_t *v40; 
  float v48; 
  float outViewFOV; 
  bool outIsAlternate; 
  bool outRanVelocityBasedFovIncreaseCalculation; 
  CG_FovSpace fovSpacea; 
  float overrideFovDeg; 
  Weapon r_weapon; 
  __int128 v56; 
  __int128 v57; 

  v6 = localClientNum;
  v7 = fovSpace;
  fovSpacea = fovSpace;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v10 = CgWeaponMap::ms_instance[v6];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  *(_QWORD *)&result->finalFov = 0i64;
  result->baseFovAdjustment = 0.0;
  if ( updateFovWeights )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1785, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v12 = v7;
    *(_QWORD *)LocalClientGlobals->fovCalcWeights.fovSpaces[v12].weights = 0i64;
    *(_QWORD *)&LocalClientGlobals->fovCalcWeights.fovSpaces[v12].weights[2] = 0i64;
    *(_QWORD *)&LocalClientGlobals->fovCalcWeights.fovSpaces[v12].weights[4] = 0i64;
  }
  if ( LocalClientGlobals->m_frontEndScene )
  {
    CameraFOV = CG_FrontEndScene_GetCameraFOV();
    result->finalFov = *(float *)&CameraFOV;
    goto LABEL_77;
  }
  ViewmodelOrOffhandADSSupportWeapon = (Weapon *)BG_GetViewmodelOrOffhandADSSupportWeapon(v10, &LocalClientGlobals->predictedPlayerState, &outIsAlternate);
  outRanVelocityBasedFovIncreaseCalculation = 0;
  BaseFOVAdjustment = 0.0;
  r_weapon = *ViewmodelOrOffhandADSSupportWeapon;
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 )
  {
    outViewFOV = FLOAT_90_0;
    goto LABEL_35;
  }
  if ( (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 && r_weapon.weaponIdx )
  {
    outViewFOV = CG_View_ADSZoomFov((const LocalClientNum_t)v6, (const CG_FovSpace)v7, v10, &LocalClientGlobals->predictedPlayerState, &r_weapon, outIsAlternate, NULL);
    goto LABEL_35;
  }
  if ( LocalClientGlobals->cvsData.transitory.remoteMissileCam )
  {
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_missileRemoteFOV, "missileRemoteFOV");
    outViewFOV = *(float *)&Float_Internal_DebugName;
    if ( *(float *)&Float_Internal_DebugName > 0.0 )
      goto LABEL_35;
LABEL_18:
    FovUnscaledDvarValue = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v6);
    outViewFOV = *(float *)&FovUnscaledDvarValue;
    goto LABEL_35;
  }
  if ( BG_IsUfoViewmodel(&LocalClientGlobals->predictedPlayerState) )
    goto LABEL_18;
  if ( CG_VehicleCam_IsRemoteDriveCam((LocalClientNum_t)v6) )
  {
    RemoteDriveFov = CG_VehicleCam_GetRemoteDriveFov((LocalClientNum_t)v6);
    outViewFOV = *(float *)&RemoteDriveFov;
  }
  else if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
  {
    outViewFOV = LocalClientGlobals->turretFov;
  }
  else if ( BG_IsPlayerOnRemoteTurret(&LocalClientGlobals->predictedPlayerState) )
  {
    outViewFOV = LocalClientGlobals->turretFov;
  }
  else
  {
    if ( CG_Camera_DeathCam_IsFOVSet((LocalClientNum_t)v6, &outViewFOV) )
    {
      *(float *)&CameraFOV = outViewFOV;
      result->finalFov = outViewFOV;
      goto LABEL_77;
    }
    if ( LocalClientGlobals->m_isMLGSpectator && LocalClientGlobals->spectatingThirdPerson )
    {
      v19 = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v6);
      outViewFOV = *(float *)&v19;
    }
    else if ( r_weapon.weaponIdx && LocalClientGlobals->adsAltSwitchInProgress )
    {
      outViewFOV = CG_GetADSAltSwitchViewFovBySpace((LocalClientNum_t)v6, (CG_FovSpace)v7, &r_weapon, outIsAlternate);
    }
    else
    {
      EffectiveFOVForWeapon = CG_View_GetEffectiveFOVForWeapon((const LocalClientNum_t)v6, (CG_FovSpace)v7, &r_weapon, outIsAlternate, updateFovWeights, &outRanVelocityBasedFovIncreaseCalculation);
      outViewFOV = *(float *)&EffectiveFOVForWeapon;
      if ( outRanVelocityBasedFovIncreaseCalculation )
        goto LABEL_36;
    }
  }
LABEL_35:
  outViewFOV = CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v6, 1) + outViewFOV;
LABEL_36:
  FovDelta = CG_Skydive_GetFovDelta((const LocalClientNum_t)v6);
  outViewFOV = *(float *)&FovDelta + outViewFOV;
  if ( CG_Vehicle_GetRemoteControlledVehicleDef((LocalClientNum_t)v6) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v6);
    v23 = CgVehicleSystem::PhysicsGetFovDelta(VehicleSystem, &LocalClientGlobals->predictedPlayerState);
    outViewFOV = *(float *)&v23 + outViewFOV;
  }
  if ( LocalClientGlobals->fovLerpTimer <= 0 )
  {
    v31 = DVARFLT_cg_fovScale;
    if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    v30 = outViewFOV * v31->current.value;
  }
  else
  {
    v57 = v4;
    v56 = v5;
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1873, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
      __debugbreak();
    v24 = I_clamp(LocalClientGlobals->fovLerpTimer - LocalClientGlobals->frametime, 0, LocalClientGlobals->fovLerpDuration);
    fovLerpDuration = LocalClientGlobals->fovLerpDuration;
    if ( fovLerpDuration )
      v26 = (float)v24 / (float)fovLerpDuration;
    else
      v26 = FLOAT_1_0;
    v27 = DVARFLT_cg_fovScale;
    fovLerpTarget = LocalClientGlobals->fovLerpTarget;
    fovLerpBase = LocalClientGlobals->fovLerpBase;
    if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v30 = (float)((float)(fovLerpTarget * v27->current.value) * (float)(1.0 - v26)) + (float)(fovLerpBase * v26);
  }
  outViewFOV = v30;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) )
  {
    v33 = DVARFLT_cg_playerFovScale;
    if ( !DVARFLT_cg_playerFovScale )
    {
      v34 = "cg_playerFovScale";
LABEL_59:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v34) )
        __debugbreak();
    }
LABEL_61:
    Dvar_CheckFrontendServerThread(v33);
    outViewFOV = outViewFOV * v33->current.value;
    goto LABEL_62;
  }
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v6);
  if ( BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
  {
    v33 = DCONST_DVARMPSPFLT_camera_thirdPersonFovScale;
    if ( !DCONST_DVARMPSPFLT_camera_thirdPersonFovScale )
    {
      v34 = "camera_thirdPersonFovScale";
      goto LABEL_59;
    }
    goto LABEL_61;
  }
LABEL_62:
  if ( CG_VehicleCam_IsDriveCam((LocalClientNum_t)v6) )
  {
    v35 = CG_VehicleCam_ScaleFov(LocalClientGlobals, outViewFOV);
    outViewFOV = *(float *)&v35;
  }
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v6) )
  {
    Fov = CG_CinematicCameraGetFov((LocalClientNum_t)v6, outViewFOV);
    outViewFOV = *(float *)&Fov;
  }
  if ( !BG_IsUfoViewmodel(&LocalClientGlobals->predictedPlayerState) )
    BaseFOVAdjustment = CG_GetBaseFOVAdjustment((const LocalClientNum_t)v6, fovSpacea, outViewFOV);
  v37 = outViewFOV;
  outViewFOV = outViewFOV - BaseFOVAdjustment;
  result->baseFovAdjustment = BaseFOVAdjustment;
  if ( CL_Cameraman_isActive() )
  {
    v38 = CL_Cameraman_GetFov(outViewFOV);
    outViewFOV = *(float *)&v38;
  }
  OverrideFOV = CG_Camera_GetOverrideFOV((const LocalClientNum_t)v6, &overrideFovDeg);
  v40 = DVARFLT_cg_fovMin;
  _XMM0 = OverrideFOV;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(overrideFovDeg);
  __asm { vblendvps xmm7, xmm1, xmm2, xmm3 }
  outViewFOV = *(float *)&_XMM7;
  if ( !DVARFLT_cg_fovMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovMin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  _XMM0 = v40->current.unsignedInt;
  __asm
  {
    vmaxss  xmm1, xmm0, xmm7
    vminss  xmm2, xmm1, cs:__real@432a0000
  }
  result->finalFov = *(float *)&_XMM2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM2 - *(float *)&_XMM7) & _xmm) <= 0.000001 )
  {
    v48 = result->baseFovAdjustment;
  }
  else
  {
    v48 = v37 - *(float *)&_XMM2;
    result->baseFovAdjustment = v37 - *(float *)&_XMM2;
  }
  *(float *)&CameraFOV = *(float *)&_XMM2 + v48;
LABEL_77:
  result->baseFov = *(float *)&CameraFOV;
  return result;
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
  cg_t *v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = DVARFLT_cg_fovScale;
  v3 = LocalClientGlobals;
  if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return (float)(v3->refdef.view.fov.tanHalfFovY * 2.1186731) / v2->current.value;
}

/*
==============
CG_InitDofPhysical
==============
*/
void CG_InitDofPhysical(const playerState_s *ps, cg_t *cgameGlob)
{
  bool v4; 
  int integer; 
  float focusDistance; 
  DofPhysicalScriptingState dofPhysicalScriptingState; 
  bool v8; 
  const dvar_t *v9; 
  bool v10; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v13; 
  char v14; 
  XB3ConsoleType XB3ConsoleType; 
  char v16; 
  float v17; 

  v4 = ps->dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && r_dof_physical_hipEnable->current.enabled;
  cgameGlob->refdef.dofPhysical.hipEnabled = v4;
  cgameGlob->refdef.dofPhysical.scriptingEnabled = ps->dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
  cgameGlob->refdef.dofPhysical.adsEnabled = ps->weapCommon.fWeaponPosFrac > 0.0;
  LODWORD(cgameGlob->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
  LODWORD(cgameGlob->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
  integer = r_dof_physical_maxCocDiameter->current.integer;
  cgameGlob->refdef.dofPhysical.fstop = cgameGlob->refdef.dofPhysicalFocusState.fstop;
  focusDistance = cgameGlob->refdef.dofPhysicalFocusState.focusDistance;
  LODWORD(cgameGlob->refdef.dofPhysical.maxCocDiameter) = integer;
  cgameGlob->refdef.dofPhysical.focusDistance = focusDistance;
  dofPhysicalScriptingState = ps->dofPhysicalScriptingState;
  v8 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
  v9 = DVARBOOL_killswitch_weapon_based_dof_disable;
  v10 = v8;
  if ( !DVARBOOL_killswitch_weapon_based_dof_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_based_dof_disable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled || dofPhysicalScriptingState || !v10 || ps->weapCommon.fWeaponPosFrac <= 0.0 )
    goto LABEL_20;
  Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6238, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, ps);
  v13 = BG_UsingAlternate(ps);
  if ( BG_HasDualFOV(Instance, ps, ViewmodelWeapon, v13) )
    goto LABEL_20;
  v14 = byte_1512F365E;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v16 = v14;
  if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
    v16 = 1;
  if ( !v16 )
  {
LABEL_20:
    cgameGlob->refdef.worldMotionBlurOverride = 0;
    cgameGlob->refdef.dofPhysical.cocScale = cgameGlob->refdef.dofPhysicalFocusState.cocScale;
  }
  else
  {
    v17 = *(float *)&dword_147FA5778;
    cgameGlob->refdef.dofPhysical.cocScale = *(float *)&dword_1512F3660;
    cgameGlob->refdef.worldMotionBlurOverride = *(float *)&dword_147FA577C;
    cgameGlob->refdef.dofPhysical.viewModelFstop = v17;
  }
}

/*
==============
CG_InitFocusParamsFromAds
==============
*/
void CG_InitFocusParamsFromAds(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams, bool isMultiplayer, float multiplayerAdsStart, float multiplayerAdsEnd)
{
  double ScaledSharpCocDiameter; 
  float focusDistance; 
  float value; 
  float v15; 

  ScaledSharpCocDiameter = R_GetScaledSharpCocDiameter(0.0011811031, r_dof_physical_filmDiagonal->current.value);
  if ( !isMultiplayer )
  {
    multiplayerAdsStart = ps->dofPhysicalAdsStart;
    multiplayerAdsEnd = ps->dofPhysicalAdsEnd;
  }
  R_GetFocusPlaneAndApertureFromRange(cgameGlob->refdef.view.focalLength, multiplayerAdsStart, multiplayerAdsEnd, *(float *)&ScaledSharpCocDiameter, r_dof_physical_adsMinFstop->current.value, r_dof_physical_adsMaxFstop->current.value, r_dof_physical_minFocusDistance->current.value, &focusParams->focusDistance, &focusParams->fstop);
  focusDistance = focusParams->focusDistance;
  focusParams->cocScale = 1.0;
  if ( focusDistance >= cgameGlob->refdef.dofPhysicalFocusState.focusDistance )
    value = r_dof_physical_adsFocusSpeed->current.vector.v[1];
  else
    value = r_dof_physical_adsFocusSpeed->current.value;
  focusParams->focusSpeed = value;
  if ( focusParams->fstop >= cgameGlob->refdef.dofPhysicalFocusState.fstop )
    v15 = r_dof_physical_adsFocusSpeed->current.vector.v[3];
  else
    v15 = r_dof_physical_adsFocusSpeed->current.vector.v[2];
  focusParams->apertureSpeed = v15;
}

/*
==============
CG_InitFocusParamsFromHyperfocalMode
==============
*/
void CG_InitFocusParamsFromHyperfocalMode(const playerState_s *ps, cg_t *cgameGlob, FocusParams *focusParams, bool mpMode)
{
  double ScaledSharpCocDiameter; 
  double HyperfocalDistance; 
  float value; 
  float v9; 
  float v10; 

  ScaledSharpCocDiameter = R_GetScaledSharpCocDiameter(r_dof_physical_hipSharpCocDiameter->current.value * 0.039370101, r_dof_physical_filmDiagonal->current.value);
  HyperfocalDistance = R_GetHyperfocalDistance(cgameGlob->refdef.view.focalLength, r_dof_physical_hipFstop->current.value, *(float *)&ScaledSharpCocDiameter);
  value = r_dof_physical_hipFstop->current.value;
  focusParams->fstop = value;
  focusParams->focusDistance = *(float *)&HyperfocalDistance;
  focusParams->cocScale = 0.0;
  if ( *(float *)&HyperfocalDistance >= cgameGlob->refdef.dofPhysicalFocusState.focusDistance )
    v9 = r_dof_physical_hipFocusSpeed->current.vector.v[1];
  else
    v9 = r_dof_physical_hipFocusSpeed->current.value;
  focusParams->focusSpeed = v9;
  if ( value >= cgameGlob->refdef.dofPhysicalFocusState.fstop )
    v10 = r_dof_physical_hipFocusSpeed->current.vector.v[3];
  else
    v10 = r_dof_physical_hipFocusSpeed->current.vector.v[2];
  focusParams->apertureSpeed = v10;
}

/*
==============
CG_InitFocusParamsFromScriptMode
==============
*/
void CG_InitFocusParamsFromScriptMode(LocalClientNum_t localClientNum, const playerState_s *ps, FocusParams *focusParams)
{
  cg_t *LocalClientGlobals; 
  float dofPhysicalApertureSpeed; 
  float dofPhysicalFocusSpeed; 
  float v8; 
  float v9; 
  float v10; 
  float dofPhysicalFocusDistance; 
  vec3_t outOrg; 
  __int64 v13; 

  v13 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  dofPhysicalApertureSpeed = ps->dofPhysicalApertureSpeed;
  dofPhysicalFocusSpeed = ps->dofPhysicalFocusSpeed;
  v8 = ps->dofPhysicalFocalPoint.v[0];
  v9 = ps->dofPhysicalFocalPoint.v[1];
  v10 = ps->dofPhysicalFocalPoint.v[2];
  dofPhysicalFocusDistance = ps->dofPhysicalFocusDistance;
  focusParams->fstop = ps->dofPhysicalFstop;
  if ( v8 == 0.0 && v9 == 0.0 && v10 == 0.0 )
  {
    focusParams->focusDistance = dofPhysicalFocusDistance;
  }
  else
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    focusParams->focusDistance = fsqrt((float)((float)((float)(v9 - outOrg.v[1]) * (float)(v9 - outOrg.v[1])) + (float)((float)(v8 - outOrg.v[0]) * (float)(v8 - outOrg.v[0]))) + (float)((float)(v10 - outOrg.v[2]) * (float)(v10 - outOrg.v[2])));
    memset(&outOrg, 0, sizeof(outOrg));
  }
  focusParams->cocScale = 1.0;
  focusParams->apertureSpeed = dofPhysicalApertureSpeed;
  focusParams->focusSpeed = dofPhysicalFocusSpeed;
}

/*
==============
CG_InitFocusParamsFromWeaponInspect
==============
*/
void CG_InitFocusParamsFromWeaponInspect(const playerState_s *ps, cg_t *cgameGlob, LocalClientNum_t localClientNum, FocusParams *focusParams)
{
  const dvar_t *v4; 
  double ScaledSharpCocDiameter; 
  const dvar_t *v8; 
  float v9; 
  int minFocusDistance; 
  float value; 
  const dvar_t *v12; 
  float maxFstop; 
  const dvar_t *v14; 
  float v15; 
  __int128 weaponInspectDofDist_low; 
  __int128 v18; 
  __int128 v21; 
  float v23; 
  float v24; 

  v4 = DCONST_DVARFLT_bg_weapon_inspect_dof_coc_diameter_mm;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_coc_diameter_mm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_coc_diameter_mm") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  ScaledSharpCocDiameter = R_GetScaledSharpCocDiameter(v4->current.value * 0.039370101, r_dof_physical_filmDiagonal->current.value);
  v8 = DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min;
  v9 = *(float *)&ScaledSharpCocDiameter;
  minFocusDistance = r_dof_physical_minFocusDistance->current.integer;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_fstop_min") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v12 = DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_fstop_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_fstop_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  maxFstop = v12->current.value;
  v14 = DCONST_DVARFLT_bg_weapon_inspect_dof_width;
  if ( !DCONST_DVARFLT_bg_weapon_inspect_dof_width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_width") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = v14->current.value;
  weaponInspectDofDist_low = LODWORD(cgameGlob->weaponInspectDofDist);
  v18 = weaponInspectDofDist_low;
  *(float *)&v18 = *(float *)&weaponInspectDofDist_low - (float)(v15 * 0.5);
  _XMM0 = v18;
  __asm { vmaxss  xmm1, xmm0, xmm8; start }
  v21 = weaponInspectDofDist_low;
  *(float *)&v21 = *(float *)&weaponInspectDofDist_low + (float)(v15 * 0.5);
  _XMM2 = v21;
  __asm { vmaxss  xmm2, xmm2, xmm0; end }
  R_GetFocusPlaneAndApertureFromRange(cgameGlob->refdef.view.focalLength, *(float *)&_XMM1, *(float *)&_XMM2, v9, value, maxFstop, *(float *)&minFocusDistance, &focusParams->focusDistance, &focusParams->fstop);
  *(float *)&_XMM0 = focusParams->focusDistance;
  focusParams->cocScale = 1.0;
  if ( *(float *)&_XMM0 >= cgameGlob->refdef.dofPhysicalFocusState.focusDistance )
    v23 = r_dof_physical_adsFocusSpeed->current.vector.v[1];
  else
    v23 = r_dof_physical_adsFocusSpeed->current.value;
  focusParams->focusSpeed = v23;
  if ( focusParams->fstop >= cgameGlob->refdef.dofPhysicalFocusState.fstop )
    v24 = r_dof_physical_adsFocusSpeed->current.vector.v[3];
  else
    v24 = r_dof_physical_adsFocusSpeed->current.vector.v[2];
  focusParams->apertureSpeed = v24;
}

/*
==============
CG_InterpolateFocusParams
==============
*/
void CG_InterpolateFocusParams(const FocusParams *focusParams1, const FocusParams *focusParams2, float w, FocusParams *focusParams)
{
  focusParams->fstop = (float)(w * focusParams2->fstop) + (float)((float)(1.0 - w) * focusParams1->fstop);
  focusParams->focusDistance = (float)((float)(1.0 - w) * focusParams1->focusDistance) + (float)(w * focusParams2->focusDistance);
  focusParams->cocScale = (float)((float)(1.0 - w) * focusParams1->cocScale) + (float)(w * focusParams2->cocScale);
  focusParams->focusSpeed = (float)((float)(1.0 - w) * focusParams1->focusSpeed) + (float)(w * focusParams2->focusSpeed);
  focusParams->apertureSpeed = (float)((float)(1.0 - w) * focusParams1->apertureSpeed) + (float)(w * focusParams2->apertureSpeed);
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
  cg_t *LocalClientGlobals; 
  double Float; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int p; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2506, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Float = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovLerpBase = *(float *)&Float;
  v6 = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovLerpTarget = *(float *)&v6;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovLerpDuration = p;
  v7 = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovScaleLerpBase = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovScaleLerpTarget = *(float *)&v8;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovScaleLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovScaleLerpDuration = p;
  v9 = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovPresetLerpBase = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  LocalClientGlobals->fovPresetLerpTarget = *(float *)&v10;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovPresetLerpTimer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovPresetLerpDuration = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  LocalClientGlobals->fovLastPresetIndex = p;
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
  __int64 v3; 
  float *v4; 
  double Float; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  double v31; 
  double v32; 
  double v33; 
  double v34; 
  __int16 p[12]; 
  char v36; 
  char v37; 

  v3 = 4i64;
  v4 = &CG_GetLocalClientGlobals(localClientNum)->linkedToPlayerView[0].viewToLinkedTagTransform.m[1].v[2];
  do
  {
    Float = MemFile_ReadFloat(memFile);
    *(v4 - 5) = *(float *)&Float;
    v6 = MemFile_ReadFloat(memFile);
    *(v4 - 4) = *(float *)&v6;
    v7 = MemFile_ReadFloat(memFile);
    *(v4 - 3) = *(float *)&v7;
    v8 = MemFile_ReadFloat(memFile);
    *(v4 - 2) = *(float *)&v8;
    v9 = MemFile_ReadFloat(memFile);
    *(v4 - 1) = *(float *)&v9;
    v10 = MemFile_ReadFloat(memFile);
    *v4 = *(float *)&v10;
    v11 = MemFile_ReadFloat(memFile);
    v4[1] = *(float *)&v11;
    v12 = MemFile_ReadFloat(memFile);
    v4[2] = *(float *)&v12;
    v13 = MemFile_ReadFloat(memFile);
    v4[3] = *(float *)&v13;
    v14 = MemFile_ReadFloat(memFile);
    v4[4] = *(float *)&v14;
    v15 = MemFile_ReadFloat(memFile);
    v4[5] = *(float *)&v15;
    v16 = MemFile_ReadFloat(memFile);
    v4[6] = *(float *)&v16;
    v17 = MemFile_ReadFloat(memFile);
    v4[7] = *(float *)&v17;
    v18 = MemFile_ReadFloat(memFile);
    v4[8] = *(float *)&v18;
    v19 = MemFile_ReadFloat(memFile);
    v4[9] = *(float *)&v19;
    v20 = MemFile_ReadFloat(memFile);
    v4[10] = *(float *)&v20;
    v21 = MemFile_ReadFloat(memFile);
    v4[11] = *(float *)&v21;
    v22 = MemFile_ReadFloat(memFile);
    v4[12] = *(float *)&v22;
    v23 = MemFile_ReadFloat(memFile);
    v4[13] = *(float *)&v23;
    v24 = MemFile_ReadFloat(memFile);
    v4[14] = *(float *)&v24;
    v25 = MemFile_ReadFloat(memFile);
    v4[15] = *(float *)&v25;
    v26 = MemFile_ReadFloat(memFile);
    v4[16] = *(float *)&v26;
    v27 = MemFile_ReadFloat(memFile);
    v4[17] = *(float *)&v27;
    v28 = MemFile_ReadFloat(memFile);
    v4[18] = *(float *)&v28;
    v29 = MemFile_ReadFloat(memFile);
    v4[19] = *(float *)&v29;
    v30 = MemFile_ReadFloat(memFile);
    v4[20] = *(float *)&v30;
    v31 = MemFile_ReadFloat(memFile);
    v4[21] = *(float *)&v31;
    v32 = MemFile_ReadFloat(memFile);
    v4[22] = *(float *)&v32;
    v33 = MemFile_ReadFloat(memFile);
    v4[23] = *(float *)&v33;
    v34 = MemFile_ReadFloat(memFile);
    v4[24] = *(float *)&v34;
    MemFile_ReadData(memFile, 2ui64, p);
    *((_WORD *)v4 + 50) = p[0];
    MemFile_ReadData(memFile, 1ui64, &v36);
    *((_BYTE *)v4 + 102) = v36;
    MemFile_ReadData(memFile, 1ui64, &v37);
    *((_BYTE *)v4 + 103) = v37;
    v4 += 31;
    --v3;
  }
  while ( v3 );
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
  cg_t *LocalClientGlobals; 
  int p; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2475, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ) || Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP_BY_PRESET )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovLerpBase);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovLerpTarget);
  p = LocalClientGlobals->fovLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->fovLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovScaleLerpBase);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovScaleLerpTarget);
  p = LocalClientGlobals->fovScaleLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->fovScaleLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovPresetLerpBase);
  MemFile_WriteFloat(memFile, LocalClientGlobals->fovPresetLerpTarget);
  p = LocalClientGlobals->fovPresetLerpTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->fovPresetLerpDuration;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = LocalClientGlobals->fovLastPresetIndex;
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
void CG_SetVignetteParams(LocalClientNum_t localClientNum, float intensity, float squareAspectRatioWeight, float sizeX, float sizeY, float falloff, float falloffStart, float boxSizeX, float boxSizeY, float offsetX, float offsetY)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->refdef.vignette.intensity = intensity;
  LocalClientGlobals->refdef.vignette.squareAspectRatioWeight = squareAspectRatioWeight;
  LocalClientGlobals->refdef.vignette.size.v[1] = sizeY;
  LocalClientGlobals->refdef.vignette.size.v[0] = sizeX;
  LocalClientGlobals->refdef.vignette.falloffStart = falloffStart;
  LocalClientGlobals->refdef.vignette.falloff = falloff;
  LocalClientGlobals->refdef.vignette.boxSize.v[1] = boxSizeY;
  LocalClientGlobals->refdef.vignette.boxSize.v[0] = boxSizeX;
  LocalClientGlobals->refdef.vignette.offset.v[1] = offsetY;
  LocalClientGlobals->refdef.vignette.offset.v[0] = offsetX;
}

/*
==============
CG_SmoothCameraZ
==============
*/
void CG_SmoothCameraZ(const cg_t *cgameGlob, vec3_t *inOutOrigin)
{
  float v4; 
  CgHandler *Handler; 
  int v6; 
  float v7; 
  const dvar_t *v8; 
  int integer; 
  float stepLerpTime; 
  float v11; 
  WorldUpReferenceFrame v12; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 637, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v4 = 0.0;
  if ( cgameGlob->stepViewChange != 0.0 && cgameGlob->time - cgameGlob->stepViewStart >= 0 )
  {
    Handler = CgHandler::getHandler(cgameGlob->localClientNum);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v12, &cgameGlob->predictedPlayerState, Handler);
    v6 = cgameGlob->time - cgameGlob->stepViewStart;
    v7 = (float)v6;
    if ( v7 < cgameGlob->stepLerpTime )
    {
      if ( v6 >= 0 )
      {
        v8 = DCONST_DVARINT_cg_viewZSmoothingInterpType;
        if ( !DCONST_DVARINT_cg_viewZSmoothingInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingInterpType") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        integer = v8->current.integer;
        stepLerpTime = cgameGlob->stepLerpTime;
        if ( integer )
        {
          v11 = v7 / stepLerpTime;
          if ( integer == 1 )
            v4 = (float)((float)((float)(v11 - 1.0) * (float)(v11 - 1.0)) * (float)(v11 - 1.0)) + 1.0;
          else
            v4 = (float)(sinf_0((float)(v11 - 0.5) * 3.1415927) + 1.0) * 0.5;
        }
        else
        {
          v4 = v7 / stepLerpTime;
        }
      }
    }
    else
    {
      v4 = FLOAT_1_0;
    }
    WorldUpReferenceFrame::AddUpContribution(&v12, (float)(v4 - 1.0) * cgameGlob->stepViewChange, inOutOrigin);
  }
}

/*
==============
CG_UpdateVignette
==============
*/
void CG_UpdateVignette(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  float v4; 
  int v5; 
  float v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = LocalClientGlobals;
  if ( LocalClientGlobals->vignetteLerpTimer > 0 )
  {
    v4 = 0.0;
    if ( _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->vignetteLerpDuration).m128_f32[0] <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2260, ASSERT_TYPE_ASSERT, "(cgameGlob->vignetteLerpDuration > 0.0f)", (const char *)&queryFormat, "cgameGlob->vignetteLerpDuration > 0.0f") )
      __debugbreak();
    v5 = I_clamp(v3->vignetteLerpTimer - v3->frametime, 0, v3->vignetteLerpDuration);
    v6 = (float)v5 / (float)v3->vignetteLerpDuration;
    v3->vignetteLerpTimer = v5;
    if ( v6 >= 0.0 )
    {
      if ( v6 < 1.0 )
        v4 = (float)(3.0 - (float)(v6 * 2.0)) * (float)(v6 * v6);
      else
        v4 = FLOAT_1_0;
    }
    CG_SetVignetteParams(localClientNum, (float)(v4 * v3->vignetteLerpBaseIntensity) + (float)((float)(1.0 - v4) * v3->vignetteLerpTargetIntensity), (float)(v4 * v3->vignetteLerpBaseSquareAspectRatioWeight) + (float)((float)(1.0 - v4) * v3->vignetteLerpTargetSquareAspectRatioWeight), (float)((float)(v3->vignetteLerpBaseScale.v[0] - v3->vignetteLerpTargetScale.v[0]) * v4) + v3->vignetteLerpTargetScale.v[0], (float)((float)(v3->vignetteLerpBaseScale.v[1] - v3->vignetteLerpTargetScale.v[1]) * v4) + v3->vignetteLerpTargetScale.v[1], (float)(v4 * v3->vignetteLerpBaseFalloff) + (float)((float)(1.0 - v4) * v3->vignetteLerpTargetFalloff), (float)(v4 * v3->vignetteLerpBaseFalloffStart) + (float)((float)(1.0 - v4) * v3->vignetteLerpTargetFalloffStart), (float)((float)(v3->vignetteLerpBaseBoxSize.v[0] - v3->vignetteLerpTargetBoxSize.v[0]) * v4) + v3->vignetteLerpTargetBoxSize.v[0], (float)((float)(v3->vignetteLerpBaseBoxSize.v[1] - v3->vignetteLerpTargetBoxSize.v[1]) * v4) + v3->vignetteLerpTargetBoxSize.v[1], (float)((float)(v3->vignetteLerpBaseOffset.v[0] - v3->vignetteLerpTargetOffset.v[0]) * v4) + v3->vignetteLerpTargetOffset.v[0], (float)((float)(v3->vignetteLerpBaseOffset.v[1] - v3->vignetteLerpTargetOffset.v[1]) * v4) + v3->vignetteLerpTargetOffset.v[1]);
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
  const dvar_t *v10; 
  const BgHybridScopeFraction *p_fractionInfo; 
  CgHandler *Handler; 
  double v13; 
  float depthHackZoomFov; 
  float v15; 
  const dvar_t *v16; 
  double ADSZoomLevelFraction; 
  float v18; 
  __int64 v19; 
  __int64 v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  LocalClientNum_t _localClientNum[2]; 
  BgWeaponMap *weaponMapa; 
  BgAdsZoomInfo outZoomInfo; 
  float outZoomLevelWeights[4]; 

  weaponMapa = (BgWeaponMap *)weaponMap;
  _localClientNum[1] = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1284, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BYTE1(_localClientNum[0]) = BG_CanHybridToggle(ps, r_weapon, isAlternate);
  if ( fovSpace == CG_FovSpace_Scene )
  {
    v10 = DVARBOOL_com_useAdsFovUserScale;
    if ( !DVARBOOL_com_useAdsFovUserScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_useAdsFovUserScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
  }
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  p_fractionInfo = &LocalClientGlobals->scopeToggleInfo.fractionInfo;
  BG_GetADSZoomInfo(weaponMapa, r_weapon, isAlternate, p_fractionInfo, &outZoomInfo);
  LOBYTE(_localClientNum[0]) = 0;
  Handler = CgHandler::getHandler(_localClientNum[1]);
  v13 = BG_ADSZoomFov(Handler, ps, r_weapon, isAlternate, p_fractionInfo, fovSpace == CG_FovSpace_DepthHack, (bool *)_localClientNum);
  depthHackZoomFov = *(float *)&v13;
  v15 = 0.0;
  if ( fovSpace == CG_FovSpace_DepthHack && !LOBYTE(_localClientNum[0]) && outZoomInfo.depthHackZoomFov > 0.0 )
  {
    outZoomInfo.zoomCount = 1;
    depthHackZoomFov = outZoomInfo.depthHackZoomFov;
  }
  v16 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
  if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
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
LABEL_33:
        outFovTypeWeights->weights[1] = 1.0;
      }
    }
    return depthHackZoomFov;
  }
  if ( outZoomInfo.zoomCount <= 1 )
  {
    if ( !outFovTypeWeights || outZoomInfo.zoomCount != 1 )
      return depthHackZoomFov;
    goto LABEL_33;
  }
  ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(weaponMapa, ps, r_weapon, isAlternate, ps->serverTimeInterpolated);
  BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, outZoomLevelWeights);
  if ( outFovTypeWeights )
  {
    v18 = outZoomLevelWeights[1];
    outFovTypeWeights->weights[1] = outZoomLevelWeights[0];
    outFovTypeWeights->weights[3] = outZoomLevelWeights[2];
    outFovTypeWeights->weights[2] = v18;
  }
  v19 = 0i64;
  v20 = 3i64;
  do
  {
    v21 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
    if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    v22 = outZoomInfo.zoomFov[v19] * outZoomLevelWeights[v19];
    ++v19;
    v23 = v22 + v15;
    v15 = v23;
    --v20;
  }
  while ( v20 );
  return v23;
}

/*
==============
CG_View_AddViewHeight
==============
*/
char CG_View_AddViewHeight(const LocalClientNum_t localClientNum, vec3_t *inOutViewOrigin)
{
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  const playerState_s *p_predictedPlayerState; 
  CgHandler *Handler; 
  WorldUpReferenceFrame v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals->renderingThirdPerson )
    return 0;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&p_predictedPlayerState->eFlags) || p_predictedPlayerState->pm_type == 6 )
    return 0;
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v9, p_predictedPlayerState, Handler, 1);
  WorldUpReferenceFrame::AddUpContribution(&v9, v5->predictedPlayerState.viewHeightCurrent, inOutViewOrigin);
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
  cg_t *LocalClientGlobals; 
  const dvar_t *v6; 
  char v7; 
  const char *v8; 
  float correctedWeaponPosFrac; 
  const dvar_t *v10; 
  const char *v11; 
  float frametime_base; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_IsSpectating(&LocalClientGlobals->predictedPlayerState) || CG_GetLocalClientGlobals(localClientNum)->inKillCam )
  {
    v6 = DCONST_DVARBOOL_smoothCameraEnabledSpectate;
    v7 = 1;
    if ( DCONST_DVARBOOL_smoothCameraEnabledSpectate )
      goto LABEL_9;
    v8 = "smoothCameraEnabledSpectate";
  }
  else
  {
    v6 = DCONST_DVARBOOL_smoothCameraEnabled;
    v7 = 0;
    if ( DCONST_DVARBOOL_smoothCameraEnabled )
      goto LABEL_9;
    v8 = "smoothCameraEnabled";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
    __debugbreak();
LABEL_9:
  Dvar_CheckFrontendServerThread(v6);
  if ( !isSmoothingActive || !v6->current.enabled )
  {
    AngularSmoothing::Reset(&LocalClientGlobals->viewSmoothing);
    return;
  }
  correctedWeaponPosFrac = LocalClientGlobals->weaponPosFracNotReloadingAnimData.correctedWeaponPosFrac;
  if ( v7 )
  {
    v10 = DCONST_DVARFLT_smoothCameraSpeedSpectate;
    if ( !DCONST_DVARFLT_smoothCameraSpeedSpectate )
    {
      v11 = "smoothCameraSpeedSpectate";
      goto LABEL_16;
    }
  }
  else
  {
    v10 = DCONST_DVARFLT_smoothCameraSpeed;
    if ( !DCONST_DVARFLT_smoothCameraSpeed )
    {
      v11 = "smoothCameraSpeed";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v11) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v10);
  if ( v7 )
    frametime_base = cls.frametime_base;
  else
    frametime_base = LocalClientGlobals->frametimeInputSec;
  AngularSmoothing::Update(&LocalClientGlobals->viewSmoothing, LocalClientGlobals, correctedWeaponPosFrac, frametime_base, v10->current.value, &LocalClientGlobals->refdefViewAngles);
}

/*
==============
CG_View_CalcCameraTweaks
==============
*/
void CG_View_CalcCameraTweaks(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  float value; 
  float v4; 
  float v5; 
  const dvar_t *v6; 
  bool v7; 
  float *v; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
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
  vec3_t outOrg; 
  __int64 v23; 
  tmat33_t<vec3_t> axis; 

  v23 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v2 = DVARVEC3_cg_camAngleOffset;
  if ( !DVARVEC3_cg_camAngleOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camAngleOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v4 = v2->current.vector.v[1];
  v5 = v2->current.vector.v[2];
  v6 = DVARBOOL_cg_camAngleOverride;
  if ( !DVARBOOL_cg_camAngleOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camAngleOverride") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = !v6->current.enabled;
  v = LocalClientGlobals->refdefViewAngles.v;
  if ( v7 )
  {
    *v = value + *v;
    LocalClientGlobals->refdefViewAngles.v[1] = v4 + LocalClientGlobals->refdefViewAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = v5 + LocalClientGlobals->refdefViewAngles.v[2];
  }
  else
  {
    *v = value;
    LocalClientGlobals->refdefViewAngles.v[1] = v4;
    LocalClientGlobals->refdefViewAngles.v[2] = v5;
  }
  v9 = DVARVEC3_cg_camOffset;
  if ( !DVARVEC3_cg_camOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_camOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  v11 = v9->current.vector.v[1];
  v12 = v9->current.vector.v[2];
  AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &axis);
  v13 = v11 * axis.m[1].v[0];
  v14 = v10 * axis.m[0].v[0];
  v15 = v12 * axis.m[2].v[0];
  v16 = v11 * axis.m[1].v[1];
  v17 = v10 * axis.m[0].v[1];
  v18 = v12 * axis.m[2].v[1];
  v19 = v11 * axis.m[1].v[2];
  v20 = v10 * axis.m[0].v[2];
  v21 = v12 * axis.m[2].v[2];
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  outOrg.v[0] = (float)((float)(v13 + v14) + v15) + outOrg.v[0];
  outOrg.v[1] = (float)((float)(v17 + v16) + v18) + outOrg.v[1];
  outOrg.v[2] = (float)((float)(v20 + v19) + v21) + outOrg.v[2];
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_View_CalcCubemapViewValues
==============
*/
void CG_View_CalcCubemapViewValues(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  vec3_t vec; 
  __int64 v5; 
  WorldUpReferenceFrame v6; 

  v5 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2664, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  vec = LocalClientGlobals->predictedPlayerState.origin;
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v6, &LocalClientGlobals->predictedPlayerState, Handler, 1);
  WorldUpReferenceFrame::AddUpContribution(&v6, LocalClientGlobals->predictedPlayerState.viewHeightCurrent, &vec);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &vec);
  R_CalcCubeMapViewValues(&LocalClientGlobals->refdef, LocalClientGlobals->cubemapShot, LocalClientGlobals->cubemapSize);
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
  ClientFov *ViewFovBySpace; 
  cg_t *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  float v7; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v10; 
  bool v11; 
  ClientFov *v12; 
  cg_t *v13; 
  double FocalLengthFromFovy; 
  float v15; 
  float v16; 
  double EffectiveFocalLength; 
  double FovyFromFocalLength; 
  float fWeaponPosFrac; 
  float v20; 
  ClientFov v21; 
  ClientFov result; 
  float overrideFovDeg; 
  BgAdsZoomInfo outZoomInfo; 

  CG_View_UpdateFovLerpPreset(localClientNum);
  ViewFovBySpace = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_Scene, 1);
  _XMM7 = *(unsigned __int64 *)&ViewFovBySpace->finalFov;
  v21.baseFovAdjustment = ViewFovBySpace->baseFovAdjustment;
  result.baseFovAdjustment = v21.baseFovAdjustment;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->lastViewFov = *(float *)&_XMM7;
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  __asm { vunpcklps xmm1, xmm7, xmm6 }
  *(double *)&v21.finalFov = *(double *)&_XMM1;
  v7 = LocalClientStaticGlobals->viewMult * LocalClientStaticGlobals->viewAspect;
  v21.baseFovAdjustment = result.baseFovAdjustment;
  CG_View_UpdateFovInternal(LocalClientGlobals, &v21, v7);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2161, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( CG_Camera_GetOverrideFOV((const LocalClientNum_t)LocalClientGlobals->localClientNum, &overrideFovDeg) || (Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum), ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, &LocalClientGlobals->predictedPlayerState), v10 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState), memset(&outZoomInfo, 0, sizeof(outZoomInfo)), BG_GetADSZoomInfo(Instance, ViewmodelWeapon, v10, &LocalClientGlobals->scopeToggleInfo.fractionInfo, &outZoomInfo), outZoomInfo.depthHackZoomFov <= 0.0) && !CG_View_IsSeparateViewModelFovUsed() && ((v11 = BG_SyncedFOVInDualFOV(ViewmodelWeapon, v10), !LocalClientGlobals->dualViewScope) || v11) )
  {
    LocalClientGlobals->refdef.view.depthHackFov = *(GfxFovVector *)&LocalClientGlobals->refdef.view.0;
  }
  else
  {
    v12 = CG_GetViewFovBySpace(&result, localClientNum, CG_FovSpace_DepthHack, 1);
    TanHalfAngles(COERCE_FLOAT(*(_QWORD *)&v12->finalFov), v7, (float *)&LocalClientGlobals->refdef.view.depthHackFov, &LocalClientGlobals->refdef.view.depthHackFov.tanHalfFovY);
  }
  v13 = CG_GetLocalClientGlobals(localClientNum);
  FocalLengthFromFovy = R_GetFocalLengthFromFovy(v13->refdef.view.fov.tanHalfFovY, r_dof_physical_filmDiagonal->current.value, v13->refdef.view.fov.tanHalfFovX / v13->refdef.view.fov.tanHalfFovY);
  v13->refdef.view.focalLength = *(float *)&FocalLengthFromFovy * 0.039370101;
  if ( R_DOF_GetPhysicalEnable() && r_dof_physical_accurateFov->current.enabled && (LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0 || LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState) )
  {
    v15 = LocalClientGlobals->refdef.view.fov.tanHalfFovX / LocalClientGlobals->refdef.view.fov.tanHalfFovY;
    v16 = 0.039370101 * r_dof_physical_filmDiagonal->current.value;
    EffectiveFocalLength = R_GetEffectiveFocalLength(LocalClientGlobals->refdef.view.focalLength, LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance, r_dof_physical_minFocusDistance->current.value);
    FovyFromFocalLength = R_GetFovyFromFocalLength(*(float *)&EffectiveFocalLength, v16, v15);
    fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
    v20 = (float)(tanf_0(*(float *)&FovyFromFocalLength * 0.0087266462) * fWeaponPosFrac) + (float)((float)(1.0 - fWeaponPosFrac) * LocalClientGlobals->refdef.view.fov.tanHalfFovY);
    LocalClientGlobals->refdef.view.fov.tanHalfFovX = v20 * v15;
    LocalClientGlobals->refdef.view.fov.tanHalfFovY = v20;
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
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  float v7; 
  double v8; 
  float v9; 
  float v10; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 259, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Def = CG_Camera_Active_TryGetDef(cgameGlob->localClientNum);
  if ( Def && Def->profile == CAMERAPROFILE_FIRST_PERSON_VIEW && Def->firstPerson.disableFOVWeaponOffset || !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80) )
    return 0.0;
  v4 = DCONST_DVARFLT_cg_fov_default_nocomp;
  if ( !DCONST_DVARFLT_cg_fov_default_nocomp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_default_nocomp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARFLT_cg_fov_comp_max;
  if ( !DCONST_DVARFLT_cg_fov_comp_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_comp_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.value;
  if ( v7 <= value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 281, ASSERT_TYPE_ASSERT, "(maxCompFov > baseFov)", (const char *)&queryFormat, "maxCompFov > baseFov") )
    __debugbreak();
  v8 = I_fclamp(cgameGlob->lastViewFov, value, v7);
  v9 = *(float *)&v8 - value;
  v10 = v7 - value;
  if ( v10 <= 0.000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 285, ASSERT_TYPE_ASSERT, "(fullFovCompRange > 1.0E-6)", (const char *)&queryFormat, "fullFovCompRange > ZERO_EPSILON") )
    __debugbreak();
  return I_fclamp((float)(1.0 - cgameGlob->predictedPlayerState.weapCommon.fWeaponPosFrac) * (float)(v9 / v10), 0.0, 1.0);
}

/*
==============
CG_View_CalcRadialMotionBlurInternal
==============
*/
void CG_View_CalcRadialMotionBlurInternal(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  cg_t *v4; 
  GfxRadialMotionBlur *p_radialMotionBlur; 
  const SuitDef *SuitDef; 
  CgVehicleSystem *VehicleSystem; 
  char v8; 
  bool v9; 
  float currentRadius; 
  float goalMinRadius; 
  float currentStrength; 
  float v13; 
  float goalMinStrength; 
  float v15; 
  float goalMaxStrength; 
  int radialMotionBlur_interpTimeIn; 
  int *p_startTime; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  int v25; 
  int radialMotionBlur_interpTimeOut; 
  float v27; 
  float strengthCatchupDelta; 
  bool v29; 
  float maxStrength[4]; 
  float minRadius; 
  float maxRadius; 
  float minStrength; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = DVARBOOL_cg_velocityBasedBlur_Enable;
  v4 = LocalClientGlobals;
  p_radialMotionBlur = &LocalClientGlobals->refdef.radialMotionBlur;
  if ( !DVARBOOL_cg_velocityBasedBlur_Enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_velocityBasedBlur_Enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
  {
    if ( !p_radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3751, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
      __debugbreak();
    p_radialMotionBlur->enabled = 0;
    *(_QWORD *)&p_radialMotionBlur->radius = 0i64;
    return;
  }
  SuitDef = BG_GetSuitDef(v4->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3776, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  if ( !CG_Vehicle_GetRemoteControlledVehicleDef(localClientNum) || (VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum), !CgVehicleSystem::PhysicsRadialMotionBlur(VehicleSystem, &v4->predictedPlayerState)) )
  {
    v8 = CG_View_RadialMotionBlurEnabled(localClientNum, &v4->predictedPlayerState, SuitDef, &minStrength, maxStrength, &minRadius, &maxRadius);
    if ( v8 )
    {
      v9 = (unsigned __int8)(v8 - 9) <= 1u && (minStrength != v4->radialMotionBlurState.goalMinStrength || maxStrength[0] != v4->radialMotionBlurState.goalMaxStrength || minRadius != v4->radialMotionBlurState.goalMinRadius || maxRadius != v4->radialMotionBlurState.goalMaxRadius);
      if ( v4->radialMotionBlurState.lastBlurType[0] != v8 || v9 )
      {
        v4->radialMotionBlurState.startTime = v4->time;
        v4->radialMotionBlurState.goalMinStrength = minStrength;
        v4->radialMotionBlurState.goalMaxStrength = maxStrength[0];
        v4->radialMotionBlurState.goalMinRadius = minRadius;
        v4->radialMotionBlurState.goalMaxRadius = maxRadius;
        if ( p_radialMotionBlur->enabled )
        {
          currentRadius = v4->radialMotionBlurState.currentRadius;
          goalMinRadius = v4->radialMotionBlurState.goalMinRadius;
          currentStrength = v4->radialMotionBlurState.currentStrength;
          v4->radialMotionBlurState.startRadius = currentRadius;
          v4->radialMotionBlurState.startStrength = currentStrength;
          v13 = 0.0;
          if ( currentRadius < goalMinRadius || (goalMinRadius = v4->radialMotionBlurState.goalMaxRadius, currentRadius > goalMinRadius) )
            v13 = currentRadius - goalMinRadius;
          goalMinStrength = v4->radialMotionBlurState.goalMinStrength;
          v4->radialMotionBlurState.radiusCatchupDelta = v13;
          v15 = 0.0;
          if ( currentStrength >= goalMinStrength )
          {
            goalMaxStrength = v4->radialMotionBlurState.goalMaxStrength;
            if ( currentStrength > goalMaxStrength )
              v15 = currentStrength - goalMaxStrength;
          }
          else
          {
            v15 = currentStrength - goalMinStrength;
          }
          v4->radialMotionBlurState.strengthCatchupDelta = v15;
        }
        else
        {
          v4->radialMotionBlurState.startRadius = minRadius;
          v4->radialMotionBlurState.startStrength = maxRadius;
          *(_QWORD *)&v4->radialMotionBlurState.radiusCatchupDelta = 0i64;
        }
      }
      radialMotionBlur_interpTimeIn = SuitDef->radialMotionBlur_interpTimeIn;
      if ( v8 == 10 )
      {
        radialMotionBlur_interpTimeIn = 0;
      }
      else if ( v8 == 9 )
      {
        radialMotionBlur_interpTimeIn = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_skydive_rmbTimeInMs, "cg_skydive_rmbTimeInMs");
      }
      p_startTime = &v4->radialMotionBlurState.startTime;
      v19 = v4->time - v4->radialMotionBlurState.startTime;
      if ( v19 <= radialMotionBlur_interpTimeIn )
      {
        v20 = (float)radialMotionBlur_interpTimeIn;
        if ( (float)radialMotionBlur_interpTimeIn > 0.001 )
        {
          v21 = (float)v19;
          goto LABEL_46;
        }
      }
    }
    else
    {
      p_startTime = &v4->radialMotionBlurState.startTime;
      if ( v4->radialMotionBlurState.lastBlurType[0] )
      {
        v22 = v4->radialMotionBlurState.currentRadius;
        v23 = v4->radialMotionBlurState.currentStrength;
        *p_startTime = v4->time;
        v4->radialMotionBlurState.goalMaxRadius = v4->radialMotionBlurState.goalMinRadius;
        v24 = v4->radialMotionBlurState.goalMinStrength;
        v4->radialMotionBlurState.goalMinStrength = v23;
        v4->radialMotionBlurState.goalMaxStrength = v24;
        v4->radialMotionBlurState.startRadius = v22;
        v4->radialMotionBlurState.startStrength = v23;
        v4->radialMotionBlurState.goalMinRadius = v22;
        *(_QWORD *)&v4->radialMotionBlurState.radiusCatchupDelta = 0i64;
      }
      v25 = v4->time - *p_startTime;
      radialMotionBlur_interpTimeOut = SuitDef->radialMotionBlur_interpTimeOut;
      if ( v25 <= radialMotionBlur_interpTimeOut )
      {
        v20 = (float)radialMotionBlur_interpTimeOut;
        if ( (float)radialMotionBlur_interpTimeOut > 0.001 )
        {
          v21 = (float)v25;
LABEL_46:
          v27 = v21 / v20;
          if ( (float)(v21 / v20) < 0.0 )
          {
            *p_startTime = 0;
            v4->radialMotionBlurState.lastBlurType[0] = 0;
            CG_View_DisableRadialMotionBlur(p_radialMotionBlur);
            return;
          }
          goto LABEL_49;
        }
      }
    }
    v27 = FLOAT_1_0;
LABEL_49:
    strengthCatchupDelta = v4->radialMotionBlurState.strengthCatchupDelta;
    v4->radialMotionBlurState.currentRadius = (float)((float)(v4->radialMotionBlurState.radiusCatchupDelta + v4->radialMotionBlurState.goalMinRadius) * (float)(1.0 - v27)) + (float)(v27 * v4->radialMotionBlurState.goalMaxRadius);
    v4->radialMotionBlurState.currentStrength = (float)((float)(strengthCatchupDelta + v4->radialMotionBlurState.goalMinStrength) * (float)(1.0 - v27)) + (float)(v27 * v4->radialMotionBlurState.goalMaxStrength);
    if ( !p_radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3738, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
      __debugbreak();
    v29 = v8 || v27 < 0.99900001;
    p_radialMotionBlur->enabled = v29;
    p_radialMotionBlur->radius = v4->radialMotionBlurState.currentRadius;
    p_radialMotionBlur->strength = v4->radialMotionBlurState.currentStrength;
    v4->radialMotionBlurState.lastBlurType[0] = v8;
  }
}

/*
==============
CG_View_CalcRemoteEyeValues
==============
*/
__int64 CG_View_CalcRemoteEyeValues(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  __int16 remoteEyesEnt; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  ClConfigStrings *ClConfigStrings; 
  const char *v8; 
  const char *v9; 
  scr_string_t String; 
  vec3_t *p_remoteMissileCamAngles; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  vec3_t outOrigin; 
  __int64 v16; 
  tmat33_t<vec3_t> outTagMat; 
  usercmd_s ucmd; 

  v16 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 1;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3187, ASSERT_TYPE_ASSERT, "(ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES ))", (const char *)&queryFormat, "ps->otherFlags.TestFlag( POtherFlagsCommon::REMOTE_EYES )") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 3 )
    return 0i64;
  remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
  if ( remoteEyesEnt == 2047 )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, remoteEyesEnt);
  if ( Entity->nextState.eType == ET_MISSILE && Entity->nextState.lerp.u.anonymous.data[2] > CG_GetLocalClientGlobals(localClientNum)->time )
    return 0i64;
  ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
  if ( !ClientDObj )
    return 0i64;
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v8 = ClConfigStrings->GetClientTagString(ClConfigStrings, LocalClientGlobals->predictedPlayerState.remoteEyesTagname);
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
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
      if ( !BG_IsPlayer(&LocalClientGlobals->predictedPlayerState) || (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 0x20) != 0 )
      {
        AxisToAngles(&outTagMat, &LocalClientGlobals->refdefViewAngles);
      }
      else
      {
        if ( LocalClientGlobals->remoteMissileCamInitialized && LocalClientGlobals->remoteMissileCamEnt == LocalClientGlobals->predictedPlayerState.remoteEyesEnt )
        {
          p_remoteMissileCamAngles = &LocalClientGlobals->remoteMissileCamAngles;
        }
        else
        {
          p_remoteMissileCamAngles = &LocalClientGlobals->remoteMissileCamAngles;
          AxisToAngles(&outTagMat, &LocalClientGlobals->remoteMissileCamAngles);
          LocalClientGlobals->remoteMissileCamInitialized = 1;
          LocalClientGlobals->remoteMissileCamEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt;
        }
        if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x10u) )
        {
          Client = ClActiveClient::GetClient(localClientNum);
          CmdNumber = ClActiveClient_GetCmdNumber(Client);
          if ( CL_GetUserCmd(localClientNum, CmdNumber, &ucmd) )
            BG_UpdateClientControlledMissile(p_remoteMissileCamAngles, ucmd.remoteControlAngles, LocalClientGlobals->frametime);
        }
        LocalClientGlobals->refdefViewAngles.v[0] = p_remoteMissileCamAngles->v[0];
        LocalClientGlobals->refdefViewAngles.v[1] = p_remoteMissileCamAngles->v[1];
        LocalClientGlobals->refdefViewAngles.v[2] = p_remoteMissileCamAngles->v[2];
      }
      if ( Entity->nextState.eType == ET_MISSILE )
      {
        CG_View_RemoteEyesShake(LocalClientGlobals, Entity);
        LocalClientGlobals->cvsData.transitory.remoteMissileCam = 1;
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
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v7; 
  double v8; 
  double v9; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3282, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3283, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3284, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3285, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3288, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &cent->nextState);
    v7 = BG_WeaponDef(WeaponForEntity, 0);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3300, ASSERT_TYPE_ASSERT, "(weaponDef)", (const char *)&queryFormat, "weaponDef") )
      __debugbreak();
    v8 = I_crandom();
    LocalClientGlobals->refdefViewAngles.v[0] = (float)(*(float *)&v8 * v7->vertViewJitter) + LocalClientGlobals->refdefViewAngles.v[0];
    v9 = I_crandom();
    LocalClientGlobals->refdefViewAngles.v[1] = (float)(*(float *)&v9 * v7->horizViewJitter) + LocalClientGlobals->refdefViewAngles.v[1];
  }
}

/*
==============
CG_View_CalcTurretCamera
==============
*/
void CG_View_CalcTurretCamera(const LocalClientNum_t localClientNum, bool calcWorldSpaceTurret)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const entityState_t *p_nextState; 
  const DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v11; 
  double v13; 
  double v14; 
  CgHandler *Handler; 
  float turretTimeSinceFire; 
  float v24; 
  float v25; 
  float v26; 
  vec3_t outOrigin; 
  __int64 v28; 
  tmat33_t<vec3_t> outTagMat; 

  v28 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) )
  {
    if ( LocalClientGlobals->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2692, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
      __debugbreak();
    if ( LocalClientGlobals->predictedPlayerState.viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2693, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.viewlocked_entNum);
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
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
          Instance = CgWeaponMap::GetInstance(localClientNum);
          if ( BG_IsUsingTurretViewarms(Instance, p_predictedPlayerState) )
          {
            if ( LocalClientGlobals == (cg_t *)-384i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
              __debugbreak();
            if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 7u) )
            {
              if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
                __debugbreak();
            }
            else
            {
              AxisToAngles(&outTagMat, &LocalClientGlobals->refdefViewAngles);
            }
          }
          WeaponForEntity = BG_GetWeaponForEntity(Instance, p_nextState);
          v11 = BG_WeaponDef(WeaponForEntity, 0);
          if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2731, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
            __debugbreak();
          if ( LocalClientGlobals->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_WEAPONJITTER && (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) ? LocalClientGlobals->renderingThirdPerson == 0 : LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) == 0) )
          {
            v13 = I_crandom();
            LocalClientGlobals->refdefViewAngles.v[0] = (float)(*(float *)&v13 * v11->vertViewJitter) + LocalClientGlobals->refdefViewAngles.v[0];
            v14 = I_crandom();
            LocalClientGlobals->refdefViewAngles.v[1] = (float)(*(float *)&v14 * v11->horizViewJitter) + LocalClientGlobals->refdefViewAngles.v[1];
          }
          if ( v11->enableViewBounceFire && LocalClientGlobals->turretTimeSinceFire >= 0.0 )
          {
            Handler = CgHandler::getHandler(localClientNum);
            _XMM0 = BG_ShouldHandleThirdPersonVehicleCamera(p_predictedPlayerState, Handler);
            __asm { vpcmpeqd xmm3, xmm0, xmm1 }
            _XMM1 = LODWORD(FLOAT_0_69999999);
            __asm { vblendvps xmm9, xmm1, xmm2, xmm3 }
            turretTimeSinceFire = LocalClientGlobals->turretTimeSinceFire;
            __asm { vpcmpeqd xmm3, xmm0, xmm1 }
            _XMM1 = LODWORD(FLOAT_N1_1);
            __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
            v24 = powf_0(2.7182817, (float)(*(float *)&_XMM0 * v11->viewBounceFireDecay) * turretTimeSinceFire);
            v25 = turretTimeSinceFire * v11->viewBounceFireFrequency;
            v26 = (float)(v24 * cosf_0(v25)) * *(float *)&_XMM9;
            *(float *)&_XMM0 = cosf_0(v25 - 1.5707964);
            LocalClientGlobals->refdefViewAngles.v[0] = (float)(v26 * v11->viewBounceFirePitchScale) + LocalClientGlobals->refdefViewAngles.v[0];
            LocalClientGlobals->refdefViewAngles.v[2] = (float)((float)((float)(v24 * *(float *)&_XMM0) * *(float *)&_XMM9) * v11->viewBounceFireRollScale) + LocalClientGlobals->refdefViewAngles.v[2];
            if ( COERCE_FLOAT(LODWORD(v26) & _xmm) >= 0.001 )
              LocalClientGlobals->turretTimeSinceFire = (float)((float)LocalClientGlobals->frametime * 0.001) + LocalClientGlobals->turretTimeSinceFire;
            else
              LocalClientGlobals->turretTimeSinceFire = -1.0;
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
    }
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v4; 
  tmat33_t<vec3_t> *p_axis; 
  PlayerHandIndex v6; 
  DObj **p_viewModelDObj; 
  const dvar_t *v8; 
  const cpose_t *ViewModelPoseForHand; 
  float cameraAnimationTransScale; 
  float cameraAnimationRotScale; 
  int v12; 
  const CameraDef *Def; 
  const dvar_t *v14; 
  float value; 
  const dvar_t *v16; 
  float v17; 
  const tmat33_t<vec3_t> *ViewModelTransform; 
  float *v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  unsigned int v30; 
  GestureState *p_gestureState; 
  const Gesture *CurrentAsset; 
  __int64 v33; 
  __int64 v34; 
  vec3_t outOrigin; 
  int *p_weaponState; 
  cg_t *v37; 
  __int64 v38; 
  __int64 WeaponHandForViewWeapon; 
  CgWeaponMap *v40; 
  vec3_t outOrg; 
  __int64 v42; 
  vec3_t end; 
  vec3_t angles; 
  vec3_t outAngles; 

  v42 = -2i64;
  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "CG_View_CalcViewAnimation");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v37 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v1];
  v40 = v4;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && !BG_IsVehicleActive(p_predictedPlayerState) || BG_IsUsingTurretViewarms(v4, p_predictedPlayerState) )
  {
    BG_GetViewmodelWeapon(v4, p_predictedPlayerState);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    p_axis = &LocalClientGlobals->refdef.view.axis;
    cg_t::SetViewModelTransform(LocalClientGlobals, &LocalClientGlobals->refdef.view.axis, &outOrg);
    v6 = WEAPON_HAND_DEFAULT;
    WeaponHandForViewWeapon = BG_PlayerLastWeaponHandForViewWeapon(v4, p_predictedPlayerState);
    if ( WeaponHandForViewWeapon >= 0 )
    {
      v38 = 0i64;
      p_weaponState = &LocalClientGlobals->predictedPlayerState.weapState[0].weaponState;
      p_viewModelDObj = &LocalClientGlobals->m_weaponHand[0].viewModelDObj;
      do
      {
        if ( (unsigned int)v6 >= NUM_WEAPON_HANDS )
        {
          LODWORD(v34) = 2;
          LODWORD(v33) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1200, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        CG_UpdateViewModelPreviousPositionForHand((LocalClientNum_t)v1, v6);
        CG_UpdateViewModelPoseForHand(*p_viewModelDObj, (LocalClientNum_t)v1, v6, 0);
        if ( !*p_viewModelDObj )
          break;
        v8 = DCONST_DVARBOOL_cg_disableViewAnimation;
        if ( !DCONST_DVARBOOL_cg_disableViewAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_disableViewAnimation") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( !v8->current.enabled )
        {
          ViewModelPoseForHand = CG_GetViewModelPoseForHand((LocalClientNum_t)v1, v6);
          if ( !CG_DObjGetWorldTagMatrix(ViewModelPoseForHand, *p_viewModelDObj, scr_const.tag_camera, p_axis, &outOrigin) )
            goto LABEL_64;
          cameraAnimationTransScale = FLOAT_1_0;
          cameraAnimationRotScale = FLOAT_1_0;
          v12 = CG_Camera_Active_Get((LocalClientNum_t)v1);
          if ( v12 )
          {
            if ( v12 < 256 && (unsigned int)(v12 - 1) < 0xFA )
            {
              Def = BG_Camera_GetDef(v12);
              if ( Def )
              {
                if ( Def->profile == CAMERAPROFILE_FIRST_PERSON_VIEW )
                {
                  cameraAnimationTransScale = Def->firstPerson.cameraAnimationTransScale;
                  cameraAnimationRotScale = Def->firstPerson.cameraAnimationRotScale;
                }
              }
            }
          }
          v14 = DVARFLT_com_viewAnimCameraRotationScale;
          if ( !DVARFLT_com_viewAnimCameraRotationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraRotationScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v14);
          value = v14->current.value;
          v16 = DVARFLT_com_viewAnimCameraTranslationScale;
          if ( !DVARFLT_com_viewAnimCameraTranslationScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_viewAnimCameraTranslationScale") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v16);
          v17 = v16->current.value;
          ViewModelTransform = (const tmat33_t<vec3_t> *)cg_t::GetViewModelTransform(LocalClientGlobals);
          v19 = (float *)ViewModelTransform;
          if ( (float)(value * cameraAnimationRotScale) != 1.0 )
          {
            AxisToAngles(ViewModelTransform, &angles);
            AxisToAngles(p_axis, &end);
            SlerpAngles(&angles, &end, value * cameraAnimationRotScale, &outAngles);
            AnglesToAxis(&outAngles, p_axis);
          }
          v20 = v17 * cameraAnimationTransScale;
          if ( (float)(v17 * cameraAnimationTransScale) != 1.0 )
          {
            v21 = (float)(outOrigin.v[0] - v19[9]) * v20;
            v22 = (float)(outOrigin.v[1] - v19[10]) * v20;
            v23 = (float)(outOrigin.v[2] - v19[11]) * v20;
            outOrigin.v[0] = v21 + v19[9];
            outOrigin.v[1] = v22 + v19[10];
            outOrigin.v[2] = v23 + v19[11];
          }
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
          AxisToAngles(p_axis, &LocalClientGlobals->refdefViewAngles);
          v24 = DCONST_DVARFLT_cg_viewModelDebugDist;
          if ( !DCONST_DVARFLT_cg_viewModelDebugDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewModelDebugDist") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v24);
          if ( v24->current.value > 0.0 )
          {
            v25 = p_axis->m[0].v[0];
            v26 = p_axis->m[0].v[1];
            v27 = p_axis->m[0].v[2];
            v28 = DCONST_DVARFLT_cg_viewModelDebugDist;
            if ( !DCONST_DVARFLT_cg_viewModelDebugDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewModelDebugDist") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v28);
            v29 = v28->current.value;
            outOrigin.v[0] = outOrigin.v[0] - (float)(v29 * v25);
            outOrigin.v[1] = outOrigin.v[1] - (float)(v29 * v26);
            outOrigin.v[2] = outOrigin.v[2] - (float)(v29 * v27);
            RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrigin);
          }
          if ( v6 == WEAPON_HAND_DEFAULT )
          {
            if ( *p_weaponState )
            {
LABEL_64:
              memset(&outOrigin, 0, sizeof(outOrigin));
              break;
            }
            if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5466, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
              __debugbreak();
            if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5467, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
              __debugbreak();
            if ( WeaponHandForViewWeapon )
            {
              v30 = 0;
              p_gestureState = &p_predictedPlayerState->gestureState;
              while ( 1 )
              {
                CurrentAsset = BG_Gesture_GetCurrentAsset(p_predictedPlayerState, v30);
                if ( CurrentAsset->priority == GESTURE_PRIORITY_MANTLE && p_gestureState->gestures[0].state == GESTURE_STATE_OFF )
                  break;
                ++v30;
                p_gestureState = (GestureState *)((char *)p_gestureState + 32);
                if ( v30 >= 2 )
                  goto LABEL_60;
              }
              if ( CurrentAsset->weaponSettings.splitAnimsAkimbo )
                goto LABEL_64;
LABEL_60:
              LocalClientGlobals = v37;
            }
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        ++v6;
        ++v38;
        p_viewModelDObj += 5;
        p_weaponState += 20;
      }
      while ( v38 <= WeaponHandForViewWeapon );
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_View_CalcViewOrigin
==============
*/
void CG_View_CalcViewOrigin(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int pm_type; 
  float v3; 
  CgHandler *Handler; 
  int v5; 
  float v6; 
  const dvar_t *v7; 
  int integer; 
  float v9; 
  vec3_t vec; 
  __int64 v11; 
  vec3_t outWorldOffset; 
  WorldUpReferenceFrame v13; 

  v11 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5285, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  vec = LocalClientGlobals->predictedPlayerState.origin;
  if ( !LocalClientGlobals->playerTeleported )
  {
    pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
    if ( (pm_type & 0xFFFFFFFC) == 0 && pm_type != 1 )
    {
      v3 = 0.0;
      if ( LocalClientGlobals->stepViewChange != 0.0 && LocalClientGlobals->time - LocalClientGlobals->stepViewStart >= 0 )
      {
        Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, &LocalClientGlobals->predictedPlayerState, Handler);
        v5 = LocalClientGlobals->time - LocalClientGlobals->stepViewStart;
        v6 = (float)v5;
        if ( v6 < LocalClientGlobals->stepLerpTime )
        {
          if ( v5 >= 0 )
          {
            v7 = DCONST_DVARINT_cg_viewZSmoothingInterpType;
            if ( !DCONST_DVARINT_cg_viewZSmoothingInterpType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZSmoothingInterpType") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v7);
            integer = v7->current.integer;
            if ( integer )
            {
              v9 = v6 / LocalClientGlobals->stepLerpTime;
              if ( integer == 1 )
                v3 = (float)((float)((float)(v9 - 1.0) * (float)(v9 - 1.0)) * (float)(v9 - 1.0)) + 1.0;
              else
                v3 = (float)(sinf_0((float)(v9 - 0.5) * 3.1415927) + 1.0) * 0.5;
            }
            else
            {
              v3 = v6 / LocalClientGlobals->stepLerpTime;
            }
          }
        }
        else
        {
          v3 = FLOAT_1_0;
        }
        WorldUpReferenceFrame::AddUpContribution(&v13, (float)(v3 - 1.0) * LocalClientGlobals->stepViewChange, &vec);
      }
    }
  }
  CG_ViewMotion_GetSpringOffset(&LocalClientGlobals->predictedPlayerState, LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac, &LocalClientGlobals->viewSpring, &LocalClientGlobals->predictedPlayerState.viewangles, NULL, &outWorldOffset);
  vec.v[0] = vec.v[0] + outWorldOffset.v[0];
  vec.v[1] = vec.v[1] + outWorldOffset.v[1];
  vec.v[2] = vec.v[2] + outWorldOffset.v[2];
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &vec);
  LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
  LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
  LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
  memset(&vec, 0, sizeof(vec));
}

/*
==============
CG_View_CalcVignette
==============
*/
void CG_View_CalcVignette(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  float vignetteIntensity; 
  float v7; 
  float v8; 
  float vignetteFalloff; 
  float vignetteFalloffStart; 
  float v11; 
  float v12; 
  float v13; 
  int vignetteLerpDuration; 
  const dvar_t *v17; 
  float squareAspectRatioWeight; 
  cg_t *v19; 
  cg_t *v20; 
  cg_t *v21; 
  float v22; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _XMM2 = 0i64;
  v4 = LocalClientGlobals;
  _XMM0 = LODWORD(LocalClientGlobals->predictedPlayerState.vignetteSquareAspectRatio);
  vignetteIntensity = LocalClientGlobals->predictedPlayerState.vignetteIntensity;
  v7 = LocalClientGlobals->predictedPlayerState.vignetteScale.v[0];
  v8 = LocalClientGlobals->predictedPlayerState.vignetteScale.v[1];
  vignetteFalloff = LocalClientGlobals->predictedPlayerState.vignetteFalloff;
  vignetteFalloffStart = LocalClientGlobals->predictedPlayerState.vignetteFalloffStart;
  v11 = LocalClientGlobals->predictedPlayerState.vignetteBoxSize.v[0];
  v12 = LocalClientGlobals->predictedPlayerState.vignetteBoxSize.v[1];
  v13 = LocalClientGlobals->predictedPlayerState.vignetteOffset.v[0];
  vignetteLerpDuration = (int)LocalClientGlobals->predictedPlayerState.vignetteLerpDuration;
  __asm
  {
    vcmpneqss xmm1, xmm0, xmm2
    vblendvps xmm0, xmm2, xmm3, xmm1
  }
  v22 = LocalClientGlobals->predictedPlayerState.vignetteOffset.v[1];
  if ( vignetteIntensity >= 1.0 )
  {
    squareAspectRatioWeight = *(float *)&_XMM0;
  }
  else
  {
    v17 = r_vignetteVisionSetLerpDuration;
    vignetteIntensity = LocalClientGlobals->refdef.vignetteFromVisionSet.intensity;
    squareAspectRatioWeight = LocalClientGlobals->refdef.vignetteFromVisionSet.squareAspectRatioWeight;
    v7 = LocalClientGlobals->refdef.vignetteFromVisionSet.size.v[0];
    v8 = LocalClientGlobals->refdef.vignetteFromVisionSet.size.v[1];
    vignetteFalloff = LocalClientGlobals->refdef.vignetteFromVisionSet.falloff;
    vignetteFalloffStart = LocalClientGlobals->refdef.vignetteFromVisionSet.falloffStart;
    v11 = LocalClientGlobals->refdef.vignetteFromVisionSet.boxSize.v[0];
    v12 = LocalClientGlobals->refdef.vignetteFromVisionSet.boxSize.v[1];
    v13 = LocalClientGlobals->refdef.vignetteFromVisionSet.offset.v[0];
    v22 = LocalClientGlobals->refdef.vignetteFromVisionSet.offset.v[1];
    if ( !r_vignetteVisionSetLerpDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    vignetteLerpDuration = (int)(float)(v17->current.value * 1000.0);
  }
  v19 = CG_GetLocalClientGlobals(localClientNum);
  if ( vignetteLerpDuration || (float)((float)(v19->refdef.vignette.intensity - vignetteIntensity) * (float)(v19->refdef.vignette.intensity - vignetteIntensity)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.squareAspectRatioWeight - squareAspectRatioWeight) * (float)(v19->refdef.vignette.squareAspectRatioWeight - squareAspectRatioWeight)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.size.v[0] - v7) * (float)(v19->refdef.vignette.size.v[0] - v7)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.size.v[1] - v8) * (float)(v19->refdef.vignette.size.v[1] - v8)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.falloff - vignetteFalloff) * (float)(v19->refdef.vignette.falloff - vignetteFalloff)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.falloffStart - vignetteFalloffStart) * (float)(v19->refdef.vignette.falloffStart - vignetteFalloffStart)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.boxSize.v[0] - v11) * (float)(v19->refdef.vignette.boxSize.v[0] - v11)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.boxSize.v[1] - v12) * (float)(v19->refdef.vignette.boxSize.v[1] - v12)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.offset.v[0] - v13) * (float)(v19->refdef.vignette.offset.v[0] - v13)) < 0.0000010000001 && (float)((float)(v19->refdef.vignette.offset.v[1] - v22) * (float)(v19->refdef.vignette.offset.v[1] - v22)) < 0.0000010000001 )
  {
    v20 = CG_GetLocalClientGlobals(localClientNum);
    if ( vignetteLerpDuration > 0 && ((float)((float)(v20->vignetteLerpTargetIntensity - vignetteIntensity) * (float)(v20->vignetteLerpTargetIntensity - vignetteIntensity)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetSquareAspectRatioWeight - squareAspectRatioWeight) * (float)(v20->vignetteLerpTargetSquareAspectRatioWeight - squareAspectRatioWeight)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetScale.v[0] - v7) * (float)(v20->vignetteLerpTargetScale.v[0] - v7)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetScale.v[1] - v8) * (float)(v20->vignetteLerpTargetScale.v[1] - v8)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetFalloff - vignetteFalloff) * (float)(v20->vignetteLerpTargetFalloff - vignetteFalloff)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetFalloffStart - vignetteFalloffStart) * (float)(v20->vignetteLerpTargetFalloffStart - vignetteFalloffStart)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetBoxSize.v[0] - v11) * (float)(v20->vignetteLerpTargetBoxSize.v[0] - v11)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetBoxSize.v[1] - v12) * (float)(v20->vignetteLerpTargetBoxSize.v[1] - v12)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetOffset.v[0] - v13) * (float)(v20->vignetteLerpTargetOffset.v[0] - v13)) >= 0.0000010000001 || (float)((float)(v20->vignetteLerpTargetOffset.v[1] - v22) * (float)(v20->vignetteLerpTargetOffset.v[1] - v22)) >= 0.0000010000001 || v20->vignetteLerpDuration != vignetteLerpDuration) )
    {
      v21 = CG_GetLocalClientGlobals(localClientNum);
      v21->vignetteLerpBaseIntensity = v21->refdef.vignette.intensity;
      v21->vignetteLerpBaseSquareAspectRatioWeight = v21->refdef.vignette.squareAspectRatioWeight;
      v21->vignetteLerpBaseScale = v21->refdef.vignette.size;
      v21->vignetteLerpBaseFalloff = v21->refdef.vignette.falloff;
      v21->vignetteLerpBaseFalloffStart = v21->refdef.vignette.falloffStart;
      v21->vignetteLerpBaseBoxSize = v21->refdef.vignette.boxSize;
      v21->vignetteLerpBaseOffset = v21->refdef.vignette.offset;
      v21->vignetteLerpTargetIntensity = vignetteIntensity;
      v21->vignetteLerpTargetSquareAspectRatioWeight = squareAspectRatioWeight;
      v21->vignetteLerpTargetScale.v[0] = v7;
      v21->vignetteLerpTargetScale.v[1] = v8;
      v21->vignetteLerpTargetFalloff = vignetteFalloff;
      v21->vignetteLerpTargetFalloffStart = vignetteFalloffStart;
      v21->vignetteLerpTargetBoxSize.v[0] = v11;
      v21->vignetteLerpTargetBoxSize.v[1] = v12;
      v21->vignetteLerpTargetOffset.v[0] = v13;
      v21->vignetteLerpTargetOffset.v[1] = v22;
      v21->vignetteLerpDuration = vignetteLerpDuration;
      v21->vignetteLerpTimer = vignetteLerpDuration;
    }
  }
  else
  {
    *(_QWORD *)&v4->vignetteLerpTimer = 0i64;
    CG_SetVignetteParams(localClientNum, vignetteIntensity, squareAspectRatioWeight, v7, v8, vignetteFalloff, vignetteFalloffStart, v11, v12, v13, v22);
  }
  CG_UpdateVignette(localClientNum);
}

/*
==============
CG_View_CalcWeaponFireMotionBlurInternal
==============
*/
void CG_View_CalcWeaponFireMotionBlurInternal(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  cg_t *v4; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v7; 
  double v8; 
  float outBlurDecayExponent; 
  int outBlurDurationMs; 
  float outBlur; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale;
  v4 = LocalClientGlobals;
  if ( !DCONST_DVARMPBOOL_cg_viewmodelMotionBlurFireScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewmodelMotionBlurFireScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, &v4->predictedPlayerState);
    v7 = BG_UsingAlternate(&v4->predictedPlayerState);
    BG_GetMotionBlurProperties(&v4->predictedPlayerState, &v4->scopeToggleInfo.fractionInfo, ViewmodelWeapon, v7, v4->predictedPlayerState.weapCommon.fWeaponPosFrac, &outBlur, &outBlurDurationMs, &outBlurDecayExponent);
    if ( outBlurDurationMs <= 0 || (v8 = I_fclamp((float)(v4->time - v4->predictedPlayerState.weapState[0].weaponFireTime) / (float)outBlurDurationMs, 0.0, 1.0), *(float *)&v8 < 0.0) || *(float *)&v8 >= 1.0 )
    {
      v4->refdef.viewmodelMotionBlurOverride = 0;
    }
    else
    {
      if ( outBlurDecayExponent < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3507, ASSERT_TYPE_ASSERT, "(0.0f <= blurDecayExponent)", (const char *)&queryFormat, "0.0f <= blurDecayExponent") )
        __debugbreak();
      v4->refdef.viewmodelMotionBlurOverride = (float)(1.0 - powf_0(*(float *)&v8, outBlurDecayExponent)) * outBlur;
    }
  }
  else
  {
    v4->refdef.viewmodelMotionBlurOverride = 0;
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
  DObj *viewModelDObj; 
  unsigned __int8 outBoneIndex[8]; 
  vec3_t outOrg; 
  scr_string_t outTagName; 
  TagPair v9; 
  __int64 v10; 
  vec3_t outOrigin; 
  tmat33_t<vec3_t> outTagMat; 

  v10 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6147, ASSERT_TYPE_ASSERT, "(cgameGlob != nullptr)", (const char *)&queryFormat, "cgameGlob != nullptr") )
    __debugbreak();
  cgameGlob->weaponInspectDofActive = 0;
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
      if ( v3->current.enabled && cgameGlob->predictedPlayerState.weapState[0].weaponState == 78 && (!cgameGlob->m_isMLGSpectator || !cgameGlob->renderingThirdPerson) )
      {
        v4 = DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms;
        if ( !DCONST_DVARINT_bg_weapon_inspect_dof_off_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_weapon_inspect_dof_off_time_ms") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        if ( cgameGlob->predictedPlayerState.weapState[0].weaponTime - v4->current.integer > 0 && cgameGlob != (cg_t *)-807496i64 )
        {
          viewModelDObj = cgameGlob->m_weaponHand[0].viewModelDObj;
          if ( viewModelDObj )
          {
            TagPair::TagPair(&v9, scr_const.tag_barrel_attach, scr_const.j_gun);
            outBoneIndex[0] = -2;
            if ( TagPair::GetTagNameAndBoneIndex(&v9, viewModelDObj, &outTagName, outBoneIndex) )
            {
              if ( CG_DObjGetWorldBoneMatrix(&cgameGlob->viewModelPose, viewModelDObj, outBoneIndex[0], &outTagMat, &outOrigin) )
              {
                RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
                cgameGlob->weaponInspectDofDist = fsqrt((float)((float)((float)(outOrigin.v[1] - outOrg.v[1]) * (float)(outOrigin.v[1] - outOrg.v[1])) + (float)((float)(outOrigin.v[0] - outOrg.v[0]) * (float)(outOrigin.v[0] - outOrg.v[0]))) + (float)((float)(outOrigin.v[2] - outOrg.v[2]) * (float)(outOrigin.v[2] - outOrg.v[2])));
                cgameGlob->weaponInspectDofActive = 1;
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
  cg_t *LocalClientGlobals; 
  const SuitDef *SuitDef; 
  const dvar_t *v6; 
  cg_t *v7; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v11; 
  __int128 v12; 
  const dvar_t *v14; 
  __int128 timeBasedFovAddition_low; 
  float v17; 
  float v18; 
  __int128 v19; 
  float cam_minVelocityForFovIncrease; 
  float cam_maxVelocityForFovIncrease; 
  float v22; 
  __int128 v23; 
  float v27; 
  float v28; 
  int pm_type; 
  float v30; 
  double v31; 
  float lastVelocityBasedFovIncreaseRatioTarget; 
  float v33; 
  __int128 v35; 
  __int128 velocityBasedFovIncreaseRatio_low; 
  vec3_t forward; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1213, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  v6 = DCONST_DVARMPBOOL_fovUseTimeBasedBlends;
  if ( !DCONST_DVARMPBOOL_fovUseTimeBasedBlends && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovUseTimeBasedBlends") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
  {
    v17 = LocalClientGlobals->predictedPlayerState.velocity.v[1];
    v18 = LocalClientGlobals->predictedPlayerState.velocity.v[0];
    v19 = LODWORD(LocalClientGlobals->predictedPlayerState.velocity.v[2]);
    cam_minVelocityForFovIncrease = SuitDef->cam_minVelocityForFovIncrease;
    cam_maxVelocityForFovIncrease = SuitDef->cam_maxVelocityForFovIncrease;
    v22 = (float)(v18 * v18) + (float)(v17 * v17);
    v23 = v19;
    *(float *)&v23 = fsqrt((float)(*(float *)&v19 * *(float *)&v19) + v22);
    _XMM9 = v23;
    __asm
    {
      vcmpless xmm0, xmm9, cs:__real@80000000
      vblendvps xmm0, xmm9, xmm1, xmm0
    }
    v27 = SuitDef->cam_velocityToDecreaseFov * SuitDef->cam_velocityToDecreaseFov;
    v28 = (float)(1.0 / *(float *)&_XMM0) * v17;
    AngleVectors(&LocalClientGlobals->predictedPlayerState.viewangles, &forward, NULL, NULL);
    pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
    v30 = (float)((float)((float)((float)((float)(1.0 / *(float *)&_XMM0) * v18) * forward.v[0]) + (float)(v28 * forward.v[1])) + (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v19) * forward.v[2])) * *(float *)&v23;
    if ( pm_type == 5 && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) || easeOutOnly || pm_type == 3 || cam_minVelocityForFovIncrease == 0.0 || cam_maxVelocityForFovIncrease == 0.0 || SuitDef->cam_fovIncreaseAtMaxVelocity == 0.0 )
    {
      v33 = 0.0;
      LocalClientGlobals->lastVelocityBasedFovIncreaseRatioTarget = 0.0;
      lastVelocityBasedFovIncreaseRatioTarget = 0.0;
    }
    else
    {
      v31 = I_fclamp(v30, cam_minVelocityForFovIncrease, cam_maxVelocityForFovIncrease);
      lastVelocityBasedFovIncreaseRatioTarget = LocalClientGlobals->lastVelocityBasedFovIncreaseRatioTarget;
      v33 = (float)(*(float *)&v31 - cam_minVelocityForFovIncrease) / (float)(cam_maxVelocityForFovIncrease - cam_minVelocityForFovIncrease);
      if ( v33 > lastVelocityBasedFovIncreaseRatioTarget )
      {
LABEL_35:
        LocalClientGlobals->lastVelocityBasedFovIncreaseRatioTarget = v33;
        lastVelocityBasedFovIncreaseRatioTarget = v33;
LABEL_36:
        *(float *)&_XMM3 = LocalClientGlobals->velocityBasedFovIncreaseRatio;
        if ( lastVelocityBasedFovIncreaseRatioTarget <= *(float *)&_XMM3 )
        {
          if ( lastVelocityBasedFovIncreaseRatioTarget >= *(float *)&_XMM3 )
          {
LABEL_41:
            *(float *)&_XMM0 = *(float *)&_XMM3 * SuitDef->cam_fovIncreaseAtMaxVelocity;
            return *(float *)&_XMM0;
          }
          velocityBasedFovIncreaseRatio_low = LODWORD(LocalClientGlobals->velocityBasedFovIncreaseRatio);
          *(float *)&velocityBasedFovIncreaseRatio_low = *(float *)&_XMM3 - (float)((float)LocalClientGlobals->frametime * SuitDef->cam_oneOverFovEaseOutTimeMs);
          _XMM2 = velocityBasedFovIncreaseRatio_low;
          __asm { vmaxss  xmm3, xmm2, xmm6 }
        }
        else
        {
          v35 = 0i64;
          *(float *)&v35 = (float)((float)LocalClientGlobals->frametime * SuitDef->cam_oneOverFovEaseInTimeMs) + *(float *)&_XMM3;
          _XMM2 = v35;
          __asm { vminss  xmm3, xmm2, xmm4 }
        }
        LocalClientGlobals->velocityBasedFovIncreaseRatio = *(float *)&_XMM3;
        goto LABEL_41;
      }
    }
    if ( v22 > v27 )
      goto LABEL_36;
    goto LABEL_35;
  }
  v7 = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v7->predictedPlayerState.pm_flags, ACTIVE, 0x14u) )
  {
    v8 = DCONST_DVARFLT_fovIncreaseForSprint;
    if ( !DCONST_DVARFLT_fovIncreaseForSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovIncreaseForSprint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    value = v8->current.value;
  }
  else
  {
    value = 0.0;
  }
  v7->timeBasedFovTargetAddition = value;
  *(float *)&_XMM0 = v7->timeBasedFovAddition;
  if ( value <= *(float *)&_XMM0 )
  {
    if ( value < *(float *)&_XMM0 )
    {
      v14 = DCONST_DVARFLT_fovBlendSpeedOut;
      if ( !DCONST_DVARFLT_fovBlendSpeedOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovBlendSpeedOut") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      timeBasedFovAddition_low = LODWORD(v7->timeBasedFovAddition);
      *(float *)&timeBasedFovAddition_low = v7->timeBasedFovAddition - (float)((float)((float)v7->frametime * 0.001) * v14->current.value);
      _XMM0 = timeBasedFovAddition_low;
      __asm { vmaxss  xmm0, xmm0, xmm6 }
      v7->timeBasedFovAddition = *(float *)&_XMM0;
    }
  }
  else
  {
    v11 = DCONST_DVARFLT_fovBlendSpeedIn;
    if ( !DCONST_DVARFLT_fovBlendSpeedIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovBlendSpeedIn") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = 0i64;
    *(float *)&v12 = (float)((float)((float)v7->frametime * 0.001) * v11->current.value) + v7->timeBasedFovAddition;
    _XMM3 = v12;
    __asm { vminss  xmm0, xmm3, xmm6 }
    v7->timeBasedFovAddition = *(float *)&_XMM0;
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_View_CalculateViewJostle
==============
*/
void CG_View_CalculateViewJostle(const cg_t *cgameGlob, const CgViewSystem::JostleConfig *config, const tmat43_t<vec3_t> *linkedTagAxis, const vec3_t *targetAngles, vec3_t *outAngles, ViewJostleState *outJostleState)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  CgHandler *Handler; 
  float v20; 
  __int64 v23; 
  float v24; 
  float v25; 
  const tmat33_t<vec3_t> *v26; 
  float v27; 
  __int64 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  float v37; 
  float v38; 
  __int128 v39; 
  float v40; 
  float v41; 
  __int128 v42; 
  float v43; 
  __int128 v44; 
  float v45; 
  float v46; 
  float v47; 
  __int128 v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v60; 
  float v61; 
  float v62; 
  __int128 v63; 
  float maxLinearVelocityInfluence; 
  float v65; 
  float v66; 
  __int128 v68; 
  float v70; 
  double v71; 
  float v72; 
  double v73; 
  float v74; 
  double v75; 
  float v76; 
  float v77; 
  float v78; 
  double v79; 
  float v80; 
  double v81; 
  float v82; 
  double v83; 
  int viewLinkedBlendDuration; 
  double v85; 
  __int128 v89; 
  __int64 v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  vec3_t axis; 
  vec3_t v1; 
  vec3_t angles; 
  vec3_t v3; 
  tmat33_t<vec3_t> outAxis; 
  WorldUpReferenceFrame v101; 
  __int128 v102; 
  __int128 v103; 
  __int128 v104; 
  __int128 v105; 
  __int128 v106; 
  __int128 v107; 
  __int128 v108; 
  __int128 v109; 
  __int128 v110; 

  *(_QWORD *)axis.v = linkedTagAxis;
  if ( !config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5892, ASSERT_TYPE_ASSERT, "(config)", (const char *)&queryFormat, "config") )
    __debugbreak();
  if ( !outJostleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5893, ASSERT_TYPE_ASSERT, "(outJostleState)", (const char *)&queryFormat, "outJostleState") )
    __debugbreak();
  Handler = CgHandler::getHandler(cgameGlob->localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v101, &cgameGlob->predictedPlayerState, Handler, 1);
  _XMM2 = LODWORD(cgameGlob->frametimeInputSec);
  v20 = (float)cgameGlob->frametime * 0.001;
  v94 = v20;
  if ( v20 > 0.0 )
  {
    v110 = v6;
    v109 = v7;
    v108 = v8;
    v107 = v9;
    v106 = v10;
    v105 = v11;
    v104 = v12;
    __asm
    {
      vcmpless xmm0, xmm2, xmm1
      vblendvps xmm6, xmm2, xmm10, xmm0
    }
    v103 = v13;
    v102 = v14;
    if ( *(float *)&_XMM6 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5919, ASSERT_TYPE_ASSERT, "(frametimeInputSec != 0.0f)", (const char *)&queryFormat, "frametimeInputSec != 0.0f", 0) )
      __debugbreak();
    v1.v[0] = cgameGlob->predictedPlayerState.viewangles.v[0];
    v23 = *(_QWORD *)&cgameGlob->predictedPlayerState.viewangles.y;
    *(_QWORD *)&v1.y = v23;
    AnglesSubtract(&v1, &outJostleState->oldViewanglesLocal, &v3);
    v24 = v1.v[1];
    v25 = *(float *)&v23 * v3.v[0];
    v26 = *(const tmat33_t<vec3_t> **)axis.v;
    v27 = *(float *)&v23 * v3.v[1];
    outJostleState->oldViewanglesLocal.v[0] = v1.v[0];
    outJostleState->oldViewanglesLocal.v[2] = v1.v[2];
    outJostleState->oldViewanglesLocal.v[1] = v24;
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v101, v26, &outAxis);
    AxisToAngles(&outAxis, &angles);
    AnglesSubtract(&angles, &outJostleState->oldLinkedTagAnglesLocal, &v1);
    if ( outJostleState->isAttachmentCached && outJostleState->isAttachedToCam )
      AnglesSubtract(&v1, &v3, &v1);
    v28 = *(_QWORD *)axis.v;
    v29 = (float)(config->animSwayScale / v20) * 0.016666668;
    v30 = v29 * v1.v[1];
    v31 = v25 + (float)(v29 * v1.v[0]);
    outJostleState->oldLinkedTagAnglesLocal.v[0] = angles.v[0];
    outJostleState->oldLinkedTagAnglesLocal.v[2] = angles.v[2];
    v92 = v31;
    *((float *)&v91 + 1) = v29 * v1.v[2];
    outJostleState->oldLinkedTagAnglesLocal.v[1] = angles.v[1];
    v32 = *(float *)(v28 + 44);
    v33 = *(float *)(v28 + 8);
    v34 = *(float *)v28;
    v35 = *(unsigned int *)(v28 + 4);
    v95 = *(float *)(v28 + 36);
    v36 = LODWORD(v95);
    v37 = v27 + v30;
    v38 = 1.0 / v20;
    *(float *)&v36 = (float)(v95 - outJostleState->oldPos.v[0]) * (float)(1.0 / v20);
    v39 = v36;
    v40 = (float)(v32 - outJostleState->oldPos.v[2]) * v38;
    axis.v[0] = *(float *)(v28 + 40);
    v41 = (float)(axis.v[0] - outJostleState->oldPos.v[1]) * v38;
    v42 = v35;
    *(float *)&v42 = (float)((float)(*(float *)&v35 * v101.m_axis.m[2].v[1]) + (float)(v34 * v101.m_axis.m[2].v[0])) + (float)(v33 * v101.m_axis.m[2].v[2]);
    *(float *)&v91 = v32;
    v43 = COERCE_FLOAT(v42 ^ _xmm) * v101.m_axis.m[2].v[0];
    v44 = v42 ^ _xmm;
    v45 = (float)(*(float *)&v44 * v101.m_axis.m[2].v[1]) + *(float *)&v35;
    v46 = v43 + v34;
    v47 = (float)(*(float *)&v44 * v101.m_axis.m[2].v[2]) + v33;
    *(float *)&v44 = fsqrt((float)((float)(v45 * v45) + (float)(v46 * v46)) + (float)(v47 * v47));
    _XMM4 = v44;
    __asm
    {
      vcmpless xmm0, xmm4, cs:__real@80000000
      vblendvps xmm0, xmm4, xmm9, xmm0
    }
    angles.v[0] = v46 * (float)(1.0 / *(float *)&_XMM0);
    angles.v[2] = v47 * (float)(1.0 / *(float *)&_XMM0);
    angles.v[1] = v45 * (float)(1.0 / *(float *)&_XMM0);
    BgSpaceshipPlayer::BuildAxisFromForward(&angles, &v101.m_axis, &outAxis);
    v51 = v39;
    v52 = (float)((float)(*(float *)&v39 * outAxis.m[0].v[0]) + (float)(v41 * outAxis.m[0].v[1])) + (float)(v40 * outAxis.m[0].v[2]);
    v53 = (float)((float)(*(float *)&v39 * outAxis.m[1].v[0]) + (float)(v41 * outAxis.m[1].v[1])) + (float)(v40 * outAxis.m[1].v[2]);
    *(float *)&v39 = (float)((float)(*(float *)&v39 * outAxis.m[2].v[0]) + (float)(v41 * outAxis.m[2].v[1])) + (float)(v40 * outAxis.m[2].v[2]);
    v54 = (float)(v52 - outJostleState->oldLinearVelocity.v[0]) + outJostleState->accumulatedLinearVelocity.v[0];
    outJostleState->accumulatedLinearVelocity.v[0] = v54;
    v55 = (float)(v53 - outJostleState->oldLinearVelocity.v[1]) + outJostleState->accumulatedLinearVelocity.v[1];
    outJostleState->accumulatedLinearVelocity.v[1] = v55;
    v56 = (float)(*(float *)&v39 - outJostleState->oldLinearVelocity.v[2]) + outJostleState->accumulatedLinearVelocity.v[2];
    *(float *)&v51 = fsqrt((float)((float)(v54 * v54) + (float)(v55 * v55)) + (float)(v56 * v56));
    _XMM3 = v51;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm9, xmm0
    }
    v60 = v54 * (float)(1.0 / *(float *)&_XMM0);
    *(float *)&v35 = (float)(1.0 / *(float *)&_XMM0) * v55;
    v61 = (float)(1.0 / *(float *)&_XMM0) * v56;
    outJostleState->accumulatedLinearVelocity.v[2] = v56;
    *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v51 + 1);
    *(double *)&_XMM0 = I_fclamp(*(float *)&v51, 0.0, config->maxLinearVelocityInfluence);
    v62 = v60 * *(float *)&_XMM0;
    outJostleState->accumulatedLinearVelocity.v[0] = v60 * *(float *)&_XMM0;
    v63 = _XMM0;
    *(float *)&_XMM0 = *(float *)&v35 * *(float *)&_XMM0;
    outJostleState->accumulatedLinearVelocity.v[1] = *(float *)&_XMM0;
    outJostleState->accumulatedLinearVelocity.v[2] = v61 * *(float *)&v63;
    maxLinearVelocityInfluence = config->maxLinearVelocityInfluence;
    v65 = v37 - (float)((float)((float)(1.0 / maxLinearVelocityInfluence) * *(float *)&_XMM0) * config->linearVelocityToAngleRate.v[1]);
    v66 = (float)((float)((float)(1.0 / maxLinearVelocityInfluence) * outJostleState->accumulatedLinearVelocity.v[2]) * config->linearVelocityToAngleRate.v[2]) + (float)((float)((float)(v62 * (float)(1.0 / maxLinearVelocityInfluence)) * config->linearVelocityToAngleRate.v[0]) + v92);
    v68 = v63;
    *(float *)&v68 = *(float *)&v63 - (float)((float)(maxLinearVelocityInfluence / MAX_LINEAR_CONTRIBUTION_DECAY_TIME) * v94);
    _XMM0 = v68;
    __asm { vmaxss  xmm3, xmm0, xmm12 }
    *(float *)&_XMM0 = v60 * *(float *)&_XMM3;
    v70 = *((float *)&v91 + 1);
    outJostleState->accumulatedLinearVelocity.v[0] = *(float *)&_XMM0;
    outJostleState->accumulatedLinearVelocity.v[2] = v61 * *(float *)&_XMM3;
    *(float *)&_XMM0 = axis.v[0];
    outJostleState->accumulatedLinearVelocity.v[1] = *(float *)&v35 * *(float *)&_XMM3;
    outJostleState->oldPos.v[1] = *(float *)&_XMM0;
    outJostleState->oldPos.v[0] = v95;
    outJostleState->oldPos.v[2] = *(float *)&v91;
    *(float *)&v91 = v66;
    outJostleState->oldLinearVelocity.v[0] = v52;
    outJostleState->oldLinearVelocity.v[1] = v53;
    v93 = v66;
    outJostleState->oldLinearVelocity.v[2] = *(float *)&v39;
    if ( (LODWORD(v66) & 0x7F800000) == 2139095040 || (*(float *)&v91 = v65, (LODWORD(v65) & 0x7F800000) == 2139095040) || (*(float *)&v91 = *((float *)&v91 + 1), (HIDWORD(v91) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6019, ASSERT_TYPE_SANITY, "( !IS_NAN( ( offsetAngles )[0] ) && !IS_NAN( ( offsetAngles )[1] ) && !IS_NAN( ( offsetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( offsetAngles )[0] ) && !IS_NAN( ( offsetAngles )[1] ) && !IS_NAN( ( offsetAngles )[2] )", v91) )
        __debugbreak();
    }
    if ( ((LODWORD(outJostleState->oldOffsetangles.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldOffsetangles.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldOffsetangles.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6020, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldOffsetangles )[0] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[1] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldOffsetangles )[0] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[1] ) && !IS_NAN( ( outJostleState->oldOffsetangles )[2] )") )
      __debugbreak();
    if ( ((LODWORD(outJostleState->oldLinkedTagAnglesLocal.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldLinkedTagAnglesLocal.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldLinkedTagAnglesLocal.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6021, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[0] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[1] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[0] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[1] ) && !IS_NAN( ( outJostleState->oldLinkedTagAnglesLocal )[2] )") )
      __debugbreak();
    if ( ((LODWORD(outJostleState->oldPos.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldPos.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldPos.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6022, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldPos )[0] ) && !IS_NAN( ( outJostleState->oldPos )[1] ) && !IS_NAN( ( outJostleState->oldPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldPos )[0] ) && !IS_NAN( ( outJostleState->oldPos )[1] ) && !IS_NAN( ( outJostleState->oldPos )[2] )") )
      __debugbreak();
    if ( ((LODWORD(outJostleState->oldLinearVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldLinearVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->oldLinearVelocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6023, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->oldLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->oldLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->oldLinearVelocity )[2] )") )
      __debugbreak();
    if ( ((LODWORD(outJostleState->accumulatedLinearVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->accumulatedLinearVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outJostleState->accumulatedLinearVelocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6024, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outJostleState->accumulatedLinearVelocity )[0] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[1] ) && !IS_NAN( ( outJostleState->accumulatedLinearVelocity )[2] )") )
      __debugbreak();
    v71 = DiffTrackAngle(v93, outJostleState->oldOffsetangles.v[0], TIME_SMOOTHING_RATE, v94);
    v72 = *(float *)&v71;
    v73 = DiffTrackAngle(v65, outJostleState->oldOffsetangles.v[1], TIME_SMOOTHING_RATE, v94);
    v74 = *(float *)&v73;
    v75 = DiffTrackAngle(v70, outJostleState->oldOffsetangles.v[2], TIME_SMOOTHING_RATE, v94);
    *(float *)&v91 = v72;
    outJostleState->oldOffsetangles.v[0] = v72;
    outJostleState->oldOffsetangles.v[1] = v74;
    outJostleState->oldOffsetangles.v[2] = *(float *)&v75;
    if ( (LODWORD(v72) & 0x7F800000) == 2139095040 || (*(float *)&v91 = v74, (LODWORD(v74) & 0x7F800000) == 2139095040) || (*(float *)&v91 = *(float *)&v75, (LODWORD(v75) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6035, ASSERT_TYPE_SANITY, "( !IS_NAN( ( smoothedOffsetAngles )[0] ) && !IS_NAN( ( smoothedOffsetAngles )[1] ) && !IS_NAN( ( smoothedOffsetAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( smoothedOffsetAngles )[0] ) && !IS_NAN( ( smoothedOffsetAngles )[1] ) && !IS_NAN( ( smoothedOffsetAngles )[2] )", v91) )
        __debugbreak();
    }
    v76 = targetAngles->v[1];
    axis.v[0] = targetAngles->v[0];
    axis.v[2] = targetAngles->v[2];
    axis.v[1] = v76;
    WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&v101, &axis);
    v77 = v74 + axis.v[1];
    v78 = *(float *)&v75 + axis.v[2];
    v79 = AngleClamp(v72 + axis.v[0], axis.v[0], config->maxOffset.v[0]);
    v80 = axis.v[1];
    outAngles->v[0] = *(float *)&v79;
    v81 = AngleClamp(v77, v80, config->maxOffset.v[1]);
    v82 = axis.v[2];
    outAngles->v[1] = *(float *)&v81;
    v83 = AngleClamp(v78, v82, config->maxOffset.v[2]);
    outAngles->v[2] = *(float *)&v83;
    if ( config->respectBlendOut )
    {
      viewLinkedBlendDuration = cgameGlob->predictedPlayerState.viewLinkedBlendDuration;
      *(float *)&v85 = FLOAT_1_0;
      if ( viewLinkedBlendDuration > 0 )
        v85 = I_fclamp((float)(cgameGlob->time - cgameGlob->predictedPlayerState.viewLinkedBlendStart) / (float)viewLinkedBlendDuration, 0.0, 1.0);
      _XMM1 = (unsigned int)cgameGlob->predictedPlayerState.viewLinkedBlendOut;
      __asm { vpcmpeqd xmm3, xmm1, xmm2 }
      v89 = LODWORD(FLOAT_1_0);
      *(float *)&v89 = 1.0 - *(float *)&v85;
      _XMM4 = v89;
      __asm { vblendvps xmm2, xmm4, xmm0, xmm3; frac }
      LerpAngles(&axis, outAngles, *(const float *)&_XMM2, outAngles);
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v101, outAngles);
    if ( ((LODWORD(outAngles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outAngles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6072, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outAngles )[0] ) && !IS_NAN( ( outAngles )[1] ) && !IS_NAN( ( outAngles )[2] )") )
      __debugbreak();
  }
  else
  {
    *outAngles = *targetAngles;
  }
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
  double v10; 
  int v11[4]; 
  vec3_t v12; 
  vec3_t v13; 
  XAnimTreeDebugNode dbgNodes; 

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
      v10 = *(double *)rootDrawAngles->v;
      v12.v[2] = rootDrawAngles->v[2];
      v13.v[2] = rootDrawOrigin->v[2];
      v11[0] = 0;
      *(double *)v12.v = v10;
      *(_QWORD *)v13.v = *(_QWORD *)rootDrawOrigin->v;
      CG_DebugDrawAnimDebugNode_r(obj, cent, v11, &dbgNodes, 0, isRootDontDraw, &v13, &v12);
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
  const dvar_t *v1; 
  int integer; 
  centity_t *Entity; 
  const dvar_t *v5; 
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  const DObj *viewModelDObj; 
  __int64 v9; 
  __int64 v10; 
  float frameInterpolation; 
  __int64 v12; 
  bool v13; 
  __int128 v14; 
  __int64 v18; 
  vec3_t v19; 
  vec3_t outOrigin; 
  vec3_t out; 
  vec3_t forward; 

  v1 = DVARINT_cg_dumpAnims3D;
  if ( !DVARINT_cg_dumpAnims3D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpAnims3D") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( (unsigned int)(integer + 1) > 0x800 )
  {
    LODWORD(v18) = v1->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4461, ASSERT_TYPE_ASSERT, "( ( cgDumpAnimsEntNum >= -1 && cgDumpAnimsEntNum < ( 2048 ) ) )", "( cgDumpAnimsEntNum ) = %i", v18) )
      __debugbreak();
  }
  if ( integer >= 0 )
  {
    Entity = CG_GetEntity(localClientNum, integer);
    if ( integer != localClientNum )
      goto LABEL_18;
    v5 = DVARBOOL_cg_dumpViewmodelAnims;
    if ( !DVARBOOL_cg_dumpViewmodelAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpViewmodelAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v7 = LocalClientGlobals;
      viewModelDObj = LocalClientGlobals->m_weaponHand[0].viewModelDObj;
      if ( !viewModelDObj )
        return;
      if ( (Entity->flags & 1) != 0 )
      {
        v9 = (__int64)LocalClientGlobals->snap->GetPlayerState(LocalClientGlobals->snap, (unsigned int)localClientNum);
        v10 = (__int64)v7->nextSnap->GetPlayerState(v7->nextSnap, (unsigned int)localClientNum);
        frameInterpolation = v7->frameInterpolation;
        v12 = v10;
        outOrigin.v[0] = (float)((float)(*(float *)(v10 + 48) - *(float *)(v9 + 48)) * frameInterpolation) + *(float *)(v9 + 48);
        outOrigin.v[1] = (float)((float)(*(float *)(v10 + 52) - *(float *)(v9 + 52)) * frameInterpolation) + *(float *)(v9 + 52);
        outOrigin.v[2] = (float)((float)(*(float *)(v10 + 56) - *(float *)(v9 + 56)) * frameInterpolation) + *(float *)(v9 + 56);
        LerpAngles((const vec3_t *)(v9 + 472), (const vec3_t *)(v10 + 472), v7->frameInterpolation, &out);
        outOrigin.v[2] = (float)((float)((float)(1.0 - v7->frameInterpolation) * *(float *)(v9 + 488)) + (float)(v7->frameInterpolation * *(float *)(v12 + 488))) + outOrigin.v[2];
      }
      else
      {
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        out = v7->predictedPlayerState.viewangles;
        outOrigin.v[2] = outOrigin.v[2] + v7->predictedPlayerState.viewHeightCurrent;
      }
      v13 = 0;
    }
    else
    {
LABEL_18:
      viewModelDObj = Com_GetClientDObj(integer, localClientNum);
      if ( !viewModelDObj )
        return;
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      out = Entity->pose.angles;
      if ( integer == localClientNum )
      {
        AngleVectors(&out, &forward, NULL, NULL);
        v14 = LODWORD(forward.v[0]);
        *(float *)&v14 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(forward.v[1] * forward.v[1])) + (float)(forward.v[2] * forward.v[2]));
        _XMM3 = v14;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        outOrigin.v[0] = (float)((float)(forward.v[0] * (float)(1.0 / *(float *)&_XMM0)) * 512.0) + outOrigin.v[0];
        outOrigin.v[1] = (float)((float)(forward.v[1] * (float)(1.0 / *(float *)&_XMM0)) * 512.0) + outOrigin.v[1];
        outOrigin.v[2] = (float)((float)((float)(forward.v[2] * (float)(1.0 / *(float *)&_XMM0)) * 512.0) + outOrigin.v[2]) + 20.0;
      }
      else
      {
        outOrigin.v[2] = outOrigin.v[2] + 70.0;
      }
      v13 = 1;
    }
    forward = out;
    v19 = outOrigin;
    CG_View_DebugDrawAnimTree(viewModelDObj, Entity, integer, localClientNum, &v19, &forward, v13);
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  cg_t *v4; 
  CgWeaponMap *v5; 
  const playerState_s *p_predictedPlayerState; 
  double HudOutlineWidth; 
  const dvar_t *v8; 
  cg_t *v9; 
  const dvar_t *v10; 
  const tmat43_t<vec3_t> *ViewModelTransform; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  vec3_t outViewOrigin; 
  vec3_t outOrg; 
  __int64 v19; 
  GfxScopeHudOutlineInfo v20; 

  v19 = -2i64;
  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5821, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->aimAssistViewAngles.v[0] = LocalClientGlobals->baseGunAngles.v[0];
  LocalClientGlobals->aimAssistViewAngles.v[1] = LocalClientGlobals->baseGunAngles.v[1];
  LocalClientGlobals->aimAssistViewAngles.v[2] = LocalClientGlobals->baseGunAngles.v[2];
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( !LocalClientGlobals->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab += LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_set_aab;
  LocalClientGlobals->aimAssistViewOrigin.data[0] = ((((_DWORD)LocalClientGlobals + 98340) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98340) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[0]);
  LocalClientGlobals->aimAssistViewOrigin.data[1] = ((LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98344)) * ((LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98344)) + 2)) ^ LODWORD(outOrg.v[1]);
  LocalClientGlobals->aimAssistViewOrigin.data[2] = ((LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98348)) * ((LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98348)) + 2)) ^ LODWORD(outOrg.v[2]);
  CG_VisionSetApplyToRefdef(&LocalClientGlobals->refdef, &LocalClientGlobals->cvsData);
  v3 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v4 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v1];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &v4->predictedPlayerState;
  BG_GetHudOutlineInScopeColor(v5, p_predictedPlayerState, &v20.foeColor);
  BG_GetHudOutlineAltInScopeColor(v5, p_predictedPlayerState, &v20.friendColor);
  v20.depthTest = BG_GetHudOutlineDepthTest(v5, p_predictedPlayerState);
  v20.fill = BG_GetHudOutlineFill(v5, p_predictedPlayerState);
  BG_GetHudOutlineFillColor0(v5, p_predictedPlayerState, &v20.fillColor0);
  BG_GetHudOutlineFillColor1(v5, p_predictedPlayerState, &v20.fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v5, p_predictedPlayerState, &v20.occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v5, p_predictedPlayerState, &v20.occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v5, p_predictedPlayerState, &v20.occludedInteriorColor);
  HudOutlineWidth = BG_GetHudOutlineWidth(v5, p_predictedPlayerState);
  v20.width = *(float *)&HudOutlineWidth;
  R_HudOutlineApplyToRefdef(&v3->refdef, &v20);
  CG_View_CalcFov((const LocalClientNum_t)v1);
  CG_View_UpdateRadiantView((LocalClientNum_t)v1);
  v8 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
  {
    v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
    XCamValues::XCamValues((XCamValues *)&v20);
    if ( XCamData::IsActive(&v9->xCam) && XCamData::GetValues(&v9->xCam, (XCamValues *)&v20) )
    {
      RefdefView_SetOrg(&v9->refdef.view, (const vec3_t *)&v20);
      *(__m256i *)v9->refdef.view.axis.m[0].v = *(__m256i *)(&v20.fillColor0.xyz + 1);
      v9->refdef.view.axis.m[2].v[2] = v20.occludedOutlineColor.v[3];
      AxisToAngles(&v9->refdef.view.axis, &v9->refdefViewAngles);
      if ( LODWORD(v20.occludedInlineColor.v[0]) )
      {
        if ( LODWORD(v20.occludedInlineColor.v[0]) == 1 )
        {
          CG_View_UpdateFov((const LocalClientNum_t)v1, v20.occludedInlineColor.v[1]);
          v9->refdef.xcamOverridesSceneDoF = 1;
          v9->refdef.view.focalLength = v20.occludedInlineColor.v[1];
          v9->refdef.dofPhysicalFocusState.fstop = v20.occludedInlineColor.v[3];
          v9->refdef.dofPhysicalFocusState.focusDistance = v20.occludedInlineColor.v[2];
          v9->refdef.dofPhysicalFocusState.cocScale = 1.0;
        }
      }
      else
      {
        CG_View_UpdateFov((const LocalClientNum_t)v1, v20.occludedInlineColor.v[1]);
      }
      CG_PlayerState_ClearExtrapolatedPlayerState((const LocalClientNum_t)v1);
    }
  }
  CG_Camera_OnFinalizeViewValues((const LocalClientNum_t)v1, &LocalClientGlobals->refdef.view);
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 4 )
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outViewOrigin);
    CG_ModelPreviewerUpdateView(&outViewOrigin, &LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.zNear);
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outViewOrigin);
    memset(&outViewOrigin, 0, sizeof(outViewOrigin));
  }
  *(_QWORD *)LocalClientGlobals->refdef.view.visibilityOffset.v = 0i64;
  *(_QWORD *)&LocalClientGlobals->refdef.view.visibilityOffset.z = 0i64;
  LocalClientGlobals->refdef.view.visibilityOffsetApplyToRefPoint = 0;
  v10 = DCONST_DVARMPBOOL_mount_enable;
  if ( !DCONST_DVARMPBOOL_mount_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    CG_ContextMount_CalcVisibilityMode((const LocalClientNum_t)LocalClientGlobals->localClientNum);
  ViewModelTransform = cg_t::GetViewModelTransform(LocalClientGlobals);
  v12 = ViewModelTransform->m[3].v[0];
  v13 = ViewModelTransform->m[3].v[1];
  v14 = ViewModelTransform->m[3].v[2];
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outViewOrigin);
  v15 = outViewOrigin.v[1];
  v16 = outViewOrigin.v[2];
  LocalClientGlobals->viewModelViewOffset.x = v12 - outViewOrigin.v[0];
  LocalClientGlobals->viewModelViewOffset.y = v13 - v15;
  LocalClientGlobals->viewModelViewOffset.z = v14 - v16;
  memset(&outViewOrigin, 0, sizeof(outViewOrigin));
  memset(&outOrg, 0, sizeof(outOrg));
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
  __int64 v3; 
  float v4; 
  float v5; 
  float v6; 
  vec3_t outOrg; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  LocalClientGlobals = CG_GetLocalClientGlobals(v0);
  if ( CG_IsFullyInitialized((const LocalClientNum_t)v1) )
  {
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v3 = v1;
    v4 = (float)(100.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
    s_testEffect[v3].pos.v[0] = v4;
    v5 = (float)(100.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
    s_testEffect[v3].pos.v[1] = v5;
    v6 = (float)(100.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
    s_testEffect[v3].pos.v[2] = v6;
    Com_Printf(21, "\n\nFX Testing position set to: (%f, %f, %f)\n\n", v4, v5, v6);
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_View_FxTest
==============
*/

void __fastcall CG_View_FxTest(double a1)
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
  __int128 v13; 

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
      *((double *)&v13 + 1) = *(&a1 + 1);
      *(double *)&v13 = atof(v11) * 1000.0;
      _XMM1 = v13;
      __asm { vcvttsd2si eax, xmm1 }
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
  cgs_t *LocalClientStaticGlobals; 

  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  return LocalClientStaticGlobals->viewMult * LocalClientStaticGlobals->viewAspect;
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
  const dvar_t *v5; 
  double ThirdPersonCrosshairOffset; 

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
    ThirdPersonCrosshairOffset = BG_GetThirdPersonCrosshairOffset(CgWeaponMap::ms_instance[v2], ps);
  }
  else
  {
    v5 = DVARFLT_cg_crosshairVerticalOffset;
    if ( !DVARFLT_cg_crosshairVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairVerticalOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    LODWORD(ThirdPersonCrosshairOffset) = v5->current.integer;
  }
  return *(float *)&ThirdPersonCrosshairOffset;
}

/*
==============
CG_View_GetEffectiveFOVForWeapon
==============
*/
float CG_View_GetEffectiveFOVForWeapon(const LocalClientNum_t localClientNum, CG_FovSpace fovSpace, const Weapon *weapon, const bool isAlternate, const bool updateFovWeights, bool *outRanVelocityBasedFovIncreaseCalculation)
{
  __int64 v8; 
  __int64 v9; 
  cg_t *LocalClientGlobals; 
  __int64 outFovTypeWeights; 
  float FovDvarValue_ForSpace; 
  float v13; 
  CgWeaponMap *v14; 
  playerState_s *p_predictedPlayerState; 
  double FovUnscaledDvarValue; 
  const dvar_t *v17; 
  float result; 
  const CgHandler *Handler; 
  double v22; 
  float v23; 
  float correctedWeaponPosFrac; 
  double OffhandAdsFrac; 
  cg_t *v27; 
  bool v28; 
  AdsOffsetInterpolationType zoomLerpType; 
  double v32; 
  float v33; 
  double v34; 
  float v35; 
  float v36; 
  BgAdsZoomInfo outZoomInfo; 

  v8 = localClientNum;
  v9 = fovSpace;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1422, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  outFovTypeWeights = 0i64;
  if ( updateFovWeights )
  {
    outFovTypeWeights = (__int64)&LocalClientGlobals->fovCalcWeights.fovSpaces[v9];
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1429, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
  }
  if ( outRanVelocityBasedFovIncreaseCalculation )
    *outRanVelocityBasedFovIncreaseCalculation = 0;
  FovDvarValue_ForSpace = CG_View_GetFovDvarValue_ForSpace((const LocalClientNum_t)v8, (CG_FovSpace)v9);
  v13 = FovDvarValue_ForSpace;
  if ( (FovDvarValue_ForSpace < 1.0 || FovDvarValue_ForSpace > 160.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1438, ASSERT_TYPE_SANITY, "( ( hipFov >= 1.0f && hipFov <= 160.0f ) )", "( hipFov ) = %g", FovDvarValue_ForSpace) )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v14 = CgWeaponMap::ms_instance[v8];
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v8)->predictedPlayerState;
  if ( BG_HasLadderHand(p_predictedPlayerState) && (_DWORD)v9 == 1 )
  {
    FovUnscaledDvarValue = CG_View_GetFovUnscaledDvarValue((const LocalClientNum_t)v8);
    *(double *)&_XMM0 = CG_Ladder_GetDepthHackFoV((const LocalClientNum_t)v8, v13, *(float *)&FovUnscaledDvarValue);
    v13 = *(float *)&_XMM0;
  }
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  BG_GetADSZoomInfo(v14, weapon, isAlternate, &LocalClientGlobals->scopeToggleInfo.fractionInfo, &outZoomInfo);
  if ( (_DWORD)v9 != 1 || CG_View_IsSeparateViewModelFovUsed() || (_XMM0 = LODWORD(outZoomInfo.depthHackZoomFov), outZoomInfo.depthHackZoomFov > 0.0) )
  {
    if ( BG_IsAimDownSight(weapon, isAlternate) )
    {
      if ( outFovTypeWeights )
      {
        *(_DWORD *)outFovTypeWeights = 1065353216;
        *(_DWORD *)(outFovTypeWeights + 16) = 1065353216;
      }
      Handler = CgHandler::getHandler((LocalClientNum_t)v8);
      *(float *)&_XMM0 = CG_View_GetWeightedReloadFov(&outZoomInfo, (const CG_FovSpace)v9, Handler, p_predictedPlayerState, weapon, isAlternate);
      __asm { vminss  xmm13, xmm0, xmm7 }
      *(float *)&_XMM0 = CG_View_ADSZoomFov((const LocalClientNum_t)v8, (const CG_FovSpace)v9, v14, p_predictedPlayerState, weapon, isAlternate, (ClientFovTypeWeights *)outFovTypeWeights);
      __asm { vminss  xmm12, xmm0, xmm7 }
      if ( !LocalClientGlobals->dualViewScope )
      {
        *(double *)&_XMM0 = BG_GetMountFOVScale(weapon, isAlternate);
        *((_QWORD *)&_XMM0 + 1) = 0i64;
        *(float *)&_XMM12 = *(float *)&_XMM12 * (float)(1.0 - (float)((float)(1.0 - *(float *)&_XMM0) * p_predictedPlayerState->mountState.mountFraction));
      }
      if ( BG_ADSReloadEnabled(v14, p_predictedPlayerState, weapon, isAlternate) )
      {
        v22 = BG_WeaponReloadingFraction(v14, p_predictedPlayerState);
        v23 = *(float *)&v22;
      }
      else
      {
        v23 = 0.0;
      }
      correctedWeaponPosFrac = LocalClientGlobals->weaponPosFracAnimData.correctedWeaponPosFrac;
      if ( BG_IsUsingOffhandGestureWeaponADSSupport(v14, p_predictedPlayerState) )
      {
        OffhandAdsFrac = BG_GetOffhandAdsFrac(p_predictedPlayerState);
        correctedWeaponPosFrac = *(float *)&OffhandAdsFrac;
      }
      *(double *)&_XMM0 = CG_GetWeaponZoom(LocalClientGlobals, weapon, correctedWeaponPosFrac, (const CG_FovSpace)v9);
      _XMM9 = _XMM0;
      v27 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
      if ( !CgWeaponMap::ms_instance[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      v28 = BG_IsUsingDualFOV(CgWeaponMap::ms_instance[v8], &v27->predictedPlayerState) && !BG_SyncedFOVInDualFOV(weapon, isAlternate);
      if ( LocalClientGlobals->adsAltSwitchBaseFOV == 0.0 && v28 )
      {
        _XMM0 = LocalClientGlobals->dualViewScope;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm9, xmm9, xmm8, xmm2
        }
      }
      zoomLerpType = outZoomInfo.zoomLerpType;
      if ( (_DWORD)v9 == 1 )
        zoomLerpType = outZoomInfo.depthHackZoomLerpType;
      v32 = BG_CalculateEaseMotionFactor(v23, zoomLerpType);
      v33 = *(float *)&v32;
      v34 = BG_CalculateEaseMotionFactor(*(const float *)&_XMM9, zoomLerpType);
      v36 = (float)((float)((float)((float)(1.0 - v33) * *(float *)&_XMM12) + (float)(v33 * *(float *)&_XMM13)) * *(float *)&v34) + (float)((float)(1.0 - *(float *)&v34) * v13);
      v35 = v36;
      if ( *(float *)&_XMM9 <= 0.0 )
      {
        v35 = v36 + CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v8, 0);
        if ( outRanVelocityBasedFovIncreaseCalculation )
          *outRanVelocityBasedFovIncreaseCalculation = 1;
      }
      return v35;
    }
    else
    {
      if ( outFovTypeWeights )
        *(_DWORD *)outFovTypeWeights = 1065353216;
      result = v13 + CG_View_CalculateFovDeltaBasedOnVelocity((LocalClientNum_t)v8, 0);
      if ( outRanVelocityBasedFovIncreaseCalculation )
        *outRanVelocityBasedFovIncreaseCalculation = 1;
    }
  }
  else
  {
    v17 = DVARFLT_cg_dualViewScopeFOV;
    if ( !DVARFLT_cg_dualViewScopeFOV && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dualViewScopeFOV") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    return v17->current.value;
  }
  return result;
}

/*
==============
CG_View_GetFovDvarDefaultValue
==============
*/
float CG_View_GetFovDvarDefaultValue(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 

  v1 = DVARFLT_cg_fov1;
  if ( localClientNum != LOCAL_CLIENT_1 )
    v1 = DVARFLT_cg_fov;
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  return v1->reset.value;
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
  const dvar_t *v3; 
  double result; 

  if ( fovSpace != CG_FovSpace_DepthHack || !CG_View_IsSeparateViewModelFovUsed() )
    return CG_View_GetFovUnscaledDvarValue(localClientNum);
  v3 = DCONST_DVARFLT_cg_fov_viewmodel;
  if ( !DCONST_DVARFLT_cg_fov_viewmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_viewmodel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  *(_QWORD *)&result = v3->current.unsignedInt;
  return result;
}

/*
==============
CG_View_GetFovUnscaledDvarValue
==============
*/
float CG_View_GetFovUnscaledDvarValue(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const char *v2; 

  if ( localClientNum == LOCAL_CLIENT_1 )
  {
    v1 = DVARFLT_cg_fov1;
    if ( DVARFLT_cg_fov1 )
      goto LABEL_8;
    v2 = "cg_fov1";
  }
  else
  {
    v1 = DVARFLT_cg_fov;
    if ( DVARFLT_cg_fov )
      goto LABEL_8;
    v2 = "cg_fov";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v2) )
    __debugbreak();
LABEL_8:
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.value;
}

/*
==============
CG_View_GetFovUserScale
==============
*/
float CG_View_GetFovUserScale()
{
  return FLOAT_1_0;
}

/*
==============
CG_View_GetScopeHudOutlineSettings
==============
*/
void CG_View_GetScopeHudOutlineSettings(const LocalClientNum_t localClientNum, GfxScopeHudOutlineInfo *outlineInfo)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v5; 
  const playerState_s *p_predictedPlayerState; 
  double HudOutlineWidth; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v2];
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !outlineInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5714, ASSERT_TYPE_ASSERT, "(outlineInfo)", (const char *)&queryFormat, "outlineInfo") )
    __debugbreak();
  BG_GetHudOutlineInScopeColor(v5, p_predictedPlayerState, &outlineInfo->foeColor);
  BG_GetHudOutlineAltInScopeColor(v5, p_predictedPlayerState, &outlineInfo->friendColor);
  outlineInfo->depthTest = BG_GetHudOutlineDepthTest(v5, p_predictedPlayerState);
  outlineInfo->fill = BG_GetHudOutlineFill(v5, p_predictedPlayerState);
  BG_GetHudOutlineFillColor0(v5, p_predictedPlayerState, &outlineInfo->fillColor0);
  BG_GetHudOutlineFillColor1(v5, p_predictedPlayerState, &outlineInfo->fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v5, p_predictedPlayerState, &outlineInfo->occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v5, p_predictedPlayerState, &outlineInfo->occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v5, p_predictedPlayerState, &outlineInfo->occludedInteriorColor);
  HudOutlineWidth = BG_GetHudOutlineWidth(v5, p_predictedPlayerState);
  outlineInfo->width = *(float *)&HudOutlineWidth;
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
  const dvar_t *v10; 
  double ADSReloadNVGFOV; 
  const dvar_t *v12; 
  float v13; 
  float depthHackReloadFov; 
  const dvar_t *v15; 
  int serverTimeInterpolated; 
  const BgWeaponMap *v17; 
  double ADSZoomLevelFraction; 
  __int64 i; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float outZoomLevelWeights[4]; 

  if ( !handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1373, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  if ( fovSpace == CG_FovSpace_Scene )
  {
    v10 = DVARBOOL_com_useAdsFovUserScale;
    if ( !DVARBOOL_com_useAdsFovUserScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_useAdsFovUserScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
  }
  if ( ps && BG_PlayerUsesNVGHalfADS(ps, handler) )
  {
    ADSReloadNVGFOV = BG_GetADSReloadNVGFOV(weapon, isAlternate, fovSpace == CG_FovSpace_DepthHack);
    v12 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
    if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
  }
  else
  {
    v13 = 0.0;
    if ( fovSpace == CG_FovSpace_DepthHack && (depthHackReloadFov = adsZoomInfo->depthHackReloadFov, depthHackReloadFov > 0.0) )
    {
      v15 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
      if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      *(float *)&ADSReloadNVGFOV = depthHackReloadFov;
    }
    else
    {
      serverTimeInterpolated = ps->serverTimeInterpolated;
      v17 = handler->GetWeaponMap(handler);
      ADSZoomLevelFraction = BG_GetADSZoomLevelFraction(v17, ps, weapon, isAlternate, serverTimeInterpolated);
      BG_GetADSZoomLevelWeights(*(const float *)&ADSZoomLevelFraction, outZoomLevelWeights);
      for ( i = 0i64; i < 3; ++i )
      {
        v20 = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
        if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        v21 = outZoomLevelWeights[i] * adsZoomInfo->zoomReloadFov[i];
        v22 = v21 + v13;
        v13 = v22;
      }
      *(float *)&ADSReloadNVGFOV = v22;
    }
  }
  return *(float *)&ADSReloadNVGFOV;
}

/*
==============
CG_View_GetZNear
==============
*/
double CG_View_GetZNear(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool IsRemoteControlCam; 
  LocalClientNum_t v4; 
  bool IsPlayerControlCam; 
  double result; 
  unsigned int v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3434, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  IsRemoteControlCam = CG_VehicleCam_IsRemoteControlCam(localClientNum);
  v4 = localClientNum;
  if ( IsRemoteControlCam )
    return CG_View_GetZNearDvar(v4);
  IsPlayerControlCam = CG_VehicleCam_IsPlayerControlCam(localClientNum);
  v4 = localClientNum;
  if ( IsPlayerControlCam )
    return CG_View_GetZNearDvar(v4);
  if ( CG_VehicleCam_IsRemoteDriveCam(localClientNum) || LocalClientGlobals->predictedPlayerState.pm_type == 3 )
    goto LABEL_7;
  v7 = LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0];
  if ( (v7 & 8) != 0 )
    goto LABEL_15;
  if ( (v7 & 0x10) != 0 )
  {
LABEL_7:
    v4 = localClientNum;
    return CG_View_GetZNearDvar(v4);
  }
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) )
  {
    if ( LocalClientGlobals->predictedPlayerState.mountState.mountFraction > 0.0 )
      return Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_mount_tuning_znear, "mount_tuning_znear");
    goto LABEL_7;
  }
LABEL_15:
  *(_QWORD *)&result = LODWORD(FLOAT_100_0);
  return result;
}

/*
==============
CG_View_GetZNearDvar
==============
*/
float CG_View_GetZNearDvar(const LocalClientNum_t localClientNum)
{
  float value; 
  const dvar_t *v3; 
  double Float_Internal_DebugName; 
  const dvar_t *v5; 
  float tanHalfFovX; 
  float v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  cg_t *LocalClientGlobals; 
  float v12; 
  float v13; 
  const dvar_t *v14; 

  value = 0.0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_OFFHAND_END) )
    goto LABEL_7;
  v3 = DVARFLT_sv_znear;
  if ( !DVARFLT_sv_znear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_znear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  if ( value == 0.0 )
  {
LABEL_7:
    v5 = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp;
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClamp") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.value != 0.0 )
    {
      tanHalfFovX = CG_GetLocalClientGlobals(localClientNum)->refdef.view.defaultFov.tanHalfFovX;
      v7 = atanf_0(tanHalfFovX);
      v8 = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp;
      if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClamp") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( (float)(v7 * 114.59155) > v8->current.value )
      {
        v9 = DCONST_DVARFLT_cg_viewZNearClampValueForHighFov;
        if ( !DCONST_DVARFLT_cg_viewZNearClampValueForHighFov && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewZNearClampValueForHighFov") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        value = v9->current.value;
      }
    }
    if ( value != 0.0 )
      goto LABEL_33;
    v10 = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter;
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClampForSmallCharacter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.value == 0.0 )
      goto LABEL_33;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3418, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( !BG_Suit_IsSmallBoundsRadius(&LocalClientGlobals->predictedPlayerState) )
      goto LABEL_33;
    v12 = CG_GetLocalClientGlobals(localClientNum)->refdef.view.defaultFov.tanHalfFovX;
    v13 = atanf_0(v12);
    v14 = DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter;
    if ( !DCONST_DVARFLT_cg_viewMaxFovBeforeZNearClampForSmallCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_viewMaxFovBeforeZNearClampForSmallCharacter") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( (float)(v13 * 114.59155) > v14->current.value )
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_viewZNearClampValueForHighFov, "cg_viewZNearClampValueForHighFov");
    else
LABEL_33:
      *(float *)&Float_Internal_DebugName = value;
  }
  else
  {
    LODWORD(Float_Internal_DebugName) = v3->current.integer;
  }
  return *(float *)&Float_Internal_DebugName;
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
  const dvar_t *v0; 

  v0 = DCONST_DVARFLT_cg_fov_viewmodel;
  if ( !DCONST_DVARFLT_cg_fov_viewmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fov_viewmodel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value >= 1.0;
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  double ThirdPersonCrosshairOffset; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 883, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->baseGunAngles.v[0] = inOutViewAngles->v[0];
  LocalClientGlobals->baseGunAngles.v[1] = inOutViewAngles->v[1];
  LocalClientGlobals->baseGunAngles.v[2] = inOutViewAngles->v[2];
  if ( (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) > 4 && !LocalClientGlobals->renderingThirdPerson && !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.eFlags, ACTIVE, 0xBu) )
  {
    v5 = DVARBOOL_camera_thirdPerson;
    if ( !DVARBOOL_camera_thirdPerson && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPerson") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x2Du) )
    {
      if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      ThirdPersonCrosshairOffset = BG_GetThirdPersonCrosshairOffset(CgWeaponMap::ms_instance[v2], &LocalClientGlobals->predictedPlayerState);
    }
    else
    {
      v6 = DVARFLT_cg_crosshairVerticalOffset;
      if ( !DVARFLT_cg_crosshairVerticalOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_crosshairVerticalOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      LODWORD(ThirdPersonCrosshairOffset) = v6->current.integer;
    }
    inOutViewAngles->v[0] = (float)(atanf_0(*(float *)&ThirdPersonCrosshairOffset * LocalClientGlobals->refdef.view.fov.tanHalfFovY) * 57.295776) + inOutViewAngles->v[0];
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
  const cg_t *v9; 
  const playerState_s *p_predictedPlayerState; 
  unsigned int pm_type; 
  int v12; 
  CgWeaponMap *Instance; 
  float v14; 
  float v15; 
  float v16; 
  const Weapon *Weapon; 
  double Float_Internal_DebugName; 
  int v19; 
  double v20; 
  double v23; 
  int time; 
  BgHandler *v25; 
  float v26; 
  float fWeaponPosFrac; 
  float v28; 
  float v29; 
  bool v30; 
  double UpContribution; 
  float v32; 
  double v33; 
  double v34; 
  SecureVec3 outData; 
  BgHandler *handler; 
  __int64 v37; 
  WorldUpReferenceFrame v38; 
  vec3_t outUp; 

  v37 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsTurretActiveFlags(&p_predictedPlayerState->eFlags) )
    {
      pm_type = p_predictedPlayerState->pm_type;
      if ( pm_type > 8 || (v12 = 332, !_bittest(&v12, pm_type)) )
      {
        if ( pm_type == 7 )
        {
          inOutViewAngles->v[2] = 40.0;
          inOutViewAngles->v[0] = -15.0;
          inOutViewAngles->v[1] = (float)p_predictedPlayerState->stats[1];
          return;
        }
        handler = CgHandler::getHandler(localClientNum);
        Instance = CgWeaponMap::GetInstance(localClientNum);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v38, p_predictedPlayerState, handler, 1);
        WorldUpReferenceFrame::RemoveReferenceFrameFromAngles(&v38, inOutViewAngles);
        v14 = v9->playerViewValues.viewMoveAngles.v[0];
        v15 = v9->playerViewValues.viewMoveAngles.v[1];
        v16 = v9->playerViewValues.viewMoveAngles.v[2];
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END) )
        {
          secure_uint32_3_t::secureInt32_3_Get(&v9->kickAngles, &outData);
          v14 = (float)(v14 + outData.x) + v9->kickCorrection.v[0];
          v15 = (float)(v15 + outData.y) + v9->kickCorrection.v[1];
          v16 = (float)(v16 + outData.z) + v9->kickCorrection.v[2];
          memset(&outData, 0, sizeof(outData));
        }
        inOutViewAngles->v[0] = v14 + inOutViewAngles->v[0];
        inOutViewAngles->v[1] = v15 + inOutViewAngles->v[1];
        inOutViewAngles->v[2] = v16 + inOutViewAngles->v[2];
        if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        Weapon = BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weapCommon.weaponHandle);
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END) && Weapon->weaponIdx )
        {
          Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_view_pitch_up, "player_view_pitch_up");
          v19 = LODWORD(Float_Internal_DebugName);
          v20 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_player_view_pitch_down, "player_view_pitch_down");
          _XMM3 = 0i64;
          __asm { vroundss xmm5, xmm3, xmm4, 1 }
          v23 = I_fclamp((float)((float)(inOutViewAngles->v[0] * 0.0027777778) - *(float *)&_XMM5) * 360.0, COERCE_FLOAT(v19 ^ _xmm), *(float *)&v20);
          inOutViewAngles->v[0] = *(float *)&v23;
        }
        CG_ContextMount_UpdateViewAngles(p_predictedPlayerState, inOutViewAngles);
        WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v38, inOutViewAngles);
        CG_AddGroundTiltToAngles(localClientNum, inOutViewAngles, v9);
        if ( ranPrediction )
          time = v9->time;
        else
          time = p_predictedPlayerState->serverTimeInterpolated;
        v25 = handler;
        BG_ApplyViewBobAndScriptOffsets(p_predictedPlayerState, time, (const int (*)[2])p_predictedPlayerState->packedBobCycle, handler, inOutViewOrigin);
        v26 = (float)(v9->time - v9->landTime);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_cg_viewmotion_spring_enable, "cg_viewmotion_spring_enable") )
          fWeaponPosFrac = v9->fWeaponPosFrac;
        else
          fWeaponPosFrac = FLOAT_1_0;
        v28 = fWeaponPosFrac * v9->landChange;
        if ( v26 <= 0.0 )
          goto LABEL_30;
        if ( v26 >= 150.0 )
        {
          if ( v26 >= 450.0 )
            goto LABEL_30;
          v29 = (float)(1.0 - (float)((float)(v26 - 150.0) * 0.0033333334)) * v28;
        }
        else
        {
          v29 = (float)(v26 * 0.0066666668) * v28;
        }
        WorldUpReferenceFrame::AddUpContribution(&v38, v29, inOutViewOrigin);
LABEL_30:
        CG_GameInterface_View_OffsetFirstPersonView(localClientNum, inOutViewAngles, inOutViewOrigin);
        WorldUpReferenceFrame::GetUpVector(&v38, &outUp);
        v30 = BG_UsingAlternate(p_predictedPlayerState);
        BG_ContextMount_GetEyePoint(v25, &p_predictedPlayerState->mountState, &outUp, Weapon, v30, inOutViewOrigin);
        UpContribution = WorldUpReferenceFrame::GetUpContribution(&v38, inOutViewOrigin);
        v32 = *(float *)&UpContribution;
        v33 = WorldUpReferenceFrame::GetUpContribution(&v38, &p_predictedPlayerState->origin);
        if ( v32 < (float)(*(float *)&v33 + 8.0) )
        {
          v34 = WorldUpReferenceFrame::GetUpContribution(&v38, &p_predictedPlayerState->origin);
          WorldUpReferenceFrame::SetUpContribution(&v38, *(float *)&v34 + 8.0, inOutViewOrigin);
        }
      }
    }
  }
}

/*
==============
CG_View_PlayTestFx
==============
*/
void CG_View_PlayTestFx(LocalClientNum_t localClientNum)
{
  TestEffect *v2; 
  int time; 
  FXRegisteredDef outDef; 
  tmat33_t<vec3_t> axis; 

  outDef.m_particleSystemDef = NULL;
  v2 = &s_testEffect[localClientNum];
  FX_LoadEffect(v2->name, &outDef);
  axis.m[2].v[2] = 0.0;
  *(__m256i *)axis.m[0].v = _ymm;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  FX_PlayOrientedEffect(localClientNum, &outDef, time, &v2->pos, &axis);
  v2->time = time;
}

/*
==============
CG_View_PrintPlayerViewState
==============
*/
void CG_View_PrintPlayerViewState(const LocalClientNum_t localClientNum, const PlayerViewState *viewState)
{
  const dvar_t *v2; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 
  WeaponIdleMotionCache *p_idleMotionCache; 
  cg_t *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 weaponIdx_low; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  int v17; 
  unsigned __int8 *stickerIndices; 
  __int64 v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned __int64 v45; 
  unsigned int v46; 
  unsigned __int64 v47; 
  unsigned int v48; 
  unsigned int v49; 
  int commandTime; 
  int v51; 
  int v52; 
  char *fmt; 

  v2 = DVARINT_bg_shootingAnglesLog;
  if ( !DVARINT_bg_shootingAnglesLog && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_shootingAnglesLog") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer == 2 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v6 = -1;
    p_idleMotionCache = &viewState->weapMoveState.idleMotionCache;
    v8 = LocalClientGlobals;
    v9 = -1;
    v10 = 278i64;
    do
    {
      weaponIdx_low = LOBYTE(p_idleMotionCache->weapon.weaponIdx);
      p_idleMotionCache = (WeaponIdleMotionCache *)((char *)p_idleMotionCache + 6);
      v12 = (v9 >> 8) ^ g_crc32Table[weaponIdx_low ^ (unsigned __int8)v9];
      v13 = (v12 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvT.y) ^ (unsigned __int64)(unsigned __int8)v12];
      v14 = (v13 >> 8) ^ g_crc32Table[LOBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v13];
      v15 = (v14 >> 8) ^ g_crc32Table[BYTE1(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v14];
      v16 = (v15 >> 8) ^ g_crc32Table[BYTE2(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v15];
      v9 = (v16 >> 8) ^ g_crc32Table[HIBYTE(p_idleMotionCache[-1].idleMotion2Spline.lastEvN) ^ (unsigned __int64)(unsigned __int8)v16];
      --v10;
    }
    while ( v10 );
    v17 = ~v9;
    stickerIndices = (unsigned __int8 *)viewState->weapMoveState.weapon.stickerIndices;
    v19 = 2i64;
    do
    {
      v20 = (unsigned __int8)v6 ^ (unsigned __int64)*(stickerIndices - 2);
      v21 = (((v6 >> 8) ^ g_crc32Table[v20]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v6) ^ g_crc32Table[v20]) ^ (unsigned __int64)*(stickerIndices - 1)];
      v22 = (v21 >> 8) ^ g_crc32Table[*stickerIndices ^ (unsigned __int64)(unsigned __int8)v21];
      v23 = (v22 >> 8) ^ g_crc32Table[(unsigned __int8)v22 ^ (unsigned __int64)stickerIndices[1]];
      v24 = (v23 >> 8) ^ g_crc32Table[(unsigned __int8)v23 ^ (unsigned __int64)stickerIndices[2]];
      v25 = (v24 >> 8) ^ g_crc32Table[(unsigned __int8)v24 ^ (unsigned __int64)stickerIndices[3]];
      v26 = (v25 >> 8) ^ g_crc32Table[(unsigned __int8)v25 ^ (unsigned __int64)stickerIndices[4]];
      v27 = (v26 >> 8) ^ g_crc32Table[(unsigned __int8)v26 ^ (unsigned __int64)stickerIndices[5]];
      v28 = (v27 >> 8) ^ g_crc32Table[(unsigned __int8)v27 ^ (unsigned __int64)stickerIndices[6]];
      v29 = (v28 >> 8) ^ g_crc32Table[(unsigned __int8)v28 ^ (unsigned __int64)stickerIndices[7]];
      v30 = (v29 >> 8) ^ g_crc32Table[(unsigned __int8)v29 ^ (unsigned __int64)stickerIndices[8]];
      v31 = (v30 >> 8) ^ g_crc32Table[(unsigned __int8)v30 ^ (unsigned __int64)stickerIndices[9]];
      v32 = g_crc32Table[(unsigned __int8)v31 ^ (unsigned __int64)stickerIndices[10]];
      v33 = (((v31 >> 8) ^ v32) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v31) ^ v32) ^ (unsigned __int64)stickerIndices[11]];
      v34 = (v33 >> 8) ^ g_crc32Table[(unsigned __int8)v33 ^ (unsigned __int64)stickerIndices[12]];
      v35 = (v34 >> 8) ^ g_crc32Table[(unsigned __int8)v34 ^ (unsigned __int64)stickerIndices[13]];
      v36 = (v35 >> 8) ^ g_crc32Table[(unsigned __int8)v35 ^ (unsigned __int64)stickerIndices[14]];
      v37 = (v36 >> 8) ^ g_crc32Table[(unsigned __int8)v36 ^ (unsigned __int64)stickerIndices[15]];
      v38 = (v37 >> 8) ^ g_crc32Table[(unsigned __int8)v37 ^ (unsigned __int64)stickerIndices[16]];
      v39 = (v38 >> 8) ^ g_crc32Table[(unsigned __int8)v38 ^ (unsigned __int64)stickerIndices[17]];
      v40 = (v39 >> 8) ^ g_crc32Table[(unsigned __int8)v39 ^ (unsigned __int64)stickerIndices[18]];
      v41 = (v40 >> 8) ^ g_crc32Table[(unsigned __int8)v40 ^ (unsigned __int64)stickerIndices[19]];
      v42 = (v41 >> 8) ^ g_crc32Table[(unsigned __int8)v41 ^ (unsigned __int64)stickerIndices[20]];
      v43 = (v42 >> 8) ^ g_crc32Table[(unsigned __int8)v42 ^ (unsigned __int64)stickerIndices[21]];
      v44 = (v43 >> 8) ^ g_crc32Table[(unsigned __int8)v43 ^ (unsigned __int64)stickerIndices[22]];
      v45 = (unsigned __int8)v44 ^ (unsigned __int64)stickerIndices[23];
      v46 = (((v44 >> 8) ^ g_crc32Table[v45]) >> 8) ^ g_crc32Table[(unsigned __int8)(BYTE1(v44) ^ g_crc32Table[v45]) ^ (unsigned __int64)stickerIndices[24]];
      v47 = stickerIndices[25];
      stickerIndices += 30;
      v48 = (v46 >> 8) ^ g_crc32Table[(unsigned __int8)v46 ^ v47];
      v49 = (v48 >> 8) ^ g_crc32Table[(unsigned __int8)v48 ^ (unsigned __int64)*(stickerIndices - 4)];
      v6 = (v49 >> 8) ^ g_crc32Table[(unsigned __int8)v49 ^ (unsigned __int64)*(stickerIndices - 3)];
      --v19;
    }
    while ( v19 );
    commandTime = v8->savedPlayerState.commandTime;
    v51 = ~v6;
    v52 = v8->predictedPlayerState.commandTime - commandTime;
    if ( !commandTime )
      v52 = 0;
    LODWORD(fmt) = v52;
    Com_Printf(17, "C->  Time:%d  CmdTime:%d  EX:%d  VI:%f  WI:%f  WP:%d  MC:%d  BA[%f %f %f]  BO:[%f %f %f]  RA:[%f %f %f]  RS:[%f %f %f]  SA:[%f %f %f]  SO:[%f %f %f]  SVA:[%f %f %f]  BA:[%f %f %f]\n", (unsigned int)v8->time, (unsigned int)v8->predictedPlayerState.commandTime, fmt, viewState->viewMoveState.fLastIdleFactor, viewState->weapMoveState.fLastIdleFactor, v51, v17, viewState->weapMoveState.baseAngles.v[0], viewState->weapMoveState.baseAngles.v[1], viewState->weapMoveState.baseAngles.v[2], viewState->weapMoveState.baseOrigin.v[0], viewState->weapMoveState.baseOrigin.v[1], viewState->weapMoveState.baseOrigin.v[2], viewState->weapMoveState.recoilAngles.v[0], viewState->weapMoveState.recoilAngles.v[1], viewState->weapMoveState.recoilAngles.v[2], viewState->weapMoveState.recoilSpeed.v[0], viewState->weapMoveState.recoilSpeed.v[1], viewState->weapMoveState.recoilSpeed.v[2], viewState->weapMoveState.swayAngles.v[0], viewState->weapMoveState.swayAngles.v[1], viewState->weapMoveState.swayAngles.v[2], viewState->weapMoveState.swayOrigin.v[0], viewState->weapMoveState.swayOrigin.v[1], viewState->weapMoveState.swayOrigin.v[2], viewState->weapMoveState.swayViewAngles.v[0], viewState->weapMoveState.swayViewAngles.v[1], viewState->weapMoveState.swayViewAngles.v[2], viewState->weapMoveState.bobAngles.v[0], viewState->weapMoveState.bobAngles.v[1], viewState->weapMoveState.bobAngles.v[2]);
  }
}

/*
==============
CG_View_RadialMotionBlurEnabled
==============
*/
char CG_View_RadialMotionBlurEnabled(LocalClientNum_t localClientNum, const playerState_s *ps, const SuitDef *suit, float *minStrength, float *maxStrength, float *minRadius, float *maxRadius)
{
  float *v11; 
  float *v12; 
  float *v13; 
  float v14; 
  float v15; 
  char result; 
  bool v17; 
  float radialMotionBlur_sprintMinStrength; 
  float radialMotionBlur_slideMinStrength; 
  float outOverrideStrength; 
  float outOverrideRadius; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3522, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !suit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3523, ASSERT_TYPE_ASSERT, "(suit)", (const char *)&queryFormat, "suit") )
    __debugbreak();
  if ( !minStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3524, ASSERT_TYPE_ASSERT, "(minStrength)", (const char *)&queryFormat, "minStrength") )
    __debugbreak();
  v11 = maxStrength;
  if ( !maxStrength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3525, ASSERT_TYPE_ASSERT, "(maxStrength)", (const char *)&queryFormat, "maxStrength") )
    __debugbreak();
  v12 = minRadius;
  if ( !minRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3526, ASSERT_TYPE_ASSERT, "(minRadius)", (const char *)&queryFormat, "minRadius") )
    __debugbreak();
  v13 = maxRadius;
  if ( !maxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3527, ASSERT_TYPE_ASSERT, "(maxRadius)", (const char *)&queryFormat, "maxRadius") )
    __debugbreak();
  if ( ps->pm_type )
    return 0;
  if ( CG_Camera_GetOverrideRadialBlur(localClientNum, &outOverrideRadius, &outOverrideStrength) )
  {
    v14 = outOverrideStrength;
    v15 = outOverrideRadius;
    *minStrength = outOverrideStrength;
    *v11 = v14;
    *v12 = v15;
    *v13 = v15;
    return 10;
  }
  result = CG_Skydive_RadialMotionBlurEnabled(localClientNum, ps, minStrength, v11, v12, v13);
  if ( !result )
  {
    if ( !BGVehicles::IsRemoteDrivingVehicle(ps) )
    {
      v17 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_superSprintEnableMotionBlur, "superSprintEnableMotionBlur") && BG_IsSuperSprinting(ps);
      if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Du) || v17 )
      {
        radialMotionBlur_slideMinStrength = suit->radialMotionBlur_slideMinStrength;
        if ( radialMotionBlur_slideMinStrength > 0.001 || suit->radialMotionBlur_slideMaxStrength > 0.001 || suit->radialMotionBlur_slideMinRadius > 0.001 || suit->radialMotionBlur_slideMaxRadius > 0.001 )
        {
          *minStrength = radialMotionBlur_slideMinStrength;
          *v11 = suit->radialMotionBlur_slideMaxStrength;
          result = 2;
          *v12 = 1.0 - suit->radialMotionBlur_slideMinRadius;
          *v13 = 1.0 - suit->radialMotionBlur_slideMaxRadius;
          return result;
        }
      }
      else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) )
      {
        radialMotionBlur_sprintMinStrength = suit->radialMotionBlur_sprintMinStrength;
        if ( radialMotionBlur_sprintMinStrength > 0.001 || suit->radialMotionBlur_sprintMaxStrength > 0.001 || suit->radialMotionBlur_sprintMinRadius > 0.001 || suit->radialMotionBlur_sprintMaxRadius > 0.001 )
        {
          *minStrength = radialMotionBlur_sprintMinStrength;
          *v11 = suit->radialMotionBlur_sprintMaxStrength;
          result = 1;
          *v12 = 1.0 - suit->radialMotionBlur_sprintMinRadius;
          *v13 = 1.0 - suit->radialMotionBlur_sprintMaxRadius;
          return result;
        }
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
  const dvar_t *v5; 
  float value; 
  float v7; 
  float v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  const char *v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  double v23; 
  float v24; 
  float v25; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3084, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !possessedEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3085, ASSERT_TYPE_ASSERT, "(possessedEnt)", (const char *)&queryFormat, "possessedEnt") )
    __debugbreak();
  eType = possessedEnt->nextState.eType;
  if ( eType == ET_HELICOPTER )
  {
    v5 = DVARVEC3_cameraShakeRemoteHelo_Angles;
    if ( !DVARVEC3_cameraShakeRemoteHelo_Angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteHelo_Angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    v7 = v5->current.vector.v[1];
    v8 = v5->current.vector.v[2];
    v9 = DVARVEC3_cameraShakeRemoteHelo_Freqs;
    if ( !DVARVEC3_cameraShakeRemoteHelo_Freqs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteHelo_Freqs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v9->current.value;
    v11 = v9->current.vector.v[1];
    v12 = v9->current.vector.v[2];
    v13 = DVARVEC2_cameraShakeRemoteHelo_SpeedRange;
    if ( !DVARVEC2_cameraShakeRemoteHelo_SpeedRange )
    {
      v14 = "cameraShakeRemoteHelo_SpeedRange";
      goto LABEL_26;
    }
  }
  else
  {
    if ( eType != ET_MISSILE )
      Com_PrintWarning(14, "RemoteEyesShake(): Enttype '%d' not expected, code should be modified to handle it.\n", (unsigned int)eType);
    v15 = DVARVEC3_cameraShakeRemoteMissile_Angles;
    if ( !DVARVEC3_cameraShakeRemoteMissile_Angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteMissile_Angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    v7 = v15->current.vector.v[1];
    v8 = v15->current.vector.v[2];
    v16 = DVARVEC3_cameraShakeRemoteMissile_Freqs;
    if ( !DVARVEC3_cameraShakeRemoteMissile_Freqs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cameraShakeRemoteMissile_Freqs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v10 = v16->current.value;
    v11 = v16->current.vector.v[1];
    v12 = v16->current.vector.v[2];
    v13 = DVARVEC2_cameraShakeRemoteMissile_SpeedRange;
    if ( !DVARVEC2_cameraShakeRemoteMissile_SpeedRange )
    {
      v14 = "cameraShakeRemoteMissile_SpeedRange";
LABEL_26:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v14) )
        __debugbreak();
    }
  }
  Dvar_CheckFrontendServerThread(v13);
  _XMM1 = v13->current.unsignedInt;
  _XMM2 = LODWORD(v13->current.vector.v[1]);
  __asm
  {
    vcmpltss xmm0, xmm1, xmm6
    vblendvps xmm4, xmm1, xmm6, xmm0
    vcmpless xmm0, xmm2, xmm4
    vblendvps xmm5, xmm2, xmm1, xmm0
  }
  if ( fsqrt((float)((float)(possessedEnt->nextState.lerp.pos.trDelta.v[0] * possessedEnt->nextState.lerp.pos.trDelta.v[0]) + (float)(possessedEnt->nextState.lerp.pos.trDelta.v[1] * possessedEnt->nextState.lerp.pos.trDelta.v[1])) + (float)(possessedEnt->nextState.lerp.pos.trDelta.v[2] * possessedEnt->nextState.lerp.pos.trDelta.v[2])) >= *(float *)&_XMM4 )
    __asm { vminss  xmm4, xmm5, xmm0 }
  v23 = I_fclamp(*(float *)&_XMM4 / *(float *)&_XMM5, 0.0, 1.0);
  v24 = _mm_cvtepi32_ps((__m128i)(unsigned int)cgameGlob->refdef.time).m128_f32[0] * 0.0031415927;
  v25 = *(float *)&v23;
  cgameGlob->refdefViewAngles.v[0] = (float)((float)(sinf_0(v10 * v24) * value) * *(float *)&v23) + cgameGlob->refdefViewAngles.v[0];
  cgameGlob->refdefViewAngles.v[1] = (float)((float)(sinf_0(v11 * v24) * v7) * v25) + cgameGlob->refdefViewAngles.v[1];
  cgameGlob->refdefViewAngles.v[2] = (float)((float)(sinf_0(v12 * v24) * v8) * v25) + cgameGlob->refdefViewAngles.v[2];
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  CgWeaponMap *v4; 
  double HudOutlineWidth; 
  GfxScopeHudOutlineInfo v6; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5711, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  BG_GetHudOutlineInScopeColor(v4, &v3->predictedPlayerState, &v6.foeColor);
  BG_GetHudOutlineAltInScopeColor(v4, &v3->predictedPlayerState, &v6.friendColor);
  v6.depthTest = BG_GetHudOutlineDepthTest(v4, &v3->predictedPlayerState);
  v6.fill = BG_GetHudOutlineFill(v4, &v3->predictedPlayerState);
  BG_GetHudOutlineFillColor0(v4, &v3->predictedPlayerState, &v6.fillColor0);
  BG_GetHudOutlineFillColor1(v4, &v3->predictedPlayerState, &v6.fillColor1);
  BG_GetHudOutlineOccludedOutlineColor(v4, &v3->predictedPlayerState, &v6.occludedOutlineColor);
  BG_GetHudOutlineOccludedInlineColor(v4, &v3->predictedPlayerState, &v6.occludedInlineColor);
  BG_GetHudOutlineOccludedInteriorColor(v4, &v3->predictedPlayerState, &v6.occludedInteriorColor);
  HudOutlineWidth = BG_GetHudOutlineWidth(v4, &v3->predictedPlayerState);
  v6.width = *(float *)&HudOutlineWidth;
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
  bool v8; 

  v5 = blurType;
  if ( !radialMotionBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3738, ASSERT_TYPE_ASSERT, "(radialMotionBlur)", (const char *)&queryFormat, "radialMotionBlur") )
    __debugbreak();
  if ( !radialMotionBlurState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3739, ASSERT_TYPE_ASSERT, "(radialMotionBlurState)", (const char *)&queryFormat, "radialMotionBlurState") )
    __debugbreak();
  v8 = v5 || normalizedTime < 0.99900001;
  radialMotionBlur->enabled = v8;
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
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  cgs_t *LocalClientStaticGlobals; 
  int v7; 
  int v8; 
  int viewX; 
  int viewY; 
  float viewMultSD; 
  int viewWidth; 
  int v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  int height; 
  int width; 
  float aspect; 

  v3 = activeClientCount;
  v4 = activeClientIndex;
  v5 = localClientNum;
  if ( (unsigned int)(activeClientCount - 1) >= 2 )
  {
    v18 = 2;
    v16 = activeClientCount - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4093, ASSERT_TYPE_ASSERT, "(unsigned)( clientCountArrayIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray ) ) + 0 ) )", "clientCountArrayIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray )\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4094, ASSERT_TYPE_ASSERT, "(unsigned)( activeClientIndex ) < (unsigned)( ( sizeof( *array_counter( s_clientViewParamsArray[0] ) ) + 0 ) )", "activeClientIndex doesn't index ARRAY_COUNT( s_clientViewParamsArray[0] )\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( (int)v4 >= (int)v3 )
  {
    v20 = v3;
    v19 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4095, ASSERT_TYPE_ASSERT, "( activeClientIndex ) < ( activeClientCount )", "%s < %s\n\t%i, %i", "activeClientIndex", "activeClientCount", v19, v20) )
      __debugbreak();
  }
  CL_GetScreenDimensions(&width, &height, &aspect);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
  LocalClientStaticGlobals->viewX = (int)(float)((float)((float)width * s_clientViewParamsArray[v3 - 1][v4].x) + 0.5);
  LocalClientStaticGlobals->viewY = (int)(float)((float)((float)height * s_clientViewParamsArray[v3 - 1][v4].y) + 0.5);
  LocalClientStaticGlobals->viewWidth = (int)(float)((float)((float)width * s_clientViewParamsArray[v3 - 1][v4].width) + 0.5);
  v7 = (int)(float)((float)((float)height * s_clientViewParamsArray[v3 - 1][v4].height) + 0.5);
  LocalClientStaticGlobals->viewHeight = v7;
  v8 = height;
  if ( (int)v3 > 1 )
  {
    if ( v7 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4065, ASSERT_TYPE_ASSERT, "(curViewHeight > 1)", (const char *)&queryFormat, "curViewHeight > 1") )
      __debugbreak();
    if ( (_DWORD)v3 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4066, ASSERT_TYPE_ASSERT, "(activeClientCount == 2)", (const char *)&queryFormat, "activeClientCount == 2") )
      __debugbreak();
    if ( (v8 & (unsigned int)v4) != 0 )
      --v7;
  }
  viewX = LocalClientStaticGlobals->viewX;
  LocalClientStaticGlobals->viewHeight = v7;
  if ( viewX < 0 || viewX >= width )
  {
    LODWORD(v15) = viewX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4111, ASSERT_TYPE_SANITY, "( ( cgs->viewX >= 0 && cgs->viewX < clientWidth ) )", "( cgs->viewX ) = %i", v15) )
      __debugbreak();
  }
  viewY = LocalClientStaticGlobals->viewY;
  if ( viewY < 0 || viewY >= height )
  {
    LODWORD(v15) = LocalClientStaticGlobals->viewY;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4112, ASSERT_TYPE_SANITY, "( ( cgs->viewY >= 0 && cgs->viewY < clientHeight ) )", "( cgs->viewY ) = %i", v15) )
      __debugbreak();
  }
  if ( LocalClientStaticGlobals->viewWidth <= 0 )
  {
    LODWORD(v15) = LocalClientStaticGlobals->viewWidth;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4113, ASSERT_TYPE_SANITY, "( ( cgs->viewWidth > 0 ) )", "( cgs->viewWidth ) = %i", v15) )
      __debugbreak();
  }
  if ( LocalClientStaticGlobals->viewHeight <= 0 )
  {
    LODWORD(v15) = LocalClientStaticGlobals->viewHeight;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4114, ASSERT_TYPE_SANITY, "( ( cgs->viewHeight > 0 ) )", "( cgs->viewHeight ) = %i", v15) )
      __debugbreak();
  }
  LocalClientStaticGlobals->viewAspect = (float)(aspect * s_clientViewParamsArray[v3 - 1][v4].width) / s_clientViewParamsArray[v3 - 1][v4].height;
  if ( aspect <= 1.3333334 )
    viewMultSD = s_clientViewParamsArray[v3 - 1][v4].viewMultSD;
  else
    viewMultSD = s_clientViewParamsArray[v3 - 1][v4].viewMultHD;
  viewWidth = LocalClientStaticGlobals->viewWidth;
  v13 = LocalClientStaticGlobals->viewY;
  v14 = LocalClientStaticGlobals->viewX;
  LocalClientStaticGlobals->viewMult = viewMultSD;
  ScrPlace_SetupViewport(&scrPlaceViewDisplay[v5], v14, v13, viewWidth, LocalClientStaticGlobals->viewHeight);
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
  cg_t *LocalClientGlobals; 
  const dvar_t *v2; 
  float value; 
  float v4; 
  float v5; 
  vec3_t outOrg; 
  __int64 v7; 

  v7 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4025, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v2 = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v4 = v2->current.vector.v[1];
  v5 = v2->current.vector.v[2];
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( value != outOrg.v[0] || v4 != outOrg.v[1] || v5 != outOrg.v[2] )
    Dvar_SetVec3_Internal(DVARVEC3_viewposNow, outOrg.v[0], outOrg.v[1], outOrg.v[2]);
  if ( value != LocalClientGlobals->refdef.view.axis.m[0].v[0] || v4 != LocalClientGlobals->refdef.view.axis.m[0].v[1] || v5 != LocalClientGlobals->refdef.view.axis.m[0].v[2] )
    Dvar_SetVec3_Internal(DVARVEC3_viewangNow, LocalClientGlobals->refdefViewAngles.v[1], LocalClientGlobals->refdefViewAngles.v[0], 0.0);
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_View_SetupAimAssist
==============
*/
void CG_View_SetupAimAssist(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  float v2; 
  float v3; 
  __int64 v4[3]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4[0] = *(_QWORD *)LocalClientGlobals->predictedPlayerState.origin.v;
  v2 = LocalClientGlobals->predictedPlayerState.origin.v[2];
  *(float *)&v4[1] = v2;
  if ( !LocalClientGlobals->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized", -2i64) )
    __debugbreak();
  LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab += LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_set_aab;
  LocalClientGlobals->aimAssistEyeOrigin.data[0] = ((((_DWORD)LocalClientGlobals + 98316) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98316) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v4[0]);
  LocalClientGlobals->aimAssistEyeOrigin.data[1] = ((LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98320)) * ((LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98320)) + 2)) ^ HIDWORD(v4[0]);
  LocalClientGlobals->aimAssistEyeOrigin.data[2] = ((LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98324)) * ((LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab ^ ((_DWORD)LocalClientGlobals + 98324)) + 2)) ^ LODWORD(v2);
  memset(v4, 0, 0xCui64);
  v4[0] = *(_QWORD *)LocalClientGlobals->predictedPlayerState.origin.v;
  v3 = LocalClientGlobals->predictedPlayerState.origin.v[2];
  *(float *)&v4[1] = v3;
  if ( !LocalClientGlobals->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab += LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_set_aab;
  LocalClientGlobals->aimAssistViewOrigin.data[0] = ((((_DWORD)LocalClientGlobals + 98340) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98340) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v4[0]);
  LocalClientGlobals->aimAssistViewOrigin.data[1] = ((((_DWORD)LocalClientGlobals + 98344) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98344) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ HIDWORD(v4[0]);
  LocalClientGlobals->aimAssistViewOrigin.data[2] = ((((_DWORD)LocalClientGlobals + 98348) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98348) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v3);
  memset(v4, 0, 0xCui64);
  LocalClientGlobals->aimAssistViewAngles.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
  LocalClientGlobals->aimAssistViewAngles.v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
  LocalClientGlobals->aimAssistViewAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
}

/*
==============
CG_View_SetupRefDef
==============
*/
void CG_View_SetupRefDef(const LocalClientNum_t localClientNum, const float zNear, const float uiBlurRadius)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  int ControllerFromClient; 
  int v6; 
  double BlurRadius; 
  float v8; 
  GfxResolutionStep v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5240, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  LocalClientGlobals->refdef.time = LocalClientGlobals->time;
  LocalClientGlobals->refdef.frameTime = LocalClientGlobals->frametime;
  LocalClientGlobals->refdef.view.zNear = zNear;
  LocalClientGlobals->refdef.localClientNum = v3;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
  LocalClientGlobals->refdef.daltonizeMode = GamerProfile_ColorBlindMode(ControllerFromClient);
  v6 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
  LocalClientGlobals->refdef.daltonizeTargets = GamerProfile_ColorBlindTargets(v6);
  BlurRadius = CG_GetBlurRadius((LocalClientNum_t)v3);
  v8 = fsqrt((float)((float)(cgDC[v3].blurRadiusOut * cgDC[v3].blurRadiusOut) + (float)(*(float *)&BlurRadius * *(float *)&BlurRadius)) + (float)(uiBlurRadius * uiBlurRadius));
  LocalClientGlobals->cvsData.transitory.remoteMissileCam = 0;
  LocalClientGlobals->refdef.uiBlur = uiBlurRadius > 0.0;
  LocalClientGlobals->refdef.playerTeleported = LocalClientGlobals->playerTeleported;
  LocalClientGlobals->refdef.blurRadius = v8;
  memset_0(&LocalClientGlobals->refdef.brCircle, 0, sizeof(LocalClientGlobals->refdef.brCircle));
  v9 = LocalClientGlobals->refdef.resolution.history[0];
  LocalClientGlobals->refdef.resolution.history[1] = v9;
  LocalClientGlobals->refdef.resolution.history[2] = v9;
  LocalClientGlobals->refdef.resolution.history[0] = LocalClientGlobals->refdef.resolution.step;
  v10 = DVARBOOL_r_sceneResDynamic;
  if ( !DVARBOOL_r_sceneResDynamic && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamic") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = DVARINT_r_sceneRes;
    if ( !DVARINT_r_sceneRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneRes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    LocalClientGlobals->refdef.resolution.step = v11->current.integer;
  }
  else
  {
    LocalClientGlobals->refdef.resolution.step = GFX_RESOLUTION_STEP_NONE;
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
  bool v7; 
  bool v8; 
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
  v7 = BG_UsingAlternate(ps);
  memset(&outZoomInfo, 0, sizeof(outZoomInfo));
  BG_GetADSZoomInfo(Instance, ViewmodelWeapon, v7, &cgameGlob->scopeToggleInfo.fractionInfo, &outZoomInfo);
  result = 1;
  if ( outZoomInfo.depthHackZoomFov <= 0.0 && !CG_View_IsSeparateViewModelFovUsed() )
  {
    v8 = BG_SyncedFOVInDualFOV(ViewmodelWeapon, v7);
    if ( !cgameGlob->dualViewScope || v8 )
      return 0;
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
  const PlayerEquippedWeaponState *v8; 
  double Lerp; 
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
    v8 = BG_GetEquippedWeaponStateConst(Instance, &cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon);
    if ( !v8 || v8->hybridScope )
      return 0;
  }
  if ( !(unsigned __int8)BYTE4(*(_QWORD *)&BG_GetAdsVisionSetInfo(&result, Instance, &cgameGlob->predictedPlayerState, ViewmodelOrOffhandADSWeapon, outIsAlternate)->visionSetBlendOutTimeMs) )
    return 0;
  Lerp = CG_VisionSetGetLerp(&cgameGlob->cvsData.archived.visionBlends[14], cgameGlob->time);
  return *(float *)&Lerp > 0.0;
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/
bool CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, vec3_t *result)
{
  int entity; 
  int skipEntities; 

  entity = ps->vehicleState.entity;
  if ( entity == 2047 )
  {
    entity = ps->remoteControlEnt;
    if ( (_WORD)entity == 2047 )
      entity = ps->clientNum;
  }
  skipEntities = entity;
  return CG_View_ThirdPersonViewTrace(localClientNum, ps, start, end, contentMask, startSolidOffset, &skipEntities, 1, result);
}

/*
==============
CG_View_ThirdPersonViewTrace
==============
*/
char CG_View_ThirdPersonViewTrace(LocalClientNum_t localClientNum, const playerState_s *ps, const vec3_t *start, const vec3_t *end, int contentMask, float startSolidOffset, const int *skipEntities, int skipEntityCount, vec3_t *result)
{
  __int128 v12; 
  __int32 v13; 
  int v14; 
  __int128 v15; 
  char v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float fraction; 
  float v23; 
  float v24; 
  vec3_t enda; 
  Bounds bounds; 
  trace_t results; 

  if ( (!skipEntities || skipEntityCount <= 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 455, ASSERT_TYPE_ASSERT, "(skipEntities && skipEntityCount > 0)", (const char *)&queryFormat, "skipEntities && skipEntityCount > 0") )
    __debugbreak();
  v12 = LODWORD(FLOAT_10_0);
  v13 = 3 * localClientNum + 2;
  v14 = 0;
  while ( 1 )
  {
    bounds.midPoint.v[0] = 0.0;
    bounds.midPoint.v[1] = 0.0;
    bounds.midPoint.v[2] = 0.0;
    bounds.halfSize.v[0] = *(float *)&v12;
    bounds.halfSize.v[1] = *(float *)&v12;
    bounds.halfSize.v[2] = *(float *)&v12;
    PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v13, &results, start, end, &bounds, skipEntities, skipEntityCount, 0, contentMask, 0, NULL, All);
    if ( !results.startsolid )
      break;
    if ( results.fraction != 1.0 )
    {
      ++v14;
      v15 = v12;
      *(float *)&v15 = *(float *)&v12 * 0.5;
      v12 = v15;
      if ( v14 < tracePassesCount )
        continue;
    }
    *(_QWORD *)result->v = *(_QWORD *)start->v;
    v16 = 0;
    result->v[2] = startSolidOffset + start->v[2];
    return v16;
  }
  v17 = end->v[0];
  if ( results.fraction == 1.0 )
  {
    result->v[0] = v17;
    *(_QWORD *)&result->y = *(_QWORD *)&end->y;
  }
  else
  {
    v18 = (float)((float)(v17 - start->v[0]) * results.fraction) + start->v[0];
    v19 = end->v[1] - start->v[1];
    v20 = end->v[2];
    enda.v[0] = v18;
    v21 = (float)(v20 - start->v[2]) * results.fraction;
    enda.v[1] = (float)(v19 * results.fraction) + start->v[1];
    enda.v[2] = (float)(v21 + start->v[2]) + (float)((float)(1.0 - results.fraction) * 32.0);
    PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v13, &results, start, &enda, &bounds, skipEntities, skipEntityCount, 0, contentMask, 0, NULL, All);
    fraction = results.fraction;
    v23 = enda.v[1];
    result->v[0] = (float)((float)(enda.v[0] - start->v[0]) * results.fraction) + start->v[0];
    v24 = enda.v[2];
    result->v[1] = (float)((float)(v23 - start->v[1]) * fraction) + start->v[1];
    result->v[2] = (float)((float)(v24 - start->v[2]) * fraction) + start->v[2];
  }
  return 1;
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
  const dvar_t *v1; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v4; 
  float value; 
  long double duration; 
  vec3_t outOrg; 
  vec3_t forward; 
  vec3_t end; 
  trace_t results; 

  v1 = DVARFLT_cg_traceProfilingDist;
  if ( !DVARFLT_cg_traceProfilingDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_traceProfilingDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.value >= 0.0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 3374, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0, "CG_TraceProfiling");
    Profile_Begin(36);
    AngleVectors(&LocalClientGlobals->refdefViewAngles, &forward, NULL, NULL);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    v4 = DVARFLT_cg_traceProfilingDist;
    if ( !DVARFLT_cg_traceProfilingDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_traceProfilingDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
    end.v[0] = (float)(value * forward.v[0]) + outOrg.v[0];
    end.v[1] = (float)(value * forward.v[1]) + outOrg.v[1];
    end.v[2] = (float)(value * forward.v[2]) + outOrg.v[2];
    PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &bounds_origin, 2047, 0, 41969969, 1, NULL, All);
    Profile_EndInternal(&duration);
    Sys_ProfEndNamedEvent();
    Com_Printf_NoFilter("profile %f\n", (double)duration);
  }
}

/*
==============
CG_View_UpdateDepthScanParams
==============
*/
void CG_View_UpdateDepthScanParams(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  if ( !CG_OffhandShield_PopulateDepthScanParams(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    LocalClientGlobals->refdef.depthScanParams.color = (vec4_t)r_depthScanColor->current;
    LocalClientGlobals->refdef.depthScanParams.outlineColor = (vec4_t)r_depthScanOutlineColor->current;
    LocalClientGlobals->refdef.depthScanParams.overlayColor = (vec4_t)r_depthScanOverlayColor->current;
    LocalClientGlobals->refdef.depthScanParams.scrollParams = (vec4_t)r_depthScanScrollParams->current;
    LocalClientGlobals->refdef.depthScanParams.enabled = r_depthScanEffectEnable->current.enabled;
    LocalClientGlobals->refdef.depthScanParams.overlayEnabled = r_depthScanOverlayEffect->current.enabled;
    LODWORD(LocalClientGlobals->refdef.depthScanParams.depth) = r_depthScanDistance->current.integer;
    LODWORD(LocalClientGlobals->refdef.depthScanParams.outlineThickness) = r_depthScanOutlineThickness->current.integer;
    LODWORD(LocalClientGlobals->refdef.depthScanParams.thickness) = r_depthScanThickness->current.integer;
    LODWORD(LocalClientGlobals->refdef.depthScanParams.overlayStrength) = r_depthScanOverlayStrength->current.integer;
    LocalClientGlobals->refdef.depthScanParams.scopeStencil = (float)r_depthScanScopeStencil->current.color[0];
  }
}

/*
==============
CG_View_UpdateFov
==============
*/
void CG_View_UpdateFov(const LocalClientNum_t localClientNum, const float fov_x)
{
  cg_t *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  float v5; 
  ClientFov v6; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  *(_QWORD *)&v6.finalFov = LODWORD(fov_x);
  v5 = LocalClientStaticGlobals->viewMult * LocalClientStaticGlobals->viewAspect;
  v6.baseFovAdjustment = 0.0;
  CG_View_UpdateFovInternal(LocalClientGlobals, &v6, v5);
  LocalClientGlobals->refdef.view.depthHackFov = *(GfxFovVector *)&LocalClientGlobals->refdef.view.0;
}

/*
==============
CG_View_UpdateFovInternal
==============
*/
void CG_View_UpdateFovInternal(cg_t *cgameGlob, const ClientFov *fov, float clientAspectRatio)
{
  float finalFov; 
  float v6; 
  LocalClientNum_t localClientNum; 
  int ControllerFromClient; 
  double MouseMonitorDistanceCoef; 
  float v10; 
  bool v11; 
  float tanHalfFovY; 
  float v13; 
  float v14; 
  float forceFoVx; 
  float forceFoVy; 
  float v17; 
  int fovLerpTimer; 
  float v19; 
  float baseFov; 
  const dvar_t *v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  float value; 
  const dvar_t *v25; 
  float v26; 
  int timer; 
  float targetBaseFov; 
  float v29; 
  int duration; 

  finalFov = fov->finalFov;
  TanHalfAngles(fov->finalFov, clientAspectRatio, (float *)&cgameGlob->refdef.view.0, &cgameGlob->refdef.view.fov.tanHalfFovY);
  v6 = 0.75 * dxDzFixedFOV;
  localClientNum = cgameGlob->localClientNum;
  cgameGlob->refdef.view.defaultFov.tanHalfFovY = 0.75 * dxDzFixedFOV;
  cgameGlob->refdef.view.defaultFov.tanHalfFovX = v6 * clientAspectRatio;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetMouseAdsUseMonitorDistance(ControllerFromClient) )
  {
    MouseMonitorDistanceCoef = GamerProfile_GetMouseMonitorDistanceCoef(ControllerFromClient);
    v10 = *(float *)&MouseMonitorDistanceCoef;
    v11 = *(float *)&MouseMonitorDistanceCoef <= 0.0;
    tanHalfFovY = cgameGlob->refdef.view.fov.tanHalfFovY;
    if ( v11 )
    {
      v14 = tanHalfFovY * 2.0929141;
    }
    else
    {
      v13 = tanHalfFovY * v10;
      atanf_0(tanHalfFovY * v10);
      v14 = v13 / atanf_0(v10 * 0.47780269);
    }
  }
  else
  {
    v14 = tanf_0(finalFov * 0.0087266462) * 1.5696856;
  }
  cgameGlob->zoomSensitivity = v14;
  if ( cgameGlob->refdef.forceFoVEnabled )
  {
    forceFoVx = cgameGlob->refdef.forceFoVx;
    forceFoVy = cgameGlob->refdef.forceFoVy;
    if ( forceFoVx <= 1.0 )
    {
      if ( forceFoVy > 1.0 )
      {
        v19 = tanf_0(forceFoVy * 0.0087266462);
        cgameGlob->refdef.view.fov.tanHalfFovY = v19 * 0.75;
        cgameGlob->refdef.view.fov.tanHalfFovX = (float)(v19 * 0.75) * clientAspectRatio;
      }
      cgameGlob->fovLerpTimer = 0;
      fovLerpTimer = 0;
    }
    else
    {
      v17 = tanf_0(forceFoVx * 0.0087266462);
      cgameGlob->refdef.view.fov.tanHalfFovX = (float)(v17 * 0.75) * clientAspectRatio;
      if ( forceFoVy > 1.0 )
        v17 = tanf_0(forceFoVy * 0.0087266462);
      cgameGlob->refdef.view.fov.tanHalfFovY = v17 * 0.75;
      cgameGlob->fovLerpTimer = 0;
      fovLerpTimer = 0;
    }
  }
  else
  {
    fovLerpTimer = cgameGlob->fovLerpTimer;
  }
  baseFov = fov->baseFov;
  if ( fovLerpTimer <= 0 )
  {
    cgameGlob->fovLerpBase = baseFov;
  }
  else
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2041, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_FOV_LERP )") )
      __debugbreak();
    cgameGlob->fovLerpTimer -= cgameGlob->frametime;
    if ( cgameGlob->fovLerpTimer <= 0 )
    {
      cgameGlob->turretFov = fov->finalFov;
      cgameGlob->fovLerpTimer = 0;
      v21 = DVARFLT_cg_fovScale;
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.value < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2050, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_cg_fovScale, \"cg_fovScale\" ) >= 0.f)", (const char *)&queryFormat, "Dvar_GetFloat( cg_fovScale ) >= 0.f") )
        __debugbreak();
      v22 = DVARFLT_cg_playerFovScale;
      if ( !DVARFLT_cg_playerFovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      if ( v22->current.value < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2051, ASSERT_TYPE_ASSERT, "(Dvar_GetFloat_Internal_DebugName( DVARFLT_cg_playerFovScale, \"cg_playerFovScale\" ) >= 0.f)", (const char *)&queryFormat, "Dvar_GetFloat( cg_playerFovScale ) >= 0.f") )
        __debugbreak();
      v23 = DVARFLT_cg_fovScale;
      if ( !DVARFLT_cg_fovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_fovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      value = v23->current.value;
      v25 = DVARFLT_cg_playerFovScale;
      if ( !DVARFLT_cg_playerFovScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFovScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      v26 = baseFov / (float)(value * v25->current.value);
      if ( cgameGlob->localClientNum == LOCAL_CLIENT_1 )
        Dvar_SetFloat_Internal(DVARFLT_cg_fov1, v26);
      else
        Dvar_SetFloat_Internal(DVARFLT_cg_fov, v26);
    }
  }
  if ( cgameGlob->baseFovLerpInfo.timer > 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 1707, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_BASE_FOV_LERP ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_BASE_FOV_LERP )") )
      __debugbreak();
    cgameGlob->baseFovLerpInfo.timer -= cgameGlob->frametime;
    timer = cgameGlob->baseFovLerpInfo.timer;
    targetBaseFov = cgameGlob->baseFovLerpInfo.targetBaseFov;
    if ( timer > 0 )
    {
      duration = cgameGlob->baseFovLerpInfo.duration;
      if ( duration > 0 )
      {
        v29 = (float)((float)(1.0 - (float)((float)timer / (float)duration)) * targetBaseFov) + (float)((float)((float)timer / (float)duration) * cgameGlob->baseFovLerpInfo.baseFovAtLerpStart);
        goto LABEL_51;
      }
    }
    else
    {
      cgameGlob->baseFovLerpInfo.timer = 0;
    }
    v29 = targetBaseFov;
LABEL_51:
    Dvar_SetFloat_Internal(DVARFLT_cg_targetBaseFov, v29);
  }
}

/*
==============
CG_View_UpdateFovLerpPreset
==============
*/
void CG_View_UpdateFovLerpPreset(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  const playerState_s *p_predictedPlayerState; 
  int CurrentPresetIndex; 
  const dvar_t *v6; 
  int v7; 
  int integer; 
  bool v9; 
  int v10; 
  int fovLastPresetIndex; 
  int v12; 
  int fovPresetLerpTimer; 
  double TargetFov; 
  float v15; 
  const dvar_t *v16; 
  double FovUnscaledDvarValue; 
  int v18; 
  bool v19; 
  double v20; 
  const dvar_t *v21; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_OFFHAND_END) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2087, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v3 = CG_GetLocalClientGlobals(localClientNum);
    p_predictedPlayerState = &v3->predictedPlayerState;
    if ( v3 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    CurrentPresetIndex = BG_FovLerp_GetCurrentPresetIndex(p_predictedPlayerState);
    v6 = DCONST_DVARINT_fovLerpDefaultPresetIndex;
    v7 = CurrentPresetIndex;
    if ( !DCONST_DVARINT_fovLerpDefaultPresetIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fovLerpDefaultPresetIndex") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    v9 = 0;
    v10 = 0;
    if ( (v7 || (fovLastPresetIndex = LocalClientGlobals->fovLastPresetIndex) == 0 || (LocalClientGlobals->fovLastPresetIndex = 0, v9 = fovLastPresetIndex != integer, fovLastPresetIndex == integer)) && v7 == LocalClientGlobals->fovLastPresetIndex )
    {
      fovPresetLerpTimer = LocalClientGlobals->fovPresetLerpTimer;
    }
    else
    {
      if ( LocalClientGlobals->fovLerpTimer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2108, ASSERT_TYPE_ASSERT, "(cgameGlob->fovLerpTimer == 0)", "%s\n\tYou cannot use FOV lerp system at the same time as using FOV Preset Lerp system", "cgameGlob->fovLerpTimer == 0") )
        __debugbreak();
      if ( !v7 && !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2109, ASSERT_TYPE_ASSERT, "((presetIndex != ( 0 )) || forceToDefaultFov)", (const char *)&queryFormat, "(presetIndex != INVALID_FOV_LERP_PRESET_INDEX) || forceToDefaultFov") )
        __debugbreak();
      v12 = v7;
      if ( v9 )
        v12 = integer;
      fovPresetLerpTimer = BG_FovLerp_GetDuration(v12);
      TargetFov = BG_FovLerp_GetTargetFov(v12);
      v15 = *(float *)&TargetFov;
      BG_FovLerp_IsAbsoluteValue(v12);
      v16 = DVARFLT_cg_fov1;
      if ( localClientNum != LOCAL_CLIENT_1 )
        v16 = DVARFLT_cg_fov;
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      I_fclamp(*(float *)&TargetFov, v16->domain.value.min, v16->domain.value.max);
      FovUnscaledDvarValue = CG_View_GetFovUnscaledDvarValue(localClientNum);
      LocalClientGlobals->fovPresetLerpBase = *(float *)&FovUnscaledDvarValue;
      LocalClientGlobals->fovPresetLerpTarget = v15;
      LocalClientGlobals->fovPresetLerpTimer = fovPresetLerpTimer;
      LocalClientGlobals->fovPresetLerpDuration = fovPresetLerpTimer;
      LocalClientGlobals->fovLastPresetIndex = v7;
    }
    if ( fovPresetLerpTimer > 0 )
    {
      v18 = fovPresetLerpTimer - LocalClientGlobals->frametime;
      if ( v18 > 0 )
        v10 = v18;
      v19 = LocalClientGlobals->fovPresetLerpDuration <= 0;
      LocalClientGlobals->fovPresetLerpTimer = v10;
      if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 2136, ASSERT_TYPE_ASSERT, "(cgameGlob->fovPresetLerpDuration > 0)", (const char *)&queryFormat, "cgameGlob->fovPresetLerpDuration > 0") )
        __debugbreak();
      v20 = I_fclamp(_mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->fovPresetLerpTimer).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)LocalClientGlobals->fovPresetLerpDuration).m128_f32[0], 0.0, 1.0);
      v21 = DVARFLT_cg_fov1;
      if ( localClientNum != LOCAL_CLIENT_1 )
        v21 = DVARFLT_cg_fov;
      Dvar_SetFloat_Internal(v21, (float)((float)(1.0 - (float)(1.0 - *(float *)&v20)) * LocalClientGlobals->fovPresetLerpBase) + (float)((float)(1.0 - *(float *)&v20) * LocalClientGlobals->fovPresetLerpTarget));
    }
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
  const dvar_t *v9; 
  cg_t *v10; 
  const playerState_s *p_predictedPlayerState; 
  int integer; 
  int v13; 
  __int64 v14; 
  LocalClientNum_t v15; 
  double Speed; 
  int damageTime; 
  float v_dmg_roll; 
  __int64 v19; 
  __int64 v20; 
  ViewMovementParams params; 

  if ( !viewState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 831, ASSERT_TYPE_ASSERT, "(viewState)", (const char *)&queryFormat, "viewState") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = DCONST_DVARINT_com_userCmdMaxTimeStep;
  v10 = LocalClientGlobals;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( !DCONST_DVARINT_com_userCmdMaxTimeStep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_userCmdMaxTimeStep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  v13 = inputTime - viewState->inputTime;
  if ( integer < 0 )
  {
    LODWORD(v20) = integer;
    LODWORD(v19) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 799, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%i, %i", v19, v20) )
      __debugbreak();
  }
  if ( integer < v13 )
    v13 = integer;
  if ( v13 < 0 )
    v13 = 0;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 768, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)(p_predictedPlayerState->pm_type - 4) > 2 )
  {
    if ( viewState == (PlayerViewState *const)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 688, ASSERT_TYPE_ASSERT, "(viewMoveState)", (const char *)&queryFormat, "viewMoveState") )
      __debugbreak();
    if ( v10 == (cg_t *)-25024i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 689, ASSERT_TYPE_ASSERT, "(outViewValues)", (const char *)&queryFormat, "outViewValues") )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 690, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v14 = v10->localClientNum;
    params.ps = p_predictedPlayerState;
    if ( !CgWeaponMap::ms_instance[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v15 = v10->localClientNum;
    params.weaponMap = CgWeaponMap::ms_instance[v14];
    params.updateTime = (float)msec * 0.001;
    params.handler = CgHandler::getHandler(v15);
    params.serverTime = serverTime;
    Speed = BG_GetSpeed(params.ps, serverTime, params.handler);
    damageTime = v10->damageTime;
    params.xySpeed = *(float *)&Speed;
    if ( damageTime )
      params.damageTime = v10->time - damageTime;
    else
      params.damageTime = 0;
    v_dmg_roll = v10->v_dmg_roll;
    params.damagePitch = v10->v_dmg_pitch;
    params.damageRoll = v_dmg_roll;
    BG_CalculateViewMovement_Angles(&params, &viewState->viewMoveState, &v10->playerViewValues.viewMoveAngles);
    CG_View_UpdateWeaponMovement(&viewState->weapMoveState, &v10->playerViewValues, v10, msec, v13, serverTime);
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
  cg_t *LocalClientGlobals; 
  bool v3; 
  bool v4; 
  bool v5; 
  int v6; 
  const dvar_t *v7; 
  bool enabled; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  int v19; 
  int v20; 

  if ( dword_1512F3638 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_1512F3638);
    if ( dword_1512F3638 == -1 )
    {
      v20 = clock();
      *(_QWORD *)&camera_timelock.delay = 500i64;
      camera_timelock.ref = v20;
      j__Init_thread_footer(&dword_1512F3638);
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = VecNCompareCustomEpsilon(debug_last_origin.v, LocalClientGlobals->predictedPlayerState.origin.v, 0.5, 3);
  v4 = !VecNCompareCustomEpsilon(debug_last_viewangles.v, LocalClientGlobals->predictedPlayerState.viewangles.v, 0.5, 3);
  if ( !v3 || v4 )
    v4 = 1;
  v5 = LocalClientGlobals->predictedPlayerState.pm_type == 3 || LocalClientGlobals->radiantCamInUse;
  if ( LocalClientGlobals->radiantCamReceived )
  {
    LocalClientGlobals->radiantCamReceived = 0;
    if ( camera_timelock.value == 1 )
      goto LABEL_14;
    v6 = clock() - camera_timelock.ref;
    if ( v6 < 0 )
      camera_timelock.ref = clock();
    if ( v6 > camera_timelock.delay )
    {
LABEL_14:
      camera_timelock.value = 1;
      camera_timelock.ref = clock();
      if ( v5 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
        {
          if ( !s_dvars_cached )
          {
            v7 = DVARBOOL_cg_drawGun;
            if ( !DVARBOOL_cg_drawGun && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawGun") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v7);
            enabled = v7->current.enabled;
            v9 = DVARBOOL_cg_draw2D;
            s_cg_drawgun_value = enabled;
            if ( !DVARBOOL_cg_draw2D && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_draw2D") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v9);
            s_cg_draw2D_value = v9->current.enabled;
            Dvar_SetBool_Internal(DVARBOOL_cg_drawGun, 0);
            Dvar_SetBool_Internal(DVARBOOL_cg_draw2D, 0);
            s_dvars_cached = 1;
          }
          LocalClientGlobals->radiantCamUseOriginOverride = 1;
        }
        else
        {
          LocalClientGlobals->predictedPlayerState.origin.v[0] = LocalClientGlobals->radiantCameraOrigin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = LocalClientGlobals->radiantCameraOrigin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = LocalClientGlobals->radiantCameraOrigin.v[2];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2] - LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
          v10 = LocalClientGlobals->radiantCameraAngles.v[1];
          v11 = LocalClientGlobals->radiantCameraAngles.v[2];
          LocalClientGlobals->predictedPlayerState.delta_angles.v[0] = (float)(LocalClientGlobals->radiantCameraAngles.v[0] - LocalClientGlobals->predictedPlayerState.viewangles.v[0]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
          LocalClientGlobals->predictedPlayerState.delta_angles.v[1] = (float)(v10 - LocalClientGlobals->predictedPlayerState.viewangles.v[1]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
          LocalClientGlobals->predictedPlayerState.delta_angles.v[2] = (float)(v11 - LocalClientGlobals->predictedPlayerState.viewangles.v[2]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
          _XMM8 = 0i64;
          __asm
          {
            vroundss xmm0, xmm8, xmm2, 1
            vroundss xmm3, xmm8, xmm2, 1
          }
          LocalClientGlobals->predictedPlayerState.delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          __asm
          {
            vroundss xmm0, xmm8, xmm3, 1
            vroundss xmm3, xmm8, xmm2, 1
          }
          LocalClientGlobals->predictedPlayerState.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          __asm
          {
            vroundss xmm0, xmm8, xmm3, 1
            vroundss xmm3, xmm8, xmm2, 1
          }
          LocalClientGlobals->predictedPlayerState.delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
          LocalClientGlobals->predictedPlayerState.viewangles.v[0] = LocalClientGlobals->radiantCameraAngles.v[0];
          LocalClientGlobals->predictedPlayerState.viewangles.v[1] = LocalClientGlobals->radiantCameraAngles.v[1];
          LocalClientGlobals->predictedPlayerState.viewangles.v[2] = LocalClientGlobals->radiantCameraAngles.v[2];
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->radiantCameraOrigin);
          LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->radiantCameraAngles.v[0];
          LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->radiantCameraAngles.v[1];
          LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->radiantCameraAngles.v[2];
          AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
          CG_PlayerState_ClearExtrapolatedPlayerState(localClientNum);
        }
        debug_last_origin = LocalClientGlobals->predictedPlayerState.origin;
        debug_last_viewangles = LocalClientGlobals->predictedPlayerState.viewangles;
      }
    }
  }
  else if ( v4 )
  {
    debug_last_origin = LocalClientGlobals->predictedPlayerState.origin;
    debug_last_viewangles = LocalClientGlobals->predictedPlayerState.viewangles;
    if ( camera_timelock.value == 2 )
      goto LABEL_32;
    v19 = clock() - camera_timelock.ref;
    if ( v19 < 0 )
      camera_timelock.ref = clock();
    if ( v19 > camera_timelock.delay )
    {
LABEL_32:
      camera_timelock.value = 2;
      camera_timelock.ref = clock();
      LocalClientGlobals->radiantCameraOrigin.v[0] = LocalClientGlobals->predictedPlayerState.origin.v[0];
      LocalClientGlobals->radiantCameraOrigin.v[1] = LocalClientGlobals->predictedPlayerState.origin.v[1];
      LocalClientGlobals->radiantCameraOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2];
      LocalClientGlobals->radiantCameraOrigin.v[2] = LocalClientGlobals->predictedPlayerState.viewHeightCurrent + LocalClientGlobals->radiantCameraOrigin.v[2];
      LocalClientGlobals->radiantCameraAngles.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
      LocalClientGlobals->radiantCameraAngles.v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
      LocalClientGlobals->radiantCameraAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
      {
        CG_View_RestoreCachedMPDvarsForRadiantView();
        LocalClientGlobals->radiantCamUseOriginOverride = 0;
      }
      if ( CG_IsRadiantSync(RADIANT_SYNC_TYPE_CAMERA) )
      {
        rdbgRadiantSendCameraPosition(&LocalClientGlobals->radiantCameraOrigin, &LocalClientGlobals->radiantCameraAngles);
        LocalClientGlobals->radiantCamUFOmode = 1;
      }
    }
  }
  else if ( !v5 && LocalClientGlobals->radiantCamUFOmode )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_FIRING|0x80) )
    {
      CG_View_RestoreCachedMPDvarsForRadiantView();
      LocalClientGlobals->radiantCamUseOriginOverride = 0;
    }
    LocalClientGlobals->radiantCamUFOmode = 0;
  }
}

/*
==============
CG_View_UpdateSceneDepthOfField
==============
*/
void CG_View_UpdateSceneDepthOfField(const LocalClientNum_t localClientNum, bool isMultiplayer, bool isThirdPerson, float multiplayerAdsStart, float multiplayerAdsEnd)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  float fWeaponPosFrac; 
  float fPreviousWeaponPosFrac; 
  double OffhandAdsFrac; 
  DofPhysicalScriptingState dofPhysicalScriptingState; 
  float apertureSpeed; 
  float fstop; 
  float focusSpeed; 
  float cocScale; 
  float v25; 
  double ScaledSharpCocDiameter; 
  float value; 
  float v29; 
  float v30; 
  double HyperfocalDistance; 
  float v32; 
  float v33; 
  float v34; 
  float frametime; 
  bool v36; 
  bool v37; 
  float *p_fstop; 
  float *p_focusDistance; 
  double v40; 
  float v41; 
  bool v42; 
  int integer; 
  float v44; 
  DofPhysicalScriptingState v45; 
  bool v46; 
  const dvar_t *v47; 
  bool v48; 
  CgWeaponMap *v49; 
  const Weapon *ViewmodelWeapon; 
  bool v51; 
  char v52; 
  XB3ConsoleType XB3ConsoleType; 
  char v54; 
  float v55; 
  FocusParams focusParams; 
  FocusParams focusDistance; 
  FocusParams v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 
  __int128 v63; 
  _OWORD v64[4]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6436, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  focusParams.apertureSpeed = 0.0;
  focusParams.focusSpeed = 0.0;
  focusParams.cocScale = 0.0;
  LocalClientGlobals->refdef.dofPhysical.enabled = R_DOF_GetPhysicalEnable();
  if ( R_DOF_GetPhysicalEnable() )
  {
    v64[1] = v5;
    v62 = v8;
    v60 = v10;
    v59 = v11;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
    fPreviousWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fPreviousWeaponPosFrac;
    if ( BG_IsUsingOffhandGestureWeaponADSSupport(Instance, &LocalClientGlobals->predictedPlayerState) )
    {
      OffhandAdsFrac = BG_GetOffhandAdsFrac(&LocalClientGlobals->predictedPlayerState);
      fPreviousWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fPreviousOffhandAdsFrac;
      fWeaponPosFrac = *(float *)&OffhandAdsFrac;
    }
    dofPhysicalScriptingState = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState;
    v64[0] = v6;
    v63 = v7;
    v61 = v9;
    if ( dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_BOTH )
    {
      CG_InitFocusParamsFromScriptMode(localClientNum, &LocalClientGlobals->predictedPlayerState, &focusParams);
      apertureSpeed = focusParams.apertureSpeed;
      fstop = focusParams.fstop;
      focusSpeed = focusParams.focusSpeed;
      cocScale = focusParams.cocScale;
      v25 = focusParams.focusDistance;
    }
    else
    {
      if ( dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_ADS )
      {
        CG_InitFocusParamsFromScriptMode(localClientNum, &LocalClientGlobals->predictedPlayerState, &focusDistance);
      }
      else
      {
        ScaledSharpCocDiameter = R_GetScaledSharpCocDiameter(0.0011811031, r_dof_physical_filmDiagonal->current.value);
        if ( !isMultiplayer )
        {
          multiplayerAdsStart = LocalClientGlobals->predictedPlayerState.dofPhysicalAdsStart;
          multiplayerAdsEnd = LocalClientGlobals->predictedPlayerState.dofPhysicalAdsEnd;
        }
        R_GetFocusPlaneAndApertureFromRange(LocalClientGlobals->refdef.view.focalLength, multiplayerAdsStart, multiplayerAdsEnd, *(float *)&ScaledSharpCocDiameter, r_dof_physical_adsMinFstop->current.value, r_dof_physical_adsMaxFstop->current.value, r_dof_physical_minFocusDistance->current.value, &focusDistance.focusDistance, &focusDistance.fstop);
        focusDistance.cocScale = FLOAT_1_0;
        if ( focusDistance.focusDistance >= LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance )
          value = r_dof_physical_adsFocusSpeed->current.vector.v[1];
        else
          value = r_dof_physical_adsFocusSpeed->current.value;
        focusDistance.focusSpeed = value;
        if ( focusDistance.fstop >= LocalClientGlobals->refdef.dofPhysicalFocusState.fstop )
          v29 = r_dof_physical_adsFocusSpeed->current.vector.v[3];
        else
          v29 = r_dof_physical_adsFocusSpeed->current.vector.v[2];
        focusDistance.apertureSpeed = v29;
      }
      if ( LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_HIP )
      {
        CG_InitFocusParamsFromScriptMode(localClientNum, &LocalClientGlobals->predictedPlayerState, &v58);
      }
      else if ( LocalClientGlobals->weaponInspectDofActive )
      {
        CG_InitFocusParamsFromWeaponInspect(&LocalClientGlobals->predictedPlayerState, LocalClientGlobals, localClientNum, &v58);
      }
      else
      {
        v30 = r_dof_physical_hipSharpCocDiameter->current.value * 0.039370101;
        R_GetScaledSharpCocDiameter(v30, r_dof_physical_filmDiagonal->current.value);
        HyperfocalDistance = R_GetHyperfocalDistance(LocalClientGlobals->refdef.view.focalLength, r_dof_physical_hipFstop->current.value, v30);
        v32 = r_dof_physical_hipFstop->current.value;
        v58.fstop = v32;
        v58.focusDistance = *(float *)&HyperfocalDistance;
        v58.cocScale = 0.0;
        if ( *(float *)&HyperfocalDistance >= LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance )
          v33 = r_dof_physical_hipFocusSpeed->current.vector.v[1];
        else
          v33 = r_dof_physical_hipFocusSpeed->current.value;
        v58.focusSpeed = v33;
        if ( v32 >= LocalClientGlobals->refdef.dofPhysicalFocusState.fstop )
          v34 = r_dof_physical_hipFocusSpeed->current.vector.v[3];
        else
          v34 = r_dof_physical_hipFocusSpeed->current.vector.v[2];
        v58.apertureSpeed = v34;
      }
      fstop = (float)((float)(1.0 - fWeaponPosFrac) * v58.fstop) + (float)(fWeaponPosFrac * focusDistance.fstop);
      v25 = (float)((float)(1.0 - fWeaponPosFrac) * v58.focusDistance) + (float)(fWeaponPosFrac * focusDistance.focusDistance);
      cocScale = (float)((float)(1.0 - fWeaponPosFrac) * v58.cocScale) + (float)(fWeaponPosFrac * focusDistance.cocScale);
      focusSpeed = (float)((float)(1.0 - fWeaponPosFrac) * v58.focusSpeed) + (float)(fWeaponPosFrac * focusDistance.focusSpeed);
      apertureSpeed = (float)((float)(1.0 - fWeaponPosFrac) * v58.apertureSpeed) + (float)(fWeaponPosFrac * focusDistance.apertureSpeed);
    }
    frametime = (float)LocalClientGlobals->frametime;
    v36 = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && (r_dof_physical_hipEnable->current.enabled || LocalClientGlobals->weaponInspectDofActive);
    LocalClientGlobals->refdef.dofPhysical.hipEnabled = v36;
    LocalClientGlobals->refdef.dofPhysical.scriptingEnabled = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
    v37 = !LocalClientGlobals->refdef.xcamOverridesSceneDoF;
    LocalClientGlobals->refdef.dofPhysical.adsEnabled = fWeaponPosFrac > 0.0;
    LODWORD(LocalClientGlobals->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
    LODWORD(LocalClientGlobals->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
    if ( v37 )
    {
      if ( r_dof_physical_hipEnable->current.enabled || fPreviousWeaponPosFrac != 0.0 || fWeaponPosFrac <= 0.0 )
      {
        p_fstop = &LocalClientGlobals->refdef.dofPhysicalFocusState.fstop;
        R_UpdateAperture(fstop, frametime, apertureSpeed * 0.001, &LocalClientGlobals->refdef.dofPhysicalFocusState.fstop);
        p_focusDistance = &LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance;
        R_UpdateFocus(LocalClientGlobals->refdef.view.focalLength, LocalClientGlobals->refdef.dofPhysicalFocusState.fstop, v25, frametime, focusSpeed * 0.001, 0.0, r_dof_physical_minFocusDistance->current.value, &LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance, &LocalClientGlobals->refdef.dofPhysicalFocusState.focusGradient);
        R_UpdateCocScale(cocScale, frametime, 0.0099999998, &LocalClientGlobals->refdef.dofPhysicalFocusState.cocScale);
      }
      else
      {
        p_fstop = &LocalClientGlobals->refdef.dofPhysicalFocusState.fstop;
        LocalClientGlobals->refdef.dofPhysicalFocusState.focusGradient = 0.0;
        p_focusDistance = &LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance;
        LocalClientGlobals->refdef.dofPhysicalFocusState.fstop = fstop;
        LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance = v25;
        LocalClientGlobals->refdef.dofPhysicalFocusState.cocScale = cocScale;
      }
      if ( LocalClientGlobals->refdef.weaponOverridesSceneDoF )
      {
        v40 = I_fclamp((float)(fWeaponPosFrac * LocalClientGlobals->refdef.dualViewScopeState.hipFstop) + (float)((float)(1.0 - fWeaponPosFrac) * *p_fstop), 0.125, 30.0);
        v41 = fWeaponPosFrac * LocalClientGlobals->refdef.dualViewScopeState.hipFocusDistance;
        *p_fstop = *(float *)&v40;
        *p_focusDistance = v41 + (float)((float)(1.0 - fWeaponPosFrac) * *p_focusDistance);
      }
    }
    v42 = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState == DOF_PHYSICAL_SCRIPTING_DISABLED && r_dof_physical_hipEnable->current.enabled;
    LocalClientGlobals->refdef.dofPhysical.hipEnabled = v42;
    LocalClientGlobals->refdef.dofPhysical.scriptingEnabled = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState != DOF_PHYSICAL_SCRIPTING_DISABLED;
    LocalClientGlobals->refdef.dofPhysical.adsEnabled = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac > 0.0;
    LODWORD(LocalClientGlobals->refdef.dofPhysical.filmDiagonal) = r_dof_physical_filmDiagonal->current.integer;
    LODWORD(LocalClientGlobals->refdef.dofPhysical.minFocusDistance) = r_dof_physical_minFocusDistance->current.integer;
    integer = r_dof_physical_maxCocDiameter->current.integer;
    LocalClientGlobals->refdef.dofPhysical.fstop = LocalClientGlobals->refdef.dofPhysicalFocusState.fstop;
    v44 = LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance;
    LODWORD(LocalClientGlobals->refdef.dofPhysical.maxCocDiameter) = integer;
    LocalClientGlobals->refdef.dofPhysical.focusDistance = v44;
    v45 = LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState;
    v46 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_TO_IDLE|0x80);
    v47 = DVARBOOL_killswitch_weapon_based_dof_disable;
    v48 = v46;
    if ( !DVARBOOL_killswitch_weapon_based_dof_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_based_dof_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled || v45 || !v48 || LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac <= 0.0 )
      goto LABEL_65;
    v49 = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6238, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    ViewmodelWeapon = BG_GetViewmodelWeapon(v49, &LocalClientGlobals->predictedPlayerState);
    v51 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
    if ( BG_HasDualFOV(v49, &LocalClientGlobals->predictedPlayerState, ViewmodelWeapon, v51) )
      goto LABEL_65;
    v52 = byte_1512F365E;
    XB3ConsoleType = Sys_GetXB3ConsoleType();
    v54 = v52;
    if ( XB3ConsoleType == XB3_CONSOLE_DURANGO )
      v54 = 1;
    if ( !v54 )
    {
LABEL_65:
      LocalClientGlobals->refdef.worldMotionBlurOverride = 0;
      LocalClientGlobals->refdef.dofPhysical.cocScale = LocalClientGlobals->refdef.dofPhysicalFocusState.cocScale;
    }
    else
    {
      v55 = *(float *)&dword_147FA5778;
      LocalClientGlobals->refdef.dofPhysical.cocScale = *(float *)&dword_1512F3660;
      LocalClientGlobals->refdef.worldMotionBlurOverride = *(float *)&dword_147FA577C;
      LocalClientGlobals->refdef.dofPhysical.viewModelFstop = v55;
    }
  }
}

/*
==============
CG_View_UpdateSceneLensProfile
==============
*/
void CG_View_UpdateSceneLensProfile(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int lensProfileMode; 
  float outScale; 
  float outUVScale[5]; 
  int outOverrideProfile; 
  float outFocalLength; 
  float outFStop; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6663, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Camera_GetOverrideLensProfile(localClientNum, &outOverrideProfile, &outFocalLength, &outFStop, &outScale, outUVScale) )
  {
    if ( !outOverrideProfile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6675, ASSERT_TYPE_ASSERT, "( camOverrideLensProfile ) != ( LENS_PROFILE_NONE )", "%s != %s\n\t%i, %i", "camOverrideLensProfile", "LENS_PROFILE_NONE", 0, 0i64) )
      __debugbreak();
    LocalClientGlobals->refdef.lensProfile.mode = outOverrideProfile;
    LocalClientGlobals->refdef.lensProfile.focalLength = outFocalLength;
    LocalClientGlobals->refdef.lensProfile.aperture = outFStop;
    LocalClientGlobals->refdef.lensProfile.scale = outScale;
    LocalClientGlobals->refdef.lensProfile.UVScale = outUVScale[0];
  }
  else
  {
    lensProfileMode = LocalClientGlobals->predictedPlayerState.lensProfileMode;
    if ( lensProfileMode )
    {
      LocalClientGlobals->refdef.lensProfile.mode = lensProfileMode;
      LocalClientGlobals->refdef.lensProfile.focalLength = LocalClientGlobals->predictedPlayerState.lensProfileDistortFocalLength;
      LocalClientGlobals->refdef.lensProfile.aperture = LocalClientGlobals->predictedPlayerState.lensProfileDistortAperture;
      LocalClientGlobals->refdef.lensProfile.scale = LocalClientGlobals->predictedPlayerState.lensProfileScale;
      LocalClientGlobals->refdef.lensProfile.UVScale = LocalClientGlobals->predictedPlayerState.lensProfileUVScale;
    }
    else
    {
      LocalClientGlobals->refdef.lensProfile.mode = 0;
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
  bool v8; 
  bool HasThermalScope; 
  bool v10; 
  bool v11; 
  const PlayerEquippedWeaponState *EquippedWeaponStateConst; 
  const PlayerEquippedWeaponState *v13; 
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
      r_weapon = *BG_GetViewmodelWeapon(Instance, &LocalClientGlobals->predictedPlayerState);
      v8 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
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
        v10 = BG_CanHybridToggle(&LocalClientGlobals->predictedPlayerState, &r_weapon, v8) || BG_ScopeOutlinesEnemies(&r_weapon, v8);
        v11 = BG_HasDualFOVEquipped(Instance, &LocalClientGlobals->predictedPlayerState) && v10 ? !LocalClientGlobals->dualViewScope : !CG_GetWeapReticleZoom(LocalClientGlobals, NULL);
        if ( !v11 && !LocalClientGlobals->renderingThirdPerson && BG_ScopeOutlinesEnemies(&r_weapon, v8) )
        {
          if ( BG_CanThermalToggle(&r_weapon, v8) )
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
            if ( !BG_CanHybridToggle(&LocalClientGlobals->predictedPlayerState, &r_weapon, v8) )
            {
              HasThermalScope = BG_HasThermalScope(&LocalClientGlobals->predictedPlayerState, &r_weapon, v8);
              goto LABEL_33;
            }
            v13 = BG_GetEquippedWeaponStateConst(Instance, &LocalClientGlobals->predictedPlayerState, &r_weapon);
            if ( v13 && !v13->hybridScope && BG_HasThermalScope(&LocalClientGlobals->predictedPlayerState, &r_weapon, v8) )
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
void CG_View_UpdateShellShock(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  bool v4; 
  cg_t *v5; 
  const dvar_t *v6; 
  ShockViewTypes type; 
  int time; 
  int ShellShockBlendTime; 
  bool v10; 
  float v11; 
  char v13; 
  int v14; 
  const shellshock_parms_t *parms; 
  __int32 v16; 
  __int32 v17; 
  float v18; 
  float v19; 
  float v20; 
  double v21; 
  float flashShotFadeTime; 
  float v23; 
  float v24; 
  float v25; 
  double v26; 
  float flashWhiteFadeTime; 
  double v28; 
  int ThermalBlurFactor; 
  bool v31; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6554, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v3 = CG_GetLocalClientGlobals(localClientNum);
  if ( v3->inKillCam && v3->killCamEntityType )
  {
    v4 = 0;
  }
  else if ( MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator(localClientNum) )
  {
    v4 = 0;
  }
  else
  {
    v5 = CG_GetLocalClientGlobals(localClientNum);
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6540, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v4 = v5->m_useSellShock && (v5->cvsData.transitory.thermalVisionActive || Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_drawShellshock, "cg_drawShellshock"));
  }
  v6 = DCONST_DVARBOOL_cg_drawShellshock;
  type = LocalClientGlobals->shellshock.parms->screenBlend.type;
  if ( !DCONST_DVARBOOL_cg_drawShellshock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawShellshock") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  time = 0;
  if ( v6->current.enabled )
    ShellShockBlendTime = CG_GetShellShockBlendTime(localClientNum);
  else
    ShellShockBlendTime = 0;
  v10 = 0;
  if ( ShellShockBlendTime > 0 )
    v10 = v4;
  v11 = 0.0;
  LODWORD(_XMM7) = 0;
  if ( !v10 )
  {
    LocalClientGlobals->refdef.shellshock.capture = 0;
    LocalClientGlobals->refdef.shellshock.blend = GFX_SHELLSHOCK_BLEND_NONE;
    goto LABEL_57;
  }
  v13 = 0;
  v14 = LocalClientGlobals->shellshock.duration + LocalClientGlobals->shellshock.startTime - LocalClientGlobals->time;
  parms = LocalClientGlobals->shellshock.parms;
  if ( type )
  {
    v16 = type - 1;
    if ( !v16 )
    {
      flashShotFadeTime = (float)parms->screenBlend.flashShotFadeTime;
      v23 = (float)v14;
      if ( !LocalClientGlobals->refdef.shellshock.enabled )
        time = LocalClientGlobals->time;
      v24 = FLOAT_1_0;
      if ( v23 >= flashShotFadeTime )
        v25 = FLOAT_1_0;
      else
        v25 = v23 / flashShotFadeTime;
      v26 = BG_ShellshockBlendSmooth(v25);
      LODWORD(_XMM7) = LODWORD(v26);
      flashWhiteFadeTime = (float)parms->screenBlend.flashWhiteFadeTime;
      if ( v23 < flashWhiteFadeTime )
        v24 = v23 / flashWhiteFadeTime;
      v28 = BG_ShellshockBlendSmooth(v24);
      v13 = 2;
      v11 = *(float *)&v28;
      goto LABEL_52;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 == 1 )
        v10 = 0;
      goto LABEL_52;
    }
    v18 = (float)parms->screenBlend.flashShotFadeTime;
    v19 = (float)v14;
    if ( !LocalClientGlobals->refdef.shellshock.enabled )
      time = LocalClientGlobals->time;
    if ( v19 >= v18 )
    {
      v21 = BG_ShellshockBlendSmooth(1.0);
      LODWORD(_XMM7) = LODWORD(v21);
    }
    else
    {
      v20 = v19 / v18;
      BG_ShellshockBlendSmooth(v20);
      *(float *)&_XMM7 = v20;
    }
  }
  else
  {
    if ( LocalClientGlobals->cvsData.transitory.thermalVisionActive )
    {
      if ( ShellShockBlendTime )
      {
        ThermalBlurFactor = CG_View_GetThermalBlurFactor(localClientNum);
        if ( ThermalBlurFactor > ShellShockBlendTime )
          ShellShockBlendTime = ThermalBlurFactor;
      }
    }
    time = LocalClientGlobals->time;
    _XMM0 = LODWORD(FLOAT_0_0099999998);
    *(float *)&_XMM0 = powf_0(0.0099999998, (float)(time - LocalClientGlobals->refdef.shellshock.capture) / (float)ShellShockBlendTime);
    __asm { vminss  xmm7, xmm0, cs:__real@3f7d70a4 }
  }
  v13 = 1;
LABEL_52:
  v31 = !LocalClientGlobals->refdef.shellshock.enabled;
  LocalClientGlobals->refdef.shellshock.capture = time;
  LocalClientGlobals->refdef.shellshock.blend = v13;
  LocalClientGlobals->refdef.shellshock.blendCapture = !v31 && v10;
LABEL_57:
  LocalClientGlobals->refdef.shellshock.grabFactor = *(float *)&_XMM7;
  LocalClientGlobals->refdef.shellshock.whiteFactor = v11;
  LocalClientGlobals->refdef.shellshock.enabled = v10;
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
void CG_View_UpdateTestFX(const LocalClientNum_t localClientNum)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( s_testEffect[v2].respawnTime >= 1 && CG_GetLocalClientGlobals(localClientNum)->time > s_testEffect[v2].respawnTime + s_testEffect[v2].time )
    CG_View_PlayTestFx(localClientNum);
}

/*
==============
CG_View_UpdateThirdPersonCameraCollision
==============
*/
void CG_View_UpdateThirdPersonCameraCollision(LocalClientNum_t localClientNum, int ignoreEntNum, const vec3_t *pivotOrigin, const vec3_t *cameraOffset, const vec3_t *viewAngles, bool useUniveralUpTrace, bool isInPhase, vec3_t *outCameraOrigin, vec3_t *outCameraAngles)
{
  cg_t *LocalClientGlobals; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int16 viewlocked_entNum; 
  __int32 v20; 
  int skipEntityCount; 
  __int128 v22; 
  float v23; 
  float v25; 
  __int128 v27; 
  float v28; 
  float v29; 
  float v30; 
  float v34; 
  int skipEntities[2]; 
  vec3_t *angles; 
  vec3_t end; 
  vec3_t start; 
  tmat33_t<vec3_t> axis; 
  vec3_t vec; 
  Bounds bounds; 
  trace_t results; 

  angles = outCameraAngles;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 6085, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  bounds.halfSize.v[1] = FLOAT_10_0;
  bounds.halfSize.v[2] = FLOAT_10_0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  AnglesToAxis(viewAngles, &axis);
  v14 = cameraOffset->v[1];
  v15 = (float)(v14 * axis.m[1].v[0]) + pivotOrigin->v[0];
  v16 = (float)(v14 * axis.m[1].v[1]) + pivotOrigin->v[1];
  v17 = (float)(v14 * axis.m[1].v[2]) + pivotOrigin->v[2];
  v18 = cameraOffset->v[2];
  end.v[0] = v15;
  end.v[1] = v16;
  if ( useUniveralUpTrace )
  {
    end.v[2] = v17 + v18;
  }
  else
  {
    end.v[0] = (float)(v18 * axis.m[2].v[0]) + v15;
    end.v[1] = (float)(v18 * axis.m[2].v[1]) + v16;
    end.v[2] = (float)(v18 * axis.m[2].v[2]) + v17;
  }
  skipEntities[0] = ignoreEntNum;
  viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
  if ( viewlocked_entNum != 2047 )
    skipEntities[1] = viewlocked_entNum;
  v20 = 3 * localClientNum + 2;
  skipEntityCount = (viewlocked_entNum != 2047) + 1;
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v20, &results, pivotOrigin, &end, &bounds, skipEntities, skipEntityCount, 0, 65553, 0, NULL, All);
  v22 = LODWORD(end.v[0]);
  v23 = cameraOffset->v[0];
  *(float *)&v22 = (float)((float)(end.v[0] - pivotOrigin->v[0]) * results.fraction) + pivotOrigin->v[0];
  _XMM7 = v22;
  v25 = (float)((float)(end.v[1] - pivotOrigin->v[1]) * results.fraction) + pivotOrigin->v[1];
  __asm { vunpcklps xmm0, xmm7, xmm6 }
  end.v[2] = (float)((float)(end.v[2] - pivotOrigin->v[2]) * results.fraction) + pivotOrigin->v[2];
  start.v[2] = end.v[2];
  end.v[0] = (float)(v23 * axis.m[0].v[0]) + *(float *)&v22;
  end.v[1] = (float)(v23 * axis.m[0].v[1]) + v25;
  end.v[2] = (float)(v23 * axis.m[0].v[2]) + end.v[2];
  *(double *)start.v = *(double *)&_XMM0;
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v20, &results, &start, &end, &bounds, skipEntities, skipEntityCount, 0, 65553, 0, NULL, All);
  end.v[2] = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
  end.v[0] = (float)((float)(end.v[0] - start.v[0]) * results.fraction) + start.v[0];
  end.v[1] = (float)((float)(end.v[1] - start.v[1]) * results.fraction) + start.v[1];
  start.v[0] = (float)(8192.0 * axis.m[0].v[0]) + end.v[0];
  start.v[1] = (float)(8192.0 * axis.m[0].v[1]) + end.v[1];
  start.v[2] = (float)(8192.0 * axis.m[0].v[2]) + end.v[2];
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)v20, &results, &end, &start, &bounds_origin, skipEntities, skipEntityCount, 0, 8399153, 1, NULL, All);
  v27 = LODWORD(start.v[1]);
  v28 = (float)((float)((float)(start.v[0] - end.v[0]) * results.fraction) + end.v[0]) - pivotOrigin->v[0];
  v29 = (float)((float)((float)(start.v[2] - end.v[2]) * results.fraction) + end.v[2]) - pivotOrigin->v[2];
  start.v[1] = (float)((float)(start.v[1] - end.v[1]) * results.fraction) + end.v[1];
  v30 = start.v[1] - pivotOrigin->v[1];
  start.v[2] = (float)((float)(start.v[2] - end.v[2]) * results.fraction) + end.v[2];
  *(float *)&v27 = fsqrt((float)((float)(v30 * v30) + (float)(v28 * v28)) + (float)(v29 * v29));
  _XMM3 = v27;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  vec.v[0] = v28 * (float)(1.0 / *(float *)&_XMM0);
  vec.v[2] = v29 * (float)(1.0 / *(float *)&_XMM0);
  start.v[0] = (float)((float)(start.v[0] - end.v[0]) * results.fraction) + end.v[0];
  vec.v[1] = v30 * (float)(1.0 / *(float *)&_XMM0);
  vectoangles(&vec, angles);
  v34 = end.v[1];
  outCameraOrigin->v[0] = end.v[0];
  outCameraOrigin->v[2] = end.v[2];
  outCameraOrigin->v[1] = v34;
}

/*
==============
CG_View_UpdateTurretZoom
==============
*/
void CG_View_UpdateTurretZoom(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const Weapon *v4; 
  const WeaponDef *v5; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  float turretFov; 
  WeaponSFXPackage *sfxPackage; 
  CgSoundSystem *v12; 
  const SndAliasList *Alias; 
  __int64 v14; 
  __int64 v15; 
  usercmd_s ucmd; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4861, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(LocalClientGlobals->localClientNum);
  v4 = Handler->PlayerTurret(Handler, &LocalClientGlobals->predictedPlayerState);
  if ( v4->weaponIdx )
  {
    v5 = BG_WeaponDef(v4, 0);
    if ( CG_PlayerUsingScopedTurret(LocalClientGlobals->localClientNum) && v5->overlayInterface == WEAPOVERLAYINTERFACE_TURRETSCOPE )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)LocalClientGlobals->localClientNum);
      CmdNumber = ClActiveClient_GetCmdNumber(Client);
      CL_GetUserCmd(LocalClientGlobals->localClientNum, CmdNumber, &ucmd);
      turretFov = LocalClientGlobals->turretFov;
      *(float *)&_XMM6 = v5->turretScopeZoomMin;
      if ( (float)(turretFov - (float)((float)((float)((float)LocalClientGlobals->frametime * (float)ucmd.forwardmove) * 0.0000078740159) * v5->turretScopeZoomRate)) >= *(float *)&_XMM6 )
      {
        _XMM0 = LODWORD(v5->turretScopeZoomMax);
        __asm { vminss  xmm6, xmm0, xmm4 }
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM6 - turretFov) & _xmm) > 0.0 )
      {
        sfxPackage = v5->sfxPackage;
        if ( sfxPackage )
        {
          if ( sfxPackage->sounds->fireStopSoundPlayer.name )
          {
            if ( !(_BYTE)CgSoundSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", v1) )
              __debugbreak();
            if ( (unsigned int)v1 >= CgSoundSystem::ms_allocatedCount )
            {
              LODWORD(v15) = CgSoundSystem::ms_allocatedCount;
              LODWORD(v14) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v14, v15) )
                __debugbreak();
            }
            if ( !CgSoundSystem::ms_soundSystemArray[v1] )
            {
              LODWORD(v15) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", v15) )
                __debugbreak();
            }
            v12 = CgSoundSystem::ms_soundSystemArray[v1];
            Alias = SND_FindAlias(v5->sfxPackage->sounds->fireStopSoundPlayer.name);
            CgSoundSystem::PlayClientSoundAlias(v12, Alias);
          }
        }
      }
      LocalClientGlobals->turretFov = *(float *)&_XMM6;
    }
    else
    {
      LocalClientGlobals->turretFov = (float)((float)(1.0 - LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac) * v5->turretFov) + (float)(LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac * v5->turretFovADS);
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
  LocalClientNum_t v11; 
  const Weapon *ViewmodelWeapon; 
  double Speed; 
  int damageTime; 
  int time; 
  float v_dmg_roll; 
  const shellshock_parms_t *parms; 
  WeaponMovementParams params; 

  if ( !weapMoveState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 711, ASSERT_TYPE_ASSERT, "(weapMoveState)", (const char *)&queryFormat, "weapMoveState") )
    __debugbreak();
  if ( !outViewValues && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 712, ASSERT_TYPE_ASSERT, "(outViewValues)", (const char *)&queryFormat, "outViewValues") )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 713, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  params.ps = &cgameGlob->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v11 = cgameGlob->localClientNum;
  params.weaponMap = CgWeaponMap::ms_instance[localClientNum];
  params.handler = CgHandler::getHandler(v11);
  ViewmodelWeapon = BG_GetViewmodelWeapon(params.weaponMap, params.ps);
  *(__m256i *)&params.weapon.weaponIdx = *(__m256i *)&ViewmodelWeapon->weaponIdx;
  *(_OWORD *)&params.weapon.attachmentVariationIndices[5] = *(_OWORD *)&ViewmodelWeapon->attachmentVariationIndices[5];
  *(_QWORD *)&params.weapon.attachmentVariationIndices[21] = *(_QWORD *)&ViewmodelWeapon->attachmentVariationIndices[21];
  LODWORD(ViewmodelWeapon) = *(_DWORD *)&ViewmodelWeapon->weaponCamo;
  params.updateTime = (float)msec * 0.001;
  params.inputDeltaTime = (float)inputMsec * 0.001;
  *(_DWORD *)&params.weapon.weaponCamo = (_DWORD)ViewmodelWeapon;
  params.serverTime = serverTime;
  Speed = BG_GetSpeed(params.ps, serverTime, params.handler);
  damageTime = cgameGlob->damageTime;
  time = cgameGlob->time;
  params.xySpeed = *(float *)&Speed;
  if ( damageTime )
    params.damageTime = time - damageTime;
  else
    params.damageTime = 0;
  v_dmg_roll = cgameGlob->v_dmg_roll;
  params.damagePitch = cgameGlob->v_dmg_pitch;
  params.damageRoll = v_dmg_roll;
  parms = cgameGlob->shellshock.parms;
  params.shellShockDeltaTime = cgameGlob->shellshock.duration + cgameGlob->shellshock.startTime + params.ps->deltaTime - time;
  if ( parms )
    params.shellShockFadeTime = parms->view.fadeTime;
  else
    params.shellShockFadeTime = 3000;
  params.flags = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_LADDER_AIM) && cgameGlob->playerTeleported )
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
  float v2; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 747, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  AdvancedSwayState::Update(&cgameGlob->vmMotionState, cgameGlob, &cgameGlob->baseGunAngles);
  AdvancedSwayState::GetAngleOffsets(&cgameGlob->vmMotionState, &cgameGlob->playerViewValues.weapMoveAnglesCategorized[15], &cgameGlob->playerViewValues.weapMoveAnglesCategorized[16], &cgameGlob->playerViewValues.weapVmMotionPivotOffset);
  v2 = cgameGlob->playerViewValues.weapMoveAngles.v[0] + cgameGlob->playerViewValues.weapMoveAnglesCategorized[15].v[0];
  cgameGlob->playerViewValues.weapMoveAngles.v[0] = v2;
  cgameGlob->playerViewValues.weapMoveAngles.v[1] = cgameGlob->playerViewValues.weapMoveAnglesCategorized[15].v[1] + cgameGlob->playerViewValues.weapMoveAngles.v[1];
  cgameGlob->playerViewValues.weapMoveAngles.v[2] = cgameGlob->playerViewValues.weapMoveAnglesCategorized[15].v[2] + cgameGlob->playerViewValues.weapMoveAngles.v[2];
  cgameGlob->playerViewValues.weapMoveAngles.v[0] = v2 + cgameGlob->playerViewValues.weapMoveAnglesCategorized[16].v[0];
  cgameGlob->playerViewValues.weapMoveAngles.v[1] = cgameGlob->playerViewValues.weapMoveAnglesCategorized[16].v[1] + cgameGlob->playerViewValues.weapMoveAngles.v[1];
  cgameGlob->playerViewValues.weapMoveAngles.v[2] = cgameGlob->playerViewValues.weapMoveAnglesCategorized[16].v[2] + cgameGlob->playerViewValues.weapMoveAngles.v[2];
}

/*
==============
CG_View_UpdateXCamView
==============
*/
void CG_View_UpdateXCamView(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  XCamValues outValues; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  XCamValues::XCamValues(&outValues);
  if ( XCamData::IsActive(&LocalClientGlobals->xCam) && XCamData::GetValues(&LocalClientGlobals->xCam, &outValues) )
  {
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outValues.origin);
    LocalClientGlobals->refdef.view.axis = outValues.axis;
    AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
    if ( outValues.apertureType )
    {
      if ( outValues.apertureType == XCAM_FOCAL_LENGTH_APERTURE )
      {
        CG_View_UpdateFov(localClientNum, outValues.lens.fov);
        LocalClientGlobals->refdef.xcamOverridesSceneDoF = 1;
        LocalClientGlobals->refdef.view.focalLength = outValues.lens.fov;
        LocalClientGlobals->refdef.dofPhysicalFocusState.fstop = outValues.lens.fl.fStop;
        LocalClientGlobals->refdef.dofPhysicalFocusState.focusDistance = outValues.lens.fl.focalDistance;
        LocalClientGlobals->refdef.dofPhysicalFocusState.cocScale = 1.0;
      }
    }
    else
    {
      CG_View_UpdateFov(localClientNum, outValues.lens.fov);
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
  __int128 v5; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5006, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( this->m_viewKickState.hadCameraInput )
  {
    if ( !hasCameraInput )
    {
      v5 = LODWORD(this->m_viewKickState.viewKickAngles.v[0]);
      *(float *)&v5 = fsqrt((float)(this->m_viewKickState.viewKickAngles.v[0] * this->m_viewKickState.viewKickAngles.v[0]) + (float)(this->m_viewKickState.viewKickAngles.v[1] * this->m_viewKickState.viewKickAngles.v[1]));
      _XMM2 = v5;
      __asm { vminss  xmm3, xmm2, dword ptr [rbx+50h] }
      this->m_viewKickState.viewKickCounterMag = *(float *)&_XMM3;
      return;
    }
  }
  else if ( !hasCameraInput )
  {
    return;
  }
  this->m_viewKickState.viewKickCounterMag = fsqrt((float)(this->m_viewKickState.viewAnglesChange.v[0] * this->m_viewKickState.viewAnglesChange.v[0]) + (float)(this->m_viewKickState.viewAnglesChange.v[1] * this->m_viewKickState.viewAnglesChange.v[1])) + this->m_viewKickState.viewKickCounterMag;
}

/*
==============
CgViewSystem::HasCameraInput
==============
*/
char CgViewSystem::HasCameraInput(CgViewSystem *this, const cg_t *cgameGlob)
{
  const ClActiveClient *Client; 
  int CmdNumber; 
  usercmd_s ucmd; 
  vec2_t StickCartesianCoords; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4974, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)cgameGlob->localClientNum);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  if ( !CL_GetUserCmd(cgameGlob->localClientNum, CmdNumber, &ucmd) )
    return 0;
  if ( CL_Input_IsGamepadEnabled(cgameGlob->localClientNum) )
  {
    StickCartesianCoords = BG_GetStickCartesianCoords(ucmd.yawmove, ucmd.pitchmove);
    if ( (float)((float)(StickCartesianCoords.v[0] * StickCartesianCoords.v[0]) + (float)(StickCartesianCoords.v[1] * StickCartesianCoords.v[1])) < MIN_STICK_DEFLECTION_SQR )
      return 0;
  }
  else if ( (float)ucmd.yawmove == 0.0 && (float)ucmd.pitchmove == 0.0 )
  {
    return 0;
  }
  return 1;
}

/*
==============
CgViewSystem::SetViewValues
==============
*/
void CgViewSystem::SetViewValues(CgViewSystem *this)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int64 m_localClientNum; 
  CgDrawSystem *v6; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v8; 
  float value; 
  float v10; 
  float v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t outOrg; 
  __int64 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 

  v15 = -2i64;
  v18 = v1;
  v17 = v2;
  v16 = v3;
  m_localClientNum = this->m_localClientNum;
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", this->m_localClientNum) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(v13) = CgDrawSystem::ms_allocatedCount;
    LODWORD(v12) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[m_localClientNum] )
  {
    LODWORD(v13) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", v13) )
      __debugbreak();
  }
  v6 = CgDrawSystem::ms_drawSystemArray[m_localClientNum];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 4025, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v8 = DVARVEC3_viewposNow;
  if ( !DVARVEC3_viewposNow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "viewposNow") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v10 = v8->current.vector.v[1];
  v11 = v8->current.vector.v[2];
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( value != outOrg.v[0] || v10 != outOrg.v[1] || v11 != outOrg.v[2] )
    Dvar_SetVec3_Internal(DVARVEC3_viewposNow, outOrg.v[0], outOrg.v[1], outOrg.v[2]);
  if ( value != LocalClientGlobals->refdef.view.axis.m[0].v[0] || v10 != LocalClientGlobals->refdef.view.axis.m[0].v[1] || v11 != LocalClientGlobals->refdef.view.axis.m[0].v[2] )
    Dvar_SetVec3_Internal(DVARVEC3_viewangNow, LocalClientGlobals->refdefViewAngles.v[1], LocalClientGlobals->refdefViewAngles.v[0], 0.0);
  memset(&outOrg, 0, sizeof(outOrg));
  CG_ViewmodelShieldHitsProcess(this->m_localClientNum);
  CG_AddViewWeapon(this->m_localClientNum);
  CG_ViewWeaponCleanUp((const LocalClientNum_t)this->m_localClientNum);
  CG_Heat_UpdateViewmodel(this->m_localClientNum);
  v6->UpdateScissor(v6);
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
  int v14[3]; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5023, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob", -2i64) )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5026, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  p_kickAngles = &cgameGlob->kickAngles;
  if ( !cgameGlob->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  secureInt32_3_aab = cgameGlob->kickAngles.secureInt32_3_aab;
  v14[0] = (((unsigned int)p_kickAngles ^ p_kickAngles->secureInt32_3_aab) * (((unsigned int)p_kickAngles ^ p_kickAngles->secureInt32_3_aab) + 2)) ^ p_kickAngles->data[0];
  v14[1] = p_kickAngles->data[1] ^ ((((_DWORD)p_kickAngles + 4) ^ secureInt32_3_aab) * ((((_DWORD)p_kickAngles + 4) ^ secureInt32_3_aab) + 2));
  v14[2] = ((((_DWORD)p_kickAngles + 8) ^ secureInt32_3_aab) * ((((_DWORD)p_kickAngles + 8) ^ secureInt32_3_aab) + 2)) ^ p_kickAngles->data[2];
  this->m_viewKickState.viewKickAngles.v[1] = *(float *)&v14[1];
  this->m_viewKickState.viewKickAngles.v[2] = *(float *)&v14[2];
  _XMM7 = 0i64;
  __asm { vroundss xmm0, xmm7, xmm1, 1 }
  this->m_viewKickState.viewKickAngles.v[0] = (float)((float)(0.0027777778 * *(float *)v14) - *(float *)&_XMM0) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  this->m_viewKickState.viewKickAngles.v[1] = (float)((float)(0.0027777778 * this->m_viewKickState.viewKickAngles.v[1]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm1, 1 }
  this->m_viewKickState.viewKickAngles.v[2] = (float)((float)(0.0027777778 * this->m_viewKickState.viewKickAngles.v[2]) - *(float *)&_XMM3) * 360.0;
  ClActiveClient_GetCLViewangles(Client, &this->m_viewKickState.viewAngles);
  __asm { vroundss xmm3, xmm7, xmm2, 1 }
  this->m_viewKickState.viewAngles.v[0] = (float)((float)(0.0027777778 * this->m_viewKickState.viewAngles.v[0]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm1, 1 }
  this->m_viewKickState.viewAngles.v[1] = (float)((float)(0.0027777778 * this->m_viewKickState.viewAngles.v[1]) - *(float *)&_XMM3) * 360.0;
  __asm { vroundss xmm3, xmm7, xmm1, 1 }
  this->m_viewKickState.viewAngles.v[2] = (float)((float)(0.0027777778 * this->m_viewKickState.viewAngles.v[2]) - *(float *)&_XMM3) * 360.0;
  AnglesSubtract((const vec2_t *)&this->m_viewKickState.viewAngles, (const vec2_t *)&this->m_viewKickState.prevViewAngles, &this->m_viewKickState.viewAnglesChange);
  memset(v14, 0, sizeof(v14));
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
  bool v8; 
  ClActiveClient *v9; 
  CgWeaponMap *Instance; 
  CgWeaponMap *v11; 
  const Weapon *ViewmodelWeapon; 
  bool v13; 
  float v14; 
  __int128 v15; 
  double ViewKickMaintainFraction; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v35; 
  float v37; 
  float v39; 
  unsigned __int128 v40; 
  unsigned __int128 v44; 
  char v48; 
  float v49; 
  float v50; 
  float v51; 
  bool v52; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v58; 
  float v60; 
  float v61; 
  float v62; 
  char v63; 
  __int128 v64; 
  __int128 v68; 
  float v72; 
  float v73; 
  __int128 viewKickCounterMag_low; 
  float v77; 
  usercmd_s ucmd; 
  vec3_t clViewangles; 

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
    _XMM11 = 0i64;
    if ( CL_GetUserCmd(LocalClientGlobals->localClientNum, CmdNumber, &ucmd) )
    {
      if ( CL_Input_IsGamepadEnabled(LocalClientGlobals->localClientNum) )
      {
        *(vec2_t *)clViewangles.v = BG_GetStickCartesianCoords(ucmd.yawmove, ucmd.pitchmove);
        if ( (float)((float)(clViewangles.v[0] * clViewangles.v[0]) + (float)(clViewangles.v[1] * clViewangles.v[1])) >= MIN_STICK_DEFLECTION_SQR )
        {
          v8 = 1;
LABEL_17:
          CgViewSystem::UpdateCurrentFrameKickValues(this, LocalClientGlobals);
          v9 = ClActiveClient::GetClient((const LocalClientNum_t)this->m_localClientNum);
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5071, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
            __debugbreak();
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5074, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          v11 = CgWeaponMap::GetInstance((const LocalClientNum_t)this->m_localClientNum);
          ViewmodelWeapon = BG_GetViewmodelWeapon(v11, &LocalClientGlobals->predictedPlayerState);
          v13 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
          v14 = (float)(this->m_viewKickState.viewKickAngles.v[0] * this->m_viewKickState.viewKickAngles.v[0]) + (float)(this->m_viewKickState.viewKickAngles.v[1] * this->m_viewKickState.viewKickAngles.v[1]);
          if ( LocalClientGlobals->predictedPlayerState.weapState[0].weaponState != 16 )
          {
            if ( (float)((float)(this->m_viewKickState.prevViewKickAngles.v[0] * this->m_viewKickState.prevViewKickAngles.v[0]) + (float)(this->m_viewKickState.prevViewKickAngles.v[1] * this->m_viewKickState.prevViewKickAngles.v[1])) > v14 && this->m_viewKickState.currentState[0] == 1 )
            {
              v77 = fsqrt((float)(this->m_viewKickState.viewKickAngles.v[2] * this->m_viewKickState.viewKickAngles.v[2]) + v14);
              if ( v77 <= 0.001 )
                goto LABEL_41;
              ViewKickMaintainFraction = BG_GetViewKickMaintainFraction(Instance, &LocalClientGlobals->predictedPlayerState, ViewmodelWeapon, v13);
              v19 = this->m_viewKickState.viewKickAngles.v[0];
              v20 = v19 * *(float *)&ViewKickMaintainFraction;
              v21 = this->m_viewKickState.viewKickAngles.v[1];
              v22 = v21 * *(float *)&ViewKickMaintainFraction;
              v23 = this->m_viewKickState.viewKickAngles.v[2];
              v24 = v23 * *(float *)&ViewKickMaintainFraction;
              v25 = LODWORD(v21);
              *(float *)&v25 = fsqrt((float)((float)(v21 * v21) + (float)(v19 * v19)) + (float)(v23 * v23));
              _XMM3 = v25;
              __asm
              {
                vcmpless xmm0, xmm3, cs:__real@80000000
                vblendvps xmm1, xmm3, xmm2, xmm0
              }
              clViewangles.v[0] = *(float *)&_XMM1;
              v29 = v19 * (float)(1.0 / *(float *)&_XMM1);
              *(float *)&_XMM3 = v21 * (float)(1.0 / *(float *)&_XMM1);
              v30 = v23 * (float)(1.0 / *(float *)&_XMM1);
              *(float *)&_XMM1 = this->m_viewKickState.viewKickCounterMag;
              v31 = (float)(*(float *)&_XMM1 * *(float *)&_XMM3) + v22;
              v32 = (float)(*(float *)&_XMM1 * v30) + v24;
              _XMM7 = 0i64;
              __asm { vroundss xmm0, xmm7, xmm1, 1 }
              v35 = (float)((float)((float)((float)(*(float *)&_XMM1 * v29) + v20) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
              __asm { vroundss xmm3, xmm7, xmm1, 1 }
              v37 = (float)((float)(v31 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
              __asm { vroundss xmm3, xmm7, xmm1, 1 }
              v39 = (float)(v32 * 0.0027777778) - *(float *)&_XMM3;
              v40 = LODWORD(this->m_viewKickState.viewKickAngles.v[0]) & (unsigned __int128)(unsigned int)_xmm;
              if ( COERCE_FLOAT(LODWORD(v35) & _xmm) > *(float *)&v40 )
              {
                _XMM1 = v40 ^ (unsigned int)_xmm;
                __asm
                {
                  vcmpless xmm0, xmm11, xmm13
                  vblendvps xmm1, xmm1, xmm2, xmm0
                }
                v35 = *(float *)&_XMM1;
                clViewangles.v[0] = *(float *)&_XMM1;
              }
              v44 = LODWORD(this->m_viewKickState.viewKickAngles.v[1]) & (unsigned __int128)(unsigned int)_xmm;
              if ( COERCE_FLOAT(LODWORD(v37) & _xmm) > *(float *)&v44 )
              {
                _XMM1 = v44 ^ (unsigned int)_xmm;
                __asm
                {
                  vcmpless xmm0, xmm11, xmm6
                  vblendvps xmm1, xmm1, xmm2, xmm0
                }
                v37 = *(float *)&_XMM1;
                clViewangles.v[0] = *(float *)&_XMM1;
              }
              if ( COERCE_FLOAT(LODWORD(v35) & _xmm) <= 0.000001 && COERCE_FLOAT(LODWORD(v37) & _xmm) <= 0.000001 )
              {
LABEL_41:
                this->m_viewKickState.currentState[0] = 0;
                this->m_viewKickState.idleStartTime = LocalClientGlobals->time;
              }
              else
              {
                this->m_viewKickState.clientViewCorrectionAngles.v[0] = v35;
                this->m_viewKickState.clientViewCorrectionAngles.v[1] = v37;
                this->m_viewKickState.clientViewCorrectionAngles.v[2] = v39 * 360.0;
                this->m_viewKickState.clientViewCorrectionMag = fsqrt((float)((float)(v37 * v37) + (float)(v35 * v35)) + (float)((float)(v39 * v39) * 129600.0));
                this->m_viewKickState.kickMagFiringEnd = v77;
                this->m_viewKickState.currentState[0] = 2;
                this->m_viewKickState.returnToCenterRatio = 0.0;
              }
            }
            goto LABEL_42;
          }
          this->m_viewKickState.currentState[0] = 1;
          if ( BG_DisableInputDrivenViewReturnDampening(Instance, &LocalClientGlobals->predictedPlayerState, ViewmodelWeapon, v13) )
          {
            this->m_viewKickState.viewKickCounterMag = 0.0;
            goto LABEL_42;
          }
          if ( this->m_viewKickState.hadCameraInput )
          {
            if ( !v8 )
            {
              v15 = LODWORD(this->m_viewKickState.viewKickAngles.v[0]);
              *(float *)&v15 = fsqrt((float)(this->m_viewKickState.viewKickAngles.v[0] * this->m_viewKickState.viewKickAngles.v[0]) + (float)(this->m_viewKickState.viewKickAngles.v[1] * this->m_viewKickState.viewKickAngles.v[1]));
              _XMM0 = v15;
              __asm { vminss  xmm0, xmm0, dword ptr [rbx+50h] }
              this->m_viewKickState.viewKickCounterMag = *(float *)&_XMM0;
LABEL_42:
              v48 = this->m_viewKickState.currentState[0];
              if ( v48 == 2 )
              {
                if ( this->m_viewKickState.kickMagFiringEnd <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5163, ASSERT_TYPE_ASSERT, "(m_viewKickState.kickMagFiringEnd > 0)", (const char *)&queryFormat, "m_viewKickState.kickMagFiringEnd > 0") )
                  __debugbreak();
                v49 = this->m_viewKickState.viewKickAngles.v[1];
                v50 = this->m_viewKickState.viewKickAngles.v[0];
                v51 = this->m_viewKickState.viewKickAngles.v[2];
                v52 = (float)((float)((float)(v50 * v50) + (float)(v49 * v49)) + (float)(v51 * v51)) > 0.000001;
                v54 = LODWORD(v50);
                *(float *)&v54 = v50 - this->m_viewKickState.prevViewKickAngles.v[0];
                v53 = v54;
                v56 = LODWORD(v49);
                *(float *)&v56 = v49 - this->m_viewKickState.prevViewKickAngles.v[1];
                v55 = v56;
                *(float *)&_XMM3 = fsqrt((float)((float)(*(float *)&v56 * *(float *)&v56) + (float)(*(float *)&v53 * *(float *)&v53)) + (float)((float)(v51 - this->m_viewKickState.prevViewKickAngles.v[2]) * (float)(v51 - this->m_viewKickState.prevViewKickAngles.v[2]))) / this->m_viewKickState.kickMagFiringEnd;
                if ( !v52 )
                {
                  v58 = 0i64;
                  *(float *)&v58 = (float)LocalClientGlobals->frametime / CATCH_UP_TIME;
                  _XMM1 = v58;
                  __asm { vminss  xmm3, xmm1, xmm10 }
                }
                v60 = *(float *)&_XMM3 * this->m_viewKickState.clientViewCorrectionAngles.v[0];
                v61 = *(float *)&_XMM3 * this->m_viewKickState.clientViewCorrectionAngles.v[1];
                v62 = *(float *)&_XMM3 * this->m_viewKickState.clientViewCorrectionAngles.v[2];
                v63 = 0;
                v64 = v53 & (unsigned int)_xmm;
                if ( *(float *)&v64 > 0.000001 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM3 * this->m_viewKickState.clientViewCorrectionAngles.v[0]) & _xmm) > *(float *)&v64 )
                {
                  _XMM1 = v64 ^ (unsigned int)_xmm;
                  __asm
                  {
                    vcmpless xmm0, xmm11, xmm8
                    vblendvps xmm1, xmm1, xmm6, xmm0
                  }
                  v63 = 1;
                  v60 = *(float *)&_XMM1;
                  clViewangles.v[0] = *(float *)&_XMM1;
                }
                v68 = v55 & (unsigned int)_xmm;
                if ( *(float *)&v68 > 0.000001 && COERCE_FLOAT(LODWORD(v61) & _xmm) > *(float *)&v68 )
                {
                  _XMM1 = v68 ^ (unsigned int)_xmm;
                  __asm
                  {
                    vcmpless xmm0, xmm11, xmm7
                    vblendvps xmm1, xmm1, xmm4, xmm0
                  }
                  v63 = 1;
                  v61 = *(float *)&_XMM1;
                  clViewangles.v[0] = *(float *)&_XMM1;
                }
                v73 = fsqrt((float)((float)(v60 * v60) + (float)(v61 * v61)) + (float)(v62 * v62));
                v72 = v73;
                if ( v63 )
                {
                  if ( this->m_viewKickState.clientViewCorrectionMag <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.cpp", 5202, ASSERT_TYPE_ASSERT, "(m_viewKickState.clientViewCorrectionMag > 0.0f)", (const char *)&queryFormat, "m_viewKickState.clientViewCorrectionMag > 0.0f") )
                    __debugbreak();
                  *(float *)&_XMM3 = v73 / this->m_viewKickState.clientViewCorrectionMag;
                }
                viewKickCounterMag_low = LODWORD(this->m_viewKickState.viewKickCounterMag);
                *(float *)&viewKickCounterMag_low = this->m_viewKickState.viewKickCounterMag - v72;
                _XMM1 = viewKickCounterMag_low;
                __asm { vmaxss  xmm1, xmm1, xmm11 }
                this->m_viewKickState.viewKickCounterMag = *(float *)&_XMM1;
                this->m_viewKickState.returnToCenterRatio = *(float *)&_XMM3 + this->m_viewKickState.returnToCenterRatio;
                ClActiveClient_GetCLViewangles(v9, &clViewangles);
                clViewangles.v[0] = v60 + clViewangles.v[0];
                clViewangles.v[1] = v61 + clViewangles.v[1];
                clViewangles.v[2] = v62 + clViewangles.v[2];
                ClActiveClient_SetCLViewangles(v9, &clViewangles);
                outCorrectionThisFrame->v[0] = v60;
                outCorrectionThisFrame->v[1] = v61;
                outCorrectionThisFrame->v[2] = v62;
                if ( this->m_viewKickState.returnToCenterRatio >= 1.0 )
                {
                  this->m_viewKickState.currentState[0] = 0;
                  this->m_viewKickState.idleStartTime = LocalClientGlobals->time;
                }
                memset(&clViewangles, 0, sizeof(clViewangles));
              }
              else if ( !v48 && LocalClientGlobals->time - this->m_viewKickState.idleStartTime >= COUNTER_FORCE_RESET_TIME_MS )
              {
                this->m_viewKickState.viewKickCounterMag = 0.0;
              }
              this->m_viewKickState.prevViewKickAngles.v[0] = this->m_viewKickState.viewKickAngles.v[0];
              this->m_viewKickState.prevViewKickAngles.v[1] = this->m_viewKickState.viewKickAngles.v[1];
              this->m_viewKickState.prevViewKickAngles.v[2] = this->m_viewKickState.viewKickAngles.v[2];
              this->m_viewKickState.prevViewAngles.v[0] = this->m_viewKickState.viewAngles.v[0];
              this->m_viewKickState.prevViewAngles.v[1] = this->m_viewKickState.viewAngles.v[1];
              this->m_viewKickState.prevViewAngles.v[2] = this->m_viewKickState.viewAngles.v[2];
              this->m_viewKickState.hadCameraInput = v8;
              return;
            }
          }
          else if ( !v8 )
          {
            goto LABEL_42;
          }
          this->m_viewKickState.viewKickCounterMag = fsqrt((float)(this->m_viewKickState.viewAnglesChange.v[0] * this->m_viewKickState.viewAnglesChange.v[0]) + (float)(this->m_viewKickState.viewAnglesChange.v[1] * this->m_viewKickState.viewAnglesChange.v[1])) + this->m_viewKickState.viewKickCounterMag;
          goto LABEL_42;
        }
      }
      else if ( (float)ucmd.yawmove != 0.0 || (float)ucmd.pitchmove != 0.0 )
      {
        v8 = 1;
        goto LABEL_17;
      }
    }
    v8 = 0;
    goto LABEL_17;
  }
}

