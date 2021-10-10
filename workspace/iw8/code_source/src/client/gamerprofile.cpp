/*
==============
GamerProfile_SetIsMPNew
==============
*/

void __fastcall GamerProfile_SetIsMPNew(const int controllerIndex, bool isMPNew)
{
  ?GamerProfile_SetIsMPNew@@YAXH_N@Z(controllerIndex, isMPNew);
}

/*
==============
GamerProfile_GetHorizontalSensitivityIndex
==============
*/

int __fastcall GamerProfile_GetHorizontalSensitivityIndex(int controllerIndex)
{
  return ?GamerProfile_GetHorizontalSensitivityIndex@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetYoloMode
==============
*/

bool __fastcall GamerProfile_GetYoloMode(int controllerIndex)
{
  return ?GamerProfile_GetYoloMode@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetToggleADSEnabledGamepad
==============
*/

bool __fastcall GamerProfile_GetToggleADSEnabledGamepad(int controllerIndex)
{
  return ?GamerProfile_GetToggleADSEnabledGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetUseNumbersForCompassCardinalDirText
==============
*/

int __fastcall GamerProfile_GetUseNumbersForCompassCardinalDirText(const int controllerIndex)
{
  return ?GamerProfile_GetUseNumbersForCompassCardinalDirText@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetVehicleCameraAutoRecenterEnabledKeyboard
==============
*/

void __fastcall GamerProfile_SetVehicleCameraAutoRecenterEnabledKeyboard(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetVehicleCameraAutoRecenterEnabledKeyboard@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetDDLState
==============
*/

void __fastcall GamerProfile_GetDDLState(DDLState *state, int controllerIndex, ProfileDDLTypes ddlType)
{
  ?GamerProfile_GetDDLState@@YAXPEAUDDLState@@HW4ProfileDDLTypes@@@Z(state, controllerIndex, ddlType);
}

/*
==============
GamerProfile_GetDisplayTelemetryGpuTime
==============
*/

bool __fastcall GamerProfile_GetDisplayTelemetryGpuTime(int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryGpuTime@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_IsEquipToggleEnabled
==============
*/

bool __fastcall GamerProfile_IsEquipToggleEnabled(const int controllerIndex)
{
  return ?GamerProfile_IsEquipToggleEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetYoloState
==============
*/

void __fastcall GamerProfile_SetYoloState(int controllerIndex, int yoloState)
{
  ?GamerProfile_SetYoloState@@YAXHH@Z(controllerIndex, yoloState);
}

/*
==============
GamerProfile_GetAutoMantleAirborne
==============
*/

bool __fastcall GamerProfile_GetAutoMantleAirborne(const int controllerIndex)
{
  return ?GamerProfile_GetAutoMantleAirborne@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetVerticalSensitivity
==============
*/

void __fastcall GamerProfile_SetVerticalSensitivity(int controllerIndex, int sensitivityIndex)
{
  ?GamerProfile_SetVerticalSensitivity@@YAXHH@Z(controllerIndex, sensitivityIndex);
}

/*
==============
GamerProfile_SetStanceUpJump
==============
*/

void __fastcall GamerProfile_SetStanceUpJump(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetStanceUpJump@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_IsFacebookEnabled
==============
*/

bool __fastcall GamerProfile_IsFacebookEnabled(int controllerIndex)
{
  return ?GamerProfile_IsFacebookEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAimAssistType
==============
*/

int __fastcall GamerProfile_GetAimAssistType(int controllerIndex)
{
  return ?GamerProfile_GetAimAssistType@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateProfileWithoutSaving
==============
*/

void __fastcall GamerProfile_UpdateProfileWithoutSaving(int controllerIndex)
{
  ?GamerProfile_UpdateProfileWithoutSaving@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_ExecControllerBindings_f
==============
*/

void GamerProfile_ExecControllerBindings_f(void)
{
  ?GamerProfile_ExecControllerBindings_f@@YAXXZ();
}

/*
==============
GamerProfile_SetData
==============
*/

void __fastcall GamerProfile_SetData(const int controllerIndex, int dataIndex, GamerProfileData *data)
{
  ?GamerProfile_SetData@@YAXHHUGamerProfileData@@@Z(controllerIndex, dataIndex, data);
}

/*
==============
GamerProfile_GetDDLContext
==============
*/

DDLContext *__fastcall GamerProfile_GetDDLContext(int controllerIndex, ProfileDDLTypes ddlType)
{
  return ?GamerProfile_GetDDLContext@@YAPEAUDDLContext@@HW4ProfileDDLTypes@@@Z(controllerIndex, ddlType);
}

/*
==============
GamerProfile_SetUseNumbersForCompassCardinalDirText
==============
*/

void __fastcall GamerProfile_SetUseNumbersForCompassCardinalDirText(const int controllerIndex, bool useNumbers)
{
  ?GamerProfile_SetUseNumbersForCompassCardinalDirText@@YAXH_N@Z(controllerIndex, useNumbers);
}

/*
==============
GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_ToggleScoreboardEnabled
==============
*/

bool __fastcall GamerProfile_ToggleScoreboardEnabled(const int controllerIndex)
{
  return ?GamerProfile_ToggleScoreboardEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_OptionsMenuDvarsFinish
==============
*/

void __fastcall GamerProfile_OptionsMenuDvarsFinish(int controllerIndex)
{
  ?GamerProfile_OptionsMenuDvarsFinish@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_RumbleToggle
==============
*/

void __fastcall GamerProfile_RumbleToggle(int controllerIndex)
{
  ?GamerProfile_RumbleToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoAim
==============
*/

void __fastcall GamerProfile_SetAutoAim(int controllerIndex, bool value)
{
  ?GamerProfile_SetAutoAim@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_SetPercentCompleteMP
==============
*/

void __fastcall GamerProfile_SetPercentCompleteMP(int controllerIndex, int percent)
{
  ?GamerProfile_SetPercentCompleteMP@@YAXHH@Z(controllerIndex, percent);
}

/*
==============
GamerProfile_SetVoiceMuteStrategy
==============
*/

void __fastcall GamerProfile_SetVoiceMuteStrategy(const int controllerIndex, int voiceMuteStrategy)
{
  ?GamerProfile_SetVoiceMuteStrategy@@YAXHH@Z(controllerIndex, voiceMuteStrategy);
}

/*
==============
GamerProfile_CheckBBPrintInitialConfig
==============
*/

void __fastcall GamerProfile_CheckBBPrintInitialConfig(const LocalClientNum_t localClientNum)
{
  ?GamerProfile_CheckBBPrintInitialConfig@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
GamerProfile_SetInvertedVerticalLookGamepad
==============
*/

void __fastcall GamerProfile_SetInvertedVerticalLookGamepad(const int controllerIndex, bool inverted)
{
  ?GamerProfile_SetInvertedVerticalLookGamepad@@YAXH_N@Z(controllerIndex, inverted);
}

/*
==============
GamerProfile_SetTextChatEnabled
==============
*/

void __fastcall GamerProfile_SetTextChatEnabled(int controllerIndex, bool value)
{
  ?GamerProfile_SetTextChatEnabled@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_GetWeaponSwitchWrapAround
==============
*/

bool __fastcall GamerProfile_GetWeaponSwitchWrapAround(const int controllerIndex)
{
  return ?GamerProfile_GetWeaponSwitchWrapAround@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMouseFilter
==============
*/

void __fastcall GamerProfile_SetMouseFilter(const int controllerIndex, float filter)
{
  ?GamerProfile_SetMouseFilter@@YAXHM@Z(controllerIndex, filter);
}

/*
==============
GamerProfile_AwaitingDelete
==============
*/

bool __fastcall GamerProfile_AwaitingDelete(int controllerIndex)
{
  return ?GamerProfile_AwaitingDelete@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoMantleAirborne
==============
*/

void __fastcall GamerProfile_SetAutoMantleAirborne(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetAutoMantleAirborne@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetDDLDef
==============
*/

const DDLDef *__fastcall GamerProfile_GetDDLDef(int controllerIndex, ProfileDDLTypes ddlType)
{
  return ?GamerProfile_GetDDLDef@@YAPEBUDDLDef@@HW4ProfileDDLTypes@@@Z(controllerIndex, ddlType);
}

/*
==============
GamerProfile_GetGamepadUseReloadProfile
==============
*/

unsigned __int8 __fastcall GamerProfile_GetGamepadUseReloadProfile(const int controllerIndex)
{
  return ?GamerProfile_GetGamepadUseReloadProfile@@YAEH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMouseAdsUseMonitorDistance
==============
*/

void __fastcall GamerProfile_SetMouseAdsUseMonitorDistance(int controllerIndex, bool useAdsMonitor)
{
  ?GamerProfile_SetMouseAdsUseMonitorDistance@@YAXH_N@Z(controllerIndex, useAdsMonitor);
}

/*
==============
GamerProfile_ToggleQuickInventoryEnabled
==============
*/

bool __fastcall GamerProfile_ToggleQuickInventoryEnabled(const int controllerIndex)
{
  return ?GamerProfile_ToggleQuickInventoryEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoWeaponSwitchGamepad
==============
*/

void __fastcall GamerProfile_SetAutoWeaponSwitchGamepad(const int controllerIndex, bool autoWeaponSwitch)
{
  ?GamerProfile_SetAutoWeaponSwitchGamepad@@YAXH_N@Z(controllerIndex, autoWeaponSwitch);
}

/*
==============
GamerProfile_SetSpecialistMode
==============
*/

void __fastcall GamerProfile_SetSpecialistMode(int controllerIndex, bool specialistMode)
{
  ?GamerProfile_SetSpecialistMode@@YAXH_N@Z(controllerIndex, specialistMode);
}

/*
==============
GamerProfile_SetAutoSprintKBM
==============
*/

void __fastcall GamerProfile_SetAutoSprintKBM(const int controllerIndex, AutoSprintOption_t autoSprintEnabledKBM)
{
  ?GamerProfile_SetAutoSprintKBM@@YAXHW4AutoSprintOption_t@@@Z(controllerIndex, autoSprintEnabledKBM);
}

/*
==============
GamerProfile_GetDataMinValueByName
==============
*/

double __fastcall GamerProfile_GetDataMinValueByName(const int controllerIndex, const char *settingName)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetDataMinValueByName@@YAMHPEBD@Z(controllerIndex, settingName);
  return result;
}

/*
==============
GamerProfile_GetDisplayTelemetryFPS
==============
*/

bool __fastcall GamerProfile_GetDisplayTelemetryFPS(int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryFPS@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateSystemDvars
==============
*/

void GamerProfile_UpdateSystemDvars(void)
{
  ?GamerProfile_UpdateSystemDvars@@YAXXZ();
}

/*
==============
GamerProfile_SetIsCPNew
==============
*/

void __fastcall GamerProfile_SetIsCPNew(const int controllerIndex, bool isCPNew)
{
  ?GamerProfile_SetIsCPNew@@YAXH_N@Z(controllerIndex, isCPNew);
}

/*
==============
GamerProfile_GetIsCPNew
==============
*/

bool __fastcall GamerProfile_GetIsCPNew(const int controllerIndex)
{
  return ?GamerProfile_GetIsCPNew@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMouseAccel
==============
*/

void __fastcall GamerProfile_SetMouseAccel(const int controllerIndex, float mouseAccel)
{
  ?GamerProfile_SetMouseAccel@@YAXHM@Z(controllerIndex, mouseAccel);
}

/*
==============
GamerProfile_SetWeaponSwitchWrapAround
==============
*/

void __fastcall GamerProfile_SetWeaponSwitchWrapAround(const int controllerIndex, bool weaponSwitchWrapAround)
{
  ?GamerProfile_SetWeaponSwitchWrapAround@@YAXH_N@Z(controllerIndex, weaponSwitchWrapAround);
}

/*
==============
GamerProfile_GetPlaylistNum
==============
*/

int __fastcall GamerProfile_GetPlaylistNum(int controllerIndex)
{
  return ?GamerProfile_GetPlaylistNum@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMouseAccel
==============
*/

double __fastcall GamerProfile_GetMouseAccel(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetMouseAccel@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_SetDisplayTelemetryPacketLoss
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryPacketLoss(const int controllerIndex, int enabled)
{
  ?GamerProfile_SetDisplayTelemetryPacketLoss@@YAXHH@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetWarTrackPassengerEnable
==============
*/

void __fastcall GamerProfile_SetWarTrackPassengerEnable(const int controllerIndex, bool warTrackPassengerEnable)
{
  ?GamerProfile_SetWarTrackPassengerEnable@@YAXH_N@Z(controllerIndex, warTrackPassengerEnable);
}

/*
==============
GamerProfile_GetWeaponSwitchCancelDelay
==============
*/

int __fastcall GamerProfile_GetWeaponSwitchCancelDelay(const int controllerIndex)
{
  return ?GamerProfile_GetWeaponSwitchCancelDelay@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetButtonsBRConfig
==============
*/

const char *__fastcall GamerProfile_GetButtonsBRConfig(int controllerIndex)
{
  return ?GamerProfile_GetButtonsBRConfig@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetCurrentButtonLayout
==============
*/

const char *__fastcall GamerProfile_GetCurrentButtonLayout(const int controllerIndex)
{
  return ?GamerProfile_GetCurrentButtonLayout@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAlwaysBlockClanInvites
==============
*/

void __fastcall GamerProfile_SetAlwaysBlockClanInvites(int controllerIndex, bool block)
{
  ?GamerProfile_SetAlwaysBlockClanInvites@@YAXH_N@Z(controllerIndex, block);
}

/*
==============
GamerProfile_SetGamepadUseReloadProfile
==============
*/

void __fastcall GamerProfile_SetGamepadUseReloadProfile(const int controllerIndex, unsigned __int8 newUseReloadProfile)
{
  ?GamerProfile_SetGamepadUseReloadProfile@@YAXHE@Z(controllerIndex, newUseReloadProfile);
}

/*
==============
GamerProfile_GetMountButtonKBM
==============
*/

int __fastcall GamerProfile_GetMountButtonKBM(const int controllerIndex)
{
  return ?GamerProfile_GetMountButtonKBM@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetPlayerIntelIsFound
==============
*/

bool __fastcall GamerProfile_GetPlayerIntelIsFound(int controllerIndex, int intelNum)
{
  return ?GamerProfile_GetPlayerIntelIsFound@@YA_NHH@Z(controllerIndex, intelNum);
}

/*
==============
GamerProfile_UpdateLootCardDetailDvar_f
==============
*/

void GamerProfile_UpdateLootCardDetailDvar_f(void)
{
  ?GamerProfile_UpdateLootCardDetailDvar_f@@YAXXZ();
}

/*
==============
GamerProfile_MPVoiceToggle
==============
*/

void __fastcall GamerProfile_MPVoiceToggle(int controllerIndex)
{
  ?GamerProfile_MPVoiceToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDataByName
==============
*/

void __fastcall GamerProfile_SetDataByName(const int controllerIndex, const char *settingName, const float settingValue)
{
  ?GamerProfile_SetDataByName@@YAXHPEBDM@Z(controllerIndex, settingName, settingValue);
}

/*
==============
GamerProfile_SetDisplayTelemetryGpuTime
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryGpuTime(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayTelemetryGpuTime@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier
==============
*/

double __fastcall GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_GetMountButton
==============
*/

int __fastcall GamerProfile_GetMountButton(const int controllerIndex)
{
  return ?GamerProfile_GetMountButton@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_HoldGrenadeEnabled
==============
*/

bool __fastcall GamerProfile_HoldGrenadeEnabled(const int controllerIndex)
{
  return ?GamerProfile_HoldGrenadeEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMouseSmoothing
==============
*/

void __fastcall GamerProfile_SetMouseSmoothing(const int controllerIndex, bool smoothing)
{
  ?GamerProfile_SetMouseSmoothing@@YAXH_N@Z(controllerIndex, smoothing);
}

/*
==============
GamerProfile_GetAutoForwardInputSequenceEnable
==============
*/

bool __fastcall GamerProfile_GetAutoForwardInputSequenceEnable(const int controllerIndex)
{
  return ?GamerProfile_GetAutoForwardInputSequenceEnable@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateSafeareaDvars_f
==============
*/

void GamerProfile_UpdateSafeareaDvars_f(void)
{
  ?GamerProfile_UpdateSafeareaDvars_f@@YAXXZ();
}

/*
==============
GamerProfile_GetDataIndexByName
==============
*/

int __fastcall GamerProfile_GetDataIndexByName(const char *settingName)
{
  return ?GamerProfile_GetDataIndexByName@@YAHPEBD@Z(settingName);
}

/*
==============
GamerProfile_LogOutProfile
==============
*/

void __fastcall GamerProfile_LogOutProfile(int controllerIndex)
{
  ?GamerProfile_LogOutProfile@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetTapToSlideEnabledGamepad
==============
*/

bool __fastcall GamerProfile_GetTapToSlideEnabledGamepad(int controllerIndex)
{
  return ?GamerProfile_GetTapToSlideEnabledGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMountPullAwayDelayKBM
==============
*/

void __fastcall GamerProfile_SetMountPullAwayDelayKBM(const int controllerIndex, int delay)
{
  ?GamerProfile_SetMountPullAwayDelayKBM@@YAXHH@Z(controllerIndex, delay);
}

/*
==============
GamerProfile_GetMouseSmoothing
==============
*/

bool __fastcall GamerProfile_GetMouseSmoothing(const int controllerIndex)
{
  return ?GamerProfile_GetMouseSmoothing@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetSpecialistMode
==============
*/

bool __fastcall GamerProfile_GetSpecialistMode(int controllerIndex)
{
  return ?GamerProfile_GetSpecialistMode@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDisplayTelemetryCpuTime
==============
*/

bool __fastcall GamerProfile_GetDisplayTelemetryCpuTime(int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryCpuTime@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetHoldSprint
==============
*/

void __fastcall GamerProfile_SetHoldSprint(const int controllerIndex, bool value)
{
  ?GamerProfile_SetHoldSprint@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_SetDefaultJuggMusicEnabled
==============
*/

void __fastcall GamerProfile_SetDefaultJuggMusicEnabled(const int controllerIndex, bool defaultJuggMusicEnabled)
{
  ?GamerProfile_SetDefaultJuggMusicEnabled@@YAXH_N@Z(controllerIndex, defaultJuggMusicEnabled);
}

/*
==============
GamerProfile_SetIsSPNew
==============
*/

void __fastcall GamerProfile_SetIsSPNew(const int controllerIndex, bool isSPNew)
{
  ?GamerProfile_SetIsSPNew@@YAXH_N@Z(controllerIndex, isSPNew);
}

/*
==============
GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_SetAimResponseCurveType
==============
*/

void __fastcall GamerProfile_SetAimResponseCurveType(const int controllerIndex, int aimResponseCurveType)
{
  ?GamerProfile_SetAimResponseCurveType@@YAXHH@Z(controllerIndex, aimResponseCurveType);
}

/*
==============
GamerProfile_SetAimAssistFovScale
==============
*/

void __fastcall GamerProfile_SetAimAssistFovScale(const int controllerIndex, bool aimAssistFovScale)
{
  ?GamerProfile_SetAimAssistFovScale@@YAXH_N@Z(controllerIndex, aimAssistFovScale);
}

/*
==============
GamerProfile_UnregisterCommands
==============
*/

void GamerProfile_UnregisterCommands(void)
{
  ?GamerProfile_UnregisterCommands@@YAXXZ();
}

/*
==============
GamerProfile_SetHoldGrenade
==============
*/

void __fastcall GamerProfile_SetHoldGrenade(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetHoldGrenade@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetVerticalSensitivityIndex
==============
*/

int __fastcall GamerProfile_GetVerticalSensitivityIndex(int controllerIndex)
{
  return ?GamerProfile_GetVerticalSensitivityIndex@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_LeanToggle
==============
*/

void __fastcall GamerProfile_LeanToggle(int controllerIndex)
{
  ?GamerProfile_LeanToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetIsUsingAnonymization
==============
*/

bool __fastcall GamerProfile_GetIsUsingAnonymization(const int controllerIndex)
{
  return ?GamerProfile_GetIsUsingAnonymization@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateProfileFromStats
==============
*/

void __fastcall GamerProfile_UpdateProfileFromStats(const int controllerIndex, StatsSource source)
{
  ?GamerProfile_UpdateProfileFromStats@@YAXHW4StatsSource@@@Z(controllerIndex, source);
}

/*
==============
GamerProfile_UpdateSystemVarsFromProfile
==============
*/

void __fastcall GamerProfile_UpdateSystemVarsFromProfile(int controllerIndex)
{
  ?GamerProfile_UpdateSystemVarsFromProfile@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoSprintGamepad
==============
*/

void __fastcall GamerProfile_SetAutoSprintGamepad(const int controllerIndex, AutoSprintOption_t autoSprintGamepad)
{
  ?GamerProfile_SetAutoSprintGamepad@@YAXHW4AutoSprintOption_t@@@Z(controllerIndex, autoSprintGamepad);
}

/*
==============
GamerProfile_SetPlayerIntelFound
==============
*/

void __fastcall GamerProfile_SetPlayerIntelFound(int controllerIndex, int intelNum)
{
  ?GamerProfile_SetPlayerIntelFound@@YAXHH@Z(controllerIndex, intelNum);
}

/*
==============
GamerProfile_GetShowVoiceChatMuted
==============
*/

bool __fastcall GamerProfile_GetShowVoiceChatMuted(int controllerIndex)
{
  return ?GamerProfile_GetShowVoiceChatMuted@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetColorBlindTargets
==============
*/

void __fastcall GamerProfile_SetColorBlindTargets(int controllerIndex, bool world, bool ui)
{
  ?GamerProfile_SetColorBlindTargets@@YAXH_N0@Z(controllerIndex, world, ui);
}

/*
==============
GamerProfile_IsZoomBindedToCmdType
==============
*/

bool __fastcall GamerProfile_IsZoomBindedToCmdType(const int controllerIndex, ZoomHybridCommandType_t zoomHybridCmdType)
{
  return ?GamerProfile_IsZoomBindedToCmdType@@YA_NHW4ZoomHybridCommandType_t@@@Z(controllerIndex, zoomHybridCmdType);
}

/*
==============
GamerProfile_GetAimAssistFovScale
==============
*/

bool __fastcall GamerProfile_GetAimAssistFovScale(const int controllerIndex)
{
  return ?GamerProfile_GetAimAssistFovScale@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMinimapStyle
==============
*/

void __fastcall GamerProfile_SetMinimapStyle(const int controllerIndex, int style)
{
  ?GamerProfile_SetMinimapStyle@@YAXHH@Z(controllerIndex, style);
}

/*
==============
GamerProfile_SetMountPullAwayEnabledKBM
==============
*/

void __fastcall GamerProfile_SetMountPullAwayEnabledKBM(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetMountPullAwayEnabledKBM@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_MPWeaponUnlock
==============
*/

void __fastcall GamerProfile_MPWeaponUnlock(int controllerIndex, int index, bool unlocked)
{
  ?GamerProfile_MPWeaponUnlock@@YAXHH_N@Z(controllerIndex, index, unlocked);
}

/*
==============
GamerProfile_SetToggleQuickInventory
==============
*/

void __fastcall GamerProfile_SetToggleQuickInventory(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleQuickInventory@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetArmorPlateApplyAllKBM
==============
*/

bool __fastcall GamerProfile_GetArmorPlateApplyAllKBM(const int controllerIndex)
{
  return ?GamerProfile_GetArmorPlateApplyAllKBM@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAutoSprintKBM
==============
*/

int __fastcall GamerProfile_GetAutoSprintKBM(const int controllerIndex)
{
  return ?GamerProfile_GetAutoSprintKBM@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetArmorPlateApplyAllGamepad
==============
*/

bool __fastcall GamerProfile_GetArmorPlateApplyAllGamepad(const int controllerIndex)
{
  return ?GamerProfile_GetArmorPlateApplyAllGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDisplayInviteNotificationEnabled
==============
*/

bool __fastcall GamerProfile_GetDisplayInviteNotificationEnabled(int controllerIndex)
{
  return ?GamerProfile_GetDisplayInviteNotificationEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetSprintCancelsReload
==============
*/

void __fastcall GamerProfile_SetSprintCancelsReload(const int controllerIndex, bool sprintCancelsReload)
{
  ?GamerProfile_SetSprintCancelsReload@@YAXH_N@Z(controllerIndex, sprintCancelsReload);
}

/*
==============
GamerProfile_GetProfileSettings
==============
*/

const GamerSettingState *__fastcall GamerProfile_GetProfileSettings(int controllerIndex)
{
  return ?GamerProfile_GetProfileSettings@@YAPEBUGamerSettingState@@H@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateProfilePlayTimes
==============
*/

void GamerProfile_UpdateProfilePlayTimes(void)
{
  ?GamerProfile_UpdateProfilePlayTimes@@YAXXZ();
}

/*
==============
GamerProfile_GetIsSPNew
==============
*/

bool __fastcall GamerProfile_GetIsSPNew(const int controllerIndex)
{
  return ?GamerProfile_GetIsSPNew@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetIntelligence
==============
*/

void __fastcall GamerProfile_GetIntelligence(int controllerIndex, int *cheat_items_set1, int *cheat_items_set2)
{
  ?GamerProfile_GetIntelligence@@YAXHPEAH0@Z(controllerIndex, cheat_items_set1, cheat_items_set2);
}

/*
==============
GamerProfile_GetHoldSprint
==============
*/

bool __fastcall GamerProfile_GetHoldSprint(const int controllerIndex)
{
  return ?GamerProfile_GetHoldSprint@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMountPullAwayEnabledKBM
==============
*/

bool __fastcall GamerProfile_GetMountPullAwayEnabledKBM(const int controllerIndex)
{
  return ?GamerProfile_GetMountPullAwayEnabledKBM@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetIsParachuteAutoDeployGamepadDisabled
==============
*/

bool __fastcall GamerProfile_GetIsParachuteAutoDeployGamepadDisabled(const int controllerIndex)
{
  return ?GamerProfile_GetIsParachuteAutoDeployGamepadDisabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetShowSoundMuted
==============
*/

bool __fastcall GamerProfile_GetShowSoundMuted(int controllerIndex)
{
  return ?GamerProfile_GetShowSoundMuted@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetMouseMonitorDistanceCoef
==============
*/

void __fastcall GamerProfile_SetMouseMonitorDistanceCoef(const int controllerIndex, float coef)
{
  ?GamerProfile_SetMouseMonitorDistanceCoef@@YAXHM@Z(controllerIndex, coef);
}

/*
==============
GamerProfile_AutoAimToggle
==============
*/

void __fastcall GamerProfile_AutoAimToggle(int controllerIndex)
{
  ?GamerProfile_AutoAimToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_IsControllerSpeakerEnabled
==============
*/

bool __fastcall GamerProfile_IsControllerSpeakerEnabled(int controllerIndex)
{
  return ?GamerProfile_IsControllerSpeakerEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateProfileMenuOptionsHDRLumDvars
==============
*/

void __fastcall GamerProfile_UpdateProfileMenuOptionsHDRLumDvars(int controllerIndex)
{
  ?GamerProfile_UpdateProfileMenuOptionsHDRLumDvars@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SprintCancelsReload
==============
*/

bool __fastcall GamerProfile_SprintCancelsReload(const int controllerIndex)
{
  return ?GamerProfile_SprintCancelsReload@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetToggleScoreboardMap
==============
*/

void __fastcall GamerProfile_SetToggleScoreboardMap(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleScoreboardMap@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SubtitlesEnabled
==============
*/

bool __fastcall GamerProfile_SubtitlesEnabled(const int controllerIndex)
{
  return ?GamerProfile_SubtitlesEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMountPullAwayEnabled
==============
*/

bool __fastcall GamerProfile_GetMountPullAwayEnabled(const int controllerIndex)
{
  return ?GamerProfile_GetMountPullAwayEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetLandVehicleMouseSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetLandVehicleMouseSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetLandVehicleMouseSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_DeleteProfile
==============
*/

void __fastcall GamerProfile_DeleteProfile(int controllerIndex)
{
  ?GamerProfile_DeleteProfile@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetCrouchType
==============
*/

void __fastcall GamerProfile_SetCrouchType(const int controllerIndex, int crouchType)
{
  ?GamerProfile_SetCrouchType@@YAXHH@Z(controllerIndex, crouchType);
}

/*
==============
GamerProfile_SetShowSoundMuted
==============
*/

void __fastcall GamerProfile_SetShowSoundMuted(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetShowSoundMuted@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetDifficulty
==============
*/

void __fastcall GamerProfile_SetDifficulty(int controllerIndex, int difficultyLevel)
{
  ?GamerProfile_SetDifficulty@@YAXHH@Z(controllerIndex, difficultyLevel);
}

/*
==============
GamerProfile_ColorBlindMode
==============
*/

unsigned __int8 __fastcall GamerProfile_ColorBlindMode(int controllerIndex)
{
  return ?GamerProfile_ColorBlindMode@@YAEH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAutoWeaponSwitchGamepad
==============
*/

bool __fastcall GamerProfile_GetAutoWeaponSwitchGamepad(const int controllerIndex)
{
  return ?GamerProfile_GetAutoWeaponSwitchGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetHTTPDownloadTexturesEnable
==============
*/

void __fastcall GamerProfile_SetHTTPDownloadTexturesEnable(const int controllerIndex, bool httpDownloadTexturesEnable)
{
  ?GamerProfile_SetHTTPDownloadTexturesEnable@@YAXH_N@Z(controllerIndex, httpDownloadTexturesEnable);
}

/*
==============
GamerProfile_GetVoiceMuteStrategy
==============
*/

int __fastcall GamerProfile_GetVoiceMuteStrategy(const int controllerIndex)
{
  return ?GamerProfile_GetVoiceMuteStrategy@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_IsLeanEnabled
==============
*/

bool __fastcall GamerProfile_IsLeanEnabled(int controllerIndex)
{
  return ?GamerProfile_IsLeanEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_ResetCheats
==============
*/

void __fastcall GamerProfile_ResetCheats(int controllerIndex)
{
  ?GamerProfile_ResetCheats@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetShowVoiceChatMuted
==============
*/

void __fastcall GamerProfile_SetShowVoiceChatMuted(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetShowVoiceChatMuted@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetTapToSlideEnabledKeyboard
==============
*/

bool __fastcall GamerProfile_GetTapToSlideEnabledKeyboard(int controllerIndex)
{
  return ?GamerProfile_GetTapToSlideEnabledKeyboard@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateProfileAndSaveIfNeeded
==============
*/

void __fastcall GamerProfile_UpdateProfileAndSaveIfNeeded(int controllerIndex)
{
  ?GamerProfile_UpdateProfileAndSaveIfNeeded@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetChatProfanityFilterEnabled
==============
*/

bool __fastcall GamerProfile_GetChatProfanityFilterEnabled(int controllerIndex)
{
  return ?GamerProfile_GetChatProfanityFilterEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_ToggleHoldBreathEnabled
==============
*/

bool __fastcall GamerProfile_ToggleHoldBreathEnabled(const int controllerIndex)
{
  return ?GamerProfile_ToggleHoldBreathEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_ResetDataByIndex
==============
*/

void __fastcall GamerProfile_ResetDataByIndex(const int controllerIndex, const int dataIndex)
{
  ?GamerProfile_ResetDataByIndex@@YAXHH@Z(controllerIndex, dataIndex);
}

/*
==============
GamerProfile_GetGamepadEnabled
==============
*/

bool __fastcall GamerProfile_GetGamepadEnabled(const int controllerIndex)
{
  return ?GamerProfile_GetGamepadEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetInitialGameMode
==============
*/

void __fastcall GamerProfile_SetInitialGameMode(const int controllerIndex, const initialGameMode_t initialGameMode)
{
  ?GamerProfile_SetInitialGameMode@@YAXHW4initialGameMode_t@@@Z(controllerIndex, initialGameMode);
}

/*
==============
GamerProfile_GetKeyboardController
==============
*/

int __fastcall GamerProfile_GetKeyboardController(const int controllerIndex)
{
  return ?GamerProfile_GetKeyboardController@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetInvertedVerticalLookKBM
==============
*/

void __fastcall GamerProfile_SetInvertedVerticalLookKBM(const int controllerIndex, LookInversionType_t inverted)
{
  ?GamerProfile_SetInvertedVerticalLookKBM@@YAXHW4LookInversionType_t@@@Z(controllerIndex, inverted);
}

/*
==============
GamerProfile_SetInvertedVerticalLookFlyingGamepad
==============
*/

void __fastcall GamerProfile_SetInvertedVerticalLookFlyingGamepad(const int controllerIndex, bool inverted)
{
  ?GamerProfile_SetInvertedVerticalLookFlyingGamepad@@YAXH_N@Z(controllerIndex, inverted);
}

/*
==============
GamerProfile_GetDisplayTelemetryLatency
==============
*/

bool __fastcall GamerProfile_GetDisplayTelemetryLatency(int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryLatency@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAlwaysBlockClanInvites
==============
*/

bool __fastcall GamerProfile_GetAlwaysBlockClanInvites(int controllerIndex)
{
  return ?GamerProfile_GetAlwaysBlockClanInvites@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_DebugDrawFullscreenInfo
==============
*/

void GamerProfile_DebugDrawFullscreenInfo(void)
{
  ?GamerProfile_DebugDrawFullscreenInfo@@YAXXZ();
}

/*
==============
GamerProfile_SetToggleHoldBreath
==============
*/

void __fastcall GamerProfile_SetToggleHoldBreath(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleHoldBreath@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_IsDDLMounted
==============
*/

bool __fastcall GamerProfile_IsDDLMounted(int controllerIndex, ProfileDDLTypes ddlType)
{
  return ?GamerProfile_IsDDLMounted@@YA_NHW4ProfileDDLTypes@@@Z(controllerIndex, ddlType);
}

/*
==============
GamerProfile_GetHitMarkerAlias
==============
*/

const char *__fastcall GamerProfile_GetHitMarkerAlias(int controllerIndex)
{
  return ?GamerProfile_GetHitMarkerAlias@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDataByIndex
==============
*/

void __fastcall GamerProfile_SetDataByIndex(const int controllerIndex, const int dataIndex, const float settingValue)
{
  ?GamerProfile_SetDataByIndex@@YAXHHM@Z(controllerIndex, dataIndex, settingValue);
}

/*
==============
GamerProfile_HoldGrenadeEnabledKBM
==============
*/

bool __fastcall GamerProfile_HoldGrenadeEnabledKBM(const int controllerIndex)
{
  return ?GamerProfile_HoldGrenadeEnabledKBM@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetIsMPNew
==============
*/

bool __fastcall GamerProfile_GetIsMPNew(const int controllerIndex)
{
  return ?GamerProfile_GetIsMPNew@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDefaultJuggMusicEnabled
==============
*/

bool __fastcall GamerProfile_GetDefaultJuggMusicEnabled(const int controllerIndex)
{
  return ?GamerProfile_GetDefaultJuggMusicEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetHoldGrenadeKBM
==============
*/

void __fastcall GamerProfile_SetHoldGrenadeKBM(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetHoldGrenadeKBM@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetLastSaveGame
==============
*/

void __fastcall GamerProfile_SetLastSaveGame(const int controllerIndex, const char *newSaveGameName)
{
  ?GamerProfile_SetLastSaveGame@@YAXHPEBD@Z(controllerIndex, newSaveGameName);
}

/*
==============
GamerProfile_GetMountPullAwayDelayKBM
==============
*/

int __fastcall GamerProfile_GetMountPullAwayDelayKBM(const int controllerIndex)
{
  return ?GamerProfile_GetMountPullAwayDelayKBM@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetIsParachuteAutoDeployKBMDisabled
==============
*/

void __fastcall GamerProfile_SetIsParachuteAutoDeployKBMDisabled(const int controllerIndex, bool isParachuteAutoDeployKBMDisabled)
{
  ?GamerProfile_SetIsParachuteAutoDeployKBMDisabled@@YAXH_N@Z(controllerIndex, isParachuteAutoDeployKBMDisabled);
}

/*
==============
GamerProfile_CrossPlayToggle
==============
*/

void __fastcall GamerProfile_CrossPlayToggle(int controllerIndex)
{
  ?GamerProfile_CrossPlayToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoWeaponSwitchKeyboard
==============
*/

void __fastcall GamerProfile_SetAutoWeaponSwitchKeyboard(const int controllerIndex, bool autoWeaponSwitch)
{
  ?GamerProfile_SetAutoWeaponSwitchKeyboard@@YAXH_N@Z(controllerIndex, autoWeaponSwitch);
}

/*
==============
GamerProfile_GetFreeLook
==============
*/

bool __fastcall GamerProfile_GetFreeLook(const int controllerIndex)
{
  return ?GamerProfile_GetFreeLook@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMouseFilter
==============
*/

double __fastcall GamerProfile_GetMouseFilter(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetMouseFilter@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_GetPlayTimeMP
==============
*/

unsigned int __fastcall GamerProfile_GetPlayTimeMP(int controllerIndex)
{
  return ?GamerProfile_GetPlayTimeMP@@YAIH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAdsHighZoomGamepadSensitivityMultiplier
==============
*/

void __fastcall GamerProfile_SetAdsHighZoomGamepadSensitivityMultiplier(int controllerIndex, float sensitivityMultiplier)
{
  ?GamerProfile_SetAdsHighZoomGamepadSensitivityMultiplier@@YAXHM@Z(controllerIndex, sensitivityMultiplier);
}

/*
==============
GamerProfile_SetPlaylistNum
==============
*/

void __fastcall GamerProfile_SetPlaylistNum(int controllerIndex, int playlistNum)
{
  ?GamerProfile_SetPlaylistNum@@YAXHH@Z(controllerIndex, playlistNum);
}

/*
==============
GamerProfile_SetToggleADSEnabledKeyboard
==============
*/

void __fastcall GamerProfile_SetToggleADSEnabledKeyboard(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleADSEnabledKeyboard@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetMinimapRotationEnabled
==============
*/

bool __fastcall GamerProfile_GetMinimapRotationEnabled(const int controllerIndex)
{
  return ?GamerProfile_GetMinimapRotationEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_ExecControllerBindings
==============
*/

void __fastcall GamerProfile_ExecControllerBindings(int controllerIndex)
{
  ?GamerProfile_ExecControllerBindings@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetBindingsConfig
==============
*/

void __fastcall GamerProfile_SetBindingsConfig(int controllerIndex, const char *id, bool isButtons, bool isBR)
{
  ?GamerProfile_SetBindingsConfig@@YAXHPEBD_N1@Z(controllerIndex, id, isButtons, isBR);
}

/*
==============
GamerProfile_SetArmorPlateApplyAllGamepad
==============
*/

void __fastcall GamerProfile_SetArmorPlateApplyAllGamepad(const int controllerIndex, bool armorPlateApplyAllGamepad)
{
  ?GamerProfile_SetArmorPlateApplyAllGamepad@@YAXH_N@Z(controllerIndex, armorPlateApplyAllGamepad);
}

/*
==============
GamerProfile_GetDefaultSensitivityIndex
==============
*/

int __fastcall GamerProfile_GetDefaultSensitivityIndex()
{
  return ?GamerProfile_GetDefaultSensitivityIndex@@YAHXZ();
}

/*
==============
GamerProfile_GetMatchEndShouldRecordDLogInt
==============
*/

int __fastcall GamerProfile_GetMatchEndShouldRecordDLogInt(int controllerIndex)
{
  return ?GamerProfile_GetMatchEndShouldRecordDLogInt@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetPlayTimeSP
==============
*/

unsigned int __fastcall GamerProfile_GetPlayTimeSP(int controllerIndex)
{
  return ?GamerProfile_GetPlayTimeSP@@YAIH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetInitialGameMode
==============
*/

initialGameMode_t __fastcall GamerProfile_GetInitialGameMode(const int controllerIndex)
{
  return ?GamerProfile_GetInitialGameMode@@YA?AW4initialGameMode_t@@H@Z(controllerIndex);
}

/*
==============
GamerProfile_DisableChatForAllActiveClients
==============
*/

void GamerProfile_DisableChatForAllActiveClients(void)
{
  ?GamerProfile_DisableChatForAllActiveClients@@YAXXZ();
}

/*
==============
GamerProfile_SetIntelligence
==============
*/

void __fastcall GamerProfile_SetIntelligence(int controllerIndex, int cheat_items_set1, int cheat_items_set2)
{
  ?GamerProfile_SetIntelligence@@YAXHHH@Z(controllerIndex, cheat_items_set1, cheat_items_set2);
}

/*
==============
GamerProfile_GetDisplayTelemetryPacketLoss
==============
*/

int __fastcall GamerProfile_GetDisplayTelemetryPacketLoss(const int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryPacketLoss@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMouseMonitorDistanceCoef
==============
*/

double __fastcall GamerProfile_GetMouseMonitorDistanceCoef(const int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetMouseMonitorDistanceCoef@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_TargetAssistToggle
==============
*/

void __fastcall GamerProfile_TargetAssistToggle(int controllerIndex)
{
  ?GamerProfile_TargetAssistToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetColorBlindMode
==============
*/

void __fastcall GamerProfile_SetColorBlindMode(int controllerIndex, unsigned __int8 mode)
{
  ?GamerProfile_SetColorBlindMode@@YAXHE@Z(controllerIndex, mode);
}

/*
==============
GamerProfile_SetProneType
==============
*/

void __fastcall GamerProfile_SetProneType(const int controllerIndex, int proneType)
{
  ?GamerProfile_SetProneType@@YAXHH@Z(controllerIndex, proneType);
}

/*
==============
GamerProfile_SetIsBRNotNew
==============
*/

void __fastcall GamerProfile_SetIsBRNotNew(const int controllerIndex, bool isBRNotNew)
{
  ?GamerProfile_SetIsBRNotNew@@YAXH_N@Z(controllerIndex, isBRNotNew);
}

/*
==============
GamerProfile_SetMountButtonKBM
==============
*/

void __fastcall GamerProfile_SetMountButtonKBM(const int controllerIndex, int mountButtonConfigKBM)
{
  ?GamerProfile_SetMountButtonKBM@@YAXHH@Z(controllerIndex, mountButtonConfigKBM);
}

/*
==============
GamerProfile_GetLastSaveGame
==============
*/

const char *__fastcall GamerProfile_GetLastSaveGame(const int controllerIndex)
{
  return ?GamerProfile_GetLastSaveGame@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDisplayTelemetryLatency
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryLatency(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayTelemetryLatency@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad
==============
*/

bool __fastcall GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad(int controllerIndex)
{
  return ?GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAimAssistType
==============
*/

void __fastcall GamerProfile_SetAimAssistType(const int controllerIndex, int aimAssistType)
{
  ?GamerProfile_SetAimAssistType@@YAXHH@Z(controllerIndex, aimAssistType);
}

/*
==============
GamerProfile_GetAimResponseCurveType
==============
*/

int __fastcall GamerProfile_GetAimResponseCurveType(int controllerIndex)
{
  return ?GamerProfile_GetAimResponseCurveType@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetLean
==============
*/

void __fastcall GamerProfile_SetLean(int controllerIndex, bool value)
{
  ?GamerProfile_SetLean@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_OptionsMenuDvarsSetup
==============
*/

void __fastcall GamerProfile_OptionsMenuDvarsSetup(int controllerIndex)
{
  ?GamerProfile_OptionsMenuDvarsSetup@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMouseAdsUseMonitorDistance
==============
*/

bool __fastcall GamerProfile_GetMouseAdsUseMonitorDistance(int controllerIndex)
{
  return ?GamerProfile_GetMouseAdsUseMonitorDistance@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetInputSensitivity
==============
*/

double __fastcall GamerProfile_GetInputSensitivity(const int sensitivityIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetInputSensitivity@@YAMH@Z(sensitivityIndex);
  return result;
}

/*
==============
GamerProfile_SetZoomHybridCmdKBM
==============
*/

void __fastcall GamerProfile_SetZoomHybridCmdKBM(const int controllerIndex, int zoomHybridCmdType)
{
  ?GamerProfile_SetZoomHybridCmdKBM@@YAXHH@Z(controllerIndex, zoomHybridCmdType);
}

/*
==============
GamerProfile_OptionsMenuDvarsFinish_f
==============
*/

void GamerProfile_OptionsMenuDvarsFinish_f(void)
{
  ?GamerProfile_OptionsMenuDvarsFinish_f@@YAXXZ();
}

/*
==============
GamerProfile_GetToggleMapCursorEnable
==============
*/

bool __fastcall GamerProfile_GetToggleMapCursorEnable(const int controllerIndex)
{
  return ?GamerProfile_GetToggleMapCursorEnable@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDisplayTelemetryGpuTemperature
==============
*/

bool __fastcall GamerProfile_GetDisplayTelemetryGpuTemperature(int controllerIndex)
{
  return ?GamerProfile_GetDisplayTelemetryGpuTemperature@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDisplayTelemetryGpuTemperature
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryGpuTemperature(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayTelemetryGpuTemperature@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetButtonsConfig
==============
*/

const char *__fastcall GamerProfile_GetButtonsConfig(int controllerIndex)
{
  return ?GamerProfile_GetButtonsConfig@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDifficulty
==============
*/

int __fastcall GamerProfile_GetDifficulty(int controllerIndex)
{
  return ?GamerProfile_GetDifficulty@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDisplayNameTag
==============
*/

void __fastcall GamerProfile_SetDisplayNameTag(int controllerIndex, bool display)
{
  ?GamerProfile_SetDisplayNameTag@@YAXH_N@Z(controllerIndex, display);
}

/*
==============
GamerProfile_SetDisplayTelemetryCpuTime
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryCpuTime(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayTelemetryCpuTime@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetSubtitles
==============
*/

void __fastcall GamerProfile_SetSubtitles(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetSubtitles@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetStanceUpJump
==============
*/

bool __fastcall GamerProfile_GetStanceUpJump(const int controllerIndex)
{
  return ?GamerProfile_GetStanceUpJump@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetHorizontalSensitivity
==============
*/

void __fastcall GamerProfile_SetHorizontalSensitivity(int controllerIndex, int sensitivityIndex)
{
  ?GamerProfile_SetHorizontalSensitivity@@YAXHH@Z(controllerIndex, sensitivityIndex);
}

/*
==============
GamerProfile_GetAdsSensitivityMultiplierTiming
==============
*/

int __fastcall GamerProfile_GetAdsSensitivityMultiplierTiming(const int controllerIndex)
{
  return ?GamerProfile_GetAdsSensitivityMultiplierTiming@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_UsesRumble
==============
*/

bool __fastcall GamerProfile_UsesRumble(const int controllerIndex)
{
  return ?GamerProfile_UsesRumble@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetDataByName
==============
*/

GamerProfileData *__fastcall GamerProfile_GetDataByName(GamerProfileData *result, const int controllerIndex, const char *settingName)
{
  return ?GamerProfile_GetDataByName@@YA?AUGamerProfileData@@HPEBD@Z(result, controllerIndex, settingName);
}

/*
==============
GamerProfile_GetIsParachuteAutoDeployKBMDisabled
==============
*/

bool __fastcall GamerProfile_GetIsParachuteAutoDeployKBMDisabled(const int controllerIndex)
{
  return ?GamerProfile_GetIsParachuteAutoDeployKBMDisabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetPlayTimeCP
==============
*/

unsigned int __fastcall GamerProfile_GetPlayTimeCP(int controllerIndex)
{
  return ?GamerProfile_GetPlayTimeCP@@YAIH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_GetInvertedVerticalLookGamepad
==============
*/

bool __fastcall GamerProfile_GetInvertedVerticalLookGamepad(const int controllerIndex)
{
  return ?GamerProfile_GetInvertedVerticalLookGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAdsSensitivityMultiplierTiming
==============
*/

void __fastcall GamerProfile_SetAdsSensitivityMultiplierTiming(const int controllerIndex, int timing)
{
  ?GamerProfile_SetAdsSensitivityMultiplierTiming@@YAXHH@Z(controllerIndex, timing);
}

/*
==============
GamerProfile_ForceSaveProfile
==============
*/

void __fastcall GamerProfile_ForceSaveProfile(const int controllerIndex)
{
  ?GamerProfile_ForceSaveProfile@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetUseHoldKBMProfile
==============
*/

bool __fastcall GamerProfile_GetUseHoldKBMProfile(const int controllerIndex)
{
  return ?GamerProfile_GetUseHoldKBMProfile@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetIsUsingAnonymization
==============
*/

void __fastcall GamerProfile_SetIsUsingAnonymization(const int controllerIndex, bool useAnonymization)
{
  ?GamerProfile_SetIsUsingAnonymization@@YAXH_N@Z(controllerIndex, useAnonymization);
}

/*
==============
GamerProfile_GetDataDefaultValueByName
==============
*/

double __fastcall GamerProfile_GetDataDefaultValueByName(const int controllerIndex, const char *settingName)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetDataDefaultValueByName@@YAMHPEBD@Z(controllerIndex, settingName);
  return result;
}

/*
==============
GamerProfile_SetAutodetectDvarsAsProfile
==============
*/

void GamerProfile_SetAutodetectDvarsAsProfile(void)
{
  ?GamerProfile_SetAutodetectDvarsAsProfile@@YAXXZ();
}

/*
==============
GamerProfile_SetMinimapRotationEnabled
==============
*/

void __fastcall GamerProfile_SetMinimapRotationEnabled(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetMinimapRotationEnabled@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_ResetDataByName
==============
*/

void __fastcall GamerProfile_ResetDataByName(const int controllerIndex, const char *settingName)
{
  ?GamerProfile_ResetDataByName@@YAXHPEBD@Z(controllerIndex, settingName);
}

/*
==============
GamerProfile_GetHTTPDownloadTexturesEnable
==============
*/

bool __fastcall GamerProfile_GetHTTPDownloadTexturesEnable(const int controllerIndex)
{
  return ?GamerProfile_GetHTTPDownloadTexturesEnable@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetUseHoldKBMProfile
==============
*/

void __fastcall GamerProfile_SetUseHoldKBMProfile(const int controllerIndex, bool useHoldKBMProfile)
{
  ?GamerProfile_SetUseHoldKBMProfile@@YAXH_N@Z(controllerIndex, useHoldKBMProfile);
}

/*
==============
GamerProfile_GetIsBRNotNew
==============
*/

bool __fastcall GamerProfile_GetIsBRNotNew(const int controllerIndex)
{
  return ?GamerProfile_GetIsBRNotNew@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetToggleTooltipEnable
==============
*/

void __fastcall GamerProfile_SetToggleTooltipEnable(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleTooltipEnable@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_GetLanguage
==============
*/

int __fastcall GamerProfile_GetLanguage(int controllerIndex)
{
  return ?GamerProfile_GetLanguage@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetHasEverPlayedMainMenu
==============
*/

bool __fastcall GamerProfile_GetHasEverPlayedMainMenu(int controllerIndex)
{
  return ?GamerProfile_GetHasEverPlayedMainMenu@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_InitAllProfiles
==============
*/

void GamerProfile_InitAllProfiles(void)
{
  ?GamerProfile_InitAllProfiles@@YAXXZ();
}

/*
==============
GamerProfile_WasErrorOnRead
==============
*/

bool __fastcall GamerProfile_WasErrorOnRead(int controllerIndex)
{
  return ?GamerProfile_WasErrorOnRead@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetFreeLook
==============
*/

void __fastcall GamerProfile_SetFreeLook(const int controllerIndex, bool freeLook)
{
  ?GamerProfile_SetFreeLook@@YAXH_N@Z(controllerIndex, freeLook);
}

/*
==============
GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard
==============
*/

bool __fastcall GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard(int controllerIndex)
{
  return ?GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateCommand
==============
*/

void __fastcall GamerProfile_UpdateCommand(int controllerIndex, bool force)
{
  ?GamerProfile_UpdateCommand@@YAXH_N@Z(controllerIndex, force);
}

/*
==============
GamerProfile_GetInvertedVerticalLookKBM
==============
*/

int __fastcall GamerProfile_GetInvertedVerticalLookKBM(const int controllerIndex)
{
  return ?GamerProfile_GetInvertedVerticalLookKBM@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetTapToSlideEnabledGamepad
==============
*/

void __fastcall GamerProfile_SetTapToSlideEnabledGamepad(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetTapToSlideEnabledGamepad@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetMouseHorizontalSensitivity
==============
*/

double __fastcall GamerProfile_GetMouseHorizontalSensitivity(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetMouseHorizontalSensitivity@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_SetMountPullAwayEnabled
==============
*/

void __fastcall GamerProfile_SetMountPullAwayEnabled(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetMountPullAwayEnabled@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_UpdateProfileMenuOptionsHDRLumDvars_f
==============
*/

void GamerProfile_UpdateProfileMenuOptionsHDRLumDvars_f(void)
{
  ?GamerProfile_UpdateProfileMenuOptionsHDRLumDvars_f@@YAXXZ();
}

/*
==============
GamerProfile_GetDisplayNameTag
==============
*/

bool __fastcall GamerProfile_GetDisplayNameTag(int controllerIndex)
{
  return ?GamerProfile_GetDisplayNameTag@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetToggleScoreboard
==============
*/

void __fastcall GamerProfile_SetToggleScoreboard(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleScoreboard@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetVehicleCameraAutoRecenterEnabledGamepad
==============
*/

void __fastcall GamerProfile_SetVehicleCameraAutoRecenterEnabledGamepad(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetVehicleCameraAutoRecenterEnabledGamepad@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetSticksConfig
==============
*/

const char *__fastcall GamerProfile_GetSticksConfig(int controllerIndex)
{
  return ?GamerProfile_GetSticksConfig@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetHitMarkerAlias
==============
*/

void __fastcall GamerProfile_SetHitMarkerAlias(int controllerIndex, const char *soundAlias)
{
  ?GamerProfile_SetHitMarkerAlias@@YAXHPEBD@Z(controllerIndex, soundAlias);
}

/*
==============
GamerProfile_GetCrouchType
==============
*/

int __fastcall GamerProfile_GetCrouchType(const int controllerIndex)
{
  return ?GamerProfile_GetCrouchType@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMouseVerticalSensitivity
==============
*/

double __fastcall GamerProfile_GetMouseVerticalSensitivity(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetMouseVerticalSensitivity@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_LogInProfile
==============
*/

void __fastcall GamerProfile_LogInProfile(int controllerIndex)
{
  ?GamerProfile_LogInProfile@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMinimapStyle
==============
*/

int __fastcall GamerProfile_GetMinimapStyle(const int controllerIndex)
{
  return ?GamerProfile_GetMinimapStyle@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetIsParachuteAutoDeployGamepadDisabled
==============
*/

void __fastcall GamerProfile_SetIsParachuteAutoDeployGamepadDisabled(const int controllerIndex, bool isParachuteAutoDeployGamepadDisabled)
{
  ?GamerProfile_SetIsParachuteAutoDeployGamepadDisabled@@YAXH_N@Z(controllerIndex, isParachuteAutoDeployGamepadDisabled);
}

/*
==============
GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier
==============
*/

double __fastcall GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_SetAdsLowZoomGamepadSensitivityMultiplier
==============
*/

void __fastcall GamerProfile_SetAdsLowZoomGamepadSensitivityMultiplier(int controllerIndex, float sensitivityMultiplier)
{
  ?GamerProfile_SetAdsLowZoomGamepadSensitivityMultiplier@@YAXHM@Z(controllerIndex, sensitivityMultiplier);
}

/*
==============
GamerProfile_SetMountButton
==============
*/

void __fastcall GamerProfile_SetMountButton(const int controllerIndex, int mountButtonConfig)
{
  ?GamerProfile_SetMountButton@@YAXHH@Z(controllerIndex, mountButtonConfig);
}

/*
==============
GamerProfile_SetDisplayTelemetryFPS
==============
*/

void __fastcall GamerProfile_SetDisplayTelemetryFPS(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayTelemetryFPS@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetDataType
==============
*/

GamerProfileDataType __fastcall GamerProfile_GetDataType(int dataIndex)
{
  return ?GamerProfile_GetDataType@@YA?AW4GamerProfileDataType@@H@Z(dataIndex);
}

/*
==============
GamerProfile_SetYoloMode
==============
*/

void __fastcall GamerProfile_SetYoloMode(int controllerIndex, bool yoloMode)
{
  ?GamerProfile_SetYoloMode@@YAXH_N@Z(controllerIndex, yoloMode);
}

/*
==============
GamerProfile_GetToggleADSEnabledKeyboard
==============
*/

bool __fastcall GamerProfile_GetToggleADSEnabledKeyboard(int controllerIndex)
{
  return ?GamerProfile_GetToggleADSEnabledKeyboard@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetInvertedVerticalLookFlyingGamepad
==============
*/

bool __fastcall GamerProfile_GetInvertedVerticalLookFlyingGamepad(const int controllerIndex)
{
  return ?GamerProfile_GetInvertedVerticalLookFlyingGamepad@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_UpdateSafeareaDvars
==============
*/

void __fastcall GamerProfile_UpdateSafeareaDvars(int controllerIndex)
{
  ?GamerProfile_UpdateSafeareaDvars@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_ColorBlindTargets
==============
*/

unsigned __int8 __fastcall GamerProfile_ColorBlindTargets(int controllerIndex)
{
  return ?GamerProfile_ColorBlindTargets@@YAEH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetAutoSprintGamepad
==============
*/

int __fastcall GamerProfile_GetAutoSprintGamepad(const int controllerIndex)
{
  return ?GamerProfile_GetAutoSprintGamepad@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetZoomHybridCmdKBM
==============
*/

int __fastcall GamerProfile_GetZoomHybridCmdKBM(const int controllerIndex)
{
  return ?GamerProfile_GetZoomHybridCmdKBM@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetMatchEndShouldRecordDLog
==============
*/

bool __fastcall GamerProfile_GetMatchEndShouldRecordDLog(int controllerIndex)
{
  return ?GamerProfile_GetMatchEndShouldRecordDLog@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_ListProfileArgsToConsole
==============
*/

void __fastcall GamerProfile_ListProfileArgsToConsole(int channel)
{
  ?GamerProfile_ListProfileArgsToConsole@@YAXH@Z(channel);
}

/*
==============
GamerProfile_SetChatProfanityFilterEnabled
==============
*/

void __fastcall GamerProfile_SetChatProfanityFilterEnabled(int controllerIndex, int enabled)
{
  ?GamerProfile_SetChatProfanityFilterEnabled@@YAXHH@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetWeaponSwitchCancelDelay
==============
*/

void __fastcall GamerProfile_SetWeaponSwitchCancelDelay(const int controllerIndex, int delay)
{
  ?GamerProfile_SetWeaponSwitchCancelDelay@@YAXHH@Z(controllerIndex, delay);
}

/*
==============
GamerProfile_SetTargetAssist
==============
*/

void __fastcall GamerProfile_SetTargetAssist(int controllerIndex, bool value)
{
  ?GamerProfile_SetTargetAssist@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_SetRumble
==============
*/

void __fastcall GamerProfile_SetRumble(int controllerIndex, bool value)
{
  ?GamerProfile_SetRumble@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_SetToggleADSEnabledGamepad
==============
*/

void __fastcall GamerProfile_SetToggleADSEnabledGamepad(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleADSEnabledGamepad@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetAutoWeaponSwitchKeyboard
==============
*/

bool __fastcall GamerProfile_GetAutoWeaponSwitchKeyboard(const int controllerIndex)
{
  return ?GamerProfile_GetAutoWeaponSwitchKeyboard@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetYoloState
==============
*/

int __fastcall GamerProfile_GetYoloState(int controllerIndex)
{
  return ?GamerProfile_GetYoloState@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetWarTrackPassengerEnable
==============
*/

bool __fastcall GamerProfile_GetWarTrackPassengerEnable(const int controllerIndex)
{
  return ?GamerProfile_GetWarTrackPassengerEnable@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetCrossPlay
==============
*/

void __fastcall GamerProfile_SetCrossPlay(int controllerIndex, bool value)
{
  ?GamerProfile_SetCrossPlay@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
GamerProfile_SetTapToSlideEnabledKeyboard
==============
*/

void __fastcall GamerProfile_SetTapToSlideEnabledKeyboard(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetTapToSlideEnabledKeyboard@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_GetAirVehicleMouseSensitivityMultiplier
==============
*/

double __fastcall GamerProfile_GetAirVehicleMouseSensitivityMultiplier(int controllerIndex)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetAirVehicleMouseSensitivityMultiplier@@YAMH@Z(controllerIndex);
  return result;
}

/*
==============
GamerProfile_SetToggleMapCursorEnable
==============
*/

void __fastcall GamerProfile_SetToggleMapCursorEnable(const int controllerIndex, bool enabled)
{
  ?GamerProfile_SetToggleMapCursorEnable@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_SetArmorPlateApplyAllKBM
==============
*/

void __fastcall GamerProfile_SetArmorPlateApplyAllKBM(const int controllerIndex, bool armorPlateApplyAllKBM)
{
  ?GamerProfile_SetArmorPlateApplyAllKBM@@YAXH_N@Z(controllerIndex, armorPlateApplyAllKBM);
}

/*
==============
GamerProfile_SetLanguage
==============
*/

void __fastcall GamerProfile_SetLanguage(int controllerIndex, int language)
{
  ?GamerProfile_SetLanguage@@YAXHH@Z(controllerIndex, language);
}

/*
==============
GamerProfile_IsProfileLoggedIn
==============
*/

bool __fastcall GamerProfile_IsProfileLoggedIn(int controllerIndex)
{
  return ?GamerProfile_IsProfileLoggedIn@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_HandleDvarProfileData
==============
*/

bool __fastcall GamerProfile_HandleDvarProfileData(const int controllerIndex, const char *settingName, const float settingValue)
{
  return ?GamerProfile_HandleDvarProfileData@@YA_NHPEBDM@Z(controllerIndex, settingName, settingValue);
}

/*
==============
GamerProfile_GetAcceptedEULA
==============
*/

bool __fastcall GamerProfile_GetAcceptedEULA(int controllerIndex)
{
  return ?GamerProfile_GetAcceptedEULA@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_IsHybridBindedToCmdType
==============
*/

bool __fastcall GamerProfile_IsHybridBindedToCmdType(const int controllerIndex, ZoomHybridCommandType_t zoomHybridCmdType)
{
  return ?GamerProfile_IsHybridBindedToCmdType@@YA_NHW4ZoomHybridCommandType_t@@@Z(controllerIndex, zoomHybridCmdType);
}

/*
==============
GamerProfile_GetIntelligencePtr
==============
*/

void __fastcall GamerProfile_GetIntelligencePtr(int controllerIndex, int **cheat_items_set1, int **cheat_items_set2)
{
  ?GamerProfile_GetIntelligencePtr@@YAXHPEAPEAH0@Z(controllerIndex, cheat_items_set1, cheat_items_set2);
}

/*
==============
GamerProfile_GetProneType
==============
*/

int __fastcall GamerProfile_GetProneType(const int controllerIndex)
{
  return ?GamerProfile_GetProneType@@YAHH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetDisplayInviteNotificationEnabled
==============
*/

void __fastcall GamerProfile_SetDisplayInviteNotificationEnabled(int controllerIndex, bool enabled)
{
  ?GamerProfile_SetDisplayInviteNotificationEnabled@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
GamerProfile_HoldSprintToggle
==============
*/

void __fastcall GamerProfile_HoldSprintToggle(const int controllerIndex)
{
  ?GamerProfile_HoldSprintToggle@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetToggleScoreboardMapEnabled
==============
*/

bool __fastcall GamerProfile_GetToggleScoreboardMapEnabled(const int controllerIndex)
{
  return ?GamerProfile_GetToggleScoreboardMapEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_RegisterCommands
==============
*/

void GamerProfile_RegisterCommands(void)
{
  ?GamerProfile_RegisterCommands@@YAXXZ();
}

/*
==============
GamerProfile_ResetAllGameOptions
==============
*/

void __fastcall GamerProfile_ResetAllGameOptions(const int controllerIndex)
{
  ?GamerProfile_ResetAllGameOptions@@YAXH@Z(controllerIndex);
}

/*
==============
GamerProfile_GetToggleTooltipEnable
==============
*/

bool __fastcall GamerProfile_GetToggleTooltipEnable(const int controllerIndex)
{
  return ?GamerProfile_GetToggleTooltipEnable@@YA_NH@Z(controllerIndex);
}

/*
==============
GamerProfile_SetAutoForwardInputSequenceEnable
==============
*/

void __fastcall GamerProfile_SetAutoForwardInputSequenceEnable(const int controllerIndex, bool autoForwardInputSequenceEnable)
{
  ?GamerProfile_SetAutoForwardInputSequenceEnable@@YAXH_N@Z(controllerIndex, autoForwardInputSequenceEnable);
}

/*
==============
GamerProfile_GetDataMaxValueByName
==============
*/

double __fastcall GamerProfile_GetDataMaxValueByName(const int controllerIndex, const char *settingName)
{
  double result; 

  *(float *)&result = ?GamerProfile_GetDataMaxValueByName@@YAMHPEBD@Z(controllerIndex, settingName);
  return result;
}

/*
==============
DDLAccessCB
==============
*/
void DDLAccessCB(const DDLContext *ddlContext, unsigned int bitStart, unsigned int bitSize, DDLAccessOp accessOp)
{
  unsigned __int8 **userData; 

  if ( accessOp == DDL_ACCESS_WRITE )
  {
    if ( !ddlContext->userData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_main_mp.cpp", 5640, ASSERT_TYPE_ASSERT, "(ddlContext->userData)", (const char *)&queryFormat, "ddlContext->userData") )
      __debugbreak();
    userData = (unsigned __int8 **)ddlContext->userData;
    if ( *userData )
      LiveStorage_FlagModifiedByteRange((bitStart >> 3) + *((_DWORD *)userData + 2), *((_DWORD *)userData + 2) + ((bitStart + bitSize) >> 3), *userData);
  }
}

/*
==============
SetVehicleCameraAutoRecenterEnabledGamepad_f
==============
*/
void SetVehicleCameraAutoRecenterEnabledGamepad_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3520, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.vehicleCameraAutoRecenterEnabledGamepad = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Auto Vehicle Camera Recenter Gamepad %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
SetVehicleCameraAutoRecenterEnabledKeyboard_f
==============
*/
void SetVehicleCameraAutoRecenterEnabledKeyboard_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3869, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.vehicleCameraAutoRecenterEnabledKeyboard = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Auto Vehicle Camera Recenter Keyboard %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
SetTapToSlideEnabledGamepad_f
==============
*/
void SetTapToSlideEnabledGamepad_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3897, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.tapToSlideEnabledGamepad = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Tap To Slide Gamepad %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
SetTapToSlideEnabledKeyboard_f
==============
*/
void SetTapToSlideEnabledKeyboard_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3925, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.tapToSlideEnabledKeyboard = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Tap To Slide Keyboard %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
ToggleAutoWeaponSwitchGamepad_f
==============
*/
bool ToggleAutoWeaponSwitchGamepad_f()
{
  int v0; 
  __int64 v1; 
  bool result; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4026, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  result = !s_gamerSettings[v1].config.autoWeaponSwitchGamepad;
  s_gamerSettings[v1].config.autoWeaponSwitchGamepad = result;
  return result;
}

/*
==============
ToggleAutoWeaponSwitchKeyboard_f
==============
*/
bool ToggleAutoWeaponSwitchKeyboard_f()
{
  int v0; 
  __int64 v1; 
  bool result; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4037, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  result = !s_gamerSettings[v1].config.autoWeaponSwitchKeyboard;
  s_gamerSettings[v1].config.autoWeaponSwitchKeyboard = result;
  return result;
}

/*
==============
ToggleWeaponSwitchWrapAround_f
==============
*/
bool ToggleWeaponSwitchWrapAround_f()
{
  int v0; 
  __int64 v1; 
  bool result; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4048, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  result = !s_gamerSettings[v1].config.weaponSwitchWrapAround;
  s_gamerSettings[v1].config.weaponSwitchWrapAround = result;
  return result;
}

/*
==============
SetToggleADSEnabledGamepad_f
==============
*/
void SetToggleADSEnabledGamepad_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4060, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.toggleADSEnabledGamepad = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Toggle ADS %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
SetToggleADSEnabledKeyboard_f
==============
*/
void SetToggleADSEnabledKeyboard_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  int v10; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    v8 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v8);
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 )
    {
      v10 = 8;
      v9 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4072, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, v10) )
        __debugbreak();
    }
    v7 = "disabled";
    s_gamerSettings[v5].config.toggleADSEnabledKeyboard = v6;
    if ( v6 )
      v7 = "enabled";
    Com_Printf(14, "Profile: Toggle ADS %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
  }
}

/*
==============
ToggleAutoMantleAirborne_f
==============
*/
void ToggleAutoMantleAirborne_f()
{
  int v0; 
  __int64 v1; 
  int v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5233, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() < 2 )
  {
    GamerProfile_SetAutoMantleAirborne(v1, !s_gamerSettings[v1].config.autoMantleAirborne);
  }
  else
  {
    v2 = Cmd_ArgInt(1);
    GamerProfile_SetAutoMantleAirborne(v1, v2 != 0);
  }
}

/*
==============
ResetDataByName_f
==============
*/
void ResetDataByName_f()
{
  unsigned int v0; 
  int v1; 
  const char *v2; 
  const char *v3; 
  int DataIndexByName; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5268, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() >= 1 )
  {
    v3 = Cmd_Argv(1);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8852, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
      __debugbreak();
    DataIndexByName = GamerProfile_GetDataIndexByName(v3);
    GamerProfile_ResetDataByIndex(v1, DataIndexByName);
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v2);
  }
}

/*
==============
ResetAllGameOptions_f
==============
*/
void ResetAllGameOptions_f()
{
  int v0; 
  __int64 v1; 
  LocalClientNum_t v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5284, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  SetProfileDefaults(&s_gamerSettings[v1], v1);
  Com_ResetAllDvarOptions(v1);
  Online_PlayerData_SetCrossPlayEnabled(v1, 1);
  GamerProfile_SaveProfile(v1);
  StoreSettingsToLastSaved(v1);
  v2 = Cmd_LocalClientNum();
  CL_Keys_ResetAllBindings(v2);
}

/*
==============
SetLandVehicleMouseSensitivityMultiplier_f
==============
*/
void SetLandVehicleMouseSensitivityMultiplier_f()
{
  SetDataByNameFromCommand("landVehicleMouseSensitivityMultiplier");
}

/*
==============
SetAirVehicleMouseSensitivityMultiplier_f
==============
*/
void SetAirVehicleMouseSensitivityMultiplier_f()
{
  SetDataByNameFromCommand("airVehicleMouseSensitivityMultiplier");
}

/*
==============
SetMouseMenuSensitivity_f
==============
*/
void SetMouseMenuSensitivity_f()
{
  const char *v0; 

  v0 = Cmd_Argv(0);
  Com_PrintError(15, "\"%s\" is not implemented.\n", v0);
}

/*
==============
SetKeyboardController_f
==============
*/
void SetKeyboardController_f()
{
  SetDataByNameFromCommand("durangoKeyboardController");
}

/*
==============
SubtitlesToggle_f
==============
*/
void SubtitlesToggle_f()
{
  int v0; 
  __int64 v1; 
  bool *p_showSubtitles; 
  bool v3; 
  bool v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5004, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_showSubtitles = &s_gamerSettings[v1].config.showSubtitles;
  v3 = *p_showSubtitles;
  v4 = !*p_showSubtitles;
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5015, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  *p_showSubtitles = v4;
  v5 = "off";
  if ( !v3 )
    v5 = "on";
  Com_Printf(14, "Subtitles toggled %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
SprintCancelsReloadToggle_f
==============
*/
void SprintCancelsReloadToggle_f()
{
  int v0; 
  __int64 v1; 
  bool *p_sprintCancelsReload; 
  char v3; 
  char v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v9 = 8;
    v7 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5093, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  p_sprintCancelsReload = &s_gamerSettings[v1].config.sprintCancelsReload;
  v3 = *p_sprintCancelsReload;
  if ( Cmd_Argc() < 2 )
  {
    v4 = v3 == 0;
  }
  else
  {
    v4 = Cmd_ArgInt(1) != 0;
    if ( v4 == v3 )
      return;
  }
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v8) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5104, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v8) )
      __debugbreak();
  }
  *p_sprintCancelsReload = v4;
  v5 = "off";
  if ( v4 )
    v5 = "on";
  Com_Printf(14, "Sprint cancels reload toggled %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
HoldSprintToggle_f
==============
*/
void HoldSprintToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_holdSprint; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5388, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_holdSprint = &s_gamerSettings[v5].config.holdSprint;
    v7 = "off";
    v8 = "Profile: Hold to Sprint toggled %s for controller #%i.\n";
    if ( !*p_holdSprint )
      v7 = "on";
    v6 = !*p_holdSprint;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5419, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "disabled";
    if ( v6 )
      v7 = "enabled";
    v8 = "Profile: Hold to Sprint %s set for controller #%i.\n";
    p_holdSprint = &s_gamerSettings[v5].config.holdSprint;
  }
  *p_holdSprint = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
SetVertViewSensitivity_f
==============
*/
void SetVertViewSensitivity_f()
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  double v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5434, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  v2 = v1;
  if ( Cmd_Argc() >= 2 )
  {
    v4 = Cmd_ArgFloat(1);
    s_gamerSettings[v2].config.viewVertSensitivity = *(float *)&v4;
    if ( *(float *)&v4 < 0.0099999998 )
    {
      s_gamerSettings[v2].config.viewVertSensitivity = 0.0099999998;
      *(float *)&v4 = FLOAT_0_0099999998;
    }
    Com_Printf(14, "View sensitivity set to %.2f for controller #%i.\n", *(float *)&v4, (unsigned int)v1);
  }
  else
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
}

/*
==============
SetHorzViewSensitivity_f
==============
*/
void SetHorzViewSensitivity_f()
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  const char *v3; 
  double v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5457, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  v2 = v1;
  if ( Cmd_Argc() >= 2 )
  {
    v4 = Cmd_ArgFloat(1);
    s_gamerSettings[v2].config.viewHorzSensitivity = *(float *)&v4;
    if ( *(float *)&v4 < 0.0099999998 )
    {
      s_gamerSettings[v2].config.viewHorzSensitivity = 0.0099999998;
      *(float *)&v4 = FLOAT_0_0099999998;
    }
    Com_Printf(14, "View sensitivity set to %.2f for controller #%i.\n", *(float *)&v4, (unsigned int)v1);
  }
  else
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
}

/*
==============
ScoreboardToggle_f
==============
*/
void ScoreboardToggle_f()
{
  int v0; 
  __int64 v1; 
  bool *p_toggleScoreboard; 
  bool v3; 
  bool v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2982, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_toggleScoreboard = &s_gamerSettings[v1].config.toggleScoreboard;
  v3 = *p_toggleScoreboard;
  v4 = !*p_toggleScoreboard;
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2993, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  *p_toggleScoreboard = v4;
  v5 = "off";
  if ( !v3 )
    v5 = "on";
  Com_Printf(14, "Scoreboard toggling %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
ScoreboardMapToggle_f
==============
*/
void ScoreboardMapToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; 
  __int64 v9; 
  int v10; 
  int *p_toggleScoreboardMap; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 

  v8 = Cmd_LocalControllerIndex();
  v9 = v8;
  v10 = 0;
  if ( (unsigned int)v8 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3004, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v8, 0i64, 8) )
    __debugbreak();
  p_toggleScoreboardMap = &s_gamerSettings[v9].config.toggleScoreboardMap;
  v12 = *p_toggleScoreboardMap;
  if ( (unsigned int)v9 > 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3015, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v14, 0i64, v15) )
      __debugbreak();
  }
  v13 = "off";
  LOBYTE(v10) = v12 == 0;
  *p_toggleScoreboardMap = v10;
  if ( !v12 )
    v13 = "on";
  Com_Printf(14, "Scoreboard Map toggling %s for controller #%i.\n", v13, (unsigned int)v9, a5, a6, a7, a8);
}

/*
==============
QuickInventoryToggle_f
==============
*/
void QuickInventoryToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; 
  __int64 v9; 
  int v10; 
  int *p_toggleQuickInventory; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 

  v8 = Cmd_LocalControllerIndex();
  v9 = v8;
  v10 = 0;
  if ( (unsigned int)v8 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3026, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v8, 0i64, 8) )
    __debugbreak();
  p_toggleQuickInventory = &s_gamerSettings[v9].config.toggleQuickInventory;
  v12 = *p_toggleQuickInventory;
  if ( (unsigned int)v9 > 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3037, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v14, 0i64, v15) )
      __debugbreak();
  }
  v13 = "off";
  LOBYTE(v10) = v12 == 0;
  *p_toggleQuickInventory = v10;
  if ( !v12 )
    v13 = "on";
  Com_Printf(14, "Scoreboard toggling %s for controller #%i.\n", v13, (unsigned int)v9, a5, a6, a7, a8);
}

/*
==============
ToggleHoldGrenade_f
==============
*/
void ToggleHoldGrenade_f()
{
  int v0; 
  __int64 v1; 
  bool *p_grenadeHold; 
  bool v3; 
  bool v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3048, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_grenadeHold = &s_gamerSettings[v1].config.grenadeHold;
  v3 = *p_grenadeHold;
  v4 = !*p_grenadeHold;
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3070, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  *p_grenadeHold = v4;
  v5 = "off";
  if ( !v3 )
    v5 = "on";
  Com_Printf(14, "Profile: Hold button to hold grenade (for gamepad) toggled %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
ToggleHoldGrenadeKBM_f
==============
*/
void ToggleHoldGrenadeKBM_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; 
  __int64 v9; 
  int v10; 
  int *p_grenadeHoldKBM; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 

  v8 = Cmd_LocalControllerIndex();
  v9 = v8;
  v10 = 0;
  if ( (unsigned int)v8 > 8 )
  {
    v17 = 8;
    v15 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3059, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v15, 0i64, v17) )
      __debugbreak();
  }
  p_grenadeHoldKBM = &s_gamerSettings[v9].config.grenadeHoldKBM;
  v12 = *p_grenadeHoldKBM;
  if ( (unsigned int)v9 > 8 )
  {
    LODWORD(v16) = 8;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3081, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v14, 0i64, v16) )
      __debugbreak();
  }
  v13 = "off";
  if ( v12 != 1 )
    v13 = "on";
  LOBYTE(v10) = v12 != 1;
  *p_grenadeHoldKBM = v10;
  Com_Printf(14, "Profile: Hold button to hold grenade (for KBM) toggled %s for controller #%i.\n", v13, (unsigned int)v9, a5, a6, a7, a8);
}

/*
==============
SetProneType_f
==============
*/
void SetProneType_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  StanceChangeType_t v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5546, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid SetProneType_f argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.proneType = v3;
      Com_Printf(14, "Profile: Prone type set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetCrouchType_f
==============
*/
void SetCrouchType_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  StanceChangeType_t v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5572, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( (unsigned int)(v3 - 1) > 2 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid SetCrouchType_f argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.crouchType = v3;
      Com_Printf(14, "Profile: Crouch type set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetZoomHybridCmdKBM_f
==============
*/
void SetZoomHybridCmdKBM_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  int v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5598, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( v3 >= 3 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid SetZoomHybridCmdKBM_f argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.zoomHybridCmdKBM = v3;
      Com_Printf(14, "Profile: Zoom/Hybrid command type set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetMouseAdsUseMonitorDistance_f
==============
*/
void SetMouseAdsUseMonitorDistance_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5624, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2972, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.mouseAdsUseMonitorDistance = v3;
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
HoldBreathToggle_f
==============
*/
void HoldBreathToggle_f()
{
  int v0; 
  __int64 v1; 
  bool *p_toggleHoldBreath; 
  bool v3; 
  bool v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3476, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_toggleHoldBreath = &s_gamerSettings[v1].config.toggleHoldBreath;
  v3 = *p_toggleHoldBreath;
  v4 = !*p_toggleHoldBreath;
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3487, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  *p_toggleHoldBreath = v4;
  v5 = "off";
  if ( !v3 )
    v5 = "on";
  Com_Printf(14, "Hold breath toggling %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
ToggleStanceUpJump_f
==============
*/
bool ToggleStanceUpJump_f()
{
  int v0; 
  __int64 v1; 
  bool result; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5668, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  result = !s_gamerSettings[v1].config.stanceUpJump;
  s_gamerSettings[v1].config.stanceUpJump = result;
  return result;
}

/*
==============
SetWeaponSwitchDelay_f
==============
*/
void SetWeaponSwitchDelay_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  int v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5679, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( v3 < 0 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid SetWeaponSwitchDelay_f argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.weaponSwitchCancelDelay = v3;
      Com_Printf(14, "Profile: weapon switch delay set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
GamerProfile_UpdateProfileMenuOptionsHDRLumDvars_f
==============
*/
void GamerProfile_UpdateProfileMenuOptionsHDRLumDvars_f(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5706, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v3) = 8;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4356, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMinLum, s_gamerSettings[v1].config.hdrMinLum);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v3) = 8;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4376, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMaxLum, s_gamerSettings[v1].config.hdrMaxLum);
}

/*
==============
GamerProfile_UpdateSafeareaDvars_f
==============
*/
void GamerProfile_UpdateSafeareaDvars_f(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5734, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  v2 = v1;
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaHorz, s_gamerSettings[v2].config.safearea_adjusted_horizontal);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaVert, s_gamerSettings[v2].config.safearea_adjusted_vertical);
}

/*
==============
GamerProfile_UpdateLootCardDetailDvar_f
==============
*/
void GamerProfile_UpdateLootCardDetailDvar_f(void)
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5764, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_profileMenuOption_lootCardDetail, s_gamerSettings[v1].config.lootCardDetail);
}

/*
==============
GamerProfile_OptionsMenuDvarsFinish_f
==============
*/
void GamerProfile_OptionsMenuDvarsFinish_f(void)
{
  const char *v0; 
  int v1; 

  if ( Cmd_Argc() <= 1 )
  {
    v1 = Cmd_LocalControllerIndex();
  }
  else
  {
    v0 = Cmd_Argv(1);
    v1 = atoi(v0);
  }
  GamerProfile_OptionsMenuDvarsFinish(v1);
}

/*
==============
GamerProfile_ExecControllerBindings_f
==============
*/
void GamerProfile_ExecControllerBindings_f(void)
{
  unsigned int v0; 
  int v1; 
  unsigned int v2; 
  int v3; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 )
  {
    v3 = 8;
    v2 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5932, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, v3) )
      __debugbreak();
  }
  GamerProfile_ExecControllerBindings(v1);
}

/*
==============
OnBindingsConfig_f
==============
*/
void OnBindingsConfig_f()
{
  LocalClientNum_t v0; 
  __int64 v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  CL_Keys_ClearStates(v0);
  if ( (unsigned int)v1 >= 2 )
  {
    v6 = 2;
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v6) )
      __debugbreak();
    LODWORD(v7) = 2;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v7) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].frontEndSceneState[0] )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v2) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, v5) )
        __debugbreak();
    }
    if ( clientUIActives[v1].connectionState == CA_ACTIVE )
      CL_SetADS((LocalClientNum_t)v1, 0);
  }
}

/*
==============
AutoAimToggle_f
==============
*/
void AutoAimToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_autoAim; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_autoAim = &s_gamerSettings[v5].config.autoAim;
    v7 = "off";
    v8 = "Profile: Autoaim toggled %s for controller #%i.\n";
    if ( !*p_autoAim )
      v7 = "on";
    v6 = !*p_autoAim;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6023, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "off";
    if ( v6 )
      v7 = "on";
    v8 = "Profile: Autoaim set %s for controller #%i.\n";
    p_autoAim = &s_gamerSettings[v5].config.autoAim;
  }
  *p_autoAim = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
TargetAssistToggle_f
==============
*/
void TargetAssistToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_targetAssist; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6054, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_targetAssist = &s_gamerSettings[v5].config.targetAssist;
    v7 = "off";
    v8 = "Profile: Target assist toggled %s for controller #%i.\n";
    if ( !*p_targetAssist )
      v7 = "on";
    v6 = !*p_targetAssist;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6066, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "off";
    if ( v6 )
      v7 = "on";
    v8 = "Profile: Target assist set %s for controller #%i.\n";
    p_targetAssist = &s_gamerSettings[v5].config.targetAssist;
  }
  *p_targetAssist = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
SetColorBlindMode_f
==============
*/
void SetColorBlindMode_f()
{
  const char *v0; 
  __int64 v1; 
  unsigned __int8 v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6155, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v3, 0i64, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.colorBlindMode = v2;
    Com_Printf(14, "Profile: Render Color Blind Mode set to %i for controller #%i.\n", v2, (unsigned int)v1);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetColorBlindTargets_f
==============
*/
void SetColorBlindTargets_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  bool v3; 
  const char *v4; 
  const char *v5; 
  char *fmt; 
  int v7; 
  int v8; 

  if ( Cmd_Argc() >= 3 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    v3 = Cmd_ArgInt(2) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v8 = 8;
      v7 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6182, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
        __debugbreak();
    }
    LODWORD(fmt) = v1;
    v4 = "off";
    v5 = "off";
    s_gamerSettings[v1].config.colorBlindTargets = v2 | (2 * v3);
    if ( v3 )
      v5 = "on";
    if ( v2 )
      v4 = "on";
    Com_Printf(14, "Profile: Color Blind targets world: %s, ui: %s for controller #%i.\n", v4, v5, fmt);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
CrossPlayToggle_f
==============
*/
void CrossPlayToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_crossPlay; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6273, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_crossPlay = &s_gamerSettings[v5].config.crossPlay;
    v7 = "off";
    v8 = "Profile: Crossplay toggled %s for controller #%i.\n";
    if ( !*p_crossPlay )
      v7 = "on";
    v6 = !*p_crossPlay;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6285, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "off";
    if ( v6 )
      v7 = "on";
    v8 = "Profile: Crossplay set %s for controller #%i.\n";
    p_crossPlay = &s_gamerSettings[v5].config.crossPlay;
  }
  *p_crossPlay = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
LeanToggle_f
==============
*/
void LeanToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_leanEnabled; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6327, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_leanEnabled = &s_gamerSettings[v5].config.leanEnabled;
    v7 = "disabled";
    v8 = "Profile: Lean %s toggled for controller #%i.\n";
    if ( !*p_leanEnabled )
      v7 = "enabled";
    v6 = !*p_leanEnabled;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6339, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "disabled";
    if ( v6 )
      v7 = "enabled";
    v8 = "Profile: Lean %s set for controller #%i.\n";
    p_leanEnabled = &s_gamerSettings[v5].config.leanEnabled;
  }
  *p_leanEnabled = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
RumbleToggle_f
==============
*/
void RumbleToggle_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  bool v6; 
  const char *v7; 
  const char *v8; 
  bool *p_gpadRumble; 

  v5 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() < 2 )
  {
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6371, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    p_gpadRumble = &s_gamerSettings[v5].config.gpadRumble;
    v7 = "off";
    v8 = "Profile: Rumble toggled %s for controller #%i.\n";
    if ( !*p_gpadRumble )
      v7 = "on";
    v6 = !*p_gpadRumble;
  }
  else
  {
    v6 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v5 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6383, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, 8) )
      __debugbreak();
    v7 = "off";
    if ( v6 )
      v7 = "on";
    v8 = "Profile: Rumble set %s for controller #%i.\n";
    p_gpadRumble = &s_gamerSettings[v5].config.gpadRumble;
  }
  *p_gpadRumble = v6;
  Com_Printf(14, v8, v7, (unsigned int)v5, a5);
}

/*
==============
MPWeaponUnlock_f
==============
*/
void MPWeaponUnlock_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; 
  unsigned int v7; 
  bool v8; 
  __int64 v9; 
  const char *v10; 

  v6 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() != 3 )
    Com_PrintError(15, "Illegal MP Weapon Unlock Index (Please use 1-5).\n");
  v7 = Cmd_ArgInt(1);
  v8 = Cmd_ArgInt(2) != 0;
  if ( (unsigned int)v6 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6523, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, 8) )
    __debugbreak();
  v9 = v6;
  switch ( v7 )
  {
    case 1u:
      s_gamerSettings[v9].config.mp_weapon1 = v8;
      break;
    case 2u:
      s_gamerSettings[v9].config.mp_weapon2 = v8;
      break;
    case 3u:
      s_gamerSettings[v9].config.mp_weapon3 = v8;
      break;
    case 4u:
      s_gamerSettings[v9].config.mp_weapon4 = v8;
      break;
    case 5u:
      s_gamerSettings[v9].config.mp_weapon5 = v8;
      break;
    default:
      Com_PrintError(15, "Illegal MP Weapon Unlock Index (Please use 1-5).\n", v7 - 4, v9 * 8072, a5, a6);
      return;
  }
  v10 = "false";
  if ( v8 )
    v10 = "true";
  Com_Printf(14, "Profile: MP Weapon Unlock %d for controller #%i set to %s.\n", v7, (unsigned int)v6, v10);
}

/*
==============
SetHasEverPlayed_MainMenu_f
==============
*/
void SetHasEverPlayed_MainMenu_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6574, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.hasEverPlayed_MainMenu )
  {
    s_gamerSettings[v1].config.hasEverPlayed_MainMenu = 1;
    Com_Printf(14, "Profile: Marking that profile has ever played the main menu, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetAcceptedEULA_f
==============
*/
void SetAcceptedEULA_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6590, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.acceptedEULA )
  {
    s_gamerSettings[v1].config.acceptedEULA = 1;
    Com_Printf(14, "Profile: Marking that profile has accepted the EULA, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
ResetAcceptedEULA_f
==============
*/
void ResetAcceptedEULA_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6606, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( s_gamerSettings[v1].config.acceptedEULA )
  {
    s_gamerSettings[v1].config.acceptedEULA = 0;
    Com_Printf(14, "Profile: Marking that profile needs to accept the EULA again, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetMatchEndShouldRecordDLog_f
==============
*/
void SetMatchEndShouldRecordDLog_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6623, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.matchEndShouldRecordDLog )
  {
    s_gamerSettings[v1].config.matchEndShouldRecordDLog = 1;
    Com_Printf(14, "Profile: Marking that profile should record DLog at the end of a match or mission, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
ResetMatchEndShouldRecordDLog_f
==============
*/
void ResetMatchEndShouldRecordDLog_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6640, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( s_gamerSettings[v1].config.matchEndShouldRecordDLog )
  {
    s_gamerSettings[v1].config.matchEndShouldRecordDLog = 1;
    Com_Printf(14, "Profile: Marking that profile should record DLog at the end of a match or mission, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetMatchEndShouldRecordDLogInt_f
==============
*/
void SetMatchEndShouldRecordDLogInt_f()
{
  const char *v0; 
  int v1; 
  __int64 v2; 
  int *p_matchEndShouldRecordDLogInt; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = v1;
    if ( (unsigned int)v1 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6663, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v1, 0i64, 8) )
      __debugbreak();
    p_matchEndShouldRecordDLogInt = &s_gamerSettings[v2].config.matchEndShouldRecordDLogInt;
    if ( !*p_matchEndShouldRecordDLogInt )
    {
      *p_matchEndShouldRecordDLogInt = Cmd_ArgInt(1);
      Com_Printf(14, "Profile: Marking that profile should record DLog at the end of a match or mission, for controller #%i.\n", (unsigned int)v2);
    }
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
ResetMatchEndShouldRecordDLogInt_f
==============
*/
void ResetMatchEndShouldRecordDLogInt_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6682, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( s_gamerSettings[v1].config.matchEndShouldRecordDLogInt )
  {
    s_gamerSettings[v1].config.matchEndShouldRecordDLogInt = 0;
    Com_Printf(14, "Profile: Marking that profile should record DLog at the end of a match or mission, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetHasEverPlayed_SP_f
==============
*/
void SetHasEverPlayed_SP_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6699, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.hasEverPlayed_SP )
  {
    s_gamerSettings[v1].config.hasEverPlayed_SP = 1;
    Com_Printf(14, "Profile: Marking that profile has ever played SP, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetSpeechReduced_f
==============
*/
void SetSpeechReduced_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6716, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.speechReduced )
  {
    s_gamerSettings[v1].config.speechReduced = 1;
    Com_Printf(14, "Profile: Marking that profile knows use has seen Speech Functionality Reduced message, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
ClearSpeechReduced_f
==============
*/
void ClearSpeechReduced_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6733, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( s_gamerSettings[v1].config.speechReduced )
  {
    s_gamerSettings[v1].config.speechReduced = 0;
    Com_Printf(14, "Profile: Marking that profile knows use has not yet seen Speech Functionality Reduced message, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetHasEverPlayed_MP_f
==============
*/
void SetHasEverPlayed_MP_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6752, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.hasEverPlayed_MP )
  {
    s_gamerSettings[v1].config.hasEverPlayed_MP = 1;
    Com_Printf(14, "Profile: Marking that profile has ever played MP, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetHasEverPlayed_MLG_f
==============
*/
void SetHasEverPlayed_MLG_f()
{
  int v0; 
  __int64 v1; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6770, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( !s_gamerSettings[v1].config.hasEverPlayed_MLG )
  {
    s_gamerSettings[v1].config.hasEverPlayed_MLG = 1;
    Com_Printf(14, "Profile: Marking that profile has ever played MLG, for controller #%i.\n", (unsigned int)v1);
  }
}

/*
==============
SetHasEverSeen_CODAccount_f
==============
*/
void SetHasEverSeen_CODAccount_f()
{
  int v0; 
  const char *v1; 
  int v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 1;
  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_ArgInt(1);
    v3 = v2;
    if ( (unsigned int)v2 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6794, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, 8) )
      __debugbreak();
    if ( Cmd_Argc() == 3 )
    {
      v4 = Cmd_ArgInt(2);
      v0 = v4;
      if ( v4 > 1 )
      {
        LODWORD(v6) = 1;
        LODWORD(v5) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6800, ASSERT_TYPE_ASSERT, "( 0 ) <= ( value ) && ( value ) <= ( 1 )", "value not in [0, 1]\n\t%i not in [%i, %i]", v5, 0i64, v6) )
          __debugbreak();
      }
    }
    s_gamerSettings[v3].config.hasEverSeen_CODAccount = v0 == 1;
    Com_Printf(14, "Profile: Marking that profile has seen COD Account, for controller #%i.\n", (unsigned int)v3);
  }
  else
  {
    v1 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v1);
  }
}

/*
==============
SetVolume_f
==============
*/

void __fastcall SetVolume_f(double _XMM0_8)
{
  unsigned int v1; 
  unsigned int v2; 
  const char *v3; 
  double SoundVolume; 
  unsigned int v7; 
  int v8; 

  v1 = Cmd_LocalControllerIndex();
  v2 = v1;
  if ( v1 > 8 )
  {
    v8 = 8;
    v7 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6815, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v7, 0i64, v8) )
      __debugbreak();
  }
  if ( Cmd_Argc() >= 2 )
  {
    _XMM0_8 = Cmd_ArgFloat(1);
    __asm
    {
      vmaxss  xmm0, xmm0, xmm1
      vminss  xmm1, xmm0, cs:__real@40a00000; value
    }
    GamerProfile_SetSoundVolume(v2, *(float *)&_XMM1);
    SoundVolume = GamerProfile_GetSoundVolume(v2);
    Com_Printf(14, "Profile: Volume set to %.2f for controller #%i.\n", SoundVolume, v2);
  }
  else
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
}

/*
==============
SetFilmGrain_f
==============
*/
void SetFilmGrain_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  double v3; 
  double v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6836, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() >= 2 )
  {
    v3 = Cmd_ArgFloat(1);
    v4 = I_fclamp(*(float *)&v3, 0.0, 1.0);
    s_gamerSettings[v1].config.filmGrainAttenuation = *(float *)&v4;
    Com_Printf(14, "Profile: Film grain attenuation set to %.2f for controller #%i.\n", *(float *)&v4, (unsigned int)v1);
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetMountButton_f
==============
*/
void SetMountButton_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  ContextMountButtonEngage_t v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6857, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( (unsigned int)(v3 - 1) > 9 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid ContextMountButtonEngage_t argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.mountButtonConfig = v3;
      Com_Printf(14, "Profile: Context Mount Button (gamepad) set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetMountButtonKBM_f
==============
*/
void SetMountButtonKBM_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  ContextMountButtonEngage_t v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6882, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( (unsigned int)(v3 - 1) > 9 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Invalid ContextMountButtonEngage_t argument for \"%s\".\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.mountButtonConfigKBM = v3;
      Com_Printf(14, "Profile: Context Mount Button (gamepad) set to %d for controller #%i.\n", (unsigned int)v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetMountPullAwayDelayKBM_f
==============
*/
void SetMountPullAwayDelayKBM_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  unsigned int v3; 
  const char *v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6907, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() == 2 )
  {
    v3 = Cmd_ArgInt(1);
    if ( v3 > 0x1F4 )
    {
      v4 = Cmd_Argv(0);
      Com_PrintError(15, "Wrong argument value for \"%s\"; Expected 1 int argument, from 0 to 500\n", v4);
    }
    else
    {
      s_gamerSettings[v1].config.mountPullAwayDelayKBM = v3;
      Com_Printf(14, "Profile: Mount Pull Away delay set to %dms, for controller %d\n", v3, (unsigned int)v1);
    }
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Wrong number of arguments for \"%s\". Expected 1 int argument, from 0 to 500\n", v2);
  }
}

/*
==============
ToggleMountPullAwayEnabled_f
==============
*/
void ToggleMountPullAwayEnabled_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6931, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.mountPullAwayEnabled;
  s_gamerSettings[v1].config.mountPullAwayEnabled = v2;
  v3 = "OFF";
  if ( v2 )
    v3 = "ON";
  Com_Printf(14, "Profile: Mount Pull Away (gamepad) turned %s for controller %d\n", v3, (unsigned int)v1);
}

/*
==============
ToggleMountPullAwayEnabledKBM_f
==============
*/
void ToggleMountPullAwayEnabledKBM_f(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v8; 
  __int64 v9; 
  int v10; 
  int *p_mountPullAwayEnabledKBM; 
  int v12; 
  const char *v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 

  v8 = Cmd_LocalControllerIndex();
  v9 = v8;
  v10 = 0;
  if ( (unsigned int)v8 > 8 )
  {
    v17 = 8;
    v15 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6942, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v15, 0i64, v17) )
      __debugbreak();
    if ( (unsigned int)v9 > 8 )
    {
      LODWORD(v16) = 8;
      LODWORD(v14) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5183, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v14, 0i64, v16) )
        __debugbreak();
    }
  }
  p_mountPullAwayEnabledKBM = &s_gamerSettings[v9].config.mountPullAwayEnabledKBM;
  v12 = *p_mountPullAwayEnabledKBM;
  if ( (unsigned int)v9 > 8 )
  {
    LODWORD(v16) = 8;
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5191, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v14, 0i64, v16) )
      __debugbreak();
  }
  v13 = "OFF";
  if ( v12 != 1 )
    v13 = "ON";
  LOBYTE(v10) = v12 != 1;
  *p_mountPullAwayEnabledKBM = v10;
  Com_Printf(14, "Profile: Mount Pull Away (KBM) turned %s for controller %d\n", v13, (unsigned int)v9, a5, a6, a7, a8);
}

/*
==============
SetBlacklevel_f
==============
*/
void SetBlacklevel_f()
{
  unsigned int v0; 
  const char *v1; 
  double v2; 
  double v3; 
  double BlackLevel; 

  v0 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_ArgFloat(1);
    v3 = I_fclamp(*(float *)&v2, -0.99000001, 0.99000001);
    GamerProfile_SetBlackLevel(v0, *(float *)&v3);
    BlackLevel = GamerProfile_GetBlackLevel(v0);
    Com_Printf(14, "Profile: Blacklevel set to %.2f for controller #%i.\n", BlackLevel, v0);
  }
  else
  {
    v1 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v1);
  }
}

/*
==============
SetHdrMinLum_f
==============
*/
void SetHdrMinLum_f()
{
  unsigned int v0; 
  const char *v1; 
  double v2; 
  double v3; 
  double HDRMinLum; 

  v0 = Cmd_LocalControllerIndex();
  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_ArgFloat(1);
    v3 = I_fclamp(*(float *)&v2, 0.0, 0.2);
    GamerProfile_SetHDRMinLum(v0, *(float *)&v3);
    HDRMinLum = GamerProfile_GetHDRMinLum(v0);
    Com_Printf(14, "Profile: HdrMinLum set to %.2f for controller #%i.\n", HDRMinLum, v0);
  }
  else
  {
    v1 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v1);
  }
}

/*
==============
SetHdrMaxLum_f
==============
*/
void SetHdrMaxLum_f()
{
  unsigned int v0; 
  unsigned int v1; 
  const char *v2; 
  double v3; 
  double v4; 
  double HDRMaxLum; 
  unsigned int v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 )
  {
    v7 = 8;
    v6 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6991, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() >= 2 )
  {
    v3 = Cmd_ArgFloat(1);
    v4 = I_fclamp(*(float *)&v3, 0.60000002, 1.0);
    GamerProfile_SetHDRMaxLum(v1, *(float *)&v4);
    HDRMaxLum = GamerProfile_GetHDRMaxLum(v1);
    Com_Printf(14, "Profile: HdrMaxLum set to %.2f for controller #%i.\n", HDRMaxLum, v1);
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v2);
  }
}

/*
==============
SetHdrGamma_f
==============
*/
void SetHdrGamma_f()
{
  int v0; 
  __int64 v1; 
  const char *v2; 
  double v3; 
  double v4; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() >= 2 )
  {
    v3 = Cmd_ArgFloat(1);
    v4 = I_fclamp(*(float *)&v3, 0.5, 1.5);
    s_gamerSettings[v1].config.hdrGamma = *(float *)&v4;
    Com_Printf(14, "Profile: HdrGamma set to %.2f for controller #%i.\n", *(float *)&v4, (unsigned int)v1);
  }
  else
  {
    v2 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v2);
  }
}

/*
==============
ToggleMotionBlur_f
==============
*/
void ToggleMotionBlur_f()
{
  int v0; 
  __int64 v1; 
  bool *p_motionBlurEnabled; 
  char v3; 
  char v4; 
  const char *v5; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7112, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_motionBlurEnabled = &s_gamerSettings[v1].config.motionBlurEnabled;
  v3 = *p_motionBlurEnabled;
  if ( Cmd_Argc() < 2 )
  {
    v4 = v3 == 0;
  }
  else
  {
    v4 = Cmd_ArgInt(1) != 0;
    if ( v4 == v3 )
      return;
  }
  *p_motionBlurEnabled = v4;
  v5 = "off";
  if ( v4 )
    v5 = "on";
  Com_Printf(14, "Profile: motion blurr toggled %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
ToggleWeaponMotionBlur_f
==============
*/
void ToggleWeaponMotionBlur_f()
{
  int v0; 
  __int64 v1; 
  bool *p_weaponMotionBlurEnabled; 
  char v3; 
  char v4; 
  const char *v5; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7138, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  p_weaponMotionBlurEnabled = &s_gamerSettings[v1].config.weaponMotionBlurEnabled;
  v3 = *p_weaponMotionBlurEnabled;
  if ( Cmd_Argc() < 2 )
  {
    v4 = v3 == 0;
  }
  else
  {
    v4 = Cmd_ArgInt(1) != 0;
    if ( v4 == v3 )
      return;
  }
  *p_weaponMotionBlurEnabled = v4;
  v5 = "off";
  if ( v4 )
    v5 = "on";
  Com_Printf(14, "Profile: motion blurr toggled %s for controller #%i.\n", v5, (unsigned int)v1);
}

/*
==============
SetMinimapStyle_f
==============
*/
void SetMinimapStyle_f()
{
  int v0; 
  __int64 v1; 
  int v2; 
  int *p_minimapStyle; 
  unsigned int v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v9 = 8;
    v7 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7164, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v5 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v5);
  }
  else
  {
    v2 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v8) = 8;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7055, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v8) )
        __debugbreak();
    }
    p_minimapStyle = &s_gamerSettings[v1].config.minimapStyle;
    v4 = *p_minimapStyle & 0xFFFFFFFE;
    if ( v2 >= 1 )
      v4 = *p_minimapStyle | 1;
    *p_minimapStyle = v4;
  }
}

/*
==============
SetMinimapRotationEnabled_f
==============
*/
void SetMinimapRotationEnabled_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  int *p_minimapStyle; 
  unsigned int v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7181, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() < 2 )
  {
    v5 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v5);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v7) = 8;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7079, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
        __debugbreak();
    }
    p_minimapStyle = &s_gamerSettings[v1].config.minimapStyle;
    v4 = *p_minimapStyle & 0xFFFFFFFD;
    if ( !v2 )
      v4 = *p_minimapStyle | 2;
    *p_minimapStyle = v4;
  }
}

/*
==============
SetUseNumbersForCompassCardinalDirText_f
==============
*/
void SetUseNumbersForCompassCardinalDirText_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  const char *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v8 = 8;
    v6 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7198, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v8) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v4 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v4);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v7) = 8;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7103, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x1000u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 12;
  }
}

/*
==============
SetAdsSensitivityMultiplierTiming_f
==============
*/
void SetAdsSensitivityMultiplierTiming_f()
{
  int v0; 
  __int64 v1; 
  int v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7215, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3278, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.adsSensitivityMultiplierTiming = v2;
  }
}

/*
==============
SetMouseMonitorDistanceCoef_f
==============
*/
void SetMouseMonitorDistanceCoef_f()
{
  int v0; 
  __int64 v1; 
  double v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7231, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgFloat(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3308, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.mouseMonitorDistanceCoef = *(float *)&v2;
  }
}

/*
==============
SetMouseFilter_f
==============
*/
void SetMouseFilter_f()
{
  int v0; 
  __int64 v1; 
  double v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7247, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgFloat(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3338, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.mouseFilter = *(float *)&v2;
  }
}

/*
==============
SetFreeLook_f
==============
*/
void SetFreeLook_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7263, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3368, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.freeLook = v2;
  }
}

/*
==============
SetMouseAccel_f
==============
*/
void SetMouseAccel_f()
{
  int v0; 
  __int64 v1; 
  double v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7280, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgFloat(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3398, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.mouseAccel = *(float *)&v2;
  }
}

/*
==============
SetMouseSmoothing_f
==============
*/
void SetMouseSmoothing_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7297, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3428, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.mouseSmoothing = v2;
  }
}

/*
==============
SetInvertPitchGamepad_f
==============
*/
void SetInvertPitchGamepad_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7314, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3937, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.invertPitchGamepad = v2;
  }
}

/*
==============
SetInvertPitchFlyingGamepad_f
==============
*/
void SetInvertPitchFlyingGamepad_f()
{
  int v0; 
  __int64 v1; 
  bool v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7331, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3959, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.invertPitchFlyingGamepad = v2;
  }
}

/*
==============
SetInvertPitchKBM_f
==============
*/
void SetInvertPitchKBM_f()
{
  int v0; 
  __int64 v1; 
  LookInversionType_t v2; 
  const char *v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v7 = 8;
    v5 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7348, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
  {
    v3 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v3);
  }
  else
  {
    v2 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3984, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v6) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.invertPitchKBM = v2;
  }
}

/*
==============
SetSunShadowSplitscreen_f
==============
*/
void SetSunShadowSplitscreen_f()
{
  int v0; 
  __int64 v1; 
  unsigned __int8 v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7369, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() >= 2 )
  {
    v2 = Cmd_ArgInt(1);
    s_gamerSettings[v1].config.splitscreenSunShadows = v2;
    Com_Printf(14, "Profile: sun shadow splitscreen has been set to index %i for controller #%i.\n", v2, (unsigned int)v1);
  }
}

/*
==============
DevReset_f
==============
*/
void DevReset_f()
{
  int v0; 
  __int64 v1; 
  int v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  v2 = 0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7398, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  memset_0(&s_gamerSettings[v1], 0, sizeof(GamerSettingState));
  SetProfileDefaults(&s_gamerSettings[v1], v1);
  do
    SetProfileDDLTypeDefaults(v1, (ProfileDDLTypes)v2++, 1);
  while ( v2 < 3 );
}

/*
==============
DevTest_f
==============
*/
void DevTest_f()
{
  int v0; 
  __int64 v1; 
  __int64 v2; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7413, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v0, 0i64, 8) )
    __debugbreak();
  v2 = v1;
  Core_strcpy(s_gamerSettings[v2].config.gpadButtonsConfig, 0x20ui64, "hahahlol");
  Core_strcpy(s_gamerSettings[v2].config.gpadSticksConfig, 0x20ui64, "no_no fu");
}

/*
==============
SetGPadUseReloadProfile_f
==============
*/
void SetGPadUseReloadProfile_f()
{
  const char *v0; 
  __int64 v1; 
  unsigned __int8 v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7550, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v3, 0i64, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.gpadUseReloadProfile = v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
ToggleEnableGamepad_f
==============
*/
bool ToggleEnableGamepad_f()
{
  unsigned int v0; 
  int v1; 
  bool v2; 
  lua_State *v3; 
  LocalClientNum_t ClientFromController; 
  bool result; 
  unsigned int v6; 
  int v7; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( v0 > 8 )
  {
    v7 = 8;
    v6 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7574, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
      __debugbreak();
  }
  if ( Cmd_Argc() < 2 )
    v2 = !GamerProfile_GetGamepadEnabled(v1);
  else
    v2 = Cmd_ArgInt(1) != 0;
  GamerProfile_SetGamepadEnabled(v1, v2);
  v3 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v1);
  result = LUI_BeginEvent(ClientFromController, "input_method_changed", v3);
  if ( result )
    return LUI_EndEvent(LUI_luaVM);
  return result;
}

/*
==============
SetAdsHighZoomGamepadSensitivityMultiplier_f
==============
*/
void SetAdsHighZoomGamepadSensitivityMultiplier_f()
{
  const char *v0; 
  __int64 v1; 
  double v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgFloat(1);
    if ( (unsigned int)v1 >= 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2894, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.adsHighZoomGamepadSensitivityMultiplier = (float)(unsigned __int8)(int)*(float *)&v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetAdsLowZoomGamepadSensitivityMultiplier_f
==============
*/
void SetAdsLowZoomGamepadSensitivityMultiplier_f()
{
  const char *v0; 
  __int64 v1; 
  double v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgFloat(1);
    if ( (unsigned int)v1 >= 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2910, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.adsLowZoomGamepadSensitivityMultiplier = (float)(unsigned __int8)(int)*(float *)&v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetDefaultJuggMusicEnabled_f
==============
*/
void SetDefaultJuggMusicEnabled_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7637, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v3, 0i64, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.juggMusicEnableDefault = v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetAutoSprintGamepad_f
==============
*/
void SetAutoSprintGamepad_f()
{
  const char *v0; 
  __int64 v1; 
  int v2; 
  int v3; 
  __int64 v4; 
  const dvar_t *v5; 
  int v6; 
  int v7; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = 0;
    v3 = Cmd_ArgInt(1);
    if ( (unsigned int)v1 > 8 )
    {
      v7 = 8;
      v6 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7660, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v7) )
        __debugbreak();
    }
    v4 = v1;
    v5 = DVARBOOL_auto_sprint_enabled;
    if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
      v2 = v3;
    s_gamerSettings[v4].config.autoSprintGamepad = v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetAutoSprintKBM_f
==============
*/
void SetAutoSprintKBM_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  const dvar_t *v4; 
  int v5; 
  int v6; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v6 = 8;
      v5 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7705, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v6) )
        __debugbreak();
    }
    v3 = v1;
    v4 = DVARBOOL_auto_sprint_enabled;
    if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    s_gamerSettings[v3].config.autoSprintKBM = v4->current.enabled && v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetAutoForwardInputSequenceEnable_f
==============
*/
void SetAutoForwardInputSequenceEnable_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  int v3; 
  int v4; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v4 = 8;
      v3 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7750, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v3, 0i64, v4) )
        __debugbreak();
    }
    s_gamerSettings[v1].config.autoForwardInputSequenceEnable = v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetAimAssistFovScale_f
==============
*/
void SetAimAssistFovScale_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7781, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~8u;
    s_gamerSettings[v3].config.profileFlags |= 8 * v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsSPNew_f
==============
*/
void SetIsSPNew_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7819, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x10u;
    s_gamerSettings[v3].config.profileFlags |= 16 * v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsMPNew_f
==============
*/
void SetIsMPNew_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7853, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x20u;
    s_gamerSettings[v3].config.profileFlags |= 32 * v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsCPNew_f
==============
*/
void SetIsCPNew_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7887, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x40u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 6;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsBRNotNew_f
==============
*/
void SetIsBRNotNew_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7921, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x80u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 7;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetArmorPlateApplyAllGamepad_f
==============
*/
void SetArmorPlateApplyAllGamepad_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7955, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~4u;
    s_gamerSettings[v3].config.profileFlags |= 4 * v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetArmorPlateApplyAllKBM_f
==============
*/
void SetArmorPlateApplyAllKBM_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7993, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~2u;
    s_gamerSettings[v3].config.profileFlags |= 2 * v2;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsParachuteAutoDeployKBMDisabled_f
==============
*/
void SetIsParachuteAutoDeployKBMDisabled_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8031, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x100u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 8;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetIsParachuteAutoDeployGamepadDisabled_f
==============
*/
void SetIsParachuteAutoDeployGamepadDisabled_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8069, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x200u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 9;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
SetWarTrackPassengerEnable_f
==============
*/
void SetWarTrackPassengerEnable_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 > 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8107, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x2000u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 13;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
ToggleIsUsingAnonymization_f
==============
*/
__int64 ToggleIsUsingAnonymization_f()
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  char v3; 
  __int64 result; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v0 = Cmd_LocalControllerIndex();
  v1 = v0;
  if ( (unsigned int)v0 > 8 )
  {
    v8 = 8;
    v6 = v0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8166, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v8) )
      __debugbreak();
  }
  v2 = v1;
  v3 = ~(unsigned __int8)((unsigned __int64)(unsigned int)s_gamerSettings[v1].config.profileFlags >> 10);
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8158, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v5, 0i64, v7) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.profileFlags &= ~0x400u;
  result = (unsigned __int8)(v3 & 1) << 10;
  s_gamerSettings[v2].config.profileFlags |= result;
  return result;
}

/*
==============
SetUseHoldKBMProfile_f
==============
*/
void SetUseHoldKBMProfile_f()
{
  const char *v0; 
  __int64 v1; 
  bool v2; 
  __int64 v3; 
  int v4; 
  int v5; 

  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_LocalControllerIndex();
    v2 = Cmd_ArgInt(1) != 0;
    if ( (unsigned int)v1 >= 8 )
    {
      v5 = 8;
      v4 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8184, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = v1;
    s_gamerSettings[v3].config.profileFlags &= ~0x800u;
    s_gamerSettings[v3].config.profileFlags |= v2 << 11;
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
GamerProfile_AutoAimToggle
==============
*/
void GamerProfile_AutoAimToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6011, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.autoAim;
  s_gamerSettings[v1].config.autoAim = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: Autoaim toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_AwaitingDelete
==============
*/
bool GamerProfile_AwaitingDelete(int controllerIndex)
{
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1150, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  return 0;
}

/*
==============
GamerProfile_BBPrintConfig
==============
*/
void GamerProfile_BBPrintConfig(const int controllerIndex, const char *optionName, const char *prevConfigVal, const char *newConfigVal)
{
  int GameTime; 
  int v9; 
  LocalClientNum_t outLocalClientNum[6]; 

  if ( GamerProfile_UseAnalytics() && BB_IsInitializedAndActive() )
  {
    if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) )
    {
      v9 = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9438, ASSERT_TYPE_ASSERT, "(isMapped)", "%s\n\tGamerprofile analytics are enabled, but failed to find localClientNum for controller %i.", "isMapped", v9) )
        __debugbreak();
    }
    GameTime = GamerProfile_BBPrintGetGameTime(outLocalClientNum[0]);
    GamerProfile_BBPrintConfigWithGameTime(controllerIndex, optionName, GameTime, prevConfigVal, newConfigVal);
  }
}

/*
==============
GamerProfile_BBPrintConfigWithGameTime
==============
*/
void GamerProfile_BBPrintConfigWithGameTime(const int controllerIndex, const char *optionName, const int gametime, const char *prevConfigVal, const char *newConfigVal)
{
  unsigned __int64 UserId; 
  bool v10; 
  DLogContext context; 
  char buffer[4096]; 

  if ( GamerProfile_UseAnalytics() && BB_IsInitializedAndActive() && gametime >= 0 )
  {
    UserId = DLog_GetUserId(controllerIndex);
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v10 = DLog_BeginEvent(&context, "gamerprofile_change");
      context.autoEndEvent = 1;
      if ( v10 && DLog_Int32(&context, "gametime", gametime) && DLog_String(&context, "option", optionName, 0) && DLog_String(&context, "prevconfig", prevConfigVal, 0) && DLog_String(&context, "newconfig", newConfigVal, 0) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
GamerProfile_BBPrintGetGameTime
==============
*/
__int64 GamerProfile_BBPrintGetGameTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  __int64 v3; 
  ClActiveClient *Client; 
  int v5; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v1 = localClientNum;
  v2 = -1;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  v3 = v1;
  if ( clientUIActives[v1].frontEndSceneState[0] != 1 )
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( !clientUIActives[v3].frontEndSceneState[0] && clientUIActives[v3].cgameInitialized )
    {
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v1);
      if ( Client )
      {
        v5 = Client->GetServerTime(Client);
        if ( v5 > 0 )
          return (unsigned int)v5;
      }
    }
  }
  return v2;
}

/*
==============
GamerProfile_CheckBBPrintInitialConfig
==============
*/
void GamerProfile_CheckBBPrintInitialConfig(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  int GameTime; 
  int ControllerFromClient; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", localClientNum, cg_t::ms_allocatedCount) )
    __debugbreak();
  if ( !cg_t::ms_cgArray[v1] )
  {
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v7) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v7) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( v2 )
  {
    if ( !v2->isGamerprofileBBTransmitted && BB_IsInitializedAndActive() && GamerProfile_UseAnalytics() )
    {
      GameTime = GamerProfile_BBPrintGetGameTime((const LocalClientNum_t)v1);
      if ( GameTime >= 0 )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
        v5 = ControllerFromClient;
        if ( (unsigned int)ControllerFromClient > 8 )
        {
          LODWORD(v6) = ControllerFromClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9479, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, 8) )
            __debugbreak();
        }
        GamerProfile_BBPrintConfigWithGameTime(v5, CONFIG_MOUNT, GameTime, CONFIG_MOUNT_OPTIONS[s_gamerSettings[v5].config.mountButtonConfig], CONFIG_MOUNT_OPTIONS[s_gamerSettings[v5].config.mountButtonConfig]);
        v2->isGamerprofileBBTransmitted = 1;
      }
    }
  }
}

/*
==============
GamerProfile_ColorBlindMode
==============
*/
__int64 GamerProfile_ColorBlindMode(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6193, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.colorBlindMode;
}

/*
==============
GamerProfile_ColorBlindTargets
==============
*/
__int64 GamerProfile_ColorBlindTargets(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6201, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.colorBlindTargets;
}

/*
==============
GamerProfile_CrossPlayToggle
==============
*/
void GamerProfile_CrossPlayToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6273, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.crossPlay;
  s_gamerSettings[v1].config.crossPlay = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: Crossplay toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_DebugDrawFullscreenInfo
==============
*/

void __fastcall GamerProfile_DebugDrawFullscreenInfo(double _XMM0_8)
{
  const dvar_t *v1; 
  bool v2; 
  const ScreenPlacement *v3; 
  char *gpadBRButtonsConfig; 
  int i; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  double v9; 
  const char *v10; 
  const char *v11; 
  double v12; 
  double SoundLicencedContentVolume; 
  double SoundVolume; 
  const char *v15; 
  float v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  const char *v28; 
  const char *v29; 
  const char *LocalClientName; 
  char v31; 
  const char *v32; 
  const char *v33; 
  LocalClientNum_t ClientFromController; 
  bool IsControllerActive; 
  const char *v36; 
  float v38; 
  float v39; 
  const char *v40; 
  const char *v41; 
  const char *v42; 
  float v47; 
  char *fmt; 
  __int64 horzAlign; 
  __int64 horzAligna; 
  __int64 vertAlign; 
  __int64 v52; 
  __int64 style; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  const char *v66; 
  const char *v67; 
  const char *v68; 
  const char *v69; 
  const char *v70; 
  const char *v71; 
  const char *v72; 
  const char *v73; 
  const char *v74; 
  const char *v75; 
  const char *v76; 
  const char *v77; 
  const char *v78; 
  GfxFont *font; 
  char dest[2048]; 

  if ( !cls.consoleFont )
    return;
  v1 = DVARINT_debugOverlay;
  if ( !DVARINT_debugOverlay )
    return;
  Dvar_CheckFrontendServerThread(DVARINT_debugOverlay);
  if ( v1->current.integer != 4 )
    return;
  if ( activeScreenPlacementMode == SCRMODE_FULL )
    goto LABEL_10;
  if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
  {
    if ( activeScreenPlacementMode == SCRMODE_INVALID )
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
    else
      v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
    if ( v2 )
      __debugbreak();
LABEL_10:
    v3 = &scrPlaceFull;
    goto LABEL_11;
  }
  v3 = scrPlaceViewDisplay;
LABEL_11:
  font = cls.smallDevFont;
  if ( cls.smallDevFont )
  {
    if ( cls.whiteMaterial )
    {
      *(_OWORD *)&_XMM0_8 = LODWORD(FLOAT_480_0);
      CL_DrawStretchPic(v3, 0.0, 0.0, 640.0, 480.0, 4, 4, 0.0, 0.0, 1.0, 1.0, &MY_BACKCOLOR, cls.whiteMaterial);
    }
    gpadBRButtonsConfig = s_gamerSettings[0].config.gpadBRButtonsConfig;
    for ( i = 0; i < 8; ++i )
    {
      if ( (unsigned int)i > 7 )
      {
        LODWORD(horzAlign) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1129, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", horzAlign) )
          __debugbreak();
      }
      v6 = "no";
      if ( gpadBRButtonsConfig[101] )
        v6 = "^2yes";
      v7 = "no";
      v8 = "no";
      if ( *(gpadBRButtonsConfig - 56) )
        v7 = "^2yes";
      v9 = *(float *)(gpadBRButtonsConfig - 91);
      if ( *(gpadBRButtonsConfig - 57) )
        v8 = "^2yes";
      v66 = v8;
      v10 = "no";
      if ( *(gpadBRButtonsConfig - 58) )
        v10 = "^2yes";
      v67 = v10;
      v11 = "no";
      if ( *(gpadBRButtonsConfig - 59) )
        v11 = "^2yes";
      v68 = v11;
      v60 = *(_DWORD *)(gpadBRButtonsConfig - 67);
      v61 = *(_DWORD *)(gpadBRButtonsConfig - 71);
      v62 = *(_DWORD *)(gpadBRButtonsConfig - 75);
      v63 = *(_DWORD *)(gpadBRButtonsConfig - 79);
      v64 = *(_DWORD *)(gpadBRButtonsConfig - 83);
      v65 = *(_DWORD *)(gpadBRButtonsConfig + 2861);
      v12 = *(float *)(gpadBRButtonsConfig - 95);
      SoundLicencedContentVolume = GamerProfile_GetSoundLicencedContentVolume(i);
      SoundVolume = GamerProfile_GetSoundVolume(i);
      *(float *)&_XMM0_8 = GamerProfile_GetBlackLevel(i);
      v15 = "no";
      v16 = *(float *)(gpadBRButtonsConfig - 191);
      if ( *(gpadBRButtonsConfig - 47) )
        v15 = "^2yes";
      v69 = v15;
      v17 = "no";
      if ( *(gpadBRButtonsConfig - 53) )
        v17 = "^2yes";
      v70 = v17;
      v18 = "no";
      if ( *(gpadBRButtonsConfig - 54) )
        v18 = "^2yes";
      v71 = v18;
      v19 = "no";
      if ( gpadBRButtonsConfig[2768] )
        v19 = "^2yes";
      v72 = v19;
      v20 = "no";
      if ( gpadBRButtonsConfig[2767] )
        v20 = "^2yes";
      v73 = v20;
      v21 = "no";
      if ( gpadBRButtonsConfig[2766] )
        v21 = "^2yes";
      v74 = v21;
      v22 = "no";
      if ( gpadBRButtonsConfig[2765] )
        v22 = "^2yes";
      v75 = v22;
      v23 = "no";
      v24 = *(float *)&_XMM0_8;
      v25 = *(float *)(gpadBRButtonsConfig - 99);
      v26 = *(float *)(gpadBRButtonsConfig - 103);
      v27 = *(float *)(gpadBRButtonsConfig - 187);
      if ( gpadBRButtonsConfig[2764] )
        v23 = "^2yes";
      v76 = v23;
      v28 = "no";
      if ( *(gpadBRButtonsConfig - 33) )
        v28 = "^2yes";
      v77 = v28;
      v29 = "no";
      if ( *(gpadBRButtonsConfig - 194) )
        v29 = "yes";
      v78 = v29;
      if ( *(gpadBRButtonsConfig - 195) )
      {
        LocalClientName = Live_GetLocalClientName(i);
        v31 = *(gpadBRButtonsConfig - 195);
        v32 = LocalClientName;
      }
      else
      {
        v32 = "N/A";
        v31 = 0;
      }
      v33 = "no";
      if ( v31 )
        v33 = "^2yes";
      if ( CL_Mgr_IsControllerActive(i) )
      {
        if ( CL_Mgr_GetClientFromController(i) == LOCAL_CLIENT_INVALID )
          ClientFromController = LOCAL_CLIENT_INVALID;
        else
          ClientFromController = CL_Mgr_GetClientFromController(i);
      }
      else
      {
        ClientFromController = LOCAL_CLIENT_INVALID;
      }
      IsControllerActive = CL_Mgr_IsControllerActive(i);
      v36 = "(not active)";
      if ( IsControllerActive )
        v36 = "^2-ACTIVE-";
      LODWORD(v59) = v60;
      LODWORD(v58) = v61;
      LODWORD(v57) = v62;
      LODWORD(v56) = v63;
      LODWORD(v55) = v64;
      LODWORD(v54) = v65;
      __asm { vxorpd  xmm0, xmm0, xmm0 }
      LODWORD(horzAlign) = ClientFromController;
      Com_sprintf(dest, 0x800ui64, "Controller #%i^7\n  %s^7\nLocalClient         - #%i^7\nisProfileLoggedIn   - %s^7\ngamertag            - %s^7\n^7\nerrorOnRead         - %s^7\ngpadRumble          - %s^7\nmp_weapon1          - %s^7\nmp_weapon2          - %s^7\nmp_weapon3          - %s^7\nmp_weapon4          - %s^7\nmp_weapon5\t\t\t - %s^7\nautoAim             - %s^7\ntargetAssist        - %s^7\nviewVertSensitivity - %.2f^7\nviewHorzSensitivity - %.2f^7\nsprintCancelsReload - %s^7\ngpadDeflectL        - %.2f^7\ngpadDeflectR        - %.2f^7\nblacklevel          - %.2f^7\nsnd_volume          - %.2f^7\nsnd_lic_cont_vol    - %.2f^7\nsafeAreaAdjust_h    - %.2f^7\nsafeAreaAdjust_v    - %.2f^7\nHUDBoundsAdjust_h   - %.2f^7\nHUDBoundsAdjust_v   - %.2f^7\nlootCardDetail      - %i^7\nplayTimeSP          - %i^7\nplayTimeMP          - %i^7\nplayTimeCP          - %i^7\npercentCompleteSP   - %i^7\npercentCompleteMP   - %i^7\nhasEverPlayed_MM    - %s^7\nhasEverPlayed_SP    - %s^7\nhasEverPlayed_MP    - %s^7\nhasEverPlayed_MLG   - %s^7\nspeechReduced       - %s^7\n^7\n\"%s\"^7\n\"%s\"^7\n\"%s\"^7\n", (unsigned int)i, v36, horzAlign, v33, v32, v78, v77, v76, v75, v74, v73, v72, v71, v70, v16, v27, v69, v26, v25, v24, SoundVolume, SoundLicencedContentVolume, v12, v9, *(double *)&_XMM0, *((double *)&_XMM0 + 1), v54, v55, v56, v57, v58, v59, v68, v67, v66, v7, v6, gpadBRButtonsConfig - 32, gpadBRButtonsConfig, gpadBRButtonsConfig + 32);
      v39 = (float)i;
      v38 = v39;
      UI_DrawText(v3, dest, 2048, font, (float)(v39 * MY_CONTROLLEROFFSET) + MY_X, MY_Y1, 4, 4, MY_SCALE_0, &colorWhite, 3);
      v40 = "no";
      if ( gpadBRButtonsConfig[137] )
        v40 = "^2yes";
      v41 = "no";
      v42 = "no";
      if ( gpadBRButtonsConfig[130] )
        v41 = "^2yes";
      if ( gpadBRButtonsConfig[129] )
        v42 = "^2yes";
      LODWORD(v52) = *(_DWORD *)(gpadBRButtonsConfig + 125);
      LODWORD(vertAlign) = *(_DWORD *)(gpadBRButtonsConfig + 121);
      LODWORD(horzAligna) = *(_DWORD *)(gpadBRButtonsConfig + 117);
      LODWORD(fmt) = *(_DWORD *)(gpadBRButtonsConfig + 113);
      LODWORD(style) = *(_DWORD *)(gpadBRButtonsConfig + 133);
      Com_sprintf(dest, 0x800ui64, "curDifficulty     - %i^7\ntakeCoverWarnings - %i^7\ncheatPoints       - %i^7\ncheat_items_set1  - %i^7\ncheat_items_set2  - %i^7\nspecialistMode\t   - %s^7\nyoloMode\t\t   - %s^7\nyoloState\t\t   - %d^7\nshowSubtitles     - %s^7\n", *(unsigned int *)(gpadBRButtonsConfig + 109), fmt, horzAligna, vertAlign, v52, v42, v41, style, v40);
      UI_DrawText(v3, dest, 2048, font, (float)(v39 * MY_CONTROLLEROFFSET) + MY_X, MY_Y2, 4, 4, MY_SCALE_0, &colorWhite, 3);
      Com_sprintf(dest, 0x800ui64, "\"%s\"^7\n%s^7\n", gpadBRButtonsConfig + 204, gpadBRButtonsConfig + 140);
      _XMM1 = LODWORD(MY_X_BACK);
      _XMM0 = (unsigned int)i;
      __asm
      {
        vpcmpeqd xmm3, xmm0, xmm2
        vblendvps xmm0, xmm1, xmm7, xmm3
      }
      v47 = (float)((float)(v39 * MY_CONTROLLEROFFSET) + MY_X) - *(float *)&_XMM0;
      *(_OWORD *)&_XMM0_8 = LODWORD(MY_SCALE_0);
      UI_DrawText(v3, dest, 2048, font, v47, (float)(v38 * MY_Y4_STEP) + MY_Y4, 4, 4, MY_SCALE_0, &colorWhite, 3);
      gpadBRButtonsConfig += 8072;
    }
  }
}

/*
==============
GamerProfile_DeleteProfile
==============
*/
void GamerProfile_DeleteProfile(int controllerIndex)
{
  ;
}

/*
==============
GamerProfile_DisableChatForAllActiveClients
==============
*/
void GamerProfile_DisableChatForAllActiveClients(void)
{
  int v0; 
  __int64 v1; 
  lua_State *v2; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t outLocalClientNum; 

  v0 = 0;
  v1 = 0i64;
  do
  {
    if ( CL_Mgr_IsControllerMappedToClient(v0, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
    {
      v2 = LUI_luaVM;
      ClientFromController = CL_Mgr_GetClientFromController(v0);
      if ( LUI_BeginEvent(ClientFromController, "text_chat_updated", v2) )
      {
        LUI_SetTableBool("active", 0, LUI_luaVM);
        LUI_SetTableInt("controller", v1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 8 );
}

/*
==============
GamerProfile_EnsureMountedDDL
==============
*/
void GamerProfile_EnsureMountedDDL(int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v2; 
  __int64 v3; 
  bool *v4; 
  int v6; 

  v2 = controllerIndex;
  v3 = ddlType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1292, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = &s_gamerSettings[v2].ddlMounted[v3];
  if ( !*v4 )
    *v4 = GamerProfile_MountDDL(v2, (ProfileDDLTypes)v3);
}

/*
==============
GamerProfile_ExecControllerBindings
==============
*/
void GamerProfile_ExecControllerBindings(int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  __int64 v3; 
  bool IsBRGameType; 
  char *gpadBRButtonsConfig; 
  const char *ConfigFromWhitelist; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  unsigned __int8 ActiveGameMode; 
  LocalClientNum_t outLocalClientNum; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2430, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum) )
  {
    if ( MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator(outLocalClientNum) )
    {
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, "exec gamepad_codcaster.cfg\n", 0);
    }
    else if ( GamerProfile_GetGamepadEnabled(v1) )
    {
      ClientFromController = CL_Mgr_GetClientFromController(v1);
      v3 = v1;
      IsBRGameType = CL_Main_IsBRGameType(ClientFromController);
      gpadBRButtonsConfig = s_gamerSettings[0].config.gpadBRButtonsConfig;
      if ( !IsBRGameType )
        gpadBRButtonsConfig = s_gamerSettings[0].config.gpadButtonsConfig;
      ConfigFromWhitelist = GetConfigFromWhitelist(&gpadBRButtonsConfig[v3 * 8072], CONFIG_WHITELIST_BUTTONS, 35);
      v7 = GetConfigFromWhitelist(s_gamerSettings[v3].config.gpadSticksConfig, CONFIG_WHITELIST_STICKS, 6);
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, "exec gamepad_common.cfg\n", 0);
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, "exec buttons_default\n", 0);
      v8 = j_va("exec %s\n", ConfigFromWhitelist);
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, v8, 0);
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, "exec thumbstick_default.cfg\n", 0);
      v9 = j_va("exec %s\n", v7);
      Cmd_ExecuteSingleCommand_Internal(outLocalClientNum, v1, v9, 0);
    }
    else
    {
      CL_Keys_UnbindGamepadButtons(outLocalClientNum);
    }
    CL_Input_RefreshCommandIcons(outLocalClientNum);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    Com_ExecButtonsMenuConfigs(outLocalClientNum, v1, (GameModeType)ActiveGameMode);
  }
}

/*
==============
GamerProfile_ForceSaveProfile
==============
*/
void GamerProfile_ForceSaveProfile(const int controllerIndex)
{
  GamerProfile_SaveProfile(controllerIndex);
  StoreSettingsToLastSaved(controllerIndex);
}

/*
==============
GamerProfile_GetAcceptedEULA
==============
*/
bool GamerProfile_GetAcceptedEULA(int controllerIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6408, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v3) )
      __debugbreak();
  }
  return !s_gamerSettings[v1].errorOnRead && s_gamerSettings[v1].config.acceptedEULA;
}

/*
==============
GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier
==============
*/
float GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2886, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.adsHighZoomGamepadSensitivityMultiplier;
}

/*
==============
GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier
==============
*/
float GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2862, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.adsHighZoomMouseSensitivityMultiplier;
}

/*
==============
GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier
==============
*/
float GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2902, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.adsLowZoomGamepadSensitivityMultiplier;
}

/*
==============
GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier
==============
*/
float GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2874, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.adsLowZoomMouseSensitivityMultiplier;
}

/*
==============
GamerProfile_GetAdsSensitivityMultiplierTiming
==============
*/
__int64 GamerProfile_GetAdsSensitivityMultiplierTiming(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3293, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.adsSensitivityMultiplierTiming;
}

/*
==============
GamerProfile_GetAimAssistFovScale
==============
*/
bool GamerProfile_GetAimAssistFovScale(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7789, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_gamerprofile_updateAimAssistwithFOV_optionsAvailable;
  if ( !DVARBOOL_gamerprofile_updateAimAssistwithFOV_optionsAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_updateAimAssistwithFOV_optionsAvailable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (s_gamerSettings[v2].config.profileFlags & 8) != 0;
}

/*
==============
GamerProfile_GetAimAssistType
==============
*/
__int64 GamerProfile_GetAimAssistType(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5060, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.aimAssistType;
}

/*
==============
GamerProfile_GetAimResponseCurveType
==============
*/
__int64 GamerProfile_GetAimResponseCurveType(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5082, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.aimResponseCurveType;
}

/*
==============
GamerProfile_GetAirVehicleMouseSensitivityMultiplier
==============
*/
float GamerProfile_GetAirVehicleMouseSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2790, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.airVehicleMouseSensitivityMultiplier;
}

/*
==============
GamerProfile_GetAlwaysBlockClanInvites
==============
*/
bool GamerProfile_GetAlwaysBlockClanInvites(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3743, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.alwaysBlockClanInvites != 0;
}

/*
==============
GamerProfile_GetArmorPlateApplyAllGamepad
==============
*/
bool GamerProfile_GetArmorPlateApplyAllGamepad(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7963, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_gamerprofile_armorPlateApplyAll_optionsAvailable;
  if ( !DVARBOOL_gamerprofile_armorPlateApplyAll_optionsAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_armorPlateApplyAll_optionsAvailable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (s_gamerSettings[v2].config.profileFlags & 4) != 0;
}

/*
==============
GamerProfile_GetArmorPlateApplyAllKBM
==============
*/
bool GamerProfile_GetArmorPlateApplyAllKBM(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8001, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_gamerprofile_armorPlateApplyAll_optionsAvailable;
  if ( !DVARBOOL_gamerprofile_armorPlateApplyAll_optionsAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_armorPlateApplyAll_optionsAvailable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (s_gamerSettings[v2].config.profileFlags & 2) != 0;
}

/*
==============
GamerProfile_GetAutoForwardInputSequenceEnable
==============
*/
bool GamerProfile_GetAutoForwardInputSequenceEnable(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7758, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.autoForwardInputSequenceEnable != 0;
}

/*
==============
GamerProfile_GetAutoMantleAirborne
==============
*/
_BOOL8 GamerProfile_GetAutoMantleAirborne(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5216, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.autoMantleAirborne;
}

/*
==============
GamerProfile_GetAutoSprintGamepad
==============
*/
__int64 GamerProfile_GetAutoSprintGamepad(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7676, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  v2 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return (unsigned int)s_gamerSettings[v1].config.autoSprintGamepad;
  else
    return 0i64;
}

/*
==============
GamerProfile_GetAutoSprintKBM
==============
*/
__int64 GamerProfile_GetAutoSprintKBM(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7721, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  v2 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return (unsigned int)s_gamerSettings[v1].config.autoSprintKBM;
  else
    return 0i64;
}

/*
==============
GamerProfile_GetAutoWeaponSwitchGamepad
==============
*/
_BOOL8 GamerProfile_GetAutoWeaponSwitchGamepad(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3209, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.autoWeaponSwitchGamepad;
}

/*
==============
GamerProfile_GetAutoWeaponSwitchKeyboard
==============
*/
_BOOL8 GamerProfile_GetAutoWeaponSwitchKeyboard(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3231, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.autoWeaponSwitchKeyboard;
}

/*
==============
GamerProfile_GetBlackLevel
==============
*/
float GamerProfile_GetBlackLevel(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4416, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.blacklevel;
}

/*
==============
GamerProfile_GetButtonsBRConfig
==============
*/
char *GamerProfile_GetButtonsBRConfig(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9012, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.gpadBRButtonsConfig;
}

/*
==============
GamerProfile_GetButtonsConfig
==============
*/
char *GamerProfile_GetButtonsConfig(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9001, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.gpadButtonsConfig;
}

/*
==============
GamerProfile_GetChatProfanityFilterEnabled
==============
*/
bool GamerProfile_GetChatProfanityFilterEnabled(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3831, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.chatProfanityFilterEnabled != 0;
}

/*
==============
GamerProfile_GetCrouchType
==============
*/
__int64 GamerProfile_GetCrouchType(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3455, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.crouchType;
}

/*
==============
GamerProfile_GetCurrentButtonLayout
==============
*/
char *GamerProfile_GetCurrentButtonLayout(const int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  __int64 v3; 

  v1 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v3 = v1;
  if ( CL_Main_IsBRGameType(ClientFromController) )
    return s_gamerSettings[v3].config.gpadBRButtonsConfig;
  else
    return s_gamerSettings[v3].config.gpadButtonsConfig;
}

/*
==============
GamerProfile_GetDDLContext
==============
*/
DDLContext *GamerProfile_GetDDLContext(int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = controllerIndex;
  v3 = ddlType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1160, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return &s_gamerSettings[v2].ddlContexts[v3];
}

/*
==============
GamerProfile_GetDDLDef
==============
*/
const DDLDef *GamerProfile_GetDDLDef(int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v2; 

  v2 = ddlType;
  GamerProfile_EnsureMountedDDL(controllerIndex, ddlType);
  return s_ddlDefs[v2];
}

/*
==============
GamerProfile_GetDDLState
==============
*/
void GamerProfile_GetDDLState(DDLState *state, int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v4; 
  DDLState result; 

  v4 = ddlType;
  GamerProfile_EnsureMountedDDL(controllerIndex, ddlType);
  GamerProfile_EnsureMountedDDL(controllerIndex, (ProfileDDLTypes)v4);
  *state = *DDL_GetRootState(&result, s_ddlDefs[v4]);
}

/*
==============
GamerProfile_GetDataByName
==============
*/
GamerProfileData *GamerProfile_GetDataByName(GamerProfileData *result, const int controllerIndex, const char *settingName)
{
  __int64 v3; 
  int v8; 
  GamerProfileData resulta; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8754, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v8) )
      __debugbreak();
  }
  *result = *GetDataByName(&resulta, &s_gamerSettings[v3], settingName);
  return result;
}

/*
==============
GamerProfile_GetDataDefaultValueByName
==============
*/
float GamerProfile_GetDataDefaultValueByName(const int controllerIndex, const char *settingName)
{
  int DataIndexByName; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8761, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8619, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  v4 = DataIndexByName;
  if ( DataIndexByName < 0 )
    return 0.0;
  if ( (unsigned int)DataIndexByName >= 0x8A )
  {
    LODWORD(v7) = 138;
    LODWORD(v6) = DataIndexByName;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8624, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return PROFILE_DATA_FIELDS[v4].defaultVal;
}

/*
==============
GamerProfile_GetDataIndexByName
==============
*/
__int64 GamerProfile_GetDataIndexByName(const char *settingName)
{
  unsigned int v2; 
  const GamerProfileDataField *v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8605, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  v2 = 0;
  v3 = PROFILE_DATA_FIELDS;
  do
  {
    v4 = v3->settingName;
    v5 = 0x7FFFFFFFi64;
    if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(settingName - v4);
    while ( 1 )
    {
      v7 = (unsigned __int8)v4[(_QWORD)v6];
      v8 = v5;
      v9 = *(unsigned __int8 *)v4++;
      --v5;
      if ( !v8 )
        return v2;
      if ( v7 != v9 )
      {
        v10 = v7 + 32;
        if ( (unsigned int)(v7 - 65) > 0x19 )
          v10 = v7;
        v7 = v10;
        v11 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v11 = v9;
        if ( v7 != v11 )
          break;
      }
      if ( !v7 )
        return v2;
    }
    ++v2;
    ++v3;
  }
  while ( v2 < 0x8A );
  return 0xFFFFFFFFi64;
}

/*
==============
GamerProfile_GetDataMaxValueByName
==============
*/
float GamerProfile_GetDataMaxValueByName(const int controllerIndex, const char *settingName)
{
  int DataIndexByName; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8775, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8649, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  v4 = DataIndexByName;
  if ( DataIndexByName < 0 )
    return 0.0;
  if ( (unsigned int)DataIndexByName >= 0x8A )
  {
    LODWORD(v7) = 138;
    LODWORD(v6) = DataIndexByName;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8654, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return PROFILE_DATA_FIELDS[v4].maxVal;
}

/*
==============
GamerProfile_GetDataMinValueByName
==============
*/
float GamerProfile_GetDataMinValueByName(const int controllerIndex, const char *settingName)
{
  int DataIndexByName; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 

  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8768, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8634, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  v4 = DataIndexByName;
  if ( DataIndexByName < 0 )
    return 0.0;
  if ( (unsigned int)DataIndexByName >= 0x8A )
  {
    LODWORD(v7) = 138;
    LODWORD(v6) = DataIndexByName;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8639, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return PROFILE_DATA_FIELDS[v4].minVal;
}

/*
==============
GamerProfile_GetDataType
==============
*/
__int64 GamerProfile_GetDataType(int dataIndex)
{
  __int64 v1; 
  int v4; 

  v1 = dataIndex;
  if ( (unsigned int)dataIndex >= 0x8A )
  {
    v4 = 138;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8596, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "dataIndex doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", dataIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)PROFILE_DATA_FIELDS[v1].type;
}

/*
==============
GamerProfile_GetDefaultJuggMusicEnabled
==============
*/
_BOOL8 GamerProfile_GetDefaultJuggMusicEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7599, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.juggMusicEnableDefault;
}

/*
==============
GamerProfile_GetDefaultSensitivityIndex
==============
*/
__int64 GamerProfile_GetDefaultSensitivityIndex()
{
  return 3i64;
}

/*
==============
GamerProfile_GetDifficulty
==============
*/
__int64 GamerProfile_GetDifficulty(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2665, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.curDifficulty;
}

/*
==============
GamerProfile_GetDisplayInviteNotificationEnabled
==============
*/
bool GamerProfile_GetDisplayInviteNotificationEnabled(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3809, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayInviteNotification != 0;
}

/*
==============
GamerProfile_GetDisplayNameTag
==============
*/
_BOOL8 GamerProfile_GetDisplayNameTag(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3677, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayNameTag;
}

/*
==============
GamerProfile_GetDisplayTelemetryCpuTime
==============
*/
_BOOL8 GamerProfile_GetDisplayTelemetryCpuTime(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3612, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayTelemetryCpuTime;
}

/*
==============
GamerProfile_GetDisplayTelemetryFPS
==============
*/
_BOOL8 GamerProfile_GetDisplayTelemetryFPS(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3532, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayTelemetryFPS;
}

/*
==============
GamerProfile_GetDisplayTelemetryGpuTemperature
==============
*/
_BOOL8 GamerProfile_GetDisplayTelemetryGpuTemperature(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3572, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayTelemetryGpuTemperature;
}

/*
==============
GamerProfile_GetDisplayTelemetryGpuTime
==============
*/
_BOOL8 GamerProfile_GetDisplayTelemetryGpuTime(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3592, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayTelemetryGpuTime;
}

/*
==============
GamerProfile_GetDisplayTelemetryLatency
==============
*/
_BOOL8 GamerProfile_GetDisplayTelemetryLatency(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3552, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.displayTelemetryLatency;
}

/*
==============
GamerProfile_GetDisplayTelemetryPacketLoss
==============
*/
__int64 GamerProfile_GetDisplayTelemetryPacketLoss(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3633, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.displayTelemetryPacketLoss;
}

/*
==============
GamerProfile_GetFreeLook
==============
*/
_BOOL8 GamerProfile_GetFreeLook(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3383, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.freeLook;
}

/*
==============
GamerProfile_GetGamepadEnabled
==============
*/
_BOOL8 GamerProfile_GetGamepadEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7482, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.gpadEnabled;
}

/*
==============
GamerProfile_GetGamepadUseReloadProfile
==============
*/
__int64 GamerProfile_GetGamepadUseReloadProfile(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7536, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return LOBYTE(s_gamerSettings[v1].config.gpadUseReloadProfile);
}

/*
==============
GamerProfile_GetHDRMaxLum
==============
*/
float GamerProfile_GetHDRMaxLum(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4376, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.hdrMaxLum;
}

/*
==============
GamerProfile_GetHDRMinLum
==============
*/
float GamerProfile_GetHDRMinLum(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4356, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.hdrMinLum;
}

/*
==============
GamerProfile_GetHTTPDownloadTexturesEnable
==============
*/
bool GamerProfile_GetHTTPDownloadTexturesEnable(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8148, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x4000i64) != 0;
}

/*
==============
GamerProfile_GetHasEverPlayedMainMenu
==============
*/
bool GamerProfile_GetHasEverPlayedMainMenu(int controllerIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6459, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v3) )
      __debugbreak();
  }
  return !s_gamerSettings[v1].errorOnRead && s_gamerSettings[v1].config.hasEverPlayed_MainMenu;
}

/*
==============
GamerProfile_GetHitMarkerAlias
==============
*/
char *GamerProfile_GetHitMarkerAlias(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3699, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.sndHitMarkerAlias;
}

/*
==============
GamerProfile_GetHoldSprint
==============
*/
bool GamerProfile_GetHoldSprint(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5401, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return !GamerProfile_GetGamepadEnabled(v1) && s_gamerSettings[v1].config.holdSprint;
}

/*
==============
GamerProfile_GetHorizontalSensitivityIndex
==============
*/
__int64 GamerProfile_GetHorizontalSensitivityIndex(int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  float *v3; 
  int v6; 

  v1 = controllerIndex;
  v2 = 0;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6105, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v3 = (float *)SENSITIVITY_MAP;
  while ( s_gamerSettings[v1].config.viewHorzSensitivity != *v3 )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)PROFILE_KEY_MAP )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
GamerProfile_GetInitialGameMode
==============
*/
__int64 GamerProfile_GetInitialGameMode(const int controllerIndex)
{
  __int64 v1; 
  int v4; 
  GamerProfileData result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8754, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  result = *GetDataByName(&result, &s_gamerSettings[v1], "initialGameMode");
  if ( result.type != TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9292, ASSERT_TYPE_ASSERT, "(profileData.type == TYPE_INT)", (const char *)&queryFormat, "profileData.type == TYPE_INT") )
    __debugbreak();
  return (unsigned int)result.u.intVal;
}

/*
==============
GamerProfile_GetInputSensitivity
==============
*/
float GamerProfile_GetInputSensitivity(const int sensitivityIndex)
{
  __int64 v1; 
  int v4; 

  v1 = sensitivityIndex;
  if ( (unsigned int)sensitivityIndex >= 0x14 )
  {
    v4 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7469, ASSERT_TYPE_ASSERT, "(unsigned)( sensitivityIndex ) < (unsigned)( NUM_SENSITIVITY_VALUES )", "sensitivityIndex doesn't index NUM_SENSITIVITY_VALUES\n\t%i not in [0, %i)", sensitivityIndex, v4) )
      __debugbreak();
  }
  return SENSITIVITY_MAP[v1];
}

/*
==============
GamerProfile_GetIntelligence
==============
*/
void GamerProfile_GetIntelligence(int controllerIndex, int *cheat_items_set1, int *cheat_items_set2)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9260, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  *cheat_items_set1 = s_gamerSettings[v3].config.cheat_items_set1;
  *cheat_items_set2 = s_gamerSettings[v3].config.cheat_items_set2;
}

/*
==============
GamerProfile_GetIntelligencePtr
==============
*/
void GamerProfile_GetIntelligencePtr(int controllerIndex, int **cheat_items_set1, int **cheat_items_set2)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9250, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  if ( (!cheat_items_set1 || !cheat_items_set2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9251, ASSERT_TYPE_ASSERT, "(cheat_items_set1 && cheat_items_set2)", (const char *)&queryFormat, "cheat_items_set1 && cheat_items_set2") )
    __debugbreak();
  *cheat_items_set1 = &s_gamerSettings[v3].config.cheat_items_set1;
  *cheat_items_set2 = &s_gamerSettings[v3].config.cheat_items_set2;
}

/*
==============
GamerProfile_GetInvertedVerticalLookFlyingGamepad
==============
*/
_BOOL8 GamerProfile_GetInvertedVerticalLookFlyingGamepad(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3970, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.invertPitchFlyingGamepad;
}

/*
==============
GamerProfile_GetInvertedVerticalLookGamepad
==============
*/
_BOOL8 GamerProfile_GetInvertedVerticalLookGamepad(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3948, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.invertPitchGamepad;
}

/*
==============
GamerProfile_GetInvertedVerticalLookKBM
==============
*/
__int64 GamerProfile_GetInvertedVerticalLookKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3999, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.invertPitchKBM;
}

/*
==============
GamerProfile_GetIsBRNotNew
==============
*/
__int64 GamerProfile_GetIsBRNotNew(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7931, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return LOBYTE(s_gamerSettings[v1].config.profileFlags) >> 7;
}

/*
==============
GamerProfile_GetIsCPNew
==============
*/
bool GamerProfile_GetIsCPNew(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7897, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x40) != 0;
}

/*
==============
GamerProfile_GetIsMPNew
==============
*/
bool GamerProfile_GetIsMPNew(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7863, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x20) != 0;
}

/*
==============
GamerProfile_GetIsParachuteAutoDeployGamepadDisabled
==============
*/
bool GamerProfile_GetIsParachuteAutoDeployGamepadDisabled(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8077, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_gamerprofile_parachuteAutoDeploy_optionsAvailable;
  if ( !DVARBOOL_gamerprofile_parachuteAutoDeploy_optionsAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_parachuteAutoDeploy_optionsAvailable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (s_gamerSettings[v2].config.profileFlags & 0x200i64) != 0;
}

/*
==============
GamerProfile_GetIsParachuteAutoDeployKBMDisabled
==============
*/
bool GamerProfile_GetIsParachuteAutoDeployKBMDisabled(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8039, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_gamerprofile_parachuteAutoDeploy_optionsAvailable;
  if ( !DVARBOOL_gamerprofile_parachuteAutoDeploy_optionsAvailable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_parachuteAutoDeploy_optionsAvailable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    return BYTE1(s_gamerSettings[v2].config.profileFlags) & 1;
  else
    return 0;
}

/*
==============
GamerProfile_GetIsSPNew
==============
*/
bool GamerProfile_GetIsSPNew(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7829, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x10) != 0;
}

/*
==============
GamerProfile_GetIsUsingAnonymization
==============
*/
bool GamerProfile_GetIsUsingAnonymization(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8166, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x400i64) != 0;
}

/*
==============
GamerProfile_GetKeyboardController
==============
*/
__int64 GamerProfile_GetKeyboardController(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2807, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.durangoKeyboardController;
}

/*
==============
GamerProfile_GetLandVehicleMouseSensitivityMultiplier
==============
*/
float GamerProfile_GetLandVehicleMouseSensitivityMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2779, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.landVehicleMouseSensitivityMultiplier;
}

/*
==============
GamerProfile_GetLanguage
==============
*/
__int64 GamerProfile_GetLanguage(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7029, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.language;
}

/*
==============
GamerProfile_GetLastSaveGame
==============
*/
char *GamerProfile_GetLastSaveGame(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5026, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.lastSaveGame;
}

/*
==============
GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier
==============
*/
float GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2769, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.locationSelectorCursorGamepadSpeedMultiplier;
}

/*
==============
GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier
==============
*/
float GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2761, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.locationSelectorCursorMouseSpeedMultiplier;
}

/*
==============
GamerProfile_GetMatchEndShouldRecordDLog
==============
*/
bool GamerProfile_GetMatchEndShouldRecordDLog(int controllerIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6425, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v3) )
      __debugbreak();
  }
  return !s_gamerSettings[v1].errorOnRead && s_gamerSettings[v1].config.matchEndShouldRecordDLog;
}

/*
==============
GamerProfile_GetMatchEndShouldRecordDLogInt
==============
*/
__int64 GamerProfile_GetMatchEndShouldRecordDLogInt(int controllerIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6442, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v3) )
      __debugbreak();
  }
  if ( s_gamerSettings[v1].errorOnRead )
    return 0i64;
  else
    return (unsigned int)s_gamerSettings[v1].config.matchEndShouldRecordDLogInt;
}

/*
==============
GamerProfile_GetMicrophoneVolume
==============
*/
float GamerProfile_GetMicrophoneVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4256, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.microphoneVolume;
}

/*
==============
GamerProfile_GetMinimapRotationEnabled
==============
*/
bool GamerProfile_GetMinimapRotationEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7071, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.minimapStyle & 2) == 0;
}

/*
==============
GamerProfile_GetMinimapStyle
==============
*/
__int64 GamerProfile_GetMinimapStyle(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7047, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.minimapStyle & 1;
}

/*
==============
GamerProfile_GetMountButton
==============
*/
__int64 GamerProfile_GetMountButton(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5113, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.mountButtonConfig;
}

/*
==============
GamerProfile_GetMountButtonKBM
==============
*/
__int64 GamerProfile_GetMountButtonKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5133, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.mountButtonConfigKBM;
}

/*
==============
GamerProfile_GetMountPullAwayDelayKBM
==============
*/
__int64 GamerProfile_GetMountPullAwayDelayKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5199, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.mountPullAwayDelayKBM;
}

/*
==============
GamerProfile_GetMountPullAwayEnabled
==============
*/
_BOOL8 GamerProfile_GetMountPullAwayEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5167, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mountPullAwayEnabled;
}

/*
==============
GamerProfile_GetMountPullAwayEnabledKBM
==============
*/
bool GamerProfile_GetMountPullAwayEnabledKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5183, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mountPullAwayEnabledKBM == 1;
}

/*
==============
GamerProfile_GetMouseAccel
==============
*/
float GamerProfile_GetMouseAccel(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3413, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mouseAccel;
}

/*
==============
GamerProfile_GetMouseAdsUseMonitorDistance
==============
*/
_BOOL8 GamerProfile_GetMouseAdsUseMonitorDistance(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2964, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mouseAdsUseMonitorDistance;
}

/*
==============
GamerProfile_GetMouseFilter
==============
*/
float GamerProfile_GetMouseFilter(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3353, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mouseFilter;
}

/*
==============
GamerProfile_GetMouseHorizontalSensitivity
==============
*/
float GamerProfile_GetMouseHorizontalSensitivity(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2920, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.viewMouseHorzSensitivity;
}

/*
==============
GamerProfile_GetMouseMonitorDistanceCoef
==============
*/
float GamerProfile_GetMouseMonitorDistanceCoef(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3323, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mouseMonitorDistanceCoef;
}

/*
==============
GamerProfile_GetMouseSmoothing
==============
*/
_BOOL8 GamerProfile_GetMouseSmoothing(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3443, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.mouseSmoothing;
}

/*
==============
GamerProfile_GetMouseVerticalSensitivity
==============
*/
float GamerProfile_GetMouseVerticalSensitivity(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2943, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.viewMouseVertSensitivity;
}

/*
==============
GamerProfile_GetOpenMicThreshold
==============
*/
float GamerProfile_GetOpenMicThreshold(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4216, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.openMicThreshold;
}

/*
==============
GamerProfile_GetPlayTimeCP
==============
*/
__int64 GamerProfile_GetPlayTimeCP(int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 

  v1 = controllerIndex;
  v2 = 100 * s_gamerSettings[controllerIndex].config.playTimeCP;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    return (Sys_MillisecondsRaw() - s_playStartTime[v1]) / 0xA + v2;
  else
    return v2;
}

/*
==============
GamerProfile_GetPlayTimeMP
==============
*/
__int64 GamerProfile_GetPlayTimeMP(int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned __int8 ActiveGameMode; 

  v1 = controllerIndex;
  v2 = 100 * s_gamerSettings[controllerIndex].config.playTimeMP;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
    return (Sys_MillisecondsRaw() - s_playStartTime[v1]) / 0xA + v2;
  else
    return v2;
}

/*
==============
GamerProfile_GetPlayTimeSP
==============
*/
__int64 GamerProfile_GetPlayTimeSP(int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 

  v1 = controllerIndex;
  v2 = 100 * s_gamerSettings[controllerIndex].config.playTimeSP;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
    return (Sys_MillisecondsRaw() - s_playStartTime[v1]) / 0xA + v2;
  else
    return v2;
}

/*
==============
GamerProfile_GetPlayerIntelIsFound
==============
*/
unsigned __int8 GamerProfile_GetPlayerIntelIsFound(int controllerIndex, int intelNum)
{
  __int64 v2; 
  int cheat_items_set2; 
  int cheat_items_set1; 

  v2 = controllerIndex;
  if ( intelNum > 64 )
    return 0;
  if ( intelNum > 32 )
  {
    cheat_items_set2 = s_gamerSettings[v2].config.cheat_items_set2;
    return _bittest(&cheat_items_set2, (unsigned __int8)(intelNum - 33));
  }
  if ( intelNum <= 0 )
    return 0;
  cheat_items_set1 = s_gamerSettings[v2].config.cheat_items_set1;
  return _bittest(&cheat_items_set1, (unsigned __int8)(intelNum - 1));
}

/*
==============
GamerProfile_GetPlaylistNum
==============
*/
__int64 GamerProfile_GetPlaylistNum(int controllerIndex)
{
  return (unsigned int)s_gamerSettings[controllerIndex].config.playlist;
}

/*
==============
GamerProfile_GetProfileSettings
==============
*/
GamerSettingState *GamerProfile_GetProfileSettings(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1129, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  return &s_gamerSettings[v1];
}

/*
==============
GamerProfile_GetProneType
==============
*/
__int64 GamerProfile_GetProneType(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3092, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.proneType;
}

/*
==============
GamerProfile_GetShowSoundMuted
==============
*/
_BOOL8 GamerProfile_GetShowSoundMuted(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3655, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.showSoundMuted;
}

/*
==============
GamerProfile_GetShowVoiceChatMuted
==============
*/
_BOOL8 GamerProfile_GetShowVoiceChatMuted(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3721, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.showVoiceChatMuted;
}

/*
==============
GamerProfile_GetSoundEffectsVolume
==============
*/
float GamerProfile_GetSoundEffectsVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4316, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.snd_effectsVolume;
}

/*
==============
GamerProfile_GetSoundLicencedContentVolume
==============
*/
float GamerProfile_GetSoundLicencedContentVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4336, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.snd_licensed_content_volume;
}

/*
==============
GamerProfile_GetSoundMusicVolume
==============
*/
float GamerProfile_GetSoundMusicVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4176, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.snd_musicVolume;
}

/*
==============
GamerProfile_GetSoundPresetMix
==============
*/
__int64 GamerProfile_GetSoundPresetMix(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4116, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.snd_mixPreset;
}

/*
==============
GamerProfile_GetSoundVoiceVolume
==============
*/
float GamerProfile_GetSoundVoiceVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4156, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.snd_voiceVolume;
}

/*
==============
GamerProfile_GetSoundVolume
==============
*/
float GamerProfile_GetSoundVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4136, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.snd_volume;
}

/*
==============
GamerProfile_GetSpecialistMode
==============
*/
_BOOL8 GamerProfile_GetSpecialistMode(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2689, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.specialistMode;
}

/*
==============
GamerProfile_GetStanceUpJump
==============
*/
_BOOL8 GamerProfile_GetStanceUpJump(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3498, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.stanceUpJump;
}

/*
==============
GamerProfile_GetSticksConfig
==============
*/
char *GamerProfile_GetSticksConfig(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8990, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.gpadSticksConfig;
}

/*
==============
GamerProfile_GetTapToSlideEnabledGamepad
==============
*/
_BOOL8 GamerProfile_GetTapToSlideEnabledGamepad(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2830, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.tapToSlideEnabledGamepad;
}

/*
==============
GamerProfile_GetTapToSlideEnabledKeyboard
==============
*/
_BOOL8 GamerProfile_GetTapToSlideEnabledKeyboard(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2838, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.tapToSlideEnabledKeyboard;
}

/*
==============
GamerProfile_GetToggleADSEnabledGamepad
==============
*/
_BOOL8 GamerProfile_GetToggleADSEnabledGamepad(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2846, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleADSEnabledGamepad;
}

/*
==============
GamerProfile_GetToggleADSEnabledKeyboard
==============
*/
_BOOL8 GamerProfile_GetToggleADSEnabledKeyboard(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2854, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleADSEnabledKeyboard;
}

/*
==============
GamerProfile_GetToggleMapCursorEnable
==============
*/
bool GamerProfile_GetToggleMapCursorEnable(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3787, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleMapCursorEnable != 0;
}

/*
==============
GamerProfile_GetToggleScoreboardMapEnabled
==============
*/
bool GamerProfile_GetToggleScoreboardMapEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3004, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleScoreboardMap != 0;
}

/*
==============
GamerProfile_GetToggleTooltipEnable
==============
*/
bool GamerProfile_GetToggleTooltipEnable(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3765, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleTooltipEnable != 0;
}

/*
==============
GamerProfile_GetUseHoldKBMProfile
==============
*/
bool GamerProfile_GetUseHoldKBMProfile(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  const dvar_t *v3; 
  int v6; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 0x2000, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v2 = v1;
  v3 = DVARBOOL_useHoldKBMProfile_enabled;
  if ( !DVARBOOL_useHoldKBMProfile_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useHoldKBMProfile_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (s_gamerSettings[v2].config.profileFlags & 0x800i64) != 0;
}

/*
==============
GamerProfile_GetUseNumbersForCompassCardinalDirText
==============
*/
__int64 GamerProfile_GetUseNumbersForCompassCardinalDirText(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7095, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return ((unsigned int)s_gamerSettings[v1].config.profileFlags >> 12) & 1;
}

/*
==============
GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad
==============
*/
_BOOL8 GamerProfile_GetVehicleCameraAutoRecenterEnabledGamepad(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2814, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.vehicleCameraAutoRecenterEnabledGamepad;
}

/*
==============
GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard
==============
*/
_BOOL8 GamerProfile_GetVehicleCameraAutoRecenterEnabledKeyboard(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2822, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.vehicleCameraAutoRecenterEnabledKeyboard;
}

/*
==============
GamerProfile_GetVerticalSensitivityIndex
==============
*/
__int64 GamerProfile_GetVerticalSensitivityIndex(int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  float *v3; 
  int v6; 

  v1 = controllerIndex;
  v2 = 0;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6116, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v3 = (float *)SENSITIVITY_MAP;
  while ( s_gamerSettings[v1].config.viewVertSensitivity != *v3 )
  {
    ++v2;
    if ( (__int64)++v3 >= (__int64)PROFILE_KEY_MAP )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
GamerProfile_GetVoiceChatDeviceType
==============
*/
__int64 GamerProfile_GetVoiceChatDeviceType(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4296, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.profileFlags & 1;
}

/*
==============
GamerProfile_GetVoiceChatEnabled
==============
*/
__int64 GamerProfile_GetVoiceChatEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4196, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.voiceChatEnabled;
}

/*
==============
GamerProfile_GetVoiceChatVolume
==============
*/
float GamerProfile_GetVoiceChatVolume(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4236, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.voiceChatVolume;
}

/*
==============
GamerProfile_GetVoiceFutz
==============
*/
__int64 GamerProfile_GetVoiceFutz(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4276, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.voiceFutz;
}

/*
==============
GamerProfile_GetVoiceMuteStrategy
==============
*/
__int64 GamerProfile_GetVoiceMuteStrategy(const int controllerIndex)
{
  return (unsigned int)s_gamerSettings[controllerIndex].config.voiceMuteStrategy;
}

/*
==============
GamerProfile_GetWarTrackPassengerEnable
==============
*/
bool GamerProfile_GetWarTrackPassengerEnable(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8115, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (s_gamerSettings[v1].config.profileFlags & 0x2000i64) != 0;
}

/*
==============
GamerProfile_GetWeaponSwitchCancelDelay
==============
*/
__int64 GamerProfile_GetWeaponSwitchCancelDelay(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3187, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.weaponSwitchCancelDelay;
}

/*
==============
GamerProfile_GetWeaponSwitchWrapAround
==============
*/
_BOOL8 GamerProfile_GetWeaponSwitchWrapAround(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3253, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.weaponSwitchWrapAround;
}

/*
==============
GamerProfile_GetYoloMode
==============
*/
_BOOL8 GamerProfile_GetYoloMode(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2712, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.yoloMode;
}

/*
==============
GamerProfile_GetYoloState
==============
*/
__int64 GamerProfile_GetYoloState(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2735, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.yoloState;
}

/*
==============
GamerProfile_GetZoomHybridCmdKBM
==============
*/
__int64 GamerProfile_GetZoomHybridCmdKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3113, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return (unsigned int)s_gamerSettings[v1].config.zoomHybridCmdKBM;
}

/*
==============
GamerProfile_HandleDvarProfileData
==============
*/
bool GamerProfile_HandleDvarProfileData(const int controllerIndex, const char *settingName, const float settingValue)
{
  return 0;
}

/*
==============
GamerProfile_HoldGrenadeEnabled
==============
*/
_BOOL8 GamerProfile_HoldGrenadeEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3048, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.grenadeHold;
}

/*
==============
GamerProfile_HoldGrenadeEnabledKBM
==============
*/
bool GamerProfile_HoldGrenadeEnabledKBM(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3059, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.grenadeHoldKBM == 1;
}

/*
==============
GamerProfile_HoldSprintToggle
==============
*/
void GamerProfile_HoldSprintToggle(const int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5388, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.holdSprint;
  s_gamerSettings[v1].config.holdSprint = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: Hold to Sprint toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_InitAllProfiles
==============
*/
void GamerProfile_InitAllProfiles(void)
{
  int v0; 
  int v1; 
  GamerSettingState *v2; 
  const dvar_t *v3; 
  int v4; 
  unsigned int *v5; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 

  v0 = 0;
  v1 = 0;
  v2 = s_gamerSettings;
  do
  {
    KeyPairsResetAll(v1);
    memset_0(v2, 0, sizeof(GamerSettingState));
    SetProfileDefaults(v2++, v1++);
  }
  while ( v1 < 8 );
  Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, 0);
  v3 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v3, DVAR_SOURCE_INTERNAL);
  GamerProfile_ResetDifficulty();
  v4 = Sys_MillisecondsRaw();
  v5 = s_playStartTime;
  v6 = 0i64;
  do
  {
    *v5 = v4;
    v7 = j_va("GamerProfile - Updating for controller #%i without saving.\n", (unsigned int)v0);
    Com_Printf(16, "%s\n", v7);
    UpdateProfileFromSystem(v0, PROFILE_NO_WRITE);
    if ( (unsigned int)v0 >= 8 )
    {
      LODWORD(v9) = 8;
      LODWORD(v8) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1325, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    memcpy_0(&s_gamerSettingsLastSaved[v6], &s_gamerSettings[v6], sizeof(GamerSettingState));
    ++v0;
    ++v6;
    ++v5;
  }
  while ( v0 < 8 );
}

/*
==============
GamerProfile_IsControllerSpeakerEnabled
==============
*/
bool GamerProfile_IsControllerSpeakerEnabled(int controllerIndex)
{
  __int64 v1; 
  GamerSettingState *v2; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9333, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 )
    return 0;
  v2 = &s_gamerSettings[v1];
  return GPad_IsActive(v1) && v2->isProfileLoggedIn && v2->config.snd_controllerSpeakerEnabled;
}

/*
==============
GamerProfile_IsDDLMounted
==============
*/
_BOOL8 GamerProfile_IsDDLMounted(int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v2; 
  __int64 v3; 
  int v6; 

  v2 = controllerIndex;
  v3 = ddlType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1292, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return s_gamerSettings[v2].ddlMounted[v3];
}

/*
==============
GamerProfile_IsEquipToggleEnabled
==============
*/
bool GamerProfile_IsEquipToggleEnabled(const int controllerIndex)
{
  __int64 v1; 
  ContextMountButtonEngage_t mountButtonConfig; 
  __int64 v4; 
  __int64 v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5154, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  if ( GamerProfile_GetGamepadEnabled(v1) )
  {
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5113, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    mountButtonConfig = s_gamerSettings[v1].config.mountButtonConfig;
  }
  else
  {
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5133, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, v5) )
        __debugbreak();
    }
    mountButtonConfig = s_gamerSettings[v1].config.mountButtonConfigKBM;
  }
  return (unsigned int)(mountButtonConfig - 5) <= 1;
}

/*
==============
GamerProfile_IsFacebookEnabled
==============
*/
char GamerProfile_IsFacebookEnabled(int controllerIndex)
{
  return 1;
}

/*
==============
GamerProfile_IsHybridBindedToCmdType
==============
*/
bool GamerProfile_IsHybridBindedToCmdType(const int controllerIndex, ZoomHybridCommandType_t zoomHybridCmdType)
{
  if ( GamerProfile_GetGamepadEnabled(controllerIndex) )
    return zoomHybridCmdType == ZOOM_HYBRID_CMD_BREATH;
  else
    return zoomHybridCmdType == GamerProfile_GetZoomHybridCmdKBM(controllerIndex);
}

/*
==============
GamerProfile_IsLeanEnabled
==============
*/
_BOOL8 GamerProfile_IsLeanEnabled(int controllerIndex)
{
  return s_gamerSettings[controllerIndex].config.leanEnabled;
}

/*
==============
GamerProfile_IsProfileLoggedIn
==============
*/
_BOOL8 GamerProfile_IsProfileLoggedIn(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1136, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  return s_gamerSettings[v1].isProfileLoggedIn;
}

/*
==============
GamerProfile_IsZoomBindedToCmdType
==============
*/
bool GamerProfile_IsZoomBindedToCmdType(const int controllerIndex, ZoomHybridCommandType_t zoomHybridCmdType)
{
  if ( GamerProfile_GetGamepadEnabled(controllerIndex) )
    return zoomHybridCmdType == ZOOM_HYBRID_CMD_BREATH;
  else
    return zoomHybridCmdType == GamerProfile_GetZoomHybridCmdKBM(controllerIndex);
}

/*
==============
GamerProfile_LeanToggle
==============
*/
void GamerProfile_LeanToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6327, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.leanEnabled;
  s_gamerSettings[v1].config.leanEnabled = v2;
  v3 = "disabled";
  if ( v2 )
    v3 = "enabled";
  Com_Printf(14, "Profile: Lean %s toggled for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_ListProfileArgsToConsole
==============
*/
void GamerProfile_ListProfileArgsToConsole(int channel)
{
  const GamerProfileDataField *v2; 
  __int64 v3; 

  v2 = PROFILE_DATA_FIELDS;
  v3 = 138i64;
  do
  {
    Com_Printf(channel, "  %s\n", v2->settingName);
    ++v2;
    --v3;
  }
  while ( v3 );
}

/*
==============
GamerProfile_LogInProfile
==============
*/
void GamerProfile_LogInProfile(int controllerIndex)
{
  __int64 v1; 
  GamerSettingState *v2; 
  UIInputType v3; 
  char v4; 
  LocalClientNum_t ClientFromController; 
  const char *v6; 
  lua_State *v7; 
  LocalClientNum_t v8; 
  clientUIActive_t *LocalClientUIGlobals; 
  __int64 v10; 
  LocalClientNum_t outLocalClientNum; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4862, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  s_gamerSettings[v1].isProfileLoggedIn = 1;
  v2 = &s_gamerSettings[v1];
  v2->errorOnRead = 0;
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4592, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v10) )
      __debugbreak();
  }
  if ( !v2->isProfileLoggedIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4593, ASSERT_TYPE_ASSERT, "(s_gamerSettings[controllerIndex].isProfileLoggedIn)", (const char *)&queryFormat, "s_gamerSettings[controllerIndex].isProfileLoggedIn") )
    __debugbreak();
  v3 = GAMEPAD;
  if ( cls.uiStarted && CL_Mgr_IsControllerActive(v1) )
  {
    v4 = 1;
    ClientFromController = CL_Mgr_GetClientFromController(v1);
    UI_BeginReadingDeviceUI(ClientFromController);
  }
  else
  {
    v4 = 0;
    ClientFromController = LOCAL_CLIENT_0;
  }
  GamerProfile_ReadXProfileSettings(v1);
  v6 = j_va("GamerProfile - Updating for controller #%i without saving.\n", (unsigned int)v1);
  Com_Printf(16, "%s\n", v6);
  UpdateProfileFromSystem(v1, PROFILE_NO_WRITE);
  StoreSettingsToLastSaved(v1);
  v7 = LUI_luaVM;
  v8 = CL_Mgr_GetClientFromController(v1);
  if ( LUI_BeginEvent(v8, "gamerprofile_settings_initialized", v7) )
    LUI_EndEvent(LUI_luaVM);
  if ( v4 )
    UI_EndReadingSaveDeviceUI(ClientFromController);
  if ( CL_Mgr_IsControllerActive(v1) )
  {
    GamerProfile_UpdateSystemVarsFromProfile(v1);
    GamerProfile_ExecControllerBindings(v1);
    if ( CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum) )
    {
      SD_OutputInitPadPort(v1);
      LocalClientUIGlobals = CL_GetLocalClientUIGlobals(outLocalClientNum);
      LOBYTE(v3) = !GamerProfile_GetGamepadEnabled(v1);
      LocalClientUIGlobals->lastInputType = v3;
      if ( LUI_BeginEvent(outLocalClientNum, "gamer_profile_input_type_updated", LUI_luaVM) )
      {
        LUI_SetTableInt("inputType", LocalClientUIGlobals->lastInputType, LUI_luaVM);
        LUI_SetTableInt("controller", v1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
  }
}

/*
==============
GamerProfile_LogOutProfile
==============
*/
void GamerProfile_LogOutProfile(int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  const char *v3; 
  __int64 v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4913, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  Com_Printf(16, "Logging out gamerprofile on controller %i\n", (unsigned int)v1);
  if ( (unsigned int)v1 > 7 )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4797, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", v4) )
      __debugbreak();
  }
  memset_0(&s_gamerSettings[v1], 0, sizeof(GamerSettingState));
  SetProfileDefaults(&s_gamerSettings[v1], v1);
  Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, 0);
  v2 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v2, DVAR_SOURCE_INTERNAL);
  GamerProfile_ResetDifficulty();
  v3 = j_va("GamerProfile - Updating for controller #%i without saving.\n", (unsigned int)v1);
  Com_Printf(16, "%s\n", v3);
  UpdateProfileFromSystem(v1, PROFILE_NO_WRITE);
  if ( CL_Mgr_GetClientFromController(v1) != LOCAL_CLIENT_INVALID )
  {
    GamerProfile_UpdateSystemVarsFromProfile(v1);
    SD_OutputClosePadPort(v1);
  }
}

/*
==============
GamerProfile_MPVoiceToggle
==============
*/
void GamerProfile_MPVoiceToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6297, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.snd_mpVoiceEnabled;
  s_gamerSettings[v1].config.snd_mpVoiceEnabled = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: MP Voice Enabled toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_MPWeaponUnlock
==============
*/
void GamerProfile_MPWeaponUnlock(int controllerIndex, int index, bool unlocked)
{
  __int64 v3; 
  __int64 v6; 
  const char *v7; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6523, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v6 = v3;
  switch ( index )
  {
    case 1:
      s_gamerSettings[v6].config.mp_weapon1 = unlocked;
      break;
    case 2:
      s_gamerSettings[v6].config.mp_weapon2 = unlocked;
      break;
    case 3:
      s_gamerSettings[v6].config.mp_weapon3 = unlocked;
      break;
    case 4:
      s_gamerSettings[v6].config.mp_weapon4 = unlocked;
      break;
    case 5:
      s_gamerSettings[v6].config.mp_weapon5 = unlocked;
      break;
    default:
      Com_PrintError(15, "Illegal MP Weapon Unlock Index (Please use 1-5).\n");
      return;
  }
  v7 = "false";
  if ( unlocked )
    v7 = "true";
  Com_Printf(14, "Profile: MP Weapon Unlock %d for controller #%i set to %s.\n", (unsigned int)index, (unsigned int)v3, v7);
}

/*
==============
GamerProfile_MountDDL
==============
*/
bool GamerProfile_MountDDL(int controllerIndex, ProfileDDLTypes ddlType)
{
  __int64 v3; 
  GamerSettingState *v4; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  bool *v9; 
  const DDLDef *v10; 
  const DDLDef *Asset; 
  bool Context; 
  bool v13; 

  v3 = ddlType;
  v4 = &s_gamerSettings[controllerIndex];
  if ( ddlType )
  {
    if ( ddlType == MLG_SETTINGS )
    {
      v6 = "ddl/mp/mlgsettings.ddl";
      v7 = 1024;
      v8 = 1679i64;
    }
    else
    {
      if ( ddlType != SP_PROGRESSION_TU1 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1246, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled ProfileDDLType.\n") )
          __debugbreak();
        return 0;
      }
      v6 = "ddl/sp/progressiontu1.ddl";
      v7 = 48;
      v8 = 1631i64;
    }
  }
  else
  {
    v6 = "ddl/sp/progression.ddl";
    v7 = 512;
    v8 = 655i64;
  }
  v9 = &v4->isProfileLoggedIn + v8;
  v10 = s_ddlDefs[ddlType];
  if ( !v10 )
  {
    Asset = Com_DDL_LoadAsset(v6);
    s_ddlDefs[v3] = Asset;
    if ( Asset->byteSize > v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1253, ASSERT_TYPE_ASSERT, "(s_ddlDefs[ddlType]->byteSize <= dataPointerSize)", "%s\n\t%s is of size %d, but the buffer is only size %d", "s_ddlDefs[ddlType]->byteSize <= dataPointerSize", v6, Asset->byteSize, v7) )
      __debugbreak();
    v10 = s_ddlDefs[v3];
  }
  Context = Com_DDL_CreateContext(v9, v7, v10, &v4->ddlContexts[v3], DDLAccessCB_1, &v4->ddlChanged[v3]);
  v4->ddlChanged[v3] = 0;
  v13 = Context;
  SetProfileDDLTypeDefaults(controllerIndex, (ProfileDDLTypes)v3, 0);
  return v13;
}

/*
==============
GamerProfile_OnSetGore
==============
*/
void GamerProfile_OnSetGore(bool goreEnabledSetting)
{
  bool v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 

  v1 = goreEnabledSetting & RG_IsGoreAllowedInRegion();
  v2 = DVARBOOL_corpseImpactEffectsEnabled;
  if ( DVARBOOL_corpseImpactEffectsEnabled )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_corpseImpactEffectsEnabled);
    if ( v2->current.enabled != v1 )
      Dvar_SetBool_Internal(DVARBOOL_corpseImpactEffectsEnabled, v1);
  }
  v3 = master_dismemberment_setting;
  if ( !master_dismemberment_setting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled != v1 )
    Dvar_SetBool_Internal(master_dismemberment_setting, v1);
}

/*
==============
GamerProfile_OptionsMenuDvarsFinish
==============
*/
void GamerProfile_OptionsMenuDvarsFinish(int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  __int64 v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  float value; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  const dvar_t *v17; 
  int integer; 
  const dvar_t *v19; 
  bool enabled; 
  const dvar_t *v21; 
  bool v22; 
  int v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  const dvar_t *v28; 
  float v29; 
  const dvar_t *v30; 
  int v31; 
  const dvar_t *v32; 
  int v33; 
  const dvar_t *v34; 
  float v35; 
  const dvar_t *v36; 
  float v37; 
  const dvar_t *v38; 
  int v39; 
  const dvar_t *v40; 
  float v41; 
  const dvar_t *v42; 
  float v43; 
  const dvar_t *v44; 
  float v45; 
  const dvar_t *v46; 
  float v47; 
  const dvar_t *v48; 
  bool v49; 
  const dvar_t *v50; 
  bool v51; 
  const dvar_t *v52; 
  bool v53; 
  const dvar_t *v54; 
  bool v55; 
  const dvar_t *v56; 
  int v57; 
  __int64 v58; 
  __int64 v59; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5868, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = DVARFLT_profileMenuOption_blacklevel;
  v3 = v1;
  if ( !DVARFLT_profileMenuOption_blacklevel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_blacklevel") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  GamerProfile_SetBlackLevel(v1, v2->current.value);
  v4 = DVARFLT_profileMenuOption_hdrMinLum;
  if ( !DVARFLT_profileMenuOption_hdrMinLum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_hdrMinLum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  GamerProfile_SetHDRMinLum(v1, v4->current.value);
  v5 = DVARFLT_profileMenuOption_hdrMaxLum;
  if ( !DVARFLT_profileMenuOption_hdrMaxLum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_hdrMaxLum") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  GamerProfile_SetHDRMaxLum(v1, v5->current.value);
  v6 = DVARFLT_profileMenuOption_hdrGamma;
  if ( !DVARFLT_profileMenuOption_hdrGamma && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_hdrGamma") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  value = v6->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4406, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v8 = DVARFLT_profileMenuOption_volume;
  s_gamerSettings[v3].config.hdrGamma = value;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_volume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  GamerProfile_SetSoundVolume(v1, v8->current.value);
  v9 = DVARFLT_profileMenuOption_voiceVolume;
  if ( !DVARFLT_profileMenuOption_voiceVolume && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_voiceVolume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4166, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v11 = DVARFLT_profileMenuOption_musicVolume;
  s_gamerSettings[v3].config.snd_voiceVolume = v10;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_musicVolume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4186, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v13 = DVARFLT_profileMenuOption_effectsVolume;
  s_gamerSettings[v3].config.snd_musicVolume = v12;
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_effectsVolume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = v13->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4326, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v15 = DVARFLT_profileMenuOption_licensedMusicVolume;
  s_gamerSettings[v3].config.snd_effectsVolume = v14;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_licensedMusicVolume") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4346, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v17 = DVARINT_profileMenuOption_presetMix;
  s_gamerSettings[v3].config.snd_licensed_content_volume = v16;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_presetMix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  integer = v17->current.integer;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4126, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  s_gamerSettings[v3].config.snd_mixPreset = integer;
  v19 = DVARBOOL_profileMenuOption_controllerSpeakerEnabled;
  if ( !DVARBOOL_profileMenuOption_controllerSpeakerEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_controllerSpeakerEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  enabled = v19->current.enabled;
  v21 = DVARBOOL_cl_voice;
  s_gamerSettings[v3].config.snd_controllerSpeakerEnabled = enabled;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_voice") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.enabled;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4206, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v23 = v22;
  v24 = DVARFLT_voice_mic_threshold;
  s_gamerSettings[v3].config.voiceChatEnabled = v23;
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4226, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v26 = DVARFLT_voice_output_scaler;
  s_gamerSettings[v3].config.openMicThreshold = v25;
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_output_scaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = v26->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4246, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v28 = DVARFLT_voice_mic_scaler;
  s_gamerSettings[v3].config.voiceChatVolume = v27;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_mic_scaler") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v29 = v28->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4266, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v30 = DVARINT_snd_voicefutz;
  s_gamerSettings[v3].config.microphoneVolume = v29;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_voicefutz") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = v30->current.integer;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4286, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  s_gamerSettings[v3].config.voiceFutz = v31;
  v32 = DVARINT_snd_voiceChatDeviceType;
  if ( !DVARINT_snd_voiceChatDeviceType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "snd_voiceChatDeviceType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = v32->current.integer;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4306, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  s_gamerSettings[v3].config.profileFlags &= ~1u;
  s_gamerSettings[v3].config.profileFlags |= v33 & 1;
  v34 = DVARFLT_profileMenuOption_safeAreaHorz;
  if ( !DVARFLT_profileMenuOption_safeAreaHorz && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_safeAreaHorz") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = v34->current.value;
  v36 = DVARFLT_profileMenuOption_safeAreaVert;
  s_gamerSettings[v3].config.safearea_adjusted_horizontal = v35;
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_safeAreaVert") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v37 = v36->current.value;
  v38 = DVARINT_profileMenuOption_lootCardDetail;
  s_gamerSettings[v3].config.safearea_adjusted_vertical = v37;
  if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_lootCardDetail") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = v38->current.integer;
  v40 = DVARFLT_profileMenuOption_mousevertsensitivity;
  s_gamerSettings[v3].config.lootCardDetail = v39;
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_mousevertsensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = v40->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2955, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v42 = DVARFLT_profileMenuOption_mousehorzsensitivity;
  s_gamerSettings[v3].config.viewMouseVertSensitivity = v41;
  if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_mousehorzsensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = v42->current.value;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v59) = 8;
    LODWORD(v58) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2932, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v58, v59) )
      __debugbreak();
  }
  v44 = DVARFLT_profileMenuOption_mouseflightvertsensitivity;
  s_gamerSettings[v3].config.viewMouseHorzSensitivity = v43;
  if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_mouseflightvertsensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v45 = v44->current.value;
  v46 = DVARFLT_profileMenuOption_mouseflighthorzsensitivity;
  s_gamerSettings[v3].config.viewMouseFlightVertSensitivity = v45;
  if ( !v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_mouseflighthorzsensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v47 = v46->current.value;
  v48 = DVARBOOL_profileMenuOption_netRegionHide;
  s_gamerSettings[v3].config.viewMouseFlightHorzSensitivity = v47;
  if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_netRegionHide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = v48->current.enabled;
  v50 = DVARBOOL_profileMenuOption_netExternalIPHide;
  s_gamerSettings[v3].config.net_regionHide = v49;
  if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_netExternalIPHide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  v51 = v50->current.enabled;
  v52 = DVARBOOL_profileMenuOption_netInternalIPHide;
  s_gamerSettings[v3].config.net_externalIPHide = v51;
  if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_netInternalIPHide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  v53 = v52->current.enabled;
  v54 = DVARBOOL_profileMenuOption_netConnectionMeterHide;
  s_gamerSettings[v3].config.net_internalIPHide = v53;
  if ( !v54 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_netConnectionMeterHide") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  v55 = v54->current.enabled;
  v56 = DVARBOOL_profileMenuOption_gore;
  s_gamerSettings[v3].config.net_connectionMeterHide = v55;
  if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "profileMenuOption_gore") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  v57 = v56->current.color[0];
  s_gamerSettings[v3].config.gore = v57;
  GamerProfile_OnSetGore(v57 != 0);
}

/*
==============
GamerProfile_OptionsMenuDvarsSetup
==============
*/
void GamerProfile_OptionsMenuDvarsSetup(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  bool IsMainThread; 
  bool v4; 
  __int64 v5; 
  int v6; 
  int VoiceChatDeviceType; 
  __int64 v8; 
  __int64 v9; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5775, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = v1;
  Com_Printf(14, "Profile: Setting option-menu dvars from controller #%i's profile.\n", (unsigned int)v1);
  IsMainThread = Sys_IsMainThread();
  v4 = !IsMainThread;
  v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v6 = *(_DWORD *)(v5 + 1052);
  if ( !IsMainThread )
    *(_DWORD *)(v5 + 1052) = v6 | 4;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4416, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_blacklevel, s_gamerSettings[v2].config.blacklevel);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4356, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMinLum, s_gamerSettings[v2].config.hdrMinLum);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4376, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMaxLum, s_gamerSettings[v2].config.hdrMaxLum);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4396, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrGamma, s_gamerSettings[v2].config.hdrGamma);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4136, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_volume, s_gamerSettings[v2].config.snd_volume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4156, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_voiceVolume, s_gamerSettings[v2].config.snd_voiceVolume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4176, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_musicVolume, s_gamerSettings[v2].config.snd_musicVolume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4316, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_effectsVolume, s_gamerSettings[v2].config.snd_effectsVolume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4336, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_licensedMusicVolume, s_gamerSettings[v2].config.snd_licensed_content_volume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4116, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetInt_Internal(DVARINT_profileMenuOption_presetMix, s_gamerSettings[v2].config.snd_mixPreset);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_controllerSpeakerEnabled, s_gamerSettings[v2].config.snd_controllerSpeakerEnabled);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4196, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetBool_Internal(DVARBOOL_cl_voice, s_gamerSettings[v2].config.voiceChatEnabled != 0);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4216, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_voice_mic_threshold, s_gamerSettings[v2].config.openMicThreshold);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4236, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_voice_output_scaler, s_gamerSettings[v2].config.voiceChatVolume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4256, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_voice_mic_scaler, s_gamerSettings[v2].config.microphoneVolume);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4276, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetInt_Internal(DVARINT_snd_voicefutz, s_gamerSettings[v2].config.voiceFutz);
  VoiceChatDeviceType = GamerProfile_GetVoiceChatDeviceType(v1);
  Dvar_SetInt_Internal(DVARINT_snd_voiceChatDeviceType, VoiceChatDeviceType);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaHorz, s_gamerSettings[v2].config.safearea_adjusted_horizontal);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaVert, s_gamerSettings[v2].config.safearea_adjusted_vertical);
  Dvar_SetInt_Internal(DVARINT_profileMenuOption_lootCardDetail, s_gamerSettings[v2].config.lootCardDetail);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2943, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_mousevertsensitivity, s_gamerSettings[v2].config.viewMouseVertSensitivity);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2920, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_mousehorzsensitivity, s_gamerSettings[v2].config.viewMouseHorzSensitivity);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_mouseflightvertsensitivity, s_gamerSettings[v2].config.viewMouseFlightVertSensitivity);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_mouseflighthorzsensitivity, s_gamerSettings[v2].config.viewMouseFlightHorzSensitivity);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_netRegionHide, s_gamerSettings[v2].config.net_regionHide);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_netExternalIPHide, s_gamerSettings[v2].config.net_externalIPHide);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_netInternalIPHide, s_gamerSettings[v2].config.net_internalIPHide);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_netConnectionMeterHide, s_gamerSettings[v2].config.net_connectionMeterHide);
  Dvar_SetBool_Internal(DVARBOOL_profileMenuOption_gore, s_gamerSettings[v2].config.gore != 0);
  if ( v4 )
    *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = v6;
}

/*
==============
GamerProfile_ReadXProfileSettings
==============
*/
void GamerProfile_ReadXProfileSettings(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v3; 
  MemCardFileHandle *v4; 
  MemCardFileHandle v5; 
  int v6; 
  int v7; 
  bool *ddlMounted; 
  bool v9; 
  int fmt; 
  int *versionMinor; 
  __int64 v12; 
  MemcardError error; 
  int v14; 
  int versionMajor; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4549, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  v2 = v1;
  if ( !s_gamerSettings[v1].isProfileLoggedIn )
  {
    versionMinor = (int *)"s_gamerSettings[controllerIndex].isProfileLoggedIn";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4550, ASSERT_TYPE_ASSERT, "(s_gamerSettings[controllerIndex].isProfileLoggedIn)", (const char *)&queryFormat) )
      __debugbreak();
  }
  Com_Printf(16, "Reading profile for controller %i\n", (unsigned int)v1);
  R_BeginRemoteScreenUpdate();
  v3 = 0;
  s_settingsBuffer[0] = 0;
  s_settingsBufferBytesRead = 0;
  v4 = MemCard_OpenFile((MemCardFileHandle *)&stru_14420B208, NULL, MEMCARD_READ, (MemcardSizeHint)v1, fmt);
  v5.handle = (__int64)v4;
  if ( v4 )
  {
    s_settingsBufferBytesRead = MemCard_ReadFile((MemCardFileHandle)v4, s_settingsBuffer, 0x1600ui64, &error);
    MemCard_CloseFile(v5, 1);
  }
  else
  {
    Com_PrintError(10, "Profile file \"%s\" could not be opened for reading. Perhaps it does not exist? \n", (const char *)&stru_14420B208);
  }
  v6 = s_settingsBufferBytesRead;
  if ( s_settingsBuffer[0] )
  {
    if ( (unsigned int)v1 > 8 )
    {
      LODWORD(versionMinor) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2015, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", versionMinor, 0i64, 8) )
        __debugbreak();
    }
    s_playStartTime[v1] = Sys_MillisecondsRaw();
    if ( Load_KeyPairsFromBinary(s_settingsBuffer, v6, s_gamerSettings[v2].keyPairs, s_gamerSettings[v2].keyPairsStringPool, &versionMajor, &v14) )
    {
      Load_ProfileFromKeyPairs(v1, PROFILE_KEY_MAP, 194, s_gamerSettings[v2].keyPairs, s_gamerSettings[v2].keyPairsStringPool);
      v7 = v14;
      if ( v14 < 1 )
        SetProfileDefaults_VoiceChat(&s_gamerSettings[v1], v1);
      if ( v7 < 2 )
        SetProfileDefaults_Deadzone(&s_gamerSettings[v1], v1);
      GamerProfile_UpdateSystemVarsFromProfile(v1);
    }
    else
    {
      Com_PrintError(14, "Error parsing binary profile to keypairs for controller #%i.  Resetting profile.\n", (unsigned int)v1);
      KeyPairsResetAll(v1);
      GamerProfile_ResetDvars();
      Com_PrintWarning(16, "Unable to read gamerprofile for controller %i.\n", (unsigned int)v1);
    }
  }
  else
  {
    GamerProfile_ResetDvars();
  }
  if ( (unsigned int)v1 > 8 )
  {
    LODWORD(v12) = 8;
    LODWORD(versionMinor) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4534, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", versionMinor, 0i64, v12) )
      __debugbreak();
  }
  ddlMounted = s_gamerSettings[v2].ddlMounted;
  do
  {
    v9 = GamerProfile_MountDDL(v1, (ProfileDDLTypes)v3++);
    *ddlMounted++ = v9;
  }
  while ( v3 < 3 );
  R_EndRemoteScreenUpdate();
}

/*
==============
GamerProfile_RegisterCommands
==============
*/
void GamerProfile_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_GAMER_PROFILE_CMD, 0x6Cu);
}

/*
==============
GamerProfile_ResetAllGameOptions
==============
*/
void GamerProfile_ResetAllGameOptions(const int controllerIndex)
{
  SetProfileDefaults(&s_gamerSettings[controllerIndex], controllerIndex);
  Com_ResetAllDvarOptions(controllerIndex);
  Online_PlayerData_SetCrossPlayEnabled(controllerIndex, 1);
  GamerProfile_SaveProfile(controllerIndex);
  StoreSettingsToLastSaved(controllerIndex);
}

/*
==============
GamerProfile_ResetCheats
==============
*/
void GamerProfile_ResetCheats(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  *(_QWORD *)&s_gamerSettings[v1].config.cheatPoints = 0i64;
  s_gamerSettings[v1].config.cheat_items_set2 = 0;
}

/*
==============
GamerProfile_ResetDataByIndex
==============
*/
void GamerProfile_ResetDataByIndex(const int controllerIndex, const int dataIndex)
{
  __int64 v2; 
  int v5; 

  if ( dataIndex >= 0 )
  {
    v2 = dataIndex;
    if ( (unsigned int)dataIndex >= 0x8A )
    {
      v5 = 138;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8863, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "dataIndex doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", dataIndex, v5) )
        __debugbreak();
    }
    if ( PROFILE_DATA_FIELDS[v2].isGameOption )
      GamerProfile_SetDataByIndex(controllerIndex, v2, PROFILE_DATA_FIELDS[v2].defaultVal);
  }
}

/*
==============
GamerProfile_ResetDataByName
==============
*/
void GamerProfile_ResetDataByName(const int controllerIndex, const char *settingName)
{
  int DataIndexByName; 

  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8852, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  GamerProfile_ResetDataByIndex(controllerIndex, DataIndexByName);
}

/*
==============
GamerProfile_ResetDifficulty
==============
*/
void GamerProfile_ResetDifficulty()
{
  int ControllerFromClient; 
  const char *v1; 

  if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Cmd_TokenizeString("difficultymedium");
    if ( Cmd_Argc() )
    {
      cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
      cmd_args.controllerIndex[cmd_args.nesting] = ControllerFromClient;
      v1 = Cmd_Argv(0);
      if ( !Cmd_ExecuteCommandFunctions(v1, "difficultymedium", &s_cmd_functions) && !Dvar_Command(0) )
        CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, "difficultymedium");
    }
    Cmd_EndTokenizedString();
  }
}

/*
==============
GamerProfile_ResetDvars
==============
*/
void GamerProfile_ResetDvars()
{
  const dvar_t *v0; 

  Dvar_SetBool_Internal(DVARBOOL_com_saveGameAvailable, 0);
  v0 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v0, DVAR_SOURCE_INTERNAL);
}

/*
==============
GamerProfile_RumbleToggle
==============
*/
void GamerProfile_RumbleToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6371, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.gpadRumble;
  s_gamerSettings[v1].config.gpadRumble = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: Rumble toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_SaveProfile
==============
*/
void GamerProfile_SaveProfile(int controllerIndex)
{
  __int64 v2; 
  char *keyPairsStringPool; 
  GamerSettingKeyPair *keyPairs; 
  __int64 v5; 
  MemCardFileHandle *v6; 
  MemCardFileHandle v7; 
  int fmt; 
  __int64 v9; 
  char destBuf[5632]; 

  v2 = controllerIndex;
  if ( !s_gamerSettings[v2].config.firstTimePlayedSPTime && &s_gamerSettings[v2] != (GamerSettingState *)-399i64 && s_gamerSettings[v2].config.lastSaveGame[0] )
    s_gamerSettings[v2].config.firstTimePlayedSPTime = Sys_GetTimeAsSeconds();
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2335, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  if ( !s_gamerSettings[v2].isProfileLoggedIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2336, ASSERT_TYPE_ASSERT, "(s_gamerSettings[controllerIndex].isProfileLoggedIn)", (const char *)&queryFormat, "s_gamerSettings[controllerIndex].isProfileLoggedIn") )
    __debugbreak();
  if ( s_gamerSettings[v2].errorOnRead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2337, ASSERT_TYPE_ASSERT, "(!s_gamerSettings[controllerIndex].errorOnRead)", (const char *)&queryFormat, "!s_gamerSettings[controllerIndex].errorOnRead") )
    __debugbreak();
  if ( (unsigned int)controllerIndex > 8 )
  {
    LODWORD(v9) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2045, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v9, 0i64, 8) )
      __debugbreak();
  }
  if ( !s_gamerSettings[v2].isProfileLoggedIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2046, ASSERT_TYPE_ASSERT, "(s_gamerSettings[controllerIndex].isProfileLoggedIn)", (const char *)&queryFormat, "s_gamerSettings[controllerIndex].isProfileLoggedIn") )
    __debugbreak();
  keyPairsStringPool = s_gamerSettings[v2].keyPairsStringPool;
  keyPairs = s_gamerSettings[v2].keyPairs;
  Save_KeyPairsFromProfile(controllerIndex, PROFILE_KEY_MAP, 194, keyPairs, keyPairsStringPool);
  memset_0(destBuf, 0, sizeof(destBuf));
  v5 = Save_BinaryFromKeyPairs(keyPairs, keyPairsStringPool, destBuf, 5632);
  Com_Printf(14, "GamerProfile - Compressed keypairs for storage.  Used %i/%i bytes.\n", v5, 5632i64);
  v6 = MemCard_OpenFile((MemCardFileHandle *)&stru_14420B208, (const char *)1, MEMCARD_READ, (MemcardSizeHint)controllerIndex, fmt);
  v7.handle = (__int64)v6;
  if ( v6 )
  {
    MemCard_WriteFile((MemCardFileHandle)v6, destBuf, v5);
    MemCard_CloseFile(v7, 1);
  }
  else
  {
    Com_PrintError(10, "Profile file \"%s\" could not be opened for writing.\n", (const char *)&stru_14420B208);
  }
}

/*
==============
GamerProfile_SetAdsHighZoomGamepadSensitivityMultiplier
==============
*/
void GamerProfile_SetAdsHighZoomGamepadSensitivityMultiplier(int controllerIndex, float sensitivityMultiplier)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2894, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.adsHighZoomGamepadSensitivityMultiplier = sensitivityMultiplier;
}

/*
==============
GamerProfile_SetAdsLowZoomGamepadSensitivityMultiplier
==============
*/
void GamerProfile_SetAdsLowZoomGamepadSensitivityMultiplier(int controllerIndex, float sensitivityMultiplier)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2910, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.adsLowZoomGamepadSensitivityMultiplier = sensitivityMultiplier;
}

/*
==============
GamerProfile_SetAdsSensitivityMultiplierTiming
==============
*/
void GamerProfile_SetAdsSensitivityMultiplierTiming(const int controllerIndex, int timing)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3278, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.adsSensitivityMultiplierTiming = timing;
}

/*
==============
GamerProfile_SetAimAssistFovScale
==============
*/
void GamerProfile_SetAimAssistFovScale(const int controllerIndex, bool aimAssistFovScale)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7781, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~8u;
  s_gamerSettings[v4].config.profileFlags |= 8 * aimAssistFovScale;
}

/*
==============
GamerProfile_SetAimAssistType
==============
*/
void GamerProfile_SetAimAssistType(const int controllerIndex, int aimAssistType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5049, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.aimAssistType = aimAssistType;
}

/*
==============
GamerProfile_SetAimResponseCurveType
==============
*/
void GamerProfile_SetAimResponseCurveType(const int controllerIndex, int aimResponseCurveType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5071, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.aimResponseCurveType = aimResponseCurveType;
}

/*
==============
GamerProfile_SetAlwaysBlockClanInvites
==============
*/
void GamerProfile_SetAlwaysBlockClanInvites(int controllerIndex, bool block)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3754, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.alwaysBlockClanInvites = block;
}

/*
==============
GamerProfile_SetArmorPlateApplyAllGamepad
==============
*/
void GamerProfile_SetArmorPlateApplyAllGamepad(const int controllerIndex, bool armorPlateApplyAllGamepad)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7955, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~4u;
  s_gamerSettings[v4].config.profileFlags |= 4 * armorPlateApplyAllGamepad;
}

/*
==============
GamerProfile_SetArmorPlateApplyAllKBM
==============
*/
void GamerProfile_SetArmorPlateApplyAllKBM(const int controllerIndex, bool armorPlateApplyAllKBM)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7993, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~2u;
  s_gamerSettings[v4].config.profileFlags |= 2 * armorPlateApplyAllKBM;
}

/*
==============
GamerProfile_SetAutoAim
==============
*/
void GamerProfile_SetAutoAim(int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6023, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "off";
  s_gamerSettings[v5].config.autoAim = value;
  if ( value )
    v7 = "on";
  Com_Printf(14, "Profile: Autoaim set %s for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetAutoForwardInputSequenceEnable
==============
*/
void GamerProfile_SetAutoForwardInputSequenceEnable(const int controllerIndex, bool autoForwardInputSequenceEnable)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7750, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.autoForwardInputSequenceEnable = autoForwardInputSequenceEnable;
}

/*
==============
GamerProfile_SetAutoMantleAirborne
==============
*/
void GamerProfile_SetAutoMantleAirborne(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5224, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.autoMantleAirborne = enabled;
}

/*
==============
GamerProfile_SetAutoSprintGamepad
==============
*/
void GamerProfile_SetAutoSprintGamepad(const int controllerIndex, AutoSprintOption_t autoSprintGamepad)
{
  __int64 v2; 
  __int64 v4; 
  const dvar_t *v5; 
  int v7; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7660, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  v4 = v2;
  v5 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    autoSprintGamepad = DEFAULT_AUTO_SPRINT_NONE;
  s_gamerSettings[v4].config.autoSprintGamepad = autoSprintGamepad;
}

/*
==============
GamerProfile_SetAutoSprintKBM
==============
*/
void GamerProfile_SetAutoSprintKBM(const int controllerIndex, AutoSprintOption_t autoSprintEnabledKBM)
{
  __int64 v2; 
  __int64 v4; 
  const dvar_t *v5; 
  int v7; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7705, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  v4 = v2;
  v5 = DVARBOOL_auto_sprint_enabled;
  if ( !DVARBOOL_auto_sprint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_sprint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    autoSprintEnabledKBM = DEFAULT_AUTO_SPRINT_NONE;
  s_gamerSettings[v4].config.autoSprintKBM = autoSprintEnabledKBM;
}

/*
==============
GamerProfile_SetAutoWeaponSwitchGamepad
==============
*/
void GamerProfile_SetAutoWeaponSwitchGamepad(const int controllerIndex, bool autoWeaponSwitch)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3220, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.autoWeaponSwitchGamepad = autoWeaponSwitch;
}

/*
==============
GamerProfile_SetAutoWeaponSwitchKeyboard
==============
*/
void GamerProfile_SetAutoWeaponSwitchKeyboard(const int controllerIndex, bool autoWeaponSwitch)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3242, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.autoWeaponSwitchKeyboard = autoWeaponSwitch;
}

/*
==============
GamerProfile_SetAutodetectDvarsAsProfile
==============
*/
void GamerProfile_SetAutodetectDvarsAsProfile(void)
{
  int ControllerFromClient; 
  __int64 v1; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v1 = ControllerFromClient;
  if ( (unsigned int)ControllerFromClient > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9497, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", ControllerFromClient, 0i64, 8) )
    __debugbreak();
  if ( (unsigned int)v1 <= 7 )
    s_gamerSettings[v1].config.weaponMotionBlurEnabled = Dvar_GetBool_Internal(r_mbEnableA);
}

/*
==============
GamerProfile_SetBindingsConfig
==============
*/
void GamerProfile_SetBindingsConfig(int controllerIndex, const char *id, bool isButtons, bool isBR)
{
  __int64 v4; 
  __int64 v8; 
  char *gpadButtonsConfig; 
  CmdText *v10; 
  int v11; 
  __int64 cmdsize; 
  int v13; 
  scrContext_t *v14; 
  char *gpadBRButtonsConfig; 
  const char *v16; 
  char *fmt; 

  v4 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5958, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v8 = 8072 * v4;
  gpadButtonsConfig = s_gamerSettings[0].config.gpadButtonsConfig;
  if ( I_stricmp(s_gamerSettings[v4].config.gpadButtonsConfig, id) )
  {
    v10 = &s_cmd_textArray[CL_Mgr_GetClientFromController(v4)];
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
      __debugbreak();
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v11 = strlen_noncrt("profile_onBindingsConfig\n");
    cmdsize = v10->cmdsize;
    v13 = v11;
    if ( (int)cmdsize + v11 < v10->maxsize )
    {
      memcpy_noncrt(&v10->data[cmdsize], "profile_onBindingsConfig\n", v11 + 1);
      v10->cmdsize += v13;
      v14 = ScriptContext_Server();
      Scr_MonitorCommand(v14, "profile_onBindingsConfig\n");
    }
    else
    {
      Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "profile_onBindingsConfig\n");
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
  }
  if ( isButtons )
  {
    gpadBRButtonsConfig = s_gamerSettings[0].config.gpadBRButtonsConfig;
    if ( !isBR )
      gpadBRButtonsConfig = s_gamerSettings[0].config.gpadButtonsConfig;
  }
  else
  {
    gpadBRButtonsConfig = s_gamerSettings[0].config.gpadSticksConfig;
  }
  Core_strcpy(&gpadBRButtonsConfig[v8], 0x20ui64, id);
  LODWORD(fmt) = v4;
  if ( !isButtons )
    gpadButtonsConfig = s_gamerSettings[0].config.gpadSticksConfig;
  v16 = "Sticks";
  if ( isButtons )
    v16 = "Buttons";
  Com_Printf(14, "Profile: %s config set to \"%s\" for controller #%i.\n", v16, &gpadButtonsConfig[v8], fmt);
}

/*
==============
GamerProfile_SetBlackLevel
==============
*/
void GamerProfile_SetBlackLevel(const int controllerIndex, float value)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4426, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.blacklevel = value;
}

/*
==============
GamerProfile_SetChatProfanityFilterEnabled
==============
*/
void GamerProfile_SetChatProfanityFilterEnabled(int controllerIndex, int enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3842, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.chatProfanityFilterEnabled = enabled;
}

/*
==============
GamerProfile_SetColorBlindMode
==============
*/
void GamerProfile_SetColorBlindMode(int controllerIndex, unsigned __int8 mode)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6155, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.colorBlindMode = mode;
  Com_Printf(14, "Profile: Render Color Blind Mode set to %i for controller #%i.\n", mode, (unsigned int)v2);
}

/*
==============
GamerProfile_SetColorBlindTargets
==============
*/
void GamerProfile_SetColorBlindTargets(int controllerIndex, bool world, bool ui)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 
  char *fmt; 
  int v10; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6182, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v10) )
      __debugbreak();
  }
  LODWORD(fmt) = v3;
  v6 = "off";
  v7 = "off";
  s_gamerSettings[v3].config.colorBlindTargets = world | (2 * ui);
  if ( ui )
    v7 = "on";
  if ( world )
    v6 = "on";
  Com_Printf(14, "Profile: Color Blind targets world: %s, ui: %s for controller #%i.\n", v6, v7, fmt);
}

/*
==============
GamerProfile_SetCrossPlay
==============
*/
void GamerProfile_SetCrossPlay(int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6285, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "off";
  s_gamerSettings[v5].config.crossPlay = value;
  if ( value )
    v7 = "on";
  Com_Printf(14, "Profile: Crossplay set %s for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetCrouchType
==============
*/
void GamerProfile_SetCrouchType(const int controllerIndex, int crouchType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3465, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.crouchType = crouchType;
}

/*
==============
GamerProfile_SetData
==============
*/
void GamerProfile_SetData(const int controllerIndex, int dataIndex, GamerProfileData *data)
{
  __int64 v3; 
  int v7; 
  GamerProfileData v8; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8981, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  v8 = *data;
  SetData(&s_gamerSettings[v3], dataIndex, &v8);
}

/*
==============
GamerProfile_SetDataByIndex
==============
*/
void GamerProfile_SetDataByIndex(const int controllerIndex, const int dataIndex, const float settingValue)
{
  __int64 v3; 
  __int64 v4; 
  GamerProfileDataType type; 
  __int64 v6; 
  int v8; 
  int v9; 
  GamerProfileData v10; 

  if ( dataIndex >= 0 )
  {
    v3 = dataIndex;
    v4 = controllerIndex;
    if ( (unsigned int)dataIndex >= 0x8A )
    {
      v8 = 138;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8931, ASSERT_TYPE_ASSERT, "(unsigned)( dataIndex ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "dataIndex doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", dataIndex, v8) )
        __debugbreak();
    }
    type = PROFILE_DATA_FIELDS[v3].type;
    v10.type = type;
    switch ( type )
    {
      case TYPE_BYTE:
        v10.u.byteVal = (int)settingValue;
        goto LABEL_11;
      case TYPE_BOOL:
        v10.u.byteVal = settingValue != 0.0;
        goto LABEL_11;
      case TYPE_SHORT:
        v10.u.shortVal = (int)settingValue;
        goto LABEL_11;
      case TYPE_INT:
      case TYPE_FLAG:
        v10.u.intVal = (int)settingValue;
        goto LABEL_11;
      case TYPE_FLOAT:
        v10.u.floatVal = settingValue;
        goto LABEL_11;
      case TYPE_STRING:
      case TYPE_BUFFER:
        return;
      default:
LABEL_11:
        if ( type )
        {
          if ( (unsigned int)v4 > 8 )
          {
            v9 = 8;
            LODWORD(v6) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8981, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v6, 0i64, v9) )
              __debugbreak();
          }
          SetData(&s_gamerSettings[v4], v3, &v10);
        }
        break;
    }
  }
}

/*
==============
GamerProfile_SetDataByName
==============
*/
void GamerProfile_SetDataByName(const int controllerIndex, const char *settingName, const float settingValue)
{
  int DataIndexByName; 

  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8915, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  GamerProfile_SetDataByIndex(controllerIndex, DataIndexByName, settingValue);
}

/*
==============
GamerProfile_SetDefaultJuggMusicEnabled
==============
*/
void GamerProfile_SetDefaultJuggMusicEnabled(const int controllerIndex, bool defaultJuggMusicEnabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7637, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.juggMusicEnableDefault = defaultJuggMusicEnabled;
}

/*
==============
GamerProfile_SetDifficulty
==============
*/
void GamerProfile_SetDifficulty(int controllerIndex, int difficultyLevel)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 
  int v7; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2673, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  if ( (unsigned int)difficultyLevel > 5 )
  {
    v7 = 5;
    LODWORD(v4) = difficultyLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2674, ASSERT_TYPE_ASSERT, "( DIFFICULTY_EASY ) <= ( difficultyLevel ) && ( difficultyLevel ) <= ( DIFFICULTY_YOLO )", "difficultyLevel not in [DIFFICULTY_EASY, DIFFICULTY_YOLO]\n\t%i not in [%i, %i]", v4, 0i64, v7) )
      __debugbreak();
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    Com_Printf(14, "Saving difficulty level of \"%i\" to profile on controller #%i.\n", (unsigned int)difficultyLevel, (unsigned int)v2);
    s_gamerSettings[v2].config.curDifficulty = difficultyLevel;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420C330, 385i64);
  }
}

/*
==============
GamerProfile_SetDisplayInviteNotificationEnabled
==============
*/
void GamerProfile_SetDisplayInviteNotificationEnabled(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3820, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayInviteNotification = enabled;
}

/*
==============
GamerProfile_SetDisplayNameTag
==============
*/
void GamerProfile_SetDisplayNameTag(int controllerIndex, bool display)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3688, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayNameTag = display;
}

/*
==============
GamerProfile_SetDisplayTelemetryCpuTime
==============
*/
void GamerProfile_SetDisplayTelemetryCpuTime(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3622, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryCpuTime = enabled;
}

/*
==============
GamerProfile_SetDisplayTelemetryFPS
==============
*/
void GamerProfile_SetDisplayTelemetryFPS(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3542, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryFPS = enabled;
}

/*
==============
GamerProfile_SetDisplayTelemetryGpuTemperature
==============
*/
void GamerProfile_SetDisplayTelemetryGpuTemperature(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3582, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryGpuTemperature = enabled;
}

/*
==============
GamerProfile_SetDisplayTelemetryGpuTime
==============
*/
void GamerProfile_SetDisplayTelemetryGpuTime(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3602, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryGpuTime = enabled;
}

/*
==============
GamerProfile_SetDisplayTelemetryLatency
==============
*/
void GamerProfile_SetDisplayTelemetryLatency(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3562, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryLatency = enabled;
}

/*
==============
GamerProfile_SetDisplayTelemetryPacketLoss
==============
*/
void GamerProfile_SetDisplayTelemetryPacketLoss(const int controllerIndex, int enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3644, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.displayTelemetryPacketLoss = enabled;
}

/*
==============
GamerProfile_SetFreeLook
==============
*/
void GamerProfile_SetFreeLook(const int controllerIndex, bool freeLook)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3368, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.freeLook = freeLook;
}

/*
==============
GamerProfile_SetGamepadEnabled
==============
*/
void GamerProfile_SetGamepadEnabled(int controllerIndex, bool enabled)
{
  __int64 v2; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v5; 
  clientUIActive_t *LocalClientUIGlobals; 
  UIInputType lastInputType; 
  const char *v8; 
  LocalClientNum_t outLocalClientNum; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7492, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  if ( enabled != GamerProfile_GetGamepadEnabled(v2) )
  {
    if ( !enabled )
    {
      IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
      v5 = outLocalClientNum;
      if ( !IsControllerMappedToClient )
        v5 = LOCAL_CLIENT_0;
      outLocalClientNum = v5;
      LocalClientUIGlobals = CL_GetLocalClientUIGlobals(v5);
      lastInputType = LocalClientUIGlobals->lastInputType;
      IN_GamepadsReset(v2);
      LocalClientUIGlobals->lastInputType = lastInputType;
    }
    v8 = "off";
    s_gamerSettings[v2].config.gpadEnabled = enabled;
    if ( enabled )
      v8 = "on";
    Com_Printf(14, "Profile: Gamepad enable set %s for controller #%i.\n", v8, (unsigned int)v2);
  }
}

/*
==============
GamerProfile_SetGamepadUseReloadProfile
==============
*/
void GamerProfile_SetGamepadUseReloadProfile(const int controllerIndex, unsigned __int8 newUseReloadProfile)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7550, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.gpadUseReloadProfile = newUseReloadProfile;
}

/*
==============
GamerProfile_SetHDRMaxLum
==============
*/
void GamerProfile_SetHDRMaxLum(const int controllerIndex, float value)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4386, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.hdrMaxLum = value;
}

/*
==============
GamerProfile_SetHDRMinLum
==============
*/
void GamerProfile_SetHDRMinLum(const int controllerIndex, float value)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4366, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.hdrMinLum = value;
}

/*
==============
GamerProfile_SetHTTPDownloadTexturesEnable
==============
*/
void GamerProfile_SetHTTPDownloadTexturesEnable(const int controllerIndex, bool httpDownloadTexturesEnable)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8140, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x4000u;
  s_gamerSettings[v4].config.profileFlags |= httpDownloadTexturesEnable << 14;
}

/*
==============
GamerProfile_SetHitMarkerAlias
==============
*/
void GamerProfile_SetHitMarkerAlias(int controllerIndex, const char *soundAlias)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3710, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  Core_strcpy(s_gamerSettings[v2].config.sndHitMarkerAlias, 0x20ui64, soundAlias);
}

/*
==============
GamerProfile_SetHoldGrenade
==============
*/
void GamerProfile_SetHoldGrenade(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3070, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.grenadeHold = enabled;
}

/*
==============
GamerProfile_SetHoldGrenadeKBM
==============
*/
void GamerProfile_SetHoldGrenadeKBM(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3081, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.grenadeHoldKBM = enabled;
}

/*
==============
GamerProfile_SetHoldSprint
==============
*/
void GamerProfile_SetHoldSprint(const int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5419, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.holdSprint = value;
  if ( value )
    v7 = "enabled";
  Com_Printf(14, "Profile: Hold to Sprint %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetHorizontalSensitivity
==============
*/
void GamerProfile_SetHorizontalSensitivity(int controllerIndex, int sensitivityIndex)
{
  __int64 v2; 
  __int64 v3; 
  int v5; 

  v2 = controllerIndex;
  v3 = sensitivityIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6133, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.viewHorzSensitivity = SENSITIVITY_MAP[v3];
}

/*
==============
GamerProfile_SetInitialGameMode
==============
*/
void GamerProfile_SetInitialGameMode(const int controllerIndex, const initialGameMode_t initialGameMode)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9302, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.initialGameMode = initialGameMode;
  GamerProfile_SaveProfile(v2);
  StoreSettingsToLastSaved(v2);
}

/*
==============
GamerProfile_SetIntelligence
==============
*/
void GamerProfile_SetIntelligence(int controllerIndex, int cheat_items_set1, int cheat_items_set2)
{
  __int64 v3; 
  __int64 v6; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 9268, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  v6 = v3;
  s_gamerSettings[v6].config.cheat_items_set1 = cheat_items_set1;
  s_gamerSettings[v6].config.cheat_items_set2 = cheat_items_set2;
}

/*
==============
GamerProfile_SetInvertedVerticalLookFlyingGamepad
==============
*/
void GamerProfile_SetInvertedVerticalLookFlyingGamepad(const int controllerIndex, bool inverted)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3959, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.invertPitchFlyingGamepad = inverted;
}

/*
==============
GamerProfile_SetInvertedVerticalLookGamepad
==============
*/
void GamerProfile_SetInvertedVerticalLookGamepad(const int controllerIndex, bool inverted)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3937, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.invertPitchGamepad = inverted;
}

/*
==============
GamerProfile_SetInvertedVerticalLookKBM
==============
*/
void GamerProfile_SetInvertedVerticalLookKBM(const int controllerIndex, LookInversionType_t inverted)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3984, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.invertPitchKBM = inverted;
}

/*
==============
GamerProfile_SetIsBRNotNew
==============
*/
void GamerProfile_SetIsBRNotNew(const int controllerIndex, bool isBRNotNew)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7921, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x80u;
  s_gamerSettings[v4].config.profileFlags |= isBRNotNew << 7;
}

/*
==============
GamerProfile_SetIsCPNew
==============
*/
void GamerProfile_SetIsCPNew(const int controllerIndex, bool isCPNew)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7887, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x40u;
  s_gamerSettings[v4].config.profileFlags |= isCPNew << 6;
}

/*
==============
GamerProfile_SetIsMPNew
==============
*/
void GamerProfile_SetIsMPNew(const int controllerIndex, bool isMPNew)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7853, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x20u;
  s_gamerSettings[v4].config.profileFlags |= 32 * isMPNew;
}

/*
==============
GamerProfile_SetIsParachuteAutoDeployGamepadDisabled
==============
*/
void GamerProfile_SetIsParachuteAutoDeployGamepadDisabled(const int controllerIndex, bool isParachuteAutoDeployGamepadDisabled)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8069, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x200u;
  s_gamerSettings[v4].config.profileFlags |= isParachuteAutoDeployGamepadDisabled << 9;
}

/*
==============
GamerProfile_SetIsParachuteAutoDeployKBMDisabled
==============
*/
void GamerProfile_SetIsParachuteAutoDeployKBMDisabled(const int controllerIndex, bool isParachuteAutoDeployKBMDisabled)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8031, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x100u;
  s_gamerSettings[v4].config.profileFlags |= isParachuteAutoDeployKBMDisabled << 8;
}

/*
==============
GamerProfile_SetIsSPNew
==============
*/
void GamerProfile_SetIsSPNew(const int controllerIndex, bool isSPNew)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7819, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x10u;
  s_gamerSettings[v4].config.profileFlags |= 16 * isSPNew;
}

/*
==============
GamerProfile_SetIsUsingAnonymization
==============
*/
void GamerProfile_SetIsUsingAnonymization(const int controllerIndex, bool useAnonymization)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8158, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x400u;
  s_gamerSettings[v4].config.profileFlags |= useAnonymization << 10;
}

/*
==============
GamerProfile_SetLanguage
==============
*/
void GamerProfile_SetLanguage(int controllerIndex, int language)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7037, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  if ( language < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7038, ASSERT_TYPE_ASSERT, "(language >= 0)", (const char *)&queryFormat, "language >= 0") )
    __debugbreak();
  if ( language >= 21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7039, ASSERT_TYPE_ASSERT, "(language < MAX_LANGUAGES)", (const char *)&queryFormat, "language < MAX_LANGUAGES") )
    __debugbreak();
  v4 = v2;
  if ( (language < 0 || (unsigned int)language > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)language, "signed", language) )
    __debugbreak();
  s_gamerSettings[v4].config.language = language;
}

/*
==============
GamerProfile_SetLastSaveGame
==============
*/
void GamerProfile_SetLastSaveGame(const int controllerIndex, const char *newSaveGameName)
{
  __int64 v2; 
  __int64 v4; 

  v2 = controllerIndex;
  if ( !newSaveGameName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5037, ASSERT_TYPE_ASSERT, "(newSaveGameName)", (const char *)&queryFormat, "newSaveGameName") )
    __debugbreak();
  if ( (unsigned int)v2 > 8 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5038, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v4, 0i64, 8) )
      __debugbreak();
  }
  Core_strcpy(s_gamerSettings[v2].config.lastSaveGame, 0x100ui64, newSaveGameName);
}

/*
==============
GamerProfile_SetLean
==============
*/
void GamerProfile_SetLean(int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6339, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.leanEnabled = value;
  if ( value )
    v7 = "enabled";
  Com_Printf(14, "Profile: Lean %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetMinimapRotationEnabled
==============
*/
void GamerProfile_SetMinimapRotationEnabled(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int *p_minimapStyle; 
  unsigned int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7079, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  p_minimapStyle = &s_gamerSettings[v2].config.minimapStyle;
  v5 = *p_minimapStyle & 0xFFFFFFFD;
  if ( !enabled )
    v5 = *p_minimapStyle | 2;
  *p_minimapStyle = v5;
}

/*
==============
GamerProfile_SetMinimapStyle
==============
*/
void GamerProfile_SetMinimapStyle(const int controllerIndex, int style)
{
  __int64 v2; 
  int *p_minimapStyle; 
  unsigned int v5; 
  int v7; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7055, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  p_minimapStyle = &s_gamerSettings[v2].config.minimapStyle;
  v5 = *p_minimapStyle | 1;
  if ( style < 1 )
    v5 = *p_minimapStyle & 0xFFFFFFFE;
  *p_minimapStyle = v5;
}

/*
==============
GamerProfile_SetMountButton
==============
*/
void GamerProfile_SetMountButton(const int controllerIndex, int mountButtonConfig)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v2 = controllerIndex;
  v3 = mountButtonConfig;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5121, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0xB )
  {
    LODWORD(v6) = 11;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5122, ASSERT_TYPE_ASSERT, "(unsigned)( mountButtonConfig ) < (unsigned)( COUNT_MOUNT_BUTTON_ENGAGE )", "mountButtonConfig doesn't index COUNT_MOUNT_BUTTON_ENGAGE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  GamerProfile_BBPrintConfig(v2, CONFIG_MOUNT, CONFIG_MOUNT_OPTIONS[s_gamerSettings[v2].config.mountButtonConfig], CONFIG_MOUNT_OPTIONS[v3]);
  s_gamerSettings[v2].config.mountButtonConfig = v3;
}

/*
==============
GamerProfile_SetMountButtonKBM
==============
*/
void GamerProfile_SetMountButtonKBM(const int controllerIndex, int mountButtonConfigKBM)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v2 = controllerIndex;
  v3 = mountButtonConfigKBM;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5141, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0xB )
  {
    LODWORD(v6) = 11;
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5142, ASSERT_TYPE_ASSERT, "(unsigned)( mountButtonConfigKBM ) < (unsigned)( COUNT_MOUNT_BUTTON_ENGAGE )", "mountButtonConfigKBM doesn't index COUNT_MOUNT_BUTTON_ENGAGE\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  GamerProfile_BBPrintConfig(v2, CONFIG_MOUNT, CONFIG_MOUNT_OPTIONS[s_gamerSettings[v2].config.mountButtonConfigKBM], CONFIG_MOUNT_OPTIONS[v3]);
  s_gamerSettings[v2].config.mountButtonConfigKBM = v3;
}

/*
==============
GamerProfile_SetMountPullAwayDelayKBM
==============
*/
void GamerProfile_SetMountPullAwayDelayKBM(const int controllerIndex, int delay)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5207, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mountPullAwayDelayKBM = delay;
}

/*
==============
GamerProfile_SetMountPullAwayEnabled
==============
*/
void GamerProfile_SetMountPullAwayEnabled(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5175, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mountPullAwayEnabled = enabled;
}

/*
==============
GamerProfile_SetMountPullAwayEnabledKBM
==============
*/
void GamerProfile_SetMountPullAwayEnabledKBM(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5191, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mountPullAwayEnabledKBM = enabled;
}

/*
==============
GamerProfile_SetMouseAccel
==============
*/
void GamerProfile_SetMouseAccel(const int controllerIndex, float mouseAccel)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3398, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mouseAccel = mouseAccel;
}

/*
==============
GamerProfile_SetMouseAdsUseMonitorDistance
==============
*/
void GamerProfile_SetMouseAdsUseMonitorDistance(int controllerIndex, bool useAdsMonitor)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2972, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mouseAdsUseMonitorDistance = useAdsMonitor;
}

/*
==============
GamerProfile_SetMouseFilter
==============
*/
void GamerProfile_SetMouseFilter(const int controllerIndex, float filter)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3338, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mouseFilter = filter;
}

/*
==============
GamerProfile_SetMouseMonitorDistanceCoef
==============
*/
void GamerProfile_SetMouseMonitorDistanceCoef(const int controllerIndex, float coef)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3308, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mouseMonitorDistanceCoef = coef;
}

/*
==============
GamerProfile_SetMouseSmoothing
==============
*/
void GamerProfile_SetMouseSmoothing(const int controllerIndex, bool smoothing)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3428, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.mouseSmoothing = smoothing;
}

/*
==============
GamerProfile_SetPercentCompleteMP
==============
*/
void GamerProfile_SetPercentCompleteMP(int controllerIndex, int percent)
{
  __int64 v2; 
  int *p_percentCompleteMP; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8436, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  p_percentCompleteMP = &s_gamerSettings[v2].config.percentCompleteMP;
  if ( *p_percentCompleteMP != percent )
  {
    Com_Printf(14, "Setting MP Completion to %i percent for controller #%i.\n", (unsigned int)percent, (unsigned int)v2);
    *p_percentCompleteMP = percent;
    GamerProfile_SaveProfile(v2);
    StoreSettingsToLastSaved(v2);
  }
}

/*
==============
GamerProfile_SetPlayerIntelFound
==============
*/
void GamerProfile_SetPlayerIntelFound(int controllerIndex, int intelNum)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( intelNum <= 64 )
  {
    if ( intelNum <= 32 )
    {
      if ( intelNum > 0 )
        s_gamerSettings[v2].config.cheat_items_set1 |= 1 << (intelNum - 1);
    }
    else
    {
      s_gamerSettings[v2].config.cheat_items_set2 |= 1 << (intelNum - 33);
    }
  }
}

/*
==============
GamerProfile_SetPlaylistNum
==============
*/
void GamerProfile_SetPlaylistNum(int controllerIndex, int playlistNum)
{
  s_gamerSettings[controllerIndex].config.playlist = playlistNum;
}

/*
==============
GamerProfile_SetProneType
==============
*/
void GamerProfile_SetProneType(const int controllerIndex, int proneType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3102, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.proneType = proneType;
}

/*
==============
GamerProfile_SetRumble
==============
*/
void GamerProfile_SetRumble(int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6383, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "off";
  s_gamerSettings[v5].config.gpadRumble = value;
  if ( value )
    v7 = "on";
  Com_Printf(14, "Profile: Rumble set %s for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetShowSoundMuted
==============
*/
void GamerProfile_SetShowSoundMuted(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3666, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.showSoundMuted = enabled;
}

/*
==============
GamerProfile_SetShowVoiceChatMuted
==============
*/
void GamerProfile_SetShowVoiceChatMuted(int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3732, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.showVoiceChatMuted = enabled;
}

/*
==============
GamerProfile_SetSoundVolume
==============
*/
void GamerProfile_SetSoundVolume(const int controllerIndex, float value)
{
  __int64 v2; 
  int v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4146, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.snd_volume = value;
}

/*
==============
GamerProfile_SetSpecialistMode
==============
*/
void GamerProfile_SetSpecialistMode(int controllerIndex, bool specialistMode)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2697, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    Com_Printf(14, "Saving specialist mode difficulty level of \"%i\" to profile on controller #%i.\n", specialistMode, (unsigned int)v2);
    s_gamerSettings[v2].config.specialistMode = specialistMode;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420C330, 386i64);
  }
}

/*
==============
GamerProfile_SetSprintCancelsReload
==============
*/
void GamerProfile_SetSprintCancelsReload(const int controllerIndex, bool sprintCancelsReload)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5104, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.sprintCancelsReload = sprintCancelsReload;
}

/*
==============
GamerProfile_SetStanceUpJump
==============
*/
void GamerProfile_SetStanceUpJump(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3509, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.stanceUpJump = enabled;
}

/*
==============
GamerProfile_SetSubtitles
==============
*/
void GamerProfile_SetSubtitles(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5015, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.showSubtitles = enabled;
}

/*
==============
GamerProfile_SetTapToSlideEnabledGamepad
==============
*/
void GamerProfile_SetTapToSlideEnabledGamepad(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3897, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.tapToSlideEnabledGamepad = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Tap To Slide Gamepad %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetTapToSlideEnabledKeyboard
==============
*/
void GamerProfile_SetTapToSlideEnabledKeyboard(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3925, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.tapToSlideEnabledKeyboard = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Tap To Slide Keyboard %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetTargetAssist
==============
*/
void GamerProfile_SetTargetAssist(int controllerIndex, bool value, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6066, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "off";
  s_gamerSettings[v5].config.targetAssist = value;
  if ( value )
    v7 = "on";
  Com_Printf(14, "Profile: Target assist set %s for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetTextChatEnabled
==============
*/
void GamerProfile_SetTextChatEnabled(int controllerIndex, bool value)
{
  __int64 v2; 
  const char *v4; 
  lua_State *v5; 
  LocalClientNum_t ClientFromController; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6234, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v4 = "off";
  s_gamerSettings[v2].config.textChatEnabled = value;
  if ( value )
    v4 = "on";
  Com_Printf(14, "Profile: Text Chat toggled %s for controller #%i.\n", v4, (unsigned int)v2);
  v5 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  if ( LUI_BeginEvent(ClientFromController, "text_chat_updated", v5) )
  {
    LUI_SetTableBool("active", value, LUI_luaVM);
    LUI_SetTableInt("controller", v2, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
GamerProfile_SetToggleADSEnabledGamepad
==============
*/
void GamerProfile_SetToggleADSEnabledGamepad(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4060, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.toggleADSEnabledGamepad = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Toggle ADS %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetToggleADSEnabledKeyboard
==============
*/
void GamerProfile_SetToggleADSEnabledKeyboard(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4072, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.toggleADSEnabledKeyboard = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Toggle ADS %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetToggleHoldBreath
==============
*/
void GamerProfile_SetToggleHoldBreath(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3487, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleHoldBreath = enabled;
}

/*
==============
GamerProfile_SetToggleMapCursorEnable
==============
*/
void GamerProfile_SetToggleMapCursorEnable(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3798, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleMapCursorEnable = enabled;
}

/*
==============
GamerProfile_SetToggleQuickInventory
==============
*/
void GamerProfile_SetToggleQuickInventory(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3037, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleQuickInventory = enabled;
}

/*
==============
GamerProfile_SetToggleScoreboard
==============
*/
void GamerProfile_SetToggleScoreboard(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2993, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleScoreboard = enabled;
}

/*
==============
GamerProfile_SetToggleScoreboardMap
==============
*/
void GamerProfile_SetToggleScoreboardMap(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3015, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleScoreboardMap = enabled;
}

/*
==============
GamerProfile_SetToggleTooltipEnable
==============
*/
void GamerProfile_SetToggleTooltipEnable(const int controllerIndex, bool enabled)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3776, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.toggleTooltipEnable = enabled;
}

/*
==============
GamerProfile_SetUseHoldKBMProfile
==============
*/
void GamerProfile_SetUseHoldKBMProfile(const int controllerIndex, bool useHoldKBMProfile)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8184, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x800u;
  s_gamerSettings[v4].config.profileFlags |= useHoldKBMProfile << 11;
}

/*
==============
GamerProfile_SetUseNumbersForCompassCardinalDirText
==============
*/
void GamerProfile_SetUseNumbersForCompassCardinalDirText(const int controllerIndex, bool useNumbers)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 7103, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x1000u;
  s_gamerSettings[v4].config.profileFlags |= useNumbers << 12;
}

/*
==============
GamerProfile_SetVehicleCameraAutoRecenterEnabledGamepad
==============
*/
void GamerProfile_SetVehicleCameraAutoRecenterEnabledGamepad(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3520, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.vehicleCameraAutoRecenterEnabledGamepad = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Auto Vehicle Camera Recenter Gamepad %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetVehicleCameraAutoRecenterEnabledKeyboard
==============
*/
void GamerProfile_SetVehicleCameraAutoRecenterEnabledKeyboard(int controllerIndex, bool enabled, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; 
  const char *v7; 
  int v9; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3869, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v9) )
      __debugbreak();
  }
  v7 = "disabled";
  s_gamerSettings[v5].config.vehicleCameraAutoRecenterEnabledKeyboard = enabled;
  if ( enabled )
    v7 = "enabled";
  Com_Printf(14, "Profile: Auto Vehicle Camera Recenter Keyboard %s set for controller #%i.\n", v7, (unsigned int)v5, a5);
}

/*
==============
GamerProfile_SetVerticalSensitivity
==============
*/
void GamerProfile_SetVerticalSensitivity(int controllerIndex, int sensitivityIndex)
{
  __int64 v2; 
  __int64 v3; 
  int v5; 

  v2 = controllerIndex;
  v3 = sensitivityIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6144, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.viewVertSensitivity = SENSITIVITY_MAP[v3];
}

/*
==============
GamerProfile_SetVoiceMuteStrategy
==============
*/
void GamerProfile_SetVoiceMuteStrategy(const int controllerIndex, int voiceMuteStrategy)
{
  s_gamerSettings[controllerIndex].config.voiceMuteStrategy = voiceMuteStrategy;
}

/*
==============
GamerProfile_SetWarTrackPassengerEnable
==============
*/
void GamerProfile_SetWarTrackPassengerEnable(const int controllerIndex, bool warTrackPassengerEnable)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8107, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_gamerSettings[v4].config.profileFlags &= ~0x2000u;
  s_gamerSettings[v4].config.profileFlags |= warTrackPassengerEnable << 13;
}

/*
==============
GamerProfile_SetWeaponSwitchCancelDelay
==============
*/
void GamerProfile_SetWeaponSwitchCancelDelay(const int controllerIndex, int delay)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3198, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.weaponSwitchCancelDelay = delay;
}

/*
==============
GamerProfile_SetWeaponSwitchWrapAround
==============
*/
void GamerProfile_SetWeaponSwitchWrapAround(const int controllerIndex, bool weaponSwitchWrapAround)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3264, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.weaponSwitchWrapAround = weaponSwitchWrapAround;
}

/*
==============
GamerProfile_SetYoloMode
==============
*/
void GamerProfile_SetYoloMode(int controllerIndex, bool yoloMode)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2720, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    Com_Printf(14, "Saving yolo mode difficulty level of \"%i\" to profile on controller #%i.\n", yoloMode, (unsigned int)v2);
    s_gamerSettings[v2].config.yoloMode = yoloMode;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420C450, 387i64);
  }
}

/*
==============
GamerProfile_SetYoloState
==============
*/
void GamerProfile_SetYoloState(int controllerIndex, int yoloState)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2743, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    Com_Printf(14, "Saving yolo state of \"%i\" to profile on controller #%i.\n", (unsigned int)yoloState, (unsigned int)v2);
    s_gamerSettings[v2].config.yoloState = yoloState;
  }
  else
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14420C450, 388i64);
  }
}

/*
==============
GamerProfile_SetZoomHybridCmdKBM
==============
*/
void GamerProfile_SetZoomHybridCmdKBM(const int controllerIndex, int zoomHybridCmdType)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3124, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  s_gamerSettings[v2].config.zoomHybridCmdKBM = zoomHybridCmdType;
}

/*
==============
GamerProfile_SprintCancelsReload
==============
*/
_BOOL8 GamerProfile_SprintCancelsReload(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5093, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.sprintCancelsReload;
}

/*
==============
GamerProfile_SubtitlesEnabled
==============
*/
_BOOL8 GamerProfile_SubtitlesEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5004, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.showSubtitles;
}

/*
==============
GamerProfile_TargetAssistToggle
==============
*/
void GamerProfile_TargetAssistToggle(int controllerIndex)
{
  __int64 v1; 
  bool v2; 
  const char *v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6054, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, 8) )
    __debugbreak();
  v2 = !s_gamerSettings[v1].config.targetAssist;
  s_gamerSettings[v1].config.targetAssist = v2;
  v3 = "off";
  if ( v2 )
    v3 = "on";
  Com_Printf(14, "Profile: Target assist toggled %s for controller #%i.\n", v3, (unsigned int)v1);
}

/*
==============
GamerProfile_ToggleHoldBreathEnabled
==============
*/
_BOOL8 GamerProfile_ToggleHoldBreathEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3476, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleHoldBreath;
}

/*
==============
GamerProfile_ToggleQuickInventoryEnabled
==============
*/
bool GamerProfile_ToggleQuickInventoryEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 3026, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleQuickInventory != 0;
}

/*
==============
GamerProfile_ToggleScoreboardEnabled
==============
*/
_BOOL8 GamerProfile_ToggleScoreboardEnabled(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2982, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.toggleScoreboard;
}

/*
==============
GamerProfile_UnregisterCommands
==============
*/
void GamerProfile_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_GAMER_PROFILE_CMD, 0x6Cu);
}

/*
==============
GamerProfile_UpdateCommand
==============
*/
void GamerProfile_UpdateCommand(int controllerIndex, bool force)
{
  bool IsControllerMappedToClient; 
  LocalClientNum_t v4; 
  const char *v5; 
  LocalClientNum_t outLocalClientNum; 

  IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum);
  v4 = outLocalClientNum;
  if ( !IsControllerMappedToClient )
    v4 = LOCAL_CLIENT_0;
  outLocalClientNum = v4;
  v5 = j_va("GamerProfile - Updating and possibly saving for controller #%i.\n", (unsigned int)controllerIndex);
  Com_Printf(16, "%s\n", v5);
  UpdateProfileFromSystem(controllerIndex, PROFILE_WRITE_IF_CHANGED);
}

/*
==============
GamerProfile_UpdateProfileAndSaveIfNeeded
==============
*/
void GamerProfile_UpdateProfileAndSaveIfNeeded(int controllerIndex)
{
  const char *v2; 

  v2 = j_va("GamerProfile - Updating and possibly saving for controller #%i.\n", (unsigned int)controllerIndex);
  Com_Printf(16, "%s\n", v2);
  UpdateProfileFromSystem(controllerIndex, PROFILE_WRITE_IF_CHANGED);
}

/*
==============
GamerProfile_UpdateProfileFromStats
==============
*/
void GamerProfile_UpdateProfileFromStats(const int controllerIndex, StatsSource source)
{
  __int64 v2; 
  int firstTimePlayedSPTime; 
  unsigned int RawHash; 

  if ( source == STATS_ONLINE )
  {
    v2 = controllerIndex;
    if ( LiveStorage_DoWeHaveStatsForSource(controllerIndex, STATS_ONLINE) )
    {
      firstTimePlayedSPTime = s_gamerSettings[v2].config.firstTimePlayedSPTime;
      RawHash = j_SL_GetRawHash(scr_const.firstPlayedSPTime);
      CL_PlayerData_SetIntByName(v2, RawHash, firstTimePlayedSPTime, STATSGROUP_COMMON);
      CL_PlayerData_SanitizeLocalClanName(v2);
      CL_PlayerData_UpdateClanChecksum(v2);
    }
  }
}

/*
==============
GamerProfile_UpdateProfileMenuOptionsHDRLumDvars
==============
*/
void GamerProfile_UpdateProfileMenuOptionsHDRLumDvars(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5706, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v4) = 8;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4356, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v2, v4) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMinLum, s_gamerSettings[v1].config.hdrMinLum);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v4) = 8;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4376, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v2, v4) )
      __debugbreak();
  }
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_hdrMaxLum, s_gamerSettings[v1].config.hdrMaxLum);
}

/*
==============
GamerProfile_UpdateProfilePlayTimes
==============
*/
void GamerProfile_UpdateProfilePlayTimes(void)
{
  int v0; 
  int v1; 
  unsigned int *v2; 
  int *p_playTimeMP; 
  unsigned int v4; 
  char ActiveGameMode; 

  if ( CL_Mgr_GetMode() )
  {
    v0 = Sys_MillisecondsRaw();
    v1 = 0;
    v2 = s_playStartTime;
    p_playTimeMP = &s_gamerSettings[0].config.playTimeMP;
    do
    {
      if ( CL_Mgr_IsControllerActive(v1) )
      {
        v4 = (v0 - *v2) / 0x3E8;
        ActiveGameMode = Com_GameMode_GetActiveGameMode();
        switch ( ActiveGameMode )
        {
          case 1:
            *(p_playTimeMP - 1) += v4;
            break;
          case 2:
            *p_playTimeMP += v4;
            break;
          case 3:
            p_playTimeMP[1] += v4;
            break;
        }
      }
      *v2 = v0;
      ++v1;
      ++v2;
      p_playTimeMP += 2018;
    }
    while ( v1 < 8 );
  }
}

/*
==============
GamerProfile_UpdateProfileWithoutSaving
==============
*/
void GamerProfile_UpdateProfileWithoutSaving(int controllerIndex)
{
  const char *v2; 

  v2 = j_va("GamerProfile - Updating for controller #%i without saving.\n", (unsigned int)controllerIndex);
  Com_Printf(16, "%s\n", v2);
  UpdateProfileFromSystem(controllerIndex, PROFILE_NO_WRITE);
}

/*
==============
GamerProfile_UpdateSafeareaDvars
==============
*/
void GamerProfile_UpdateSafeareaDvars(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5734, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  v2 = v1;
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaHorz, s_gamerSettings[v2].config.safearea_adjusted_horizontal);
  Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_safeAreaVert, s_gamerSettings[v2].config.safearea_adjusted_vertical);
}

/*
==============
GamerProfile_UpdateSystemDvars
==============
*/
void GamerProfile_UpdateSystemDvars(void)
{
  int ControllerFromClient; 
  __int64 v1; 
  int v2; 
  __int64 v3; 
  float blacklevel; 
  float HDRMinLum; 
  double AdjustedHDRMinLum; 
  float HDRMaxLum; 
  float hdrGamma; 
  const dvar_t *v9; 
  float value; 
  float SoundVolume; 
  const dvar_t *v12; 
  float v13; 
  float SoundLicencedContentVolume; 
  const dvar_t *v15; 
  float v16; 
  float SoundEffectsVolume; 
  const dvar_t *v18; 
  float v19; 
  float SoundMusicVolume; 
  const dvar_t *v21; 
  float v22; 
  float SoundVoiceVolume; 
  const dvar_t *v24; 
  bool snd_mpVoiceEnabled; 
  const dvar_t *v26; 
  int integer; 
  int SoundPresetMix; 
  const dvar_t *v29; 
  int v30; 
  int VoiceChatEnabled; 
  const dvar_t *v32; 
  float v33; 
  float OpenMicThreshold; 
  const dvar_t *v35; 
  float v36; 
  float VoiceChatVolume; 
  const dvar_t *v38; 
  float v39; 
  float MicrophoneVolume; 
  const dvar_t *v41; 
  int v42; 
  int VoiceFutz; 
  const dvar_t *v44; 
  int v45; 
  int VoiceChatDeviceType; 
  const dvar_t *v47; 
  float safearea_adjusted_horizontal; 
  const dvar_t *v49; 
  float safearea_adjusted_vertical; 
  bool motionBlurEnabled; 
  bool v52; 
  bool weaponMotionBlurEnabled; 
  bool v54; 
  const dvar_t *v55; 
  int splitscreenSunShadows; 
  __int64 v57; 
  __int64 v58; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v1 = ControllerFromClient;
  v2 = 0;
  if ( (unsigned int)ControllerFromClient > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8467, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", ControllerFromClient, 0i64, 8) )
    __debugbreak();
  v3 = v1;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v58) = 8;
    LODWORD(v57) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4416, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v57, v58) )
      __debugbreak();
  }
  if ( r_blacklevel )
  {
    blacklevel = s_gamerSettings[v3].config.blacklevel;
    if ( blacklevel != r_blacklevel->current.value )
      Dvar_SetFloat_Internal(r_blacklevel, blacklevel);
  }
  if ( !r_displayMappingHdrLuminanceSource->current.integer )
  {
    HDRMinLum = GamerProfile_GetHDRMinLum(v1);
    AdjustedHDRMinLum = R_DisplayMappingGetAdjustedHDRMinLum(HDRMinLum);
    if ( r_displayMappingHdrMinLum && *(float *)&AdjustedHDRMinLum != r_displayMappingHdrMinLum->current.value )
      Dvar_SetFloat_Internal(r_displayMappingHdrMinLum, *(float *)&AdjustedHDRMinLum);
    HDRMaxLum = GamerProfile_GetHDRMaxLum(v1);
    if ( r_displayMappingHdrMaxLum && HDRMaxLum != r_displayMappingHdrMaxLum->current.value )
      Dvar_SetFloat_Internal(r_displayMappingHdrMaxLum, HDRMaxLum);
  }
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v58) = 8;
    LODWORD(v57) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4396, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v57, v58) )
      __debugbreak();
  }
  if ( r_displayMappingHdrGamma )
  {
    hdrGamma = s_gamerSettings[v3].config.hdrGamma;
    if ( hdrGamma != r_displayMappingHdrGamma->current.value )
      Dvar_SetFloat_Internal(r_displayMappingHdrGamma, hdrGamma);
  }
  v9 = DVARFLT_profileMenuOption_volume;
  if ( DVARFLT_profileMenuOption_volume )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_profileMenuOption_volume);
    value = v9->current.value;
    if ( value != GamerProfile_GetSoundVolume(v1) )
    {
      SoundVolume = GamerProfile_GetSoundVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_volume, SoundVolume);
    }
  }
  v12 = DVARFLT_profileMenuOption_licensedMusicVolume;
  if ( DVARFLT_profileMenuOption_licensedMusicVolume )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_profileMenuOption_licensedMusicVolume);
    v13 = v12->current.value;
    if ( v13 != GamerProfile_GetSoundLicencedContentVolume(v1) )
    {
      SoundLicencedContentVolume = GamerProfile_GetSoundLicencedContentVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_licensedMusicVolume, SoundLicencedContentVolume);
    }
  }
  v15 = DVARFLT_profileMenuOption_effectsVolume;
  if ( DVARFLT_profileMenuOption_effectsVolume )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_profileMenuOption_effectsVolume);
    v16 = v15->current.value;
    if ( v16 != GamerProfile_GetSoundEffectsVolume(v1) )
    {
      SoundEffectsVolume = GamerProfile_GetSoundEffectsVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_effectsVolume, SoundEffectsVolume);
    }
  }
  v18 = DVARFLT_profileMenuOption_musicVolume;
  if ( DVARFLT_profileMenuOption_musicVolume )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_profileMenuOption_musicVolume);
    v19 = v18->current.value;
    if ( v19 != GamerProfile_GetSoundMusicVolume(v1) )
    {
      SoundMusicVolume = GamerProfile_GetSoundMusicVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_musicVolume, SoundMusicVolume);
    }
  }
  v21 = DVARFLT_profileMenuOption_voiceVolume;
  if ( DVARFLT_profileMenuOption_voiceVolume )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_profileMenuOption_voiceVolume);
    v22 = v21->current.value;
    if ( v22 != GamerProfile_GetSoundVoiceVolume(v1) )
    {
      SoundVoiceVolume = GamerProfile_GetSoundVoiceVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_profileMenuOption_voiceVolume, SoundVoiceVolume);
    }
  }
  v24 = DVARBOOL_snd_mute_player_dialogue;
  if ( DVARBOOL_snd_mute_player_dialogue )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_snd_mute_player_dialogue);
    snd_mpVoiceEnabled = s_gamerSettings[v3].config.snd_mpVoiceEnabled;
    if ( v24->current.enabled != snd_mpVoiceEnabled )
      Dvar_SetBool_Internal(DVARBOOL_snd_mute_player_dialogue, snd_mpVoiceEnabled);
  }
  v26 = DVARINT_profileMenuOption_presetMix;
  if ( DVARINT_profileMenuOption_presetMix )
  {
    Dvar_CheckFrontendServerThread(DVARINT_profileMenuOption_presetMix);
    integer = v26->current.integer;
    if ( integer != (unsigned int)GamerProfile_GetSoundPresetMix(v1) )
    {
      SoundPresetMix = GamerProfile_GetSoundPresetMix(v1);
      Dvar_SetInt_Internal(DVARINT_profileMenuOption_presetMix, SoundPresetMix);
    }
  }
  v29 = DVARBOOL_cl_voice;
  if ( DVARBOOL_cl_voice )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_cl_voice);
    v30 = v29->current.color[0];
    LOBYTE(v2) = (unsigned int)GamerProfile_GetVoiceChatEnabled(v1) != 0;
    if ( v30 != v2 )
    {
      VoiceChatEnabled = GamerProfile_GetVoiceChatEnabled(v1);
      Dvar_SetBool_Internal(DVARBOOL_cl_voice, VoiceChatEnabled != 0);
    }
  }
  v32 = DVARFLT_voice_mic_threshold;
  if ( DVARFLT_voice_mic_threshold )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_voice_mic_threshold);
    v33 = v32->current.value;
    if ( v33 != GamerProfile_GetOpenMicThreshold(v1) )
    {
      OpenMicThreshold = GamerProfile_GetOpenMicThreshold(v1);
      Dvar_SetFloat_Internal(DVARFLT_voice_mic_threshold, OpenMicThreshold);
    }
  }
  v35 = DVARFLT_voice_output_scaler;
  if ( DVARFLT_voice_output_scaler )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_voice_output_scaler);
    v36 = v35->current.value;
    if ( v36 != GamerProfile_GetVoiceChatVolume(v1) )
    {
      VoiceChatVolume = GamerProfile_GetVoiceChatVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_voice_output_scaler, VoiceChatVolume);
    }
  }
  v38 = DVARFLT_voice_mic_scaler;
  if ( DVARFLT_voice_mic_scaler )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_voice_mic_scaler);
    v39 = v38->current.value;
    if ( v39 != GamerProfile_GetMicrophoneVolume(v1) )
    {
      MicrophoneVolume = GamerProfile_GetMicrophoneVolume(v1);
      Dvar_SetFloat_Internal(DVARFLT_voice_mic_scaler, MicrophoneVolume);
    }
  }
  v41 = DVARINT_snd_voicefutz;
  if ( DVARINT_snd_voicefutz )
  {
    Dvar_CheckFrontendServerThread(DVARINT_snd_voicefutz);
    v42 = v41->current.integer;
    if ( v42 != (unsigned int)GamerProfile_GetVoiceFutz(v1) )
    {
      VoiceFutz = GamerProfile_GetVoiceFutz(v1);
      Dvar_SetInt_Internal(DVARINT_snd_voicefutz, VoiceFutz);
    }
  }
  v44 = DVARINT_snd_voiceChatDeviceType;
  if ( DVARINT_snd_voiceChatDeviceType )
  {
    Dvar_CheckFrontendServerThread(DVARINT_snd_voiceChatDeviceType);
    v45 = v44->current.integer;
    if ( v45 != (unsigned int)GamerProfile_GetVoiceChatDeviceType(v1) )
    {
      VoiceChatDeviceType = GamerProfile_GetVoiceChatDeviceType(v1);
      Dvar_SetInt_Internal(DVARINT_snd_voiceChatDeviceType, VoiceChatDeviceType);
    }
  }
  v47 = DVARFLT_safeArea_adjusted_horizontal;
  if ( DVARFLT_safeArea_adjusted_horizontal )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_safeArea_adjusted_horizontal);
    safearea_adjusted_horizontal = s_gamerSettings[v3].config.safearea_adjusted_horizontal;
    if ( safearea_adjusted_horizontal != v47->current.value )
      Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_horizontal, safearea_adjusted_horizontal);
  }
  v49 = DVARFLT_safeArea_adjusted_vertical;
  if ( DVARFLT_safeArea_adjusted_vertical )
  {
    Dvar_CheckFrontendServerThread(DVARFLT_safeArea_adjusted_vertical);
    safearea_adjusted_vertical = s_gamerSettings[v3].config.safearea_adjusted_vertical;
    if ( safearea_adjusted_vertical != v49->current.value )
      Dvar_SetFloat_Internal(DVARFLT_safeArea_adjusted_vertical, safearea_adjusted_vertical);
  }
  if ( r_mbWorldEnable )
  {
    motionBlurEnabled = s_gamerSettings[v3].config.motionBlurEnabled;
    if ( r_mbWorldEnable->current.enabled != motionBlurEnabled )
    {
      Dvar_SetBool_Internal(r_mbWorldEnable, motionBlurEnabled);
      v52 = r_mbViewModelEnable->current.enabled || r_mbWorldEnable->current.enabled;
      Dvar_SetBool_Internal(r_mbEnableA, v52);
    }
  }
  if ( r_mbViewModelEnable )
  {
    weaponMotionBlurEnabled = s_gamerSettings[v3].config.weaponMotionBlurEnabled;
    if ( r_mbViewModelEnable->current.enabled != weaponMotionBlurEnabled )
    {
      Dvar_SetBool_Internal(r_mbViewModelEnable, weaponMotionBlurEnabled);
      v54 = r_mbViewModelEnable->current.enabled || r_mbWorldEnable->current.enabled;
      Dvar_SetBool_Internal(r_mbEnableA, v54);
    }
  }
  v55 = sm_sunSplitscreen;
  if ( sm_sunSplitscreen )
  {
    Dvar_CheckFrontendServerThread(sm_sunSplitscreen);
    splitscreenSunShadows = s_gamerSettings[v3].config.splitscreenSunShadows;
    if ( v55->current.integer != splitscreenSunShadows )
      Dvar_SetInt_Internal(sm_sunSplitscreen, splitscreenSunShadows);
  }
  GamerProfile_OnSetGore(s_gamerSettings[v3].config.gore != 0);
}

/*
==============
GamerProfile_UpdateSystemVarsFromProfile
==============
*/
void GamerProfile_UpdateSystemVarsFromProfile(int controllerIndex)
{
  __int64 v1; 
  const char *v2; 
  bool IsControllerMappedToClient; 
  LocalClientNum_t v4; 
  int PlaylistCount; 
  __int64 v6; 
  int playlist; 
  LocalClientNum_t outLocalClientNum; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2481, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v2 = j_va("GamerProfile - Updating vars for controller #%i.\n", (unsigned int)v1);
  Com_Printf(16, "%s\n", v2);
  IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum);
  v4 = outLocalClientNum;
  if ( !IsControllerMappedToClient )
    v4 = LOCAL_CLIENT_0;
  outLocalClientNum = v4;
  Cmd_ExecuteSingleCommand_Internal(v4, v1, "resetViewport", 0);
  PlaylistCount = Playlist_GetPlaylistCount();
  v6 = v1;
  playlist = s_gamerSettings[v6].config.playlist;
  if ( playlist >= PlaylistCount || playlist < 0 )
    playlist = 0;
  Dvar_SetInt_Internal(DVARINT_playlist, playlist);
  if ( DVARFLT_r_filmGrainAtten )
    Dvar_SetFloat_Internal(DVARFLT_r_filmGrainAtten, s_gamerSettings[v6].config.filmGrainAttenuation);
}

/*
==============
GamerProfile_UseAnalytics
==============
*/
bool GamerProfile_UseAnalytics()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  _BYTE *integer64; 

  v0 = DVARBOOL_gamerprofile_bb_analytics;
  if ( !DVARBOOL_gamerprofile_bb_analytics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamerprofile_bb_analytics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  v1 = DVARSTR_package_type;
  if ( !DVARSTR_package_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "package_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer64 = (_BYTE *)v1->current.integer64;
  return integer64 && *integer64;
}

/*
==============
GamerProfile_UsesRumble
==============
*/
bool GamerProfile_UsesRumble(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6393, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  return s_gamerSettings[v1].config.gpadRumble && GamerProfile_GetGamepadEnabled(v1);
}

/*
==============
GamerProfile_WasErrorOnRead
==============
*/
_BOOL8 GamerProfile_WasErrorOnRead(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1143, ASSERT_TYPE_ASSERT, "( ( (controllerIndex >= 0) && (controllerIndex < 8) ) )", "( controllerIndex ) = %i", controllerIndex) )
    __debugbreak();
  return s_gamerSettings[v1].errorOnRead;
}

/*
==============
GetConfigFromWhitelist
==============
*/
const char *GetConfigFromWhitelist(const char *requestedConfig, const char **whitelist, const int whitelistCount)
{
  int v3; 
  __int64 v4; 
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  const char *v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 

  v3 = 0;
  v4 = whitelistCount;
  if ( whitelistCount > 0 )
  {
    v7 = 0i64;
    do
    {
      v8 = whitelist[v7];
      v9 = 0x7FFFFFFFi64;
      if ( !requestedConfig && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v10 = (const char *)(requestedConfig - v8);
      while ( 1 )
      {
        v11 = (unsigned __int8)v8[(_QWORD)v10];
        v12 = v9;
        v13 = *(unsigned __int8 *)v8++;
        --v9;
        if ( !v12 )
          return whitelist[v3];
        if ( v11 != v13 )
        {
          v14 = v11 + 32;
          if ( (unsigned int)(v11 - 65) > 0x19 )
            v14 = v11;
          v11 = v14;
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          if ( v11 != v15 )
            break;
        }
        if ( !v11 )
          return whitelist[v3];
      }
      ++v3;
      ++v7;
    }
    while ( v7 < v4 );
  }
  Com_Printf(14, "Requested config \"%s\" is not on the hard-coded whitelist.  Using \"%s\" instead.\n", requestedConfig, *whitelist);
  return *whitelist;
}

/*
==============
GetDataByName
==============
*/
GamerProfileData *GetDataByName(GamerProfileData *result, GamerSettingState *settings, const char *settingName)
{
  int DataIndexByName; 
  __int64 v7; 
  float minVal; 
  GamerProfileDataType type; 
  float maxVal; 
  bool v11; 
  unsigned __int8 v12; 
  GamerProfileData *v13; 
  __int16 v14; 
  int v15; 
  float v16; 
  double v17; 
  __int64 v18; 

  if ( !settingName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8668, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
    __debugbreak();
  result->type = TYPE_INVALID;
  result->u.intVal = 0;
  DataIndexByName = GamerProfile_GetDataIndexByName(settingName);
  v7 = DataIndexByName;
  if ( DataIndexByName < 0 )
    return result;
  if ( (unsigned int)DataIndexByName >= 0x8A )
  {
    LODWORD(v18) = DataIndexByName;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8686, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( PROFILE_DATA_FIELDS ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( PROFILE_DATA_FIELDS )\n\t%i not in [0, %i)", v18, 138) )
      __debugbreak();
  }
  minVal = PROFILE_DATA_FIELDS[v7].minVal;
  type = PROFILE_DATA_FIELDS[v7].type;
  maxVal = PROFILE_DATA_FIELDS[v7].maxVal;
  result->type = type;
  v11 = minVal != 0.0 && maxVal != 0.0;
  switch ( type )
  {
    case TYPE_BYTE:
      v12 = *(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      result->u.byteVal = v12;
      if ( !v11 )
        return result;
      result->u.byteVal = I_tclamp<unsigned char>(v12, (int)minVal, (int)maxVal);
      v13 = result;
      break;
    case TYPE_BOOL:
      v13 = result;
      result->u.byteVal = *(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      break;
    case TYPE_SHORT:
      v14 = *(_WORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      result->u.shortVal = v14;
      if ( !v11 )
        return result;
      result->u.shortVal = I_tclamp<short>(v14, (int)minVal, (int)maxVal);
      v13 = result;
      break;
    case TYPE_INT:
      v15 = *(_DWORD *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      result->u.intVal = v15;
      if ( !v11 )
        return result;
      result->u.intVal = I_clamp(v15, (int)minVal, (int)maxVal);
      v13 = result;
      break;
    case TYPE_FLOAT:
      v16 = *(float *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      result->u.floatVal = v16;
      if ( !v11 )
        return result;
      v17 = I_fclamp(v16, minVal, maxVal);
      result->u.floatVal = *(float *)&v17;
      v13 = result;
      break;
    case TYPE_STRING:
    case TYPE_BUFFER:
      v13 = result;
      result->u.stringVal = (const char *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset);
      break;
    case TYPE_FLAG:
      result->u.intVal = (*(int *)(&settings->isProfileLoggedIn + PROFILE_DATA_FIELDS[v7].offset) & (unsigned __int64)(((1i64 << PROFILE_DATA_FIELDS[v7].size) - 1) << PROFILE_DATA_FIELDS[v7].bitShift)) >> PROFILE_DATA_FIELDS[v7].bitShift;
      return result;
    default:
      return result;
  }
  return v13;
}

/*
==============
GetKeyPairString
==============
*/
const char *GetKeyPairString(const GamerSettingKeyPair *kp, const char *keyPairsStringBuf)
{
  int shortVal; 
  int maxSize; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v12; 
  __int64 v13; 

  if ( !kp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1615, ASSERT_TYPE_ASSERT, "(kp)", (const char *)&queryFormat, "kp") )
    __debugbreak();
  if ( !keyPairsStringBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1616, ASSERT_TYPE_ASSERT, "(keyPairsStringBuf)", (const char *)&queryFormat, "keyPairsStringBuf") )
    __debugbreak();
  if ( kp->type != 6 )
    return (char *)&queryFormat.fmt + 3;
  shortVal = kp->u.shortVal;
  if ( shortVal < 0 )
    return (char *)&queryFormat.fmt + 3;
  maxSize = kp->u.stringData.maxSize;
  if ( maxSize <= 0 || maxSize + shortVal >= 3048 )
    return (char *)&queryFormat.fmt + 3;
  v6 = -1i64;
  v7 = &keyPairsStringBuf[(__int16)shortVal];
  v8 = -1i64;
  do
    ++v8;
  while ( v7[v8] );
  v9 = v8 + 1;
  if ( v9 > 0xFFFFFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", v9) )
      __debugbreak();
    LOWORD(maxSize) = kp->u.stringData.maxSize;
  }
  if ( (__int16)maxSize < (unsigned int)v9 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v10 = v6 + 1;
    if ( v10 > 0xFFFFFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
        __debugbreak();
      LOWORD(maxSize) = kp->u.stringData.maxSize;
    }
    LODWORD(v13) = v10;
    LODWORD(v12) = (__int16)maxSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1624, ASSERT_TYPE_ASSERT, "( (uint)kp->u.stringData.maxSize ) >= ( truncate_cast<uint>( strlen( result ) + 1 ) )", "%s >= %s\n\t%i, %i", "(uint)kp->u.stringData.maxSize", "truncate_cast<uint>( strlen( result ) + 1 )", v12, v13) )
      __debugbreak();
  }
  return v7;
}

/*
==============
KeyPairsResetAll
==============
*/
void KeyPairsResetAll(int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1790, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", controllerIndex, 0i64, v4) )
      __debugbreak();
  }
  v2 = v1;
  memset_0(s_gamerSettings[v2].keyPairs, 0, sizeof(s_gamerSettings[v2].keyPairs));
  memset_0(s_gamerSettings[v2].keyPairsStringPool, 0, sizeof(s_gamerSettings[v2].keyPairsStringPool));
}

/*
==============
Load_KeyPairsFromBinary
==============
*/
char Load_KeyPairsFromBinary(const char *sourceBuf, int sourceBufSize, GamerSettingKeyPair *keyPairs, char *keyPairsStringBuf, int *versionMajor, int *versionMinor)
{
  int *v6; 
  __int64 v10; 
  int *v11; 
  __int64 v12; 
  int v13; 
  char v14; 
  __int64 v15; 
  const char *v16; 
  int v17; 
  int v19; 
  int v20; 
  char *v21; 
  int v22; 
  unsigned __int8 v23; 
  int v24; 
  char *v25; 
  char *buf; 
  int size; 

  v6 = versionMajor;
  LODWORD(v10) = sourceBufSize;
  if ( !versionMajor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1725, ASSERT_TYPE_ASSERT, "(versionMajor)", (const char *)&queryFormat, "versionMajor") )
    __debugbreak();
  v11 = versionMinor;
  if ( !versionMinor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1726, ASSERT_TYPE_ASSERT, "(versionMinor)", (const char *)&queryFormat, "versionMinor") )
    __debugbreak();
  v12 = 0i64;
  v13 = v10;
  do
  {
    if ( v13 >= 1 )
      goto LABEL_13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
      __debugbreak();
    if ( (int)v10 >= 1 )
    {
LABEL_13:
      v14 = *sourceBuf;
      v13 = v10 - 1;
      ++sourceBuf;
    }
    else
    {
      v14 = 0;
      v13 = 0;
      sourceBuf += (int)v10;
    }
    v10 = v13;
    if ( v14 != PROFILE_SANITY_CHECK[v12] )
      return 0;
    ++v12;
  }
  while ( v12 < 4 );
  if ( v13 >= 4 )
    goto LABEL_21;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
    __debugbreak();
  if ( (int)v10 >= 4 )
  {
LABEL_21:
    v15 = *(unsigned int *)sourceBuf;
    v17 = v10 - 4;
    v16 = sourceBuf + 4;
  }
  else
  {
    v15 = 0i64;
    v16 = &sourceBuf[v10];
    v17 = 0;
  }
  *v6 = v15;
  if ( (_DWORD)v15 != 40 )
  {
    Com_PrintWarning(14, "GamerProfile - Attempting to load a profile of version %i, but version %i is required.  Canceling load.\n", v15, 40i64);
    return 0;
  }
  if ( v17 >= 4 )
  {
    v19 = *(_DWORD *)v16;
    v20 = v17 - 4;
    v21 = (char *)(v16 + 4);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
      __debugbreak();
    v19 = 0;
    v20 = 0;
    v21 = (char *)&v16[v17];
  }
  *v11 = v19;
  v22 = -1;
  if ( v20 > 0 )
  {
    while ( v22 != v20 )
    {
      v22 = v20;
      if ( v20 >= 1 )
      {
        v23 = *v21;
        v24 = v20 - 1;
        v25 = v21 + 1;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
          __debugbreak();
        v23 = 0;
        v24 = 0;
        v25 = &v21[v20];
      }
      buf = v25;
      size = v24;
      if ( !v24 )
        return 1;
      if ( v23 >= 0xC3u || !ReadKeyPairValueAfterIndex((const char **const)&buf, &size, &keyPairs[v23], keyPairsStringBuf) )
        return 0;
      v20 = size;
      if ( size <= 0 )
        return 1;
      v21 = buf;
    }
    Com_PrintError(14, "GamerProfile - Loop inside of Load_KeyPairsFromBinary() seems to be frozen.  %i bytes remain, but the loop isn't making progress.\n", (unsigned int)v20);
    return 0;
  }
  return 1;
}

/*
==============
Load_ProfileFromKeyPairs
==============
*/
void Load_ProfileFromKeyPairs(int controllerIndex, const ProfileKeyPairMapping *keyMap, const int keyMapCount, const GamerSettingKeyPair *keyPairs, const char *keyPairsStringBuf)
{
  __int64 v5; 
  unsigned int v9; 
  GamerSettingState *v10; 
  __int64 *p_offset; 
  KeyPairDataUnion *p_u; 
  __int64 byteVal; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 

  v5 = controllerIndex;
  if ( !keyMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1894, ASSERT_TYPE_ASSERT, "(keyMap)", (const char *)&queryFormat, "keyMap") )
    __debugbreak();
  if ( !keyPairs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1895, ASSERT_TYPE_ASSERT, "(keyPairs)", (const char *)&queryFormat, "keyPairs") )
    __debugbreak();
  if ( !keyPairsStringBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1896, ASSERT_TYPE_ASSERT, "(keyPairsStringBuf)", (const char *)&queryFormat, "keyPairsStringBuf") )
    __debugbreak();
  if ( keyMapCount > 195 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1897, ASSERT_TYPE_ASSERT, "(keyMapCount <= 195)", (const char *)&queryFormat, "keyMapCount <= KEYPAIRS_PER_BANK") )
    __debugbreak();
  v9 = 0;
  if ( (unsigned int)v5 > 8 )
  {
    LODWORD(v19) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1899, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v19, 0i64, 8) )
      __debugbreak();
  }
  v10 = &s_gamerSettings[v5];
  if ( keyMapCount > 0 )
  {
    p_offset = &keyMap->offset;
    p_u = &keyPairs->u;
    do
    {
      if ( v9 != *((_DWORD *)p_offset - 2) )
      {
        LODWORD(v21) = *((_DWORD *)p_offset - 2);
        LODWORD(v20) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1911, ASSERT_TYPE_ASSERT, "(keyIdx == mapEntry->keyID_sanityCheck)", "%s\n\tKeymap Entry %i has a sanity-check index of %i.", "keyIdx == mapEntry->keyID_sanityCheck", v20, v21) )
          __debugbreak();
      }
      byteVal = p_u[-1].byteVal;
      if ( (_DWORD)byteVal == *((_DWORD *)p_offset + 2) )
      {
        switch ( p_u[-1].byteVal )
        {
          case 0u:
            break;
          case 1u:
          case 2u:
            *(&v10->isProfileLoggedIn + *p_offset) = p_u->byteVal;
            break;
          case 3u:
            *(_WORD *)(&v10->isProfileLoggedIn + *p_offset) = p_u->shortVal;
            break;
          case 4u:
          case 5u:
            *(KeyPairDataUnion *)(&v10->isProfileLoggedIn + *p_offset) = *p_u;
            break;
          case 6u:
            v14 = *((__int16 *)p_offset + 6);
            v15 = *((__int16 *)p_offset + 7);
            if ( v14 < 0 || v15 <= 0 || v14 + v15 >= 3048 )
            {
              LODWORD(v22) = *((__int16 *)p_offset + 7);
              LODWORD(v21) = *((__int16 *)p_offset + 6);
              LODWORD(v20) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1941, ASSERT_TYPE_ASSERT, "(KeyPairStringValuesAreValid( mapEntry->stringIndex, mapEntry->stringMaxSize ))", "%s\n\tKeymap #%i has invalid string values %i & %i.\n", "KeyPairStringValuesAreValid( mapEntry->stringIndex, mapEntry->stringMaxSize )", v20, v21, v22) )
                __debugbreak();
            }
            Core_strcpy((char *)&v10->isProfileLoggedIn + *p_offset, *((__int16 *)p_offset + 7), &keyPairsStringBuf[p_u->shortVal]);
            break;
          case 7u:
            v16 = *((__int16 *)p_offset + 6);
            v17 = *((__int16 *)p_offset + 7);
            if ( v16 < 0 || v17 <= 0 || v16 + v17 >= 3048 )
            {
              LODWORD(v22) = *((__int16 *)p_offset + 7);
              LODWORD(v21) = *((__int16 *)p_offset + 6);
              LODWORD(v20) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1953, ASSERT_TYPE_ASSERT, "(KeyPairStringValuesAreValid( mapEntry->stringIndex, mapEntry->stringMaxSize ))", "%s\n\tKeymap #%i has invalid string values %i & %i.\n", "KeyPairStringValuesAreValid( mapEntry->stringIndex, mapEntry->stringMaxSize )", v20, v21, v22) )
                __debugbreak();
            }
            memcpy_0(&v10->isProfileLoggedIn + *p_offset, &keyPairsStringBuf[p_u->shortVal], *((__int16 *)p_offset + 7));
            break;
          case 8u:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1961, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TYPE_FLAG is only meant to be used in PROFILE_DATA_FIELDS to register flag bit, use TYPE_INT instead when registering the flag field in PROFILE_KEY_MAP") )
              __debugbreak();
            break;
          default:
            Com_PrintError(14, "Keymap Entry %i has an invalid type of '%i'.", v9, byteVal);
            break;
        }
      }
      else
      {
        LODWORD(v19) = *((_DWORD *)p_offset + 2);
        LODWORD(fmt) = p_u[-1].byteVal;
        Com_PrintError(14, "Error reading controller #%i's profile.  Keypair #%i has type %i different from the keymap entry's type %i.\n", (unsigned int)v5, v9, fmt, v19);
      }
      ++v9;
      p_offset += 3;
      p_u += 2;
    }
    while ( (int)v9 < keyMapCount );
  }
}

/*
==============
ReadKeyPairValueAfterIndex
==============
*/
bool ReadKeyPairValueAfterIndex(const char **const buf, int *const size, GamerSettingKeyPair *kp, char *keyPairsStringBuf)
{
  unsigned __int8 Type_unsigned_char; 
  int v9; 
  bool result; 
  __int64 v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  __int16 Type_short; 
  int shortVal; 
  char *v16; 
  __int64 maxSize; 
  int v18; 
  __int64 i; 
  __int64 v20; 
  __int64 v21; 
  bool v23; 
  __int16 v24; 
  int v25; 
  char *v26; 
  __int64 v27; 
  __int64 v28; 
  unsigned int v29; 
  float v30; 

  if ( !kp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1538, ASSERT_TYPE_ASSERT, "(kp)", (const char *)&queryFormat, "kp") )
    __debugbreak();
  Type_unsigned_char = ReadType_unsigned_char_(buf, size);
  kp->type = Type_unsigned_char;
  v9 = *size;
  if ( !*size || !Type_unsigned_char )
    return 0;
  if ( Type_unsigned_char > 7u )
  {
    if ( Type_unsigned_char == 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1512, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TYPE_FLAG is only meant to be used in PROFILE_DATA_FIELDS to register flag bit, use TYPE_INT instead when registering the flag field in PROFILE_KEY_MAP") )
      __debugbreak();
    return 0;
  }
  switch ( Type_unsigned_char )
  {
    case 1u:
      kp->u.byteVal = ReadType_unsigned_char_(buf, size);
      return 1;
    case 2u:
      if ( v9 >= 1 )
        goto LABEL_18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
        __debugbreak();
      v11 = *size;
      if ( (int)v11 >= 1 )
      {
LABEL_18:
        v12 = *(*buf)++;
        result = 1;
        --*size;
        kp->u.byteVal = v12;
      }
      else
      {
        *buf += v11;
        *size = 0;
        kp->u.byteVal = 0;
        return 1;
      }
      return result;
    case 3u:
      kp->u.shortVal = ReadType_short_(buf, size);
      return 1;
    case 4u:
      kp->u.intVal = ReadType_int_(buf, size);
      return 1;
    case 5u:
      if ( v9 >= 4 )
        goto LABEL_26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1459, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( ReadT ))", (const char *)&queryFormat, "*size >= (int)sizeof( ReadT )") )
        __debugbreak();
      v13 = *size;
      if ( (int)v13 >= 4 )
      {
LABEL_26:
        v30 = *(float *)*buf;
        *buf += 4;
        result = 1;
        *size -= 4;
        kp->u.floatVal = v30;
      }
      else
      {
        *buf += v13;
        result = 1;
        *size = 0;
        kp->u.floatVal = 0;
      }
      return result;
    case 6u:
      kp->u.shortVal = ReadType_short_(buf, size);
      Type_short = ReadType_short_(buf, size);
      shortVal = kp->u.shortVal;
      kp->u.stringData.maxSize = Type_short;
      if ( shortVal < 0 )
        return 0;
      if ( Type_short <= 0 )
        return 0;
      if ( Type_short + shortVal >= 3048 )
        return 0;
      v16 = &keyPairsStringBuf[(__int16)shortVal];
      *v16 = 0;
      if ( !*size )
        return 0;
      maxSize = kp->u.stringData.maxSize;
      v18 = 0;
      if ( (int)maxSize > 0 )
      {
        for ( i = 0i64; i < maxSize; ++i )
        {
          if ( v18 >= *size )
            return 0;
          v16[i] = (*buf)[i];
          if ( !(*buf)[i] )
            break;
          ++v18;
        }
      }
      if ( v18 >= (int)maxSize )
        return 0;
      if ( v18 >= *size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1405, ASSERT_TYPE_SANITY, "( index < *srcSize )", (const char *)&queryFormat, "index < *srcSize") )
        __debugbreak();
      if ( v16[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1406, ASSERT_TYPE_SANITY, "( dest[index] == '\\0' )", (const char *)&queryFormat, "dest[index] == '\\0'") )
        __debugbreak();
      v16[v18] = 0;
      *buf += v18 + 1;
      v20 = -1i64;
      v21 = -1i64;
      *size += -1 - v18;
      do
        ++v21;
      while ( v16[v21] );
      if ( kp->u.stringData.maxSize >= truncate_cast<unsigned int,unsigned __int64>(v21 + 1) )
        goto LABEL_57;
      while ( v16[++v20] != 0 )
        ;
      v29 = truncate_cast<unsigned int,unsigned __int64>(v20 + 1);
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1580, ASSERT_TYPE_ASSERT, "( (uint)kp->u.stringData.maxSize ) >= ( truncate_cast<uint>( strlen( destPos ) + 1 ) )", "%s >= %s\n\t%i, %i", "(uint)kp->u.stringData.maxSize", "truncate_cast<uint>( strlen( destPos ) + 1 )", kp->u.stringData.maxSize, v29);
      goto LABEL_55;
    case 7u:
      kp->u.shortVal = ReadType_short_(buf, size);
      v24 = ReadType_short_(buf, size);
      v25 = kp->u.shortVal;
      kp->u.stringData.maxSize = v24;
      if ( v25 < 0 )
        return 0;
      if ( v24 <= 0 )
        return 0;
      if ( v25 + v24 >= 3048 )
        return 0;
      v26 = &keyPairsStringBuf[(__int16)v25];
      memset_0(v26, 0, v24);
      v27 = kp->u.stringData.maxSize;
      if ( (int)v27 > *size )
        return 0;
      memcpy_0(v26, *buf, kp->u.stringData.maxSize);
      *buf += v27;
      result = 1;
      *size -= v27;
      return result;
    case 8u:
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1600, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TYPE_FLAG is only meant to be used in PROFILE_DATA_FIELDS to register flag bit, use TYPE_INT instead when registering the flag field in PROFILE_KEY_MAP");
      goto LABEL_55;
    default:
      LODWORD(v28) = Type_unsigned_char;
      v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1603, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled type '%i'.", v28);
LABEL_55:
      if ( v23 )
        __debugbreak();
LABEL_57:
      result = 1;
      break;
  }
  return result;
}

/*
==============
Save_BinaryFromKeyPairs
==============
*/
__int64 Save_BinaryFromKeyPairs(const GamerSettingKeyPair *keyPairs, const char *keyPairsStringBuf, char *destBuf, const int destSize)
{
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int i; 
  char *buf; 
  int size; 

  if ( destSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1702, ASSERT_TYPE_ASSERT, "(destSizeRemaining > 0)", (const char *)&queryFormat, "destSizeRemaining > 0") )
    __debugbreak();
  if ( destSize < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  v9 = destSize - 1;
  *destBuf = 83;
  if ( v9 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  v10 = v9 - 1;
  destBuf[1] = 69;
  if ( v10 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  v11 = v10 - 1;
  destBuf[2] = 77;
  if ( v11 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  v12 = v11 - 1;
  destBuf[3] = 86;
  if ( v12 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  v13 = v12 - 4;
  *((_DWORD *)destBuf + 1) = 40;
  if ( v13 < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
    __debugbreak();
  *((_DWORD *)destBuf + 2) = 2;
  size = v13 - 4;
  buf = destBuf + 12;
  for ( i = 0; i < 195; ++i )
    WriteKeyPair(&buf, &size, keyPairs++, i, keyPairsStringBuf);
  return (unsigned int)(destSize - size);
}

/*
==============
Save_KeyPairsFromProfile
==============
*/
void Save_KeyPairsFromProfile(int controllerIndex, const ProfileKeyPairMapping *keyMap, const int keyMapCount, GamerSettingKeyPair *keyPairs, char *keyPairsStringBuf)
{
  __int64 v5; 
  int v9; 
  GamerSettingState *v10; 
  __int64 *p_offset; 
  KeyPairDataUnion *p_u; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v5 = controllerIndex;
  if ( !keyMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1804, ASSERT_TYPE_ASSERT, "(keyMap)", (const char *)&queryFormat, "keyMap") )
    __debugbreak();
  if ( !keyPairs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1805, ASSERT_TYPE_ASSERT, "(keyPairs)", (const char *)&queryFormat, "keyPairs") )
    __debugbreak();
  if ( !keyPairsStringBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1806, ASSERT_TYPE_ASSERT, "(keyPairsStringBuf)", (const char *)&queryFormat, "keyPairsStringBuf") )
    __debugbreak();
  if ( keyMapCount > 195 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1807, ASSERT_TYPE_ASSERT, "(keyMapCount <= 195)", (const char *)&queryFormat, "keyMapCount <= KEYPAIRS_PER_BANK") )
    __debugbreak();
  v9 = 0;
  if ( (unsigned int)v5 > 8 )
  {
    LODWORD(v18) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1809, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v18, 0i64, 8) )
      __debugbreak();
  }
  v10 = &s_gamerSettings[v5];
  if ( keyMapCount > 0 )
  {
    p_offset = &keyMap->offset;
    p_u = &keyPairs->u;
    do
    {
      if ( v9 != *((_DWORD *)p_offset - 2) )
      {
        LODWORD(v20) = *((_DWORD *)p_offset - 2);
        LODWORD(v19) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1821, ASSERT_TYPE_ASSERT, "(keyIdx == mapEntry->keyID_sanityCheck)", "%s\n\tKeymap Entry %i has a sanity-check index of %i.", "keyIdx == mapEntry->keyID_sanityCheck", v19, v20) )
          __debugbreak();
      }
      v13 = *((_DWORD *)p_offset + 2);
      if ( v13 )
      {
        p_u[-1].byteVal = v13;
        switch ( (char)v13 )
        {
          case 1:
          case 2:
            p_u->byteVal = *(&v10->isProfileLoggedIn + *p_offset);
            break;
          case 3:
            p_u->shortVal = *(_WORD *)(&v10->isProfileLoggedIn + *p_offset);
            break;
          case 4:
          case 5:
            *p_u = *(KeyPairDataUnion *)(&v10->isProfileLoggedIn + *p_offset);
            break;
          case 6:
            v14 = *((__int16 *)p_offset + 6);
            p_u->shortVal = *((_WORD *)p_offset + 6);
            v15 = *((__int16 *)p_offset + 7);
            p_u->stringData.maxSize = *((_WORD *)p_offset + 7);
            if ( v14 < 0 || v15 <= 0 || v14 + v15 >= 3048 )
            {
              LODWORD(v21) = v15;
              LODWORD(v20) = v14;
              LODWORD(v19) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1855, ASSERT_TYPE_ASSERT, "(KeyPairStringValuesAreValid( keyPair->u.stringData.index, keyPair->u.stringData.maxSize ))", "%s\n\tKeymap #%i has invalid string values %i & %i.\n", "KeyPairStringValuesAreValid( keyPair->u.stringData.index, keyPair->u.stringData.maxSize )", v19, v20, v21) )
                __debugbreak();
            }
            Core_strcpy_truncate_or_fill_zero(&keyPairsStringBuf[p_u->shortVal], p_u->stringData.maxSize, (const char *)&v10->isProfileLoggedIn + *p_offset);
            break;
          case 7:
            v16 = *((__int16 *)p_offset + 6);
            p_u->shortVal = *((_WORD *)p_offset + 6);
            v17 = *((__int16 *)p_offset + 7);
            p_u->stringData.maxSize = *((_WORD *)p_offset + 7);
            if ( v16 < 0 || v17 <= 0 || v16 + v17 >= 3048 )
            {
              LODWORD(v21) = v17;
              LODWORD(v20) = v16;
              LODWORD(v19) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1869, ASSERT_TYPE_ASSERT, "(KeyPairStringValuesAreValid( keyPair->u.stringData.index, keyPair->u.stringData.maxSize ))", "%s\n\tKeymap #%i has invalid buffer values %i & %i.\n", "KeyPairStringValuesAreValid( keyPair->u.stringData.index, keyPair->u.stringData.maxSize )", v19, v20, v21) )
                __debugbreak();
            }
            memcpy_0(&keyPairsStringBuf[p_u->shortVal], &v10->isProfileLoggedIn + *p_offset, p_u->stringData.maxSize);
            break;
          case 8:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TYPE_FLAG is only meant to be used in PROFILE_DATA_FIELDS to register flag bit, use TYPE_INT instead when registering the flag field in PROFILE_KEY_MAP") )
              __debugbreak();
            break;
          default:
            p_u[-1].byteVal = 0;
            Com_PrintError(14, "Keymap entry #%i has unhandled type '%i'.\n", (unsigned int)v9, *((unsigned int *)p_offset + 2));
            break;
        }
      }
      ++v9;
      p_offset += 3;
      p_u += 2;
    }
    while ( v9 < keyMapCount );
  }
}

/*
==============
SetDataByNameFromCommand
==============
*/
void SetDataByNameFromCommand(const char *optionName)
{
  unsigned int v2; 
  int v3; 
  const char *v4; 
  double v5; 
  int DataIndexByName; 

  v2 = Cmd_LocalControllerIndex();
  v3 = v2;
  if ( v2 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 5252, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, 8) )
    __debugbreak();
  if ( Cmd_Argc() >= 2 )
  {
    v5 = Cmd_ArgFloat(1);
    if ( !optionName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8915, ASSERT_TYPE_ASSERT, "(settingName)", (const char *)&queryFormat, "settingName") )
      __debugbreak();
    DataIndexByName = GamerProfile_GetDataIndexByName(optionName);
    GamerProfile_SetDataByIndex(v3, DataIndexByName, *(const float *)&v5);
  }
  else
  {
    v4 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v4);
  }
}

/*
==============
SetProfileDDLTypeDefaults
==============
*/
void SetProfileDDLTypeDefaults(const int controllerIndex, ProfileDDLTypes ddlType, const bool forceReset)
{
  __int64 v4; 
  __int64 v7; 
  DDLContext *v8; 
  bool v9; 
  DDLState fromState; 
  DDLState result; 

  if ( ddlType == MLG_SETTINGS )
  {
    v4 = controllerIndex;
    fromState.isValid = 0;
    fromState.offset = 0;
    fromState.arrayIndex = -1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&fromState.member = _XMM0;
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1160, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    v7 = v4;
    v8 = &s_gamerSettings[v4].ddlContexts[1];
    fromState = *DDL_GetRootState(&result, v8->def);
    if ( DDL_MoveToName(&fromState, &fromState, "shoutcaster_hasbeenread") )
    {
      v9 = DDL_GetInt(&fromState, v8) != 0;
      if ( (forceReset || !v9) && DDL_ResetContext(s_gamerSettings[v7].config.mlgSettings, 1024, v8->def, v8, v8->accessCB, v8->userData) )
      {
        if ( Com_DDL_ReadFromDBText(v8, "mp/mlgsettings.txt") )
          DDL_SetInt(&fromState, v8, 1);
        else
          Com_PrintError(16, "Failed to set defaults for gamer profile DDL type %i.\n", 1i64);
      }
    }
  }
}

/*
==============
SetProfileDefaults
==============
*/
void SetProfileDefaults(GamerSettingState *state, const int controllerIndex)
{
  __int64 v2; 
  unsigned int v3; 
  float *p_defaultVal; 
  GfxDisplayMappingParams *DefaultHDRMappingParams; 
  const char *v7; 
  __m128 v8; 
  bool CurrentLanguageDefaultShowSubtitles; 
  const char *v10; 
  const char *v11; 
  GfxDisplayMappingParams result; 

  v2 = controllerIndex;
  v3 = 0;
  p_defaultVal = &PROFILE_DATA_FIELDS[0].defaultVal;
  do
  {
    if ( *((_BYTE *)p_defaultVal + 12) )
      GamerProfile_SetDataByIndex(v2, v3, *p_defaultVal);
    ++v3;
    p_defaultVal += 12;
  }
  while ( v3 < 0x8A );
  state->config.gpadButtonLStickDeflect = 1.0;
  state->config.gpadButtonRStickDeflect = 1.0;
  state->config.safearea_adjusted_horizontal = 0.89999998;
  state->config.safearea_adjusted_vertical = 0.89999998;
  state->config.hudBoundsHorizontal = 1.0;
  state->config.hudBoundsVertical = 1.0;
  state->config.lootCardDetail = 1;
  state->config.blacklevel = 0.0;
  DefaultHDRMappingParams = R_GetDefaultHDRMappingParams(&result);
  v7 = MY_DEF_BUTTONS;
  v8 = (__m128)*(unsigned __int64 *)&DefaultHDRMappingParams->gamma;
  *(float *)&DefaultHDRMappingParams = DefaultHDRMappingParams->maxLuminance;
  state->config.profileFlags &= ~1u;
  state->config.hdrMaxLum = *(float *)&DefaultHDRMappingParams;
  state->config.hdrMinLum = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  state->config.hdrGamma = v8.m128_f32[0];
  state->config.language = 21;
  state->config.snd_volume = 1.0;
  state->config.snd_voiceVolume = 1.0;
  state->config.snd_musicVolume = 1.0;
  *(_QWORD *)&state->config.snd_effectsVolume = 1065353216i64;
  *(_WORD *)&state->config.snd_mpVoiceEnabled = 257;
  state->config.openMicThreshold = 2072.4302;
  state->config.voiceChatVolume = 1.0;
  *(_QWORD *)&state->config.microphoneVolume = 1065353216i64;
  state->config.voiceChatEnabled = 1;
  state->config.gpadMinDeadzone = 0.07;
  state->config.snd_licensed_content_volume = 1.0;
  state->config.viewVertSensitivity = 1.2;
  state->config.viewHorzSensitivity = 1.2;
  state->config.viewMouseHorzSensitivity = 12.0;
  state->config.viewMouseVertSensitivity = 1.0;
  state->config.viewMouseFlightHorzSensitivity = 40.0;
  state->config.viewMouseFlightVertSensitivity = 1.0;
  state->config.filmGrainAttenuation = 0.25;
  Core_strcpy(state->config.gpadButtonsConfig, 0x20ui64, v7);
  Core_strcpy(state->config.gpadBRButtonsConfig, 0x20ui64, MY_DEF_BR_BUTTONS);
  Core_strcpy(state->config.gpadSticksConfig, 0x20ui64, MY_DEF_STICKS);
  state->config.takeCoverWarnings = -1;
  CurrentLanguageDefaultShowSubtitles = SEH_GetCurrentLanguageDefaultShowSubtitles();
  v10 = MY_DEF_HIGHESTDIFFS;
  state->config.showSubtitles = CurrentLanguageDefaultShowSubtitles;
  Core_strcpy(state->config.missionHighestDifficulty, 0x40ui64, v10);
  v11 = MY_DEF_HITMARKER_ALIAS;
  state->config.splitscreenSunShadows = 0;
  state->config.initialGameMode = INITIAL_GAME_MODE_NONE;
  state->config.firstTimePlayedSPTime = 0;
  state->config.speechReduced = 0;
  *(_DWORD *)&state->config.mp_weapon1 = 0;
  state->config.mp_weapon5 = 0;
  state->config.yoloState = 0;
  state->config.durangoKeyboardController = 0;
  state->config.matchEndShouldRecordDLog = 1;
  state->config.matchEndShouldRecordDLogInt = 63;
  Core_strcpy(state->config.sndHitMarkerAlias, 0x20ui64, v11);
  state->config.gore = 1;
  state->config.chatProfanityFilterEnabled = 1;
  state->config.minimapStyle = 0;
  if ( (unsigned int)v2 > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 8140, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v2, 0i64, 8) )
    __debugbreak();
  s_gamerSettings[v2].config.profileFlags &= ~0x4000u;
  CG_GameInterface_SetGamerProfileDefaults(state);
}

/*
==============
SetProfileDefaults_Deadzone
==============
*/
void SetProfileDefaults_Deadzone(GamerSettingState *state, const int controllerIndex)
{
  if ( state )
  {
    state->config.gpadMinDeadzone = 0.07;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4655, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    MEMORY[0xC94] = 1032805417;
  }
}

/*
==============
SetProfileDefaults_VoiceChat
==============
*/
void SetProfileDefaults_VoiceChat(GamerSettingState *state, const int controllerIndex)
{
  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 4642, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  state->config.profileFlags &= ~1u;
  state->config.openMicThreshold = 2072.4302;
  state->config.voiceChatVolume = 1.0;
  *(_QWORD *)&state->config.microphoneVolume = 1065353216i64;
  state->config.voiceChatEnabled = 1;
}

/*
==============
StoreSettingsToLastSaved
==============
*/
void StoreSettingsToLastSaved(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1325, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  memcpy_0(&s_gamerSettingsLastSaved[v1], &s_gamerSettings[v1], sizeof(GamerSettingState));
}

/*
==============
UpdateProfileFromSystem
==============
*/
void UpdateProfileFromSystem(int controllerIndex, profileWriteState_t profileWriteState)
{
  __int64 v2; 
  profileWriteState_t v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  unsigned int *v8; 
  int v9; 
  int *p_playTimeMP; 
  unsigned int v11; 
  char ActiveGameMode; 
  lua_State *v13; 
  LocalClientNum_t ClientFromController; 
  const dvar_t *v15; 
  GamerSettingState *v16; 
  GamerSettingState *v17; 
  int playTimeSP; 
  int v19; 
  int playTimeCP; 
  int playTimeMP; 
  int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 

  v2 = controllerIndex;
  v3 = profileWriteState;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 2614, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v4 = v2;
  v5 = v2;
  GamerProfile_ExecControllerBindings(v2);
  v6 = 0i64;
  if ( CL_Mgr_GetMode() )
  {
    v7 = Sys_MillisecondsRaw();
    v8 = s_playStartTime;
    v9 = 0;
    p_playTimeMP = &s_gamerSettings[0].config.playTimeMP;
    do
    {
      if ( CL_Mgr_IsControllerActive(v9) )
      {
        v11 = (v7 - *v8) / 0x3E8;
        ActiveGameMode = Com_GameMode_GetActiveGameMode();
        switch ( ActiveGameMode )
        {
          case 1:
            *(p_playTimeMP - 1) += v11;
            break;
          case 2:
            *p_playTimeMP += v11;
            break;
          case 3:
            p_playTimeMP[1] += v11;
            break;
        }
      }
      *v8 = v7;
      ++v9;
      ++v8;
      p_playTimeMP += 2018;
    }
    while ( v9 < 8 );
    v3 = profileWriteState;
    v4 = v2;
  }
  if ( SEH_GetCurrentLanguage() == 17 )
  {
    if ( (unsigned int)v2 > 8 )
    {
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 6234, ASSERT_TYPE_ASSERT, "( 0 ) <= ( controllerIndex ) && ( controllerIndex ) <= ( 8 )", "controllerIndex not in [0, MAX_GPAD_COUNT]\n\t%i not in [%i, %i]", v24, 0i64, 8) )
        __debugbreak();
    }
    s_gamerSettings[v2].config.textChatEnabled = 0;
    Com_Printf(14, "Profile: Text Chat toggled %s for controller #%i.\n", "off", (unsigned int)v2);
    v13 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    if ( LUI_BeginEvent(ClientFromController, "text_chat_updated", v13) )
    {
      LUI_SetTableBool("active", 0, LUI_luaVM);
      LUI_SetTableInt("controller", v4, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  v15 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  s_gamerSettings[v2].config.playlist = v15->current.integer;
  if ( v3 == PROFILE_WRITE_IF_CHANGED )
  {
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v25) = 8;
      LODWORD(v24) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1341, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v16 = &s_gamerSettings[v5];
    v17 = &s_gamerSettingsLastSaved[v5];
    if ( s_gamerSettings[v2].isProfileLoggedIn && !s_gamerSettings[v2].errorOnRead )
    {
      playTimeSP = s_gamerSettingsLastSaved[v2].config.playTimeSP;
      v19 = s_gamerSettings[v2].config.playTimeSP;
      playTimeCP = s_gamerSettingsLastSaved[v2].config.playTimeCP;
      playTimeMP = v17->config.playTimeMP;
      if ( (int)abs32(v17->config.playTimeSP - v19) < 300 )
        v17->config.playTimeSP = v19;
      v22 = v16->config.playTimeCP;
      if ( (int)abs32(playTimeCP - v22) < 300 )
        v17->config.playTimeCP = v22;
      v23 = v16->config.playTimeMP;
      if ( (int)abs32(playTimeMP - v23) < 300 )
        v17->config.playTimeMP = v23;
      if ( !memcmp_0(v16, v17, 0x1F88ui64) )
      {
        while ( !v16->ddlChanged[v6] )
        {
          if ( ++v6 >= 3 )
          {
            v17->config.playTimeSP = playTimeSP;
            v17->config.playTimeCP = playTimeCP;
            v17->config.playTimeMP = playTimeMP;
            return;
          }
        }
      }
      GamerProfile_SaveProfile(v2);
      *(_WORD *)s_gamerSettings[v2].ddlChanged = 0;
      s_gamerSettings[v2].ddlChanged[2] = 0;
      StoreSettingsToLastSaved(v2);
    }
  }
}

/*
==============
WriteKeyPair
==============
*/
void WriteKeyPair(char **const buf, int *const size, const GamerSettingKeyPair *kp, int keyIndex, const char *keyPairsStringBuf)
{
  unsigned __int8 v5; 
  unsigned __int8 byteVal; 
  const char *KeyPairString; 
  unsigned __int64 v11; 
  int v12; 
  size_t maxSize; 
  int shortVal; 
  int v15; 
  const char *v16; 
  char *v17; 
  bool v18; 
  __int64 v19; 
  KeyPairDataUnion u; 

  v5 = keyIndex;
  if ( !kp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1648, ASSERT_TYPE_ASSERT, "(kp)", (const char *)&queryFormat, "kp") )
    __debugbreak();
  if ( kp->type )
  {
    WriteType_unsigned_char_(buf, size, v5);
    WriteType_unsigned_char_(buf, size, kp->type);
    switch ( kp->type )
    {
      case 0u:
        return;
      case 1u:
        WriteType_unsigned_char_(buf, size, kp->u.byteVal);
        break;
      case 2u:
        byteVal = kp->u.byteVal;
        if ( *size < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
          __debugbreak();
        *(*buf)++ = byteVal;
        --*size;
        break;
      case 3u:
        WriteType_short_(buf, size, kp->u.shortVal);
        break;
      case 4u:
        WriteType_int_(buf, size, kp->u.intVal);
        break;
      case 5u:
        u = kp->u;
        if ( *size < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1482, ASSERT_TYPE_ASSERT, "(*size >= (int)sizeof( WriteT ))", (const char *)&queryFormat, "*size >= (int)sizeof( WriteT )") )
          __debugbreak();
        *(KeyPairDataUnion *)*buf = u;
        *buf += 4;
        *size -= 4;
        break;
      case 6u:
        WriteType_short_(buf, size, kp->u.shortVal);
        WriteType_short_(buf, size, kp->u.stringData.maxSize);
        KeyPairString = GetKeyPairString(kp, keyPairsStringBuf);
        Core_strcpy(*buf, *size, KeyPairString);
        v11 = -1i64;
        do
          ++v11;
        while ( (*buf)[v11] );
        v12 = truncate_cast<int,unsigned __int64>(v11);
        *buf += v12 + 1;
        *size += -1 - v12;
        break;
      case 7u:
        WriteType_short_(buf, size, kp->u.shortVal);
        WriteType_short_(buf, size, kp->u.stringData.maxSize);
        maxSize = kp->u.stringData.maxSize;
        if ( !keyPairsStringBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1634, ASSERT_TYPE_ASSERT, "(keyPairsStringBuf)", (const char *)&queryFormat, "keyPairsStringBuf") )
          __debugbreak();
        if ( kp->type == 7 && (shortVal = kp->u.shortVal, shortVal >= 0) && (v15 = kp->u.stringData.maxSize, v15 > 0) && shortVal + v15 < 3048 )
          v16 = &keyPairsStringBuf[(__int16)shortVal];
        else
          v16 = NULL;
        if ( (!buf || !*buf) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1441, ASSERT_TYPE_ASSERT, "(destBuf && *destBuf)", (const char *)&queryFormat, "destBuf && *destBuf") )
          __debugbreak();
        if ( *size < (int)maxSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1442, ASSERT_TYPE_ASSERT, "(*destSize >= srcSize)", (const char *)&queryFormat, "*destSize >= srcSize") )
          __debugbreak();
        v17 = *buf;
        if ( v16 )
          memcpy_0(v17, v16, maxSize);
        else
          memset_0(v17, 0, maxSize);
        *buf += maxSize;
        *size -= maxSize;
        break;
      case 8u:
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1686, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "TYPE_FLAG is only meant to be used in PROFILE_DATA_FIELDS to register flag bit, use TYPE_INT instead when registering the flag field in PROFILE_KEY_MAP");
        goto LABEL_42;
      default:
        LODWORD(v19) = kp->type;
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\gamerprofile.cpp", 1689, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled type '%i'.", v19);
LABEL_42:
        if ( v18 )
          __debugbreak();
        break;
    }
  }
}

