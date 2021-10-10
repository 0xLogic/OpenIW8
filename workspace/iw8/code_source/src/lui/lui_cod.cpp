/*
==============
LUI_CoD_CollectGarbage
==============
*/

void __fastcall LUI_CoD_CollectGarbage(lua_State *luaVM, const bool needEnterLUISection)
{
  ?LUI_CoD_CollectGarbage@@YAXPEAUlua_State@@_N@Z(luaVM, needEnterLUISection);
}

/*
==============
LUI_IsTopSignInMenu
==============
*/

int __fastcall LUI_IsTopSignInMenu()
{
  return ?LUI_IsTopSignInMenu@@YAHXZ();
}

/*
==============
LuiAlloc
==============
*/

void *__fastcall LuiAlloc(void *ud, void *ptr, unsigned __int64 osize, unsigned __int64 nsize)
{
  return ?LuiAlloc@@YAPEAXPEAX0_K1@Z(ud, ptr, osize, nsize);
}

/*
==============
LUI_CoD_UpdateFrame
==============
*/

void __fastcall LUI_CoD_UpdateFrame(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_UpdateFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_PausedByCodcaster
==============
*/

void __fastcall LUI_CoD_PausedByCodcaster(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_PausedByCodcaster@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_Render
==============
*/

void __fastcall LUI_CoD_Render(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_Render@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_GetCurrentRoot
==============
*/

LUIElement *__fastcall LUI_CoD_GetCurrentRoot(lua_State *luaVM)
{
  return ?LUI_CoD_GetCurrentRoot@@YAPEAULUIElement@@PEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_GetWaitingForKeyBind
==============
*/

bool __fastcall LUI_CoD_GetWaitingForKeyBind(LocalClientNum_t localClientNum)
{
  return ?LUI_CoD_GetWaitingForKeyBind@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_SetFrontendCinematicState
==============
*/

void __fastcall LUI_CoD_SetFrontendCinematicState(const char *cinematicName, int playbackFlags, unsigned int startOffsetMSec)
{
  ?LUI_CoD_SetFrontendCinematicState@@YAXPEBDHI@Z(cinematicName, playbackFlags, startOffsetMSec);
}

/*
==============
LUI_CoD_SnapQuadVerts
==============
*/

void __fastcall LUI_CoD_SnapQuadVerts(vec4_t (*quadVerts)[4])
{
  ?LUI_CoD_SnapQuadVerts@@YAXAEAY03Tvec4_t@@@Z(quadVerts);
}

/*
==============
LUI_CoD_SetWaitingForKeyBind
==============
*/

void __fastcall LUI_CoD_SetWaitingForKeyBind(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  ?LUI_CoD_SetWaitingForKeyBind@@YAXW4LocalClientNum_t@@W4InputContext@@W4Bind@@W4CL_KeyBindSlot@@@Z(localClientNum, inputContext, action, slot);
}

/*
==============
LUI_CoD_MarkStringAsLocalized
==============
*/

const char *__fastcall LUI_CoD_MarkStringAsLocalized(const char *string)
{
  return ?LUI_CoD_MarkStringAsLocalized@@YAPEBDPEBD@Z(string);
}

/*
==============
LUI_IsMenuOpenAndVisible
==============
*/

int __fastcall LUI_IsMenuOpenAndVisible(LocalClientNum_t localClientNum, const char *menuName)
{
  return ?LUI_IsMenuOpenAndVisible@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, menuName);
}

/*
==============
LUI_CoD_GetSpinnerMaterial
==============
*/

const GfxImage *__fastcall LUI_CoD_GetSpinnerMaterial()
{
  return ?LUI_CoD_GetSpinnerMaterial@@YAPEBUGfxImage@@XZ();
}

/*
==============
LUI_CoD_OpenInitialMenu
==============
*/

void LUI_CoD_OpenInitialMenu(void)
{
  ?LUI_CoD_OpenInitialMenu@@YAXXZ();
}

/*
==============
LUI_CoD_CharEvent
==============
*/

void __fastcall LUI_CoD_CharEvent(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_CharEvent@@YAXW4LocalClientNum_t@@_U@Z(localClientNum);
}

/*
==============
LUI_Interface_ErrorPrint
==============
*/

void LUI_Interface_ErrorPrint(const char *formatString, ...)
{
  ?LUI_Interface_ErrorPrint@@YAXPEBDZZ(formatString);
}

/*
==============
LUI_CoD_UnsetMouse
==============
*/

void __fastcall LUI_CoD_UnsetMouse(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_UnsetMouse@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_SetKeyCatcher
==============
*/

void __fastcall LUI_CoD_SetKeyCatcher(const LocalClientNum_t localClientNum, bool enable)
{
  ?LUI_CoD_SetKeyCatcher@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, enable);
}

/*
==============
LUI_CoD_IsFontPreCached
==============
*/

bool __fastcall LUI_CoD_IsFontPreCached(GfxFont *font, int size)
{
  return ?LUI_CoD_IsFontPreCached@@YA_NPEAUGfxFont@@H@Z(font, size);
}

/*
==============
LUI_CoD_RegisterRemoteCommands
==============
*/

void LUI_CoD_RegisterRemoteCommands(void)
{
  ?LUI_CoD_RegisterRemoteCommands@@YAXXZ();
}

/*
==============
LUI_CoD_RegisterDvars
==============
*/

void LUI_CoD_RegisterDvars(void)
{
  ?LUI_CoD_RegisterDvars@@YAXXZ();
}

/*
==============
LUI_CoD_InitMemory
==============
*/

void LUI_CoD_InitMemory(void)
{
  ?LUI_CoD_InitMemory@@YAXXZ();
}

/*
==============
LUI_CoD_SetFocusChainInfo
==============
*/

void __fastcall LUI_CoD_SetFocusChainInfo(const char *chainInfo)
{
  ?LUI_CoD_SetFocusChainInfo@@YAXPEBD@Z(chainInfo);
}

/*
==============
LUI_CoD_CloseAll_f
==============
*/

void __fastcall LUI_CoD_CloseAll_f()
{
  ?LUI_CoD_CloseAll_f@@YAXXZ();
}

/*
==============
LUI_CoD_InterpretKey
==============
*/

void __fastcall LUI_CoD_InterpretKey(LocalClientNum_t localClientNum, int controllerIndex, int key, int down, bool resetInputs)
{
  ?LUI_CoD_InterpretKey@@YAXW4LocalClientNum_t@@HHH_N@Z(localClientNum, controllerIndex, key, down, resetInputs);
}

/*
==============
LUI_CoD_IsInUpdateFrame
==============
*/

bool __fastcall LUI_CoD_IsInUpdateFrame()
{
  return ?LUI_CoD_IsInUpdateFrame@@YA_NXZ();
}

/*
==============
LUI_CoD_UpdateStickInput
==============
*/

void __fastcall LUI_CoD_UpdateStickInput(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_UpdateStickInput@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_MarkFontAsPreCached
==============
*/

void __fastcall LUI_CoD_MarkFontAsPreCached(GfxFont *font, int size, lua_State *luaVM)
{
  ?LUI_CoD_MarkFontAsPreCached@@YAXPEAUGfxFont@@HPEAUlua_State@@@Z(font, size, luaVM);
}

/*
==============
LUI_CoD_Error
==============
*/

void __fastcall LUI_CoD_Error(int errCode)
{
  ?LUI_CoD_Error@@YAXH@Z(errCode);
}

/*
==============
LUI_CoD_SetLastDeactivateClientsReason
==============
*/

void __fastcall LUI_CoD_SetLastDeactivateClientsReason(const char *reason)
{
  ?LUI_CoD_SetLastDeactivateClientsReason@@YAXPEBD@Z(reason);
}

/*
==============
LUI_CoD_GetRootDataForController
==============
*/

LUIRootData *__fastcall LUI_CoD_GetRootDataForController(const int controllerIndex)
{
  return ?LUI_CoD_GetRootDataForController@@YAPEAULUIRootData@@H@Z(controllerIndex);
}

/*
==============
LUI_CoD_ClearWorldBlur
==============
*/

void __fastcall LUI_CoD_ClearWorldBlur(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_ClearWorldBlur@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Interface_GetNumTextLines
==============
*/

int __fastcall LUI_Interface_GetNumTextLines(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float fontHeight, float wrapWidth)
{
  return ?LUI_Interface_GetNumTextLines@@YAHW4LocalClientNum_t@@PEBDPEAUGfxFont@@MM@Z(localClientNum, text, font, fontHeight, wrapWidth);
}

/*
==============
LUI_CoD_KeyEvent
==============
*/

bool __fastcall LUI_CoD_KeyEvent(LocalClientNum_t localClientNum, int controllerIndex, int key, int binding, int down, int keyCatchers, bool resetInputs)
{
  return ?LUI_CoD_KeyEvent@@YA_NW4LocalClientNum_t@@HHHHH_N@Z(localClientNum, controllerIndex, key, binding, down, keyCatchers, resetInputs);
}

/*
==============
LUI_CoD_RunNoClientFrame
==============
*/

void __fastcall LUI_CoD_RunNoClientFrame(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_RunNoClientFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_UnregisterGameDvars
==============
*/

void LUI_CoD_UnregisterGameDvars(void)
{
  ?LUI_CoD_UnregisterGameDvars@@YAXXZ();
}

/*
==============
LUI_CoD_Pause
==============
*/

void __fastcall LUI_CoD_Pause(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_Pause@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_Init
==============
*/

void __fastcall LUI_CoD_Init(bool frontend, bool errorRecovery)
{
  ?LUI_CoD_Init@@YAX_N0@Z(frontend, errorRecovery);
}

/*
==============
LUI_CoD_AdjustLastMousePosToViewport
==============
*/

void LUI_CoD_AdjustLastMousePosToViewport(void)
{
  ?LUI_CoD_AdjustLastMousePosToViewport@@YAXXZ();
}

/*
==============
LUI_Interface_DebugPrint
==============
*/

void LUI_Interface_DebugPrint(const char *formatString, ...)
{
  ?LUI_Interface_DebugPrint@@YAXPEBDZZ(formatString);
}

/*
==============
LUI_IsTopLocalSignInMenu
==============
*/

int __fastcall LUI_IsTopLocalSignInMenu(LocalClientNum_t localClientNum)
{
  return ?LUI_IsTopLocalSignInMenu@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_CloseAll
==============
*/

void __fastcall LUI_CoD_CloseAll(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_CloseAll@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_GetVisibleMenu
==============
*/

int __fastcall LUI_GetVisibleMenu(LocalClientNum_t localClientNum, char (*outBuffer)[1024])
{
  return ?LUI_GetVisibleMenu@@YAHW4LocalClientNum_t@@AEAY0EAA@D@Z(localClientNum, outBuffer);
}

/*
==============
LUI_COD_GetSwatchRGBColor
==============
*/

void __fastcall LUI_COD_GetSwatchRGBColor(LocalClientNum_t localClientNum, const char *swatchPath, vec3_t *rgbColor)
{
  ?LUI_COD_GetSwatchRGBColor@@YAXW4LocalClientNum_t@@PEBDAEATvec3_t@@@Z(localClientNum, swatchPath, rgbColor);
}

/*
==============
LUI_CoD_GetActiveTextEditCursorPosition
==============
*/

bool __fastcall LUI_CoD_GetActiveTextEditCursorPosition(LocalClientNum_t localClientNum, int *outX, int *outY)
{
  return ?LUI_CoD_GetActiveTextEditCursorPosition@@YA_NW4LocalClientNum_t@@AEAH1@Z(localClientNum, outX, outY);
}

/*
==============
LUI_CoD_CrossplaySettingsChanged
==============
*/

void __fastcall LUI_CoD_CrossplaySettingsChanged(const int controllerIndex, const int partyId, const bool crossplaySetting)
{
  ?LUI_CoD_CrossplaySettingsChanged@@YAXHH_N@Z(controllerIndex, partyId, crossplaySetting);
}

/*
==============
LUI_CoD_InFrontend
==============
*/

bool __fastcall LUI_CoD_InFrontend()
{
  return ?LUI_CoD_InFrontend@@YA_NXZ();
}

/*
==============
LUI_CoD_HandleKeyBind
==============
*/

void __fastcall LUI_CoD_HandleKeyBind(LocalClientNum_t localClientNum, int key)
{
  ?LUI_CoD_HandleKeyBind@@YAXW4LocalClientNum_t@@H@Z(localClientNum, key);
}

/*
==============
LUI_CoD_UpdateInputType
==============
*/

void __fastcall LUI_CoD_UpdateInputType(int controllerIndex, UIInputType inputType)
{
  ?LUI_CoD_UpdateInputType@@YAXHW4UIInputType@@@Z(controllerIndex, inputType);
}

/*
==============
LUI_CoD_GCCanRun
==============
*/

bool __fastcall LUI_CoD_GCCanRun()
{
  return ?LUI_CoD_GCCanRun@@YA_NXZ();
}

/*
==============
LUI_CoD_GetCurrentLocalClient
==============
*/

LocalClientNum_t __fastcall LUI_CoD_GetCurrentLocalClient()
{
  return ?LUI_CoD_GetCurrentLocalClient@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
LUI_CoD_OnInviteJoinEvent
==============
*/

void __fastcall LUI_CoD_OnInviteJoinEvent(const int controllerIndex, InviteJoinHSMResult result, const char *errorCode)
{
  ?LUI_CoD_OnInviteJoinEvent@@YAXHW4InviteJoinHSMResult@@PEBD@Z(controllerIndex, result, errorCode);
}

/*
==============
LUI_CoD_MouseCaptureLost
==============
*/

void __fastcall LUI_CoD_MouseCaptureLost(int controllerIndex)
{
  ?LUI_CoD_MouseCaptureLost@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_GetPathToElement
==============
*/

int __fastcall LUI_GetPathToElement(LocalClientNum_t localClientNum, const char *tabElementID, const char *buttonElementID, int *pathKeys, int pathKeysLength)
{
  return ?LUI_GetPathToElement@@YAHW4LocalClientNum_t@@PEBD1PEAHH@Z(localClientNum, tabElementID, buttonElementID, pathKeys, pathKeysLength);
}

/*
==============
LUI_CanSignoutSplitscreenPlayer
==============
*/

int __fastcall LUI_CanSignoutSplitscreenPlayer()
{
  return ?LUI_CanSignoutSplitscreenPlayer@@YAHXZ();
}

/*
==============
LUI_InvalidateAllDirectiveTextElements
==============
*/

void __fastcall LUI_InvalidateAllDirectiveTextElements(const int controllerIndex)
{
  ?LUI_InvalidateAllDirectiveTextElements@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_CoD_PumpCollectGarbage
==============
*/

void LUI_CoD_PumpCollectGarbage(void)
{
  ?LUI_CoD_PumpCollectGarbage@@YAXXZ();
}

/*
==============
LUI_CoD_CanInferLocalClientAndController
==============
*/

bool __fastcall LUI_CoD_CanInferLocalClientAndController()
{
  return ?LUI_CoD_CanInferLocalClientAndController@@YA_NXZ();
}

/*
==============
LUI_CoD_GetParallaxOffsetForLocalClient
==============
*/

tmat44_t<vec4_t> *__fastcall LUI_CoD_GetParallaxOffsetForLocalClient(LocalClientNum_t localClientNum)
{
  return ?LUI_CoD_GetParallaxOffsetForLocalClient@@YAPEAT?$tmat44_t@Tvec4_t@@@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_ErrorCleanup
==============
*/

void LUI_CoD_ErrorCleanup(void)
{
  ?LUI_CoD_ErrorCleanup@@YAXXZ();
}

/*
==============
LUI_CoD_SetHasShownSplashScreens
==============
*/

void LUI_CoD_SetHasShownSplashScreens(void)
{
  ?LUI_CoD_SetHasShownSplashScreens@@YAXXZ();
}

/*
==============
LUI_CoD_MouseMove
==============
*/

bool __fastcall LUI_CoD_MouseMove(LocalClientNum_t localClientNum, int x, int y, bool force)
{
  return ?LUI_CoD_MouseMove@@YA_NW4LocalClientNum_t@@HH_N@Z(localClientNum, x, y, force);
}

/*
==============
LUI_CoD_RegisterGameDvars
==============
*/

void LUI_CoD_RegisterGameDvars(void)
{
  ?LUI_CoD_RegisterGameDvars@@YAXXZ();
}

/*
==============
LUI_CoD_ReadCharFromString
==============
*/

bool __fastcall LUI_CoD_ReadCharFromString(const char **textPtr, unsigned int *letter)
{
  return ?LUI_CoD_ReadCharFromString@@YA_NPEAPEBDPEAI@Z(textPtr, letter);
}

/*
==============
LUI_CoD_MakeClientRootFullscreen
==============
*/

void __fastcall LUI_CoD_MakeClientRootFullscreen(int controllerIndex)
{
  ?LUI_CoD_MakeClientRootFullscreen@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_CoD_UpdateActiveState
==============
*/

void __fastcall LUI_CoD_UpdateActiveState(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_UpdateActiveState@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_CreateClientRoots
==============
*/

void LUI_CoD_CreateClientRoots(void)
{
  ?LUI_CoD_CreateClientRoots@@YAXXZ();
}

/*
==============
LUI_CoD_UsingSplitscreenUpscaling
==============
*/

bool __fastcall LUI_CoD_UsingSplitscreenUpscaling()
{
  return ?LUI_CoD_UsingSplitscreenUpscaling@@YA_NXZ();
}

/*
==============
LUI_CoD_ResizeRoots
==============
*/

void LUI_CoD_ResizeRoots(void)
{
  ?LUI_CoD_ResizeRoots@@YAXXZ();
}

/*
==============
LUI_CoD_SendOverIndulgenceNotification
==============
*/

void __fastcall LUI_CoD_SendOverIndulgenceNotification(LocalClientNum_t localClientNum, int nbHour)
{
  ?LUI_CoD_SendOverIndulgenceNotification@@YAXW4LocalClientNum_t@@H@Z(localClientNum, nbHour);
}

/*
==============
LUI_CoD_GetMemoryTotal
==============
*/

unsigned int __fastcall LUI_CoD_GetMemoryTotal()
{
  return ?LUI_CoD_GetMemoryTotal@@YAIXZ();
}

/*
==============
LUI_CoD_DetermineGCType
==============
*/

ELUIWorkerCmdGCType __fastcall LUI_CoD_DetermineGCType()
{
  return ?LUI_CoD_DetermineGCType@@YA?AW4ELUIWorkerCmdGCType@@XZ();
}

/*
==============
LUI_CoD_HandleMyChangesLoad
==============
*/

void LUI_CoD_HandleMyChangesLoad(void)
{
  ?LUI_CoD_HandleMyChangesLoad@@YAXXZ();
}

/*
==============
LUI_CoD_GetWorldBlurForLocalClient
==============
*/

double __fastcall LUI_CoD_GetWorldBlurForLocalClient(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?LUI_CoD_GetWorldBlurForLocalClient@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
LUI_CoD_SaveComplete
==============
*/

void __fastcall LUI_CoD_SaveComplete(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_SaveComplete@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_GetRootSpaceMousePosition
==============
*/

void __fastcall LUI_CoD_GetRootSpaceMousePosition(int controllerIndex, float *outX, float *outY)
{
  ?LUI_CoD_GetRootSpaceMousePosition@@YAXHPEAM0@Z(controllerIndex, outX, outY);
}

/*
==============
LUI_CoD_GetFreeMemoryBytes
==============
*/

unsigned int __fastcall LUI_CoD_GetFreeMemoryBytes()
{
  return ?LUI_CoD_GetFreeMemoryBytes@@YAIXZ();
}

/*
==============
LUI_Interface_RestartLUI
==============
*/

void __fastcall LUI_Interface_RestartLUI(bool errorRecovery)
{
  ?LUI_Interface_RestartLUI@@YAX_N@Z(errorRecovery);
}

/*
==============
LUI_CoD_ShutdownAndFreeExtraFrontendMemory
==============
*/

void LUI_CoD_ShutdownAndFreeExtraFrontendMemory(void)
{
  ?LUI_CoD_ShutdownAndFreeExtraFrontendMemory@@YAXXZ();
}

/*
==============
LUI_IsMenuInStack
==============
*/

int __fastcall LUI_IsMenuInStack(LocalClientNum_t localClientNum, const char *menuName)
{
  return ?LUI_IsMenuInStack@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, menuName);
}

/*
==============
LUI_Interface_GetMaterialAspectRatio
==============
*/

double __fastcall LUI_Interface_GetMaterialAspectRatio(const GfxImage *material)
{
  double result; 

  *(float *)&result = ?LUI_Interface_GetMaterialAspectRatio@@YAMPEBUGfxImage@@@Z(material);
  return result;
}

/*
==============
LUI_CoD_Layout
==============
*/

void __fastcall LUI_CoD_Layout(const LocalClientNum_t localClientNum, const char *rootName)
{
  ?LUI_CoD_Layout@@YAXW4LocalClientNum_t@@PEBD@Z(localClientNum, rootName);
}

/*
==============
LUI_Interface_SetTextEditActive
==============
*/

void __fastcall LUI_Interface_SetTextEditActive(LocalClientNum_t localClientNum, LUIElement *element, bool active, lua_State *luaVM)
{
  ?LUI_Interface_SetTextEditActive@@YAXW4LocalClientNum_t@@PEAULUIElement@@_NPEAUlua_State@@@Z(localClientNum, element, active, luaVM);
}

/*
==============
LUI_CoD_MarkMyChangesLoad
==============
*/

void LUI_CoD_MarkMyChangesLoad(void)
{
  ?LUI_CoD_MarkMyChangesLoad@@YAXXZ();
}

/*
==============
LUI_CoD_MakeClientRootSplitscreen
==============
*/

void __fastcall LUI_CoD_MakeClientRootSplitscreen(int controllerIndex)
{
  ?LUI_CoD_MakeClientRootSplitscreen@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_CoD_ClearFrontendCinematicState
==============
*/

void LUI_CoD_ClearFrontendCinematicState(void)
{
  ?LUI_CoD_ClearFrontendCinematicState@@YAXXZ();
}

/*
==============
LUI_COD_AnyActiveMenus
==============
*/

int __fastcall LUI_COD_AnyActiveMenus(LocalClientNum_t localClientNum)
{
  return ?LUI_COD_AnyActiveMenus@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_Restart
==============
*/

void __fastcall LUI_CoD_Restart(bool errorRecovery)
{
  ?LUI_CoD_Restart@@YAX_N@Z(errorRecovery);
}

/*
==============
LUI_CoD_ClearFullGCCycleFlag
==============
*/

void LUI_CoD_ClearFullGCCycleFlag(void)
{
  ?LUI_CoD_ClearFullGCCycleFlag@@YAXXZ();
}

/*
==============
LUI_Interface_RegisterMaterial
==============
*/

bool __fastcall LUI_Interface_RegisterMaterial(const char *materialName, const GfxImage **output_material)
{
  return ?LUI_Interface_RegisterMaterial@@YA_NPEBDPEAPEBUGfxImage@@@Z(materialName, output_material);
}

/*
==============
LUI_CoD_PostRestart
==============
*/

void __fastcall LUI_CoD_PostRestart(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_PostRestart@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_Shutdown
==============
*/

void LUI_CoD_Shutdown(void)
{
  ?LUI_CoD_Shutdown@@YAXXZ();
}

/*
==============
LUI_CoD_GetFrontendCinematicState
==============
*/

void __fastcall LUI_CoD_GetFrontendCinematicState(CinematicState *cinematicState)
{
  ?LUI_CoD_GetFrontendCinematicState@@YAXPEAUCinematicState@@@Z(cinematicState);
}

/*
==============
LUI_CoD_GenerateRotatedQuadVerts
==============
*/

void __fastcall LUI_CoD_GenerateRotatedQuadVerts(float left, float top, float right, float bottom, float angle, float centerX, float centerY, vec4_t (*quadVerts)[4])
{
  ?LUI_CoD_GenerateRotatedQuadVerts@@YAXMMMMMMMAEAY03Tvec4_t@@@Z(left, top, right, bottom, angle, centerX, centerY, quadVerts);
}

/*
==============
LUI_CoD_ProcessEvents
==============
*/

void __fastcall LUI_CoD_ProcessEvents(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_ProcessEvents@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning
==============
*/

void __fastcall LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning(const int controllerIndex)
{
  ?LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning@@YAXH@Z(controllerIndex);
}

/*
==============
LUI_CoD_GetCurrentValidLocalClient
==============
*/

LocalClientNum_t __fastcall LUI_CoD_GetCurrentValidLocalClient()
{
  return ?LUI_CoD_GetCurrentValidLocalClient@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
LUI_CoD_ClearPreCachedFonts
==============
*/

void LUI_CoD_ClearPreCachedFonts(void)
{
  ?LUI_CoD_ClearPreCachedFonts@@YAXXZ();
}

/*
==============
LUI_CoD_BuildDrawList
==============
*/

void __fastcall LUI_CoD_BuildDrawList(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_BuildDrawList@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_AllocExtraFrontendMemory
==============
*/

void LUI_CoD_AllocExtraFrontendMemory(void)
{
  ?LUI_CoD_AllocExtraFrontendMemory@@YAXXZ();
}

/*
==============
LUI_CoD_GenerateQuadVerts
==============
*/

void __fastcall LUI_CoD_GenerateQuadVerts(float left, float top, float right, float bottom, vec4_t (*quadVerts)[4])
{
  ?LUI_CoD_GenerateQuadVerts@@YAXMMMMAEAY03Tvec4_t@@@Z(left, top, right, bottom, quadVerts);
}

/*
==============
LUI_Interface_DrawText
==============
*/

void __fastcall LUI_Interface_DrawText(const LocalClientNum_t localClientNum, LUIElement *root, LUIElement *element, float x, float y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float elementHeight, float boxWidth, char tracking, char leading, char alignment, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, AutoScrollStyle *autoScrollStyle, lua_State *luaVM)
{
  ?LUI_Interface_DrawText@@YAXW4LocalClientNum_t@@PEAULUIElement@@1MMMMMMPEBDPEAUGfxFont@@MMDDDPEAUFontDecodeStyle@@PEAUFontGlowStyle@@PEAUAutoScrollStyle@@PEAUlua_State@@@Z(localClientNum, root, element, x, y, red, green, blue, alpha, text, font, elementHeight, boxWidth, tracking, leading, alignment, fontDecodeStyle, fontGlowStyle, autoScrollStyle, luaVM);
}

/*
==============
LUI_CoD_GetBind
==============
*/

Bind __fastcall LUI_CoD_GetBind(LocalClientNum_t localClientNum)
{
  return ?LUI_CoD_GetBind@@YA?AW4Bind@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_SPModeSaveDataError
==============
*/

void __fastcall LUI_CoD_SPModeSaveDataError(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_SPModeSaveDataError@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_GetMemoryUsedBytes
==============
*/

unsigned int __fastcall LUI_CoD_GetMemoryUsedBytes()
{
  return ?LUI_CoD_GetMemoryUsedBytes@@YAIXZ();
}

/*
==============
LUI_CoD_CheckWaitForWorkers
==============
*/

void LUI_CoD_CheckWaitForWorkers(void)
{
  ?LUI_CoD_CheckWaitForWorkers@@YAXXZ();
}

/*
==============
LUI_CoD_GetRootNameForController
==============
*/

const char *__fastcall LUI_CoD_GetRootNameForController(int controllerIndex)
{
  return ?LUI_CoD_GetRootNameForController@@YAPEBDH@Z(controllerIndex);
}

/*
==============
LUI_CoD_Layout
==============
*/

void __fastcall LUI_CoD_Layout(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_Layout@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_Update_Publisher_Variables
==============
*/

void __fastcall LUI_CoD_Update_Publisher_Variables()
{
  ?LUI_CoD_Update_Publisher_Variables@@YAXXZ();
}

/*
==============
LUI_Interface_GetTextDimensions
==============
*/

void __fastcall LUI_Interface_GetTextDimensions(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float fontHeight, char tracking, char leading, float *left, float *top, float *right, float *bottom, float wrapWidth)
{
  ?LUI_Interface_GetTextDimensions@@YAXW4LocalClientNum_t@@PEBDPEAUGfxFont@@MDDAEAM333M@Z(localClientNum, text, font, fontHeight, tracking, leading, left, top, right, bottom, wrapWidth);
}

/*
==============
LUI_Interface_GetTextPages
==============
*/

int __fastcall LUI_Interface_GetTextPages(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float elementHeight, char tracking, float wrapWidth, float pageHeight, int maxPages, TextPage *pages, int maxCharsPerPage)
{
  return ?LUI_Interface_GetTextPages@@YAHW4LocalClientNum_t@@PEBDPEAUGfxFont@@MDMMHPEAUTextPage@@H@Z(localClientNum, text, font, elementHeight, tracking, wrapWidth, pageHeight, maxPages, pages, maxCharsPerPage);
}

/*
==============
LUI_Interface_DrawTextSelection
==============
*/

void __fastcall LUI_Interface_DrawTextSelection(const LocalClientNum_t localClientNum, LUIElement *element, float x, float y, float width, float height, vec4_t *color, lua_State *luaVM)
{
  ?LUI_Interface_DrawTextSelection@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMTvec4_t@@PEAUlua_State@@@Z(localClientNum, element, x, y, width, height, color, luaVM);
}

/*
==============
LUI_COD_GetSwatchIntColor
==============
*/

int __fastcall LUI_COD_GetSwatchIntColor(LocalClientNum_t localClientNum, const char *swatchPath)
{
  return ?LUI_COD_GetSwatchIntColor@@YAHW4LocalClientNum_t@@PEBD@Z(localClientNum, swatchPath);
}

/*
==============
LUI_Interface_CheckLowMemory
==============
*/

void __fastcall LUI_Interface_CheckLowMemory(lua_State *luaVM)
{
  ?LUI_Interface_CheckLowMemory@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_AttemptInferLocalClientAndController
==============
*/

bool __fastcall LUI_CoD_AttemptInferLocalClientAndController(LocalClientNum_t *localClientNum, int *controllerIndex)
{
  return ?LUI_CoD_AttemptInferLocalClientAndController@@YA_NAEAW4LocalClientNum_t@@AEAH@Z(localClientNum, controllerIndex);
}

/*
==============
LUI_Interface_GetMaxElements
==============
*/

int __fastcall LUI_Interface_GetMaxElements()
{
  return ?LUI_Interface_GetMaxElements@@YAHXZ();
}

/*
==============
LUI_CoD_TitleUpdateAvailable
==============
*/

void __fastcall LUI_CoD_TitleUpdateAvailable(const LocalClientNum_t *localClientNum)
{
  ?LUI_CoD_TitleUpdateAvailable@@YAXAEBW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_PrintCallstack
==============
*/

void LUI_CoD_PrintCallstack(void)
{
  ?LUI_CoD_PrintCallstack@@YAXXZ();
}

/*
==============
LUI_CoD_HasShownSplashScreens
==============
*/

bool __fastcall LUI_CoD_HasShownSplashScreens()
{
  return ?LUI_CoD_HasShownSplashScreens@@YA_NXZ();
}

/*
==============
LUI_CoD_Unpause
==============
*/

void __fastcall LUI_CoD_Unpause(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_Unpause@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Interface_Panic
==============
*/

void LUI_Interface_Panic(void)
{
  ?LUI_Interface_Panic@@YAXXZ();
}

/*
==============
LUI_CoD_GetCurrentStencilValue
==============
*/

int __fastcall LUI_CoD_GetCurrentStencilValue()
{
  return ?LUI_CoD_GetCurrentStencilValue@@YAHXZ();
}

/*
==============
LUI_CoD_IsEnabled
==============
*/

bool __fastcall LUI_CoD_IsEnabled()
{
  return ?LUI_CoD_IsEnabled@@YA_NXZ();
}

/*
==============
LUI_CoD_GetMousePosition
==============
*/

bool __fastcall LUI_CoD_GetMousePosition(int controllerIndex, float *outX, float *outY)
{
  return ?LUI_CoD_GetMousePosition@@YA_NHPEAM0@Z(controllerIndex, outX, outY);
}

/*
==============
LUI_CoD_LUIRootDLogEnabled
==============
*/

bool __fastcall LUI_CoD_LUIRootDLogEnabled()
{
  return ?LUI_CoD_LUIRootDLogEnabled@@YA_NXZ();
}

/*
==============
LUI_CoD_IsLUIKeyCatcherActive
==============
*/

bool __fastcall LUI_CoD_IsLUIKeyCatcherActive(const LocalClientNum_t localClientNum)
{
  return ?LUI_CoD_IsLUIKeyCatcherActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_UnpausedByCodcaster
==============
*/

void __fastcall LUI_CoD_UnpausedByCodcaster(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_UnpausedByCodcaster@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Interface_DrawTextWithCursor
==============
*/

void __fastcall LUI_Interface_DrawTextWithCursor(const LocalClientNum_t localClientNum, LUIElement *element, float x, float y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float fontHeight, float wrapWidth, int cursorPos, char cursor, lua_State *luaVM)
{
  ?LUI_Interface_DrawTextWithCursor@@YAXW4LocalClientNum_t@@PEAULUIElement@@MMMMMMPEBDPEAUGfxFont@@MMHDPEAUlua_State@@@Z(localClientNum, element, x, y, red, green, blue, alpha, text, font, fontHeight, wrapWidth, cursorPos, cursor, luaVM);
}

/*
==============
LUI_CoD_RenderFrame
==============
*/

void __fastcall LUI_CoD_RenderFrame(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_RenderFrame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_RegisterWithExternalSystems
==============
*/

void LUI_CoD_RegisterWithExternalSystems(void)
{
  ?LUI_CoD_RegisterWithExternalSystems@@YAXXZ();
}

/*
==============
LUI_CoD_ForceReleaseLockCleanup
==============
*/

void LUI_CoD_ForceReleaseLockCleanup(void)
{
  ?LUI_CoD_ForceReleaseLockCleanup@@YAXXZ();
}

/*
==============
LUI_CoD_SaveError
==============
*/

void __fastcall LUI_CoD_SaveError(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_SaveError@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Interface_RegisterFont
==============
*/

bool __fastcall LUI_Interface_RegisterFont(const char *fontName, GfxFont **output_font)
{
  return ?LUI_Interface_RegisterFont@@YA_NPEBDPEAPEAUGfxFont@@@Z(fontName, output_font);
}

/*
==============
LUI_CoD_MyChangesFileUnloaded
==============
*/

void LUI_CoD_MyChangesFileUnloaded(void)
{
  ?LUI_CoD_MyChangesFileUnloaded@@YAXXZ();
}

/*
==============
LUI_CoD_SetCurrentLocalClient
==============
*/

void __fastcall LUI_CoD_SetCurrentLocalClient(LocalClientNum_t localClientNum)
{
  ?LUI_CoD_SetCurrentLocalClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_Interface_DrawBoundingBox
==============
*/

void __fastcall LUI_Interface_DrawBoundingBox(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  ?LUI_Interface_DrawBoundingBox@@YAXW4LocalClientNum_t@@PEAULUIElement@@PEAUlua_State@@@Z(localClientNum, element, luaVM);
}

/*
==============
LUI_Interface_GetTextEditActive
==============
*/

LUIElement *__fastcall LUI_Interface_GetTextEditActive(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  return ?LUI_Interface_GetTextEditActive@@YAPEAULUIElement@@W4LocalClientNum_t@@PEAUlua_State@@@Z(localClientNum, luaVM);
}

/*
==============
LUI_CoD_IsInputLocked
==============
*/

bool __fastcall LUI_CoD_IsInputLocked(const LocalClientNum_t localClientNum)
{
  return ?LUI_CoD_IsInputLocked@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_CoD_IsElementLUIRoot
==============
*/

bool __fastcall LUI_CoD_IsElementLUIRoot(LUIElement *element, lua_State *luaVM)
{
  return ?LUI_CoD_IsElementLUIRoot@@YA_NPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_CoD_ForceReleaseLock
==============
*/

void LUI_CoD_ForceReleaseLock(void)
{
  ?LUI_CoD_ForceReleaseLock@@YAXXZ();
}

/*
==============
LUI_COD_AnyActiveMenus
==============
*/
__int64 LUI_COD_AnyActiveMenus(LocalClientNum_t localClientNum)
{
  unsigned int v3; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_COD_AnyActiveMenus");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v3 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "AnyActiveMenusInStack");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking For Active Menus", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'AnyActiveMenusInStack'\n");
    v3 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v3;
}

/*
==============
LUI_COD_GetSwatchIntColor
==============
*/
__int64 LUI_COD_GetSwatchIntColor(LocalClientNum_t localClientNum, const char *swatchPath)
{
  unsigned int v5; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  double v8; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_COD_GetSwatchIntColor");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v5 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetSwatchIntColor");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushstring(LUI_luaVM, swatchPath);
  if ( LuaShared_PCall(LUI_luaVM, 2, 1) )
  {
    LUI_ReportError("Error Checking For Swatch Int Color", LUI_luaVM);
  }
  else
  {
    if ( !j_lua_isnumber(LUI_luaVM, -1) )
      j_luaL_error(LUI_luaVM, "Expecting an int on top of the stack after calling 'GetSwatchIntColor'\n");
    v8 = lui_tonumber32(LUI_luaVM, -1);
    v5 = (int)*(float *)&v8;
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v5;
}

/*
==============
LUI_COD_GetSwatchRGBColor
==============
*/
void LUI_COD_GetSwatchRGBColor(LocalClientNum_t localClientNum, const char *swatchPath, vec3_t *rgbColor)
{
  int v6; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  double v9; 

  if ( !LUI_luaVM )
    goto LABEL_4;
  LUI_EnterCriticalSection("LUI_COD_GetSwatchIntColor");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
LABEL_4:
    v6 = 0;
    goto LABEL_11;
  }
  v6 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetSwatchIntColor");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushstring(LUI_luaVM, swatchPath);
  if ( LuaShared_PCall(LUI_luaVM, 2, 1) )
  {
    LUI_ReportError("Error Checking For Swatch Int Color", LUI_luaVM);
  }
  else
  {
    if ( !j_lua_isnumber(LUI_luaVM, -1) )
      j_luaL_error(LUI_luaVM, "Expecting an int on top of the stack after calling 'GetSwatchIntColor'\n");
    v9 = lui_tonumber32(LUI_luaVM, -1);
    v6 = (int)*(float *)&v9;
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
LABEL_11:
  rgbColor->v[0] = (float)BYTE2(v6) * 0.0039215689;
  rgbColor->v[1] = (float)BYTE1(v6) * 0.0039215689;
  rgbColor->v[2] = (float)(unsigned __int8)v6 * 0.0039215689;
}

/*
==============
LUI_CanSignoutSplitscreenPlayer
==============
*/
__int64 LUI_CanSignoutSplitscreenPlayer()
{
  unsigned int v1; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_CanSignoutSplitscreenPlayer");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v1 = 0;
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, s_fullscreenRootData.name);
  j_lua_getfield(LUI_luaVM, -10002, "CanSignoutSplitscreenPlayer");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking If we can remove the splitscreen player\n", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'CanSignoutSplitscreenPlayer'\n");
    v1 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v1;
}

/*
==============
LUI_CoD_AdjustLastMousePosToViewport
==============
*/
void LUI_CoD_AdjustLastMousePosToViewport(void)
{
  float outX; 
  float outY; 

  CL_Input_GetCurrentMousePosition(&outX, &outY);
  s_perController[0].lastMouseX = outX;
  s_perController[0].lastMouseY = outY;
  s_perController[1].lastMouseX = outX;
  s_perController[1].lastMouseY = outY;
  s_perController[2].lastMouseX = outX;
  s_perController[2].lastMouseY = outY;
  s_perController[3].lastMouseX = outX;
  s_perController[3].lastMouseY = outY;
  s_perController[4].lastMouseX = outX;
  s_perController[4].lastMouseY = outY;
  s_perController[5].lastMouseX = outX;
  s_perController[5].lastMouseY = outY;
  s_perController[6].lastMouseX = outX;
  s_perController[6].lastMouseY = outY;
  s_perController[7].lastMouseX = outX;
  s_perController[7].lastMouseY = outY;
}

/*
==============
LUI_CoD_AdjustRootAspectRatio
==============
*/
void LUI_CoD_AdjustRootAspectRatio(float left, float top, float right, float bottom, float *topResult, float *bottomResult, tmat44_t<vec4_t> *projectionMatrixResult)
{
  tmat44_t<vec4_t> *v7; 
  float v8; 
  unsigned int i; 
  unsigned int j; 
  __int64 v11; 
  float v12; 
  tmat44_t<vec4_t> mtx; 

  v7 = projectionMatrixResult;
  v8 = (float)(right - left) / (float)(bottom - top);
  if ( v8 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2082, ASSERT_TYPE_ASSERT, "(aspectRatio > 0.0f)", (const char *)&queryFormat, "aspectRatio > 0.0f") )
    __debugbreak();
  *topResult = top;
  *bottomResult = bottom;
  FinitePerspectiveMatrix(v8 * 0.26602155, 0.26602155, 2.0, 100.0, &mtx);
  for ( i = 0; i < 4; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      v11 = (int)j;
      v12 = mtx.m[j].v[i];
      v7->m[i].v[v11] = v12;
    }
    v7 = projectionMatrixResult;
  }
}

/*
==============
LUI_CoD_AllocExtraFrontendMemory
==============
*/
void LUI_CoD_AllocExtraFrontendMemory(void)
{
  if ( !s_luaExtraFrontendMemory )
  {
    LUI_Interface_DebugPrint("LUI memory: Allocating extra front end memory: %u\n", 1024i64);
    s_luaExtraFrontendMemoryInUse = 0;
    s_luaExtraFrontendMemory = s_luaExtraFrontendMemoryBuf;
  }
}

/*
==============
LUI_CoD_AttachDebugger
==============
*/
void LUI_CoD_AttachDebugger()
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  int v2; 
  const char *v3; 

  LUI_EnterCriticalSection("LUI_CoD_AttachDebugger");
  if ( s_lui_lastDebuggerHostAddress[0] )
  {
    LUI_Interface_DebugPrint("Attempting to connect to the Lua debugger at: %s:%s\n", s_lui_lastDebuggerHostAddress, s_lui_lastDebuggerPort);
    j_lua_getfield(LUI_luaVM, -10002, "mobdebug");
    j_lua_getfield(LUI_luaVM, -1, "start");
    j_lua_remove(LUI_luaVM, -2);
    v0 = -1i64;
    do
      ++v0;
    while ( s_lui_lastDebuggerHostAddress[v0] );
    j_lua_pushlstring(LUI_luaVM, s_lui_lastDebuggerHostAddress, v0);
    v1 = -1i64;
    do
      ++v1;
    while ( s_lui_lastDebuggerPort[v1] );
    j_lua_pushlstring(LUI_luaVM, s_lui_lastDebuggerPort, v1);
    if ( LuaShared_PCall(LUI_luaVM, 2, 1) )
    {
      LUI_ReportError("Problem with trying to invoke dev.mobdebug.start() from code.", LUI_luaVM);
    }
    else
    {
      if ( j_lua_type(LUI_luaVM, -1) != 1 || (v2 = j_lua_toboolean(LUI_luaVM, -1), v3 = "Debugger attached.\n", v2 != 1) )
        v3 = "Error attaching debugger.\n";
      LUI_Interface_DebugPrint(v3);
      j_lua_settop(LUI_luaVM, -2);
    }
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_AttachDebugger_f
==============
*/
void LUI_CoD_AttachDebugger_f()
{
  const char *v0; 
  const char *v1; 

  if ( Cmd_Argc() >= 2 )
  {
    LUI_EnterCriticalSection("LUI_CoD_AttachDebugger_f");
    v0 = Cmd_Argv(1);
    v1 = Cmd_Argv(2);
    Core_strcpy(s_lui_lastDebuggerHostAddress, 0x40ui64, v0);
    Core_strcpy(s_lui_lastDebuggerPort, 0x10ui64, v1);
    LUI_CoD_AttachDebugger();
    LUI_LeaveCriticalSection();
  }
  else
  {
    LUI_Interface_DebugPrint("luiAttachDebugger command: expecting two arguments.");
  }
}

/*
==============
LUI_CoD_AttemptInferLocalClientAndController
==============
*/
char LUI_CoD_AttemptInferLocalClientAndController(LocalClientNum_t *localClientNum, int *controllerIndex)
{
  LocalClientNum_t v4; 
  char result; 

  v4 = s_currentLocalClientRoot;
  *localClientNum = s_currentLocalClientRoot;
  if ( v4 == LOCAL_CLIENT_INVALID || !CL_IsLocalClientActive(v4) )
  {
    if ( CL_AllLocalClientsInactive() )
    {
      Com_Printf(13, "LUI Warning: Attempted infer the localClientNum and controller but was unable to do so, defaulting to index 0, this is bad\n");
      result = 0;
      *localClientNum = LOCAL_CLIENT_0;
      *controllerIndex = 0;
    }
    else
    {
      *localClientNum = LOCAL_CLIENT_0;
      *controllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      return 0;
    }
  }
  else
  {
    *controllerIndex = CL_Mgr_GetControllerFromClient(*localClientNum);
    return 1;
  }
  return result;
}

/*
==============
LUI_CoD_BuildDrawList
==============
*/
void LUI_CoD_BuildDrawList(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  LUIRootData *v3; 

  if ( LUI_luaVM )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( s_luaInFrontend )
      v3 = &s_fullscreenRootData;
    else
      v3 = &s_rootData[ControllerFromClient];
    if ( v3->inUse )
    {
      Profile_Begin(581);
      LUI_EnterCriticalSection("LUI_CoD_BuildDrawList");
      LUI_BuildDrawList(localClientNum, v3, LUI_luaVM);
      LUI_LeaveCriticalSection();
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
LUI_CoD_CanInferLocalClientAndController
==============
*/
bool LUI_CoD_CanInferLocalClientAndController()
{
  return s_currentLocalClientRoot != LOCAL_CLIENT_INVALID && CL_IsLocalClientActive(s_currentLocalClientRoot) || !CL_AllLocalClientsInactive();
}

/*
==============
LUI_CoD_CharEvent
==============
*/
void LUI_CoD_CharEvent(LocalClientNum_t localClientNum, unsigned int a2)
{
  int *p_textEditRef; 

  p_textEditRef = &s_perController[CL_Mgr_GetControllerFromClient(localClientNum)].textEditRef;
  if ( *p_textEditRef != -2 )
  {
    LUI_EnterCriticalSection("LUI_CoD_CharEvent");
    LUI_TextEdit_HandleChar(localClientNum, *p_textEditRef, (lua_State *)a2);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_CoD_CheckWaitForWorkers
==============
*/
void LUI_CoD_CheckWaitForWorkers(void)
{
  if ( s_luiWorkersPending )
  {
    Sys_ProfBeginNamedEvent(0xFFFFA500, "wait for lui workers");
    Sys_WaitWorkerCmdsOfType(WRKCMD_LUI_UPDATE);
    Sys_ProfEndNamedEvent();
    s_luiWorkersPending = 0;
  }
}

/*
==============
LUI_CoD_ClearFrontendCinematicState
==============
*/
void LUI_CoD_ClearFrontendCinematicState(void)
{
  s_luiFrontendCinematicState.name[0] = 0;
  *(_QWORD *)&s_luiFrontendCinematicState.playbackFlags = 0i64;
}

/*
==============
LUI_CoD_ClearFullGCCycleFlag
==============
*/
void LUI_CoD_ClearFullGCCycleFlag(void)
{
  s_lowMemoryWarning = 0;
}

/*
==============
LUI_CoD_ClearPreCachedFonts
==============
*/
void LUI_CoD_ClearPreCachedFonts(void)
{
  s_numPreCachedFonts = 0;
}

/*
==============
LUI_CoD_ClearWorldBlur
==============
*/
void LUI_CoD_ClearWorldBlur(LocalClientNum_t localClientNum)
{
  s_fullscreenRootData.worldBlurRadius = 0.0;
  s_rootData[CL_Mgr_GetControllerFromClient(localClientNum)].worldBlurRadius = 0.0;
}

/*
==============
LUI_CoD_CloseAll
==============
*/
void LUI_CoD_CloseAll(LocalClientNum_t localClientNum)
{
  if ( (s_luaInFrontend || s_rootData[CL_Mgr_GetControllerFromClient(localClientNum)].inUse) && LUI_BeginEvent(localClientNum, "closeallmenus", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_CloseAll_f
==============
*/
void LUI_CoD_CloseAll_f(void)
{
  LocalClientNum_t v0; 
  LocalClientNum_t v1; 

  v0 = Cmd_LocalClientNum();
  v1 = v0;
  if ( (s_luaInFrontend || s_rootData[CL_Mgr_GetControllerFromClient(v0)].inUse) && LUI_BeginEvent(v1, "closeallmenus", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_CollectGarbage
==============
*/
void LUI_CoD_CollectGarbage(lua_State *luaVM, const bool needEnterLUISection)
{
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2852, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( needEnterLUISection )
    LUI_EnterCriticalSection("LUI_CoD_CollectGarbage");
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2857, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  j_lua_gc(luaVM, 2, 0);
  j_lua_gc(luaVM, 2, 0);
  j_lua_gc(luaVM, 2, 0);
  if ( needEnterLUISection )
    LUI_LeaveCriticalSection();
  LUI_PostGC();
  s_lowMemoryWarning = 0;
}

/*
==============
LUI_CoD_CollectGarbage_f
==============
*/
void LUI_CoD_CollectGarbage_f()
{
  lua_State *v0; 

  v0 = LUI_luaVM;
  if ( !LUI_luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2852, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  LUI_EnterCriticalSection("LUI_CoD_CollectGarbage");
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2857, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  j_lua_gc(v0, 2, 0);
  j_lua_gc(v0, 2, 0);
  j_lua_gc(v0, 2, 0);
  LUI_LeaveCriticalSection();
  LUI_PostGC();
  s_lowMemoryWarning = 0;
}

/*
==============
LUI_CoD_CompleteSceneTransition_f
==============
*/
void LUI_CoD_CompleteSceneTransition_f()
{
  Dvar_SetString_Internal(DVARSTR_lui_fe_transitioning_scene, (const char *)&queryFormat.fmt + 3);
}

/*
==============
LUI_CoD_CreateClientRoots
==============
*/
void LUI_CoD_CreateClientRoots()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  LocalClientNum_t v3; 
  int v4; 
  int v5; 
  int ControllerFromClient; 
  int v7; 
  __int64 v8; 
  const ClientViewParams *LocalClientViewParams; 
  float displayWidth; 
  float v11; 
  float displayHeight; 
  float v13; 
  const char *LastStackTraceBuffer; 
  bool IsClientActive; 
  PublisherVariableManager *Instance; 
  bool HasRetrievedVariables; 
  const dvar_t *v18; 
  bool v19; 
  int v20; 
  int v21; 
  BOOL v22; 
  unsigned __int8 ActiveGameMode; 
  lua_State *v24; 
  LocalClientNum_t v25; 
  char *fmt; 
  __int64 controllerIndex; 
  __int64 v28; 
  char dest[192]; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 

  LUI_EnterCriticalSection("LUI_CoD_CreateClientRoots");
  if ( LUI_luaVM )
  {
    v3 = LOCAL_CLIENT_0;
    v4 = 0;
    v5 = 0;
    v30 = v2;
    v32 = v0;
    v31 = v1;
    do
    {
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)v4) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
        v7 = ControllerFromClient;
        if ( ControllerFromClient != -1 )
        {
          v8 = ControllerFromClient;
          Com_sprintf(s_rootData[v8].name, 0x20ui64, "UIRoot%d", (unsigned int)ControllerFromClient);
          if ( !s_rootData[v8].inUse )
          {
            s_rootData[v8].inUse = 1;
            LocalClientViewParams = CG_GetLocalClientViewParams((LocalClientNum_t)v4);
            displayWidth = (float)cls.vidConfig.displayWidth;
            v11 = displayWidth * LocalClientViewParams->width;
            displayHeight = (float)cls.vidConfig.displayHeight;
            v13 = displayHeight * LocalClientViewParams->height;
            if ( LUI_CoD_UsingSplitscreenUpscaling() )
            {
              v11 = v11 * 1.6666666;
              v13 = v13 * 1.6666666;
            }
            LUI_CoD_CreateRoot(&s_rootData[v8], 0.0, 0.0, v11, v13, v7);
          }
          ++v5;
        }
      }
      ++v4;
    }
    while ( v4 < 2 );
    if ( v5 <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2623, ASSERT_TYPE_ASSERT, "(numRootsInUse > 0)", (const char *)&queryFormat, "numRootsInUse > 0") )
        __debugbreak();
      LastStackTraceBuffer = Com_GetLastStackTraceBuffer();
      IsClientActive = CL_Mgr_IsClientActive(LOCAL_CLIENT_1);
      Instance = PublisherVariableManager::GetInstance();
      HasRetrievedVariables = PublisherVariableManager::HasRetrievedVariables(Instance);
      v18 = DVARBOOL_onlinegame;
      v19 = HasRetrievedVariables;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v20 = v18->current.color[0];
      v21 = s_lastDeactivateClientTimestamp;
      v22 = CL_Mgr_IsClientActive(LOCAL_CLIENT_0);
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      LODWORD(v28) = 0;
      LODWORD(controllerIndex) = IsClientActive;
      LODWORD(fmt) = v22;
      Com_sprintf(dest, 0xC0ui64, "Error while creating client roots. Game Mode: %d, Client 0 active: %d, Client 1 active: %d, Is PS4: %d, Is PC: %d, Is XB3: %d Reason : %s Time %d Pub: %d OG: %d\n", ActiveGameMode, fmt, controllerIndex, v28, 0, 1, s_lastDeactivateClientReason, v21, v19, v20);
      if ( LUI_CoD_LUIRootDLogEnabled() )
        DLog_RecordErrorEvent(DLOG_ERROR_CODE_LUA, dest, LastStackTraceBuffer);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)0x200000, dest);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144465438);
    }
    v24 = LUI_luaVM;
    FontCache_CancelPreCacheGlyphs();
    v25 = s_currentLocalClientRoot;
    if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0)].inUse )
      v3 = LOCAL_CLIENT_INVALID;
    s_currentLocalClientRoot = v3;
    j_lua_getfield(v24, -10002, "PreCacheGlyphs");
    if ( j_lua_type(v24, -1) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2515, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 6))", (const char *)&queryFormat, "lua_isfunction( luaVM, -1 )") )
      __debugbreak();
    if ( LuaShared_PCall(LUI_luaVM, 0, 0) )
      LUI_ReportError("Error precaching glyphs\n", v24);
    if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(v25)].inUse )
      v25 = LOCAL_CLIENT_INVALID;
    s_currentLocalClientRoot = v25;
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_CreateRoot
==============
*/
void LUI_CoD_CreateRoot(LUIRootData *rootData, float left, float top, float right, float bottom, int controllerIndex)
{
  float v8; 
  LocalClientNum_t ClientFromController; 
  float topResult; 

  topResult = top;
  if ( rootData == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2099, ASSERT_TYPE_ASSERT, "(rootData->name)", (const char *)&queryFormat, "rootData->name") )
    __debugbreak();
  v8 = bottom;
  *(_WORD *)&rootData->forceFullscreen = 256;
  LUI_CoD_AdjustRootAspectRatio(left, top, right, v8, &topResult, &bottom, &rootData->projectionMatrix);
  ClientFromController = LOCAL_CLIENT_INVALID;
  if ( controllerIndex >= 0 )
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(ClientFromController)].inUse )
    ClientFromController = LOCAL_CLIENT_INVALID;
  s_currentLocalClientRoot = ClientFromController;
  LUI_CreateRoot(controllerIndex, rootData, left, topResult, right, bottom, cls.vidConfig.aspectRatioDisplayPixel, LUI_luaVM);
}

/*
==============
LUI_CoD_CreateVM
==============
*/
lua_State *LUI_CoD_CreateVM()
{
  lua_State *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 

  LUI_Interface_DebugPrint("%s\n", "LUI_CoD_CreateVM");
  v0 = j_lua_newstate(LuiAlloc, NULL);
  if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2157, ASSERT_TYPE_ASSERT, "(newState)", (const char *)&queryFormat, "newState") )
    __debugbreak();
  v1 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
  LUI_Interface_DebugPrint("  lua_newstate() [Lua Memory used: %d KB]\n", v1 >> 10);
  j_luaL_openlibs(v0);
  v2 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
  LUI_Interface_DebugPrint("  luaL_openlibs() [Lua Memory used: %d KB]\n", v2 >> 10);
  LuaCoD_SetLuaLoader(v0);
  v3 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
  LUI_Interface_DebugPrint("  LuaCoD_SetLuaLoader() [Lua Memory used: %d KB]\n", v3 >> 10);
  LUI_CoD_RegisterModules(v0);
  v4 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
  LUI_Interface_DebugPrint("  LUI_CoD_RegisterModules() [Lua Memory used: %d KB]\n", v4 >> 10);
  j_lua_getfield(v0, -10002, "package");
  j_lua_getfield(v0, -1, "preload");
  j_lua_pushcclosure(v0, luaopen_socket_core, 0);
  j_lua_setfield(v0, -2, "socket.core");
  j_lua_settop(v0, -3);
  if ( j_lua_gettop(v0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2178, ASSERT_TYPE_ASSERT, "(lua_gettop( newState ) == 0)", (const char *)&queryFormat, "lua_gettop( newState ) == 0") )
    __debugbreak();
  return v0;
}

/*
==============
LUI_CoD_CrossplaySettingsChanged
==============
*/
void LUI_CoD_CrossplaySettingsChanged(const int controllerIndex, const int partyId, const bool crossplaySetting)
{
  __int64 v4; 
  __int64 v5; 

  v4 = partyId;
  v5 = controllerIndex;
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    LUI_SetTableString("genEventName", "genCrossplaySettingChanged", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableBool("crossplaySetting", crossplaySetting, LUI_luaVM);
    LUI_SetTableInt("partyId", v4, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning
==============
*/
void LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    LUI_SetTableString("genEventName", "genCrossplaySettingDisabledOtherPlatformUserInPartyWarning", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v1, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_DestroyVM
==============
*/
void LUI_CoD_DestroyVM(lua_State *luaVm)
{
  ;
}

/*
==============
LUI_CoD_DetachDebugger
==============
*/
void LUI_CoD_DetachDebugger()
{
  LUI_EnterCriticalSection("LUI_CoD_DetachDebugger");
  if ( LUI_luaVM )
  {
    j_lua_getfield(LUI_luaVM, -10002, "mobdebug");
    j_lua_getfield(LUI_luaVM, -1, "requestDisconnect");
    j_lua_remove(LUI_luaVM, -2);
    if ( LuaShared_PCall(LUI_luaVM, 0, 0) )
      LUI_ReportError("Problem with detaching Lua debugger.", LUI_luaVM);
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_DetachDebugger_f
==============
*/
void LUI_CoD_DetachDebugger_f()
{
  LUI_EnterCriticalSection("LUI_CoD_DetachDebugger_f");
  *(_QWORD *)s_lui_lastDebuggerHostAddress = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[8] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[16] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[24] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[32] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[40] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[48] = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerHostAddress[56] = 0i64;
  *(_QWORD *)s_lui_lastDebuggerPort = 0i64;
  *(_QWORD *)&s_lui_lastDebuggerPort[8] = 0i64;
  LUI_CoD_DetachDebugger();
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_DetermineFontSizeAndScale
==============
*/
char LUI_CoD_DetermineFontSizeAndScale(LUIElement *element, float x, float y, float elementHeight, int *outFontRenderSize, float *outFontRenderScale, int *outFontLayoutSize, float *outFontLayoutScale, float *outRotation, float *outElementHeightOnScreen)
{
  bool v11; 
  float v12; 
  double CurrentUnitScale; 
  int MinHeightForDistanceField; 
  vec2_t vec; 
  float v22; 
  vec4_t quadVerts[4]; 

  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7150, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v11 = LUI_Is3DTransformEnabled();
  LUI_CoD_GenerateQuadVerts(x, y - elementHeight, x + 1.0, y, (vec4_t (*)[4])quadVerts);
  v12 = quadVerts[3].v[1] - quadVerts[0].v[1];
  vec.v[0] = (float)(quadVerts[3].v[0] - quadVerts[0].v[0]) * cls.vidConfig.aspectRatioDisplayPixel;
  fsqrt((float)((float)(vec.v[0] * vec.v[0]) + (float)(v12 * v12)) + (float)((float)(quadVerts[3].v[2] - quadVerts[0].v[2]) * (float)(quadVerts[3].v[2] - quadVerts[0].v[2])));
  _XMM6 = 0i64;
  v22 = quadVerts[3].v[2] - quadVerts[0].v[2];
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  *outElementHeightOnScreen = (float)(int)*(float *)&_XMM3 * 0.0099999998;
  vec.v[1] = v12;
  if ( v11 || (element->usageFlags & 0x1000) != 0 )
  {
    MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
  }
  else
  {
    CurrentUnitScale = LUI_Render_GetCurrentUnitScale();
    if ( element->imageData.uMax == 0.0 )
      element->imageData.uMax = *outElementHeightOnScreen / *(float *)&CurrentUnitScale;
    __asm { vroundss xmm0, xmm6, xmm2, 1 }
    MinHeightForDistanceField = (int)*(float *)&_XMM0;
  }
  *outFontRenderSize = MinHeightForDistanceField;
  *outFontRenderScale = *outElementHeightOnScreen / (float)MinHeightForDistanceField;
  __asm { vroundss xmm3, xmm6, xmm1, 1 }
  *outFontLayoutSize = (int)*(float *)&_XMM3;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  *outFontLayoutScale = (float)((float)(int)*(float *)&_XMM0 * 0.0099999998) / (float)(int)*(float *)&_XMM3;
  *(double *)&_XMM0 = vectoyaw(&vec);
  *outRotation = *(float *)&_XMM0 - 90.0;
  return 1;
}

/*
==============
LUI_CoD_DetermineGCType
==============
*/
__int64 LUI_CoD_DetermineGCType()
{
  if ( s_lowMemoryWarning )
  {
    s_luaLastEmergencyGC = Sys_Milliseconds();
    return 1i64;
  }
  else if ( Com_FrontEnd_IsInFrontEnd() )
  {
    return 2i64;
  }
  else
  {
    return 0i64;
  }
}

/*
==============
LUI_CoD_DrawAttachmentsReference
==============
*/
void LUI_CoD_DrawAttachmentsReference(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int ControllerFromClient; 
  __int64 v4; 
  LUIRootData *RootDataForController; 
  const char *v6; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int64 len; 
  char dest[1024]; 

  v1 = DVARBOOL_lui_attachments_ref;
  if ( !DVARBOOL_lui_attachments_ref && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_attachments_ref") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    LUI_EnterCriticalSection("LUI_CoD_DrawAttachmentsReference");
    if ( LUI_luaVM )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      v4 = ControllerFromClient;
      RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
      j_lua_getfield(LUI_luaVM, -10002, "LUI");
      j_lua_getfield(LUI_luaVM, -1, "roots");
      j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
      j_lua_getfield(LUI_luaVM, -10002, "GetAttachmentsReference");
      j_lua_pushinteger(LUI_luaVM, v4);
      if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
      {
        LUI_ReportError("Error Checking For Attachments Reference\n", LUI_luaVM);
LABEL_11:
        j_lua_settop(LUI_luaVM, -5);
        LUI_LeaveCriticalSection();
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        Com_sprintf(dest, 0x400ui64, (const char *)&queryFormat, dest);
        CG_DrawStringExt(ActivePlacement, 50.0, 0.0, dest, &colorGreen, 0, 1, 12.0, 0);
        return;
      }
      if ( j_lua_isstring(LUI_luaVM, -1) )
      {
        v6 = j_lua_tolstring(LUI_luaVM, -1, &len);
        if ( v6 )
          Core_strcpy(dest, 0x400ui64, v6);
        goto LABEL_11;
      }
      j_lua_settop(LUI_luaVM, -5);
    }
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_CoD_DrawFrontendWeaponModelName
==============
*/
void LUI_CoD_DrawFrontendWeaponModelName(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v5; 
  const ScreenPlacement *ActivePlacement; 
  unsigned __int64 len; 
  char dest[1024]; 

  v1 = DVARBOOL_lui_frontscene_weapon_model;
  if ( !DVARBOOL_lui_frontscene_weapon_model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_frontscene_weapon_model") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    LUI_EnterCriticalSection("LUI_CoD_DrawFrontendWeaponModelName");
    if ( LUI_luaVM )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
      j_lua_getfield(LUI_luaVM, -10002, "LUI");
      j_lua_getfield(LUI_luaVM, -1, "roots");
      j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
      j_lua_getfield(LUI_luaVM, -10002, "GetFrontsceneWeaponModelName");
      j_lua_pushvalue(LUI_luaVM, -2);
      if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
      {
        LUI_ReportError("Error Checking For Weapon Model Name\n", LUI_luaVM);
LABEL_11:
        j_lua_settop(LUI_luaVM, -5);
        LUI_LeaveCriticalSection();
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        Com_sprintf(dest, 0x400ui64, (const char *)&queryFormat, dest);
        CG_DrawStringExt(ActivePlacement, 50.0, 0.0, dest, &colorGreen, 0, 1, 8.0, 0);
        return;
      }
      if ( j_lua_isstring(LUI_luaVM, -1) )
      {
        v5 = j_lua_tolstring(LUI_luaVM, -1, &len);
        if ( v5 )
          Core_strcpy(dest, 0x400ui64, v5);
        goto LABEL_11;
      }
      j_lua_settop(LUI_luaVM, -5);
    }
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_CoD_DrawLuiDynIconStreamerInfo
==============
*/
void LUI_CoD_DrawLuiDynIconStreamerInfo(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v5; 
  unsigned int v6; 
  __int128 v7; 
  char *i; 
  bool v9; 
  const ScreenPlacement *v10; 
  __int64 v11; 
  __int128 v12; 
  unsigned __int64 len; 
  char string[256]; 
  char dest[4096]; 

  v1 = DVARBOOL_lui_icon_streamer_info;
  v2 = localClientNum;
  if ( !DVARBOOL_lui_icon_streamer_info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_icon_streamer_info") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return;
  LUI_EnterCriticalSection("LUI_CoD_DrawLuiDynIconStreamerInfo");
  if ( !LUI_luaVM )
  {
LABEL_24:
    LUI_LeaveCriticalSection();
    return;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetLuiImageStreamersInfo");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
    goto LABEL_11;
  }
  if ( !j_lua_isstring(LUI_luaVM, -1) )
  {
    j_lua_settop(LUI_luaVM, -5);
    goto LABEL_24;
  }
  v5 = j_lua_tolstring(LUI_luaVM, -1, &len);
  if ( v5 )
    Core_strcpy(dest, 0x1000ui64, v5);
LABEL_11:
  j_lua_settop(LUI_luaVM, -5);
  LUI_LeaveCriticalSection();
  v6 = 1;
  v7 = 0i64;
  for ( i = strtok(dest, ";"); i; i = strtok(NULL, ";") )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v10 = &scrPlaceViewDisplay[v2];
        goto LABEL_19;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v9 )
        __debugbreak();
    }
    v10 = &scrPlaceFull;
LABEL_19:
    v11 = v6++;
    Com_sprintf(string, 0x100ui64, "%d ) ---------- %s", v11, i);
    CG_DrawStringExt(v10, 160.0, *(float *)&v7, string, &colorGreen, 0, 1, 12.0, 0);
    v12 = v7;
    *(float *)&v12 = *(float *)&v7 + 12.0;
    v7 = v12;
  }
}

/*
==============
LUI_CoD_DrawLuiStreamedImageList
==============
*/
void LUI_CoD_DrawLuiStreamedImageList(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const dvar_t *v6; 

  v1 = DVARBOOL_lui_dyn_streamed_images;
  if ( !DVARBOOL_lui_dyn_streamed_images && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_dyn_streamed_images") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    goto LABEL_9;
  v3 = DVARBOOL_lui_streamed_images;
  if ( !DVARBOOL_lui_streamed_images && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_streamed_images") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
LABEL_9:
    LUI_EnterCriticalSection("LUI_CoD_DrawLuiStreamedImageList");
    if ( LUI_luaVM )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
      j_lua_getfield(LUI_luaVM, -10002, "LUI");
      j_lua_getfield(LUI_luaVM, -1, "roots");
      j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
      j_lua_getfield(LUI_luaVM, -10002, "GetLuiStreamedImageList");
      v6 = DVARBOOL_lui_dyn_streamed_images;
      if ( !DVARBOOL_lui_dyn_streamed_images && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_dyn_streamed_images") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled )
        j_lua_pushfstring(LUI_luaVM, "DYN_Streamer");
      else
        j_lua_pushnil(LUI_luaVM);
      if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
        LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
      Dvar_SetBool_Internal(DVARBOOL_lui_dyn_streamed_images, 0);
      Dvar_SetBool_Internal(DVARBOOL_lui_streamed_images, 0);
    }
    else
    {
      LUI_LeaveCriticalSection();
    }
  }
}

/*
==============
LUI_CoD_DrawMemoryGraph
==============
*/
void LUI_CoD_DrawMemoryGraph(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int v2; 
  float v3; 
  float v4; 
  float MemoryTotal; 
  float AllocatedElements; 
  vec2_t origin; 

  v1 = DVARBOOL_lui_memgraph;
  if ( !DVARBOOL_lui_memgraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_memgraph") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( !s_luiMemGraphInited )
    {
      s_luiMemGraphInited = 1;
      origin.v[0] = FLOAT_600_0;
      origin.v[1] = FLOAT_160_0;
      CG_InitDebugBufferData(&s_luiMemGraph, &origin, 700, 150, "mem", 300, 1, 5000.0);
      origin.v[0] = FLOAT_600_0;
      origin.v[1] = FLOAT_340_0;
      CG_InitDebugBufferData(&s_luiMemGraph2, &origin, 700, 150, "elems", 300, 1, 5000.0);
      CG_SetDebugBufferGraphColor(&s_luiMemGraph, 0xFFu, 0, 0, 0x8Cu);
      CG_SetDebugBufferBorderColor(&s_luiMemGraph, 0xFFu, 0, 0, 0x8Cu);
      CG_SetDebugBufferGraphColor(&s_luiMemGraph2, 0, 0xFFu, 0, 0x8Cu);
      CG_SetDebugBufferBorderColor(&s_luiMemGraph2, 0, 0xFFu, 0, 0x8Cu);
    }
    if ( dword_1545418B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
    {
      j__Init_thread_header(&dword_1545418B0);
      if ( dword_1545418B0 == -1 )
      {
        timeLast_1 = Sys_Milliseconds();
        j__Init_thread_footer(&dword_1545418B0);
      }
    }
    v2 = Sys_Milliseconds();
    v3 = (float)(v2 - timeLast_1);
    timeLast_1 = v2;
    v4 = (float)truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
    MemoryTotal = (float)LUI_CoD_GetMemoryTotal();
    CG_AddDebugBufferData(&s_luiMemGraph, v4 / MemoryTotal, v3);
    AllocatedElements = (float)LUI_GetAllocatedElements();
    CG_AddDebugBufferData(&s_luiMemGraph2, AllocatedElements * 0.00022222222, v3);
    CG_DebugBufferDraw(&s_luiMemGraph);
    CG_DebugBufferDraw(&s_luiMemGraph2);
  }
}

/*
==============
LUI_CoD_DrawMemoryReport
==============
*/
void LUI_CoD_DrawMemoryReport(const LocalClientNum_t localClientNum)
{
  __int128 v1; 
  __int128 v2; 
  int v4; 
  const ScreenPlacement *ActivePlacement; 
  int AllocatedElements; 
  float v7; 
  const vec4_t *v8; 
  const vec4_t *v9; 
  int NumTweensInUse; 
  int NumTweensTotal; 
  float v12; 
  const vec4_t *v13; 
  int NumModelsInUse; 
  int NumModelsTotal; 
  float v16; 
  const vec4_t *v17; 
  int NumSubscriptionsInUse; 
  int NumSubscriptionsTotal; 
  float v20; 
  const vec4_t *v21; 
  int NumHoldersInUse; 
  int NumHoldersTotal; 
  float v24; 
  const vec4_t *v25; 
  unsigned int v26; 
  signed int v27; 
  float v28; 
  const vec4_t *v29; 
  __m128 *v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v35; 
  float v36; 
  const vec4_t *v37; 
  int v38; 
  float v39; 
  int setColore; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  vec4_t *setColorb; 
  vec4_t *setColorc; 
  vec4_t *setColord; 
  char dest[256]; 
  __int128 v47; 
  __int128 v48; 

  if ( lui_drawmemreport->current.enabled )
  {
    v48 = v1;
    v47 = v2;
    v4 = Sys_Milliseconds();
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    AllocatedElements = LUI_GetAllocatedElements();
    v7 = (float)AllocatedElements * 0.00022222222;
    v8 = &colorOrange;
    if ( v7 >= 0.5 )
    {
      v9 = &colorRed;
      if ( v7 < 0.75 )
        v9 = &colorOrange;
    }
    else
    {
      v9 = &colorGreen;
    }
    setColore = 4500;
    Com_sprintf(dest, 0x100ui64, "LUI Elements: %d / %d", (unsigned int)AllocatedElements, setColore);
    CG_DrawStringExt(ActivePlacement, 0.0, 0.0, dest, v9, 0, 1, 12.0, 0);
    NumTweensInUse = LUI_Tween_GetNumTweensInUse();
    NumTweensTotal = LUI_Tween_GetNumTweensTotal();
    v12 = (float)NumTweensInUse / (float)NumTweensTotal;
    if ( v12 >= 0.5 )
    {
      v13 = &colorRed;
      if ( v12 < 0.75 )
        v13 = &colorOrange;
    }
    else
    {
      v13 = &colorGreen;
    }
    LODWORD(setColor) = NumTweensTotal;
    Com_sprintf(dest, 0x100ui64, "Tweens: %d / %d", (unsigned int)NumTweensInUse, setColor);
    CG_DrawStringExt(ActivePlacement, 0.0, 12.0, dest, v13, 0, 1, 12.0, 0);
    NumModelsInUse = LUI_Model_GetNumModelsInUse();
    NumModelsTotal = LUI_Model_GetNumModelsTotal();
    v16 = (float)NumModelsInUse / (float)NumModelsTotal;
    if ( v16 >= 0.5 )
    {
      v17 = &colorRed;
      if ( v16 < 0.75 )
        v17 = &colorOrange;
    }
    else
    {
      v17 = &colorGreen;
    }
    LODWORD(setColora) = NumModelsTotal;
    Com_sprintf(dest, 0x100ui64, "Models: %d / %d", (unsigned int)NumModelsInUse, setColora);
    CG_DrawStringExt(ActivePlacement, 0.0, 24.0, dest, v17, 0, 1, 12.0, 0);
    NumSubscriptionsInUse = LUI_Model_GetNumSubscriptionsInUse();
    NumSubscriptionsTotal = LUI_Model_GetNumSubscriptionsTotal();
    v20 = (float)NumSubscriptionsInUse / (float)NumSubscriptionsTotal;
    if ( v20 >= 0.5 )
    {
      v21 = &colorRed;
      if ( v20 < 0.75 )
        v21 = &colorOrange;
    }
    else
    {
      v21 = &colorGreen;
    }
    LODWORD(setColorb) = NumSubscriptionsTotal;
    Com_sprintf(dest, 0x100ui64, "Subscriptions: %d / %d", (unsigned int)NumSubscriptionsInUse, setColorb);
    CG_DrawStringExt(ActivePlacement, 0.0, 36.0, dest, v21, 0, 1, 12.0, 0);
    NumHoldersInUse = LUI_SubscriptionsHolder_GetNumHoldersInUse();
    NumHoldersTotal = LUI_SubscriptionsHolder_GetNumHoldersTotal();
    v24 = (float)NumHoldersInUse / (float)NumHoldersTotal;
    if ( v24 >= 0.5 )
    {
      v25 = &colorRed;
      if ( v24 < 0.75 )
        v25 = &colorOrange;
    }
    else
    {
      v25 = &colorGreen;
    }
    LODWORD(setColorc) = NumHoldersTotal;
    Com_sprintf(dest, 0x100ui64, "Subscriptions Holders: %d / %d", (unsigned int)NumHoldersInUse, setColorc);
    CG_DrawStringExt(ActivePlacement, 0.0, 48.0, dest, v25, 0, 1, 12.0, 0);
    v26 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed) >> 10;
    v27 = LUI_CoD_GetMemoryTotal() >> 10;
    v28 = (float)(int)v26 / (float)v27;
    if ( v28 >= 0.5 )
    {
      v29 = &colorRed;
      if ( v28 < 0.75 )
        v29 = &colorOrange;
    }
    else
    {
      v29 = &colorGreen;
    }
    LODWORD(setColord) = v27;
    Com_sprintf(dest, 0x100ui64, "Lua memory: %d / %d KB", v26, setColord);
    CG_DrawStringExt(ActivePlacement, 0.0, 60.0, dest, v29, 0, 1, 12.0, 0);
    Com_sprintf(dest, 0x100ui64, "Allocations this frame: %d", (unsigned int)s_LUIAllocationsThisFrame);
    CG_DrawStringExt(ActivePlacement, 0.0, 72.0, dest, &colorWhiteFaded, 0, 1, 12.0, 0);
    v30 = (__m128 *)&s_luiLastUpdateFrameDuration[4];
    v31 = 0i64;
    v32 = 0i64;
    do
    {
      v31 = _mm128_add_ps(v31, v30[-1]);
      v32 = _mm128_add_ps(v32, *v30);
      v30 += 2;
    }
    while ( (__int64)v30 < (__int64)&unk_15453D300 );
    _XMM1 = _mm128_add_ps(v31, v32);
    __asm { vmovhlps xmm0, xmm1, xmm1 }
    v35 = _mm128_add_ps(_XMM0, _XMM1);
    v36 = (float)(v35.m128_f32[0] + _mm_shuffle_ps(v35, v35, 245).m128_f32[0]) * 0.03125;
    Com_sprintf(dest, 0x100ui64, "UI Frame duration average: %.2fms", v36);
    if ( v36 <= 7.0 )
    {
      v37 = &colorGreen;
    }
    else
    {
      v37 = &colorOrange;
      if ( v36 > 10.0 )
        v37 = &colorRed;
    }
    CG_DrawStringExt(ActivePlacement, 0.0, 84.0, dest, v37, 0, 1, 12.0, 0);
    v38 = s_luiLastUpdateFrameDuration_nextIndex - 1;
    if ( s_luiLastUpdateFrameDuration_nextIndex - 1 < 0 )
      v38 = 31;
    v39 = s_luiLastUpdateFrameDuration[v38];
    Com_sprintf(dest, 0x100ui64, "Last UI Frame duration: %.2fms", v39);
    if ( v39 <= 7.0 )
    {
      v8 = &colorGreen;
    }
    else if ( v39 > 10.0 )
    {
      v8 = &colorRed;
    }
    CG_DrawStringExt(ActivePlacement, 0.0, 96.0, dest, v8, 0, 1, 12.0, 0);
    s_LUIAllocationsThisFrame = 0;
    if ( v4 - s_luaLastEmergencyGC < 1500 )
    {
      Com_sprintf(dest, 0x100ui64, "Emergency garbage collection occurred");
      CG_DrawStringExt(ActivePlacement, 0.0, 108.0, dest, &colorRed, 0, 1, 12.0, 0);
    }
  }
}

/*
==============
LUI_CoD_DrawStackMenuNames
==============
*/
void LUI_CoD_DrawStackMenuNames(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v5; 
  unsigned int v6; 
  __int128 v7; 
  char *i; 
  bool v9; 
  const ScreenPlacement *v10; 
  __int64 v11; 
  __int128 v12; 
  unsigned __int64 len; 
  char string[256]; 
  char dest[1024]; 

  v1 = DVARBOOL_lui_menustack_names;
  v2 = localClientNum;
  if ( !DVARBOOL_lui_menustack_names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_menustack_names") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return;
  LUI_EnterCriticalSection("LUI_CoD_DrawStackMenuNames");
  if ( !LUI_luaVM )
  {
LABEL_24:
    LUI_LeaveCriticalSection();
    return;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetAllMenuNames");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
    goto LABEL_11;
  }
  if ( !j_lua_isstring(LUI_luaVM, -1) )
  {
    j_lua_settop(LUI_luaVM, -5);
    goto LABEL_24;
  }
  v5 = j_lua_tolstring(LUI_luaVM, -1, &len);
  if ( v5 )
    Core_strcpy(dest, 0x400ui64, v5);
LABEL_11:
  j_lua_settop(LUI_luaVM, -5);
  LUI_LeaveCriticalSection();
  v6 = 1;
  v7 = 0i64;
  for ( i = strtok(dest, ";"); i; i = strtok(NULL, ";") )
  {
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v10 = &scrPlaceViewDisplay[v2];
        goto LABEL_19;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v9 )
        __debugbreak();
    }
    v10 = &scrPlaceFull;
LABEL_19:
    v11 = v6++;
    Com_sprintf(string, 0x100ui64, "%d ) ---------- %s", v11, i);
    CG_DrawStringExt(v10, 160.0, *(float *)&v7, string, &colorGreen, 0, 1, 12.0, 0);
    v12 = v7;
    *(float *)&v12 = *(float *)&v7 + 12.0;
    v7 = v12;
  }
}

/*
==============
LUI_CoD_DrawText_ComputeLineXPosition
==============
*/
double LUI_CoD_DrawText_ComputeLineXPosition(double x, float textWidth, double boxWidth, LUIHorizontalAlignment alignment, AutoScrollStyle *autoScrollStyle)
{
  bool v5; 
  bool v6; 
  double v7; 
  double v8; 

  v5 = autoScrollStyle && autoScrollStyle->options.direction[0] == 1;
  v6 = *(float *)&boxWidth > 0.0 && *(float *)&boxWidth < textWidth;
  if ( v5 && v6 )
    return LUI_AutoScroll_ComputeLineXPosition(*(float *)&x, textWidth, *(float *)&boxWidth, alignment, autoScrollStyle);
  if ( alignment == RIGHT )
  {
    HIDWORD(v8) = HIDWORD(boxWidth);
    *(float *)&v8 = (float)((float)(*(float *)&boxWidth - textWidth) * 0.5) + *(float *)&x;
    return v8;
  }
  else if ( alignment == 2 )
  {
    HIDWORD(v7) = HIDWORD(x);
    *(float *)&v7 = (float)(*(float *)&x + *(float *)&boxWidth) - textWidth;
    return v7;
  }
  return x;
}

/*
==============
LUI_CoD_DrawText_ComputeYOffset
==============
*/
float LUI_CoD_DrawText_ComputeYOffset(float lineHeight, char leading, int numLines, AutoScrollStyle *autoScrollStyle, LUIVerticalAlignment verticalAlignment)
{
  float v7; 
  double v8; 

  v7 = 0.0;
  if ( autoScrollStyle )
  {
    if ( autoScrollStyle->options.direction[0] == 2 )
    {
      v8 = LUI_AutoScroll_ComputeLineYOffset(lineHeight, numLines, autoScrollStyle, verticalAlignment);
      v7 = *(float *)&v8;
    }
  }
  if ( numLines > 1 )
  {
    if ( verticalAlignment == CENTER )
      return (float)((float)((float)(numLines - 1) * lineHeight) * -0.5) + v7;
    if ( verticalAlignment == BOTTOM )
      return COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(numLines - 1) * lineHeight) ^ _xmm) + v7;
  }
  return v7 + 0.0;
}

/*
==============
LUI_CoD_DumpAllocatedElementsFull_f
==============
*/
void LUI_CoD_DumpAllocatedElementsFull_f()
{
  LUI_DumpAllocatedElements(1);
}

/*
==============
LUI_CoD_DumpAllocatedElements_f
==============
*/
void LUI_CoD_DumpAllocatedElements_f()
{
  LUI_DumpAllocatedElements(0);
}

/*
==============
LUI_CoD_DumpTweens_f
==============
*/
void LUI_CoD_DumpTweens_f()
{
  LUI_DumpTweens(LUI_luaVM);
}

/*
==============
LUI_CoD_EnableBackgroundDownload
==============
*/
void LUI_CoD_EnableBackgroundDownload(bool enabled)
{
  int integer; 

  if ( !live_qos_maxprobeconnections && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2222, ASSERT_TYPE_ASSERT, "(live_qos_maxprobeconnections)", (const char *)&queryFormat, "live_qos_maxprobeconnections", -2i64) )
    __debugbreak();
  integer = live_qos_maxprobeconnections->current.integer;
  if ( enabled )
    Windows::Xbox::Networking::QualityOfService::ConfigureQualityOfService(integer, 0, 0);
  else
    Windows::Xbox::Networking::QualityOfService::ConfigureQualityOfService(integer, 1, 1);
}

/*
==============
LUI_CoD_Error
==============
*/
void LUI_CoD_Error(int errCode)
{
  _JBTYPE *LongJmp; 

  if ( errCode )
  {
    if ( LUI_Workers_IsRunningCmd() )
    {
      LUI_Workers_SetPendingComError(errCode);
      LongJmp = (_JBTYPE *)LUI_Workers_GetLongJmp();
      longjmp_0(LongJmp, 1);
    }
    if ( s_inLUIRenderFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2899, ASSERT_TYPE_ASSERT, "(!s_inLUIRenderFrame)", (const char *)&queryFormat, "!s_inLUIRenderFrame") )
      __debugbreak();
    if ( s_inLUIFrame )
      longjmp_0(s_longJumpBuffer, 1);
    LUI_CoD_Error_Recover(0);
  }
}

/*
==============
LUI_CoD_ErrorCleanup
==============
*/
void LUI_CoD_ErrorCleanup(void)
{
  int i; 

  for ( i = 0; i < 2; ++i )
    CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
  s_inLUIFrame = 0;
  LUI_CoD_Shutdown();
  LUI_ErrorCleanup(0);
  Cmd_TokenizeString_ErrorCleanup();
}

/*
==============
LUI_CoD_ErrorTest_f
==============
*/
void LUI_CoD_ErrorTest_f()
{
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444643F0, 542i64);
}

/*
==============
LUI_CoD_Error_Recover
==============
*/
void LUI_CoD_Error_Recover(const int lockLevel)
{
  int v2; 
  int i; 
  bool v4; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2878, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = 0;
  for ( i = 0; i < 2; ++i )
    CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
  s_inLUIFrame = 0;
  LUI_CoD_Shutdown();
  LUI_ErrorCleanup(lockLevel);
  Cmd_TokenizeString_ErrorCleanup();
  do
    CL_Keys_RemoveCatcher((LocalClientNum_t)v2++, -65);
  while ( v2 < 2 );
  LUI_CoD_Shutdown();
  v4 = Com_FrontEnd_IsInFrontEnd();
  LUI_CoD_Init(v4, 1);
}

/*
==============
LUI_CoD_ForceReleaseLock
==============
*/
void LUI_CoD_ForceReleaseLock(void)
{
  if ( LUI_Workers_IsRunningCmd() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2737, ASSERT_TYPE_ASSERT, "(!LUI_Workers_IsRunningCmd())", (const char *)&queryFormat, "!LUI_Workers_IsRunningCmd()") )
    __debugbreak();
  if ( LUI_TryEnterCriticalSection("LUI_CoD_ForceReleaseLock") )
  {
    s_canRunGCTask = 0;
    LUI_ErrorCleanup(0);
  }
}

/*
==============
LUI_CoD_ForceReleaseLockCleanup
==============
*/
void LUI_CoD_ForceReleaseLockCleanup(void)
{
  LUI_EnterCriticalSection("LUI_CoD_ForceReleaseLockCleanup");
  s_canRunGCTask = 1;
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_GCCanRun
==============
*/
_BOOL8 LUI_CoD_GCCanRun()
{
  return s_canRunGCTask;
}

/*
==============
LUI_CoD_GenerateQuadVerts
==============
*/
void LUI_CoD_GenerateQuadVerts(float left, float top, float right, float bottom, vec4_t (*quadVerts)[4])
{
  vec4_t (*v5)[4]; 
  __int64 v14; 

  v5 = quadVerts;
  *(float *)&_XMM9 = left;
  *(float *)&_XMM6 = bottom;
  *(float *)&_XMM7 = right;
  *(float *)&_XMM8 = top;
  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6276, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts") )
    __debugbreak();
  if ( !LUI_GetCurrentMenuTransform() )
  {
    _XMM9 = 0i64;
    _XMM8 = 0i64;
    __asm
    {
      vroundss xmm9, xmm9, xmm0, 1
      vroundss xmm8, xmm8, xmm1, 1
    }
    _XMM7 = 0i64;
    _XMM6 = 0i64;
    __asm
    {
      vroundss xmm7, xmm7, xmm0, 1
      vroundss xmm6, xmm6, xmm1, 1
    }
  }
  (*quadVerts)[0].v[0] = *(float *)&_XMM9;
  (*quadVerts)[0].v[1] = *(float *)&_XMM8;
  (*quadVerts)[0].v[3] = 1.0;
  (*quadVerts)[0].v[2] = 0.0;
  (*quadVerts)[1].v[0] = *(float *)&_XMM7;
  (*quadVerts)[1].v[1] = *(float *)&_XMM8;
  (*quadVerts)[1].v[2] = 0.0;
  v14 = 4i64;
  (*quadVerts)[1].v[3] = 1.0;
  (*quadVerts)[2].v[0] = *(float *)&_XMM7;
  (*quadVerts)[2].v[1] = *(float *)&_XMM6;
  (*quadVerts)[2].v[2] = 0.0;
  (*quadVerts)[2].v[3] = 1.0;
  (*quadVerts)[3].v[0] = *(float *)&_XMM9;
  (*quadVerts)[3].v[1] = *(float *)&_XMM6;
  (*quadVerts)[3].v[2] = 0.0;
  (*quadVerts)[3].v[3] = 1.0;
  do
  {
    LUI_ApplyTransformsToPoint((vec4_t *)v5);
    v5 = (vec4_t (*)[4])((char *)v5 + 16);
    --v14;
  }
  while ( v14 );
}

/*
==============
LUI_CoD_GenerateRotatedQuadVerts
==============
*/
void LUI_CoD_GenerateRotatedQuadVerts(float left, float top, float right, float bottom, float angle, float centerX, float centerY, vec4_t (*quadVerts)[4])
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __m128 v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  float v21; 
  float v22; 

  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6358, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts") )
    __debugbreak();
  v14 = (__m128)LODWORD(angle);
  *(double *)v14.m128_u64 = j___libm_sse2_sincosf_(v9, v8, v10, v11);
  v15 = _mm_shuffle_ps(v14, v14, 1).m128_f32[0];
  (*quadVerts)[0].v[3] = 1.0;
  (*quadVerts)[0].v[2] = 0.0;
  v16 = v14.m128_f32[0] * (float)(top - centerY);
  v17 = v15 * (float)(top - centerY);
  v18 = left - centerX;
  v19 = v15 * (float)(left - centerX);
  (*quadVerts)[0].v[0] = (float)(v19 - v16) + centerX;
  (*quadVerts)[0].v[1] = (float)(v17 + (float)(v14.m128_f32[0] * v18)) + centerY;
  (*quadVerts)[1].v[2] = 0.0;
  v20 = 4i64;
  (*quadVerts)[1].v[3] = 1.0;
  (*quadVerts)[1].v[0] = (float)((float)(v15 * (float)(right - centerX)) - v16) + centerX;
  v21 = v14.m128_f32[0] * (float)(right - centerX);
  v22 = bottom - centerY;
  (*quadVerts)[1].v[1] = (float)(v21 + v17) + centerY;
  (*quadVerts)[2].v[2] = 0.0;
  (*quadVerts)[2].v[3] = 1.0;
  (*quadVerts)[2].v[0] = (float)((float)(v15 * (float)(right - centerX)) - (float)(v14.m128_f32[0] * v22)) + centerX;
  (*quadVerts)[2].v[1] = (float)((float)(v15 * v22) + v21) + centerY;
  (*quadVerts)[3].v[1] = (float)((float)(v15 * v22) + (float)(v14.m128_f32[0] * v18)) + centerY;
  (*quadVerts)[3].v[0] = (float)(v19 - (float)(v14.m128_f32[0] * v22)) + centerX;
  (*quadVerts)[3].v[2] = 0.0;
  (*quadVerts)[3].v[3] = 1.0;
  do
  {
    LUI_ApplyTransformsToPoint((vec4_t *)quadVerts);
    --v20;
  }
  while ( v20 );
}

/*
==============
LUI_CoD_GetActiveTextEditCursorPosition
==============
*/
char LUI_CoD_GetActiveTextEditCursorPosition(LocalClientNum_t localClientNum, int *outX, int *outY)
{
  int *p_textEditRef; 

  p_textEditRef = &s_perController[CL_Mgr_GetControllerFromClient(localClientNum)].textEditRef;
  if ( *p_textEditRef == -2 )
    return 0;
  LUI_EnterCriticalSection("LUI_CoD_GetActiveTextEditCursorPosition");
  LUI_TextEdit_GetCursorPosition(localClientNum, *p_textEditRef, outX, outY, LUI_luaVM);
  LUI_LeaveCriticalSection();
  return 1;
}

/*
==============
LUI_CoD_GetBind
==============
*/
__int64 LUI_CoD_GetBind(LocalClientNum_t localClientNum)
{
  return (unsigned __int8)s_luaBind[localClientNum];
}

/*
==============
LUI_CoD_GetBindingSemantics
==============
*/
void LUI_CoD_GetBindingSemantics(int key, const bool returnInGameBindings, const char **outName)
{
  *outName = NULL;
  switch ( key )
  {
    case 13:
      if ( returnInGameBindings )
        *outName = "speed_throw";
      break;
    case 33:
      if ( returnInGameBindings )
        *outName = "gostand";
      break;
    case 47:
      if ( returnInGameBindings )
        *outName = "forward";
      break;
    case 49:
      if ( returnInGameBindings )
        *outName = "back";
      break;
    case 51:
      if ( returnInGameBindings )
        *outName = "move_left";
      break;
    case 53:
      if ( returnInGameBindings )
        *outName = "move_right";
      break;
    case 69:
      if ( returnInGameBindings )
        *outName = "activate";
      break;
    case 95:
      if ( returnInGameBindings )
        *outName = "special";
      break;
    case 119:
      *outName = "open_match_chat";
      break;
    case 120:
      *outName = "open_team_chat";
      break;
    case 121:
      *outName = "open_chat";
      break;
    case 153:
      *outName = "up";
      break;
    case 154:
      *outName = "down";
      break;
    case 155:
      *outName = "left";
      break;
    case 156:
      *outName = "right";
      break;
    case 157:
      *outName = "primary";
      break;
    case 158:
      *outName = "secondary";
      break;
    case 159:
      *outName = "alt1";
      break;
    case 160:
      *outName = "alt2";
      break;
    case 161:
      *outName = "left_trigger";
      break;
    case 162:
      *outName = "right_trigger";
      break;
    case 163:
      *outName = "left_stick";
      break;
    case 164:
      *outName = "select";
      break;
    case 165:
      *outName = "start";
      break;
    case 166:
      *outName = "right_stick";
      break;
    case 167:
      *outName = "unbind";
      break;
    case 168:
      *outName = "shoulderl";
      break;
    case 169:
      *outName = "shoulderr";
      break;
    case 170:
      *outName = "dismiss_pause_menu";
      break;
    case 172:
      *outName = "accept_notification";
      break;
    case 173:
      *outName = "decline_notification";
      break;
    case 174:
      *outName = "quick_options";
      break;
    case 175:
      *outName = "quick_social";
      break;
    case 176:
      *outName = "mute_sound";
      break;
    case 177:
      *outName = "mute_voicechat";
      break;
    case 178:
      *outName = "open_party_chat";
      break;
    case 179:
      *outName = "codcaster_spectate_player1";
      break;
    case 180:
      *outName = "codcaster_spectate_player2";
      break;
    case 181:
      *outName = "codcaster_spectate_player3";
      break;
    case 182:
      *outName = "codcaster_spectate_player4";
      break;
    case 183:
      *outName = "codcaster_spectate_player5";
      break;
    case 184:
      *outName = "codcaster_spectate_player6";
      break;
    case 185:
      *outName = "codcaster_spectate_player7";
      break;
    case 186:
      *outName = "codcaster_spectate_player8";
      break;
    case 187:
      *outName = "codcaster_spectate_player9";
      break;
    case 188:
      *outName = "codcaster_spectate_player10";
      break;
    case 189:
      *outName = "codcaster_camera_preset1";
      break;
    case 190:
      *outName = "codcaster_camera_preset2";
      break;
    case 191:
      *outName = "codcaster_camera_preset3";
      break;
    case 192:
      *outName = "codcaster_camera_preset4";
      break;
    case 193:
      *outName = "codcaster_camera_preset5";
      break;
    case 194:
      *outName = "codcaster_camera_preset6";
      break;
    case 195:
      *outName = "codcaster_camera_preset7";
      break;
    case 196:
      *outName = "codcaster_camera_preset8";
      break;
    case 197:
      *outName = "codcaster_camera_preset9";
      break;
    case 198:
      *outName = "codcaster_camera_preset10";
      break;
    case 199:
      *outName = "codcaster_spectate_next_player";
      break;
    case 200:
      *outName = "codcaster_spectate_previous_player";
      break;
    case 201:
      *outName = "codcaster_player_list_next";
      break;
    case 202:
      *outName = "codcaster_player_list_previous";
      break;
    case 203:
      *outName = "codcaster_spectate_selected_player";
      break;
    case 204:
      *outName = "codcaster_third_person";
      break;
    case 205:
      *outName = "codcaster_xray";
      break;
    case 206:
      *outName = "codcaster_player_numbers";
      break;
    case 207:
      *outName = "codcaster_player_hud";
      break;
    case 208:
      *outName = "codcaster_team_list";
      break;
    case 209:
      *outName = "codcaster_player_list";
      break;
    case 210:
      *outName = "codcaster_players_leaderboard";
      break;
    case 211:
      *outName = "codcaster_player_card";
      break;
    case 212:
      *outName = "codcaster_listen_in";
      break;
    case 213:
      *outName = "codcaster_settings_menu";
      break;
    case 214:
      *outName = "codcaster_nightvision";
      break;
    case 215:
      *outName = "codcaster_killfeed";
      break;
    case 216:
      *outName = "codcaster_player_notifications";
      break;
    case 217:
      *outName = "codcaster_announcement";
      break;
    case 218:
      *outName = "codcaster_fullscreen_leaderboard";
      break;
    case 219:
      *outName = "codcaster_player_stats";
      break;
    case 220:
      *outName = "codcaster_fullscreen_map";
      break;
    case 221:
      *outName = "codcaster_minimap";
      break;
    case 222:
      *outName = "codcaster_hide_layer";
      break;
    case 223:
      *outName = "codcaster_enable_mlg_freecamera";
      break;
    case 232:
      *outName = "codcaster_aerial_camera";
      break;
    case 233:
      *outName = "codcaster_aerial_toggle_lock";
      break;
    case 234:
      *outName = "codcaster_combo_key";
      break;
    case 235:
      *outName = "codcaster_focus";
      break;
    case 238:
      *outName = "codcaster_killstreak_view";
      break;
    case 239:
      *outName = "codcaster_aerial_focus_on_nearest";
      break;
    case 247:
      *outName = "codcaster_field_upgrade_view";
      break;
    case 248:
      *outName = "codcaster_aerial_focus_barycenter";
      break;
    default:
      return;
  }
}

/*
==============
LUI_CoD_GetCurrentLocalClient
==============
*/
__int64 LUI_CoD_GetCurrentLocalClient()
{
  return (unsigned int)s_currentLocalClientRoot;
}

/*
==============
LUI_CoD_GetCurrentRoot
==============
*/
LUIElement *LUI_CoD_GetCurrentRoot(lua_State *luaVM)
{
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  ControllerFromClient = -1;
  if ( !s_luaInFrontend )
  {
    if ( s_currentLocalClientRoot == LOCAL_CLIENT_INVALID )
      return 0i64;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(s_currentLocalClientRoot);
  }
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  return LUI_GetRootElement(RootDataForController->name, luaVM);
}

/*
==============
LUI_CoD_GetCurrentStencilValue
==============
*/
__int64 LUI_CoD_GetCurrentStencilValue()
{
  return (unsigned int)s_currentStencilValue;
}

/*
==============
LUI_CoD_GetCurrentValidLocalClient
==============
*/
__int64 LUI_CoD_GetCurrentValidLocalClient()
{
  __int64 result; 

  result = (unsigned int)s_currentLocalClientRoot;
  if ( s_currentLocalClientRoot == LOCAL_CLIENT_INVALID )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 4080, ASSERT_TYPE_ASSERT, "(s_currentLocalClientRoot != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "s_currentLocalClientRoot != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    return (unsigned int)s_currentLocalClientRoot;
  }
  return result;
}

/*
==============
LUI_CoD_GetFreeMemoryBytes
==============
*/
__int64 LUI_CoD_GetFreeMemoryBytes()
{
  unsigned int v0; 

  v0 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
  return LUI_CoD_GetMemoryTotal() - v0;
}

/*
==============
LUI_CoD_GetFrontendCinematicState
==============
*/
void LUI_CoD_GetFrontendCinematicState(CinematicState *cinematicState)
{
  if ( !cinematicState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7711, ASSERT_TYPE_ASSERT, "(cinematicState)", (const char *)&queryFormat, "cinematicState") )
    __debugbreak();
  *cinematicState = s_luiFrontendCinematicState;
}

/*
==============
LUI_CoD_GetKeySemantics
==============
*/
void LUI_CoD_GetKeySemantics(int key, const char **outName, const char **outQualifier)
{
  bool IsGamepadKey; 
  const char *v7; 

  *outName = NULL;
  *outQualifier = NULL;
  IsGamepadKey = KeyCodes_IsGamepadKey((keyNum_t)key);
  v7 = "keyboard";
  if ( IsGamepadKey )
    v7 = "gamepad";
  *outQualifier = v7;
  switch ( key )
  {
    case 1:
      *outName = "primary";
      return;
    case 2:
      *outName = "secondary";
      return;
    case 3:
      *outName = "alt1";
      return;
    case 4:
      *outName = "alt2";
      return;
    case 5:
      *outName = "shoulderl";
      return;
    case 6:
      *outName = "shoulderr";
      return;
    case 9:
      *outName = "tab";
      return;
    case 13:
      *outName = "enter";
      return;
    case 14:
      *outName = "start";
      return;
    case 15:
      *outName = "select";
      return;
    case 16:
      *outName = "left_stick";
      return;
    case 17:
      *outName = "right_stick";
      return;
    case 18:
      *outName = "left_trigger";
      return;
    case 19:
      *outName = "right_trigger";
      return;
    case 20:
      *outQualifier = "dpad";
      goto $LN8_173;
    case 21:
      *outQualifier = "dpad";
      goto $LN14_172;
    case 22:
      *outQualifier = "dpad";
      goto $LN5_137;
    case 23:
      *outQualifier = "dpad";
      goto $LN11_149;
    case 27:
      *outName = "escape";
      return;
    case 28:
    case 193:
$LN8_173:
      if ( key == 193 )
        *outQualifier = "mousewheel";
      *outName = "up";
      return;
    case 29:
    case 192:
$LN14_172:
      if ( key == 192 )
        *outQualifier = "mousewheel";
      *outName = "down";
      break;
    case 30:
    case 194:
$LN5_137:
      if ( key == 194 )
        *outQualifier = "mousewheel";
      *outName = "left";
      break;
    case 31:
    case 195:
$LN11_149:
      if ( key == 195 )
        *outQualifier = "mousewheel";
      *outName = "right";
      break;
    case 32:
      *outName = "space";
      break;
    case 39:
      *outName = "apostrophe";
      break;
    case 44:
      *outName = "comma";
      break;
    case 45:
      *outName = "minus";
      break;
    case 46:
      *outName = "dot";
      break;
    case 47:
      *outName = "slash";
      break;
    case 48:
      *outName = "0";
      break;
    case 49:
      *outName = "1";
      break;
    case 50:
      *outName = "2";
      break;
    case 51:
      *outName = "3";
      break;
    case 52:
      *outName = "4";
      break;
    case 53:
      *outName = "5";
      break;
    case 54:
      *outName = "6";
      break;
    case 55:
      *outName = "7";
      break;
    case 56:
      *outName = "8";
      break;
    case 57:
      *outName = "9";
      break;
    case 59:
      *outName = "semicolon";
      break;
    case 60:
      *outName = "iso_b00";
      break;
    case 61:
      *outName = "equal";
      break;
    case 65:
    case 97:
      *outName = "a";
      break;
    case 66:
    case 98:
      *outName = "b";
      break;
    case 67:
    case 99:
      *outName = "c";
      break;
    case 68:
    case 100:
      *outName = "d";
      break;
    case 69:
    case 101:
      *outName = "e";
      break;
    case 70:
    case 102:
      *outName = "f";
      break;
    case 71:
    case 103:
      *outName = "g";
      break;
    case 72:
    case 104:
      *outName = "h";
      break;
    case 73:
    case 105:
      *outName = "i";
      break;
    case 74:
    case 106:
      *outName = "j";
      break;
    case 75:
    case 107:
      *outName = "k";
      break;
    case 76:
    case 108:
      *outName = "l";
      break;
    case 77:
    case 109:
      *outName = "m";
      break;
    case 78:
    case 110:
      *outName = "n";
      break;
    case 79:
    case 111:
      *outName = "o";
      break;
    case 80:
    case 112:
      *outName = "p";
      break;
    case 81:
    case 113:
      *outName = "q";
      break;
    case 82:
    case 114:
      *outName = "r";
      break;
    case 83:
    case 115:
      *outName = "s";
      break;
    case 84:
    case 116:
      *outName = "t";
      break;
    case 85:
    case 117:
      *outName = "u";
      break;
    case 86:
    case 118:
      *outName = "v";
      break;
    case 87:
    case 119:
      *outName = "w";
      break;
    case 88:
    case 120:
      *outName = "x";
      break;
    case 89:
    case 121:
      *outName = "y";
      break;
    case 90:
    case 122:
      *outName = "z";
      break;
    case 91:
      *outName = "left_bracket";
      break;
    case 92:
      *outName = "backslash";
      break;
    case 93:
      *outName = "right_bracket";
      break;
    case 96:
      *outName = "grave";
      break;
    case 127:
      *outName = "backspace";
      break;
    case 128:
      *outName = "caps_lock";
      break;
    case 129:
      *outName = "print_screen";
      break;
    case 130:
      *outName = "scroll_lock";
      break;
    case 131:
      *outName = "pause";
      break;
    case 132:
      *outName = "uparrow";
      break;
    case 133:
      *outName = "down_arrow";
      break;
    case 134:
      *outName = "left_arrow";
      break;
    case 135:
      *outName = "right_arrow";
      break;
    case 136:
      *outName = "left_alt";
      break;
    case 137:
      *outName = "right_alt";
      break;
    case 138:
      *outName = "left_ctrl";
      break;
    case 139:
      *outName = "right_ctrl";
      break;
    case 140:
    case 141:
      *outName = "shift";
      break;
    case 142:
      *outName = "left_windows";
      break;
    case 143:
      *outName = "right_windows";
      break;
    case 144:
      *outName = "menu";
      break;
    case 145:
      *outName = "hiragana";
      break;
    case 146:
      *outName = "henkan";
      break;
    case 147:
      *outName = "muhenkan";
      break;
    case 148:
      *outName = "ins";
      break;
    case 149:
      *outName = "del";
      break;
    case 150:
      *outName = "page_down";
      break;
    case 151:
      *outName = "page_up";
      break;
    case 152:
      *outName = "home";
      break;
    case 153:
      *outName = "end";
      break;
    case 154:
      *outName = "f1";
      break;
    case 155:
      *outName = "f2";
      break;
    case 156:
      *outName = "f3";
      break;
    case 157:
      *outName = "f4";
      break;
    case 158:
      *outName = "f5";
      break;
    case 159:
      *outName = "f6";
      break;
    case 160:
      *outName = "f7";
      break;
    case 161:
      *outName = "f8";
      break;
    case 162:
      *outName = "f9";
      break;
    case 163:
      *outName = "f10";
      break;
    case 164:
      *outName = "f11";
      break;
    case 165:
      *outName = "f12";
      break;
    case 166:
      *outName = "f13";
      break;
    case 167:
      *outName = "f14";
      break;
    case 168:
      *outName = "f15";
      break;
    case 169:
      *outName = "numpad_7";
      break;
    case 170:
      *outName = "numpad_8";
      break;
    case 171:
      *outName = "numpad_9";
      break;
    case 172:
      *outName = "numpad_4";
      break;
    case 173:
      *outName = "numpad_5";
      break;
    case 174:
      *outName = "numpad_6";
      break;
    case 175:
      *outName = "numpad_1";
      break;
    case 176:
      *outName = "numpad_2";
      break;
    case 177:
      *outName = "numpad_3";
      break;
    case 178:
      *outName = "kp_enter";
      break;
    case 179:
      *outName = "numpad_0";
      break;
    case 180:
      *outName = "kp_del";
      break;
    case 181:
      *outName = "kp_slash";
      break;
    case 182:
      *outName = "kp_minus";
      break;
    case 183:
      *outName = "kp_plus";
      break;
    case 184:
      *outName = "kp_numlock";
      break;
    case 185:
      *outName = "kp_star";
      break;
    case 186:
      *outName = "kp_equals";
      break;
    case 218:
      *outName = "rs_up";
      break;
    case 219:
      *outName = "rs_down";
      break;
    case 220:
      *outName = "rs_left";
      break;
    case 221:
      *outName = "rs_right";
      break;
    default:
      return;
  }
}

/*
==============
LUI_CoD_GetMemoryTotal
==============
*/
__int64 LUI_CoD_GetMemoryTotal()
{
  __int64 result; 

  result = (unsigned int)s_luaMainAllocationSize;
  if ( s_luaExtraFrontendMemory && s_luaExtraFrontendMemoryInUse )
    result = (unsigned int)(s_luaMainAllocationSize + 1024);
  if ( s_luaExtraDbgSymbolMemory && s_luaExtraDbgSymbolMemoryInUse )
    result = (unsigned int)(result + 5767168);
  if ( s_luaExtraSplitscreenMemory && s_luaExtraSplitscreenMemoryInUse )
    result = (unsigned int)(result + 1024);
  if ( s_luaExtraSinglePlayerMemory && s_luaExtraSinglePlayerMemoryInUse )
    result = (unsigned int)(result + 1024);
  if ( s_luaExtraMultiPlayerMemory && s_luaExtraMultiPlayerMemoryInUse )
    result = (unsigned int)(result + 1024);
  if ( s_luaESportsShipMemory )
  {
    if ( s_luaESportsShipMemoryInUse )
      return (unsigned int)(result + 1024);
  }
  return result;
}

/*
==============
LUI_CoD_GetMemoryUsedBytes
==============
*/
unsigned int LUI_CoD_GetMemoryUsedBytes()
{
  return truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
}

/*
==============
LUI_CoD_GetMousePosition
==============
*/
char LUI_CoD_GetMousePosition(int controllerIndex, float *outX, float *outY)
{
  __int64 v3; 
  LUIRootData *RootDataForController; 
  float lastMouseX; 
  float lastMouseY; 
  float displayWidth; 
  float displayHeight; 
  char result; 

  v3 = controllerIndex;
  RootDataForController = LUI_CoD_GetRootDataForController(controllerIndex);
  lastMouseX = s_perController[v3].lastMouseX;
  if ( lastMouseX < 0.0 || (lastMouseY = s_perController[v3].lastMouseY, lastMouseY < 0.0) || (displayWidth = (float)vidConfig.displayWidth, lastMouseX > displayWidth) || (displayHeight = (float)vidConfig.displayHeight, lastMouseY > displayHeight) )
  {
    result = 0;
    *outX = -1000.0;
    *outY = -1000.0;
  }
  else
  {
    LUI_GetMousePosition(RootDataForController->name, lastMouseX, lastMouseY, outX, outY, LUI_luaVM);
    return 1;
  }
  return result;
}

/*
==============
LUI_CoD_GetParallaxOffsetForLocalClient
==============
*/
tmat44_t<vec4_t> *LUI_CoD_GetParallaxOffsetForLocalClient(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  tmat44_t<vec4_t> *p_parallaxMatrix; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  p_parallaxMatrix = &RootDataForController->parallaxMatrix;
  if ( !RootDataForController->parallaxSource[0] )
    LUI_Matrix_LoadIdentity(&RootDataForController->parallaxMatrix);
  return p_parallaxMatrix;
}

/*
==============
LUI_CoD_GetRootDataForController
==============
*/
LUIRootData *LUI_CoD_GetRootDataForController(const int controllerIndex)
{
  __int64 v1; 
  __int64 v3; 

  v1 = controllerIndex;
  if ( controllerIndex == -1 )
  {
    if ( s_luaInFrontend )
      return &s_fullscreenRootData;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 4046, ASSERT_TYPE_ASSERT, "(controllerIndex != -1 || s_luaInFrontend)", (const char *)&queryFormat, "controllerIndex != -1 || s_luaInFrontend") )
      __debugbreak();
  }
  if ( s_luaInFrontend )
    return &s_fullscreenRootData;
  v3 = v1;
  if ( !s_rootData[v3].inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 4053, ASSERT_TYPE_ASSERT, "(s_rootData[controllerIndex].inUse)", (const char *)&queryFormat, "s_rootData[controllerIndex].inUse") )
    __debugbreak();
  return &s_rootData[v3];
}

/*
==============
LUI_CoD_GetRootNameForController
==============
*/
char *LUI_CoD_GetRootNameForController(int controllerIndex)
{
  return LUI_CoD_GetRootDataForController(controllerIndex)->name;
}

/*
==============
LUI_CoD_GetRootSpaceMousePosition
==============
*/
void LUI_CoD_GetRootSpaceMousePosition(int controllerIndex, float *outX, float *outY)
{
  __int64 v3; 

  v3 = controllerIndex;
  *outX = s_perController[v3].lastMouseX;
  *outY = s_perController[v3].lastMouseY;
}

/*
==============
LUI_CoD_GetSpinnerMaterial
==============
*/
const GfxImage *LUI_CoD_GetSpinnerMaterial()
{
  return s_spinnerMaterial;
}

/*
==============
LUI_CoD_GetWaitingForKeyBind
==============
*/
_BOOL8 LUI_CoD_GetWaitingForKeyBind(LocalClientNum_t localClientNum)
{
  return s_luaWaitingForKeyBind[localClientNum];
}

/*
==============
LUI_CoD_GetWorldBlurForLocalClient
==============
*/
float LUI_CoD_GetWorldBlurForLocalClient(LocalClientNum_t localClientNum)
{
  _XMM2 = LODWORD(s_rootData[CL_Mgr_GetControllerFromClient(localClientNum)].worldBlurRadius);
  __asm
  {
    vcmpltss xmm0, xmm2, xmm1
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  return *(float *)&_XMM0;
}

/*
==============
LUI_CoD_HandleKeyBind
==============
*/
void LUI_CoD_HandleKeyBind(LocalClientNum_t localClientNum, int key)
{
  unsigned __int64 v2; 
  __int64 ControllerFromClient; 
  __int64 v5; 
  InputContext v6; 
  const char *v7; 
  CL_KeyBind *v8; 
  __int64 v9; 
  Bind v10; 
  CL_KeyBindSlot v11; 
  bool v12; 
  int v13; 
  keyNum_t BoundKey; 
  lua_State *v15; 
  LocalClientNum_t ClientFromController; 
  int v17; 
  CL_KeyBind *v18; 
  lua_State *v19; 
  const char *v20; 
  const char *CommandForBinding; 
  const char *v22; 
  int v23; 
  CL_KeyBind unboundActions[20]; 
  char result[256]; 

  v2 = localClientNum;
  if ( !s_luaWaitingForKeyBind[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5750, ASSERT_TYPE_ASSERT, "(s_luaWaitingForKeyBind[localClientNum])", (const char *)&queryFormat, "s_luaWaitingForKeyBind[localClientNum]") )
    __debugbreak();
  if ( !KeyCodes_IsGamepadKey((keyNum_t)key) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    if ( key == 27 )
    {
      if ( LUI_BeginEvent((LocalClientNum_t)v2, "key_bound", LUI_luaVM) )
      {
        LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_SetTableBool("cancelBinding", 1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
      if ( v2 < 2 )
      {
        s_luaWaitingForKeyBind[v2] = 0;
        return;
      }
LABEL_37:
      j___report_rangecheckfailure(v5);
      JUMPOUT(0x14244DC2Ai64);
    }
    v6 = s_luaKeyBindInputContext[v2];
    if ( ((v6 - 8) & 0xFD) != 0 || (unsigned __int8)(key + 69) > 2u && (unsigned __int8)(key + 64) > 1u )
    {
      if ( (_BYTE)key != 96 || Dvar_GetBool_Internal_DebugName(DVARBOOL_con_bindableGrave, "con_bindableGrave") )
      {
        v8 = unboundActions;
        v9 = 15i64;
        do
        {
          CL_KeyBind::CL_KeyBind(v8++);
          --v9;
        }
        while ( v9 );
        v10 = s_luaBind[v2];
        if ( v10 == BIND_VOID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5800, ASSERT_TYPE_ASSERT, "(bind != BIND_VOID)", (const char *)&queryFormat, "bind != BIND_VOID") )
          __debugbreak();
        v11 = s_luaKeyBindSlot[v2];
        if ( v11 == BYTE_VALUE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5802, ASSERT_TYPE_ASSERT, "(slot != CL_KeyBindSlot::INVALID)", (const char *)&queryFormat, "slot != CL_KeyBindSlot::INVALID") )
          __debugbreak();
        v23 = CL_Keys_BindKey((LocalClientNum_t)v2, v6, v10, v11, (keyNum_t)key, (CL_KeyBind (*)[15])unboundActions);
        v12 = v11 == INVALID;
        v13 = 0;
        if ( CL_Keys_GetBoundKey((LocalClientNum_t)v2, v6, v10, (CL_KeyBindSlot)v12, 0) == K_INHERIT )
        {
          BoundKey = CL_Keys_GetBoundKey((LocalClientNum_t)v2, v6, v10, (CL_KeyBindSlot)v12, 1);
          CL_Keys_BindKey((LocalClientNum_t)v2, v6, v10, (CL_KeyBindSlot)v12, BoundKey, NULL);
        }
        if ( v2 >= 2 )
          goto LABEL_37;
        v15 = LUI_luaVM;
        s_luaWaitingForKeyBind[v2] = 0;
        ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
        if ( LUI_BeginEvent(ClientFromController, "key_bound", v15) )
        {
          LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_SetTableBool("cancelBinding", 0, LUI_luaVM);
          LUI_BeginTable("unboundCommands", LUI_luaVM);
          v17 = 0;
          v18 = unboundActions;
          do
          {
            if ( v18->action )
            {
              v19 = LUI_luaVM;
              ++v13;
              v20 = CL_InputContext_ToName((InputContext)v17);
              CommandForBinding = Com_Keys_GetCommandForBinding((unsigned __int8)v18->action);
              v22 = j_va("%s%s", CommandForBinding, v20);
              LUI_SetTableString(v13, v22, v19);
            }
            ++v17;
            ++v18;
          }
          while ( v17 < 15 );
          LUI_EndTable(LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
          if ( v23 != v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5835, ASSERT_TYPE_ASSERT, "(unboundCount == table_index)", (const char *)&queryFormat, "unboundCount == table_index") )
            __debugbreak();
        }
      }
    }
    else if ( LUI_BeginEvent((LocalClientNum_t)v2, "key_bound", LUI_luaVM) )
    {
      v7 = Com_Keys_KeynumToLocalizedKeyName(ControllerFromClient, key);
      UI_FormatLocalizedKeyName(result, 0x100ui64, v7, 0);
      LUI_SetTableInt("controller", ControllerFromClient, LUI_luaVM);
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_SetTableBool("cancelBinding", 0, LUI_luaVM);
      LUI_SetTableBool("invalidBinding", 1, LUI_luaVM);
      LUI_SetTableString("buttonName", result, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
LUI_CoD_HandleMyChangesLoad
==============
*/
void LUI_CoD_HandleMyChangesLoad(void)
{
  int i; 
  bool v1; 

  if ( s_loadingMychanges && s_unloadedLuaAsset )
  {
    Com_PrintWarning(13, "LUI: Basic restart of LUI since mychanges forced an unload of the script vm, run 'luiReload' to restore fully");
    for ( i = 0; i < 2; ++i )
      CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
    LUI_CoD_Shutdown();
    v1 = Com_FrontEnd_IsInFrontEnd();
    LUI_CoD_Init(v1, 0);
  }
  s_loadingMychanges = 0;
  s_unloadedLuaAsset = 0;
}

/*
==============
LUI_CoD_HasShownSplashScreens
==============
*/
_BOOL8 LUI_CoD_HasShownSplashScreens()
{
  return s_hasShownSplashScreen;
}

/*
==============
LUI_CoD_InFrontend
==============
*/
_BOOL8 LUI_CoD_InFrontend()
{
  return s_luaInFrontend;
}

/*
==============
LUI_CoD_Init
==============
*/
void LUI_CoD_Init(bool frontend, bool errorRecovery)
{
  const char *v4; 
  const char *v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  int v11; 
  int v12; 
  XAssetHeader v13; 
  unsigned __int8 ActiveGameMode; 
  const dvar_t *v15; 
  char **v16; 
  const dvar_t *v17; 
  char **v18; 
  const char *StringSafe; 
  const char *v20; 
  const char *v21; 
  unsigned int v22; 
  float displayHeight; 
  float displayWidth; 
  int v25; 
  int inParty; 
  int ControllerFromClient; 
  const dvar_t *v28; 
  int v29; 
  const dvar_t *v30; 
  int v31; 
  const dvar_t *v32; 
  int v33; 
  const dvar_t *v34; 
  int v35; 
  bool BoolSafe; 
  const dvar_t *v37; 
  BOOL v38; 
  lua_State *v39; 
  const char *v40; 
  unsigned int v41; 
  char *fmt; 
  __int64 controllerIndex; 
  __int64 v44; 
  int v46; 
  int v47; 
  BOOL v48; 
  BOOL v49; 
  int v50; 
  char dest[128]; 

  v4 = (char *)&queryFormat.fmt + 3;
  if ( errorRecovery )
    v4 = "recovering";
  v5 = "(in-game)";
  if ( frontend )
    v5 = "(frontend)";
  LUI_Interface_DebugPrint("LUI: Initializing %s %s\n", v5, v4);
  memset_0(s_rootData, 0, sizeof(s_rootData));
  memset_0(&s_fullscreenRootData, 0, sizeof(s_fullscreenRootData));
  memset_0(s_perController, 0, sizeof(s_perController));
  v6 = DCONST_DVARBOOL_lui_enabled;
  s_perController[0].textEditRef = -2;
  s_perController[1].textEditRef = -2;
  s_perController[2].textEditRef = -2;
  s_perController[3].textEditRef = -2;
  s_perController[4].textEditRef = -2;
  s_perController[5].textEditRef = -2;
  s_perController[6].textEditRef = -2;
  s_perController[7].textEditRef = -2;
  s_perController[0].lastMouseX = FLOAT_N1000_0;
  s_perController[0].lastMouseY = FLOAT_N1000_0;
  s_perController[1].lastMouseX = FLOAT_N1000_0;
  s_perController[1].lastMouseY = FLOAT_N1000_0;
  s_perController[2].lastMouseX = FLOAT_N1000_0;
  s_perController[2].lastMouseY = FLOAT_N1000_0;
  s_perController[3].lastMouseX = FLOAT_N1000_0;
  s_perController[3].lastMouseY = FLOAT_N1000_0;
  s_perController[4].lastMouseX = FLOAT_N1000_0;
  s_perController[4].lastMouseY = FLOAT_N1000_0;
  s_perController[5].lastMouseX = FLOAT_N1000_0;
  s_perController[5].lastMouseY = FLOAT_N1000_0;
  s_perController[6].lastMouseX = FLOAT_N1000_0;
  s_perController[6].lastMouseY = FLOAT_N1000_0;
  s_perController[7].lastMouseX = FLOAT_N1000_0;
  s_perController[7].lastMouseY = FLOAT_N1000_0;
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && (!frontend || !Sys_IsPLMHotLoadActive()) )
  {
    v7 = 0;
    v8 = 0i64;
    v9 = 72i64;
    do
    {
      s_luiMaterials[v8] = Material_Register(s_luiMaterialNames[v8], IMAGE_TRACK_UI);
      ++v8;
      --v9;
    }
    while ( v9 );
    s_luiCinematicMaterial = Material_Register("cinematic", IMAGE_TRACK_UI);
    s_luiCinematicMP4Material = Material_Register("cinematic_mp4", IMAGE_TRACK_UI);
    s_luiCalibrationPassthruMaterial = Material_Register("ui_calibration_passthru", IMAGE_TRACK_UI);
    s_luiCalibrationDisplayMappingMaterial = Material_Register("ui_calibration_display_mapped", IMAGE_TRACK_UI);
    if ( !DB_FindXAssetHeader(ASSET_TYPE_LUA_FILE, "ui/LUIStartup.lua", 0).physicsLibrary )
    {
      Sys_Error((const ObfuscateErrorText)&stru_144465028, "ui/LUIStartup.lua");
      return;
    }
    LUI_CoD_EnableBackgroundDownload(frontend);
    if ( !errorRecovery )
    {
      LUI_Model_UnsubscribeAndFreeInGameModel();
      if ( !frontend )
        LUI_Model_UnsubscribeAndFreeFrontendModel();
      LUI_Model_ResetSubscriptions();
      LUIBinding::InvalidateCachedModels();
    }
    LUI_EnterCriticalSection("LUI_CoD_Init");
    s_luaInFrontend = frontend;
    s_luaInInitProcess = 1;
    s_canRunGCTask = 1;
    s_prevQuickInventoryDownInput = -1;
    LUI_DefaultMaterial = Image_Register("$white", IMAGE_TRACK_UI);
    s_spinnerMaterial = Image_Register("spinner_streamer", IMAGE_TRACK_UI);
    v10 = 1;
    LUI_DefaultFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 14);
    if ( s_luaInFrontend )
    {
      v11 = Sys_Milliseconds();
      if ( !s_luaExtraFrontendMemory )
      {
        while ( 1 )
        {
          Sys_CheckQuitRequest();
          Sys_Sleep(3);
          if ( Sys_Milliseconds() - v11 > 20000 )
            break;
          if ( s_luaExtraFrontendMemory )
            goto LABEL_25;
        }
        v10 = 0;
      }
LABEL_25:
      v12 = Sys_Milliseconds();
      Com_Printf(13, "LUI: Waited for %d ms for frontend memory to be allocated\n", (unsigned int)(v12 - v11));
      if ( !v10 )
      {
        LUI_LeaveCriticalSection();
        Sys_Error((const ObfuscateErrorText)&stru_144465078);
        return;
      }
    }
    LUI_Interface_DebugPrint("%s\n", "LUI_CoD_InitMemory");
    if ( LUI_CoD_IsEnabled() )
    {
      if ( s_luaMemory )
      {
        memset_0(s_luaMemory, 0, (unsigned int)s_luaMainAllocationSize);
        memset_0(s_luaDebugMemory.debuggerMem, 0, 0xA00000ui64);
      }
      else
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating main LUI memory: %u\n", 0x4000000i64);
        LODWORD(s_luaMainAllocationSize) = 0x4000000;
        s_luaMemory = PMem_Alloc(0x4000000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LUI_Main");
        LUI_Interface_DebugPrint("LUI memory: Allocating LUI debugger memory: %u\n", 10485760i64);
        s_luaDebugMemory.debuggerMem = PMem_Alloc(0xA00000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LUI_Debug");
      }
      if ( s_tlsf_lua.tlsf )
        j_tlsf_destroy(s_tlsf_lua.tlsf);
      CrashReport_AddMemRegion("s_tlsf_lua", &s_tlsf_lua, 0x20ui64);
      s_tlsf_lua.tlsf = j_tlsf_create_with_pool(s_luaMemory, 0x4000000ui64);
      s_tlsf_lua.currentLuaMemoryUsed = 0i64;
      s_luaTlsfDebugMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaDebugMemory.debuggerMem, 0xA00000ui64);
    }
    LUI_Init(LUI_CoD_CreateVM, LUI_CoD_DestroyVM);
    v13.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_LUA_FILE, "ui/LUIStartup.lua", 0).physicsLibrary;
    if ( v13.physicsLibrary && !LOBYTE(v13.physicsLibrary->havokDataSize) && !s_luaExtraDbgSymbolMemory )
    {
      s_luaExtraDbgSymbolMemoryInUse = 1;
      s_luaExtraDbgSymbolMemory = Mem_Virtual_Alloc(0x580000ui64, "LUI_DevMemory", TRACK_DEBUG);
      LUI_Interface_DebugPrint("LUI memory: Allocating extra debug symbol memory: %u\n", 5767168i64);
      s_luaExtraDbgSymbolMemoryInUse = 0;
    }
    if ( !s_luaInFrontend )
    {
      if ( s_luaExtraSinglePlayerMemory )
        goto LABEL_139;
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating extra SP memory: %u\n", 1024i64);
        s_luaExtraSinglePlayerMemoryInUse = 0;
        s_luaExtraSinglePlayerMemory = s_luaExtraSinglePlayerMemoryBuf;
      }
      if ( !s_luaInFrontend )
      {
LABEL_139:
        if ( !s_luaExtraMultiPlayerMemory )
        {
          ActiveGameMode = Com_GameMode_GetActiveGameMode();
          if ( BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
          {
            LUI_Interface_DebugPrint("LUI memory: Allocating extra MP memory: %u\n", 1024i64);
            s_luaExtraMultiPlayerMemoryInUse = 0;
            s_luaExtraMultiPlayerMemory = s_luaExtraMultiPlayerMemoryBuf;
          }
        }
      }
    }
    if ( s_luaExtraDbgSymbolMemory && !s_luaExtraDbgSymbolMemoryInUse && LUI_luaVM )
    {
      LUI_Interface_DebugPrint("LUI memory: Mapping extra debug symbol memory\n");
      s_luaExtraDevMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaExtraDbgSymbolMemory, 0x580000ui64);
      s_luaExtraDbgSymbolMemoryInUse = 1;
    }
    if ( s_luaInFrontend )
    {
      if ( s_luaExtraFrontendMemory && !s_luaExtraFrontendMemoryInUse && LUI_luaVM )
      {
        LUI_Interface_DebugPrint("LUI memory: Mapping extra frontend memory\n");
        s_luaExtraFrontendMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaExtraFrontendMemory, 0x400ui64);
        s_luaExtraFrontendMemoryInUse = 1;
      }
      if ( s_luaInFrontend )
        goto LABEL_93;
    }
    if ( s_luaExtraSinglePlayerMemory && !s_luaExtraSinglePlayerMemoryInUse && LUI_luaVM )
    {
      LUI_Interface_DebugPrint("LUI memory: Mapping extra SP memory\n");
      s_luaExtraSinglePlayerMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaExtraSinglePlayerMemory, 0x400ui64);
      s_luaExtraSinglePlayerMemoryInUse = 1;
    }
    if ( s_luaInFrontend )
      goto LABEL_93;
    if ( s_luaExtraMultiPlayerMemory )
    {
      if ( !s_luaExtraMultiPlayerMemoryInUse )
      {
        if ( LUI_luaVM )
        {
          LUI_Interface_DebugPrint("LUI memory: Mapping extra MP memory\n");
          s_luaExtraMultiPlayerMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaExtraMultiPlayerMemory, 0x400ui64);
          s_luaExtraMultiPlayerMemoryInUse = 1;
          if ( s_luaInFrontend )
            goto LABEL_93;
        }
      }
    }
    if ( !s_luaExtraSplitscreenMemory )
    {
      v15 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled )
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating extra splitscreen memory: %u\n", 1024i64);
        v16 = s_luaExtraSplitscreenMemoryBuf;
        s_luaExtraSplitscreenMemoryInUse = 0;
        s_luaExtraSplitscreenMemory = s_luaExtraSplitscreenMemoryBuf;
      }
      else
      {
        v16 = (char **)s_luaExtraSplitscreenMemory;
      }
      if ( s_luaInFrontend )
        goto LABEL_93;
      if ( !v16 )
        goto LABEL_89;
    }
    if ( s_luaExtraSplitscreenMemoryInUse || !LUI_luaVM )
      goto LABEL_89;
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_splitscreen, "splitscreen") )
    {
      LUI_Interface_DebugPrint("LUI memory: Mapping extra splitscreen memory\n");
      s_luaExtraSplitscreenMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaExtraSplitscreenMemory, 0x400ui64);
      s_luaExtraSplitscreenMemoryInUse = 1;
    }
    if ( !s_luaInFrontend )
    {
LABEL_89:
      if ( s_luaESportsShipMemory )
        goto LABEL_91;
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF_HALF )
        goto LABEL_87;
      v17 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      if ( !v17->current.enabled && Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_esports_shipMemory, "lui_esports_shipMemory") )
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating extra esports memory: %u\n", 1024i64);
        v18 = s_luaExtraESportsMemoryBuf;
        s_luaESportsShipMemoryInUse = 0;
        s_luaESportsShipMemory = s_luaExtraESportsMemoryBuf;
      }
      else
      {
LABEL_87:
        v18 = (char **)s_luaESportsShipMemory;
      }
      if ( !s_luaInFrontend && v18 )
      {
LABEL_91:
        if ( !s_luaESportsShipMemoryInUse && LUI_luaVM )
        {
          LUI_Interface_DebugPrint("LUI memory: Mapping extra esports memory\n");
          s_luaESportsShipMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaESportsShipMemory, 0x400ui64);
          s_luaESportsShipMemoryInUse = 1;
        }
      }
    }
LABEL_93:
    if ( LUI_LoadLuaFile("ui.dev.LUIStartupDebug", LUI_luaVM) )
    {
      StringSafe = Dvar_GetStringSafe("LRROMKLOO");
      if ( *StringSafe )
      {
        v20 = j_va("luiAttachDebugger %s 8172", StringSafe);
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        Cmd_TokenizeString(v20);
        if ( Cmd_Argc() )
        {
          cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
          cmd_args.controllerIndex[cmd_args.nesting] = 0;
          v21 = Cmd_Argv(0);
          if ( !Cmd_ExecuteCommandFunctions(v21, v20, &s_cmd_functions) && !Dvar_Command(0) )
            CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, v20);
        }
        Cmd_EndTokenizedString();
      }
    }
    if ( LUI_LoadLUIInitFile() )
    {
      v22 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
      LUI_Interface_DebugPrint("  LUI_LoadLUIInitFile() [Lua Memory used: %d KB]\n", v22 >> 10);
      if ( frontend )
      {
        Core_strcpy(s_fullscreenRootData.name, 0x20ui64, "UIRootFull");
        displayHeight = (float)vidConfig.displayHeight;
        displayWidth = (float)vidConfig.displayWidth;
        LUI_CoD_CreateRoot(&s_fullscreenRootData, 0.0, 0.0, displayWidth, displayHeight, -1);
      }
      else
      {
        LUI_CoD_CreateClientRoots();
      }
      v50 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
      v25 = 1;
      v49 = CL_AllLocalClientsInactive();
      if ( g_launchData.skipMovies || (v46 = 1, s_hasShownSplashScreen) )
        v46 = 0;
      if ( Live_IsInSystemlinkLobby() )
        inParty = g_partyData.inParty;
      else
        inParty = Lobby_IsInLobby();
      v48 = inParty != 0;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      v28 = DVARBOOL_xblive_privatematch;
      v47 = ControllerFromClient;
      if ( !DVARBOOL_xblive_privatematch || (Dvar_CheckFrontendServerThread(DVARBOOL_xblive_privatematch), v29 = 1, !v28->current.enabled) )
        v29 = 0;
      v30 = DVARBOOL_xblive_privatematch_solo;
      if ( !DVARBOOL_xblive_privatematch_solo || (Dvar_CheckFrontendServerThread(DVARBOOL_xblive_privatematch_solo), v31 = 1, !v30->current.enabled) )
        v31 = 0;
      v32 = DVARBOOL_mlg_gamebattles_match;
      if ( !DVARBOOL_mlg_gamebattles_match || (Dvar_CheckFrontendServerThread(DVARBOOL_mlg_gamebattles_match), v33 = 1, !v32->current.enabled) )
        v33 = 0;
      v34 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink || (Dvar_CheckFrontendServerThread(DVARBOOL_systemlink), v35 = 1, !v34->current.enabled) )
        v35 = 0;
      BoolSafe = Dvar_GetBoolSafe("NLONRMOLKS");
      v37 = DVARBOOL_force_offline_menus;
      v38 = BoolSafe;
      if ( !DVARBOOL_force_offline_menus || (Dvar_CheckFrontendServerThread(DVARBOOL_force_offline_menus), !v37->current.enabled) )
        v25 = 0;
      memset_0(dest, 0, sizeof(dest));
      LOBYTE(v7) = !s_luaInFrontend;
      LODWORD(v44) = v46;
      LODWORD(controllerIndex) = v49;
      LODWORD(fmt) = v50;
      Com_sprintf_truncate<128>((char (*)[128])dest, "vm:%p,fe:%d,gt:%d,ali:%d,ms:%d,il:%d,ci:%d,xp:%d,xps:%d,mlg:%d,sl:%d,cp:%d,fo:%d", LUI_luaVM, v7, fmt, controllerIndex, v44, v48, v47, v29, v31, v33, v35, v38, v25);
      CrashReport_AddKVP("LUI_Init", dest);
      CrashReport_AddMemRegion("LUI_luaVM", LUI_luaVM, 0x60ui64);
      CrashReport_AddMemRegion("LUI_luaVM_stack", (const void *)LUI_luaVM->stack.ptr64, 0x400ui64);
      v39 = LUI_luaVM;
      j_lua_getfield(LUI_luaVM, -10002, "Main");
      if ( LuaShared_PCall(v39, 0, 0) )
      {
        v40 = j_lua_tolstring(v39, -1, NULL);
        LUI_ReportError("Error while running LUI Main():\n", v39);
        Sys_Error((const ObfuscateErrorText)&stru_144464F38, v40);
      }
      s_luaInInitProcess = 0;
      v41 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
      LUI_Interface_DebugPrint("  [Lua Memory used: %d KB]\n", v41 >> 10);
      if ( !errorRecovery )
        LUI_CoD_AttachDebugger();
      if ( j_lua_gettop(LUI_luaVM) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2479, ASSERT_TYPE_ASSERT, "(lua_gettop( LUI_luaVM ) == 0)", (const char *)&queryFormat, "lua_gettop( LUI_luaVM ) == 0") )
          __debugbreak();
      }
      LUI_LeaveCriticalSection();
    }
    else
    {
      LUI_LeaveCriticalSection();
      Sys_Error((const ObfuscateErrorText)&stru_144465100);
    }
  }
}

/*
==============
LUI_CoD_InitMemory
==============
*/
void LUI_CoD_InitMemory(void)
{
  LUI_Interface_DebugPrint("%s\n", "LUI_CoD_InitMemory");
  if ( LUI_CoD_IsEnabled() )
  {
    if ( s_luaMemory )
    {
      memset_0(s_luaMemory, 0, (unsigned int)s_luaMainAllocationSize);
      memset_0(s_luaDebugMemory.debuggerMem, 0, 0xA00000ui64);
    }
    else
    {
      LUI_Interface_DebugPrint("LUI memory: Allocating main LUI memory: %u\n", 0x4000000i64);
      LODWORD(s_luaMainAllocationSize) = 0x4000000;
      s_luaMemory = PMem_Alloc(0x4000000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LUI_Main");
      LUI_Interface_DebugPrint("LUI memory: Allocating LUI debugger memory: %u\n", 10485760i64);
      s_luaDebugMemory.debuggerMem = PMem_Alloc(0xA00000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "LUI_Debug");
    }
    if ( s_tlsf_lua.tlsf )
      j_tlsf_destroy(s_tlsf_lua.tlsf);
    CrashReport_AddMemRegion("s_tlsf_lua", &s_tlsf_lua, 0x20ui64);
    s_tlsf_lua.tlsf = j_tlsf_create_with_pool(s_luaMemory, 0x4000000ui64);
    s_tlsf_lua.currentLuaMemoryUsed = 0i64;
    s_luaTlsfDebugMemoryPool = j_tlsf_add_pool(s_tlsf_lua.tlsf, s_luaDebugMemory.debuggerMem, 0xA00000ui64);
  }
}

/*
==============
LUI_CoD_InterpretKey
==============
*/
void LUI_CoD_InterpretKey(LocalClientNum_t localClientNum, int controllerIndex, int key, int down, bool resetInputs)
{
  int ActiveBinding; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  cg_t *v11; 
  CgHandler *v12; 
  const BgHandler *v13; 
  bool IsGamepadEnabled; 
  bool v15; 
  bool v16; 
  bool v17; 
  const char *v18; 
  char ActiveGameTypeQuick; 
  char *m_activeGameTypeName; 
  bool v21; 
  bool v22; 
  bool Bool_Internal_DebugName; 
  cg_t *v24; 
  CgHandler *v25; 
  const char *v26; 
  cg_t *v27; 
  CgHandler *v28; 
  cg_t *v29; 
  CgHandler *v30; 
  cg_t *v31; 
  CgHandler *v32; 

  if ( !s_luaInFrontend )
  {
    ActiveBinding = CL_Keys_GetActiveBinding(localClientNum, key);
    switch ( ActiveBinding )
    {
      case 17:
      case 131:
        if ( (CL_GetLocalClientUIGlobals(localClientNum)->keyCatchers & 0x800) == 0 )
        {
          if ( CL_Input_IsGamepadEnabled(localClientNum) )
          {
            if ( down )
              CG_CalloutMarkerPing_QueueMarkAction(localClientNum, 1, 0);
          }
          if ( LUI_BeginEvent(localClientNum, "gesture_wheel", LUI_luaVM) )
            goto LABEL_54;
        }
        return;
      case 19:
        LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
        Handler = CgHandler::getHandler(localClientNum);
        if ( !LocalClientGlobals || !Handler || BG_IsGameTypeQuick_BR(Handler) )
          goto $LN6_151;
        return;
      case 129:
$LN6_151:
        v11 = CG_GetLocalClientGlobals(localClientNum);
        v12 = CgHandler::getHandler(localClientNum);
        v13 = v12;
        if ( !v11 || !v12 )
          return;
        IsGamepadEnabled = CL_Input_IsGamepadEnabled(localClientNum);
        if ( BG_IsGameTypeQuick_BR(v13) && (!IsGamepadEnabled || ActiveBinding == 19) )
        {
          if ( s_prevQuickInventoryDownInput == down )
            return;
          if ( !GamerProfile_ToggleQuickInventoryEnabled(controllerIndex) || IsGamepadEnabled )
          {
            if ( !LUI_BeginEvent(localClientNum, "br_togglequickinventory", LUI_luaVM) )
            {
LABEL_20:
              s_prevQuickInventoryDownInput = down;
              return;
            }
            v15 = down != 0;
          }
          else
          {
            if ( !down || !LUI_BeginEvent(localClientNum, "br_togglequickinventory", LUI_luaVM) )
              goto LABEL_20;
            v15 = 1;
          }
          LUI_SetTableBool("down", v15, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
          goto LABEL_20;
        }
        if ( !resetInputs )
        {
          if ( GamerProfile_ToggleScoreboardEnabled(controllerIndex) || IsGamepadEnabled )
          {
            if ( down && LUI_BeginEvent(localClientNum, "togglescores", LUI_luaVM) )
            {
              if ( CL_Input_IsGamepadEnabled(localClientNum) )
                goto LABEL_78;
              v17 = 0;
              v18 = "openMapKBM";
              goto LABEL_77;
            }
          }
          else if ( LUI_BeginEvent(localClientNum, "togglescores", LUI_luaVM) )
          {
            v16 = 0;
            goto LABEL_26;
          }
        }
        break;
      case 130:
        if ( !resetInputs && !CL_Input_IsGamepadEnabled(localClientNum) )
        {
          ActiveGameTypeQuick = ClStatic::GetActiveGameTypeQuick(&cls);
          m_activeGameTypeName = cls.m_activeGameTypeName;
          if ( !cls.m_activeGameTypeName[0] )
            m_activeGameTypeName = (char *)&queryFormat.fmt + 3;
          v21 = ActiveGameTypeQuick == 1;
          v22 = ActiveGameTypeQuick != 1 && !strcmp_0(m_activeGameTypeName, "cp_wave_sv");
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_survival_map_enabled_kbm, "lui_survival_map_enabled_kbm");
          if ( v21 || (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG && (!v22 || Bool_Internal_DebugName) )
          {
            if ( GamerProfile_GetToggleScoreboardMapEnabled(controllerIndex) )
            {
              if ( down && LUI_BeginEvent(localClientNum, "togglescores", LUI_luaVM) )
              {
                v17 = 1;
                v18 = "openMapKBM";
                goto LABEL_77;
              }
            }
            else if ( LUI_BeginEvent(localClientNum, "togglescores", LUI_luaVM) )
            {
              v16 = 1;
LABEL_26:
              LUI_SetTableBool("openMapKBM", v16, LUI_luaVM);
              LUI_SetTableBool("hold", 1, LUI_luaVM);
              goto LABEL_76;
            }
          }
        }
        return;
      case 132:
        if ( LUI_BeginEvent(localClientNum, "killstreak_wheel", LUI_luaVM) )
        {
          LUI_SetTableBool("down", down != 0, LUI_luaVM);
          LUI_SetTableString("button", "killstreak", LUI_luaVM);
          goto LABEL_78;
        }
        return;
      case 135:
        v24 = CG_GetLocalClientGlobals(localClientNum);
        v25 = CgHandler::getHandler(localClientNum);
        if ( v24 && v25 && BG_IsGameTypeQuick_BR(v25) )
        {
          v26 = "inventory_previous";
          goto LABEL_75;
        }
        return;
      case 136:
        v27 = CG_GetLocalClientGlobals(localClientNum);
        v28 = CgHandler::getHandler(localClientNum);
        if ( v27 && v28 && BG_IsGameTypeQuick_BR(v28) )
        {
          v26 = "inventory_next";
          goto LABEL_75;
        }
        return;
      case 137:
        v29 = CG_GetLocalClientGlobals(localClientNum);
        v30 = CgHandler::getHandler(localClientNum);
        if ( v29 && v30 && BG_IsGameTypeQuick_BR(v30) )
        {
          v26 = "inventory_use";
          goto LABEL_75;
        }
        return;
      case 138:
        v31 = CG_GetLocalClientGlobals(localClientNum);
        v32 = CgHandler::getHandler(localClientNum);
        if ( v31 && v32 && BG_IsGameTypeQuick_BR(v32) )
        {
          v26 = "inventory_drop";
LABEL_75:
          if ( LUI_BeginEvent(localClientNum, v26, LUI_luaVM) )
          {
LABEL_76:
            v18 = "down";
            v17 = down != 0;
LABEL_77:
            LUI_SetTableBool(v18, v17, LUI_luaVM);
            goto LABEL_78;
          }
        }
        return;
      case 249:
        if ( LUI_BeginEvent(localClientNum, "equip_toggle_gesture_wheel", LUI_luaVM) )
        {
LABEL_54:
          LUI_SetTableBool("down", down != 0, LUI_luaVM);
          LUI_SetTableString("button", "gesture", LUI_luaVM);
LABEL_78:
          LUI_EndEvent(LUI_luaVM);
        }
        return;
      default:
        return;
    }
  }
}

/*
==============
LUI_CoD_IsElementLUIRoot
==============
*/
bool LUI_CoD_IsElementLUIRoot(LUIElement *element, lua_State *luaVM)
{
  int v5; 
  bool *i; 

  if ( s_luaInFrontend )
    return LUI_GetRootElement(s_fullscreenRootData.name, luaVM) == element;
  v5 = 0;
  for ( i = &s_rootData[0].inUse; !*i || LUI_GetRootElement(s_rootData[v5].name, luaVM) != element; i += 464 )
  {
    if ( ++v5 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
LUI_CoD_IsEnabled
==============
*/
bool LUI_CoD_IsEnabled()
{
  const dvar_t *v0; 

  v0 = DCONST_DVARBOOL_lui_enabled;
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
LUI_CoD_IsFontPreCached
==============
*/
char LUI_CoD_IsFontPreCached(GfxFont *font, int size)
{
  __int64 v2; 
  int MinHeightForDistanceField; 
  int v5; 
  __int64 v6; 
  PreCachedFont *i; 
  int v8; 
  bool v9; 

  v2 = size;
  MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
  v5 = 0;
  v6 = MinHeightForDistanceField;
  if ( s_numPreCachedFonts <= 0 )
    return 0;
  for ( i = s_preCachedFonts; ; ++i )
  {
    v8 = i->size;
    v9 = (_DWORD)v2 == v8 || v8 >= (int)v6 && v2 >= v6;
    if ( i->font == font && v9 )
      break;
    if ( ++v5 >= s_numPreCachedFonts )
      return 0;
  }
  return 1;
}

/*
==============
LUI_CoD_IsInUpdateFrame
==============
*/
_BOOL8 LUI_CoD_IsInUpdateFrame()
{
  return s_inLUIFrame;
}

/*
==============
LUI_CoD_IsInputLocked
==============
*/
bool LUI_CoD_IsInputLocked(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 ControllerFromClient; 
  clientUIActive_t *v3; 

  v1 = localClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v3 = &clientUIActives[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5847, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  return s_perController[ControllerFromClient].inputLocked || (v3->keyCatchers & 0x40) != 0;
}

/*
==============
LUI_CoD_IsLUIKeyCatcherActive
==============
*/
bool LUI_CoD_IsLUIKeyCatcherActive(const LocalClientNum_t localClientNum)
{
  return CL_Keys_IsCatcherActive(localClientNum, 64);
}

/*
==============
LUI_CoD_KeyEvent
==============
*/
bool LUI_CoD_KeyEvent(LocalClientNum_t localClientNum, int controllerIndex, int key, int binding, int down, int keyCatchers, bool resetInputs)
{
  int v7; 
  __int64 v8; 
  __int64 v10; 
  bool result; 
  bool v12; 
  bool isDoubleClick; 
  bool IsCatcherActive; 
  int v15; 
  int DoubleClickTime; 
  int v17; 
  __int64 v18; 
  char v19; 
  bool v20; 
  bool v21; 
  bool v22; 
  clientUIActive_t *LocalClientUIGlobals; 
  bool v24; 
  float screenY; 
  float outScreenX; 
  char *rootName; 
  char *outName[2]; 

  v7 = binding;
  v8 = controllerIndex;
  v10 = localClientNum;
  if ( Com_FrontEndScene_IsActive() && Com_FrontEndScene_FreeCamEnabled() || !cls.uiStarted || !LUI_CoD_IsEnabled() )
    return 0;
  if ( s_luaWaitingForKeyBind[v10] )
  {
    if ( (unsigned int)(key - 187) > 2 )
    {
      if ( !down )
        return 1;
    }
    else if ( down )
    {
      return 1;
    }
    LUI_CoD_HandleKeyBind((LocalClientNum_t)v10, key);
    return 1;
  }
  v12 = 0;
  rootName = NULL;
  isDoubleClick = 0;
  outScreenX = 0.0;
  screenY = 0.0;
  if ( (unsigned int)(key - 187) <= 2 )
  {
    outName[0] = NULL;
    IsCatcherActive = CL_Keys_IsCatcherActive((LocalClientNum_t)v10, 256);
    LUI_CoD_GetBindingSemantics(v7, !IsCatcherActive, (const char **)outName);
    if ( outName[0] )
    {
      v12 = LUI_CoD_QueueInputEvent(v8, outName[0], down != 0, "mouse", 0);
      rootName = LUI_CoD_GetRootDataForController(v8)->name;
    }
    else
    {
      v12 = LUI_CoD_QueueMouseInput(v8, key, down, &outScreenX, &screenY, (const char **)&rootName);
      if ( down )
      {
        if ( key == 187 )
        {
          if ( s_lastClickMs == -1 )
          {
            s_lastClickMs = Sys_Milliseconds();
          }
          else
          {
            v15 = Sys_Milliseconds();
            DoubleClickTime = Sys_GetDoubleClickTime();
            v17 = v15 - s_lastClickMs;
            if ( v15 - s_lastClickMs < DoubleClickTime )
              v15 = -1;
            isDoubleClick = v17 < DoubleClickTime;
            s_lastClickMs = v15;
          }
        }
        else
        {
          s_lastClickMs = -1;
        }
      }
    }
  }
  v18 = v8;
  if ( s_perController[v8].textEditRef != -2 && LUI_TextEdit_HandlesKey(key) )
  {
    v19 = 1;
    if ( down )
    {
      LUI_EnterCriticalSection("LUI_CoD_KeyEvent");
      if ( !LUI_luaVM )
      {
LABEL_31:
        LUI_LeaveCriticalSection();
        if ( v19 )
          return 1;
        v7 = binding;
        goto LABEL_33;
      }
      v20 = LUI_TextEdit_HandleKey((LocalClientNum_t)v10, s_perController[v18].textEditRef, key, outScreenX, screenY, rootName, LUI_luaVM, isDoubleClick);
    }
    else
    {
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_allowInputUpThroughChat, "lui_allowInputUpThroughChat") )
        return 1;
      LUI_EnterCriticalSection("LUI_CoD_KeyEvent");
      if ( !LUI_luaVM )
        goto LABEL_31;
      v20 = LUI_TextEdit_HandledGamepadUpEvent(s_perController[v18].textEditRef, key, LUI_luaVM);
    }
    v19 = v20;
    goto LABEL_31;
  }
LABEL_33:
  if ( (unsigned int)(key - 187) > 1 )
  {
    rootName = NULL;
    outName[0] = NULL;
    v21 = (unsigned int)(key - 192) > 3 || !CL_Keys_IsCatcherActive((LocalClientNum_t)v10, 256);
    LUI_CoD_GetBindingSemantics(v7, v21, (const char **)&rootName);
    v22 = MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator((LocalClientNum_t)v10);
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v10);
    if ( rootName && (LocalClientUIGlobals->lastInputType || v22) )
    {
      v24 = LUI_CoD_QueueInputEvent(v8, rootName, down != 0, "keyboard", 0);
LABEL_47:
      v12 = v24;
      goto LABEL_48;
    }
    LUI_CoD_GetKeySemantics(key, (const char **)&rootName, (const char **)outName);
    LUI_CoD_InterpretKey((LocalClientNum_t)v10, v8, key, down, resetInputs);
    if ( rootName )
    {
      v24 = LUI_CoD_QueueInputEvent(v8, rootName, down != 0, outName[0], resetInputs);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( v12 )
    return 1;
  result = CL_Keys_IsCatcherActive((LocalClientNum_t)v10, 64);
  if ( result )
    return 1;
  return result;
}

/*
==============
LUI_CoD_LUIRootDLogEnabled
==============
*/
bool LUI_CoD_LUIRootDLogEnabled()
{
  PublisherVariableManager *Instance; 
  const dvar_t *v1; 

  Instance = PublisherVariableManager::GetInstance();
  if ( !PublisherVariableManager::HasRetrievedVariables(Instance) )
    return 0;
  v1 = DVARBOOL_lui_root_dlog_enabled;
  if ( !DVARBOOL_lui_root_dlog_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_root_dlog_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
LUI_CoD_Layout
==============
*/
void LUI_CoD_Layout(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  char *name; 
  int i; 
  LocalClientNum_t v5; 
  int v6; 
  LocalClientNum_t v7; 

  if ( LUI_luaVM )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    LUI_Model_SetUseImmediateNotifications(1);
    LUI_CoD_UpdateStickInput(localClientNum);
    name = LUI_CoD_GetRootDataForController(ControllerFromClient)->name;
    if ( s_luaInFrontend )
    {
      for ( i = 0; i < 2; ++i )
      {
        if ( i != localClientNum && CL_IsLocalClientActive((LocalClientNum_t)i) )
          LUI_CoD_UpdateStickInput((const LocalClientNum_t)i);
      }
      v5 = LOCAL_CLIENT_INVALID;
      if ( !s_luaInFrontend )
        CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_INVALID);
    }
    else
    {
      v6 = CL_Mgr_GetControllerFromClient(localClientNum);
      v7 = localClientNum;
      if ( !s_rootData[v6].inUse )
        v7 = LOCAL_CLIENT_INVALID;
      v5 = v7;
    }
    s_currentLocalClientRoot = v5;
    LUI_CoD_Layout(localClientNum, name);
    LUI_Model_SetUseImmediateNotifications(0);
  }
}

/*
==============
LUI_CoD_Layout
==============
*/
void LUI_CoD_Layout(const LocalClientNum_t localClientNum, const char *rootName)
{
  char *name; 
  __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  int *p_deltaTime; 
  int i; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 

  Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_Layout");
  LUI_EnterCriticalSection("LUI_CoD_Layout");
  if ( LUI_luaVM )
  {
    name = s_fullscreenRootData.name;
    v5 = 0x7FFFFFFFi64;
    if ( !rootName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v6 = name[rootName - s_fullscreenRootData.name];
      v7 = v5;
      v8 = *name++;
      --v5;
      if ( !v7 )
      {
LABEL_8:
        p_deltaTime = &s_fullscreenRootData.deltaTime;
        goto LABEL_9;
      }
      if ( v6 != v8 )
        break;
      if ( !v6 )
        goto LABEL_8;
    }
    for ( i = 0; i < 8; ++i )
    {
      v11 = 0x7FFFFFFFi64;
      v12 = i;
      v13 = s_rootData[v12].name;
      if ( !rootName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( &s_rootData[v12] == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v14 = (const char *)(rootName - v13);
      while ( 1 )
      {
        v15 = v13[(_QWORD)v14];
        v16 = v11;
        v17 = *v13++;
        --v11;
        if ( !v16 )
        {
LABEL_22:
          p_deltaTime = &s_rootData[v12].deltaTime;
          goto LABEL_9;
        }
        if ( v15 != v17 )
          break;
        if ( !v15 )
          goto LABEL_22;
      }
    }
    p_deltaTime = (int *)240;
LABEL_9:
    s_fullscreenRootData.worldBlurRadius = 0.0;
    s_rootData[CL_Mgr_GetControllerFromClient(localClientNum)].worldBlurRadius = 0.0;
    Profile_Begin(580);
    LUI_Layout(localClientNum, rootName, *p_deltaTime, LUI_luaVM);
    Profile_EndInternal(NULL);
  }
  LUI_LeaveCriticalSection();
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_CoD_LeaveMenuByName_f
==============
*/
void LUI_CoD_LeaveMenuByName_f()
{
  const char *v0; 
  const char *v1; 
  lua_State *v2; 
  const char *v3; 
  LocalClientNum_t v4; 
  int ControllerFromClient; 

  if ( Cmd_Argc() >= 1 )
  {
    v1 = Cmd_Argv(1);
    v2 = LUI_luaVM;
    v3 = v1;
    v4 = Cmd_LocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v4);
    LUI_LeaveMenuByName(ControllerFromClient, v3, 0, v2);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_LeaveMenu_f
==============
*/
void LUI_CoD_LeaveMenu_f()
{
  lua_State *v0; 
  LocalClientNum_t v1; 
  int ControllerFromClient; 

  v0 = LUI_luaVM;
  v1 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
  LUI_LeaveMenu(ControllerFromClient, v0);
}

/*
==============
LUI_CoD_MakeClientRootFullscreen
==============
*/
void LUI_CoD_MakeClientRootFullscreen(int controllerIndex)
{
  __int64 v1; 
  float displayHeight; 
  __int64 displayWidth; 
  float v4; 

  v1 = controllerIndex;
  displayHeight = (float)cls.vidConfig.displayHeight;
  displayWidth = cls.vidConfig.displayWidth;
  s_rootData[v1].forceFullscreen = 1;
  v4 = (float)displayWidth;
  LUI_CoD_ResizeRoot(&s_rootData[v1], 0.0, 0.0, v4, displayHeight);
}

/*
==============
LUI_CoD_MakeClientRootSplitscreen
==============
*/
void LUI_CoD_MakeClientRootSplitscreen(int controllerIndex)
{
  __int64 v1; 
  LocalClientNum_t ClientFromController; 
  const ClientViewParams *LocalClientViewParams; 
  float displayWidth; 
  float v5; 
  float displayHeight; 
  float v7; 

  v1 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  LocalClientViewParams = CG_GetLocalClientViewParams(ClientFromController);
  displayWidth = (float)cls.vidConfig.displayWidth;
  v5 = displayWidth * LocalClientViewParams->width;
  displayHeight = (float)cls.vidConfig.displayHeight;
  v7 = displayHeight * LocalClientViewParams->height;
  if ( LUI_CoD_UsingSplitscreenUpscaling() )
  {
    v5 = v5 * 1.6666666;
    v7 = v7 * 1.6666666;
  }
  s_rootData[v1].forceFullscreen = 0;
  LUI_CoD_ResizeRoot(&s_rootData[v1], 0.0, 0.0, v5, v7);
}

/*
==============
LUI_CoD_MarkFontAsPreCached
==============
*/
void LUI_CoD_MarkFontAsPreCached(GfxFont *font, int size, lua_State *luaVM)
{
  __int64 v3; 

  if ( s_numPreCachedFonts >= 30 )
    j_luaL_error(luaVM, "Error while precaching glyphs. s_numPreCachedFonts is full at MAX_PRECACHED_FONTS = %d.\n", 30i64);
  v3 = s_numPreCachedFonts++;
  s_preCachedFonts[v3].font = font;
  s_preCachedFonts[v3].size = size;
}

/*
==============
LUI_CoD_MarkMyChangesLoad
==============
*/
void LUI_CoD_MarkMyChangesLoad(void)
{
  if ( LUI_luaVM )
  {
    s_loadingMychanges = 1;
    LUI_CoD_SaveMenuStack();
  }
}

/*
==============
LUI_CoD_MarkStringAsLocalized
==============
*/
char *LUI_CoD_MarkStringAsLocalized(const char *string)
{
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 4149, ASSERT_TYPE_ASSERT, "(string != 0)", (const char *)&queryFormat, "string != NULL") )
    __debugbreak();
  Com_sprintf(localizedString, 0x400ui64, &byte_1444661C0, string);
  return localizedString;
}

/*
==============
LUI_CoD_MemoryReport_f
==============
*/

void __fastcall LUI_CoD_MemoryReport_f()
{
  LUI_ReportMemoryUsage();
}

/*
==============
LUI_CoD_MouseCaptureLost
==============
*/
void LUI_CoD_MouseCaptureLost(int controllerIndex)
{
  lua_State *v1; 
  LocalClientNum_t ClientFromController; 

  v1 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "mouse_capture_lost", v1) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_MouseMove
==============
*/
bool LUI_CoD_MouseMove(LocalClientNum_t localClientNum, int x, int y, bool force)
{
  __int64 v4; 
  int ControllerFromClient; 
  __int64 v9; 
  char *name; 
  __int64 v11; 
  float lastMouseX; 
  float v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  bool v17; 
  LUIRootData *RootDataForController; 
  float v19; 
  float lastMouseY; 
  float displayWidth; 
  float displayHeight; 
  bool v23; 
  float yResult; 
  float xResult; 

  v4 = localClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  v9 = ControllerFromClient;
  name = LUI_CoD_GetRootDataForController(ControllerFromClient)->name;
  if ( (unsigned int)v4 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, 2) )
    __debugbreak();
  v11 = v9;
  lastMouseX = s_perController[v9].lastMouseX;
  v13 = (float)y;
  v14 = lastMouseX == (float)x && v13 == s_perController[v11].lastMouseY;
  v15 = 0;
  if ( clientUIActives[v4].lastInputType == KEYBOARD_MOUSE )
    v15 = force;
  if ( !v15 && v14 )
    return 1;
  v16 = lastMouseX != -1000.0 && -1000.0 != s_perController[v11].lastMouseY;
  v17 = s_perController[v11].textEditRef == -2;
  s_perController[v11].lastMouseX = (float)x;
  s_perController[v11].lastMouseY = v13;
  if ( !v17 )
  {
    LUI_EnterCriticalSection("LUI_CoD_MouseMove");
    if ( LUI_luaVM )
      LUI_TextEdit_HandleMouseMove((LocalClientNum_t)v4, s_perController[v11].textEditRef, x, y, name, LUI_luaVM);
    LUI_LeaveCriticalSection();
  }
  if ( !v16 )
    return 1;
  LUI_CoD_UpdateInputType(v9, KEYBOARD_MOUSE);
  LUI_EnterCriticalSection("LUI_CoD_MouseMove");
  RootDataForController = LUI_CoD_GetRootDataForController(v9);
  v19 = s_perController[v11].lastMouseX;
  if ( v19 < 0.0 || (lastMouseY = s_perController[v11].lastMouseY, lastMouseY < 0.0) || (displayWidth = (float)vidConfig.displayWidth, v19 > displayWidth) || (displayHeight = (float)vidConfig.displayHeight, lastMouseY > displayHeight) )
  {
    xResult = FLOAT_N1000_0;
    yResult = FLOAT_N1000_0;
    v23 = 0;
  }
  else
  {
    LUI_GetMousePosition(RootDataForController->name, v19, lastMouseY, &xResult, &yResult, LUI_luaVM);
    v23 = 1;
  }
  LUI_LeaveCriticalSection();
  if ( !LUI_BeginEvent((LocalClientNum_t)v4, "mousemove", LUI_luaVM) )
    return 1;
  LUI_SetTableString("rootName", name, LUI_luaVM);
  LUI_SetTableNumber("x", xResult, LUI_luaVM);
  LUI_SetTableNumber("y", yResult, LUI_luaVM);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, ebp; value }
  LUI_SetTableNumber("controller", *(long double *)&_XMM1, LUI_luaVM);
  LUI_SetTableBool("insideWindow", v23, LUI_luaVM);
  return LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_MyChangesFileUnloaded
==============
*/
void LUI_CoD_MyChangesFileUnloaded(void)
{
  s_unloadedLuaAsset = 1;
}

/*
==============
LUI_CoD_OnInviteJoinEvent
==============
*/
void LUI_CoD_OnInviteJoinEvent(const int controllerIndex, InviteJoinHSMResult result, const char *errorCode)
{
  __int64 v3; 
  __int64 partyId; 

  v3 = controllerIndex;
  if ( result != 5 )
  {
    if ( result == DODGE || !LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
      goto LABEL_10;
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    LUI_SetTableString("genEventName", "genJoinPartyAttempt", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v3, LUI_luaVM);
    LUI_SetTableBool("success", 0, LUI_luaVM);
    LUI_SetTableString("inviteJoinErrorCode", errorCode, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    goto LABEL_9;
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
  {
    partyId = Party_GetActiveParty()->partyId;
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    LUI_SetTableString("genEventName", "genJoinPartyAttempt", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v3, LUI_luaVM);
    LUI_SetTableBool("success", 1, LUI_luaVM);
    LUI_SetTableInt("partyId", partyId, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "join_party_complete", LUI_luaVM) )
LABEL_9:
    LUI_EndEvent(LUI_luaVM);
LABEL_10:
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "refresh_party_invitations", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_OpenInitialMenu
==============
*/
void LUI_CoD_OpenInitialMenu(void)
{
  LUI_EnterCriticalSection("LUI_CoD_OpenInitialMenu");
  if ( LUI_luaVM )
  {
    j_lua_getfield(LUI_luaVM, -10002, "OpenInitialMenu");
    if ( LuaShared_PCall(LUI_luaVM, 0, 0) )
      LUI_ReportError("Error opening initial menu", LUI_luaVM);
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_OpenMenu_f
==============
*/
void LUI_CoD_OpenMenu_f()
{
  const char *v0; 
  const char *v1; 
  lua_State *luaVM; 
  const char *v3; 
  LocalClientNum_t v4; 
  int ControllerFromClient; 

  if ( Cmd_Argc() == 2 )
  {
    v1 = Cmd_Argv(1);
    luaVM = LUI_luaVM;
    v3 = v1;
    v4 = Cmd_LocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v4);
    LUI_RestoreMenu(ControllerFromClient, v3, 0, 0, luaVM);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_OpenModalPopup_f
==============
*/
void LUI_CoD_OpenModalPopup_f()
{
  const char *v0; 
  const char *v1; 
  lua_State *v2; 
  const char *v3; 
  LocalClientNum_t v4; 
  int ControllerFromClient; 

  if ( Cmd_Argc() == 2 )
  {
    v1 = Cmd_Argv(1);
    v2 = LUI_luaVM;
    v3 = v1;
    v4 = Cmd_LocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v4);
    LUI_OpenModalPopup(ControllerFromClient, v3, v2);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_OpenPopup_f
==============
*/
void LUI_CoD_OpenPopup_f()
{
  const char *v0; 
  const char *v1; 
  lua_State *v2; 
  const char *v3; 
  LocalClientNum_t v4; 
  int ControllerFromClient; 

  if ( Cmd_Argc() == 2 )
  {
    v1 = Cmd_Argv(1);
    v2 = LUI_luaVM;
    v3 = v1;
    v4 = Cmd_LocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v4);
    LUI_RestorePopup(ControllerFromClient, v3, 0, v2);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Incorrect number of arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_Pause
==============
*/
void LUI_CoD_Pause(LocalClientNum_t localClientNum)
{
  __int64 ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( LUI_BeginEvent(localClientNum, "pause", LUI_luaVM) )
  {
    LUI_SetTableInt("controllerIndex", ControllerFromClient, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_PausedByCodcaster
==============
*/
void LUI_CoD_PausedByCodcaster(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "game_paused", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_PostRestart
==============
*/
void LUI_CoD_PostRestart(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "post_restart", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_PrintCallstack
==============
*/
void LUI_CoD_PrintCallstack(void)
{
  unsigned int i; 
  const char *name; 
  __int64 v2; 
  lua_Debug ar; 

  j_lua_getstack(LUI_luaVM, 0, &ar);
  Com_Printf(13, "LUA_CALLSTACK:\n");
  for ( i = 0; j_lua_getstack(LUI_luaVM, i, &ar); ++i )
  {
    j_lua_getinfo(LUI_luaVM, "nSl", &ar);
    name = "<unknown>";
    if ( ar.name )
      name = ar.name;
    LODWORD(v2) = ar.currentline;
    Com_Printf(13, "[%d] %s:%d -- %s [%s]\n", i, ar.short_src, v2, name, ar.what);
  }
}

/*
==============
LUI_CoD_ProcessEvents
==============
*/
void LUI_CoD_ProcessEvents(LocalClientNum_t localClientNum)
{
  Profile_Begin(579);
  ++s_lui_profBeginCount;
  if ( LUI_BeginCachedEvent(localClientNum, LUIECACHE_RUN_FRAME, LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  Profile_EndInternal(NULL);
  --s_lui_profBeginCount;
}

/*
==============
LUI_CoD_PumpCollectGarbage
==============
*/
void LUI_CoD_PumpCollectGarbage(void)
{
  int v0; 
  int data; 

  if ( LUI_TryEnterCriticalSection("LUI_CoD_PumpCollectGarbage") )
  {
    if ( LUI_luaVM && !Sys_ExistsWorkerCmdsOfType(WRKCMD_LUI_WORKERCMD_GC) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) || CL_TransientsSP_SyncingIsIdle(NULL) )
      {
        v0 = 0;
        if ( s_lowMemoryWarning )
        {
          v0 = 1;
          s_luaLastEmergencyGC = Sys_Milliseconds();
        }
        else if ( Com_FrontEnd_IsInFrontEnd() )
        {
          v0 = 2;
        }
        data = v0;
        Sys_AddWorkerCmd(WRKCMD_LUI_WORKERCMD_GC, &data);
        s_lowMemoryWarning = 0;
      }
      else if ( DB_Transients_VerbosePrint() )
      {
        Com_Printf(10, "LUI_CoD_PumpCollectGarbage: Skipping due to transient sync\n");
      }
    }
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_CoD_QueueInputEvent
==============
*/
bool LUI_CoD_QueueInputEvent(int controllerIndex, const char *buttonName, bool down, const char *qualifier, bool resetInputs)
{
  __int64 v5; 
  char v10; 
  bool v11; 
  int ControllerMissing; 
  LocalClientNum_t v13; 
  char *name; 
  __int64 v15; 
  LUIRootData *RootDataForController; 
  float lastMouseX; 
  float lastMouseY; 
  float displayWidth; 
  float displayHeight; 
  const char *v21; 
  LocalClientNum_t outLocalClientNum; 
  float outX; 
  float outY; 

  v5 = controllerIndex;
  LUI_EnterCriticalSection("LUI_CoD_QueueInputEvent");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0;
  }
  v10 = 1;
  v11 = 0;
  ControllerMissing = GPad_GetControllerMissing();
  if ( CL_Mgr_IsControllerMappedToClient(v5, &outLocalClientNum) || (v10 = 0, ControllerMissing != -1) && CL_Mgr_IsControllerMappedToClient(ControllerMissing, &outLocalClientNum) )
  {
    v13 = outLocalClientNum;
  }
  else
  {
    v13 = LOCAL_CLIENT_0;
    outLocalClientNum = LOCAL_CLIENT_0;
  }
  if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(v13)].inUse )
    v13 = LOCAL_CLIENT_INVALID;
  s_currentLocalClientRoot = v13;
  outX = FLOAT_N1000_0;
  outY = FLOAT_N1000_0;
  if ( ControllerMissing == -1 || v10 )
  {
    name = LUI_CoD_GetRootDataForController(v5)->name;
    RootDataForController = LUI_CoD_GetRootDataForController(v5);
    v15 = v5;
    lastMouseX = s_perController[v5].lastMouseX;
    if ( lastMouseX >= 0.0 )
    {
      lastMouseY = s_perController[v5].lastMouseY;
      if ( lastMouseY >= 0.0 )
      {
        displayWidth = (float)vidConfig.displayWidth;
        if ( lastMouseX <= displayWidth )
        {
          displayHeight = (float)vidConfig.displayHeight;
          if ( lastMouseY <= displayHeight )
            LUI_GetMousePosition(RootDataForController->name, lastMouseX, lastMouseY, &outX, &outY, LUI_luaVM);
        }
      }
    }
  }
  else
  {
    name = LUI_CoD_GetRootDataForController(ControllerMissing)->name;
    LUI_CoD_GetMousePosition(ControllerMissing, &outX, &outY);
    v15 = v5;
  }
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, name);
  j_lua_getfield(LUI_luaVM, -1, "QueueInput");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushinteger(LUI_luaVM, v15);
  j_lua_pushstring(LUI_luaVM, name);
  j_lua_pushboolean(LUI_luaVM, down);
  j_lua_pushstring(LUI_luaVM, buttonName);
  j_lua_pushstring(LUI_luaVM, qualifier);
  j_lua_pushnumber(LUI_luaVM, outX);
  j_lua_pushnumber(LUI_luaVM, outY);
  j_lua_pushboolean(LUI_luaVM, resetInputs);
  if ( LuaShared_PCall(LUI_luaVM, 9, 1) )
  {
    v21 = "Error queuing input\n";
LABEL_24:
    LUI_ReportError(v21, LUI_luaVM);
    goto LABEL_25;
  }
  if ( j_lua_type(LUI_luaVM, -1) != 1 )
  {
    v21 = "Unexpected return value from LUI_METHOD_QUEUE_INPUT\n";
    goto LABEL_24;
  }
  v11 = j_lua_toboolean(LUI_luaVM, -1) > 0;
  j_lua_settop(LUI_luaVM, -2);
LABEL_25:
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v11;
}

/*
==============
LUI_CoD_QueueMouseInput
==============
*/
bool LUI_CoD_QueueMouseInput(int controllerIndex, int key, int down, float *outScreenX, float *outScreenY, const char **outRootName)
{
  __int64 v6; 
  int v9; 
  int v10; 
  const char *v11; 
  const char *v12; 
  bool v13; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t v15; 
  const char *v16; 

  v6 = controllerIndex;
  LUI_EnterCriticalSection("LUI_CoD_QueueMouseInput");
  if ( !LUI_luaVM )
    goto LABEL_20;
  v9 = key - 187;
  if ( !v9 )
  {
    v11 = "left";
LABEL_8:
    v12 = "mouseup";
    if ( down )
      v12 = "mousedown";
    v13 = 0;
    *outRootName = LUI_CoD_GetRootDataForController(v6)->name;
    ClientFromController = CL_Mgr_GetClientFromController(v6);
    v15 = ClientFromController;
    if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(ClientFromController)].inUse )
      v15 = LOCAL_CLIENT_INVALID;
    s_currentLocalClientRoot = v15;
    LUI_GetMousePosition(*outRootName, s_perController[v6].lastMouseX, s_perController[v6].lastMouseY, outScreenX, outScreenY, LUI_luaVM);
    LUI_CoD_UpdateInputType(v6, KEYBOARD_MOUSE);
    j_lua_getfield(LUI_luaVM, -10002, "LUI");
    j_lua_getfield(LUI_luaVM, -1, "roots");
    j_lua_getfield(LUI_luaVM, -1, *outRootName);
    j_lua_getfield(LUI_luaVM, -1, "QueueMouseInput");
    j_lua_pushvalue(LUI_luaVM, -2);
    j_lua_pushinteger(LUI_luaVM, v6);
    j_lua_pushstring(LUI_luaVM, *outRootName);
    j_lua_pushstring(LUI_luaVM, v12);
    j_lua_pushstring(LUI_luaVM, v11);
    j_lua_pushboolean(LUI_luaVM, down);
    j_lua_pushnumber(LUI_luaVM, *outScreenX);
    j_lua_pushnumber(LUI_luaVM, *outScreenY);
    if ( LuaShared_PCall(LUI_luaVM, 8, 1) )
    {
      v16 = "Error queuing mouse input\n";
    }
    else
    {
      if ( j_lua_type(LUI_luaVM, -1) == 1 )
      {
        v13 = j_lua_toboolean(LUI_luaVM, -1) > 0;
        j_lua_settop(LUI_luaVM, -2);
LABEL_19:
        j_lua_settop(LUI_luaVM, -4);
        LUI_LeaveCriticalSection();
        return v13;
      }
      v16 = "Unexpected return value from LUI_METHOD_QUEUE_MOUSE_INPUT\n";
    }
    LUI_ReportError(v16, LUI_luaVM);
    goto LABEL_19;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v11 = "right";
    goto LABEL_8;
  }
  if ( v10 == 1 )
  {
    v11 = "middle";
    goto LABEL_8;
  }
LABEL_20:
  LUI_LeaveCriticalSection();
  return 0;
}

/*
==============
LUI_CoD_ReadCharFromString
==============
*/
char LUI_CoD_ReadCharFromString(const char **textPtr, unsigned int *letter)
{
  const char *v2; 
  char v4; 
  const char *v5; 
  unsigned int CharFromString; 

  v2 = *textPtr;
  v4 = **textPtr;
  if ( !v4 )
    return 0;
  while ( v4 >= 30 )
  {
    if ( v4 <= 31 )
    {
      ++v2;
    }
    else
    {
      if ( v4 != 94 )
        break;
      v5 = v2 + 1;
      *textPtr = v5;
      v2 = v5 + 1;
      if ( !v2 || (unsigned __int8)(*v2 - 39) > 0x17u )
        break;
    }
    *textPtr = v2;
    v4 = *v2;
    if ( !*v2 )
      return 0;
  }
  CharFromString = SEH_ReadCharFromString(textPtr);
  if ( letter )
    *letter = CharFromString;
  return 1;
}

/*
==============
LUI_CoD_RefCountReport_f
==============
*/

void __fastcall LUI_CoD_RefCountReport_f()
{
  LUI_ReportReferenceCounts();
}

/*
==============
LUI_CoD_RegisterDvars
==============
*/
void LUI_CoD_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARFLT_lui_timescale = Dvar_RegisterFloat("lui_timescale", 1.0, 0.001, 10.0, 0x40004u, "Scale time of each frame of LUI animation");
  DCONST_DVARBOOL_lui_enabled = Dvar_RegisterBool("lui_enabled", 1, 0x40004u, "Enables LUI");
  DCONST_DVARBOOL_lui_footage_capture_enabled = Dvar_RegisterBool("lui_footage_capture_enabled", 0, 0x40004u, "Hides the HUD for footage capturing");
  DCONST_DVARBOOL_lui_splitscreenExtraMemory = Dvar_RegisterBool("lui_splitscreenExtraMemory", 0, 0x40004u, "Increase the memory grab in splitscreen");
  DCONST_DVARBOOL_lui_highlightScaledText = Dvar_RegisterBool("lui_highlightScaledText", 0, 0x40004u, "Highlights scaled text");
  DCONST_DVARBOOL_lui_forcelinedraws = Dvar_RegisterBool("lui_forcelinedraws", 1, 0x40004u, "Force the minimum size of a quad to be at least 1 pixel");
  DCONST_DVARBOOL_lui_checkIfLevelInFileSystem = Dvar_RegisterBool("lui_checkIfLevelInFileSystem", 1, 0x40004u, "Filters the level select menu to display only those levels which have been built");
  DVARBOOL_lui_error_on_out_of_elements = Dvar_RegisterBool("NNRQTOQSSP", 0, 0, "Throws an error when the element pool runs out of elements instead of doing a soft reboot.");
  DVARBOOL_lui_pool_incremental_gc_enabled = Dvar_RegisterBool("LTQRTPPKKS", 1, 0, "Use incremental garbage collection rather than full gc when freeing up LUIElements and other similarly allocated resources for new allocation.");
  DCONST_DVARBOOL_lui_print_text_draws = Dvar_RegisterBool("lui_print_text_draws", 0, 0x40004u, "Print all text draws (text, font, size, element) to the console");
  DCONST_DVARBOOL_lui_font_cache_warnings = Dvar_RegisterBool("lui_font_cache_warnings", 0, 0x40004u, "Mark texts which are not using a font for which we precached glyphs");
  DVARBOOL_ui_scope_stencils = Dvar_RegisterBool("MKNMNRSQRO", 1, 0, "Turns on the scope stencil for in-world LUI Elements");
  DCONST_DVARFLT_lui_ringradar_inner_distance = Dvar_RegisterFloat("lui_ringradar_inner_distance", 800.0, 1.0, 100000.0, 0x40004u, "Max distance from the player where an enemy will show on the inner ring of the ring radar");
  DCONST_DVARFLT_lui_ringradar_mid_distance = Dvar_RegisterFloat("lui_ringradar_mid_distance", 1600.0, 1.0, 100000.0, 0x40004u, "Max distance from the player where an enemy will show on the middle ring of the ring radar");
  DCONST_DVARBOOL_lui_reportMemoryUsage = Dvar_RegisterBool("lui_reportMemoryUsage", 0, 0x40004u, "Print how much memory is used during LUI initialization");
  DCONST_DVARFLT_lui_reportPerfThresholdMS = Dvar_RegisterFloat("lui_reportPerfThresholdMS", 4.0, 0.0, 100.0, 0x40004u, "The millisecond threshold at which to report LUI frame time warnings.");
  DCONST_DVARINT_lui_streaming_spinner_frame_width = Dvar_RegisterInt("lui_streaming_spinner_frame_width", 64, 1, 0x7FFFFFFF, 0x40004u, "Width of a frame in the spinner material");
  DCONST_DVARINT_lui_streaming_spinner_frame_height = Dvar_RegisterInt("lui_streaming_spinner_frame_height", 64, 1, 0x7FFFFFFF, 0x40004u, "Height of a frame in the spinner material");
  DCONST_DVARFLT_lui_streaming_spinner_width = Dvar_RegisterFloat("lui_streaming_spinner_width", 64.0, 0.0, 3.4028235e38, 0x40004u, "Width of the spinner displayed while 2D images are streaming, in LUI virtual pixels");
  DCONST_DVARFLT_lui_streaming_spinner_height = Dvar_RegisterFloat("lui_streaming_spinner_height", 64.0, 0.0, 3.4028235e38, 0x40004u, "Height of the spinner displayed while 2D images are streaming, in LUI virtual pixels");
  DCONST_DVARFLT_lui_streaming_spinner_frame_rate = Dvar_RegisterFloat("lui_streaming_spinner_frame_rate", 30.0, 1.0, 3.4028235e38, 0x40004u, "Framerate of the spinner animation displayed while 2D images are streaming, in frames per second");
  DCONST_DVARINT_lui_streaming_spinner_frame_count = Dvar_RegisterInt("lui_streaming_spinner_frame_count", 30, 1, 0x7FFFFFFF, 0x40004u, "Number of frames of the spinner animation displayed while 2D images are streaming");
  DCONST_DVARINT_lui_loading_spinner_width = Dvar_RegisterInt("lui_loading_spinner_width", 72, 0, 0x7FFFFFFF, 0x40004u, "Width of the spinner displayed while drawing a blank screen during remote screen updates");
  DCONST_DVARINT_lui_loading_spinner_height = Dvar_RegisterInt("lui_loading_spinner_height", 64, 0, 0x7FFFFFFF, 0x40004u, "Height of the spinner displayed while drawing a blank screen during remote screen updates");
  DCONST_DVARFLT_lui_loading_spinner_frame_rate = Dvar_RegisterFloat("lui_loading_spinner_frame_rate", 30.0, 1.0, 3.4028235e38, 0x40004u, "Framerate of the spinner animation displayed while drawing a blank screen during remote screen updates");
  DCONST_DVARINT_lui_loading_spinner_frame_count = Dvar_RegisterInt("lui_loading_spinner_frame_count", 56, 1, 0x7FFFFFFF, 0x40004u, "Number of frames of the spinner animation while drawing a blank screen during remote screen updates");
  DVARBOOL_lui_showBuildAndServerText = Dvar_RegisterBool("NNOOPSNPRM", 0, 0, "Shows the build number and the dedicated server text");
  DCONST_DVARINT_lui_uiFadeOutThreshold = Dvar_RegisterInt("lui_uiFadeOutThreshold", 500, 1, 0x7FFFFFFF, 0x40004u, "In milliseconds, fade out the UI when match start time remaining is below this threshold");
  DVARINT_lui_matchSummaryAvailable = Dvar_RegisterInt("NMPNSQNNRQ", 0, 0, 16, 0, "Indicates which Match Summary (AAR) can be opened. 0 = none, 1 = public match, 2 = non-public match");
  DVARINT_lui_aar_disable_tab_filter = Dvar_RegisterInt("OKMSLSMRNQ", 0, 0, 64, 0, "Determines which tab needs to be disabled in AAR tabs 0x0001 = summary, 0x0010 = scoreboard, 0x0100 = challenges, 0x1000 = gunsmith unlock");
  DVARBOOL_lui_aar_commendations_enabled = Dvar_RegisterBool("LSQMOSORKS", 1, 0, "Enable aar commendation in both summary and parade");
  DVARBOOL_lui_enable_upsell_aar_menu = Dvar_RegisterBool("MOMKSMKTOQ", 1, 0, "Enable the upsell prompt in the AAR");
  DVARBOOL_lui_mc_playerFirstGame = Dvar_RegisterBool("NPTKMLRPLQ", 1, 0, "Indicates this is the first time a player has entered the MP lobby today");
  DVARBOOL_lui_mc_newMissionDelivered = Dvar_RegisterBool("NRKONTQOLL", 0, 0, "Indicates a new mission has been delivered and the player should be notified");
  DVARINT_lui_mc_newMissionDeliveredMessageCount = Dvar_RegisterInt("LSTLRKKORT", 0, 0, 0x7FFFFFFF, 0, "Number of times we've told the player about new missions being available");
  DVARINT_lui_mc_lastMissionCompletionTier = Dvar_RegisterInt("NLOMTKROPP", 0, -1, 3, 0, "Completion level of last mission");
  DVARINT_lui_mc_newMissionSlotUnlocked = Dvar_RegisterInt("MSORMTOPKQ", 0, 0, 3, 0, "Indicates whether the 2nd or 3rd mission slots have been unlocked. 0 if no new slots unlocked.");
  DVARBOOL_lui_mc_firstTimeInCurrentMissionTeam = Dvar_RegisterBool("NTOQQKTRPL", 0, 0, "Indicates player has joined a new mission team for the first time");
  DVARBOOL_lui_mc_rejoinedCurrentMissionTeam = Dvar_RegisterBool("LLRTNMKLTL", 0, 0, "Indicates player has rejoined a mission team they were once a member of");
  DVARINT_lui_mc_newMissionTeamUnlocked = Dvar_RegisterInt("OKNMQLTKLP", -1, -1, 4, 0, "Indicates the teamID of a newly unlocked mission team, -1 if no new team unlocked.");
  DVARINT_lui_mc_numGamesFinishedInLobby = Dvar_RegisterInt("NQKRRQQNQR", 0, 0, 0x7FFFFFFF, 0, "Number of times the player has completed a game without leaving the lobby.");
  DVARBOOL_lui_tween_parent_root_check = Dvar_RegisterBool("LMQNMORNRQ", 1, 0, "Perform LUI_Tween_Create() parent root checks.");
  DVARBOOL_lui_merge_scoreboard_row = Dvar_RegisterBool("NSLPPMQKQM", 1, 0, "If we want to merge scoreboard row between core mp and cp");
  DVARBOOL_lui_welcome_message_displayed_once = Dvar_RegisterBool("NLKQPLPLQK", 0, 0, "Used to send welcome event to chat one time per game launch.");
  DVARBOOL_lui_crossplay_warning_displayed_once = Dvar_RegisterBool("QOTNQOSRN", 0, 0, "Used to send welcome event to chat one time per game launch.");
  DVARBOOL_lui_rendertime_binding_directive = Dvar_RegisterBool("MSKSNROSLL", 1, 0, "Enables the strings binding directive render time evaluation.");
  DVARBOOL_lui_enable_option_new_layout = Dvar_RegisterBool("LSQNRLMKST", 1, 0, "Enables the option layout with the tabs.");
  DVARBOOL_lui_enable_pc_achievement = Dvar_RegisterBool("SPOPPKOTP", 1, 0, "Enables the achievements menu for the pc version.");
  DVARFLT_lui_marquee_stencil_padding_left = Dvar_RegisterFloat("LPRRLSSTLP", 0.15000001, 0.0, 1.0, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  DVARFLT_lui_marquee_stencil_padding_right = Dvar_RegisterFloat("OKPMLLOPSK", 0.15000001, 0.0, 1.0, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  DVARFLT_lui_marquee_stencil_padding_top = Dvar_RegisterFloat("NKKONQKNL", 0.0, 0.0, 1.0, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  DVARFLT_lui_marquee_stencil_padding_bottom = Dvar_RegisterFloat("NLOPLSNPQN", 0.0, 0.0, 1.0, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  DCONST_DVARBOOL_lui_camera_mover_force_sway = Dvar_RegisterBool("lui_camera_mover_force_sway", 0, 0x40004u, "Force sway on regardless of the 'enableSway' property on the widget.");
  DVARBOOL_lui_has_seen_korean_rating = Dvar_RegisterBool("MKRKLLSKSP", 0, 0, "If the player has seen the Korean rating popup.");
  DVARBOOL_lui_premium_game_sale_enabled = Dvar_RegisterBool("MQRQOLKOTK", 0, 0, "Enables sale UI on premium game in the Store for F2P users.");
  DVARINT_lui_battlepass_tier_sale_price = Dvar_RegisterInt("MOKSKKQRLK", 0, 0, 0x7FFFFFFF, 0, "Battlepass tier sale price to show, hide sale ui when set to 0");
  DVARSTR_lui_battlepass_tier_sale_end_time = Dvar_RegisterString("MQTOPKPMRS", (const char *)&queryFormat.fmt + 3, 0, "UTC/Epoch time (seconds) that battlepass tier skip sale end");
  DVARBOOL_lui_battlepass_tier_purchase_enabled = Dvar_RegisterBool("MMQLPLSNOM", 1, 0, "Enables/disables purchasing of tier skips on battle pass menu.");
  DVARBOOL_lui_battlepass_br_reward_flow_enabled = Dvar_RegisterBool("NRONMTPKML", 1, 0, "Controls whether the BR free tier skip reward flow is active.");
  DVARBOOL_lui_battlepass_op_ch_rewards_enabled = Dvar_RegisterBool("MPQSMOPRQK", 0, 0, "Killswitch for unlocks awarded via operator challenges to appear in battle pass.");
  DVARBOOL_lui_battlepass_store_redirect_enabled = Dvar_RegisterBool("SKLSORKTK", 1, 0, "Redirects battle pass store bundle purchases to battle pass menu when enabled.");
  DVARINT_lui_battlepass_vip_free_gift_id = Dvar_RegisterInt("LTOQKNQLNP", 0, 0, 0x7FFFFFFF, 0, "Bundle ID of the VIP gift given to players who do *not* own Battle Pass");
  DVARINT_lui_battlepass_vip_owner_gift_id = Dvar_RegisterInt("LNTOLMQMOQ", 0, 0, 0x7FFFFFFF, 0, "Bundle ID of the VIP gift given to players that *own* Battle Pass");
  DVARBOOL_lui_skip_boot_flow = Dvar_RegisterBool("LKSQOLNKLP", 0, 0, "Bypass boot flow menus and update gamerprofile to boot flow completed");
  DVARBOOL_lui_force_online_menus = Dvar_RegisterBool("LMMRONPQMO", 0, 0, "Prevents player's from entering Offline Menus, the only option if failing the Login Fence is to Retry");
  DVARBOOL_lui_weapons_tab_enabled = Dvar_RegisterBool("LORQPPPMT", 1, 0, "Enables Loadout editing in Frontend MP menus");
  DVARBOOL_lui_operators_tab_enabled = Dvar_RegisterBool("LSPTSOQPPT", 1, 0, "Enables Operator editing in Frontend MP menus");
  DVARBOOL_lui_barracks_tab_enabled = Dvar_RegisterBool("NPKSLQQPMP", 1, 0, "Enables the Barracks in Frontend MP menus");
  DVARBOOL_lui_store_enabled = Dvar_RegisterBool("LNLPTMKPT", 1, 0, "Enables the Store in Frontend menus");
  DVARBOOL_lui_store_bundle_preview_list_enabled = Dvar_RegisterBool("LSSPPSTLQ", 1, 0, "Enables the small bundle preview list on the store billboard");
  DVARBOOL_lui_store_improve_free_bundle_visibility = Dvar_RegisterBool("LSOLLKOPQT", 1, 0, "Enables visual enhancements to make free store bundles easier to find");
  DVARBOOL_lui_battle_pass_enabled = Dvar_RegisterBool("NRTSOTKTOS", 1, 0, "Enables the Battle Pass in Frontend menus");
  DVARBOOL_lui_splitscreen_enabled = Dvar_RegisterBool("MRNSTPNLPS", 1, 0, "Allows splitscreen players to login");
  DVARBOOL_lui_mp_private_match_enabled = Dvar_RegisterBool("LQKTNLONLP", 1, 0, "Enables Private Match frontend menus");
  DVARBOOL_lui_trials_enabled = Dvar_RegisterBool("LOMSTMNPRR", 1, 0, "Enables Trials in frontend menus");
  DVARBOOL_lui_trial_event_available = Dvar_RegisterBool("NOPLKRPKQL", 0, 0, "Enables Trial event in frontend menus");
  DVARBOOL_lui_armory_enabled = Dvar_RegisterBool("MRRPNNKKPO", 1, 0, "Enables Armory in frontend menus");
  DVARBOOL_lui_game_setup_enabled = Dvar_RegisterBool("LKQKPMMRLK", 1, 0, "Enables Game Setup options in Private Match");
  DVARBOOL_lui_mode_select_enabled = Dvar_RegisterBool("NKSTOOTSMO", 1, 0, "Enables Mode select in Game Setup options");
  DVARBOOL_lui_map_select_enabled = Dvar_RegisterBool("MSROMLONNT", 1, 0, "Enables Map select in Game Setup options");
  DVARBOOL_lui_custom_game_rules_enabled = Dvar_RegisterBool("TORMQRSOS", 1, 0, "Enables Game Setup options in Private Match");
  DVARBOOL_lui_bot_setup_enabled = Dvar_RegisterBool("LNORNRSRLR", 1, 0, "Enables Bot Setup in Game Setup options");
  DVARBOOL_lui_intel_enabled = Dvar_RegisterBool("LROKLTPMOM", 1, 0, "Enables CP Intel");
  DVARBOOL_lui_attach_variants_enabled = Dvar_RegisterBool("NNMMRMNMNQ", 1, 0, "Enables attachment variants.");
  DVARBOOL_lui_ui_colorblind_filter_enabled = Dvar_RegisterBool("NQTSMTPTMS", 1, 0, "Enables the full colorblind filter on the UI.");
  DVARBOOL_lui_ui_colorblind_swap_enabled = Dvar_RegisterBool("NQROMTQPMT", 0, 0, "Enables the color swap on the UI.");
  DVARBOOL_lui_scorestreaks_enabled = Dvar_RegisterBool("LMKMRSPR", 1, 0, "If FALSE, Hides scorestreak values everywhere in the UI");
  DVARBOOL_lui_keys_enabled = Dvar_RegisterBool("LPOOMOLLRQ", 0, 0, "If FALSE, Hides Keys everywhere in the UI");
  DVARBOOL_lui_cod_points_enabled = Dvar_RegisterBool("LNTOKPTKS", 1, 0, "If FALSE, Hides COD Points everywhere in the UI");
  DVARBOOL_lui_loot_seasons_filter_enabled = Dvar_RegisterBool("NRTLNOPOSM", 1, 0, "Enables sorting by season in loot menus");
  DVARBOOL_lui_loot_unlock_filter_enabled = Dvar_RegisterBool("OKPQTKQLSO", 0, 0, "Enables sorting by season in loot menus");
  DVARBOOL_lui_ingame_AAR_enabled = Dvar_RegisterBool("TPTKKSNQ", 1, 0, "Enables in-game AAR feature in br/blood money match");
  DVARBOOL_lui_ingame_play_again_enabled = Dvar_RegisterBool("LPRKRTSPQT", 0, 0, "Enables in-game play again feature in br/blood money match");
  DVARBOOL_lui_ingame_AAR_progressbar_enabled = Dvar_RegisterBool("NPSQPOMPLP", 0, 0, "Enables in-game AAR progress bar in br/blood money match");
  DVARBOOL_lui_ingame_warzone_tut_retry_enabled = Dvar_RegisterBool("NQTKKMTSKL", 0, 0, "Enables in-game warzone retry button in warzone tutorial");
  DVARINT_lui_ingame_play_again_choice = Dvar_RegisterInt("LSORRMTOPP", 0, 0, 10, 0, "In-game play again feature choice in br/blood money match. 0 means no choice, 1 means playing again without party, 2 means playing again with party");
  DVARBOOL_lui_ingame_AAR_scoreboard_enabled = Dvar_RegisterBool("MTNKKKTTRR", 1, 0, "Enables in-game AAR scoreboard");
  DVARBOOL_lui_ingame_AAR_new_scoreboard_enabled = Dvar_RegisterBool("NTKSMOLO", 1, 0, "Enables in-game new AAR scoreboard");
  DVARBOOL_lui_br_tutorial_restart_enabled = Dvar_RegisterBool("NRTOORMRKR", 0, 0, "Enables BR tutorial restart button");
  DVARBOOL_lui_private_tournament_enabled = Dvar_RegisterBool("LTPLSOTTSR", 0, 0, "Enables private tournaments");
  DVARBOOL_lui_tournament_allow_warzone_players = Dvar_RegisterBool("LNKTTMTOMR", 1, 0, "Enables tournaments for WZ players");
  DVARBOOL_lui_display_name_tag = Dvar_RegisterBool("OKKNPPMMML", 1, 0, "If true, show player name tag ( eg. Jim#12345 ) when player unique ID setting is on");
  DVARBOOL_lui_root_dlog_enabled = Dvar_RegisterBool("NQOKPOKKML", 1, 0, "Enables DLog event on LUI root creation error.");
  DVARBOOL_lui_seasons_enabled = Dvar_RegisterBool("NPOLQSQMNO", 1, 0, "Controls whether UI will display season information");
  DVARBOOL_lui_dev_features_enabled = Dvar_RegisterBool("LSSRRSMNMR", 1, 0, "Toggles features still under development in frontend menus.");
  DVARBOOL_lui_dlc_installs_enabled = Dvar_RegisterBool("PPMTTRNQM", 1, 0, "Enables the 'Game Installs' menu under the general section of the options menu.");
  DVARBOOL_lui_vehicle_customization_enabled = Dvar_RegisterBool("NKNMQRQMM", 1, 0, "Enables customizing vehicles");
  DVARBOOL_lui_vehicle_horns_enabled = Dvar_RegisterBool("NRPOLLOOLL", 1, 0, "Enables vehicle horns");
  DVARBOOL_lui_vehicle_battle_tracks_enabled = Dvar_RegisterBool("NKORSMKORK", 1, 0, "Enables vehicle battle tracks");
  DVARBOOL_lui_new_barracks_identity_enabled = Dvar_RegisterBool("NNPPKLQOSN", 1, 0, "Enables new barracks identaty design");
  DVARBOOL_lui_late_grinders_enabled = Dvar_RegisterBool("NPKTRSPLNN", 1, 0, "Enables battle pass late grinders notice and popup");
  DVARBOOL_killswitch_original_playlist = Dvar_RegisterBool("LPTSRPTOQQ", 0, 0, "Killswitch for old style playlist menu");
  DVARBOOL_killswitch_loadout_draft = Dvar_RegisterBool("MLNSOPOTNQ", 0, 0, "Killswitch for Rig and Weapon Draft");
  DVARBOOL_killswitch_character_rotation = Dvar_RegisterBool("LLRLMRNNNM", 0, 0, "Toggles the ability for the player to rotate the character model in the CAC menus");
  DVARBOOL_killswitch_mp_leaderboards = Dvar_RegisterBool("MMLPKNNRMM", 0, 0, "Killswitch for MP Leaderboards");
  DVARBOOL_killswitch_cp_leaderboards = Dvar_RegisterBool("LKMRLPORSK", 0, 0, "Killswitch for CP Leaderboards");
  DVARBOOL_killswitch_streak_variants = Dvar_RegisterBool("LNSMNRRQN", 1, 0, "Killswitch for Streak Variant selection");
  DVARBOOL_killswitch_CP_TacOpsMap_interactions = Dvar_RegisterBool("PMRTOLLTK", 0, 0, "Killswitch for CP TacOpsMap interactions");
  DVARBOOL_killswitch_aar_cp_points = Dvar_RegisterBool("NMSNLMKKQS", 0, 0, "Killswitch for CP Points screen in AAR");
  DVARBOOL_enable_combat_record = Dvar_RegisterBool("MQNLOSMSQR", 1, 0, "Toggle for Combat Record");
  DVARBOOL_killswitch_announcers = Dvar_RegisterBool("LTLNQLSSK", 1, 0, "Killswitch for the announcer selection feature");
  DVARBOOL_bribe_crates_enabled = Dvar_RegisterBool("NTKOQLQNMS", 0, 0, "Killswitch for Bribe Crates");
  DVARBOOL_mission_team_contracts_enabled = Dvar_RegisterBool("NSSKMSRTMN", 0, 0, "Killswitch for Mission Team Contracts");
  DVARBOOL_daily_challenge_popup_upsell_enabled = Dvar_RegisterBool("LPKNOPTMLP", 1, 0, "Whether or not we show core MP challenges to free players in the daily popup.");
  DVARBOOL_daily_challenge_upsell_enabled = Dvar_RegisterBool("OKPORRORMM", 1, 0, "Whether or not we show core MP challenges to free players in the daily challenges menu.");
  DVARBOOL_mission_challenge_upsell_enabled = Dvar_RegisterBool("MPKLTKMKTL", 0, 0, "Whether or not we show core MP challenges to free players in the missions menu.");
  DVARBOOL_lui_enable_upsell_operator_select = Dvar_RegisterBool("OMPKROKQPL", 0, 0, "Whether or not we enable upsell mechanics on the operator select screen.");
  DVARBOOL_lui_battlepass_tier_upsell_enabled = Dvar_RegisterBool("MPMTRSQLLO", 1, 0, "Enables battlepass free tier upsell popup.");
  DVARBOOL_lui_post_bundle_purchase_upsell_enabled = Dvar_RegisterBool("MMOOMQPMTP", 0, 0, "Whether or not we enable upsell mechanics after purchasing a bundle.");
  DVARBOOL_lui_weapon_variant_upsell_enabled = Dvar_RegisterBool("NKRLMNTNRS", 1, 0, "Whether or not we enable weapon variant upsell.");
  DVARBOOL_lui_vehicle_upsell_enabled = Dvar_RegisterBool("OSNKSLRMS", 1, 0, "Whether or not we enable vehicle upsell.");
  DVARBOOL_lui_blueprint_store_enabled = Dvar_RegisterBool("MRKSTPMLT", 1, 0, "Whether or not we enable the blueprint store.");
  DVARBOOL_unlock_all_released_items = Dvar_RegisterBool("MNRNRKMQKK", 0, 0, "Set if you want to unlock all released items.");
  DVARBOOL_lui_allow_blueprints_with_restriction = Dvar_RegisterBool("NNQSMOKTKM", 1, 0, "Whether or not we enable the use of blueprint when restriction are in effect.");
  DVARBOOL_sp_shader_warming_notifications = Dvar_RegisterBool("MQQOKSOPL", 1, 0, "Killswitch for the shader loading notifications in SP");
  DVARBOOL_text_chat_enabled = Dvar_RegisterBool("LKSKPKTOON", 1, 0, "Killswitch for the new Chat widget");
  DVARBOOL_social_chat_enabled = Dvar_RegisterBool("NNOQMLNSMP", 0, 0, "Killswitch for the Chat widget");
  DVARBOOL_text_chat_gamepad_enabled = Dvar_RegisterBool("NQOMTKMNPT", 1, 0, "Killswitch for the new Chat widget on gamepad");
  DVARINT_active_chat_type = Dvar_RegisterInt("MOOOOTKPTL", 0, 0, 8, 0, "Current type of the communication channel on the chat");
  DVARSTR_active_chat_id = Dvar_RegisterString("LQPKMLTOQM", (const char *)&queryFormat.fmt + 3, 0, "Current id of the communication channel on the chat");
  DVARBOOL_weapon_variants_enabled = Dvar_RegisterBool("OLMOTLRSPK", 1, 0, "Killswitch for the Weapon Variants");
  DVARBOOL_input_swap_enabled = Dvar_RegisterBool("NNPMRQSQN", 1, 0, "Controls if the client can change input type in the menus.");
  DVARBOOL_killswitch_dlc1_maps = Dvar_RegisterBool("PMTLOTQQS", 0, 0, "Killswitch for DLC1 maps");
  DVARBOOL_dlc2_maps_enabled = Dvar_RegisterBool("NLOTPSPSOQ", 1, 0, "Killswitch for DLC2 maps");
  DVARBOOL_killswitch_dxr_ultra_enabled = Dvar_RegisterBool("LKLOMSPQSR", 1, 0, "Killswitch for enabling the Ultra setting regarding the DXR option");
  DVARBOOL_enable_splitscreen_scoreboard_indicators = Dvar_RegisterBool("OSNMNPLRR", 1, 0, "enable scoreboard indicators in splitscreen");
  DCONST_DVARFLT_lui_parallax_menu_stick_amplitude = Dvar_RegisterFloat("lui_parallax_menu_stick_amplitude", 20.0, -1000.0, 1000.0, 0x40004u, "Half-amplitude of UI parallax movement driven by right stick (in 720p pixels)");
  DCONST_DVARFLT_lui_parallax_menu_focus_amplitude = Dvar_RegisterFloat("lui_parallax_menu_focus_amplitude", -50.0, -1000.0, 1000.0, 0x40004u, "Half-amplitude of UI parallax movement driven by the position of the item in focus (in 720p pixels)");
  DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude = Dvar_RegisterFloat("lui_parallax_menu_mouse_amplitude", -50.0, -1000.0, 1000.0, 0x40004u, "Half-amplitude of UI parallax movement driven by the position of mouse (in 720p pixels)");
  DVARINT_lui_crm_messageSendBatchIntervalSecs = Dvar_RegisterInt("LPRTSKKKLL", 10, 1, 0x7FFFFFFF, 0, "Interval (in seconds) at which to send batched CRM message read events to Demonware.");
  DVARINT_crm_max_message_count = Dvar_RegisterInt("NSKOMKOSLO", 3, 1, 6, 0, "Max messages shown at once in the MOTD (1-6). Max Cached messages is: MOTD (1) + MSGS (5)");
  DVARINT_crm_max_patch_note_count = Dvar_RegisterInt("NNNSQLQO", 3, 1, 5, 0, "Max patch note messages shown at once in the MOTD (1-5)");
  DCONST_DVARBOOL_lui_worker_cmds = Dvar_RegisterBool("lui_worker_cmds", 0, 0x40004u, "Control the use of worker commands for LUI update.");
  DCONST_DVARBOOL_lui_render_worker = Dvar_RegisterBool("lui_render_worker", 1, 0x40004u, "Control the use of worker commands for LUI render.");
  DVARBOOL_allow_reroll_cheat = Dvar_RegisterBool("LTLMRRLTR", 1, 0, "Set to true to enable reroll button combination in AttachmentSelect.");
  DVARBOOL_force_unlock_all_attachments = Dvar_RegisterBool("MNLPOPMMSK", 0, 0, "Unlocks all attachments in the gunsmith.");
  DVARBOOL_force_unlock_all_attachment_lines = Dvar_RegisterBool("LSPQSSPSOL", 0, 0, "Unlocks all attachments lines in the gunsmith.");
  DVARBOOL_force_unlock_all_killstreaks = Dvar_RegisterBool("NQRLNKMTSL", 0, 0, "Unlocks all killstreaks.");
  DVARBOOL_force_lui_tween_meta_backup = Dvar_RegisterBool("OMKLOKONRK", 1, 0, "Force using lui tween backup table when the original meta table data is corrupted.");
  DCONST_DVARBOOL_lui_dev_printMissingImageLuaStacks = Dvar_RegisterBool("lui_dev_printMissingImageLuaStacks", 0, 0x40004u, "Print the Lua callstack when an image is not found.");
  DVARBOOL_lui_memgraph = Dvar_RegisterBool("MPLTSNKNPT", 0, 0, "Draw graph of memory usage of the LUI system");
  DVARBOOL_lui_menustack_names = Dvar_RegisterBool("MLKRTSTLKO", 0, 0, "Print out lui menu stack information");
  DVARBOOL_lui_icon_streamer_info = Dvar_RegisterBool("NMPTQTQRKO", 0, 0, "Print out lui dynamic image streamer information");
  DVARBOOL_lui_dyn_streamed_images = Dvar_RegisterBool("MSLSKNNQK", 0, 0, "Print out lui dynamic streamed images information");
  DVARBOOL_lui_streamed_images = Dvar_RegisterBool("MNSMRSNRSS", 0, 0, "Print out lui streamed images information");
  DVARBOOL_lui_attachments_ref = Dvar_RegisterBool("NOQRNLRMNO", 0, 0, "Print out interactive weapon's attachments reference information");
  DVARBOOL_lui_frontscene_weapon_model = Dvar_RegisterBool("QTKTSRSLQ", 0, 0, "Print out frontscene weapon model information");
  DVARBOOL_lui_uidebuglayer = Dvar_RegisterBool("LMRRKQKROO", 0, 0, "Show/Hide the UI Debug Layer");
  DCONST_DVARBOOL_lui_debug_events_enabled = Dvar_RegisterBool("lui_debug_events_enabled", 0, 0x40004u, "Set to true to see a sorted list of the most commonly processed events in Lua in the console output.");
  DVARBOOL_debug_weapon_model_enabled = Dvar_RegisterBool("LPKPKPTMKR", 0, 0, "Other debug model values only apply if true.");
  DVARFLT_debug_weapon_model_xoffset = Dvar_RegisterFloat("SQNKKRMN", 0.0, -20.0, 20.0, 0, "X Offset for the weapon model.");
  DVARFLT_debug_weapon_model_yoffset = Dvar_RegisterFloat("LOKLRRNSSM", 0.0, -35.0, 35.0, 0, "Y Offset for the weapon model.");
  DVARFLT_debug_weapon_model_zoffset = Dvar_RegisterFloat("RLOROROPR", 0.0, -5.0, 20.0, 0, "Z Offset for the weapon model.");
  DVARFLT_debug_attachment_model_xoffset = Dvar_RegisterFloat("OKOMQMTSOK", 0.0, -20.0, 20.0, 0, "X Offset for the weapon model based on attachment.");
  DVARFLT_debug_attachment_model_yoffset = Dvar_RegisterFloat("NKQRRKPMPR", 0.0, -35.0, 35.0, 0, "Y Offset for the weapon model based on attachment.");
  DVARFLT_debug_attachment_model_zoffset = Dvar_RegisterFloat("MTKOSMRROQ", 0.0, -5.0, 20.0, 0, "Z Offset for the weapon model based on attachment.");
  DVARFLT_debug_weapon_model_pitch = Dvar_RegisterFloat("LMORQMKNQS", 0.0, -360.0, 360.0, 0, "Pitch for the weapon model.");
  DVARFLT_debug_weapon_model_yaw = Dvar_RegisterFloat("LQPRNSLLNN", 0.0, -360.0, 360.0, 0, "Yaw for the weapon model.");
  DVARFLT_debug_weapon_model_roll = Dvar_RegisterFloat("MPSMRTRLNL", 0.0, -360.0, 360.0, 0, "Roll for the weapon model.");
  DVARFLT_debug_weapon_model_preview_xoffset = Dvar_RegisterFloat("LOQKPMTMRS", 0.0, -20.0, 20.0, 0, "X Offset for the weapon model preview.");
  DVARFLT_debug_weapon_model_preview_yoffset = Dvar_RegisterFloat("LNRTLSMOSR", 0.0, -20.0, 20.0, 0, "Y Offset for the weapon model preview.");
  DVARFLT_debug_weapon_model_preview_zoffset = Dvar_RegisterFloat("MRPNKMRKPM", 0.0, -20.0, 20.0, 0, "Z Offset for the weapon model preview.");
  DVARFLT_debug_weapon_model_line_xoffset = Dvar_RegisterFloat("LMRQMOPNSM", 0.0, -500.0, 500.0, 0, "X Offset for the weapon model line.");
  DVARFLT_debug_weapon_model_line_yoffset = Dvar_RegisterFloat("OLSQQQTNON", 0.0, -500.0, 500.0, 0, "Y Offset for the weapon model line.");
  DVARFLT_debug_weapon_model_line_zoffset = Dvar_RegisterFloat("MQPQRPNNKK", 0.0, -500.0, 500.0, 0, "Z Offset for the weapon model line.");
  DVARBOOL_debug_dummy_aar_summary_enabled = Dvar_RegisterBool("NNKNPMORKR", 0, 0, "Enable dummy AAR summary menu");
  DVARBOOL_debug_aar_battlepass_enabled = Dvar_RegisterBool("NSSKNKRKNP", 0, 0, "Enable aar battle pass debug data");
  DVARINT_debug_aar_battlepass_earn_value = Dvar_RegisterInt("NPQKMMLMRS", 0, 0, 0x7FFFFFFF, 0, "AAR battle pass debug earned value");
  DVARBOOL_debug_enable_scoreboard_log = Dvar_RegisterBool("LPRMKKQOS", 0, 0, "Print out in-game scoreboard row data when this dvar is enabled");
  DVARBOOL_crm_use_debug_message = Dvar_RegisterBool("OMLPQNOPPL", 0, 0, "Use a debug mssage for testing the CRM widget.");
  DVARBOOL_crm_always_show_motd = Dvar_RegisterBool("STRONQSLO", 0, 0, "Always show the MOTD when opening a menu with the CRM widget.");
  DCONST_DVARBOOL_lui_showDebugTweenCounter = Dvar_RegisterBool("lui_showDebugTweenCounter", 0, 0x40004u, "Show debug lui tween counter.");
  DVARBOOL_lui_drawFocusChain = Dvar_RegisterBool("OKLKTRQTTL", 0, 0, "Draw Lua focus chain/hierarchy");
  DVARBOOL_lui_show_original_trials_menu = Dvar_RegisterBool("LKNKMMLKNR", 1, 0, "Shows the original Trials menu instead of the Skinny version");
  DVARINT_lui_print_weapon_attributes = Dvar_RegisterInt("MMTMMPTQKM", 1, 1, 0x7FFFFFFF, 0, "Set weapon information to print upon switching weapon.");
  DVARSTR_scr_list_inventory = Dvar_RegisterString("scr_list_inventory", (const char *)&queryFormat.fmt + 3, 0x100u, "Print weapon info.");
  DVARBOOL_lui_esports_shipMemory = Dvar_RegisterBool("MNQKMLMMM", 0, 0, "Activate ship build ESports memory budget");
  DVARBOOL_lui_codcaster_enabled = Dvar_RegisterBool("NRMMRSMNPS", 1, 0, "Toggles the ability for the player to set himself as codcaster");
  DVARBOOL_lui_codcaster_followers_enabled = Dvar_RegisterBool("LQNKRLQTLM", 0, 0, "Toggles the ability for the player to set himself as codcaster follower");
  DVARBOOL_lui_codcaster_dataview_enabled = Dvar_RegisterBool("RPNQOQSOS", 1, 0, "Activate the dataview screen for codcaster");
  DVARBOOL_ui_use_per_bullet_hitmarkers = Dvar_RegisterBool("OMRLPMMPRL", 0, 0, "Uses per bullet hitmarkers.");
  DVARBOOL_ui_overwrite_prev_per_bullet_hitmarkers = Dvar_RegisterBool("OMNLSQLMMP", 0, 0, "Option to overwrite previous hitmarkers on new bullet hits.");
  DVARBOOL_ui_bolt_hitmarkers_to_entity = Dvar_RegisterBool("MRTTLKLTKO", 1, 0, "Hitmarkers will always attach to an entity or tag if available on bullet hits.");
  DVARBOOL_ui_enable_dynamic_attachment_icons = Dvar_RegisterBool("NKTNRLTOSO", 1, 0, "Enable the new gunsmith pick-up system or not ");
  DVARINT_lui_large_player_count_threshold = Dvar_RegisterInt("MTTRPNMPRP", 25, 0, 0x7FFFFFFF, 0, "Minimum number of players considered as large player count.");
  DVARSTR_lui_classic_specops_maps_enabled_list = Dvar_RegisterString("OLKNTQKTPP", "cp_so_highway, cp_so_embassy, cp_so_aniyah, cp_so_estate, cp_so_finale, cp_so_safehouse", 0, "List of specops maps available in Private Match, delimited by commas (e.g \"cp_so_highway, cp_so_embassy\" ).");
  DVARBOOL_lui_classic_specops_stars_enabled = Dvar_RegisterBool("SNTTNKSRO", 0, 0, "Toggles stars being displayed in CP frontend menus.");
  DVARBOOL_lui_classic_specops_rewards_enabled = Dvar_RegisterBool("OLLPNSOSNN", 0, 0, "Toggles rewards being displayed in CP frontend menus.");
  DVARBOOL_lui_survival_lobby_enabled = Dvar_RegisterBool("NRRNOTRMOP", 0, 0, "Toggles the survival button enabled in CPMainMenu.");
  DVARINT_lui_survival_lobby_playlist = Dvar_RegisterInt("NNKSOPNQPS", 55, 0, 0x7FFFFFFF, 0, "The current playlist index to use for Survival matchmaking");
  DVARBOOL_lui_magma_enabled = Dvar_RegisterBool("NMNPSRKPPP", 1, 0, "Master killswitch for Magma.");
  DVARINT_lui_magma_blade_countdown_end = Dvar_RegisterInt("MNNTMPMOLK", 0, 0, 0x7FFFFFFF, 0, "UTC timestamp to end countdown timer on Magma blade; countdown will appear when set");
  DVARINT_lui_battleRoyale_lobby_solo_playlist = Dvar_RegisterInt("MMNQKTMMQS", 17, 0, 0x7FFFFFFF, 0, "The current playlist index to use for solo BR matchmaking");
  DVARINT_lui_battleRoyale_lobby_duo_playlist = Dvar_RegisterInt("NORRQNNNOP", 53, 0, 0x7FFFFFFF, 0, "The current playlist index to use for duo BR matchmaking");
  DVARINT_lui_battleRoyale_lobby_trio_playlist = Dvar_RegisterInt("LPSOKQSSRL", 19, 0, 0x7FFFFFFF, 0, "The current playlist index to use for trio BR matchmaking");
  DVARINT_lui_battleRoyale_lobby_quad_playlist = Dvar_RegisterInt("MPLTQKNSMM", 19, 0, 0x7FFFFFFF, 0, "The current playlist index to use for quad BR matchmaking");
  DVARBOOL_lui_battleRoyale_force_open_highlights_panel = Dvar_RegisterBool("NROLSNKS", 0, 0, "Should the Nvidia Highlight panel be forced opened when coming back from a BR match");
  DVARINT_lui_battleRoyale_tutorial_end_choice = Dvar_RegisterInt("NLOQPLMLKR", 0, 0, 10, 0, "What the player picked at the end as a frontend menu flow. 0=back to main, 1=real lobby, 2=practice mode, 5=blood money");
  DVARBOOL_lui_battleRoyale_practice_mode_available = Dvar_RegisterBool("MNRTKTQMLS", 1, 0, "Does the practice mode exist");
  DVARBOOL_lui_battleRoyale_tutorial_lobby_need_continue = Dvar_RegisterBool("RMTPOKQP", 0, 0, "Does the player is getting out from the tutorial to it lobby.");
  DVARBOOL_lui_trial_ending = Dvar_RegisterBool("LNSMSSTTSK", 0, 0, "Is the trial ending");
  DVARBOOL_lui_wz_trials_access = Dvar_RegisterBool("NORMPNKNKQ", 1, 0, "Give access to the trials in the warzone menu");
  DVARBOOL_lui_is_in_trial_event = Dvar_RegisterBool("TKRPRPOSQ", 0, 0, "Is the trial event ending");
  DVARBOOL_lui_wz_trials_event_access = Dvar_RegisterBool("NMTRNKQNOP", 1, 0, "Give access to the trial event in the warzone menu");
  DVARBOOL_lui_trial_event_display_rewards = Dvar_RegisterBool("OLRSKMOQLR", 0, 0, "Display rewards and participation popups in the trial Events.");
  DVARBOOL_lui_trial_event_display_participation_reward = Dvar_RegisterBool("LOPTQONSTM", 0, 0, "Display the participation reward popup after trial attempt.");
  DVARBOOL_lui_trial_event_display_completion_reward = Dvar_RegisterBool("NSRRPSPKRN", 0, 0, "Display the completion reward popup after trial attempt if the user has earned all the gold medals.");
  DVARINT_lui_trial_event_start_time = Dvar_RegisterInt("NRTPTSNRNK", 0, 0, 0x7FFFFFFF, 0, "Epoch time for the start of the trial event");
  DVARINT_lui_trial_event_end_time = Dvar_RegisterInt("MOKTSOLQMP", 0, 0, 0x7FFFFFFF, 0, "Epoch time for the end of the trial event");
  DVARSTR_lui_trial_event_leaders_1 = Dvar_RegisterString("NNNMLOLKTK", (const char *)&queryFormat.fmt + 3, 0, "List of all leaders for the first games of summer. Will be parsed with these in mind. _ splits ranks and , splits fields. Expects Country,Gold,Silver,Bronze");
  DVARSTR_lui_trial_event_leaders_2 = Dvar_RegisterString("LMPTPMLQPR", (const char *)&queryFormat.fmt + 3, 0, "List of all leaders for the second games of summer. Will be parsed with these in mind. _ splits ranks and , splits fields. Expects Country,Gold,Silver,Bronze");
  DVARSTR_lui_trial_event_leaders_3 = Dvar_RegisterString("NOSLSQTPMK", (const char *)&queryFormat.fmt + 3, 0, "List of all leaders for the third games of summer. Will be parsed with these in mind. _ splits ranks and , splits fields. Expects Country,Gold,Silver,Bronze");
  DVARSTR_lui_trial_event_leaders_4 = Dvar_RegisterString("SLKNNQNQR", (const char *)&queryFormat.fmt + 3, 0, "List of all leaders for the fourth games of summer. Will be parsed with these in mind. _ splits ranks and , splits fields. Expects Country,Gold,Silver,Bronze");
  DVARSTR_lui_trial_event_leaders_5 = Dvar_RegisterString("NKNMQSOMNK", (const char *)&queryFormat.fmt + 3, 0, "List of all leaders for the fifth games of summer. Will be parsed with these in mind. _ splits ranks and , splits fields. Expects Country,Gold,Silver,Bronze");
  DVARBOOL_lui_minimap_options_enabled = Dvar_RegisterBool("MPKTSNOLSO", 1, 0, "Enables minimap style settings in the Options menu.");
  DVARINT_ui_force_max_rank = Dvar_RegisterInt("MRRMSMMLML", 54, 0, 0x7FFFFFFF, 0, "The max rank player could reach for special build, eg Beta build");
  DVARBOOL_lui_worldMap_enabled = Dvar_RegisterBool("LNLNSSNKQ", 0, 0, "Enables/disables the world map in mpmainmenu.");
  DCONST_DVARFLT_lui_scoreboardYou_offset = Dvar_RegisterFloat("lui_scoreboardYou_offset", 12.0, 0.0, 1000.0, 0x40004u, "The horizontal offset of the YOU indicator from the left side of the scoreboard row.");
  DCONST_DVARFLT_lui_scoreboardYou_width = Dvar_RegisterFloat("lui_scoreboardYou_width", 30.0, 0.0, 1000.0, 0x40004u, "The width of the YOU indicator in the scoreboard row.");
  DVARBOOL_lui_devgui_invisible = Dvar_RegisterBool("MSTMNTRNOS", 0, 0, "Make devgui visible  or invisible");
  DVARBOOL_lui_showDebugLayer = Dvar_RegisterBool("MSPSNLMPLP", 0, 0, "Toggle debug layer visibility");
  DVARBOOL_lui_world_blur_fullscreen_layout_safety = Dvar_RegisterBool("SROMPSLNM", 1, 0, "Killswitch in case the world blur fullscreen code messes things up.");
  DVARBOOL_ui_upsellEnabled = Dvar_RegisterBool("SSRQTKMLQ", 1, 0, "Killswitch for the Upsell button popups.");
  DVARBOOL_ui_upsell_flow_fix = Dvar_RegisterBool("RNRNSRTNQ", 1, 0, "Killswitch for the Upsell flow fix.");
  DVARINT_ui_show_pulsing_upsell_after = Dvar_RegisterInt("QNPTOQOPL", 6, 0, 0x7FFFFFFF, 0, "The number of pulsing matches played before showing the upsell popup");
  DVARBOOL_pulsing_upsell_enabled = Dvar_RegisterBool("MKKKSTPNQL", 1, 0, "Killswitch that enable the Upsell popups feature after a pulsing game.");
  DVARBOOL_tutorial_and_new_season_upsell_enabled = Dvar_RegisterBool("LRONQNKRKM", 0, 0, "Killswitch that enable the new season and post tutorial Upsell popups.");
  DVARBOOL_ui_purchased_title = Dvar_RegisterBool("OPONKOMKQ", 0, 0, "True if the user purchases a title id while in game.");
  DVARBOOL_lui_enable_magma_blade_layout = Dvar_RegisterBool("LRKPTLNQTT", 1, 0, "Enable the new blade layout for magma users.");
  DVARBOOL_ui_bladeInstallEnabled = Dvar_RegisterBool("LORNQMSLNM", 0, 0, "Killswitch for the blade installation progress");
  DVARBOOL_lui_show_mm_ping_band = Dvar_RegisterBool("MPTLKKKQNT", 1, 0, "Toggle showing the ping band used in MM search");
  DVARSTR_lui_fe_transitioning_scene = Dvar_RegisterString("NRLKQRRMKK", (const char *)&queryFormat.fmt + 3, 0, "Scene name of the currently transitioning scene. Empty string if we're not transitioning.");
  DVARBOOL_lui_force_interactive_prompt_screen_snap = Dvar_RegisterBool("LTMMNMRLTP", 0, 0, "If set to true the interactive object button with snap to screen center with an offset");
  DVARFLT_lui_force_interactive_prompt_screen_snap_offset_x = Dvar_RegisterFloat("LMPPLNSRK", 0.0, 0.0, 3.4028235e38, 0, "x screen offset for interactive prompts that are snapping");
  DVARFLT_lui_force_interactive_prompt_screen_snap_offset_y = Dvar_RegisterFloat("MLTSLNNNKN", 100.0, 0.0, 3.4028235e38, 0, "x screen offset for interactive prompts that are snapping");
  DVARINT_lui_refreshRate_Telemetry_FPS = Dvar_RegisterInt("LSRMTRQKR", 250000, 0, 0x7FFFFFFF, 0, "Refresh rate of the FPS Telemetry widget");
  DVARINT_lui_refreshRate_Telemetry_Latency = Dvar_RegisterInt("NNTRPQMPPK", 250000, 0, 0x7FFFFFFF, 0, "Refresh rate of the Server Latency Telxtualemetry widget");
  DVARINT_lui_refreshRate_Telemetry_GPUTime = Dvar_RegisterInt("NRKOOPRLTN", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the GPU time Telemetry widget");
  DVARINT_lui_refreshRate_Telemetry_GPUTemperature = Dvar_RegisterInt("QSOONMKK", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the GPU temperature Telemetry widget");
  DVARINT_lui_refreshRate_Telemetry_CPUTime = Dvar_RegisterInt("OLQPPMRQKP", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the CPU time Telemetry widget");
  DCONST_DVARFLT_lui_stick_direction_threshold = Dvar_RegisterFloat("lui_stick_direction_threshold", 5.0, 0.0, 360.0, 0x40004u, "Stick direction threshold required in order to change the inputType to gamepad");
  DCONST_DVARFLT_lui_stick_magnitude_threshold = Dvar_RegisterFloat("lui_stick_magnitude_threshold", 0.1, 0.0, 1.0, 0x40004u, "Stick magnitude threshold required in order to change the inputType to gamepad");
  DVARBOOL_lui_enableLootItemSelection = Dvar_RegisterBool("LPTRTLMOLK", 0, 0, "Enable making a loot item selection in the loot ceremony menu.");
  DVARBOOL_lui_allowInputUpThroughChat = Dvar_RegisterBool("MNRKSPPPQL", 1, 0, "Done to fix the button hold when in chat. Otherwise only the button down sends events.");
  DVARINT_lui_party_widget_max_emblems = Dvar_RegisterInt("NPOPOROTQM", 0, 0, 0x7FFFFFFF, 0, "Maximum number of emblems to display in the party widget.");
  DVARBOOL_lui_enableBundleUpsellWidget = Dvar_RegisterBool("NLTNQNSMQK", 1, 0, "Enable the Bundle Upsell Widget (BundleUpsellButton)");
  DVARSTR_lui_operator_bundle_magma_priority = Dvar_RegisterString("NOTKSOLRMO", "400169,400170,400171,400172,400173,400174", 0, "Bundle Ids listed here will be upselled in priority to magma players in the operator bundle upsell widget.");
  DVARSTR_lui_operator_bundle_kronos_priority = Dvar_RegisterString("NQPLOSRSTP", (const char *)&queryFormat.fmt + 3, 0, "Bundle Ids listed here will be upselled in priority to kronos players in the operator bundle upsell widget.");
  DVARSTR_lui_weapon_bundle_magma_priority = Dvar_RegisterString("NQPKQKPTOQ", (const char *)&queryFormat.fmt + 3, 0, "Bundle Ids listed here will be upselled in priority to magma players in the weapon variant bundle upsell widget.");
  DVARSTR_lui_weapon_bundle_kronos_priority = Dvar_RegisterString("LRTKSQRKLR", (const char *)&queryFormat.fmt + 3, 0, "Bundle Ids listed here will be upselled in priority to kronos players in the weapon variant bundle upsell widget.");
  DVARBOOL_lui_enable_upsell_player_progression = Dvar_RegisterBool("OKQQPKRLTN", 0, 0, "Enable the Player Progression Upsell popups.");
  DVARBOOL_lui_system_restart_required = Dvar_RegisterBool("MKKNSMLKPR", 0, 0, "Whether or not we should run a system restart.");
  DVARSTR_lui_system_restart_message = Dvar_RegisterString("LQSPQSNQSN", (const char *)&queryFormat.fmt + 3, 0, "Reason for the system restart.");
  DVARSTR_lui_system_restart_uninstall_product_id = Dvar_RegisterString("LRTQKNLLMO", (const char *)&queryFormat.fmt + 3, 0, "InGameStore ProductId to uninstall on restart.");
  DVARBOOL_lui_survival_map_enabled_kbm = Dvar_RegisterBool("NSMNNLPSPM", 1, 0, "Whether or not we should run a system restart.");
  DVARBOOL_lui_skip_season_video = Dvar_RegisterBool("NKMQMOKNRP", 1, 0, "Whether or not we show the season video when the player logs in the second time on after seeing the season video.");
  DVARBOOL_lui_skip_season_intro_video = Dvar_RegisterBool("NPPQOLPPO", 0, 0, "Controls if the season video plays or not.");
  DVARBOOL_enable_loadout_tabs = Dvar_RegisterBool("NTMRRKSKPQ", 1, 0, "True if we want to enable tabs in the in game loadouts.");
  DVARBOOL_enable_weekly_challenges_tab = Dvar_RegisterBool("MNROTSKL", 1, 0, "Whether or not we show the weekly challenges tab in missions and challenges.");
  DVARBOOL_lui_challenge_tab_enabled = Dvar_RegisterBool("NLSTMSNRKN", 1, 0, "Controls whether Challenges are accessible via a separate tab in the MP/CP/BR Main Menus instead of through the Barracks tab");
  DVARBOOL_lui_intel_missions_enabled = Dvar_RegisterBool("LRNMMQMTPK", 1, 0, "Controls visiblity of the intel missions tab in challenges menu and intel widget in BR pause menu");
  DVARBOOL_lui_cp_missions_enabled = Dvar_RegisterBool("LQOMSPKPSR", 1, 0, "Controls visiblity of the CP missions tab in challenges menu");
  DVARBOOL_lui_weapon_master_challenges_enabled = Dvar_RegisterBool("MTORSRMLSQ", 1, 0, "Controls visiblity of weapon master challenges button and widgets");
  DVARINT_lui_intel_season_and_week_visible = Dvar_RegisterInt("MKSNRSOQSS", 3006, 0, 0x7FFFFFFF, 0, "Dvar that controls visibility of intel missions; i.e. 3002 is Season 3 Week 2");
  DVARBOOL_lui_wz_tutorial_optional = Dvar_RegisterBool("LSPSKLPNQT", 1, 0, "This allows to skip the WZ tutorial");
  DVARBOOL_lui_wz_bm_tutorial_enabled = Dvar_RegisterBool("NNTRQOMLSQ", 1, 0, "This will show the Blood Money tutorial in the menus");
  DVARBOOL_lui_mp_intelMenu_enabled = Dvar_RegisterBool("MTRLRMPONT", 0, 0, "Whether or not we show the Intel menu in MP Barracks instead of CPMainMenu");
  DVARBOOL_lui_show_magma_launch_trailer = Dvar_RegisterBool("NRKKKQNQQP", 0, 0, "Whether or not we show the magma launch trailer instead of season video");
  DVARBOOL_lui_hide_prompt_magma_blade = Dvar_RegisterBool("MNTMKQRSTQ", 1, 0, "Hide select and Buy MW prompt in the offline magma blades.");
  DVARBOOL_lui_showPerkIconsForDynamicWeapons = Dvar_RegisterBool("LRKORRLSSM", 0, 0, "Whether or not we show the perk icons as part of dynamic attachment icons.");
  DVARINT_lui_wz_tutorial_loot_display_id = Dvar_RegisterInt("LPKRQLLLNQ", 30080, 0, 0x7FFFFFFF, 0, "Loot id to use for the wz tutorial reward. Only for the display and not the unlocking in the backend");
  DVARINT_lui_wz_practice_loot_display_id = Dvar_RegisterInt("NOMPNRSPRL", 128, 0, 0x7FFFFFFF, 0, "Loot id to use for the wz practice reward. Only for the display and not the unlocking in the backend");
  DVARINT_lui_wz_bm_tutorial_loot_display_id = Dvar_RegisterInt("LNKPLSSRQ", 170696, 0, 0x7FFFFFFF, 0, "Loot id to use for the wz blood money tutorial reward. Only for the display and not the unlocking in the backend");
  DVARBOOL_lui_wz_playmenu_show_mp_trial_first = Dvar_RegisterBool("LNRQKOQLNN", 0, 0, "If true, the promoted ( mp trial ) playlist buttons will appear before the BR featured buttons in the WZ play menu");
  DVARBOOL_lui_wz_playmenu_show_tournament_first = Dvar_RegisterBool("NLMSQOPNMK", 0, 0, "If true, the tournament button will be the first button to appear in the mp trial list, otherwise it will be the last in that group");
  DVARBOOL_lui_showCoreChallengesToBRPlayers = Dvar_RegisterBool("MMOTQROLKT", 0, 0, "Whether or not we show core weekly challenges to br players");
  DVARBOOL_lui_magma_squad_fill_enabled = Dvar_RegisterBool("NKOOQPNSKM", 1, 0, "Whether or not we show the squad fill/no fill option.");
  DVARBOOL_lui_default_operator_customization_enabled = Dvar_RegisterBool("LMTKOLOLTK", 1, 0, "Whether or not we allow customizing default operators.");
  DVARBOOL_lui_use_new_bm_onboarding_popup = Dvar_RegisterBool("MSSMLKNMRT", 1, 0, "We're replacing the old Popup slides with a new screen. This is to enable it once ready");
  DVARBOOL_lui_codtv_enabled = Dvar_RegisterBool("LOOTSOTKLS", 0, 0, "Whether or not we should be able to access the cod tv menu");
  DVARBOOL_lui_enable_clear_breadcrumbs = Dvar_RegisterBool("MOSNKSLTKM", 1, 0, "enable or disable clearing breadcrumbs");
  DVARINT_lui_weekly_challenge_epoch_offset = Dvar_RegisterInt("MNRLLKTLPT", 0, 0, 0x7FFFFFFF, 0, "dev offset for weekly challenge time");
  DVARBOOL_lui_playlist_splitscreen_restrict_check_player_count = Dvar_RegisterBool("NLMOPNQOTT", 0, 0, "Optionally restrict split screen users from joining playlists based on a max player count defined in LUA as Lobby.MaxPlayerCountForSplitscreen");
  DVARBOOL_lui_show_all_client_character_gamertags = Dvar_RegisterBool("NRNLOOTRN", 1, 0, "shows operator gamertags in the lobby for all client characters, if false will only show a tag for the local player");
  DVARBOOL_lui_enable_stats_reset = Dvar_RegisterBool("MPTMQQNLNT", 0, 0, "Enables stats reset on bad file version.");
  DVARBOOL_lui_br_can_player_back_aar_from_spectate = Dvar_RegisterBool("MNPLOKRMON", 0, 0, "Flag to enable players to back to aar from spectate after players team is eliminated");
  DVARUINT64_lui_weekly_challenges_start_time = Dvar_RegisterUInt64("TPQRKMRLN", 0x5ED68590ui64, 0i64, 0xFFFFFFFFui64, 0, "The start time for weekly challenges for a season.");
  DVARBOOL_lui_enable_master_challenges = Dvar_RegisterBool("MSSTOMNNMR", 1, 0, "Flag to enable master calling card challenges");
  DVARBOOL_lui_show_dynamic_variant_icons_cp = Dvar_RegisterBool("LMKLPKTQOO", 1, 0, "to show dynamic weapon icons in CP");
  DVARBOOL_lui_enable_frontend_seasonal_content = Dvar_RegisterBool("MONKPPPQR", 0, 0, "Flag to enable seasonal content in frontend");
  DVARBOOL_lui_allow_team_scoreboard_scrolling_in_game = Dvar_RegisterBool("SPTSNKQSN", 1, 0, "Since we now have mode with more players, we should allow scrolling. This enables that");
  DVARBOOL_lui_enable_frontend_quit_party_on_update_available = Dvar_RegisterBool("LPKOMPKSPL", 1, 0, "Flag to enable removing the player from it's party and moving him to the main menu when an update is available");
  DVARSTR_ui_br_variant = Dvar_RegisterString("MTQQTNNTMM", (const char *)&queryFormat.fmt + 3, 0, "Specifies the BR variant being played");
  DVARBOOL_lui_show_upsell_pulsed = Dvar_RegisterBool("OMMSLPNSTR", 1, 0, "to show the upsell popup to players who played pulsed game modes.");
  DVARBOOL_lui_wz_private_match_enabled = Dvar_RegisterBool("LOQQOSNQKN", 0, 0, "if enabled, wz private match will be accessible in the wz frontend");
  DVARBOOL_ui_display_ng_blade = Dvar_RegisterBool("NQPKQNMQSR", 0, 0, "Displays the NG blade in both premium and free blades");
  DVARBOOL_lui_show_future_missions = Dvar_RegisterBool("MRMSRLKSPT", 0, 0, "Whether or not we show future season missions in the missions menu");
  DVARBOOL_lui_enable_option_menu_in_store = Dvar_RegisterBool("NQNNSMQQN", 1, 0, "Flag to enable the option menu button in the store");
  DVARBOOL_lui_enable_reward_preview_in_cp = Dvar_RegisterBool("LROKTOQOKQ", 1, 0, "Flag to enable reward previews in CP playlist page");
  DVARBOOL_lui_enable_hyperburst_icon = Dvar_RegisterBool("LNMNLSOMQS", 1, 0, "Flag to enable showing hyperburst icon when hyperburst is available for a weapon");
  DVARBOOL_ui_display_battlepass_blade_string = Dvar_RegisterBool("MLNLKSKNQN", 0, 0, "Displays the Battle Pass string on the store main menu blade");
  lui_splitscreenupscaling = Dvar_RegisterInt("MQNLMKNQS", 0, -1, 1, 0, "Force splitscreen upscaling off/on (-1 off, 1 on) -- requires map change");
  ui_safearea = Dvar_RegisterBool("OMOOMQKMMS", 0, 0, "Show the Screen Safe overlay");
  lui_drawmemreport = Dvar_RegisterBool("LQLOMQQPMP", 0, 0, "Show information about memory usage of the LUI system");
  lui_mandatoryUpdate = Dvar_RegisterBool("MSOLRSPMPK", 0, 4u, "set to 1 to trigger UI dialog before entering MP Play Online");
  lui_fakeExtendedText = Dvar_RegisterBool("NQMNROMOKT", 0, 4u, "Extend the text to test the use of ellipses");
  Dvar_EndPermanentRegistration();
}

/*
==============
LUI_CoD_RegisterGameDvars
==============
*/
void LUI_CoD_RegisterGameDvars(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7787, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tThese dvars must be registered after game mode creation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  v0 = 262340;
  v1 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_lui_parallax_view_sway_rate = Dvar_RegisterFloat("NTQSRLRPMT", -0.1, -100.0, 100.0, v1, "Rate that player-driven camera angle movement influences UI movement.  Low values will lag behind view changes; high values will lead.");
  v2 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v2 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_lui_parallax_anim_sway_rate = Dvar_RegisterFloat("NOTOORKKTT", -0.2, -100.0, 100.0, v2, "Rate that animation-driven camera angle movement influences UI movement.  Low values will lag behind view changes; high values will lead.");
  v3 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v3 = 262276;
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view = Dvar_RegisterVec2("MNSKKLOMMN", 4.5, 4.5, 0.0, 360.0, v3, "Maximum angle that UI can be offset from player view.  Degrees in Pitch and Yaw.");
  v4 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v4 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence = Dvar_RegisterFloat("NSONSKLLQQ", 40.0, 0.0, 3.4028235e38, v4, "Maximum player view linear velocity that will be converted to angular UI motion.  Inches per second.");
  v5 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v5 = 262276;
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate = Dvar_RegisterVec3("MMMTQPLQMO", 0.30000001, 0.30000001, 0.5, 0.0, 360.0, v5, "Rate that angular motion is applied to the UI given a linear velocity.  (Degrees rotation) per (Inches per second in player X, Y, and Z).");
  v6 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v6 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_lui_parallax_scale = Dvar_RegisterFloat("NOPPPNSKMM", 0.25, 0.0, 3.4028235e38, v6, "Scale applied to the final angular offset calculated for UI elements.");
  DVARBOOL_lui_drawHUDMap = Dvar_RegisterBool("MKORQLNLQN", 0, 0, "Show name and outlines of hud widgets");
  DCONST_DVARSTR_hint_button_defaultIconMaterial = Dvar_RegisterString("hint_button_defaultIconMaterial", "hud_interaction_prompt_center_standard", 0x40004u, "Icon used for interactive object prompts when none is specified by script");
  v7 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v7 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_lootCard_shortInteractDistance = Dvar_RegisterInt("RORLNQQKQ", 100, 0, 128, v7, "Max number of in-game units the player can be away from a loot item to pick it up");
  v8 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v8 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_lootCard_mediumInteractDistance = Dvar_RegisterInt("MSPTROQNR", 200, 0, 256, v8, "Max number of in-game units the player can be away from a loot item to be able to ping it");
  v9 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v9 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod = Dvar_RegisterInt("NNRTRKSLKK", 1000, 0, 10000, v9, "Alpha pulse period of minimized display prompts (milliseconds).");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v0 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale = Dvar_RegisterFloat("MQRQLLRKOP", 0.75, 0.0, 1.0, v0, "Minimum alpha scale value to multiply against the minimized interaction prompt widget's base alpha when blinking.");
  DVARBOOL_lui_objective_fade_enabled = Dvar_RegisterBool("NTMLPPMOPK", 1, 0, "Killswitch for the objective distance fading system");
  DVARFLT_lui_objective_fadeStart = Dvar_RegisterFloat("LLSLRMTOKS", 0.0, 0.0, 3.4028235e38, 0, "Distance at which objectives will begin to fade their opacity from 1 to 0. If the widget is closer than this distance, it will be drawn at full opacity.");
  DVARFLT_lui_objective_fadeEnd = Dvar_RegisterFloat("MKMMKPPTL", 0.0, 0.0, 3.4028235e38, 0, "Distance at which objectives will end fading their opacity from 1 to 0. If the widget is further than this distance, it will be hidden.");
  DVARFLT_lui_objective_stopSnapDistance = Dvar_RegisterFloat("MLOKPTMLQP", 3.4028235e38, 0.0, 3.4028235e38, 0, "Distance at which objectives will stop snapping (clamping) to the side of the screen.");
  DVARFLT_lui_contextual_ping_objective_world_pos_epsilon = Dvar_RegisterFloat("OLQKMRLKRN", 2.5, 0.0, 3.4028235e38, 0, "This value represents HALF the precision epsilon when using world position objectives with the contextual ping system. We allow differences in precision between +/- this value.");
  DVARINT_lui_zeus_upsell_reminder_frequency = Dvar_RegisterInt("NTSOSPRNNN", 1, 0, 10, 0, "During the Zeus upsell event, an upsell reminder will show up in the front-end every X games.");
}

/*
==============
LUI_CoD_RegisterRemoteCommands
==============
*/
void LUI_CoD_RegisterRemoteCommands(void)
{
  Cmd_AddCommandInternal("completeSceneTransition", LUI_CoD_CompleteSceneTransition_f, &LUI_CoD_CompleteSceneTransition_f_VAR);
  Cmd_AddCommandInternal("luiMemoryReport", LUI_CoD_MemoryReport_f, &LUI_CoD_MemoryReport_f_VAR);
  Cmd_AddCommandInternal("luiRefCountReport", LUI_CoD_RefCountReport_f, &LUI_CoD_RefCountReport_f_VAR);
  Cmd_AddCommandInternal("luiCollectGarbage", LUI_CoD_CollectGarbage_f, &LUI_CoD_CollectGarbage_f_VAR);
  Cmd_AddCommandInternal("luiRunTests", LUI_CoD_RunTests_f, &LUI_CoD_RunTests_f_VAR);
  Cmd_AddCommandInternal("luiCloseAll", LUI_CoD_CloseAll_f, &LUI_CoD_CloseAll_f_VAR);
  Cmd_AddCommandInternal("luiOpenMenu", LUI_CoD_OpenMenu_f, &LUI_CoD_OpenMenu_f_VAR);
  Cmd_AddCommandInternal("luiOpenPopup", LUI_CoD_OpenPopup_f, &LUI_CoD_OpenPopup_f_VAR);
  Cmd_AddCommandInternal("luiOpenModalPopup", LUI_CoD_OpenModalPopup_f, &LUI_CoD_OpenModalPopup_f_VAR);
  Cmd_AddCommandInternal("luiReload", LUI_CoD_Reload_f, &LUI_CoD_Reload_f_VAR);
  Cmd_AddCommandInternal("luiRestoreMenu", LUI_CoD_RestoreMenu_f, &LUI_CoD_RestoreMenu_f_VAR);
  Cmd_AddCommandInternal("luiLeaveMenu", LUI_CoD_LeaveMenu_f, &LUI_CoD_LeaveMenu_f_VAR);
  Cmd_AddCommandInternal("luiLeaveMenuByName", LUI_CoD_LeaveMenuByName_f, &LUI_CoD_LeaveMenuByName_f_VAR);
  Cmd_AddCommandInternal("luiSetBoundingBoxes", LUI_CoD_SetBoundingBoxes_f, &LUI_CoD_SetBoundingBoxes_f_VAR);
  Cmd_AddCommandInternal("luiErrorTest", LUI_CoD_ErrorTest_f, &LUI_CoD_ErrorTest_f_VAR);
  Cmd_AddCommandInternal("luiTestFunction", LUI_CoD_TestFunc_f, &LUI_CoD_TestFunc_f_VAR);
  Cmd_AddCommandInternal("luiAttachDebugger", LUI_CoD_AttachDebugger_f, &LUI_CoD_AttachDebugger_f_VAR);
  Cmd_AddCommandInternal("luiDetachDebugger", LUI_CoD_DetachDebugger_f, &LUI_CoD_DetachDebugger_f_VAR);
  Cmd_AddCommandInternal("devDumpLUITweens", LUI_CoD_DumpTweens_f, &LUI_CoD_DumpTweens_f_VAR);
  Cmd_AddCommandInternal("luiDumpElementsFull", LUI_CoD_DumpAllocatedElementsFull_f, &LUI_CoD_DumpAllocatedElementsFull_f_VAR);
  Cmd_AddCommandInternal("luiDumpElements", LUI_CoD_DumpAllocatedElements_f, &LUI_CoD_DumpAllocatedElements_f_VAR);
}

/*
==============
LUI_CoD_RegisterWithExternalSystems
==============
*/
void LUI_CoD_RegisterWithExternalSystems(void)
{
  InviteJoinHSM::RegisterCallbackFromExternalSystem(&g_invitationHSM, (void (__fastcall *)(const int, const InviteJoinHSMResult, const char *))LUI_CoD_OnInviteJoinEvent);
}

/*
==============
LUI_CoD_Reload_f
==============
*/
void LUI_CoD_Reload_f()
{
  bool v0; 
  int i; 

  v0 = Com_FrontEnd_IsInFrontEnd();
  for ( i = 0; i < 2; ++i )
    CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
  LUI_CoD_SaveMenuStack();
  LUI_CoD_Shutdown();
  LUI_CoD_Init(v0, 0);
  if ( s_luaDebugMemory.luiMenuStackCharLen )
  {
    LUI_EnterCriticalSection("LUI_CoD_RestoreMenuStack");
    j_lua_getfield(LUI_luaVM, -10002, "LUI");
    j_lua_getfield(LUI_luaVM, -1, "roots");
    j_lua_getfield(LUI_luaVM, -1, s_fullscreenRootData.name);
    j_lua_getfield(LUI_luaVM, -10002, "RestoreMenuStack");
    j_lua_pushvalue(LUI_luaVM, -2);
    j_lua_pushlstring(LUI_luaVM, s_luaDebugMemory.luiMenuStackReloadScratch, s_luaDebugMemory.luiMenuStackCharLen);
    if ( LuaShared_PCall(LUI_luaVM, 2, 0) )
      LUI_ReportError("Error while restoring menu stack", LUI_luaVM);
    s_luaDebugMemory.luiMenuStackCharLen = 0;
    j_lua_settop(LUI_luaVM, -4);
    if ( j_lua_gettop(LUI_luaVM) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 1320, ASSERT_TYPE_ASSERT, "(lua_gettop( LUI_luaVM ) == 0)", (const char *)&queryFormat, "lua_gettop( LUI_luaVM ) == 0") )
        __debugbreak();
    }
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_CoD_Render
==============
*/
void LUI_CoD_Render(const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  LUIRootData *v3; 

  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 4000, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  if ( LUI_luaVM )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( s_luaInFrontend )
      v3 = &s_fullscreenRootData;
    else
      v3 = &s_rootData[ControllerFromClient];
    if ( v3->inUse )
    {
      CL_Keys_UpdateBindingsUI(localClientNum);
      Profile_Begin(581);
      LUI_CoD_Render_Internal(localClientNum, v3);
      Profile_EndInternal(NULL);
      if ( CL_Keys_IsCatcherActive(localClientNum, 64) || CL_Keys_IsCatcherActive(localClientNum, 512) )
        UI_KeyboardUpdate(localClientNum);
    }
  }
}

/*
==============
LUI_CoD_RenderFrame
==============
*/

void __fastcall LUI_CoD_RenderFrame(const LocalClientNum_t localClientNum, double a2)
{
  GfxBackEndData *v3; 
  __int64 v4; 
  R_RT_ColorHandle *GlobalColor; 
  R_RT_ColorHandle v6; 
  LocalClientNum_t v7; 
  const GfxImage *Image; 
  R_RT_Handle v9; 
  R_RT_Handle v10; 
  R_RT_Image *p_m_image; 
  R_RT_Handle v12; 
  R_RT_ColorHandle result; 
  GfxAsync2DRenderResources resources; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3338, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( LUI_CoD_IsEnabled() )
  {
    if ( s_luiWorkersPending )
    {
      Sys_ProfBeginNamedEvent(0xFFFFA500, "wait for lui workers");
      Sys_WaitWorkerCmdsOfType(WRKCMD_LUI_UPDATE);
      Sys_ProfEndNamedEvent();
      s_luiWorkersPending = 0;
    }
    Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_RenderFrame");
    LUI_EnterCriticalSection("LUI_CoD_RenderFrame");
    LUI_CoD_RenderFrame_Internal(localClientNum);
    LUI_LeaveCriticalSection();
    Sys_ProfEndNamedEvent();
    if ( LUI_Workers_Render_Enabled() )
    {
      v3 = frontEndDataOut;
      if ( !frontEndDataOut->viewInfoCount )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3357, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfoCount)", (const char *)&queryFormat, "frontEndDataOut->viewInfoCount") )
          __debugbreak();
        v3 = frontEndDataOut;
      }
      v4 = (__int64)&v3->viewInfo[v3->viewInfoIndex];
      if ( *(_QWORD *)(v4 + 3640) )
      {
        v3->async2D.renderPending = 1;
        frontEndDataOut->async2D.renderReceivePPFXPending = *(_QWORD *)(v4 + 3656) != 0i64;
        R_TG_SetupPhase((GfxViewInfo *)v4, frontEndDataOut->smpFrame, 4u);
        if ( (*(_DWORD *)(v4 + 15540) & 0x100) == 0 )
        {
          memset_0(&resources.sceneColor, 0, 0x60ui64);
          GlobalColor = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
          v6 = *(R_RT_ColorHandle *)(v4 + 12480);
          v7 = *(_DWORD *)(v4 + 11716);
          resources.displayColor = *GlobalColor;
          resources.sceneDepth = *(R_RT_DepthHandle *)(v4 + 12704);
          resources.sceneColor = v6;
          Image = R_UniversalClut_GetImage(v7, MOVEMENT);
          v9 = *(R_RT_Handle *)(v4 + 13280);
          v10 = *(R_RT_Handle *)(v4 + 13248);
          resources.universalClut = Image;
          resources.packedStencil = v10;
          v12 = v9;
          if ( LOWORD(a2) )
          {
            R_RT_Handle::GetSurface(&v12);
            p_m_image = &R_RT_Handle::GetSurface(&v12)->m_image;
          }
          else
          {
            if ( v12.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v12.m_surfaceID) )
              __debugbreak();
            p_m_image = (R_RT_Image *)rgp.blackImage;
          }
          resources.resolvedScene = &p_m_image->m_base;
          resources.exposureBuffer = R_Tonemap_GetConstantBuffer((const GfxViewInfo *)v4);
          if ( frontEndDataOut->async2D.renderReceivePPFXPending )
            LUI_Workers_AddRenderWorker((const GfxViewInfo *)v4, &resources, 1);
          LUI_Workers_AddRenderWorker((const GfxViewInfo *)v4, &resources, 0);
        }
      }
    }
  }
}

/*
==============
LUI_CoD_RenderFrame_Internal
==============
*/
void LUI_CoD_RenderFrame_Internal(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  unsigned __int64 v3; 
  __int64 v4; 
  float v5; 
  float v6; 
  int v7; 
  float v8; 
  const dvar_t *v9; 

  v1 = DCONST_DVARBOOL_lui_enabled;
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3255, ASSERT_TYPE_ASSERT, "(LUI_CoD_RunFrameEnabled())", (const char *)&queryFormat, "LUI_CoD_RunFrameEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3256, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  s_inLUIRenderFrame = 1;
  v3 = Sys_Microseconds();
  if ( Sys_IsMainThread() )
  {
    Profile_Begin(575);
    DB_BeginDrawFrame();
    Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_Render");
    LUI_CoD_Render(localClientNum);
    Sys_ProfEndNamedEvent();
    DB_EndDrawFrame();
    Profile_EndInternal(NULL);
  }
  else
  {
    LUI_CoD_Render(localClientNum);
  }
  v4 = Sys_Microseconds() - v3;
  v5 = (float)v4;
  if ( v4 < 0 )
  {
    v6 = (float)v4;
    v5 = v6 + 1.8446744e19;
  }
  v7 = s_luiLastUpdateFrameDuration_nextIndex;
  v8 = (float)(v5 * 0.001) + s_luiUpdateFrameInternalDuration;
  s_luiLastUpdateFrameDuration[s_luiLastUpdateFrameDuration_nextIndex] = v8;
  s_luiLastUpdateFrameDuration_nextIndex = (v7 + 1) % 32;
  if ( !s_luaInFrontend )
  {
    v9 = DCONST_DVARFLT_lui_reportPerfThresholdMS;
    if ( !DCONST_DVARFLT_lui_reportPerfThresholdMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_reportPerfThresholdMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v8 > v9->current.value )
      Com_PrintWarning(13, "LUI frame time: %4.2fms\n", v8);
  }
  s_inLUIRenderFrame = 0;
}

/*
==============
LUI_CoD_Render_Internal
==============
*/
void LUI_CoD_Render_Internal(const LocalClientNum_t localClientNum, LUIRootData *rootData)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  float displayWidth; 
  float displayHeight; 
  int v14; 
  int LocalClientActiveCount; 
  const dvar_t *v16; 
  const ScreenPlacement *ActivePlacement; 
  GfxPointVertex verts; 
  float v19; 
  int v20; 
  unsigned __int8 v21[4]; 
  float v22; 
  int v23; 
  unsigned __int8 v24[4]; 
  float v25; 
  int v26; 
  unsigned __int8 v27[4]; 
  float v28; 
  int v29; 
  unsigned __int8 v30[4]; 
  int v31; 
  int v32; 
  unsigned __int8 v33[4]; 
  int v34; 
  int v35; 
  unsigned __int8 v36[4]; 
  int v37; 
  int v38; 
  unsigned __int8 v39[4]; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  LUI_Render(localClientNum, rootData, LUI_luaVM);
  if ( ui_safearea->current.enabled )
  {
    v44 = v2;
    v43 = v3;
    v42 = v4;
    v41 = v5;
    displayWidth = (float)cls.vidConfig.displayWidth;
    displayHeight = (float)cls.vidConfig.displayHeight;
    _XMM8 = 0i64;
    __asm { vroundss xmm8, xmm8, xmm1, 1 }
    _XMM6 = 0i64;
    __asm { vroundss xmm6, xmm6, xmm1, 1 }
    v40 = v6;
    *(float *)&v14 = displayHeight - *(float *)&_XMM6;
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    if ( LocalClientActiveCount >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6467, ASSERT_TYPE_ASSERT, "(clientActiveCount < 3)", (const char *)&queryFormat, "clientActiveCount < 3") )
      __debugbreak();
    if ( LocalClientActiveCount == 2 && !Com_FrontEnd_IsInFrontEnd() && localClientNum == LOCAL_CLIENT_1 )
    {
      *(float *)&_XMM6 = *(float *)&_XMM6 - (float)(displayHeight * 0.5);
      *(float *)&v14 = *(float *)&v14 - (float)(displayHeight * 0.5);
    }
    verts.xyz.v[0] = *(float *)&_XMM8;
    verts.xyz.v[1] = *(float *)&_XMM6;
    Byte4PackVertexColor(&colorRed, verts.color);
    v19 = displayWidth - *(float *)&_XMM8;
    v20 = _XMM6;
    Byte4PackVertexColor(&colorRed, v21);
    v22 = displayWidth - *(float *)&_XMM8;
    v23 = _XMM6;
    Byte4PackVertexColor(&colorRed, v24);
    v25 = displayWidth - *(float *)&_XMM8;
    v26 = v14;
    Byte4PackVertexColor(&colorRed, v27);
    v28 = displayWidth - *(float *)&_XMM8;
    v29 = v14;
    Byte4PackVertexColor(&colorRed, v30);
    v31 = _XMM8;
    v32 = v14;
    Byte4PackVertexColor(&colorRed, v33);
    v34 = _XMM8;
    v35 = v14;
    Byte4PackVertexColor(&colorRed, v36);
    v37 = _XMM8;
    v38 = _XMM6;
    Byte4PackVertexColor(&colorRed, v39);
    R_AddCmdDrawLines2D(4u, 2u, &verts);
  }
  LUI_CoD_DrawMemoryReport(localClientNum);
  LUI_CoD_DrawMemoryGraph(localClientNum);
  LUI_CoD_DrawStackMenuNames(localClientNum);
  LUI_CoD_DrawLuiDynIconStreamerInfo(localClientNum);
  LUI_CoD_DrawLuiStreamedImageList(localClientNum);
  LUI_CoD_DrawAttachmentsReference(localClientNum);
  LUI_CoD_DrawFrontendWeaponModelName(localClientNum);
  v16 = DVARBOOL_lui_drawFocusChain;
  if ( !DVARBOOL_lui_drawFocusChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_drawFocusChain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
  {
    if ( s_focusChainInfo.chainStr[0] )
    {
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      UI_DrawText(ActivePlacement, s_focusChainInfo.chainStr, 4096, cls.smallDevFont, 20.0, 200.0, 1, 1, 0.2, &colorWhite, 8);
    }
  }
}

/*
==============
LUI_CoD_ResizeRoot
==============
*/
void LUI_CoD_ResizeRoot(LUIRootData *rootData, float left, float top, float right, float bottom)
{
  char *name; 
  float topResult; 

  topResult = top;
  name = rootData->name;
  if ( rootData == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2118, ASSERT_TYPE_ASSERT, "(rootData->name)", (const char *)&queryFormat, "rootData->name") )
    __debugbreak();
  LUI_CoD_AdjustRootAspectRatio(left, top, right, bottom, &topResult, &bottom, &rootData->projectionMatrix);
  LUI_Resize(name, left, topResult, right, bottom, 1.0, LUI_luaVM);
}

/*
==============
LUI_CoD_ResizeRoots
==============
*/
void LUI_CoD_ResizeRoots(void)
{
  bool *p_inUse; 
  int v1; 
  LUIRootData *v2; 
  const ClientViewParams *LocalClientViewParams; 
  float displayWidth; 
  float v5; 
  float displayHeight; 
  float v7; 
  float v8; 
  float v9; 
  LocalClientNum_t outLocalClientNum; 

  LUI_EnterCriticalSection("LUI_CoD_ResizeRoots");
  j_lua_gc(LUI_luaVM, 2, 0);
  p_inUse = &s_rootData[0].inUse;
  v1 = 0;
  v2 = s_rootData;
  do
  {
    Com_sprintf(v2->name, 0x20ui64, "UIRoot%d", (unsigned int)v1);
    if ( *p_inUse && CL_Mgr_IsControllerMappedToClient(v1, &outLocalClientNum) )
    {
      LocalClientViewParams = CG_GetLocalClientViewParams(outLocalClientNum);
      displayWidth = (float)cls.vidConfig.displayWidth;
      v5 = displayWidth * LocalClientViewParams->width;
      displayHeight = (float)cls.vidConfig.displayHeight;
      v7 = displayHeight * LocalClientViewParams->height;
      if ( LUI_CoD_UsingSplitscreenUpscaling() )
      {
        v5 = v5 * 1.6666666;
        v7 = v7 * 1.6666666;
      }
      LUI_CoD_ResizeRoot(v2, 0.0, 0.0, v5, v7);
    }
    ++v1;
    ++v2;
    p_inUse += 464;
  }
  while ( v1 < 8 );
  if ( s_fullscreenRootData.inUse )
  {
    v8 = (float)cls.vidConfig.displayHeight;
    v9 = (float)cls.vidConfig.displayWidth;
    LUI_CoD_ResizeRoot(&s_fullscreenRootData, 0.0, 0.0, v9, v8);
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_Restart
==============
*/
void LUI_CoD_Restart(bool errorRecovery)
{
  int i; 
  bool v3; 

  for ( i = 0; i < 2; ++i )
    CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
  LUI_CoD_Shutdown();
  v3 = Com_FrontEnd_IsInFrontEnd();
  LUI_CoD_Init(v3, errorRecovery);
}

/*
==============
LUI_CoD_RestoreMenu_f
==============
*/
void LUI_CoD_RestoreMenu_f()
{
  const char *v0; 
  const char *v1; 
  lua_State *luaVM; 
  const char *v3; 
  LocalClientNum_t v4; 
  int ControllerFromClient; 

  if ( Cmd_Argc() >= 1 )
  {
    v1 = Cmd_Argv(1);
    luaVM = LUI_luaVM;
    v3 = v1;
    v4 = Cmd_LocalClientNum();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(v4);
    LUI_RestoreMenu(ControllerFromClient, v3, 0, 0, luaVM);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_RunNoClientFrame
==============
*/
void LUI_CoD_RunNoClientFrame(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 

  if ( !Sys_IsUpdateScreenThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3394, ASSERT_TYPE_ASSERT, "(Sys_IsUpdateScreenThread())", (const char *)&queryFormat, "Sys_IsUpdateScreenThread()") )
    __debugbreak();
  if ( LUI_CoD_IsEnabled() )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_RunNoClientFrame");
    if ( Sys_IsMainThread() )
    {
      LUI_EnterCriticalSection("LUI_CoD_RunNoClientFrame");
    }
    else if ( !LUI_TryEnterCriticalSection("LUI_CoD_RunNoClientFrame") )
    {
LABEL_9:
      Sys_ProfEndNamedEvent();
      return;
    }
    v2 = Sys_Milliseconds();
    Material_SetTextureAtlasTime(v2);
    R_ClearClientCmdList2D();
    LUI_CoD_UpdateFrame_Internal(localClientNum, 0);
    LUI_CoD_RenderFrame_Internal(localClientNum);
    LUI_LeaveCriticalSection();
    goto LABEL_9;
  }
}

/*
==============
LUI_CoD_RunTests_f
==============
*/
void LUI_CoD_RunTests_f()
{
  lua_State *v0; 
  LocalClientNum_t v1; 
  int ControllerFromClient; 

  LUI_LoadLuaFile("menus.LUITest", LUI_luaVM);
  v0 = LUI_luaVM;
  v1 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
  LUI_AddMenu(ControllerFromClient, "LUITest", v0);
}

/*
==============
LUI_CoD_SPModeSaveDataError
==============
*/
void LUI_CoD_SPModeSaveDataError(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "campaign_mode_savedata_error", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_SaveComplete
==============
*/
void LUI_CoD_SaveComplete(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "save_complete", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_SaveError
==============
*/
void LUI_CoD_SaveError(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "save_error", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_SaveMenuStack
==============
*/
void LUI_CoD_SaveMenuStack()
{
  const char *v0; 
  unsigned int v1; 
  unsigned __int64 len; 

  if ( LUI_luaVM )
  {
    if ( s_luaDebugMemory.luiMenuStackCharLen )
    {
      Com_Printf(13, "LUI: Not saving menu stack since there was one previously saved, probably due to mychanges.\n");
    }
    else if ( s_luaInFrontend )
    {
      LUI_EnterCriticalSection("LUI_CoD_SaveMenuStack");
      if ( LUI_luaVM )
      {
        j_lua_getfield(LUI_luaVM, -10002, "LUI");
        j_lua_getfield(LUI_luaVM, -1, "roots");
        j_lua_getfield(LUI_luaVM, -1, s_fullscreenRootData.name);
        if ( !j_lua_isuserdata(LUI_luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 1255, ASSERT_TYPE_ASSERT, "(lua_isuserdata( LUI_luaVM, -1))", (const char *)&queryFormat, "lua_isuserdata( LUI_luaVM, -1)") )
          __debugbreak();
        j_lua_getfield(LUI_luaVM, -10002, "SaveMenuStack");
        if ( j_lua_type(LUI_luaVM, -1) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 1257, ASSERT_TYPE_ASSERT, "((lua_type(LUI_luaVM, (-1)) == 6))", (const char *)&queryFormat, "lua_isfunction( LUI_luaVM, -1)") )
          __debugbreak();
        j_lua_pushvalue(LUI_luaVM, -2);
        s_luaDebugMemory.luiMenuStackCharLen = 0;
        if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
        {
          LUI_ReportError("Error saving root", LUI_luaVM);
        }
        else
        {
          if ( j_lua_isstring(LUI_luaVM, -1) )
          {
            v0 = j_lua_tolstring(LUI_luaVM, -1, &len);
            v1 = len;
            if ( len < 0x2800 )
            {
              memcpy_0(s_luaDebugMemory.luiMenuStackReloadScratch, v0, len);
              s_luaDebugMemory.luiMenuStackCharLen = v1;
            }
          }
          else
          {
            Com_PrintError(13, "Could not save menu state, not enough scratch space!");
          }
          j_lua_settop(LUI_luaVM, -2);
        }
        j_lua_settop(LUI_luaVM, -4);
      }
      LUI_LeaveCriticalSection();
    }
    else
    {
      Com_Printf(13, "LUI: Not saving menu stack since we're not in the frontend.\n");
    }
  }
}

/*
==============
LUI_CoD_SendOverIndulgenceNotification
==============
*/
void LUI_CoD_SendOverIndulgenceNotification(LocalClientNum_t localClientNum, int nbHour)
{
  __int64 v2; 

  v2 = nbHour;
  if ( LUI_BeginEvent(localClientNum, "send_toast_notification", LUI_luaVM) )
  {
    LUI_BeginTable("options", 0, 1, LUI_luaVM);
    LUI_SetTableString("genEventName", "genOverIndulgenceNotice", LUI_luaVM);
    LUI_SetTableInt("hours", v2, LUI_luaVM);
    LUI_SetTableBool("wordWrap", 1, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_SetBoundingBoxes_f
==============
*/
void LUI_CoD_SetBoundingBoxes_f()
{
  const char *v0; 
  int v1; 

  if ( Cmd_Argc() >= 1 )
  {
    v1 = Cmd_ArgInt(1);
    LUI_SetDrawDebugBounds(v1 != 0);
  }
  else
  {
    v0 = Cmd_Argv(0);
    Com_PrintError(15, "Not enough arguments for \"%s\".\n", v0);
  }
}

/*
==============
LUI_CoD_SetCurrentLocalClient
==============
*/
void LUI_CoD_SetCurrentLocalClient(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  if ( s_luaInFrontend || (ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum), s_currentLocalClientRoot = localClientNum, !s_rootData[ControllerFromClient].inUse) )
    s_currentLocalClientRoot = LOCAL_CLIENT_INVALID;
}

/*
==============
LUI_CoD_SetFocusChainInfo
==============
*/
void LUI_CoD_SetFocusChainInfo(const char *chainInfo)
{
  Core_strcpy(s_focusChainInfo.chainStr, 0x1000ui64, chainInfo);
}

/*
==============
LUI_CoD_SetFrontendCinematicState
==============
*/
void LUI_CoD_SetFrontendCinematicState(const char *cinematicName, int playbackFlags, unsigned int startOffsetMSec)
{
  if ( !cinematicName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7718, ASSERT_TYPE_ASSERT, "(cinematicName)", (const char *)&queryFormat, "cinematicName") )
    __debugbreak();
  Core_strcpy(s_luiFrontendCinematicState.name, 0x40ui64, cinematicName);
  s_luiFrontendCinematicState.playbackFlags = playbackFlags;
  s_luiFrontendCinematicState.startOffsetMSec = startOffsetMSec;
}

/*
==============
LUI_CoD_SetHasShownSplashScreens
==============
*/
void LUI_CoD_SetHasShownSplashScreens(void)
{
  s_hasShownSplashScreen = 1;
}

/*
==============
LUI_CoD_SetKeyCatcher
==============
*/
void LUI_CoD_SetKeyCatcher(const LocalClientNum_t localClientNum, bool enable)
{
  if ( enable )
    CL_Keys_AddCatcher(localClientNum, 64);
  else
    CL_Keys_RemoveCatcher(localClientNum, -65);
}

/*
==============
LUI_CoD_SetLastDeactivateClientsReason
==============
*/
void LUI_CoD_SetLastDeactivateClientsReason(const char *reason)
{
  if ( LUI_CoD_LUIRootDLogEnabled() )
  {
    Core_strcpy(s_lastDeactivateClientReason, 0x40ui64, reason);
    if ( LiveStorage_IsTimeSynced() )
      s_lastDeactivateClientTimestamp = LiveStorage_GetUTC();
    else
      s_lastDeactivateClientTimestamp = 0;
  }
}

/*
==============
LUI_CoD_SetWaitingForKeyBind
==============
*/
void LUI_CoD_SetWaitingForKeyBind(LocalClientNum_t localClientNum, InputContext inputContext, Bind action, CL_KeyBindSlot slot)
{
  s_luaWaitingForKeyBind[localClientNum] = 1;
  s_luaKeyBindInputContext[localClientNum] = inputContext;
  s_luaBind[localClientNum] = action;
  s_luaKeyBindSlot[localClientNum] = slot;
}

/*
==============
LUI_CoD_Shutdown
==============
*/
void LUI_CoD_Shutdown(void)
{
  lua_State *v0; 
  int *p_textEditRef; 
  int i; 
  LocalClientNum_t ClientFromController; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  LUI_Interface_DebugPrint("%s\n", "LUI_CoD_Shutdown");
  LUI_EnterCriticalSection("LUI_CoD_Shutdown");
  LUI_CoD_DetachDebugger();
  v0 = LUI_luaVM;
  if ( LUI_luaVM )
  {
    p_textEditRef = &s_perController[0].textEditRef;
    for ( i = 0; i < 8; ++i )
    {
      if ( *p_textEditRef != -2 )
      {
        LUI_UnrefVerify<int (lua_State *,int)>(v0, -10000, *p_textEditRef, j_lua_isuserdata);
        LUI_Ref_Monitor_RemoveRef(LUI_luaVM, -10000, *p_textEditRef);
        *p_textEditRef = -2;
        g_editingField = 0;
        ClientFromController = CL_Mgr_GetClientFromController(i);
        v4 = ClientFromController;
        if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v6) = 2;
          LODWORD(v5) = ClientFromController;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        clientUIActives[v4].keyCatchers ^= 0x200u;
        v0 = LUI_luaVM;
      }
      p_textEditRef += 8;
    }
  }
  s_luiFrontendCinematicState.name[0] = 0;
  *(_QWORD *)&s_luiFrontendCinematicState.playbackFlags = 0i64;
  s_luaInFrontend = 0;
  LUI_Shutdown();
  s_luaExtraSplitscreenMemory = NULL;
  s_luaExtraSplitscreenMemoryInUse = 0;
  s_luaESportsShipMemory = NULL;
  s_luaESportsShipMemoryInUse = 0;
  s_luaExtraSinglePlayerMemory = NULL;
  s_luaExtraSinglePlayerMemoryInUse = 0;
  s_luaExtraMultiPlayerMemory = NULL;
  s_luaExtraMultiPlayerMemoryInUse = 0;
  s_luaInFrontend = 0;
  s_luaMemoryInUse = 0;
  s_luaExtraDbgSymbolMemoryInUse = 0;
  s_luaExtraFrontendMemoryInUse = 0;
  s_lui_profBeginCount = 0;
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_ShutdownAndFreeExtraFrontendMemory
==============
*/
void LUI_CoD_ShutdownAndFreeExtraFrontendMemory(void)
{
  LUI_EnterCriticalSection("LUI_CoD_ShutdownAndFreeExtraFrontendMemory");
  if ( s_luaInFrontend )
    LUI_CoD_Shutdown();
  if ( s_luaExtraFrontendMemoryInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2019, ASSERT_TYPE_ASSERT, "(!s_luaExtraFrontendMemoryInUse)", (const char *)&queryFormat, "!s_luaExtraFrontendMemoryInUse") )
    __debugbreak();
  s_luaExtraFrontendMemory = NULL;
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_SnapQuadVerts
==============
*/
void LUI_CoD_SnapQuadVerts(vec4_t (*quadVerts)[4])
{
  unsigned int v4; 
  unsigned int v7; 
  float v9; 

  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6314, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts") )
    __debugbreak();
  _XMM6 = 0i64;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  v4 = (int)*(float *)&_XMM3;
  __asm
  {
    vroundss xmm1, xmm6, xmm3, 1
    vroundss xmm3, xmm6, xmm2, 1
  }
  (*quadVerts)[0].v[0] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM3).m128_f32[0];
  v7 = (int)*(float *)&_XMM1;
  __asm { vroundss xmm1, xmm6, xmm2, 1 }
  (*quadVerts)[0].v[1] = _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM1).m128_f32[0];
  v9 = _mm_cvtepi32_ps((__m128i)v4).m128_f32[0];
  (*quadVerts)[1].v[0] = v9 + (*quadVerts)[0].v[0];
  (*quadVerts)[1].v[1] = (*quadVerts)[0].v[1];
  (*quadVerts)[2].v[0] = v9 + (*quadVerts)[0].v[0];
  *(float *)&_XMM3 = _mm_cvtepi32_ps((__m128i)v7).m128_f32[0];
  (*quadVerts)[2].v[1] = *(float *)&_XMM3 + (*quadVerts)[0].v[1];
  (*quadVerts)[3].v[0] = (*quadVerts)[0].v[0];
  (*quadVerts)[3].v[1] = *(float *)&_XMM3 + (*quadVerts)[0].v[1];
}

/*
==============
LUI_CoD_TestFunc_f
==============
*/
void LUI_CoD_TestFunc_f()
{
  LocalClientNum_t v0; 

  LUI_EnterCriticalSection("LUI_CoD_TestFunc_f");
  if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0)].inUse )
    v0 = LOCAL_CLIENT_INVALID;
  else
    v0 = LOCAL_CLIENT_0;
  s_currentLocalClientRoot = v0;
  j_lua_getfield(LUI_luaVM, -10002, "LUITestFunction");
  if ( j_lua_pcall(LUI_luaVM, 0, 0, 0) )
    LUI_ReportError("Error running LUITestFunction\n", LUI_luaVM);
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_TitleUpdateAvailable
==============
*/
void LUI_CoD_TitleUpdateAvailable(const LocalClientNum_t *localClientNum)
{
  ;
}

/*
==============
LUI_CoD_Unpause
==============
*/
void LUI_CoD_Unpause(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "unpause", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_UnpausedByCodcaster
==============
*/
void LUI_CoD_UnpausedByCodcaster(LocalClientNum_t localClientNum)
{
  if ( LUI_BeginEvent(localClientNum, "game_unpaused", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
LUI_CoD_UnregisterGameDvars
==============
*/
void LUI_CoD_UnregisterGameDvars(void)
{
  DCONST_DVARMPFLT_lui_parallax_view_sway_rate = Dvar_Deregister(DCONST_DVARMPFLT_lui_parallax_view_sway_rate);
  DCONST_DVARMPFLT_lui_parallax_anim_sway_rate = Dvar_Deregister(DCONST_DVARMPFLT_lui_parallax_anim_sway_rate);
  DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view = Dvar_Deregister(DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view);
  DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence = Dvar_Deregister(DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence);
  DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate = Dvar_Deregister(DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate);
  DCONST_DVARMPFLT_lui_parallax_scale = Dvar_Deregister(DCONST_DVARMPFLT_lui_parallax_scale);
  DVARBOOL_lui_drawHUDMap = Dvar_Deregister(DVARBOOL_lui_drawHUDMap);
  DCONST_DVARSTR_hint_button_defaultIconMaterial = Dvar_Deregister(DCONST_DVARSTR_hint_button_defaultIconMaterial);
  DCONST_DVARMPINT_lui_lootCard_shortInteractDistance = Dvar_Deregister(DCONST_DVARMPINT_lui_lootCard_shortInteractDistance);
  DCONST_DVARMPINT_lui_lootCard_mediumInteractDistance = Dvar_Deregister(DCONST_DVARMPINT_lui_lootCard_mediumInteractDistance);
  DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod = Dvar_Deregister(DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod);
  DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale = Dvar_Deregister(DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale);
  DVARBOOL_lui_objective_fade_enabled = Dvar_Deregister(DVARBOOL_lui_objective_fade_enabled);
  DVARFLT_lui_objective_fadeStart = Dvar_Deregister(DVARFLT_lui_objective_fadeStart);
  DVARFLT_lui_objective_fadeEnd = Dvar_Deregister(DVARFLT_lui_objective_fadeEnd);
  DVARFLT_lui_objective_stopSnapDistance = Dvar_Deregister(DVARFLT_lui_objective_stopSnapDistance);
  DVARFLT_lui_contextual_ping_objective_world_pos_epsilon = Dvar_Deregister(DVARFLT_lui_contextual_ping_objective_world_pos_epsilon);
  DVARINT_lui_zeus_upsell_reminder_frequency = Dvar_Deregister(DVARINT_lui_zeus_upsell_reminder_frequency);
}

/*
==============
LUI_CoD_UnsetMouse
==============
*/
void LUI_CoD_UnsetMouse(LocalClientNum_t localClientNum)
{
  __int64 ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  s_perController[ControllerFromClient].lastMouseX = -1000.0;
  s_perController[ControllerFromClient].lastMouseY = -1000.0;
}

/*
==============
LUI_CoD_UpdateActiveState
==============
*/
void LUI_CoD_UpdateActiveState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const dvar_t *v4; 
  float value; 
  int v6; 
  int v7; 
  int lastUpdateTime; 
  int deltaTime; 
  int v10; 
  int ServerTime; 
  int lastUpdateGameTime; 
  int deltaGameTime; 
  int v14; 
  int v15; 
  LUIElement *RootForController; 
  int v17; 
  LUIRootData *v18; 
  tmat44_t<vec4_t> *p_parallaxMatrix; 
  lua_State *v20; 
  int v21; 
  LUIElement *v22; 
  LUIRootData *v23; 
  __int64 v24; 
  __int64 v25; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateActiveState");
  LUI_Interface_CheckLowMemory(LUI_luaVM);
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateDeltaTime");
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  v4 = DCONST_DVARFLT_lui_timescale;
  if ( !DCONST_DVARFLT_lui_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_timescale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = Sys_Milliseconds();
  v7 = v6;
  lastUpdateTime = RootDataForController->lastUpdateTime;
  if ( lastUpdateTime <= 0 )
  {
    deltaTime = RootDataForController->deltaTime;
  }
  else
  {
    deltaTime = v6 - lastUpdateTime;
    RootDataForController->deltaTime = v6 - lastUpdateTime;
  }
  v10 = (int)(float)((float)deltaTime * value);
  if ( v10 < 0 )
    v10 = 0;
  RootDataForController->deltaTime = v10;
  RootDataForController->lastUpdateTime = v7;
  ServerTime = Game_GetServerTime((const LocalClientNum_t)v1);
  lastUpdateGameTime = RootDataForController->lastUpdateGameTime;
  if ( lastUpdateGameTime <= 0 )
  {
    deltaGameTime = RootDataForController->deltaGameTime;
  }
  else
  {
    deltaGameTime = ServerTime - lastUpdateGameTime;
    RootDataForController->deltaGameTime = ServerTime - lastUpdateGameTime;
  }
  v14 = (int)(float)((float)deltaGameTime * value);
  if ( v14 < 0 )
    v14 = 0;
  RootDataForController->deltaGameTime = v14;
  RootDataForController->lastUpdateGameTime = ServerTime;
  Sys_ProfEndNamedEvent();
  if ( LUI_luaVM )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallax");
    Sys_ProfBeginNamedEvent(0xFF008008, "Calculate Parallax Offset");
    v15 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    RootForController = LUI_GetRootForController(v15);
    v17 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    v18 = LUI_CoD_GetRootDataForController(v17);
    p_parallaxMatrix = &v18->parallaxMatrix;
    if ( !v18->parallaxSource[0] )
      LUI_Matrix_LoadIdentity(&v18->parallaxMatrix);
    LUI_SetCurrentParallaxMatrix(p_parallaxMatrix);
    Sys_ProfEndNamedEvent();
    if ( s_luaInFrontend )
    {
      LUI_CoD_UpdateParallaxMenu((LocalClientNum_t)v1, RootForController);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v25) = 2;
        LODWORD(v24) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !clientUIActives[v1].frontEndSceneState[0] && clientUIActives[v1].cgameInitialized )
      {
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v25) = 2;
          LODWORD(v24) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        if ( (int)v1 < cg_t::ms_allocatedCount )
          LUI_CoD_UpdateParallaxHUDHelmet((LocalClientNum_t)v1, RootForController);
      }
      Sys_ProfEndNamedEvent();
    }
  }
  v20 = LUI_luaVM;
  if ( LUI_luaVM )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_Animate");
    v21 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    v22 = LUI_GetRootForController(v21);
    v23 = LUI_CoD_GetRootDataForController(v21);
    LUIElement_Animate(v22, v23->deltaTime, v23->deltaGameTime, 0, v20);
    LUI_Tween_RunCallbacks(v20);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_CoD_UpdateFrame
==============
*/
void LUI_CoD_UpdateFrame(const LocalClientNum_t localClientNum)
{
  LocalClientNum_t data; 

  if ( !cls.uiStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3228, ASSERT_TYPE_ASSERT, "(cls.uiStarted)", (const char *)&queryFormat, "cls.uiStarted") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3229, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( LUI_CoD_IsEnabled() )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_UpdateFrame");
    LUI_EnterCriticalSection("LUI_CoD_UpdateFrame");
    LUI_CoD_UpdateFrame_Internal(localClientNum, 1);
    LUI_LeaveCriticalSection();
    Sys_ProfEndNamedEvent();
    if ( s_luiWorkersPending )
    {
      data = localClientNum;
      Sys_AddWorkerCmd(WRKCMD_LUI_UPDATE, &data);
    }
  }
}

/*
==============
LUI_CoD_UpdateFrame_Internal
==============
*/
void LUI_CoD_UpdateFrame_Internal(const LocalClientNum_t localClientNum, const bool checkUseWorkers)
{
  const dvar_t *v2; 
  int v4; 
  int *Value; 
  __int64 v6; 
  _DWORD *v7; 
  unsigned __int64 v8; 
  int PendingComError; 
  const dvar_t *v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  _JBTYPE *LongJmp; 
  __int64 v15; 
  __int64 v16; 
  int lockLevel; 

  v2 = DCONST_DVARBOOL_lui_enabled;
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3067, ASSERT_TYPE_ASSERT, "(LUI_CoD_RunFrameEnabled())", (const char *)&queryFormat, "LUI_CoD_RunFrameEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3068, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  if ( *(_QWORD *)s_tlsf_lua.canaryBytesBegin != *(_QWORD *)"abcdefgh" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3073, ASSERT_TYPE_ASSERT, "(I_memcmp( s_tlsf_lua.canaryBytesBegin, \"abcdefgh\", 8 ) == 0)", "%s\n\ts_tlsf_lua canaryBytes have been corrupted", "I_memcmp( s_tlsf_lua.canaryBytesBegin, \"abcdefgh\", 8 ) == 0") )
    __debugbreak();
  if ( *(_QWORD *)s_tlsf_lua.canaryBytesEnd != *(_QWORD *)"hgfedcba" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3074, ASSERT_TYPE_ASSERT, "(I_memcmp( s_tlsf_lua.canaryBytesEnd, \"hgfedcba\", 8 ) == 0)", "%s\n\ts_tlsf_lua canaryBytes have been corrupted", "I_memcmp( s_tlsf_lua.canaryBytesEnd, \"hgfedcba\", 8 ) == 0") )
    __debugbreak();
  s_inLUIFrame = 1;
  LUI_QuadCache_ClearDrawList(localClientNum);
  v4 = 0;
  lockLevel = g_lui_lock_level;
  s_luiWorkersPending = 0;
  if ( s_lui_profBeginCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3083, ASSERT_TYPE_ASSERT, "( s_lui_profBeginCount ) == ( 0 )", "%s == %s\n\t%i, %i", "s_lui_profBeginCount", "0", s_lui_profBeginCount, 0i64) )
    __debugbreak();
  if ( setjmp(s_longJumpBuffer) )
  {
    for ( ; s_lui_profBeginCount; --s_lui_profBeginCount )
      Profile_EndInternal(NULL);
    Profile_Recover(2);
    s_inLUIFrame = 0;
    if ( s_luiWorkersPending && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3103, ASSERT_TYPE_ASSERT, "(!s_luiWorkersPending)", (const char *)&queryFormat, "!s_luiWorkersPending") )
      __debugbreak();
    Com_SetErrorMessage(g_lui_last_error_msg);
    memset_0(g_lui_last_error_msg, 0, sizeof(g_lui_last_error_msg));
    if ( com_unattendedMode && com_unattendedMode->current.enabled )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444658E0, 543i64);
    }
    else
    {
      LUI_CoD_Error_Recover(lockLevel);
      if ( Sys_IsMainThread() )
        DB_EndDrawFrame();
    }
  }
  else
  {
    Value = (int *)Sys_GetValue(0);
    v6 = Value[8914];
    if ( (_DWORD)v6 && *(_QWORD *)&Value[4 * v6 + 8784] > *((_QWORD *)Value + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
      __debugbreak();
    if ( (unsigned int)Value[8914] >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = Value[8914];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( Value[8914] > 0 )
    {
      v7 = Value + 8786;
      do
      {
        if ( *v7 == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
          __debugbreak();
        ++v4;
        v7 += 4;
      }
      while ( v4 < Value[8914] );
    }
    if ( *((_QWORD *)Value + 261) < (unsigned __int64)(Value + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    Value[4 * Value[8914] + 8786] = 2;
    *(_QWORD *)&Value[4 * Value[8914]++ + 8788] = *((_QWORD *)Value + 261);
    v8 = Sys_Microseconds();
    if ( Sys_IsMainThread() )
    {
      Profile_Begin(575);
      ++s_lui_profBeginCount;
      DB_BeginDrawFrame();
      PendingComError = LUI_Workers_GetPendingComError();
      if ( PendingComError )
      {
        if ( LUI_Workers_IsRunningCmd() )
        {
          LUI_Workers_SetPendingComError(PendingComError);
          LongJmp = (_JBTYPE *)LUI_Workers_GetLongJmp();
          longjmp_0(LongJmp, 1);
        }
        if ( s_inLUIRenderFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2899, ASSERT_TYPE_ASSERT, "(!s_inLUIRenderFrame)", (const char *)&queryFormat, "!s_inLUIRenderFrame") )
          __debugbreak();
        if ( s_inLUIFrame )
          longjmp_0(s_longJumpBuffer, 1);
        LUI_CoD_Error_Recover(0);
      }
      if ( checkUseWorkers && LUI_Workers_Active() )
      {
        LUI_Workers_PreUpdate(localClientNum);
        s_luiWorkersPending = 1;
      }
      else
      {
        v10 = DVARBOOL_splitscreen;
        if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v10->current.enabled )
          LUI_CoD_SetCurrentLocalClient(localClientNum);
        LUI_CoD_UpdateActiveState(localClientNum);
        LUIBinding::FrameUpdate(localClientNum);
        if ( localClientNum == LOCAL_CLIENT_0 )
          LUI_Model_NotifyPendingSubscriptions();
        LUITraceRunner::Frame(localClientNum);
        Profile_Begin(579);
        ++s_lui_profBeginCount;
        if ( LUI_BeginCachedEvent(localClientNum, LUIECACHE_RUN_FRAME, LUI_luaVM) )
        {
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
        Profile_EndInternal(NULL);
        --s_lui_profBeginCount;
        Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_Layout");
        LUI_CoD_Layout(localClientNum);
        Sys_ProfEndNamedEvent();
        Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_BuildDrawList");
        LUI_CoD_BuildDrawList(localClientNum);
        Sys_ProfEndNamedEvent();
      }
      DB_EndDrawFrame();
      Profile_EndInternal(NULL);
      --s_lui_profBeginCount;
    }
    else
    {
      if ( s_luaInFrontend )
      {
        LUI_Interface_CheckLowMemory(LUI_luaVM);
        LUI_CoD_Layout(localClientNum);
      }
      LUI_CoD_BuildDrawList(localClientNum);
    }
    v11 = Sys_Microseconds() - v8;
    v12 = (float)v11;
    if ( v11 < 0 )
    {
      v13 = (float)v11;
      v12 = v13 + 1.8446744e19;
    }
    s_luiUpdateFrameInternalDuration = v12 * 0.001;
    Profile_Unguard(2);
    s_inLUIFrame = 0;
  }
}

/*
==============
LUI_CoD_UpdateInputType
==============
*/
void LUI_CoD_UpdateInputType(int controllerIndex, UIInputType inputType)
{
  __int64 v2; 
  LocalClientNum_t ClientFromController; 
  __int64 v5; 
  UIInputType *p_lastInputType; 
  UIInputType v7; 
  char *name; 
  bool *p_inUse; 
  LUIElement *RootElement; 

  v2 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v5 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ClientFromController, 2) )
    __debugbreak();
  p_lastInputType = &clientUIActives[v5].lastInputType;
  v7 = *p_lastInputType;
  if ( *p_lastInputType != inputType )
  {
    if ( (*p_lastInputType = inputType, (unsigned int)(v7 - 1) <= 1) && inputType == GAMEPAD || v7 == GAMEPAD )
    {
      if ( LUI_luaVM )
      {
        if ( (_DWORD)v2 == -1 )
        {
          if ( s_luaInFrontend )
            goto LABEL_14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3980, ASSERT_TYPE_ASSERT, "(controllerIndex != -1 || s_luaInFrontend)", (const char *)&queryFormat, "controllerIndex != -1 || s_luaInFrontend") )
            __debugbreak();
        }
        if ( !s_luaInFrontend )
        {
          name = s_rootData[v2].name;
          p_inUse = &s_rootData[v2].inUse;
LABEL_16:
          if ( *p_inUse )
          {
            LUI_EnterCriticalSection("LUI_InvalidateAllDirectiveTextElements");
            RootElement = LUI_GetRootElement(name, LUI_luaVM);
            LUI_InvalidateAllDirectiveTextElements_Internal(RootElement, LUI_luaVM);
            LUI_LeaveCriticalSection();
          }
          return;
        }
LABEL_14:
        name = s_fullscreenRootData.name;
        p_inUse = &s_fullscreenRootData.inUse;
        goto LABEL_16;
      }
    }
  }
}

/*
==============
LUI_CoD_UpdateParallaxHUDHelmet
==============
*/
void LUI_CoD_UpdateParallaxHUDHelmet(LocalClientNum_t localClientNum, LUIElement *root)
{
  __int64 ControllerFromClient; 
  cg_t *LocalClientGlobals; 
  __int64 v5; 
  CgWeaponMap *Instance; 
  bool v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  unsigned int refdefViewOrg_aab; 
  char v14; 
  CgHandler *Handler; 
  float v16; 
  double v17; 
  float v18; 
  float v21; 
  float v23; 
  const dvar_t *v24; 
  float value; 
  float v26; 
  CgWeaponMap *v27; 
  double v28; 
  tmat43_t<vec3_t> out; 
  CgViewSystem::JostleConfig config; 
  vec3_t angles; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> in; 
  WorldUpReferenceFrame v34; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v36; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> in2; 

  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallaxHUDHelmet");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v5 = ControllerFromClient;
  v7 = 1;
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      v7 = 0;
  }
  config.respectBlendOut = 0;
  v8 = DCONST_DVARMPFLT_lui_parallax_view_sway_rate;
  if ( !DCONST_DVARMPFLT_lui_parallax_view_sway_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_view_sway_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  LODWORD(config.viewSwayScale) = v8->current.integer;
  v9 = DCONST_DVARMPFLT_lui_parallax_anim_sway_rate;
  if ( !DCONST_DVARMPFLT_lui_parallax_anim_sway_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_anim_sway_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  LODWORD(config.animSwayScale) = v9->current.integer;
  v10 = DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence;
  if ( !DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_max_linear_velocity_influence") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  LODWORD(config.maxLinearVelocityInfluence) = v10->current.integer;
  v11 = DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate;
  if ( !DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_linear_velocity_to_angle_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  *(_QWORD *)config.linearVelocityToAngleRate.v = v11->current.integer64;
  config.linearVelocityToAngleRate.v[2] = v11->current.vector.v[2];
  v12 = DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view;
  if ( !DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_max_offset_from_view") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  *(_QWORD *)config.maxOffset.v = v12->current.integer64;
  config.maxOffset.v[2] = config.maxOffset.v[1];
  AxisCopy(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
  if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = LocalClientGlobals->refdef.view.refdefViewOrg_aab;
  if ( LocalClientGlobals == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(out.m[3].v[0]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26936)) + 2));
  LODWORD(out.m[3].v[1]) = LODWORD(LocalClientGlobals->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26940)) + 2));
  LODWORD(out.m[3].v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)LocalClientGlobals + 26944)) + 2)) ^ LODWORD(LocalClientGlobals->refdef.view.org.org.v[2]);
  if ( ((LODWORD(out.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[0].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[1].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[3].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[3].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.m[3].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3675, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( viewTransform )[0] )[0] ) || IS_NAN( ( ( viewTransform )[0] )[1] ) || IS_NAN( ( ( viewTransform )[0] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[1] )[0] ) || IS_NAN( ( ( viewTransform )[1] )[1] ) || IS_NAN( ( ( viewTransform )[1] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[2] )[0] ) || IS_NAN( ( ( viewTransform )[2] )[1] ) || IS_NAN( ( ( viewTransform )[2] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[3] )[0] ) || IS_NAN( ( ( viewTransform )[3] )[1] ) || IS_NAN( ( ( viewTransform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( viewTransform )") )
    __debugbreak();
  if ( s_rootData[v5].parallaxSource[0] != 1 )
  {
    ViewJostleState::Reset(&s_rootData[v5].helmetParallaxState);
    *(_WORD *)&s_rootData[v5].helmetParallaxState.isAttachmentCached = 257;
LABEL_42:
    v14 = 1;
    goto LABEL_43;
  }
  if ( LocalClientGlobals->playerTeleported || v7 )
    goto LABEL_42;
  v14 = 0;
LABEL_43:
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v34, &LocalClientGlobals->predictedPlayerState, Handler);
  if ( v14 )
  {
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v34, (const tmat33_t<vec3_t> *)&out, &outAxis);
    AxisToAngles(&outAxis, &s_rootData[v5].helmetParallaxState.oldLinkedTagAnglesLocal);
    s_rootData[v5].helmetParallaxState.oldViewanglesLocal.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    s_rootData[v5].helmetParallaxState.oldViewanglesLocal.v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    s_rootData[v5].helmetParallaxState.oldViewanglesLocal.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
    s_rootData[v5].helmetParallaxState.oldPos = out.m[3];
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &angles);
  CG_View_CalculateViewJostle(LocalClientGlobals, &config, &out, &angles, &outAngles, &s_rootData[v5].helmetParallaxState);
  s_rootData[v5].parallaxSource[0] = 1;
  v16 = (float)(atanf_0(LocalClientGlobals->refdef.view.fov.tanHalfFovY) * 57.295776) * 2.0;
  if ( COERCE_FLOAT(LODWORD(v16) & _xmm) >= 0.000001 )
  {
    AnglesToAxis(&outAngles, &axis);
    *(__m256i *)in.m[0].v = *(__m256i *)out.m[0].v;
    in.m[2].v[2] = out.m[2].v[2];
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v34, &axis);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v34, &in);
    MatrixInverse(&in, &in2);
    MatrixMultiply(&axis, &in2, &v36);
    v17 = vectopitch(v36.m);
    v18 = *(float *)&v17 * 0.0027777778;
    _XMM6 = 0i64;
    __asm { vroundss xmm0, xmm6, xmm2, 1 }
    v21 = (float)(v18 - *(float *)&_XMM0) * 360.0;
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v36);
    __asm { vroundss xmm3, xmm6, xmm0, 1 }
    v23 = (float)(*(float *)&_XMM0 * 0.0027777778) - *(float *)&_XMM3;
    v24 = DCONST_DVARMPFLT_lui_parallax_scale;
    if ( !DCONST_DVARMPFLT_lui_parallax_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    value = v24->current.value;
    v26 = ScrPlace_GetActivePlacement(localClientNum)->realViewportSize.v[1] / v16;
    v27 = CgWeaponMap::GetInstance(localClientNum);
    v28 = BG_WeaponADSFractionAffectedByReload(v27, &LocalClientGlobals->predictedPlayerState);
    LUI_Matrix_BuildTranslationMatrix((float)((float)((float)((float)(v23 * -360.0) * value) * v26) * (float)(1.0 - *(float *)&v28)) * s_rootData[v5].unitScale, s_rootData[v5].unitScale * (float)((float)((float)(v21 * value) * v26) * (float)(1.0 - *(float *)&v28)), 0.0, &s_rootData[v5].parallaxMatrix);
  }
  else
  {
    LUI_Matrix_LoadIdentity(&s_rootData[v5].parallaxMatrix);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_CoD_UpdateParallaxMenu
==============
*/
void LUI_CoD_UpdateParallaxMenu(LocalClientNum_t localClientNum, LUIElement *root)
{
  __int64 v2; 
  __int128 v3; 
  __int64 v6; 
  UIInputType lastInputType; 
  float v8; 
  float v9; 
  bool v10; 
  float v11; 
  float v12; 
  const ScreenPlacement *ActivePlacement; 
  float v14; 
  float v15; 
  const dvar_t *v16; 
  float value; 
  __int64 ControllerFromClient; 
  float lastMouseX; 
  float lastMouseY; 
  const ScreenPlacement *v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  double v26; 
  float v27; 
  double v28; 
  const dvar_t *v29; 
  float v30; 

  v2 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallaxMenu");
  v3 = 0i64;
  *(float *)&v3 = (float)s_fullscreenRootData.deltaTime * 0.001;
  _XMM1 = v3;
  __asm { vminss  xmm10, xmm1, cs:__real@3d4ccccd }
  if ( (unsigned int)v2 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v2, 2) )
    __debugbreak();
  v6 = v2;
  if ( s_fullscreenRootData.parallaxSource[0] != 2 )
  {
    s_fullscreenRootData.menuParallaxState.acceleration = 0i64;
    s_fullscreenRootData.menuParallaxState.velocity = 0i64;
    s_fullscreenRootData.menuParallaxState.currentOffset = 0i64;
    s_fullscreenRootData.menuParallaxState.targetOffset = 0i64;
  }
  s_fullscreenRootData.menuParallaxState.targetOffset.v[0] = 0.0;
  s_fullscreenRootData.menuParallaxState.targetOffset.v[1] = 0.0;
  lastInputType = clientUIActives[v6].lastInputType;
  v8 = 0.0;
  v9 = 0.0;
  v10 = lastInputType <= GAMEPAD;
  if ( lastInputType == GAMEPAD )
  {
    if ( !s_fullscreenRootData.lastFocusedElement )
      goto LABEL_18;
    v11 = (float)(s_fullscreenRootData.lastFocusedElement->right + s_fullscreenRootData.lastFocusedElement->left) * 0.5;
    v12 = (float)(s_fullscreenRootData.lastFocusedElement->bottom + s_fullscreenRootData.lastFocusedElement->top) * 0.5;
    ActivePlacement = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
    v14 = (float)(v11 - (float)(0.5 * ActivePlacement->realViewportSize.v[0])) / (float)(0.5 * ActivePlacement->realViewportSize.v[0]);
    v15 = (float)(v12 - (float)(0.5 * ActivePlacement->realViewportSize.v[1])) / (float)(0.5 * ActivePlacement->realViewportSize.v[1]);
    v16 = DCONST_DVARFLT_lui_parallax_menu_focus_amplitude;
    if ( !DCONST_DVARFLT_lui_parallax_menu_focus_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_focus_amplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    value = v16->current.value;
    v8 = s_fullscreenRootData.menuParallaxState.targetOffset.v[0] + (float)(v14 * value);
    s_fullscreenRootData.menuParallaxState.targetOffset.v[0] = v8;
    v9 = (float)(v15 * value) + s_fullscreenRootData.menuParallaxState.targetOffset.v[1];
    s_fullscreenRootData.menuParallaxState.targetOffset.v[1] = v9;
    lastInputType = clientUIActives[v6].lastInputType;
    v10 = lastInputType <= GAMEPAD;
    if ( lastInputType == GAMEPAD )
    {
LABEL_18:
      v26 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v2, GPAD_PHYSAXIS_RSTICK_X);
      v27 = (float)(*(float *)&v26 + 1.0) * 0.5;
      v28 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v2, GPAD_PHYSAXIS_RSTICK_Y);
      v29 = DCONST_DVARFLT_lui_parallax_menu_stick_amplitude;
      if ( !DCONST_DVARFLT_lui_parallax_menu_stick_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_stick_amplitude") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      v30 = v29->current.value;
      v8 = s_fullscreenRootData.menuParallaxState.targetOffset.v[0] + (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 * v27) ^ _xmm) - (float)((float)(v27 - 1.0) * v30));
      v9 = s_fullscreenRootData.menuParallaxState.targetOffset.v[1] + (float)((float)((float)((float)((float)(*(float *)&v28 + 1.0) * 0.5) - 1.0) + (float)((float)(*(float *)&v28 + 1.0) * 0.5)) * v30);
      goto LABEL_22;
    }
  }
  if ( !v10 && lastInputType <= KEYBOARD_NAVIGATION )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
    lastMouseX = s_perController[ControllerFromClient].lastMouseX;
    lastMouseY = s_perController[ControllerFromClient].lastMouseY;
    v21 = ScrPlace_GetActivePlacement((const LocalClientNum_t)v2);
    v22 = (float)(lastMouseX - (float)(0.5 * v21->realViewportSize.v[0])) / (float)(0.5 * v21->realViewportSize.v[0]);
    v23 = (float)(lastMouseY - (float)(0.5 * v21->realViewportSize.v[1])) / (float)(0.5 * v21->realViewportSize.v[1]);
    v24 = DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude;
    if ( !DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_mouse_amplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    v8 = s_fullscreenRootData.menuParallaxState.targetOffset.v[0] + (float)(v22 * v25);
    v9 = (float)(v23 * v25) + s_fullscreenRootData.menuParallaxState.targetOffset.v[1];
LABEL_22:
    s_fullscreenRootData.menuParallaxState.targetOffset.v[1] = v9;
    s_fullscreenRootData.menuParallaxState.targetOffset.v[0] = v8;
  }
  s_fullscreenRootData.menuParallaxState.velocity.v[0] = (float)((float)((float)(-24.494898 * s_fullscreenRootData.menuParallaxState.velocity.v[0]) + (float)((float)(v8 - s_fullscreenRootData.menuParallaxState.currentOffset.v[0]) * 150.0)) * *(float *)&_XMM10) + s_fullscreenRootData.menuParallaxState.velocity.v[0];
  s_fullscreenRootData.menuParallaxState.velocity.v[1] = (float)((float)((float)(-24.494898 * s_fullscreenRootData.menuParallaxState.velocity.v[1]) + (float)((float)(v9 - s_fullscreenRootData.menuParallaxState.currentOffset.v[1]) * 150.0)) * *(float *)&_XMM10) + s_fullscreenRootData.menuParallaxState.velocity.v[1];
  s_fullscreenRootData.menuParallaxState.currentOffset.v[0] = (float)(s_fullscreenRootData.menuParallaxState.velocity.v[0] * *(float *)&_XMM10) + s_fullscreenRootData.menuParallaxState.currentOffset.v[0];
  s_fullscreenRootData.menuParallaxState.currentOffset.v[1] = (float)(s_fullscreenRootData.menuParallaxState.velocity.v[1] * *(float *)&_XMM10) + s_fullscreenRootData.menuParallaxState.currentOffset.v[1];
  LUI_Matrix_BuildTranslationMatrix(s_fullscreenRootData.menuParallaxState.currentOffset.v[0] * s_fullscreenRootData.unitScale, s_fullscreenRootData.menuParallaxState.currentOffset.v[1] * s_fullscreenRootData.unitScale, 0.0, &s_fullscreenRootData.parallaxMatrix);
  s_fullscreenRootData.parallaxSource[0] = 2;
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_CoD_UpdateStickInput
==============
*/
void LUI_CoD_UpdateStickInput(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 ControllerFromClient; 
  clientUIActive_t *v3; 
  int v4; 
  const dvar_t *v5; 
  char v6; 
  __int64 v7; 
  char v8; 
  float value; 
  const dvar_t *v10; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  float leftStickDirection; 
  float *p_leftStickMagnitude; 
  double v21; 
  float v22; 
  double v23; 
  float v24; 
  float v25; 
  float v26; 
  float rightStickDirection; 
  float *p_rightStickMagnitude; 
  float gpadMinDeadzone; 
  LocalClientNum_t ClientFromController; 

  v1 = localClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v3 = &clientUIActives[v1];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5847, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  if ( s_perController[ControllerFromClient].inputLocked || (v3->keyCatchers & 0x40) != 0 )
  {
    v4 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    v5 = DCONST_DVARFLT_lui_stick_direction_threshold;
    v6 = 0;
    v7 = v4;
    v8 = 0;
    if ( !DCONST_DVARFLT_lui_stick_direction_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_stick_direction_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
    v10 = DCONST_DVARFLT_lui_stick_magnitude_threshold;
    if ( !DCONST_DVARFLT_lui_stick_magnitude_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_stick_magnitude_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.value;
    v12 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v1, GPAD_PHYSAXIS_LSTICK_Y);
    v13 = *(float *)&v12;
    v14 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v1, GPAD_PHYSAXIS_LSTICK_X);
    v15 = *(float *)&v14;
    v16 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13));
    v17 = atan2f_0(v13, *(float *)&v14) * 57.295776;
    v18 = v7;
    leftStickDirection = s_perController[v7].leftStickDirection;
    if ( v17 != leftStickDirection || (p_leftStickMagnitude = &s_perController[v18].leftStickMagnitude, v16 != *p_leftStickMagnitude) )
    {
      p_leftStickMagnitude = &s_perController[v18].leftStickMagnitude;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - leftStickDirection) & _xmm) > value || COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - *p_leftStickMagnitude) & _xmm) > v11 )
        v8 = 1;
      s_perController[v18].leftStickDirection = v17;
      *p_leftStickMagnitude = v16;
      v6 = 1;
    }
    v21 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v1, GPAD_PHYSAXIS_RSTICK_Y);
    v22 = *(float *)&v21;
    v23 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v1, GPAD_PHYSAXIS_RSTICK_X);
    v24 = *(float *)&v23;
    v25 = fsqrt((float)(*(float *)&v23 * *(float *)&v23) + (float)(v22 * v22));
    v26 = atan2f_0(v22, *(float *)&v23) * 57.295776;
    rightStickDirection = s_perController[v18].rightStickDirection;
    if ( v26 != rightStickDirection || (p_rightStickMagnitude = &s_perController[v18].rightStickMagnitude, v25 != *p_rightStickMagnitude) )
    {
      p_rightStickMagnitude = &s_perController[v18].rightStickMagnitude;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - rightStickDirection) & _xmm) > value || COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - *p_rightStickMagnitude) & _xmm) > v11 )
        v8 = 1;
      s_perController[v18].rightStickDirection = v26;
      *p_rightStickMagnitude = v25;
      v6 = 1;
    }
    if ( gpad_use_deadzone_option_value->current.enabled )
      gpadMinDeadzone = GamerProfile_GetProfileSettings(v7)->config.gpadMinDeadzone;
    else
      gpadMinDeadzone = gpad_stick_deadzone_min->current.value;
    if ( v8 && v6 && (v16 > gpadMinDeadzone || v25 > gpadMinDeadzone) )
      LUI_CoD_UpdateInputType(v7, GAMEPAD);
    ClientFromController = LOCAL_CLIENT_0;
    if ( CL_Mgr_IsControllerMappedToClient(v7, NULL) )
      ClientFromController = CL_Mgr_GetClientFromController(v7);
    if ( v6 )
    {
      if ( LUI_BeginEvent(ClientFromController, "gamepad_sticks", LUI_luaVM) )
      {
        LUI_SetTableInt("controller", v7, LUI_luaVM);
        LUI_SetTableNumber("leftStickDirection", s_perController[v18].leftStickDirection, LUI_luaVM);
        LUI_SetTableNumber("leftStickMagnitude", *p_leftStickMagnitude, LUI_luaVM);
        LUI_SetTableNumber("rightStickDirection", s_perController[v18].rightStickDirection, LUI_luaVM);
        LUI_SetTableNumber("rightStickMagnitude", *p_rightStickMagnitude, LUI_luaVM);
        LUI_SetTableNumber("leftStickPitch", v13, LUI_luaVM);
        LUI_SetTableNumber("leftStickYaw", v15, LUI_luaVM);
        LUI_SetTableNumber("rightStickPitch", v22, LUI_luaVM);
        LUI_SetTableNumber("rightStickYaw", v24, LUI_luaVM);
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
  }
}

/*
==============
LUI_CoD_Update_Publisher_Variables
==============
*/
void LUI_CoD_Update_Publisher_Variables(void)
{
  int i; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_Mgr_IsClientActive((LocalClientNum_t)i) && LUI_BeginEvent((LocalClientNum_t)i, "update_publisher_variables", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
LUI_CoD_UsingSplitscreenUpscaling
==============
*/
bool LUI_CoD_UsingSplitscreenUpscaling()
{
  int LocalClientActiveCount; 

  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  if ( LocalClientActiveCount >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2496, ASSERT_TYPE_ASSERT, "(activeClientCount < 3)", (const char *)&queryFormat, "activeClientCount < 3") )
    __debugbreak();
  return LocalClientActiveCount == 2 && !s_luaInFrontend && lui_splitscreenupscaling->current.integer != -1;
}

/*
==============
LUI_GetPathToElement
==============
*/
__int64 LUI_GetPathToElement(LocalClientNum_t localClientNum, const char *tabElementID, const char *buttonElementID, int *pathKeys, int pathKeysLength)
{
  int v9; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  int v12; 
  int v13; 
  __int64 i; 
  const char *v15; 
  int v16; 

  v9 = -1;
  if ( LUI_luaVM )
  {
    LUI_EnterCriticalSection("LUI_GetPathToElement");
    if ( LUI_luaVM )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
      j_lua_getfield(LUI_luaVM, -10002, "LUI");
      j_lua_getfield(LUI_luaVM, -1, "roots");
      j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
      j_lua_getfield(LUI_luaVM, -10002, "GetPathToElement");
      j_lua_pushvalue(LUI_luaVM, -2);
      j_lua_pushstring(LUI_luaVM, tabElementID);
      j_lua_pushstring(LUI_luaVM, buttonElementID);
      v12 = 1;
      if ( LuaShared_PCall(LUI_luaVM, 3, 1) )
      {
        LUI_ReportError("Error Checking For Path to Element", LUI_luaVM);
      }
      else
      {
        if ( j_lua_type(LUI_luaVM, -1) > 0 )
        {
          if ( j_lua_type(LUI_luaVM, -1) == 5 )
          {
            v13 = j_lua_objlen(LUI_luaVM, -1);
            v9 = pathKeysLength;
            if ( v13 < pathKeysLength )
              v9 = v13;
            if ( v9 > 0 )
            {
              for ( i = 0i64; i < v9; ++i )
              {
                j_lua_pushinteger(LUI_luaVM, v12);
                j_lua_gettable(LUI_luaVM, -2);
                v15 = j_lua_tolstring(LUI_luaVM, -1, NULL);
                v16 = Com_Keys_StringToKeynum(v15);
                j_lua_settop(LUI_luaVM, -2);
                pathKeys[i] = v16;
                ++v12;
              }
            }
          }
        }
        else
        {
          Com_PrintWarning(13, "Bad return value. Path does not exist.\n");
        }
        j_lua_settop(LUI_luaVM, -2);
      }
      j_lua_settop(LUI_luaVM, -4);
    }
    LUI_LeaveCriticalSection();
  }
  return (unsigned int)v9;
}

/*
==============
LUI_GetVisibleMenu
==============
*/
_BOOL8 LUI_GetVisibleMenu(LocalClientNum_t localClientNum, char (*outBuffer)[1024])
{
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v7; 
  unsigned __int64 len; 

  if ( !outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 851, ASSERT_TYPE_ASSERT, "(outBuffer)", (const char *)&queryFormat, "outBuffer") )
    __debugbreak();
  (*outBuffer)[0] = 0;
  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_GetVisibleMenu");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetVisibleMenu");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
  }
  else
  {
    if ( !j_lua_isstring(LUI_luaVM, -1) )
      j_luaL_error(LUI_luaVM, "Expecting a string on top of the stack after calling 'GetVisibleMenu'\n");
    v7 = j_lua_tolstring(LUI_luaVM, -1, &len);
    if ( v7 )
      Core_strcpy((char *)outBuffer, 0x400ui64, v7);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return (*outBuffer)[0] != 0;
}

/*
==============
LUI_Interface_CheckLowMemory
==============
*/
void LUI_Interface_CheckLowMemory(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  bool v4; 

  if ( luaVM )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "LUI_Interface_CheckLowMemory");
    v2 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
    v3 = LUI_CoD_GetMemoryTotal() - v2;
    if ( s_luaInFrontend )
      v4 = v3 < 0x100000;
    else
      v4 = v3 < 0xA6800;
    if ( v4 )
    {
      Com_PrintWarning(13, "LUI Warning: Low on memory, running GC now\n");
      j_lua_gc(luaVM, 2, 0);
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
LUI_Interface_DebugPrint
==============
*/
void LUI_Interface_DebugPrint(const char *formatString, ...)
{
  char dest[4096]; 
  va_list va; 

  va_start(va, formatString);
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, formatString, va);
  Com_Printf(13, (const char *)&queryFormat, dest);
}

/*
==============
LUI_Interface_DrawBoundingBox
==============
*/
void LUI_Interface_DrawBoundingBox(const LocalClientNum_t localClientNum, LUIElement *element, lua_State *luaVM)
{
  float left; 
  float right; 
  vec4_t point; 
  vec4_t v7; 
  vec4_t v8; 
  vec4_t v9; 
  int data[32]; 

  left = element->left;
  right = element->right;
  point.v[1] = element->top;
  v7.v[1] = point.v[1];
  v9.v[1] = element->bottom;
  v8.v[1] = v9.v[1];
  point.v[0] = left;
  point.v[2] = 0.0;
  point.v[3] = FLOAT_1_0;
  v7.v[0] = right;
  v7.v[2] = 0.0;
  v7.v[3] = FLOAT_1_0;
  v9.v[0] = left;
  v9.v[2] = 0.0;
  v9.v[3] = FLOAT_1_0;
  v8.v[0] = right;
  v8.v[2] = 0.0;
  v8.v[3] = FLOAT_1_0;
  LUI_ApplyTransformsToPoint(&point);
  LUI_ApplyTransformsToPoint(&v7);
  LUI_ApplyTransformsToPoint(&v9);
  LUI_ApplyTransformsToPoint(&v8);
  data[4] = SLODWORD(v7.v[0]);
  data[5] = SLODWORD(v7.v[1]);
  data[6] = SLODWORD(v7.v[2]);
  data[8] = SLODWORD(v7.v[0]);
  data[9] = SLODWORD(v7.v[1]);
  data[10] = SLODWORD(v7.v[2]);
  data[12] = SLODWORD(v8.v[0]);
  data[13] = SLODWORD(v8.v[1]);
  data[14] = SLODWORD(v8.v[2]);
  data[16] = SLODWORD(v8.v[0]);
  data[17] = SLODWORD(v8.v[1]);
  data[18] = SLODWORD(v8.v[2]);
  data[20] = SLODWORD(v9.v[0]);
  data[21] = SLODWORD(v9.v[1]);
  data[22] = SLODWORD(v9.v[2]);
  data[24] = SLODWORD(v9.v[0]);
  data[25] = SLODWORD(v9.v[1]);
  data[26] = SLODWORD(v9.v[2]);
  data[0] = SLODWORD(point.v[0]);
  data[1] = SLODWORD(point.v[1]);
  data[2] = SLODWORD(point.v[2]);
  data[28] = SLODWORD(point.v[0]);
  data[29] = SLODWORD(point.v[1]);
  data[30] = SLODWORD(point.v[2]);
  data[3] = -1;
  data[7] = -1;
  data[11] = -1;
  data[15] = -1;
  data[19] = -1;
  data[23] = -1;
  data[27] = -1;
  data[31] = -1;
  LUI_QuadCache_AddDrawListCommandInternal(localClientNum, (void (__fastcall *)(const void *))LUI_Interface_DrawBoundingBoxImmediate, data, 0x80ui64, 4ui64);
}

/*
==============
LUI_Interface_DrawBoundingBoxImmediate
==============
*/
void LUI_Interface_DrawBoundingBoxImmediate(const GfxPointVertex *boxVerts)
{
  R_AddCmdDrawLines2D(4u, 2u, boxVerts);
}

/*
==============
LUI_Interface_DrawText
==============
*/
void LUI_Interface_DrawText(const LocalClientNum_t localClientNum, LUIElement *root, LUIElement *element, double x, float y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float elementHeight, float boxWidth, char tracking, char leading, char alignment, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, AutoScrollStyle *autoScrollStyle, lua_State *luaVM)
{
  signed __int64 v20; 
  void *v21; 
  LUIElement *v22; 
  AutoScrollStyle *v23; 
  lua_State *v24; 
  char v26; 
  char v27; 
  char v28; 
  char v29; 
  bool v30; 
  __int128 v31; 
  float v32; 
  GfxFont *v33; 
  int MinHeightForDistanceField; 
  int v35; 
  __int64 v36; 
  int v37; 
  PreCachedFont *v38; 
  int size; 
  bool v40; 
  char v41; 
  char *v42; 
  char v43; 
  char v44; 
  const char *ID; 
  LocalClientNum_t ClientFromController; 
  int ExclusiveController; 
  lua_State *v48; 
  __int64 v49; 
  double v52; 
  double v53; 
  bool v58; 
  bool v59; 
  float v60; 
  __int64 v61; 
  unsigned __int64 v62; 
  int v63; 
  char *v64; 
  int v65; 
  int v66; 
  __int64 v67; 
  char *v68; 
  int v69; 
  bool v70; 
  bool i; 
  LUIElement *parent; 
  int v73; 
  int v74; 
  char *v75; 
  __int64 v76; 
  float v77; 
  char v78; 
  float v79; 
  char v80; 
  int v81; 
  const unsigned __int8 *v82; 
  char v83; 
  float v84; 
  int v85; 
  char v86; 
  float v87; 
  int v88; 
  float v89; 
  LUIElement *v90; 
  TextLine *p_outLines; 
  lua_State *v92; 
  float v93; 
  float pixelWidth; 
  bool v95; 
  bool v96; 
  LUIHorizontalAlignment v97; 
  char v98; 
  double v99; 
  bool v100; 
  vec4_t *p_color; 
  __int128 v102; 
  char v103; 
  double v104; 
  float v105; 
  float v106; 
  __int128 v107; 
  float *outFontLayoutScale; 
  float *outRotation; 
  char v110; 
  char v111; 
  unsigned __int8 v112; 
  LUIHorizontalAlignment HorizontalAlignment; 
  LUIVerticalAlignment VerticalAlignment; 
  bool v115; 
  int outLineCount; 
  char *input; 
  int v118; 
  float v119; 
  char colorEscape[2]; 
  int fontSize; 
  float v122; 
  int outFontRenderSize; 
  GfxFont *fonta; 
  float autoScrollTransitionInStep; 
  int style; 
  LocalClientNum_t localClientNuma; 
  float outFontRenderScale; 
  AutoScrollStyle *v129; 
  float autoScrollTransitionOutStep; 
  float rotation; 
  LUIElement *elementa; 
  float v133; 
  lua_State *v134; 
  FontGlowStyle *v135; 
  FontDecodeStyle *v136; 
  const char *v137; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  vec4_t color; 
  vec4_t v143; 
  AutoScrollStyle v144; 
  vec4_t verts[4]; 
  float *v146; 
  GfxFont **p_fonta; 
  int *p_fontSize; 
  char *p_tracking; 
  float *v150; 
  vec4_t quadVerts[4]; 
  TextLine outLines; 
  char v153[512]; 
  char v154[1024]; 
  char v155[1024]; 
  char output[4096]; 
  char dstString[4096]; 

  v21 = alloca(v20);
  v22 = element;
  v23 = autoScrollStyle;
  v24 = luaVM;
  fonta = font;
  v136 = fontDecodeStyle;
  elementa = element;
  localClientNuma = localClientNum;
  v135 = fontGlowStyle;
  input = (char *)text;
  v129 = autoScrollStyle;
  v134 = luaVM;
  memset_0(output, 0, sizeof(output));
  if ( !text )
  {
    Com_PrintError(13, "LUI: NULL text on text element\n");
    return;
  }
  R_TextValidatePrintable(text);
  if ( !fonta )
  {
    Com_PrintError(13, "LUI: Missing text element font! Text is %s\n", input);
    return;
  }
  if ( elementHeight >= 0.000001 && LUI_ElementHasWeakTableEntry(v22, v24) )
  {
    if ( v22->quadCached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7340, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
      __debugbreak();
    v138 = red;
    v139 = green;
    v140 = blue;
    v141 = alpha;
    v115 = !LUI_Is3DTransformEnabled();
    if ( v23 && (v26 = v23->options.direction[0]) != 0 )
    {
      v27 = 1;
      if ( v26 == 1 )
      {
        v28 = 1;
        v112 = 1;
LABEL_16:
        if ( v23->options.direction[0] == 2 )
        {
          v29 = 1;
LABEL_19:
          v30 = v28 && v23->options.useEllipses;
          HorizontalAlignment = LUI_GetHorizontalAlignment(alignment);
          v31 = LODWORD(y);
          VerticalAlignment = LUI_GetVerticalAlignment(alignment);
          v32 = (float)leading + elementHeight;
          if ( !LUI_CoD_DetermineFontSizeAndScale(v22, *(float *)&x, y, elementHeight, &outFontRenderSize, &outFontRenderScale, &fontSize, &v122, &v133, &rotation) )
            return;
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_font_cache_warnings, "lui_font_cache_warnings") )
          {
            v33 = fonta;
            MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
            v35 = 0;
            v36 = MinHeightForDistanceField;
            if ( s_numPreCachedFonts <= 0 )
            {
LABEL_35:
              input = j_va("^1FONT_NOT_CACHED(^7%s^1)^7", input);
            }
            else
            {
              v37 = outFontRenderSize;
              v38 = s_preCachedFonts;
              while ( 1 )
              {
                size = v38->size;
                v40 = v37 == size || size >= (int)v36 && outFontRenderSize >= v36;
                if ( v38->font == v33 && v40 )
                  break;
                v37 = outFontRenderSize;
                ++v35;
                ++v38;
                if ( v35 >= s_numPreCachedFonts )
                  goto LABEL_35;
              }
            }
            v22 = elementa;
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warnings, "loc_warnings") )
          {
            v41 = 1;
            v42 = input;
            if ( *input != 31 )
              goto LABEL_49;
            v43 = 0;
            do
            {
              if ( v43 || v42[1] )
              {
                if ( *v42 == 30 )
                  v43 = 1;
              }
              else
              {
                v44 = 0;
                if ( *v42 != 30 )
                  v44 = v41;
                v41 = v44;
              }
              ++v42;
            }
            while ( *v42 );
            if ( v41 )
            {
LABEL_49:
              UI_Text_InsertLocalizationWarnings(input, output, 0x1000ui64);
              input = output;
            }
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_print_text_draws, "lui_print_text_draws") )
          {
            ID = LUIElement_GetID(v22, v24);
            Com_Printf(13, "DrawText: %s %d %s (from %s)\n", fonta->fontName, (unsigned int)outFontRenderSize, input, ID);
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_rendertime_binding_directive, "lui_rendertime_binding_directive") )
          {
            ClientFromController = localClientNuma;
            if ( LUI_LUIElement_IsControllerExclusive(v22, v24) )
            {
              ExclusiveController = LUI_LUIElement_GetExclusiveController(v22, v24);
              if ( ExclusiveController >= 0 )
                ClientFromController = CL_Mgr_GetClientFromController(ExclusiveController);
            }
            UI_ReplaceDirective(ClientFromController, input, dstString, 0x1000ui64, (v22->currentAnimationState.flags & 0x40) != 0);
            input = dstString;
          }
          style = 0;
          v48 = v24;
          LUI_PutElementOnTopOfStack(v22, v24);
          v49 = -1i64;
          j_lua_getfield(v48, -1, "m_textStyle");
          if ( j_lua_type(v48, -1) )
          {
            if ( !j_lua_isnumber(v48, -1) )
              j_luaL_error(v48, "m_textStyle is not an enumerated type!");
            style = lui_tointeger32(v48, -1);
          }
          j_lua_settop(v48, -3);
          _XMM1 = 0i64;
          __asm { vroundss xmm4, xmm1, xmm2, 1 }
          HIDWORD(v53) = 0;
          *(float *)&v53 = (float)(int)*(float *)&_XMM4 * 0.0099999998;
          v52 = v53;
          _XMM0 = v112;
          __asm { vpcmpeqd xmm2, xmm0, xmm1 }
          _XMM11 = 0i64;
          __asm { vblendvps xmm0, xmm11, xmm7, xmm2 }
          v119 = *(float *)&_XMM0;
          v58 = Language_IsRightToLeft() != 0;
          v59 = (v22->usageFlags & 0x100) == 0;
          v110 = v58;
          if ( v59 )
          {
            v62 = -1i64;
            outLineCount = 1;
            do
              ++v62;
            while ( input[v62] );
            v63 = truncate_cast<int,unsigned __int64>(v62);
            v64 = input;
            outLines.textLeft = input;
            outLines.textRight = &input[v63];
            if ( HorizontalAlignment == LEFT && !v112 )
            {
              v60 = v119;
              outLines.pixelWidth = v119;
              LODWORD(v61) = 0;
LABEL_70:
              v66 = outLineCount;
              if ( outLineCount != 1 || !v30 )
                goto LABEL_123;
              if ( lui_fakeExtendedText->current.enabled && *(float *)&v53 >= v60 )
              {
                v67 = -1i64;
                do
                  ++v67;
                while ( v64[v67] );
                memset_0(v154, 0, sizeof(v154));
                v68 = v154;
                v60 = 0.0;
                if ( (float)((float)((rand() & 1) + 1) * *(float *)&v53) >= 0.0 )
                {
                  do
                  {
                    memcpy_0(v68, input, (int)v67);
                    v68 += (int)v67;
                    v61 = -1i64;
                    do
                      ++v61;
                    while ( v154[v61] );
                    v69 = R_TextWidth(v154, v61, fonta, fontSize, tracking, 0);
                    v60 = (float)v69 * v122;
                  }
                  while ( (float)((float)((rand() & 1) + 1) * *(float *)&v53) >= v60 );
                  v23 = v129;
                }
                v66 = outLineCount;
                v22 = elementa;
                input = v154;
                outLines.textLeft = v154;
                outLines.pixelWidth = v60;
                outLines.textRight = &v154[(int)v61];
              }
              v70 = *(float *)&v53 > 0.0 && *(float *)&v53 < v60;
              if ( (v22->currentAnimationState.flags & 0x24) != 0 )
              {
                i = 1;
              }
              else
              {
                parent = v22->parent;
                for ( i = 0; parent; parent = parent->parent )
                {
                  i = (parent->currentAnimationState.flags & 4) != 0;
                  if ( (parent->currentAnimationState.flags & 4) != 0 )
                    break;
                }
              }
              if ( v70 )
              {
                v73 = 0;
                if ( !i )
                {
                  v137 = aA_22;
                  LODWORD(rotation) = 3;
                  v74 = R_TextWidth(aA_22, 3, fonta, fontSize, tracking, 0);
                  v75 = input;
                  v76 = -1i64;
                  v77 = (float)v74 * v122;
                  do
                    ++v76;
                  while ( input[v76] );
                  LODWORD(v129) = v76;
                  memset_0(v155, 0, sizeof(v155));
                  v78 = v110;
                  v79 = (float)(*(float *)&v53 - v77) / outLines.pixelWidth;
                  v80 = v79 > 0.5;
                  v111 = v79 > 0.5;
                  if ( v110 )
                  {
                    v80 = v79 <= 0.5;
                    v81 = v76;
                    v111 = v79 <= 0.5;
                    if ( v79 <= 0.5 )
                      v81 = 1;
                  }
                  else
                  {
                    v81 = v76 - 1;
                    if ( v79 <= 0.5 )
                      v81 = 0;
                  }
                  v60 = 0.0;
                  v119 = 0.0;
                  v118 = v81;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      if ( v78 )
                        v81 = v76 - v81;
                      if ( v80 )
                      {
                        if ( v81 < 0 )
                          goto LABEL_120;
                        v82 = (const unsigned __int8 *)&v75[v81];
                        if ( (*v82 & 0xC0) == 0x80 )
                        {
                          do
                            v83 = *--v82;
                          while ( (v83 & 0xC0) == 0x80 );
                        }
                      }
                      else
                      {
                        if ( v81 >= (int)v76 )
                          goto LABEL_120;
                        v82 = (const unsigned __int8 *)&v75[v81];
                      }
                      GetGlyphFromUTF8(v82, (int *)&outFontRenderScale);
                      v84 = outFontRenderScale;
                      v85 = v110 == v111 ? LODWORD(outFontRenderScale) + v118 : v118 - LODWORD(outFontRenderScale);
                      v118 = v85;
                      *(_QWORD *)verts[0].v = &v111;
                      *(_QWORD *)&verts[0].xyz.z = &v110;
                      *(_QWORD *)verts[1].v = &v118;
                      *(_QWORD *)&verts[1].xyz.z = &rotation;
                      *(_QWORD *)verts[2].v = v155;
                      *(_QWORD *)&verts[2].xyz.z = &v137;
                      *(_QWORD *)verts[3].v = &input;
                      *(_QWORD *)&verts[3].xyz.z = &v129;
                      v146 = &v119;
                      p_fonta = &fonta;
                      p_fontSize = &fontSize;
                      p_tracking = &tracking;
                      v150 = &v122;
                      lambda_6f942657deb3409e840def6ce85b7def_::operator()(verts);
                      v60 = v119;
                      v78 = v110;
                      v80 = v111;
                      if ( v110 == v111 )
                        break;
                      if ( v119 <= *(float *)&v52 )
                        goto LABEL_120;
                      LODWORD(v76) = (_DWORD)v129;
                      v81 = v118;
                      v75 = input;
                    }
                    if ( v119 > *(float *)&v52 )
                      break;
                    LODWORD(v76) = (_DWORD)v129;
                    v81 = v118;
                    v75 = input;
                  }
                  v118 -= LODWORD(v84);
                  lambda_6f942657deb3409e840def6ce85b7def_::operator()(verts);
                  v60 = v119;
LABEL_120:
                  input = v155;
                  do
                    ++v49;
                  while ( v155[v49] );
                  v66 = outLineCount;
                  outLines.textLeft = v155;
                  outLines.pixelWidth = v60;
                  outLines.textRight = &v155[(int)v49];
                }
              }
              else
              {
LABEL_123:
                v73 = 0;
              }
              v86 = v23 == NULL;
              if ( v29 && v66 <= v23->options.maxVisibleLines )
                v86 = 1;
              autoScrollTransitionOutStep = FLOAT_1_0;
              autoScrollTransitionInStep = 0.0;
              if ( v27 && !v86 )
              {
                LUI_AutoScroll_GetLoopTransitionStep(v23, v66, v60, &autoScrollTransitionInStep, &autoScrollTransitionOutStep);
                v66 = outLineCount;
              }
              v87 = LUI_CoD_DrawText_ComputeYOffset(v32, leading, v66, v23, VerticalAlignment);
              v88 = outLineCount;
              *(_WORD *)colorEscape = 0;
              v143.v[1] = v139;
              color.v[1] = v139;
              v89 = v87;
              color.v[3] = v141 * autoScrollTransitionOutStep;
              v143.v[0] = v138;
              v143.v[2] = v140;
              color.v[0] = v138;
              color.v[2] = v140;
              v143.v[3] = v141 * autoScrollTransitionInStep;
              if ( (unsigned __int64)outLineCount > 0x64 )
              {
                LODWORD(outRotation) = 100;
                LODWORD(outFontLayoutScale) = outLineCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7646, ASSERT_TYPE_ASSERT, "( numLines ) <= ( ( sizeof( *array_counter( textLines ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "numLines", "ARRAY_COUNT( textLines )", outFontLayoutScale, outRotation) )
                  __debugbreak();
                v88 = outLineCount;
              }
              if ( v88 > 0 )
              {
                v90 = elementa;
                p_outLines = &outLines;
                v92 = v134;
                v93 = v133;
                do
                {
                  if ( (!p_outLines->textLeft || !p_outLines->textRight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7650, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
                    __debugbreak();
                  if ( p_outLines->textLeft > p_outLines->textRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7651, ASSERT_TYPE_ASSERT, "(textLine->textLeft <= textLine->textRight)", (const char *)&queryFormat, "textLine->textLeft <= textLine->textRight") )
                    __debugbreak();
                  pixelWidth = p_outLines->pixelWidth;
                  v95 = v23 && v23->options.direction[0] == 1;
                  v96 = *(float *)&v52 <= 0.0 || *(float *)&v52 >= pixelWidth;
                  v97 = HorizontalAlignment;
                  if ( v95 && !v96 )
                    v97 = LEFT;
                  if ( Language_IsRightToLeft() && LUI_UsesRightToLeftAlignmentFlip(v90) )
                  {
                    v98 = v97;
                    if ( v97 == LEFT )
                      v98 = 2;
                    v97 = v98;
                  }
                  R_PrepareTextLine(p_outLines->textLeft, p_outLines->textRight - p_outLines->textLeft + 1, v153, 512, 1, colorEscape);
                  R_TextValidatePrintable(v153);
                  v99 = LUI_CoD_DrawText_ComputeLineXPosition(x, pixelWidth, v52, v97, v23);
                  LUI_CoD_GenerateQuadVerts(*(float *)&v99, (float)(*(float *)&v31 + v89) - elementHeight, *(float *)&v99 + 1.0, *(float *)&v31 + v89, (vec4_t (*)[4])quadVerts);
                  if ( v115 && v93 == 0.0 )
                    LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
                  v100 = v112 && (*(float *)&v52 <= 0.0 || *(float *)&v52 >= pixelWidth);
                  v86 |= v100;
                  p_color = (vec4_t *)&v138;
                  if ( !v86 )
                    p_color = &color;
                  LUI_Render_DrawText(localClientNuma, v92, v90, (const vec4_t (*)[4])quadVerts, p_color, fonta, v153, style, tracking, v93, outFontRenderSize, v136, v135);
                  if ( autoScrollTransitionInStep > 0.0 && !v86 )
                  {
                    v102 = *(_OWORD *)&v23->options.startupDelay;
                    v103 = 0;
                    *(_QWORD *)&v144.options.maxVisibleLines = *(_QWORD *)&v23->options.maxVisibleLines;
                    *(_OWORD *)&v144.options.startupDelay = v102;
                    v144.elapsedTime = 0;
                    if ( *(float *)&v52 > 0.0 && *(float *)&v52 < pixelWidth )
                      v103 = 1;
                    if ( v144.options.direction[0] == 1 && v103 )
                    {
                      v104 = LUI_AutoScroll_ComputeLineXPosition(*(float *)&x, pixelWidth, *(float *)&v52, v97, &v144);
                      v105 = *(float *)&v104;
                    }
                    else if ( v97 == RIGHT )
                    {
                      v105 = (float)((float)(*(float *)&v52 - pixelWidth) * 0.5) + *(float *)&x;
                    }
                    else if ( v97 == 2 )
                    {
                      v105 = (float)(*(float *)&x + *(float *)&v52) - pixelWidth;
                    }
                    else
                    {
                      v105 = *(float *)&x;
                    }
                    v106 = LUI_CoD_DrawText_ComputeYOffset(v32, leading, outLineCount, &v144, VerticalAlignment) + *(float *)&v31;
                    LUI_CoD_GenerateQuadVerts(v105, v106 - elementHeight, v105 + 1.0, v106, (vec4_t (*)[4])verts);
                    if ( v115 )
                      LUI_CoD_SnapQuadVerts((vec4_t (*)[4])verts);
                    LUI_Render_DrawText(localClientNuma, v92, v90, (const vec4_t (*)[4])verts, &v143, fonta, v153, style, tracking, v93, outFontRenderSize, v136, v135);
                  }
                  ++v73;
                  ++p_outLines;
                  v107 = v31;
                  *(float *)&v107 = *(float *)&v31 + v32;
                  v31 = v107;
                }
                while ( v73 < outLineCount );
              }
              return;
            }
            LODWORD(v61) = 0;
            v65 = R_TextWidth(input, v63, fonta, fontSize, tracking, 0);
            v60 = (float)v65 * v122;
            outLines.pixelWidth = v60;
          }
          else
          {
            R_Font_WordWrap(input, v119, fonta, fontSize, v122, tracking, 100, !v58, &outLines, &outLineCount);
            v60 = outLines.pixelWidth;
            LODWORD(v61) = 0;
          }
          v64 = input;
          goto LABEL_70;
        }
LABEL_18:
        v29 = 0;
        goto LABEL_19;
      }
    }
    else
    {
      v27 = 0;
    }
    v28 = 0;
    v112 = 0;
    if ( !v27 )
      goto LABEL_18;
    goto LABEL_16;
  }
}

/*
==============
LUI_Interface_DrawTextSelection
==============
*/
void LUI_Interface_DrawTextSelection(const LocalClientNum_t localClientNum, LUIElement *element, float x, float y, float width, float height, vec4_t *color, lua_State *luaVM)
{
  vec4_t v10; 
  vec4_t verts[4]; 

  v10 = *color;
  LUI_CoD_GenerateQuadVerts(x, y + 3.0, x + width, (float)(y - height) + 3.0, (vec4_t (*)[4])verts);
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, 0.0, 0.0, 1.0, 1.0, &v10, LUI_DefaultMaterial);
}

/*
==============
LUI_Interface_DrawTextWithCursor
==============
*/
void LUI_Interface_DrawTextWithCursor(const LocalClientNum_t localClientNum, LUIElement *element, float x, float y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float fontHeight, float wrapWidth, int cursorPos, char cursor, lua_State *luaVM)
{
  size_t v17; 
  char *v18; 
  char *v19; 
  double v22; 
  vec2_t vec; 
  float v24; 
  vec4_t quadVerts[4]; 

  if ( LUI_ElementHasWeakTableEntry(element, luaVM) )
  {
    v17 = -1i64;
    do
      ++v17;
    while ( text[v17] );
    v18 = (char *)LUI_QuadCache_AddDrawListCommandVarSizeInternal(localClientNum, (void (__fastcall *)(const void *))LUI_Interface_DrawTextWithCursorImmediate, v17 + 46, 8ui64);
    v19 = v18;
    if ( v18 )
    {
      memcpy_0(v18 + 45, text, v17);
      v19[v17 + 45] = 0;
      *(_QWORD *)v19 = font;
      *((_DWORD *)v19 + 10) = cursorPos;
      v19[44] = cursor;
      LUI_CoD_GenerateQuadVerts(x, y - fontHeight, x, y, (vec4_t (*)[4])quadVerts);
      vec.v[1] = quadVerts[3].v[1] - quadVerts[0].v[1];
      vec.v[0] = (float)(quadVerts[3].v[0] - quadVerts[0].v[0]) * cls.vidConfig.aspectRatioDisplayPixel;
      fsqrt((float)((float)(vec.v[0] * vec.v[0]) + (float)((float)(quadVerts[3].v[1] - quadVerts[0].v[1]) * (float)(quadVerts[3].v[1] - quadVerts[0].v[1]))) + (float)((float)(quadVerts[3].v[2] - quadVerts[0].v[2]) * (float)(quadVerts[3].v[2] - quadVerts[0].v[2])));
      _XMM0 = 0i64;
      __asm { vroundss xmm4, xmm0, xmm3, 1 }
      v24 = quadVerts[3].v[2] - quadVerts[0].v[2];
      *((_DWORD *)v19 + 2) = (int)*(float *)&_XMM4;
      LUI_PutElementOnTopOfStack(element, luaVM);
      j_lua_getfield(luaVM, -1, "m_textStyle");
      if ( j_lua_type(luaVM, -1) )
      {
        if ( !j_lua_isnumber(luaVM, -1) )
          j_luaL_error(luaVM, "m_textStyle is not an enumerated type!");
        lui_tointeger32(luaVM, -1);
      }
      j_lua_settop(luaVM, -3);
      *((float *)v19 + 6) = red;
      *((float *)v19 + 7) = green;
      *((float *)v19 + 8) = blue;
      *((float *)v19 + 9) = alpha;
      v22 = vectoyaw(&vec);
      *((float *)v19 + 5) = *(float *)&v22 - 90.0;
      LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
      *((float *)v19 + 3) = quadVerts[3].v[0];
      *((float *)v19 + 4) = quadVerts[3].v[1];
    }
  }
}

/*
==============
LUI_Interface_DrawTextWithCursorImmediate
==============
*/
void LUI_Interface_DrawTextWithCursorImmediate(const LUITextWithCursorRenderData *data)
{
  R_AddCmdDrawTextWithCursor(data->text, 0x7FFFFFFF, data->font, NULL, data->fontSize, data->x, data->y, 1.0 / cls.vidConfig.aspectRatioDisplayPixel, 1.0, 0, data->transformedRotation, &data->color, NULL, 0, data->cursorPos, data->cursor, 0, 0, NULL);
}

/*
==============
LUI_Interface_ErrorPrint
==============
*/
void LUI_Interface_ErrorPrint(const char *formatString, ...)
{
  char dest[4096]; 
  va_list va; 

  va_start(va, formatString);
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, formatString, va);
  Com_PrintError(13, (const char *)&queryFormat, dest);
}

/*
==============
LUI_Interface_GetMaterialAspectRatio
==============
*/
float LUI_Interface_GetMaterialAspectRatio(const GfxImage *material)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6269, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  return (float)material->width / (float)material->height;
}

/*
==============
LUI_Interface_GetMaxElements
==============
*/
__int64 LUI_Interface_GetMaxElements()
{
  return 4500i64;
}

/*
==============
LUI_Interface_GetNumTextLines
==============
*/
__int64 LUI_Interface_GetNumTextLines(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float fontHeight, float wrapWidth)
{
  const dvar_t *v5; 
  char *v9; 
  unsigned int v10; 
  int v11; 
  int v12; 
  unsigned int CharFromString; 
  __int128 v14; 
  char v15; 
  char *v16; 
  char *v17; 
  char v18; 
  char v19; 
  int v20; 
  float v21; 
  bool IsBreakableSpace; 
  char v23; 
  char *v24; 
  __int128 v25; 
  char v26; 
  char *v27; 
  char *v28; 
  char *texta; 
  GfxFont *fonta; 
  char dstString[1024]; 

  v5 = DVARBOOL_lui_rendertime_binding_directive;
  fonta = font;
  if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    UI_ReplaceDirective(localClientNum, text, dstString, 0x400ui64, 0);
    text = dstString;
  }
  texta = (char *)text;
  if ( text )
  {
    if ( wrapWidth < 0.0 )
      return 1i64;
    v9 = (char *)text;
    v10 = 0;
    v11 = 0;
    v12 = (int)fontHeight;
    CharFromString = (int)fontHeight;
    v28 = (char *)text;
    v14 = LODWORD(wrapWidth);
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = *text;
        v16 = (char *)text;
        if ( *text )
          break;
LABEL_19:
        v18 = 1;
LABEL_20:
        v19 = 0;
        if ( v11 <= 0 )
        {
          v21 = 0.0;
        }
        else
        {
          v20 = R_TextWidth(v9, v11, fonta, v12);
          text = texta;
          v9 = v28;
          v21 = (float)v20 * (float)(fontHeight / (float)(int)fontHeight);
        }
        if ( *(float *)&v14 < wrapWidth && v21 > *(float *)&v14 )
        {
          v23 = *v9;
          v19 = 1;
          v14 = LODWORD(wrapWidth);
          if ( *v9 )
          {
            while ( v23 >= 30 )
            {
              if ( v23 <= 31 )
              {
                ++v9;
              }
              else
              {
                if ( v23 != 94 )
                  break;
                v24 = v9 + 1;
                v28 = v24;
                if ( v24 == (char *)-1i64 || (unsigned __int8)(v24[1] - 39) > 0x17u )
                  break;
                v9 = v24 + 1;
              }
              v28 = v9;
              v23 = *v9;
              if ( !*v9 )
                goto LABEL_38;
            }
            SEH_ReadCharFromString((const char **)&v28);
            v9 = v28;
            text = texta;
          }
LABEL_38:
          --v11;
          ++v10;
        }
        v25 = v14;
        *(float *)&v25 = *(float *)&v14 - v21;
        v14 = v25;
        if ( v18 || CharFromString == 10 )
        {
          if ( v19 )
          {
            text = v16;
            texta = v16;
          }
          else
          {
            v9 = v16;
            ++v10;
            v11 = 0;
            v28 = v16;
            if ( *v16 )
            {
              while ( 1 )
              {
                v26 = *v9;
                if ( *v9 < 30 )
                  break;
                if ( v26 <= 31 )
                {
                  ++v9;
                }
                else
                {
                  if ( v26 != 94 )
                    break;
                  if ( !*v9 )
                    goto LABEL_56;
                  v27 = v9 + 1;
                  v28 = v27;
                  if ( v27 == (char *)-1i64 || (unsigned __int8)(v27[1] - 39) > 0x17u )
                    break;
                  v9 = v27 + 1;
                }
                v28 = v9;
                if ( !*v9 )
                  goto LABEL_56;
              }
              SEH_ReadCharFromString((const char **)&v28);
              v9 = v28;
              text = texta;
            }
          }
LABEL_56:
          v12 = (int)fontHeight;
          v14 = LODWORD(wrapWidth);
          if ( v18 && !v11 )
            return v10;
        }
        else
        {
          v12 = (int)fontHeight;
          v9 = v16;
          v28 = v16;
          v11 = 1;
        }
      }
      while ( v15 >= 30 )
      {
        if ( v15 <= 31 )
        {
          ++text;
        }
        else
        {
          if ( v15 != 94 )
            break;
          v17 = (char *)(text + 1);
          texta = v17;
          if ( v17 == (char *)-1i64 || (unsigned __int8)(v17[1] - 39) > 0x17u )
            break;
          text = v17 + 1;
        }
        texta = (char *)text;
        v15 = *text;
        if ( !*text )
          goto LABEL_19;
      }
      CharFromString = SEH_ReadCharFromString((const char **)&texta);
      v18 = 0;
      IsBreakableSpace = R_IsBreakableSpace(CharFromString);
      text = texta;
      v9 = v28;
      v12 = (int)fontHeight;
      if ( IsBreakableSpace )
        goto LABEL_20;
      ++v11;
    }
  }
  return 0i64;
}

/*
==============
LUI_Interface_GetTextDimensions
==============
*/
void LUI_Interface_GetTextDimensions(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float fontHeight, char tracking, char leading, float *left, float *top, float *right, float *bottom, float wrapWidth)
{
  __int128 v11; 
  float *v12; 
  const char *v14; 
  float pixelHeight; 
  const dvar_t *v18; 
  int v21; 
  float v23; 
  bool v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  float *p_pixelWidth; 
  int outLineCount; 
  float *v31; 
  TextLine outLines; 
  char dstString[1024]; 
  __int128 v34; 

  v12 = top;
  v14 = text;
  v31 = top;
  if ( text )
  {
    if ( !font )
    {
      Com_PrintError(13, "LUI: Missing font for text element Text = %s\n", text);
      return;
    }
    pixelHeight = (float)font->pixelHeight;
    LODWORD(_XMM6) = 0;
    v34 = v11;
    if ( pixelHeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5930, ASSERT_TYPE_ASSERT, "(font->pixelHeight != 0.0f)", (const char *)&queryFormat, "font->pixelHeight != 0.0f") )
      __debugbreak();
    v18 = DVARBOOL_lui_rendertime_binding_directive;
    if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( v18->current.enabled )
    {
      UI_ReplaceDirective(localClientNum, v14, dstString, 0x400ui64, 0);
      v14 = dstString;
    }
    _XMM4 = 0i64;
    __asm { vroundss xmm2, xmm4, xmm1, 1 }
    v21 = (int)*(float *)&_XMM2;
    __asm { vroundss xmm0, xmm4, xmm2, 1 }
    v23 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM0).m128_f32[0] * 0.0099999998) / _mm_cvtepi32_ps((__m128i)(unsigned int)(int)*(float *)&_XMM2).m128_f32[0];
    v24 = Language_IsRightToLeft() != 0;
    outLineCount = 0;
    if ( wrapWidth <= -1.0 )
    {
      v25 = -1i64;
      do
        ++v25;
      while ( v14[v25] );
      outLines.textRight = &v14[(int)v25];
      outLineCount = 1;
      outLines.textLeft = v14;
      outLines.pixelWidth = (float)R_TextWidth(v14, v25, font, v21, tracking, 0) * v23;
    }
    else
    {
      R_Font_WordWrap(v14, wrapWidth, font, v21, v23, tracking, 100, !v24, &outLines, &outLineCount);
    }
    v26 = outLineCount;
    v27 = 0;
    if ( outLineCount > 0 )
    {
      p_pixelWidth = &outLines.pixelWidth;
      do
      {
        if ( !*((_QWORD *)p_pixelWidth - 2) || !*((_QWORD *)p_pixelWidth - 1) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5965, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
            __debugbreak();
          v26 = outLineCount;
        }
        _XMM0 = *(unsigned int *)p_pixelWidth;
        p_pixelWidth += 6;
        ++v27;
        __asm { vmaxss  xmm6, xmm0, xmm6 }
      }
      while ( v27 < v26 );
      v12 = v31;
    }
    *left = 0.0;
    if ( v26 <= 1 )
    {
      *v12 = fontHeight;
      if ( outLineCount == 1 )
        *right = outLines.pixelWidth;
      else
        *right = 0.0;
    }
    else
    {
      *right = *(float *)&_XMM6;
      *v12 = (float)(leading * (v26 - 1)) + (float)((float)v26 * fontHeight);
    }
  }
  else
  {
    *left = 0.0;
    *top = fontHeight;
    *right = 0.0;
  }
  *bottom = 0.0;
}

/*
==============
LUI_Interface_GetTextEditActive
==============
*/
LUIElement *LUI_Interface_GetTextEditActive(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  LUIElement *v3; 
  int ControllerFromClient; 

  v3 = NULL;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  j_lua_rawgeti(luaVM, -10000, s_perController[ControllerFromClient].textEditRef);
  if ( j_lua_isuserdata(luaVM, -1) )
    v3 = LUI_ToElement(luaVM, -1);
  j_lua_settop(luaVM, -2);
  return v3;
}

/*
==============
LUI_Interface_GetTextPages
==============
*/
__int64 LUI_Interface_GetTextPages(LocalClientNum_t localClientNum, const char *text, GfxFont *font, float elementHeight, char tracking, float wrapWidth, float pageHeight, int maxPages, TextPage *pages, int maxCharsPerPage)
{
  signed __int64 v10; 
  void *v11; 
  int v13; 
  int v20; 
  int v21; 
  TextPage *v22; 
  int IsRightToLeft; 
  int v24; 
  int v25; 
  TextLine *p_outLines; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  char *v31; 
  int v33; 
  int outLineCount; 
  int v35; 
  TextPage *v36; 
  TextLine outLines; 

  v11 = alloca(v10);
  v13 = (int)pages;
  v36 = pages;
  if ( maxPages > 0 )
    memset_0(pages, 0, (unsigned __int64)(unsigned int)maxPages << 11);
  if ( (float)font->pixelHeight == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6207, ASSERT_TYPE_ASSERT, "(font->pixelHeight != 0.0f)", (const char *)&queryFormat, "font->pixelHeight != 0.0f") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 1 }
  v35 = (int)*(float *)&_XMM2;
  v20 = 0;
  v21 = 0;
  v22 = pages;
  IsRightToLeft = Language_IsRightToLeft();
  R_Font_WordWrap(text, wrapWidth, font, (int)*(float *)&_XMM3, elementHeight / (float)(int)*(float *)&_XMM3, tracking, 256, IsRightToLeft == 0, &outLines, &outLineCount);
  v24 = 0;
  if ( outLineCount <= 0 )
    return (unsigned int)(v20 + 1);
  v25 = 0;
  p_outLines = &outLines;
  v33 = 0;
  while ( 1 )
  {
    if ( !p_outLines->textLeft || !p_outLines->textRight )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6224, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
        __debugbreak();
      v25 = v33;
    }
    v27 = LODWORD(p_outLines->textRight) - LODWORD(p_outLines->textLeft);
    v28 = (_DWORD)v22 - v25 - v13;
    v29 = v27 + 1;
    if ( v27 + 1 <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6228, ASSERT_TYPE_ASSERT, "(numCharsInLine > 0)", (const char *)&queryFormat, "numCharsInLine > 0") )
        __debugbreak();
      v25 = v33;
    }
    v30 = v29 + v28 + 1;
    if ( (unsigned int)v30 >= 0x800 || maxCharsPerPage != -1 && v30 >= maxCharsPerPage )
      break;
    if ( v21 >= v35 )
      break;
LABEL_23:
    memcpy_0(v22, p_outLines->textLeft, v29);
    v31 = &v22->text[v27];
    if ( *v31 != 10 )
      *++v31 = 10;
    v22 = (TextPage *)(v31 + 1);
    ++v21;
    ++v24;
    ++p_outLines;
    if ( v24 >= outLineCount )
      return (unsigned int)(v20 + 1);
    v25 = v33;
    v13 = (int)v36;
  }
  v22->text[0] = 0;
  ++v20;
  v33 = v25 + 2048;
  if ( v20 < maxPages )
  {
    v21 = 0;
    v22 = &v36[(__int64)v20];
    goto LABEL_23;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6243, ASSERT_TYPE_ASSERT, "(numPages < maxPages)", (const char *)&queryFormat, "numPages < maxPages") )
    __debugbreak();
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144466C30, 5653i64);
  return (unsigned int)maxPages;
}

/*
==============
LUI_Interface_Panic
==============
*/
void LUI_Interface_Panic(void)
{
  LUI_luaVM = NULL;
  LUI_LeaveCriticalSection();
  Com_PrintError(1, "LUI: Panic\n");
  LUI_ReportMemoryUsage();
  if ( s_luaInInitProcess )
    Sys_Error((const ObfuscateErrorText)&stru_144466AC0);
  else
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144466AA0);
}

/*
==============
LUI_Interface_RegisterFont
==============
*/
char LUI_Interface_RegisterFont(const char *fontName, GfxFont **output_font)
{
  *output_font = R_RegisterFont(fontName, 16);
  return 1;
}

/*
==============
LUI_Interface_RegisterMaterial
==============
*/
char LUI_Interface_RegisterMaterial(const char *materialName, const GfxImage **output_material)
{
  *output_material = Image_Register(materialName, IMAGE_TRACK_UI);
  return 1;
}

/*
==============
LUI_Interface_RestartLUI
==============
*/
void LUI_Interface_RestartLUI(bool errorRecovery)
{
  int i; 
  bool v3; 

  for ( i = 0; i < 2; ++i )
    CL_Keys_RemoveCatcher((LocalClientNum_t)i, -65);
  LUI_CoD_Shutdown();
  v3 = Com_FrontEnd_IsInFrontEnd();
  LUI_CoD_Init(v3, errorRecovery);
}

/*
==============
LUI_Interface_SetTextEditActive
==============
*/
void LUI_Interface_SetTextEditActive(LocalClientNum_t localClientNum, LUIElement *element, bool active, lua_State *luaVM)
{
  __int64 v4; 
  __int64 v8; 
  __int64 ControllerFromClient; 
  int textEditRef; 
  int *p_textEditRef; 
  int v13; 

  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  v8 = v4;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
  if ( active && element && LUI_ElementHasWeakTableEntry(element, luaVM) )
  {
    LUI_PutElementOnTopOfStack(element, luaVM);
    s_perController[ControllerFromClient].textEditRef = LUI_Ref_Monitor_AddRef(luaVM, -10000);
    j_lua_settop(luaVM, -2);
    clientUIActives[v8].keyCatchers |= 0x200u;
    g_editingField = 1;
  }
  else
  {
    textEditRef = s_perController[ControllerFromClient].textEditRef;
    p_textEditRef = &s_perController[ControllerFromClient].textEditRef;
    LUI_UnrefVerify<int (lua_State *,int)>(luaVM, -10000, textEditRef, j_lua_isuserdata);
    LUI_Ref_Monitor_RemoveRef(luaVM, -10000, *p_textEditRef);
    clientUIActives[v8].keyCatchers ^= 0x200u;
    *p_textEditRef = -2;
    g_editingField = 0;
  }
}

/*
==============
LUI_InvalidateAllDirectiveTextElements
==============
*/
void LUI_InvalidateAllDirectiveTextElements(const int controllerIndex)
{
  __int64 v1; 
  char *name; 
  bool *p_inUse; 
  __int64 v4; 
  LUIElement *RootElement; 

  v1 = controllerIndex;
  if ( LUI_luaVM )
  {
    if ( controllerIndex == -1 )
    {
      if ( s_luaInFrontend )
        goto LABEL_7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3980, ASSERT_TYPE_ASSERT, "(controllerIndex != -1 || s_luaInFrontend)", (const char *)&queryFormat, "controllerIndex != -1 || s_luaInFrontend") )
        __debugbreak();
    }
    if ( !s_luaInFrontend )
    {
      v4 = v1;
      name = s_rootData[v1].name;
      p_inUse = &s_rootData[v4].inUse;
LABEL_9:
      if ( *p_inUse )
      {
        LUI_EnterCriticalSection("LUI_InvalidateAllDirectiveTextElements");
        RootElement = LUI_GetRootElement(name, LUI_luaVM);
        LUI_InvalidateAllDirectiveTextElements_Internal(RootElement, LUI_luaVM);
        LUI_LeaveCriticalSection();
      }
      return;
    }
LABEL_7:
    name = s_fullscreenRootData.name;
    p_inUse = &s_fullscreenRootData.inUse;
    goto LABEL_9;
  }
}

/*
==============
LUI_InvalidateAllDirectiveTextElements_Internal
==============
*/
void LUI_InvalidateAllDirectiveTextElements_Internal(LUIElement *element, lua_State *luaVM)
{
  LUISharedTextRefIndex v4; 
  const char *v5; 
  char v6; 
  char v7; 
  char *v8; 
  int v9; 
  LUIElement *i; 

  if ( LUIElement_IsTextLike(element) )
  {
    v4 = *(unsigned __int16 *)element->textData.textRef;
    if ( (_WORD)v4 != INVALID_INDEX )
    {
      LUI_SharedTextRef_PushRefOnStack(luaVM, v4);
      if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3914, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
        __debugbreak();
      v5 = j_lua_tolstring(luaVM, -1, NULL);
      j_lua_settop(luaVM, -2);
      if ( v5 )
      {
        v6 = *v5;
        v7 = 0;
        if ( *v5 )
        {
          v8 = (char *)(v5 + 1);
          do
          {
            if ( v6 == 91 && *v8 == 123 )
            {
              v7 = 1;
            }
            else if ( v7 && v6 == 125 && *v8 == 93 )
            {
              LUI_QuadCache_Element_Invalidate(element);
              LUI_PutElementOnTopOfStack(element, luaVM);
              j_lua_getfield(luaVM, -1, "onDirectiveInvalidated");
              if ( j_lua_type(luaVM, -1) )
              {
                LUI_PutElementOnTopOfStack(element, luaVM);
                if ( LuaShared_PCall(luaVM, 1, 0) )
                  LUI_ReportError("Failed to call onDirectiveInvalidated on element.", luaVM);
                v9 = -2;
              }
              else
              {
                v9 = -3;
              }
              j_lua_settop(luaVM, v9);
              break;
            }
            v6 = *v8++;
          }
          while ( v6 );
        }
      }
    }
  }
  for ( i = element->firstChild; i; i = i->nextSibling )
    LUI_InvalidateAllDirectiveTextElements_Internal(i, luaVM);
}

/*
==============
LUI_IsMenuInStack
==============
*/
__int64 LUI_IsMenuInStack(LocalClientNum_t localClientNum, const char *menuName)
{
  unsigned int v5; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_IsMenuInStack");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v5 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "IsMenuInStack");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushstring(LUI_luaVM, menuName);
  if ( LuaShared_PCall(LUI_luaVM, 2, 1) )
  {
    LUI_ReportError("Error Checking For Menu in Stack", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'IsMenuInStack'\n");
    v5 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v5;
}

/*
==============
LUI_IsMenuOpenAndVisible
==============
*/
__int64 LUI_IsMenuOpenAndVisible(LocalClientNum_t localClientNum, const char *menuName)
{
  unsigned int v5; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  if ( !LUI_luaVM || DB_DevFastBoot_DevmapBootSkipUI() )
    return 0i64;
  LUI_EnterCriticalSection("LUI_IsMenuOpenAndVisible");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v5 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "IsMenuOpenAndVisible");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushstring(LUI_luaVM, menuName);
  if ( LuaShared_PCall(LUI_luaVM, 2, 1) )
  {
    LUI_ReportError("Error Checking For Open Visible Menu", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'IsMenuOpenAndVisible'\n");
    v5 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v5;
}

/*
==============
LUI_IsTopLocalSignInMenu
==============
*/
__int64 LUI_IsTopLocalSignInMenu(LocalClientNum_t localClientNum)
{
  unsigned int v3; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_IsTopLocalSignInMenu");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v3 = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "IsTopLocalSignInMenu");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking For Topmost Menu", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'LUI_IsTopLocalSignInMenu'\n");
    v3 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v3;
}

/*
==============
LUI_IsTopSignInMenu
==============
*/
__int64 LUI_IsTopSignInMenu()
{
  unsigned int v1; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_IsTopSignInMenu");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  v1 = 0;
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, s_fullscreenRootData.name);
  j_lua_getfield(LUI_luaVM, -10002, "IsTopSignInMenu");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    LUI_ReportError("Error Checking If Top is Sign In Menu\n", LUI_luaVM);
  }
  else
  {
    if ( j_lua_type(LUI_luaVM, -1) != 1 )
      j_luaL_error(LUI_luaVM, "Expecting a boolean on top of the stack after calling 'IsTopSignInMenu'\n");
    v1 = j_lua_toboolean(LUI_luaVM, -1);
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return v1;
}

/*
==============
LuiAlloc
==============
*/
void *LuiAlloc(void *ud, void *ptr, unsigned __int64 osize, unsigned __int64 nsize)
{
  void *result; 
  unsigned int v6; 
  unsigned int MemoryTotal; 

  s_tlsf_lua.currentLuaMemoryUsed += nsize - osize;
  if ( nsize )
  {
    if ( ptr && osize )
    {
      ++s_LUIAllocationsThisFrame;
      return j_tlsf_realloc(s_tlsf_lua.tlsf, ptr, nsize);
    }
    else
    {
      ++s_LUIAllocationsThisFrame;
      result = j_tlsf_malloc(s_tlsf_lua.tlsf, nsize);
      if ( !result && LUI_luaVM )
      {
        v6 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
        MemoryTotal = LUI_CoD_GetMemoryTotal();
        LUI_EmergencyFullGC(LUI_luaVM, "LuiAlloc - Emergency GC - Memory Bytes Available: %u - Memory Bytes Requested: %zu \n", MemoryTotal - v6, nsize);
        return j_tlsf_malloc(s_tlsf_lua.tlsf, nsize);
      }
    }
  }
  else if ( ptr )
  {
    j_tlsf_free(s_tlsf_lua.tlsf, ptr);
    return 0i64;
  }
  else
  {
    if ( osize )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 1777, ASSERT_TYPE_ASSERT, "(ptr == 0 && nsize == 0 && osize == 0)", "%s\n\tLuiAlloc: Something went wrong with allocations.", "ptr == 0 && nsize == 0 && osize == 0") )
        __debugbreak();
    }
    return 0i64;
  }
  return result;
}

