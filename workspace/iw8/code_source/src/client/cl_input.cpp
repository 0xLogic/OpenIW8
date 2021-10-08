/*
==============
CL_Input_EndFrame
==============
*/

void __fastcall CL_Input_EndFrame(LocalClientNum_t localClientNum)
{
  ?CL_Input_EndFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_AllowInput
==============
*/

bool __fastcall CL_Input_AllowInput(LocalClientNum_t localClientNum)
{
  return ?CL_Input_AllowInput@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_RegisterCommands
==============
*/

void CL_Input_RegisterCommands(void)
{
  ?CL_Input_RegisterCommands@@YAXXZ();
}

/*
==============
CL_Input_UseHighLowZoomSensitivity
==============
*/

bool __fastcall CL_Input_UseHighLowZoomSensitivity(LocalClientNum_t localClientNum, float *outSensitivity)
{
  return ?CL_Input_UseHighLowZoomSensitivity@@YA_NW4LocalClientNum_t@@PEAM@Z(localClientNum, outSensitivity);
}

/*
==============
CL_Input_ValidateCmdButtons
==============
*/

void __fastcall CL_Input_ValidateCmdButtons(const LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_ValidateCmdButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_UpdateCmdOffHandButtons
==============
*/

void __fastcall CL_Input_UpdateCmdOffHandButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_Input_UpdateCmdOffHandButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_Input_KeyClear
==============
*/

void __fastcall CL_Input_KeyClear(kbutton_t *button)
{
  ?CL_Input_KeyClear@@YAXPEAUkbutton_t@@@Z(button);
}

/*
==============
CL_Input_CycleWeapon_ToHeavySlot
==============
*/

void __fastcall CL_Input_CycleWeapon_ToHeavySlot(LocalClientNum_t localClientNum)
{
  ?CL_Input_CycleWeapon_ToHeavySlot@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_OnStanceUp
==============
*/

void __fastcall CL_Input_OnStanceUp(const LocalClientNum_t localClientNum, ClActiveClient *cl, const int key, const bool ignoreStance, const bool updateStance)
{
  ?CL_Input_OnStanceUp@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@H_N2@Z(localClientNum, cl, key, ignoreStance, updateStance);
}

/*
==============
CL_Input_RemoteKeyboard
==============
*/

void CL_Input_RemoteKeyboard(void)
{
  ?CL_Input_RemoteKeyboard@@YAXXZ();
}

/*
==============
CL_HasHeldStance
==============
*/

bool __fastcall CL_HasHeldStance(const LocalClientNum_t localClientNum)
{
  return ?CL_HasHeldStance@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_SetGamepadEnabled
==============
*/

void __fastcall CL_Input_SetGamepadEnabled(int controllerIndex, bool enabled)
{
  ?CL_Input_SetGamepadEnabled@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
CL_Input_CycleWeapon_GetButtonHeldTime
==============
*/

int __fastcall CL_Input_CycleWeapon_GetButtonHeldTime(LocalClientNum_t localClientNum)
{
  return ?CL_Input_CycleWeapon_GetButtonHeldTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_SetExtrapolationCommand
==============
*/

void __fastcall CL_Input_SetExtrapolationCommand(ClActiveClient *cl, const usercmd_s *const cmd, const int deltaTime)
{
  ?CL_Input_SetExtrapolationCommand@@YAXPEAVClActiveClient@@QEBUusercmd_s@@H@Z(cl, cmd, deltaTime);
}

/*
==============
CL_Input_ExecBinding
==============
*/

void __fastcall CL_Input_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  ?CL_Input_ExecBinding@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, kb, key, forceNotify);
}

/*
==============
CL_Input_AxisValueToChar
==============
*/

char __fastcall CL_Input_AxisValueToChar(float v)
{
  return ?CL_Input_AxisValueToChar@@YADM@Z(v);
}

/*
==============
CL_Input_UpdateViewAnglesAxis
==============
*/

double __fastcall CL_Input_UpdateViewAnglesAxis(ClActiveClient *cl, const AngleAxisName axis, const float maxAxisSpeed, const bool useCombinedCameraRotationSpeed, const float capAxisSpeed)
{
  double result; 

  *(float *)&result = ?CL_Input_UpdateViewAnglesAxis@@YAMPEAVClActiveClient@@W4AngleAxisName@@M_NM@Z(cl, axis, maxAxisSpeed, useCombinedCameraRotationSpeed, capAxisSpeed);
  return result;
}

/*
==============
CL_SetStance
==============
*/

void __fastcall CL_SetStance(LocalClientNum_t localClientNum, StanceState stance, const unsigned int eventParm)
{
  ?CL_SetStance@@YAXW4LocalClientNum_t@@W4StanceState@@I@Z(localClientNum, stance, eventParm);
}

/*
==============
CL_Input_CycleWeapon
==============
*/

void __fastcall CL_Input_CycleWeapon(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_CycleWeapon@@YAXW4LocalClientNum_t@@AEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_SpeedDown
==============
*/

void CL_Input_SpeedDown(void)
{
  ?CL_Input_SpeedDown@@YAXXZ();
}

/*
==============
CL_Input_GetCurrentMousePosition
==============
*/

void __fastcall CL_Input_GetCurrentMousePosition(float *outX, float *outY)
{
  ?CL_Input_GetCurrentMousePosition@@YAXAEAM0@Z(outX, outY);
}

/*
==============
CL_Input_IgnoreStance
==============
*/

bool __fastcall CL_Input_IgnoreStance(LocalClientNum_t localClientNum)
{
  return ?CL_Input_IgnoreStance@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_ToggleStance
==============
*/

void __fastcall CL_Input_ToggleStance(LocalClientNum_t localClientNum, StanceState preferredStance)
{
  ?CL_Input_ToggleStance@@YAXW4LocalClientNum_t@@W4StanceState@@@Z(localClientNum, preferredStance);
}

/*
==============
CL_Input_AddCurrentStanceToCmd
==============
*/

void __fastcall CL_Input_AddCurrentStanceToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_AddCurrentStanceToCmd@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_IsAutoSprintEnabled
==============
*/

bool __fastcall CL_Input_IsAutoSprintEnabled(const LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsAutoSprintEnabled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_LowerStanceDown
==============
*/

void __fastcall CL_Input_LowerStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  ?CL_Input_LowerStanceDown@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@@Z(localClientNum, cl);
}

/*
==============
CL_Input_PopHeldStance
==============
*/

void __fastcall CL_Input_PopHeldStance(const LocalClientNum_t localClientNum, StanceState stance)
{
  ?CL_Input_PopHeldStance@@YAXW4LocalClientNum_t@@W4StanceState@@@Z(localClientNum, stance);
}

/*
==============
CL_Input_UpDown
==============
*/

void CL_Input_UpDown(void)
{
  ?CL_Input_UpDown@@YAXXZ();
}

/*
==============
CL_Input_UpdateCmdTime
==============
*/

void __fastcall CL_Input_UpdateCmdTime(const unsigned __int64 usec)
{
  ?CL_Input_UpdateCmdTime@@YAX_K@Z(usec);
}

/*
==============
CL_Input_RaiseStance_Cheat
==============
*/

void CL_Input_RaiseStance_Cheat(void)
{
  ?CL_Input_RaiseStance_Cheat@@YAXXZ();
}

/*
==============
CL_Input_UpdateCmdButton
==============
*/

void __fastcall CL_Input_UpdateCmdButton(LocalClientNum_t localClientNum, unsigned __int64 *cmdButtons, int kbButton, unsigned __int64 buttonFlag, ButtonSet *outClearButtons)
{
  ?CL_Input_UpdateCmdButton@@YAXW4LocalClientNum_t@@PEA_KH_KAEAUButtonSet@@@Z(localClientNum, cmdButtons, kbButton, buttonFlag, outClearButtons);
}

/*
==============
CL_Input_IsMouseWheelScrollingUp
==============
*/

bool __fastcall CL_Input_IsMouseWheelScrollingUp(LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsMouseWheelScrollingUp@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_CanHybridToggle
==============
*/

bool __fastcall CL_Input_CanHybridToggle(const LocalClientNum_t localClientNum)
{
  return ?CL_Input_CanHybridToggle@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_ShowSystemCursor
==============
*/

void __fastcall CL_Input_ShowSystemCursor(int show)
{
  ?CL_Input_ShowSystemCursor@@YAXH@Z(show);
}

/*
==============
CL_Input_ClearHeldStances
==============
*/

void __fastcall CL_Input_ClearHeldStances(const LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearHeldStances@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_AddPitchYawMoveToCmd
==============
*/

void __fastcall CL_Input_AddPitchYawMoveToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_AddPitchYawMoveToCmd@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_CanKeybindTriggerCopyLoadout
==============
*/

bool __fastcall CL_Input_CanKeybindTriggerCopyLoadout(const LocalClientNum_t localClientNum, const int kb, const int key, unsigned int time)
{
  return ?CL_Input_CanKeybindTriggerCopyLoadout@@YA_NW4LocalClientNum_t@@HHI@Z(localClientNum, kb, key, time);
}

/*
==============
CL_Input_FinishCmdButtons
==============
*/

void __fastcall CL_Input_FinishCmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_Input_FinishCmdButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_Input_RefreshCommandIcons
==============
*/

void __fastcall CL_Input_RefreshCommandIcons(LocalClientNum_t localClientNum)
{
  ?CL_Input_RefreshCommandIcons@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_AddTempStanceToCmd
==============
*/

void __fastcall CL_Input_AddTempStanceToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_AddTempStanceToCmd@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_ClearKeys
==============
*/

void __fastcall CL_Input_ClearKeys(LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearKeys@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_LocationSelection
==============
*/

bool __fastcall CL_Input_LocationSelection(const LocalClientNum_t localClientNum, usercmd_s *cmd, float mx, float my, ButtonSet *outClearButtons)
{
  return ?CL_Input_LocationSelection@@YA_NW4LocalClientNum_t@@PEAUusercmd_s@@MMAEAUButtonSet@@@Z(localClientNum, cmd, mx, my, outClearButtons);
}

/*
==============
CL_Input_SpeedUp
==============
*/

void CL_Input_SpeedUp(void)
{
  ?CL_Input_SpeedUp@@YAXXZ();
}

/*
==============
CL_Input_IsMouseWheelScrollingDown
==============
*/

bool __fastcall CL_Input_IsMouseWheelScrollingDown(LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsMouseWheelScrollingDown@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_KeyDown
==============
*/

void __fastcall CL_Input_KeyDown(kbutton_t *b, int key, unsigned int time)
{
  ?CL_Input_KeyDown@@YAXPEAUkbutton_t@@HI@Z(b, key, time);
}

/*
==============
CL_Input_KeyDownCheat
==============
*/

void __fastcall CL_Input_KeyDownCheat(kbutton_t *b)
{
  ?CL_Input_KeyDownCheat@@YAXPEAUkbutton_t@@@Z(b);
}

/*
==============
CL_Input_KeyUpCheat
==============
*/

void __fastcall CL_Input_KeyUpCheat(kbutton_t *b)
{
  ?CL_Input_KeyUpCheat@@YAXPEAUkbutton_t@@@Z(b);
}

/*
==============
CL_Input_KeyUp
==============
*/

void __fastcall CL_Input_KeyUp(kbutton_t *b, int key, unsigned int time)
{
  ?CL_Input_KeyUp@@YAXPEAUkbutton_t@@HI@Z(b, key, time);
}

/*
==============
CL_Input_IsAutoSuperSprintEnabled
==============
*/

bool __fastcall CL_Input_IsAutoSuperSprintEnabled(const LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsAutoSuperSprintEnabled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_GamepadAccessibility
==============
*/

void __fastcall CL_Input_GamepadAccessibility(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_GamepadAccessibility@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_UpdateCmdBreathButton
==============
*/

void __fastcall CL_Input_UpdateCmdBreathButton(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_UpdateCmdBreathButton@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_ThrowDown
==============
*/

void CL_Input_ThrowDown(void)
{
  ?CL_Input_ThrowDown@@YAXXZ();
}

/*
==============
CL_IgnoreMouse
==============
*/

void __fastcall CL_IgnoreMouse(int ignore)
{
  ?CL_IgnoreMouse@@YAXH@Z(ignore);
}

/*
==============
CL_Input_ExecBindingCommon
==============
*/

void __fastcall CL_Input_ExecBindingCommon(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  ?CL_Input_ExecBindingCommon@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, kb, key, forceNotify);
}

/*
==============
CL_Input_GetClientLookInversion
==============
*/

double __fastcall CL_Input_GetClientLookInversion(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CL_Input_GetClientLookInversion@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CL_Input_ClearButtonsPressed
==============
*/

void __fastcall CL_Input_ClearButtonsPressed(const LocalClientNum_t localClientNum, const ButtonSet *clearButtons)
{
  ?CL_Input_ClearButtonsPressed@@YAXW4LocalClientNum_t@@AEBUButtonSet@@@Z(localClientNum, clearButtons);
}

/*
==============
CL_Input_LowerStance_Cheat
==============
*/

void CL_Input_LowerStance_Cheat(void)
{
  ?CL_Input_LowerStance_Cheat@@YAXXZ();
}

/*
==============
CL_Input_HoldBreathHybridAndVZoomToggle
==============
*/

void __fastcall CL_Input_HoldBreathHybridAndVZoomToggle(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_HoldBreathHybridAndVZoomToggle@@YAXW4LocalClientNum_t@@AEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_IsToggleAdsEnabled
==============
*/

bool __fastcall CL_Input_IsToggleAdsEnabled(const LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsToggleAdsEnabled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_StanceUpdate
==============
*/

void __fastcall CL_Input_StanceUpdate(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  ?CL_Input_StanceUpdate@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@@Z(localClientNum, cl);
}

/*
==============
CL_Input_UpUp
==============
*/

void CL_Input_UpUp(void)
{
  ?CL_Input_UpUp@@YAXXZ();
}

/*
==============
CL_Input_ThrowUp
==============
*/

void CL_Input_ThrowUp(void)
{
  ?CL_Input_ThrowUp@@YAXXZ();
}

/*
==============
CL_Input_HandleLuiMouseEvent
==============
*/

int __fastcall CL_Input_HandleLuiMouseEvent(LocalClientNum_t localClientNum, bool forceUpdate)
{
  return ?CL_Input_HandleLuiMouseEvent@@YAHW4LocalClientNum_t@@_N@Z(localClientNum, forceUpdate);
}

/*
==============
CL_Input_RaiseStanceDown
==============
*/

void __fastcall CL_Input_RaiseStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl, int key, unsigned int time)
{
  ?CL_Input_RaiseStanceDown@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@HI@Z(localClientNum, cl, key, time);
}

/*
==============
CL_Input_LogMouseInputVelocity
==============
*/

void __fastcall CL_Input_LogMouseInputVelocity(float deltaTime, float mx, float deltaYaw, float yaw)
{
  ?CL_Input_LogMouseInputVelocity@@YAXMMMM@Z(deltaTime, mx, deltaYaw, yaw);
}

/*
==============
CL_Input_CmdButtons
==============
*/

void __fastcall CL_Input_CmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  ?CL_Input_CmdButtons@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@AEAUButtonSet@@@Z(localClientNum, cmd, outClearButtons);
}

/*
==============
CL_Input_RemoteControlMove
==============
*/

void __fastcall CL_Input_RemoteControlMove(LocalClientNum_t localClientNum, usercmd_s *cmd, bool isSinglePlayer, ButtonSet *outClearButtons, float mx, float my)
{
  ?CL_Input_RemoteControlMove@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@_NAEAUButtonSet@@MM@Z(localClientNum, cmd, isSinglePlayer, outClearButtons, mx, my);
}

/*
==============
CL_Input_ClearAutoForwardFlag
==============
*/

void __fastcall CL_Input_ClearAutoForwardFlag(const LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearAutoForwardFlag@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_ClearOnFootFlags
==============
*/

void __fastcall CL_Input_ClearOnFootFlags(const LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearOnFootFlags@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_ValidateMouseMovementCalls
==============
*/

void CL_Input_ValidateMouseMovementCalls(void)
{
  ?CL_Input_ValidateMouseMovementCalls@@YAXXZ();
}

/*
==============
CL_Input_IsGamepadActiveForContext
==============
*/

bool __fastcall CL_Input_IsGamepadActiveForContext(LocalClientNum_t localClientNum, InputContext inputContext)
{
  return ?CL_Input_IsGamepadActiveForContext@@YA_NW4LocalClientNum_t@@W4InputContext@@@Z(localClientNum, inputContext);
}

/*
==============
CL_Input_RemoteMouseMove
==============
*/

void CL_Input_RemoteMouseMove(void)
{
  ?CL_Input_RemoteMouseMove@@YAXXZ();
}

/*
==============
CL_Input_MouseEvent
==============
*/

int __fastcall CL_Input_MouseEvent(int controllerIndex, int x, int y, int dx, int dy)
{
  return ?CL_Input_MouseEvent@@YAHHHHHH@Z(controllerIndex, x, y, dx, dy);
}

/*
==============
CL_Input_UpdateMouseWheelSustainState
==============
*/

void __fastcall CL_Input_UpdateMouseWheelSustainState(LocalClientNum_t localClientNum, const float deltaTime)
{
  ?CL_Input_UpdateMouseWheelSustainState@@YAXW4LocalClientNum_t@@M@Z(localClientNum, deltaTime);
}

/*
==============
CL_Input_ClearMouseWheelState
==============
*/

void __fastcall CL_Input_ClearMouseWheelState(LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearMouseWheelState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_HandleFrontendSceneDebugEvent
==============
*/

bool __fastcall CL_Input_HandleFrontendSceneDebugEvent(LocalClientNum_t localClientNum, int kbValue, int key, int isDown, int wasDown)
{
  return ?CL_Input_HandleFrontendSceneDebugEvent@@YA_NW4LocalClientNum_t@@HHHH@Z(localClientNum, kbValue, key, isDown, wasDown);
}

/*
==============
CL_Input_OnStanceDown
==============
*/

void __fastcall CL_Input_OnStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl, const int key, const bool ignoreStance, const bool updateStance)
{
  ?CL_Input_OnStanceDown@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@H_N2@Z(localClientNum, cl, key, ignoreStance, updateStance);
}

/*
==============
CL_Input_AdjustSpeedForAds
==============
*/

void __fastcall CL_Input_AdjustSpeedForAds(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_AdjustSpeedForAds@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_ApplyMouseFlightSensitivity
==============
*/

void __fastcall CL_Input_ApplyMouseFlightSensitivity(const LocalClientNum_t localClientNum, float *const outMx, float *const outMy)
{
  ?CL_Input_ApplyMouseFlightSensitivity@@YAXW4LocalClientNum_t@@QEAM1@Z(localClientNum, outMx, outMy);
}

/*
==============
CL_Input_KeyState
==============
*/

double __fastcall CL_Input_KeyState(kbutton_t *key)
{
  double result; 

  *(float *)&result = ?CL_Input_KeyState@@YAMPEAUkbutton_t@@@Z(key);
  return result;
}

/*
==============
CL_Input_ClampInputChar
==============
*/

char __fastcall CL_Input_ClampInputChar(const int i)
{
  return ?CL_Input_ClampInputChar@@YACH@Z(i);
}

/*
==============
CL_Input_ApplyMouseSensitivity
==============
*/

void __fastcall CL_Input_ApplyMouseSensitivity(const LocalClientNum_t localClientNum, float *const outMx, float *const outMy)
{
  ?CL_Input_ApplyMouseSensitivity@@YAXW4LocalClientNum_t@@QEAM1@Z(localClientNum, outMx, outMy);
}

/*
==============
CL_Input_UnregisterCommands
==============
*/

void CL_Input_UnregisterCommands(void)
{
  ?CL_Input_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_Input_HandleMouseWheel
==============
*/

void __fastcall CL_Input_HandleMouseWheel(LocalClientNum_t localClientNum, const int delta)
{
  ?CL_Input_HandleMouseWheel@@YAXW4LocalClientNum_t@@H@Z(localClientNum, delta);
}

/*
==============
CL_Input_CanKeybindTriggerCutParachute
==============
*/

bool __fastcall CL_Input_CanKeybindTriggerCutParachute(const LocalClientNum_t localClientNum, const int kb)
{
  return ?CL_Input_CanKeybindTriggerCutParachute@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, kb);
}

/*
==============
CL_Input_UpdateCursorHintBinding
==============
*/

void __fastcall CL_Input_UpdateCursorHintBinding(LocalClientNum_t localClientNum, HintType cursorHint, int kb)
{
  ?CL_Input_UpdateCursorHintBinding@@YAXW4LocalClientNum_t@@W4HintType@@H@Z(localClientNum, cursorHint, kb);
}

/*
==============
CL_Input_RemoteText
==============
*/

void CL_Input_RemoteText(void)
{
  ?CL_Input_RemoteText@@YAXXZ();
}

/*
==============
CL_Input_PushHeldStance
==============
*/

void __fastcall CL_Input_PushHeldStance(const LocalClientNum_t localClientNum, StanceState stance)
{
  ?CL_Input_PushHeldStance@@YAXW4LocalClientNum_t@@W4StanceState@@@Z(localClientNum, stance);
}

/*
==============
CL_Input_ClearUsingAdsFlag
==============
*/

void __fastcall CL_Input_ClearUsingAdsFlag(const LocalClientNum_t localClientNum)
{
  ?CL_Input_ClearUsingAdsFlag@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_RaiseStanceUp
==============
*/

void __fastcall CL_Input_RaiseStanceUp(const LocalClientNum_t localClientNum, ClActiveClient *cl, int key, unsigned int time)
{
  ?CL_Input_RaiseStanceUp@@YAXW4LocalClientNum_t@@PEAVClActiveClient@@HI@Z(localClientNum, cl, key, time);
}

/*
==============
CL_Input_GetMouseMovement
==============
*/

void __fastcall CL_Input_GetMouseMovement(LocalClientNum_t localClientNum, float *mx, float *my)
{
  ?CL_Input_GetMouseMovement@@YAXW4LocalClientNum_t@@PEAM1@Z(localClientNum, mx, my);
}

/*
==============
CL_Input_CanKeybindTriggerSwitchSeat
==============
*/

bool __fastcall CL_Input_CanKeybindTriggerSwitchSeat(const LocalClientNum_t localClientNum, const int kb)
{
  return ?CL_Input_CanKeybindTriggerSwitchSeat@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, kb);
}

/*
==============
CL_Input_UpdateCmdButtonConditionalDelay
==============
*/

void __fastcall CL_Input_UpdateCmdButtonConditionalDelay(LocalClientNum_t localClientNum, unsigned __int64 *cmdButtons, int kbButton, unsigned __int64 buttonFlag, bool (__fastcall *cmdConditionFunc)(LocalClientNum_t, unsigned __int64), int stickyDurationMs, int *inOutRegisterTime)
{
  ?CL_Input_UpdateCmdButtonConditionalDelay@@YAXW4LocalClientNum_t@@PEA_KH_KP6A_N02@ZHPEAH@Z(localClientNum, cmdButtons, kbButton, buttonFlag, cmdConditionFunc, stickyDurationMs, inOutRegisterTime);
}

/*
==============
CL_Input_IsPausedFreeMove
==============
*/

bool __fastcall CL_Input_IsPausedFreeMove(const ClActiveClient *cl)
{
  return ?CL_Input_IsPausedFreeMove@@YA_NPEBVClActiveClient@@@Z(cl);
}

/*
==============
CL_Input_AddLateralMoveToCmd
==============
*/

void __fastcall CL_Input_AddLateralMoveToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ?CL_Input_AddLateralMoveToCmd@@YAXW4LocalClientNum_t@@PEAUusercmd_s@@@Z(localClientNum, cmd);
}

/*
==============
CL_Input_SlideToProneUpdate
==============
*/

bool __fastcall CL_Input_SlideToProneUpdate(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  return ?CL_Input_SlideToProneUpdate@@YA_NW4LocalClientNum_t@@PEAVClActiveClient@@@Z(localClientNum, cl);
}

/*
==============
CL_Input_IsGamepadEnabled
==============
*/

bool __fastcall CL_Input_IsGamepadEnabled(LocalClientNum_t localClientNum)
{
  return ?CL_Input_IsGamepadEnabled@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Input_UpDown
==============
*/
void CL_Input_UpDown(void)
{
  __int64 v0; 
  ClActiveClient *Client; 
  unsigned int v2; 
  StanceState *v3; 
  ClActiveClient *v4; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyDownCheat(&g_playersKb[v0][12]);
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v0);
  v2 = 0;
  v3 = &Client->heldInputs.heldStances[1];
  do
  {
    v2 += 2;
    *(_QWORD *)(v3 - 1) = 0i64;
    v3 += 2;
  }
  while ( v2 < 2 );
  Client->heldInputs.stackIndex = 0;
  if ( CL_Input_IsValidStateForInput((LocalClientNum_t)v0) )
  {
    v4 = ClActiveClient::GetClient((const LocalClientNum_t)v0);
    if ( v4->stance == CL_STANCE_CROUCH )
    {
      v4->stance = CL_STANCE_STAND;
    }
    else if ( v4->stance == CL_STANCE_PRONE )
    {
      v4->stance = CL_STANCE_CROUCH;
    }
    else
    {
      if ( v4->stance )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 410, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_STAND )", (const char *)&queryFormat, "cl->stance == CL_STANCE_STAND") )
          __debugbreak();
      }
      CL_Input_KeyDownCheat(&g_playersKb[v0][10]);
    }
  }
}

/*
==============
CL_Input_UpUp
==============
*/
void CL_Input_UpUp(void)
{
  __int64 v0; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyUpCheat(&g_playersKb[v0][12]);
  CL_Input_KeyUpCheat(&g_playersKb[v0][10]);
}

/*
==============
CL_Input_SpeedDown
==============
*/
void CL_Input_SpeedDown(void)
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 

  v0 = Cmd_LocalClientNum();
  if ( CL_Input_IsValidStateForInput(v0) )
  {
    ClActiveClient::GetClient(v0)->usingAds = 0;
    v1 = Cmd_LocalClientNum();
    CL_Input_KeyDownCheat(&g_playersKb[v1][9]);
  }
}

/*
==============
CL_Input_SpeedUp
==============
*/
void CL_Input_SpeedUp(void)
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 

  v0 = Cmd_LocalClientNum();
  if ( CL_Input_IsValidStateForInput(v0) )
  {
    ClActiveClient::GetClient(v0)->usingAds = 0;
    v1 = Cmd_LocalClientNum();
    CL_Input_KeyUpCheat(&g_playersKb[v1][9]);
  }
}

/*
==============
CL_Input_ThrowDown
==============
*/
void CL_Input_ThrowDown(void)
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyDownCheat(&g_playersKb[v0][31]);
}

/*
==============
CL_Input_ThrowUp
==============
*/
void CL_Input_ThrowUp(void)
{
  LocalClientNum_t v0; 

  v0 = Cmd_LocalClientNum();
  CL_Input_KeyUpCheat(&g_playersKb[v0][31]);
}

/*
==============
CL_Input_LowerStance_Cheat
==============
*/
void CL_Input_LowerStance_Cheat(void)
{
  LocalClientNum_t v0; 
  ClActiveClient *Client; 
  unsigned int v2; 
  StanceState *v3; 
  ClActiveClient *v4; 
  StanceState stance; 

  v0 = Cmd_LocalClientNum();
  if ( CL_Input_IsValidStateForInput(v0) )
  {
    Client = ClActiveClient::GetClient(v0);
    v2 = 0;
    v3 = &Client->heldInputs.heldStances[1];
    do
    {
      v2 += 2;
      *(_QWORD *)(v3 - 1) = 0i64;
      v3 += 2;
    }
    while ( v2 < 2 );
    Client->heldInputs.stackIndex = 0;
    v4 = ClActiveClient::GetClient(v0);
    stance = v4->stance;
    if ( stance )
    {
      if ( stance == CL_STANCE_CROUCH )
      {
        v4->stance = CL_STANCE_PRONE;
      }
      else if ( stance != CL_STANCE_PRONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 495, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_PRONE )", (const char *)&queryFormat, "cl->stance == CL_STANCE_PRONE") )
      {
        __debugbreak();
      }
    }
    else
    {
      v4->stance = CL_STANCE_CROUCH;
    }
  }
}

/*
==============
CL_Input_RaiseStance_Cheat
==============
*/
void CL_Input_RaiseStance_Cheat(void)
{
  LocalClientNum_t v0; 
  ClActiveClient *Client; 
  unsigned int v2; 
  StanceState *v3; 
  ClActiveClient *v4; 

  v0 = Cmd_LocalClientNum();
  if ( CL_Input_IsValidStateForInput(v0) )
  {
    Client = ClActiveClient::GetClient(v0);
    v2 = 0;
    v3 = &Client->heldInputs.heldStances[1];
    do
    {
      v2 += 2;
      *(_QWORD *)(v3 - 1) = 0i64;
      v3 += 2;
    }
    while ( v2 < 2 );
    Client->heldInputs.stackIndex = 0;
    v4 = ClActiveClient::GetClient(v0);
    if ( v4->stance == CL_STANCE_CROUCH )
    {
      v4->stance = CL_STANCE_STAND;
    }
    else if ( v4->stance == CL_STANCE_PRONE )
    {
      v4->stance = CL_STANCE_CROUCH;
    }
    else if ( v4->stance )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 523, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_STAND )", (const char *)&queryFormat, "cl->stance == CL_STANCE_STAND") )
        __debugbreak();
    }
  }
}

/*
==============
CL_Input_RemoteKeyboard
==============
*/
void CL_Input_RemoteKeyboard(void)
{
  LocalClientNum_t v0; 
  int v1; 
  int v2; 
  int v3; 
  int controllerIndex; 
  unsigned int v5; 

  v0 = Cmd_LocalClientNum();
  if ( Cmd_Argc() >= 2 )
  {
    v1 = Cmd_ArgInt(1);
    v2 = Cmd_ArgInt(2);
    if ( Cmd_Argc() <= 2 )
      v3 = 0;
    else
      v3 = Cmd_ArgInt(3);
    if ( v1 )
    {
      controllerIndex = CL_Mgr_GetControllerFromClient(v0);
      v5 = Sys_Milliseconds();
      CL_Keys_Event(v0, v1, v2 != 0, v5, 0, controllerIndex);
    }
    if ( v3 )
    {
      if ( v2 )
        CL_Keys_CharEvent(v0);
    }
  }
  else
  {
    Com_Printf(0, "USAGE: remoteKey <key value> <state value> (optional: <char value>)\n");
  }
}

/*
==============
CL_Input_RemoteMouseMove
==============
*/
void CL_Input_RemoteMouseMove(void)
{
  LocalClientNum_t v0; 
  ClActiveClient *Client; 
  int v2; 
  int v3; 

  v0 = Cmd_LocalClientNum();
  if ( CL_Input_IsValidStateForInput(v0) )
  {
    Client = ClActiveClient::GetClient(v0);
    if ( Client->IsValidRemoteInputState(Client) )
    {
      if ( Cmd_Argc() >= 2 )
      {
        v2 = Cmd_ArgInt(1);
        v3 = Cmd_ArgInt(2);
        Client->mouseDx[Client->mouseIndex] = v2;
        Client->mouseDy[Client->mouseIndex] = v3;
        DevMouse::RemoteMouseMove(&g_devMouse, v2, v3);
      }
      else
      {
        Com_Printf(0, "USAGE: mouseMove <dx value> <dy value>\n");
      }
    }
  }
}

/*
==============
CL_Input_RemoteText
==============
*/
void CL_Input_RemoteText(void)
{
  LocalClientNum_t v0; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_LocalClientNum();
    if ( Cmd_ArgInt(1) )
      CL_Keys_CharEvent(v0);
  }
  else
  {
    Com_Printf(0, "USAGE: remoteChar <char value>\n");
  }
}

/*
==============
CL_HasHeldStance
==============
*/
bool CL_HasHeldStance(const LocalClientNum_t localClientNum)
{
  return ClActiveClient::GetClient(localClientNum)->heldInputs.stackIndex > 0;
}

/*
==============
CL_IgnoreMouse
==============
*/
void CL_IgnoreMouse(int ignore)
{
  ;
}

/*
==============
CL_Input_AddCurrentStanceToCmd
==============
*/
void CL_Input_AddCurrentStanceToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ClActiveClient *Client; 
  __int16 groundEntityNum; 
  unsigned __int64 v6; 
  __int64 v7; 
  unsigned __int64 v8; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 922, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  groundEntityNum = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.groundEntityNum;
  switch ( Client->stance )
  {
    case CL_STANCE_CROUCH:
      v8 = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
      goto LABEL_23;
    case CL_STANCE_PRONE:
      v8 = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x40;
LABEL_23:
      cmd->buttons = v8;
      break;
    case CL_STANCE_SLIDE:
      v6 = cmd->buttons & 0xFFFFFFFFFFFFFFBFui64;
      cmd->buttons = v6;
      if ( !Client->crouchHoldPressed )
      {
        v6 &= ~0x80ui64;
        cmd->buttons = v6;
      }
      v7 = v6;
      if ( Client->crouchToggle && groundEntityNum == 2047 )
      {
        v7 = v6 | 0x80;
        cmd->buttons = v6 | 0x80;
      }
      if ( Client->stanceHeld || Client->requireSlideRelease )
        cmd->buttons = v7 | 0x400000;
      break;
    case CL_STANCE_SLIDE_NOHOLD:
      cmd->buttons &= 0xFFFFFFFFFFFFFF3Fui64;
      cmd->buttons |= 0x40000000400000ui64;
      break;
    default:
      if ( Client->stance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 967, ASSERT_TYPE_ASSERT, "(cl->stance == CL_STANCE_STAND)", (const char *)&queryFormat, "cl->stance == CL_STANCE_STAND") )
        __debugbreak();
      cmd->buttons &= 0xFFFFFFFFFFFFFF3Fui64;
      break;
  }
  CL_Input_AddStandToProneToCmd(localClientNum, cmd);
  cmd->buttons &= ~0x400ui64;
}

/*
==============
CL_Input_AddLateralMoveToCmd
==============
*/
void CL_Input_AddLateralMoveToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v4; 
  ClActiveClient *Client; 
  kbutton_t *v6; 
  int v10; 
  int v16; 
  int ControllerFromClient; 
  bool HoldSprint; 
  unsigned __int64 v19; 
  unsigned __int64 buttons; 
  int v23; 
  CgWeaponMap *Instance; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v31; 
  bool v32; 
  char v33; 
  char v34; 

  v4 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1158, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  v6 = g_playersKb[v4];
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 7);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@42fe0000
    vcvttss2si r14d, xmm0
  }
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 6);
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@c2fe0000
    vcvttss2si eax, xmm0
  }
  v10 = _EAX + _ER14;
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42fe0000
    vcvttss2si esi, xmm1
  }
  *(double *)&_XMM0 = CL_Input_KeyState(v6 + 3);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c2fe0000
    vcvttss2si eax, xmm1
  }
  v16 = _EAX + _ESI;
  if ( Client->autoForward && v16 >= 0 )
    v16 = 127;
  if ( v6[32].active || v6[32].wasPressed )
  {
    cmd->buttons |= 2ui64;
    v6[32].wasPressed = 0;
  }
  else
  {
    cmd->buttons &= ~2ui64;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  HoldSprint = GamerProfile_GetHoldSprint(ControllerFromClient);
  v19 = cmd->buttons & 0xFFFFBFFFFFFFFFFFui64;
  if ( HoldSprint )
    v19 = cmd->buttons | 0x400000000000i64;
  cmd->buttons = v19;
  LOBYTE(buttons) = v19;
  if ( v6[8].active && (v19 & 2) == 0 )
  {
    *(double *)&_XMM0 = CL_Input_KeyState(v6 + 1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42fe0000
      vcvttss2si eax, xmm1
    }
    v23 = _EAX + v10;
    *(double *)&_XMM0 = CL_Input_KeyState(g_playersKb[v4]);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@c2fe0000
      vcvttss2si eax, xmm1
    }
    v10 = _EAX + v23;
    buttons = cmd->buttons;
  }
  if ( (buttons & 1) != 0 )
  {
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1208, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(Instance, p_predictedPlayerState);
    if ( IsUsingOffhandGestureWeaponADSSupport )
      OffhandGestureWeapon = BG_GetOffhandGestureWeapon(Instance, p_predictedPlayerState);
    else
      OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
    v31 = OffhandGestureWeapon;
    v32 = BG_UsingAlternate(p_predictedPlayerState) && !IsUsingOffhandGestureWeaponADSSupport;
    if ( BG_IsMeleeOnlyWeapon(v31, v32) && !BG_IsWeaponMeleeOverride(Instance, p_predictedPlayerState, v31) || BG_IsThrowingAxe(v31) && !BG_IsFauxFists(p_predictedPlayerState, v31, v32) )
      cmd->buttons |= 4ui64;
  }
  if ( v16 >= -127 )
  {
    v33 = v16;
    if ( v16 > 127 )
      v33 = 127;
  }
  else
  {
    v33 = -127;
  }
  cmd->forwardmove = v33;
  if ( v10 >= -127 )
  {
    v34 = v10;
    if ( v10 > 127 )
      v34 = 127;
    cmd->rightmove = v34;
  }
  else
  {
    cmd->rightmove = -127;
  }
}

/*
==============
CL_Input_AddPitchYawMoveToCmd
==============
*/
void CL_Input_AddPitchYawMoveToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v2; 
  bool active; 
  char v4; 
  char v5; 
  bool v6; 
  char v7; 
  char v8; 

  v2 = localClientNum;
  active = g_playersKb[v2][4].active;
  if ( active || g_playersKb[v2][5].active )
  {
    v4 = active ? 0 : 127;
    v5 = active ? 0x81 : 0;
    if ( !g_playersKb[v2][5].active )
      v4 = v5;
    cmd->pitchmove = v4;
  }
  v6 = g_playersKb[v2][1].active;
  if ( v6 || g_playersKb[v2][0].active )
  {
    v7 = v6 ? 0 : 127;
    v8 = v6 ? 0x81 : 0;
    if ( !g_playersKb[v2][0].active )
      v7 = v8;
    cmd->yawmove = v7;
  }
}

/*
==============
CL_Input_AddStandToProneToCmd
==============
*/
void CL_Input_AddStandToProneToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ClActiveClient *Client; 
  cg_t *LocalClientGlobals; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client->standToProne )
  {
    if ( (cmd->buttons & 0x40) != 0 )
      cmd->buttons |= 0x100000000000000ui64;
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 0x36u) )
      Client->standToProne = 0;
  }
}

/*
==============
CL_Input_AddTempStanceToCmd
==============
*/
void CL_Input_AddTempStanceToCmd(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  ClActiveClient *Client; 
  ClActiveClient *v5; 
  StanceState v6; 
  bool v7; 
  cg_t *LocalClientGlobals; 
  int v9; 
  cg_t *v10; 
  __int16 groundEntityNum; 
  StanceState wantedState; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 866, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  v5 = ClActiveClient::GetClient(localClientNum);
  v6 = *((_DWORD *)&v5->ignoreStanceInput + v5->heldInputs.stackIndex);
  v7 = (unsigned int)(Client->stance - 3) <= 1;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = 0;
  wantedState = CL_STANCE_STAND;
  v10 = LocalClientGlobals;
  groundEntityNum = LocalClientGlobals->predictedPlayerState.groundEntityNum;
  if ( CL_Input_SlideToHoldProneUpdate(localClientNum, Client, &wantedState) )
    v6 = wantedState;
  if ( Slide_IsEnabled(&v10->predictedPlayerState) && Client->stanceHeld && (Client->wasSprinting || v7 || groundEntityNum == 2047) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v10->predictedPlayerState.pm_flags, ACTIVE, 6u) )
  {
    v6 = CL_STANCE_SLIDE;
    Client->wasSprinting = 0;
    v9 = 3;
  }
  Client->stance = v9;
  if ( v6 == CL_STANCE_PRONE )
  {
    cmd->buttons = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x40;
    CL_Input_AddStandToProneToCmd(localClientNum, cmd);
LABEL_15:
    cmd->buttons |= 0x400ui64;
    return;
  }
  if ( v6 == CL_STANCE_CROUCH )
  {
    cmd->buttons = cmd->buttons & 0xFFFFFFFFFFFFFF3Fui64 | 0x80;
    goto LABEL_15;
  }
  if ( v6 != CL_STANCE_SLIDE )
    goto LABEL_15;
  cmd->buttons &= 0xFFFFFFFFFFFFFF3Fui64;
  cmd->buttons |= 0x400400ui64;
}

/*
==============
CL_Input_AdjustSpeedForAds
==============
*/
void CL_Input_AdjustSpeedForAds(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v2; 
  ClActiveClient *Client; 
  int ControllerFromClient; 
  bool GamepadEnabled; 
  int v7; 
  bool ToggleADSEnabledGamepad; 
  bool *p_active; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 

  v2 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1071, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v2);
  CL_Input_ClearUsingAdsFlag((const LocalClientNum_t)v2);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  v7 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  if ( GamepadEnabled )
    ToggleADSEnabledGamepad = GamerProfile_GetToggleADSEnabledGamepad(v7);
  else
    ToggleADSEnabledGamepad = GamerProfile_GetToggleADSEnabledKeyboard(v7);
  if ( ToggleADSEnabledGamepad )
  {
    if ( Client->usingAds )
      cmd->buttons |= 0x200200ui64;
  }
  else
  {
    p_active = &g_playersKb[v2][9].active;
    v10 = cmd->buttons & 0xFFFFFFFFFFFFFDFFui64;
    if ( *p_active != Client->usingAds )
      v10 = cmd->buttons | 0x200;
    cmd->buttons = v10;
    if ( !Client->usingAds || *p_active )
      v11 = v10 & 0xFFFFFFFFFFDFFFFFui64;
    else
      v11 = v10 | 0x200000;
    cmd->buttons = v11;
  }
}

/*
==============
CL_Input_AllowInput
==============
*/
bool CL_Input_AllowInput(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 
  bool result; 

  result = 1;
  if ( Com_IsAnyLocalServerRunning() )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    if ( Com_GameMode_SupportsFeature(WEAPON_DROPPING) && CL_Pause_IsGamePaused() && Client->GetFreeMoveType(Client) == FREEMOVE_NONE )
      return 0;
    if ( Client->GetFreeMoveType(Client) == FREEMOVE_NONE && !CL_Pause_IsGamePaused() && SV_IsDemoPlayingForClient() )
      return 0;
  }
  return result;
}

/*
==============
CL_Input_ApplyGeneralMouseSensitivity
==============
*/

void __fastcall CL_Input_ApplyGeneralMouseSensitivity(LocalClientNum_t localClientNum, double sensitivityX, double sensitivityY, float *const outMx, float *const outMy)
{
  int ControllerFromClient; 
  char v36; 
  const dvar_t *v37; 
  char *fmt; 
  float outSensFactorX; 
  float outSensFactorY; 

  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RDI = outMx;
  __asm
  {
    vmovaps [rsp+98h+var_38], xmm7
    vmovaps [rsp+98h+var_48], xmm8
    vmovaps [rsp+98h+var_58], xmm9
    vmovaps xmm9, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !outMx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1932, ASSERT_TYPE_ASSERT, "(outMx)", (const char *)&queryFormat, "outMx") )
    __debugbreak();
  _RBX = outMy;
  if ( !outMy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1933, ASSERT_TYPE_ASSERT, "(outMy)", (const char *)&queryFormat, "outMy") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GamerProfile_GetMouseAccel(ControllerFromClient);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rbx]
    vmulss  xmm3, xmm1, xmm1
    vmulss  xmm2, xmm2, xmm2
    vxorps  xmm1, xmm1, xmm1
    vaddss  xmm3, xmm3, xmm2
    vmovss  xmm2, cs:__real@3f800000
    vcvtsi2ss xmm1, xmm1, rax
    vdivss  xmm1, xmm2, xmm1
    vsqrtss xmm4, xmm3, xmm3
    vmulss  xmm7, xmm4, xmm1
    vmulss  xmm6, xmm7, xmm0
    vmovss  [rsp+98h+outSensFactorX], xmm2
    vmovss  [rsp+98h+outSensFactorY], xmm2
  }
  CG_Utils_GetActiveBindingSetMouseSentitivityFactors(localClientNum, &outSensFactorX, &outSensFactorY);
  CL_Input_GetSensitivityScale(localClientNum);
  __asm
  {
    vmulss  xmm2, xmm8, [rsp+98h+outSensFactorX]
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm2, xmm9, [rsp+98h+outSensFactorY]
    vmulss  xmm8, xmm3, xmm0
    vaddss  xmm3, xmm2, xmm6
    vmulss  xmm6, xmm3, xmm0
    vmulss  xmm0, xmm8, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm1, xmm6, dword ptr [rbx]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm7, xmm0
    vmovss  dword ptr [rbx], xmm1
  }
  if ( !v36 )
  {
    v37 = DVARBOOL_cl_showmouserate;
    if ( !DVARBOOL_cl_showmouserate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showmouserate") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      __asm
      {
        vcvtss2sd xmm3, xmm8, xmm8
        vcvtss2sd xmm2, xmm7, xmm7
        vcvtss2sd xmm0, xmm6, xmm6
        vmovq   r9, xmm3
        vmovq   r8, xmm2
        vmovsd  [rsp+98h+fmt], xmm0
      }
      Com_Printf(14, "%f : %f , %f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
    vmovaps xmm8, [rsp+98h+var_48]
    vmovaps xmm9, [rsp+98h+var_58]
  }
}

/*
==============
CL_Input_ApplyMouseFlightSensitivity
==============
*/
void CL_Input_ApplyMouseFlightSensitivity(const LocalClientNum_t localClientNum, float *const outMx, float *const outMy)
{
  int ControllerFromClient; 

  if ( !outMx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1988, ASSERT_TYPE_ASSERT, "(outMx)", (const char *)&queryFormat, "outMx") )
    __debugbreak();
  if ( !outMy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1989, ASSERT_TYPE_ASSERT, "(outMy)", (const char *)&queryFormat, "outMy") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  _RAX = GamerProfile_GetProfileSettings(ControllerFromClient);
  _ECX = 0;
  __asm
  {
    vmovd   xmm2, ecx
    vmovss  xmm1, dword ptr [rax+18h]; sensitivityX
    vmulss  xmm5, xmm1, dword ptr [rax+14h]
  }
  LODWORD(_RAX) = _RAX->config.invertPitchGamepad;
  __asm
  {
    vxorps  xmm4, xmm5, cs:__xmm@80000000800000008000000080000000
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm2
    vblendvps xmm2, xmm4, xmm5, xmm3; sensitivityY
  }
  CL_Input_ApplyGeneralMouseSensitivity(localClientNum, *(double *)&_XMM1, *(double *)&_XMM2, outMx, outMy);
}

/*
==============
CL_Input_ApplyMouseSensitivity
==============
*/
void CL_Input_ApplyMouseSensitivity(const LocalClientNum_t localClientNum, float *const outMx, float *const outMy)
{
  int ControllerFromClient; 
  int v9; 
  float outVertSensitivity; 
  float outHorzSensitivity; 

  if ( !outMx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1961, ASSERT_TYPE_ASSERT, "(outMx)", (const char *)&queryFormat, "outMx") )
    __debugbreak();
  if ( !outMy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1962, ASSERT_TYPE_ASSERT, "(outMy)", (const char *)&queryFormat, "outMy") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !GamerProfile_GetGamepadEnabled(ControllerFromClient) )
  {
    __asm { vmovaps [rsp+58h+var_28], xmm6 }
    v9 = CL_Mgr_GetControllerFromClient(localClientNum);
    *(double *)&_XMM0 = GamerProfile_GetMouseHorizontalSensitivity(v9);
    __asm
    {
      vmovss  [rsp+58h+outHorzSensitivity], xmm0
      vmovaps xmm6, xmm0
    }
    *(double *)&_XMM0 = GamerProfile_GetMouseVerticalSensitivity(v9);
    __asm
    {
      vmulss  xmm1, xmm0, xmm6
      vmovss  [rsp+58h+outVertSensitivity], xmm1
    }
    CL_Input_ApplyVehicleMouseSensitivityMultipliers(localClientNum, &outHorzSensitivity, &outVertSensitivity);
    __asm
    {
      vmovss  xmm2, [rsp+58h+outVertSensitivity]; sensitivityY
      vmovss  xmm1, [rsp+58h+outHorzSensitivity]; sensitivityX
    }
    CL_Input_ApplyGeneralMouseSensitivity(localClientNum, *(double *)&_XMM1, *(double *)&_XMM2, outMx, outMy);
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
  }
}

/*
==============
CL_Input_ApplyVehicleMouseSensitivityMultipliers
==============
*/
void CL_Input_ApplyVehicleMouseSensitivityMultipliers(LocalClientNum_t localClientNum, float *outHorzSensitivity, float *outVertSensitivity)
{
  __int64 v6; 
  ClActiveClient *Client; 
  __int16 remoteControlEnt; 
  __int64 v11; 
  CgEntitySystem *v12; 
  const centity_t *v13; 
  CgVehicleSystem *v14; 
  const VehicleClient *v15; 
  const VehicleDef *ClientDef; 
  int ControllerFromClient; 
  const dvar_t *v19; 
  __int64 v26; 
  __int64 v27; 

  v6 = localClientNum;
  _RDI = outVertSensitivity;
  _RSI = outHorzSensitivity;
  Client = ClActiveClient::GetClient(localClientNum);
  remoteControlEnt = Client->GetPlayerState(Client)->remoteControlEnt;
  if ( remoteControlEnt != 2047 )
  {
    v11 = remoteControlEnt;
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v6) )
      __debugbreak();
    if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v27) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v26) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    if ( !CgEntitySystem::ms_entitySystemArray[v6] )
    {
      LODWORD(v27) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v27) )
        __debugbreak();
    }
    v12 = CgEntitySystem::ms_entitySystemArray[v6];
    if ( (unsigned int)v11 >= 0x800 )
    {
      LODWORD(v27) = 2048;
      LODWORD(v26) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    v13 = &v12->m_entities[v11];
    if ( CG_Vehicle_IsVehicleEntity(v13) )
    {
      __asm
      {
        vmovaps [rsp+88h+var_38], xmm6
        vmovaps [rsp+88h+var_48], xmm7
      }
      if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
      {
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", v27) )
          __debugbreak();
      }
      if ( (unsigned int)v6 >= CgVehicleSystem::ms_allocatedCount )
      {
        LODWORD(v27) = CgVehicleSystem::ms_allocatedCount;
        LODWORD(v26) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v26, v27) )
          __debugbreak();
      }
      if ( !CgVehicleSystem::ms_vehicleSystemArray[v6] )
      {
        LODWORD(v27) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v27) )
          __debugbreak();
      }
      v14 = CgVehicleSystem::ms_vehicleSystemArray[v6];
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1886, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
        __debugbreak();
      v15 = CgVehicleSystem::GetClient(v14, v13);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1888, ASSERT_TYPE_ASSERT, "(vehicleClient)", (const char *)&queryFormat, "vehicleClient") )
        __debugbreak();
      ClientDef = CgVehicleSystem::GetClientDef(v15);
      if ( !ClientDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1890, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
        __debugbreak();
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
      *(double *)&_XMM0 = GamerProfile_GetLandVehicleMouseSensitivityMultiplier(ControllerFromClient);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = GamerProfile_GetAirVehicleMouseSensitivityMultiplier(ControllerFromClient);
      v19 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      __asm { vmovaps xmm7, xmm0 }
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
        __asm { vmulss  xmm6, xmm6, cs:__real@3f000000 }
      if ( ClientDef->type == VEH_TREADED || ClientDef->type == VEH_ARMOURED || ClientDef->type == VEH_CAR )
      {
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
          vmulss  xmm1, xmm6, dword ptr [rsi]
        }
      }
      else
      {
        if ( ClientDef->type != VEH_AIRCRAFT )
        {
LABEL_45:
          __asm
          {
            vmovaps xmm6, [rsp+88h+var_38]
            vmovaps xmm7, [rsp+88h+var_48]
          }
          return;
        }
        __asm
        {
          vmulss  xmm0, xmm7, dword ptr [rdi]
          vmovss  dword ptr [rdi], xmm0
          vmulss  xmm1, xmm7, dword ptr [rsi]
        }
      }
      __asm { vmovss  dword ptr [rsi], xmm1 }
      goto LABEL_45;
    }
  }
}

/*
==============
CL_Input_AxisValueToChar
==============
*/

int __fastcall CL_Input_AxisValueToChar(double v)
{
  int result; 

  __asm
  {
    vmovss  xmm2, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@bf800000; min
  }
  v = I_fclamp(*(float *)&v, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42fe0000
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm4, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm4, 1
    vcvttss2si eax, xmm1
  }
  return result;
}

/*
==============
CL_Input_CanHybridToggle
==============
*/
bool CL_Input_CanHybridToggle(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  bool result; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3513, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  result = 0;
  if ( BG_InADS(&LocalClientGlobals->predictedPlayerState) && CG_Weapons_CurrentWeaponCanHybridToggle(localClientNum) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    Handler = CgHandler::getHandler(localClientNum);
    if ( BG_HybridToggleIsAllowed(Instance, p_predictedPlayerState, Handler) )
      return 1;
  }
  return result;
}

/*
==============
CL_Input_CanKeybindTriggerCopyLoadout
==============
*/
bool CL_Input_CanKeybindTriggerCopyLoadout(const LocalClientNum_t localClientNum, const int kb, const int key, unsigned int time)
{
  int ControllerFromClient; 

  if ( !CG_GetLocalClientGlobals(localClientNum)->inKillCam )
    return 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) )
    return kb == 93;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_MOVEDOWN1, 1) )
    return kb == 55;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCE1, 1) )
    return kb == 31;
  if ( !CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCEDOWN1, 1) )
    return 0;
  return kb == 115;
}

/*
==============
CL_Input_CanKeybindTriggerCutParachute
==============
*/
bool CL_Input_CanKeybindTriggerCutParachute(const LocalClientNum_t localClientNum, const int kb)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) )
    return kb == 31;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_MOVEDOWN1, 1) )
    return kb == 55;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCE1, 1) )
    return kb == 31;
  else
    return CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCEDOWN1, 1) && kb == 115;
}

/*
==============
CL_Input_CanKeybindTriggerSwitchSeat
==============
*/
bool CL_Input_CanKeybindTriggerSwitchSeat(const LocalClientNum_t localClientNum, const int kb)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) )
    return kb == 33;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_MOVEDOWN1, 1) )
    return kb == 55;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCE1, 1) )
    return kb == 31;
  if ( CL_Keys_IsActionBoundToKey(localClientNum, BYTE_VALUE, BIND_STANCEDOWN1, 1) )
    return kb == 115;
  return 0;
}

/*
==============
CL_Input_ClampInputChar
==============
*/
char CL_Input_ClampInputChar(const int i)
{
  char result; 

  if ( i < -127 )
    return -127;
  result = 127;
  if ( i <= 127 )
    return i;
  return result;
}

/*
==============
CL_Input_ClearAutoForwardFlag
==============
*/
void CL_Input_ClearAutoForwardFlag(const LocalClientNum_t localClientNum)
{
  ClActiveClient::GetClient(localClientNum)->autoForward = 0;
}

/*
==============
CL_Input_ClearButtonsPressed
==============
*/
void CL_Input_ClearButtonsPressed(const LocalClientNum_t localClientNum, const ButtonSet *clearButtons)
{
  __int64 v2; 
  unsigned int v3; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int contextMountButton; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  LODWORD(v2) = 0;
  v3 = clearButtons->array[0];
  v5 = localClientNum;
  while ( v3 )
  {
LABEL_5:
    v6 = __lzcnt(v3);
    v7 = v6 + 32 * v2;
    if ( v6 >= 0x20 )
    {
      LODWORD(v11) = 32;
      LODWORD(v10) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( (v3 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v3 &= ~(0x80000000 >> v6);
    if ( v7 >= 0x44 )
    {
      LODWORD(v11) = 68;
      LODWORD(v10) = v6 + 32 * v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2691, ASSERT_TYPE_ASSERT, "(unsigned)( kbButton ) < (unsigned)( NUM_BUTTONS )", "kbButton doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    g_playersKb[v5][v7].wasPressed = 0;
  }
  while ( 1 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 3 )
      break;
    v3 = clearButtons->array[v2];
    if ( v3 )
      goto LABEL_5;
  }
  contextMountButton = clearButtons->contextMountButton;
  if ( contextMountButton != 68 )
  {
    if ( contextMountButton >= 0x44 )
    {
      LODWORD(v11) = 68;
      LODWORD(v10) = clearButtons->contextMountButton;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2698, ASSERT_TYPE_ASSERT, "(unsigned)( clearButtons.contextMountButton ) < (unsigned)( NUM_BUTTONS )", "clearButtons.contextMountButton doesn't index NUM_BUTTONS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v9 = clearButtons->contextMountButton + 68 * v5;
    *(_WORD *)&g_playersKb[0][v9].active = 0;
    *(_QWORD *)g_playersKb[0][v9].down = 0i64;
    *(_QWORD *)&g_playersKb[0][v9].downtime = 0i64;
    g_playersKb[0][v9].flags = 0;
  }
  if ( clearButtons->locationSelectButton )
    *(_QWORD *)&CL_Keys_GetKeyState((LocalClientNum_t)v5)->locSelInputState = 0i64;
}

/*
==============
CL_Input_ClearHeldStances
==============
*/
void CL_Input_ClearHeldStances(const LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 
  unsigned int v2; 
  StanceState *v3; 

  Client = ClActiveClient::GetClient(localClientNum);
  v2 = 0;
  v3 = &Client->heldInputs.heldStances[1];
  do
  {
    v2 += 2;
    *(_QWORD *)(v3 - 1) = 0i64;
    v3 += 2;
  }
  while ( v2 < 2 );
  Client->heldInputs.stackIndex = 0;
}

/*
==============
CL_Input_ClearKeys
==============
*/
void CL_Input_ClearKeys(LocalClientNum_t localClientNum)
{
  memset_0(g_playersKb[localClientNum], 0, sizeof(kbutton_t[68]));
  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
}

/*
==============
CL_Input_ClearMouseWheelState
==============
*/
void CL_Input_ClearMouseWheelState(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
    Client->mouseWheelDelta = 0;
}

/*
==============
CL_Input_ClearOnFootFlags
==============
*/
void CL_Input_ClearOnFootFlags(const LocalClientNum_t localClientNum)
{
  CL_Input_ClearUsingAdsFlag(localClientNum);
  ClActiveClient::GetClient(localClientNum)->autoForward = 0;
}

/*
==============
CL_Input_ClearUsingAdsFlag
==============
*/
void CL_Input_ClearUsingAdsFlag(const LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  bool v5; 
  bool usingAds; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v9; 

  Client = ClActiveClient::GetClient(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 997, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x1Cu);
  usingAds = Client->usingAds;
  if ( usingAds && v5 != Client->isRemoteControlling )
  {
    Client->usingAds = 0;
    usingAds = 0;
  }
  Client->isRemoteControlling = v5;
  if ( usingAds )
  {
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 5u) || BG_IsUsingOffhandGestureWeapon(p_predictedPlayerState) || (Instance = CgWeaponMap::GetInstance(localClientNum), ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, p_predictedPlayerState), v9 = BG_UsingAlternate(p_predictedPlayerState), !BG_IsAimDownSight(ViewmodelWeapon, v9)) && !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_force_toggle_ads_enabled, "force_toggle_ads_enabled") )
      Client->usingAds = 0;
  }
}

/*
==============
CL_Input_CmdButtons
==============
*/
void CL_Input_CmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  unsigned int v8; 

  v4 = localClientNum;
  if ( *(_WORD *)&g_playersKb[v4][19].active )
    cmd->buttons |= 1ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x13u);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( BG_Skydive_CanThirdPersonCam(&LocalClientGlobals->predictedPlayerState) )
  {
    if ( g_playersKb[v4][24].active || g_playersKb[v4][24].wasPressed )
      cmd->buttons |= 0x100000ui64;
    bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x18u);
    if ( g_playersKb[v4][65].active || g_playersKb[v4][65].wasPressed )
      cmd->buttons |= 0x100000ui64;
    bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x41u);
  }
  if ( g_playersKb[v4][21].active || g_playersKb[v4][21].wasPressed )
    cmd->buttons |= 0x2000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x15u);
  if ( g_playersKb[v4][22].active || g_playersKb[v4][22].wasPressed )
    cmd->buttons |= 0x200000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x16u);
  if ( g_playersKb[v4][25].active || g_playersKb[v4][25].wasPressed )
    cmd->buttons |= 4ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x19u);
  if ( g_playersKb[v4][26].active || g_playersKb[v4][26].wasPressed )
    cmd->buttons |= 8ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Au);
  if ( g_playersKb[v4][27].active || g_playersKb[v4][27].wasPressed )
    cmd->buttons |= 0x10ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Bu);
  if ( g_playersKb[v4][28].active || g_playersKb[v4][28].wasPressed )
    cmd->buttons |= 0x20ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Cu);
  if ( g_playersKb[v4][29].active || g_playersKb[v4][29].wasPressed )
    cmd->buttons |= 0x40ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Du);
  if ( g_playersKb[v4][30].active || g_playersKb[v4][30].wasPressed )
    cmd->buttons |= 0x80ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Eu);
  if ( g_playersKb[v4][13].active || g_playersKb[v4][13].wasPressed )
    cmd->buttons |= 0x4000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0xDu);
  if ( g_playersKb[v4][10].active || g_playersKb[v4][10].wasPressed )
    cmd->buttons |= 0x100ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0xAu);
  if ( g_playersKb[v4][31].active || g_playersKb[v4][31].wasPressed )
    cmd->buttons |= 0x20000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Fu);
  if ( g_playersKb[v4][41].active || g_playersKb[v4][41].wasPressed )
    cmd->buttons |= 0x40000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x29u);
  if ( g_playersKb[v4][42].active || g_playersKb[v4][42].wasPressed )
    cmd->buttons |= 0x10000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x2Au);
  if ( g_playersKb[v4][47].active || g_playersKb[v4][47].wasPressed )
    cmd->buttons |= 0x1000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x2Fu);
  if ( g_playersKb[v4][57].active || g_playersKb[v4][57].wasPressed )
    cmd->buttons |= 0x80000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x39u);
  if ( g_playersKb[v4][33].active || g_playersKb[v4][33].wasPressed )
    cmd->buttons |= 0x800000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x21u);
  if ( g_playersKb[v4][51].active || g_playersKb[v4][51].wasPressed )
    cmd->buttons |= 0x10000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x33u);
  if ( g_playersKb[v4][52].active || g_playersKb[v4][52].wasPressed )
    cmd->buttons |= 0x20000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x34u);
  if ( g_playersKb[v4][56].active || g_playersKb[v4][56].wasPressed )
    cmd->buttons |= 0x20000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x38u);
  if ( LocalClientGlobals->inKillCam )
  {
    if ( g_playersKb[v4][55].active || g_playersKb[v4][55].wasPressed )
      cmd->buttons |= 0x40000000000ui64;
    v8 = 55;
  }
  else
  {
    if ( g_playersKb[v4][48].active || g_playersKb[v4][48].wasPressed )
      cmd->buttons |= 0x40000000000ui64;
    v8 = 48;
  }
  bitarray_base<bitarray<96>>::setBit(outClearButtons, v8);
  CL_Input_UpdateCmdOffHandButtons(localClientNum, cmd, outClearButtons);
  if ( g_playersKb[v4][20].active || g_playersKb[v4][20].wasPressed )
    cmd->buttons |= 0x800ui64;
  if ( g_playersKb[v4][50].active || g_playersKb[v4][50].wasPressed )
    cmd->buttons |= 0x8000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x32u);
}

/*
==============
CL_Input_ContextMountUpdate
==============
*/
void CL_Input_ContextMountUpdate(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v3; 
  int ControllerFromClient; 
  int MountButton; 
  int v7; 
  bool IsActive; 
  bool CanEmitMountButton; 
  bool CanMount; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  ClActiveClient *Client; 
  const dvar_t *v18; 
  ClActiveClient *v19; 
  int integer; 
  __int64 v21; 
  unsigned int downtime; 
  signed int v23; 
  unsigned __int64 buttons; 
  bool v25; 
  int v26; 
  bool MountPullAwayEnabled; 
  cg_t *LocalClientGlobals; 
  bool v29; 
  bool GamepadEnabled; 
  int v32; 

  v3 = localClientNum;
  CG_ContextMount_UpdateAdsButtonPressed(localClientNum, cmd);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  if ( GamepadEnabled )
    MountButton = GamerProfile_GetMountButton(v3);
  else
    MountButton = GamerProfile_GetMountButtonKBM(v3);
  v32 = MountButton;
  v7 = MountButton;
  IsActive = BG_ContextMount_IsActive(&LocalClientGlobals->predictedPlayerState);
  v29 = IsActive;
  CanEmitMountButton = CG_ContextMount_CanEmitMountButton((const LocalClientNum_t)v3, cmd->buttons);
  CanMount = BG_ContextMount_CanMount(&LocalClientGlobals->predictedPlayerState.mountState);
  v11 = v7 - 2;
  v12 = 68;
  v13 = 0i64;
  v14 = 0;
  v15 = 57i64;
  switch ( v11 )
  {
    case 0:
    case 5:
      goto $LN15_98;
    case 1:
      v15 = 25i64;
      if ( !CanEmitMountButton )
        goto $LN15_98;
      v13 = 4i64;
      goto LABEL_33;
    case 2:
      v15 = 32i64;
      if ( !CanEmitMountButton )
        goto $LN15_98;
      v13 = 2i64;
      goto LABEL_33;
    case 3:
      v15 = 24i64;
      v13 = 0x2000i64;
      v12 = 24;
      if ( IsActive || CanEmitMountButton && (cmd->buttons & 0x2000) != 0 )
      {
        v16 = 1;
        v14 = 0;
      }
      else
      {
        v16 = 0;
        v14 = 0;
      }
      goto LABEL_23;
    case 4:
      v13 = 0x2000i64;
      if ( (cmd->buttons & 0x2000) != 0 && (CanMount || IsActive) )
      {
        v16 = 1;
        v15 = 24i64;
        v14 = 1;
      }
      else
      {
        v16 = 0;
        v14 = 1;
        v15 = 24i64;
      }
      goto LABEL_23;
    case 6:
      v14 = 0;
      if ( !IsActive && (!CanMount || (cmd->buttons & 0x80000000000i64) == 0) )
        goto LABEL_22;
      goto LABEL_30;
    case 7:
      v14 = 1;
      if ( (cmd->buttons & 0x80000000000i64) != 0 && (CanMount || IsActive) )
LABEL_30:
        v16 = 1;
      else
LABEL_22:
        v16 = 0;
LABEL_23:
      if ( v16 && (!LocalClientGlobals->mountAdsButtonPressed || v14) )
        cmd->buttons |= 0x200ui64;
      goto LABEL_35;
    case 8:
      v15 = 26i64;
      if ( !CanMount )
        goto $LN15_98;
      v13 = 8i64;
LABEL_33:
      v12 = v15;
$LN15_98:
      v14 = 0;
LABEL_35:
      Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
      v18 = DCONST_DVARINT_mount_controls_mount_button_leniency_ms;
      v19 = Client;
      if ( !DCONST_DVARINT_mount_controls_mount_button_leniency_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mount_controls_mount_button_leniency_ms") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      integer = v18->current.integer;
      v21 = v15;
      downtime = g_playersKb[v3][v15].downtime;
      v23 = com_frameTime - downtime;
      if ( g_playersKb[v3][v21].active || v19->cgameMountRegisterTime < downtime )
      {
        if ( CG_ContextMount_CanEmitMountButton((const LocalClientNum_t)v3, cmd->buttons) )
        {
          cmd->buttons |= 0x80000000000ui64;
          v19->cgameMountRegisterTime = com_frameTime;
        }
        else if ( v23 >= integer )
        {
          v19->cgameMountRegisterTime = com_frameTime;
        }
      }
      if ( v32 == 2 )
      {
        buttons = cmd->buttons;
        if ( (cmd->buttons & 0x200) == 0 )
        {
          v19->isDoubleAdsMountHeld = 0;
          goto LABEL_52;
        }
        v25 = !v19->isDoubleAdsMountHeld;
      }
      else
      {
        if ( v32 != 7 )
          goto LABEL_52;
        buttons = cmd->buttons;
        v25 = (cmd->buttons & 0x200) == 0;
      }
      if ( !v25 )
        cmd->buttons = buttons | 0x80000000000i64;
LABEL_52:
      if ( v14 )
        cmd->stateFlags |= 8u;
      else
        cmd->stateFlags &= ~8u;
      cmd->buttons &= ~v13;
      outClearButtons->contextMountButton = v12;
      if ( v29 )
      {
        v26 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
        if ( GamepadEnabled )
          MountPullAwayEnabled = GamerProfile_GetMountPullAwayEnabled(v26);
        else
          MountPullAwayEnabled = GamerProfile_GetMountPullAwayEnabledKBM(v26);
        if ( MountPullAwayEnabled )
        {
          if ( !GamepadEnabled && CG_ContextMount_HasPlayerElapsedPullAwayDelayKBM((LocalClientNum_t)v3, cmd) )
          {
            cmd->stateFlags &= ~8u;
            cmd->buttons |= 0x80000000000ui64;
          }
        }
        else
        {
          cmd->buttons |= 0x80000000000000ui64;
        }
      }
      return;
    default:
      goto LABEL_35;
  }
}

/*
==============
CL_Input_CycleWeapon
==============
*/
void CL_Input_CycleWeapon(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v4; 
  bool v5; 

  v4 = localClientNum;
  CL_Input_CycleWeapon_Direction(localClientNum, &g_playersKb[v4][39], cmd, 1);
  CL_Input_CycleWeapon_Direction(localClientNum, &g_playersKb[v4][40], cmd, 0);
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)128) )
    return;
  v5 = g_playersKb[v4][46].active && g_playersKb[v4][46].down[0] && g_playersKb[v4][46].down[1];
  if ( g_playersKb[v4][45].active )
  {
    *(_WORD *)&g_playersKb[v4][45].active = 0;
    *(_QWORD *)g_playersKb[v4][45].down = 0i64;
    *(_QWORD *)&g_playersKb[v4][45].downtime = 0i64;
    g_playersKb[v4][45].flags = 0;
    if ( !v5 )
      goto LABEL_12;
  }
  else if ( !v5 )
  {
    return;
  }
  *(_WORD *)&g_playersKb[v4][46].active = 0;
  *(_QWORD *)g_playersKb[v4][46].down = 0i64;
  *(_QWORD *)&g_playersKb[v4][46].downtime = 0i64;
  g_playersKb[v4][46].flags = 0;
LABEL_12:
  if ( CG_CanCycleWeapon(localClientNum) && CG_GetCurrentWeaponSlot(localClientNum) != WEAPON_SLOT_HEAVY )
    CG_CycleWeapon(localClientNum, 1, 1);
}

/*
==============
CL_Input_CycleWeapon_Direction
==============
*/
void CL_Input_CycleWeapon_Direction(LocalClientNum_t localClientNum, kbutton_t *button, usercmd_s *cmd, bool forward)
{
  int v9; 
  int integer; 
  signed int v11; 
  cg_t *LocalClientGlobals; 
  int ControllerFromClient; 
  bool GamepadEnabled; 
  char v17; 
  bool v18; 
  bool v19; 
  int v20; 
  int v21; 
  const dvar_t *v22; 
  char v23; 
  cg_t *v24; 
  int v25; 
  int v26; 
  bool ArmorPlateApplyAllGamepad; 
  const dvar_t *v28; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  ClActiveClient *Client; 
  playerState_s *ps; 

  if ( CG_GameInterface_Input_CycleWeapon_Direction(localClientNum, button, forward) )
    return;
  v9 = 0;
  Client = ClActiveClient::GetClient(localClientNum);
  integer = 0;
  if ( !button->active && !button->wasPressed )
    return;
  v11 = com_frameTime - button->downtime;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBP = &LocalClientGlobals->predictedPlayerState;
  ps = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2847, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbp+730h]
  }
  v18 = v17 && (cmd->buttons & 0x200) != 0;
  if ( GamepadEnabled )
  {
    if ( !v11 && forward )
      Client->weaponForwardHoldStartedInAds = v18;
  }
  else
  {
    v19 = 0;
    if ( forward )
      v19 = v18;
    Client->weaponForwardHoldStartedInAds = v19;
  }
  v20 = 0;
  v21 = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !GamerProfile_GetGamepadEnabled(v21) )
  {
LABEL_31:
    if ( v20 == 3 && forward && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x39u) || Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_piggybackArmorOnNVG, "bg_piggybackArmorOnNVG")) )
      goto LABEL_28;
    goto LABEL_36;
  }
  if ( GamerProfile_IsEquipToggleEnabled(localClientNum) )
  {
    v22 = DCONST_DVARINT_cl_weaponToggleAltModeHoldTime;
    v20 = 2;
    if ( !DCONST_DVARINT_cl_weaponToggleAltModeHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_weaponToggleAltModeHoldTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    integer = v22->current.integer;
    v23 = 1;
    goto LABEL_37;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleAltMode, "bg_enableHoldWeapNextToToggleAltMode") || !Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_underbarrelWeaponEnabled, "bg_underbarrelWeaponEnabled") )
  {
    if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_enableHoldWeapNextToToggleNVG, "bg_enableHoldWeapNextToToggleNVG") )
      v20 = 3;
    goto LABEL_31;
  }
  v20 = 1;
  if ( forward && CG_Weapons_CurrentWeaponCanAltToggle(localClientNum) )
  {
LABEL_28:
    integer = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cl_weaponToggleAltModeHoldTime, "cl_weaponToggleAltModeHoldTime");
    v23 = 1;
    goto LABEL_37;
  }
LABEL_36:
  v23 = 0;
  if ( !CG_NextSlotHasWeapons(localClientNum) )
    goto LABEL_54;
LABEL_37:
  if ( button->active )
  {
    if ( v11 < integer )
      return;
    goto LABEL_42;
  }
  if ( !button->wasPressed )
    return;
  if ( v11 < integer )
  {
LABEL_54:
    *(_WORD *)&button->active = 0;
    *(_QWORD *)button->down = 0i64;
    button->flags = 0;
    *(_QWORD *)&button->downtime = 0i64;
    goto LABEL_55;
  }
LABEL_42:
  *(_WORD *)&button->active = 0;
  *(_QWORD *)button->down = 0i64;
  *(_QWORD *)&button->downtime = 0i64;
  button->flags = 0;
  if ( v23 )
  {
    if ( v20 == 2 )
    {
      CG_Weapons_ToggleEquip(localClientNum);
    }
    else if ( v20 == 1 )
    {
      CG_Weapons_ToggleWeaponAltMode(localClientNum);
    }
    else
    {
      v24 = CG_GetLocalClientGlobals(localClientNum);
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_bg_piggybackArmorOnNVG, "bg_piggybackArmorOnNVG") )
      {
        v25 = CL_Mgr_GetControllerFromClient(localClientNum);
        v26 = CL_Mgr_GetControllerFromClient(localClientNum);
        if ( GamerProfile_GetGamepadEnabled(v26) )
          ArmorPlateApplyAllGamepad = GamerProfile_GetArmorPlateApplyAllGamepad(v25);
        else
          ArmorPlateApplyAllGamepad = GamerProfile_GetArmorPlateApplyAllKBM(v25);
        CG_ServerCmd_NotifyServer(localClientNum, "try_use_heal_slot", ArmorPlateApplyAllGamepad);
      }
      else if ( CG_Weapons_ActionSlotTypeUsageAllowed(v24, ACTIONSLOTTYPE_NIGHTVISION) )
      {
        v24->extraButtons |= 0x10000ui64;
      }
    }
    return;
  }
LABEL_55:
  v28 = DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleHybrid;
  if ( !DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleHybrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enableADSWeapNextToToggleHybrid") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  if ( v28->current.enabled && Client->weaponForwardHoldStartedInAds && CG_Weapons_CurrentWeaponCanHybridToggle(localClientNum) )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    Handler = CgHandler::getHandler(localClientNum);
    if ( BG_HybridToggleIsAllowed(Instance, ps, Handler) )
      cmd->buttons |= 0x200000000ui64;
  }
  else if ( CG_CanCycleWeapon(localClientNum) )
  {
    LOBYTE(v9) = CG_GetCurrentWeaponSlot(localClientNum) == WEAPON_SLOT_HEAVY;
    CG_CycleWeapon(localClientNum, v9, forward);
  }
}

/*
==============
CL_Input_CycleWeapon_GetButtonHeldTime
==============
*/
__int64 CL_Input_CycleWeapon_GetButtonHeldTime(LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( g_playersKb[v1][39].active || g_playersKb[v1][39].wasPressed )
    return com_frameTime - g_playersKb[v1][39].downtime;
  else
    return 0i64;
}

/*
==============
CL_Input_CycleWeapon_ToHeavySlot
==============
*/
void CL_Input_CycleWeapon_ToHeavySlot(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  bool v3; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature((Com_GameMode_Feature)128) )
    return;
  v2 = v1;
  v3 = g_playersKb[v1][46].active && g_playersKb[v2][46].down[0] && g_playersKb[v2][46].down[1];
  if ( g_playersKb[v2][45].active )
  {
    *(_WORD *)&g_playersKb[v2][45].active = 0;
    *(_QWORD *)g_playersKb[v2][45].down = 0i64;
    *(_QWORD *)&g_playersKb[v2][45].downtime = 0i64;
    g_playersKb[v2][45].flags = 0;
    if ( !v3 )
      goto LABEL_12;
  }
  else if ( !v3 )
  {
    return;
  }
  *(_WORD *)&g_playersKb[v2][46].active = 0;
  *(_QWORD *)g_playersKb[v2][46].down = 0i64;
  *(_QWORD *)&g_playersKb[v2][46].downtime = 0i64;
  g_playersKb[v2][46].flags = 0;
LABEL_12:
  if ( CG_CanCycleWeapon((LocalClientNum_t)v1) && CG_GetCurrentWeaponSlot((LocalClientNum_t)v1) != WEAPON_SLOT_HEAVY )
    CG_CycleWeapon((LocalClientNum_t)v1, 1, 1);
}

/*
==============
CL_Input_EndFrame
==============
*/
void CL_Input_EndFrame(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  Client->mouseDx[Client->mouseIndex] = 0;
  Client->mouseDy[Client->mouseIndex] = 0;
}

/*
==============
CL_Input_ExecBinding
==============
*/
void CL_Input_ExecBinding(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  ClActiveClient *Client; 

  if ( CL_IsGameClientActive(localClientNum) && CG_IsFullyInitialized(localClientNum) )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    Client->ExecBinding(Client, kb, key, forceNotify);
  }
}

/*
==============
CL_Input_ExecBindingCommon
==============
*/
void CL_Input_ExecBindingCommon(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  __int64 v4; 
  unsigned int v7; 
  playerState_s *p_predictedPlayerState; 
  ClActiveClient *Client; 
  __int64 v10; 
  kbutton_t *v11; 
  kbutton_t *v12; 
  __int64 v13; 
  kbutton_t *v14; 
  __int64 v15; 
  kbutton_t *v16; 
  int ControllerFromClient; 
  bool v18; 
  int v19; 
  __int64 v20; 
  bool v21; 
  kbutton_t *v22; 
  __int64 v23; 
  bool mustRelease; 
  bool v25; 
  bool v26; 
  bool v27; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  __int64 v31; 
  int v32; 
  bool v33; 
  int v34; 
  kbutton_t *v35; 
  __int64 v36; 
  int v37; 
  int v38; 
  int v39; 
  ClActiveClient *v40; 
  ClActiveClient *v41; 
  unsigned int v42; 
  StanceState *v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  bool v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  ClActiveClient *v55; 
  ClActiveClient *v56; 
  unsigned int v57; 
  StanceState *v58; 
  int v59; 
  ClActiveClient *v60; 
  unsigned int v61; 
  StanceState *v62; 
  int v63; 
  StanceState stance; 
  kbutton_t *v65; 
  int v66; 
  int v67; 
  unsigned int msec; 
  unsigned int v69; 
  unsigned int v70; 
  __int64 v71; 
  ClActiveClient *v72; 
  unsigned int v73; 
  StanceState *v74; 
  StanceState v75; 
  int v76; 
  int v77; 
  bool ArmorPlateApplyAllGamepad; 
  CgWeaponMap *Instance; 
  const Weapon *ViewmodelWeapon; 
  bool v81; 
  __int64 v82; 
  __int64 v83; 
  unsigned int v84; 
  StanceState *v85; 
  int v86; 
  int MountButton; 
  CmdText *v88; 
  int v89; 
  __int64 cmdsize; 
  int v91; 
  scrContext_t *v92; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (clientUIActives[v4].frontEndSceneState[0] || !clientUIActives[v4].cgameInitialized) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4252, ASSERT_TYPE_ASSERT, "(CL_IsGameClientActive( localClientNum ))", (const char *)&queryFormat, "CL_IsGameClientActive( localClientNum )") )
    __debugbreak();
  if ( !CG_IsFullyInitialized((const LocalClientNum_t)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4253, ASSERT_TYPE_ASSERT, "(CG_IsFullyInitialized( localClientNum ))", (const char *)&queryFormat, "CG_IsFullyInitialized( localClientNum )") )
    __debugbreak();
  v7 = com_frameTime;
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->predictedPlayerState;
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  switch ( kb )
  {
    case 1:
      CL_Input_KeyDown(&g_playersKb[v4][19], key, v7);
      Client->SpecNextKeyboard(Client, key);
      return;
    case 2:
      CL_Input_KeyUp(&g_playersKb[v4][19], key, v7);
      return;
    case 3:
      v10 = v4;
      v11 = &g_playersKb[v4][25];
      goto LABEL_15;
    case 4:
      v13 = v4;
      v14 = &g_playersKb[v4][25];
      goto LABEL_19;
    case 6:
      goto $LN27_59;
    case 8:
      v15 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][52], key, v7);
      v16 = &g_playersKb[v4][24];
      goto LABEL_22;
    case 9:
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v18 = !GamerProfile_ToggleHoldBreathEnabled(ControllerFromClient) || !Client->holdingBreath;
      Client->holdingBreath = v18;
      CL_Input_KeyDown(&g_playersKb[v4][20], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][32], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][54], key, v7);
      return;
    case 10:
      v19 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( !GamerProfile_ToggleHoldBreathEnabled(v19) )
        Client->holdingBreath = 0;
      CL_Input_KeyUp(&g_playersKb[v4][20], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][32], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][54], key, v7);
      return;
    case 11:
      v20 = v4;
      CL_Input_KeyDown(&g_playersKb[v4][28], key, v7);
      if ( p_predictedPlayerState->cursorHint == HINT_NONE || p_predictedPlayerState->cursorHintRange )
        goto LABEL_36;
      CL_Input_KeyDown(&g_playersKb[v20][42], key, v7);
      return;
    case 12:
      v20 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][28], key, v7);
LABEL_36:
      CL_Input_KeyUp(&g_playersKb[v20][42], key, v7);
      return;
    case 13:
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      v21 = CL_Input_IsToggleAdsEnabled((const LocalClientNum_t)v4) && !Client->usingAds;
      Client->usingAds = v21;
      CL_Input_KeyDown(&g_playersKb[v4][9], key, v7);
      v22 = &g_playersKb[v4][31];
      goto LABEL_42;
    case 14:
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      if ( !CL_Input_IsToggleAdsEnabled((const LocalClientNum_t)v4) )
        Client->usingAds = 0;
      v23 = v4;
      goto LABEL_47;
    case 15:
      CL_Input_KeyDown(&g_playersKb[v4][15], key, v7);
      return;
    case 16:
      CL_Input_KeyUp(&g_playersKb[v4][15], key, v7);
      return;
    case 17:
    case 249:
      CL_Input_KeyDown(&g_playersKb[v4][58], key, v7);
      CG_ActionSlotDown((LocalClientNum_t)v4, 0);
      return;
    case 18:
    case 250:
      mustRelease = g_playersKb[v4][58].mustRelease;
      CL_Input_KeyUp(&g_playersKb[v4][58], key, v7);
      CG_ActionSlotUp((LocalClientNum_t)v4, 0, mustRelease);
      return;
    case 19:
      CL_Input_KeyDown(&g_playersKb[v4][59], key, v7);
      CG_ActionSlotDown((LocalClientNum_t)v4, 1);
      return;
    case 20:
      v25 = g_playersKb[v4][59].mustRelease;
      CL_Input_KeyUp(&g_playersKb[v4][59], key, v7);
      CG_ActionSlotUp((LocalClientNum_t)v4, 1, v25);
      return;
    case 21:
      CL_Input_KeyDown(&g_playersKb[v4][60], key, v7);
      CG_ActionSlotDown((LocalClientNum_t)v4, 2);
      return;
    case 22:
      v26 = g_playersKb[v4][60].mustRelease;
      CL_Input_KeyUp(&g_playersKb[v4][60], key, v7);
      CG_ActionSlotUp((LocalClientNum_t)v4, 2, v26);
      return;
    case 23:
      CL_Input_KeyDown(&g_playersKb[v4][61], key, v7);
      CG_ActionSlotDown((LocalClientNum_t)v4, 3);
      return;
    case 24:
      v27 = g_playersKb[v4][61].mustRelease;
      CL_Input_KeyUp(&g_playersKb[v4][61], key, v7);
      CG_ActionSlotUp((LocalClientNum_t)v4, 3, v27);
      return;
    case 34:
      v28 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][50], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][51], key, v7);
      if ( CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
      {
        CL_Input_ClearHeldStances((const LocalClientNum_t)v4);
        CL_Input_KeyUp(&g_playersKb[v28][12], key, v7);
        CL_Input_KeyUp(&g_playersKb[v28][10], key, v7);
      }
      return;
    case 35:
      v29 = v4;
      CL_Input_KeyDown(&g_playersKb[v4][25], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][43], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][49], key, v7);
      v30 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( GamerProfile_IsHybridBindedToCmdType(v30, ZOOM_HYBRID_CMD_MELEE) && CL_Input_CanHybridToggle((const LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v29][22], key, v7);
      if ( !GamerProfile_IsZoomBindedToCmdType(v30, ZOOM_HYBRID_CMD_MELEE) )
        goto LABEL_17;
      v12 = &g_playersKb[v29][21];
      goto LABEL_16;
    case 36:
      v31 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][25], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][43], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][49], key, v7);
      goto LABEL_65;
    case 37:
      CL_Input_KeyDown(&g_playersKb[v4][21], key, v7);
      if ( CL_Input_CanHybridToggle((const LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v4][22], key, v7);
      return;
    case 38:
      v31 = v4;
LABEL_65:
      CL_Input_KeyUp(&g_playersKb[v31][21], key, v7);
      CL_Input_KeyUp(&g_playersKb[v31][22], key, v7);
      return;
    case 40:
      v23 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][38], key, v7);
LABEL_47:
      CL_Input_KeyUp(&g_playersKb[v23][9], key, v7);
      CL_Input_KeyUp(&g_playersKb[v23][31], key, v7);
      return;
    case 41:
      CL_Input_KeyDown(&g_playersKb[v4][37], key, v7);
      return;
    case 42:
      CL_Input_KeyUp(&g_playersKb[v4][37], key, v7);
      return;
    case 43:
      v32 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v33 = !GamerProfile_ToggleHoldBreathEnabled(v32) || !Client->holdingBreath;
      v10 = v4;
      Client->holdingBreath = v33;
      CL_Input_KeyDown(&g_playersKb[v4][25], key, v7);
      v11 = &g_playersKb[v4][20];
LABEL_15:
      CL_Input_KeyDown(v11, key, v7);
      v12 = &g_playersKb[v10][43];
LABEL_16:
      CL_Input_KeyDown(v12, key, v7);
LABEL_17:
      Client->ToggleSpecKeyboard(Client, key);
      return;
    case 44:
      v34 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( !GamerProfile_ToggleHoldBreathEnabled(v34) )
        Client->holdingBreath = 0;
      v13 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][25], key, v7);
      v14 = &g_playersKb[v4][20];
LABEL_19:
      CL_Input_KeyUp(v14, key, v7);
      CL_Input_KeyUp(&g_playersKb[v13][43], key, v7);
      return;
    case 45:
      CL_Input_KeyDown(&g_playersKb[v4][32], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][21], key, v7);
      return;
    case 46:
      CL_Input_KeyUp(&g_playersKb[v4][32], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][21], key, v7);
      return;
    case 47:
      v35 = &g_playersKb[v4][2];
      goto LABEL_82;
    case 48:
      CL_Input_KeyUp(&g_playersKb[v4][2], key, v7);
      return;
    case 49:
      v35 = &g_playersKb[v4][3];
LABEL_82:
      CL_Input_KeyDown(v35, key, v7);
      ClActiveClient::GetClient((const LocalClientNum_t)v4)->autoForward = 0;
      return;
    case 50:
      CL_Input_KeyUp(&g_playersKb[v4][3], key, v7);
      return;
    case 51:
      CL_Input_KeyDown(&g_playersKb[v4][6], key, v7);
      return;
    case 52:
      CL_Input_KeyUp(&g_playersKb[v4][6], key, v7);
      return;
    case 53:
      CL_Input_KeyDown(&g_playersKb[v4][7], key, v7);
      return;
    case 54:
      CL_Input_KeyUp(&g_playersKb[v4][7], key, v7);
      return;
    case 55:
      v36 = v4;
      if ( CL_Input_CanKeybindTriggerCopyLoadout((const LocalClientNum_t)v4, kb, key, v7) )
        CL_Input_KeyDown(&g_playersKb[v36][55], key, v7);
      if ( CL_Input_CanKeybindTriggerCutParachute((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v36][56], key, v7);
      if ( CL_Input_CanKeybindTriggerSwitchSeat((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v36][50], key, v7);
      CL_Input_KeyDown(&g_playersKb[v36][13], key, v7);
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      *(_DWORD *)&Client->stanceHeld = 1;
      Client->wasSprinting = 0;
      Client->stanceTime = com_frameTime;
      v37 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v38 = GamerProfile_GetCrouchType(v37) - 1;
      if ( !v38 )
      {
        Client->crouchToggle = 1;
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_auto_sprint_enabled, "auto_sprint_enabled") )
          Client->stanceOnButtonDown = Client->stance;
        if ( !Slide_IsEnabled(p_predictedPlayerState) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u) )
        {
          CL_Input_ToggleStance((LocalClientNum_t)v4, CL_STANCE_CROUCH);
          return;
        }
        goto LABEL_109;
      }
      v39 = v38 - 1;
      if ( !v39 )
      {
        Client->crouchHoldPressed = 1;
        CL_Input_PushHeldStance((const LocalClientNum_t)v4, CL_STANCE_CROUCH);
        if ( !Slide_IsEnabled(p_predictedPlayerState) || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u) )
          return;
LABEL_109:
        Client->wasSprinting = 1;
        return;
      }
      if ( v39 != 1 )
        return;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_auto_sprint_enabled, "auto_sprint_enabled") )
        Client->stanceOnButtonDown = Client->stance;
      if ( Slide_IsEnabled(p_predictedPlayerState) && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u) )
        goto LABEL_109;
      v40 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v41 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v42 = 0;
      v43 = &v41->heldInputs.heldStances[1];
      do
      {
        v42 += 2;
        *(_QWORD *)(v43 - 1) = 0i64;
        v43 += 2;
      }
      while ( v42 < 2 );
LABEL_236:
      v41->heldInputs.stackIndex = 0;
      v40->stance = CL_STANCE_CROUCH;
      *(_WORD *)&v40->stanceHeld = 0;
      return;
    case 56:
      CL_Input_KeyUp(&g_playersKb[v4][55], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][56], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][50], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][13], key, v7);
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      *(_WORD *)&Client->stanceHeld = 0;
      Client->crouchHoldReleased = 0;
      v44 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v45 = GamerProfile_GetCrouchType(v44) - 1;
      if ( !v45 )
        goto LABEL_119;
      v46 = v45 - 1;
      if ( v46 )
      {
        if ( v46 == 1 )
        {
LABEL_119:
          if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u) && (!CL_Input_IsAutoSprintEnabled((const LocalClientNum_t)v4) || Client->stanceOnButtonDown != CL_STANCE_CROUCH) )
            Client->stance = CL_STANCE_CROUCH;
        }
        Client->crouchHoldPressed = 0;
      }
      else
      {
        Client->crouchHoldReleased = Client->crouchHoldPressed;
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u) )
          g_playersKb[v4][32].wasPressed = 1;
        CL_Input_PopHeldStance((const LocalClientNum_t)v4, CL_STANCE_CROUCH);
        Client->crouchHoldPressed = 0;
      }
      return;
    case 57:
      CL_Input_KeyDown(g_playersKb[v4], key, v7);
      return;
    case 58:
      CL_Input_KeyUp(g_playersKb[v4], key, v7);
      return;
    case 59:
      CL_Input_KeyDown(&g_playersKb[v4][1], key, v7);
      return;
    case 60:
      CL_Input_KeyUp(&g_playersKb[v4][1], key, v7);
      return;
    case 61:
      CL_Input_KeyDown(&g_playersKb[v4][4], key, v7);
      return;
    case 62:
      CL_Input_KeyUp(&g_playersKb[v4][4], key, v7);
      return;
    case 63:
      CL_Input_KeyDown(&g_playersKb[v4][5], key, v7);
      return;
    case 64:
      CL_Input_KeyUp(&g_playersKb[v4][5], key, v7);
      return;
    case 65:
      CL_Input_KeyDown(&g_playersKb[v4][8], key, v7);
      return;
    case 66:
      CL_Input_KeyUp(&g_playersKb[v4][8], key, v7);
      return;
    case 67:
      v47 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v48 = !GamerProfile_ToggleHoldBreathEnabled(v47) || !Client->holdingBreath;
      Client->holdingBreath = v48;
      CL_Input_KeyDown(&g_playersKb[v4][20], key, v7);
      return;
    case 68:
      v49 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( !GamerProfile_ToggleHoldBreathEnabled(v49) )
        Client->holdingBreath = 0;
      CL_Input_KeyUp(&g_playersKb[v4][20], key, v7);
      return;
    case 69:
      CL_Input_KeyDown(&g_playersKb[v4][26], key, v7);
      return;
    case 70:
      CL_Input_KeyUp(&g_playersKb[v4][26], key, v7);
      return;
    case 71:
      CL_Input_KeyDown(&g_playersKb[v4][27], key, v7);
      return;
    case 72:
      CL_Input_KeyUp(&g_playersKb[v4][27], key, v7);
      return;
    case 73:
      v50 = v4;
      v51 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( !GamerProfile_GetGamepadEnabled(v51) )
        CL_Input_KeyDown(&g_playersKb[v50][52], key, v7);
      CL_Input_KeyDown(&g_playersKb[v50][13], key, v7);
      Client->standToProne = 1;
      Client->stanceTime = -1;
      v52 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v53 = GamerProfile_GetProneType(v52) - 1;
      if ( v53 )
      {
        v54 = v53 - 1;
        if ( v54 )
        {
          if ( v54 == 1 )
          {
            v55 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
            v56 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
            v57 = 0;
            v58 = &v56->heldInputs.heldStances[1];
            do
            {
              v57 += 2;
              *(_QWORD *)(v58 - 1) = 0i64;
              v58 += 2;
            }
            while ( v57 < 2 );
            v56->heldInputs.stackIndex = 0;
            v55->stance = CL_STANCE_PRONE;
            *(_WORD *)&v55->stanceHeld = 0;
            Client->stanceHeld = 1;
          }
        }
        else
        {
          CL_Input_PushHeldStance((const LocalClientNum_t)v4, CL_STANCE_PRONE);
        }
      }
      else
      {
        CL_Input_ToggleStance((LocalClientNum_t)v4, CL_STANCE_PRONE);
        Client->stanceHeld = Client->stance == CL_STANCE_PRONE;
      }
      return;
    case 74:
      CL_Input_KeyUp(&g_playersKb[v4][52], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][13], key, v7);
      v59 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( GamerProfile_GetProneType(v59) == 2 )
        CL_Input_PopHeldStance((const LocalClientNum_t)v4, CL_STANCE_PRONE);
      return;
    case 75:
      g_playersKb[v4][14].active = 1;
      return;
    case 77:
      if ( CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
      {
        Client->usingAds = !Client->usingAds;
        v22 = &g_playersKb[v4][31];
LABEL_42:
        CL_Input_KeyDown(v22, key, v7);
        Client->SpecPrevKeyboard(Client, key);
      }
      return;
    case 78:
      CL_Input_KeyUp(&g_playersKb[v4][31], key, v7);
      return;
    case 79:
      CL_Input_ClearHeldStances((const LocalClientNum_t)v4);
      CL_Input_KeyDown(&g_playersKb[v4][32], key, v7);
      return;
    case 80:
      CL_Input_KeyUp(&g_playersKb[v4][32], key, v7);
      return;
    case 81:
      CL_Input_ClearHeldStances((const LocalClientNum_t)v4);
      CL_Input_KeyDown(&g_playersKb[v4][33], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][32], key, v7);
      return;
    case 82:
      CL_Input_KeyUp(&g_playersKb[v4][33], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][32], key, v7);
      return;
    case 87:
      v83 = v4;
      CL_Input_KeyDown(&g_playersKb[v4][48], key, v7);
      if ( CG_CanCycleWeapon((LocalClientNum_t)v4) )
        CL_Input_KeyDown(&g_playersKb[v83][40], key, v7);
      if ( BGVehicles::IsRemoteDrivingVehicle(p_predictedPlayerState) )
        CL_Input_KeyDown(&g_playersKb[v83][44], key, v7);
      return;
    case 88:
      CL_Input_KeyUp(&g_playersKb[v4][48], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][40], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][44], key, v7);
      return;
    case 93:
      v82 = v4;
      CL_Input_KeyDown(&g_playersKb[v4][48], key, v7);
      if ( CG_CanCycleWeapon((LocalClientNum_t)v4) && (!Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleVariableZoom, "bg_enableADSWeapNextToToggleVariableZoom") || !CG_CanChangeZoomLevel((LocalClientNum_t)v4)) )
        CL_Input_KeyDown(&g_playersKb[v82][39], key, v7);
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_bg_enableADSWeapNextToToggleVariableZoom, "bg_enableADSWeapNextToToggleVariableZoom") )
        CL_Input_KeyDown(&g_playersKb[v82][21], key, v7);
      if ( BGVehicles::IsRemoteDrivingVehicle(p_predictedPlayerState) )
        CL_Input_KeyDown(&g_playersKb[v82][44], key, v7);
      if ( CL_Input_CanKeybindTriggerCopyLoadout((const LocalClientNum_t)v4, kb, key, v7) )
        CL_Input_KeyDown(&g_playersKb[v82][55], key, v7);
      return;
    case 94:
      CL_Input_KeyUp(&g_playersKb[v4][48], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][39], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][44], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][21], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][55], key, v7);
      return;
    case 95:
      CL_Input_KeyDown(&g_playersKb[v4][45], key, v7);
      CL_Input_KeyDown(&g_playersKb[v4][53], key, v7);
      return;
    case 96:
      CL_Input_KeyUp(&g_playersKb[v4][45], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][53], key, v7);
      return;
    case 99:
      CL_Input_ClearHeldStances((const LocalClientNum_t)v4);
      CL_Input_KeyDown(&g_playersKb[v4][36], key, v7);
      return;
    case 100:
      CL_Input_KeyUp(&g_playersKb[v4][36], key, v7);
      Client->requireSlideRelease = 0;
      return;
    case 107:
      v86 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      if ( GamerProfile_GetGamepadEnabled(v86) )
        MountButton = GamerProfile_GetMountButton(v4);
      else
        MountButton = GamerProfile_GetMountButtonKBM(v4);
      if ( (unsigned int)(MountButton - 8) <= 1 )
        CL_Input_KeyDown(&g_playersKb[v4][57], key, v7);
      return;
    case 108:
      CL_Input_KeyUp(&g_playersKb[v4][57], key, v7);
      return;
    case 109:
      CL_Input_KeyDown(&g_playersKb[v4][35], key, v7);
      return;
    case 110:
      CL_Input_KeyUp(&g_playersKb[v4][35], key, v7);
      return;
    case 113:
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      v60 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v61 = 0;
      v62 = &v60->heldInputs.heldStances[1];
      do
      {
        v61 += 2;
        *(_QWORD *)(v62 - 1) = 0i64;
        v62 += 2;
      }
      while ( v61 < 2 );
      v60->heldInputs.stackIndex = 0;
      v63 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      *(_DWORD *)&Client->stanceHeld = 0;
      stance = Client->stance;
      Client->stanceTime = -1;
      switch ( stance )
      {
        case CL_STANCE_STAND:
          if ( GamerProfile_GetStanceUpJump(v63) )
            CL_Input_KeyDown(&g_playersKb[v4][10], key, v7);
          return;
        case CL_STANCE_CROUCH:
          Client->stance = CL_STANCE_STAND;
          return;
        case CL_STANCE_PRONE:
LABEL_196:
          Client->stance = CL_STANCE_CROUCH;
          return;
      }
      if ( (unsigned int)(stance - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4081, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD )", (const char *)&queryFormat, "cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD") )
        goto LABEL_168;
      return;
    case 114:
      v65 = &g_playersKb[v4][10];
      g_lastInputTimeForAnyLocalPlayer = com_frameTime;
      v66 = v65->down[0];
      if ( v65->down[0] == key )
      {
        v65->down[0] = 0;
        v67 = g_playersKb[v4][10].down[1];
      }
      else
      {
        if ( g_playersKb[v4][10].down[1] != key )
          return;
        v67 = 0;
        g_playersKb[v4][10].down[1] = 0;
        if ( v66 )
          return;
      }
      if ( !v67 )
      {
        msec = g_playersKb[v4][10].msec;
        if ( v7 )
        {
          v69 = msec - g_playersKb[v4][10].downtime;
          g_playersKb[v4][10].active = 0;
          g_playersKb[v4][10].msec = v7 + v69;
        }
        else
        {
          v70 = frame_msec >> 1;
          g_playersKb[v4][10].active = 0;
          g_playersKb[v4][10].msec = v70 + msec;
        }
        g_playersKb[v4][10].mustRelease = 0;
      }
      return;
    case 115:
      v71 = v4;
      if ( CL_Input_CanKeybindTriggerCopyLoadout((const LocalClientNum_t)v4, kb, key, v7) )
        CL_Input_KeyDown(&g_playersKb[v71][55], key, v7);
      if ( CL_Input_CanKeybindTriggerCutParachute((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v71][56], key, v7);
      if ( CL_Input_CanKeybindTriggerSwitchSeat((const LocalClientNum_t)v4, kb) )
        CL_Input_KeyDown(&g_playersKb[v71][50], key, v7);
      if ( !CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        return;
      v72 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v73 = 0;
      v74 = &v72->heldInputs.heldStances[1];
      do
      {
        v73 += 2;
        *(_QWORD *)(v74 - 1) = 0i64;
        v74 += 2;
      }
      while ( v73 < 2 );
      v72->heldInputs.stackIndex = 0;
      v75 = Client->stance;
      *(_DWORD *)&Client->stanceHeld = 0;
      Client->stanceTime = -1;
      if ( v75 == CL_STANCE_STAND )
        goto LABEL_196;
      if ( v75 == CL_STANCE_CROUCH )
      {
        Client->stance = CL_STANCE_PRONE;
      }
      else if ( (unsigned int)(v75 - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4048, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_PRONE || cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD )", (const char *)&queryFormat, "cl->stance == CL_STANCE_PRONE || cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD") )
      {
LABEL_168:
        __debugbreak();
      }
      return;
    case 116:
      CL_Input_KeyUp(&g_playersKb[v4][55], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][56], key, v7);
      CL_Input_KeyUp(&g_playersKb[v4][50], key, v7);
      return;
    case 122:
      CG_Weapons_ToggleWeaponAltMode((LocalClientNum_t)v4);
      return;
    case 126:
      v40 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v41 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
      v84 = 0;
      v85 = &v41->heldInputs.heldStances[1];
      do
      {
        v84 += 2;
        *(_QWORD *)(v85 - 1) = 0i64;
        v85 += 2;
      }
      while ( v84 < 2 );
      goto LABEL_236;
    case 127:
      if ( CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        Client->usingAds = !Client->usingAds;
      return;
    case 128:
      if ( CL_Input_IsValidStateForInput((LocalClientNum_t)v4) )
        Client->usingAds = 0;
      return;
    case 134:
      CG_WeaponInspect((LocalClientNum_t)v4);
      return;
    case 139:
      CG_SelectNthPrimaryWeapon((LocalClientNum_t)v4, 0);
      return;
    case 140:
      CG_SelectNthPrimaryWeapon((LocalClientNum_t)v4, 1);
      return;
    case 141:
      CG_SelectNthPrimaryWeapon((LocalClientNum_t)v4, 2);
      return;
    case 142:
    case 144:
    case 145:
      goto $LN155_0;
    case 143:
      if ( CG_GameInterface_PlayingBR() )
      {
        v76 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        v77 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        if ( GamerProfile_GetGamepadEnabled(v77) )
          ArmorPlateApplyAllGamepad = GamerProfile_GetArmorPlateApplyAllGamepad(v76);
        else
          ArmorPlateApplyAllGamepad = GamerProfile_GetArmorPlateApplyAllKBM(v76);
        CG_ServerCmd_NotifyServer((const LocalClientNum_t)v4, "try_use_heal_slot", ArmorPlateApplyAllGamepad);
      }
$LN155_0:
      CG_KillstreakSlotDown((LocalClientNum_t)v4, kb - 142);
      return;
    case 146:
      CG_NightVisionDown((LocalClientNum_t)v4);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
      ViewmodelWeapon = BG_GetViewmodelWeapon(Instance, p_predictedPlayerState);
      v81 = BG_UsingAlternate(p_predictedPlayerState);
      if ( BG_IsWeaponHybridThermal(p_predictedPlayerState, ViewmodelWeapon, v81) && CL_Input_CanHybridToggle((const LocalClientNum_t)v4) )
      {
        CL_Input_KeyDown(&g_playersKb[v4][22], key, v7);
        CL_Input_KeyUp(&g_playersKb[v4][22], key, v7);
      }
      return;
    case 152:
      v88 = &s_cmd_textArray[v4];
      if ( !v88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
        __debugbreak();
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      v89 = strlen_noncrt("screenshotJpeg\n");
      cmdsize = v88->cmdsize;
      v91 = v89;
      if ( v89 + (int)cmdsize < v88->maxsize )
      {
        memcpy_noncrt(&v88->data[cmdsize], "screenshotJpeg\n", v89 + 1);
        v88->cmdsize += v91;
        v92 = ScriptContext_Server();
        Scr_MonitorCommand(v92, "screenshotJpeg\n");
      }
      else
      {
        Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "screenshotJpeg\n");
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
      return;
    case 236:
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_autoForwardEnable, "autoForwardEnable") )
        Client->autoForward = !Client->autoForward;
      return;
    case 252:
      CL_Input_KeyUp(&g_playersKb[v4][65], key, v7);
$LN27_59:
      v15 = v4;
      CL_Input_KeyUp(&g_playersKb[v4][51], key, v7);
      v16 = &g_playersKb[v4][23];
LABEL_22:
      CL_Input_KeyUp(v16, key, v7);
      CL_Input_KeyUp(&g_playersKb[v15][46], key, v7);
      return;
    case 254:
      CL_Input_KeyUp(&g_playersKb[v4][66], key, v7);
      return;
    default:
      return;
  }
}

/*
==============
CL_Input_ExecBindingFrontEnd
==============
*/
void CL_Input_ExecBindingFrontEnd(LocalClientNum_t localClientNum, int kb, int key, int forceNotify)
{
  __int64 v4; 
  unsigned int v7; 
  kbutton_t *v8; 
  int v10; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( clientUIActives[v4].connectionState < CA_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4128, ASSERT_TYPE_ASSERT, "(CL_Input_IsValidStateForInput( localClientNum ))", (const char *)&queryFormat, "CL_Input_IsValidStateForInput( localClientNum )") )
    __debugbreak();
  v7 = com_frameTime;
  switch ( kb )
  {
    case 1:
      CL_Input_KeyDown(&g_playersKb[v4][19], key, com_frameTime);
      return;
    case 2:
      v8 = &g_playersKb[0][19];
      goto LABEL_28;
    case 5:
      goto $LN14_131;
    case 6:
      goto $LN16_88;
    case 7:
      CL_Input_KeyDown(&g_playersKb[v4][24], key, com_frameTime);
      return;
    case 8:
      v8 = &g_playersKb[0][24];
      goto LABEL_28;
    case 13:
      CL_Input_KeyDown(&g_playersKb[v4][31], key, com_frameTime);
      return;
    case 14:
      v8 = &g_playersKb[0][31];
      goto LABEL_28;
    case 47:
      CL_Input_KeyDown(&g_playersKb[v4][2], key, com_frameTime);
      return;
    case 48:
      v8 = &g_playersKb[0][2];
      goto LABEL_28;
    case 49:
      CL_Input_KeyDown(&g_playersKb[v4][3], key, com_frameTime);
      return;
    case 50:
      v8 = &g_playersKb[0][3];
      goto LABEL_28;
    case 51:
      CL_Input_KeyDown(&g_playersKb[v4][6], key, com_frameTime);
      return;
    case 52:
      v8 = &g_playersKb[0][6];
      goto LABEL_28;
    case 53:
      CL_Input_KeyDown(&g_playersKb[v4][7], key, com_frameTime);
      return;
    case 54:
      v8 = &g_playersKb[0][7];
      goto LABEL_28;
    case 251:
      CL_Input_KeyDown(&g_playersKb[v4][65], key, com_frameTime);
$LN14_131:
      CL_Input_KeyDown(&g_playersKb[v4][23], key, v7);
      return;
    case 252:
      CL_Input_KeyUp(&g_playersKb[v4][65], key, com_frameTime);
$LN16_88:
      v8 = &g_playersKb[0][23];
      goto LABEL_28;
    case 253:
      CL_Input_KeyDown(&g_playersKb[v4][66], key, com_frameTime);
      return;
    case 254:
      v8 = &g_playersKb[0][66];
LABEL_28:
      CL_Input_KeyUp(&v8[68 * v4], key, v7);
      break;
    default:
      return;
  }
}

/*
==============
CL_Input_FinishCmdButtons
==============
*/
void CL_Input_FinishCmdButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v5; 
  int ControllerFromClient; 
  int v9; 
  cg_t *LocalClientGlobals; 
  ClActiveClient *Client; 
  int v12; 
  const dvar_t *v13; 
  cg_t *v14; 
  const playerState_s *p_predictedPlayerState; 
  __int64 v16; 
  signed int v17; 
  cg_t *v18; 
  int v19; 
  int v20; 
  unsigned int lastSprintEnd; 
  int v24; 
  int lastSprintStart; 
  int v26; 
  bool GamepadEnabled; 
  int v28; 
  bool v29; 
  bool v30; 
  cg_t *v31; 
  __int64 v32; 
  __int64 v34; 
  workerTrace_t outResult; 

  v5 = localClientNum;
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3325, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v34) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v34, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v5].frontEndSceneState[0] == 1 )
  {
    if ( CL_GetLocalClientUIGlobals((const LocalClientNum_t)v5)->lastInputType )
      goto LABEL_12;
  }
  else
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
    if ( !GamerProfile_GetGamepadEnabled(ControllerFromClient) )
      goto LABEL_12;
  }
  cmd->buttons |= 0x8000000000000ui64;
LABEL_12:
  v9 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  if ( !GamerProfile_GetGamepadEnabled(v9) )
    CL_Keys_IsCommandBound((LocalClientNum_t)v5, "+specialmove");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v5);
  cmd->buttons |= Client->cgameExtraButtons;
  cmd->stateFlags = Client->cgameUserCmdStateFlags;
  CL_Input_ContextMountUpdate((LocalClientNum_t)v5, cmd, outClearButtons);
  CG_Ladder_InputUpdate((LocalClientNum_t)v5, cmd);
  v12 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  if ( !GamerProfile_GetGamepadEnabled(v12) )
    goto LABEL_57;
  v13 = DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint;
  if ( !DCONST_DVARMPBOOL_enableGamepadSingleTapSuperSprint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableGamepadSingleTapSuperSprint") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
LABEL_57:
    v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    p_predictedPlayerState = &v14->predictedPlayerState;
    if ( v14 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3169, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !BG_IsSuperSprinting(p_predictedPlayerState) )
    {
      v16 = v5;
      if ( g_playersKb[v5][32].active || g_playersKb[v16][32].wasPressed )
      {
        v17 = com_frameTime - g_playersKb[v16][32].downtime;
        if ( v17 > -1 )
        {
          v18 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
          v19 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
          if ( GamerProfile_GetGamepadEnabled(v19) || (v20 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5), !GamerProfile_GetHoldSprint(v20)) )
          {
            v24 = v18->predictedPlayerState.serverTime - v17;
            lastSprintStart = v18->predictedPlayerState.sprintState.lastSprintStart;
            if ( !CL_Input_IsSprinting((const LocalClientNum_t)v5) || v24 <= lastSprintStart )
              goto LABEL_34;
          }
          else
          {
            lastSprintEnd = v18->predictedPlayerState.sprintState.lastSprintEnd;
            *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_superSprintTriggerWindowWithHoldToSprint, "cl_superSprintTriggerWindowWithHoldToSprint");
            __asm
            {
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, eax
              vcomiss xmm1, xmm0
            }
            if ( v18->predictedPlayerState.serverTime >= lastSprintEnd && !CL_Input_IsAutoSprintEnabled((const LocalClientNum_t)v5) )
              goto LABEL_34;
          }
          Client->triggerSuperSprint = 1;
        }
      }
    }
  }
LABEL_34:
  if ( Client->triggerSuperSprint )
    goto LABEL_38;
  v26 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(v26);
  v28 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  v29 = GamerProfile_GetAutoSprintGamepad(v28) == 2;
  v30 = GamerProfile_GetAutoSprintKBM(v28) == 2;
  if ( GamepadEnabled )
    v30 = v29;
  if ( v30 )
  {
LABEL_38:
    cmd->buttons |= 0x800000000000ui64;
    v31 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v31->predictedPlayerState.pm_flags, ACTIVE, 0x14u) )
    {
      if ( v31->predictedPlayerState.sprintState.lastSuperSprintEnd >= v31->predictedPlayerState.sprintState.lastSuperSprintStart )
        goto LABEL_42;
      cmd->buttons |= 2ui64;
    }
    Client->triggerSuperSprint = 0;
  }
LABEL_42:
  if ( Client->detonateOffhandPrimary )
  {
    v32 = 0x200000000001000i64;
LABEL_46:
    cmd->buttons |= v32;
    *(_WORD *)&Client->detonateOffhandPrimary = 0;
    goto LABEL_47;
  }
  if ( Client->detonateOffhandSecondary )
  {
    v32 = 0x200000000002000i64;
    goto LABEL_46;
  }
LABEL_47:
  if ( GamerProfile_IsEquipToggleEnabled(v5) && LocalClientGlobals->equipSelectInAlt && (cmd->buttons & 0x1000) != 0 )
    cmd->buttons = cmd->buttons & 0xFFFFFFFFFFFFCFFFui64 | 0x2000;
  cmd->buttons &= ~0x800000000ui64;
  if ( CG_PlayerSecondaryCollision_GetBroadphaseWorkerResult((const LocalClientNum_t)v5, &outResult) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+108h+outResult.trace.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
    if ( outResult.trace.startsolid || outResult.trace.allsolid )
      cmd->buttons |= 0x800000000ui64;
  }
}

/*
==============
CL_Input_GamepadAccessibility
==============
*/
void CL_Input_GamepadAccessibility(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v2; 
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v9; 
  int v13; 
  unsigned __int64 buttons; 
  __int64 v15; 
  AmmoStore result; 
  AmmoStore r_clipIndex; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1650, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !ClActiveClient::GetClient((const LocalClientNum_t)v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1653, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v4 = v2;
  if ( g_playersKb[v2][38].active || g_playersKb[v4][38].wasPressed )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1366, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_Skydive_IsSkydiving(p_predictedPlayerState) || !BG_Ladder_IsDualWieldingAllowed(p_predictedPlayerState) || p_predictedPlayerState->weapCommon.lastWeaponHand != WEAPON_HAND_LEFT )
      goto LABEL_26;
    if ( p_predictedPlayerState->weapState[1].weaponState == 16 )
    {
      cmd->buttons |= 0x20000ui64;
    }
    else
    {
      if ( p_predictedPlayerState->weapState[0].weaponState != 16 )
      {
        if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cl_accessibilityTurboEnabled, "cl_accessibilityTurboEnabled") && !g_playersKb[v4][38].wasPressed )
          goto LABEL_26;
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, p_predictedPlayerState);
        v9 = BG_UsingAlternate(p_predictedPlayerState);
        _RAX = BG_AmmoStoreForWeapon(&result, CurrentWeaponForPlayer, v9);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups ymmword ptr [rsp+0F8h+r_clipIndex.weapon.weaponIdx], ymm0
          vmovups ymm1, ymmword ptr [rax+20h]
          vmovups ymmword ptr [rsp+0F8h+r_clipIndex.weapon.attachmentVariationIndices+5], ymm1
        }
        if ( BG_GetAmmoInClipForClipType(p_predictedPlayerState, &r_clipIndex, WEAPON_HAND_LEFT) )
        {
          v13 = BG_ShotLimitReached(p_predictedPlayerState, CurrentWeaponForPlayer, WEAPON_HAND_LEFT);
          buttons = cmd->buttons;
          if ( v13 )
            v15 = buttons | 1;
          else
            v15 = buttons | 0x20000;
          cmd->buttons = v15;
          goto LABEL_26;
        }
      }
      cmd->buttons |= 1ui64;
    }
LABEL_26:
    g_playersKb[v4][38].wasPressed = 0;
  }
}

/*
==============
CL_Input_GetClientLookInversion
==============
*/
float CL_Input_GetClientLookInversion(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v3; 
  bool GamepadEnabled; 
  bool v5; 
  int InvertedVerticalLookKBM; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  v3 = CL_Mgr_GetControllerFromClient(localClientNum);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(v3);
  v5 = CgVehicleSystem::PhysicsIsInFlyingVehicle(localClientNum);
  if ( !GamepadEnabled )
  {
    InvertedVerticalLookKBM = GamerProfile_GetInvertedVerticalLookKBM(ControllerFromClient);
    if ( InvertedVerticalLookKBM == 2 || v5 && InvertedVerticalLookKBM == 1 )
      goto LABEL_5;
LABEL_9:
    __asm { vmovss  xmm0, cs:__real@bf800000 }
    return *(float *)&_XMM0;
  }
  if ( !GamerProfile_GetInvertedVerticalLookGamepad(ControllerFromClient) && (!v5 || !GamerProfile_GetInvertedVerticalLookFlyingGamepad(ControllerFromClient)) )
    goto LABEL_9;
LABEL_5:
  __asm { vmovss  xmm0, cs:__real@3f800000 }
  return *(float *)&_XMM0;
}

/*
==============
CL_Input_GetCurrentMousePosition
==============
*/
void CL_Input_GetCurrentMousePosition(float *outX, float *outY)
{
  ;
}

/*
==============
CL_Input_GetMouseMovement
==============
*/
void CL_Input_GetMouseMovement(LocalClientNum_t localClientNum, float *mx, float *my)
{
  ClActiveClient *Client; 
  const dvar_t *v15; 
  unsigned __int64 v16; 
  const dvar_t *v17; 
  int ControllerFromClient; 
  char v32; 
  char v33; 
  int v83; 
  float *v90[3]; 
  char v93; 
  void *retaddr; 
  float *__formal; 
  float *v96; 
  float *v97; 

  _RAX = &retaddr;
  v90[1] = (float *)-2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps [rsp+0F8h+var_88], xmm9
    vmovaps [rsp+0F8h+var_98], xmm10
  }
  _R14 = my;
  _R15 = mx;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1725, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  Client = ClActiveClient::GetClient(localClientNum);
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1728, ASSERT_TYPE_ASSERT, "(mx)", (const char *)&queryFormat, "mx") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1729, ASSERT_TYPE_ASSERT, "(my)", (const char *)&queryFormat, "my") )
    __debugbreak();
  if ( ((unsigned __int8)&g_checkGetMouseMovementCalledOnce & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_checkGetMouseMovementCalledOnce) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_checkGetMouseMovementCalledOnce) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1733, ASSERT_TYPE_ASSERT, "(Sys_InterlockedIncrement( &g_checkGetMouseMovementCalledOnce ) == 1)", "%s\n\tCL_Input_GetMouseMovement() called already in the same frame", "Sys_InterlockedIncrement( &g_checkGetMouseMovementCalledOnce ) == 1") )
    __debugbreak();
  v15 = DCONST_DVARBOOL_cl_inputVelocityLogging;
  if ( !DCONST_DVARBOOL_cl_inputVelocityLogging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_inputVelocityLogging") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
  {
    if ( dword_150AC3094 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_150AC3094);
      if ( dword_150AC3094 == -1 )
      {
        timeLast = Sys_Microseconds();
        j__Init_thread_footer(&dword_150AC3094);
      }
    }
    v16 = Sys_Microseconds();
    v17 = DCONST_DVARFLT_cl_inputVelocityLogging_mouseMovePerMicro;
    if ( !DCONST_DVARFLT_cl_inputVelocityLogging_mouseMovePerMicro && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_inputVelocityLogging_mouseMovePerMicro") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (__int64)(v16 - timeLast) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, dword ptr [rbx+28h]
      vcvttss2si ecx, xmm0
    }
    Client->mouseDx[Client->mouseIndex] = _ECX;
    timeLast = v16;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( GamerProfile_GetMouseSmoothing(ControllerFromClient) )
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm0, xmm0, cs:__real@3f000000
      vmovss  dword ptr [r15], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vmovss  dword ptr [r14], xmm1
    }
    Client->mouseIndex ^= 1u;
  }
  else
  {
    __asm
    {
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+rax*4+10h]
      vmovss  dword ptr [r15], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, dword ptr [rbp+rax*4+18h]
      vmovss  dword ptr [r14], xmm1
    }
  }
  *(double *)&_XMM0 = GamerProfile_GetMouseFilter(ControllerFromClient);
  __asm
  {
    vmulss  xmm7, xmm0, cs:__real@3d4ccccd
    vxorps  xmm8, xmm8, xmm8
    vcomiss xmm7, xmm8
  }
  if ( !(v32 | v33) )
  {
    _RSI = Client->weightedDy;
    _RDI = Client->weightedDx;
    std::_Ptr_move_cat<float,float>(&__formal, &v97);
    memmove_0(&Client->weightedDx[1], Client->weightedDx, 0x1Cui64);
    std::_Ptr_move_cat<float,float>(&v96, v90);
    memmove_0(&Client->weightedDy[1], Client->weightedDy, 0x1Cui64);
    __asm
    {
      vmovss  xmm1, dword ptr [r15]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm4, dword ptr [r14]
      vmovss  dword ptr [rsi], xmm4
      vmovss  xmm9, cs:__real@3f800000
      vaddss  xmm2, xmm7, xmm9
      vmulss  xmm0, xmm7, dword ptr [rbp+24h]
      vaddss  xmm3, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbp+44h]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm7, xmm7
      vaddss  xmm2, xmm2, xmm5
      vmulss  xmm0, xmm5, dword ptr [rbp+28h]
      vaddss  xmm3, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+48h]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm5, xmm7
      vaddss  xmm2, xmm2, xmm5
      vmulss  xmm0, xmm5, dword ptr [rbp+2Ch]
      vaddss  xmm3, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+4Ch]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm5, xmm7
      vaddss  xmm2, xmm2, xmm5
      vmulss  xmm0, xmm5, dword ptr [rbp+30h]
      vaddss  xmm3, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+50h]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm5, xmm7
      vaddss  xmm2, xmm2, xmm5
      vmulss  xmm0, xmm5, dword ptr [rbp+34h]
      vaddss  xmm3, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+54h]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm5, xmm5, xmm7
      vaddss  xmm6, xmm2, xmm5
      vmulss  xmm0, xmm5, dword ptr [rbp+38h]
      vaddss  xmm3, xmm3, xmm0
      vmulss  xmm1, xmm5, dword ptr [rbp+58h]
      vaddss  xmm4, xmm4, xmm1
      vmulss  xmm2, xmm5, xmm7
      vaddss  xmm6, xmm6, xmm2
      vmulss  xmm0, xmm2, dword ptr [rbp+3Ch]
      vaddss  xmm7, xmm3, xmm0
      vmulss  xmm1, xmm2, dword ptr [rbp+5Ch]
      vaddss  xmm10, xmm4, xmm1
      vcomiss xmm6, xmm8
    }
    if ( v32 | v33 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1789, ASSERT_TYPE_ASSERT, "(weightSum > 0)", (const char *)&queryFormat, "weightSum > 0") )
      __debugbreak();
    __asm
    {
      vdivss  xmm1, xmm9, xmm6
      vmulss  xmm0, xmm1, xmm7
      vmovss  dword ptr [r15], xmm0
      vmulss  xmm1, xmm1, xmm10
      vmovss  dword ptr [r14], xmm1
    }
  }
  v83 = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamerProfile_GetGamepadEnabled(v83) )
  {
    *_R15 = 0.0;
    *_R14 = 0.0;
  }
  _R11 = &v93;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
  }
}

/*
==============
CL_Input_GetSensitivityScale
==============
*/
float CL_Input_GetSensitivityScale(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  CgWeaponMap *Instance; 
  char v17; 
  bool v18; 
  bool v19; 
  const dvar_t *v21; 
  int ControllerFromClient; 
  int v24; 
  int AdsSensitivityMultiplierTiming; 
  float outSensitivity; 

  _RSI = ClActiveClient::GetClient(localClientNum);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1822, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = DCONST_DVARBOOL_cl_legacyMouseSensitivity;
  _RBP = LocalClientGlobals;
  if ( !DCONST_DVARBOOL_cl_legacyMouseSensitivity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_legacyMouseSensitivity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_38], xmm6
      vmovaps [rsp+0A8h+var_48], xmm7
      vmovaps [rsp+0A8h+var_58], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps xmm6, xmm8
      vmovaps [rsp+0A8h+var_68], xmm9
    }
    Instance = CgWeaponMap::GetInstance(localClientNum);
    *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(Instance, &_RBP->predictedPlayerState);
    __asm
    {
      vcomiss xmm0, xmm8
      vxorps  xmm7, xmm7, xmm7
    }
    v18 = !v17;
    v19 = (_RBP->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0;
    __asm
    {
      vcomiss xmm0, xmm7
      vmovaps xmm9, xmm0
    }
    if ( (_RBP->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 )
    {
      v21 = DVARBOOL_cl_fovAdsMouseSensitivityScaleImmediately;
      if ( !DVARBOOL_cl_fovAdsMouseSensitivityScaleImmediately && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_fovAdsMouseSensitivityScaleImmediately") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
        goto LABEL_16;
    }
    if ( v18 || v19 )
    {
LABEL_16:
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+10Ch]
        vminss  xmm6, xmm0, xmm8
      }
    }
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    __asm { vmovss  [rsp+0A8h+outSensitivity], xmm7 }
    v24 = ControllerFromClient;
    if ( !CL_Input_UseHighLowZoomSensitivity(localClientNum, &outSensitivity) )
      goto LABEL_24;
    __asm
    {
      vmovss  xmm7, [rsp+0A8h+outSensitivity]
      vsubss  xmm0, xmm7, xmm8
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@3a83126f
    }
    AdsSensitivityMultiplierTiming = GamerProfile_GetAdsSensitivityMultiplierTiming(v24);
    if ( AdsSensitivityMultiplierTiming )
    {
      if ( AdsSensitivityMultiplierTiming != 2 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm6
          vmulss  xmm2, xmm0, xmm9
          vsubss  xmm1, xmm8, xmm9
          vmulss  xmm0, xmm1, xmm6
          vaddss  xmm6, xmm2, xmm0
        }
LABEL_24:
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rbp+4A050h]
          vmulss  xmm0, xmm0, cs:__real@3e99999a
          vmovaps xmm9, [rsp+0A8h+var_68]
          vmovaps xmm8, [rsp+0A8h+var_58]
          vmovaps xmm7, [rsp+0A8h+var_48]
          vmovaps xmm6, [rsp+0A8h+var_38]
        }
        return *(float *)&_XMM0;
      }
      if ( !v18 )
        goto LABEL_24;
    }
    __asm { vmulss  xmm6, xmm6, xmm7 }
    goto LABEL_24;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4A050h]
    vmulss  xmm0, xmm0, dword ptr [rsi+10Ch]
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Input_HandleFrontendSceneDebugEvent
==============
*/
char CL_Input_HandleFrontendSceneDebugEvent(LocalClientNum_t localClientNum, int kbValue, int key, int isDown, int wasDown)
{
  if ( !Com_FrontEndScene_IsActive() || !Com_FrontEndScene_FreeCamEnabled() || !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) || !(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) || (CL_GetLocalClientUIGlobals(localClientNum)->keyCatchers & 0x21) != 0 )
    return 0;
  if ( isDown )
  {
    CL_Input_ExecBindingFrontEnd(localClientNum, kbValue, key, 0);
    return 1;
  }
  else
  {
    if ( (kbValue & 1) != 0 && (kbValue <= 116 || (unsigned int)(kbValue - 249) <= 5) )
      CL_Input_ExecBindingFrontEnd(localClientNum, kbValue + 1, key, wasDown);
    return 1;
  }
}

/*
==============
CL_Input_HandleLuiMouseEvent
==============
*/
__int64 CL_Input_HandleLuiMouseEvent(LocalClientNum_t localClientNum, bool forceUpdate)
{
  clientUIActive_t *LocalClientUIGlobals; 
  int ControllerFromClient; 
  MouseCursorPos curPos; 

  if ( Com_FrontEndScene_IsActive() && Com_FrontEndScene_FreeCamEnabled() )
    return 0i64;
  LocalClientUIGlobals = CL_GetLocalClientUIGlobals(localClientNum);
  if ( !LUI_CoD_IsEnabled() || (LocalClientUIGlobals->keyCatchers & 0x140) == 0 )
    return 0i64;
  IN_ShowSystemCursor(0);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  IN_GetCursorPos(ControllerFromClient, &curPos);
  LUI_CoD_MouseMove(localClientNum, curPos.x, curPos.y, forceUpdate);
  return 1i64;
}

/*
==============
CL_Input_HandleMouseWheel
==============
*/
void CL_Input_HandleMouseWheel(LocalClientNum_t localClientNum, const int delta)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client )
  {
    Client->mouseWheelDeltaSustainTime = 0.2;
    Client->mouseWheelDelta = delta;
  }
}

/*
==============
CL_Input_HoldBreathHybridAndVZoomToggle
==============
*/
void CL_Input_HoldBreathHybridAndVZoomToggle(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v7; 
  __int64 v8; 
  int integer; 
  char v11; 
  bool v12; 
  bool IsUsingOffhandGestureWeaponADSActive; 
  char v14; 
  signed int v15; 
  int ControllerFromClient; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3033, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = DCONST_DVARINT_cl_holdBreathHoldTime;
  v8 = v3;
  if ( !DCONST_DVARINT_cl_holdBreathHoldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_holdBreathHoldTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+730h]
  }
  v12 = v11 && (cmd->buttons & 0x200) != 0;
  IsUsingOffhandGestureWeaponADSActive = BG_IsUsingOffhandGestureWeaponADSActive(_RBX);
  v14 = v12;
  if ( IsUsingOffhandGestureWeaponADSActive )
    v14 = 1;
  ClActiveClient::GetClient((const LocalClientNum_t)v3);
  if ( !v14 )
    goto LABEL_14;
  if ( *(_WORD *)&g_playersKb[v8][20].active )
  {
    v15 = com_frameTime - g_playersKb[v8][20].downtime;
    if ( CG_Weapons_CurrentWeaponCanHoldBreath((LocalClientNum_t)v3) )
    {
      if ( g_playersKb[v8][20].active )
        return;
      if ( !g_playersKb[v8][20].wasPressed || v15 >= integer )
      {
LABEL_14:
        *(_WORD *)&g_playersKb[v8][20].active = 0;
        *(_OWORD *)g_playersKb[v8][20].down = 0ui64;
        g_playersKb[v8][20].flags = 0;
        return;
      }
    }
    *(_WORD *)&g_playersKb[v8][20].active = 0;
    *(_OWORD *)g_playersKb[v8][20].down = 0ui64;
    g_playersKb[v8][20].flags = 0;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    if ( GamerProfile_IsHybridBindedToCmdType(ControllerFromClient, ZOOM_HYBRID_CMD_BREATH) && CL_Input_CanHybridToggle((const LocalClientNum_t)v3) )
      cmd->buttons |= 0x200000000ui64;
    if ( GamerProfile_IsZoomBindedToCmdType(ControllerFromClient, ZOOM_HYBRID_CMD_BREATH) && CG_CanChangeZoomLevel((LocalClientNum_t)v3) )
      cmd->buttons |= 0x2000000ui64;
  }
}

/*
==============
CL_Input_IgnoreStance
==============
*/
bool CL_Input_IgnoreStance(LocalClientNum_t localClientNum)
{
  playerState_s *p_predictedPlayerState; 
  bool result; 

  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( BG_ContextMount_IsActive(p_predictedPlayerState) )
    return 1;
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x20u);
  if ( result )
    return 1;
  return result;
}

/*
==============
CL_Input_IsAutoSprintEnabled
==============
*/
_BOOL8 CL_Input_IsAutoSprintEnabled(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  bool GamepadEnabled; 
  int v4; 
  bool v5; 
  _BOOL8 result; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  v4 = CL_Mgr_GetControllerFromClient(localClientNum);
  v5 = GamerProfile_GetAutoSprintGamepad(v4) != 0;
  result = GamerProfile_GetAutoSprintKBM(v4) != 0;
  if ( GamepadEnabled )
    return v5;
  return result;
}

/*
==============
CL_Input_IsAutoSuperSprintEnabled
==============
*/
_BOOL8 CL_Input_IsAutoSuperSprintEnabled(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  bool GamepadEnabled; 
  int v4; 
  bool v5; 
  _BOOL8 result; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  v4 = CL_Mgr_GetControllerFromClient(localClientNum);
  v5 = GamerProfile_GetAutoSprintGamepad(v4) == 2;
  result = GamerProfile_GetAutoSprintKBM(v4) == 2;
  if ( GamepadEnabled )
    return v5;
  return result;
}

/*
==============
CL_Input_IsGamepadActiveForContext
==============
*/
bool CL_Input_IsGamepadActiveForContext(LocalClientNum_t localClientNum, InputContext inputContext)
{
  __int64 v2; 
  __int64 v4; 
  int ControllerFromClient; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v4 = v2;
  if ( inputContext == (STRUCT_POINTER|FLOAT_POINTER) )
  {
    if ( !LUI_CoD_InFrontend() && (clientUIActives[v4].keyCatchers & 0x40) == 0 )
      goto LABEL_7;
  }
  else if ( inputContext != VEC3_POINTER )
  {
LABEL_7:
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    return GamerProfile_GetGamepadEnabled(ControllerFromClient);
  }
  return clientUIActives[v4].lastInputType == GAMEPAD;
}

/*
==============
CL_Input_IsGamepadEnabled
==============
*/
bool CL_Input_IsGamepadEnabled(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_GetGamepadEnabled(ControllerFromClient);
}

/*
==============
CL_Input_IsJumping
==============
*/
bool CL_Input_IsJumping(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool result; 
  const SuitDef *SuitDef; 
  bool v6; 
  bool v7; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3492, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x13u);
  if ( result )
  {
    SuitDef = BG_GetSuitDef(_RBX->suitIndex);
    v6 = SuitDef == NULL;
    if ( !SuitDef )
    {
      v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3500, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
      v6 = !v7;
      if ( v7 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rdi+204h]
      vcomiss xmm0, dword ptr [rbx+1E8h]
    }
    return v6;
  }
  return result;
}

/*
==============
CL_Input_IsMouseWheelScrollingDown
==============
*/
bool CL_Input_IsMouseWheelScrollingDown(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  return Client && Client->mouseWheelDelta < 0;
}

/*
==============
CL_Input_IsMouseWheelScrollingUp
==============
*/
bool CL_Input_IsMouseWheelScrollingUp(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  return Client && Client->mouseWheelDelta > 0;
}

/*
==============
CL_Input_IsPausedFreeMove
==============
*/
bool CL_Input_IsPausedFreeMove(const ClActiveClient *cl)
{
  FreeMoveType v2; 

  if ( CL_Pause_IsGamePaused() || (v2 = cl->GetFreeMoveType((ClActiveClient *)cl)) != FREEMOVE_NONE )
    LOBYTE(v2) = 1;
  return v2;
}

/*
==============
CL_Input_IsSprinting
==============
*/
bool CL_Input_IsSprinting(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  bool result; 
  const SuitDef *SuitDef; 
  const dvar_t *v6; 
  char v7; 
  bool v8; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  _RBX = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3138, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  result = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x14u);
  if ( result )
  {
    SuitDef = BG_GetSuitDef(_RBX->suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3146, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
      __debugbreak();
    v6 = DCONST_DVARMPBOOL_enableSprintViewHeight;
    if ( !DCONST_DVARMPBOOL_enableSprintViewHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "enableSprintViewHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = 0;
    v8 = !v6->current.enabled;
    if ( v6->current.enabled )
    {
      BG_GetSuperSprintViewHeight(_RBX, SuitDef);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
      }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+200h]
      }
    }
    __asm { vcomiss xmm0, dword ptr [rbx+1E8h] }
    return v7 | v8;
  }
  return result;
}

/*
==============
CL_Input_IsToggleAdsEnabled
==============
*/
bool CL_Input_IsToggleAdsEnabled(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  bool GamepadEnabled; 
  int v4; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
  v4 = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( GamepadEnabled )
    return GamerProfile_GetToggleADSEnabledGamepad(v4);
  else
    return GamerProfile_GetToggleADSEnabledKeyboard(v4);
}

/*
==============
CL_Input_IsValidStateForInput
==============
*/
bool CL_Input_IsValidStateForInput(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].connectionState >= CA_CONNECTED;
}

/*
==============
CL_Input_KeyClear
==============
*/
void CL_Input_KeyClear(kbutton_t *button)
{
  *(_WORD *)&button->active = 0;
  *(_QWORD *)button->down = 0i64;
  *(_QWORD *)&button->downtime = 0i64;
  button->flags = 0;
}

/*
==============
CL_Input_KeyDown
==============
*/
void CL_Input_KeyDown(kbutton_t *b, int key, __int64 time)
{
  int v3; 

  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  if ( key != b->down[0] )
  {
    v3 = b->down[1];
    if ( key != v3 )
    {
      if ( b->down[0] )
      {
        if ( v3 )
        {
          Com_Printf(14, "Three keys down for a button!\n", time);
          return;
        }
        b->down[1] = key;
      }
      else
      {
        b->down[0] = key;
      }
      if ( !b->active )
      {
        b->downtime = time;
        *(_WORD *)&b->active = 257;
      }
    }
  }
}

/*
==============
CL_Input_KeyDownCheat
==============
*/
void CL_Input_KeyDownCheat(kbutton_t *b)
{
  const char *v2; 
  int v3; 
  int v4; 
  const char *v5; 

  v2 = Cmd_Argv(1);
  if ( *v2 )
    v3 = atoi(v2);
  else
    v3 = -1;
  if ( v3 != b->down[0] )
  {
    v4 = b->down[1];
    if ( v3 != v4 )
    {
      if ( b->down[0] )
      {
        if ( v4 )
        {
          Com_Printf(14, "Three keys down for a button!\n");
          return;
        }
        b->down[1] = v3;
      }
      else
      {
        b->down[0] = v3;
      }
      if ( !b->active )
      {
        v5 = Cmd_Argv(2);
        b->downtime = atoi(v5);
        *(_WORD *)&b->active = 257;
      }
    }
  }
}

/*
==============
CL_Input_KeyState
==============
*/

float __fastcall CL_Input_KeyState(kbutton_t *key, double _XMM1_8)
{
  bool v3; 
  signed int msec; 
  unsigned int downtime; 

  v3 = !key->active;
  msec = key->msec;
  key->msec = 0;
  if ( !v3 )
  {
    downtime = key->downtime;
    if ( downtime )
      msec += com_frameTime - downtime;
    else
      msec = com_frameTime;
    key->downtime = com_frameTime;
  }
  if ( msec > 0 )
  {
    if ( msec < frame_msec )
    {
      if ( !frame_msec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 558, ASSERT_TYPE_ASSERT, "(frame_msec)", (const char *)&queryFormat, "frame_msec") )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm0, xmm1, xmm0
      }
    }
    else
    {
      __asm { vmovss  xmm0, cs:__real@3f800000 }
    }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Input_KeyUp
==============
*/
void CL_Input_KeyUp(kbutton_t *b, int key, unsigned int time)
{
  int v3; 
  int v4; 

  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  v3 = b->down[0];
  if ( b->down[0] == key )
  {
    b->down[0] = 0;
    v4 = b->down[1];
  }
  else
  {
    if ( b->down[1] != key )
      return;
    v4 = 0;
    b->down[1] = 0;
    if ( v3 )
      return;
  }
  if ( !v4 )
  {
    b->active = 0;
    if ( time )
      b->msec += time - b->downtime;
    else
      b->msec += frame_msec >> 1;
    b->mustRelease = 0;
  }
}

/*
==============
CL_Input_KeyUpCheat
==============
*/
void CL_Input_KeyUpCheat(kbutton_t *b)
{
  const char *v2; 
  int v3; 
  int v4; 
  int v5; 
  const char *v6; 
  int v7; 
  unsigned int v8; 

  v2 = Cmd_Argv(1);
  if ( !*v2 )
  {
    *(_QWORD *)b->down = 0i64;
    b->active = 0;
    b->mustRelease = 0;
    return;
  }
  v3 = atoi(v2);
  v4 = b->down[0];
  if ( b->down[0] == v3 )
  {
    b->down[0] = 0;
    v5 = b->down[1];
  }
  else
  {
    if ( b->down[1] != v3 )
      return;
    v5 = 0;
    b->down[1] = 0;
    if ( v4 )
      return;
  }
  if ( !v5 )
  {
    b->active = 0;
    v6 = Cmd_Argv(2);
    v7 = atoi(v6);
    if ( v7 )
      v8 = v7 - b->downtime;
    else
      v8 = frame_msec >> 1;
    b->msec += v8;
    b->active = 0;
    b->mustRelease = 0;
  }
}

/*
==============
CL_Input_LocationSelection
==============
*/

bool __fastcall CL_Input_LocationSelection(const LocalClientNum_t localClientNum, usercmd_s *cmd, double mx, double my, ButtonSet *outClearButtons)
{
  __int64 v17; 
  CgWeaponMap *v21; 
  playerState_s *p_predictedPlayerState; 
  int ControllerFromClient; 
  int flipSticks; 
  int v33; 
  int v42; 
  CgCompassSystem *CompassSystem; 
  CgCompassSystem *v45; 
  const dvar_t *v48; 
  const dvar_t *v54; 
  int v60; 
  char v79; 
  bool v80; 
  bool v91; 
  bool v95; 
  int v103; 
  int v105; 
  CgCompassSystem *v107; 
  CgCompassSystem *v108; 
  int v109; 
  bool v129; 
  PlayerKeyState *KeyState; 
  PlayerKeyState *v184; 
  PlayerKeyState *v185; 
  LocSelInputState overrideLocSelInputState; 
  LocSelInputState locSelInputState; 
  CgCompassSystem *v191; 
  unsigned __int64 v198; 
  char v221; 
  bool IsCatcherActive; 
  bool v244; 
  vec2_t *outVector; 
  float outAngle; 
  MouseCursorPos curPos; 
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  vec2_t vec; 
  vec2_t outWorldScale; 
  vec2_t v256; 
  vec2_t outWorldPosition; 
  vec2_t yawVector; 
  rectDef_s result; 
  char v270; 

  __asm
  {
    vmovaps [rsp+180h+var_A0], xmm12
    vmovaps [rsp+180h+var_D0], xmm15
  }
  v17 = localClientNum;
  __asm
  {
    vmovss  [rsp+180h+var_110], xmm3
    vmovss  [rsp+180h+outAngle], xmm2
    vmovaps xmm12, xmm3
    vmovaps xmm15, xmm2
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v21 = CgWeaponMap::ms_instance[v17];
  ps = &_RDI->predictedPlayerState;
  weaponMap = v21;
  if ( !BG_IsLocationSelectorActive(v21, &_RDI->predictedPlayerState) )
  {
    CL_Keys_RemoveCatcher((LocalClientNum_t)v17, -9);
    if ( !CL_Keys_IsCatcherActive((LocalClientNum_t)v17, 16) )
      goto LABEL_88;
  }
  __asm
  {
    vmovaps [rsp+180h+var_50], xmm7
    vmovaps [rsp+180h+var_60], xmm8
    vmovaps [rsp+180h+var_70], xmm9
    vmovaps [rsp+180h+var_80], xmm10
    vmovaps [rsp+180h+var_90], xmm11
    vmovaps [rsp+180h+var_B0], xmm13
    vmovaps [rsp+180h+var_C0], xmm14
  }
  p_predictedPlayerState = &CG_GetLocalClientGlobals((const LocalClientNum_t)v17)->predictedPlayerState;
  if ( !BG_ContextMount_IsActive(p_predictedPlayerState) )
  {
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x20u) )
      CL_Input_AddCurrentStanceToCmd((LocalClientNum_t)v17, cmd);
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi+4A020h]
    vdivss  xmm11, xmm1, dword ptr [rdi+4A024h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+65E4h]
    vmulss  xmm14, xmm0, cs:__real@3a83126f
    vmovaps [rsp+180h+var_40], xmm6
    vmovss  dword ptr [rsp+180h+outWorldScale], xmm11
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v17);
  __asm
  {
    vmovss  xmm10, cs:__real@3f000000
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm13, xmm13, xmm13
  }
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) )
  {
    flipSticks = CL_Keys_GetKeyState((LocalClientNum_t)v17)->flipSticks;
    if ( flipSticks == 1 )
    {
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, 2);
      v33 = 3;
    }
    else
    {
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, 0);
      v33 = 1;
    }
    __asm { vmovss  dword ptr [rsp+180h+vec], xmm0 }
    *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, v33);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+180h+vec]
      vmulss  xmm1, xmm0, xmm0
      vmovss  dword ptr [rsp+180h+vec+4], xmm0
      vmovaps xmm2, xmm0
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm4, xmm1, xmm0
      vcomiss xmm4, xmm7
    }
    if ( !(v79 | v80) )
    {
      __asm
      {
        vsqrtss xmm0, xmm4, xmm4
        vdivss  xmm1, xmm7, xmm0
        vmulss  xmm0, xmm3, xmm1
        vmulss  xmm1, xmm2, xmm1
        vmovss  dword ptr [rsp+180h+vec+4], xmm1
        vmovss  dword ptr [rsp+180h+vec], xmm0
      }
    }
    v42 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v17);
    *(double *)&_XMM0 = GamerProfile_GetLocationSelectorCursorGamepadSpeedMultiplier(v42);
    __asm { vmovaps xmm6, xmm0 }
    CompassSystem = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v17);
    v45 = CompassSystem;
    if ( CompassSystem && CgCompassSystem::GetCurrentCompassType(CompassSystem) == COMPASS_TYPE_TACMAP )
    {
      *(double *)&_XMM0 = CgCompassSystem::GetCurrentCompassZoomLevel(v45);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@40000000
        vmulss  xmm6, xmm6, xmm1
      }
    }
    v48 = DVARFLT_cg_mapLocationSelectionCursorSpeed;
    if ( !DVARFLT_cg_mapLocationSelectionCursorSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mapLocationSelectionCursorSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v48);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+vec]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vmulss  xmm2, xmm1, xmm14
      vmulss  xmm3, xmm2, xmm6
      vaddss  xmm0, xmm3, dword ptr [rdi+4A084h]
      vmovss  dword ptr [rdi+4A084h], xmm0
    }
    v54 = DVARFLT_cg_mapLocationSelectionCursorSpeed;
    if ( !DVARFLT_cg_mapLocationSelectionCursorSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mapLocationSelectionCursorSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+vec+4]
      vmulss  xmm1, xmm0, dword ptr [rbx+28h]
      vmovss  xmm0, dword ptr [rdi+4A088h]
      vmulss  xmm2, xmm1, xmm14
      vmulss  xmm3, xmm2, xmm11
      vmulss  xmm4, xmm3, xmm6
      vsubss  xmm1, xmm0, xmm4
      vmovss  dword ptr [rdi+4A088h], xmm1
    }
    if ( (_RDI->predictedPlayerState.locationSelectionInfo & 4) != 0 )
    {
      if ( flipSticks == 1 )
      {
        *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, 1);
        v60 = 0;
      }
      else
      {
        *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, 3);
        v60 = 2;
      }
      __asm { vmovss  dword ptr [rsp+180h+vec], xmm0 }
      *(double *)&_XMM0 = CL_GamepadAxisValue((LocalClientNum_t)v17, v60);
      __asm
      {
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vmovss  xmm2, dword ptr [rsp+180h+vec]
      }
      _RBX = DCONST_DVARFLT_cl_dirSelMinStickThreshold;
      __asm
      {
        vmulss  xmm1, xmm3, xmm3
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm1, xmm1, xmm0
        vsqrtss xmm12, xmm1, xmm1
        vcmpless xmm0, xmm12, cs:__real@80000000
        vblendvps xmm0, xmm12, xmm7, xmm0
        vdivss  xmm1, xmm7, xmm0
        vmulss  xmm0, xmm2, xmm1
        vmulss  xmm1, xmm3, xmm1
        vmovss  dword ptr [rsp+180h+vec+4], xmm1
        vmovss  dword ptr [rsp+180h+vec], xmm0
      }
      if ( !DCONST_DVARFLT_cl_dirSelMinStickThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_dirSelMinStickThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm8, dword ptr [rbx+28h]
        vcomiss xmm12, xmm8
      }
      if ( !(v79 | v80) )
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_dirSelConvergeTimeGross, "cl_dirSelConvergeTimeGross");
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_dirSelConvergeTimePrecise, "cl_dirSelConvergeTimePrecise");
        __asm { vmovaps xmm11, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_dirSelPreciseOuterAngle, "cl_dirSelPreciseOuterAngle");
        __asm { vmovaps xmm15, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cl_dirSelPreciseInnerAngle, "cl_dirSelPreciseInnerAngle");
        __asm
        {
          vcomiss xmm8, xmm7
          vmovaps xmm9, xmm0
        }
        if ( !v79 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2468, ASSERT_TYPE_ASSERT, "(1.0f - minStickThreshold > 0.0f)", (const char *)&queryFormat, "1.0f - minStickThreshold > 0.0f") )
          __debugbreak();
        __asm
        {
          vsubss  xmm0, xmm12, xmm8
          vsubss  xmm1, xmm7, xmm8
          vdivss  xmm0, xmm0, xmm1
          vmovss  [rsp+180h+curPos.x], xmm0
        }
        *(double *)&_XMM0 = vectoyaw(&vec);
        __asm
        {
          vsubss  xmm0, xmm0, dword ptr [rdi+4A08Ch]
          vmulss  xmm5, xmm0, cs:__real@3b360b61
          vxorps  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm5, xmm10
          vmovss  xmm3, xmm1, xmm2
          vxorps  xmm0, xmm0, xmm0
          vroundss xmm4, xmm0, xmm3, 1
          vsubss  xmm1, xmm5, xmm4
          vmulss  xmm12, xmm1, cs:__real@43b40000
          vandps  xmm8, xmm12, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vcomiss xmm8, xmm15
        }
        if ( v79 | v80 )
        {
          __asm { vcomiss xmm8, xmm9 }
          if ( v79 | v80 )
          {
            __asm { vmovaps xmm6, xmm11 }
          }
          else
          {
            __asm { vcomiss xmm15, xmm9 }
            if ( v79 | v80 )
            {
              v91 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2484, ASSERT_TYPE_ASSERT, "(preciseOuterAngle > preciseInnerAngle)", (const char *)&queryFormat, "preciseOuterAngle > preciseInnerAngle");
              v79 = 0;
              v80 = !v91;
              if ( v91 )
                __debugbreak();
            }
            __asm
            {
              vcomiss xmm11, xmm6
              vsubss  xmm1, xmm8, xmm9
              vsubss  xmm0, xmm15, xmm9
              vdivss  xmm8, xmm1, xmm0
            }
            if ( v79 | v80 )
            {
              v95 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2486, ASSERT_TYPE_ASSERT, "(convergeTimePrecise > convergeTimeGross)", (const char *)&queryFormat, "convergeTimePrecise > convergeTimeGross");
              v79 = 0;
              v80 = !v95;
              if ( v95 )
                __debugbreak();
            }
            __asm
            {
              vsubss  xmm0, xmm6, xmm11
              vmulss  xmm1, xmm0, xmm8
              vaddss  xmm6, xmm1, xmm11
            }
          }
        }
        __asm { vcomiss xmm6, xmm13 }
        if ( v79 | v80 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+180h+outVector], xmm0
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2494, ASSERT_TYPE_ASSERT, "( ( convergenceTime > 0.0f ) )", "( convergenceTime ) = %g", *(double *)&outVector) )
            __debugbreak();
        }
        __asm
        {
          vmulss  xmm0, xmm14, [rsp+180h+curPos.x]
          vdivss  xmm1, xmm0, xmm6
          vmulss  xmm2, xmm1, xmm12
          vaddss  xmm0, xmm2, dword ptr [rdi+4A08Ch]; angle
        }
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm
        {
          vmovss  xmm11, dword ptr [rsp+180h+outWorldScale]
          vmovss  xmm15, [rsp+180h+outAngle]
          vmovss  dword ptr [rdi+4A08Ch], xmm0
        }
      }
      __asm { vmovss  xmm12, [rsp+180h+var_110] }
    }
  }
  v103 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v17);
  __asm { vmovss  xmm8, cs:__real@3dcccccd }
  if ( !GamerProfile_GetGamepadEnabled(v103) )
  {
    v105 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v17);
    *(double *)&_XMM0 = GamerProfile_GetLocationSelectorCursorMouseSpeedMultiplier(v105);
    __asm { vmovaps xmm9, xmm0 }
    v107 = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v17);
    v108 = v107;
    if ( v107 && CgCompassSystem::GetCurrentCompassType(v107) == COMPASS_TYPE_TACMAP )
    {
      v109 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v17);
      IN_GetCursorPos(v109, &curPos);
      CgCompassSystem::getTacmapMapRectangle(v108, &result);
      CgCompassSystem::GetTacmapMapCenter(v108);
      *(double *)&_XMM0 = CgCompassSystem::GetCurrentCompassZoomLevel(v108);
      __asm
      {
        vmovss  xmm5, [rbp+80h+result.w]
        vucomiss xmm5, xmm13
        vmovaps xmm6, xmm0
      }
      if ( !v80 )
      {
        __asm
        {
          vmovss  xmm4, [rbp+80h+result.h]
          vucomiss xmm4, xmm13
          vmovd   xmm1, [rsp+180h+curPos.x]
          vcvtdq2ps xmm1, xmm1
          vsubss  xmm3, xmm1, [rbp+80h+result.x]
          vmulss  xmm2, xmm5, xmm10
          vsubss  xmm3, xmm3, xmm2
          vmulss  xmm0, xmm3, xmm0
          vdivss  xmm1, xmm0, xmm5
          vaddss  xmm2, xmm1, [rsp+180h+var_110]
          vmovd   xmm0, [rsp+180h+curPos.y]
          vcvtdq2ps xmm0, xmm0
          vsubss  xmm3, xmm0, [rbp+80h+result.y]
          vmulss  xmm1, xmm4, xmm10
          vmovss  dword ptr [rdi+4A084h], xmm2
          vsubss  xmm2, xmm3, xmm1
          vmulss  xmm0, xmm2, xmm6
          vdivss  xmm3, xmm0, xmm4
          vaddss  xmm1, xmm3, [rsp+180h+var_10C]
          vmovss  dword ptr [rdi+4A088h], xmm1
        }
      }
    }
    else
    {
      _R15 = DVARFLT_cg_mapLocationSelectionCursorSpeedMouse;
      v129 = (_RDI->predictedPlayerState.locationSelectionInfo & 4) != 0;
      if ( !DVARFLT_cg_mapLocationSelectionCursorSpeedMouse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_mapLocationSelectionCursorSpeedMouse") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R15);
      __asm { vmovss  xmm6, dword ptr [r15+28h] }
      if ( v129 && CL_Keys_IsKeyDown((LocalClientNum_t)v17, 188) )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm15
          vmulss  xmm1, xmm0, xmm14
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vaddss  xmm0, xmm3, dword ptr [rdi+4A090h]
          vmovss  dword ptr [rdi+4A090h], xmm0
          vmulss  xmm1, xmm11, xmm12
          vmulss  xmm0, xmm1, xmm6
          vmulss  xmm2, xmm0, xmm14
          vmulss  xmm3, xmm2, xmm8
          vmulss  xmm1, xmm3, xmm9
          vaddss  xmm0, xmm1, dword ptr [rdi+4A094h]
          vmovss  dword ptr [rdi+4A094h], xmm0
          vmovss  xmm0, dword ptr [rdi+4A088h]
          vsubss  xmm1, xmm0, dword ptr [rdi+4A094h]
          vmovss  xmm2, dword ptr [rdi+4A084h]
          vsubss  xmm0, xmm2, dword ptr [rdi+4A090h]
          vmovss  dword ptr [rsp+180h+var_108+4], xmm0
          vmovss  dword ptr [rsp+180h+var_108], xmm1
        }
        *(double *)&_XMM0 = vectoyaw(&v256);
        *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
        __asm { vmovss  dword ptr [rdi+4A08Ch], xmm0 }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm15
          vmulss  xmm1, xmm0, xmm14
          vmulss  xmm2, xmm1, xmm8
          vmulss  xmm3, xmm2, xmm9
          vaddss  xmm0, xmm3, dword ptr [rdi+4A084h]
          vmovss  dword ptr [rdi+4A084h], xmm0
          vmulss  xmm1, xmm6, xmm12
          vmulss  xmm0, xmm1, xmm14
          vmulss  xmm2, xmm0, xmm8
          vmulss  xmm3, xmm2, xmm9
          vaddss  xmm1, xmm3, dword ptr [rdi+4A088h]
          vmovss  dword ptr [rdi+4A088h], xmm1
        }
        _RDI->locationSelectorAngleLocation.v[0] = _RDI->locationSelectorCursor.v[0];
        _RDI->locationSelectorAngleLocation.v[1] = _RDI->locationSelectorCursor.v[1];
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4A090h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rdi+4A090h], xmm0
      vmovss  xmm0, dword ptr [rdi+4A094h]; val
      vmovaps xmm2, xmm7; max
      vxorps  xmm1, xmm1, xmm1; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rdi+4A094h], xmm0 }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4A084h]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rdi+4A084h], xmm0
    vmovss  xmm0, dword ptr [rdi+4A088h]; val
    vmovaps xmm2, xmm7; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm2, cs:__real@43b40000; max
    vmovss  dword ptr [rdi+4A088h], xmm0
    vmovss  xmm0, dword ptr [rdi+4A08Ch]; val
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm9, cs:__real@437f0000
    vmovss  xmm11, cs:__real@3f355555
    vmovss  dword ptr [rdi+4A08Ch], xmm0
    vmulss  xmm0, xmm9, dword ptr [rdi+4A084h]
    vaddss  xmm2, xmm0, xmm10
    vxorps  xmm7, xmm7, xmm7
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si eax, xmm0
  }
  cmd->mlgSelectedLoc[0] = _EAX + 0x80;
  __asm
  {
    vmulss  xmm1, xmm9, dword ptr [rdi+4A088h]
    vaddss  xmm3, xmm1, xmm10
    vroundss xmm1, xmm7, xmm3, 1
    vcvttss2si eax, xmm1
  }
  cmd->mlgSelectedLoc[1] = _EAX + 0x80;
  __asm
  {
    vmulss  xmm0, xmm11, dword ptr [rdi+4A08Ch]
    vaddss  xmm2, xmm0, xmm10
    vroundss xmm0, xmm7, xmm2, 1
    vcvttss2si eax, xmm0
  }
  cmd->mlgSelectedAngle = _EAX + 0x80;
  KeyState = CL_Keys_GetKeyState((LocalClientNum_t)v17);
  v184 = CL_Keys_GetKeyState((LocalClientNum_t)v17);
  v185 = CL_Keys_GetKeyState((LocalClientNum_t)v17);
  overrideLocSelInputState = v184->overrideLocSelInputState;
  __asm { vmovaps xmm14, [rsp+180h+var_C0] }
  if ( overrideLocSelInputState || v185->overrideIsMaster )
    KeyState->locSelInputState = overrideLocSelInputState;
  locSelInputState = KeyState->locSelInputState;
  if ( (unsigned int)(locSelInputState - 1) <= 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4A084h]
      vmovss  xmm1, dword ptr [rdi+4A088h]
      vmovss  dword ptr [rsp+180h+outWorldScale], xmm0
      vmovss  dword ptr [rsp+180h+outWorldScale+4], xmm1
    }
    v191 = CgCompassSystem::GetCompassSystem((const LocalClientNum_t)v17);
    if ( CgCompassSystem::GetCurrentCompassType(v191) )
    {
      CG_CompassFullToWorld(_RDI, &_RDI->locationSelectorCursor, &outWorldPosition);
    }
    else
    {
      CgCompassSystem::GetCompassYaw(v191, COMPASS_TYPE_PARTIAL, 0, _RDI, &outAngle, &yawVector);
      __asm
      {
        vmovss  xmm0, [rsp+180h+outAngle]
        vsubss  xmm1, xmm0, dword ptr [rdi+49FFCh]
        vmulss  xmm6, xmm1, cs:__real@3b360b61
      }
      *(double *)&_XMM0 = ((double (__fastcall *)(CgCompassSystem *))v191->GetRange)(v191);
      __asm { vmovaps xmm1, xmm0; compassMapRange }
      CG_CompassPartialToWorld(_RDI, *(const float *)&_XMM1, &_RDI->locationSelectorCursor, &yawVector, &outWorldPosition, &outWorldScale);
      __asm
      {
        vaddss  xmm1, xmm6, xmm10
        vroundss xmm2, xmm7, xmm1, 1
        vsubss  xmm13, xmm6, xmm2
      }
    }
    if ( TopDownMapData_CanUseKillstreakAtPosition(&outWorldPosition) || (_RDI->predictedPlayerState.locationSelectionInfo & 2) == 0 )
    {
      v198 = 0x8000000000000000ui64;
      if ( KeyState->locSelInputState != LOC_SEL_INPUT_CONFIRM_ALT )
        v198 = 0x4000i64;
      cmd->buttons |= v198;
      if ( (_RDI->predictedPlayerState.locationSelectionInfo & 0xE0) == 0x80 )
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rsp+180h+outWorldScale]
          vmulss  xmm0, xmm3, cs:__real@41200000
          vmovss  xmm5, dword ptr [rsp+180h+outWorldScale+4]
          vmulss  xmm1, xmm5, cs:__real@41200000
          vcvttss2si ecx, xmm0
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, ecx
          vmulss  xmm2, xmm0, xmm8
          vcvttss2si edx, xmm1
          vsubss  xmm1, xmm3, xmm2
          vmulss  xmm0, xmm1, cs:__real@451f6000
          vaddss  xmm2, xmm0, xmm10
          vroundss xmm0, xmm7, xmm2, 1
          vcvttss2si eax, xmm0
        }
        cmd->selectedLoc[0] = _EAX + 0x80;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, edx
          vmulss  xmm1, xmm0, xmm8
          vsubss  xmm2, xmm5, xmm1
          vmulss  xmm3, xmm2, cs:__real@451f6000
          vaddss  xmm4, xmm3, xmm10
          vroundss xmm2, xmm7, xmm4, 1
          vcvttss2si eax, xmm2
        }
        cmd->selectedLoc[1] = _EAX + 0x80;
        v221 = _ECX + 10 * _EDX;
      }
      else
      {
        __asm
        {
          vmulss  xmm1, xmm9, dword ptr [rsp+180h+outWorldScale]
          vaddss  xmm3, xmm1, xmm10
          vroundss xmm1, xmm7, xmm3, 1
          vcvttss2si eax, xmm1
          vmulss  xmm1, xmm9, dword ptr [rsp+180h+outWorldScale+4]
          vaddss  xmm3, xmm1, xmm10
          vroundss xmm1, xmm7, xmm3, 1
        }
        cmd->selectedLoc[0] = _EAX + 0x80;
        __asm
        {
          vcvttss2si eax, xmm1
          vmulss  xmm2, xmm13, xmm9
        }
        cmd->selectedLoc[1] = _EAX + 0x80;
        __asm
        {
          vmulss  xmm1, xmm11, dword ptr [rdi+4A08Ch]
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm3, xmm2, xmm10
          vroundss xmm2, xmm7, xmm3, 1
          vcvttss2si edx, xmm2
        }
        v221 = _EDX + 0x80;
      }
      cmd->selectedAngle = v221;
      goto LABEL_84;
    }
  }
  else if ( locSelInputState == LOC_SEL_INPUT_CANCEL )
  {
    cmd->buttons |= 0x8000ui64;
LABEL_84:
    outClearButtons->locationSelectButton = 1;
  }
  IsCatcherActive = CL_Keys_IsCatcherActive((LocalClientNum_t)v17, 16);
  __asm
  {
    vmovaps xmm13, [rsp+180h+var_B0]
    vmovaps xmm11, [rsp+180h+var_90]
    vmovaps xmm10, [rsp+180h+var_80]
    vmovaps xmm9, [rsp+180h+var_70]
    vmovaps xmm8, [rsp+180h+var_60]
    vmovaps xmm7, [rsp+180h+var_50]
    vmovaps xmm6, [rsp+180h+var_40]
  }
  if ( IsCatcherActive || BG_IsMapLocationSelectorActive(weaponMap, ps) )
  {
LABEL_88:
    v244 = 0;
    goto LABEL_89;
  }
  v244 = 1;
LABEL_89:
  _R11 = &v270;
  __asm
  {
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
  return v244;
}

/*
==============
CL_Input_LogMouseInputVelocity
==============
*/

void __fastcall CL_Input_LogMouseInputVelocity(double deltaTime, double mx, double deltaYaw, double yaw)
{
  const dvar_t *v8; 

  v8 = DCONST_DVARBOOL_cl_inputVelocityLogging;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
    vmovaps [rsp+88h+var_38], xmm8
    vmovaps [rsp+88h+var_48], xmm9
    vmovaps xmm9, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm6, xmm0
  }
  if ( !DCONST_DVARBOOL_cl_inputVelocityLogging && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_inputVelocityLogging") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    Com_Printf(0, "=====================\n");
    __asm
    {
      vcvtss2sd xmm2, xmm6, xmm6
      vmovq   r8, xmm2
    }
    Com_Printf(0, "M time:    %.4f\n", *(double *)&_XMM2);
    __asm
    {
      vandps  xmm8, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcvtss2sd xmm2, xmm8, xmm8
      vmovq   r8, xmm2
    }
    Com_Printf(0, "M mouseX:\t%.4f\n", *(double *)&_XMM2);
    __asm
    {
      vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcvtss2sd xmm2, xmm7, xmm7
      vmovq   r8, xmm2
    }
    Com_Printf(0, "M yawDelt: %.4f\n", *(double *)&_XMM2);
    __asm { vmovaps xmm0, xmm9; angle }
    *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
    __asm
    {
      vcvtss2sd xmm2, xmm0, xmm0
      vmovq   r8, xmm2
    }
    Com_Printf(0, "M yaw:     %.4f\n", *(double *)&_XMM2);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_38]
    vmovaps xmm9, [rsp+88h+var_48]
  }
}

/*
==============
CL_Input_LowerStanceDown
==============
*/
void CL_Input_LowerStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  ClActiveClient *Client; 
  unsigned int v5; 
  StanceState *v6; 
  StanceState stance; 

  if ( CL_Input_IsValidStateForInput(localClientNum) )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    v5 = 0;
    v6 = &Client->heldInputs.heldStances[1];
    do
    {
      v5 += 2;
      *(_QWORD *)(v6 - 1) = 0i64;
      v6 += 2;
    }
    while ( v5 < 2 );
    Client->heldInputs.stackIndex = 0;
    *(_DWORD *)&cl->stanceHeld = 0;
    stance = cl->stance;
    cl->stanceTime = -1;
    if ( stance )
    {
      if ( stance == CL_STANCE_CROUCH )
      {
        cl->stance = CL_STANCE_PRONE;
      }
      else if ( (unsigned int)(stance - 2) > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4048, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_PRONE || cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD )", (const char *)&queryFormat, "cl->stance == CL_STANCE_PRONE || cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD") )
      {
        __debugbreak();
      }
    }
    else
    {
      cl->stance = CL_STANCE_CROUCH;
    }
  }
}

/*
==============
CL_Input_MouseEvent
==============
*/
__int64 CL_Input_MouseEvent(int controllerIndex, int x, int y, int dx, int dy)
{
  LocalClientNum_t ClientFromController; 
  __int64 v10; 
  __int64 v11; 
  clientUIActive_t *LocalClientUIGlobals; 
  int ControllerFromClient; 
  ClActiveClient *v15; 
  ClActiveClient *Client; 
  __int64 v17; 
  LocalClientNum_t v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  MouseCursorPos curPos; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v10 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
  {
    v21 = 2;
    v18 = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v21) )
      __debugbreak();
  }
  v11 = v10;
  if ( DevGui_IsActive() || g_cpuProfiler.m_enabled && R_IsCPUTimelineProfilerViewEnabled() )
  {
    DevGui_MouseEvent(x, y, dx, dy);
    if ( !DevGui_ShouldShowMouseCursor() )
    {
      if ( !g_cpuProfiler.m_enabled || !R_IsCPUTimelineProfilerViewEnabled() )
        return 1i64;
      goto LABEL_37;
    }
    goto LABEL_33;
  }
  if ( (clientUIActives[v11].keyCatchers & 1) != 0 )
  {
LABEL_33:
    IN_ShowSystemCursor(1);
    return 0i64;
  }
  if ( !IN_IsMouseActive(controllerIndex) )
    return 0i64;
  if ( !Com_FrontEndScene_IsActive() || !Com_FrontEndScene_FreeCamEnabled() )
  {
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v10);
    if ( LUI_CoD_IsEnabled() && (LocalClientUIGlobals->keyCatchers & 0x140) != 0 )
    {
      IN_ShowSystemCursor(0);
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v10);
      IN_GetCursorPos(ControllerFromClient, &curPos);
      LUI_CoD_MouseMove((LocalClientNum_t)v10, curPos.x, curPos.y, 0);
      return 0i64;
    }
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_CHARGING_OUT) )
    goto LABEL_22;
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v20) = 2;
    LODWORD(v17) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v17, v20) )
      __debugbreak();
    LODWORD(v22) = 2;
    LODWORD(v19) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v22) )
      __debugbreak();
  }
  if ( clientUIActives[v11].frontEndSceneState[0] || (unsigned int)(CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v10) - 1) > 7 )
  {
LABEL_22:
    IN_ShowSystemCursor(0);
    if ( !Com_IsAnyLocalServerRunning() || ((v15 = ClActiveClient::GetClient((const LocalClientNum_t)v10), !Com_GameMode_SupportsFeature(WEAPON_DROPPING)) || !CL_Pause_IsGamePaused() || v15->GetFreeMoveType(v15)) && (v15->GetFreeMoveType(v15) || CL_Pause_IsGamePaused() || !SV_IsDemoPlayingForClient()) )
    {
      if ( CL_IsLocalClientConnectionActiveForAnyServer((const LocalClientNum_t)v10) )
      {
        Client = ClActiveClient::GetClient((const LocalClientNum_t)v10);
        Client->mouseDx[Client->mouseIndex] = dx;
        Client->mouseDy[Client->mouseIndex] = dy;
      }
    }
    return 1i64;
  }
LABEL_37:
  IN_ShowSystemCursor(0);
  return 0i64;
}

/*
==============
CL_Input_OnStanceDown
==============
*/
void CL_Input_OnStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl, const int key, const bool ignoreStance, const bool updateStance)
{
  __int64 v7; 
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  ClActiveClient *Client; 
  unsigned int v20; 
  StanceState *v21; 
  bool IsSprinting; 
  cg_t *LocalClientGlobals; 
  bool v25; 
  const SuitDef *SuitDef; 
  bool v27; 
  bool v28; 
  bool IsJumping; 
  StanceState stance; 

  v7 = localClientNum;
  if ( updateStance && !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3638, ASSERT_TYPE_ASSERT, "(!updateStance || cl)", (const char *)&queryFormat, "!updateStance || cl") )
    __debugbreak();
  v10 = com_frameTime;
  v11 = v7;
  v12 = com_frameTime;
  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  v13 = g_playersKb[v7][13].down[0];
  if ( key != v13 )
  {
    v14 = g_playersKb[v11][13].down[1];
    if ( key != v14 )
    {
      if ( v13 )
      {
        if ( v14 )
        {
          Com_Printf(14, "Three keys down for a button!\n");
          v10 = com_frameTime;
          goto LABEL_14;
        }
        g_playersKb[v11][13].down[1] = key;
      }
      else
      {
        g_playersKb[v11][13].down[0] = key;
      }
      if ( !g_playersKb[v11][13].active )
      {
        g_playersKb[v11][13].downtime = v12;
        *(_WORD *)&g_playersKb[v11][13].active = 257;
      }
    }
  }
LABEL_14:
  if ( updateStance )
  {
    v15 = g_playersKb[v11][47].down[0];
    g_lastInputTimeForAnyLocalPlayer = v10;
    if ( key != v15 )
    {
      v16 = g_playersKb[v11][47].down[1];
      if ( key != v16 )
      {
        if ( v15 )
        {
          if ( v16 )
          {
            Com_Printf(14, "Three keys down for a button!\n");
            v10 = com_frameTime;
            goto LABEL_24;
          }
          g_playersKb[v11][47].down[1] = key;
        }
        else
        {
          g_playersKb[v11][47].down[0] = key;
        }
        if ( !g_playersKb[v11][47].active )
        {
          g_playersKb[v11][47].downtime = v12;
          *(_WORD *)&g_playersKb[v11][47].active = 257;
        }
      }
    }
  }
LABEL_24:
  if ( ignoreStance )
  {
    v17 = g_playersKb[v11][30].down[0];
    g_lastInputTimeForAnyLocalPlayer = v10;
    if ( key != v17 )
    {
      v18 = g_playersKb[v11][30].down[1];
      if ( key != v18 )
      {
        if ( !v17 )
        {
          g_playersKb[v11][30].down[0] = key;
          goto LABEL_31;
        }
        if ( !v18 )
        {
          g_playersKb[v11][30].down[1] = key;
LABEL_31:
          if ( !g_playersKb[v11][30].active )
          {
            g_playersKb[v11][30].downtime = v12;
            *(_WORD *)&g_playersKb[v11][30].active = 257;
            g_playersKb[v11][30].flags |= 1u;
            return;
          }
          goto LABEL_34;
        }
        Com_Printf(14, "Three keys down for a button!\n");
      }
    }
LABEL_34:
    g_playersKb[v11][30].flags |= 1u;
    return;
  }
  g_playersKb[v11][30].flags &= ~1u;
  if ( updateStance )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v7);
    v20 = 0;
    v21 = &Client->heldInputs.heldStances[1];
    do
    {
      v20 += 2;
      *(_QWORD *)(v21 - 1) = 0i64;
      v21 += 2;
    }
    while ( v20 < 2 );
    Client->heldInputs.stackIndex = 0;
    IsSprinting = CL_Input_IsSprinting((const LocalClientNum_t)v7);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
    _RBX = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3472, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&_RBX->pm_flags, ACTIVE, 0x1Eu) )
    {
      SuitDef = BG_GetSuitDef(_RBX->suitIndex);
      v27 = SuitDef == NULL;
      if ( !SuitDef )
      {
        v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3480, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef");
        v27 = !v28;
        if ( v28 )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rsi+200h]
        vcomiss xmm0, dword ptr [rbx+1E8h]
      }
      v25 = v27;
    }
    else
    {
      v25 = 0;
    }
    IsJumping = CL_Input_IsJumping((const LocalClientNum_t)v7);
    *(_WORD *)&cl->stanceHeld = 1;
    cl->crouchHoldReleased = 0;
    cl->stanceTime = com_frameTime;
    cl->ignoreStanceInput = 0;
    cl->wasSprinting = IsSprinting;
    if ( !IsSprinting && !v25 && !IsJumping )
    {
      stance = cl->stance;
      cl->stanceOnButtonDown = stance;
      if ( stance != CL_STANCE_CROUCH )
        cl->stance = CL_STANCE_CROUCH;
    }
  }
}

/*
==============
CL_Input_OnStanceUp
==============
*/
void CL_Input_OnStanceUp(const LocalClientNum_t localClientNum, ClActiveClient *cl, const int key, const bool ignoreStance, const bool updateStance)
{
  unsigned int v5; 
  __int64 v8; 
  int v9; 
  unsigned int v11; 
  int v12; 
  int v13; 
  unsigned int msec; 
  unsigned int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned __int16 flags; 
  bool IsSprinting; 
  bool IsJumping; 
  bool v26; 

  v5 = com_frameTime;
  v8 = localClientNum;
  v9 = 0;
  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  v11 = frame_msec;
  v12 = g_playersKb[v8][13].down[0];
  if ( v12 == key )
  {
    v13 = g_playersKb[v8][13].down[1];
    g_playersKb[v8][13].down[0] = 0;
  }
  else
  {
    if ( g_playersKb[v8][13].down[1] != key )
      goto LABEL_10;
    g_playersKb[v8][13].down[1] = 0;
    v13 = 0;
    if ( v12 )
      goto LABEL_10;
  }
  if ( !v13 )
  {
    msec = g_playersKb[v8][13].msec;
    if ( v5 )
      v15 = v5 + msec - g_playersKb[v8][13].downtime;
    else
      v15 = msec + (v11 >> 1);
    g_playersKb[v8][13].msec = v15;
    g_playersKb[v8][13].active = 0;
    g_playersKb[v8][13].mustRelease = 0;
  }
LABEL_10:
  if ( !updateStance )
    goto LABEL_20;
  v16 = g_playersKb[v8][47].down[0];
  g_lastInputTimeForAnyLocalPlayer = v5;
  if ( v16 == key )
  {
    v17 = g_playersKb[v8][47].down[1];
    g_playersKb[v8][47].down[0] = 0;
  }
  else
  {
    if ( g_playersKb[v8][47].down[1] != key )
      goto LABEL_20;
    g_playersKb[v8][47].down[1] = 0;
    v17 = 0;
    if ( v16 )
      goto LABEL_20;
  }
  if ( !v17 )
  {
    v18 = g_playersKb[v8][47].msec;
    if ( v5 )
      v19 = v5 + v18 - g_playersKb[v8][47].downtime;
    else
      v19 = v18 + (v11 >> 1);
    g_playersKb[v8][47].msec = v19;
    g_playersKb[v8][47].active = 0;
    g_playersKb[v8][47].mustRelease = 0;
  }
LABEL_20:
  if ( ignoreStance )
  {
    v20 = g_playersKb[v8][30].down[0];
    g_lastInputTimeForAnyLocalPlayer = v5;
    if ( v20 == key )
    {
      g_playersKb[v8][30].down[0] = 0;
      v9 = g_playersKb[v8][30].down[1];
    }
    else if ( g_playersKb[v8][30].down[1] != key || (g_playersKb[v8][30].down[1] = 0, v20) )
    {
LABEL_30:
      g_playersKb[v8][30].flags &= ~1u;
      return;
    }
    if ( !v9 )
    {
      v21 = g_playersKb[v8][30].msec;
      if ( v5 )
        v22 = v5 + v21 - g_playersKb[v8][30].downtime;
      else
        v22 = (v11 >> 1) + v21;
      g_playersKb[v8][30].msec = v22;
      g_playersKb[v8][30].active = 0;
      g_playersKb[v8][30].mustRelease = 0;
    }
    goto LABEL_30;
  }
  flags = g_playersKb[v8][30].flags;
  if ( (flags & 1) != 0 && g_playersKb[v8][30].active )
  {
    CL_Input_KeyUp(&g_playersKb[v8][30], key, v5);
    flags = g_playersKb[v8][30].flags;
  }
  g_playersKb[v8][30].flags = flags & 0xFFFE;
  if ( updateStance && !cl->ignoreStanceInput )
  {
    if ( (unsigned int)(cl->stance - 3) > 1 )
    {
      IsSprinting = CL_Input_IsSprinting(localClientNum);
      IsJumping = CL_Input_IsJumping(localClientNum);
      v26 = CL_Input_IsAutoSprintEnabled(localClientNum) && cl->stanceOnButtonDown == CL_STANCE_PRONE && (int)(v5 - cl->stanceTime) >= Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_stanceStandToProneHoldTime, "stanceStandToProneHoldTime");
      if ( IsSprinting && !v26 || IsJumping )
      {
        cl->stance = CL_STANCE_CROUCH;
      }
      else if ( cl->stanceHeld && cl->stanceOnButtonDown == CL_STANCE_CROUCH )
      {
        cl->stance = CL_STANCE_STAND;
      }
    }
    *(_WORD *)&cl->stanceHeld = 0;
    cl->crouchHoldReleased = 0;
  }
}

/*
==============
CL_Input_PopHeldStance
==============
*/
void CL_Input_PopHeldStance(const LocalClientNum_t localClientNum, StanceState stance)
{
  ClActiveClient *Client; 
  int stackIndex; 
  unsigned int v5; 
  __int64 v6; 
  bool v7; 
  int v8; 
  bool *p_ignoreStanceInput; 
  int v10; 
  unsigned int v11; 
  int v12; 

  Client = ClActiveClient::GetClient(localClientNum);
  stackIndex = Client->heldInputs.stackIndex;
  if ( stackIndex )
  {
    v5 = stackIndex - 1;
    Client->heldInputs.stackIndex = v5;
    if ( v5 >= 2 )
    {
      v12 = 2;
      v11 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 589, ASSERT_TYPE_ASSERT, "(unsigned)( cl->heldInputs.stackIndex ) < (unsigned)( ( sizeof( *array_counter( cl->heldInputs.heldStances ) ) + 0 ) )", "cl->heldInputs.stackIndex doesn't index ARRAY_COUNT( cl->heldInputs.heldStances )\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v6 = Client->heldInputs.stackIndex;
    if ( Client->heldInputs.heldStances[v6] == stance )
    {
      Client->heldInputs.heldStances[v6] = CL_STANCE_STAND;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      if ( (int)v6 >= 0 )
      {
        p_ignoreStanceInput = &Client->ignoreStanceInput;
        do
        {
          v10 = *((_DWORD *)p_ignoreStanceInput + 1);
          if ( v7 )
            *(_DWORD *)p_ignoreStanceInput = v10;
          else
            v7 = v10 == stance;
          LODWORD(v6) = Client->heldInputs.stackIndex;
          ++v8;
          p_ignoreStanceInput += 4;
        }
        while ( v8 <= (int)v6 );
      }
      Client->heldInputs.heldStances[(int)v6] = CL_STANCE_STAND;
    }
  }
}

/*
==============
CL_Input_PushHeldStance
==============
*/
void CL_Input_PushHeldStance(const LocalClientNum_t localClientNum, StanceState stance)
{
  ClActiveClient *Client; 
  unsigned int v4; 
  HeldStanceInputStack *p_heldInputs; 
  int stackIndex; 
  int v7; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( Client->heldInputs.stackIndex >= 2u )
  {
    v7 = 2;
    stackIndex = Client->heldInputs.stackIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( cl->heldInputs.stackIndex ) < (unsigned)( ( sizeof( *array_counter( cl->heldInputs.heldStances ) ) + 0 ) )", "cl->heldInputs.stackIndex doesn't index ARRAY_COUNT( cl->heldInputs.heldStances )\n\t%i not in [0, %i)", stackIndex, v7) )
      __debugbreak();
  }
  v4 = 0;
  p_heldInputs = &Client->heldInputs;
  do
  {
    if ( p_heldInputs->heldStances[0] == stance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 570, ASSERT_TYPE_ASSERT, "(cl->heldInputs.heldStances[i] != stance)", "%s\n\tAdding an held stance that is already in the stack", "cl->heldInputs.heldStances[i] != stance") )
      __debugbreak();
    ++v4;
    p_heldInputs = (HeldStanceInputStack *)((char *)p_heldInputs + 4);
  }
  while ( v4 < 2 );
  Client->heldInputs.heldStances[Client->heldInputs.stackIndex++] = stance;
}

/*
==============
CL_Input_RaiseStanceDown
==============
*/
void CL_Input_RaiseStanceDown(const LocalClientNum_t localClientNum, ClActiveClient *cl, int key, unsigned int time)
{
  __int64 v4; 
  ClActiveClient *Client; 
  unsigned int v9; 
  StanceState *v10; 
  int ControllerFromClient; 
  StanceState stance; 

  v4 = localClientNum;
  if ( CL_Input_IsValidStateForInput(localClientNum) )
  {
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
    v9 = 0;
    v10 = &Client->heldInputs.heldStances[1];
    do
    {
      v9 += 2;
      *(_QWORD *)(v10 - 1) = 0i64;
      v10 += 2;
    }
    while ( v9 < 2 );
    Client->heldInputs.stackIndex = 0;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
    *(_DWORD *)&cl->stanceHeld = 0;
    stance = cl->stance;
    cl->stanceTime = -1;
    if ( stance )
    {
      if ( stance == CL_STANCE_CROUCH )
      {
        cl->stance = CL_STANCE_STAND;
      }
      else if ( stance == CL_STANCE_PRONE )
      {
        cl->stance = CL_STANCE_CROUCH;
      }
      else if ( (unsigned int)(stance - 3) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 4081, ASSERT_TYPE_SANITY, "( cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD )", (const char *)&queryFormat, "cl->stance == CL_STANCE_SLIDE || cl->stance == CL_STANCE_SLIDE_NOHOLD") )
      {
        __debugbreak();
      }
    }
    else if ( GamerProfile_GetStanceUpJump(ControllerFromClient) )
    {
      CL_Input_KeyDown(&g_playersKb[v4][10], key, time);
    }
  }
}

/*
==============
CL_Input_RaiseStanceUp
==============
*/
void CL_Input_RaiseStanceUp(const LocalClientNum_t localClientNum, ClActiveClient *cl, int key, unsigned int time)
{
  kbutton_t *v4; 
  int v5; 
  int v6; 
  unsigned int msec; 
  unsigned int v8; 
  unsigned int v9; 

  v4 = &g_playersKb[localClientNum][10];
  g_lastInputTimeForAnyLocalPlayer = com_frameTime;
  v5 = v4->down[0];
  if ( v4->down[0] == key )
  {
    v4->down[0] = 0;
    v6 = v4->down[1];
  }
  else
  {
    if ( v4->down[1] != key )
      return;
    v6 = 0;
    v4->down[1] = 0;
    if ( v5 )
      return;
  }
  if ( !v6 )
  {
    msec = v4->msec;
    if ( time )
    {
      v8 = msec - v4->downtime;
      v4->active = 0;
      v4->msec = time + v8;
    }
    else
    {
      v9 = frame_msec >> 1;
      v4->active = 0;
      v4->msec = v9 + msec;
    }
    v4->mustRelease = 0;
  }
}

/*
==============
CL_Input_RefreshCommandIcons
==============
*/
void CL_Input_RefreshCommandIcons(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  char outIconName[64]; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
  ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "input.commands");
  v5 = LUI_Model_CreateModelFromPath(ModelFromPath, "useReloadIcon");
  if ( FontIcons_GetIconNameForDirective(localClientNum, "[{+usereload,+activate}]", 0x40ui64, outIconName) )
    LUI_Model_SetString(v5, outIconName);
  v6 = LUI_Model_CreateModelFromPath(ModelFromPath, "speedThrowIcon");
  if ( FontIcons_GetIconNameForDirective(localClientNum, "[{+speed_throw,+ads_akimbo_accessible,+toggleads_throw,toggleads}]", 0x40ui64, outIconName) )
    LUI_Model_SetString(v6, outIconName);
  v7 = LUI_Model_CreateModelFromPath(ModelFromPath, "fragIcon");
  if ( FontIcons_GetIconNameForDirective(localClientNum, "[{+frag}]", 0x40ui64, outIconName) )
    LUI_Model_SetString(v7, outIconName);
  v8 = LUI_Model_CreateModelFromPath(ModelFromPath, "smokeIcon");
  if ( FontIcons_GetIconNameForDirective(localClientNum, "[{+smoke}]", 0x40ui64, outIconName) )
    LUI_Model_SetString(v8, outIconName);
  v9 = LUI_Model_CreateModelFromPath(ModelFromPath, "attackIcon");
  if ( FontIcons_GetIconNameForDirective(localClientNum, "[{+attack,+attack_akimbo_accessible}]", 0x40ui64, outIconName) )
    LUI_Model_SetString(v9, outIconName);
  v10 = LUI_Model_CreateModelFromPath(ModelFromPath, "notifyUpdateConfig");
  notifyUpdateConfig = !notifyUpdateConfig;
  LUI_Model_SetBool(v10, notifyUpdateConfig);
}

/*
==============
CL_Input_RegisterCommands
==============
*/
void CL_Input_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_INPUT_CMD_COMMON, 0xBu);
}

/*
==============
CL_Input_RemoteControlMove
==============
*/
void CL_Input_RemoteControlMove(LocalClientNum_t localClientNum, usercmd_s *cmd, bool isSinglePlayer, ButtonSet *outClearButtons, float mx, float my)
{
  __int64 v20; 
  bool v25; 
  int ControllerFromClient; 
  char v31; 
  int v34; 
  int v37; 
  int v38; 
  const dvar_t *v43; 
  const dvar_t *v51; 
  ClActiveClient *Client; 
  float outHorzSensitivity; 
  char v135; 
  void *retaddr; 
  float outMx; 
  float outVertSensitivity; 
  float outMy; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rsp+100h+var_98+8], xmm11
  }
  v20 = localClientNum;
  __asm
  {
    vmovaps [rsp+100h+var_A8+8], xmm12
    vmovaps [rsp+100h+var_B8+8], xmm13
  }
  if ( *(_WORD *)&g_playersKb[v20][19].active )
    cmd->buttons |= 1ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x13u);
  if ( *(_WORD *)&g_playersKb[v20][24].active )
    cmd->buttons |= 0x100000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x18u);
  if ( g_playersKb[v20][65].active || g_playersKb[v20][65].wasPressed )
    cmd->buttons |= 0x100000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x41u);
  if ( g_playersKb[v20][26].active || g_playersKb[v20][26].wasPressed )
    cmd->buttons |= 8ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Au);
  if ( g_playersKb[v20][28].active || g_playersKb[v20][28].wasPressed )
    cmd->buttons |= 0x20ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Cu);
  if ( g_playersKb[v20][49].active || g_playersKb[v20][49].wasPressed )
    cmd->buttons |= 0x20000000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x31u);
  if ( g_playersKb[v20][27].active || g_playersKb[v20][27].wasPressed )
    cmd->buttons |= 0x10ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x1Bu);
  if ( g_playersKb[v20][25].active || g_playersKb[v20][25].wasPressed )
    cmd->buttons |= 4ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x19u);
  if ( g_playersKb[v20][45].active || g_playersKb[v20][45].wasPressed )
    cmd->buttons |= 0x100000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x2Du);
  if ( g_playersKb[v20][50].active || g_playersKb[v20][50].wasPressed )
    cmd->buttons |= 0x8000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x32u);
  if ( g_playersKb[v20][42].active || g_playersKb[v20][42].wasPressed )
    cmd->buttons |= 0x10000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x2Au);
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5169, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  if ( g_playersKb[v20][23].active || g_playersKb[v20][23].wasPressed )
    cmd->buttons |= 0x1000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x17u);
  if ( g_playersKb[v20][24].active || g_playersKb[v20][24].wasPressed )
    cmd->buttons |= 0x2000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x18u);
  if ( g_playersKb[v20][51].active || g_playersKb[v20][51].wasPressed )
    cmd->buttons |= 0x10000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x33u);
  if ( g_playersKb[v20][52].active || g_playersKb[v20][52].wasPressed )
    cmd->buttons |= 0x20000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x34u);
  if ( g_playersKb[v20][54].active || g_playersKb[v20][54].wasPressed )
    cmd->buttons |= 0x20000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x36u);
  if ( g_playersKb[v20][53].active || g_playersKb[v20][53].wasPressed )
    cmd->buttons |= 0x200000000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x35u);
  CL_Input_AddCurrentStanceToCmd(localClientNum, cmd);
  if ( g_playersKb[v20][37].active || g_playersKb[v20][37].wasPressed )
    cmd->buttons |= 1ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x25u);
  cmd->buttons |= 0x40000ui64;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rbp+47h+outMy], xmm7
    vmovss  [rbp+47h+outMx], xmm7
    vxorps  xmm10, xmm10, xmm10
    vxorps  xmm9, xmm9, xmm9
    vxorps  xmm8, xmm8, xmm8
  }
  v25 = (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  __asm
  {
    vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  xmm11, cs:__real@3f800000
  }
  if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) && (!CL_Keys_IsCatcherActive(localClientNum, 16) || v25) )
  {
    *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 3);
    __asm { vmovss  [rbp+47h+outMy], xmm0 }
    *(double *)&_XMM0 = CL_Input_GetClientLookInversion(localClientNum);
    __asm
    {
      vmulss  xmm1, xmm0, [rbp+47h+outMy]
      vmovss  [rbp+47h+outMy], xmm1
    }
    *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 2);
    __asm
    {
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  [rbp+47h+outMx], xmm1
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5201, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
      __debugbreak();
    *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 1);
    __asm { vmovaps xmm10, xmm0 }
    *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 0);
    __asm
    {
      vucomiss xmm10, xmm7
      vmovaps xmm9, xmm0
    }
    if ( v31 )
    {
      *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v20][2]);
      __asm { vmovaps xmm6, xmm0 }
      CL_Input_KeyState(&g_playersKb[v20][3]);
      __asm { vsubss  xmm10, xmm6, xmm0 }
    }
    __asm { vucomiss xmm9, xmm7 }
    if ( v31 )
    {
      *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v20][7]);
      __asm { vmovaps xmm6, xmm0 }
      CL_Input_KeyState(&g_playersKb[v20][6]);
      __asm { vsubss  xmm9, xmm6, xmm0 }
    }
    *(double *)&_XMM0 = CL_GamepadAxisValue(localClientNum, 5);
    __asm { vmovaps xmm8, xmm0 }
  }
  else
  {
    v34 = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( !GamerProfile_GetGamepadEnabled(v34) )
    {
      __asm
      {
        vmovss  xmm0, [rbp+47h+mx]
        vmovss  xmm1, [rbp+47h+my]
        vmovss  [rbp+47h+outMx], xmm0
        vmovss  [rbp+47h+outMy], xmm1
      }
      v37 = CL_Mgr_GetControllerFromClient(localClientNum);
      if ( !GamerProfile_GetGamepadEnabled(v37) )
      {
        v38 = CL_Mgr_GetControllerFromClient(localClientNum);
        *(double *)&_XMM0 = GamerProfile_GetMouseHorizontalSensitivity(v38);
        __asm
        {
          vmovss  [rbp+47h+outHorzSensitivity], xmm0
          vmovaps xmm6, xmm0
        }
        *(double *)&_XMM0 = GamerProfile_GetMouseVerticalSensitivity(v38);
        __asm
        {
          vmulss  xmm1, xmm0, xmm6
          vmovss  [rbp+47h+outVertSensitivity], xmm1
        }
        CL_Input_ApplyVehicleMouseSensitivityMultipliers(localClientNum, &outHorzSensitivity, &outVertSensitivity);
        __asm
        {
          vmovss  xmm2, [rbp+47h+outVertSensitivity]; sensitivityY
          vmovss  xmm1, [rbp+47h+outHorzSensitivity]; sensitivityX
        }
        CL_Input_ApplyGeneralMouseSensitivity(localClientNum, *(double *)&_XMM1, *(double *)&_XMM2, &outMx, &outMy);
      }
      if ( isSinglePlayer )
        AimAssist_UpdateMouseRaw(localClientNum, &outMx, &outMy);
      v43 = DVARFLT_m_pitch;
      if ( !DVARFLT_m_pitch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "m_pitch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v43);
      __asm
      {
        vmovss  xmm0, [rbp+47h+outMy]
        vmulss  xmm1, xmm0, dword ptr [rbx+28h]
        vmovss  [rbp+47h+outMy], xmm1
      }
      *(double *)&_XMM0 = CL_Input_GetClientLookInversion(localClientNum);
      __asm { vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000 }
      _RBX = DVARFLT_m_yaw;
      __asm
      {
        vxorps  xmm1, xmm0, xmm9
        vmulss  xmm1, xmm1, [rbp+47h+outMy]
        vmovss  [rbp+47h+outMy], xmm1
      }
      if ( !DVARFLT_m_yaw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "m_yaw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm0, dword ptr [rbx+28h] }
      v51 = DVARBOOL_scaledRemoteAnglesKbmEnabled;
      __asm
      {
        vxorps  xmm2, xmm0, xmm9
        vmulss  xmm2, xmm2, [rbp+47h+outMx]
        vmovss  [rbp+47h+outMx], xmm2
      }
      if ( !DVARBOOL_scaledRemoteAnglesKbmEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scaledRemoteAnglesKbmEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v51);
      if ( v51->current.enabled )
      {
        __asm
        {
          vmovss  xmm6, [rbp+47h+outMy]
          vandps  xmm0, xmm6, xmm12
          vaddss  xmm0, xmm0, xmm11; X
        }
        *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
        __asm
        {
          vcmpless xmm1, xmm7, xmm6
          vmovss  xmm6, [rbp+47h+outMx]
          vxorps  xmm2, xmm0, xmm9
          vblendvps xmm0, xmm2, xmm0, xmm1
          vandps  xmm1, xmm6, xmm12
          vmovss  [rbp+47h+outMy], xmm0
          vaddss  xmm0, xmm1, xmm11; X
        }
        *(float *)&_XMM0 = log10f_0(*(float *)&_XMM0);
        __asm
        {
          vxorps  xmm2, xmm0, xmm9
          vcmpless xmm1, xmm7, xmm6
          vblendvps xmm0, xmm2, xmm0, xmm1
          vmovss  [rbp+47h+outMx], xmm0
        }
      }
      if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5249, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
        __debugbreak();
      *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v20][2]);
      __asm { vmovaps xmm6, xmm0 }
      CL_Input_KeyState(&g_playersKb[v20][3]);
      __asm { vsubss  xmm10, xmm6, xmm0 }
      *(double *)&_XMM0 = CL_Input_KeyState(&g_playersKb[v20][7]);
      __asm { vmovaps xmm6, xmm0 }
      CL_Input_KeyState(&g_playersKb[v20][6]);
      __asm { vsubss  xmm9, xmm6, xmm0 }
    }
  }
  if ( isSinglePlayer )
  {
    if ( g_playersKb[v20][37].active || g_playersKb[v20][37].wasPressed )
      cmd->buttons |= 1ui64;
    g_playersKb[v20][37].wasPressed = 0;
  }
  __asm
  {
    vandps  xmm0, xmm8, xmm12
    vcomiss xmm0, cs:__real@3a83126f
  }
  if ( v25 && CL_Keys_IsCatcherActive(localClientNum, 16) )
  {
    __asm
    {
      vmovss  [rbp+47h+outMy], xmm7
      vmovss  [rbp+47h+outMx], xmm7
    }
  }
  else
  {
    __asm { vmovss  xmm7, [rbp+47h+outMy] }
  }
  __asm
  {
    vmovss  xmm6, cs:__real@bf800000
    vmovaps xmm1, xmm6; min
    vmovaps xmm2, xmm11; max
    vmovaps xmm0, xmm7; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm2, xmm11; max
    vmovaps xmm1, xmm6; min
    vxorps  xmm7, xmm7, xmm7
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  xmm12, cs:__real@42fe0000
    vmovss  xmm13, cs:__real@3f000000
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm2, xmm1, xmm13
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm2
    vmovss  xmm0, [rbp+47h+outMx]; val
    vroundss xmm3, xmm7, xmm1, 1
    vcvttss2si eax, xmm3
    vmovaps xmm2, xmm11; max
    vmovaps xmm1, xmm6; min
  }
  cmd->remoteControlAngles[0] = _EAX;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm2, xmm11; max
    vmovaps xmm1, xmm6; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm3, xmm1, xmm13
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm1, xmm7, xmm0, 1
    vcvttss2si eax, xmm1
  }
  cmd->remoteControlAngles[1] = _EAX;
  if ( !Com_GameMode_SupportsFeature(WEAPON_ANIM_SCRIPTED) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5305, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VEHICLE_REMOTE_CONTROL )") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm11; max
    vmovaps xmm1, xmm6; min
    vmovaps xmm0, xmm10; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm3, xmm1, xmm13
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm1, xmm7, xmm0, 1
    vcvttss2si eax, xmm1
    vmovaps xmm1, xmm6; min
    vmovaps xmm2, xmm11; max
    vmovaps xmm0, xmm9; val
  }
  cmd->remoteControlMove[0] = _EAX;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm3, xmm0, xmm12
    vaddss  xmm5, xmm3, xmm13
    vxorps  xmm4, xmm4, xmm4
    vmovss  xmm0, xmm4, xmm5
    vroundss xmm3, xmm7, xmm0, 1
    vcvttss2si eax, xmm3
    vmovaps xmm2, xmm11; max
    vmovaps xmm1, xmm6; min
    vmovaps xmm0, xmm8; val
  }
  cmd->remoteControlMove[1] = _EAX;
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmulss  xmm1, xmm0, xmm12
    vaddss  xmm3, xmm1, xmm13
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, xmm2, xmm3
    vroundss xmm1, xmm7, xmm0, 1
    vcvttss2si eax, xmm1
  }
  cmd->remoteControlMove[2] = _EAX;
  CL_Input_ClearUsingAdsFlag(localClientNum);
  Client = ClActiveClient::GetClient(localClientNum);
  _R11 = &v135;
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
  }
  Client->autoForward = 0;
}

/*
==============
CL_Input_SetExtrapolationCommand
==============
*/
void CL_Input_SetExtrapolationCommand(ClActiveClient *cl, const usercmd_s *const cmd, const int deltaTime)
{
  __int64 v7; 

  _RBX = cmd;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5332, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5333, ASSERT_TYPE_ASSERT, "(cmd)", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  _RCX = &cl->extrapCmd;
  v7 = 2i64;
  do
  {
    _RCX = (usercmd_s *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RBX = (const usercmd_s *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rbx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rbx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rbx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rbx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rbx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rbx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v7;
  }
  while ( v7 );
  _RCX->buttons = _RBX->buttons;
  cl->extrapCmd.commandTime = deltaTime + cl->cmdTimeMsec;
}

/*
==============
CL_Input_SetGamepadEnabled
==============
*/
void CL_Input_SetGamepadEnabled(int controllerIndex, bool enabled)
{
  LocalClientNum_t ClientFromController; 
  int i; 
  LocalClientNum_t v6; 
  const char *v7; 
  LocalClientNum_t outLocalClientNum; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  CL_Input_SetGamepadEnabled_Internal(ClientFromController, controllerIndex, enabled);
  if ( !enabled )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( controllerIndex != i && CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) )
      {
        v6 = outLocalClientNum;
        v7 = j_va("profile_toggleEnableGamepad %d", 1i64);
        Cbuf_ExecuteBufferInternal(v6, i, v7, 0, 0);
        if ( v6 == LOCAL_CLIENT_0 )
          CrashReport_AddKVP("Input", "gamepad");
      }
    }
    LUI_CoD_SetCurrentLocalClient(ClientFromController);
  }
}

/*
==============
CL_Input_SetGamepadEnabled_Internal
==============
*/
void CL_Input_SetGamepadEnabled_Internal(const LocalClientNum_t localClientNum, const int controllerIndex, const bool enabled)
{
  const char *v6; 
  const char *v7; 

  v6 = j_va("profile_toggleEnableGamepad %d", enabled);
  Cbuf_ExecuteBufferInternal(localClientNum, controllerIndex, v6, 0, 0);
  if ( localClientNum == LOCAL_CLIENT_0 )
  {
    v7 = "kb+m";
    if ( enabled )
      v7 = "gamepad";
    CrashReport_AddKVP("Input", v7);
  }
}

/*
==============
CL_Input_ShowSystemCursor
==============
*/

void __fastcall CL_Input_ShowSystemCursor(int show)
{
  IN_ShowSystemCursor(show);
}

/*
==============
CL_Input_SlideToHoldProneUpdate
==============
*/
char CL_Input_SlideToHoldProneUpdate(const LocalClientNum_t localClientNum, ClActiveClient *cl, StanceState *wantedState)
{
  const dvar_t *v4; 
  ClActiveClient *Client; 
  cg_t *LocalClientGlobals; 
  int *p_commandTime; 
  const SuitDef *SuitDef; 
  int v11; 
  int slide_proneDelayMs; 
  int v13; 
  __int64 v15; 
  __int64 v16; 

  *wantedState = CL_STANCE_STAND;
  v4 = DCONST_DVARBOOL_cl_slideToProneEnabled;
  if ( !DCONST_DVARBOOL_cl_slideToProneEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_slideToProneEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  Client = ClActiveClient::GetClient(localClientNum);
  if ( *((_DWORD *)&Client->ignoreStanceInput + Client->heldInputs.stackIndex) != 2 )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_commandTime = &LocalClientGlobals->predictedPlayerState.commandTime;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 805, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  SuitDef = BG_GetSuitDef(p_commandTime[221]);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 808, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
    __debugbreak();
  if ( SuitDef->slide_disableProneTransition )
    return 0;
  if ( p_commandTime[245] > p_commandTime[246] )
    return 0;
  v11 = CG_GetLocalClientGlobals(localClientNum)->time - p_commandTime[246];
  if ( v11 < 0 )
    return 0;
  slide_proneDelayMs = SuitDef->slide_proneDelayMs;
  v13 = slide_proneDelayMs + SuitDef->slide_proneButtonCheckTimeMs;
  if ( slide_proneDelayMs < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 835, ASSERT_TYPE_ASSERT, "( startWindowMs ) >= ( 0 )", "%s >= %s\n\t%i, %i", "startWindowMs", "0", slide_proneDelayMs, 0i64) )
    __debugbreak();
  if ( slide_proneDelayMs > v13 )
  {
    LODWORD(v16) = v13;
    LODWORD(v15) = slide_proneDelayMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 836, ASSERT_TYPE_ASSERT, "( startWindowMs ) <= ( endWindowMs )", "%s <= %s\n\t%i, %i", "startWindowMs", "endWindowMs", v15, v16) )
      __debugbreak();
  }
  if ( v13 < 0 )
  {
    LODWORD(v15) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 837, ASSERT_TYPE_ASSERT, "( endWindowMs ) >= ( 0 )", "%s >= %s\n\t%i, %i", "endWindowMs", "0", v15, 0i64) )
      __debugbreak();
  }
  if ( v11 < slide_proneDelayMs )
  {
    *wantedState = CL_STANCE_CROUCH;
    return 1;
  }
  if ( v11 > v13 || !CL_GameInterface_Input_DoSlideToProne(localClientNum, cl) )
    return 0;
  *wantedState = CL_STANCE_PRONE;
  return 1;
}

/*
==============
CL_Input_SlideToProneUpdate
==============
*/
char CL_Input_SlideToProneUpdate(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  const dvar_t *v4; 
  cg_t *LocalClientGlobals; 
  int *p_commandTime; 
  const SuitDef *SuitDef; 
  int v8; 
  int slide_proneDelayMs; 
  int v10; 
  __int64 v12; 
  __int64 v13; 

  if ( cl->stanceHeld && !cl->crouchToggle )
  {
    v4 = DCONST_DVARBOOL_cl_slideToProneEnabled;
    if ( !DCONST_DVARBOOL_cl_slideToProneEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_slideToProneEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled && cl->stance )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      p_commandTime = &LocalClientGlobals->predictedPlayerState.commandTime;
      if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3796, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      SuitDef = BG_GetSuitDef(p_commandTime[221]);
      if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3799, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
        __debugbreak();
      if ( !SuitDef->slide_disableProneTransition && p_commandTime[245] <= p_commandTime[246] )
      {
        v8 = CG_GetLocalClientGlobals(localClientNum)->time - p_commandTime[246];
        if ( v8 >= 0 )
        {
          slide_proneDelayMs = SuitDef->slide_proneDelayMs;
          v10 = slide_proneDelayMs + SuitDef->slide_proneButtonCheckTimeMs;
          if ( slide_proneDelayMs < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3826, ASSERT_TYPE_ASSERT, "( startWindowMs ) >= ( 0 )", "%s >= %s\n\t%i, %i", "startWindowMs", "0", slide_proneDelayMs, 0i64) )
            __debugbreak();
          if ( slide_proneDelayMs > v10 )
          {
            LODWORD(v13) = v10;
            LODWORD(v12) = slide_proneDelayMs;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3827, ASSERT_TYPE_ASSERT, "( startWindowMs ) <= ( endWindowMs )", "%s <= %s\n\t%i, %i", "startWindowMs", "endWindowMs", v12, v13) )
              __debugbreak();
          }
          if ( v10 < 0 )
          {
            LODWORD(v12) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3828, ASSERT_TYPE_ASSERT, "( endWindowMs ) >= ( 0 )", "%s >= %s\n\t%i, %i", "endWindowMs", "0", v12, 0i64) )
              __debugbreak();
          }
          if ( v8 < slide_proneDelayMs )
            return 1;
          if ( v8 <= v10 && CL_GameInterface_Input_DoSlideToProne(localClientNum, cl) )
          {
            cl->stance = CL_STANCE_PRONE;
            *(_WORD *)&cl->stanceHeld = 0;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
CL_Input_StanceUpdate
==============
*/
void CL_Input_StanceUpdate(const LocalClientNum_t localClientNum, ClActiveClient *cl)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  __int64 v6; 
  bool active; 
  bool v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  __int16 groundEntityNum; 
  bool v13; 
  __int16 v14; 
  const dvar_t *v15; 
  const char *v16; 
  int ControllerFromClient; 
  bool GamepadEnabled; 
  int v19; 
  bool TapToSlideEnabledGamepad; 
  int v21; 
  int Int_Internal_DebugName; 
  StanceState stanceOnButtonDown; 
  int stanceTime; 
  int v25; 
  StanceState v26; 

  v2 = localClientNum;
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3859, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3862, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( p_predictedPlayerState->pm_type >= 7 )
  {
    cl->stance = CL_STANCE_STAND;
    return;
  }
  if ( !CL_Input_SlideToProneUpdate((const LocalClientNum_t)v2, cl) )
  {
    v6 = v2;
    active = g_playersKb[v2][36].active;
    v8 = active || g_playersKb[v6][36].wasPressed;
    v9 = cl->wasSprinting && cl->stanceOnButtonDown == CL_STANCE_STAND;
    if ( !cl->stanceHeld && !v8 && !v9 )
    {
      if ( cl->crouchHoldReleased && cl->stance == CL_STANCE_CROUCH )
      {
        cl->stance = CL_STANCE_STAND;
        cl->crouchHoldReleased = 0;
      }
      return;
    }
    v10 = (unsigned int)(cl->stance - 3) <= 1;
    if ( !v8 )
      goto LABEL_34;
    g_playersKb[v6][36].wasPressed = 0;
    if ( !cl->requireSlideRelease || !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x1Du) )
    {
      v11 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 0x14u);
      groundEntityNum = p_predictedPlayerState->groundEntityNum;
      v13 = v11;
      if ( Slide_IsEnabled(p_predictedPlayerState) && (v13 || v10 || groundEntityNum == 2047) )
      {
        cl->stance = CL_STANCE_SLIDE_NOHOLD;
        if ( active )
          cl->requireSlideRelease = 1;
      }
      if ( cl->stanceHeld )
      {
LABEL_34:
        v14 = p_predictedPlayerState->groundEntityNum;
        if ( v14 == 2047 )
        {
          v15 = DCONST_DVARMPSPINT_slide_hold_change_stance_time_air_ms;
          v16 = "slide_hold_change_stance_time_air_ms";
        }
        else
        {
          if ( cl->wasSprinting )
          {
            ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
            GamepadEnabled = GamerProfile_GetGamepadEnabled(ControllerFromClient);
            v19 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
            if ( GamepadEnabled )
              TapToSlideEnabledGamepad = GamerProfile_GetTapToSlideEnabledGamepad(v19);
            else
              TapToSlideEnabledGamepad = GamerProfile_GetTapToSlideEnabledKeyboard(v19);
            if ( TapToSlideEnabledGamepad )
            {
              v21 = 0;
LABEL_50:
              stanceTime = cl->stanceTime;
              if ( (int)(com_frameTime - stanceTime) >= v21 && (v21 <= 0 || stanceTime >= 0) )
              {
                if ( Slide_IsEnabled(p_predictedPlayerState) && (cl->wasSprinting || v10 || v14 == 2047) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->pm_flags, ACTIVE, 6u) )
                {
                  cl->wasSprinting = 0;
                  cl->stance = CL_STANCE_SLIDE;
                  if ( v9 )
                    cl->requireSlideRelease = 1;
                }
                else
                {
                  v25 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
                  if ( GamerProfile_GetGamepadEnabled(v25) || !cl->crouchToggle )
                  {
                    v26 = CL_STANCE_PRONE;
                    if ( cl->stanceOnButtonDown == CL_STANCE_PRONE )
                      v26 = CL_STANCE_STAND;
                    cl->stance = v26;
                  }
                }
                if ( cl->stance != CL_STANCE_SLIDE )
                  *(_WORD *)&cl->stanceHeld = 0;
              }
              return;
            }
            Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARMPSPINT_slide_hold_change_stance_time_ms, "slide_hold_change_stance_time_ms");
LABEL_49:
            v21 = Int_Internal_DebugName;
            goto LABEL_50;
          }
          stanceOnButtonDown = cl->stanceOnButtonDown;
          if ( stanceOnButtonDown )
          {
            if ( stanceOnButtonDown == CL_STANCE_PRONE )
            {
              v15 = DCONST_DVARINT_cl_stanceProneToStandHoldTime;
              v16 = "cl_stanceProneToStandHoldTime";
            }
            else
            {
              v15 = DCONST_DVARINT_cl_stanceCrouchToProneHoldTime;
              v16 = "cl_stanceCrouchToProneHoldTime";
            }
          }
          else
          {
            v15 = DCONST_DVARINT_stanceStandToProneHoldTime;
            v16 = "stanceStandToProneHoldTime";
          }
        }
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v15, v16);
        goto LABEL_49;
      }
    }
  }
}

/*
==============
CL_Input_ToggleStance
==============
*/
void CL_Input_ToggleStance(LocalClientNum_t localClientNum, StanceState preferredStance)
{
  ClActiveClient *Client; 
  ClActiveClient *v5; 
  unsigned int v6; 
  StanceState *v7; 

  Client = ClActiveClient::GetClient(localClientNum);
  v5 = ClActiveClient::GetClient(localClientNum);
  v6 = 0;
  v7 = &v5->heldInputs.heldStances[1];
  do
  {
    v6 += 2;
    *(_QWORD *)(v7 - 1) = 0i64;
    v7 += 2;
  }
  while ( v6 < 2 );
  v5->heldInputs.stackIndex = 0;
  if ( Client->stance == preferredStance )
    preferredStance = CL_STANCE_STAND;
  Client->stance = preferredStance;
}

/*
==============
CL_Input_UnregisterCommands
==============
*/
void CL_Input_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_INPUT_CMD_COMMON, 0xBu);
}

/*
==============
CL_Input_UpdateCmdBreathButton
==============
*/
void CL_Input_UpdateCmdBreathButton(LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( g_playersKb[v2][20].active || g_playersKb[v2][20].wasPressed )
    cmd->buttons |= 0x800ui64;
}

/*
==============
CL_Input_UpdateCmdButton
==============
*/
void CL_Input_UpdateCmdButton(LocalClientNum_t localClientNum, unsigned __int64 *cmdButtons, int kbButton, unsigned __int64 buttonFlag, ButtonSet *outClearButtons)
{
  __int64 v5; 

  v5 = 68i64 * (int)localClientNum;
  if ( g_playersKb[0][kbButton + v5].active || g_playersKb[0][kbButton + v5].wasPressed )
    *cmdButtons |= buttonFlag;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, kbButton);
}

/*
==============
CL_Input_UpdateCmdButtonConditionalDelay
==============
*/
void CL_Input_UpdateCmdButtonConditionalDelay(__int64 localClientNum, unsigned __int64 *cmdButtons, int kbButton, unsigned __int64 buttonFlag, bool (*cmdConditionFunc)(LocalClientNum_t, unsigned __int64), int stickyDurationMs, int *inOutRegisterTime)
{
  __int64 v9; 
  __int64 v10; 
  unsigned int downtime; 
  int v12; 

  v9 = 68i64 * (int)localClientNum;
  v10 = kbButton;
  downtime = g_playersKb[0][v10 + v9].downtime;
  v12 = com_frameTime - downtime;
  if ( g_playersKb[0][v10 + v9].active || *inOutRegisterTime < downtime )
  {
    if ( !cmdConditionFunc || cmdConditionFunc((LocalClientNum_t)localClientNum, *cmdButtons) )
    {
      *cmdButtons |= buttonFlag;
    }
    else if ( v12 < stickyDurationMs )
    {
      return;
    }
    *inOutRegisterTime = com_frameTime;
  }
}

/*
==============
CL_Input_UpdateCmdOffHandButtons
==============
*/
void CL_Input_UpdateCmdOffHandButtons(LocalClientNum_t localClientNum, usercmd_s *cmd, ButtonSet *outClearButtons)
{
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  int entity; 
  int ControllerFromClient; 
  bool v11; 
  signed int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  char v16; 
  __int64 v17; 
  signed int v18; 
  const char *CurrentButtonLayout; 
  bool v20; 
  ClActiveClient *Client; 
  int v22; 
  const dvar_t *v23; 
  int integer; 
  bool mustRelease; 
  __int64 v26; 
  unsigned int v27; 
  bool active; 
  unsigned int v29; 
  int kbButton; 

  v3 = localClientNum;
  v4 = 1632i64 * (int)localClientNum;
  v7 = localClientNum;
  if ( *(_WORD *)&g_playersKb[v4 / 0x660][45].active )
    cmd->buttons |= 0x100000000ui64;
  bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x2Du);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  v11 = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER|0x80) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    if ( GamerProfile_GetGamepadEnabled(ControllerFromClient) && entity == 2047 )
      v11 = 1;
  }
  v12 = -1;
  if ( g_playersKb[v4 / 0x660][65].active || g_playersKb[v4 / 0x660][65].wasPressed )
    v13 = com_frameTime - g_playersKb[v4 / 0x660][65].downtime;
  else
    v13 = -1;
  v14 = v13 >> 31;
  v15 = 4096;
  if ( LocalClientGlobals->equipSelectInAlt )
    v15 = 0x2000;
  v16 = v14 ^ 1;
  v17 = 24i64;
  v29 = v15;
  if ( v16 )
    v17 = 66i64;
  kbButton = v17;
  if ( !v11 )
  {
    active = g_playersKb[v4 / 0x660][23].active;
    if ( !v16 )
    {
      if ( active || g_playersKb[v4 / 0x660][23].wasPressed )
        cmd->buttons |= 0x1000ui64;
      bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x17u);
      if ( g_playersKb[v4 / 0x660][24].active || g_playersKb[v4 / 0x660][24].wasPressed )
        cmd->buttons |= 0x2000ui64;
      v27 = 24;
      goto LABEL_61;
    }
    if ( !active && !g_playersKb[v4 / 0x660][23].wasPressed )
      goto LABEL_40;
    v26 = v15;
    goto LABEL_39;
  }
  if ( g_playersKb[v4 / 0x660][23].active || g_playersKb[v4 / 0x660][23].wasPressed )
    v18 = com_frameTime - g_playersKb[v4 / 0x660][23].downtime;
  else
    v18 = -1;
  if ( g_playersKb[0][v17 + v4 / 0x18].active || g_playersKb[0][v17 + v4 / 0x18].wasPressed )
    v12 = com_frameTime - g_playersKb[0][v17 + v4 / 0x18].downtime;
  if ( v18 > -1 && v12 > -1 )
  {
    cmd->buttons |= 0x100000000ui64;
    *(_WORD *)&g_playersKb[v4 / 0x660][23].wasPressed = 256;
    *(_WORD *)&g_playersKb[v7][v17].wasPressed = 256;
    CurrentButtonLayout = GamerProfile_GetCurrentButtonLayout(v3);
    v20 = I_strstr(CurrentButtonLayout, "buttons_br_ping_lb") != NULL;
    Client = ClActiveClient::GetClient((const LocalClientNum_t)v3);
    v22 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    Client->mustNotActivatePing = GamerProfile_GetGamepadEnabled(v22) && v20;
    goto LABEL_62;
  }
  v23 = DCONST_DVARINT_cl_specialOffhandDelay;
  if ( !DCONST_DVARINT_cl_specialOffhandDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_specialOffhandDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  integer = v23->current.integer;
  mustRelease = g_playersKb[v4 / 0x660][23].mustRelease;
  if ( v16 )
  {
    if ( mustRelease || v18 <= integer )
      goto LABEL_62;
    if ( !g_playersKb[v4 / 0x660][23].active && !g_playersKb[v4 / 0x660][23].wasPressed )
      goto LABEL_40;
    v26 = v29;
LABEL_39:
    cmd->buttons |= v26;
LABEL_40:
    bitarray_base<bitarray<96>>::setBit(outClearButtons, 0x17u);
    v27 = 23;
LABEL_61:
    bitarray_base<bitarray<96>>::setBit(outClearButtons, v27);
    goto LABEL_62;
  }
  if ( !mustRelease && v18 > integer )
  {
    if ( g_playersKb[v4 / 0x660][23].active || g_playersKb[v4 / 0x660][23].wasPressed )
      cmd->buttons |= 0x1000ui64;
    v27 = 23;
    goto LABEL_61;
  }
  if ( !g_playersKb[v3][kbButton].mustRelease && v12 > integer )
    CL_Input_UpdateCmdButton((LocalClientNum_t)v3, &cmd->buttons, kbButton, 0x2000ui64, outClearButtons);
LABEL_62:
  outClearButtons->array[2] |= 0x60000000u;
  CL_GameInterface_Input_UpdateCmdOffHandButtons((LocalClientNum_t)v3, cmd);
}

/*
==============
CL_Input_UpdateCmdTime
==============
*/
void CL_Input_UpdateCmdTime(const unsigned __int64 usec)
{
  int v1; 
  ClActiveClient **v2; 
  bool v3; 
  connstate_t *p_connectionState; 
  ClActiveClient *v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = 0;
  v2 = ClActiveClient::ms_activeClients;
  v3 = 1;
  p_connectionState = &clientUIActives[0].connectionState;
  do
  {
    if ( !v3 )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( *(int *)p_connectionState >= 3 )
    {
      if ( (unsigned int)v1 >= LODWORD(cl_maxLocalClients) )
      {
        *(float *)&v8 = cl_maxLocalClients;
        LODWORD(v7) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !(_BYTE)ClActiveClient::ms_activeClientType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 323, ASSERT_TYPE_ASSERT, "(ms_activeClientType != GameModeType::NONE)", (const char *)&queryFormat, "ms_activeClientType != GameModeType::NONE") )
        __debugbreak();
      if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 324, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
        __debugbreak();
      v6 = *v2;
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING) || !CL_Pause_IsGamePaused() || v6->GetFreeMoveType(v6) )
      {
        if ( v6 )
        {
          v6->UpdateCommandTime(v6, usec);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 185, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
        {
          __debugbreak();
        }
      }
    }
    ++v1;
    p_connectionState += 110;
    ++v2;
    v3 = (unsigned int)v1 < 2;
  }
  while ( v1 < 2 );
}

/*
==============
CL_Input_UpdateCursorHintBinding
==============
*/
void CL_Input_UpdateCursorHintBinding(LocalClientNum_t localClientNum, HintType cursorHint, int kb)
{
  __int64 v3; 
  kbutton_t *v6; 
  int ActiveBinding; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v3 = localClientNum;
  if ( (unsigned int)kb >= 0xFF )
  {
    v11 = 255;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2742, ASSERT_TYPE_ASSERT, "(unsigned)( kb ) < (unsigned)( BIND_COUNT )", "kb doesn't index BIND_COUNT\n\t%i not in [0, %i)", kb, v11) )
      __debugbreak();
  }
  v6 = &g_playersKb[v3][41];
  if ( v6->down[0] >= 0x100u )
  {
    LODWORD(v10) = 256;
    LODWORD(v8) = v6->down[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2746, ASSERT_TYPE_ASSERT, "(unsigned)( cursorHintButton->down[0] ) < (unsigned)( 256 )", "cursorHintButton->down[0] doesn't index MAX_KEYS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( v6->down[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 2747, ASSERT_TYPE_ASSERT, "(cursorHintButton->down[1] == 0)", (const char *)&queryFormat, "cursorHintButton->down[1] == 0") )
    __debugbreak();
  ActiveBinding = CL_Keys_GetActiveBinding((LocalClientNum_t)v3, v6->down[0]);
  if ( !kb || kb != ActiveBinding || cursorHint == HINT_NONE )
  {
    *(_WORD *)&v6->active = 0;
    *(_QWORD *)v6->down = 0i64;
    *(_QWORD *)&v6->downtime = 0i64;
    v6->flags = 0;
  }
}

/*
==============
CL_Input_UpdateMouseWheelSustainState
==============
*/

void __fastcall CL_Input_UpdateMouseWheelSustainState(LocalClientNum_t localClientNum, double deltaTime, double _XMM2_8)
{
  __asm
  {
    vmovaps [rsp+38h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( ClActiveClient::GetClient(localClientNum) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+64h]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm0, xmm2
      vsubss  xmm0, xmm0, xmm6
      vcomiss xmm0, xmm2
      vmovss  dword ptr [rax+64h], xmm0
    }
  }
  __asm { vmovaps xmm6, [rsp+38h+var_18] }
}

/*
==============
CL_Input_UpdateViewAnglesAxis
==============
*/

float __fastcall CL_Input_UpdateViewAnglesAxis(ClActiveClient *cl, const AngleAxisName axis, double maxAxisSpeed, const bool useCombinedCameraRotationSpeed, const float capAxisSpeed)
{
  bool v16; 
  bool v17; 
  bool v18; 
  bool v22; 
  bool v27; 
  bool v28; 
  __int64 v58; 
  double v59; 
  double v60; 
  __int64 v61; 
  double v62; 
  double v63; 
  double v64; 
  double v65; 
  char v67; 
  void *retaddr; 
  int capAxisSpeeda; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = cl;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  _RBX = axis;
  __asm { vmovaps xmm7, xmm2 }
  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5407, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v16 = (_DWORD)_RBX == 0;
  v17 = (unsigned int)_RBX <= 1;
  if ( (unsigned int)_RBX > 1 )
  {
    LODWORD(v58) = _RBX;
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5408, ASSERT_TYPE_ASSERT, "( ( axis >= PITCH && axis <= YAW ) )", "( axis ) = %i", v58);
    v16 = 0;
    v17 = !v18;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovsd  xmm10, cs:__real@47efffffe0000000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm7, xmm9
    vxorpd  xmm11, xmm11, xmm11
  }
  if ( v16 )
    goto LABEL_52;
  __asm { vcomiss xmm7, cs:__real@7f7fffff }
  if ( !v17 )
  {
LABEL_52:
    __asm
    {
      vmovsd  [rsp+0B8h+var_80], xmm10
      vcvtss2sd xmm0, xmm7, xmm7
      vmovsd  [rsp+0B8h+var_88], xmm11
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5409, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( maxAxisSpeed ) && ( maxAxisSpeed ) <= ( 3.402823466e+38F )", "maxAxisSpeed not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", v59, v62, v64);
    v17 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+0B8h+capAxisSpeed]
    vcomiss xmm6, xmm9
    vcomiss xmm6, cs:__real@7f7fffff
  }
  if ( !v17 )
  {
    __asm
    {
      vmovsd  [rsp+0B8h+var_80], xmm10
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+0B8h+var_88], xmm11
      vmovsd  [rsp+0B8h+var_90], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 5410, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( capAxisSpeed ) && ( capAxisSpeed ) <= ( 3.402823466e+38F )", "capAxisSpeed not in [0.0f, FLT_MAX]\n\t%g not in [%g, %g]", v60, v63, v65) )
      __debugbreak();
  }
  _RSI = DCONST_DVARFLT_cl_maxAccumulatedMouseInput;
  if ( !DCONST_DVARFLT_cl_maxAccumulatedMouseInput && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_maxAccumulatedMouseInput") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  _ER15 = 1;
  __asm { vmovss  xmm10, dword ptr [rsi+28h] }
  v27 = (unsigned int)_RBX <= 2;
  if ( (unsigned int)_RBX >= 2 )
  {
    LODWORD(v61) = 2;
    LODWORD(v58) = _RBX;
    v28 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61);
    v27 = !v28;
    if ( v28 )
      __debugbreak();
  }
  __asm
  {
    vcomiss xmm7, xmm9
    vmovss  xmm4, dword ptr [rdi+rbx*4+1C8h]
  }
  if ( !v27 )
  {
    if ( !useCombinedCameraRotationSpeed )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm6, xmm1, cs:__real@3a83126f
      }
    }
    goto LABEL_26;
  }
  if ( useCombinedCameraRotationSpeed )
  {
LABEL_26:
    __asm
    {
      vxorps  xmm0, xmm6, cs:__xmm@80000000800000008000000080000000
      vminss  xmm1, xmm6, xmm4
      vmaxss  xmm4, xmm1, xmm0
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@bf800000
    vmovd   xmm1, r15d
    vmovd   xmm0, ebx
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm7, xmm1, xmm2, xmm3
    vmovss  [rsp+0B8h+capAxisSpeed], xmm7
    vmulss  xmm6, xmm4, xmm7
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 283, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v61) = 3;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  __asm
  {
    vaddss  xmm1, xmm6, [rsp+0B8h+capAxisSpeed]
    vmovss  [rsp+0B8h+capAxisSpeed], xmm1
  }
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v61) = 3;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  LODWORD(_RDI->clViewangles.clViewangles.v[_RBX]) = capAxisSpeeda ^ ((_RDI->clviewangles_aab ^ ((_DWORD)_RDI + 4 * _RBX + 428)) * ((_RDI->clviewangles_aab ^ ((_DWORD)_RDI + 4 * _RBX + 428)) + 2));
  if ( (unsigned int)_RBX >= 3 )
  {
    LODWORD(v61) = 3;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  __asm
  {
    vmovss  dword ptr [rdi+rbx*4+1BCh], xmm6
    vmulss  xmm6, xmm6, xmm7
  }
  if ( (unsigned int)_RBX >= 2 )
  {
    LODWORD(v61) = 2;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+rbx*4+1C8h]
    vsubss  xmm1, xmm0, xmm6
    vmovss  dword ptr [rdi+rbx*4+1C8h], xmm1
  }
  if ( (unsigned int)_RBX >= 2 )
  {
    LODWORD(v61) = 2;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm1, xmm10, cs:__xmm@80000000800000008000000080000000; min
    vmovss  xmm0, dword ptr [rdi+rbx*4+1C8h]; val
    vmovaps xmm2, xmm10; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm7, xmm0 }
  if ( (unsigned int)_RBX >= 2 )
  {
    LODWORD(v61) = 2;
    LODWORD(v58) = _RBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v58, v61) )
      __debugbreak();
  }
  _R11 = &v67;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovss  dword ptr [rdi+rbx*4+1C8h], xmm7
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm0, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CL_Input_UseHighLowZoomSensitivity
==============
*/
char CL_Input_UseHighLowZoomSensitivity(LocalClientNum_t localClientNum, float *outSensitivity)
{
  __int64 v5; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v8; 
  char v10; 
  char v11; 
  bool IsUsingOffhandGestureWeaponADSSupport; 
  const Weapon *OffhandGestureWeapon; 
  const Weapon *v14; 
  int ControllerFromClient; 
  bool v16; 
  CgHandler *Handler; 
  char v20; 
  int v21; 

  v5 = localClientNum;
  _R14 = outSensitivity;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v5];
  *(double *)&_XMM0 = BG_GetWeaponOrOffhandAdsFrac(v8, p_predictedPlayerState);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm0, xmm1
  }
  if ( v10 | v11 )
  {
    *_R14 = 1.0;
    return 0;
  }
  else
  {
    __asm { vmovaps [rsp+68h+var_28], xmm6 }
    IsUsingOffhandGestureWeaponADSSupport = BG_IsUsingOffhandGestureWeaponADSSupport(v8, p_predictedPlayerState);
    if ( IsUsingOffhandGestureWeaponADSSupport )
      OffhandGestureWeapon = BG_GetOffhandGestureWeapon(v8, p_predictedPlayerState);
    else
      OffhandGestureWeapon = BG_GetCurrentWeaponForPlayer(v8, p_predictedPlayerState);
    v14 = OffhandGestureWeapon;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
    v16 = BG_UsingAlternate(p_predictedPlayerState) && !IsUsingOffhandGestureWeaponADSSupport;
    Handler = CgHandler::getHandler((LocalClientNum_t)v5);
    *(double *)&_XMM0 = BG_ADSZoomFov(Handler, p_predictedPlayerState, v14, v16);
    _RBX = DCONST_DVARFLT_cl_highAdsZoomFovLimit;
    __asm { vmovaps xmm6, xmm0 }
    if ( !DCONST_DVARFLT_cl_highAdsZoomFovLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_highAdsZoomFovLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    v20 = v10 | v11;
    v21 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
    __asm { vmovaps xmm6, [rsp+68h+var_28] }
    if ( GamerProfile_GetGamepadEnabled(v21) )
    {
      if ( v20 )
      {
        *(double *)&_XMM0 = GamerProfile_GetAdsHighZoomGamepadSensitivityMultiplier(ControllerFromClient);
        __asm { vmovss  dword ptr [r14], xmm0 }
      }
      else
      {
        *(double *)&_XMM0 = GamerProfile_GetAdsLowZoomGamepadSensitivityMultiplier(ControllerFromClient);
        __asm { vmovss  dword ptr [r14], xmm0 }
      }
      return 1;
    }
    else
    {
      if ( v20 )
      {
        *(double *)&_XMM0 = GamerProfile_GetAdsHighZoomMouseSensitivityMultiplier(ControllerFromClient);
        __asm { vmovss  dword ptr [r14], xmm0 }
      }
      else
      {
        *(double *)&_XMM0 = GamerProfile_GetAdsLowZoomMouseSensitivityMultiplier(ControllerFromClient);
        __asm { vmovss  dword ptr [r14], xmm0 }
      }
      return 1;
    }
  }
}

/*
==============
CL_Input_ValidateCmdButtons
==============
*/
void CL_Input_ValidateCmdButtons(const LocalClientNum_t localClientNum, usercmd_s *cmd)
{
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  const Weapon *CurrentWeaponForPlayer; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 3112, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( BG_IsPlayerFireDisabled(&LocalClientGlobals->predictedPlayerState) )
  {
    cmd->buttons &= ~1ui64;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, &LocalClientGlobals->predictedPlayerState);
    if ( BG_UseLeftTriggerAltFireMode(CurrentWeaponForPlayer) )
      cmd->buttons &= ~0x200ui64;
  }
}

/*
==============
CL_Input_ValidateMouseMovementCalls
==============
*/
void CL_Input_ValidateMouseMovementCalls(void)
{
  if ( ((unsigned __int8)&g_checkGetMouseMovementCalledOnce & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&g_checkGetMouseMovementCalledOnce) )
    __debugbreak();
  if ( _InterlockedExchange(&g_checkGetMouseMovementCalledOnce, 0) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_input.cpp", 1716, ASSERT_TYPE_ASSERT, "(Sys_InterlockedExchange( &g_checkGetMouseMovementCalledOnce, 0 ) <= 1)", "%s\n\tCL_Input_GetMouseMovement() is called multiple times during the frame!", "Sys_InterlockedExchange( &g_checkGetMouseMovementCalledOnce, 0 ) <= 1") )
    __debugbreak();
}

/*
==============
CL_SetStance
==============
*/
void CL_SetStance(LocalClientNum_t localClientNum, StanceState stance, const unsigned int eventParm)
{
  ClActiveClient *Client; 
  ClActiveClient *v7; 
  unsigned int v8; 
  StanceState *v9; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( eventParm != 5 )
  {
    v7 = ClActiveClient::GetClient(localClientNum);
    v8 = 0;
    v9 = &v7->heldInputs.heldStances[1];
    do
    {
      v8 += 2;
      *(_QWORD *)(v9 - 1) = 0i64;
      v9 += 2;
    }
    while ( v8 < 2 );
    v7->heldInputs.stackIndex = 0;
  }
  Client->stance = stance;
  if ( eventParm == 5 || eventParm == 4 && stance == CL_STANCE_CROUCH )
  {
    if ( Client->stanceHeld )
      Client->stanceTime = com_frameTime;
  }
  else
  {
    *(_WORD *)&Client->stanceHeld = 0;
  }
}

