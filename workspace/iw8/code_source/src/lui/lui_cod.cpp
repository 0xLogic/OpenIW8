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
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  if ( !LUI_luaVM )
    return 0i64;
  LUI_EnterCriticalSection("LUI_COD_GetSwatchIntColor");
  if ( !LUI_luaVM )
  {
    LUI_LeaveCriticalSection();
    return 0i64;
  }
  _EDI = 0;
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
    *(double *)&_XMM0 = lui_tonumber32(LUI_luaVM, -1);
    __asm { vcvttss2si edi, xmm0 }
    j_lua_settop(LUI_luaVM, -2);
  }
  j_lua_settop(LUI_luaVM, -4);
  LUI_LeaveCriticalSection();
  return _EDI;
}

/*
==============
LUI_COD_GetSwatchRGBColor
==============
*/
void LUI_COD_GetSwatchRGBColor(LocalClientNum_t localClientNum, const char *swatchPath, vec3_t *rgbColor)
{
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 

  _RSI = rgbColor;
  if ( LUI_luaVM )
  {
    LUI_EnterCriticalSection("LUI_COD_GetSwatchIntColor");
    if ( LUI_luaVM )
    {
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
        *(double *)&_XMM0 = lui_tonumber32(LUI_luaVM, -1);
        __asm { vcvttss2si edi, xmm0 }
        j_lua_settop(LUI_luaVM, -2);
      }
      j_lua_settop(LUI_luaVM, -4);
      LUI_LeaveCriticalSection();
    }
    else
    {
      LUI_LeaveCriticalSection();
    }
  }
  __asm
  {
    vmovss  xmm2, cs:__real@3b808081
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rsi], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rsi+4], xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rsi+8], xmm1
  }
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
  __asm
  {
    vmovss  xmm1, [rsp+28h+outX]
    vmovss  xmm0, [rsp+28h+outY]
    vmovss  cs:s_perController.lastMouseX, xmm1
    vmovss  cs:s_perController.lastMouseY, xmm0
    vmovss  cs:s_perController.lastMouseX+20h, xmm1
    vmovss  cs:s_perController.lastMouseY+20h, xmm0
    vmovss  cs:s_perController.lastMouseX+40h, xmm1
    vmovss  cs:s_perController.lastMouseY+40h, xmm0
    vmovss  cs:s_perController.lastMouseX+60h, xmm1
    vmovss  cs:s_perController.lastMouseY+60h, xmm0
    vmovss  cs:s_perController.lastMouseX+80h, xmm1
    vmovss  cs:s_perController.lastMouseY+80h, xmm0
    vmovss  cs:s_perController.lastMouseX+0A0h, xmm1
    vmovss  cs:s_perController.lastMouseY+0A0h, xmm0
    vmovss  cs:s_perController.lastMouseX+0C0h, xmm1
    vmovss  cs:s_perController.lastMouseY+0C0h, xmm0
    vmovss  cs:s_perController.lastMouseX+0E0h, xmm1
    vmovss  cs:s_perController.lastMouseY+0E0h, xmm0
  }
}

/*
==============
LUI_CoD_AdjustRootAspectRatio
==============
*/

void __fastcall LUI_CoD_AdjustRootAspectRatio(float left, double top, double right, double bottom, float *topResult, float *bottomResult, tmat44_t<vec4_t> *projectionMatrixResult)
{
  tmat44_t<vec4_t> *v11; 
  signed int i; 
  unsigned int v25; 
  __int64 v35; 
  tmat44_t<vec4_t> *v36; 
  tmat44_t<vec4_t> mtx; 
  char v38; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  v11 = projectionMatrixResult;
  _RBX = topResult;
  _RDI = bottomResult;
  __asm
  {
    vmovaps xmm6, xmm1
    vsubss  xmm1, xmm2, xmm0
    vsubss  xmm0, xmm3, xmm6
    vdivss  xmm8, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm8, xmm1
    vmovaps xmm7, xmm3
  }
  v36 = projectionMatrixResult;
  if ( (unsigned __int64)&v35 == _security_cookie && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2082, ASSERT_TYPE_ASSERT, "(aspectRatio > 0.0f)", (const char *)&queryFormat, "aspectRatio > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, cs:__real@3e8833fa; tanHalfFovY
    vmovss  xmm3, cs:__real@42c80000; zFar
    vmovss  xmm2, cs:__real@40000000; zNear
    vmovss  dword ptr [rbx], xmm6
    vmulss  xmm0, xmm8, xmm1; tanHalfFovX
    vmovss  dword ptr [rdi], xmm7
  }
  FinitePerspectiveMatrix(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &mtx);
  for ( i = 0; (unsigned int)i < 4; ++i )
  {
    v25 = 0;
    _R15 = 4i64 * i;
    _R14 = &v11->m[i];
    do
    {
      _RBP = (int)v25;
      _RSI = &mtx.m[v25];
      __asm { vmovss  xmm6, dword ptr [r15+rsi] }
      ++v25;
      __asm { vmovss  dword ptr [r14+rbp*4], xmm6 }
    }
    while ( v25 < 4 );
    v11 = v36;
  }
  _R11 = &v38;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  cs:s_fullscreenRootData.worldBlurRadius, xmm0
  }
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

void __fastcall LUI_CoD_CreateClientRoots(double _XMM0_8, double _XMM1_8, double _XMM2_8)
{
  LocalClientNum_t v6; 
  int v7; 
  int v8; 
  int ControllerFromClient; 
  int v11; 
  __int64 v12; 
  const char *LastStackTraceBuffer; 
  bool IsClientActive; 
  PublisherVariableManager *Instance; 
  bool HasRetrievedVariables; 
  const dvar_t *v26; 
  bool v27; 
  int v28; 
  int v29; 
  BOOL v30; 
  unsigned __int8 ActiveGameMode; 
  lua_State *v32; 
  LocalClientNum_t v33; 
  float fmta; 
  char *fmt; 
  __int64 controllerIndex; 
  __int64 v37; 
  char dest[192]; 

  LUI_EnterCriticalSection("LUI_CoD_CreateClientRoots");
  if ( LUI_luaVM )
  {
    v6 = LOCAL_CLIENT_0;
    v7 = 0;
    v8 = 0;
    __asm
    {
      vmovaps [rsp+198h+var_58], xmm8
      vmovss  xmm8, cs:__real@3fd55555
      vmovaps [rsp+198h+var_38], xmm6
      vmovaps [rsp+198h+var_48], xmm7
    }
    do
    {
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)v7) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
        v11 = ControllerFromClient;
        if ( ControllerFromClient != -1 )
        {
          v12 = ControllerFromClient;
          Com_sprintf(s_rootData[v12].name, 0x20ui64, "UIRoot%d", (unsigned int)ControllerFromClient);
          if ( !s_rootData[v12].inUse )
          {
            s_rootData[v12].inUse = 1;
            CG_GetLocalClientViewParams((LocalClientNum_t)v7);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, rcx
              vmulss  xmm6, xmm0, dword ptr [rax+8]
              vxorps  xmm1, xmm1, xmm1
              vcvtsi2ss xmm1, xmm1, rcx
              vmulss  xmm7, xmm1, dword ptr [rax+0Ch]
            }
            if ( LUI_CoD_UsingSplitscreenUpscaling() )
            {
              __asm
              {
                vmulss  xmm6, xmm6, xmm8
                vmulss  xmm7, xmm7, xmm8
              }
            }
            __asm
            {
              vmovaps xmm3, xmm6; right
              vxorps  xmm2, xmm2, xmm2; top
              vxorps  xmm1, xmm1, xmm1; left
              vmovss  dword ptr [rsp+198h+fmt], xmm7
            }
            LUI_CoD_CreateRoot(&s_rootData[v12], *(float *)&_XMM1_8, *(float *)&_XMM2_8, *(float *)&_XMM3, fmta, v11);
          }
          ++v8;
        }
      }
      ++v7;
    }
    while ( v7 < 2 );
    __asm
    {
      vmovaps xmm8, [rsp+198h+var_58]
      vmovaps xmm7, [rsp+198h+var_48]
      vmovaps xmm6, [rsp+198h+var_38]
    }
    if ( v8 <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2623, ASSERT_TYPE_ASSERT, "(numRootsInUse > 0)", (const char *)&queryFormat, "numRootsInUse > 0") )
        __debugbreak();
      LastStackTraceBuffer = Com_GetLastStackTraceBuffer();
      IsClientActive = CL_Mgr_IsClientActive(LOCAL_CLIENT_1);
      Instance = PublisherVariableManager::GetInstance();
      HasRetrievedVariables = PublisherVariableManager::HasRetrievedVariables(Instance);
      v26 = DVARBOOL_onlinegame;
      v27 = HasRetrievedVariables;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      v28 = v26->current.color[0];
      v29 = s_lastDeactivateClientTimestamp;
      v30 = CL_Mgr_IsClientActive(LOCAL_CLIENT_0);
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      LODWORD(v37) = 0;
      LODWORD(controllerIndex) = IsClientActive;
      LODWORD(fmt) = v30;
      Com_sprintf(dest, 0xC0ui64, "Error while creating client roots. Game Mode: %d, Client 0 active: %d, Client 1 active: %d, Is PS4: %d, Is PC: %d, Is XB3: %d Reason : %s Time %d Pub: %d OG: %d\n", ActiveGameMode, fmt, controllerIndex, v37, 0, 1, s_lastDeactivateClientReason, v29, v27, v28);
      if ( LUI_CoD_LUIRootDLogEnabled() )
        DLog_RecordErrorEvent(DLOG_ERROR_CODE_LUA, dest, LastStackTraceBuffer);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_DEFAULT_t)0x200000, dest);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144465438);
    }
    v32 = LUI_luaVM;
    FontCache_CancelPreCacheGlyphs();
    v33 = s_currentLocalClientRoot;
    if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0)].inUse )
      v6 = LOCAL_CLIENT_INVALID;
    s_currentLocalClientRoot = v6;
    j_lua_getfield(v32, -10002, "PreCacheGlyphs");
    if ( j_lua_type(v32, -1) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2515, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 6))", (const char *)&queryFormat, "lua_isfunction( luaVM, -1 )") )
      __debugbreak();
    if ( LuaShared_PCall(LUI_luaVM, 0, 0) )
      LUI_ReportError("Error precaching glyphs\n", v32);
    if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(v33)].inUse )
      v33 = LOCAL_CLIENT_INVALID;
    s_currentLocalClientRoot = v33;
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_CoD_CreateRoot
==============
*/

void __fastcall LUI_CoD_CreateRoot(LUIRootData *rootData, double left, double top, double right, float bottom, int controllerIndex)
{
  LocalClientNum_t ClientFromController; 
  float fmt; 
  float bottomResult; 
  float projectionMatrixResult; 
  float topResult; 

  __asm
  {
    vmovss  [rsp+topResult], xmm2
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( rootData == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2099, ASSERT_TYPE_ASSERT, "(rootData->name)", (const char *)&queryFormat, "rootData->name") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, [rsp+78h+bottom]; bottom
    vmovaps xmm2, xmm7; right
    vmovaps xmm1, xmm6; top
    vmovaps xmm0, xmm8; left
  }
  *(_WORD *)&rootData->forceFullscreen = 256;
  LUI_CoD_AdjustRootAspectRatio(*(float *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &topResult, &bottom, &rootData->projectionMatrix);
  ClientFromController = LOCAL_CLIENT_INVALID;
  if ( controllerIndex >= 0 )
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_luaInFrontend || !s_rootData[CL_Mgr_GetControllerFromClient(ClientFromController)].inUse )
    ClientFromController = LOCAL_CLIENT_INVALID;
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vmovss  xmm1, [rsp+78h+bottom]
    vmovss  xmm3, [rsp+78h+topResult]; top
    vmovss  dword ptr [rsp+78h+projectionMatrixResult], xmm0
    vmovss  dword ptr [rsp+78h+bottomResult], xmm1
    vmovaps xmm2, xmm8; left
    vmovss  dword ptr [rsp+78h+fmt], xmm7
  }
  s_currentLocalClientRoot = ClientFromController;
  LUI_CreateRoot(controllerIndex, rootData, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, bottomResult, projectionMatrixResult, LUI_luaVM);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
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

bool __fastcall LUI_CoD_DetermineFontSizeAndScale(LUIElement *element, double x, double y, double elementHeight, int *outFontRenderSize, float *outFontRenderScale, int *outFontLayoutSize, float *outFontLayoutScale, float *outRotation, float *outElementHeightOnScreen)
{
  bool v25; 
  char v54; 
  bool result; 
  vec2_t vec; 
  vec4_t quadVerts[4]; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RDI = element;
  _RBP = outFontRenderScale;
  _R12 = outFontLayoutScale;
  _R13 = outRotation;
  _RSI = outElementHeightOnScreen;
  __asm
  {
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm7, xmm1
  }
  if ( !LUIElement_IsTextLike(element) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7150, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  __asm { vaddss  xmm2, xmm7, cs:__real@3f800000; right }
  v25 = LUI_Is3DTransformEnabled();
  __asm
  {
    vsubss  xmm1, xmm6, xmm8; top
    vmovaps xmm3, xmm6; bottom
    vmovaps xmm0, xmm7; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+quadVerts+34h]
    vsubss  xmm4, xmm0, dword ptr [rsp+108h+quadVerts+4]
    vmovss  xmm1, dword ptr [rsp+108h+quadVerts+38h]
    vsubss  xmm3, xmm1, dword ptr [rsp+108h+quadVerts+8]
    vmovss  xmm0, dword ptr [rsp+108h+quadVerts+30h]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+quadVerts]
    vmulss  xmm2, xmm1, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
    vmovss  xmm9, cs:__real@42c80000
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm10, cs:__real@3c23d70a
    vmulss  xmm1, xmm2, xmm2
    vmovss  dword ptr [rsp+108h+vec], xmm2
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmulss  xmm1, xmm0, xmm9
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm1, xmm7
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+108h+var_D0], xmm3
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si eax, xmm3
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, xmm10
    vmovss  dword ptr [rsi], xmm0
    vmovss  dword ptr [rsp+108h+vec+4], xmm4
  }
  if ( v25 || (_RDI->usageFlags & 0x1000) != 0 )
  {
    _EAX = FontCache_GetMinHeightForDistanceField();
  }
  else
  {
    LUI_Render_GetCurrentUnitScale();
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+11Ch]
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm2, xmm1
    }
    if ( v54 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rsi]
        vdivss  xmm2, xmm1, xmm0
        vmovss  dword ptr [rdi+11Ch], xmm2
      }
    }
    __asm
    {
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm2, xmm0, xmm7
      vroundss xmm0, xmm6, xmm2, 1
      vcvttss2si eax, xmm0
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
  }
  *outFontRenderSize = _EAX;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vdivss  xmm1, xmm0, xmm1
    vmovss  dword ptr [rbp+0], xmm1
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm2, xmm8, xmm7
    vmovss  xmm1, xmm0, xmm2
    vroundss xmm3, xmm6, xmm1, 1
    vxorps  xmm1, xmm1, xmm1
    vcvttss2si ecx, xmm3
  }
  *outFontLayoutSize = _ECX;
  __asm
  {
    vmulss  xmm0, xmm8, xmm9
    vaddss  xmm2, xmm0, xmm7
    vmovss  xmm2, xmm1, xmm2
    vroundss xmm0, xmm6, xmm2, 1
    vcvttss2si eax, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, ecx
    vmulss  xmm2, xmm0, xmm10
    vdivss  xmm2, xmm2, xmm1
    vmovss  dword ptr [r12], xmm2
  }
  *(double *)&_XMM0 = vectoyaw(&vec);
  __asm
  {
    vsubss  xmm1, xmm0, cs:__real@42b40000
    vmovss  dword ptr [r13+0], xmm1
  }
  result = 1;
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return result;
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

void __fastcall LUI_CoD_DrawAttachmentsReference(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const dvar_t *v3; 
  int ControllerFromClient; 
  __int64 v6; 
  LUIRootData *RootDataForController; 
  const char *v8; 
  const ScreenPlacement *ActivePlacement; 
  float v13; 
  unsigned __int64 len; 
  char dest[1024]; 

  v3 = DVARBOOL_lui_attachments_ref;
  if ( !DVARBOOL_lui_attachments_ref && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_attachments_ref") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    LUI_EnterCriticalSection("LUI_CoD_DrawAttachmentsReference");
    if ( LUI_luaVM )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      v6 = ControllerFromClient;
      RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
      j_lua_getfield(LUI_luaVM, -10002, "LUI");
      j_lua_getfield(LUI_luaVM, -1, "roots");
      j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
      j_lua_getfield(LUI_luaVM, -10002, "GetAttachmentsReference");
      j_lua_pushinteger(LUI_luaVM, v6);
      if ( LuaShared_PCall(LUI_luaVM, 1, 1) )
      {
        LUI_ReportError("Error Checking For Attachments Reference\n", LUI_luaVM);
LABEL_11:
        j_lua_settop(LUI_luaVM, -5);
        LUI_LeaveCriticalSection();
        ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
        Com_sprintf(dest, 0x400ui64, (const char *)&queryFormat, dest);
        __asm
        {
          vmovss  xmm0, cs:__real@41400000
          vmovss  xmm1, cs:__real@42480000; x
          vmovss  [rsp+478h+var_440], xmm0
          vxorps  xmm2, xmm2, xmm2; y
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorGreen, 0, 1, v13, 0);
        return;
      }
      if ( j_lua_isstring(LUI_luaVM, -1) )
      {
        v8 = j_lua_tolstring(LUI_luaVM, -1, &len);
        if ( v8 )
          Core_strcpy(dest, 0x400ui64, v8);
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

void __fastcall LUI_CoD_DrawFrontendWeaponModelName(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  const dvar_t *v3; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v7; 
  const ScreenPlacement *ActivePlacement; 
  float v12; 
  unsigned __int64 len; 
  char dest[1024]; 

  v3 = DVARBOOL_lui_frontscene_weapon_model;
  if ( !DVARBOOL_lui_frontscene_weapon_model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_frontscene_weapon_model") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
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
        __asm
        {
          vmovss  xmm0, cs:__real@41000000
          vmovss  xmm1, cs:__real@42480000; x
          vmovss  [rsp+478h+var_440], xmm0
          vxorps  xmm2, xmm2, xmm2; y
        }
        CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorGreen, 0, 1, v12, 0);
        return;
      }
      if ( j_lua_isstring(LUI_luaVM, -1) )
      {
        v7 = j_lua_tolstring(LUI_luaVM, -1, &len);
        if ( v7 )
          Core_strcpy(dest, 0x400ui64, v7);
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
  const dvar_t *v4; 
  __int64 v5; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v8; 
  unsigned int v9; 
  char *v11; 
  bool v14; 
  const ScreenPlacement *v15; 
  __int64 v16; 
  float v22; 
  unsigned __int64 len; 
  char string[256]; 
  char dest[4096]; 

  v4 = DVARBOOL_lui_icon_streamer_info;
  v5 = localClientNum;
  if ( !DVARBOOL_lui_icon_streamer_info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_icon_streamer_info") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return;
  LUI_EnterCriticalSection("LUI_CoD_DrawLuiDynIconStreamerInfo");
  if ( !LUI_luaVM )
    goto LABEL_27;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetLuiImageStreamersInfo");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( !LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    if ( j_lua_isstring(LUI_luaVM, -1) )
    {
      v8 = j_lua_tolstring(LUI_luaVM, -1, &len);
      if ( v8 )
        Core_strcpy(dest, 0x1000ui64, v8);
      goto LABEL_11;
    }
    j_lua_settop(LUI_luaVM, -5);
LABEL_27:
    LUI_LeaveCriticalSection();
    return;
  }
  LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
LABEL_11:
  __asm { vmovaps [rsp+11C8h+var_38], xmm6 }
  j_lua_settop(LUI_luaVM, -5);
  LUI_LeaveCriticalSection();
  v9 = 1;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v11 = strtok(dest, ";");
  if ( !v11 )
    goto LABEL_22;
  __asm
  {
    vmovaps [rsp+11C8h+var_48], xmm7
    vmovss  xmm7, cs:__real@41400000
    vmovaps [rsp+11C8h+var_58], xmm8
    vmovss  xmm8, cs:__real@43200000
  }
  do
  {
    if ( activeScreenPlacementMode == SCRMODE_FULL )
      goto LABEL_19;
    if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
    {
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v14 )
        __debugbreak();
LABEL_19:
      v15 = &scrPlaceFull;
      goto LABEL_20;
    }
    v15 = &scrPlaceViewDisplay[v5];
LABEL_20:
    v16 = v9++;
    Com_sprintf(string, 0x100ui64, "%d ) ---------- %s", v16, v11);
    __asm
    {
      vmovss  [rsp+11C8h+var_1190], xmm7
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
    }
    CG_DrawStringExt(v15, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorGreen, 0, 1, v22, 0);
    __asm { vaddss  xmm6, xmm6, xmm7 }
    v11 = strtok(NULL, ";");
  }
  while ( v11 );
  __asm
  {
    vmovaps xmm8, [rsp+11C8h+var_58]
    vmovaps xmm7, [rsp+11C8h+var_48]
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+11C8h+var_38] }
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
  const dvar_t *v4; 
  float v20; 
  float v21; 
  vec2_t origin; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm7
  }
  v4 = DVARBOOL_lui_memgraph;
  if ( !DVARBOOL_lui_memgraph && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_memgraph") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( !s_luiMemGraphInited )
    {
      s_luiMemGraphInited = 1;
      __asm
      {
        vmovss  xmm6, cs:__real@44160000
        vmovss  dword ptr [rsp+88h+origin], xmm6
        vmovss  xmm0, cs:__real@43200000
        vmovss  dword ptr [rsp+88h+origin+4], xmm0
        vmovss  xmm7, cs:__real@459c4000
        vmovss  [rsp+88h+var_50], xmm7
      }
      CG_InitDebugBufferData(&s_luiMemGraph, &origin, 700, 150, "mem", 300, 1, v20);
      __asm
      {
        vmovss  dword ptr [rsp+88h+origin], xmm6
        vmovss  xmm0, cs:__real@43aa0000
        vmovss  dword ptr [rsp+88h+origin+4], xmm0
        vmovss  [rsp+88h+var_50], xmm7
      }
      CG_InitDebugBufferData(&s_luiMemGraph2, &origin, 700, 150, "elems", 300, 1, v21);
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
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, ecx
    }
    timeLast_1 = Sys_Milliseconds();
    truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, rcx
    }
    LUI_CoD_GetMemoryTotal();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vdivss  xmm1, xmm6, xmm0; data
      vmovaps xmm2, xmm7; dTime
    }
    CG_AddDebugBufferData(&s_luiMemGraph, *(float *)&_XMM1, *(float *)&_XMM2);
    LUI_GetAllocatedElements();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@39690453; data
      vmovaps xmm2, xmm7; dTime
    }
    CG_AddDebugBufferData(&s_luiMemGraph2, *(float *)&_XMM1, *(float *)&_XMM2);
    CG_DebugBufferDraw(&s_luiMemGraph);
    CG_DebugBufferDraw(&s_luiMemGraph2);
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm7, [rsp+88h+var_28]
  }
}

/*
==============
LUI_CoD_DrawMemoryReport
==============
*/

void __fastcall LUI_CoD_DrawMemoryReport(const LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  int v9; 
  const ScreenPlacement *ActivePlacement; 
  char v11; 
  unsigned int AllocatedElements; 
  const vec4_t *v18; 
  const vec4_t *v19; 
  unsigned int NumTweensInUse; 
  char v24; 
  int NumTweensTotal; 
  const vec4_t *v31; 
  unsigned int NumModelsInUse; 
  char v35; 
  int NumModelsTotal; 
  const vec4_t *v42; 
  unsigned int NumSubscriptionsInUse; 
  char v46; 
  int NumSubscriptionsTotal; 
  const vec4_t *v53; 
  unsigned int NumHoldersInUse; 
  char v57; 
  int NumHoldersTotal; 
  const vec4_t *v64; 
  unsigned int v67; 
  unsigned int MemoryTotal; 
  bool v69; 
  unsigned int v70; 
  const vec4_t *v76; 
  float *v81; 
  char v92; 
  char v93; 
  const vec4_t *v95; 
  char v103; 
  char v104; 
  int setColore; 
  vec4_t *setColor; 
  vec4_t *setColora; 
  vec4_t *setColorb; 
  vec4_t *setColorc; 
  vec4_t *setColord; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  float v125; 
  float v126; 
  float v127; 
  char dest[256]; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( lui_drawmemreport->current.enabled )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
    }
    v9 = Sys_Milliseconds();
    ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
    AllocatedElements = LUI_GetAllocatedElements();
    __asm
    {
      vmovss  xmm8, cs:__real@3f000000
      vmovss  xmm6, cs:__real@3f400000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@39690453
      vcomiss xmm1, xmm8
    }
    v18 = &colorOrange;
    if ( v11 )
    {
      v19 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm1, xmm6 }
      v19 = &colorRed;
      if ( v11 )
        v19 = &colorOrange;
    }
    setColore = 4500;
    Com_sprintf(dest, 0x100ui64, "LUI Elements: %d / %d", AllocatedElements, setColore);
    __asm
    {
      vmovss  xmm7, cs:__real@41400000
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm2, xmm2, xmm2; y
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v19, 0, 1, v118, 0);
    NumTweensInUse = LUI_Tween_GetNumTweensInUse();
    NumTweensTotal = LUI_Tween_GetNumTweensTotal();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebp
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( v24 )
    {
      v31 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm2, xmm6 }
      v31 = &colorRed;
      if ( v24 )
        v31 = &colorOrange;
    }
    LODWORD(setColor) = NumTweensTotal;
    Com_sprintf(dest, 0x100ui64, "Tweens: %d / %d", NumTweensInUse, setColor);
    __asm
    {
      vmovss  [rsp+1B8h+var_180], xmm7
      vmovaps xmm2, xmm7; y
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v31, 0, 1, v119, 0);
    NumModelsInUse = LUI_Model_GetNumModelsInUse();
    NumModelsTotal = LUI_Model_GetNumModelsTotal();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebp
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( v35 )
    {
      v42 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm2, xmm6 }
      v42 = &colorRed;
      if ( v35 )
        v42 = &colorOrange;
    }
    LODWORD(setColora) = NumModelsTotal;
    Com_sprintf(dest, 0x100ui64, "Models: %d / %d", NumModelsInUse, setColora);
    __asm
    {
      vmovss  xmm2, cs:__real@41c00000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v42, 0, 1, v120, 0);
    NumSubscriptionsInUse = LUI_Model_GetNumSubscriptionsInUse();
    NumSubscriptionsTotal = LUI_Model_GetNumSubscriptionsTotal();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebp
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( v46 )
    {
      v53 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm2, xmm6 }
      v53 = &colorRed;
      if ( v46 )
        v53 = &colorOrange;
    }
    LODWORD(setColorb) = NumSubscriptionsTotal;
    Com_sprintf(dest, 0x100ui64, "Subscriptions: %d / %d", NumSubscriptionsInUse, setColorb);
    __asm
    {
      vmovss  xmm2, cs:__real@42100000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v53, 0, 1, v121, 0);
    NumHoldersInUse = LUI_SubscriptionsHolder_GetNumHoldersInUse();
    NumHoldersTotal = LUI_SubscriptionsHolder_GetNumHoldersTotal();
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebp
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( v57 )
    {
      v64 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm2, xmm6 }
      v64 = &colorRed;
      if ( v57 )
        v64 = &colorOrange;
    }
    LODWORD(setColorc) = NumHoldersTotal;
    Com_sprintf(dest, 0x100ui64, "Subscriptions Holders: %d / %d", NumHoldersInUse, setColorc);
    __asm
    {
      vmovss  xmm2, cs:__real@42400000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v64, 0, 1, v122, 0);
    v67 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed) >> 10;
    MemoryTotal = LUI_CoD_GetMemoryTotal();
    v69 = __CFSHR__(MemoryTotal, 10);
    v70 = MemoryTotal >> 10;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, ebp
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm2, xmm1, xmm0
      vcomiss xmm2, xmm8
    }
    if ( v69 )
    {
      v76 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm2, xmm6 }
      v76 = &colorRed;
      if ( v69 )
        v76 = &colorOrange;
    }
    LODWORD(setColord) = v70;
    Com_sprintf(dest, 0x100ui64, "Lua memory: %d / %d KB", v67, setColord);
    __asm
    {
      vmovss  xmm2, cs:__real@42700000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v76, 0, 1, v123, 0);
    Com_sprintf(dest, 0x100ui64, "Allocations this frame: %d", (unsigned int)s_LUIAllocationsThisFrame);
    __asm
    {
      vmovss  xmm2, cs:__real@42900000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhiteFaded, 0, 1, v124, 0);
    v81 = &s_luiLastUpdateFrameDuration[4];
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm2, xmm2, xmm2
    }
    do
    {
      __asm
      {
        vaddps  xmm1, xmm1, xmmword ptr [rax-10h]
        vaddps  xmm2, xmm2, xmmword ptr [rax]
      }
      v81 += 8;
    }
    while ( (__int64)v81 < (__int64)&unk_15453D300 );
    __asm
    {
      vaddps  xmm1, xmm1, xmm2
      vmovhlps xmm0, xmm1, xmm1
      vaddps  xmm2, xmm0, xmm1
      vshufps xmm0, xmm2, xmm2, 0F5h ; 'õ'
      vaddss  xmm2, xmm2, xmm0
      vmulss  xmm6, xmm2, cs:__real@3d000000
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "UI Frame duration average: %.2fms", *(double *)&_XMM3);
    __asm
    {
      vcomiss xmm6, cs:__real@40e00000
      vmovss  xmm8, cs:__real@41200000
    }
    if ( v92 | v93 )
    {
      v95 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm6, xmm8 }
      v95 = &colorOrange;
      if ( !(v92 | v93) )
        v95 = &colorRed;
    }
    __asm
    {
      vmovss  xmm2, cs:__real@42a80000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v95, 0, 1, v125, 0);
    LODWORD(_RAX) = s_luiLastUpdateFrameDuration_nextIndex - 1;
    if ( s_luiLastUpdateFrameDuration_nextIndex - 1 < 0 )
      LODWORD(_RAX) = 31;
    _RCX = s_luiLastUpdateFrameDuration;
    _RAX = (int)_RAX;
    __asm
    {
      vmovss  xmm6, dword ptr [rcx+rax*4]
      vcvtss2sd xmm3, xmm6, xmm6
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x100ui64, "Last UI Frame duration: %.2fms", _R9);
    __asm { vcomiss xmm6, cs:__real@40e00000 }
    if ( v103 | v104 )
    {
      v18 = &colorGreen;
    }
    else
    {
      __asm { vcomiss xmm6, xmm8 }
      if ( !(v103 | v104) )
        v18 = &colorRed;
    }
    __asm
    {
      vmovss  xmm2, cs:__real@42c00000; y
      vmovss  [rsp+1B8h+var_180], xmm7
      vxorps  xmm1, xmm1, xmm1; x
    }
    CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, v18, 0, 1, v126, 0);
    __asm
    {
      vmovaps xmm8, [rsp+1B8h+var_58]
      vmovaps xmm6, [rsp+1B8h+var_38]
    }
    s_LUIAllocationsThisFrame = 0;
    if ( v9 - s_luaLastEmergencyGC < 1500 )
    {
      Com_sprintf(dest, 0x100ui64, "Emergency garbage collection occurred");
      __asm
      {
        vmovss  xmm2, cs:__real@42d80000; y
        vmovss  [rsp+1B8h+var_180], xmm7
        vxorps  xmm1, xmm1, xmm1; x
      }
      CG_DrawStringExt(ActivePlacement, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorRed, 0, 1, v127, 0);
    }
    __asm { vmovaps xmm7, [rsp+1B8h+var_48] }
  }
}

/*
==============
LUI_CoD_DrawStackMenuNames
==============
*/
void LUI_CoD_DrawStackMenuNames(const LocalClientNum_t localClientNum)
{
  const dvar_t *v4; 
  __int64 v5; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  const char *v8; 
  unsigned int v9; 
  char *v11; 
  bool v14; 
  const ScreenPlacement *v15; 
  __int64 v16; 
  float v22; 
  unsigned __int64 len; 
  char string[256]; 
  char dest[1024]; 

  v4 = DVARBOOL_lui_menustack_names;
  v5 = localClientNum;
  if ( !DVARBOOL_lui_menustack_names && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_menustack_names") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return;
  LUI_EnterCriticalSection("LUI_CoD_DrawStackMenuNames");
  if ( !LUI_luaVM )
    goto LABEL_27;
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v5);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, RootDataForController->name);
  j_lua_getfield(LUI_luaVM, -10002, "GetAllMenuNames");
  j_lua_pushvalue(LUI_luaVM, -2);
  if ( !LuaShared_PCall(LUI_luaVM, 1, 1) )
  {
    if ( j_lua_isstring(LUI_luaVM, -1) )
    {
      v8 = j_lua_tolstring(LUI_luaVM, -1, &len);
      if ( v8 )
        Core_strcpy(dest, 0x400ui64, v8);
      goto LABEL_11;
    }
    j_lua_settop(LUI_luaVM, -5);
LABEL_27:
    LUI_LeaveCriticalSection();
    return;
  }
  LUI_ReportError("Error Checking For Visible Menu\n", LUI_luaVM);
LABEL_11:
  __asm { vmovaps [rsp+5C8h+var_38], xmm6 }
  j_lua_settop(LUI_luaVM, -5);
  LUI_LeaveCriticalSection();
  v9 = 1;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  v11 = strtok(dest, ";");
  if ( !v11 )
    goto LABEL_22;
  __asm
  {
    vmovaps [rsp+5C8h+var_48], xmm7
    vmovss  xmm7, cs:__real@41400000
    vmovaps [rsp+5C8h+var_58], xmm8
    vmovss  xmm8, cs:__real@43200000
  }
  do
  {
    if ( activeScreenPlacementMode == SCRMODE_FULL )
      goto LABEL_19;
    if ( activeScreenPlacementMode != SCRMODE_DISPLAY )
    {
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v14 )
        __debugbreak();
LABEL_19:
      v15 = &scrPlaceFull;
      goto LABEL_20;
    }
    v15 = &scrPlaceViewDisplay[v5];
LABEL_20:
    v16 = v9++;
    Com_sprintf(string, 0x100ui64, "%d ) ---------- %s", v16, v11);
    __asm
    {
      vmovss  [rsp+5C8h+var_590], xmm7
      vmovaps xmm2, xmm6; y
      vmovaps xmm1, xmm8; x
    }
    CG_DrawStringExt(v15, *(float *)&_XMM1, *(float *)&_XMM2, string, &colorGreen, 0, 1, v22, 0);
    __asm { vaddss  xmm6, xmm6, xmm7 }
    v11 = strtok(NULL, ";");
  }
  while ( v11 );
  __asm
  {
    vmovaps xmm8, [rsp+5C8h+var_58]
    vmovaps xmm7, [rsp+5C8h+var_48]
  }
LABEL_22:
  __asm { vmovaps xmm6, [rsp+5C8h+var_38] }
}

/*
==============
LUI_CoD_DrawText_ComputeLineXPosition
==============
*/

double __fastcall LUI_CoD_DrawText_ComputeLineXPosition(double x, double textWidth, double boxWidth, LUIHorizontalAlignment alignment, AutoScrollStyle *autoScrollStyle)
{
  bool v6; 
  bool v7; 
  char v8; 
  char v10; 

  __asm { vmovaps xmm3, xmm0 }
  if ( autoScrollStyle && (v6 = autoScrollStyle->options.direction[0] == 0, v7 = autoScrollStyle->options.direction[0] <= 1u, autoScrollStyle->options.direction[0] == 1) )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    v6 = 0;
    v7 = 1;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
  }
  if ( v7 )
    goto LABEL_8;
  __asm { vcomiss xmm2, xmm1 }
  if ( !v6 )
LABEL_8:
    v10 = 0;
  else
    v10 = 1;
  if ( v8 && v10 )
  {
    __asm { vmovaps xmm0, xmm3; x }
    *(double *)&_XMM0 = LUI_AutoScroll_ComputeLineXPosition(*(float *)&_XMM0, *(float *)&textWidth, *(float *)&boxWidth, alignment, autoScrollStyle);
  }
  else if ( alignment == RIGHT )
  {
    __asm
    {
      vsubss  xmm0, xmm2, xmm1
      vmulss  xmm1, xmm0, cs:__real@3f000000
      vaddss  xmm0, xmm1, xmm3
    }
  }
  else if ( alignment == 2 )
  {
    __asm
    {
      vaddss  xmm0, xmm3, xmm2
      vsubss  xmm0, xmm0, xmm1
    }
  }
  else
  {
    __asm { vmovaps xmm0, xmm3 }
  }
  return *(double *)&_XMM0;
}

/*
==============
LUI_CoD_DrawText_ComputeYOffset
==============
*/

float __fastcall LUI_CoD_DrawText_ComputeYOffset(double lineHeight, char leading, int numLines, AutoScrollStyle *autoScrollStyle, LUIVerticalAlignment verticalAlignment)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps xmm7, xmm0
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm2, xmm2, xmm2
  }
  if ( autoScrollStyle && autoScrollStyle->options.direction[0] == 2 )
  {
    lineHeight = LUI_AutoScroll_ComputeLineYOffset(*(float *)&lineHeight, numLines, autoScrollStyle, verticalAlignment);
    __asm { vmovaps xmm2, xmm0 }
  }
  if ( numLines <= 1 )
    goto LABEL_9;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm7
  }
  if ( verticalAlignment == CENTER )
  {
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@bf000000
      vaddss  xmm0, xmm0, xmm2
      vmovaps xmm6, [rsp+48h+var_18]
      vmovaps xmm7, [rsp+48h+var_28]
    }
    return *(float *)&_XMM0;
  }
  if ( verticalAlignment != BOTTOM )
  {
LABEL_9:
    __asm
    {
      vmovaps xmm7, [rsp+48h+var_28]
      vaddss  xmm0, xmm6, xmm2
      vmovaps xmm6, [rsp+48h+var_18]
    }
    return *(float *)&_XMM0;
  }
  __asm
  {
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm0, xmm0, xmm2
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
  return *(float *)&_XMM0;
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

void __fastcall LUI_CoD_GenerateQuadVerts(double left, double top, double right, double bottom, vec4_t (*quadVerts)[4])
{
  __int64 v23; 

  _RBX = quadVerts;
  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps [rsp+78h+var_48], xmm9
    vmovaps xmm9, xmm0
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6276, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts") )
    __debugbreak();
  if ( !LUI_GetCurrentMenuTransform() )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f000000
      vaddss  xmm0, xmm9, xmm2
      vaddss  xmm1, xmm8, xmm2
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm9, xmm9, xmm0, 1
      vaddss  xmm0, xmm7, xmm2
      vroundss xmm8, xmm8, xmm1, 1
      vaddss  xmm1, xmm6, xmm2
      vxorps  xmm7, xmm7, xmm7
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm7, xmm7, xmm0, 1
      vroundss xmm6, xmm6, xmm1, 1
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx], xmm9
    vmovss  dword ptr [rbx+4], xmm8
  }
  (*quadVerts)[0].v[3] = 1.0;
  (*quadVerts)[0].v[2] = 0.0;
  __asm
  {
    vmovss  dword ptr [rbx+10h], xmm7
    vmovss  dword ptr [rbx+14h], xmm8
  }
  (*quadVerts)[1].v[2] = 0.0;
  v23 = 4i64;
  (*quadVerts)[1].v[3] = 1.0;
  __asm
  {
    vmovss  dword ptr [rbx+20h], xmm7
    vmovss  dword ptr [rbx+24h], xmm6
  }
  (*quadVerts)[2].v[2] = 0.0;
  (*quadVerts)[2].v[3] = 1.0;
  __asm
  {
    vmovss  dword ptr [rbx+30h], xmm9
    vmovss  dword ptr [rbx+34h], xmm6
  }
  (*quadVerts)[3].v[2] = 0.0;
  (*quadVerts)[3].v[3] = 1.0;
  do
  {
    LUI_ApplyTransformsToPoint((vec4_t *)_RBX);
    _RBX = (vec4_t (*)[4])((char *)_RBX + 16);
    --v23;
  }
  while ( v23 );
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
    vmovaps xmm9, [rsp+78h+var_48]
  }
}

/*
==============
LUI_CoD_GenerateRotatedQuadVerts
==============
*/

void __fastcall LUI_CoD_GenerateRotatedQuadVerts(double left, double top, double right, double bottom, float angle, float centerX, float centerY, vec4_t (*quadVerts)[4])
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v43; 
  __int128 v69; 
  char v70; 
  void *retaddr; 

  _RAX = &retaddr;
  _RDI = quadVerts;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0B8h+var_88], xmm13
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
    vmovaps xmm8, xmm1
    vmovaps xmm9, xmm0
  }
  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6358, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts", v69) )
    __debugbreak();
  __asm { vmovss  xmm0, [rsp+0B8h+angle] }
  *(double *)&_XMM0 = j___libm_sse2_sincosf_(v9, v8, v10, v11);
  __asm
  {
    vmovss  xmm12, [rsp+0B8h+centerX]
    vmovss  xmm13, [rsp+0B8h+centerY]
    vmovups xmm10, xmm0
    vshufps xmm11, xmm0, xmm0, 1
  }
  (*quadVerts)[0].v[3] = 1.0;
  (*quadVerts)[0].v[2] = 0.0;
  __asm
  {
    vsubss  xmm2, xmm8, xmm13
    vmulss  xmm4, xmm10, xmm2
    vmulss  xmm5, xmm11, xmm2
    vsubss  xmm3, xmm9, xmm12
    vmulss  xmm9, xmm11, xmm3
    vsubss  xmm1, xmm9, xmm4
    vaddss  xmm0, xmm1, xmm12
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm8, xmm10, xmm3
    vsubss  xmm6, xmm6, xmm12
    vmulss  xmm2, xmm11, xmm6
    vaddss  xmm0, xmm5, xmm8
    vaddss  xmm1, xmm0, xmm13
    vmovss  dword ptr [rdi+4], xmm1
  }
  (*quadVerts)[1].v[2] = 0.0;
  v43 = 4i64;
  (*quadVerts)[1].v[3] = 1.0;
  __asm
  {
    vsubss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi+10h], xmm1
    vmulss  xmm4, xmm10, xmm6
    vsubss  xmm7, xmm7, xmm13
    vaddss  xmm0, xmm4, xmm5
    vaddss  xmm1, xmm0, xmm13
    vmovss  dword ptr [rdi+14h], xmm1
  }
  (*quadVerts)[2].v[2] = 0.0;
  (*quadVerts)[2].v[3] = 1.0;
  __asm
  {
    vmulss  xmm3, xmm10, xmm7
    vsubss  xmm0, xmm2, xmm3
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi+20h], xmm1
    vmulss  xmm2, xmm11, xmm7
    vaddss  xmm0, xmm2, xmm4
    vaddss  xmm1, xmm0, xmm13
    vmovss  dword ptr [rdi+24h], xmm1
    vsubss  xmm0, xmm9, xmm3
    vaddss  xmm1, xmm0, xmm12
    vaddss  xmm2, xmm2, xmm8
    vaddss  xmm0, xmm2, xmm13
    vmovss  dword ptr [rdi+34h], xmm0
    vmovss  dword ptr [rdi+30h], xmm1
  }
  (*quadVerts)[3].v[2] = 0.0;
  (*quadVerts)[3].v[3] = 1.0;
  do
  {
    LUI_ApplyTransformsToPoint((vec4_t *)quadVerts);
    --v43;
  }
  while ( v43 );
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
  }
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
  _RBX = cinematicState;
  if ( !cinematicState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7711, ASSERT_TYPE_ASSERT, "(cinematicState)", (const char *)&queryFormat, "cinematicState") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_luiFrontendCinematicState.name
    vmovups ymmword ptr [rbx], ymm0
    vmovups ymm1, ymmword ptr cs:s_luiFrontendCinematicState.name+20h
    vmovups ymmword ptr [rbx+20h], ymm1
    vmovsd  xmm0, qword ptr cs:s_luiFrontendCinematicState.playbackFlags
    vmovsd  qword ptr [rbx+40h], xmm0
  }
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
  __int64 v4; 
  LUIRootData *RootDataForController; 
  char result; 

  v4 = controllerIndex;
  RootDataForController = LUI_CoD_GetRootDataForController(controllerIndex);
  _RCX = 32 * v4;
  _RAX = s_perController;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, dword ptr [rcx+rax+4]; x
    vcomiss xmm1, xmm0
  }
  if ( __CFSHL__(v4, 5) )
    goto LABEL_6;
  __asm
  {
    vmovss  xmm2, dword ptr [rcx+rax+8]; y
    vcomiss xmm2, xmm0
  }
  if ( __CFSHL__(v4, 5) )
    goto LABEL_6;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcomiss xmm1, xmm0
  }
  if ( !__CFSHL__(v4, 5) && 32 * v4 != 0 )
    goto LABEL_6;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcomiss xmm2, xmm0
  }
  if ( !__CFSHL__(v4, 5) && 32 * v4 != 0 )
  {
LABEL_6:
    result = 0;
    *outX = -1000.0;
    *outY = -1000.0;
  }
  else
  {
    LUI_GetMousePosition(RootDataForController->name, *(float *)&_XMM1, *(float *)&_XMM2, outX, outY, LUI_luaVM);
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
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  __asm { vmovss  xmm1, cs:s_fullscreenRootData.worldBlurRadius }
  _RAX = 464i64 * ControllerFromClient;
  _RCX = &s_rootData[0].worldBlurRadius;
  __asm
  {
    vmovss  xmm2, dword ptr [rax+rcx]
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

void __fastcall LUI_CoD_Init(bool frontend, bool errorRecovery, double _XMM2_8, double _XMM3_8)
{
  const char *v7; 
  const char *v8; 
  const dvar_t *v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  char v14; 
  int v15; 
  int v16; 
  XAssetHeader v17; 
  unsigned __int8 ActiveGameMode; 
  const dvar_t *v19; 
  char **v20; 
  const dvar_t *v21; 
  char **v22; 
  const char *StringSafe; 
  const char *v24; 
  const char *v25; 
  unsigned int v26; 
  int v33; 
  int inParty; 
  int ControllerFromClient; 
  const dvar_t *v36; 
  int v37; 
  const dvar_t *v38; 
  int v39; 
  const dvar_t *v40; 
  int v41; 
  const dvar_t *v42; 
  int v43; 
  bool BoolSafe; 
  const dvar_t *v45; 
  BOOL v46; 
  lua_State *v47; 
  const char *v48; 
  unsigned int v49; 
  char *fmt; 
  float fmta; 
  __int64 controllerIndex; 
  __int64 v53; 
  int v55; 
  int v56; 
  BOOL v57; 
  BOOL v58; 
  int v59; 
  char dest[128]; 

  v7 = (char *)&queryFormat.fmt + 3;
  if ( errorRecovery )
    v7 = "recovering";
  v8 = "(in-game)";
  if ( frontend )
    v8 = "(frontend)";
  LUI_Interface_DebugPrint("LUI: Initializing %s %s\n", v8, v7);
  memset_0(s_rootData, 0, sizeof(s_rootData));
  memset_0(&s_fullscreenRootData, 0, sizeof(s_fullscreenRootData));
  memset_0(s_perController, 0, sizeof(s_perController));
  __asm { vmovss  xmm0, cs:__real@c47a0000 }
  v10 = DCONST_DVARBOOL_lui_enabled;
  s_perController[0].textEditRef = -2;
  s_perController[1].textEditRef = -2;
  s_perController[2].textEditRef = -2;
  s_perController[3].textEditRef = -2;
  s_perController[4].textEditRef = -2;
  s_perController[5].textEditRef = -2;
  s_perController[6].textEditRef = -2;
  s_perController[7].textEditRef = -2;
  __asm
  {
    vmovss  cs:s_perController.lastMouseX, xmm0
    vmovss  cs:s_perController.lastMouseY, xmm0
    vmovss  cs:s_perController.lastMouseX+20h, xmm0
    vmovss  cs:s_perController.lastMouseY+20h, xmm0
    vmovss  cs:s_perController.lastMouseX+40h, xmm0
    vmovss  cs:s_perController.lastMouseY+40h, xmm0
    vmovss  cs:s_perController.lastMouseX+60h, xmm0
    vmovss  cs:s_perController.lastMouseY+60h, xmm0
    vmovss  cs:s_perController.lastMouseX+80h, xmm0
    vmovss  cs:s_perController.lastMouseY+80h, xmm0
    vmovss  cs:s_perController.lastMouseX+0A0h, xmm0
    vmovss  cs:s_perController.lastMouseY+0A0h, xmm0
    vmovss  cs:s_perController.lastMouseX+0C0h, xmm0
    vmovss  cs:s_perController.lastMouseY+0C0h, xmm0
    vmovss  cs:s_perController.lastMouseX+0E0h, xmm0
    vmovss  cs:s_perController.lastMouseY+0E0h, xmm0
  }
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && (!frontend || !Sys_IsPLMHotLoadActive()) )
  {
    v11 = 0;
    v12 = 0i64;
    v13 = 72i64;
    do
    {
      s_luiMaterials[v12] = Material_Register(s_luiMaterialNames[v12], IMAGE_TRACK_UI);
      ++v12;
      --v13;
    }
    while ( v13 );
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
    v14 = 1;
    LUI_DefaultFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 14);
    if ( s_luaInFrontend )
    {
      v15 = Sys_Milliseconds();
      if ( !s_luaExtraFrontendMemory )
      {
        while ( 1 )
        {
          Sys_CheckQuitRequest();
          Sys_Sleep(3);
          if ( Sys_Milliseconds() - v15 > 20000 )
            break;
          if ( s_luaExtraFrontendMemory )
            goto LABEL_25;
        }
        v14 = 0;
      }
LABEL_25:
      v16 = Sys_Milliseconds();
      Com_Printf(13, "LUI: Waited for %d ms for frontend memory to be allocated\n", (unsigned int)(v16 - v15));
      if ( !v14 )
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
    v17.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_LUA_FILE, "ui/LUIStartup.lua", 0).physicsLibrary;
    if ( v17.physicsLibrary && !LOBYTE(v17.physicsLibrary->havokDataSize) && !s_luaExtraDbgSymbolMemory )
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
      v19 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating extra splitscreen memory: %u\n", 1024i64);
        v20 = s_luaExtraSplitscreenMemoryBuf;
        s_luaExtraSplitscreenMemoryInUse = 0;
        s_luaExtraSplitscreenMemory = s_luaExtraSplitscreenMemoryBuf;
      }
      else
      {
        v20 = (char **)s_luaExtraSplitscreenMemory;
      }
      if ( s_luaInFrontend )
        goto LABEL_93;
      if ( !v20 )
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
      v21 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( !v21->current.enabled && Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_esports_shipMemory, "lui_esports_shipMemory") )
      {
        LUI_Interface_DebugPrint("LUI memory: Allocating extra esports memory: %u\n", 1024i64);
        v22 = s_luaExtraESportsMemoryBuf;
        s_luaESportsShipMemoryInUse = 0;
        s_luaESportsShipMemory = s_luaExtraESportsMemoryBuf;
      }
      else
      {
LABEL_87:
        v22 = (char **)s_luaESportsShipMemory;
      }
      if ( !s_luaInFrontend && v22 )
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
        v24 = j_va("luiAttachDebugger %s 8172", StringSafe);
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 552, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        Cmd_TokenizeString(v24);
        if ( Cmd_Argc() )
        {
          cmd_args.localClientNum[cmd_args.nesting] = LOCAL_CLIENT_0;
          cmd_args.controllerIndex[cmd_args.nesting] = 0;
          v25 = Cmd_Argv(0);
          if ( !Cmd_ExecuteCommandFunctions(v25, v24, &s_cmd_functions) && !Dvar_Command(0) )
            CL_Main_ForwardCommandToServer(LOCAL_CLIENT_0, v24);
        }
        Cmd_EndTokenizedString();
      }
    }
    if ( LUI_LoadLUIInitFile() )
    {
      v26 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
      LUI_Interface_DebugPrint("  LUI_LoadLUIInitFile() [Lua Memory used: %d KB]\n", v26 >> 10);
      if ( frontend )
      {
        Core_strcpy(s_fullscreenRootData.name, 0x20ui64, "UIRootFull");
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, rax; right
          vxorps  xmm2, xmm2, xmm2; top
          vxorps  xmm1, xmm1, xmm1; left
          vmovss  dword ptr [rsp+168h+fmt], xmm0
        }
        LUI_CoD_CreateRoot(&s_fullscreenRootData, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, fmta, -1);
      }
      else
      {
        LUI_CoD_CreateClientRoots();
      }
      v59 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
      v33 = 1;
      v58 = CL_AllLocalClientsInactive();
      if ( g_launchData.skipMovies || (v55 = 1, s_hasShownSplashScreen) )
        v55 = 0;
      if ( Live_IsInSystemlinkLobby() )
        inParty = g_partyData.inParty;
      else
        inParty = Lobby_IsInLobby();
      v57 = inParty != 0;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      v36 = DVARBOOL_xblive_privatematch;
      v56 = ControllerFromClient;
      if ( !DVARBOOL_xblive_privatematch || (Dvar_CheckFrontendServerThread(DVARBOOL_xblive_privatematch), v37 = 1, !v36->current.enabled) )
        v37 = 0;
      v38 = DVARBOOL_xblive_privatematch_solo;
      if ( !DVARBOOL_xblive_privatematch_solo || (Dvar_CheckFrontendServerThread(DVARBOOL_xblive_privatematch_solo), v39 = 1, !v38->current.enabled) )
        v39 = 0;
      v40 = DVARBOOL_mlg_gamebattles_match;
      if ( !DVARBOOL_mlg_gamebattles_match || (Dvar_CheckFrontendServerThread(DVARBOOL_mlg_gamebattles_match), v41 = 1, !v40->current.enabled) )
        v41 = 0;
      v42 = DVARBOOL_systemlink;
      if ( !DVARBOOL_systemlink || (Dvar_CheckFrontendServerThread(DVARBOOL_systemlink), v43 = 1, !v42->current.enabled) )
        v43 = 0;
      BoolSafe = Dvar_GetBoolSafe("NLONRMOLKS");
      v45 = DVARBOOL_force_offline_menus;
      v46 = BoolSafe;
      if ( !DVARBOOL_force_offline_menus || (Dvar_CheckFrontendServerThread(DVARBOOL_force_offline_menus), !v45->current.enabled) )
        v33 = 0;
      memset_0(dest, 0, sizeof(dest));
      LOBYTE(v11) = !s_luaInFrontend;
      LODWORD(v53) = v55;
      LODWORD(controllerIndex) = v58;
      LODWORD(fmt) = v59;
      Com_sprintf_truncate<128>((char (*)[128])dest, "vm:%p,fe:%d,gt:%d,ali:%d,ms:%d,il:%d,ci:%d,xp:%d,xps:%d,mlg:%d,sl:%d,cp:%d,fo:%d", LUI_luaVM, v11, fmt, controllerIndex, v53, v57, v56, v37, v39, v41, v43, v46, v33);
      CrashReport_AddKVP("LUI_Init", dest);
      CrashReport_AddMemRegion("LUI_luaVM", LUI_luaVM, 0x60ui64);
      CrashReport_AddMemRegion("LUI_luaVM_stack", (const void *)LUI_luaVM->stack.ptr64, 0x400ui64);
      v47 = LUI_luaVM;
      j_lua_getfield(LUI_luaVM, -10002, "Main");
      if ( LuaShared_PCall(v47, 0, 0) )
      {
        v48 = j_lua_tolstring(v47, -1, NULL);
        LUI_ReportError("Error while running LUI Main():\n", v47);
        Sys_Error((const ObfuscateErrorText)&stru_144464F38, v48);
      }
      s_luaInInitProcess = 0;
      v49 = truncate_cast<unsigned int,unsigned __int64>(s_tlsf_lua.currentLuaMemoryUsed);
      LUI_Interface_DebugPrint("  [Lua Memory used: %d KB]\n", v49 >> 10);
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
  int v8; 
  __int64 v9; 
  __int64 v11; 
  bool result; 
  bool v14; 
  bool isDoubleClick; 
  bool IsCatcherActive; 
  int v17; 
  int DoubleClickTime; 
  int v19; 
  __int64 v20; 
  char v21; 
  bool v24; 
  bool v25; 
  bool v26; 
  clientUIActive_t *LocalClientUIGlobals; 
  bool v28; 
  float outScreenY; 
  float screenY; 
  float outScreenX; 
  char *rootName; 
  char *outName[2]; 

  v8 = binding;
  v9 = controllerIndex;
  v11 = localClientNum;
  if ( Com_FrontEndScene_IsActive() && Com_FrontEndScene_FreeCamEnabled() || !cls.uiStarted || !LUI_CoD_IsEnabled() )
    return 0;
  if ( s_luaWaitingForKeyBind[v11] )
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
    LUI_CoD_HandleKeyBind((LocalClientNum_t)v11, key);
    return 1;
  }
  __asm { vxorps  xmm0, xmm0, xmm0 }
  v14 = 0;
  rootName = NULL;
  isDoubleClick = 0;
  __asm
  {
    vmovss  [rsp+88h+outScreenX], xmm0
    vmovss  [rsp+88h+screenY], xmm0
  }
  if ( (unsigned int)(key - 187) <= 2 )
  {
    outName[0] = NULL;
    IsCatcherActive = CL_Keys_IsCatcherActive((LocalClientNum_t)v11, 256);
    LUI_CoD_GetBindingSemantics(v8, !IsCatcherActive, (const char **)outName);
    if ( outName[0] )
    {
      v14 = LUI_CoD_QueueInputEvent(v9, outName[0], down != 0, "mouse", 0);
      rootName = LUI_CoD_GetRootDataForController(v9)->name;
    }
    else
    {
      v14 = LUI_CoD_QueueMouseInput(v9, key, down, &outScreenX, &screenY, (const char **)&rootName);
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
            v17 = Sys_Milliseconds();
            DoubleClickTime = Sys_GetDoubleClickTime();
            v19 = v17 - s_lastClickMs;
            if ( v17 - s_lastClickMs < DoubleClickTime )
              v17 = -1;
            isDoubleClick = v19 < DoubleClickTime;
            s_lastClickMs = v17;
          }
        }
        else
        {
          s_lastClickMs = -1;
        }
      }
    }
  }
  v20 = v9;
  if ( s_perController[v9].textEditRef != -2 && LUI_TextEdit_HandlesKey(key) )
  {
    v21 = 1;
    if ( down )
    {
      LUI_EnterCriticalSection("LUI_CoD_KeyEvent");
      if ( !LUI_luaVM )
      {
LABEL_31:
        LUI_LeaveCriticalSection();
        if ( v21 )
          return 1;
        v8 = binding;
        goto LABEL_33;
      }
      __asm
      {
        vmovss  xmm0, [rsp+88h+screenY]
        vmovss  xmm3, [rsp+88h+outScreenX]; screenX
        vmovss  dword ptr [rsp+88h+outScreenY], xmm0
      }
      v24 = LUI_TextEdit_HandleKey((LocalClientNum_t)v11, s_perController[v20].textEditRef, key, *(float *)&_XMM3, outScreenY, rootName, LUI_luaVM, isDoubleClick);
    }
    else
    {
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_allowInputUpThroughChat, "lui_allowInputUpThroughChat") )
        return 1;
      LUI_EnterCriticalSection("LUI_CoD_KeyEvent");
      if ( !LUI_luaVM )
        goto LABEL_31;
      v24 = LUI_TextEdit_HandledGamepadUpEvent(s_perController[v20].textEditRef, key, LUI_luaVM);
    }
    v21 = v24;
    goto LABEL_31;
  }
LABEL_33:
  if ( (unsigned int)(key - 187) > 1 )
  {
    rootName = NULL;
    outName[0] = NULL;
    v25 = (unsigned int)(key - 192) > 3 || !CL_Keys_IsCatcherActive((LocalClientNum_t)v11, 256);
    LUI_CoD_GetBindingSemantics(v8, v25, (const char **)&rootName);
    v26 = MLG_IsCoDCasterEnabled() && MLG_IsLocalPlayerMLGSpectator((LocalClientNum_t)v11);
    LocalClientUIGlobals = CL_GetLocalClientUIGlobals((const LocalClientNum_t)v11);
    if ( rootName && (LocalClientUIGlobals->lastInputType || v26) )
    {
      v28 = LUI_CoD_QueueInputEvent(v9, rootName, down != 0, "keyboard", 0);
LABEL_47:
      v14 = v28;
      goto LABEL_48;
    }
    LUI_CoD_GetKeySemantics(key, (const char **)&rootName, (const char **)outName);
    LUI_CoD_InterpretKey((LocalClientNum_t)v11, v9, key, down, resetInputs);
    if ( rootName )
    {
      v28 = LUI_CoD_QueueInputEvent(v9, rootName, down != 0, outName[0], resetInputs);
      goto LABEL_47;
    }
  }
LABEL_48:
  if ( v14 )
    return 1;
  result = CL_Keys_IsCatcherActive((LocalClientNum_t)v11, 64);
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
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  int *p_deltaTime; 
  int i; 
  __int64 v13; 
  __int64 v14; 
  char *v15; 
  const char *v16; 
  char v17; 
  __int64 v18; 
  char v19; 

  Sys_ProfBeginNamedEvent(0xFF008008, "LUI_CoD_Layout");
  LUI_EnterCriticalSection("LUI_CoD_Layout");
  if ( LUI_luaVM )
  {
    name = s_fullscreenRootData.name;
    v6 = 0x7FFFFFFFi64;
    if ( !rootName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    while ( 1 )
    {
      v7 = name[rootName - s_fullscreenRootData.name];
      v8 = v6;
      v9 = *name++;
      --v6;
      if ( !v8 )
      {
LABEL_8:
        p_deltaTime = &s_fullscreenRootData.deltaTime;
        goto LABEL_9;
      }
      if ( v7 != v9 )
        break;
      if ( !v7 )
        goto LABEL_8;
    }
    for ( i = 0; i < 8; ++i )
    {
      v13 = 0x7FFFFFFFi64;
      v14 = i;
      v15 = s_rootData[v14].name;
      if ( !rootName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( &s_rootData[v14] == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v16 = (const char *)(rootName - v15);
      while ( 1 )
      {
        v17 = v15[(_QWORD)v16];
        v18 = v13;
        v19 = *v15++;
        --v13;
        if ( !v18 )
        {
LABEL_22:
          p_deltaTime = &s_rootData[v14].deltaTime;
          goto LABEL_9;
        }
        if ( v17 != v19 )
          break;
        if ( !v17 )
          goto LABEL_22;
      }
    }
    p_deltaTime = (int *)240;
LABEL_9:
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  cs:s_fullscreenRootData.worldBlurRadius, xmm0
    }
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

void __fastcall LUI_CoD_MakeClientRootFullscreen(int controllerIndex, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  __int64 v5; 
  float v12; 

  v5 = controllerIndex;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vxorps  xmm3, xmm3, xmm3
  }
  s_rootData[v5].forceFullscreen = 1;
  __asm
  {
    vcvtsi2ss xmm3, xmm3, rax; right
    vxorps  xmm2, xmm2, xmm2; top
    vxorps  xmm1, xmm1, xmm1; left
    vmovss  [rsp+38h+var_18], xmm0
  }
  LUI_CoD_ResizeRoot(&s_rootData[v5], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v12);
}

/*
==============
LUI_CoD_MakeClientRootSplitscreen
==============
*/

void __fastcall LUI_CoD_MakeClientRootSplitscreen(int controllerIndex, double _XMM1_8, double _XMM2_8)
{
  __int64 v6; 
  LocalClientNum_t ClientFromController; 
  float v19; 

  v6 = controllerIndex;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  CG_GetLocalClientViewParams(ClientFromController);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm6, xmm0, dword ptr [rax+8]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
    vmulss  xmm7, xmm1, dword ptr [rax+0Ch]
  }
  if ( LUI_CoD_UsingSplitscreenUpscaling() )
  {
    __asm
    {
      vmulss  xmm6, xmm6, cs:__real@3fd55555
      vmulss  xmm7, xmm7, cs:__real@3fd55555
    }
  }
  __asm
  {
    vmovaps xmm3, xmm6; right
    vxorps  xmm2, xmm2, xmm2; top
    vxorps  xmm1, xmm1, xmm1; left
  }
  s_rootData[v6].forceFullscreen = 0;
  __asm { vmovss  [rsp+58h+var_38], xmm7 }
  LUI_CoD_ResizeRoot(&s_rootData[v6], *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v19);
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
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
  __int64 v7; 
  int ControllerFromClient; 
  __int64 v12; 
  char *name; 
  bool v17; 
  char v22; 
  bool v23; 
  bool v24; 
  char v26; 
  char v27; 
  char v28; 
  LUIRootData *RootDataForController; 
  bool v37; 
  bool result; 
  float yResult; 
  float xResult; 

  v7 = localClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  v12 = ControllerFromClient;
  name = LUI_CoD_GetRootDataForController(ControllerFromClient)->name;
  if ( (unsigned int)v7 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
    __debugbreak();
  _R13 = 0x140000000ui64;
  _RBX = v12;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm0, dword ptr [rbx+r13+14537954h]
    vcvtsi2ss xmm2, xmm2, r12d
    vucomiss xmm0, xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r15d
  }
  if ( !v17 )
    goto LABEL_7;
  __asm { vucomiss xmm1, dword ptr [rbx+r13+14537958h] }
  if ( v17 )
    v22 = 1;
  else
LABEL_7:
    v22 = 0;
  v23 = 0;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  if ( clientUIActives[v7].lastInputType == KEYBOARD_MOUSE )
    v23 = force;
  v24 = !v23;
  if ( !v23 )
  {
    v24 = v22 == 0;
    if ( v22 )
      goto LABEL_29;
  }
  __asm
  {
    vmovss  xmm6, cs:__real@c47a0000
    vucomiss xmm0, xmm6
  }
  if ( v24 )
  {
    v26 = 0;
  }
  else
  {
    __asm { vucomiss xmm6, dword ptr [rbx+r13+14537958h] }
    v26 = 1;
  }
  v17 = s_perController[_RBX].textEditRef == -2;
  __asm
  {
    vmovss  dword ptr [rbx+r13+14537954h], xmm2
    vmovss  dword ptr [rbx+r13+14537958h], xmm1
  }
  if ( !v17 )
  {
    LUI_EnterCriticalSection("LUI_CoD_MouseMove");
    if ( LUI_luaVM )
      LUI_TextEdit_HandleMouseMove((LocalClientNum_t)v7, s_perController[_RBX].textEditRef, x, y, name, LUI_luaVM);
    LUI_LeaveCriticalSection();
  }
  if ( !v26 )
    goto LABEL_29;
  LUI_CoD_UpdateInputType(v12, KEYBOARD_MOUSE);
  LUI_EnterCriticalSection("LUI_CoD_MouseMove");
  RootDataForController = LUI_CoD_GetRootDataForController(v12);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+r13+14537954h]; x
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
  }
  if ( v27 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+r13+14537958h]; y
    vcomiss xmm2, xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vcomiss xmm1, xmm0
  }
  if ( !(v27 | v28) )
    goto LABEL_26;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcomiss xmm2, xmm0
  }
  if ( v27 | v28 )
  {
    LUI_GetMousePosition(RootDataForController->name, *(float *)&_XMM1, *(float *)&_XMM2, &xResult, &yResult, LUI_luaVM);
    v37 = 1;
  }
  else
  {
LABEL_26:
    __asm
    {
      vmovss  [rsp+88h+xResult], xmm6
      vmovss  [rsp+88h+yResult], xmm6
    }
    v37 = 0;
  }
  LUI_LeaveCriticalSection();
  if ( LUI_BeginEvent((LocalClientNum_t)v7, "mousemove", LUI_luaVM) )
  {
    LUI_SetTableString("rootName", name, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, [rsp+88h+xResult]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("x", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vmovss  xmm1, [rsp+88h+yResult]
      vcvtss2sd xmm1, xmm1, xmm1; value
    }
    LUI_SetTableNumber("y", *(long double *)&_XMM1, LUI_luaVM);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2sd xmm1, xmm1, ebp; value
    }
    LUI_SetTableNumber("controller", *(long double *)&_XMM1, LUI_luaVM);
    LUI_SetTableBool("insideWindow", v37, LUI_luaVM);
    result = LUI_EndEvent(LUI_luaVM);
  }
  else
  {
LABEL_29:
    result = 1;
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
  return result;
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
  __int64 v16; 
  LUIRootData *RootDataForController; 
  const char *v31; 
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
  __asm
  {
    vmovss  xmm0, cs:__real@c47a0000
    vmovss  [rsp+68h+outX], xmm0
    vmovss  [rsp+68h+outY], xmm0
  }
  if ( ControllerMissing == -1 || v10 )
  {
    name = LUI_CoD_GetRootDataForController(v5)->name;
    RootDataForController = LUI_CoD_GetRootDataForController(v5);
    _RCX = 32 * v5;
    _RAX = 0x140000000ui64;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    v16 = v5;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+rax+14537954h]; x
      vcomiss xmm1, xmm0
    }
    if ( !__CFSHL__(v5, 5) )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [rcx+rax+14537958h]; y
        vcomiss xmm2, xmm0
      }
      if ( !__CFSHL__(v5, 5) )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vcomiss xmm1, xmm0
        }
        if ( __CFSHL__(v5, 5) || 32 * v5 == 0 )
        {
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vcomiss xmm2, xmm0
          }
          if ( __CFSHL__(v5, 5) || 32 * v5 == 0 )
            LUI_GetMousePosition(RootDataForController->name, *(float *)&_XMM1, *(float *)&_XMM2, &outX, &outY, LUI_luaVM);
        }
      }
    }
  }
  else
  {
    name = LUI_CoD_GetRootDataForController(ControllerMissing)->name;
    LUI_CoD_GetMousePosition(ControllerMissing, &outX, &outY);
    v16 = v5;
  }
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(LUI_luaVM, -1, "roots");
  j_lua_getfield(LUI_luaVM, -1, name);
  j_lua_getfield(LUI_luaVM, -1, "QueueInput");
  j_lua_pushvalue(LUI_luaVM, -2);
  j_lua_pushinteger(LUI_luaVM, v16);
  j_lua_pushstring(LUI_luaVM, name);
  j_lua_pushboolean(LUI_luaVM, down);
  j_lua_pushstring(LUI_luaVM, buttonName);
  j_lua_pushstring(LUI_luaVM, qualifier);
  __asm
  {
    vmovss  xmm1, [rsp+68h+outX]
    vcvtss2sd xmm1, xmm1, xmm1; n
  }
  j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
  __asm
  {
    vmovss  xmm1, [rsp+68h+outY]
    vcvtss2sd xmm1, xmm1, xmm1; n
  }
  j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
  j_lua_pushboolean(LUI_luaVM, resetInputs);
  if ( LuaShared_PCall(LUI_luaVM, 9, 1) )
  {
    v31 = "Error queuing input\n";
LABEL_24:
    LUI_ReportError(v31, LUI_luaVM);
    goto LABEL_25;
  }
  if ( j_lua_type(LUI_luaVM, -1) != 1 )
  {
    v31 = "Unexpected return value from LUI_METHOD_QUEUE_INPUT\n";
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
  LocalClientNum_t v16; 
  int ControllerFromClient; 
  const char *v27; 

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
    _R8 = 0x140000000ui64;
    v16 = ClientFromController;
    if ( s_luaInFrontend || (ControllerFromClient = CL_Mgr_GetControllerFromClient(ClientFromController), _R8 = 0x140000000ui64, !s_rootData[ControllerFromClient].inUse) )
      v16 = LOCAL_CLIENT_INVALID;
    _RDI = outScreenY;
    _RCX = 32 * v6;
    s_currentLocalClientRoot = v16;
    __asm
    {
      vmovss  xmm2, dword ptr [rcx+r8+14537958h]; y
      vmovss  xmm1, dword ptr [rcx+r8+14537954h]; x
    }
    LUI_GetMousePosition(*outRootName, *(float *)&_XMM1, *(float *)&_XMM2, outScreenX, outScreenY, LUI_luaVM);
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
    _RAX = outScreenX;
    __asm
    {
      vmovss  xmm1, dword ptr [rax]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi]
      vcvtss2sd xmm1, xmm1, xmm1; n
    }
    j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
    if ( LuaShared_PCall(LUI_luaVM, 8, 1) )
    {
      v27 = "Error queuing mouse input\n";
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
      v27 = "Unexpected return value from LUI_METHOD_QUEUE_MOUSE_INPUT\n";
    }
    LUI_ReportError(v27, LUI_luaVM);
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
void LUI_CoD_RegisterDvars()
{
  const dvar_t *v16; 
  const dvar_t *v27; 
  const dvar_t *v31; 
  const dvar_t *v41; 
  const dvar_t *v45; 
  const dvar_t *v49; 
  const dvar_t *v59; 
  const dvar_t *v63; 
  const dvar_t *v71; 
  const dvar_t *v75; 
  const dvar_t *v82; 
  const dvar_t *v86; 
  const dvar_t *v124; 
  const dvar_t *v131; 
  const dvar_t *v138; 
  char v152; 
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
    vmovaps xmmword ptr [rax-78h], xmm13
    vmovaps [rsp+0B8h+var_88], xmm15
  }
  Dvar_BeginPermanentRegistration();
  __asm
  {
    vmovss  xmm15, cs:__real@3f800000
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm2, cs:__real@3a83126f; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_lui_timescale = Dvar_RegisterFloat("lui_timescale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Scale time of each frame of LUI animation");
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
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@44480000; value
  }
  DVARBOOL_ui_scope_stencils = Dvar_RegisterBool("MKNMNRSQRO", 1, 0, "Turns on the scope stencil for in-world LUI Elements");
  __asm { vmovaps xmm2, xmm15; min }
  v16 = Dvar_RegisterFloat("lui_ringradar_inner_distance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance from the player where an enemy will show on the inner ring of the ring radar");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@44c80000; value
  }
  DCONST_DVARFLT_lui_ringradar_inner_distance = v16;
  __asm { vmovaps xmm2, xmm15; min }
  DCONST_DVARFLT_lui_ringradar_mid_distance = Dvar_RegisterFloat("lui_ringradar_mid_distance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max distance from the player where an enemy will show on the middle ring of the ring radar");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@40800000; value
  }
  DCONST_DVARBOOL_lui_reportMemoryUsage = Dvar_RegisterBool("lui_reportMemoryUsage", 0, 0x40004u, "Print how much memory is used during LUI initialization");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_lui_reportPerfThresholdMS = Dvar_RegisterFloat("lui_reportPerfThresholdMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The millisecond threshold at which to report LUI frame time warnings.");
  DCONST_DVARINT_lui_streaming_spinner_frame_width = Dvar_RegisterInt("lui_streaming_spinner_frame_width", 64, 1, 0x7FFFFFFF, 0x40004u, "Width of a frame in the spinner material");
  __asm
  {
    vmovss  xmm13, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@42800000; value
  }
  DCONST_DVARINT_lui_streaming_spinner_frame_height = Dvar_RegisterInt("lui_streaming_spinner_frame_height", 64, 1, 0x7FFFFFFF, 0x40004u, "Height of a frame in the spinner material");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v27 = Dvar_RegisterFloat("lui_streaming_spinner_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Width of the spinner displayed while 2D images are streaming, in LUI virtual pixels");
  __asm { vmovss  xmm1, cs:__real@42800000; value }
  DCONST_DVARFLT_lui_streaming_spinner_width = v27;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v31 = Dvar_RegisterFloat("lui_streaming_spinner_height", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Height of the spinner displayed while 2D images are streaming, in LUI virtual pixels");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_lui_streaming_spinner_height = v31;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_lui_streaming_spinner_frame_rate = Dvar_RegisterFloat("lui_streaming_spinner_frame_rate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Framerate of the spinner animation displayed while 2D images are streaming, in frames per second");
  DCONST_DVARINT_lui_streaming_spinner_frame_count = Dvar_RegisterInt("lui_streaming_spinner_frame_count", 30, 1, 0x7FFFFFFF, 0x40004u, "Number of frames of the spinner animation displayed while 2D images are streaming");
  DCONST_DVARINT_lui_loading_spinner_width = Dvar_RegisterInt("lui_loading_spinner_width", 72, 0, 0x7FFFFFFF, 0x40004u, "Width of the spinner displayed while drawing a blank screen during remote screen updates");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARINT_lui_loading_spinner_height = Dvar_RegisterInt("lui_loading_spinner_height", 64, 0, 0x7FFFFFFF, 0x40004u, "Height of the spinner displayed while drawing a blank screen during remote screen updates");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vmovaps xmm2, xmm15; min
  }
  DCONST_DVARFLT_lui_loading_spinner_frame_rate = Dvar_RegisterFloat("lui_loading_spinner_frame_rate", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Framerate of the spinner animation displayed while drawing a blank screen during remote screen updates");
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
  __asm { vmovss  xmm1, cs:__real@3e19999a; value }
  DVARBOOL_lui_enable_pc_achievement = Dvar_RegisterBool("SPOPPKOTP", 1, 0, "Enables the achievements menu for the pc version.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v41 = Dvar_RegisterFloat("LPRRLSSTLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  __asm
  {
    vmovss  xmm1, cs:__real@3e19999a; value
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_lui_marquee_stencil_padding_left = v41;
  v45 = Dvar_RegisterFloat("OKPMLLOPSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_lui_marquee_stencil_padding_right = v45;
  v49 = Dvar_RegisterFloat("NKKONQKNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_lui_marquee_stencil_padding_top = v49;
  DVARFLT_lui_marquee_stencil_padding_bottom = Dvar_RegisterFloat("NLOPLSNPQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Padding value of the marquee stencil as a percent. Increase to fix clipping of characters");
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
  __asm
  {
    vmovss  xmm11, cs:__real@447a0000
    vmovss  xmm7, cs:__real@c47a0000
    vmovss  xmm10, cs:__real@41a00000
  }
  DVARBOOL_enable_splitscreen_scoreboard_indicators = Dvar_RegisterBool("OSNMNPLRR", 1, 0, "enable scoreboard indicators in splitscreen");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm10; value
  }
  v59 = Dvar_RegisterFloat("lui_parallax_menu_stick_amplitude", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Half-amplitude of UI parallax movement driven by right stick (in 720p pixels)");
  __asm { vmovss  xmm1, cs:__real@c2480000; value }
  DCONST_DVARFLT_lui_parallax_menu_stick_amplitude = v59;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
  }
  v63 = Dvar_RegisterFloat("lui_parallax_menu_focus_amplitude", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Half-amplitude of UI parallax movement driven by the position of the item in focus (in 720p pixels)");
  __asm { vmovss  xmm1, cs:__real@c2480000; value }
  DCONST_DVARFLT_lui_parallax_menu_focus_amplitude = v63;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovaps xmm2, xmm7; min
  }
  DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude = Dvar_RegisterFloat("lui_parallax_menu_mouse_amplitude", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Half-amplitude of UI parallax movement driven by the position of mouse (in 720p pixels)");
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
  __asm { vmovss  xmm9, cs:__real@c1a00000 }
  DVARBOOL_debug_weapon_model_enabled = Dvar_RegisterBool("LPKPKPTMKR", 0, 0, "Other debug model values only apply if true.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v71 = Dvar_RegisterFloat("SQNKKRMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X Offset for the weapon model.");
  __asm
  {
    vmovss  xmm3, cs:__real@420c0000; max
    vmovss  xmm2, cs:__real@c20c0000; min
  }
  DVARFLT_debug_weapon_model_xoffset = v71;
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v75 = Dvar_RegisterFloat("LOKLRRNSSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y Offset for the weapon model.");
  __asm { vmovss  xmm2, cs:__real@c0a00000; min }
  DVARFLT_debug_weapon_model_yoffset = v75;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_zoffset = Dvar_RegisterFloat("RLOROROPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z Offset for the weapon model.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v82 = Dvar_RegisterFloat("OKOMQMTSOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X Offset for the weapon model based on attachment.");
  __asm
  {
    vmovss  xmm3, cs:__real@420c0000; max
    vmovss  xmm2, cs:__real@c20c0000; min
  }
  DVARFLT_debug_attachment_model_xoffset = v82;
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v86 = Dvar_RegisterFloat("NKQRRKPMPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y Offset for the weapon model based on attachment.");
  __asm { vmovss  xmm2, cs:__real@c0a00000; min }
  DVARFLT_debug_attachment_model_yoffset = v86;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm8, cs:__real@43b40000
    vmovss  xmm6, cs:__real@c3b40000
  }
  DVARFLT_debug_attachment_model_zoffset = Dvar_RegisterFloat("MTKOSMRROQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z Offset for the weapon model based on attachment.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_pitch = Dvar_RegisterFloat("LMORQMKNQS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Pitch for the weapon model.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_yaw = Dvar_RegisterFloat("LQPRNSLLNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Yaw for the weapon model.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_roll = Dvar_RegisterFloat("MPSMRTRLNL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Roll for the weapon model.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_preview_xoffset = Dvar_RegisterFloat("LOQKPMTMRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X Offset for the weapon model preview.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_preview_yoffset = Dvar_RegisterFloat("LNRTLSMOSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y Offset for the weapon model preview.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
    vmovss  xmm7, cs:__real@43fa0000
    vmovss  xmm6, cs:__real@c3fa0000
  }
  DVARFLT_debug_weapon_model_preview_zoffset = Dvar_RegisterFloat("MRPNKMRKPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z Offset for the weapon model preview.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_line_xoffset = Dvar_RegisterFloat("LMRQMOPNSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "X Offset for the weapon model line.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_line_yoffset = Dvar_RegisterFloat("OLSQQQTNON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Y Offset for the weapon model line.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_debug_weapon_model_line_zoffset = Dvar_RegisterFloat("MQPQRPNNKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Z Offset for the weapon model line.");
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
  __asm { vmovss  xmm1, cs:__real@41400000; value }
  DVARBOOL_lui_worldMap_enabled = Dvar_RegisterBool("LNLNSSNKQ", 0, 0, "Enables/disables the world map in mpmainmenu.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v124 = Dvar_RegisterFloat("lui_scoreboardYou_offset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The horizontal offset of the YOU indicator from the left side of the scoreboard row.");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_lui_scoreboardYou_offset = v124;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_lui_scoreboardYou_width = Dvar_RegisterFloat("lui_scoreboardYou_width", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the YOU indicator in the scoreboard row.");
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
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v131 = Dvar_RegisterFloat("LMPPLNSRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "x screen offset for interactive prompts that are snapping");
  __asm
  {
    vmovss  xmm1, cs:__real@42c80000; value
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_lui_force_interactive_prompt_screen_snap_offset_x = v131;
  DVARFLT_lui_force_interactive_prompt_screen_snap_offset_y = Dvar_RegisterFloat("MLTSLNNNKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "x screen offset for interactive prompts that are snapping");
  DVARINT_lui_refreshRate_Telemetry_FPS = Dvar_RegisterInt("LSRMTRQKR", 250000, 0, 0x7FFFFFFF, 0, "Refresh rate of the FPS Telemetry widget");
  DVARINT_lui_refreshRate_Telemetry_Latency = Dvar_RegisterInt("NNTRPQMPPK", 250000, 0, 0x7FFFFFFF, 0, "Refresh rate of the Server Latency Telxtualemetry widget");
  DVARINT_lui_refreshRate_Telemetry_GPUTime = Dvar_RegisterInt("NRKOOPRLTN", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the GPU time Telemetry widget");
  DVARINT_lui_refreshRate_Telemetry_GPUTemperature = Dvar_RegisterInt("QSOONMKK", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the GPU temperature Telemetry widget");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARINT_lui_refreshRate_Telemetry_CPUTime = Dvar_RegisterInt("OLQPPMRQKP", 100000, 0, 0x7FFFFFFF, 0, "Refresh rate of the CPU time Telemetry widget");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v138 = Dvar_RegisterFloat("lui_stick_direction_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Stick direction threshold required in order to change the inputType to gamepad");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DCONST_DVARFLT_lui_stick_direction_threshold = v138;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_lui_stick_magnitude_threshold = Dvar_RegisterFloat("lui_stick_magnitude_threshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Stick magnitude threshold required in order to change the inputType to gamepad");
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
  _R11 = &v152;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm13, xmmword ptr [r11-70h]
    vmovaps xmm15, xmmword ptr [r11-80h]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
LUI_CoD_RegisterGameDvars
==============
*/
void LUI_CoD_RegisterGameDvars()
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v8; 
  unsigned int v12; 
  unsigned int v18; 
  unsigned int v23; 
  unsigned int v27; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  const dvar_t *v46; 
  const dvar_t *v50; 
  float fmt; 
  float fmta; 
  float description; 
  char v61; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7787, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tThese dvars must be registered after game mode creation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
    __debugbreak();
  v3 = 262340;
  v4 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v4 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm2, cs:__real@c2c80000; min
    vmovss  xmm1, cs:__real@bdcccccd; value
  }
  DCONST_DVARMPFLT_lui_parallax_view_sway_rate = Dvar_RegisterFloat("NTQSRLRPMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v4, "Rate that player-driven camera angle movement influences UI movement.  Low values will lag behind view changes; high values will lead.");
  v8 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v8 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm2, cs:__real@c2c80000; min
    vmovss  xmm1, cs:__real@be4ccccd; value
  }
  DCONST_DVARMPFLT_lui_parallax_anim_sway_rate = Dvar_RegisterFloat("NOTOORKKTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v8, "Rate that animation-driven camera angle movement influences UI movement.  Low values will lag behind view changes; high values will lead.");
  v12 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v12 = 262276;
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@40900000; x
    vmovss  xmm6, cs:__real@43b40000
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm1; y
    vmovss  dword ptr [rsp+78h+fmt], xmm6
    vxorps  xmm8, xmm8, xmm8
  }
  DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view = Dvar_RegisterVec2("MNSKKLOMMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v12, "Maximum angle that UI can be offset from player view.  Degrees in Pitch and Yaw.");
  v18 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v18 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm7, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@42200000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence = Dvar_RegisterFloat("NSONSKLLQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v18, "Maximum player view linear velocity that will be converted to angular UI motion.  Inches per second.");
  v23 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v23 = 262276;
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@3e99999a; x
    vmovss  xmm3, cs:__real@3f000000; z
    vmovss  dword ptr [rsp+78h+description], xmm6
    vmovaps xmm2, xmm1; y
    vmovss  dword ptr [rsp+78h+fmt], xmm8
  }
  DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate = Dvar_RegisterVec3("MMMTQPLQMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, description, v23, "Rate that angular motion is applied to the UI given a linear velocity.  (Degrees rotation) per (Inches per second in player X, Y, and Z).");
  v27 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v27 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm1, cs:__real@3e800000; value
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_lui_parallax_scale = Dvar_RegisterFloat("NOPPPNSKMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v27, "Scale applied to the final angular offset calculated for UI elements.");
  DVARBOOL_lui_drawHUDMap = Dvar_RegisterBool("MKORQLNLQN", 0, 0, "Show name and outlines of hud widgets");
  DCONST_DVARSTR_hint_button_defaultIconMaterial = Dvar_RegisterString("hint_button_defaultIconMaterial", "hud_interaction_prompt_center_standard", 0x40004u, "Icon used for interactive object prompts when none is specified by script");
  v31 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v31 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_lootCard_shortInteractDistance = Dvar_RegisterInt("RORLNQQKQ", 100, 0, 128, v31, "Max number of in-game units the player can be away from a loot item to pick it up");
  v32 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v32 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_lootCard_mediumInteractDistance = Dvar_RegisterInt("MSPTROQNR", 200, 0, 256, v32, "Max number of in-game units the player can be away from a loot item to be able to ping it");
  v33 = 262340;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v33 = 262276;
  Com_GameMode_GetActiveGameMode();
  DCONST_DVARMPINT_lui_minimizedPromptPulsePeriod = Dvar_RegisterInt("NNRTRKSLKK", 1000, 0, 10000, v33, "Alpha pulse period of minimized display prompts (milliseconds).");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v3 = 262276;
  Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000; max
    vmovss  xmm1, cs:__real@3f400000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARMPFLT_lui_minimizedPromptPulseAlphaScale = Dvar_RegisterFloat("MQRQLLRKOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v3, "Minimum alpha scale value to multiply against the minimized interaction prompt widget's base alpha when blinking.");
  DVARBOOL_lui_objective_fade_enabled = Dvar_RegisterBool("NTMLPPMOPK", 1, 0, "Killswitch for the objective distance fading system");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_lui_objective_fadeStart = Dvar_RegisterFloat("LLSLRMTOKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which objectives will begin to fade their opacity from 1 to 0. If the widget is closer than this distance, it will be drawn at full opacity.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_lui_objective_fadeEnd = Dvar_RegisterFloat("MKMMKPPTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which objectives will end fading their opacity from 1 to 0. If the widget is further than this distance, it will be hidden.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v46 = Dvar_RegisterFloat("MLOKPTMLQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Distance at which objectives will stop snapping (clamping) to the side of the screen.");
  __asm { vmovss  xmm1, cs:__real@40200000; value }
  DVARFLT_lui_objective_stopSnapDistance = v46;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_lui_contextual_ping_objective_world_pos_epsilon = Dvar_RegisterFloat("OLQKMRLKRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "This value represents HALF the precision epsilon when using world position objectives with the contextual ping system. We allow differences in precision between +/- this value.");
  v50 = Dvar_RegisterInt("NTSOSPRNNN", 1, 0, 10, 0, "During the Zeus upsell event, an upsell reminder will show up in the front-end every X games.");
  __asm { vmovaps xmm6, [rsp+78h+var_18] }
  _R11 = &v61;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  DVARINT_lui_zeus_upsell_reminder_frequency = v50;
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

void __fastcall LUI_CoD_RenderFrame(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  GfxBackEndData *v3; 
  LocalClientNum_t v7; 
  R_RT_Image *p_m_image; 
  R_RT_Handle v14; 
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
      _RBX = (__int64)&v3->viewInfo[v3->viewInfoIndex];
      if ( *(_QWORD *)(_RBX + 3640) )
      {
        v3->async2D.renderPending = 1;
        frontEndDataOut->async2D.renderReceivePPFXPending = *(_QWORD *)(_RBX + 3656) != 0i64;
        R_TG_SetupPhase((GfxViewInfo *)_RBX, frontEndDataOut->smpFrame, 4u);
        if ( (*(_DWORD *)(_RBX + 15540) & 0x100) == 0 )
        {
          memset_0(&resources.sceneColor, 0, 0x60ui64);
          _RAX = R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER_FRONTEND);
          __asm { vmovups ymm1, ymmword ptr [rbx+30C0h] }
          v7 = *(_DWORD *)(_RBX + 11716);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rsp+128h+resources.displayColor.baseclass_0.m_surfaceID], ymm0
            vmovups ymm0, ymmword ptr [rbx+31A0h]
            vmovups ymmword ptr [rsp+128h+resources.sceneDepth.baseclass_0.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+128h+resources.sceneColor.baseclass_0.m_surfaceID], ymm1
          }
          _RAX = R_UniversalClut_GetImage(v7, MOVEMENT);
          __asm
          {
            vmovups ymm1, ymmword ptr [rbx+33E0h]
            vmovups ymm0, ymmword ptr [rbx+33C0h]
          }
          resources.universalClut = _RAX;
          __asm
          {
            vmovd   eax, xmm1
            vmovups ymmword ptr [rsp+128h+resources.packedStencil.m_surfaceID], ymm0
            vmovups ymmword ptr [rsp+128h+var_F8.m_surfaceID], ymm1
          }
          if ( (_WORD)_RAX )
          {
            R_RT_Handle::GetSurface(&v14);
            p_m_image = &R_RT_Handle::GetSurface(&v14)->m_image;
          }
          else
          {
            if ( v14.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter", *(_QWORD *)&v14.m_surfaceID) )
              __debugbreak();
            p_m_image = (R_RT_Image *)rgp.blackImage;
          }
          resources.resolvedScene = &p_m_image->m_base;
          resources.exposureBuffer = R_Tonemap_GetConstantBuffer((const GfxViewInfo *)_RBX);
          if ( frontEndDataOut->async2D.renderReceivePPFXPending )
            LUI_Workers_AddRenderWorker((const GfxViewInfo *)_RBX, &resources, 1);
          LUI_Workers_AddRenderWorker((const GfxViewInfo *)_RBX, &resources, 0);
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
  const dvar_t *v3; 
  unsigned __int64 v5; 
  char v13; 
  char v14; 

  v3 = DCONST_DVARBOOL_lui_enabled;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3255, ASSERT_TYPE_ASSERT, "(LUI_CoD_RunFrameEnabled())", (const char *)&queryFormat, "LUI_CoD_RunFrameEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3256, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  s_inLUIRenderFrame = 1;
  v5 = Sys_Microseconds();
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (__int64)(Sys_Microseconds() - v5) < 0 )
    __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
  _RCX = s_luiLastUpdateFrameDuration_nextIndex;
  _RDX = s_luiLastUpdateFrameDuration;
  __asm
  {
    vmulss  xmm0, xmm0, cs:__real@3a83126f
    vaddss  xmm6, xmm0, cs:s_luiUpdateFrameInternalDuration
    vmovss  dword ptr [rdx+rcx*4], xmm6
  }
  s_luiLastUpdateFrameDuration_nextIndex = ((int)_RCX + 1) % 32;
  if ( !s_luaInFrontend )
  {
    _RBX = DCONST_DVARFLT_lui_reportPerfThresholdMS;
    if ( !DCONST_DVARFLT_lui_reportPerfThresholdMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_reportPerfThresholdMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( !(v13 | v14) )
    {
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      Com_PrintWarning(13, "LUI frame time: %4.2fms\n", _R8);
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  s_inLUIRenderFrame = 0;
}

/*
==============
LUI_CoD_Render_Internal
==============
*/

void __fastcall LUI_CoD_Render_Internal(const LocalClientNum_t localClientNum, LUIRootData *rootData, double a3, double _XMM3_8)
{
  __int64 v10; 
  int LocalClientActiveCount; 
  __int64 v32; 
  __int64 v33; 
  const dvar_t *v34; 
  const ScreenPlacement *ActivePlacement; 
  float fmt; 
  float y; 
  float v41; 
  GfxPointVertex verts; 
  unsigned __int8 v45[4]; 
  unsigned __int8 v48[4]; 
  unsigned __int8 v51[4]; 
  unsigned __int8 v54[4]; 
  unsigned __int8 v57[4]; 
  unsigned __int8 v60[4]; 
  unsigned __int8 v63[4]; 

  LUI_Render(localClientNum, rootData, LUI_luaVM);
  if ( ui_safearea->current.enabled )
  {
    __asm
    {
      vmovaps [rsp+140h+var_10], xmm6
      vmovaps [rsp+140h+var_20], xmm7
      vmovaps [rsp+140h+var_30], xmm8
      vmovaps [rsp+140h+var_40], xmm9
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax
      vmulss  xmm0, xmm3, cs:__real@3d4cccd0
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, rax
      vmulss  xmm0, xmm9, cs:__real@3d4cccd0
      vxorps  xmm8, xmm8, xmm8
      vroundss xmm8, xmm8, xmm1, 1
      vaddss  xmm1, xmm0, cs:__real@3f000000
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm6, xmm6, xmm1, 1
      vmovaps [rsp+140h+var_50], xmm11
      vsubss  xmm7, xmm9, xmm6
      vsubss  xmm11, xmm3, xmm8
    }
    LocalClientActiveCount = CL_GetLocalClientActiveCount();
    if ( LocalClientActiveCount >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6467, ASSERT_TYPE_ASSERT, "(clientActiveCount < 3)", (const char *)&queryFormat, "clientActiveCount < 3") )
      __debugbreak();
    if ( LocalClientActiveCount == 2 && !Com_FrontEnd_IsInFrontEnd() && localClientNum == LOCAL_CLIENT_1 )
    {
      __asm
      {
        vmulss  xmm0, xmm9, cs:__real@3f000000
        vsubss  xmm6, xmm6, xmm0
        vsubss  xmm7, xmm7, xmm0
      }
    }
    __asm
    {
      vmovss  dword ptr [rsp+140h+verts.xyz], xmm8
      vmovss  dword ptr [rsp+140h+verts.xyz+4], xmm6
    }
    Byte4PackVertexColor(&colorRed, verts.color);
    __asm
    {
      vmovss  [rsp+140h+var_D0], xmm11
      vmovss  [rsp+140h+var_CC], xmm6
    }
    Byte4PackVertexColor(&colorRed, v45);
    __asm
    {
      vmovss  [rbp+40h+var_C0], xmm11
      vmovss  [rbp+40h+var_BC], xmm6
    }
    Byte4PackVertexColor(&colorRed, v48);
    __asm
    {
      vmovss  [rbp+40h+var_B0], xmm11
      vmovss  [rbp+40h+var_AC], xmm7
    }
    Byte4PackVertexColor(&colorRed, v51);
    __asm
    {
      vmovss  [rbp+40h+var_A0], xmm11
      vmovss  [rbp+40h+var_9C], xmm7
    }
    Byte4PackVertexColor(&colorRed, v54);
    __asm
    {
      vmovss  [rbp+40h+var_90], xmm8
      vmovss  [rbp+40h+var_8C], xmm7
    }
    Byte4PackVertexColor(&colorRed, v57);
    __asm
    {
      vmovss  [rbp+40h+var_80], xmm8
      vmovss  [rbp+40h+var_7C], xmm7
    }
    Byte4PackVertexColor(&colorRed, v60);
    __asm
    {
      vmovss  [rbp+40h+var_70], xmm8
      vmovss  [rbp+40h+var_6C], xmm6
    }
    Byte4PackVertexColor(&colorRed, v63);
    R_AddCmdDrawLines2D(4u, 2u, &verts);
    __asm
    {
      vmovaps xmm11, [rsp+140h+var_50]
      vmovaps xmm9, [rsp+140h+var_40]
      vmovaps xmm8, [rsp+140h+var_30]
      vmovaps xmm7, [rsp+140h+var_20]
      vmovaps xmm6, [rsp+140h+var_10]
    }
  }
  LUI_CoD_DrawMemoryReport(localClientNum, v10, a3);
  LUI_CoD_DrawMemoryGraph(localClientNum);
  LUI_CoD_DrawStackMenuNames(localClientNum);
  LUI_CoD_DrawLuiDynIconStreamerInfo(localClientNum);
  LUI_CoD_DrawLuiStreamedImageList(localClientNum);
  LUI_CoD_DrawAttachmentsReference(localClientNum, v32, a3);
  LUI_CoD_DrawFrontendWeaponModelName(localClientNum, v33, a3);
  v34 = DVARBOOL_lui_drawFocusChain;
  if ( !DVARBOOL_lui_drawFocusChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_drawFocusChain") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
  {
    if ( s_focusChainInfo.chainStr[0] )
    {
      ActivePlacement = ScrPlace_GetActivePlacement(localClientNum);
      __asm
      {
        vmovss  xmm0, cs:__real@3e4ccccd
        vmovss  xmm1, cs:__real@41a00000
        vmovss  [rsp+140h+var_100], xmm0
        vmovss  xmm0, cs:__real@43480000
        vmovss  [rsp+140h+y], xmm0
        vmovss  dword ptr [rsp+140h+fmt], xmm1
      }
      UI_DrawText(ActivePlacement, s_focusChainInfo.chainStr, 4096, cls.smallDevFont, fmt, y, 1, 1, v41, &colorWhite, 8);
    }
  }
}

/*
==============
LUI_CoD_ResizeRoot
==============
*/

void __fastcall LUI_CoD_ResizeRoot(LUIRootData *rootData, double left, double top, double right, float bottom)
{
  char *name; 
  float fmt; 
  float bottomResult; 
  float topResult; 

  __asm
  {
    vmovss  [rsp+topResult], xmm2
    vmovaps [rsp+78h+var_18], xmm6
  }
  name = rootData->name;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
    vmovaps xmm8, xmm1
    vmovaps xmm7, xmm3
    vmovaps xmm6, xmm2
  }
  if ( rootData == (LUIRootData *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 2118, ASSERT_TYPE_ASSERT, "(rootData->name)", (const char *)&queryFormat, "rootData->name") )
    __debugbreak();
  __asm
  {
    vmovss  xmm3, [rsp+78h+pixelAspectRatio]; bottom
    vmovaps xmm2, xmm7; right
    vmovaps xmm1, xmm6; top
    vmovaps xmm0, xmm8; left
  }
  LUI_CoD_AdjustRootAspectRatio(*(float *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &topResult, &bottom, &rootData->projectionMatrix);
  __asm
  {
    vmovss  xmm1, [rsp+78h+pixelAspectRatio]
    vmovss  xmm0, cs:__real@3f800000
    vmovss  xmm2, [rsp+78h+topResult]; top
    vmovss  dword ptr [rsp+78h+bottomResult], xmm0
    vmovss  dword ptr [rsp+78h+fmt], xmm1
    vmovaps xmm1, xmm8; left
    vmovaps xmm3, xmm7; right
  }
  LUI_Resize(name, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3, fmt, bottomResult, LUI_luaVM);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, [rsp+78h+var_38]
  }
}

/*
==============
LUI_CoD_ResizeRoots
==============
*/

void __fastcall LUI_CoD_ResizeRoots(double _XMM0_8, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  bool *p_inUse; 
  int v10; 
  LUIRootData *v11; 
  float v26; 
  float v27; 
  void *retaddr; 
  LocalClientNum_t outLocalClientNum; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm8 }
  LUI_EnterCriticalSection("LUI_CoD_ResizeRoots");
  j_lua_gc(LUI_luaVM, 2, 0);
  __asm
  {
    vmovss  xmm8, cs:__real@3fd55555
    vmovaps [rsp+68h+var_18], xmm6
  }
  p_inUse = &s_rootData[0].inUse;
  v10 = 0;
  __asm { vmovaps [rsp+68h+var_28], xmm7 }
  v11 = s_rootData;
  do
  {
    Com_sprintf(v11->name, 0x20ui64, "UIRoot%d", (unsigned int)v10);
    if ( *p_inUse && CL_Mgr_IsControllerMappedToClient(v10, &outLocalClientNum) )
    {
      CG_GetLocalClientViewParams(outLocalClientNum);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rcx
        vmulss  xmm6, xmm0, dword ptr [rax+8]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rcx
        vmulss  xmm7, xmm1, dword ptr [rax+0Ch]
      }
      if ( LUI_CoD_UsingSplitscreenUpscaling() )
      {
        __asm
        {
          vmulss  xmm6, xmm6, xmm8
          vmulss  xmm7, xmm7, xmm8
        }
      }
      __asm
      {
        vmovaps xmm3, xmm6; right
        vxorps  xmm2, xmm2, xmm2; top
        vxorps  xmm1, xmm1, xmm1; left
        vmovss  [rsp+68h+var_48], xmm7
      }
      LUI_CoD_ResizeRoot(v11, _XMM1_8, _XMM2_8, _XMM3_8, v26);
    }
    ++v10;
    ++v11;
    p_inUse += 464;
  }
  while ( v10 < 8 );
  __asm
  {
    vmovaps xmm8, [rsp+68h+var_38]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm6, [rsp+68h+var_18]
  }
  if ( s_fullscreenRootData.inUse )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax; right
      vxorps  xmm2, xmm2, xmm2; top
      vxorps  xmm1, xmm1, xmm1; left
      vmovss  [rsp+68h+var_48], xmm0
    }
    LUI_CoD_ResizeRoot(&s_fullscreenRootData, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, v27);
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
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = quadVerts;
  if ( !quadVerts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6314, ASSERT_TYPE_ASSERT, "(quadVerts)", (const char *)&queryFormat, "quadVerts") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vsubss  xmm1, xmm0, dword ptr [rbx]
    vmovss  xmm0, dword ptr [rbx+34h]
    vmovss  xmm5, cs:__real@3f000000
    vaddss  xmm2, xmm1, xmm5
    vsubss  xmm1, xmm0, dword ptr [rbx+4]
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm3, xmm6, xmm2, 1
    vaddss  xmm2, xmm5, dword ptr [rbx]
    vcvttss2si edx, xmm3
    vaddss  xmm3, xmm1, xmm5
    vroundss xmm1, xmm6, xmm3, 1
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si eax, xmm3
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm2, xmm5, dword ptr [rbx+4]
    vcvttss2si ecx, xmm1
    vroundss xmm1, xmm6, xmm2, 1
    vmovaps xmm6, [rsp+48h+var_18]
    vcvttss2si eax, xmm1
    vmovd   xmm0, eax
    vcvtdq2ps xmm0, xmm0
    vmovss  dword ptr [rbx+4], xmm0
    vmovd   xmm2, edx
    vcvtdq2ps xmm2, xmm2
    vaddss  xmm1, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rbx+10h], xmm1
  }
  (*_RBX)[1].v[1] = (*_RBX)[0].v[1];
  __asm
  {
    vaddss  xmm0, xmm2, dword ptr [rbx]
    vmovss  dword ptr [rbx+20h], xmm0
    vmovd   xmm3, ecx
    vcvtdq2ps xmm3, xmm3
    vaddss  xmm1, xmm3, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+24h], xmm1
  }
  (*_RBX)[3].v[0] = *(float *)_RBX;
  __asm
  {
    vaddss  xmm0, xmm3, dword ptr [rbx+4]
    vmovss  dword ptr [rbx+34h], xmm0
  }
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
  __int64 v3; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  int v8; 
  int v9; 
  int lastUpdateTime; 
  int ServerTime; 
  int lastUpdateGameTime; 
  int v21; 
  LUIElement *RootForController; 
  int v23; 
  LUIRootData *v24; 
  tmat44_t<vec4_t> *p_parallaxMatrix; 
  lua_State *v26; 
  int v27; 
  LUIElement *v28; 
  LUIRootData *v29; 
  __int64 v31; 
  __int64 v32; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateActiveState");
  LUI_Interface_CheckLowMemory(LUI_luaVM);
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateDeltaTime");
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
  RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
  _RSI = DCONST_DVARFLT_lui_timescale;
  if ( !DCONST_DVARFLT_lui_timescale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_timescale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RSI);
  __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  v8 = Sys_Milliseconds();
  v9 = v8;
  lastUpdateTime = RootDataForController->lastUpdateTime;
  if ( lastUpdateTime > 0 )
    RootDataForController->deltaTime = v8 - lastUpdateTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, xmm6
    vcvttss2si eax, xmm1
  }
  if ( _EAX < 0 )
    _EAX = 0;
  RootDataForController->deltaTime = _EAX;
  RootDataForController->lastUpdateTime = v9;
  ServerTime = Game_GetServerTime((const LocalClientNum_t)v3);
  lastUpdateGameTime = RootDataForController->lastUpdateGameTime;
  if ( lastUpdateGameTime > 0 )
    RootDataForController->deltaGameTime = ServerTime - lastUpdateGameTime;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vmulss  xmm1, xmm0, xmm6
    vcvttss2si eax, xmm1
  }
  if ( _EAX < 0 )
    _EAX = 0;
  RootDataForController->deltaGameTime = _EAX;
  RootDataForController->lastUpdateGameTime = ServerTime;
  Sys_ProfEndNamedEvent();
  if ( LUI_luaVM )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallax");
    Sys_ProfBeginNamedEvent(0xFF008008, "Calculate Parallax Offset");
    v21 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    RootForController = LUI_GetRootForController(v21);
    v23 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    v24 = LUI_CoD_GetRootDataForController(v23);
    p_parallaxMatrix = &v24->parallaxMatrix;
    if ( !v24->parallaxSource[0] )
      LUI_Matrix_LoadIdentity(&v24->parallaxMatrix);
    LUI_SetCurrentParallaxMatrix(p_parallaxMatrix);
    Sys_ProfEndNamedEvent();
    if ( s_luaInFrontend )
    {
      LUI_CoD_UpdateParallaxMenu((LocalClientNum_t)v3, RootForController);
      Sys_ProfEndNamedEvent();
    }
    else
    {
      if ( (unsigned int)v3 >= 2 )
      {
        LODWORD(v32) = 2;
        LODWORD(v31) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( !clientUIActives[v3].frontEndSceneState[0] && clientUIActives[v3].cgameInitialized )
      {
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v32) = 2;
          LODWORD(v31) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        if ( (int)v3 < cg_t::ms_allocatedCount )
          LUI_CoD_UpdateParallaxHUDHelmet((LocalClientNum_t)v3, RootForController);
      }
      Sys_ProfEndNamedEvent();
    }
  }
  v26 = LUI_luaVM;
  if ( LUI_luaVM )
  {
    Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_Animate");
    v27 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v3);
    v28 = LUI_GetRootForController(v27);
    v29 = LUI_CoD_GetRootDataForController(v27);
    LUIElement_Animate(v28, v29->deltaTime, v29->deltaGameTime, 0, v26);
    LUI_Tween_RunCallbacks(v26);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+68h+var_18] }
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
  const dvar_t *v3; 
  int v5; 
  int *Value; 
  __int64 v7; 
  _DWORD *v8; 
  unsigned __int64 v9; 
  int PendingComError; 
  const dvar_t *v11; 
  _JBTYPE *LongJmp; 
  __int64 v16; 
  __int64 v17; 
  int lockLevel; 

  v3 = DCONST_DVARBOOL_lui_enabled;
  if ( !DCONST_DVARBOOL_lui_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3067, ASSERT_TYPE_ASSERT, "(LUI_CoD_RunFrameEnabled())", (const char *)&queryFormat, "LUI_CoD_RunFrameEnabled()") )
    __debugbreak();
  if ( !Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3068, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI )") )
    __debugbreak();
  if ( *(_QWORD *)s_tlsf_lua.canaryBytesBegin != *(_QWORD *)"abcdefgh" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3073, ASSERT_TYPE_ASSERT, "(I_memcmp( s_tlsf_lua.canaryBytesBegin, \"abcdefgh\", 8 ) == 0)", "%s\n\ts_tlsf_lua canaryBytes have been corrupted", "I_memcmp( s_tlsf_lua.canaryBytesBegin, \"abcdefgh\", 8 ) == 0") )
    __debugbreak();
  if ( *(_QWORD *)s_tlsf_lua.canaryBytesEnd != *(_QWORD *)"hgfedcba" && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3074, ASSERT_TYPE_ASSERT, "(I_memcmp( s_tlsf_lua.canaryBytesEnd, \"hgfedcba\", 8 ) == 0)", "%s\n\ts_tlsf_lua canaryBytes have been corrupted", "I_memcmp( s_tlsf_lua.canaryBytesEnd, \"hgfedcba\", 8 ) == 0") )
    __debugbreak();
  s_inLUIFrame = 1;
  LUI_QuadCache_ClearDrawList(localClientNum);
  v5 = 0;
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
    v7 = Value[8914];
    if ( (_DWORD)v7 && *(_QWORD *)&Value[4 * v7 + 8784] > *((_QWORD *)Value + 261) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 189, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack)", (const char *)&queryFormat, "prof_stack->prof_guardpos == 0 || prof_stack->prof_guardstack[prof_stack->prof_guardpos - 1].ppStack <= prof_stack->prof_ppStack") )
      __debugbreak();
    if ( (unsigned int)Value[8914] >= 0x20 )
    {
      LODWORD(v17) = 32;
      LODWORD(v16) = Value[8914];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 190, ASSERT_TYPE_ASSERT, "(unsigned)( prof_stack->prof_guardpos ) < (unsigned)( ( sizeof( *array_counter( prof_stack->prof_guardstack ) ) + 0 ) )", "prof_stack->prof_guardpos doesn't index ARRAY_COUNT( prof_stack->prof_guardstack )\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( Value[8914] > 0 )
    {
      v8 = Value + 8786;
      do
      {
        if ( *v8 == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 195, ASSERT_TYPE_ASSERT, "(prof_stack->prof_guardstack[i].id != id)", (const char *)&queryFormat, "prof_stack->prof_guardstack[i].id != id") )
          __debugbreak();
        ++v5;
        v8 += 4;
      }
      while ( v5 < Value[8914] );
    }
    if ( *((_QWORD *)Value + 261) < (unsigned __int64)(Value + 10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 199, ASSERT_TYPE_ASSERT, "(prof_stack->prof_ppStack >= prof_stack->prof_pStack)", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    Value[4 * Value[8914] + 8786] = 2;
    *(_QWORD *)&Value[4 * Value[8914]++ + 8788] = *((_QWORD *)Value + 261);
    v9 = Sys_Microseconds();
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
        v11 = DVARBOOL_splitscreen;
        if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled )
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
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (__int64)(Sys_Microseconds() - v9) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@3a83126f
      vmovss  cs:s_luiUpdateFrameInternalDuration, xmm0
    }
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
  CgWeaponMap *Instance; 
  bool v14; 
  unsigned int refdefViewOrg_aab; 
  char v42; 
  CgHandler *Handler; 
  char v54; 
  CgWeaponMap *v76; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  int v100; 
  int v101; 
  int v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  tmat43_t<vec3_t> out; 
  CgViewSystem::JostleConfig config; 
  vec3_t angles; 
  vec3_t outAngles; 
  tmat33_t<vec3_t> in; 
  WorldUpReferenceFrame v113; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v115; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> in2; 
  char v118; 
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
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallaxHUDHelmet");
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  _RBX = ControllerFromClient;
  v14 = 1;
  if ( !_RSI->renderingThirdPerson )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !BG_IsThirdPersonMode(Instance, &_RSI->predictedPlayerState) )
      v14 = 0;
  }
  config.respectBlendOut = 0;
  _RDI = DCONST_DVARMPFLT_lui_parallax_view_sway_rate;
  if ( !DCONST_DVARMPFLT_lui_parallax_view_sway_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_view_sway_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+258h+config.viewSwayScale], xmm0
  }
  _RDI = DCONST_DVARMPFLT_lui_parallax_anim_sway_rate;
  if ( !DCONST_DVARMPFLT_lui_parallax_anim_sway_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_anim_sway_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+258h+config.animSwayScale], xmm0
  }
  _RDI = DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence;
  if ( !DCONST_DVARMPFLT_lui_parallax_max_linear_velocity_influence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_max_linear_velocity_influence") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+258h+config.maxLinearVelocityInfluence], xmm0
  }
  _RDI = DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate;
  if ( !DCONST_DVARMPVEC3_lui_parallax_linear_velocity_to_angle_rate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_linear_velocity_to_angle_rate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+258h+config.linearVelocityToAngleRate], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsp+258h+config.linearVelocityToAngleRate+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rsp+258h+config.linearVelocityToAngleRate+8], xmm0
  }
  _RDI = DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view;
  if ( !DCONST_DVARMPVEC2_lui_parallax_max_offset_from_view && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_max_offset_from_view") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+258h+config.maxOffset], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rsp+258h+config.maxOffset+4], xmm1
    vmovss  dword ptr [rsp+258h+config.maxOffset+8], xmm1
  }
  AxisCopy(&_RSI->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
  if ( _RSI == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
    __debugbreak();
  refdefViewOrg_aab = _RSI->refdef.view.refdefViewOrg_aab;
  if ( _RSI == (cg_t *)-26936i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
    __debugbreak();
  LODWORD(out.m[3].v[0]) = LODWORD(_RSI->refdef.view.org.org.v[0]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26936)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26936)) + 2));
  LODWORD(out.m[3].v[1]) = LODWORD(_RSI->refdef.view.org.org.v[1]) ^ ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26940)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26940)) + 2));
  LODWORD(out.m[3].v[2]) = ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26944)) * ((refdefViewOrg_aab ^ ((_DWORD)_RSI + 26944)) + 2)) ^ LODWORD(_RSI->refdef.view.org.org.v[2]);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v96 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+4]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v97 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+8]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v98 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+0Ch]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v99 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+10h]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v100 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+14h]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v101 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+18h]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v102 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+1Ch]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v103 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+258h+out+20h]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v104 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, [rsp+258h+var_1E4]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v105 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, [rsp+258h+var_1E0]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v106 & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, [rsp+258h+var_1DC]
    vmovss  [rsp+258h+var_218], xmm0
  }
  if ( (v107 & 0x7F800000) == 2139095040 )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 3675, ASSERT_TYPE_SANITY, "( !( ( IS_NAN( ( ( viewTransform )[0] )[0] ) || IS_NAN( ( ( viewTransform )[0] )[1] ) || IS_NAN( ( ( viewTransform )[0] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[1] )[0] ) || IS_NAN( ( ( viewTransform )[1] )[1] ) || IS_NAN( ( ( viewTransform )[1] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[2] )[0] ) || IS_NAN( ( ( viewTransform )[2] )[1] ) || IS_NAN( ( ( viewTransform )[2] )[2] ) ) || ( IS_NAN( ( ( viewTransform )[3] )[0] ) || IS_NAN( ( ( viewTransform )[3] )[1] ) || IS_NAN( ( ( viewTransform )[3] )[2] ) ) ) )", (const char *)&queryFormat, "!IS_NAN_MAT43( viewTransform )") )
      __debugbreak();
  }
  _R12 = s_rootData;
  if ( s_rootData[_RBX].parallaxSource[0] != 1 )
  {
    ViewJostleState::Reset(&s_rootData[_RBX].helmetParallaxState);
    *(_WORD *)&s_rootData[_RBX].helmetParallaxState.isAttachmentCached = 257;
LABEL_42:
    v42 = 1;
    goto LABEL_43;
  }
  if ( _RSI->playerTeleported || v14 )
    goto LABEL_42;
  v42 = 0;
LABEL_43:
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v113, &_RSI->predictedPlayerState, Handler);
  if ( v42 )
  {
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v113, (const tmat33_t<vec3_t> *)&out, &outAxis);
    AxisToAngles(&outAxis, &s_rootData[_RBX].helmetParallaxState.oldLinkedTagAnglesLocal);
    s_rootData[_RBX].helmetParallaxState.oldViewanglesLocal.v[0] = _RSI->predictedPlayerState.viewangles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1E4h]
      vmovss  dword ptr [rbx+r12+160h], xmm0
      vmovss  xmm1, dword ptr [rsi+1E8h]
      vmovss  dword ptr [rbx+r12+164h], xmm1
      vmovss  xmm0, [rsp+258h+var_1E4]
      vmovss  dword ptr [rbx+r12+174h], xmm0
      vmovss  xmm1, [rsp+258h+var_1E0]
      vmovss  dword ptr [rbx+r12+178h], xmm1
      vmovss  xmm0, [rsp+258h+var_1DC]
      vmovss  dword ptr [rbx+r12+17Ch], xmm0
    }
  }
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &angles);
  CG_View_CalculateViewJostle(_RSI, &config, &out, &angles, &outAngles, &s_rootData[_RBX].helmetParallaxState);
  s_rootData[_RBX].parallaxSource[0] = 1;
  __asm { vmovss  xmm0, dword ptr [rsi+6934h]; X }
  *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@42652ee0
    vmulss  xmm9, xmm1, cs:__real@40000000
    vandps  xmm2, xmm9, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcvtss2sd xmm0, xmm2, xmm2
    vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
  }
  if ( v54 )
  {
    LUI_Matrix_LoadIdentity(&s_rootData[_RBX].parallaxMatrix);
  }
  else
  {
    AnglesToAxis(&outAngles, &axis);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+258h+out]
      vmovups ymmword ptr [rsp+258h+in], ymm0
    }
    in.m[2].v[2] = out.m[2].v[2];
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v113, &axis);
    WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v113, &in);
    MatrixInverse(&in, &in2);
    MatrixMultiply(&axis, &in2, &v115);
    *(double *)&_XMM0 = vectopitch(v115.m);
    __asm
    {
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm2, xmm0, xmm1
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm0, xmm6, xmm2, 1
      vsubss  xmm0, xmm3, xmm0
      vmulss  xmm10, xmm0, cs:__real@43b40000
    }
    *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v115);
    __asm
    {
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vxorps  xmm1, xmm1, xmm1
      vmovss  xmm0, xmm1, xmm2
      vroundss xmm3, xmm6, xmm0, 1
      vsubss  xmm11, xmm4, xmm3
    }
    _RDI = DCONST_DVARMPFLT_lui_parallax_scale;
    if ( !DCONST_DVARMPFLT_lui_parallax_scale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_scale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm8, dword ptr [rdi+28h]
      vmulss  xmm6, xmm10, xmm8
    }
    _RAX = ScrPlace_GetActivePlacement(localClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+24h]
      vdivss  xmm7, xmm0, xmm9
    }
    v76 = CgWeaponMap::GetInstance(localClientNum);
    BG_WeaponADSFractionAffectedByReload(v76, &_RSI->predictedPlayerState);
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vsubss  xmm4, xmm1, xmm0
      vmulss  xmm0, xmm6, xmm7
      vmulss  xmm1, xmm0, xmm4
      vmovss  xmm5, dword ptr [rbx+r12+0F8h]
      vmulss  xmm1, xmm5, xmm1; y
      vmulss  xmm0, xmm11, cs:__real@c3b40000
      vmulss  xmm2, xmm0, xmm8
      vmulss  xmm3, xmm2, xmm7
      vmulss  xmm4, xmm3, xmm4
      vmulss  xmm0, xmm4, xmm5; x
      vxorps  xmm2, xmm2, xmm2; z
    }
    LUI_Matrix_BuildTranslationMatrix(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, &s_rootData[_RBX].parallaxMatrix);
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v118;
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
LUI_CoD_UpdateParallaxMenu
==============
*/
void LUI_CoD_UpdateParallaxMenu(LocalClientNum_t localClientNum, LUIElement *root)
{
  __int64 v9; 
  __int64 v15; 
  UIInputType lastInputType; 
  bool v22; 
  int v98; 
  int v99; 
  char v100; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
  }
  v9 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_CoD_UpdateParallaxMenu");
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:s_fullscreenRootData.deltaTime
    vmulss  xmm1, xmm0, cs:__real@3a83126f
    vminss  xmm10, xmm1, cs:__real@3d4ccccd
  }
  if ( (unsigned int)v9 >= 2 )
  {
    v99 = 2;
    v98 = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v98, v99) )
      __debugbreak();
  }
  v15 = v9;
  if ( s_fullscreenRootData.parallaxSource[0] != 2 )
  {
    s_fullscreenRootData.menuParallaxState.acceleration = 0i64;
    s_fullscreenRootData.menuParallaxState.velocity = 0i64;
    s_fullscreenRootData.menuParallaxState.currentOffset = 0i64;
    s_fullscreenRootData.menuParallaxState.targetOffset = 0i64;
  }
  __asm
  {
    vxorps  xmm9, xmm9, xmm9
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset, xmm9
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4, xmm9
  }
  _R15 = 0x140000000ui64;
  lastInputType = clientUIActives[v15].lastInputType;
  __asm
  {
    vxorps  xmm5, xmm5, xmm5
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm8, cs:__real@3f000000
  }
  v22 = lastInputType <= GAMEPAD;
  if ( lastInputType == GAMEPAD )
  {
    _RAX = s_fullscreenRootData.lastFocusedElement;
    if ( !s_fullscreenRootData.lastFocusedElement )
      goto LABEL_18;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+0D4h]
      vaddss  xmm1, xmm0, dword ptr [rax+0CCh]
      vmulss  xmm7, xmm1, xmm8
      vmovss  xmm2, dword ptr [rax+0D8h]
      vaddss  xmm0, xmm2, dword ptr [rax+0D0h]
      vmulss  xmm6, xmm0, xmm8
    }
    ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    __asm
    {
      vmulss  xmm2, xmm8, dword ptr [rax+20h]
      vmulss  xmm3, xmm8, dword ptr [rax+24h]
      vsubss  xmm0, xmm7, xmm2
      vdivss  xmm7, xmm0, xmm2
      vsubss  xmm1, xmm6, xmm3
      vdivss  xmm6, xmm1, xmm3
    }
    _RSI = DCONST_DVARFLT_lui_parallax_menu_focus_amplitude;
    if ( !DCONST_DVARFLT_lui_parallax_menu_focus_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_focus_amplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+28h]
      vmulss  xmm1, xmm7, xmm2
      vmovss  xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset
      vaddss  xmm5, xmm0, xmm1
      vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset, xmm5
      vmulss  xmm1, xmm6, xmm2
      vaddss  xmm0, xmm1, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4
      vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4, xmm0
    }
    lastInputType = clientUIActives[v15].lastInputType;
    v22 = lastInputType <= GAMEPAD;
    if ( lastInputType == GAMEPAD )
    {
LABEL_18:
      *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v9, GPAD_PHYSAXIS_RSTICK_X);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vaddss  xmm0, xmm0, xmm6
        vmulss  xmm7, xmm0, xmm8
      }
      *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v9, GPAD_PHYSAXIS_RSTICK_Y);
      __asm
      {
        vaddss  xmm1, xmm0, xmm6
        vmulss  xmm8, xmm1, xmm8
      }
      _RBX = DCONST_DVARFLT_lui_parallax_menu_stick_amplitude;
      if ( !DCONST_DVARFLT_lui_parallax_menu_stick_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_stick_amplitude") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm4, dword ptr [rbx+28h]
        vmulss  xmm0, xmm4, xmm7
        vxorps  xmm3, xmm0, cs:__xmm@80000000800000008000000080000000
        vsubss  xmm1, xmm7, xmm6
        vmulss  xmm2, xmm1, xmm4
        vsubss  xmm3, xmm3, xmm2
        vmovss  xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset
        vaddss  xmm5, xmm0, xmm3
        vsubss  xmm0, xmm8, xmm6
        vaddss  xmm1, xmm0, xmm8
        vmulss  xmm3, xmm1, xmm4
        vmovss  xmm2, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4
        vaddss  xmm0, xmm2, xmm3
      }
      goto LABEL_22;
    }
  }
  if ( !v22 && lastInputType <= KEYBOARD_NAVIGATION )
  {
    _RDX = 32i64 * CL_Mgr_GetControllerFromClient((LocalClientNum_t)v9);
    __asm
    {
      vmovss  xmm7, dword ptr [rdx+r15+14537954h]
      vmovss  xmm6, dword ptr [rdx+r15+14537958h]
    }
    ScrPlace_GetActivePlacement((const LocalClientNum_t)v9);
    __asm
    {
      vmulss  xmm2, xmm8, dword ptr [rax+20h]
      vmulss  xmm3, xmm8, dword ptr [rax+24h]
      vsubss  xmm0, xmm7, xmm2
      vdivss  xmm7, xmm0, xmm2
      vsubss  xmm1, xmm6, xmm3
      vdivss  xmm6, xmm1, xmm3
    }
    _RBX = DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude;
    if ( !DCONST_DVARFLT_lui_parallax_menu_mouse_amplitude && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_parallax_menu_mouse_amplitude") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]
      vmulss  xmm1, xmm7, xmm2
      vmovss  xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset
      vaddss  xmm5, xmm0, xmm1
      vmulss  xmm1, xmm6, xmm2
      vaddss  xmm0, xmm1, dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4
    }
LABEL_22:
    __asm
    {
      vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset+4, xmm0
      vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.targetOffset, xmm5
    }
  }
  __asm
  {
    vsubss  xmm2, xmm5, dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset
    vsubss  xmm1, xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset+4
    vmulss  xmm3, xmm2, cs:__real@43160000
    vmulss  xmm4, xmm1, cs:__real@43160000
    vmovss  xmm2, cs:__real@c1c3f58d
    vmulss  xmm1, xmm2, dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity
    vmulss  xmm0, xmm2, dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity+4
    vaddss  xmm1, xmm1, xmm3
    vaddss  xmm3, xmm0, xmm4
    vmulss  xmm0, xmm1, xmm10
    vaddss  xmm5, xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity, xmm5
    vmulss  xmm0, xmm3, xmm10
    vaddss  xmm1, xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity+4
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.velocity+4, xmm1
    vmulss  xmm0, xmm5, xmm10
    vmulss  xmm3, xmm1, xmm10
    vaddss  xmm4, xmm0, dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset, xmm4
    vaddss  xmm1, xmm3, dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset+4
    vmovss  dword ptr cs:s_fullscreenRootData.menuParallaxState.currentOffset+4, xmm1
    vmulss  xmm1, xmm1, cs:s_fullscreenRootData.unitScale; y
    vmulss  xmm0, xmm4, cs:s_fullscreenRootData.unitScale; x
    vxorps  xmm2, xmm2, xmm2; z
  }
  LUI_Matrix_BuildTranslationMatrix(*(const float *)&_XMM0, *(const float *)&_XMM1, *(const float *)&_XMM2, &s_fullscreenRootData.parallaxMatrix);
  s_fullscreenRootData.parallaxSource[0] = 2;
  Sys_ProfEndNamedEvent();
  _R11 = &v100;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
LUI_CoD_UpdateStickInput
==============
*/
void LUI_CoD_UpdateStickInput(const LocalClientNum_t localClientNum)
{
  __int64 v11; 
  __int64 ControllerFromClient; 
  clientUIActive_t *v13; 
  int v15; 
  char v17; 
  __int64 v18; 
  char v19; 
  char v46; 
  char v47; 
  LocalClientNum_t ClientFromController; 

  v11 = localClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (unsigned int)v11 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, 2) )
    __debugbreak();
  v13 = &clientUIActives[v11];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5847, ASSERT_TYPE_ASSERT, "(cl)", (const char *)&queryFormat, "cl") )
    __debugbreak();
  _R13 = s_perController;
  if ( s_perController[ControllerFromClient].inputLocked || (v13->keyCatchers & 0x40) != 0 )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovaps [rsp+0F8h+var_58], xmm8
      vmovaps [rsp+0F8h+var_68], xmm9
      vmovaps [rsp+0F8h+var_78], xmm10
      vmovaps [rsp+0F8h+var_88], xmm12
      vmovaps [rsp+0F8h+var_98], xmm13
      vmovaps [rsp+0F8h+var_A8], xmm14
      vmovaps [rsp+0F8h+var_B8], xmm15
    }
    v15 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v11);
    _RDI = DCONST_DVARFLT_lui_stick_direction_threshold;
    v17 = 0;
    v18 = v15;
    v19 = 0;
    if ( !DCONST_DVARFLT_lui_stick_direction_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_stick_direction_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm9, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_lui_stick_magnitude_threshold;
    if ( !DCONST_DVARFLT_lui_stick_magnitude_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_stick_magnitude_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm10, dword ptr [rdi+28h] }
    *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v11, GPAD_PHYSAXIS_LSTICK_Y);
    __asm { vmovaps xmm14, xmm0 }
    *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v11, GPAD_PHYSAXIS_LSTICK_X);
    __asm
    {
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm14, xmm14
      vaddss  xmm2, xmm2, xmm1
      vmovaps xmm1, xmm0; X
      vmovaps xmm15, xmm0
      vmovaps xmm0, xmm14; Y
      vsqrtss xmm8, xmm2, xmm2
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    }
    _RSI = v18;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+r13+0Ch]
      vucomiss xmm1, xmm0
    }
    if ( 32 * v18 )
      goto LABEL_17;
    _RDI = &s_perController[0].leftStickMagnitude;
    __asm { vucomiss xmm8, dword ptr [rdi] }
    if ( 32 * v18 )
    {
LABEL_17:
      __asm
      {
        vsubss  xmm0, xmm1, xmm0
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm9
      }
      _RDI = &s_perController[_RSI].leftStickMagnitude;
      if ( !__CFSHL__(v18, 5) && 32 * v18 != 0 )
        goto LABEL_19;
      __asm
      {
        vsubss  xmm0, xmm8, dword ptr [rdi]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm10
      }
      if ( !__CFSHL__(v18, 5) && 32 * v18 != 0 )
LABEL_19:
        v19 = 1;
      __asm
      {
        vmovss  dword ptr [rsi+r13+0Ch], xmm1
        vmovss  dword ptr [rdi], xmm8
      }
      v17 = 1;
    }
    *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v11, GPAD_PHYSAXIS_RSTICK_Y);
    __asm { vmovaps xmm12, xmm0 }
    *(double *)&_XMM0 = CL_GamepadPhysicalAxisValue((LocalClientNum_t)v11, GPAD_PHYSAXIS_RSTICK_X);
    __asm
    {
      vmulss  xmm2, xmm0, xmm0
      vmulss  xmm1, xmm12, xmm12
      vaddss  xmm2, xmm2, xmm1
      vmovaps xmm1, xmm0; X
      vmovaps xmm13, xmm0
      vmovaps xmm0, xmm12; Y
      vsqrtss xmm6, xmm2, xmm2
    }
    *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42652ee0
      vmovss  xmm2, dword ptr [rsi+r13+14h]
      vucomiss xmm1, xmm2
    }
    if ( !v47 )
      goto LABEL_23;
    _RBX = &s_perController[_RSI].rightStickMagnitude;
    __asm { vucomiss xmm6, dword ptr [rbx] }
    if ( !v47 )
    {
LABEL_23:
      __asm
      {
        vsubss  xmm0, xmm1, xmm2
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm9
      }
      _RBX = &s_perController[_RSI].rightStickMagnitude;
      if ( !(v46 | v47) )
        goto LABEL_25;
      __asm
      {
        vsubss  xmm0, xmm6, dword ptr [rbx]
        vandps  xmm0, xmm0, xmm7
        vcomiss xmm0, xmm10
      }
      if ( !(v46 | v47) )
LABEL_25:
        v19 = 1;
      __asm
      {
        vmovss  dword ptr [rsi+r13+14h], xmm1
        vmovss  dword ptr [rbx], xmm6
      }
      v17 = 1;
    }
    __asm
    {
      vmovaps xmm10, [rsp+0F8h+var_78]
      vmovaps xmm9, [rsp+0F8h+var_68]
      vmovaps xmm7, [rsp+0F8h+var_48]
    }
    if ( gpad_use_deadzone_option_value->current.enabled )
    {
      _RAX = GamerProfile_GetProfileSettings(v18);
      __asm { vmovss  xmm0, dword ptr [rax+0C94h] }
    }
    else
    {
      _RAX = gpad_stick_deadzone_min;
      __asm { vmovss  xmm0, dword ptr [rax+28h] }
    }
    if ( v19 && v17 )
    {
      __asm { vcomiss xmm8, xmm0 }
      LUI_CoD_UpdateInputType(v18, GAMEPAD);
    }
    ClientFromController = LOCAL_CLIENT_0;
    __asm
    {
      vmovaps xmm8, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_38]
    }
    if ( CL_Mgr_IsControllerMappedToClient(v18, NULL) )
      ClientFromController = CL_Mgr_GetClientFromController(v18);
    if ( v17 )
    {
      if ( LUI_BeginEvent(ClientFromController, "gamepad_sticks", LUI_luaVM) )
      {
        LUI_SetTableInt("controller", v18, LUI_luaVM);
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+r13+0Ch]
          vcvtss2sd xmm1, xmm1, xmm1; value
        }
        LUI_SetTableNumber("leftStickDirection", *(long double *)&_XMM1, LUI_luaVM);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi]
          vcvtss2sd xmm1, xmm1, xmm1; value
        }
        LUI_SetTableNumber("leftStickMagnitude", *(long double *)&_XMM1, LUI_luaVM);
        __asm
        {
          vmovss  xmm1, dword ptr [rsi+r13+14h]
          vcvtss2sd xmm1, xmm1, xmm1; value
        }
        LUI_SetTableNumber("rightStickDirection", *(long double *)&_XMM1, LUI_luaVM);
        __asm
        {
          vmovss  xmm1, dword ptr [rbx]
          vcvtss2sd xmm1, xmm1, xmm1; value
        }
        LUI_SetTableNumber("rightStickMagnitude", *(long double *)&_XMM1, LUI_luaVM);
        __asm { vcvtss2sd xmm1, xmm14, xmm14; value }
        LUI_SetTableNumber("leftStickPitch", *(long double *)&_XMM1, LUI_luaVM);
        __asm { vcvtss2sd xmm1, xmm15, xmm15; value }
        LUI_SetTableNumber("leftStickYaw", *(long double *)&_XMM1, LUI_luaVM);
        __asm { vcvtss2sd xmm1, xmm12, xmm12; value }
        LUI_SetTableNumber("rightStickPitch", *(long double *)&_XMM1, LUI_luaVM);
        __asm { vcvtss2sd xmm1, xmm13, xmm13; value }
        LUI_SetTableNumber("rightStickYaw", *(long double *)&_XMM1, LUI_luaVM);
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+0F8h+var_A8]
      vmovaps xmm13, [rsp+0F8h+var_98]
      vmovaps xmm12, [rsp+0F8h+var_88]
      vmovaps xmm15, [rsp+0F8h+var_B8]
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
  vec4_t point; 
  vec4_t v24; 
  vec4_t v25; 
  vec4_t v26; 
  int data[32]; 

  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm0, dword ptr [rdx+0D0h]
    vmovss  xmm2, dword ptr [rdx+0CCh]
    vmovss  xmm1, dword ptr [rdx+0D4h]
    vxorps  xmm4, xmm4, xmm4
    vmovss  dword ptr [rsp+110h+point+4], xmm0
    vmovss  dword ptr [rsp+110h+var_C8+4], xmm0
    vmovss  xmm0, dword ptr [rdx+0D8h]
    vmovss  dword ptr [rsp+110h+var_A8+4], xmm0
    vmovss  dword ptr [rsp+110h+var_B8+4], xmm0
    vmovss  dword ptr [rsp+110h+point], xmm2
    vmovss  dword ptr [rsp+110h+point+8], xmm4
    vmovss  dword ptr [rsp+110h+point+0Ch], xmm3
    vmovss  dword ptr [rsp+110h+var_C8], xmm1
    vmovss  dword ptr [rsp+110h+var_C8+8], xmm4
    vmovss  dword ptr [rsp+110h+var_C8+0Ch], xmm3
    vmovss  dword ptr [rsp+110h+var_A8], xmm2
    vmovss  dword ptr [rsp+110h+var_A8+8], xmm4
    vmovss  dword ptr [rsp+110h+var_A8+0Ch], xmm3
    vmovss  dword ptr [rsp+110h+var_B8], xmm1
    vmovss  dword ptr [rsp+110h+var_B8+8], xmm4
    vmovss  dword ptr [rsp+110h+var_B8+0Ch], xmm3
  }
  LUI_ApplyTransformsToPoint(&point);
  LUI_ApplyTransformsToPoint(&v24);
  LUI_ApplyTransformsToPoint(&v26);
  LUI_ApplyTransformsToPoint(&v25);
  __asm
  {
    vmovss  xmm2, dword ptr [rsp+110h+var_C8]
    vmovss  xmm1, dword ptr [rsp+110h+var_C8+4]
    vmovss  xmm0, dword ptr [rsp+110h+var_C8+8]
    vmovss  xmm5, dword ptr [rsp+110h+point]
    vmovss  xmm4, dword ptr [rsp+110h+point+4]
    vmovss  xmm3, dword ptr [rsp+110h+point+8]
    vmovss  [rbp+10h+var_80], xmm2
    vmovss  [rbp+10h+var_7C], xmm1
    vmovss  [rbp+10h+var_78], xmm0
    vmovss  [rbp+10h+var_70], xmm2
    vmovss  xmm2, dword ptr [rsp+110h+var_B8]
    vmovss  [rbp+10h+var_6C], xmm1
    vmovss  xmm1, dword ptr [rsp+110h+var_B8+4]
    vmovss  [rbp+10h+var_68], xmm0
    vmovss  xmm0, dword ptr [rsp+110h+var_B8+8]
    vmovss  [rbp+10h+var_60], xmm2
    vmovss  [rbp+10h+var_5C], xmm1
    vmovss  [rbp+10h+var_58], xmm0
    vmovss  [rbp+10h+var_50], xmm2
    vmovss  xmm2, dword ptr [rsp+110h+var_A8]
    vmovss  [rbp+10h+var_4C], xmm1
    vmovss  xmm1, dword ptr [rsp+110h+var_A8+4]
    vmovss  [rbp+10h+var_48], xmm0
    vmovss  xmm0, dword ptr [rsp+110h+var_A8+8]
    vmovss  [rbp+10h+var_40], xmm2
    vmovss  [rbp+10h+var_3C], xmm1
    vmovss  [rbp+10h+var_38], xmm0
    vmovss  [rbp+10h+var_30], xmm2
    vmovss  [rbp+10h+var_2C], xmm1
    vmovss  [rbp+10h+var_28], xmm0
    vmovss  [rbp+10h+data], xmm5
    vmovss  [rbp+10h+var_8C], xmm4
    vmovss  [rbp+10h+var_88], xmm3
    vmovss  [rbp+10h+var_20], xmm5
    vmovss  [rbp+10h+var_1C], xmm4
    vmovss  [rbp+10h+var_18], xmm3
  }
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

void __fastcall LUI_Interface_DrawText(const LocalClientNum_t localClientNum, LUIElement *root, LUIElement *element, double x, float y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float elementHeight, float boxWidth, char tracking, char leading, char alignment, FontDecodeStyle *fontDecodeStyle, FontGlowStyle *fontGlowStyle, AutoScrollStyle *autoScrollStyle, lua_State *luaVM)
{
  signed __int64 v20; 
  void *v31; 
  LUIElement *v32; 
  lua_State *v34; 
  bool v38; 
  char v43; 
  char v44; 
  char v45; 
  char v46; 
  bool v47; 
  GfxFont *v55; 
  int MinHeightForDistanceField; 
  int v57; 
  __int64 v58; 
  int v59; 
  PreCachedFont *v60; 
  int size; 
  bool v62; 
  char v63; 
  char *v64; 
  char v65; 
  char v66; 
  const char *ID; 
  LocalClientNum_t ClientFromController; 
  int ExclusiveController; 
  BOOL v87; 
  unsigned __int64 v90; 
  int v91; 
  char *v92; 
  int v94; 
  __int64 v95; 
  char *v96; 
  __int64 v101; 
  LUIElement *i; 
  int v108; 
  char v109; 
  int v117; 
  LUIElement *v121; 
  lua_State *v123; 
  bool v126; 
  bool v127; 
  char v128; 
  char v129; 
  LUIHorizontalAlignment v130; 
  char v131; 
  char v138; 
  vec4_t *p_color; 
  float fmt; 
  float *outFontLayoutScale; 
  float *outRotation; 
  float outElementHeightOnScreen; 
  float outElementHeightOnScreena; 
  bool v168; 
  unsigned __int8 v169; 
  LUIHorizontalAlignment HorizontalAlignment; 
  LUIVerticalAlignment VerticalAlignment; 
  bool v172; 
  int outLineCount; 
  char *input; 
  char colorEscape[2]; 
  int fontSize; 
  float v178; 
  int outFontRenderSize; 
  GfxFont *fonta; 
  float autoScrollTransitionInStep; 
  int style; 
  LocalClientNum_t localClientNuma; 
  float outFontRenderScale; 
  AutoScrollStyle *v185; 
  float autoScrollTransitionOutStep; 
  float rotation; 
  LUIElement *elementa; 
  float v189; 
  lua_State *v190; 
  FontGlowStyle *v191; 
  FontDecodeStyle *v192; 
  int v193; 
  vec4_t color; 
  vec4_t v198; 
  AutoScrollStyle v199; 
  vec4_t verts[4]; 
  vec4_t quadVerts[4]; 
  TextLine outLines; 
  char v203[512]; 
  char v204[1024]; 
  char output[4096]; 
  char dstString[4096]; 

  v31 = alloca(v20);
  __asm { vmovaps [rsp+3630h+var_A0], xmm12 }
  v32 = element;
  _R13 = autoScrollStyle;
  v34 = luaVM;
  fonta = font;
  v192 = fontDecodeStyle;
  elementa = element;
  localClientNuma = localClientNum;
  v191 = fontGlowStyle;
  __asm { vmovaps xmm12, xmm3 }
  input = (char *)text;
  v185 = autoScrollStyle;
  v190 = luaVM;
  memset_0(output, 0, sizeof(output));
  if ( text )
  {
    R_TextValidatePrintable(text);
    if ( !fonta )
    {
      Com_PrintError(13, "LUI: Missing text element font! Text is %s\n", input);
      goto LABEL_143;
    }
    __asm
    {
      vmovaps [rsp+3630h+var_40], xmm6
      vmovss  xmm6, [rbp+3530h+arg_58]
      vcvtss2sd xmm0, xmm6, xmm6
      vcomisd xmm0, cs:__real@3eb0c6f7a0b5ed8d
    }
    if ( !LUI_ElementHasWeakTableEntry(v32, v34) )
    {
LABEL_142:
      __asm { vmovaps xmm6, [rsp+3630h+var_40] }
      goto LABEL_143;
    }
    v38 = !v32->quadCached;
    __asm
    {
      vmovaps [rsp+3630h+var_C0], xmm14
      vmovaps [rsp+3630h+var_D0], xmm15
    }
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7340, ASSERT_TYPE_ASSERT, "(!element->quadCached)", (const char *)&queryFormat, "!element->quadCached") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, [rbp+3530h+arg_28]
      vmovss  xmm1, [rbp+3530h+arg_30]
      vmovss  [rbp+3530h+var_3538], xmm0
      vmovss  xmm0, [rbp+3530h+arg_38]
      vmovss  [rbp+3530h+var_3534], xmm1
      vmovss  xmm1, [rbp+3530h+arg_40]
      vmovss  [rbp+3530h+var_3530], xmm0
      vmovss  [rbp+3530h+var_352C], xmm1
    }
    v172 = !LUI_Is3DTransformEnabled();
    if ( _R13 && (v43 = _R13->options.direction[0]) != 0 )
    {
      v44 = 1;
      if ( v43 == 1 )
      {
        v45 = 1;
        v169 = 1;
LABEL_15:
        if ( _R13->options.direction[0] == 2 )
        {
          v46 = 1;
LABEL_18:
          v47 = v45 && _R13->options.useEllipses;
          HorizontalAlignment = LUI_GetHorizontalAlignment(alignment);
          __asm { vmovss  xmm14, [rbp+3530h+arg_20] }
          VerticalAlignment = LUI_GetVerticalAlignment(alignment);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vmovaps xmm3, xmm6; elementHeight
            vmovaps xmm2, xmm14; y
            vmovaps xmm1, xmm12; x
            vaddss  xmm15, xmm0, xmm6
          }
          if ( !LUI_CoD_DetermineFontSizeAndScale(v32, *(double *)&_XMM1, *(double *)&_XMM2, *(double *)&_XMM3, &outFontRenderSize, &outFontRenderScale, &fontSize, &v178, &v189, &rotation) )
          {
LABEL_141:
            __asm
            {
              vmovaps xmm14, [rsp+3630h+var_C0]
              vmovaps xmm15, [rsp+3630h+var_D0]
            }
            goto LABEL_142;
          }
          __asm
          {
            vmovaps [rsp+3630h+var_50], xmm7
            vmovaps [rsp+3630h+var_70], xmm9
            vmovaps [rsp+3630h+var_80], xmm10
            vmovaps [rsp+3630h+var_90], xmm11
            vmovaps [rsp+3630h+var_B0], xmm13
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_font_cache_warnings, "lui_font_cache_warnings") )
          {
            v55 = fonta;
            MinHeightForDistanceField = FontCache_GetMinHeightForDistanceField();
            v57 = 0;
            v58 = MinHeightForDistanceField;
            if ( s_numPreCachedFonts <= 0 )
            {
LABEL_34:
              input = j_va("^1FONT_NOT_CACHED(^7%s^1)^7", input);
            }
            else
            {
              v59 = outFontRenderSize;
              v60 = s_preCachedFonts;
              while ( 1 )
              {
                size = v60->size;
                v62 = v59 == size || size >= (int)v58 && outFontRenderSize >= v58;
                if ( v60->font == v55 && v62 )
                  break;
                v59 = outFontRenderSize;
                ++v57;
                ++v60;
                if ( v57 >= s_numPreCachedFonts )
                  goto LABEL_34;
              }
            }
            v32 = elementa;
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_loc_warnings, "loc_warnings") )
          {
            v63 = 1;
            v64 = input;
            if ( *input != 31 )
              goto LABEL_48;
            v65 = 0;
            do
            {
              if ( v65 || v64[1] )
              {
                if ( *v64 == 30 )
                  v65 = 1;
              }
              else
              {
                v66 = 0;
                if ( *v64 != 30 )
                  v66 = v63;
                v63 = v66;
              }
              ++v64;
            }
            while ( *v64 );
            if ( v63 )
            {
LABEL_48:
              UI_Text_InsertLocalizationWarnings(input, output, 0x1000ui64);
              input = output;
            }
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_lui_print_text_draws, "lui_print_text_draws") )
          {
            ID = LUIElement_GetID(v32, v34);
            Com_Printf(13, "DrawText: %s %d %s (from %s)\n", fonta->fontName, (unsigned int)outFontRenderSize, input, ID);
          }
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_lui_rendertime_binding_directive, "lui_rendertime_binding_directive") )
          {
            ClientFromController = localClientNuma;
            if ( LUI_LUIElement_IsControllerExclusive(v32, v34) )
            {
              ExclusiveController = LUI_LUIElement_GetExclusiveController(v32, v34);
              if ( ExclusiveController >= 0 )
                ClientFromController = CL_Mgr_GetClientFromController(ExclusiveController);
            }
            UI_ReplaceDirective(ClientFromController, input, dstString, 0x1000ui64, (v32->currentAnimationState.flags & 0x40) != 0);
            input = dstString;
          }
          style = 0;
          LUI_PutElementOnTopOfStack(v32, v34);
          j_lua_getfield(v34, -1, "m_textStyle");
          if ( j_lua_type(v34, -1) )
          {
            if ( !j_lua_isnumber(v34, -1) )
              j_luaL_error(v34, "m_textStyle is not an enumerated type!");
            style = lui_tointeger32(v34, -1);
          }
          j_lua_settop(v34, -3);
          __asm
          {
            vmovss  xmm0, [rbp+3530h+arg_60]
            vmulss  xmm1, xmm0, cs:__real@42c80000
            vmovss  xmm13, cs:__real@3f000000
          }
          _EBX = v169;
          __asm
          {
            vaddss  xmm2, xmm1, xmm13
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vroundss xmm4, xmm1, xmm2, 1
            vcvttss2si eax, xmm4
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm7, xmm0, cs:__real@3c23d70a
            vmovd   xmm0, ebx
          }
          _EAX = 0;
          __asm
          {
            vmovd   xmm1, eax
            vpcmpeqd xmm2, xmm0, xmm1
            vxorps  xmm11, xmm11, xmm11
            vblendvps xmm0, xmm11, xmm7, xmm2
            vmovss  [rbp+3530h+var_35A4], xmm0
          }
          v87 = Language_IsRightToLeft() != 0;
          v38 = (v32->usageFlags & 0x100) == 0;
          v168 = v87;
          if ( v38 )
          {
            v90 = -1i64;
            outLineCount = 1;
            do
              ++v90;
            while ( input[v90] );
            v91 = truncate_cast<int,unsigned __int64>(v90);
            v92 = input;
            outLines.textLeft = input;
            outLines.textRight = &input[v91];
            if ( HorizontalAlignment == LEFT && !v169 )
            {
              __asm
              {
                vmovss  xmm6, [rbp+3530h+var_35A4]
                vmovss  [rbp+3530h+outLines.pixelWidth], xmm6
              }
              goto LABEL_69;
            }
            R_TextWidth(input, v91, fonta, fontSize, tracking, 0);
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm6, xmm0, [rbp+3530h+var_3598]
              vmovss  [rbp+3530h+outLines.pixelWidth], xmm6
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, [rbp+3530h+var_3598]
              vmovss  xmm1, [rbp+3530h+var_35A4]; boxWidth
              vmovss  dword ptr [rsp+3630h+fmt], xmm0
            }
            R_Font_WordWrap(input, *(float *)&_XMM1, fonta, fontSize, fmt, tracking, 100, !v87, &outLines, &outLineCount);
            __asm { vmovss  xmm6, [rbp+3530h+outLines.pixelWidth] }
          }
          v92 = input;
LABEL_69:
          v94 = outLineCount;
          if ( outLineCount == 1 && v47 )
          {
            if ( lui_fakeExtendedText->current.enabled )
            {
              __asm { vcomiss xmm7, xmm6 }
              v95 = -1i64;
              do
                ++v95;
              while ( v92[v95] );
              memset_0(v204, 0, sizeof(v204));
              v96 = v204;
              __asm { vmovaps xmm6, xmm11 }
              rand();
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm7
                vcomiss xmm1, xmm11
              }
              while ( 1 )
              {
                memcpy_0(v96, input, (int)v95);
                v96 += (int)v95;
                v101 = -1i64;
                do
                  ++v101;
                while ( v204[v101] );
                R_TextWidth(v204, v101, fonta, fontSize, tracking, 0);
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm6, xmm0, [rbp+3530h+var_3598]
                }
                rand();
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, eax
                  vmulss  xmm1, xmm0, xmm7
                  vcomiss xmm1, xmm6
                }
              }
            }
            __asm { vcomiss xmm7, xmm11 }
            if ( lui_fakeExtendedText->current.enabled )
              __asm { vcomiss xmm7, xmm6 }
            if ( (v32->currentAnimationState.flags & 0x24) == 0 )
            {
              for ( i = v32->parent; i; i = i->parent )
              {
                if ( (i->currentAnimationState.flags & 4) != 0 )
                  break;
              }
            }
          }
          v108 = 0;
          v109 = _R13 == NULL;
          if ( v46 && outLineCount <= _R13->options.maxVisibleLines )
            v109 = 1;
          __asm
          {
            vmovss  xmm9, cs:__real@3f800000
            vmovss  [rbp+3530h+autoScrollTransitionOutStep], xmm9
            vmovss  [rbp+3530h+autoScrollTransitionInStep], xmm11
          }
          if ( v44 && !v109 )
          {
            __asm { vmovaps xmm2, xmm6; textWidth }
            LUI_AutoScroll_GetLoopTransitionStep(_R13, outLineCount, *(float *)&_XMM2, &autoScrollTransitionInStep, &autoScrollTransitionOutStep);
            v94 = outLineCount;
          }
          __asm { vmovaps xmm0, xmm15; lineHeight }
          *(float *)&_XMM0 = LUI_CoD_DrawText_ComputeYOffset(*(double *)&_XMM0, leading, v94, _R13, VerticalAlignment);
          __asm
          {
            vmovss  xmm2, [rbp+3530h+var_3534]
            vmovss  xmm4, [rbp+3530h+var_352C]
            vmovss  xmm3, [rbp+3530h+var_3538]
            vmovss  xmm1, [rbp+3530h+var_3530]
          }
          v117 = outLineCount;
          *(_WORD *)colorEscape = 0;
          __asm
          {
            vmovss  dword ptr [rbp+3530h+var_3518+4], xmm2
            vmovss  dword ptr [rbp+3530h+color+4], xmm2
            vmulss  xmm2, xmm4, [rbp+3530h+autoScrollTransitionOutStep]
            vmovaps xmm10, xmm0
            vmulss  xmm0, xmm4, [rbp+3530h+autoScrollTransitionInStep]
            vmovss  dword ptr [rbp+3530h+color+0Ch], xmm2
            vmovss  dword ptr [rbp+3530h+var_3518], xmm3
            vmovss  dword ptr [rbp+3530h+var_3518+8], xmm1
            vmovss  dword ptr [rbp+3530h+color], xmm3
            vmovss  dword ptr [rbp+3530h+color+8], xmm1
            vmovss  dword ptr [rbp+3530h+var_3518+0Ch], xmm0
          }
          if ( (unsigned __int64)outLineCount > 0x64 )
          {
            LODWORD(outRotation) = 100;
            LODWORD(outFontLayoutScale) = outLineCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7646, ASSERT_TYPE_ASSERT, "( numLines ) <= ( ( sizeof( *array_counter( textLines ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "numLines", "ARRAY_COUNT( textLines )", outFontLayoutScale, outRotation) )
              __debugbreak();
            v117 = outLineCount;
          }
          if ( v117 > 0 )
          {
            v121 = elementa;
            _RDI = &outLines;
            v123 = v190;
            __asm
            {
              vmovaps [rsp+3630h+var_60], xmm8
              vmovss  xmm8, [rbp+3530h+var_3560]
            }
            do
            {
              if ( (!_RDI->textLeft || !_RDI->textRight) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7650, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
                __debugbreak();
              if ( _RDI->textLeft > _RDI->textRight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 7651, ASSERT_TYPE_ASSERT, "(textLine->textLeft <= textLine->textRight)", (const char *)&queryFormat, "textLine->textLeft <= textLine->textRight") )
                __debugbreak();
              __asm { vmovss  xmm6, dword ptr [rdi+10h] }
              if ( _R13 && (v126 = _R13->options.direction[0] == 0, v127 = _R13->options.direction[0] <= 1u, _R13->options.direction[0] == 1) )
              {
                v128 = 1;
              }
              else
              {
                v128 = 0;
                v126 = 0;
                v127 = 1;
              }
              __asm { vcomiss xmm7, xmm11 }
              if ( v127 )
                goto LABEL_110;
              __asm { vcomiss xmm7, xmm6 }
              if ( !v126 )
LABEL_110:
                v129 = 1;
              else
                v129 = 0;
              v130 = HorizontalAlignment;
              if ( v128 && !v129 )
                v130 = LEFT;
              if ( Language_IsRightToLeft() && LUI_UsesRightToLeftAlignmentFlip(v121) )
              {
                v131 = v130;
                if ( v130 == LEFT )
                  v131 = 2;
                v130 = v131;
              }
              R_PrepareTextLine(_RDI->textLeft, _RDI->textRight - _RDI->textLeft + 1, v203, 512, 1, colorEscape);
              R_TextValidatePrintable(v203);
              __asm
              {
                vmovaps xmm2, xmm7; boxWidth
                vmovaps xmm1, xmm6; textWidth
                vmovaps xmm0, xmm12; x
              }
              *(double *)&_XMM0 = LUI_CoD_DrawText_ComputeLineXPosition(*(double *)&_XMM0, *(double *)&_XMM1, *(double *)&_XMM2, v130, _R13);
              __asm
              {
                vaddss  xmm3, xmm14, xmm10; bottom
                vsubss  xmm1, xmm3, [rbp+3530h+arg_58]; top
                vaddss  xmm2, xmm0, xmm9; right
              }
              LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
              if ( v172 )
                __asm { vucomiss xmm8, xmm11 }
              if ( v169 )
              {
                __asm
                {
                  vcomiss xmm7, xmm11
                  vcomiss xmm7, xmm6
                }
                v138 = 1;
              }
              else
              {
                v138 = 0;
              }
              v109 |= v138;
              p_color = (vec4_t *)&v193;
              if ( !v109 )
                p_color = &color;
              __asm { vmovss  dword ptr [rsp+3630h+outElementHeightOnScreen], xmm8 }
              LUI_Render_DrawText(localClientNuma, v123, v121, (const vec4_t (*)[4])quadVerts, p_color, fonta, v203, style, tracking, outElementHeightOnScreen, outFontRenderSize, v192, v191);
              __asm
              {
                vmovss  xmm0, [rbp+3530h+autoScrollTransitionInStep]
                vcomiss xmm0, xmm11
              }
              if ( !v126 && !v38 && !v109 )
              {
                __asm
                {
                  vmovsd  xmm1, qword ptr [r13+10h]
                  vmovups xmm0, xmmword ptr [r13+0]
                  vmovsd  qword ptr [rbp+3530h+var_3508.options.maxVisibleLines], xmm1
                }
                *(_DWORD *)&v199.options.maxVisibleLines = _RT0;
                __asm { vmovups xmmword ptr [rbp+3530h+var_3508.options.startupDelay], xmm0 }
                v199.elapsedTime = 0;
                __asm { vcomiss xmm7, xmm11 }
                if ( v199.options.direction[0] > 1u )
                  __asm { vcomiss xmm7, xmm6 }
                if ( v130 == RIGHT )
                {
                  __asm
                  {
                    vsubss  xmm0, xmm7, xmm6
                    vmulss  xmm1, xmm0, xmm13
                    vaddss  xmm6, xmm1, xmm12
                  }
                }
                else if ( v130 == 2 )
                {
                  __asm
                  {
                    vaddss  xmm0, xmm12, xmm7
                    vsubss  xmm6, xmm0, xmm6
                  }
                }
                else
                {
                  __asm { vmovaps xmm6, xmm12 }
                }
                __asm { vmovaps xmm0, xmm15; lineHeight }
                *(float *)&_XMM0 = LUI_CoD_DrawText_ComputeYOffset(*(double *)&_XMM0, leading, outLineCount, &v199, VerticalAlignment);
                __asm
                {
                  vaddss  xmm3, xmm0, xmm14; bottom
                  vsubss  xmm1, xmm3, [rbp+3530h+arg_58]; top
                  vaddss  xmm2, xmm6, xmm9; right
                  vmovaps xmm0, xmm6; left
                }
                LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
                if ( v172 )
                  LUI_CoD_SnapQuadVerts((vec4_t (*)[4])verts);
                __asm { vmovss  dword ptr [rsp+3630h+outElementHeightOnScreen], xmm8 }
                LUI_Render_DrawText(localClientNuma, v123, v121, (const vec4_t (*)[4])verts, &v198, fonta, v203, style, tracking, outElementHeightOnScreena, outFontRenderSize, v192, v191);
              }
              ++v108;
              ++_RDI;
              __asm { vaddss  xmm14, xmm14, xmm15 }
            }
            while ( v108 < outLineCount );
            __asm { vmovaps xmm8, [rsp+3630h+var_60] }
          }
          __asm
          {
            vmovaps xmm7, [rsp+3630h+var_50]
            vmovaps xmm13, [rsp+3630h+var_B0]
            vmovaps xmm11, [rsp+3630h+var_90]
            vmovaps xmm10, [rsp+3630h+var_80]
            vmovaps xmm9, [rsp+3630h+var_70]
          }
          goto LABEL_141;
        }
LABEL_17:
        v46 = 0;
        goto LABEL_18;
      }
    }
    else
    {
      v44 = 0;
    }
    v45 = 0;
    v169 = 0;
    if ( !v44 )
      goto LABEL_17;
    goto LABEL_15;
  }
  Com_PrintError(13, "LUI: NULL text on text element\n");
LABEL_143:
  __asm { vmovaps xmm12, [rsp+3630h+var_A0] }
}

/*
==============
LUI_Interface_DrawTextSelection
==============
*/

void __fastcall LUI_Interface_DrawTextSelection(const LocalClientNum_t localClientNum, LUIElement *element, double x, double y, float width, float height, vec4_t *color, lua_State *luaVM)
{
  float quadVerts; 
  float v22; 
  float v23; 
  float v24; 
  vec4_t v25; 
  vec4_t verts[4]; 

  _RAX = color;
  __asm
  {
    vmovaps xmm4, xmm3
    vaddss  xmm1, xmm4, cs:__real@40400000; top
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rsp+0B8h+var_68], xmm0
    vsubss  xmm0, xmm3, [rsp+0B8h+arg_28]
    vaddss  xmm3, xmm0, cs:__real@40400000; bottom
    vmovaps xmm5, xmm2
    vaddss  xmm2, xmm2, [rsp+0B8h+arg_20]; right
    vmovaps xmm0, xmm5; left
  }
  LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])verts);
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+0B8h+var_80], xmm0
    vmovss  [rsp+0B8h+var_88], xmm0
    vmovss  [rsp+0B8h+var_90], xmm1
    vmovss  dword ptr [rsp+0B8h+quadVerts], xmm1
  }
  LUI_Render_DrawImage(localClientNum, element, luaVM, (const vec4_t (*)[4])verts, quadVerts, v22, v23, v24, &v25, LUI_DefaultMaterial);
}

/*
==============
LUI_Interface_DrawTextWithCursor
==============
*/

void __fastcall LUI_Interface_DrawTextWithCursor(const LocalClientNum_t localClientNum, LUIElement *element, double x, double y, float red, float green, float blue, float alpha, const char *text, GfxFont *font, float fontHeight, float wrapWidth, int cursorPos, char cursor, lua_State *luaVM)
{
  size_t v22; 
  char *v23; 
  vec2_t vec; 
  vec4_t quadVerts[4]; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( LUI_ElementHasWeakTableEntry(element, luaVM) )
  {
    v22 = -1i64;
    do
      ++v22;
    while ( text[v22] );
    v23 = (char *)LUI_QuadCache_AddDrawListCommandVarSizeInternal(localClientNum, (void (__fastcall *)(const void *))LUI_Interface_DrawTextWithCursorImmediate, v22 + 46, 8ui64);
    _RDI = v23;
    if ( v23 )
    {
      memcpy_0(v23 + 45, text, v22);
      __asm { vsubss  xmm1, xmm6, [rsp+0C8h+fontHeight]; top }
      _RDI[v22 + 45] = 0;
      *(_QWORD *)_RDI = font;
      *((_DWORD *)_RDI + 10) = cursorPos;
      __asm
      {
        vmovaps xmm3, xmm6; bottom
        vmovaps xmm2, xmm7; right
        vmovaps xmm0, xmm7; left
      }
      _RDI[44] = cursor;
      LUI_CoD_GenerateQuadVerts(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, (vec4_t (*)[4])quadVerts);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+var_88+34h]
        vsubss  xmm4, xmm0, dword ptr [rsp+0C8h+var_88+4]
        vmovss  xmm1, dword ptr [rsp+0C8h+var_88+38h]
        vsubss  xmm5, xmm1, dword ptr [rsp+0C8h+var_88+8]
        vmovss  xmm0, dword ptr [rsp+0C8h+var_88+30h]
        vsubss  xmm1, xmm0, dword ptr [rsp+0C8h+var_88]
        vmulss  xmm2, xmm1, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm0, xmm4, xmm4
        vmovss  dword ptr [rsp+0C8h+vec+4], xmm4
        vaddss  xmm4, xmm3, xmm0
        vmovss  dword ptr [rsp+0C8h+vec], xmm2
        vmulss  xmm1, xmm5, xmm5
        vaddss  xmm2, xmm4, xmm1
        vsqrtss xmm0, xmm2, xmm2
        vaddss  xmm3, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vroundss xmm4, xmm0, xmm3, 1
        vcvttss2si eax, xmm4
        vmovss  [rsp+0C8h+var_90], xmm5
      }
      *((_DWORD *)_RDI + 2) = _EAX;
      LUI_PutElementOnTopOfStack(element, luaVM);
      j_lua_getfield(luaVM, -1, "m_textStyle");
      if ( j_lua_type(luaVM, -1) )
      {
        if ( !j_lua_isnumber(luaVM, -1) )
          j_luaL_error(luaVM, "m_textStyle is not an enumerated type!");
        lui_tointeger32(luaVM, -1);
      }
      j_lua_settop(luaVM, -3);
      __asm
      {
        vmovss  xmm1, [rsp+0C8h+green]
        vmovss  xmm0, [rsp+0C8h+red]
        vmovss  dword ptr [rdi+18h], xmm0
        vmovss  xmm0, [rsp+0C8h+blue]
        vmovss  dword ptr [rdi+1Ch], xmm1
        vmovss  xmm1, [rsp+0C8h+alpha]
        vmovss  dword ptr [rdi+20h], xmm0
        vmovss  dword ptr [rdi+24h], xmm1
      }
      *(double *)&_XMM0 = vectoyaw(&vec);
      __asm
      {
        vsubss  xmm1, xmm0, cs:__real@42b40000
        vmovss  dword ptr [rdi+14h], xmm1
      }
      LUI_CoD_SnapQuadVerts((vec4_t (*)[4])quadVerts);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0C8h+var_88+30h]
        vmovss  dword ptr [rdi+0Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+0C8h+var_88+34h]
        vmovss  dword ptr [rdi+10h], xmm1
      }
    }
  }
  _R11 = &v59;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
LUI_Interface_DrawTextWithCursorImmediate
==============
*/
void LUI_Interface_DrawTextWithCursorImmediate(const LUITextWithCursorRenderData *data)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 

  __asm
  {
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm1, xmm2, cs:?cls@@3UClStatic@@A.vidConfig.aspectRatioDisplayPixel; ClStatic cls
  }
  _R8 = data;
  __asm
  {
    vmovss  xmm0, dword ptr [r8+14h]
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  xmm0, dword ptr [r8+10h]
    vmovss  [rsp+0A8h+var_68], xmm2
    vmovss  [rsp+0A8h+var_70], xmm1
    vmovss  xmm1, dword ptr [r8+0Ch]
    vmovss  [rsp+0A8h+var_78], xmm0
    vmovss  [rsp+0A8h+var_80], xmm1
  }
  R_AddCmdDrawTextWithCursor(data->text, 0x7FFFFFFF, _R8->font, NULL, _R8->fontSize, v7, v8, v9, v10, 0, v11, &data->color, NULL, 0, _R8->cursorPos, _R8->cursor, 0, 0, NULL);
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

float __fastcall LUI_Interface_GetMaterialAspectRatio(const GfxImage *material, double _XMM1_8)
{
  if ( !material && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6269, ASSERT_TYPE_ASSERT, "(material)", (const char *)&queryFormat, "material") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vcvtsi2ss xmm0, xmm0, eax
    vdivss  xmm0, xmm1, xmm0
  }
  return *(float *)&_XMM0;
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

__int64 __fastcall LUI_Interface_GetNumTextLines(LocalClientNum_t localClientNum, const char *text, GfxFont *font, double fontHeight, float wrapWidth)
{
  const dvar_t *v11; 
  char *v20; 
  unsigned int v21; 
  int v22; 
  unsigned int CharFromString; 
  char v29; 
  char *v30; 
  char *v31; 
  char v32; 
  char v33; 
  char v34; 
  bool v35; 
  bool IsBreakableSpace; 
  char v39; 
  char *v40; 
  char v41; 
  char *v42; 
  __int64 result; 
  int v46; 
  char *v47; 
  char *texta; 
  GfxFont *fonta; 
  char dstString[1024]; 

  __asm { vmovaps [rsp+500h+var_50], xmm6 }
  v11 = DVARBOOL_lui_rendertime_binding_directive;
  fonta = font;
  __asm { vmovaps xmm6, xmm3 }
  if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    UI_ReplaceDirective(localClientNum, text, dstString, 0x400ui64, 0);
    text = dstString;
  }
  texta = (char *)text;
  if ( !text )
  {
    result = 0i64;
    goto LABEL_8;
  }
  __asm
  {
    vmovaps [rsp+500h+var_70], xmm8
    vmovss  xmm8, [rbp+400h+wrapWidth]
    vmovaps [rsp+500h+var_80], xmm9
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm8, xmm9
  }
  v20 = (char *)text;
  v21 = 0;
  v22 = 0;
  __asm
  {
    vcvttss2si r8d, xmm6
    vmovaps [rsp+500h+var_60], xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, r8d
    vmovaps [rsp+500h+var_90], xmm10
  }
  v46 = _ER8;
  CharFromString = _ER8;
  __asm { vdivss  xmm10, xmm6, xmm0 }
  v47 = (char *)text;
  __asm { vmovaps xmm7, xmm8 }
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v29 = *text;
        v30 = (char *)text;
        if ( !*text )
        {
LABEL_18:
          v32 = 1;
          break;
        }
        while ( v29 >= 30 )
        {
          if ( v29 <= 31 )
          {
            ++text;
          }
          else
          {
            if ( v29 != 94 )
              break;
            v31 = (char *)(text + 1);
            texta = v31;
            if ( v31 == (char *)-1i64 || (unsigned __int8)(v31[1] - 39) > 0x17u )
              break;
            text = v31 + 1;
          }
          texta = (char *)text;
          v29 = *text;
          if ( !*text )
            goto LABEL_18;
        }
        CharFromString = SEH_ReadCharFromString((const char **)&texta);
        v32 = 0;
        IsBreakableSpace = R_IsBreakableSpace(CharFromString);
        text = texta;
        v20 = v47;
        _ER8 = v46;
        if ( IsBreakableSpace )
          break;
        ++v22;
      }
      v33 = 0;
      v34 = 0;
      v35 = v22 == 0;
      if ( v22 <= 0 )
      {
        __asm { vmovaps xmm6, xmm9 }
      }
      else
      {
        R_TextWidth(v20, v22, fonta, _ER8);
        text = texta;
        v20 = v47;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmulss  xmm6, xmm0, xmm10
        }
      }
      __asm { vcomiss xmm7, xmm8 }
      if ( v34 )
      {
        __asm { vcomiss xmm6, xmm7 }
        if ( !(v34 | v35) )
        {
          v39 = *v20;
          v33 = 1;
          __asm { vmovaps xmm7, xmm8 }
          if ( *v20 )
          {
            while ( v39 >= 30 )
            {
              if ( v39 <= 31 )
              {
                ++v20;
              }
              else
              {
                if ( v39 != 94 )
                  break;
                v40 = v20 + 1;
                v47 = v40;
                if ( v40 == (char *)-1i64 || (unsigned __int8)(v40[1] - 39) > 0x17u )
                  break;
                v20 = v40 + 1;
              }
              v47 = v20;
              v39 = *v20;
              if ( !*v20 )
                goto LABEL_37;
            }
            SEH_ReadCharFromString((const char **)&v47);
            v20 = v47;
            text = texta;
          }
LABEL_37:
          --v22;
          ++v21;
        }
      }
      __asm { vsubss  xmm7, xmm7, xmm6 }
      if ( v32 || CharFromString == 10 )
        break;
      _ER8 = v46;
      v20 = v30;
      v47 = v30;
      v22 = 1;
    }
    if ( v33 )
    {
      text = v30;
      texta = v30;
    }
    else
    {
      v20 = v30;
      ++v21;
      v22 = 0;
      v47 = v30;
      if ( *v30 )
      {
        while ( 1 )
        {
          v41 = *v20;
          if ( *v20 < 30 )
            break;
          if ( v41 <= 31 )
          {
            ++v20;
          }
          else
          {
            if ( v41 != 94 )
              break;
            if ( !*v20 )
              goto LABEL_55;
            v42 = v20 + 1;
            v47 = v42;
            if ( v42 == (char *)-1i64 || (unsigned __int8)(v42[1] - 39) > 0x17u )
              break;
            v20 = v42 + 1;
          }
          v47 = v20;
          if ( !*v20 )
            goto LABEL_55;
        }
        SEH_ReadCharFromString((const char **)&v47);
        v20 = v47;
        text = texta;
      }
    }
LABEL_55:
    _ER8 = v46;
    __asm { vmovaps xmm7, xmm8 }
  }
  while ( !v32 || v22 );
  __asm { vmovaps xmm10, [rsp+500h+var_90] }
  result = v21;
  __asm
  {
    vmovaps xmm7, [rsp+500h+var_60]
    vmovaps xmm8, [rsp+500h+var_70]
    vmovaps xmm9, [rsp+500h+var_80]
  }
LABEL_8:
  __asm { vmovaps xmm6, [rsp+500h+var_50] }
  return result;
}

/*
==============
LUI_Interface_GetTextDimensions
==============
*/

void __fastcall LUI_Interface_GetTextDimensions(LocalClientNum_t localClientNum, const char *text, GfxFont *font, double fontHeight, char tracking, char leading, float *left, float *top, float *right, float *bottom, float wrapWidth)
{
  const char *v18; 
  const dvar_t *v25; 
  __int64 v46; 
  int v50; 
  TextLine v59; 
  char dstString[1024]; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-68h], xmm7 }
  _R13 = top;
  v18 = text;
  _R14 = right;
  __asm { vmovaps xmm7, xmm3 }
  if ( text )
  {
    if ( !font )
    {
      Com_PrintError(13, "LUI: Missing font for text element Text = %s\n", text);
      goto LABEL_18;
    }
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r8+8]
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm0, xmm6
      vmovaps xmmword ptr [r11-78h], xmm8
    }
    v25 = DVARBOOL_lui_rendertime_binding_directive;
    if ( !DVARBOOL_lui_rendertime_binding_directive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_rendertime_binding_directive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    if ( v25->current.enabled )
    {
      UI_ReplaceDirective(localClientNum, v18, dstString, 0x400ui64, 0);
      v18 = dstString;
    }
    __asm
    {
      vaddss  xmm1, xmm7, cs:__real@3f000000
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm1
      vmulss  xmm0, xmm7, cs:__real@42c80000
      vaddss  xmm3, xmm0, cs:__real@3f000000
      vxorps  xmm4, xmm4, xmm4
      vroundss xmm2, xmm4, xmm1, 1
      vxorps  xmm1, xmm1, xmm1
      vcvttss2si ebp, xmm2
      vmovss  xmm2, xmm1, xmm3
      vroundss xmm0, xmm4, xmm2, 1
      vcvttss2si eax, xmm0
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, cs:__real@3c23d70a
      vmovd   xmm1, ebp
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm8, xmm2, xmm1
    }
    Language_IsRightToLeft();
    __asm
    {
      vmovss  xmm1, [rsp+0E48h+wrapWidth]; boxWidth
      vcomiss xmm1, cs:__real@bf800000
    }
    v46 = -1i64;
    do
      ++v46;
    while ( v18[v46] );
    v59.textRight = &v18[(int)v46];
    v59.textLeft = v18;
    R_TextWidth(v18, v46, font, _EBP, tracking, 0);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, xmm8
      vmovss  [rsp+0E48h+var_DE8.pixelWidth], xmm1
    }
    v50 = 0;
    __asm { vmovaps xmm8, [rsp+0E48h+var_78] }
    _RBX = &v59.pixelWidth;
    do
    {
      if ( (!*((_QWORD *)_RBX - 2) || !*((_QWORD *)_RBX - 1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 5965, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
        __debugbreak();
      __asm { vmovss  xmm0, dword ptr [rbx] }
      _RBX += 6;
      ++v50;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
    }
    while ( v50 < 1 );
    _R13 = top;
    *left = 0.0;
    __asm
    {
      vmovss  dword ptr [r13+0], xmm7
      vmovss  xmm0, [rsp+0E48h+var_DE8.pixelWidth]
      vmovss  dword ptr [r14], xmm0
      vmovaps xmm6, [rsp+0E48h+var_58]
    }
  }
  else
  {
    *left = 0.0;
    __asm { vmovss  dword ptr [r13+0], xmm7 }
    *right = 0.0;
  }
  *bottom = 0.0;
LABEL_18:
  __asm { vmovaps xmm7, [rsp+0E48h+var_68] }
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

__int64 __fastcall LUI_Interface_GetTextPages(LocalClientNum_t localClientNum, const char *text, GfxFont *font, double elementHeight, char tracking, float wrapWidth, float pageHeight, int maxPages, TextPage *pages, int maxCharsPerPage)
{
  signed __int64 v10; 
  void *v14; 
  int v16; 
  bool v19; 
  int v33; 
  int v35; 
  TextPage *v36; 
  int IsRightToLeft; 
  int v42; 
  int v43; 
  TextLine *p_outLines; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  char *v49; 
  __int64 result; 
  float fmt; 
  int v53; 
  int outLineCount; 
  int v55; 
  TextPage *v56; 
  TextLine outLines; 

  v14 = alloca(v10);
  __asm { vmovaps [rsp+18C8h+var_48], xmm6 }
  v16 = (int)pages;
  v56 = pages;
  __asm { vmovaps xmm6, xmm3 }
  v19 = maxPages == 0;
  if ( maxPages > 0 )
    memset_0(pages, 0, (unsigned __int64)(unsigned int)maxPages << 11);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rsi+8]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6207, ASSERT_TYPE_ASSERT, "(font->pixelHeight != 0.0f)", (const char *)&queryFormat, "font->pixelHeight != 0.0f") )
    __debugbreak();
  __asm
  {
    vaddss  xmm1, xmm6, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm2, xmm0, xmm1
    vmovss  xmm0, [rsp+18C8h+arg_30]
    vxorps  xmm1, xmm1, xmm1
    vroundss xmm3, xmm1, xmm2, 1
    vdivss  xmm1, xmm0, xmm6
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 1
    vcvttss2si eax, xmm2
  }
  v55 = _EAX;
  v33 = 0;
  __asm { vcvttss2si ebx, xmm3 }
  v35 = 0;
  v36 = pages;
  IsRightToLeft = Language_IsRightToLeft();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vdivss  xmm1, xmm6, xmm0
    vmovss  dword ptr [rsp+18C8h+fmt], xmm1
    vmovss  xmm1, [rsp+18C8h+arg_28]; boxWidth
  }
  R_Font_WordWrap(text, *(float *)&_XMM1, font, _EBX, fmt, tracking, 256, IsRightToLeft == 0, &outLines, &outLineCount);
  v42 = 0;
  if ( outLineCount <= 0 )
  {
LABEL_30:
    result = (unsigned int)(v33 + 1);
    goto LABEL_31;
  }
  v43 = 0;
  p_outLines = &outLines;
  v53 = 0;
  while ( 1 )
  {
    if ( !p_outLines->textLeft || !p_outLines->textRight )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6224, ASSERT_TYPE_ASSERT, "(textLine->textLeft != 0 && textLine->textRight != 0)", (const char *)&queryFormat, "textLine->textLeft != NULL && textLine->textRight != NULL") )
        __debugbreak();
      v43 = v53;
    }
    v45 = LODWORD(p_outLines->textRight) - LODWORD(p_outLines->textLeft);
    v46 = (_DWORD)v36 - v43 - v16;
    v47 = v45 + 1;
    if ( v45 + 1 <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6228, ASSERT_TYPE_ASSERT, "(numCharsInLine > 0)", (const char *)&queryFormat, "numCharsInLine > 0") )
        __debugbreak();
      v43 = v53;
    }
    v48 = v47 + v46 + 1;
    if ( (unsigned int)v48 >= 0x800 || maxCharsPerPage != -1 && v48 >= maxCharsPerPage )
      break;
    if ( v35 >= v55 )
      break;
LABEL_23:
    memcpy_0(v36, p_outLines->textLeft, v47);
    v49 = &v36->text[v45];
    if ( *v49 != 10 )
      *++v49 = 10;
    v36 = (TextPage *)(v49 + 1);
    ++v35;
    ++v42;
    ++p_outLines;
    if ( v42 >= outLineCount )
      goto LABEL_30;
    v43 = v53;
    v16 = (int)v56;
  }
  v36->text[0] = 0;
  ++v33;
  v53 = v43 + 2048;
  if ( v33 < maxPages )
  {
    v35 = 0;
    v36 = &v56[(__int64)v33];
    goto LABEL_23;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod.cpp", 6243, ASSERT_TYPE_ASSERT, "(numPages < maxPages)", (const char *)&queryFormat, "numPages < maxPages") )
    __debugbreak();
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144466C30, 5653i64);
  result = (unsigned int)maxPages;
LABEL_31:
  __asm { vmovaps xmm6, [rsp+18C8h+var_48] }
  return result;
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

