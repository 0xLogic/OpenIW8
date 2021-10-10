/*
==============
LUI_EnterCriticalSection
==============
*/

void __fastcall LUI_EnterCriticalSection(const char *functionNameIn)
{
  ?LUI_EnterCriticalSection@@YAXPEBD@Z(functionNameIn);
}

/*
==============
LUI_LUIElement_SetRight
==============
*/

void __fastcall LUI_LUIElement_SetRight(LUIElement *element, float right)
{
  ?LUI_LUIElement_SetRight@@YAXPEAULUIElement@@M@Z(element, right);
}

/*
==============
LUI_CalculateGlobalPosition
==============
*/

void __fastcall LUI_CalculateGlobalPosition(LUIElementAxisPosition *parentPosition, LUIElementAxisPosition *position)
{
  ?LUI_CalculateGlobalPosition@@YAXPEAULUIElementAxisPosition@@0@Z(parentPosition, position);
}

/*
==============
LUI_ToastNotificationAnnouncement
==============
*/

void __fastcall LUI_ToastNotificationAnnouncement(lua_State *luaVM, char *pMsg, unsigned int uiMessageSize)
{
  ?LUI_ToastNotificationAnnouncement@@YAXPEAUlua_State@@PEADI@Z(luaVM, pMsg, uiMessageSize);
}

/*
==============
LUI_PushViaWeakReference
==============
*/

void __fastcall LUI_PushViaWeakReference(void *key, lua_State *luaVM)
{
  ?LUI_PushViaWeakReference@@YAXPEAXPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_BeginCachedEvent
==============
*/

bool __fastcall LUI_BeginCachedEvent(LocalClientNum_t localClient, LUIEventCache cachedEvent, lua_State *luaVM)
{
  return ?LUI_BeginCachedEvent@@YA_NW4LocalClientNum_t@@W4LUIEventCache@@PEAUlua_State@@@Z(localClient, cachedEvent, luaVM);
}

/*
==============
LUIElement_SetDimensions
==============
*/

void __fastcall LUIElement_SetDimensions(LUIElement *element, float unitScale)
{
  ?LUIElement_SetDimensions@@YAXPEAULUIElement@@M@Z(element, unitScale);
}

/*
==============
LUI_RegisterDvars
==============
*/

void LUI_RegisterDvars(void)
{
  ?LUI_RegisterDvars@@YAXXZ();
}

/*
==============
LUI_Matrix_Pop
==============
*/

void LUI_Matrix_Pop(void)
{
  ?LUI_Matrix_Pop@@YAXXZ();
}

/*
==============
LUI_EmergencyFullGC
==============
*/

void LUI_EmergencyFullGC(lua_State *luaVM, const char *const fmt, ...)
{
  ?LUI_EmergencyFullGC@@YAXPEAUlua_State@@QEBDZZ(luaVM, fmt);
}

/*
==============
LUI_BeginTable
==============
*/

void __fastcall LUI_BeginTable(const char *key, int narr, int nrec, lua_State *luaVM)
{
  ?LUI_BeginTable@@YAXPEBDHHPEAUlua_State@@@Z(key, narr, nrec, luaVM);
}

/*
==============
LUI_UnitsToProjectedUnits
==============
*/

void __fastcall LUI_UnitsToProjectedUnits(const float LUILeft, const float LUITop, const float LUIRight, const float LUIBottom, float unitScale, float *left, float *top, float *right, float *bottom)
{
  ?LUI_UnitsToProjectedUnits@@YAXMMMMMAEAM000@Z(LUILeft, LUITop, LUIRight, LUIBottom, unitScale, left, top, right, bottom);
}

/*
==============
LUI_PlaySound
==============
*/

void __fastcall LUI_PlaySound(const LocalClientNum_t *localClientNum, const char *soundAlias)
{
  ?LUI_PlaySound@@YAXAEBW4LocalClientNum_t@@PEBD@Z(localClientNum, soundAlias);
}

/*
==============
LUI_SetTableInt
==============
*/

void __fastcall LUI_SetTableInt(__int64 key, __int64 value, lua_State *luaVM)
{
  ?LUI_SetTableInt@@YAX_J0PEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_EndEventWithRoot
==============
*/

void __fastcall LUI_EndEventWithRoot(lua_State *luaVM)
{
  ?LUI_EndEventWithRoot@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_PushScaleMatrix
==============
*/

void __fastcall LUI_PushScaleMatrix(float scaleX, float scaleY, float centerX, float centerY, lua_State *luaVM)
{
  ?LUI_PushScaleMatrix@@YAXMMMMPEAUlua_State@@@Z(scaleX, scaleY, centerX, centerY, luaVM);
}

/*
==============
LUI_UpdateGameMode
==============
*/

void __fastcall LUI_UpdateGameMode(GameModeType currentGameMode, GameModeType previousGameMode)
{
  ?LUI_UpdateGameMode@@YAXW4GameModeType@@0@Z(currentGameMode, previousGameMode);
}

/*
==============
LUI_LUIElement_SetZRotation
==============
*/

void __fastcall LUI_LUIElement_SetZRotation(LUIElement *element, float rotation)
{
  ?LUI_LUIElement_SetZRotation@@YAXPEAULUIElement@@M@Z(element, rotation);
}

/*
==============
LUI_ToElement
==============
*/

LUIElement *__fastcall LUI_ToElement(lua_State *luaVM, int index)
{
  return ?LUI_ToElement@@YAPEAULUIElement@@PEAUlua_State@@H@Z(luaVM, index);
}

/*
==============
LUI_SetTableNumber
==============
*/

void __fastcall LUI_SetTableNumber(const char *key, long double value, lua_State *luaVM)
{
  ?LUI_SetTableNumber@@YAXPEBDNPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_BeginTable
==============
*/

void __fastcall LUI_BeginTable(__int64 key, lua_State *luaVM)
{
  ?LUI_BeginTable@@YAX_JPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_LUIElement_SetAlpha
==============
*/

void __fastcall LUI_LUIElement_SetAlpha(LUIElement *element, float alpha)
{
  ?LUI_LUIElement_SetAlpha@@YAXPEAULUIElement@@M@Z(element, alpha);
}

/*
==============
LUI_PushScaleMatrix
==============
*/

void __fastcall LUI_PushScaleMatrix(float scale, float centerX, float centerY, lua_State *luaVM)
{
  ?LUI_PushScaleMatrix@@YAXMMMPEAUlua_State@@@Z(scale, centerX, centerY, luaVM);
}

/*
==============
LUI_IsInitialized
==============
*/

bool __fastcall LUI_IsInitialized()
{
  return ?LUI_IsInitialized@@YA_NXZ();
}

/*
==============
LUI_GetRootElement
==============
*/

LUIElement *__fastcall LUI_GetRootElement(const char *rootName, lua_State *luaVM)
{
  return ?LUI_GetRootElement@@YAPEAULUIElement@@PEBDPEAUlua_State@@@Z(rootName, luaVM);
}

/*
==============
LUI_TryEnterCriticalSection
==============
*/

bool __fastcall LUI_TryEnterCriticalSection(const char *functionNameIn)
{
  return ?LUI_TryEnterCriticalSection@@YA_NPEBD@Z(functionNameIn);
}

/*
==============
LUI_EndEventWithElement
==============
*/

void __fastcall LUI_EndEventWithElement(lua_State *luaVM)
{
  ?LUI_EndEventWithElement@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_RegisterFunction
==============
*/

void __fastcall LUI_RegisterFunction(const char *name, int (__fastcall *func)(lua_State *))
{
  ?LUI_RegisterFunction@@YAXPEBDP6AHPEAUlua_State@@@Z@Z(name, func);
}

/*
==============
LUI_LeaveMenu
==============
*/

void __fastcall LUI_LeaveMenu(int controllerIndex, lua_State *luaVM)
{
  ?LUI_LeaveMenu@@YAXHPEAUlua_State@@@Z(controllerIndex, luaVM);
}

/*
==============
LUI_LUIElement_SetScale
==============
*/

void __fastcall LUI_LUIElement_SetScale(LUIElement *element, float scale)
{
  ?LUI_LUIElement_SetScale@@YAXPEAULUIElement@@M@Z(element, scale);
}

/*
==============
LUI_BeginTable
==============
*/

void __fastcall LUI_BeginTable(__int64 key, int narr, int nrec, lua_State *luaVM)
{
  ?LUI_BeginTable@@YAX_JHHPEAUlua_State@@@Z(key, narr, nrec, luaVM);
}

/*
==============
LUI_SetTableHandle
==============
*/

void __fastcall LUI_SetTableHandle(__int64 key, unsigned int handle, lua_State *luaVM)
{
  ?LUI_SetTableHandle@@YAX_JIPEAUlua_State@@@Z(key, handle, luaVM);
}

/*
==============
LUI_Ref_Monitor_RemoveRef
==============
*/

void __fastcall LUI_Ref_Monitor_RemoveRef(lua_State *luaVM, const int index, const int ref)
{
  ?LUI_Ref_Monitor_RemoveRef@@YAXPEAUlua_State@@HH@Z(luaVM, index, ref);
}

/*
==============
LUI_SetTableBool
==============
*/

void __fastcall LUI_SetTableBool(__int64 key, bool value, lua_State *luaVM)
{
  ?LUI_SetTableBool@@YAX_J_NPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_BuildDrawList
==============
*/

void __fastcall LUI_BuildDrawList(const LocalClientNum_t localClientNum, LUIRootData *rootData, lua_State *luaVM)
{
  ?LUI_BuildDrawList@@YAXW4LocalClientNum_t@@PEAULUIRootData@@PEAUlua_State@@@Z(localClientNum, rootData, luaVM);
}

/*
==============
LUI_Resize
==============
*/

void __fastcall LUI_Resize(const char *rootName, const float left, const float top, const float right, const float bottom, const float pixelAspectRatio, lua_State *luaVM)
{
  ?LUI_Resize@@YAXPEBDMMMMMPEAUlua_State@@@Z(rootName, left, top, right, bottom, pixelAspectRatio, luaVM);
}

/*
==============
LUI_BeginTable
==============
*/

void __fastcall LUI_BeginTable(const char *key, lua_State *luaVM)
{
  ?LUI_BeginTable@@YAXPEBDPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_CreateRoot
==============
*/

void __fastcall LUI_CreateRoot(const int controllerIndex, LUIRootData *rootData, const float left, const float top, const float right, const float bottom, const float pixelAspectRatio, lua_State *luaVM)
{
  ?LUI_CreateRoot@@YAXHPEAULUIRootData@@MMMMMPEAUlua_State@@@Z(controllerIndex, rootData, left, top, right, bottom, pixelAspectRatio, luaVM);
}

/*
==============
LUI_SetDrawDebugBounds
==============
*/

void __fastcall LUI_SetDrawDebugBounds(bool drawBounds)
{
  ?LUI_SetDrawDebugBounds@@YAX_N@Z(drawBounds);
}

/*
==============
LUI_EndEvent
==============
*/

bool __fastcall LUI_EndEvent(lua_State *luaVM)
{
  return ?LUI_EndEvent@@YA_NPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_SharedTextRef_AddRef
==============
*/

void __fastcall LUI_SharedTextRef_AddRef(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  ?LUI_SharedTextRef_AddRef@@YAXPEAUlua_State@@W4LUISharedTextRefIndex@@@Z(luaVM, index);
}

/*
==============
LUI_DumpAllocatedElements
==============
*/

void __fastcall LUI_DumpAllocatedElements(bool showUnallocated)
{
  ?LUI_DumpAllocatedElements@@YAX_N@Z(showUnallocated);
}

/*
==============
LUI_Is3DTransformEnabled
==============
*/

bool __fastcall LUI_Is3DTransformEnabled()
{
  return ?LUI_Is3DTransformEnabled@@YA_NXZ();
}

/*
==============
LUI_SetCurrentParallaxMatrix
==============
*/

void __fastcall LUI_SetCurrentParallaxMatrix(tmat44_t<vec4_t> *parallaxMatrix)
{
  ?LUI_SetCurrentParallaxMatrix@@YAXPEAT?$tmat44_t@Tvec4_t@@@@@Z(parallaxMatrix);
}

/*
==============
LUIElementGfxState::LUIElementGfxState
==============
*/

void __fastcall LUIElementGfxState::LUIElementGfxState(LUIElementGfxState *this, LocalClientNum_t localClientNum, LUIElement *element, const bool *dynamicRendering)
{
  ??0LUIElementGfxState@@QEAA@W4LocalClientNum_t@@PEAULUIElement@@PEB_N@Z(this, localClientNum, element, dynamicRendering);
}

/*
==============
LUIElementGfxState::~LUIElementGfxState
==============
*/

void __fastcall LUIElementGfxState::~LUIElementGfxState(LUIElementGfxState *this)
{
  ??1LUIElementGfxState@@QEAA@XZ(this);
}

/*
==============
LUI_ElementHasWeakTableEntry
==============
*/

bool __fastcall LUI_ElementHasWeakTableEntry(LUIElement *element, lua_State *luaVM)
{
  return ?LUI_ElementHasWeakTableEntry@@YA_NPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_LUIElement_SetColor
==============
*/

void __fastcall LUI_LUIElement_SetColor(LUIElement *element, int color)
{
  ?LUI_LUIElement_SetColor@@YAXPEAULUIElement@@H@Z(element, color);
}

/*
==============
LUI_IsOwnerThreadMain
==============
*/

bool __fastcall LUI_IsOwnerThreadMain()
{
  return ?LUI_IsOwnerThreadMain@@YA_NXZ();
}

/*
==============
LUI_LoadLuaFile
==============
*/

bool __fastcall LUI_LoadLuaFile(const char *file, lua_State *luaVM)
{
  return ?LUI_LoadLuaFile@@YA_NPEBDPEAUlua_State@@@Z(file, luaVM);
}

/*
==============
LUIElement_GetID
==============
*/

const char *__fastcall LUIElement_GetID(LUIElement *element, lua_State *luaVM)
{
  return ?LUIElement_GetID@@YAPEBDPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_RestorePopup
==============
*/

void __fastcall LUI_RestorePopup(int controllerIndex, const char *menuName, int exclusiveController, lua_State *luaVM)
{
  ?LUI_RestorePopup@@YAXHPEBDHPEAUlua_State@@@Z(controllerIndex, menuName, exclusiveController, luaVM);
}

/*
==============
LUI_Obituary_MOD
==============
*/

void __fastcall LUI_Obituary_MOD(int controllerIndex, int attacker, int victim, int modIndex, lua_State *luaVM)
{
  ?LUI_Obituary_MOD@@YAXHHHHPEAUlua_State@@@Z(controllerIndex, attacker, victim, modIndex, luaVM);
}

/*
==============
LUI_PostGC
==============
*/

void LUI_PostGC(void)
{
  ?LUI_PostGC@@YAXXZ();
}

/*
==============
LUI_PutCachedEventOnTopOfStack
==============
*/

void __fastcall LUI_PutCachedEventOnTopOfStack(LUIEventCache cachedEvent, lua_State *luaVM)
{
  ?LUI_PutCachedEventOnTopOfStack@@YAXW4LUIEventCache@@PEAUlua_State@@@Z(cachedEvent, luaVM);
}

/*
==============
LUIElement_LayoutChildren
==============
*/

bool __fastcall LUIElement_LayoutChildren(LocalClientNum_t localClientNum, LUIElement *firstChild, float unitScale, int deltaTime, lua_State *luaVM)
{
  return ?LUIElement_LayoutChildren@@YA_NW4LocalClientNum_t@@PEAULUIElement@@MHPEAUlua_State@@@Z(localClientNum, firstChild, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_BeginEventWithElement
==============
*/

bool __fastcall LUI_BeginEventWithElement(LocalClientNum_t localClient, LUIElement *element, const char *eventName, lua_State *luaVM)
{
  return ?LUI_BeginEventWithElement@@YA_NW4LocalClientNum_t@@PEAULUIElement@@PEBDPEAUlua_State@@@Z(localClient, element, eventName, luaVM);
}

/*
==============
LUIElement_Layout
==============
*/

void __fastcall LUIElement_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  ?LUIElement_Layout@@YAXW4LocalClientNum_t@@PEAULUIElement@@MHPEAUlua_State@@@Z(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_ShouldDrawDebugBounds
==============
*/

bool __fastcall LUI_ShouldDrawDebugBounds()
{
  return ?LUI_ShouldDrawDebugBounds@@YA_NXZ();
}

/*
==============
LUI_GetViewInfo
==============
*/

const GfxViewInfo *__fastcall LUI_GetViewInfo()
{
  return ?LUI_GetViewInfo@@YAPEBUGfxViewInfo@@XZ();
}

/*
==============
LUI_SetTableMaterial
==============
*/

void __fastcall LUI_SetTableMaterial(__int64 key, const GfxImage *material, lua_State *luaVM)
{
  ?LUI_SetTableMaterial@@YAX_JPEBUGfxImage@@PEAUlua_State@@@Z(key, material, luaVM);
}

/*
==============
LUIElement_GetPath
==============
*/

unsigned __int64 __fastcall LUIElement_GetPath(LUIElement *element, lua_State *luaVM, unsigned __int64 bufferSize, char *outBuffer)
{
  return ?LUIElement_GetPath@@YA_KPEAULUIElement@@PEAUlua_State@@_KPEAD@Z(element, luaVM, bufferSize, outBuffer);
}

/*
==============
LUI_ErrorCleanup
==============
*/

void __fastcall LUI_ErrorCleanup(const int lockLevel)
{
  ?LUI_ErrorCleanup@@YAXH@Z(lockLevel);
}

/*
==============
LUI_ReportErrorWithInfo
==============
*/

void __fastcall LUI_ReportErrorWithInfo(const char *error, const char *luaErrorInfo, lua_State *luaVM)
{
  ?LUI_ReportErrorWithInfo@@YAXPEBD0PEAUlua_State@@@Z(error, luaErrorInfo, luaVM);
}

/*
==============
LUI_Render
==============
*/

void __fastcall LUI_Render(const LocalClientNum_t localClientNum, LUIRootData *rootData, lua_State *luaVM)
{
  ?LUI_Render@@YAXW4LocalClientNum_t@@PEAULUIRootData@@PEAUlua_State@@@Z(localClientNum, rootData, luaVM);
}

/*
==============
LUI_LUIElement_SetLeft
==============
*/

void __fastcall LUI_LUIElement_SetLeft(LUIElement *element, float left)
{
  ?LUI_LUIElement_SetLeft@@YAXPEAULUIElement@@M@Z(element, left);
}

/*
==============
LUI_HandleLuaError
==============
*/

void __fastcall LUI_HandleLuaError(const int errorCode)
{
  ?LUI_HandleLuaError@@YAXH@Z(errorCode);
}

/*
==============
LUI_ReportMemoryUsage
==============
*/

void LUI_ReportMemoryUsage(void)
{
  ?LUI_ReportMemoryUsage@@YAXXZ();
}

/*
==============
LUI_IsInExecDrawList
==============
*/

bool __fastcall LUI_IsInExecDrawList()
{
  return ?LUI_IsInExecDrawList@@YA_NXZ();
}

/*
==============
LUI_GetRootForController
==============
*/

LUIElement *__fastcall LUI_GetRootForController(int controllerIndex)
{
  return ?LUI_GetRootForController@@YAPEAULUIElement@@H@Z(controllerIndex);
}

/*
==============
LUI_SetTableElement
==============
*/

void __fastcall LUI_SetTableElement(const char *key, LUIElement *element, lua_State *luaVM)
{
  ?LUI_SetTableElement@@YAXPEBDPEAULUIElement@@PEAUlua_State@@@Z(key, element, luaVM);
}

/*
==============
LUI_SetTableBool
==============
*/

void __fastcall LUI_SetTableBool(const char *key, bool value, lua_State *luaVM)
{
  ?LUI_SetTableBool@@YAXPEBD_NPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_Obituary
==============
*/

void __fastcall LUI_Obituary(int controllerIndex, int attacker, int victim, const GfxImage *handle, bool flip, int ratio, const Weapon *weapon, bool isScorestreak, lua_State *luaVM)
{
  ?LUI_Obituary@@YAXHHHPEBUGfxImage@@_NHAEBUWeapon@@1PEAUlua_State@@@Z(controllerIndex, attacker, victim, handle, flip, ratio, weapon, isScorestreak, luaVM);
}

/*
==============
LUI_BeginEventWithRoot
==============
*/

bool __fastcall LUI_BeginEventWithRoot(LocalClientNum_t localClient, LUIElement *root, const char *eventName, lua_State *luaVM)
{
  return ?LUI_BeginEventWithRoot@@YA_NW4LocalClientNum_t@@PEAULUIElement@@PEBDPEAUlua_State@@@Z(localClient, root, eventName, luaVM);
}

/*
==============
LUI_ReportError
==============
*/

void __fastcall LUI_ReportError(const char *error, lua_State *luaVM)
{
  ?LUI_ReportError@@YAXPEBDPEAUlua_State@@@Z(error, luaVM);
}

/*
==============
LUI_GetCurrentMenuTransform
==============
*/

tmat44_t<vec4_t> *__fastcall LUI_GetCurrentMenuTransform()
{
  return ?LUI_GetCurrentMenuTransform@@YAPEAT?$tmat44_t@Tvec4_t@@@@XZ();
}

/*
==============
LUI_OpenModalPopup
==============
*/

void __fastcall LUI_OpenModalPopup(int controllerIndex, const char *menuName, lua_State *luaVM)
{
  ?LUI_OpenModalPopup@@YAXHPEBDPEAUlua_State@@@Z(controllerIndex, menuName, luaVM);
}

/*
==============
LUI_GetRootData
==============
*/

LUIRootData *__fastcall LUI_GetRootData(const char *rootName, lua_State *luaVM)
{
  return ?LUI_GetRootData@@YAPEAULUIRootData@@PEBDPEAUlua_State@@@Z(rootName, luaVM);
}

/*
==============
LUI_MeasureTextElement
==============
*/

void __fastcall LUI_MeasureTextElement(float unitScale, LUIElement *element, lua_State *luaVM, float *outWidth, float *outHeight)
{
  ?LUI_MeasureTextElement@@YAXMPEAULUIElement@@PEAUlua_State@@PEAM2@Z(unitScale, element, luaVM, outWidth, outHeight);
}

/*
==============
LUI_SetTableMaterial
==============
*/

void __fastcall LUI_SetTableMaterial(const char *key, const GfxImage *material, lua_State *luaVM)
{
  ?LUI_SetTableMaterial@@YAXPEBDPEBUGfxImage@@PEAUlua_State@@@Z(key, material, luaVM);
}

/*
==============
lui_tonumber32
==============
*/

double __fastcall lui_tonumber32(lua_State *luaVM, int index)
{
  double result; 

  *(float *)&result = ?lui_tonumber32@@YAMPEAUlua_State@@H@Z(luaVM, index);
  return result;
}

/*
==============
LUI_IsRenderUsingMultipleCmdLists
==============
*/

bool __fastcall LUI_IsRenderUsingMultipleCmdLists()
{
  return ?LUI_IsRenderUsingMultipleCmdLists@@YA_NXZ();
}

/*
==============
LUI_PutElementOnTopOfStack
==============
*/

void __fastcall LUI_PutElementOnTopOfStack(LUIElement *element, lua_State *luaVM)
{
  ?LUI_PutElementOnTopOfStack@@YAXPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_GameMessage
==============
*/

void __fastcall LUI_GameMessage(int controllerIndex, const char *message, bool bold, lua_State *luaVM)
{
  ?LUI_GameMessage@@YAXHPEBD_NPEAUlua_State@@@Z(controllerIndex, message, bold, luaVM);
}

/*
==============
LUI_EndTable
==============
*/

void __fastcall LUI_EndTable(lua_State *luaVM)
{
  ?LUI_EndTable@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_LUIElement_InvalidateLayout
==============
*/

void __fastcall LUI_LUIElement_InvalidateLayout(LUIElement *self)
{
  ?LUI_LUIElement_InvalidateLayout@@YAXPEAULUIElement@@@Z(self);
}

/*
==============
LUI_NotifyOmnvarChanged
==============
*/

void __fastcall LUI_NotifyOmnvarChanged(int controllerIndex, const OmnvarDef *def, const OmnvarData *omnvar, lua_State *luaVM)
{
  ?LUI_NotifyOmnvarChanged@@YAXHPEBUOmnvarDef@@PEBUOmnvarData@@PEAUlua_State@@@Z(controllerIndex, def, omnvar, luaVM);
}

/*
==============
LUI_CreateStrongReference
==============
*/

void __fastcall LUI_CreateStrongReference(void *key, lua_State *luaVM)
{
  ?LUI_CreateStrongReference@@YAXPEAXPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_GetMousePosition
==============
*/

void __fastcall LUI_GetMousePosition(const char *rootName, float x, float y, float *xResult, float *yResult, lua_State *luaVM)
{
  ?LUI_GetMousePosition@@YAXPEBDMMPEAM1PEAUlua_State@@@Z(rootName, x, y, xResult, yResult, luaVM);
}

/*
==============
LUI_LUIElement_SetText
==============
*/

int __fastcall LUI_LUIElement_SetText(LUIElement *element, const char *text, lua_State *luaVM)
{
  return ?LUI_LUIElement_SetText@@YAHPEAULUIElement@@PEBDPEAUlua_State@@@Z(element, text, luaVM);
}

/*
==============
LUI_IsInBuildDrawList
==============
*/

bool __fastcall LUI_IsInBuildDrawList()
{
  return ?LUI_IsInBuildDrawList@@YA_NXZ();
}

/*
==============
LUI_Layout
==============
*/

void __fastcall LUI_Layout(const LocalClientNum_t localClientNum, const char *rootName, int deltaTime, lua_State *luaVM)
{
  ?LUI_Layout@@YAXW4LocalClientNum_t@@PEBDHPEAUlua_State@@@Z(localClientNum, rootName, deltaTime, luaVM);
}

/*
==============
LUI_GetAlignment
==============
*/

char __fastcall LUI_GetAlignment(LUIHorizontalAlignment horizontalAlignment, LUIVerticalAlignment verticalAlignment)
{
  return ?LUI_GetAlignment@@YADW4LUIHorizontalAlignment@@W4LUIVerticalAlignment@@@Z(horizontalAlignment, verticalAlignment);
}

/*
==============
LUI_SharedTextRef_CreateRef
==============
*/

LUISharedTextRefIndex __fastcall LUI_SharedTextRef_CreateRef(lua_State *luaVM)
{
  return ?LUI_SharedTextRef_CreateRef@@YA?AW4LUISharedTextRefIndex@@PEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_BrSquadMessageCustom
==============
*/

void __fastcall LUI_BrSquadMessageCustom(const LocalClientNum_t *localClientNum, const int messageType, const char *const stringParam, const GfxImage *const iconParam, const int param1, lua_State *luaVM)
{
  ?LUI_BrSquadMessageCustom@@YAXAEBW4LocalClientNum_t@@HQEBDQEBUGfxImage@@HPEAUlua_State@@@Z(localClientNum, messageType, stringParam, iconParam, param1, luaVM);
}

/*
==============
LUI_CreateWeakReference
==============
*/

void __fastcall LUI_CreateWeakReference(void *key, lua_State *luaVM)
{
  ?LUI_CreateWeakReference@@YAXPEAXPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_ToXUID
==============
*/

XUID *__fastcall LUI_ToXUID(XUID *result, lua_State *luaVM, int index)
{
  return ?LUI_ToXUID@@YA?AUXUID@@PEAUlua_State@@H@Z(result, luaVM, index);
}

/*
==============
LUI_DumpTweens
==============
*/

void __fastcall LUI_DumpTweens(lua_State *luaVM)
{
  ?LUI_DumpTweens@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_UsesRightToLeftAlignmentFlip
==============
*/

bool __fastcall LUI_UsesRightToLeftAlignmentFlip(LUIElement *element)
{
  return ?LUI_UsesRightToLeftAlignmentFlip@@YA_NPEAULUIElement@@@Z(element);
}

/*
==============
LUI_GetCurrentParallaxMatrix
==============
*/

void __fastcall LUI_GetCurrentParallaxMatrix(float parallaxAmount, tmat44_t<vec4_t> *outMatrix)
{
  ?LUI_GetCurrentParallaxMatrix@@YAXMAEAT?$tmat44_t@Tvec4_t@@@@@Z(parallaxAmount, outMatrix);
}

/*
==============
LUI_ClearStrongReference
==============
*/

void __fastcall LUI_ClearStrongReference(void *key, lua_State *luaVM)
{
  ?LUI_ClearStrongReference@@YAXPEAXPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_DumpStack
==============
*/

void LUI_DumpStack(void)
{
  ?LUI_DumpStack@@YAXXZ();
}

/*
==============
LUI_Ref_Monitor_AddRef
==============
*/

int __fastcall LUI_Ref_Monitor_AddRef(lua_State *luaVM, const int index)
{
  return ?LUI_Ref_Monitor_AddRef@@YAHPEAUlua_State@@H@Z(luaVM, index);
}

/*
==============
LUI_ProjectRootCoordinate
==============
*/

bool __fastcall LUI_ProjectRootCoordinate(lua_State *luaVM, const char *rootName, float screenX, float screenY, float *outMouseX, float *outMouseY)
{
  return ?LUI_ProjectRootCoordinate@@YA_NPEAUlua_State@@PEBDMMPEAM2@Z(luaVM, rootName, screenX, screenY, outMouseX, outMouseY);
}

/*
==============
LUI_NotifyPlayerstateClientChanged
==============
*/

void __fastcall LUI_NotifyPlayerstateClientChanged(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  ?LUI_NotifyPlayerstateClientChanged@@YAXW4LocalClientNum_t@@PEAUlua_State@@@Z(localClientNum, luaVM);
}

/*
==============
LUIElement_UpdateLayout
==============
*/

void __fastcall LUIElement_UpdateLayout(LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  ?LUIElement_UpdateLayout@@YAXPEAULUIElement@@MHPEAUlua_State@@@Z(element, unitScale, deltaTime, luaVM);
}

/*
==============
LUIElement_Animate
==============
*/

void __fastcall LUIElement_Animate(LUIElement *element, int systemDeltaTime, int gameDeltaTime, bool useGameClock, lua_State *luaVM)
{
  ?LUIElement_Animate@@YAXPEAULUIElement@@HH_NPEAUlua_State@@@Z(element, systemDeltaTime, gameDeltaTime, useGameClock, luaVM);
}

/*
==============
LUIElement_IsImageLike
==============
*/

bool __fastcall LUIElement_IsImageLike(const LUIElement *element)
{
  return ?LUIElement_IsImageLike@@YA_NPEBULUIElement@@@Z(element);
}

/*
==============
LUI_LUIElement_GetExclusiveController
==============
*/

int __fastcall LUI_LUIElement_GetExclusiveController(LUIElement *element, lua_State *luaVM)
{
  return ?LUI_LUIElement_GetExclusiveController@@YAHPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_AddBulletHitMarker
==============
*/

void __fastcall LUI_AddBulletHitMarker(const LocalClientNum_t *localClientNum, int victim, const char *tagName, const vec3_t *impactPosition, bool armorHit, bool isPenetrating)
{
  ?LUI_AddBulletHitMarker@@YAXAEBW4LocalClientNum_t@@HPEBDAEBTvec3_t@@_N3@Z(localClientNum, victim, tagName, impactPosition, armorHit, isPenetrating);
}

/*
==============
LUI_SetTableNumber
==============
*/

void __fastcall LUI_SetTableNumber(__int64 key, long double value, lua_State *luaVM)
{
  ?LUI_SetTableNumber@@YAX_JNPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_Shutdown
==============
*/

void LUI_Shutdown(void)
{
  ?LUI_Shutdown@@YAXXZ();
}

/*
==============
LUI_BrSquadMessage
==============
*/

void __fastcall LUI_BrSquadMessage(const LocalClientNum_t *localClientNum, const int messageType, const int param1, const int param2, lua_State *luaVM)
{
  ?LUI_BrSquadMessage@@YAXAEBW4LocalClientNum_t@@HHHPEAUlua_State@@@Z(localClientNum, messageType, param1, param2, luaVM);
}

/*
==============
LUIElement_DefaultLayout
==============
*/

void __fastcall LUIElement_DefaultLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  ?LUIElement_DefaultLayout@@YAXW4LocalClientNum_t@@PEAULUIElement@@MHPEAUlua_State@@@Z(localClientNum, element, unitScale, deltaTime, luaVM);
}

/*
==============
LUI_LeaveMenuById
==============
*/

void __fastcall LUI_LeaveMenuById(int controllerIndex, const int menuId, int immediate, lua_State *luaVM)
{
  ?LUI_LeaveMenuById@@YAXHHHPEAUlua_State@@@Z(controllerIndex, menuId, immediate, luaVM);
}

/*
==============
LUI_SetTableString
==============
*/

void __fastcall LUI_SetTableString(__int64 key, const char *value, lua_State *luaVM)
{
  ?LUI_SetTableString@@YAX_JPEBDPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_GetRootData
==============
*/

LUIRootData *__fastcall LUI_GetRootData(const LUIElement *root)
{
  return ?LUI_GetRootData@@YAPEAULUIRootData@@PEBULUIElement@@@Z(root);
}

/*
==============
LUI_NotifyMLGSpectatorLoadoutChanged
==============
*/

void __fastcall LUI_NotifyMLGSpectatorLoadoutChanged(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  ?LUI_NotifyMLGSpectatorLoadoutChanged@@YAXW4LocalClientNum_t@@PEAUlua_State@@@Z(localClientNum, luaVM);
}

/*
==============
LUI_SetTableInt
==============
*/

void __fastcall LUI_SetTableInt(const char *key, __int64 value, lua_State *luaVM)
{
  ?LUI_SetTableInt@@YAXPEBD_JPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_PushXUID
==============
*/

void __fastcall LUI_PushXUID(lua_State *luaVM, const XUID xuid)
{
  ?LUI_PushXUID@@YAXPEAUlua_State@@UXUID@@@Z(luaVM, xuid);
}

/*
==============
LUI_BrPingAckMessage
==============
*/

void __fastcall LUI_BrPingAckMessage(const LocalClientNum_t *localClientNum, const int clientNum, const int ownerClientNum, const int messageType, const int pingParam, const char *const stringParam, const GfxImage *const iconParam, lua_State *const luaVM)
{
  ?LUI_BrPingAckMessage@@YAXAEBW4LocalClientNum_t@@HHHHQEBDQEBUGfxImage@@QEAUlua_State@@@Z(localClientNum, clientNum, ownerClientNum, messageType, pingParam, stringParam, iconParam, luaVM);
}

/*
==============
LUIElement_CalculateGlobalRectangle
==============
*/

void __fastcall LUIElement_CalculateGlobalRectangle(LUIElement *element, LUIAnimationState *animationState)
{
  ?LUIElement_CalculateGlobalRectangle@@YAXPEAULUIElement@@PEAULUIAnimationState@@@Z(element, animationState);
}

/*
==============
LUI_LUIElement_SetBottom
==============
*/

void __fastcall LUI_LUIElement_SetBottom(LUIElement *element, float bottom)
{
  ?LUI_LUIElement_SetBottom@@YAXPEAULUIElement@@M@Z(element, bottom);
}

/*
==============
LUI_GetVerticalAlignment
==============
*/

LUIVerticalAlignment __fastcall LUI_GetVerticalAlignment(char alignment)
{
  return ?LUI_GetVerticalAlignment@@YA?AW4LUIVerticalAlignment@@D@Z(alignment);
}

/*
==============
LUI_PushViaStrongReference
==============
*/

void __fastcall LUI_PushViaStrongReference(void *key, lua_State *luaVM)
{
  ?LUI_PushViaStrongReference@@YAXPEAXPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_LUIElement_UpdatePropertyBinding
==============
*/

void __fastcall LUI_LUIElement_UpdatePropertyBinding(LUIElement *element, LUIDataBindingProperty bindProp, unsigned __int16 model, lua_State *luaVM)
{
  ?LUI_LUIElement_UpdatePropertyBinding@@YAXPEAULUIElement@@W4LUIDataBindingProperty@@GPEAUlua_State@@@Z(element, bindProp, model, luaVM);
}

/*
==============
LUI_LUIElement_CheckUnFlagAs3D
==============
*/

void __fastcall LUI_LUIElement_CheckUnFlagAs3D(LUIElement *element)
{
  ?LUI_LUIElement_CheckUnFlagAs3D@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUI_RestoreMenu
==============
*/

void __fastcall LUI_RestoreMenu(int controllerIndex, const char *menuName, int replaceTop, int exclusiveController, lua_State *luaVM)
{
  ?LUI_RestoreMenu@@YAXHPEBDHHPEAUlua_State@@@Z(controllerIndex, menuName, replaceTop, exclusiveController, luaVM);
}

/*
==============
LUI_LUIElement_AddStrongReference
==============
*/

bool __fastcall LUI_LUIElement_AddStrongReference(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  return ?LUI_LUIElement_AddStrongReference@@YA_NPEAULUIElement@@0PEAUlua_State@@@Z(self, child, luaVM);
}

/*
==============
LUI_LoadLUIInitFile
==============
*/

bool __fastcall LUI_LoadLUIInitFile()
{
  return ?LUI_LoadLUIInitFile@@YA_NXZ();
}

/*
==============
LUI_IsScopeUIStencilEnabled
==============
*/

bool __fastcall LUI_IsScopeUIStencilEnabled()
{
  return ?LUI_IsScopeUIStencilEnabled@@YA_NXZ();
}

/*
==============
LUI_LUIElement_FlagAs3D
==============
*/

void __fastcall LUI_LUIElement_FlagAs3D(LUIElement *element)
{
  ?LUI_LUIElement_FlagAs3D@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUI_LUIElement_SetRGB
==============
*/

void __fastcall LUI_LUIElement_SetRGB(LUIElement *element, float r, float g, float b)
{
  ?LUI_LUIElement_SetRGB@@YAXPEAULUIElement@@MMM@Z(element, r, g, b);
}

/*
==============
LUI_SetTableElement
==============
*/

void __fastcall LUI_SetTableElement(__int64 key, LUIElement *element, lua_State *luaVM)
{
  ?LUI_SetTableElement@@YAX_JPEAULUIElement@@PEAUlua_State@@@Z(key, element, luaVM);
}

/*
==============
lui_tounsignedinteger32
==============
*/

unsigned int __fastcall lui_tounsignedinteger32(lua_State *luaVM, int index)
{
  return ?lui_tounsignedinteger32@@YAIPEAUlua_State@@H@Z(luaVM, index);
}

/*
==============
LUI_PushZRotationMatrix
==============
*/

void __fastcall LUI_PushZRotationMatrix(float degrees, float centerX, float centerY, lua_State *luaVM)
{
  ?LUI_PushZRotationMatrix@@YAXMMMPEAUlua_State@@@Z(degrees, centerX, centerY, luaVM);
}

/*
==============
LUI_SharedTextRef_PushRefOnStack
==============
*/

void __fastcall LUI_SharedTextRef_PushRefOnStack(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  ?LUI_SharedTextRef_PushRefOnStack@@YAXPEAUlua_State@@W4LUISharedTextRefIndex@@@Z(luaVM, index);
}

/*
==============
LUI_LUIElement_RemoveStrongReference
==============
*/

void __fastcall LUI_LUIElement_RemoveStrongReference(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  ?LUI_LUIElement_RemoveStrongReference@@YAXPEAULUIElement@@0PEAUlua_State@@@Z(self, child, luaVM);
}

/*
==============
lui_tointeger32
==============
*/

int __fastcall lui_tointeger32(lua_State *luaVM, int index)
{
  return ?lui_tointeger32@@YAHPEAUlua_State@@H@Z(luaVM, index);
}

/*
==============
LUIElement_CalculateRTTHandledElementGlobalRectangle
==============
*/

void __fastcall LUIElement_CalculateRTTHandledElementGlobalRectangle(LUIElement *element)
{
  ?LUIElement_CalculateRTTHandledElementGlobalRectangle@@YAXPEAULUIElement@@@Z(element);
}

/*
==============
LUI_BeginEvent
==============
*/

bool __fastcall LUI_BeginEvent(LocalClientNum_t localClient, const char *eventName, lua_State *luaVM)
{
  return ?LUI_BeginEvent@@YA_NW4LocalClientNum_t@@PEBDPEAUlua_State@@@Z(localClient, eventName, luaVM);
}

/*
==============
LUI_SetTableString
==============
*/

void __fastcall LUI_SetTableString(const char *key, const char *value, lua_State *luaVM)
{
  ?LUI_SetTableString@@YAXPEBD0PEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LUI_Measure
==============
*/

float __fastcall LUI_Measure(LUIElementAxisPosition *axisPosition)
{
  return ?LUI_Measure@@YAMULUIElementAxisPosition@@@Z(axisPosition);
}

/*
==============
LUI_RestoreMenuById
==============
*/

void __fastcall LUI_RestoreMenuById(int controllerIndex, const int menuId, int replaceTop, int exclusiveController, lua_State *luaVM)
{
  ?LUI_RestoreMenuById@@YAXHHHHPEAUlua_State@@@Z(controllerIndex, menuId, replaceTop, exclusiveController, luaVM);
}

/*
==============
LUI_Obituary_WeaponAndMOD
==============
*/

void __fastcall LUI_Obituary_WeaponAndMOD(int controllerIndex, int attacker, int victim, const GfxImage *weaponHandle, const GfxImage *MODHandle, bool flip, int ratio, lua_State *luaVM)
{
  ?LUI_Obituary_WeaponAndMOD@@YAXHHHPEBUGfxImage@@0_NHPEAUlua_State@@@Z(controllerIndex, attacker, victim, weaponHandle, MODHandle, flip, ratio, luaVM);
}

/*
==============
LUI_ReportReferenceCounts
==============
*/

void LUI_ReportReferenceCounts(void)
{
  ?LUI_ReportReferenceCounts@@YAXXZ();
}

/*
==============
LUI_GetAllocatedElements
==============
*/

int __fastcall LUI_GetAllocatedElements()
{
  return ?LUI_GetAllocatedElements@@YAHXZ();
}

/*
==============
LUI_LUIElement_SetTop
==============
*/

void __fastcall LUI_LUIElement_SetTop(LUIElement *element, float top)
{
  ?LUI_LUIElement_SetTop@@YAXPEAULUIElement@@M@Z(element, top);
}

/*
==============
LUI_LUIElement_AddElement
==============
*/

void __fastcall LUI_LUIElement_AddElement(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  ?LUI_LUIElement_AddElement@@YAXPEAULUIElement@@0PEAUlua_State@@@Z(self, child, luaVM);
}

/*
==============
LUI_SetTableHandle
==============
*/

void __fastcall LUI_SetTableHandle(const char *key, unsigned int handle, lua_State *luaVM)
{
  ?LUI_SetTableHandle@@YAXPEBDIPEAUlua_State@@@Z(key, handle, luaVM);
}

/*
==============
LUIElement_IsTextLike
==============
*/

bool __fastcall LUIElement_IsTextLike(const LUIElement *element)
{
  return ?LUIElement_IsTextLike@@YA_NPEBULUIElement@@@Z(element);
}

/*
==============
LUI_Init
==============
*/

void __fastcall LUI_Init(lua_State *(__fastcall *createFunc)(), void (__fastcall *destroyFunc)(lua_State *))
{
  ?LUI_Init@@YAXP6APEAUlua_State@@XZP6AXPEAU1@@Z@Z(createFunc, destroyFunc);
}

/*
==============
LUI_LUIElement_IsControllerExclusive
==============
*/

bool __fastcall LUI_LUIElement_IsControllerExclusive(LUIElement *element, lua_State *luaVM)
{
  return ?LUI_LUIElement_IsControllerExclusive@@YA_NPEAULUIElement@@PEAUlua_State@@@Z(element, luaVM);
}

/*
==============
LUI_Panic
==============
*/

int __fastcall LUI_Panic(lua_State *luaVM)
{
  return ?LUI_Panic@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_AddMenu
==============
*/

void __fastcall LUI_AddMenu(int controllerIndex, const char *menuName, lua_State *luaVM)
{
  ?LUI_AddMenu@@YAXHPEBDPEAUlua_State@@@Z(controllerIndex, menuName, luaVM);
}

/*
==============
LUI_GetHorizontalAlignment
==============
*/

LUIHorizontalAlignment __fastcall LUI_GetHorizontalAlignment(char alignment)
{
  return ?LUI_GetHorizontalAlignment@@YA?AW4LUIHorizontalAlignment@@D@Z(alignment);
}

/*
==============
LUI_Matrix_Push
==============
*/

void LUI_Matrix_Push(void)
{
  ?LUI_Matrix_Push@@YAXXZ();
}

/*
==============
LUI_LeaveMenuByName
==============
*/

void __fastcall LUI_LeaveMenuByName(int controllerIndex, const char *menuName, int immediate, lua_State *luaVM)
{
  ?LUI_LeaveMenuByName@@YAXHPEBDHPEAUlua_State@@@Z(controllerIndex, menuName, immediate, luaVM);
}

/*
==============
LUI_SharedTextRef_RemoveRef
==============
*/

void __fastcall LUI_SharedTextRef_RemoveRef(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  ?LUI_SharedTextRef_RemoveRef@@YAXPEAUlua_State@@W4LUISharedTextRefIndex@@@Z(luaVM, index);
}

/*
==============
LUI_LeaveCriticalSection
==============
*/

void LUI_LeaveCriticalSection(void)
{
  ?LUI_LeaveCriticalSection@@YAXXZ();
}

/*
==============
LUI_SetTableNil
==============
*/

void __fastcall LUI_SetTableNil(const char *key, lua_State *luaVM)
{
  ?LUI_SetTableNil@@YAXPEBDPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LUI_LuaCall_LUIElement_GC
==============
*/
__int64 LUI_LuaCall_LUIElement_GC(lua_State *const luaVM)
{
  LUIElement *v2; 
  int *v3; 
  __int64 v4; 
  int v5; 
  unsigned int v6; 

  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  v3 = (int *)((char *)v2->customElementData + 4);
  v4 = 10i64;
  do
  {
    v5 = *v3;
    if ( *v3 != -2 )
    {
      LUI_Tween_Verify_Tween_Metatable_Unref(-10000, v5);
      if ( v5 != -1 )
      {
        j_lua_rawgeti(luaVM, -10000, v5);
        if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 86, ASSERT_TYPE_ASSERT, "(isFunction( luaVM, -1 ))", (const char *)&queryFormat, "isFunction( luaVM, -1 )") )
          __debugbreak();
        j_lua_settop(luaVM, -2);
      }
      LUI_Ref_Monitor_RemoveRef(luaVM, -10000, v5);
    }
    v3 += 4;
    --v4;
  }
  while ( v4 );
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUIElementGfxState::LUIElementGfxState
==============
*/
void LUIElementGfxState::LUIElementGfxState(LUIElementGfxState *this, LocalClientNum_t localClientNum, LUIElement *element, const bool *dynamicRendering)
{
  unsigned __int8 rttHandle; 
  LUIElementUsageFlag usageFlags; 
  const dvar_t *v8; 
  bool v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  bool v12; 
  bool v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  bool v16; 
  const dvar_t *v17; 
  bool v18; 
  bool v19; 

  this->m_localClientNum = localClientNum;
  this->m_element = element;
  *(_DWORD *)&this->m_rttHandle = 0;
  *(_WORD *)&this->m_useRegularList = 0;
  this->m_pixelgridOverlay = 0;
  this->m_dynamicRendering = dynamicRendering;
  LUI_QuadCache_GetDrawListState(localClientNum, &this->m_drawListPrevState);
  rttHandle = element->rttHandle;
  if ( rttHandle && LUI_Render_PushRTT((const LocalClientNum_t)this->m_localClientNum, rttHandle) )
    this->m_rttHandle = element->rttHandle;
  if ( !this->m_rttHandle )
  {
    usageFlags = element->usageFlags;
    if ( (usageFlags & 0x10000) == 0 )
      goto LABEL_11;
    v8 = DVARBOOL_r_ui_receive_postfx;
    if ( !DVARBOOL_r_ui_receive_postfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ui_receive_postfx") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      v9 = 1;
    else
LABEL_11:
      v9 = 0;
    this->m_usePostFX = v9;
    v10 = DCONST_DVARBOOL_r_offscreenReticles;
    if ( !DCONST_DVARBOOL_r_offscreenReticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_offscreenReticles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      if ( (usageFlags & 0x20000) == 0 )
        goto LABEL_22;
      v11 = DVARBOOL_r_ui_receive_postfx;
      if ( !DVARBOOL_r_ui_receive_postfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ui_receive_postfx") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
      {
        v12 = 1;
        v13 = (usageFlags & 0x40000) != 0;
      }
      else
      {
LABEL_22:
        v12 = 0;
        v13 = (usageFlags & 0x40000) != 0;
      }
    }
    else
    {
      if ( (usageFlags & 0x60000) == 0 )
        goto LABEL_29;
      v14 = DVARBOOL_r_ui_receive_postfx;
      if ( !DVARBOOL_r_ui_receive_postfx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_ui_receive_postfx") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled )
        v12 = 1;
      else
LABEL_29:
        v12 = 0;
      v13 = 0;
    }
    this->m_usePostFXLite = v12;
    this->m_usePostFXComposite = v13;
    this->m_useRegularList = (usageFlags & 0x80000) != 0;
    if ( (usageFlags & 0x100000) == 0 )
      goto LABEL_37;
    v15 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      v16 = 1;
    else
LABEL_37:
      v16 = 0;
    this->m_useLowresOverlay = v16;
    if ( (usageFlags & 0x400000) == 0 )
      goto LABEL_44;
    v17 = DCONST_DVARBOOL_r_compositePixelgrid;
    if ( !DCONST_DVARBOOL_r_compositePixelgrid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_compositePixelgrid") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( v17->current.enabled )
      v18 = 1;
    else
LABEL_44:
      v18 = 0;
    v19 = !this->m_usePostFX;
    this->m_pixelgridOverlay = v18;
    if ( v19 )
    {
      if ( this->m_usePostFXLite )
      {
        LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 2u);
      }
      else if ( this->m_usePostFXComposite )
      {
        LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 3u);
      }
      else if ( this->m_useLowresOverlay )
      {
        LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 4u);
      }
      else if ( v18 )
      {
        LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 5u);
      }
      else if ( this->m_useRegularList )
      {
        LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 0);
      }
    }
    else
    {
      LUI_Render_PushCustomList((const LocalClientNum_t)this->m_localClientNum, 1u);
    }
  }
}

/*
==============
LUIElementGfxState::~LUIElementGfxState
==============
*/
void LUIElementGfxState::~LUIElementGfxState(LUIElementGfxState *this)
{
  if ( this->m_rttHandle )
  {
    LUI_Render_PopRTT((const LocalClientNum_t)this->m_localClientNum);
  }
  else if ( this->m_usePostFX )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 1u);
  }
  else if ( this->m_usePostFXLite )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 2u);
  }
  else if ( this->m_usePostFXComposite )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 3u);
  }
  else if ( this->m_useLowresOverlay )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 4u);
  }
  else if ( this->m_pixelgridOverlay )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 5u);
  }
  else if ( this->m_useRegularList )
  {
    LUI_Render_PopCustomList((const LocalClientNum_t)this->m_localClientNum, 0);
  }
}

/*
==============
AdjustPixelSizeForResolution
==============
*/
__int64 AdjustPixelSizeForResolution(lua_State *luaVM, int pixelValue)
{
  const LUIElement *CurrentRoot; 

  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  LUI_GetRootData(CurrentRoot);
  _XMM1 = 0i64;
  __asm { vroundss xmm2, xmm1, xmm3, 1 }
  return (unsigned int)(int)*(float *)&_XMM2;
}

/*
==============
LUIElement_Animate
==============
*/
void LUIElement_Animate(LUIElement *element, int systemDeltaTime, int gameDeltaTime, bool useGameClock, lua_State *luaVM)
{
  int v6; 
  unsigned int flags; 
  bool v9; 
  lua_State *v10; 
  bool v11; 
  bool v12; 
  LUIElement *firstChild; 
  bool outInvalidatesQuadCache; 
  bool outInvalidatesLayout; 

  v6 = systemDeltaTime;
  if ( !element->tweensCached )
  {
    flags = element->currentAnimationState.flags;
    v9 = useGameClock || (flags & 0x10) != 0;
    v10 = luaVM;
    outInvalidatesLayout = 0;
    v11 = 0;
    if ( (flags & 0x80u) == 0 )
      v11 = v9;
    outInvalidatesQuadCache = 0;
    if ( v11 )
      systemDeltaTime = gameDeltaTime;
    LUI_Tween_ApplyElementTweens(element, systemDeltaTime, luaVM, &outInvalidatesLayout, &outInvalidatesQuadCache);
    v12 = !outInvalidatesQuadCache;
    element->canCacheLayout = !outInvalidatesLayout;
    if ( !v12 )
      LUI_QuadCache_Element_Invalidate(element);
    firstChild = element->firstChild;
    for ( element->tweensCached = element->activeTweens == NULL; firstChild; firstChild = firstChild->nextSibling )
    {
      LUIElement_Animate(firstChild, v6, gameDeltaTime, v11, v10);
      element->tweensCached &= firstChild->tweensCached;
    }
  }
}

/*
==============
LUIElement_ApplyTransform
==============
*/
void LUIElement_ApplyTransform(LUIElement *element, lua_State *luaVM)
{
  __int128 v2; 
  float scale; 
  float left; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float zRot; 
  float v11; 
  float v12; 
  float v13; 
  float yRot; 
  float v15; 
  float v16; 
  float xRot; 
  float v18; 
  float v19; 
  float depth; 
  unsigned __int8 parallaxAmount; 
  tmat44_t<vec4_t> result; 
  tmat44_t<vec4_t> matrix1; 
  tmat44_t<vec4_t> matrix2; 
  __int128 v25; 

  scale = element->currentAnimationState.scale;
  if ( scale != 0.0 )
  {
    left = element->left;
    v6 = element->right - left;
    v7 = (float)((float)(element->bottom - element->top) * 0.5) + element->top;
    v25 = v2;
    v8 = (float)(v6 * 0.5) + left;
    v9 = scale + 1.0;
    if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
      __debugbreak();
    ++s_currentMatrix;
    LUI_Matrix_BuildTranslationMatrix(v8, v7, 0.0, &result);
    LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
    LUI_Matrix_BuildScaleMatrix(v9, v9, 1.0, &matrix2);
    LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix2, &matrix1);
    LODWORD(result.m[0].v[3]) ^= _xmm;
    LODWORD(result.m[2].v[3]) ^= _xmm;
    LODWORD(result.m[1].v[3]) ^= _xmm;
    LUI_Matrix_Multiply(&matrix1, &result, &s_matrixStack[(__int64)s_currentMatrix]);
  }
  zRot = element->currentAnimationState.zRot;
  if ( zRot != 0.0 )
  {
    v11 = (float)((float)(element->bottom - element->top) * 0.5) + element->top;
    v12 = (float)((float)(element->right - element->left) * 0.5) + element->left;
    LODWORD(v13) = LODWORD(zRot) ^ _xmm;
    if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
      __debugbreak();
    ++s_currentMatrix;
    LUI_Matrix_BuildTranslationMatrix(v12, v11, 0.0, &result);
    LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
    LUI_Matrix_BuildZRotationMatrix(v13, &matrix1);
    LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix1, &matrix2);
    LODWORD(result.m[0].v[3]) ^= _xmm;
    LODWORD(result.m[2].v[3]) ^= _xmm;
    LODWORD(result.m[1].v[3]) ^= _xmm;
    LUI_Matrix_Multiply(&matrix2, &result, &s_matrixStack[(__int64)s_currentMatrix]);
  }
  if ( (element->usageFlags & 4) != 0 )
  {
    yRot = element->yRot;
    if ( yRot != 0.0 )
    {
      v15 = (float)((float)(element->bottom - element->top) * 0.5) + element->top;
      v16 = (float)((float)(element->right - element->left) * 0.5) + element->left;
      if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
        __debugbreak();
      ++s_currentMatrix;
      LUI_Matrix_BuildTranslationMatrix(v16, v15, 0.0, &result);
      LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
      LUI_Matrix_BuildYRotationMatrix(yRot, &matrix1);
      LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix1, &matrix2);
      LODWORD(result.m[0].v[3]) ^= _xmm;
      LODWORD(result.m[2].v[3]) ^= _xmm;
      LODWORD(result.m[1].v[3]) ^= _xmm;
      LUI_Matrix_Multiply(&matrix2, &result, &s_matrixStack[(__int64)s_currentMatrix]);
    }
    xRot = element->xRot;
    if ( xRot != 0.0 )
    {
      v18 = (float)((float)(element->bottom - element->top) * 0.5) + element->top;
      v19 = (float)((float)(element->right - element->left) * 0.5) + element->left;
      if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
        __debugbreak();
      ++s_currentMatrix;
      LUI_Matrix_BuildTranslationMatrix(v19, v18, 0.0, &result);
      LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
      LUI_Matrix_BuildXRotationMatrix(xRot, &matrix1);
      LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix1, &matrix2);
      LODWORD(result.m[0].v[3]) ^= _xmm;
      LODWORD(result.m[2].v[3]) ^= _xmm;
      LODWORD(result.m[1].v[3]) ^= _xmm;
      LUI_Matrix_Multiply(&matrix2, &result, &s_matrixStack[(__int64)s_currentMatrix]);
    }
    depth = element->depth;
    if ( depth != 0.0 )
    {
      if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
        __debugbreak();
      ++s_currentMatrix;
      LUI_Matrix_BuildTranslationMatrix(0.0, 0.0, depth, &matrix1);
      LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &matrix1, &s_matrixStack[(__int64)s_currentMatrix]);
    }
  }
  parallaxAmount = element->parallaxAmount;
  if ( parallaxAmount )
    LUI_Render_PushParallaxEnabled(parallaxAmount);
}

/*
==============
LUIElement_BuildDrawList
==============
*/
void LUIElement_BuildDrawList(const LocalClientNum_t localClientNum, LUIElement *element, LUIElement *root, LUIRootData *rootData, lua_State *luaVM, float alphaMultiplier, float redMultiplier, float greenMultiplier, float blueMultiplier, bool *outDynamicRendering)
{
  bool *v13; 
  LUIElement *parent; 
  char v15; 
  float v20; 
  float v21; 
  float v22; 
  char v23; 
  LUIElementUsageFlag usageFlags; 
  LUIBlendMode CurrentBlendMode; 
  LUIBlendMode blendMode; 
  LUIElement *maskElement; 
  bool v28; 
  float glitchAmount; 
  void (__fastcall *renderFunction)(const LocalClientNum_t, LUIElement *, LUIElement *, float, float, float, float, lua_State *); 
  float v31; 
  LUIElement *i; 
  bool v33; 
  LUIElement *j; 
  UIQuadCache *firstDeepCache; 
  UIQuadCache *lastDeepCache; 
  LUIElementUsageFlag v37; 
  unsigned int v38; 
  LUIColorOp op; 
  bool v40; 
  bool v41; 
  bool v42; 
  LUIElementGfxState v43; 
  __int64 v44; 

  v44 = -2i64;
  v13 = outDynamicRendering;
  *outDynamicRendering = 0;
  if ( !element || (element->currentAnimationState.flags & 1) == 0 )
    return;
  LUIElementGfxState::LUIElementGfxState(&v43, localClientNum, element, v13);
  parent = element->parent;
  if ( parent && !parent->quadCached )
  {
    element->quadCached = 0;
    element->hasLeftoverQuadcache = element->firstCache != NULL;
    goto LABEL_6;
  }
  if ( !element->deeplyCached || s_drawDebugBoundingBoxes )
  {
LABEL_6:
    v15 = element->usageFlags & 1;
    if ( (float)(alphaMultiplier * element->currentAnimationState.alpha) <= 0.000099999997 )
    {
      if ( !v15 )
      {
        element->deeplyCached = 1;
        element->firstDeepCache = NULL;
        element->lastDeepCache = NULL;
      }
      goto LABEL_97;
    }
    _XMM0 = (element->usageFlags & 0x4000000) != 0;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_1_0);
    __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
    *(float *)&outDynamicRendering = *(float *)&_XMM0;
    v20 = redMultiplier * element->currentAnimationState.red;
    v21 = greenMultiplier * element->currentAnimationState.green;
    v22 = blueMultiplier * element->currentAnimationState.blue;
    v23 = 1;
    LUIElement_ApplyTransform(element, luaVM);
    usageFlags = element->usageFlags;
    if ( (usageFlags & 8) != 0 )
    {
      LUI_SetScopeUIStencilEnabled(1);
      LUI_Render_PushScopeIndex(((unsigned int)element->usageFlags >> 15) & 1);
      usageFlags = element->usageFlags;
    }
    if ( (usageFlags & 4) != 0 )
    {
      if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7953, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
        __debugbreak();
      ++s_current3DTransforms;
    }
    CurrentBlendMode = LUI_Render_GetCurrentBlendMode();
    blendMode = element->blendMode;
    v40 = CurrentBlendMode != blendMode;
    if ( CurrentBlendMode != blendMode )
      LUI_Render_PushBlendMode(blendMode);
    maskElement = element->maskElement;
    if ( maskElement )
    {
      if ( (maskElement->currentAnimationState.flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8234, ASSERT_TYPE_ASSERT, "(element->maskElement->currentAnimationState.flags & ( 1 << 0 ))", "%s\n\tMask element has uninitialized animation state!", "element->maskElement->currentAnimationState.flags & LUI_ANIMSTATE_INITIALIZED") )
        __debugbreak();
      LUIElement_Mask_Push(localClientNum, element->maskElement, luaVM);
    }
    else
    {
      if ( (element->currentAnimationState.flags & 2) == 0 )
      {
LABEL_29:
        v41 = (element->usageFlags & 0x40) != 0;
        v28 = 0;
        if ( !v15 )
          v28 = v23;
        if ( (element->usageFlags & 0x40) != 0 )
        {
          LUI_Render_PushPixelGrid(localClientNum, element);
          v28 = 0;
        }
        glitchAmount = element->glitchAmount;
        if ( glitchAmount > 0.0 )
          LUI_Render_PushGlitch(glitchAmount);
        op = element->colorOp.op;
        if ( op )
          LUI_Render_PushColorOp(&element->colorOp);
        v42 = (element->usageFlags & 0x800000) != 0;
        if ( (element->usageFlags & 0x800000) != 0 )
          LUI_Render_PushAsyncRenderSuspend();
        renderFunction = element->renderFunction;
        v31 = *(float *)&outDynamicRendering;
        if ( renderFunction )
        {
          if ( element->quadCached )
          {
            if ( LUI_QuadCache_Element_CanDraw(element) )
              LUI_QuadCache_AddDrawListElement(localClientNum, element);
          }
          else
          {
            ((void (__fastcall *)(_QWORD, LUIElement *, LUIElement *))renderFunction)((unsigned int)localClientNum, element, root);
            *v13 = 1;
          }
        }
        for ( i = element->firstChild; i; i = i->nextSibling )
        {
          LUIElement_BuildDrawList(localClientNum, i, root, rootData, luaVM, v31, v20, v21, v22, (bool *)&outDynamicRendering);
          v28 = v28 && i->deeplyCached;
          v33 = *v13 || (_BYTE)outDynamicRendering;
          *v13 = v33;
        }
        if ( v15 )
        {
          if ( element->firstCache )
            element->hasLeftoverQuadcache = 1;
        }
        else
        {
          element->quadCached = 1;
        }
        if ( v28 )
        {
          element->deeplyCached = 1;
          if ( LUI_QuadCache_Element_CanDraw(element) )
          {
            element->firstDeepCache = element->firstCache;
            element->lastDeepCache = element->lastCache;
          }
          else
          {
            element->firstDeepCache = NULL;
            element->lastDeepCache = NULL;
          }
          for ( j = element->firstChild; j; j = j->nextSibling )
          {
            firstDeepCache = j->firstDeepCache;
            if ( firstDeepCache )
            {
              lastDeepCache = element->lastDeepCache;
              if ( lastDeepCache )
                lastDeepCache->next = firstDeepCache;
              else
                element->firstDeepCache = firstDeepCache;
              element->lastDeepCache = j->lastDeepCache;
            }
          }
          if ( !element->deeplyCached && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8315, ASSERT_TYPE_ASSERT, "(element->deeplyCached)", (const char *)&queryFormat, "element->deeplyCached") )
            __debugbreak();
        }
        else
        {
          element->deeplyCached = 0;
        }
        if ( v41 )
          LUI_Render_PopPixelGrid(localClientNum);
        if ( glitchAmount > 0.0 )
          LUI_Render_PopGlitch();
        if ( v42 )
          LUI_Render_PopAsyncRenderSuspend();
        if ( op )
          LUI_Render_PopColorOp();
        if ( element->maskElement )
        {
          LUI_Render_PopMask(localClientNum);
        }
        else if ( (element->currentAnimationState.flags & 2) != 0 )
        {
          LUI_Render_PopStencilRectangle(localClientNum);
        }
        if ( v40 )
          LUI_Render_PopBlendMode();
        if ( s_drawDebugBoundingBoxes )
          LUI_Interface_DrawBoundingBox(localClientNum, element, luaVM);
        v37 = element->usageFlags;
        if ( (v37 & 4) != 0 )
        {
          if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7960, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
            __debugbreak();
          --s_current3DTransforms;
          v37 = element->usageFlags;
        }
        if ( (v37 & 8) != 0 )
        {
          LUI_SetScopeUIStencilEnabled(0);
          LUI_Render_PopScopeIndex();
        }
        LUIElement_UndoTransform(element, luaVM);
        goto LABEL_97;
      }
      LUI_Render_PushStencilRectangle(localClientNum, element->left, element->top, element->right, element->bottom);
    }
    v23 = 0;
    goto LABEL_29;
  }
  LUI_QuadCache_AddDrawListDeepCachedElement(localClientNum, element);
LABEL_97:
  if ( v43.m_rttHandle )
  {
    LUI_Render_PopRTT((const LocalClientNum_t)v43.m_localClientNum);
    return;
  }
  if ( v43.m_usePostFX )
  {
    v38 = 1;
  }
  else if ( v43.m_usePostFXLite )
  {
    v38 = 2;
  }
  else if ( v43.m_usePostFXComposite )
  {
    v38 = 3;
  }
  else if ( v43.m_useLowresOverlay )
  {
    v38 = 4;
  }
  else if ( v43.m_pixelgridOverlay )
  {
    v38 = 5;
  }
  else
  {
    if ( !v43.m_useRegularList )
      return;
    v38 = 0;
  }
  LUI_Render_PopCustomList((const LocalClientNum_t)v43.m_localClientNum, v38);
}

/*
==============
LUIElement_CalculateGlobalRectangle
==============
*/
void LUIElement_CalculateGlobalRectangle(LUIElement *element, LUIAnimationState *animationState)
{
  LUIElement *parent; 
  float v3; 
  LUIElement *v4; 
  float v5; 

  parent = element->parent;
  if ( parent )
  {
    v3 = animationState->position.x.anchors[1];
    animationState->position.x.global[0] = (float)((float)((float)(1.0 - animationState->position.x.anchors[0]) * parent->currentAnimationState.position.x.global[0]) + (float)(animationState->position.x.anchors[0] * parent->currentAnimationState.position.x.global[1])) + animationState->position.x.offsets[0];
    animationState->position.x.global[1] = (float)((float)((float)(1.0 - v3) * parent->currentAnimationState.position.x.global[1]) + (float)(v3 * parent->currentAnimationState.position.x.global[0])) + animationState->position.x.offsets[1];
    v4 = element->parent;
    v5 = animationState->position.y.anchors[1];
    animationState->position.y.global[0] = (float)((float)((float)(1.0 - animationState->position.y.anchors[0]) * v4->currentAnimationState.position.y.global[0]) + (float)(animationState->position.y.anchors[0] * v4->currentAnimationState.position.y.global[1])) + animationState->position.y.offsets[0];
    animationState->position.y.global[1] = (float)((float)((float)(1.0 - v5) * v4->currentAnimationState.position.y.global[1]) + (float)(v5 * v4->currentAnimationState.position.y.global[0])) + animationState->position.y.offsets[1];
  }
}

/*
==============
LUIElement_CalculateRTTHandledElementGlobalRectangle
==============
*/
void LUIElement_CalculateRTTHandledElementGlobalRectangle(LUIElement *element)
{
  LUIElement *parent; 

  if ( element->rttHandle )
  {
    parent = element->parent;
    _XMM0 = LODWORD(element->currentAnimationState.position.x.anchors[1]);
    __asm { vcmpltss xmm1, xmm0, dword ptr [rcx+10h] }
    _XMM2 = LODWORD(FLOAT_N1_0);
    _XMM0 = LODWORD(element->currentAnimationState.position.y.anchors[1]);
    __asm
    {
      vblendvps xmm4, xmm2, xmm3, xmm1
      vcmpltss xmm1, xmm0, dword ptr [rcx+28h]
      vblendvps xmm5, xmm2, xmm3, xmm1
    }
    element->currentAnimationState.position.x.global[0] = (float)(*(float *)&_XMM4 * parent->currentAnimationState.position.x.global[0]) + element->currentAnimationState.position.x.global[0];
    element->currentAnimationState.position.x.global[1] = (float)(*(float *)&_XMM4 * parent->currentAnimationState.position.x.global[0]) + element->currentAnimationState.position.x.global[1];
    element->currentAnimationState.position.y.global[0] = (float)(*(float *)&_XMM5 * parent->currentAnimationState.position.y.global[0]) + element->currentAnimationState.position.y.global[0];
    element->currentAnimationState.position.y.global[1] = (float)(*(float *)&_XMM5 * parent->currentAnimationState.position.y.global[0]) + element->currentAnimationState.position.y.global[1];
  }
}

/*
==============
LUIElement_DefaultLayout
==============
*/
void LUIElement_DefaultLayout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  bool canCacheLayout; 
  char v9; 
  LUIElement *firstChild; 
  bool v11; 
  unsigned int v12; 

  LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
  canCacheLayout = element->canCacheLayout;
  v9 = 1;
  firstChild = element->firstChild;
  v11 = canCacheLayout;
  element->layoutDeeplyCached = canCacheLayout;
  if ( firstChild )
  {
    do
    {
      LUIElement_Layout(localClientNum, firstChild, unitScale, deltaTime, luaVM);
      v9 &= firstChild->layoutDeeplyCached;
      firstChild = firstChild->nextSibling;
    }
    while ( firstChild );
    canCacheLayout = element->layoutDeeplyCached;
    v11 = element->canCacheLayout;
  }
  v12 = (unsigned int)element->usageFlags >> 1;
  element->layoutCached = v11;
  element->layoutDeeplyCached = v9 & canCacheLayout & ~(_BYTE)v12 & 1;
}

/*
==============
LUIElement_GetID
==============
*/
const char *LUIElement_GetID(LUIElement *element, lua_State *luaVM)
{
  int v4; 
  const char *v5; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 474, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  LUI_PushViaWeakReference(element, luaVM);
  v4 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v4 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( !v4 )
    return 0i64;
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_getfield(luaVM, -1, (const char *)&valueOut);
  if ( j_lua_isstring(luaVM, -1) )
    v5 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v5 = "MissingElementID";
  j_lua_settop(luaVM, -3);
  return v5;
}

/*
==============
LUIElement_GetPath
==============
*/
signed __int64 LUIElement_GetPath(LUIElement *element, lua_State *luaVM, unsigned __int64 bufferSize, char *outBuffer)
{
  char *v5; 
  LUIElement *parent; 
  char *v10; 
  const char *v11; 
  __int64 v12; 
  int v13; 

  v5 = outBuffer;
  parent = element->parent;
  if ( parent )
  {
    v10 = &outBuffer[LUIElement_GetPath(parent, luaVM, bufferSize, outBuffer)];
    if ( bufferSize <= v10 - outBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 459, ASSERT_TYPE_ASSERT, "(bufferSize > static_cast<size_t>( outBuffer - startBuffer ))", (const char *)&queryFormat, "bufferSize > static_cast<size_t>( outBuffer - startBuffer )") )
      __debugbreak();
    *v10 = 46;
    v5 = v10 + 1;
  }
  v11 = NULL;
  LUI_PushViaWeakReference(element, luaVM);
  v12 = -1i64;
  v13 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v13 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v13 )
  {
    LUI_PutElementOnTopOfStack(element, luaVM);
    j_lua_getfield(luaVM, -1, (const char *)&valueOut);
    if ( j_lua_isstring(luaVM, -1) )
      v11 = j_lua_tolstring(luaVM, -1, NULL);
    else
      v11 = "MissingElementID";
    j_lua_settop(luaVM, -3);
  }
  Core_strcpy(v5, bufferSize + outBuffer - v5, v11);
  while ( v11[++v12] != 0 )
    ;
  return v5 - outBuffer + v12;
}

/*
==============
LUIElement_IsImageLike
==============
*/
bool LUIElement_IsImageLike(const LUIElement *element)
{
  return (element->usageFlags & 0x80) == 0;
}

/*
==============
LUIElement_IsTextLike
==============
*/
bool LUIElement_IsTextLike(const LUIElement *element)
{
  return (element->usageFlags & 0x80) != 0;
}

/*
==============
LUIElement_Layout
==============
*/
void LUIElement_Layout(const LocalClientNum_t localClientNum, LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  __int64 v5; 
  LUIElement *parent; 
  bool v11; 
  int ControllerFromClient; 
  float v13; 
  float v14; 
  float v15; 
  void (__fastcall *layoutFunction)(const LocalClientNum_t, LUIElement *, float, int, lua_State *); 
  bool canCacheLayout; 
  char v18; 
  LUIElement *firstChild; 
  bool v20; 
  unsigned int v21; 
  int v22; 
  int width; 
  int height; 
  float aspect; 

  if ( element )
  {
    parent = element->parent;
    if ( parent && !parent->layoutCached )
      element->layoutCached = 0;
    if ( !element->layoutDeeplyCached || !element->layoutCached )
    {
      v11 = 0;
      if ( (element->usageFlags & 0x20) != 0 )
        v11 = (element->currentAnimationState.flags & 1) == 0;
      element->currentAnimationState.flags |= 1u;
      if ( (element->currentAnimationState.flags & 0x10) != 0 )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        deltaTime = LUI_CoD_GetRootDataForController(ControllerFromClient)->deltaGameTime;
      }
      if ( element->rttHandle )
      {
        CL_GetScreenDimensions(&width, &height, &aspect);
        v13 = (float)width / (float)height;
        if ( v13 >= 1.7777778 )
        {
          v15 = FLOAT_720_0;
          v14 = v13 * 720.0;
        }
        else
        {
          v14 = FLOAT_1280_0;
          v15 = 1280.0 / v13;
        }
        if ( (float)(v14 / v15) >= 1.7777778 )
          unitScale = 1080.0 / v15;
        else
          unitScale = 1920.0 / v14;
      }
      layoutFunction = element->layoutFunction;
      if ( layoutFunction )
      {
        ((void (__fastcall *)(_QWORD, LUIElement *, __int64, _QWORD, lua_State *))layoutFunction)((unsigned int)localClientNum, element, v5, (unsigned int)deltaTime, luaVM);
      }
      else
      {
        LUIElement_UpdateLayout(element, unitScale, deltaTime, luaVM);
        canCacheLayout = element->canCacheLayout;
        v18 = 1;
        firstChild = element->firstChild;
        v20 = canCacheLayout;
        element->layoutDeeplyCached = canCacheLayout;
        if ( firstChild )
        {
          do
          {
            LUIElement_Layout(localClientNum, firstChild, unitScale, deltaTime, luaVM);
            v18 &= firstChild->layoutDeeplyCached;
            firstChild = firstChild->nextSibling;
          }
          while ( firstChild );
          canCacheLayout = element->layoutDeeplyCached;
          v20 = element->canCacheLayout;
        }
        v21 = (unsigned int)element->usageFlags >> 1;
        element->layoutCached = v20;
        element->layoutDeeplyCached = v18 & canCacheLayout & ~(_BYTE)v21 & 1;
      }
      if ( v11 )
      {
        Sys_EnterCriticalSection(CRITSECT_LUI);
        if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
          __debugbreak();
        ++g_lui_lock_level;
        s_ownerThreadMain = Sys_IsMainThread();
        s_ownerThreadServer = Sys_IsServerThread();
        g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
        if ( luaVM )
        {
          LUI_CoD_SetCurrentLocalClient(localClientNum);
          LUI_PushViaWeakReference(element, luaVM);
          v22 = j_lua_type(luaVM, -1);
          j_lua_settop(luaVM, -2);
          if ( !v22 )
            LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
          if ( v22 )
          {
            LUI_PutElementOnTopOfStack(element, luaVM);
            j_lua_getfield(luaVM, -1, "m_eventHandlers");
            j_lua_getfield(luaVM, -1, "layout_initialized");
            if ( j_lua_type(luaVM, -1) )
            {
              j_lua_pushvalue(luaVM, -3);
              j_lua_createtable(luaVM, 0, 0);
              LuaShared_SetTableString((const char *)&stru_143C9A1A4, "layout_initialized", luaVM);
              LUI_EndEvent(2, luaVM);
            }
            else
            {
              j_lua_settop(luaVM, -4);
            }
          }
        }
        LUI_LeaveCriticalSection();
      }
    }
  }
}

/*
==============
LUIElement_LayoutChildren
==============
*/
__int64 LUIElement_LayoutChildren(LocalClientNum_t localClientNum, LUIElement *firstChild, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *v6; 
  unsigned __int8 i; 

  v6 = firstChild;
  for ( i = 1; v6; v6 = v6->nextSibling )
  {
    LUIElement_Layout(localClientNum, v6, unitScale, deltaTime, luaVM);
    i &= v6->layoutDeeplyCached;
  }
  return i;
}

/*
==============
LUIElement_SetDimensions
==============
*/
void LUIElement_SetDimensions(LUIElement *element, float unitScale)
{
  float v2; 
  float Px; 

  v2 = unitScale * element->currentAnimationState.position.x.global[0];
  element->top = unitScale * element->currentAnimationState.position.y.global[0];
  element->right = unitScale * element->currentAnimationState.position.x.global[1];
  element->bottom = unitScale * element->currentAnimationState.position.y.global[1];
  element->left = v2;
  Px = v2;
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7620, ASSERT_TYPE_ASSERT, "(!isnan( element->left ))", (const char *)&queryFormat, "!isnan( element->left )") )
    __debugbreak();
  Px = element->right;
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7621, ASSERT_TYPE_ASSERT, "(!isnan( element->right ))", (const char *)&queryFormat, "!isnan( element->right )") )
    __debugbreak();
  Px = element->top;
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7622, ASSERT_TYPE_ASSERT, "(!isnan( element->top ))", (const char *)&queryFormat, "!isnan( element->top )") )
    __debugbreak();
  Px = element->bottom;
  if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7623, ASSERT_TYPE_ASSERT, "(!isnan( element->bottom ))", (const char *)&queryFormat, "!isnan( element->bottom )") )
    __debugbreak();
}

/*
==============
LUIElement_UndoTransform
==============
*/
void LUIElement_UndoTransform(LUIElement *element, lua_State *luaVM)
{
  if ( element->parallaxAmount )
    LUI_Render_PopParallaxEnabled();
  if ( element->currentAnimationState.scale != 0.0 )
    LUI_Matrix_Pop();
  if ( (element->usageFlags & 4) != 0 )
  {
    if ( element->depth != 0.0 )
      LUI_Matrix_Pop();
    if ( element->xRot != 0.0 )
      LUI_Matrix_Pop();
    if ( element->yRot != 0.0 )
      LUI_Matrix_Pop();
  }
  if ( element->currentAnimationState.zRot != 0.0 )
    LUI_Matrix_Pop();
}

/*
==============
LUIElement_UpdateLayout
==============
*/
void LUIElement_UpdateLayout(LUIElement *element, float unitScale, int deltaTime, lua_State *luaVM)
{
  LUIElement *parent; 
  float v7; 
  float v8; 
  float v16; 
  float v17; 
  float v18; 
  float Px; 

  if ( !element->layoutCached )
  {
    parent = element->parent;
    if ( parent )
    {
      v7 = element->currentAnimationState.position.x.anchors[1];
      element->currentAnimationState.position.x.global[0] = (float)((float)((float)(1.0 - element->currentAnimationState.position.x.anchors[0]) * parent->currentAnimationState.position.x.global[0]) + (float)(element->currentAnimationState.position.x.anchors[0] * parent->currentAnimationState.position.x.global[1])) + element->currentAnimationState.position.x.offsets[0];
      element->currentAnimationState.position.x.global[1] = (float)((float)((float)(1.0 - v7) * parent->currentAnimationState.position.x.global[1]) + (float)(v7 * parent->currentAnimationState.position.x.global[0])) + element->currentAnimationState.position.x.offsets[1];
      v8 = element->currentAnimationState.position.y.anchors[1];
      element->currentAnimationState.position.y.global[0] = (float)((float)((float)(1.0 - element->currentAnimationState.position.y.anchors[0]) * parent->currentAnimationState.position.y.global[0]) + (float)(element->currentAnimationState.position.y.anchors[0] * parent->currentAnimationState.position.y.global[1])) + element->currentAnimationState.position.y.offsets[0];
      element->currentAnimationState.position.y.global[1] = (float)((float)((float)(1.0 - v8) * parent->currentAnimationState.position.y.global[1]) + (float)(v8 * parent->currentAnimationState.position.y.global[0])) + element->currentAnimationState.position.y.offsets[1];
    }
    if ( element->rttHandle )
    {
      _XMM0 = LODWORD(element->currentAnimationState.position.x.anchors[1]);
      __asm { vcmpltss xmm1, xmm0, dword ptr [rcx+10h] }
      _XMM2 = LODWORD(FLOAT_N1_0);
      _XMM0 = LODWORD(element->currentAnimationState.position.y.anchors[1]);
      __asm
      {
        vblendvps xmm3, xmm2, xmm4, xmm1
        vcmpltss xmm1, xmm0, dword ptr [rcx+28h]
        vblendvps xmm4, xmm2, xmm4, xmm1
      }
      element->currentAnimationState.position.x.global[0] = (float)(*(float *)&_XMM3 * parent->currentAnimationState.position.x.global[0]) + element->currentAnimationState.position.x.global[0];
      element->currentAnimationState.position.x.global[1] = (float)(*(float *)&_XMM3 * parent->currentAnimationState.position.x.global[0]) + element->currentAnimationState.position.x.global[1];
      v16 = (float)(*(float *)&_XMM4 * parent->currentAnimationState.position.y.global[0]) + element->currentAnimationState.position.y.global[0];
      Px = *(float *)&_XMM3;
      element->currentAnimationState.position.y.global[0] = v16;
      v17 = (float)(*(float *)&_XMM4 * parent->currentAnimationState.position.y.global[0]) + element->currentAnimationState.position.y.global[1];
      element->currentAnimationState.position.y.global[1] = v17;
      Px = *(float *)&_XMM4;
    }
    else
    {
      v17 = element->currentAnimationState.position.y.global[1];
      v16 = element->currentAnimationState.position.y.global[0];
    }
    v18 = unitScale * element->currentAnimationState.position.x.global[0];
    element->top = v16 * unitScale;
    element->left = v18;
    element->right = unitScale * element->currentAnimationState.position.x.global[1];
    element->bottom = v17 * unitScale;
    Px = v18;
    if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7620, ASSERT_TYPE_ASSERT, "(!isnan( element->left ))", (const char *)&queryFormat, "!isnan( element->left )") )
      __debugbreak();
    Px = element->right;
    if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7621, ASSERT_TYPE_ASSERT, "(!isnan( element->right ))", (const char *)&queryFormat, "!isnan( element->right )") )
      __debugbreak();
    Px = element->top;
    if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7622, ASSERT_TYPE_ASSERT, "(!isnan( element->top ))", (const char *)&queryFormat, "!isnan( element->top )") )
      __debugbreak();
    Px = element->bottom;
    if ( _fdtest(&Px) == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7623, ASSERT_TYPE_ASSERT, "(!isnan( element->bottom ))", (const char *)&queryFormat, "!isnan( element->bottom )") )
      __debugbreak();
  }
}

/*
==============
LUI_AddBulletHitMarker
==============
*/
void LUI_AddBulletHitMarker(const LocalClientNum_t *localClientNum, int victim, const char *tagName, const vec3_t *impactPosition, bool armorHit, bool isPenetrating)
{
  lua_State *v6; 
  __int64 v8; 

  v6 = LUI_luaVM;
  v8 = victim;
  if ( LUI_BeginEvent(*localClientNum, "add_bullet_hit_marker", LUI_luaVM) )
  {
    LuaShared_SetTableInt("victimEntityNum", v8, v6);
    LuaShared_SetTableNumber("impactPositionX", impactPosition->v[0], v6);
    LuaShared_SetTableNumber("impactPositionY", impactPosition->v[1], v6);
    LuaShared_SetTableNumber("impactPositionZ", impactPosition->v[2], v6);
    LuaShared_SetTableString("tagName", tagName, v6);
    LuaShared_SetTableBool("armorHit", armorHit, v6);
    LuaShared_SetTableBool("isPenetrating", isPenetrating, v6);
    LUI_EndEvent(3, v6);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_AddMenu
==============
*/
void LUI_AddMenu(int controllerIndex, const char *menuName, lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "addmenu", luaVM) )
  {
    LuaShared_SetTableString("menu", menuName, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_BeginCachedEvent
==============
*/
char LUI_BeginCachedEvent(LocalClientNum_t localClient, LUIEventCache cachedEvent, lua_State *luaVM)
{
  __int64 v4; 
  int ControllerFromClient; 
  const char *RootNameForController; 

  v4 = cachedEvent;
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( luaVM )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClient);
    RootNameForController = LUI_CoD_GetRootNameForController(ControllerFromClient);
    LUI_CoD_SetCurrentLocalClient(localClient);
    j_lua_getfield(luaVM, -10002, "LUI");
    j_lua_getfield(luaVM, -1, "roots");
    j_lua_getfield(luaVM, -1, RootNameForController);
    j_lua_getfield(luaVM, -1, "processEvent");
    j_lua_pushvalue(luaVM, -2);
    j_lua_getfield(luaVM, -10002, "LUI");
    j_lua_getfield(luaVM, -1, "CachedEvents");
    j_lua_getfield(luaVM, -1, s_cachedEventNames[v4]);
    j_lua_insert(luaVM, -3);
    j_lua_settop(luaVM, -3);
    return 1;
  }
  else
  {
    LUI_LeaveCriticalSection();
    return 0;
  }
}

/*
==============
LUI_BeginEvent
==============
*/
char LUI_BeginEvent(LocalClientNum_t localClient, const char *eventName, lua_State *luaVM)
{
  int ControllerFromClient; 
  const char *RootNameForController; 

  Sys_ProfBeginNamedEvent(0xFFA52A2A, eventName);
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( luaVM )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClient);
    RootNameForController = LUI_CoD_GetRootNameForController(ControllerFromClient);
    LUI_CoD_SetCurrentLocalClient(localClient);
    j_lua_getfield(luaVM, -10002, "LUI");
    j_lua_getfield(luaVM, -1, "roots");
    if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9095, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
      __debugbreak();
    j_lua_getfield(luaVM, -1, RootNameForController);
    if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9097, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
      __debugbreak();
    j_lua_getfield(luaVM, -1, "processEvent");
    if ( j_lua_type(luaVM, -1) != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9099, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 6))", (const char *)&queryFormat, "lua_isfunction( luaVM, -1 )") )
      __debugbreak();
    j_lua_pushvalue(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    LuaShared_SetTableString((const char *)&stru_143C9A1A4, eventName, luaVM);
    Sys_ProfEndNamedEvent();
    return 1;
  }
  else
  {
    LUI_LeaveCriticalSection();
    Sys_ProfEndNamedEvent();
    return 0;
  }
}

/*
==============
LUI_BeginEventWithElement
==============
*/
char LUI_BeginEventWithElement(LocalClientNum_t localClient, LUIElement *element, const char *eventName, lua_State *luaVM)
{
  int v8; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( luaVM )
  {
    LUI_CoD_SetCurrentLocalClient(localClient);
    LUI_PushViaWeakReference(element, luaVM);
    v8 = j_lua_type(luaVM, -1);
    j_lua_settop(luaVM, -2);
    if ( !v8 )
      LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
    if ( v8 )
    {
      LUI_PutElementOnTopOfStack(element, luaVM);
      j_lua_getfield(luaVM, -1, "m_eventHandlers");
      j_lua_getfield(luaVM, -1, eventName);
      if ( j_lua_type(luaVM, -1) )
      {
        j_lua_pushvalue(luaVM, -3);
        j_lua_createtable(luaVM, 0, 0);
        LuaShared_SetTableString((const char *)&stru_143C9A1A4, eventName, luaVM);
        return 1;
      }
      j_lua_settop(luaVM, -4);
    }
  }
  LUI_LeaveCriticalSection();
  return 0;
}

/*
==============
LUI_BeginEventWithRoot
==============
*/
char LUI_BeginEventWithRoot(LocalClientNum_t localClient, LUIElement *root, const char *eventName, lua_State *luaVM)
{
  int v9; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( luaVM )
  {
    LUI_CoD_SetCurrentLocalClient(localClient);
    LUI_PushViaWeakReference(root, luaVM);
    v9 = j_lua_type(luaVM, -1);
    j_lua_settop(luaVM, -2);
    if ( !v9 )
      LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9165, ASSERT_TYPE_ASSERT, "(LUI_ElementHasWeakTableEntry( root, luaVM ))", "%s\n\t%s: Root element isn't in the weak table?", "LUI_ElementHasWeakTableEntry( root, luaVM )", "LUI_BeginEventWithRoot") )
      __debugbreak();
    LUI_PutElementOnTopOfStack(root, luaVM);
    j_lua_getfield(luaVM, -1, "processEvent");
    j_lua_pushvalue(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    LuaShared_SetTableString((const char *)&stru_143C9A1A4, eventName, luaVM);
    return 1;
  }
  else
  {
    LUI_LeaveCriticalSection();
    return 0;
  }
}

/*
==============
LUI_BeginTable
==============
*/
void LUI_BeginTable(const char *key, int narr, int nrec, lua_State *luaVM)
{
  j_lua_pushstring(luaVM, key);
  j_lua_createtable(luaVM, narr, nrec);
}

/*
==============
LUI_BeginTable
==============
*/
void LUI_BeginTable(const char *key, lua_State *luaVM)
{
  j_lua_pushstring(luaVM, key);
  j_lua_createtable(luaVM, 0, 0);
}

/*
==============
LUI_BeginTable
==============
*/
void LUI_BeginTable(__int64 key, int narr, int nrec, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_createtable(luaVM, narr, nrec);
}

/*
==============
LUI_BeginTable
==============
*/
void LUI_BeginTable(__int64 key, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_createtable(luaVM, 0, 0);
}

/*
==============
LUI_BrPingAckMessage
==============
*/
void LUI_BrPingAckMessage(const LocalClientNum_t *localClientNum, const int clientNum, const int ownerClientNum, const int messageType, const int pingParam, const char *const stringParam, const GfxImage *const iconParam, lua_State *const luaVM)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  const char *name; 
  const char *v12; 

  v8 = ownerClientNum;
  v9 = clientNum;
  v10 = messageType;
  if ( LUI_BeginEvent(*localClientNum, "br_ping_ack", luaVM) )
  {
    LuaShared_SetTableInt("client", v9, LUI_luaVM);
    LuaShared_SetTableInt("owner", v8, LUI_luaVM);
    LuaShared_SetTableInt("messageType", v10, LUI_luaVM);
    LuaShared_SetTableInt("messageParam", pingParam, LUI_luaVM);
    name = (char *)&queryFormat.fmt + 3;
    v12 = (char *)&queryFormat.fmt + 3;
    if ( stringParam )
      v12 = stringParam;
    LuaShared_SetTableString("string", v12, LUI_luaVM);
    if ( iconParam )
      name = iconParam->name;
    LuaShared_SetTableString("icon", name, LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_BrSquadMessage
==============
*/
void LUI_BrSquadMessage(const LocalClientNum_t *localClientNum, const int messageType, const int param1, const int param2, lua_State *luaVM)
{
  unsigned __int8 v5; 
  char v6; 

  v5 = param1;
  v6 = messageType;
  if ( LUI_BeginEvent(*localClientNum, "br_squad_message", luaVM) )
  {
    LuaShared_SetTableInt((const char *)&stru_143CE7590, v6 & 0xF | (unsigned __int64)(16 * ((param2 << 8) | v5)), LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_BrSquadMessageCustom
==============
*/
void LUI_BrSquadMessageCustom(const LocalClientNum_t *localClientNum, const int messageType, const char *const stringParam, const GfxImage *const iconParam, const int param1, lua_State *luaVM)
{
  char v7; 
  const char *name; 
  const char *v10; 

  v7 = messageType;
  if ( LUI_BeginEvent(*localClientNum, "br_squad_message", luaVM) )
  {
    LuaShared_SetTableInt((const char *)&stru_143CE7590, v7 & 0xF | (unsigned __int64)(16 * (unsigned int)(unsigned __int8)param1), LUI_luaVM);
    name = (char *)&queryFormat.fmt + 3;
    v10 = (char *)&queryFormat.fmt + 3;
    if ( stringParam )
      v10 = stringParam;
    LuaShared_SetTableString("string", v10, LUI_luaVM);
    if ( iconParam )
      name = iconParam->name;
    LuaShared_SetTableString("icon", name, LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_BuildDrawList
==============
*/
void LUI_BuildDrawList(const LocalClientNum_t localClientNum, LUIRootData *rootData, lua_State *luaVM)
{
  float v6; 
  tmat44_t<vec4_t> *v7; 
  LUIElement *RootElement; 
  bool outDynamicRendering; 

  s_isInBuildDrawList = 1;
  s_currentMatrix = 0;
  LUI_Matrix_LoadIdentity(s_matrixStack);
  v6 = 1.0 / rootData->pixelAspectRatio;
  v7 = &s_matrixStack[(__int64)++s_currentMatrix];
  LUI_Matrix_BuildScaleMatrix(v6, 1.0, 1.0, v7);
  LUI_Render_ClearStencilStack();
  RootElement = LUI_GetRootElement(rootData->name, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8415, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  LUI_Render_Reset(localClientNum);
  LUI_Render_PushUnitScale(rootData->unitScale);
  LUIElement_BuildDrawList(localClientNum, RootElement, RootElement, rootData, luaVM, 1.0, 1.0, 1.0, 1.0, &outDynamicRendering);
  if ( LUI_IsParallaxEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8425, ASSERT_TYPE_ASSERT, "(!LUI_IsParallaxEnabled())", (const char *)&queryFormat, "!LUI_IsParallaxEnabled()") )
    __debugbreak();
  LUI_Render_Reset(localClientNum);
  s_isInBuildDrawList = 0;
}

/*
==============
LUI_CalculateGlobalPosition
==============
*/
void LUI_CalculateGlobalPosition(LUIElementAxisPosition *parentPosition, LUIElementAxisPosition *position)
{
  float v2; 

  v2 = position->anchors[1];
  position->global[0] = (float)((float)((float)(1.0 - position->anchors[0]) * parentPosition->global[0]) + (float)(position->anchors[0] * parentPosition->global[1])) + position->offsets[0];
  position->global[1] = (float)((float)((float)(1.0 - v2) * parentPosition->global[1]) + (float)(v2 * parentPosition->global[0])) + position->offsets[1];
}

/*
==============
LUI_ClearStrongReference
==============
*/
void LUI_ClearStrongReference(void *key, lua_State *luaVM)
{
  j_lua_pushlightuserdata(luaVM, key);
  j_lua_pushnil(luaVM);
  j_lua_settable(luaVM, -10000);
}

/*
==============
LUI_CreateRoot
==============
*/
void LUI_CreateRoot(const int controllerIndex, LUIRootData *rootData, const float left, const float top, const float right, const float bottom, const float pixelAspectRatio, lua_State *luaVM)
{
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  LUIElement *v12; 

  v9 = controllerIndex;
  j_lua_getfield(luaVM, -10002, "LUI");
  j_lua_getfield(luaVM, -1, "UIRoot");
  j_lua_getfield(luaVM, -1, "new");
  if ( (int)v9 < 0 )
    j_lua_pushnil(luaVM);
  else
    j_lua_pushinteger(luaVM, v9);
  j_lua_pushstring(luaVM, rootData->name);
  if ( j_lua_pcall(luaVM, 2, 0, 0) )
  {
    v10 = j_lua_tolstring(luaVM, -1, NULL);
    v11 = j_lua_tolstring(luaVM, -1, NULL);
    j_lua_settop(luaVM, -2);
    LUI_ReportErrorWithInfo("Error while creating UI root:\n", v11, luaVM);
    Sys_Error((const ObfuscateErrorText)&stru_144462A28, v10);
  }
  j_lua_settop(luaVM, -3);
  j_lua_getfield(luaVM, -10002, "LUI");
  j_lua_getfield(luaVM, -1, "roots");
  j_lua_getfield(luaVM, -1, rootData->name);
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8661, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
  v12 = LUI_ToElement(luaVM, -1);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8664, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  rootData->root = v12;
  v12->customElementData = rootData;
  j_lua_settop(luaVM, -4);
  LUI_Resize(rootData->name, left, top, right, bottom, pixelAspectRatio, luaVM);
}

/*
==============
LUI_CreateStrongReference
==============
*/
void LUI_CreateStrongReference(void *key, lua_State *luaVM)
{
  j_lua_pushlightuserdata(luaVM, key);
  j_lua_pushvalue(luaVM, -2);
  j_lua_settable(luaVM, -10000);
}

/*
==============
LUI_CreateWeakReference
==============
*/
void LUI_CreateWeakReference(void *key, lua_State *luaVM)
{
  j_lua_rawgeti(luaVM, -10000, s_weakRefTable);
  j_lua_pushlightuserdata(luaVM, key);
  j_lua_pushvalue(luaVM, -3);
  j_lua_settable(luaVM, -3);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_DumpAllocatedElements
==============
*/
void LUI_DumpAllocatedElements(bool showUnallocated)
{
  unsigned int MaxElements; 
  unsigned int v3; 
  LUIUserDataPool<LUIElement,0,4500> *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  char dest[4096]; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  MaxElements = LUI_Interface_GetMaxElements();
  Com_Printf(16, "==== Element Pool Dump BEGIN ====\n   Elements allocated: %d / %d\n", (unsigned int)s_LUIAllocatedElements, MaxElements);
  v3 = 0;
  v4 = &s_LUIElementPool;
  v5 = 4500i64;
  do
  {
    LUI_PushViaWeakReference(v4, LUI_luaVM);
    if ( j_lua_isuserdata(LUI_luaVM, -1) )
    {
      j_lua_settop(LUI_luaVM, -2);
      v6 = Com_sprintf<4096>((char (*)[4096])dest, "[%d] ", v3);
      v7 = v6;
      if ( (unsigned int)v6 >= 0x1000 )
      {
        LODWORD(v11) = 4096;
        LODWORD(v10) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6784, ASSERT_TYPE_ASSERT, "(unsigned)( usedBuffLen ) < (unsigned)( sizeof( elemNameBuff ) )", "usedBuffLen doesn't index sizeof( elemNameBuff )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      v8 = LUI_DumpElementIdChainToBuffer_r(LUI_luaVM, v4->m_pool, &dest[v7], 4096 - v7);
      v9 = (char *)&queryFormat.fmt + 3;
      if ( v8 < 0 )
        v9 = "(truncated)";
      Com_Printf(16, "%s %s\n", dest, v9);
    }
    else
    {
      j_lua_settop(LUI_luaVM, -2);
      if ( showUnallocated )
        Com_Printf(16, "[%d] <unallocated>\n", v3);
    }
    v4 = (LUIUserDataPool<LUIElement,0,4500> *)((char *)v4 + 320);
    ++v3;
    --v5;
  }
  while ( v5 );
  Com_Printf(16, "==== Element Pool Dump END ====\n");
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_DumpElementIdChainToBuffer_r
==============
*/
__int64 LUI_DumpElementIdChainToBuffer_r(lua_State *const luaVM, LUIElement *const elem, char *const buffer, const unsigned __int64 bufSize)
{
  LUIElement *parent; 
  int v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  char *v12; 
  int v13; 
  const char *v14; 
  __int64 result; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6730, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !elem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6731, ASSERT_TYPE_ASSERT, "(elem)", (const char *)&queryFormat, "elem") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6732, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  parent = elem->parent;
  v9 = 0;
  if ( parent )
  {
    v9 = LUI_DumpElementIdChainToBuffer_r(luaVM, parent, buffer, bufSize);
    if ( v9 < 0 )
      return 0xFFFFFFFFi64;
  }
  if ( v9 + 2 >= bufSize )
    return 0xFFFFFFFFi64;
  if ( elem->parent )
  {
    v10 = v9++;
    buffer[v10] = 46;
  }
  v11 = bufSize - v9;
  v12 = &buffer[v9];
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6693, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6695, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  LUI_PushViaWeakReference(elem, luaVM);
  if ( j_lua_isuserdata(LUI_luaVM, -1) )
  {
    j_lua_getfield(luaVM, -1, "_typeName");
    if ( j_lua_isstring(luaVM, -1) || (j_lua_settop(luaVM, -2), j_lua_getfield(luaVM, -1, (const char *)&valueOut), j_lua_isstring(luaVM, -1)) )
      v14 = j_lua_tolstring(luaVM, -1, NULL);
    else
      v14 = "<anonymous>";
    v13 = Com_sprintf_truncate(v12, v11, (const char *)&queryFormat, v14);
    j_lua_settop(luaVM, -3);
  }
  else
  {
    j_lua_settop(luaVM, -2);
    v13 = Com_sprintf_truncate(v12, v11, (const char *)&queryFormat, "<unallocated>");
  }
  result = (unsigned int)(v13 + v9);
  if ( v13 < 0 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
LUI_DumpStack
==============
*/
void LUI_DumpStack(void)
{
  int v0; 
  int i; 
  char buffer[512]; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( LUI_luaVM )
  {
    v0 = j_lua_gettop(LUI_luaVM);
    LUI_Interface_DebugPrint("LUI_DumpStack() : luaVM = %p\n", LUI_luaVM);
    LUI_Interface_DebugPrint("There are %d item(s) on the LUI stack.\n", (unsigned int)v0);
    if ( v0 > 0 )
    {
      for ( i = 1; i <= v0; ++i )
      {
        LUI_GetLuaTypeData(LUI_luaVM, i, buffer, 0x200ui64);
        LUI_Interface_DebugPrint((const char *)&queryFormat, buffer);
      }
    }
  }
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_DumpStackToBuffer
==============
*/
unsigned __int64 LUI_DumpStackToBuffer(lua_State *const luaVM, char *const buffer, const unsigned __int64 bufSize)
{
  unsigned __int64 v6; 
  int v7; 
  int LuaTypeData; 
  unsigned __int64 result; 
  __int64 v10; 
  __int64 v11; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7018, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7019, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !bufSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7020, ASSERT_TYPE_ASSERT, "(bufSize)", (const char *)&queryFormat, "bufSize") )
    __debugbreak();
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  v6 = 0i64;
  v7 = j_lua_gettop(luaVM);
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v6 >= (unsigned int)bufSize )
      {
        LODWORD(v11) = bufSize;
        LODWORD(v10) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7028, ASSERT_TYPE_ASSERT, "(unsigned)( writtenBufSize ) < (unsigned)( bufSize )", "writtenBufSize doesn't index bufSize\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      LuaTypeData = LUI_GetLuaTypeData(luaVM, v7, &buffer[v6], bufSize - v6);
      if ( LuaTypeData < 0 )
        break;
      v6 += LuaTypeData;
      if ( v6 >= bufSize )
        break;
      if ( --v7 <= 0 )
        goto LABEL_22;
    }
    v6 = bufSize - 1;
  }
LABEL_22:
  LUI_LeaveCriticalSection();
  if ( (unsigned int)v6 >= (unsigned int)bufSize )
  {
    LODWORD(v11) = bufSize;
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7038, ASSERT_TYPE_ASSERT, "(unsigned)( writtenBufSize ) < (unsigned)( bufSize )", "writtenBufSize doesn't index bufSize\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  result = v6;
  buffer[v6] = 0;
  return result;
}

/*
==============
LUI_DumpTweens
==============
*/
void LUI_DumpTweens(lua_State *luaVM)
{
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  LUI_Interface_DebugPrint("======================================\n LUI TWEENS:\n");
  if ( luaVM )
    LUI_Model_DebugIterTweens(luaVM);
  else
    LUI_Interface_DebugPrint("TWEEN DEBUGGING FAILED, LUAVM = Null \n");
  LUI_Interface_DebugPrint("======================================\n");
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_ElementHasWeakTableEntry
==============
*/
_BOOL8 LUI_ElementHasWeakTableEntry(LUIElement *element, lua_State *luaVM)
{
  int v3; 

  LUI_PushViaWeakReference(element, luaVM);
  v3 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v3 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  return v3 != 0;
}

/*
==============
LUI_EmergencyFullGC
==============
*/
void LUI_EmergencyFullGC(lua_State *luaVM, const char *const fmt, ...)
{
  char dest[4104]; 
  va_list va; 

  va_start(va, fmt);
  Sys_ProfBeginNamedEvent(0xFF0000FF, "LUI_EmergencyFullGC");
  Com_vsprintf_truncate(dest, 0x1000ui64, 0x1000ui64, fmt, va);
  __rdtsc();
  LUI_CoD_CollectGarbage(luaVM, 0);
  __rdtsc();
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  Com_PrintWarning(13, "LUI EmergencyFullGC over %4.3f ms: %s\n", *(double *)&_XMM0 * msecPerRawTimerTick, dest);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_EndEvent
==============
*/
bool LUI_EndEvent(int elementsToPop, lua_State *luaVM)
{
  int v4; 
  int v5; 
  bool v6; 
  const char *v8; 

  v4 = LuaShared_PCall(luaVM, 2, 1);
  v5 = ~elementsToPop;
  if ( v4 )
  {
    v8 = j_lua_tolstring(luaVM, -1, NULL);
    j_lua_settop(luaVM, -2);
    LUI_ReportErrorWithInfo("Error processing event\n", v8, luaVM);
    j_lua_settop(luaVM, v5);
    LUI_HandleLuaError(v4);
    return 0;
  }
  else
  {
    v6 = j_lua_toboolean(luaVM, -1) == 1;
    j_lua_settop(luaVM, -2);
    j_lua_settop(luaVM, v5);
    return v6;
  }
}

/*
==============
LUI_EndEvent
==============
*/
_BOOL8 LUI_EndEvent(lua_State *luaVM)
{
  bool v1; 

  v1 = LUI_EndEvent(3, luaVM);
  LUI_LeaveCriticalSection();
  return v1;
}

/*
==============
LUI_EndEventWithElement
==============
*/
void LUI_EndEventWithElement(lua_State *luaVM)
{
  LUI_EndEvent(2, luaVM);
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_EndEventWithRoot
==============
*/
void LUI_EndEventWithRoot(lua_State *luaVM)
{
  LUI_EndEvent(1, luaVM);
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_EndTable
==============
*/
void LUI_EndTable(lua_State *luaVM)
{
  j_lua_settable(luaVM, -3);
}

/*
==============
LUI_EnterCriticalSection
==============
*/
void LUI_EnterCriticalSection(const char *functionNameIn)
{
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
}

/*
==============
LUI_ErrorCleanup
==============
*/
void LUI_ErrorCleanup(const int lockLevel)
{
  int i; 
  bool v3; 

  LUI_Workers_SetPendingComError(0);
  if ( s_ownerThreadMain || s_ownerThreadServer )
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6935, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    for ( i = g_lui_lock_level; g_lui_lock_level > lockLevel; i = g_lui_lock_level )
    {
      v3 = i <= 0;
      if ( i < 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6865, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
          __debugbreak();
        i = g_lui_lock_level;
        v3 = g_lui_lock_level <= 0;
      }
      if ( v3 )
      {
        if ( Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6884, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ) == false)", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI ) == false") )
          __debugbreak();
      }
      else
      {
        g_lui_lock_level = i - 1;
        if ( i == 1 )
        {
          s_ownerThreadMain = 0;
          s_ownerThreadServer = 0;
          g_lui_last_lockingThread = THREAD_CONTEXT_COUNT;
        }
        Sys_LeaveCriticalSection(CRITSECT_LUI);
      }
    }
  }
}

/*
==============
LUI_GameMessage
==============
*/
void LUI_GameMessage(int controllerIndex, const char *message, bool bold, lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "game_message", luaVM) )
  {
    LuaShared_SetTableString("message", message, LUI_luaVM);
    LuaShared_SetTableBool("bold", bold, LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_GetAlignment
==============
*/
__int64 LUI_GetAlignment(LUIHorizontalAlignment horizontalAlignment, LUIVerticalAlignment verticalAlignment)
{
  return (unsigned __int8)(horizontalAlignment | (4 * verticalAlignment));
}

/*
==============
LUI_GetAllocatedElements
==============
*/
__int64 LUI_GetAllocatedElements()
{
  return (unsigned int)s_LUIAllocatedElements;
}

/*
==============
LUI_GetCurrentMenuTransform
==============
*/
tmat44_t<vec4_t> *LUI_GetCurrentMenuTransform()
{
  int v0; 
  __int64 v2; 
  int v3; 

  if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 387, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v0 = s_currentMatrix;
  if ( (unsigned int)s_currentMatrix >= 0x20 )
  {
    v3 = 32;
    LODWORD(v2) = s_currentMatrix;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( s_currentMatrix ) < (unsigned)( LUI_MAX_MATRICES )", "s_currentMatrix doesn't index LUI_MAX_MATRICES\n\t%i not in [0, %i)", v2, v3) )
      __debugbreak();
    v0 = s_currentMatrix;
  }
  return &s_matrixStack[(__int64)v0];
}

/*
==============
LUI_GetCurrentParallaxMatrix
==============
*/
void LUI_GetCurrentParallaxMatrix(float parallaxAmount, tmat44_t<vec4_t> *outMatrix)
{
  LUI_Matrix_Copy(s_parallaxMatrix, outMatrix);
  outMatrix->m[0].v[3] = parallaxAmount * outMatrix->m[0].v[3];
  outMatrix->m[1].v[3] = parallaxAmount * outMatrix->m[1].v[3];
  outMatrix->m[2].v[3] = parallaxAmount * outMatrix->m[2].v[3];
}

/*
==============
LUI_GetHorizontalAlignment
==============
*/
__int64 LUI_GetHorizontalAlignment(char alignment)
{
  return alignment & 3;
}

/*
==============
LUI_GetLuaTypeData
==============
*/
int LUI_GetLuaTypeData(lua_State *const luaVM, const int index, char *const buffer, const unsigned __int64 bufSize)
{
  int v8; 
  int result; 
  int v10; 
  const char *v11; 
  const GfxImage *v12; 
  const char **p_name; 
  double v14; 
  const char *v15; 
  void *v16; 
  int v17; 
  int v18; 

  v8 = j_lua_type(luaVM, index);
  switch ( v8 )
  {
    case -1:
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TNONE\n", (unsigned int)index);
      break;
    case 0:
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TNIL\n", (unsigned int)index);
      break;
    case 1:
      v10 = j_lua_toboolean(luaVM, index);
      v11 = "false";
      if ( v10 )
        v11 = "true";
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TBOOLEAN %s\n", (unsigned int)index, v11);
      break;
    case 2:
      v12 = (const GfxImage *)j_lua_touserdata(luaVM, index);
      p_name = &v12->name;
      if ( v12 && DB_IsImageInPool(v12) )
        result = Com_sprintf_truncate(buffer, bufSize, "%d: TLIGHTUSERDATA %p (gfxImage) %s\n", (unsigned int)index, p_name, *p_name);
      else
        result = Com_sprintf_truncate(buffer, bufSize, "%d: TLIGHTUSERDATA %p (unknown)\n", (unsigned int)index, p_name);
      break;
    case 3:
      v14 = lua_tonumber32(luaVM, index);
      v17 = lua_tointeger32(luaVM, index);
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TNUMBER (int=%d, float=%f)\n", (unsigned int)index, v17, *(float *)&v14);
      break;
    case 4:
      v15 = j_lua_tolstring(luaVM, index, NULL);
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TSTRING \"%s\"\n", (unsigned int)index, v15);
      break;
    case 5:
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TTABLE\n", (unsigned int)index);
      break;
    case 6:
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TFUNCTION\n", (unsigned int)index);
      break;
    case 7:
      v16 = j_lua_touserdata(luaVM, index);
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TUSERDATA %p\n", (unsigned int)index, v16);
      break;
    case 8:
      result = Com_sprintf_truncate(buffer, bufSize, "%d: TTHREAD\n", (unsigned int)index);
      break;
    default:
      v18 = v8;
      result = Com_sprintf_truncate(buffer, bufSize, "%d: <%d>\n", (unsigned int)index, v18);
      break;
  }
  return result;
}

/*
==============
LUI_GetMousePosition
==============
*/
void LUI_GetMousePosition(const char *rootName, float x, float y, float *xResult, float *yResult, lua_State *luaVM)
{
  const LUIElement *RootElement; 
  LUIRootData *RootData; 
  float v9; 
  float height; 

  RootElement = LUI_GetRootElement(rootName, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 611, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(RootElement);
  v9 = y / (float)(RootData->bottom - RootData->top);
  height = RootData->height;
  *xResult = (float)((float)(x / (float)(RootData->right - RootData->left)) * (float)((float)(RootData->width * 0.5) - (float)(RootData->width * -0.5))) + (float)(RootData->width * -0.5);
  *yResult = (float)((float)((float)(height * 0.5) - (float)(height * -0.5)) * v9) + (float)(height * -0.5);
}

/*
==============
LUI_GetRootData
==============
*/
LUIRootData *LUI_GetRootData(const char *rootName, lua_State *luaVM)
{
  const LUIElement *RootElement; 

  RootElement = LUI_GetRootElement(rootName, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 611, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  return LUI_GetRootData(RootElement);
}

/*
==============
LUI_GetRootData
==============
*/
LUIRootData *LUI_GetRootData(const LUIElement *root)
{
  if ( root->customElementData )
    return (LUIRootData *)root->customElementData;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 603, ASSERT_TYPE_ASSERT, "(root->customElementData)", (const char *)&queryFormat, "root->customElementData") )
    __debugbreak();
  return (LUIRootData *)root->customElementData;
}

/*
==============
LUI_GetRootElement
==============
*/
LUIElement *LUI_GetRootElement(const char *rootName, lua_State *luaVM)
{
  LUIElement *v4; 

  j_lua_getfield(luaVM, -10002, "LUI");
  j_lua_getfield(luaVM, -1, "roots");
  j_lua_getfield(luaVM, -1, rootName);
  v4 = LUI_ToElement(luaVM, -1);
  j_lua_settop(luaVM, -4);
  return v4;
}

/*
==============
LUI_GetRootForController
==============
*/
LUIElement *LUI_GetRootForController(int controllerIndex)
{
  const char *RootNameForController; 
  LUIElement *result; 

  RootNameForController = LUI_CoD_GetRootNameForController(controllerIndex);
  result = LUI_GetRootElement(RootNameForController, LUI_luaVM);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 585, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
LUI_GetVerticalAlignment
==============
*/
__int64 LUI_GetVerticalAlignment(char alignment)
{
  return (unsigned __int8)(alignment >> 2);
}

/*
==============
LUI_GetViewInfo
==============
*/
GfxViewInfo *LUI_GetViewInfo()
{
  GfxBackEndData *v0; 

  if ( R_IsInRemoteScreenUpdate() )
    return 0i64;
  v0 = frontEndDataOut;
  if ( !frontEndDataOut || !frontEndDataOut->viewInfoCount )
    return 0i64;
  if ( !frontEndDataOut->viewInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8478, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfo)", (const char *)&queryFormat, "frontEndDataOut->viewInfo") )
      __debugbreak();
    v0 = frontEndDataOut;
  }
  return &v0->viewInfo[v0->viewInfoIndex];
}

/*
==============
LUI_HandleLuaError
==============
*/
void LUI_HandleLuaError(const int errorCode)
{
  switch ( errorCode )
  {
    case 4:
      if ( LUI_MemErrorsFatal->current.enabled )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144462E70, 521i64);
      else
        LUI_CoD_Error(4);
      break;
    case 2:
      LUI_CoD_GetCurrentLocalClient();
      LUI_CoD_Error(2);
      break;
    case 5:
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144462EA0, 522i64);
      break;
  }
}

/*
==============
LUI_Init
==============
*/
void LUI_Init(lua_State *(*createFunc)(), void (*destroyFunc)(lua_State *))
{
  unsigned int v4; 
  unsigned __int16 v5; 
  unsigned __int16 *m_poolData; 
  unsigned __int16 v7; 
  unsigned int *p_refCount; 
  int v9; 
  tmat44_t<vec4_t> *v10; 
  __int64 v11; 
  unsigned int MemoryUsedBytes; 
  lua_State *v13; 
  int MaxElements; 
  int NumSubscriptionsTotal; 
  unsigned int v16; 
  LUIMethod<LUIGlobalPackage> *v17; 
  lua_State *i; 
  unsigned int v19; 
  tmat33_t<vec3_t> *p_matrix; 

  LUI_Interface_DebugPrint("LUI: Initializing Lua internals\n");
  v4 = 0;
  s_luaInitialized = 1;
  s_LUIAllocatedElements = 0;
  s_LUI_CreateFunc = createFunc;
  s_LUI_DestroyFunc = destroyFunc;
  memset_0(&s_LUIElementPool, 0, 0x15F900ui64);
  v5 = 0;
  m_poolData = s_LUIElementPool.m_poolData;
  do
    *m_poolData++ = ++v5;
  while ( v5 < 0x1194u );
  *(_DWORD *)&s_LUIElementPool.m_firstFree = 294977536;
  s_LUIElementPool.m_lastAllocated = 4501;
  LUI_QuadCache_Initialize();
  LUI_SubscriptionsHolder_Initialize();
  v7 = 0;
  p_refCount = &s_LUISharedTextRefs[0].refCount;
  do
  {
    v9 = v7++;
    *p_refCount = 0;
    p_refCount += 2;
    *(p_refCount - 3) = v9 + 1;
  }
  while ( v7 < 0x1AF4u );
  s_LUISharedTextRefs[6899].ref = 0xFFFF;
  v10 = s_matrixStack;
  LOWORD(s_LUISharedTextRefsNextFree) = 0;
  v11 = 32i64;
  s_LUISharedTextRefThreadCheck = 0;
  do
  {
    LUI_Matrix_LoadIdentity(v10++);
    --v11;
  }
  while ( v11 );
  LUI_luaVM = s_LUI_CreateFunc();
  j_lua_atpanic(LUI_luaVM, LUI_Panic);
  j_lua_gc(LUI_luaVM, 0, 0);
  LUI_Tween_Initialize(LUI_luaVM);
  MemoryUsedBytes = LUI_CoD_GetMemoryUsedBytes();
  LUI_Interface_DebugPrint("  LUI_Tween_Initialize() [Lua Memory used: %d KB]\n", MemoryUsedBytes >> 10);
  v13 = LUI_luaVM;
  MaxElements = LUI_Interface_GetMaxElements();
  NumSubscriptionsTotal = LUI_Model_GetNumSubscriptionsTotal();
  j_lua_createtable(v13, 0, NumSubscriptionsTotal + MaxElements);
  j_lua_createtable(v13, 0, 0);
  j_lua_pushlstring(v13, "__mode", 6ui64);
  j_lua_pushlstring(v13, "v", 1ui64);
  j_lua_rawset(v13, -3);
  j_lua_setmetatable(v13, -2);
  s_weakRefTable = LUI_Ref_Monitor_AddRef(v13, -10000);
  v16 = LUI_CoD_GetMemoryUsedBytes();
  LUI_Interface_DebugPrint("  LUI_CreateWeakRefTable() [Lua Memory used: %d KB]\n", v16 >> 10);
  v17 = LUIMethod<LUIGlobalPackage>::list;
  for ( i = LUI_luaVM; v17; v17 = v17->next )
  {
    j_lua_pushstring(i, v17->name);
    j_lua_pushcclosure(i, v17->func, 0);
    j_lua_settable(i, -10002);
  }
  v19 = LUI_CoD_GetMemoryUsedBytes();
  LUI_Interface_DebugPrint("  LUI_RegisterGlobalFunctions() [Lua Memory used: %d KB]\n", v19 >> 10);
  p_matrix = &s_daltonizeData[0].matrix;
  do
  {
    if ( !LOBYTE(p_matrix[-1].row2.v[0]) )
      *p_matrix = identityMatrix33;
    if ( !LOBYTE(p_matrix[1].m[0].v[0]) )
      *(tmat33_t<vec3_t> *)((char *)p_matrix + 48) = identityMatrix33;
    v4 += 2;
    p_matrix = (tmat33_t<vec3_t> *)((char *)p_matrix + 96);
  }
  while ( v4 < 2 );
  memset_0(s_luiRefVerifyTypes, 0, sizeof(s_luiRefVerifyTypes));
}

/*
==============
LUI_Is3DTransformEnabled
==============
*/
bool LUI_Is3DTransformEnabled()
{
  if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 348, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  return s_current3DTransforms > 0;
}

/*
==============
LUI_IsInBuildDrawList
==============
*/
_BOOL8 LUI_IsInBuildDrawList()
{
  return s_isInBuildDrawList;
}

/*
==============
LUI_IsInExecDrawList
==============
*/
_BOOL8 LUI_IsInExecDrawList()
{
  return s_isInExecDrawList;
}

/*
==============
LUI_IsInitialized
==============
*/
_BOOL8 LUI_IsInitialized()
{
  return s_luaInitialized;
}

/*
==============
LUI_IsOwnerThreadMain
==============
*/
_BOOL8 LUI_IsOwnerThreadMain()
{
  return s_ownerThreadMain;
}

/*
==============
LUI_IsRenderUsingMultipleCmdLists
==============
*/
bool LUI_IsRenderUsingMultipleCmdLists()
{
  GfxBackEndData *v0; 

  if ( R_IsInRemoteScreenUpdate() )
    return 0;
  v0 = frontEndDataOut;
  if ( !frontEndDataOut || !frontEndDataOut->viewInfoCount )
    return 0;
  if ( !frontEndDataOut->viewInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8489, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfo)", (const char *)&queryFormat, "frontEndDataOut->viewInfo") )
      __debugbreak();
    v0 = frontEndDataOut;
  }
  return v0->viewInfo[v0->viewInfoIndex].displayCmds[0] != NULL;
}

/*
==============
LUI_IsScopeUIStencilEnabled
==============
*/
_BOOL8 LUI_IsScopeUIStencilEnabled()
{
  if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 355, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  return s_scopeUIStencilEnabled;
}

/*
==============
LUI_LUIElement_AddElement
==============
*/
void LUI_LUIElement_AddElement(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  LUIElement *firstChild; 
  LUIElement *prevSibling; 
  LUIElement *parent; 

  if ( self == child )
    j_luaL_error(luaVM, "Tried to add element to itself!");
  if ( child->parent )
    j_luaL_error(luaVM, "Tried to add element, but element is already added to something else!");
  if ( child->nextSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 722, ASSERT_TYPE_ASSERT, "(child->nextSibling == 0)", (const char *)&queryFormat, "child->nextSibling == NULL") )
    __debugbreak();
  if ( child->prevSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 723, ASSERT_TYPE_ASSERT, "(child->prevSibling == 0)", (const char *)&queryFormat, "child->prevSibling == NULL") )
    __debugbreak();
  child->parent = self;
  if ( LUI_LUIElement_AddStrongReference(self, child, luaVM) )
  {
    firstChild = self->firstChild;
    if ( firstChild )
    {
      if ( firstChild->prevSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 738, ASSERT_TYPE_ASSERT, "(sibling->prevSibling == 0)", (const char *)&queryFormat, "sibling->prevSibling == NULL") )
        __debugbreak();
      while ( firstChild->priority <= child->priority )
      {
        firstChild = firstChild->nextSibling;
        if ( !firstChild )
        {
          child->prevSibling = self->lastChild;
          self->lastChild->nextSibling = child;
          self->lastChild = child;
          goto LABEL_27;
        }
      }
      prevSibling = firstChild->prevSibling;
      if ( prevSibling )
      {
        child->prevSibling = prevSibling;
        prevSibling->nextSibling = child;
      }
      else
      {
        self->firstChild = child;
      }
      child->nextSibling = firstChild;
      firstChild->prevSibling = child;
    }
    else
    {
      if ( self->lastChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 731, ASSERT_TYPE_ASSERT, "(self->lastChild == 0)", (const char *)&queryFormat, "self->lastChild == NULL") )
        __debugbreak();
      self->firstChild = child;
      self->lastChild = child;
    }
LABEL_27:
    LUI_QuadCache_Element_Invalidate(self);
    LUI_Tween_InvalidateCache(self);
    parent = child->parent;
    for ( *(_WORD *)&child->layoutDeeplyCached = 0; parent; parent = parent->parent )
    {
      if ( !parent->layoutDeeplyCached )
        break;
      parent->layoutDeeplyCached = 0;
    }
  }
  else
  {
    LUI_Interface_DebugPrint("%s: Parent did not have weak table entry. Can't add child.", "LUI_LUIElement_AddElement");
  }
}

/*
==============
LUI_LUIElement_AddStrongReference
==============
*/
char LUI_LUIElement_AddStrongReference(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  int v6; 
  int v7; 
  int v8; 

  if ( child->strongLuaReference != -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 625, ASSERT_TYPE_ASSERT, "(child->strongLuaReference == (-2))", (const char *)&queryFormat, "child->strongLuaReference == LUA_NOREF") )
    __debugbreak();
  LUI_PushViaWeakReference(self, luaVM);
  v6 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v6 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( !v6 )
    return 0;
  LUI_PushViaWeakReference(child, luaVM);
  v7 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v7 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( !v7 )
    return 0;
  LUI_PutElementOnTopOfStack(self, luaVM);
  j_lua_getfield(luaVM, -1, "m_references");
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 631, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  LUI_PutElementOnTopOfStack(child, luaVM);
  if ( j_lua_type(luaVM, -1) == 4 )
    j_lua_tolstring(luaVM, -1, NULL);
  v8 = j_luaL_ref(luaVM, -2);
  child->strongLuaReference = v8;
  if ( v8 == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 635, ASSERT_TYPE_ASSERT, "(child->strongLuaReference != (-2))", (const char *)&queryFormat, "child->strongLuaReference != LUA_NOREF") )
    __debugbreak();
  if ( child->strongLuaReference == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 636, ASSERT_TYPE_ASSERT, "(child->strongLuaReference != (-1))", (const char *)&queryFormat, "child->strongLuaReference != LUA_REFNIL") )
    __debugbreak();
  j_lua_settop(luaVM, -3);
  return 1;
}

/*
==============
LUI_LUIElement_CheckUnFlagAs3D
==============
*/
void LUI_LUIElement_CheckUnFlagAs3D(LUIElement *element)
{
  if ( (element->usageFlags & 4) != 0 && COERCE_FLOAT(LODWORD(element->depth) & _xmm) <= 0.000001 && COERCE_FLOAT(LODWORD(element->xRot) & _xmm) <= 0.000001 && COERCE_FLOAT(LODWORD(element->yRot) & _xmm) <= 0.000001 )
    element->usageFlags &= ~4u;
}

/*
==============
LUI_LUIElement_FlagAs3D
==============
*/
void LUI_LUIElement_FlagAs3D(LUIElement *element)
{
  element->usageFlags |= 4u;
}

/*
==============
LUI_LUIElement_GetExclusiveController
==============
*/
__int64 LUI_LUIElement_GetExclusiveController(LUIElement *element, lua_State *luaVM)
{
  int v4; 
  double v5; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 527, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  LUI_PushViaWeakReference(element, luaVM);
  v4 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v4 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v4 )
  {
    LUI_PutElementOnTopOfStack(element, luaVM);
    j_lua_getfield(luaVM, -1, "_scoped");
    if ( j_lua_type(luaVM, -1) == 5 )
    {
      j_lua_getfield(luaVM, -1, "exclusiveController");
      v5 = lua_tonumber32(luaVM, -1);
      j_lua_settop(luaVM, -4);
      return (unsigned int)(int)*(float *)&v5;
    }
    j_lua_settop(luaVM, -3);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
LUI_LUIElement_InvalidateLayout
==============
*/
void LUI_LUIElement_InvalidateLayout(LUIElement *self)
{
  LUIElement *parent; 

  parent = self->parent;
  for ( *(_WORD *)&self->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
}

/*
==============
LUI_LUIElement_IsControllerExclusive
==============
*/
bool LUI_LUIElement_IsControllerExclusive(LUIElement *element, lua_State *luaVM)
{
  int v4; 
  bool v5; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 501, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  LUI_PushViaWeakReference(element, luaVM);
  v4 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v4 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v4 )
  {
    LUI_PutElementOnTopOfStack(element, luaVM);
    j_lua_getfield(luaVM, -1, "_scoped");
    if ( j_lua_type(luaVM, -1) == 5 )
    {
      j_lua_getfield(luaVM, -1, "isControllerExclusive");
      v5 = j_lua_toboolean(luaVM, -1) != 0;
      j_lua_settop(luaVM, -4);
      return v5;
    }
    j_lua_settop(luaVM, -3);
  }
  return 0;
}

/*
==============
LUI_LUIElement_RemoveStrongReference
==============
*/
void LUI_LUIElement_RemoveStrongReference(LUIElement *self, LUIElement *child, lua_State *luaVM)
{
  int v6; 
  int v7; 

  if ( child->strongLuaReference == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 649, ASSERT_TYPE_ASSERT, "(child->strongLuaReference != (-2))", (const char *)&queryFormat, "child->strongLuaReference != LUA_NOREF") )
    __debugbreak();
  LUI_PushViaWeakReference(self, luaVM);
  v6 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v6 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( !v6 )
    goto LABEL_14;
  LUI_PushViaWeakReference(child, luaVM);
  v7 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v7 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v7 )
  {
    LUI_PutElementOnTopOfStack(self, luaVM);
    j_lua_getfield(luaVM, -1, "m_references");
    if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 655, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
      __debugbreak();
    LUI_UnrefVerify<int (lua_State *,int)>(luaVM, -1, child->strongLuaReference, j_lua_isuserdata);
    j_luaL_unref(luaVM, -1, child->strongLuaReference);
    child->strongLuaReference = -2;
    j_lua_settop(luaVM, -3);
  }
  else
  {
LABEL_14:
    LUI_Interface_DebugPrint("%s: Either the parent or child do not have weak table entries, can't remove strong reference.", "LUI_LUIElement_RemoveStrongReference");
  }
}

/*
==============
LUI_LUIElement_SetAlpha
==============
*/
void LUI_LUIElement_SetAlpha(LUIElement *element, float alpha)
{
  if ( alpha != element->currentAnimationState.alpha )
  {
    element->currentAnimationState.alpha = alpha;
    LUI_QuadCache_Element_Invalidate(element);
  }
}

/*
==============
LUI_LUIElement_SetBottom
==============
*/
void LUI_LUIElement_SetBottom(LUIElement *element, float bottom)
{
  LUIElement *parent; 

  if ( bottom != element->currentAnimationState.position.y.offsets[1] )
  {
    parent = element->parent;
    *(_WORD *)&element->layoutDeeplyCached = 0;
    for ( element->currentAnimationState.position.y.offsets[1] = bottom; parent; parent = parent->parent )
    {
      if ( !parent->layoutDeeplyCached )
        break;
      parent->layoutDeeplyCached = 0;
    }
  }
}

/*
==============
LUI_LUIElement_SetColor
==============
*/
void LUI_LUIElement_SetColor(LUIElement *element, int color)
{
  float v2; 
  float v3; 
  float v4; 

  v2 = (float)BYTE2(color) * 0.0039215689;
  v3 = (float)BYTE1(color) * 0.0039215689;
  v4 = (float)(unsigned __int8)color * 0.0039215689;
  if ( v2 != element->currentAnimationState.red || v3 != element->currentAnimationState.green || v4 != element->currentAnimationState.blue )
  {
    element->currentAnimationState.red = v2;
    element->currentAnimationState.green = v3;
    element->currentAnimationState.blue = v4;
    LUI_QuadCache_Element_Invalidate(element);
  }
}

/*
==============
LUI_LUIElement_SetLeft
==============
*/
void LUI_LUIElement_SetLeft(LUIElement *element, float left)
{
  LUIElement *parent; 

  if ( left != element->currentAnimationState.position.x.offsets[0] )
  {
    parent = element->parent;
    *(_WORD *)&element->layoutDeeplyCached = 0;
    for ( element->currentAnimationState.position.x.offsets[0] = left; parent; parent = parent->parent )
    {
      if ( !parent->layoutDeeplyCached )
        break;
      parent->layoutDeeplyCached = 0;
    }
  }
}

/*
==============
LUI_LUIElement_SetRGB
==============
*/
void LUI_LUIElement_SetRGB(LUIElement *element, float r, float g, float b)
{
  if ( r != element->currentAnimationState.red || g != element->currentAnimationState.green || b != element->currentAnimationState.blue )
  {
    element->currentAnimationState.red = r;
    element->currentAnimationState.green = g;
    element->currentAnimationState.blue = b;
    LUI_QuadCache_Element_Invalidate(element);
  }
}

/*
==============
LUI_LUIElement_SetRight
==============
*/
void LUI_LUIElement_SetRight(LUIElement *element, float right)
{
  LUIElement *parent; 

  if ( right != element->currentAnimationState.position.x.offsets[1] )
  {
    parent = element->parent;
    *(_WORD *)&element->layoutDeeplyCached = 0;
    for ( element->currentAnimationState.position.x.offsets[1] = right; parent; parent = parent->parent )
    {
      if ( !parent->layoutDeeplyCached )
        break;
      parent->layoutDeeplyCached = 0;
    }
  }
}

/*
==============
LUI_LUIElement_SetScale
==============
*/
void LUI_LUIElement_SetScale(LUIElement *element, float scale)
{
  if ( scale != element->currentAnimationState.scale )
  {
    element->currentAnimationState.scale = scale;
    LUI_QuadCache_Element_Invalidate(element);
  }
}

/*
==============
LUI_LUIElement_SetText
==============
*/
__int64 LUI_LUIElement_SetText(LUIElement *element, const char *text, lua_State *luaVM)
{
  char v6; 
  LUISharedTextRefIndex v7; 
  const char *v8; 

  if ( !text && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2174, ASSERT_TYPE_ASSERT, "(text)", (const char *)&queryFormat, "text") )
    __debugbreak();
  v6 = 1;
  if ( (element->usageFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2177, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v7 = *(unsigned __int16 *)element->textData.textRef;
  if ( (_WORD)v7 == INVALID_INDEX )
    goto LABEL_16;
  LUI_SharedTextRef_PushRefOnStack(luaVM, v7);
  if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2181, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v8 = j_lua_tolstring(luaVM, -1, NULL);
  if ( !v8 || I_strncmp(text, v8, 0x7FFFFFFFui64) )
  {
    LUI_SharedTextRef_RemoveRef(luaVM, (const LUISharedTextRefIndex)*(unsigned __int16 *)element->textData.textRef);
    *(_WORD *)element->textData.textRef = -1;
  }
  else
  {
    v6 = 0;
  }
  j_lua_settop(luaVM, -2);
  if ( v6 )
  {
LABEL_16:
    R_TextValidatePrintable(text);
    j_lua_pushstring(luaVM, text);
    *(_WORD *)element->textData.textRef = LUI_SharedTextRef_CreateRef(luaVM);
    LUI_QuadCache_Element_Invalidate(element);
  }
  return 0i64;
}

/*
==============
LUI_LUIElement_SetTop
==============
*/
void LUI_LUIElement_SetTop(LUIElement *element, float top)
{
  LUIElement *parent; 

  if ( top != element->currentAnimationState.position.y.offsets[0] )
  {
    parent = element->parent;
    *(_WORD *)&element->layoutDeeplyCached = 0;
    for ( element->currentAnimationState.position.y.offsets[0] = top; parent; parent = parent->parent )
    {
      if ( !parent->layoutDeeplyCached )
        break;
      parent->layoutDeeplyCached = 0;
    }
  }
}

/*
==============
LUI_LUIElement_SetZRotation
==============
*/
void LUI_LUIElement_SetZRotation(LUIElement *element, float rotation)
{
  if ( rotation != element->currentAnimationState.zRot )
  {
    element->currentAnimationState.zRot = rotation;
    LUI_QuadCache_Element_Invalidate(element);
  }
}

/*
==============
LUI_LUIElement_UpdatePropertyBinding
==============
*/
void LUI_LUIElement_UpdatePropertyBinding(LUIElement *element, LUIDataBindingProperty bindProp, unsigned __int16 model, lua_State *luaVM)
{
  double Number; 
  int Int; 
  float v9; 
  float v10; 
  float v11; 
  double v12; 
  double v13; 
  double v14; 
  LUIElement *parent; 
  double v16; 
  LUIElement *v17; 
  double v18; 
  LUIElement *v19; 
  double v20; 
  LUIElement *v21; 
  __int64 v22; 

  if ( !element && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2304, ASSERT_TYPE_ASSERT, "(element)", (const char *)&queryFormat, "element") )
    __debugbreak();
  if ( LUI_Model_GetDataType(model) )
  {
    switch ( bindProp )
    {
      case 1:
        Number = LUI_Model_GetNumber(model);
        if ( *(float *)&Number != element->currentAnimationState.alpha )
        {
          element->currentAnimationState.alpha = *(float *)&Number;
          LUI_QuadCache_Element_Invalidate(element);
        }
        break;
      case 2:
        Int = LUI_Model_GetInt(model);
        v9 = (float)BYTE2(Int) * 0.0039215689;
        v10 = (float)BYTE1(Int) * 0.0039215689;
        v11 = (float)(unsigned __int8)Int * 0.0039215689;
        if ( v9 != element->currentAnimationState.red || v10 != element->currentAnimationState.green || v11 != element->currentAnimationState.blue )
        {
          element->currentAnimationState.red = v9;
          element->currentAnimationState.green = v10;
          element->currentAnimationState.blue = v11;
          LUI_QuadCache_Element_Invalidate(element);
        }
        break;
      case 3:
        v12 = LUI_Model_GetNumber(model);
        if ( *(float *)&v12 != element->currentAnimationState.scale )
        {
          element->currentAnimationState.scale = *(float *)&v12;
          LUI_QuadCache_Element_Invalidate(element);
        }
        break;
      case 4:
        v13 = LUI_Model_GetNumber(model);
        if ( *(float *)&v13 != element->currentAnimationState.zRot )
        {
          element->currentAnimationState.zRot = *(float *)&v13;
          LUI_QuadCache_Element_Invalidate(element);
        }
        break;
      case 5:
        v14 = LUI_Model_GetNumber(model);
        if ( *(float *)&v14 != element->currentAnimationState.position.x.offsets[0] )
        {
          element->currentAnimationState.position.x.offsets[0] = *(float *)&v14;
          parent = element->parent;
          for ( *(_WORD *)&element->layoutDeeplyCached = 0; parent; parent = parent->parent )
          {
            if ( !parent->layoutDeeplyCached )
              break;
            parent->layoutDeeplyCached = 0;
          }
        }
        break;
      case 6:
        v16 = LUI_Model_GetNumber(model);
        if ( *(float *)&v16 != element->currentAnimationState.position.x.offsets[1] )
        {
          element->currentAnimationState.position.x.offsets[1] = *(float *)&v16;
          v17 = element->parent;
          for ( *(_WORD *)&element->layoutDeeplyCached = 0; v17; v17 = v17->parent )
          {
            if ( !v17->layoutDeeplyCached )
              break;
            v17->layoutDeeplyCached = 0;
          }
        }
        break;
      case 7:
        v18 = LUI_Model_GetNumber(model);
        if ( *(float *)&v18 != element->currentAnimationState.position.y.offsets[0] )
        {
          element->currentAnimationState.position.y.offsets[0] = *(float *)&v18;
          v19 = element->parent;
          for ( *(_WORD *)&element->layoutDeeplyCached = 0; v19; v19 = v19->parent )
          {
            if ( !v19->layoutDeeplyCached )
              break;
            v19->layoutDeeplyCached = 0;
          }
        }
        break;
      case 8:
        v20 = LUI_Model_GetNumber(model);
        if ( *(float *)&v20 != element->currentAnimationState.position.y.offsets[1] )
        {
          element->currentAnimationState.position.y.offsets[1] = *(float *)&v20;
          v21 = element->parent;
          for ( *(_WORD *)&element->layoutDeeplyCached = 0; v21; v21 = v21->parent )
          {
            if ( !v21->layoutDeeplyCached )
              break;
            v21->layoutDeeplyCached = 0;
          }
        }
        break;
      default:
        LODWORD(v22) = bindProp;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2362, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected binding property: %d", v22) )
          __debugbreak();
        break;
    }
  }
}

/*
==============
LUI_Layout
==============
*/
void LUI_Layout(const LocalClientNum_t localClientNum, const char *rootName, int deltaTime, lua_State *luaVM)
{
  LUIElement *RootElement; 
  const LUIElement *v9; 
  LUIRootData *RootData; 

  Sys_ProfBeginNamedEvent(0xFF008008, "LUI_Layout");
  RootElement = LUI_GetRootElement(rootName, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7861, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  v9 = LUI_GetRootElement(rootName, luaVM);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 611, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(v9);
  if ( !RootData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7864, ASSERT_TYPE_ASSERT, "(rootData)", (const char *)&queryFormat, "rootData") )
    __debugbreak();
  LUIElement_Layout(localClientNum, RootElement, RootData->unitScale, deltaTime, luaVM);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_LeaveCriticalSection
==============
*/
void LUI_LeaveCriticalSection(void)
{
  int v0; 
  bool v1; 

  v0 = g_lui_lock_level;
  v1 = g_lui_lock_level <= 0;
  if ( g_lui_lock_level < 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6865, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
      __debugbreak();
    v0 = g_lui_lock_level;
    v1 = g_lui_lock_level <= 0;
  }
  if ( v1 )
  {
    if ( Sys_InCriticalSection(CRITSECT_LUI) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6884, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_LUI ) == false)", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_LUI ) == false") )
      __debugbreak();
  }
  else
  {
    g_lui_lock_level = v0 - 1;
    if ( v0 == 1 )
    {
      s_ownerThreadMain = 0;
      s_ownerThreadServer = 0;
      g_lui_last_lockingThread = THREAD_CONTEXT_COUNT;
    }
    Sys_LeaveCriticalSection(CRITSECT_LUI);
  }
}

/*
==============
LUI_LeaveMenu
==============
*/
void LUI_LeaveMenu(int controllerIndex, lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "leavemenu", luaVM) )
  {
    LuaShared_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_LeaveMenuById
==============
*/
void LUI_LeaveMenuById(int controllerIndex, const int menuId, int immediate, lua_State *luaVM)
{
  __int64 v5; 
  LocalClientNum_t ClientFromController; 

  v5 = menuId;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "leavemenu", luaVM) )
  {
    LuaShared_SetTableInt("menuId", v5, luaVM);
    if ( immediate )
      LuaShared_SetTableBool("immediate", 1, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_LeaveMenuByName
==============
*/
void LUI_LeaveMenuByName(int controllerIndex, const char *menuName, int immediate, lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "leavemenu", luaVM) )
  {
    LuaShared_SetTableString("menu", menuName, luaVM);
    if ( immediate )
      LuaShared_SetTableBool("immediate", 1, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_LoadLUIInitFile
==============
*/
char LUI_LoadLUIInitFile()
{
  lua_State *v0; 
  const char *v1; 
  const char *v2; 
  __int64 v3; 
  const char *v4; 
  char v5; 
  lua_State *v6; 
  int v7; 
  LUIMethod<LUIElement> *v8; 
  int i; 
  char dest[256]; 
  char _Buffer[2048]; 

  v0 = LUI_luaVM;
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  j_lua_getfield(v0, -10002, "require");
  j_lua_pushstring(v0, "ui.LUIStartup");
  if ( LuaShared_PCall(v0, 1, 0) )
  {
    v1 = j_lua_tolstring(v0, -1, NULL);
    LUI_Interface_DebugPrint("==============================\nLUI Panic error:\n  %s\n", v1);
    j_lua_checkstack(v0, 1);
    j_luaL_traceback(v0, v0, (const char *)&queryFormat.fmt + 3, 1);
    v2 = j_lua_tolstring(v0, -1, NULL);
    v3 = -1i64;
    do
      ++v3;
    while ( v2[v3] );
    if ( (unsigned __int64)(v3 + 2) <= 0x800 )
      j_sprintf(_Buffer, "%s\n%s\n", (const char *)&queryFormat.fmt + 3, v2);
    j_lua_settop(v0, -2);
    LUI_Interface_DebugPrint((const char *)&queryFormat, _Buffer);
    Com_sprintf(dest, 0x100ui64, "Failed to fully load and execute file %s\n", "ui.LUIStartup");
    v4 = j_lua_tolstring(v0, -1, NULL);
    j_lua_settop(v0, -2);
    LUI_ReportErrorWithInfo(dest, v4, v0);
    v5 = 0;
  }
  else
  {
    v5 = 1;
  }
  LUI_LeaveCriticalSection();
  if ( !v5 )
    return 0;
  v6 = LUI_luaVM;
  j_lua_getfield(LUI_luaVM, -10002, "LUI");
  j_lua_getfield(v6, -1, "UIElement");
  j_lua_createtable(v6, 0, 0);
  j_lua_createtable(v6, 0, 0);
  v7 = j_lua_gettop(v6);
  v8 = LUIMethod<LUIElement>::list;
  for ( i = v7; v8; v8 = v8->next )
  {
    j_lua_pushstring(v6, v8->name);
    j_lua_pushcclosure(v6, v8->func, 0);
    j_lua_settable(v6, i);
  }
  j_lua_setfield(v6, -2, "__index");
  j_lua_setmetatable(v6, -2);
  j_lua_settop(v6, -3);
  LUI_RegisterSubscriptionsHolderMethods(LUI_luaVM);
  return 1;
}

/*
==============
LUI_LoadLuaFile
==============
*/
char LUI_LoadLuaFile(const char *file, lua_State *luaVM)
{
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  const char *v7; 
  char dest[256]; 
  char _Buffer[2048]; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  j_lua_getfield(luaVM, -10002, "require");
  j_lua_pushstring(luaVM, file);
  if ( LuaShared_PCall(luaVM, 1, 0) )
  {
    v4 = j_lua_tolstring(luaVM, -1, NULL);
    LUI_Interface_DebugPrint("==============================\nLUI Panic error:\n  %s\n", v4);
    j_lua_checkstack(luaVM, 1);
    j_luaL_traceback(luaVM, luaVM, (const char *)&queryFormat.fmt + 3, 1);
    v5 = j_lua_tolstring(luaVM, -1, NULL);
    v6 = -1i64;
    do
      ++v6;
    while ( v5[v6] );
    if ( (unsigned __int64)(v6 + 2) <= 0x800 )
      j_sprintf(_Buffer, "%s\n%s\n", (const char *)&queryFormat.fmt + 3, v5);
    j_lua_settop(luaVM, -2);
    LUI_Interface_DebugPrint((const char *)&queryFormat, _Buffer);
    Com_sprintf(dest, 0x100ui64, "Failed to fully load and execute file %s\n", file);
    v7 = j_lua_tolstring(luaVM, -1, NULL);
    j_lua_settop(luaVM, -2);
    LUI_ReportErrorWithInfo(dest, v7, luaVM);
    LUI_LeaveCriticalSection();
    return 0;
  }
  else
  {
    LUI_LeaveCriticalSection();
    return 1;
  }
}

/*
==============
LUI_LuaCall_LUIElement_ActivateDirtyCheck
==============
*/
__int64 LUI_LuaCall_LUIElement_ActivateDirtyCheck(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "Boolean expected as second parameter to method!");
  v2 = LUI_ToElement(luaVM, 1);
  if ( v2->rttHandle )
  {
    v3 = j_lua_toboolean(luaVM, 2);
    R_RTT_ActivateDirtyCheck((LocalClientNum_t)(HIBYTE(v2->usageFlags) & 1), v2->rttHandle, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ClearLastFocus
==============
*/
__int64 LUI_LuaCall_LUIElement_ClearLastFocus(lua_State *luaVM)
{
  LUIElement *v2; 
  const LUIElement *CurrentRoot; 
  LUIRootData *RootData; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v2 = LUI_ToElement(luaVM, 1);
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  RootData = LUI_GetRootData(CurrentRoot);
  if ( RootData->lastFocusedElement == v2 )
    RootData->lastFocusedElement = NULL;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetAlpha
==============
*/
__int64 LUI_LuaCall_LUIElement_GetAlpha(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetAlpha()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = LUI_ToElement(luaVM, 1), LUI_ElementHasWeakTableEntry(v3, luaVM)) )
    j_lua_pushnumber(luaVM, v3->currentAnimationState.alpha);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetAnchorData
==============
*/
__int64 LUI_LuaCall_LUIElement_GetAnchorData(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.anchors[0]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.anchors[0]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.anchors[1]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.anchors[1]);
  if ( j_lua_gettop(luaVM) < 4 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 4i64, v3);
  }
  return 4i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetBlendMode
==============
*/
__int64 LUI_LuaCall_LUIElement_GetBlendMode(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: element:GetBlendMode()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    LUI_ToElement(luaVM, 1);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, ecx; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetCurrentAnchorsAndPositions
==============
*/
__int64 LUI_LuaCall_LUIElement_GetCurrentAnchorsAndPositions(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_GetCurrentAnchorsAndPositions_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetCurrentAnchorsAndPositions_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_GetCurrentAnchorsAndPositions_impl(lua_State *const luaVM)
{
  LUIElement *v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetCurrentAnchorsAndPositions()");
  if ( j_lua_gettop(luaVM) != 1 )
    return 0i64;
  if ( !j_lua_isuserdata(luaVM, 1) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  j_lua_createtable(luaVM, 8, 0);
  j_lua_pushstring(luaVM, "leftAnchor");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.anchors[0]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "rightAnchor");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.anchors[1]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "topAnchor");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.anchors[0]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "bottomAnchor");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.anchors[1]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "left");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.offsets[0]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "right");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.offsets[1]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "top");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.offsets[0]);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "bottom");
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.offsets[1]);
  j_lua_settable(luaVM, -3);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetCurrentFont
==============
*/
__int64 LUI_LuaCall_LUIElement_GetCurrentFont(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5119, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5120, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( (v2->usageFlags & 0x80) != 0 )
    j_lua_pushlightuserdata(luaVM, v2->textData.font);
  else
    j_lua_pushnil(luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetDepth
==============
*/
__int64 LUI_LuaCall_LUIElement_GetDepth(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: element:GetDepth()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushnumber(luaVM, v3->depth);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetFontSize
==============
*/
__int64 LUI_LuaCall_LUIElement_GetFontSize(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetFontSize()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    if ( (v3->usageFlags & 0x80) == 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
    j_lua_pushnumber(luaVM, v3->imageData.uMax);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetImage
==============
*/
__int64 LUI_LuaCall_LUIElement_GetImage(lua_State *luaVM)
{
  LUIElement *v2; 
  GfxFont *font; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2431, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 2432, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( (v2->usageFlags & 0x80) != 0 || (font = v2->textData.font) == NULL )
    j_lua_pushnil(luaVM);
  else
    j_lua_pushlightuserdata(luaVM, font);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetIsQuadCacheDisabled
==============
*/
__int64 LUI_LuaCall_LUIElement_GetIsQuadCacheDisabled(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetIsQuadCacheDisabled()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushboolean(luaVM, v3->usageFlags & 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetPagedText
==============
*/
__int64 LUI_LuaCall_LUIElement_GetPagedText(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_GetPagedText_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetPagedText_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_GetPagedText_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  const char *v3; 
  double v4; 
  int maxCharsPerPage; 
  float v6; 
  double v7; 
  const LUIElement *CurrentRoot; 
  float v9; 
  float v10; 
  float v11; 
  TextPage *v12; 
  const LUIElement *v13; 
  float unitScale; 
  LocalClientNum_t v15; 
  __int64 TextPages; 
  __int64 v17; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:GetPagedText( text, pageHeight, [maxCharsPerPage] )");
  if ( j_lua_gettop(luaVM) < 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) == 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:GetPagedText( text, pageHeight, [maxCharsPerPage] )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = lua_tonumber32(luaVM, 3);
  maxCharsPerPage = -1;
  v6 = *(float *)&v4;
  if ( j_lua_gettop(luaVM) == 4 )
  {
    v7 = lua_tonumber32(luaVM, 4);
    maxCharsPerPage = (int)*(float *)&v7;
  }
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  v9 = v6 * LUI_GetRootData(CurrentRoot)->unitScale;
  LODWORD(v10) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(*(__m128 *)v2->currentAnimationState.position.x.offsets, *(__m128 *)v2->currentAnimationState.position.x.offsets, 255).m128_f32[0] - _mm_shuffle_ps(*(__m128 *)v2->currentAnimationState.position.x.offsets, *(__m128 *)v2->currentAnimationState.position.x.offsets, 170).m128_f32[0]) & _xmm;
  LODWORD(v11) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(*(__m128 *)v2->currentAnimationState.position.y.offsets, *(__m128 *)v2->currentAnimationState.position.y.offsets, 255).m128_f32[0] - _mm_shuffle_ps(*(__m128 *)v2->currentAnimationState.position.y.offsets, *(__m128 *)v2->currentAnimationState.position.y.offsets, 170).m128_f32[0]) & _xmm;
  v12 = pagesBuffer;
  if ( v10 <= 0.0 || v11 <= 0.0 || v9 <= 0.0 || v11 > v9 )
  {
    TextPages = 0i64;
  }
  else
  {
    v13 = LUI_CoD_GetCurrentRoot(luaVM);
    unitScale = LUI_GetRootData(v13)->unitScale;
    if ( (v2->usageFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5038, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
      __debugbreak();
    if ( LUI_CoD_CanInferLocalClientAndController() )
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      v15 = localClientNum;
    }
    else
    {
      v15 = LOCAL_CLIENT_0;
      localClientNum = LOCAL_CLIENT_0;
      controllerIndex = 0;
    }
    TextPages = (unsigned int)LUI_Interface_GetTextPages(v15, v3, v2->textData.font, unitScale * v11, (int)(float)((float)(unitScale * v2->imageData.vMin) + 0.5), unitScale * v10, v9, 64, pagesBuffer, maxCharsPerPage);
  }
  j_lua_createtable(luaVM, TextPages, 0);
  if ( (int)TextPages > 0 )
  {
    v17 = 1i64;
    do
    {
      LuaShared_SetTableString(v17, v12->text, luaVM);
      ++v12;
      ++v17;
      --TextPages;
    }
    while ( TextPages );
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_GetRotation
==============
*/
__int64 LUI_LuaCall_LUIElement_GetRotation(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: element:GetRotation()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    j_lua_pushnumber(luaVM, v2->xRot);
    j_lua_pushnumber(luaVM, v2->yRot);
    j_lua_pushnumber(luaVM, v2->currentAnimationState.zRot);
    v3 = 3;
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LUI_LuaCall_LUIElement_GetScale
==============
*/
__int64 LUI_LuaCall_LUIElement_GetScale(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: element:GetScale()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushnumber(luaVM, v3->currentAnimationState.scale);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetSpacing
==============
*/
__int64 LUI_LuaCall_LUIElement_GetSpacing(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: element:GetSpacing()");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushnumber(luaVM, v3->currentAnimationState.userData);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_GetWordWrap
==============
*/
__int64 LUI_LuaCall_LUIElement_GetWordWrap(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:GetWordWrap()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushboolean(luaVM, ((unsigned int)v3->usageFlags >> 8) & 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_Is3DTransform
==============
*/
__int64 LUI_LuaCall_LUIElement_Is3DTransform(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:Is3DTransform()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    j_lua_pushboolean(luaVM, ((unsigned int)v3->usageFlags >> 2) & 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_IsClosed
==============
*/
__int64 LUI_LuaCall_LUIElement_IsClosed(lua_State *luaVM)
{
  LUIElement *parent; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: element:IsClosed()");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) && (parent = LUI_ToElement(luaVM, 1)->parent) != NULL )
  {
    LUI_PushViaWeakReference(parent, luaVM);
    v3 = j_lua_type(luaVM, -1);
    j_lua_settop(luaVM, -2);
    v4 = v3 == 0;
  }
  else
  {
    v4 = 1;
  }
  j_lua_pushboolean(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_LowResOverlay
==============
*/
__int64 LUI_LuaCall_LUIElement_LowResOverlay(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags = v2->usageFlags & 0xFFA0FFFE | 0x100001;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_PixelGridOverlayLayer
==============
*/
__int64 LUI_LuaCall_LUIElement_PixelGridOverlayLayer(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags = v2->usageFlags & 0xFFA0FFFE | 0x400001;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_PlaySequenceNative
==============
*/
__int64 LUI_LuaCall_LUIElement_PlaySequenceNative(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_PlaySequenceNative_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_PlaySequenceNative_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_PlaySequenceNative_impl(lua_State *const luaVM)
{
  unsigned int v2; 
  ntl::pair<LUIElement *,LUITween *> *v3; 
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  LUIElement *v7; 
  LUITween **p_second; 
  __int64 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  ntl::pair<LUIElement *,LUITween *> *v12; 
  __int64 v13; 
  LUITween *v14; 
  int v15; 
  LUITween *v16; 
  int v17; 
  __int64 v18; 
  ntl::pair<LUIElement *,LUITween *> *v19; 
  bool *p_isUsedTempTween; 
  __int64 v22; 
  bool v23; 
  char v24; 
  bool outInvalidatesLayout; 
  int v26; 
  LUITween **v27; 
  __int64 v28; 
  LUIElement *v29; 
  ntl::pair<LUIElement *,LUITween *> v30[8]; 
  LUITween temporaryTween[64]; 

  v28 = 1i64;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: element:PlaySequenceNative( { table of values } )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_type(luaVM, 3) != 1 )
    return 0i64;
  v2 = 0;
  v3 = v30;
  v4 = 0;
  v5 = 8i64;
  do
  {
    ntl::pair<LUIElement *,LUITween *>::pair<LUIElement *,LUITween *>(v3++);
    --v5;
  }
  while ( v5 );
  memset_0(v30, 0, sizeof(v30));
  v26 = 0;
  v6 = 0;
  v29 = LUI_ToElement(luaVM, 1);
  v7 = v29;
  v23 = j_lua_toboolean(luaVM, 3) != 0;
  j_lua_pushinteger(luaVM, 1i64);
  j_lua_gettable(luaVM, 2);
  if ( j_lua_type(luaVM, -1) )
  {
    p_second = &v30[0].second;
    v9 = 0i64;
    v27 = &v30[0].second;
    do
    {
      v10 = 0;
      j_lua_getfield(luaVM, -1, "property");
      if ( j_lua_isnumber(luaVM, -1) )
        v10 = lua_tointeger32(luaVM, -1);
      j_lua_settop(luaVM, -2);
      j_lua_getfield(luaVM, -1, "child");
      if ( j_lua_isuserdata(luaVM, -1) )
        v7 = LUI_ToElement(luaVM, -1);
      j_lua_settop(luaVM, -2);
      LUI_Tween_InterruptActiveElementTween(v7, (LUITweenProperty)v10, luaVM);
      v24 = 0;
      v11 = 0i64;
      if ( v9 > 0 )
      {
        v12 = v30;
        while ( v12->first != v7 )
        {
          ++v11;
          ++v12;
          if ( v11 >= v9 )
            goto LABEL_24;
        }
        LUI_Tween_InterruptQueuedElementTweens(v7, (LUITweenProperty)v10, v30[v11].second, luaVM);
        v24 = 1;
      }
LABEL_24:
      if ( v23 || v4 >= 0x40 )
      {
        v14 = LUI_Tween_Create(luaVM, v7);
      }
      else
      {
        v13 = v4++;
        v14 = &temporaryTween[v13];
        LUI_Tween_InitializeTemporaryTween(luaVM, v7, &temporaryTween[v13]);
      }
      if ( v14 )
      {
        v14->looping = v23;
        v14->targetProperty[0] = v10;
        j_lua_getfield(luaVM, -1, (const char *)&stru_143CE7590);
        LUI_Tween_SetEndValueInTween(v14, luaVM);
        j_lua_settop(luaVM, -2);
        LUI_Tween_SetNonZeroDefaultStartValueInTween(v14);
        j_lua_getfield(luaVM, -1, "duration");
        if ( j_lua_isnumber(luaVM, -1) )
          v14->duration = lua_tointeger32(luaVM, -1);
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "easing");
        if ( j_lua_isnumber(luaVM, -1) )
          v14->easing = lua_tointeger32(luaVM, -1);
        j_lua_settop(luaVM, -2);
        j_lua_getfield(luaVM, -1, "onComplete");
        if ( j_lua_type(luaVM, -1) == 6 )
        {
          v15 = j_lua_gettop(luaVM);
          LUI_Tween_SetOnComplete(v14, v15, luaVM);
        }
        j_lua_settop(luaVM, -2);
        if ( v14->isUsedTempTween && (v14->looping || v14->duration > 0 || v14->onCompleteRef != -2) )
        {
          v16 = v14;
          v14 = LUI_Tween_CreateFromTemporaryTween(luaVM, v14);
          if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3692, ASSERT_TYPE_ASSERT, "(tween)", (const char *)&queryFormat, "tween") )
            __debugbreak();
          v16->isUsedTempTween = 0;
          p_second = v27;
        }
        if ( !v24 )
        {
          LUI_Tween_InterruptQueuedElementTweens(v7, (LUITweenProperty)v10, NULL, luaVM);
          if ( v9 >= 8 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3710, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ran out of element/tween bookkeeping pairs in LUI::PlaySequenceNative") )
              __debugbreak();
          }
          else
          {
            ++v26;
            ++v9;
            *(p_second - 1) = (LUITween *)v7;
            *p_second = v14;
            p_second += 2;
            v27 = p_second;
          }
        }
        LUI_Tween_QueueElementTween(v7, v14, luaVM);
      }
      v17 = v28 + 1;
      v28 = (unsigned int)(v28 + 1);
      j_lua_settop(luaVM, -2);
      j_lua_pushinteger(luaVM, v17);
      j_lua_gettable(luaVM, 2);
      v7 = v29;
    }
    while ( j_lua_type(luaVM, -1) );
    v6 = v26;
  }
  j_lua_settop(luaVM, -2);
  outInvalidatesLayout = 0;
  v18 = v6;
  if ( v6 > 0 )
  {
    v19 = v30;
    do
    {
      LUI_Tween_AddFromQueue(v19->first, luaVM, v19->second, &outInvalidatesLayout);
      LUIElement_Animate(v19->first, 0, 0, 0, luaVM);
      ++v19;
      --v18;
    }
    while ( v18 );
  }
  if ( v4 > 0x40 )
  {
    LODWORD(v22) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3735, ASSERT_TYPE_ASSERT, "( temporaryTweenCount ) <= ( ( sizeof( *array_counter( temporaryTweens ) ) + 0 ) )", "temporaryTweenCount not in [0, ARRAY_COUNT( temporaryTweens )]\n\t%u not in [0, %u]", v22, 64) )
      __debugbreak();
  }
  if ( v4 )
  {
    p_isUsedTempTween = &temporaryTween[0].isUsedTempTween;
    do
    {
      if ( *p_isUsedTempTween )
        LUI_Tween_CreateFromTemporaryTween(luaVM, &temporaryTween[v2]);
      ++v2;
      p_isUsedTempTween += 1104;
    }
    while ( v2 < v4 );
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ReceivePostFX
==============
*/
__int64 LUI_LuaCall_LUIElement_ReceivePostFX(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags &= 0xFFA1FFFF;
  v2->usageFlags |= 0x10000u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ReceivePostFXComposite
==============
*/
__int64 LUI_LuaCall_LUIElement_ReceivePostFXComposite(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags = v2->usageFlags & 0xFFA0FFFE | 0x40001;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ReceivePostFXLite
==============
*/
__int64 LUI_LuaCall_LUIElement_ReceivePostFXLite(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags &= 0xFFA2FFFF;
  v2->usageFlags |= 0x20000u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_ReleaseRenderTarget
==============
*/
__int64 LUI_LuaCall_LUIElement_ReleaseRenderTarget(lua_State *luaVM)
{
  LUIElement *v2; 
  const GfxViewInfo *ViewInfo; 
  const GfxViewInfo *v4; 
  LocalClientNum_t clientIndex; 
  bool v6; 
  LocalClientNum_t v7; 
  int v8; 
  LocalClientNum_t v9; 
  const char *Name; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( v2->rttHandle )
  {
    ViewInfo = LUI_GetViewInfo();
    v4 = ViewInfo;
    if ( ViewInfo )
      clientIndex = ViewInfo->clientIndex;
    else
      clientIndex = LOCAL_CLIENT_0;
    v6 = CL_GetLocalClientActiveCount() == 2 && !LUI_CoD_InFrontend();
    if ( j_lua_gettop(luaVM) > 1 && v6 )
    {
      v7 = clientIndex;
      if ( !j_lua_isnumber(luaVM, 2) )
        j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
      v8 = lua_tointeger32(luaVM, 2);
      clientIndex = CL_Mgr_GetClientFromController(v8);
      if ( v7 != clientIndex )
      {
        v9 = v4->clientIndex;
        Name = R_RTT_GetName(v2->rttHandle);
        Com_Printf(13, "LUI_METHOD:ReleaseRenderTarget %s - frontEndData client %d != LUI controller client %d\n", Name, (unsigned int)v9, clientIndex);
      }
    }
    R_RTT_Delete(clientIndex, v2->rttHandle);
    v2->rttHandle = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v11);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_RemoveElementInC
==============
*/
__int64 LUI_LuaCall_LUIElement_RemoveElementInC(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIElement *v4; 
  LUIElement *prevSibling; 
  LUIElement *nextSibling; 
  LUIElement *parent; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  v4 = v3;
  if ( v3->parent != v2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "child->parent == self");
  if ( v3->strongLuaReference != -2 )
    LUI_LUIElement_RemoveStrongReference(v2, v3, luaVM);
  prevSibling = v4->prevSibling;
  if ( prevSibling )
  {
    prevSibling->nextSibling = v4->nextSibling;
  }
  else
  {
    if ( v2->firstChild != v4 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "self->firstChild == child");
    v2->firstChild = v4->nextSibling;
  }
  nextSibling = v4->nextSibling;
  if ( nextSibling )
  {
    nextSibling->prevSibling = v4->prevSibling;
  }
  else
  {
    if ( v2->lastChild != v4 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "self->lastChild == child");
    v2->lastChild = v4->prevSibling;
  }
  v4->parent = NULL;
  v4->prevSibling = NULL;
  v4->nextSibling = NULL;
  LUI_QuadCache_Element_Invalidate(v2);
  parent = v2->parent;
  for ( *(_WORD *)&v2->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_RootPixelsToUnits
==============
*/
__int64 LUI_LuaCall_LUIElement_RootPixelsToUnits(lua_State *luaVM)
{
  double v2; 
  float v3; 
  double v4; 
  LUIElement *v5; 
  LUIRootData *RootData; 
  float v7; 
  float v8; 
  unsigned int v9; 

  v2 = lua_tonumber32(luaVM, 2);
  v3 = *(float *)&v2;
  v4 = lua_tonumber32(luaVM, 3);
  v5 = LUI_ToElement(luaVM, 1);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4933, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(v5);
  v7 = *(float *)&v4 - v5->currentAnimationState.position.y.offsets[0];
  v8 = 1.0 / RootData->unitScale;
  j_lua_pushnumber(luaVM, (float)((float)(v3 - v5->currentAnimationState.position.x.offsets[0]) * v8));
  j_lua_pushnumber(luaVM, (float)(v7 * v8));
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v9);
  }
  return 2i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetAlignment
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAlignment(lua_State *luaVM)
{
  LUIElement *v2; 
  char v3; 
  LUIElement *parent; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3913, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3914, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3915, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  v2->currentAnimationState.alignment &= 0xFCu;
  v2->currentAnimationState.alignment |= v3;
  parent = v2->parent;
  for ( *(_WORD *)&v2->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetAlpha
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAlpha(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetAlpha_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetAlpha_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAlpha_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetAlpha( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 1;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    if ( *(float *)&v3 != v2->currentAnimationState.alpha )
    {
      v2->currentAnimationState.alpha = *(float *)&v3;
      LUI_QuadCache_Element_Invalidate(v2);
    }
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 1;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->currentAnimationState.alpha);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetAnchors
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAnchors(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetAnchors_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetAnchorsAndPosition
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAnchorsAndPosition(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetAnchorsAndPosition_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetAnchorsAndPosition_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAnchorsAndPosition_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  float v12; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  int v18; 
  LUITween *v19; 
  LUITween *v20; 
  LUITween *v21; 
  LUITween *v22; 
  LUITween *v23; 
  Easing v24; 
  LUITween *v25; 
  LUITween *v26; 
  LUITween *v27; 
  __int64 result; 
  LUITweenProperty v29; 
  LUITweenProperty v30; 
  LUITweenProperty v31; 
  LUITweenProperty v32; 
  LUITweenProperty v33; 
  LUITweenProperty v34; 
  LUITweenProperty v35; 
  LUITweenProperty v36; 
  LUITween *Px; 
  LUITween *tween; 
  LUITween *tweenToAdd; 

  if ( j_lua_gettop(luaVM) < 9 || j_lua_gettop(luaVM) > 11 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) || !j_lua_isnumber(luaVM, 7) || !j_lua_isnumber(luaVM, 8) || !j_lua_isnumber(luaVM, 9) || j_lua_gettop(luaVM) >= 10 && !j_lua_isnumber(luaVM, 10) || j_lua_gettop(luaVM) >= 11 && !j_lua_isnumber(luaVM, 11) )
    j_luaL_error(luaVM, "USAGE: element:SetAnchorsAndPosition( leftAnchor, rightAnchor, topAnchor, bottomAnchor, left, right, top, bottom, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 9 || j_lua_gettop(luaVM) > 11 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) || !j_lua_isnumber(luaVM, 6) || !j_lua_isnumber(luaVM, 7) || !j_lua_isnumber(luaVM, 8) || !j_lua_isnumber(luaVM, 9) || j_lua_gettop(luaVM) >= 10 && !j_lua_isnumber(luaVM, 10) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 11 && !j_lua_isnumber(luaVM, 11) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  v4 = *(float *)&v3;
  v5 = lua_tonumber32(luaVM, 3);
  v6 = *(float *)&v5;
  v7 = lua_tonumber32(luaVM, 4);
  v8 = *(float *)&v7;
  v9 = lua_tonumber32(luaVM, 5);
  v10 = *(float *)&v9;
  v11 = lua_tonumber32(luaVM, 6);
  v12 = *(float *)&v11;
  v13 = lua_tonumber32(luaVM, 7);
  v14 = *(float *)&v13;
  v15 = lua_tonumber32(luaVM, 8);
  v16 = *(float *)&v15;
  v17 = lua_tonumber32(luaVM, 9);
  *(float *)&Px = v4;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( leftAnchor )");
  *(float *)&Px = v6;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( rightAnchor )");
  *(float *)&Px = v8;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( topAnchor )");
  *(float *)&Px = v10;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( bottomAnchor )");
  *(float *)&Px = v12;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( left )");
  *(float *)&Px = v14;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( right )");
  *(float *)&Px = v16;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( top )");
  *(float *)&Px = *(float *)&v17;
  if ( _fdtest((float *)&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( bottom )");
  if ( j_lua_gettop(luaVM) < 10 || (v18 = lua_tointeger32(luaVM, 10), v18 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v29) = 7;
    LUI_Tween_InterruptElementTween(v2, v29, luaVM);
    LOBYTE(v30) = 8;
    LUI_Tween_InterruptElementTween(v2, v30, luaVM);
    LOBYTE(v31) = 9;
    LUI_Tween_InterruptElementTween(v2, v31, luaVM);
    LOBYTE(v32) = 10;
    LUI_Tween_InterruptElementTween(v2, v32, luaVM);
    LOBYTE(v33) = 11;
    LUI_Tween_InterruptElementTween(v2, v33, luaVM);
    LOBYTE(v34) = 12;
    LUI_Tween_InterruptElementTween(v2, v34, luaVM);
    LOBYTE(v35) = 13;
    LUI_Tween_InterruptElementTween(v2, v35, luaVM);
    LOBYTE(v36) = 14;
    LUI_Tween_InterruptElementTween(v2, v36, luaVM);
    result = 0i64;
    v2->currentAnimationState.position.x.anchors[0] = v4;
    v2->currentAnimationState.position.x.anchors[1] = v6;
    v2->currentAnimationState.position.y.anchors[0] = v8;
    v2->currentAnimationState.position.y.anchors[1] = v10;
    v2->currentAnimationState.position.x.offsets[0] = v12;
    v2->currentAnimationState.position.x.offsets[1] = v14;
    v2->currentAnimationState.position.y.offsets[0] = v16;
    v2->currentAnimationState.position.y.offsets[1] = *(float *)&v17;
  }
  else
  {
    v19 = LUI_Tween_Create(luaVM, v2);
    v20 = LUI_Tween_Create(luaVM, v2);
    v21 = LUI_Tween_Create(luaVM, v2);
    v22 = LUI_Tween_Create(luaVM, v2);
    v23 = LUI_Tween_Create(luaVM, v2);
    tweenToAdd = LUI_Tween_Create(luaVM, v2);
    tween = LUI_Tween_Create(luaVM, v2);
    Px = LUI_Tween_Create(luaVM, v2);
    if ( j_lua_gettop(luaVM) < 11 )
    {
      v25 = tweenToAdd;
      v26 = tween;
      v27 = Px;
    }
    else
    {
      v24 = (unsigned __int8)lua_tointeger32(luaVM, 11);
      v25 = tweenToAdd;
      v26 = tween;
      v27 = Px;
      v19->easing = v24;
      v20->easing = v24;
      v21->easing = v24;
      v22->easing = v24;
      v23->easing = v24;
      v25->easing = v24;
      v26->easing = v24;
      v27->easing = v24;
    }
    v19->targetProperty[0] = 7;
    v20->targetProperty[0] = 8;
    v21->targetProperty[0] = 9;
    v22->targetProperty[0] = 10;
    v23->targetProperty[0] = 11;
    v25->targetProperty[0] = 12;
    v26->targetProperty[0] = 13;
    v27->targetProperty[0] = 14;
    v19->duration = v18;
    v20->duration = v18;
    v21->duration = v18;
    v22->duration = v18;
    v23->duration = v18;
    v25->duration = v18;
    v26->duration = v18;
    v27->duration = v18;
    v19->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[0]);
    v20->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[1]);
    v21->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[0]);
    v22->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[1]);
    v23->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.offsets[0]);
    v25->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.offsets[1]);
    v26->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.offsets[0]);
    v27->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.offsets[1]);
    v19->endValue.floatValue = v4;
    v20->endValue.floatValue = v6;
    v21->endValue.floatValue = v8;
    v22->endValue.floatValue = v10;
    v23->endValue.floatValue = v12;
    v25->endValue.floatValue = v14;
    v26->endValue.floatValue = v16;
    v27->endValue.floatValue = *(float *)&v17;
    LUI_Tween_AddElementTween(v2, v19, luaVM, 0);
    LUI_Tween_AddElementTween(v2, v20, luaVM, 0);
    LUI_Tween_AddElementTween(v2, v21, luaVM, 0);
    LUI_Tween_AddElementTween(v2, v22, luaVM, 0);
    LUI_Tween_AddElementTween(v2, v23, luaVM, 0);
    LUI_Tween_AddElementTween(v2, tweenToAdd, luaVM, 0);
    LUI_Tween_AddElementTween(v2, tween, luaVM, 0);
    LUI_Tween_AddElementTween(v2, Px, luaVM, 0);
    LUI_Tween_PushOnLuaStack(Px, luaVM);
    LUI_Tween_PushOnLuaStack(tween, luaVM);
    LUI_Tween_PushOnLuaStack(tweenToAdd, luaVM);
    LUI_Tween_PushOnLuaStack(v23, luaVM);
    LUI_Tween_PushOnLuaStack(v22, luaVM);
    LUI_Tween_PushOnLuaStack(v21, luaVM);
    LUI_Tween_PushOnLuaStack(v20, luaVM);
    LUI_Tween_PushOnLuaStack(v19, luaVM);
    return 8i64;
  }
  return result;
}

/*
==============
LUI_LuaCall_LUIElement_SetAnchors_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetAnchors_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  bool v4; 
  bool v5; 
  int v6; 
  float v8; 
  float v9; 
  float v13; 
  float v17; 
  __int64 result; 
  double v25; 
  float v26; 
  double v27; 
  float v28; 
  double v29; 
  float v30; 
  double v31; 
  int v32; 
  LUITween *v33; 
  LUITween *v34; 
  LUITween *v35; 
  LUITween *v36; 
  Easing v37; 
  LUITweenProperty v38; 
  LUITweenProperty v39; 
  LUITweenProperty v40; 
  LUITweenProperty v41; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 5 || j_lua_gettop(luaVM) > 7 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 && !j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 3) != 1 && !j_lua_isnumber(luaVM, 3) || j_lua_type(luaVM, 4) != 1 && !j_lua_isnumber(luaVM, 4) || j_lua_type(luaVM, 5) != 1 && !j_lua_isnumber(luaVM, 5) || j_lua_gettop(luaVM) >= 6 && !j_lua_isnumber(luaVM, 6) || j_lua_gettop(luaVM) >= 7 && !j_lua_isnumber(luaVM, 7) )
    j_luaL_error(luaVM, "USAGE: element:SetAnchors( left, right, top, bottom, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 5 || j_lua_gettop(luaVM) > 7 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 && !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  if ( j_lua_type(luaVM, 3) != 1 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_type(luaVM, 4) != 1 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  if ( j_lua_type(luaVM, 5) != 1 && !j_lua_isnumber(luaVM, 5) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 6 && !j_lua_isnumber(luaVM, 6) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 7 && !j_lua_isnumber(luaVM, 7) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  if ( j_lua_type(luaVM, 2) == 1 )
  {
    if ( j_lua_type(luaVM, 3) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1378, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (3)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 3 )") )
      __debugbreak();
    if ( j_lua_type(luaVM, 4) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1379, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (4)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 4 )") )
      __debugbreak();
    if ( j_lua_type(luaVM, 5) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1380, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (5)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 5 )") )
      __debugbreak();
    v3 = j_lua_toboolean(luaVM, 2);
    v4 = j_lua_toboolean(luaVM, 3) == 1;
    v5 = j_lua_toboolean(luaVM, 4) == 1;
    v6 = j_lua_toboolean(luaVM, 5);
    _XMM5 = LODWORD(FLOAT_1_0);
    v8 = 0.0;
    if ( v3 == 1 )
    {
      v9 = 0.0;
    }
    else
    {
      _XMM0 = v4;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm5, xmm4, xmm2
      }
      v9 = *(float *)&_XMM0;
      Px = *(float *)&_XMM0;
    }
    v2->currentAnimationState.position.x.anchors[0] = v9;
    if ( v4 )
    {
      v13 = 0.0;
    }
    else
    {
      _XMM0 = v3 == 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm5, xmm4, xmm2
      }
      v13 = *(float *)&_XMM0;
      Px = *(float *)&_XMM0;
    }
    v2->currentAnimationState.position.x.anchors[1] = v13;
    if ( v5 )
    {
      v17 = 0.0;
    }
    else
    {
      _XMM0 = v6 == 1;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm5, xmm4, xmm2
      }
      v17 = *(float *)&_XMM0;
      Px = *(float *)&_XMM0;
    }
    v2->currentAnimationState.position.y.anchors[0] = v17;
    if ( v6 != 1 )
    {
      _XMM0 = v5;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm5, xmm4, xmm2
      }
      Px = *(float *)&_XMM0;
      v8 = *(float *)&_XMM0;
    }
    v2->currentAnimationState.position.y.anchors[1] = v8;
    return 0i64;
  }
  else
  {
    if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1393, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
      __debugbreak();
    if ( !j_lua_isnumber(luaVM, 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1394, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 3 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )") )
      __debugbreak();
    if ( !j_lua_isnumber(luaVM, 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1395, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 4 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 4 )") )
      __debugbreak();
    if ( !j_lua_isnumber(luaVM, 5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1396, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 5 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 5 )") )
      __debugbreak();
    v25 = lua_tonumber32(luaVM, 2);
    v26 = *(float *)&v25;
    v27 = lua_tonumber32(luaVM, 3);
    v28 = *(float *)&v27;
    v29 = lua_tonumber32(luaVM, 4);
    v30 = *(float *)&v29;
    v31 = lua_tonumber32(luaVM, 5);
    Px = v26;
    if ( _fdtest(&Px) > 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( leftAnchor )");
    Px = v28;
    if ( _fdtest(&Px) > 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( rightAnchor )");
    Px = v30;
    if ( _fdtest(&Px) > 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( topAnchor )");
    Px = *(float *)&v31;
    if ( _fdtest(&Px) > 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( bottomAnchor )");
    if ( j_lua_gettop(luaVM) < 6 || (v32 = lua_tointeger32(luaVM, 6), v32 <= 0) )
    {
      LUI_QuadCache_Element_Invalidate(v2);
      LOBYTE(v38) = 7;
      LUI_Tween_InterruptElementTween(v2, v38, luaVM);
      LOBYTE(v39) = 8;
      LUI_Tween_InterruptElementTween(v2, v39, luaVM);
      LOBYTE(v40) = 9;
      LUI_Tween_InterruptElementTween(v2, v40, luaVM);
      LOBYTE(v41) = 10;
      LUI_Tween_InterruptElementTween(v2, v41, luaVM);
      result = 0i64;
      v2->currentAnimationState.position.x.anchors[0] = v26;
      v2->currentAnimationState.position.x.anchors[1] = v28;
      v2->currentAnimationState.position.y.anchors[0] = v30;
      v2->currentAnimationState.position.y.anchors[1] = *(float *)&v31;
    }
    else
    {
      v33 = LUI_Tween_Create(luaVM, v2);
      v34 = LUI_Tween_Create(luaVM, v2);
      v35 = LUI_Tween_Create(luaVM, v2);
      v36 = LUI_Tween_Create(luaVM, v2);
      if ( j_lua_gettop(luaVM) >= 7 )
      {
        v37 = (unsigned __int8)lua_tointeger32(luaVM, 7);
        v33->easing = v37;
        v34->easing = v37;
        v35->easing = v37;
        v36->easing = v37;
      }
      v33->targetProperty[0] = 7;
      v34->targetProperty[0] = 8;
      v35->targetProperty[0] = 9;
      v36->targetProperty[0] = 10;
      v33->duration = v32;
      v34->duration = v32;
      v35->duration = v32;
      v36->duration = v32;
      v33->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[0]);
      v34->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[1]);
      v35->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[0]);
      v36->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[1]);
      v33->endValue.floatValue = v26;
      v34->endValue.floatValue = v28;
      v35->endValue.floatValue = v30;
      v36->endValue.floatValue = *(float *)&v31;
      LUI_Tween_AddElementTween(v2, v33, luaVM, 0);
      LUI_Tween_AddElementTween(v2, v34, luaVM, 0);
      LUI_Tween_AddElementTween(v2, v35, luaVM, 0);
      LUI_Tween_AddElementTween(v2, v36, luaVM, 0);
      LUI_Tween_PushOnLuaStack(v36, luaVM);
      LUI_Tween_PushOnLuaStack(v35, luaVM);
      LUI_Tween_PushOnLuaStack(v34, luaVM);
      LUI_Tween_PushOnLuaStack(v33, luaVM);
      return 4i64;
    }
  }
  return result;
}

/*
==============
LUI_LuaCall_LUIElement_SetBlendMode
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBlendMode(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBlendMode_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBlendMode_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBlendMode_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  char v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetBlendMode( blendMode, ?duration )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 17;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->blendMode = v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  v7->targetProperty[0] = 17;
  v7->duration = v5;
  v7->startValue.byteValue = v2->blendMode;
  v7->endValue.byteValue = v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBlurStrength
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBlurStrength(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBlurStrength_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBlurStrength_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBlurStrength_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBlurStrength( blurStrength, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 23;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->currentAnimationState.userData = *(float *)&v3;
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 23;
  v6->duration = v5;
  v6->startValue.intValue = v2->currentAnimationState.userDataInt;
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBottom
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBottom(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBottom_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBottomAnchor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBottomAnchor(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetBottomAnchor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetBottomAnchor_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBottomAnchor_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBottomAnchor( anchor, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 10;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.y.anchors[1] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 10;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[1]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetBottom_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetBottom_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetBottom( offset, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 14;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.y.offsets[1] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 14;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.offsets[1]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetColorOp
==============
*/
__int64 LUI_LuaCall_LUIElement_SetColorOp(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetColorOp_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetColorOpParam
==============
*/
__int64 LUI_LuaCall_LUIElement_SetColorOpParam(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetColorOpParam_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetColorOpParam_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetColorOpParam_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetColorOpParam( param, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 46;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->colorOp.param = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 46;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->colorOp.param);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetColorOp_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetColorOp_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  unsigned __int8 v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 
  int v8; 
  int v9; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:SetColorOp( operation, ?duration )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = j_lua_tointeger(luaVM, 2);
  if ( v3 >= 3u )
  {
    v9 = 3;
    v8 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3084, ASSERT_TYPE_ASSERT, "(unsigned)( colorOp ) < (unsigned)( LUI_COLOR_OP_COUNT )", "colorOp doesn't index LUI_COLOR_OP_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 45;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->colorOp.op = v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  v7->targetProperty[0] = 45;
  v7->duration = v5;
  v7->startValue.byteValue = v2->colorOp.op;
  v7->endValue.byteValue = v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetDepth
==============
*/
__int64 LUI_LuaCall_LUIElement_SetDepth(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetDepth_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetDepth_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetDepth_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetDepth( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( *(float *)&v3 == 0.0 )
    LUI_LUIElement_CheckUnFlagAs3D(v2);
  else
    v2->usageFlags |= 4u;
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 15;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->depth = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 15;
  v7->duration = v5;
  v7->startValue.intValue = LODWORD(v2->depth);
  v7->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetDisablePartialOpacity
==============
*/
__int64 LUI_LuaCall_LUIElement_SetDisablePartialOpacity(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_toboolean(luaVM, 2) )
    v2->usageFlags |= 0x4000000u;
  else
    v2->usageFlags &= ~0x4000000u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetFont
==============
*/
__int64 LUI_LuaCall_LUIElement_SetFont(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetFont( RegisterFont( \"fontAssetName\" ) )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isuserdata(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( (v2->usageFlags & 0x80) == 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
    v2->imageData.image = (const GfxImage *)j_lua_touserdata(luaVM, 2);
    LUI_QuadCache_Element_Invalidate(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetFontSize
==============
*/
__int64 LUI_LuaCall_LUIElement_SetFontSize(lua_State *luaVM)
{
  LUIElement *v3; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:SetFontSize( size )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = LUI_ToElement(luaVM, 1);
    if ( (v3->usageFlags & 0x80) == 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
    *(double *)&_XMM0 = lua_tonumber32(luaVM, -1);
    __asm { vmaxss  xmm1, xmm0, cs:__real@3f800000 }
    v3->imageData.uMax = *(float *)&_XMM1;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetGlitchAmount
==============
*/
__int64 LUI_LuaCall_LUIElement_SetGlitchAmount(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetGlitchAmount_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetGlitchAmount_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetGlitchAmount_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  double v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetGlitchAmount( amount, duration, easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  v4 = I_fclamp(*(float *)&v3, 0.0, 1.0);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 44;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->glitchAmount = *(float *)&v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 44;
  v7->duration = v6;
  v7->startValue.intValue = LODWORD(v2->glitchAmount);
  v7->endValue.floatValue = *(float *)&v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetGridChildDynamicSize
==============
*/
__int64 LUI_LuaCall_LUIElement_SetGridChildDynamicSize(lua_State *luaVM)
{
  unsigned int v2; 

  LUIElement_SetGridChildDynamicSize(luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetIgnoreTweenLateness
==============
*/
__int64 LUI_LuaCall_LUIElement_SetIgnoreTweenLateness(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_toboolean(luaVM, 2) )
    v2->usageFlags |= 0x800u;
  else
    v2->usageFlags &= ~0x800u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeading
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeading(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetLeading_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeading_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeading_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetLeading( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  if ( (v3->usageFlags & 0x80) == 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 33;
    LUI_Tween_InterruptElementTween(v3, v5, luaVM);
    v3->imageData.vMax = *(float *)&_XMM6;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 33;
  v7->duration = v6;
  v7->startValue.intValue = LODWORD(v3->imageData.vMax);
  v7->endValue.floatValue = *(float *)&_XMM6;
  LUI_Tween_AddElementTween(v3, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeft
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeft(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetLeft_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeftAnchor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeftAnchor(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetLeftAnchor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeftAnchor_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeftAnchor_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetLeftAnchor( anchor, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 7;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.x.anchors[0] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 7;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[0]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetLeft_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetLeft_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetLeft( offset, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 11;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.x.offsets[0] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 11;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.offsets[0]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetNotifyOnLayoutInit
==============
*/
__int64 LUI_LuaCall_LUIElement_SetNotifyOnLayoutInit(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_toboolean(luaVM, 2) )
    v2->usageFlags |= 0x20u;
  else
    v2->usageFlags &= ~0x20u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetOptOutRightToLeftAlignmentFlip
==============
*/
__int64 LUI_LuaCall_LUIElement_SetOptOutRightToLeftAlignmentFlip(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3962, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3963, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3964, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_type(luaVM, 2) == 1 && j_lua_toboolean(luaVM, 2) )
    v2->currentAnimationState.flags |= 8u;
  else
    v2->currentAnimationState.flags &= ~8u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetParallaxMotionAmount
==============
*/
__int64 LUI_LuaCall_LUIElement_SetParallaxMotionAmount(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4736, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4737, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4738, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tonumber32(luaVM, 2);
  v4 = I_fclamp(*(float *)&v3 * 0.050000001, 0.0, 1.0);
  v2->parallaxAmount = (int)(float)(*(float *)&v4 * 255.0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridBlockHeight
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridBlockHeight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetPixelGridBlockHeight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridBlockHeight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridBlockHeight_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned __int8 v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridBlockHeight( blockHeight, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  v4 = AdjustPixelSizeForResolution(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 40;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->pixelGrid.blockHeight = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 40;
  v7->duration = v6;
  v7->startValue.byteValue = v2->pixelGrid.blockHeight;
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridBlockWidth
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridBlockWidth(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetPixelGridBlockWidth_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridBlockWidth_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridBlockWidth_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned __int8 v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridBlockWidth( blockWidth, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  v4 = AdjustPixelSizeForResolution(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 39;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->pixelGrid.blockWidth = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 39;
  v7->duration = v6;
  v7->startValue.byteValue = v2->pixelGrid.blockWidth;
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridContrast
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridContrast(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetPixelGridContrast_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridContrast_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridContrast_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridContrast( contrast, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  v4 = (int)(float)(*(float *)&v3 * 255.0);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 43;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->pixelGrid.contrast = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 43;
  v7->duration = v6;
  v7->startValue.byteValue = v2->pixelGrid.contrast;
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridEnabled
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridEnabled(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 || j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridEnabled( true )");
  if ( j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 && j_lua_gettop(luaVM) == 2 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) )
      v2->usageFlags |= 0x40u;
    else
      v2->usageFlags &= ~0x40u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridGutterHeight
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridGutterHeight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetPixelGridGutterHeight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridGutterHeight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridGutterHeight_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned __int8 v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridGutterHeight( gutterHeight, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  v4 = AdjustPixelSizeForResolution(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 42;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->pixelGrid.gutterHeight = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 42;
  v7->duration = v6;
  v7->startValue.byteValue = v2->pixelGrid.gutterHeight;
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridGutterWidth
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridGutterWidth(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetPixelGridGutterWidth_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetPixelGridGutterWidth_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetPixelGridGutterWidth_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned __int8 v4; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetPixelGridGutterWidth( gutterWidth, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  v4 = AdjustPixelSizeForResolution(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 41;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v2->pixelGrid.gutterWidth = v4;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 41;
  v7->duration = v6;
  v7->startValue.byteValue = v2->pixelGrid.gutterWidth;
  v7->endValue.byteValue = v4;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetRGBFromInt
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRGBFromInt(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetRGBFromInt_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetRGBFromInt_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRGBFromInt_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  LUITweenProperty v4; 
  int v5; 
  float v6; 
  float v7; 
  float v8; 
  LUITween *v10; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRGBFromInt( colorValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tointeger32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  v6 = (float)BYTE2(v3) * 0.0039215689;
  v7 = (float)BYTE1(v3) * 0.0039215689;
  v8 = (float)(unsigned __int8)v3 * 0.0039215689;
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 2;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    if ( v6 != v2->currentAnimationState.red || v7 != v2->currentAnimationState.green || v8 != v2->currentAnimationState.blue )
    {
      v2->currentAnimationState.red = v6;
      v2->currentAnimationState.green = v7;
      v2->currentAnimationState.blue = v8;
      LUI_QuadCache_Element_Invalidate(v2);
    }
    return 0i64;
  }
  v10 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v10->easing = lua_tointeger32(luaVM, 4);
  v10->targetProperty[0] = 2;
  v10->duration = v5;
  v10->startValue.intValue = LODWORD(v2->currentAnimationState.red);
  v10->startValue.colorValue.g = v2->currentAnimationState.green;
  v10->startValue.colorValue.b = v2->currentAnimationState.blue;
  v10->endValue.floatValue = v6;
  v10->endValue.colorValue.g = v7;
  v10->endValue.colorValue.b = v8;
  LUI_Tween_AddElementTween(v2, v10, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v10, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetRGBFromTable
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRGBFromTable(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetRGBFromTable_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetRGBFromTable_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRGBFromTable_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  float v4; 
  float v5; 
  float v6; 
  double v7; 
  double v8; 
  double v9; 
  LUITweenProperty v10; 
  LUITween *v12; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRGBFromTable( colorTable, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 5 || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( j_lua_gettop(luaVM) < 3 )
    v3 = 0;
  else
    v3 = lua_tointeger32(luaVM, 3);
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  j_lua_getfield(luaVM, 2, "r");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v7 = lua_tonumber32(luaVM, -1);
    v4 = *(float *)&v7;
  }
  j_lua_getfield(luaVM, 2, "g");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v8 = lua_tonumber32(luaVM, -1);
    v5 = *(float *)&v8;
  }
  j_lua_getfield(luaVM, 2, "b");
  if ( j_lua_isnumber(luaVM, -1) )
  {
    v9 = lua_tonumber32(luaVM, -1);
    v6 = *(float *)&v9;
  }
  j_lua_settop(luaVM, -4);
  if ( v3 <= 0 )
  {
    LOBYTE(v10) = 2;
    LUI_Tween_InterruptElementTween(v2, v10, luaVM);
    if ( v4 != v2->currentAnimationState.red || v5 != v2->currentAnimationState.green || v6 != v2->currentAnimationState.blue )
    {
      v2->currentAnimationState.red = v4;
      v2->currentAnimationState.green = v5;
      v2->currentAnimationState.blue = v6;
      LUI_QuadCache_Element_Invalidate(v2);
    }
    return 0i64;
  }
  v12 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v12->easing = lua_tointeger32(luaVM, 4);
  v12->targetProperty[0] = 2;
  v12->duration = v3;
  v12->startValue.intValue = LODWORD(v2->currentAnimationState.red);
  v12->startValue.colorValue.g = v2->currentAnimationState.green;
  v12->startValue.colorValue.b = v2->currentAnimationState.blue;
  v12->endValue.floatValue = v4;
  v12->endValue.colorValue.g = v5;
  v12->endValue.colorValue.b = v6;
  LUI_Tween_AddElementTween(v2, v12, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v12, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetRight
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetRight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetRightAnchor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRightAnchor(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetRightAnchor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetRightAnchor_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRightAnchor_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRightAnchor( anchor, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 8;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.x.anchors[1] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 8;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.anchors[1]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetRight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetRight_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetRight( offset, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 12;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.x.offsets[1] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 12;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.x.offsets[1]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetScale
==============
*/
__int64 LUI_LuaCall_LUIElement_SetScale(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetScale_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetScale_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetScale_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetScale( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 3;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->currentAnimationState.scale = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 3;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->currentAnimationState.scale);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetScopeIndex
==============
*/
__int64 LUI_LuaCall_LUIElement_SetScopeIndex(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( lua_tointeger32(luaVM, 2) == 1 )
    v2->usageFlags |= 0x8000u;
  else
    v2->usageFlags &= ~0x8000u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetSpacing
==============
*/
__int64 LUI_LuaCall_LUIElement_SetSpacing(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUIElement *parent; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4222, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4223, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4224, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ) || (lua_type(luaVM, (2)) == 0))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 ) || lua_isnil( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tonumber32(luaVM, 2);
  parent = v2->parent;
  *(_WORD *)&v2->layoutDeeplyCached = 0;
  for ( v2->currentAnimationState.userData = *(float *)&v3; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetSuspendAsyncRender
==============
*/
__int64 LUI_LuaCall_LUIElement_SetSuspendAsyncRender(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetSuspendAsyncRender( bool )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) )
      v2->usageFlags |= 0x800000u;
    else
      v2->usageFlags &= ~0x800000u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetTintFontIcons
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTintFontIcons(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetTintFontIcons( bool )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) )
      v2->usageFlags |= 0x200u;
    else
      v2->usageFlags &= ~0x200u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetTop
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTop(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetTop_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetTopAnchor
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTopAnchor(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetTopAnchor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetTopAnchor_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTopAnchor_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetTopAnchor( anchor, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 9;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.y.anchors[0] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 9;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.anchors[0]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetTop_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTop_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  int v4; 
  LUITween *v5; 
  LUITweenProperty v7; 
  float Px; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetTop( offset, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  LUI_LUIElement_InvalidateLayout(v2);
  v3 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v3;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( value )");
  if ( j_lua_gettop(luaVM) < 3 || (v4 = lua_tointeger32(luaVM, 3), v4 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v7) = 13;
    LUI_Tween_InterruptElementTween(v2, v7, luaVM);
    v2->currentAnimationState.position.y.offsets[0] = *(float *)&v3;
    return 0i64;
  }
  v5 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v5->easing = lua_tointeger32(luaVM, 4);
  v5->targetProperty[0] = 13;
  v5->duration = v4;
  v5->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.offsets[0]);
  v5->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v5, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v5, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetTracking
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTracking(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetTracking_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetTracking_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetTracking_impl(lua_State *const luaVM)
{
  LUIElement *v3; 
  LUITweenProperty v5; 
  int v6; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetTracking( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v3 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v3, luaVM) )
    return 0i64;
  if ( (v3->usageFlags & 0x80) == 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  if ( j_lua_gettop(luaVM) < 3 || (v6 = lua_tointeger32(luaVM, 3), v6 <= 0) )
  {
    LOBYTE(v5) = 32;
    LUI_Tween_InterruptElementTween(v3, v5, luaVM);
    v3->imageData.vMin = *(float *)&_XMM6;
    LUI_QuadCache_Element_Invalidate(v3);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v3);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 32;
  v7->duration = v6;
  v7->startValue.intValue = LODWORD(v3->imageData.vMin);
  v7->endValue.floatValue = *(float *)&_XMM6;
  LUI_Tween_AddElementTween(v3, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetUMax
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUMax(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetUMax_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetUMax_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUMax_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetUMax( uMaxValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5337, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( self ))", (const char *)&queryFormat, "LUIElement_IsImageLike( self )") )
    __debugbreak();
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 20;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->imageData.uMax = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 20;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->imageData.uMax);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetUMin
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUMin(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetUMin_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetUMin_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUMin_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetUMin( uMinValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5279, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( self ))", (const char *)&queryFormat, "LUIElement_IsImageLike( self )") )
    __debugbreak();
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 19;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->imageData.uMin = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 19;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->imageData.uMin);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetUseGameClock
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUseGameClock(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3990, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3991, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 3992, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_type(luaVM, 2) == 1 && j_lua_toboolean(luaVM, 2) )
    v2->currentAnimationState.flags |= 0x10u;
  else
    v2->currentAnimationState.flags &= ~0x10u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetUseScopeStencil
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUseScopeStencil(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetUseScopeStencil( bool )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) )
      v2->usageFlags |= 8u;
    else
      v2->usageFlags &= ~8u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetUseSystemTime
==============
*/
__int64 LUI_LuaCall_LUIElement_SetUseSystemTime(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4019, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4020, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4021, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_type(luaVM, 2) == 1 && j_lua_toboolean(luaVM, 2) )
    v2->currentAnimationState.flags |= 0x80u;
  else
    v2->currentAnimationState.flags &= ~0x80u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetVMax
==============
*/
__int64 LUI_LuaCall_LUIElement_SetVMax(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetVMax_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetVMax_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetVMax_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetVMax( vMaxValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5451, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( self ))", (const char *)&queryFormat, "LUIElement_IsImageLike( self )") )
    __debugbreak();
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 22;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->imageData.vMax = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 22;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->imageData.vMax);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetVMin
==============
*/
__int64 LUI_LuaCall_LUIElement_SetVMin(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetVMin_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetVMin_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetVMin_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetVMin( vMinValue, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5394, ASSERT_TYPE_ASSERT, "(LUIElement_IsImageLike( self ))", (const char *)&queryFormat, "LUIElement_IsImageLike( self )") )
    __debugbreak();
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 21;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->imageData.vMin = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 21;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->imageData.vMin);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetVerticalAlignment
==============
*/
__int64 LUI_LuaCall_LUIElement_SetVerticalAlignment(lua_State *luaVM)
{
  LUIElement *v2; 
  char v3; 
  LUIElement *parent; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tointeger32(luaVM, 2);
  v2->currentAnimationState.alignment &= 3u;
  v2->currentAnimationState.alignment |= 4 * v3;
  parent = v2->parent;
  for ( *(_WORD *)&v2->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetWordWrap
==============
*/
__int64 LUI_LuaCall_LUIElement_SetWordWrap(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: element:SetWordWrap( bool )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_type(luaVM, 2) == 1 )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( j_lua_toboolean(luaVM, 2) )
      v2->usageFlags |= 0x100u;
    else
      v2->usageFlags &= ~0x100u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetXRotation
==============
*/
__int64 LUI_LuaCall_LUIElement_SetXRotation(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetXRotation_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetXRotation_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetXRotation_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetXRotation( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( *(float *)&v3 == 0.0 )
    LUI_LUIElement_CheckUnFlagAs3D(v2);
  else
    v2->usageFlags |= 4u;
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 4;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->xRot = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 4;
  v7->duration = v5;
  v7->startValue.intValue = LODWORD(v2->xRot);
  v7->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetYRotation
==============
*/
__int64 LUI_LuaCall_LUIElement_SetYRotation(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetYRotation_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetYRotation_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetYRotation_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetYRotation( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( *(float *)&v3 == 0.0 )
    LUI_LUIElement_CheckUnFlagAs3D(v2);
  else
    v2->usageFlags |= 4u;
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 5;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->yRot = *(float *)&v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v7->easing = lua_tointeger32(luaVM, 4);
  v7->targetProperty[0] = 5;
  v7->duration = v5;
  v7->startValue.intValue = LODWORD(v2->yRot);
  v7->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetZRotation
==============
*/
__int64 LUI_LuaCall_LUIElement_SetZRotation(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetZRotation_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetZRotation_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetZRotation_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  double v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v6; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) || j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: element:SetZRotation( value, ?duration, ?easing )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  if ( j_lua_gettop(luaVM) >= 4 && !j_lua_isnumber(luaVM, 4) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  v3 = lua_tonumber32(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 || (v5 = lua_tointeger32(luaVM, 3), v5 <= 0) )
  {
    LOBYTE(v4) = 6;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    if ( *(float *)&v3 != v2->currentAnimationState.zRot )
    {
      v2->currentAnimationState.zRot = *(float *)&v3;
      LUI_QuadCache_Element_Invalidate(v2);
    }
    return 0i64;
  }
  v6 = LUI_Tween_Create(luaVM, v2);
  if ( j_lua_gettop(luaVM) >= 4 )
    v6->easing = lua_tointeger32(luaVM, 4);
  v6->targetProperty[0] = 6;
  v6->duration = v5;
  v6->startValue.intValue = LODWORD(v2->currentAnimationState.zRot);
  v6->endValue.floatValue = *(float *)&v3;
  LUI_Tween_AddElementTween(v2, v6, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v6, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRenderTarget
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRenderTarget(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_SetupRenderTarget_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_SetupRenderTarget_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_SetupRenderTarget_impl(lua_State *const luaVM)
{
  __int128 v1; 
  vec4_t v2; 
  vec4_t v3; 
  vec4_t v4; 
  LUIElement *v6; 
  const char *v7; 
  int v8; 
  int v9; 
  const GfxViewInfo *ViewInfo; 
  const GfxViewInfo *v15; 
  LocalClientNum_t clientIndex; 
  bool v17; 
  LocalClientNum_t v18; 
  int v19; 
  LocalClientNum_t ClientFromController; 
  unsigned int v21; 
  unsigned __int8 v22; 
  unsigned int v23; 
  unsigned __int8 rttHandle; 
  char *fmt; 
  vec4_t v27[4]; 
  int v28; 

  v27[1] = v4;
  if ( j_lua_gettop(luaVM) < 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 5");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isstring( luaVM, 2 )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 3 )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 4 )");
  if ( !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 5 )");
  v6 = LUI_ToElement(luaVM, 1);
  v7 = j_lua_tolstring(luaVM, 2, NULL);
  v28 = lua_tointeger32(luaVM, 3);
  v8 = lua_tointeger32(luaVM, 4);
  if ( v28 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5737, ASSERT_TYPE_ASSERT, "(width <= 1024)", (const char *)&queryFormat, "width <= R_RTT_TEXTURE_MAX_WIDTH") )
    __debugbreak();
  if ( v8 > 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5738, ASSERT_TYPE_ASSERT, "(height <= 1024)", (const char *)&queryFormat, "height <= R_RTT_TEXTURE_MAX_HEIGHT") )
    __debugbreak();
  v9 = lua_tointeger32(luaVM, 5);
  _XMM8 = 0i64;
  if ( j_lua_gettop(luaVM) > 5 )
  {
    v27[3] = v2;
    v27[2] = v3;
    if ( !j_lua_isnumber(luaVM, 6) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 6 )");
    if ( !j_lua_isnumber(luaVM, 7) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 7 )");
    if ( !j_lua_isnumber(luaVM, 8) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 8 )");
    if ( !j_lua_isnumber(luaVM, 9) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 9 )");
    *(double *)&v1 = lua_tonumber32(luaVM, 6);
    _XMM8 = v1;
    lua_tonumber32(luaVM, 7);
    lua_tonumber32(luaVM, 8);
    lua_tonumber32(luaVM, 9);
    __asm
    {
      vinsertps xmm8, xmm8, xmm7, 10h
      vinsertps xmm8, xmm8, xmm6, 20h ; ' '
      vinsertps xmm8, xmm8, xmm0, 30h ; '0'
    }
  }
  ViewInfo = LUI_GetViewInfo();
  v15 = ViewInfo;
  if ( ViewInfo )
    clientIndex = ViewInfo->clientIndex;
  else
    clientIndex = LOCAL_CLIENT_0;
  v17 = CL_GetLocalClientActiveCount() == 2 && !LUI_CoD_InFrontend();
  if ( j_lua_gettop(luaVM) > 9 && v17 )
  {
    v18 = clientIndex;
    if ( !j_lua_isnumber(luaVM, 10) )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 10 )");
    v19 = lua_tointeger32(luaVM, 10);
    ClientFromController = CL_Mgr_GetClientFromController(v19);
    clientIndex = ClientFromController;
    if ( v18 != ClientFromController )
    {
      LODWORD(fmt) = ClientFromController;
      Com_Printf(13, "LUI_METHOD:SetupRenderTarget %s - fontEndData client %d != LUI controller client %d\n", v7, (unsigned int)v15->clientIndex, fmt);
    }
  }
  v27[0] = _XMM8;
  v21 = R_RTT_Create(clientIndex, v7, v28, v8, v9, v27);
  v22 = v21;
  if ( v21 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v21, "unsigned", v21) )
    __debugbreak();
  v6->rttHandle = v22;
  v23 = v6->usageFlags & 0xFEFFFFFE | 1;
  if ( clientIndex == LOCAL_CLIENT_1 )
    v23 = v6->usageFlags | 0x1000001;
  v6->usageFlags = v23;
  rttHandle = v6->rttHandle;
  if ( rttHandle )
    R_RTT_ActivateDirtyCheck(clientIndex, rttHandle, 1);
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_UseRegularDrawList
==============
*/
__int64 LUI_LuaCall_LUIElement_UseRegularDrawList(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) < 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v2->usageFlags &= 0xFFA8FFFF;
  v2->usageFlags |= 0x80000u;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_Wait
==============
*/
__int64 LUI_LuaCall_LUIElement_Wait(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  LUITween *activeTweens; 
  bool v8; 
  LUITween *v9; 
  unsigned int v10; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) < 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:Wait( duration )");
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v2 = LUI_ToElement(luaVM, 1), LUI_ElementHasWeakTableEntry(v2, luaVM)) )
  {
    v3 = lua_tointeger32(luaVM, 2);
    v4 = v3;
    if ( v3 <= 0 )
      j_luaL_error(luaVM, "Called element.Wait with a duration of %d", (unsigned int)v3);
    v5 = 0;
    if ( j_lua_gettop(luaVM) <= 2 )
      v6 = 0;
    else
      v6 = j_lua_toboolean(luaVM, 3);
    activeTweens = v2->activeTweens;
    v8 = v6 != 0;
    if ( activeTweens )
    {
      while ( activeTweens->targetProperty[0] || ++v5 != 10 )
      {
        activeTweens = activeTweens->nextTween;
        if ( !activeTweens )
          goto LABEL_18;
      }
      LUI_Tween_PushOnLuaStack(activeTweens, luaVM);
      v10 = 1;
    }
    else
    {
LABEL_18:
      v9 = LUI_Tween_Create(luaVM, v2);
      v9->targetProperty[0] = 0;
      v9->duration = v4;
      LUI_Tween_AddElementTween(v2, v9, luaVM, v8);
      LUI_Tween_PushOnLuaStack(v9, luaVM);
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( (int)v10 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v10, v11);
  }
  return v10;
}

/*
==============
LUI_LuaCall_LUIElement_addElementAfterInC
==============
*/
__int64 LUI_LuaCall_LUIElement_addElementAfterInC(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_addElementAfterInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_addElementAfterInC_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_addElementAfterInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIElement *parent; 
  LUIElement *nextSibling; 
  LUIElement *v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "AddElementAfter takes 2 parameters!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "AddElementAfter: First parameter is not an element!");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "AddElementAfter: Second parameter is not an element!");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  parent = v3->parent;
  if ( !parent )
    j_luaL_error(luaVM, "Element has no parent!");
  if ( parent == v2 )
    j_luaL_error(luaVM, "Tried to add element to itself!");
  if ( v2->parent )
    j_luaL_error(luaVM, "Tried to add element, but element is already added to something else!");
  if ( v2->nextSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 876, ASSERT_TYPE_ASSERT, "(child->nextSibling == 0)", (const char *)&queryFormat, "child->nextSibling == NULL") )
    __debugbreak();
  if ( v2->prevSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 877, ASSERT_TYPE_ASSERT, "(child->prevSibling == 0)", (const char *)&queryFormat, "child->prevSibling == NULL") )
    __debugbreak();
  v2->parent = parent;
  if ( LUI_LUIElement_AddStrongReference(parent, v2, luaVM) )
  {
    v2->nextSibling = v3->nextSibling;
    v2->prevSibling = v3;
    v3->nextSibling = v2;
    nextSibling = v2->nextSibling;
    if ( nextSibling )
      nextSibling->prevSibling = v2;
    else
      parent->lastChild = v2;
    LUI_QuadCache_Element_Invalidate(v3);
    LUI_Tween_InvalidateCache(v3);
    v6 = v2->parent;
    for ( *(_WORD *)&v2->layoutDeeplyCached = 0; v6; v6 = v6->parent )
    {
      if ( !v6->layoutDeeplyCached )
        break;
      v6->layoutDeeplyCached = 0;
    }
  }
  else
  {
    LUI_Interface_DebugPrint("%s: Parent did not have weak table entry. Can't add child.", "LUI_LuaCall_LUIElement_addElementAfterInC_impl");
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_addElementBeforeInC
==============
*/
__int64 LUI_LuaCall_LUIElement_addElementBeforeInC(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_addElementBeforeInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_addElementBeforeInC_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_addElementBeforeInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  LUIElement *parent; 
  LUIElement *prevSibling; 
  LUIElement *v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "AddElementBefore takes 2 parameters!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "AddElementBefore: First parameter is not an element!");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "AddElementBefore: Second parameter is not an element!");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  parent = v3->parent;
  if ( !parent )
    j_luaL_error(luaVM, "Element has no parent!");
  if ( parent == v2 )
    j_luaL_error(luaVM, "Tried to add element to itself!");
  if ( v2->parent )
    j_luaL_error(luaVM, "Tried to add element, but element is already added to something else!");
  if ( v2->nextSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 822, ASSERT_TYPE_ASSERT, "(child->nextSibling == 0)", (const char *)&queryFormat, "child->nextSibling == NULL") )
    __debugbreak();
  if ( v2->prevSibling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 823, ASSERT_TYPE_ASSERT, "(child->prevSibling == 0)", (const char *)&queryFormat, "child->prevSibling == NULL") )
    __debugbreak();
  v2->parent = parent;
  if ( LUI_LUIElement_AddStrongReference(parent, v2, luaVM) )
  {
    v2->nextSibling = v3;
    v2->prevSibling = v3->prevSibling;
    v3->prevSibling = v2;
    prevSibling = v2->prevSibling;
    if ( prevSibling )
      prevSibling->nextSibling = v2;
    else
      parent->firstChild = v2;
    LUI_QuadCache_Element_Invalidate(v3);
    LUI_Tween_InvalidateCache(v3);
    v6 = v2->parent;
    for ( *(_WORD *)&v2->layoutDeeplyCached = 0; v6; v6 = v6->parent )
    {
      if ( !v6->layoutDeeplyCached )
        break;
      v6->layoutDeeplyCached = 0;
    }
  }
  else
  {
    LUI_Interface_DebugPrint("%s: Parent did not have weak table entry. Can't add child.", "LUI_LuaCall_LUIElement_addElementBeforeInC_impl");
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_addElementToC
==============
*/
__int64 LUI_LuaCall_LUIElement_addElementToC(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElement *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "AddElement takes 2 parameters!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "AddElement: First parameter is not an element!");
  if ( !j_lua_isuserdata(luaVM, 2) )
    j_luaL_error(luaVM, "AddElement: Second parameter is not an element!");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = LUI_ToElement(luaVM, 2);
  LUI_LUIElement_AddElement(v2, v3, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_applyElementTransform
==============
*/
__int64 LUI_LuaCall_LUIElement_applyElementTransform(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4881, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4882, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  LUIElement_ApplyTransform(v2, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_getCurrentAlignment
==============
*/
__int64 LUI_LuaCall_LUIElement_getCurrentAlignment(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5173, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5174, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushinteger(luaVM, v2->currentAnimationState.alignment);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getCurrentGlobalRect
==============
*/
__int64 LUI_LuaCall_LUIElement_getCurrentGlobalRect(lua_State *luaVM)
{
  LUIElement *v2; 
  float *v3; 
  float v4; 
  unsigned int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = (float *)v2;
  v4 = v2->currentAnimationState.position.x.global[0];
  if ( v4 == 0.0 && v2->currentAnimationState.position.x.global[1] == 0.0 && v2->currentAnimationState.position.y.global[0] == 0.0 && v2->currentAnimationState.position.y.global[1] == 0.0 )
  {
    v5 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, v4);
    j_lua_pushnumber(luaVM, v3[8]);
    j_lua_pushnumber(luaVM, v3[3]);
    j_lua_pushnumber(luaVM, v3[9]);
    v5 = 4;
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_LuaCall_LUIElement_getCurrentRGBA
==============
*/
__int64 LUI_LuaCall_LUIElement_getCurrentRGBA(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5146, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5147, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.red);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.green);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.blue);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.alpha);
  if ( j_lua_gettop(luaVM) < 4 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 4i64, v3);
  }
  return 4i64;
}

/*
==============
LUI_LuaCall_LUIElement_getElementTextDims
==============
*/
__int64 LUI_LuaCall_LUIElement_getElementTextDims(lua_State *luaVM)
{
  const LUIElement *CurrentRoot; 
  float unitScale; 
  LUIElement *v4; 
  unsigned int v5; 
  float outWidth; 
  float outHeight; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5005, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5006, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
  unitScale = LUI_GetRootData(CurrentRoot)->unitScale;
  v4 = LUI_ToElement(luaVM, 1);
  LUI_MeasureTextElement(unitScale, v4, luaVM, &outWidth, &outHeight);
  j_lua_pushnumber(luaVM, outWidth);
  j_lua_pushnumber(luaVM, outHeight);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v5);
  }
  return 2i64;
}

/*
==============
LUI_LuaCall_LUIElement_getFirstChild
==============
*/
__int64 LUI_LuaCall_LUIElement_getFirstChild(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIElement *firstChild; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v3 = LUI_ToElement(luaVM, 1);
  firstChild = v3->firstChild;
  if ( !firstChild )
    goto LABEL_10;
  LUI_PushViaWeakReference(firstChild, luaVM);
  v5 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v5 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v5 )
    LUI_PutElementOnTopOfStack(v3->firstChild, luaVM);
  else
LABEL_10:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getHeight
==============
*/
__int64 LUI_LuaCall_LUIElement_getHeight(lua_State *luaVM)
{
  __m128 v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4759, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4760, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = *(__m128 *)LUI_ToElement(luaVM, 1)->currentAnimationState.position.y.offsets;
  j_lua_pushnumber(luaVM, COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v2, v2, 255).m128_f32[0] - _mm_shuffle_ps(v2, v2, 170).m128_f32[0]) & _xmm));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getHorizontalAlignment
==============
*/
__int64 LUI_LuaCall_LUIElement_getHorizontalAlignment(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5195, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5196, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushinteger(luaVM, v2->currentAnimationState.alignment & 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getLastChild
==============
*/
__int64 LUI_LuaCall_LUIElement_getLastChild(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIElement *lastChild; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v3 = LUI_ToElement(luaVM, 1);
  lastChild = v3->lastChild;
  if ( !lastChild )
    goto LABEL_10;
  LUI_PushViaWeakReference(lastChild, luaVM);
  v5 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v5 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v5 )
    LUI_PutElementOnTopOfStack(v3->lastChild, luaVM);
  else
LABEL_10:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getLocalRect
==============
*/
__int64 LUI_LuaCall_LUIElement_getLocalRect(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.offsets[0]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.offsets[0]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.x.offsets[1]);
  j_lua_pushnumber(luaVM, v2->currentAnimationState.position.y.offsets[1]);
  if ( j_lua_gettop(luaVM) < 4 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 4i64, v3);
  }
  return 4i64;
}

/*
==============
LUI_LuaCall_LUIElement_getNextSibling
==============
*/
__int64 LUI_LuaCall_LUIElement_getNextSibling(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIElement *nextSibling; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v3 = LUI_ToElement(luaVM, 1);
  nextSibling = v3->nextSibling;
  if ( !nextSibling )
    goto LABEL_10;
  LUI_PushViaWeakReference(nextSibling, luaVM);
  v5 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v5 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v5 )
    LUI_PutElementOnTopOfStack(v3->nextSibling, luaVM);
  else
LABEL_10:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getNumChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_getNumChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  LUIElement *i; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = 0;
  for ( i = v2->firstChild; i; ++v3 )
    i = i->nextSibling;
  j_lua_pushinteger(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getParent
==============
*/
__int64 LUI_LuaCall_LUIElement_getParent(lua_State *luaVM)
{
  unsigned int v2; 
  const char *v3; 
  __int64 v4; 
  LUIElement *v5; 
  LUIElement *parent; 
  int v7; 
  unsigned int v8; 
  char _Buffer[2048]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
  {
    j_lua_checkstack(luaVM, 1);
    j_luaL_traceback(luaVM, luaVM, "getParent", 1);
    v3 = j_lua_tolstring(luaVM, -1, NULL);
    v4 = -1i64;
    do
      ++v4;
    while ( v3[v4] );
    if ( (unsigned __int64)(v4 + 11) <= 0x800 )
      j_sprintf(_Buffer, "%s\n%s\n", "getParent", v3);
    j_lua_settop(luaVM, -2);
    LUI_Interface_DebugPrint((const char *)&queryFormat, _Buffer);
    if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1135, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
      __debugbreak();
  }
  v5 = LUI_ToElement(luaVM, 1);
  parent = v5->parent;
  if ( !parent )
    goto LABEL_16;
  LUI_PushViaWeakReference(parent, luaVM);
  v7 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v7 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v7 )
    LUI_PutElementOnTopOfStack(v5->parent, luaVM);
  else
LABEL_16:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getPreviousSibling
==============
*/
__int64 LUI_LuaCall_LUIElement_getPreviousSibling(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUIElement *prevSibling; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v3 = LUI_ToElement(luaVM, 1);
  prevSibling = v3->prevSibling;
  if ( !prevSibling )
    goto LABEL_10;
  LUI_PushViaWeakReference(prevSibling, luaVM);
  v5 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v5 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( v5 )
    LUI_PutElementOnTopOfStack(v3->prevSibling, luaVM);
  else
LABEL_10:
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getPriority
==============
*/
__int64 LUI_LuaCall_LUIElement_getPriority(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1304, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1305, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushinteger(luaVM, v2->priority);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getRect
==============
*/
__int64 LUI_LuaCall_LUIElement_getRect(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 
  float bottom; 
  unsigned int v5; 
  vec4_t inPosition; 
  vec4_t v8; 
  vec4_t outPosition; 
  vec4_t v10; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4604, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4605, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( v2->left == 0.0 && v2->top == 0.0 && v2->right == 0.0 && v2->bottom == 0.0 )
  {
    v3 = 0;
  }
  else
  {
    bottom = v2->bottom;
    *(_QWORD *)inPosition.v = *(_QWORD *)&v2->left;
    v8.v[0] = v2->right;
    inPosition.v[2] = 0.0;
    inPosition.v[3] = FLOAT_1_0;
    v8.v[1] = bottom;
    v8.v[2] = 0.0;
    v8.v[3] = FLOAT_1_0;
    LUI_Render_ApplyParallax(&inPosition, &outPosition, NULL);
    LUI_Render_ApplyParallax(&v8, &v10, NULL);
    j_lua_pushnumber(luaVM, outPosition.v[0]);
    j_lua_pushnumber(luaVM, outPosition.v[1]);
    j_lua_pushnumber(luaVM, v10.v[0]);
    j_lua_pushnumber(luaVM, v10.v[1]);
    v3 = 4;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v5);
  }
  return v3;
}

/*
==============
LUI_LuaCall_LUIElement_getText
==============
*/
__int64 LUI_LuaCall_LUIElement_getText(lua_State *luaVM)
{
  unsigned int v2; 
  LUIElement *v3; 
  LUISharedTextRefIndex v4; 
  const char *v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 1");
  v2 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  v3 = LUI_ToElement(luaVM, 1);
  if ( (v3->usageFlags & 0x80) == 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
  v4 = *(unsigned __int16 *)v3->textData.textRef;
  if ( (_WORD)v4 == INVALID_INDEX )
  {
    v2 = 0;
  }
  else
  {
    LUI_SharedTextRef_PushRefOnStack(luaVM, v4);
    v5 = (char *)&queryFormat.fmt + 3;
    if ( j_lua_isstring(luaVM, -1) )
      v5 = j_lua_tolstring(luaVM, -1, NULL);
    j_lua_pushstring(luaVM, v5);
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_getUseStencil
==============
*/
__int64 LUI_LuaCall_LUIElement_getUseStencil(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4647, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4648, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushboolean(luaVM, (v2->currentAnimationState.flags >> 1) & 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getVerticalAlignment
==============
*/
__int64 LUI_LuaCall_LUIElement_getVerticalAlignment(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5217, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 5218, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushinteger(luaVM, (__int64)v2->currentAnimationState.alignment >> 2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_getWidth
==============
*/
__int64 LUI_LuaCall_LUIElement_getWidth(lua_State *luaVM)
{
  __m128 v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4825, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4826, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = *(__m128 *)LUI_ToElement(luaVM, 1)->currentAnimationState.position.x.offsets;
  j_lua_pushnumber(luaVM, COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v2, v2, 255).m128_f32[0] - _mm_shuffle_ps(v2, v2, 170).m128_f32[0]) & _xmm));
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_isInFocus
==============
*/
__int64 LUI_LuaCall_LUIElement_isInFocus(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  v2 = LUI_ToElement(luaVM, 1);
  j_lua_pushboolean(luaVM, (v2->currentAnimationState.flags >> 2) & 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_removeAllChildren
==============
*/
__int64 LUI_LuaCall_LUIElement_removeAllChildren(lua_State *luaVM)
{
  LUIElement *v2; 
  LUIElement *firstChild; 
  bool v4; 
  LUIElement *nextSibling; 
  LUIElement *parent; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1019, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1020, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  firstChild = v2->firstChild;
  if ( firstChild )
  {
    do
    {
      v4 = firstChild->strongLuaReference == -2;
      nextSibling = firstChild->nextSibling;
      firstChild->nextSibling = NULL;
      firstChild->parent = NULL;
      firstChild->prevSibling = NULL;
      if ( !v4 )
        LUI_LUIElement_RemoveStrongReference(v2, firstChild, luaVM);
      firstChild = nextSibling;
    }
    while ( nextSibling );
  }
  v2->firstChild = NULL;
  v2->lastChild = NULL;
  LUI_QuadCache_Element_Invalidate(v2);
  parent = v2->parent;
  for ( *(_WORD *)&v2->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setEndTimeInC
==============
*/
__int64 LUI_LuaCall_LUIElement_setEndTimeInC(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  bool v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tonumber32(luaVM, 2);
  v4 = v2->customElementData == NULL;
  v2->currentAnimationState.userDataInt = (int)*(float *)&v3;
  v2->timeValue = 0;
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  *(_DWORD *)v2->customElementData = 0;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setFocus
==============
*/
__int64 LUI_LuaCall_LUIElement_setFocus(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int flags; 
  const LUIElement *CurrentRoot; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "Wrong number of parameters passed to method!");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "Element expected as first parameter to method!");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "Boolean expected as second parameter to method!");
  v2 = LUI_ToElement(luaVM, 1);
  v3 = j_lua_toboolean(luaVM, 2);
  flags = v2->currentAnimationState.flags;
  if ( v3 )
  {
    if ( (flags & 4) == 0 )
      v2->currentAnimationState.flags = flags | 4;
    CurrentRoot = LUI_CoD_GetCurrentRoot(luaVM);
    LUI_GetRootData(CurrentRoot)->lastFocusedElement = v2;
  }
  else
  {
    v2->currentAnimationState.flags = flags & 0xFFFFFFFB;
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_setHeight
==============
*/
__int64 LUI_LuaCall_LUIElement_setHeight(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setHeight_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setHeight_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setHeight_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  int v3; 
  LUIElement *parent; 
  double v6; 
  int v7; 
  LUITween *v8; 
  LUITweenProperty v9; 
  float Px; 

  if ( j_lua_gettop(luaVM) != 2 && j_lua_gettop(luaVM) != 3 && j_lua_gettop(luaVM) != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4771, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2 || lua_gettop( luaVM ) == 3 || lua_gettop( luaVM ) == 4)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2 || lua_gettop( luaVM ) == 3 || lua_gettop( luaVM ) == 4") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4772, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4773, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  LUI_PushViaWeakReference(v2, luaVM);
  v3 = j_lua_type(luaVM, -1);
  j_lua_settop(luaVM, -2);
  if ( !v3 )
    LUI_Interface_DebugPrint("LUIElement did not have a weak table entry.\n");
  if ( !v3 )
    return 0i64;
  parent = v2->parent;
  for ( *(_WORD *)&v2->layoutDeeplyCached = 0; parent; parent = parent->parent )
  {
    if ( !parent->layoutDeeplyCached )
      break;
    parent->layoutDeeplyCached = 0;
  }
  v6 = lua_tonumber32(luaVM, 2);
  Px = *(float *)&v6;
  if ( _fdtest(&Px) > 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "isfinite( height )");
  if ( j_lua_gettop(luaVM) < 3 || (v7 = lua_tointeger32(luaVM, 3), v7 <= 0) )
  {
    LUI_QuadCache_Element_Invalidate(v2);
    LOBYTE(v9) = 14;
    LUI_Tween_InterruptElementTween(v2, v9, luaVM);
    v2->currentAnimationState.position.y.offsets[1] = *(float *)&v6 + v2->currentAnimationState.position.y.offsets[0];
    return 0i64;
  }
  else
  {
    v8 = LUI_Tween_Create(luaVM, v2);
    if ( j_lua_gettop(luaVM) >= 4 )
      v8->easing = lua_tointeger32(luaVM, 4);
    v8->targetProperty[0] = 14;
    v8->duration = v7;
    v8->startValue.intValue = LODWORD(v2->currentAnimationState.position.y.offsets[1]);
    v8->endValue.floatValue = *(float *)&v6 + v2->currentAnimationState.position.y.offsets[0];
    LUI_Tween_AddElementTween(v2, v8, luaVM, 0);
    LUI_Tween_PushOnLuaStack(v8, luaVM);
    return 1i64;
  }
}

/*
==============
LUI_LuaCall_LUIElement_setImage
==============
*/
__int64 LUI_LuaCall_LUIElement_setImage(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setImage_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setImageFiltering
==============
*/
__int64 LUI_LuaCall_LUIElement_setImageFiltering(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: element:setImageFiltering( filter )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = LUI_ToElement(luaVM, 1);
    if ( (v2->usageFlags & 0x80) != 0 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsImageLike( self )");
    if ( lua_tointeger32(luaVM, 2) == 1 )
      v2->usageFlags |= 0x2000000u;
    else
      v2->usageFlags &= ~0x2000000u;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setImage_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setImage_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  const GfxImage *v3; 
  LUITweenProperty v4; 
  int v5; 
  LUITween *v7; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:setImage( material, ?duration )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isuserdata(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) != 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsImageLike( self )");
  v3 = (const GfxImage *)j_lua_touserdata(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 3 )
    v5 = 0;
  else
    v5 = lua_tointeger32(luaVM, 3);
  if ( v5 <= 0 )
  {
    LOBYTE(v4) = 16;
    LUI_Tween_InterruptElementTween(v2, v4, luaVM);
    v2->imageData.image = v3;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v7 = LUI_Tween_Create(luaVM, v2);
  v7->targetProperty[0] = 16;
  v7->duration = v5;
  v7->startValue.image = v2->imageData.image;
  v7->endValue.image = v3;
  LUI_Tween_AddElementTween(v2, v7, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v7, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_setPriority
==============
*/
__int64 LUI_LuaCall_LUIElement_setPriority(lua_State *luaVM)
{
  LUIElement *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1327, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1328, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 1329, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ) || (lua_type(luaVM, (2)) == 0))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 ) || lua_isnil( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_isnumber(luaVM, 2) )
    v3 = lua_tointeger32(luaVM, 2);
  else
    v3 = 0;
  v2->priority = v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setShowDecimalsAtTimeInC
==============
*/
__int64 LUI_LuaCall_LUIElement_setShowDecimalsAtTimeInC(lua_State *luaVM)
{
  LUIElement *v2; 
  _DWORD *customElementData; 
  double v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 2");
  if ( !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = LUI_ToElement(luaVM, 1);
  if ( !v2->customElementData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_customelements.h", 87, ASSERT_TYPE_ASSERT, "(element->customElementData != 0)", (const char *)&queryFormat, "element->customElementData != NULL") )
    __debugbreak();
  customElementData = v2->customElementData;
  v4 = lua_tonumber32(luaVM, 2);
  customElementData[1] = (int)*(float *)&v4;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setTacMapZoom
==============
*/
__int64 LUI_LuaCall_LUIElement_setTacMapZoom(lua_State *luaVM)
{
  LUIElement *v2; 
  double v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4713, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4714, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4715, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ) || (lua_type(luaVM, (2)) == 0))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 ) || lua_isnil( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  v3 = lua_tonumber32(luaVM, 2);
  v2->currentAnimationState.userData = *(float *)&v3;
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_setTextInC
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextInC(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIElement_setTextInC_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIElement_setTextInC_impl
==============
*/
__int64 LUI_LuaCall_LUIElement_setTextInC_impl(lua_State *const luaVM)
{
  LUIElement *v2; 
  const char *v3; 
  __int16 Ref; 
  LUITweenProperty v5; 
  int v6; 
  LUISharedTextRefIndex v7; 
  LUITween *v9; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: element:setTextInC( text, ?duration )");
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) || j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && j_lua_type(luaVM, 3) )
    return 0i64;
  v2 = LUI_ToElement(luaVM, 1);
  if ( !LUI_ElementHasWeakTableEntry(v2, luaVM) )
    return 0i64;
  if ( (v2->usageFlags & 0x80) == 0 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUIElement_IsTextLike( self )");
  LUI_LUIElement_InvalidateLayout(v2);
  j_lua_pushvalue(luaVM, 2);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  R_TextValidatePrintable(v3);
  Ref = LUI_SharedTextRef_CreateRef(luaVM);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_isnumber(luaVM, 3) )
    v6 = lua_tointeger32(luaVM, 3);
  else
    v6 = 0;
  if ( v6 <= 0 )
  {
    LOBYTE(v5) = 18;
    LUI_Tween_InterruptElementTween(v2, v5, luaVM);
    v7 = *(unsigned __int16 *)v2->textData.textRef;
    if ( (_WORD)v7 != INVALID_INDEX )
      LUI_SharedTextRef_RemoveRef(luaVM, v7);
    *(_WORD *)v2->textData.textRef = Ref;
    LUI_QuadCache_Element_Invalidate(v2);
    return 0i64;
  }
  v9 = LUI_Tween_Create(luaVM, v2);
  v9->targetProperty[0] = 18;
  v9->duration = v6;
  LUI_SharedTextRef_AddRef(luaVM, (const LUISharedTextRefIndex)*(unsigned __int16 *)v2->textData.textRef);
  v9->startValue.shortValue = *(_WORD *)v2->textData.textRef;
  v9->endValue.shortValue = Ref;
  LUI_Tween_AddElementTween(v2, v9, luaVM, 0);
  LUI_Tween_PushOnLuaStack(v9, luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIElement_setUseStencil
==============
*/
__int64 LUI_LuaCall_LUIElement_setUseStencil(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4670, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 2)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4671, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( j_lua_type(luaVM, 2) != 1 && j_lua_type(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4672, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (2)) == 1) || (lua_type(luaVM, (2)) == 0))", (const char *)&queryFormat, "lua_isboolean( luaVM, 2 ) || lua_isnil( luaVM, 2 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  if ( j_lua_type(luaVM, 2) == 1 && j_lua_toboolean(luaVM, 2) )
    v2->currentAnimationState.flags |= 2u;
  else
    v2->currentAnimationState.flags &= ~2u;
  if ( (v2->usageFlags & 0x80) == 0 && v2->imageData.uMin == 0.0 && v2->imageData.uMax == 0.0 && v2->imageData.vMin == 0.0 && v2->imageData.vMax == 0.0 )
  {
    *(_QWORD *)&v2->textData.fontSize = 1065353216i64;
    v2->imageData.uMin = 0.0;
    v2->imageData.vMax = 1.0;
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIElement_undoElementTransform
==============
*/
__int64 LUI_LuaCall_LUIElement_undoElementTransform(lua_State *luaVM)
{
  LUIElement *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4904, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == 1)", (const char *)&queryFormat, "lua_gettop( luaVM ) == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4905, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, 1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  v2 = LUI_ToElement(luaVM, 1);
  LUIElement_UndoTransform(v2, luaVM);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_ConstructLUIElement
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_ConstructLUIElement(lua_State *luaVM)
{
  int v1; 
  LUIElement *v3; 
  unsigned int v4; 

  v1 = s_LUIHighAllocatedElements;
  if ( s_LUIHighAllocatedElements < ++s_LUIAllocatedElements )
    v1 = s_LUIAllocatedElements;
  s_LUIHighAllocatedElements = v1;
  v3 = LUIUserDataPool<LUIElement,0,4500>::Allocate(&s_LUIElementPool, 2, "LUIElement", luaVM);
  memset_0(v3, 0, sizeof(LUIElement));
  j_lua_rawgeti(luaVM, -10000, s_weakRefTable);
  j_lua_pushlightuserdata(luaVM, v3);
  j_lua_pushvalue(luaVM, -3);
  j_lua_settable(luaVM, -3);
  j_lua_settop(luaVM, -2);
  v3->strongLuaReference = -2;
  v3->imageData.image = LUI_DefaultMaterial;
  *(_QWORD *)v3->currentAnimationState.position.x.offsets = 0i64;
  *(_QWORD *)v3->currentAnimationState.position.x.global = 0i64;
  *(_QWORD *)v3->currentAnimationState.position.x.anchors = 0i64;
  *(_QWORD *)v3->currentAnimationState.position.y.offsets = 0i64;
  *(_QWORD *)v3->currentAnimationState.position.y.global = 0i64;
  *(_QWORD *)v3->currentAnimationState.position.y.anchors = 0i64;
  v3->currentAnimationState.red = 1.0;
  v3->currentAnimationState.green = 1.0;
  v3->currentAnimationState.blue = 1.0;
  v3->currentAnimationState.alpha = 1.0;
  j_lua_createtable(luaVM, 0, 3);
  j_luaL_register(luaVM, NULL, LUIElement_metatable);
  j_lua_setmetatable(luaVM, -2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_DebugPrint
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_DebugPrint(lua_State *luaVM)
{
  const char *v2; 
  unsigned int v3; 

  v2 = j_lua_tolstring(luaVM, 1, NULL);
  LUI_Interface_DebugPrint("%s\n", v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_GetMaterialDimensions
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_GetMaterialDimensions(lua_State *luaVM)
{
  unsigned int v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *v5; 
  unsigned int v10; 
  GfxImage *output_material; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: GetMaterialDimensions( materialName )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    goto LABEL_17;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = v3;
  if ( !*v3 )
    j_luaL_error(luaVM, "Image name was empty string");
  if ( !LUI_Interface_RegisterMaterial(v3, (const GfxImage **)&output_material) )
  {
    LUI_Interface_ErrorPrint("Error getting dimensions for material: %s\n", v4);
LABEL_17:
    v2 = 0;
    goto LABEL_18;
  }
  v5 = DCONST_DVARBOOL_lui_dev_printMissingImageLuaStacks;
  if ( !DCONST_DVARBOOL_lui_dev_printMissingImageLuaStacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_dev_printMissingImageLuaStacks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && DB_IsXAssetDefault(ASSET_TYPE_IMAGE, output_material->name) )
    LUI_CoD_PrintCallstack();
  j_lua_createtable(luaVM, 0, 0);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, ecx; value }
  LuaShared_SetTableNumber("width", *(long double *)&_XMM1, luaVM);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, ecx; value }
  LuaShared_SetTableNumber("height", *(long double *)&_XMM1, luaVM);
LABEL_18:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v10);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_GetTextDimensions
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_GetTextDimensions(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIGlobalPackage_GetTextDimensions_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_GetTextDimensions_impl
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_GetTextDimensions_impl(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  const char *RootNameForController; 
  const LUIElement *RootElement; 
  float unitScale; 
  const char *v7; 
  GfxFont *v8; 
  double v9; 
  float v10; 
  float v11; 
  double v12; 
  int tracking; 
  double v14; 
  int leading; 
  double v16; 
  float v17; 
  float bottom; 
  float top; 
  float right[18]; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 
  float left; 

  if ( !j_lua_isstring(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6583, "lua_isstring( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6584, "lua_isuserdata( luaVM, 2 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 3) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6585, "lua_isnumber( luaVM, 3 )") )
    __debugbreak();
  controllerIndex = -1;
  if ( j_lua_gettop(luaVM) >= 7 && j_lua_type(luaVM, 7) )
  {
    v2 = lua_tointeger32(luaVM, 7);
    controllerIndex = v2;
  }
  else
  {
    v2 = controllerIndex;
  }
  if ( v2 != -1 )
  {
    ClientFromController = CL_Mgr_GetClientFromController(v2);
LABEL_19:
    localClientNum = ClientFromController;
    goto LABEL_20;
  }
  if ( !LUI_CoD_CanInferLocalClientAndController() )
  {
    ClientFromController = LOCAL_CLIENT_0;
    controllerIndex = 0;
    goto LABEL_19;
  }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
LABEL_20:
  RootNameForController = LUI_CoD_GetRootNameForController(controllerIndex);
  RootElement = LUI_GetRootElement(RootNameForController, luaVM);
  unitScale = LUI_GetRootData(RootElement)->unitScale;
  v7 = j_lua_tolstring(luaVM, 1, NULL);
  v8 = (GfxFont *)j_lua_touserdata(luaVM, 2);
  v9 = lua_tonumber32(luaVM, 3);
  v10 = FLOAT_N1_0;
  v11 = *(float *)&v9 * unitScale;
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    v12 = lua_tonumber32(luaVM, 4);
    v10 = *(float *)&v12 * unitScale;
  }
  LOBYTE(tracking) = 0;
  if ( j_lua_gettop(luaVM) >= 5 && j_lua_type(luaVM, 5) )
  {
    v14 = lua_tonumber32(luaVM, 5);
    tracking = (int)(float)((float)(*(float *)&v14 * unitScale) + 0.5);
  }
  LOBYTE(leading) = 0;
  if ( j_lua_gettop(luaVM) >= 6 && j_lua_type(luaVM, 6) )
  {
    v16 = lua_tonumber32(luaVM, 6);
    leading = (int)(float)((float)(*(float *)&v16 * unitScale) + 0.5);
  }
  LUI_Interface_GetTextDimensions(localClientNum, v7, v8, v11, tracking, leading, &left, &top, right, &bottom, v10);
  if ( left != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6639, ASSERT_TYPE_ASSERT, "(left == 0)", (const char *)&queryFormat, "left == 0") )
    __debugbreak();
  if ( bottom != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6640, ASSERT_TYPE_ASSERT, "(bottom == 0)", (const char *)&queryFormat, "bottom == 0") )
    __debugbreak();
  j_lua_pushnumber(luaVM, left);
  v17 = 1.0 / unitScale;
  j_lua_pushnumber(luaVM, (float)(v17 * top));
  j_lua_pushnumber(luaVM, (float)(v17 * right[0]));
  j_lua_pushnumber(luaVM, bottom);
  return 4i64;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_ProjectRootCoordinate
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_ProjectRootCoordinate(lua_State *luaVM)
{
  unsigned int v2; 
  const char *v3; 
  double v4; 
  float v5; 
  double v6; 
  unsigned int v7; 
  float outMouseX; 
  float outMouseY; 

  v2 = 2;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = lua_tonumber32(luaVM, 2);
  v5 = *(float *)&v4;
  v6 = lua_tonumber32(luaVM, 3);
  if ( LUI_ProjectRootCoordinate(luaVM, v3, v5, *(float *)&v6, &outMouseX, &outMouseY) )
  {
    j_lua_pushnumber(luaVM, outMouseX);
    j_lua_pushnumber(luaVM, outMouseY);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_RegisterFont
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_RegisterFont(lua_State *luaVM)
{
  unsigned int v1; 
  const char *v3; 
  unsigned int v4; 
  GfxFont *output_font; 

  v1 = 1;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( LUI_Interface_RegisterFont(v3, &output_font) )
  {
    j_lua_pushlightuserdata(luaVM, output_font);
  }
  else
  {
    LUI_Interface_ErrorPrint("Error registering font: %s\n", v3);
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v4);
  }
  return v1;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_RegisterMaterial
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_RegisterMaterial(lua_State *luaVM)
{
  unsigned int v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *v5; 
  unsigned int v6; 
  GfxImage *output_material; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: RegisterMaterial( materialName )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    goto LABEL_17;
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  v4 = v3;
  if ( !*v3 )
    j_luaL_error(luaVM, "Image name was empty string");
  if ( !LUI_Interface_RegisterMaterial(v3, (const GfxImage **)&output_material) )
  {
    LUI_Interface_ErrorPrint("Error registering material: %s\n", v4);
LABEL_17:
    v2 = 0;
    goto LABEL_18;
  }
  v5 = DCONST_DVARBOOL_lui_dev_printMissingImageLuaStacks;
  if ( !DCONST_DVARBOOL_lui_dev_printMissingImageLuaStacks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_dev_printMissingImageLuaStacks") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && DB_IsXAssetDefault(ASSET_TYPE_IMAGE, output_material->name) )
    LUI_CoD_PrintCallstack();
  j_lua_pushlightuserdata(luaVM, output_material);
LABEL_18:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIGlobalPackage_assert
==============
*/
__int64 LUI_LuaCall_LUIGlobalPackage_assert(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaAssert(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_Matrix_Pop
==============
*/
void LUI_Matrix_Pop(void)
{
  if ( s_currentMatrix > 0 )
  {
    --s_currentMatrix;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 341, ASSERT_TYPE_ASSERT, "(s_currentMatrix > 0)", (const char *)&queryFormat, "s_currentMatrix > 0") )
      __debugbreak();
    --s_currentMatrix;
  }
}

/*
==============
LUI_Matrix_Push
==============
*/
void LUI_Matrix_Push(void)
{
  if ( s_currentMatrix < 31 )
  {
    ++s_currentMatrix;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
      __debugbreak();
    ++s_currentMatrix;
  }
}

/*
==============
LUI_Measure
==============
*/
float LUI_Measure(LUIElementAxisPosition *axisPosition)
{
  float result; 

  LODWORD(result) = COERCE_UNSIGNED_INT(axisPosition->global[1] - axisPosition->global[0]) & _xmm;
  return result;
}

/*
==============
LUI_MeasureTextElement
==============
*/
void LUI_MeasureTextElement(float unitScale, LUIElement *element, lua_State *luaVM, float *outWidth, float *outHeight)
{
  LUISharedTextRefIndex v8; 
  const char *v9; 
  float v10; 
  float v11; 
  int v12; 
  float v13; 
  LocalClientNum_t v14; 
  float *v15; 
  float v16; 
  float *v17; 
  int controllerIndex; 
  float top; 
  float bottom; 
  float right; 
  float left[20]; 
  LocalClientNum_t localClientNum; 

  if ( (element->usageFlags & 0x80) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4949, ASSERT_TYPE_ASSERT, "(LUIElement_IsTextLike( element ))", (const char *)&queryFormat, "LUIElement_IsTextLike( element )") )
    __debugbreak();
  v8 = *(unsigned __int16 *)element->textData.textRef;
  if ( (_WORD)v8 == INVALID_INDEX )
  {
    v17 = outHeight;
    *outWidth = 0;
    *v17 = 0;
  }
  else
  {
    LUI_SharedTextRef_PushRefOnStack(luaVM, v8);
    if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 4953, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
      __debugbreak();
    v9 = j_lua_tolstring(luaVM, -1, NULL);
    j_lua_settop(luaVM, -2);
    if ( (element->usageFlags & 0x100) != 0 )
      v10 = COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(*(__m128 *)element->currentAnimationState.position.x.offsets, *(__m128 *)element->currentAnimationState.position.x.offsets, 255).m128_f32[0] - _mm_shuffle_ps(*(__m128 *)element->currentAnimationState.position.x.offsets, *(__m128 *)element->currentAnimationState.position.x.offsets, 170).m128_f32[0]) & _xmm) * unitScale;
    else
      v10 = FLOAT_N1_0;
    v11 = COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(*(__m128 *)element->currentAnimationState.position.y.offsets, *(__m128 *)element->currentAnimationState.position.y.offsets, 255).m128_f32[0] - _mm_shuffle_ps(*(__m128 *)element->currentAnimationState.position.y.offsets, *(__m128 *)element->currentAnimationState.position.y.offsets, 170).m128_f32[0]) & _xmm) * unitScale;
    v12 = (int)(float)((float)(unitScale * element->imageData.vMin) + 0.5);
    v13 = (float)(unitScale * element->imageData.vMax) + 0.5;
    if ( LUI_CoD_CanInferLocalClientAndController() )
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      v14 = localClientNum;
    }
    else
    {
      v14 = LOCAL_CLIENT_0;
      localClientNum = LOCAL_CLIENT_0;
      controllerIndex = 0;
    }
    LUI_Interface_GetTextDimensions(v14, v9, element->textData.font, v11, v12, (int)v13, left, &top, &right, &bottom, v10);
    v15 = outHeight;
    v16 = (float)(top - bottom) * (float)(1.0 / unitScale);
    *outWidth = (float)(right - left[0]) * (float)(1.0 / unitScale);
    *v15 = v16;
  }
}

/*
==============
LUI_NotifyMLGSpectatorLoadoutChanged
==============
*/
void LUI_NotifyMLGSpectatorLoadoutChanged(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  if ( LUI_BeginEvent(localClientNum, "mlgspectator_loadout_changed", luaVM) )
  {
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_NotifyOmnvarChanged
==============
*/
void LUI_NotifyOmnvarChanged(int controllerIndex, const OmnvarDef *def, const OmnvarData *omnvar, lua_State *luaVM)
{
  __int64 v4; 
  LocalClientNum_t ClientFromController; 
  __int64 integer; 
  char *outStringValue; 

  v4 = controllerIndex;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8995, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !omnvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8996, ASSERT_TYPE_ASSERT, "(omnvar)", (const char *)&queryFormat, "omnvar") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  LUI_Model_UpdateModelFromOmnvar(ClientFromController, def, omnvar);
  if ( LUI_BeginEvent(ClientFromController, "omnvar_update", luaVM) )
  {
    LuaShared_SetTableString("omnvar", def->name, LUI_luaVM);
    switch ( def->type )
    {
      case OMNVAR_TYPE_BOOL:
        LuaShared_SetTableBool((const char *)&stru_143CE7590, omnvar->current.enabled, LUI_luaVM);
        break;
      case OMNVAR_TYPE_FLOAT:
        LuaShared_SetTableNumber((const char *)&stru_143CE7590, omnvar->current.value, LUI_luaVM);
        break;
      case OMNVAR_TYPE_INT:
        if ( !omnvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
          __debugbreak();
        if ( def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
          __debugbreak();
        integer = omnvar->current.integer + def->minvalue;
        goto LABEL_18;
      case OMNVAR_TYPE_UINT:
        integer = omnvar->current.integer;
        goto LABEL_18;
      case OMNVAR_TYPE_TIME:
        integer = CG_Omnvar_GetTime(def, omnvar, ClientFromController);
LABEL_18:
        LuaShared_SetTableInt((const char *)&stru_143CE7590, integer, LUI_luaVM);
        break;
      case OMNVAR_TYPE_NCS_LUI:
        if ( BG_Omnvar_GetNCString(def, omnvar, (const char **)&outStringValue) )
          LuaShared_SetTableString((const char *)&stru_143CE7590, outStringValue, LUI_luaVM);
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9048, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected omnvar type for omnvar %s", def->name) )
          __debugbreak();
        break;
    }
    LuaShared_SetTableInt("controller", v4, LUI_luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_NotifyPlayerstateClientChanged
==============
*/
void LUI_NotifyPlayerstateClientChanged(LocalClientNum_t localClientNum, lua_State *luaVM)
{
  if ( LUI_BeginEvent(localClientNum, "playerstate_client_changed", luaVM) )
  {
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_Obituary
==============
*/
void LUI_Obituary(int controllerIndex, int attacker, int victim, const GfxImage *handle, bool flip, int ratio, const Weapon *weapon, bool isScorestreak, lua_State *luaVM)
{
  __int64 v10; 
  __int64 v11; 
  LocalClientNum_t ClientFromController; 
  unsigned int v13; 
  __int64 weaponIdx; 
  bool v15; 
  WeaponCompleteDef **v16; 
  const char *szLootTable; 
  unsigned __int8 weaponLootId; 
  bool v19; 
  const char *ColumnValueForRow; 
  const char *v21; 
  const char *v22; 
  int v23; 
  __int64 v24; 
  StringTable *tablePtr; 
  StringTable *table; 

  v10 = victim;
  v11 = attacker;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "obituary", luaVM) )
  {
    LuaShared_SetTableBool("isMod", 0, luaVM);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v11 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
      LuaShared_SetTableInt("attacker", v11, luaVM);
    LuaShared_SetTableInt("victim", v10, luaVM);
    if ( !handle )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )");
    j_lua_pushlightuserdata(luaVM, (void *)handle);
    j_lua_setfield(luaVM, -2, "icon");
    LuaShared_SetTableBool("flip", flip, luaVM);
    LuaShared_SetTableInt("imageRatio", ratio, luaVM);
    v13 = 0;
    tablePtr = NULL;
    weaponIdx = weapon->weaponIdx;
    if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
    {
      LODWORD(v24) = weapon->weaponIdx;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v24, bg_lastParsedWeaponIndex) )
        __debugbreak();
    }
    v15 = bg_weaponCompleteDefs[weaponIdx] == NULL;
    v16 = &bg_weaponCompleteDefs[weaponIdx];
    if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
      __debugbreak();
    szLootTable = (*v16)->szLootTable;
    if ( szLootTable )
    {
      if ( *szLootTable )
      {
        StringTable_GetAsset(szLootTable, (const StringTable **)&tablePtr);
        if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8852, ASSERT_TYPE_ASSERT, "(lootTable)", (const char *)&queryFormat, "lootTable") )
          __debugbreak();
      }
    }
    weaponLootId = weapon->weaponLootId;
    v19 = 0;
    if ( weaponLootId && tablePtr )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, (unsigned int)weaponLootId - 1, 2 * !isScorestreak + 2);
      v13 = atoi(ColumnValueForRow);
      StringTable_GetAsset("mp/loot/iw7_weapon_loot_master.csv", (const StringTable **)&table);
      v21 = StringTable_GetColumnValueForRow(tablePtr, (unsigned int)weapon->weaponLootId - 1, 1);
      v22 = StringTable_Lookup(table, 1, v21, 8);
      v23 = *(unsigned __int8 *)v22 - (unsigned __int8)aY_0[0];
      if ( !v23 )
        v23 = *((unsigned __int8 *)v22 + 1) - (unsigned __int8)aY_0[1];
      v19 = v23 == 0;
    }
    LuaShared_SetTableInt("weaponQuality", v13, luaVM);
    LuaShared_SetTableBool("isMk2", v19, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_Obituary_MOD
==============
*/
void LUI_Obituary_MOD(int controllerIndex, int attacker, int victim, int modIndex, lua_State *luaVM)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  LocalClientNum_t ClientFromController; 

  v5 = modIndex;
  v6 = victim;
  v7 = attacker;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "obituary", luaVM) )
  {
    LuaShared_SetTableBool("isMod", 1, luaVM);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v7 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
      LuaShared_SetTableInt("attacker", v7, luaVM);
    LuaShared_SetTableInt("victim", v6, luaVM);
    LuaShared_SetTableInt("modIndex", v5, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_Obituary_WeaponAndMOD
==============
*/
void LUI_Obituary_WeaponAndMOD(int controllerIndex, int attacker, int victim, const GfxImage *weaponHandle, const GfxImage *MODHandle, bool flip, int ratio, lua_State *luaVM)
{
  __int64 v9; 
  __int64 v10; 
  LocalClientNum_t ClientFromController; 

  v9 = victim;
  v10 = attacker;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "obituary", luaVM) )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)v10 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
      LuaShared_SetTableInt("attacker", v10, luaVM);
    LuaShared_SetTableInt("victim", v9, luaVM);
    if ( !weaponHandle )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )");
    j_lua_pushlightuserdata(luaVM, (void *)weaponHandle);
    j_lua_setfield(luaVM, -2, "icon");
    if ( !MODHandle )
      j_luaL_error(luaVM, (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )");
    j_lua_pushlightuserdata(luaVM, (void *)MODHandle);
    j_lua_setfield(luaVM, -2, "subIcon");
    LuaShared_SetTableBool("flip", flip, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_OpenModalPopup
==============
*/
void LUI_OpenModalPopup(int controllerIndex, const char *menuName, lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "popupmenu", luaVM) )
  {
    LuaShared_SetTableString("menu", menuName, luaVM);
    LuaShared_SetTableBool("immediate", 1, luaVM);
    LuaShared_SetTableBool("isModal", 1, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_OutOfElementsError
==============
*/
char LUI_OutOfElementsError(const LUIUserDataPool<LUIElement,0,4500> *pool)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_lui_error_on_out_of_elements;
  if ( !DVARBOOL_lui_error_on_out_of_elements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_error_on_out_of_elements") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
    return 0;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14445E700, 6446i64);
  return 1;
}

/*
==============
LUI_Panic
==============
*/
__int64 LUI_Panic(lua_State *luaVM)
{
  __int64 v2; 
  const char *v3; 
  __int64 v4; 
  __int128 *v5; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  unsigned __int64 v10; 
  LUIElement *v11; 
  const char *v12; 
  __int128 v14; 
  __int64 v15; 
  __int64 v16; 
  char buffer[4096]; 
  char dest[2048]; 

  v2 = -1i64;
  if ( j_lua_gettop(luaVM) > 0 && j_lua_isstring(luaVM, -1) )
    v3 = j_lua_tolstring(luaVM, -1, NULL);
  else
    v3 = NULL;
  LUI_Interface_DebugPrint("==============================\nLUI Panic error:\n  %s\n", v3);
  strcpy((char *)&v16, "n");
  v14 = *(_OWORD *)"iw stack frame corruption";
  v15 = *(__int64 *)"orruption";
  if ( v3 )
  {
    v5 = &v14;
    v6 = 25i64;
    do
    {
      v7 = *((_BYTE *)v5 + v3 - (const char *)&v14);
      v8 = v6;
      v4 = *(unsigned __int8 *)v5;
      v5 = (__int128 *)((char *)v5 + 1);
      --v6;
      if ( !v8 )
        break;
      if ( v7 != (_BYTE)v4 )
        goto LABEL_11;
    }
    while ( v7 );
    v9 = 1;
  }
  else
  {
LABEL_11:
    v9 = 0;
  }
  if ( v3 )
    Com_sprintf_truncate(dest, 0x800ui64, "LUI Panic error: %s", v3);
  else
    Com_sprintf_truncate(dest, 0x800ui64, "LUI Panic error: (no message)", v4, v14, v15, v16);
  if ( v9 )
  {
    j_lua_settop(luaVM, -2);
    memset_0(buffer, 0, sizeof(buffer));
    v10 = LUI_DumpStackToBuffer(luaVM, buffer, 0x1000ui64);
    if ( v10 >= 0x1000 )
      v10 = 4095i64;
    if ( v10 + 1 < 0x1000 && s_LUIElementPool.m_lastAllocated < 0x1194u )
    {
      v11 = &s_LUIElementPool.m_pool[s_LUIElementPool.m_lastAllocated];
      if ( v11 )
        LUI_DumpElementIdChainToBuffer_r(luaVM, v11, &buffer[v10], 4096 - v10);
    }
    buffer[4095] = 0;
  }
  else
  {
    j_lua_checkstack(luaVM, 1);
    j_luaL_traceback(luaVM, luaVM, (const char *)&queryFormat.fmt + 3, 1);
    v12 = j_lua_tolstring(luaVM, -1, NULL);
    do
      ++v2;
    while ( v12[v2] );
    if ( (unsigned __int64)(v2 + 2) <= 0x1000 )
      j_sprintf(buffer, "%s\n%s\n", (const char *)&queryFormat.fmt + 3, v12);
    j_lua_settop(luaVM, -2);
  }
  LUI_Interface_DebugPrint((const char *)&queryFormat, buffer);
  DLog_RecordErrorEvent(DLOG_ERROR_CODE_LUA, dest, buffer);
  LUI_Interface_Panic();
  return 0i64;
}

/*
==============
LUI_PlaySound
==============
*/
void LUI_PlaySound(const LocalClientNum_t *localClientNum, const char *soundAlias)
{
  bool IsRunningCmd; 
  LocalClientNum_t v5; 

  IsRunningCmd = LUI_Workers_IsRunningCmd();
  v5 = *localClientNum;
  if ( IsRunningCmd )
    LUI_Workers_QueuePlaySound(v5, soundAlias);
  else
    UI_PlayLocalSoundAliasByName(v5, soundAlias);
}

/*
==============
LUI_PostGC
==============
*/
void LUI_PostGC(void)
{
  ;
}

/*
==============
LUI_ProjectRootCoordinate
==============
*/
char LUI_ProjectRootCoordinate(lua_State *luaVM, const char *rootName, float screenX, float screenY, float *outMouseX, float *outMouseY)
{
  const LUIElement *RootElement; 
  LUIRootData *RootData; 
  float v8; 
  float height; 
  float v10; 
  const tmat44_t<vec4_t> *p_inverseProjectionMatrix; 
  int v12; 
  vec4_t *v13; 
  int i; 
  float v15; 
  vec4_t *v16; 
  float v17; 
  double v18; 
  float v19; 
  double v21; 
  float v22; 
  __int64 v23; 
  __int64 v24; 
  vec3_t x; 
  vec4_t vec2; 
  vec4_t v27; 
  vec4_t result; 
  vec4_t v29; 
  vec3_t vec1; 
  vec4_t vec; 
  vec4_t v32; 
  vec4_t v33; 
  vec4_t v34; 
  vec4_t v35; 
  vec4_t v36; 
  tmat44_t<vec4_t> matrix; 

  RootElement = LUI_GetRootElement(rootName, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 611, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(RootElement);
  v8 = (float)(screenX * 2.0) / RootData->width;
  height = RootData->height;
  vec.v[0] = (float)(RootData->left + RootData->right) * 0.5;
  vec.v[1] = (float)(RootData->bottom + RootData->top) * 0.5;
  vec.v[2] = 0.0;
  vec.v[3] = FLOAT_1_0;
  v32.v[0] = (float)(RootData->left + RootData->right) * 0.5;
  v10 = (float)(RootData->bottom + RootData->top) * 0.5;
  v34.v[2] = FLOAT_N1_0;
  v32.v[1] = v10;
  v32.v[2] = FLOAT_1_0;
  v32.v[3] = FLOAT_1_0;
  v33.v[0] = v8;
  v33.v[1] = (float)(screenY * -2.0) / height;
  v33.v[2] = FLOAT_1_0;
  v33.v[3] = FLOAT_1_0;
  v34.v[0] = v8;
  v34.v[1] = v33.v[1];
  v34.v[3] = FLOAT_1_0;
  p_inverseProjectionMatrix = &RootData->inverseProjectionMatrix;
  LUI_Matrix_MultiplyVector(&s_matrixStack[(__int64)s_currentMatrix], &vec, &result);
  LUI_Matrix_MultiplyVector(&s_matrixStack[(__int64)s_currentMatrix], &v32, &vec2);
  vec2.v[0] = vec2.v[0] - result.v[0];
  vec2.v[2] = vec2.v[2] - result.v[2];
  vec2.v[1] = vec2.v[1] - result.v[1];
  LUI_Vector_NormalizeInPlace(vec2.v, &vec2.v[1], &vec2.v[2]);
  LUI_Matrix_MultiplyVector(p_inverseProjectionMatrix, &v33, &v27);
  v12 = 0;
  v13 = &v27;
  for ( i = 0; i < 4; ++i )
  {
    v15 = v27.v[3];
    if ( (unsigned int)i >= 4 )
    {
      LODWORD(v24) = 4;
      LODWORD(v23) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v13->v[0] = v13->v[0] / v15;
    v13 = (vec4_t *)((char *)v13 + 4);
  }
  LUI_Matrix_MultiplyVector(p_inverseProjectionMatrix, &v34, &v29);
  v16 = &v29;
  do
  {
    v17 = v29.v[3];
    if ( (unsigned int)v12 >= 4 )
    {
      LODWORD(v24) = 4;
      LODWORD(v23) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, v24) )
        __debugbreak();
    }
    v16->v[0] = v16->v[0] / v17;
    v16 = (vec4_t *)((char *)v16 + 4);
    ++v12;
  }
  while ( v12 < 4 );
  x.v[0] = v29.v[0] - v27.v[0];
  x.v[2] = v29.v[2] - v27.v[2];
  x.v[1] = v29.v[1] - v27.v[1];
  LUI_Vector_NormalizeInPlace(x.v, &x.v[1], &x.v[2]);
  vec1.v[0] = result.v[0] - v27.v[0];
  vec1.v[2] = result.v[2] - v27.v[2];
  vec1.v[1] = result.v[1] - v27.v[1];
  v18 = LUI_Vector3_DotProduct(&x, &vec2);
  v19 = *(float *)&v18;
  if ( COERCE_FLOAT(LODWORD(v18) & _xmm) < 0.001 )
    return 0;
  v21 = LUI_Vector3_DotProduct(&vec1, &vec2);
  v35.v[0] = (float)((float)(*(float *)&v21 / v19) * x.v[0]) + v27.v[0];
  v35.v[1] = (float)((float)(*(float *)&v21 / v19) * x.v[1]) + v27.v[1];
  v35.v[2] = (float)((float)(*(float *)&v21 / v19) * x.v[2]) + v27.v[2];
  v35.v[3] = FLOAT_1_0;
  LUI_Matrix_Invert(&s_matrixStack[(__int64)s_currentMatrix], &matrix);
  LUI_Matrix_MultiplyVector(&matrix, &v35, &v36);
  v22 = v36.v[1];
  *outMouseX = v36.v[0];
  *outMouseY = v22;
  return 1;
}

/*
==============
LUI_PushScaleMatrix
==============
*/
void LUI_PushScaleMatrix(float scaleX, float scaleY, float centerX, float centerY)
{
  tmat44_t<vec4_t> result; 
  tmat44_t<vec4_t> matrix2; 
  tmat44_t<vec4_t> matrix1; 

  if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
    __debugbreak();
  ++s_currentMatrix;
  LUI_Matrix_BuildTranslationMatrix(centerX, centerY, 0.0, &result);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
  LUI_Matrix_BuildScaleMatrix(scaleX, scaleY, 1.0, &matrix2);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix2, &matrix1);
  LODWORD(result.m[0].v[3]) ^= _xmm;
  LODWORD(result.m[2].v[3]) ^= _xmm;
  LODWORD(result.m[1].v[3]) ^= _xmm;
  LUI_Matrix_Multiply(&matrix1, &result, &s_matrixStack[(__int64)s_currentMatrix]);
}

/*
==============
LUI_PushScaleMatrix
==============
*/
void LUI_PushScaleMatrix(float scale, float centerX, float centerY, lua_State *luaVM)
{
  tmat44_t<vec4_t> result; 
  tmat44_t<vec4_t> matrix2; 
  tmat44_t<vec4_t> matrix1; 

  if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
    __debugbreak();
  ++s_currentMatrix;
  LUI_Matrix_BuildTranslationMatrix(centerX, centerY, 0.0, &result);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
  LUI_Matrix_BuildScaleMatrix(scale, scale, 1.0, &matrix2);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix2, &matrix1);
  LODWORD(result.m[0].v[3]) ^= _xmm;
  LODWORD(result.m[2].v[3]) ^= _xmm;
  LODWORD(result.m[1].v[3]) ^= _xmm;
  LUI_Matrix_Multiply(&matrix1, &result, &s_matrixStack[(__int64)s_currentMatrix]);
}

/*
==============
LUI_PushViaStrongReference
==============
*/
void LUI_PushViaStrongReference(void *key, lua_State *luaVM)
{
  j_lua_pushlightuserdata(luaVM, key);
  j_lua_gettable(luaVM, -10000);
}

/*
==============
LUI_PushViaWeakReference
==============
*/
void LUI_PushViaWeakReference(void *key, lua_State *luaVM)
{
  if ( !key && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6126, ASSERT_TYPE_ASSERT, "(key != nullptr)", (const char *)&queryFormat, "key != nullptr") )
    __debugbreak();
  j_lua_rawgeti(luaVM, -10000, s_weakRefTable);
  j_lua_pushlightuserdata(luaVM, key);
  j_lua_gettable(luaVM, -2);
  j_lua_remove(luaVM, -2);
}

/*
==============
LUI_PushXUID
==============
*/
void LUI_PushXUID(lua_State *luaVM, const XUID xuid)
{
  const char *v3; 
  XUID v4; 

  v4.m_id = xuid.m_id;
  v3 = XUID::ToString(&v4);
  j_lua_pushstring(luaVM, v3);
}

/*
==============
LUI_PushZRotationMatrix
==============
*/
void LUI_PushZRotationMatrix(float degrees, float centerX, float centerY, lua_State *luaVM)
{
  tmat44_t<vec4_t> result; 
  tmat44_t<vec4_t> matrix2; 
  tmat44_t<vec4_t> matrix1; 

  if ( s_currentMatrix >= 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 334, ASSERT_TYPE_ASSERT, "(s_currentMatrix < LUI_MAX_MATRICES - 1)", (const char *)&queryFormat, "s_currentMatrix < LUI_MAX_MATRICES - 1") )
    __debugbreak();
  ++s_currentMatrix;
  LUI_Matrix_BuildTranslationMatrix(centerX, centerY, 0.0, &result);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)(s_currentMatrix - 1)], &result, &s_matrixStack[(__int64)s_currentMatrix]);
  LUI_Matrix_BuildZRotationMatrix(degrees, &matrix2);
  LUI_Matrix_Multiply(&s_matrixStack[(__int64)s_currentMatrix], &matrix2, &matrix1);
  LODWORD(result.m[0].v[3]) ^= _xmm;
  LODWORD(result.m[2].v[3]) ^= _xmm;
  LODWORD(result.m[1].v[3]) ^= _xmm;
  LUI_Matrix_Multiply(&matrix1, &result, &s_matrixStack[(__int64)s_currentMatrix]);
}

/*
==============
LUI_PutCachedEventOnTopOfStack
==============
*/
void LUI_PutCachedEventOnTopOfStack(LUIEventCache cachedEvent, lua_State *luaVM)
{
  __int64 v3; 

  v3 = cachedEvent;
  j_lua_getfield(luaVM, -10002, "LUI");
  j_lua_getfield(luaVM, -1, "CachedEvents");
  j_lua_getfield(luaVM, -1, s_cachedEventNames[v3]);
  j_lua_insert(luaVM, -3);
  j_lua_settop(luaVM, -3);
}

/*
==============
LUI_PutElementOnTopOfStack
==============
*/
void LUI_PutElementOnTopOfStack(LUIElement *element, lua_State *luaVM)
{
  const char *v3; 
  __int64 v4; 
  char _Buffer[2048]; 

  LUI_PushViaWeakReference(element, luaVM);
  if ( !j_lua_isuserdata(luaVM, -1) )
  {
    j_lua_checkstack(luaVM, 1);
    j_luaL_traceback(luaVM, luaVM, "LUI_PutElementOnTopOfStack", 1);
    v3 = j_lua_tolstring(luaVM, -1, NULL);
    v4 = -1i64;
    do
      ++v4;
    while ( v3[v4] );
    if ( (unsigned __int64)(v4 + 28) <= 0x800 )
      j_sprintf(_Buffer, "%s\n%s\n", "LUI_PutElementOnTopOfStack", v3);
    j_lua_settop(luaVM, -2);
    LUI_Interface_DebugPrint((const char *)&queryFormat, _Buffer);
  }
  if ( !j_lua_isuserdata(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7349, ASSERT_TYPE_ASSERT, "(lua_isuserdata( luaVM, -1 ))", (const char *)&queryFormat, "lua_isuserdata( luaVM, -1 )") )
    __debugbreak();
}

/*
==============
LUI_Ref_Monitor_AddRef
==============
*/
__int64 LUI_Ref_Monitor_AddRef(lua_State *luaVM, const int index)
{
  const char *v4; 
  int v5; 
  __int64 v6; 

  v4 = NULL;
  v5 = j_lua_type(luaVM, -1);
  if ( v5 == 4 )
    v4 = j_lua_tolstring(luaVM, -1, NULL);
  v6 = j_luaL_ref(luaVM, index);
  if ( index == -10000 && (_DWORD)v6 != -1 && (unsigned int)v6 < 0xFA0 )
  {
    if ( s_luiRefVerifyTypes[v6].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 257, ASSERT_TYPE_ASSERT, "(s_luiRefVerifyTypes[newRef].type == 0)", (const char *)&queryFormat, "s_luiRefVerifyTypes[newRef].type == 0") )
      __debugbreak();
    s_luiRefVerifyTypes[v6].type = v5;
    s_luiRefVerifyTypes[v6].strIfStrType = v4;
  }
  return (unsigned int)v6;
}

/*
==============
LUI_Ref_Monitor_RemoveRef
==============
*/
void LUI_Ref_Monitor_RemoveRef(lua_State *luaVM, const int index, const int ref)
{
  __int64 v3; 
  int v6; 
  const char *v7; 

  v3 = ref;
  if ( index == -10000 && ref != -1 && (unsigned int)ref < 0xFA0 )
  {
    j_lua_rawgeti(luaVM, -10000, ref);
    v6 = j_lua_type(luaVM, -1);
    if ( v6 != s_luiRefVerifyTypes[v3].type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 271, ASSERT_TYPE_ASSERT, "(type == s_luiRefVerifyTypes[ref].type)", (const char *)&queryFormat, "type == s_luiRefVerifyTypes[ref].type") )
      __debugbreak();
    if ( v6 == 4 )
    {
      v7 = j_lua_tolstring(luaVM, -1, NULL);
      if ( I_strncmp(v7, s_luiRefVerifyTypes[v3].strIfStrType, 0x7FFFFFFFui64) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 275, ASSERT_TYPE_ASSERT, "(I_strcmp( strIfStringType, s_luiRefVerifyTypes[ref].strIfStrType ) == 0)", (const char *)&queryFormat, "I_strcmp( strIfStringType, s_luiRefVerifyTypes[ref].strIfStrType ) == 0") )
          __debugbreak();
      }
    }
    j_lua_settop(luaVM, -2);
    s_luiRefVerifyTypes[v3].type = 0;
    s_luiRefVerifyTypes[v3].strIfStrType = NULL;
  }
  j_luaL_unref(luaVM, index, v3);
}

/*
==============
LUI_RegisterDvars
==============
*/
void LUI_RegisterDvars(void)
{
  Dvar_BeginPermanentRegistration();
  LUI_WorkerCmdGC = Dvar_RegisterInt("MTSTKTSKQ", 1, 0, 0x7FFFFFFF, 0, "Dev-only flag to enable/disable LUI workerCmd GC thread");
  LUI_MemErrorsFatal = Dvar_RegisterBool("LQKQOLMONS", 0, 0, "Out of memory errors cause drops when true, reinits the UI system if false");
  Dvar_EndPermanentRegistration();
}

/*
==============
LUI_RegisterFunction
==============
*/
void LUI_RegisterFunction(const char *name, int (*func)(lua_State *))
{
  j_lua_pushcclosure(LUI_luaVM, func, 0);
  j_lua_setfield(LUI_luaVM, -10002, name);
}

/*
==============
LUI_Render
==============
*/
void LUI_Render(const LocalClientNum_t localClientNum, LUIRootData *rootData, lua_State *luaVM)
{
  const dvar_t *v3; 
  __int64 v4; 
  LUIDaltonizeData *v6; 
  GfxBackEndData *v7; 
  int ControllerFromClient; 
  GfxDaltonizeType v9; 
  unsigned __int8 v10; 
  int v11; 
  GfxBackEndData *v12; 
  const dvar_t *v13; 
  unsigned int v14; 
  __int64 v15; 
  GfxDaltonizeOptions options; 

  v3 = DVARBOOL_lui_ui_colorblind_filter_enabled;
  v4 = localClientNum;
  s_isInExecDrawList = 1;
  if ( !DVARBOOL_lui_ui_colorblind_filter_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ui_colorblind_filter_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v6 = &s_daltonizeData[v4];
    if ( !R_IsInRemoteScreenUpdate() && (v7 = frontEndDataOut) != NULL && frontEndDataOut->viewInfoCount )
    {
      if ( !frontEndDataOut->viewInfo )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8445, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfo)", (const char *)&queryFormat, "frontEndDataOut->viewInfo") )
          __debugbreak();
        v7 = frontEndDataOut;
      }
      options = v7->viewInfo[v7->viewInfoIndex].uiDaltonizeOptions;
    }
    else
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v4);
      v9 = GamerProfile_ColorBlindMode(ControllerFromClient);
      v10 = GamerProfile_ColorBlindTargets(ControllerFromClient);
      R_InitDaltonizeOptions(&options, v9, r_daltonizeUIIntensity->current.value, v10, 2u);
    }
    if ( options.m_enabled != v6->options.m_enabled || options.m_correctionMode != v6->options.m_correctionMode || options.m_correctionScale != v6->options.m_correctionScale || options.m_simulationMode != v6->options.m_simulationMode )
    {
      if ( options.m_enabled )
        R_Macroclut_GetDaltonizeMatrix(&options, &v6->matrix);
      else
        v6->matrix = identityMatrix33;
      v11 = *(_DWORD *)&options.m_simulationMode;
      *(double *)&v6->options.m_enabled = *(double *)&options.m_enabled;
      *(_DWORD *)&v6->options.m_simulationMode = v11;
    }
  }
  if ( R_IsInRemoteScreenUpdate() )
    goto LABEL_49;
  v12 = frontEndDataOut;
  if ( !frontEndDataOut || !frontEndDataOut->viewInfoCount )
    goto LABEL_49;
  if ( !frontEndDataOut->viewInfo )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8489, ASSERT_TYPE_ASSERT, "(frontEndDataOut->viewInfo)", (const char *)&queryFormat, "frontEndDataOut->viewInfo") )
      __debugbreak();
    v12 = frontEndDataOut;
  }
  if ( v12->viewInfo[v12->viewInfoIndex].displayCmds[0] )
  {
    v13 = DCONST_DVARBOOL_r_lowResOverlays;
    if ( !DCONST_DVARBOOL_r_lowResOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_lowResOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, 4u) )
      LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, 4u, luaVM);
    R_AddCmdEndOfList();
    R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LUI);
    R_AddCmdSetUIColorMatrix(&s_daltonizeData[v4].matrix);
    LUI_QuadCache_ExecDrawList((const LocalClientNum_t)v4, luaVM);
    R_AddCmdSetUIColorMatrix(&identityMatrix33);
    R_AddCmdEndOfList();
    if ( LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, 1u) )
    {
      R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LUI_RECEIVE_PPFX);
      LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, 1u, luaVM);
      R_AddCmdEndOfList();
    }
    if ( LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, 2u) )
    {
      R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LUI_RECEIVE_PPFX_LITE);
      LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, 2u, luaVM);
      R_AddCmdEndOfList();
    }
    if ( LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, 3u) )
    {
      R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LUI_RECEIVE_PPFX_COMPOSITE);
      LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, 3u, luaVM);
      R_AddCmdEndOfList();
    }
    if ( LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, 5u) )
    {
      R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_LUI_PIXELGRID_OVERLAY);
      LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, 5u, luaVM);
      R_AddCmdEndOfList();
    }
    LUI_Render_SendCommandForRTT(1);
    v14 = 6;
    v15 = 8i64;
    do
    {
      if ( LUI_QuadCache_UsingCustomDrawList((const LocalClientNum_t)v4, v14) )
      {
        R_BeginClientCmdList2D((const GfxClientCmdListType)(v14 + 2));
        LUI_QuadCache_ExecDrawList_CustomList((const LocalClientNum_t)v4, v14, luaVM);
        R_AddCmdEndOfList();
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    LUI_Render_SendCommandForRTT(0);
    R_BeginClientCmdList2D(GFX_CLIENT_CMD_LIST_POST_LUI);
  }
  else
  {
LABEL_49:
    R_AddCmdSetUIColorMatrix(&s_daltonizeData[v4].matrix);
    LUI_QuadCache_ExecDrawList((const LocalClientNum_t)v4, luaVM);
    R_AddCmdSetUIColorMatrix(&identityMatrix33);
  }
  LUI_QuadCache_ClearDrawList((const LocalClientNum_t)v4);
  LUI_Tween_DebugDraw((LocalClientNum_t)v4);
  s_isInExecDrawList = 0;
}

/*
==============
LUI_Render_Reset
==============
*/
void LUI_Render_Reset(const LocalClientNum_t localClientNum)
{
  if ( !s_isInBuildDrawList )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 8383, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
      __debugbreak();
    if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7946, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
      __debugbreak();
  }
  s_current3DTransforms = 0;
  LUI_SetScopeUIStencilEnabled(0);
  LUI_Render_ResetParallaxEnabled();
  LUI_Render_ResetBlendMode();
  LUI_Render_ClearAsyncRenderSuspend();
  LUI_Render_ClearPixelGrid(localClientNum);
  LUI_Render_ClearGlitch(localClientNum);
  LUI_Render_ClearBlur(localClientNum);
  LUI_Render_ClearColorOp(localClientNum);
  LUI_Render_ClearMask();
  LUI_Render_ClearUnitScale();
  LUI_Render_ClearScopeIndex();
  LUI_Render_ResetDrawListMode();
}

/*
==============
LUI_ReportError
==============
*/
void LUI_ReportError(const char *error, lua_State *luaVM)
{
  const char *v4; 

  v4 = j_lua_tolstring(luaVM, -1, NULL);
  j_lua_settop(luaVM, -2);
  LUI_ReportErrorWithInfo(error, v4, luaVM);
}

/*
==============
LUI_ReportErrorWithInfo
==============
*/
void LUI_ReportErrorWithInfo(const char *error, const char *luaErrorInfo, lua_State *luaVM)
{
  char *v5; 
  char SubStr[32]; 
  char dest[4096]; 

  LUI_Interface_ErrorPrint("LUI: %s", error);
  LUI_Interface_DebugPrint("%s\n", luaErrorInfo);
  LUI_CoD_PrintCallstack();
  LUI_ReportMemoryUsage();
  LUI_Interface_DebugPrint("\n");
  strcpy(SubStr, "stack traceback:\n");
  Com_sprintf_truncate(dest, 0x1000ui64, "%s:\n%s", error, luaErrorInfo);
  v5 = strstr_0(dest, SubStr);
  if ( v5 )
  {
    *v5 = 0;
    v5 += 17;
  }
  DLog_RecordErrorEvent(DLOG_ERROR_CODE_LUA, dest, v5);
  if ( IsDebuggerConnected() )
    __debugbreak();
}

/*
==============
LUI_ReportMemoryUsage
==============
*/
void LUI_ReportMemoryUsage(void)
{
  unsigned int MaxElements; 
  unsigned int NumAllocatedQuadCaches; 
  int MemoryAllocatedForQuadCaches; 
  unsigned int DrawListMaxSize; 
  unsigned int DrawListHighWaterMark; 
  unsigned int v5; 
  unsigned int MemoryUsedBytes; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  LUI_Interface_DebugPrint("======================================\n LUI Resource Usage:\n");
  MaxElements = LUI_Interface_GetMaxElements();
  LUI_Interface_DebugPrint("   Elements allocated: %d / %d\n", (unsigned int)s_LUIAllocatedElements, MaxElements);
  NumAllocatedQuadCaches = LUI_QuadCache_GetNumAllocatedQuadCaches();
  LUI_Interface_DebugPrint("   Quad caches allocated: %d\n", NumAllocatedQuadCaches);
  MemoryAllocatedForQuadCaches = LUI_QuadCache_GetMemoryAllocatedForQuadCaches();
  LUI_Interface_DebugPrint("   Memory from quad caches: %d KB\n", (unsigned int)(MemoryAllocatedForQuadCaches / 1024));
  DrawListMaxSize = LUI_QuadCache_GetDrawListMaxSize();
  DrawListHighWaterMark = LUI_QuadCache_GetDrawListHighWaterMark();
  LUI_Interface_DebugPrint("   UI draw list size: %d / %d\n", DrawListHighWaterMark, DrawListMaxSize);
  v5 = LUI_CoD_GetMemoryTotal() >> 10;
  MemoryUsedBytes = LUI_CoD_GetMemoryUsedBytes();
  LUI_Interface_DebugPrint("  Lua memory used: %d / %d KB\n", MemoryUsedBytes >> 10, v5);
  LUI_Interface_DebugPrint("======================================\n");
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_ReportReferenceCounts
==============
*/
void LUI_ReportReferenceCounts(void)
{
  unsigned int v0; 
  unsigned int v1; 

  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  j_lua_getfield(LUI_luaVM, -10002, "CountReferences");
  j_lua_pushvalue(LUI_luaVM, -10002);
  if ( !j_lua_pcall(LUI_luaVM, 1, 1, 0) )
  {
    v0 = lua_tointeger32(LUI_luaVM, -1);
    LUI_Interface_DebugPrint("Global data items: %d\n", v0);
  }
  j_lua_settop(LUI_luaVM, -2);
  j_lua_getfield(LUI_luaVM, -10002, "CountReferences");
  j_lua_pushvalue(LUI_luaVM, -10000);
  if ( !j_lua_pcall(LUI_luaVM, 1, 1, 0) )
  {
    v1 = lua_tointeger32(LUI_luaVM, 1);
    LUI_Interface_DebugPrint("Registry data items: %d\n", v1);
  }
  j_lua_settop(LUI_luaVM, -2);
  LUI_LeaveCriticalSection();
}

/*
==============
LUI_Resize
==============
*/
void LUI_Resize(const char *rootName, const float left, const float top, const float right, const float bottom, const float pixelAspectRatio, lua_State *luaVM)
{
  LUIElement *RootElement; 
  float v10; 
  float v11; 
  bool v12; 
  int ControllerFromClient; 
  LUIRootData *RootDataForController; 
  float v15; 
  LUIElement *i; 
  const LUIElement *v17; 
  LUIRootData *RootData; 
  float v19; 
  float v20; 
  float v21; 
  int width; 
  int height; 
  float aspect; 
  vec4_t result; 
  __int128 v26; 
  tmat44_t<vec4_t> matrix2; 
  tmat44_t<vec4_t> matrix1; 
  tmat44_t<vec4_t> v29; 
  tmat44_t<vec4_t> dest; 

  RootElement = LUI_GetRootElement(rootName, luaVM);
  if ( !RootElement && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7481, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  CL_GetScreenDimensions(&width, &height, &aspect);
  v10 = (float)width / (float)height;
  if ( v10 >= 1.7777778 )
    v11 = FLOAT_720_0;
  else
    v11 = 1280.0 / v10;
  v12 = 0;
  RootElement->currentAnimationState.position.x.offsets[0] = left;
  RootElement->currentAnimationState.position.y.offsets[0] = top;
  RootElement->currentAnimationState.position.x.offsets[1] = right;
  RootElement->currentAnimationState.position.y.offsets[1] = bottom;
  RootElement->currentAnimationState.position.x.global[0] = 0.0;
  RootElement->currentAnimationState.position.y.global[0] = 0.0;
  if ( !LUI_CoD_InFrontend() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    RootDataForController = LUI_CoD_GetRootDataForController(ControllerFromClient);
    v12 = RootDataForController->root == RootElement && RootDataForController->forceFullscreen;
  }
  if ( !LUI_CoD_UsingSplitscreenUpscaling() || v12 )
    v15 = v11;
  else
    v15 = FLOAT_432_0;
  RootElement->currentAnimationState.position.y.global[1] = v15;
  RootElement->currentAnimationState.position.x.global[1] = (float)((float)(right - left) / (float)(bottom - top)) * v15;
  *(_WORD *)&RootElement->layoutDeeplyCached = 0;
  for ( i = RootElement->parent; i; i = i->parent )
  {
    if ( !i->layoutDeeplyCached )
      break;
    i->layoutDeeplyCached = 0;
  }
  LUI_QuadCache_Element_Invalidate(RootElement);
  v17 = LUI_GetRootElement(rootName, luaVM);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 611, ASSERT_TYPE_ASSERT, "(root)", (const char *)&queryFormat, "root") )
    __debugbreak();
  RootData = LUI_GetRootData(v17);
  if ( !RootData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7521, ASSERT_TYPE_ASSERT, "(rootData)", (const char *)&queryFormat, "rootData") )
    __debugbreak();
  RootData->unitScale = (float)(bottom - top) / v11;
  RootData->pixelAspectRatio = pixelAspectRatio;
  RootData->left = left;
  RootData->top = top;
  RootData->right = right;
  RootData->bottom = bottom;
  if ( !LUI_Matrix_Invert(&RootData->projectionMatrix, &RootData->inverseProjectionMatrix) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7530, ASSERT_TYPE_ASSERT, "(LUI_Matrix_Invert( rootData->projectionMatrix, rootData->inverseProjectionMatrix ))", (const char *)&queryFormat, "LUI_Matrix_Invert( rootData->projectionMatrix, rootData->inverseProjectionMatrix )") )
    __debugbreak();
  v26 = _xmm;
  LUI_Matrix_MultiplyVector(&RootData->inverseProjectionMatrix, (const vec4_t *)&v26, &result);
  result.v[1] = (float)(1.0 / result.v[3]) * result.v[1];
  result.v[2] = (float)(1.0 / result.v[3]) * result.v[2];
  result.v[0] = (float)(1.0 / result.v[3]) * result.v[0];
  RootData->width = result.v[0] * 2.0;
  v19 = RootData->bottom;
  RootData->height = result.v[1] * -2.0;
  v20 = result.v[2];
  LUI_Matrix_BuildTranslationMatrix((float)(RootData->right - RootData->left) * -0.5, (float)(v19 - RootData->top) * -0.5, 0.0, &matrix2);
  v21 = RootData->height / (float)(RootData->bottom - RootData->top);
  LUI_Matrix_BuildScaleMatrix(RootData->width / (float)(RootData->right - RootData->left), COERCE_CONST_FLOAT(LODWORD(v21) ^ _xmm), v21, &matrix1);
  LUI_Matrix_Multiply(&matrix1, &matrix2, &v29);
  LUI_Matrix_BuildTranslationMatrix(0.0, 0.0, v20, &matrix2);
  LUI_Matrix_Multiply(&matrix2, &v29, &matrix1);
  LUI_Matrix_Copy(&RootData->projectionMatrix, &dest);
  LUI_Matrix_Multiply(&dest, &matrix1, &RootData->projectionMatrix);
  if ( !LUI_Matrix_Invert(&RootData->projectionMatrix, &RootData->inverseProjectionMatrix) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7555, ASSERT_TYPE_ASSERT, "(LUI_Matrix_Invert( rootData->projectionMatrix, rootData->inverseProjectionMatrix ))", (const char *)&queryFormat, "LUI_Matrix_Invert( rootData->projectionMatrix, rootData->inverseProjectionMatrix )") )
    __debugbreak();
}

/*
==============
LUI_RestoreMenu
==============
*/
void LUI_RestoreMenu(int controllerIndex, const char *menuName, int replaceTop, int exclusiveController, lua_State *luaVM)
{
  LUI_RestoreMenu_Internal(controllerIndex, menuName, -1, replaceTop, exclusiveController, luaVM);
}

/*
==============
LUI_RestoreMenuById
==============
*/
void LUI_RestoreMenuById(int controllerIndex, const int menuId, int replaceTop, int exclusiveController, lua_State *luaVM)
{
  LUI_RestoreMenu_Internal(controllerIndex, NULL, menuId, replaceTop, exclusiveController, luaVM);
}

/*
==============
LUI_RestoreMenu_Internal
==============
*/
void LUI_RestoreMenu_Internal(int controllerIndex, const char *menuName, const int menuId, int replaceTop, int exclusiveController, lua_State *luaVM)
{
  __int64 v6; 
  __int64 v8; 
  LocalClientNum_t ClientFromController; 

  v6 = controllerIndex;
  v8 = menuId;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "restoreMenu", luaVM) )
  {
    if ( menuName )
      LuaShared_SetTableString("menu", menuName, luaVM);
    if ( (int)v8 >= 0 )
      LuaShared_SetTableInt("menuId", v8, luaVM);
    LuaShared_SetTableBool("immediate", 1, luaVM);
    LuaShared_SetTableInt("controller", v6, luaVM);
    if ( replaceTop )
      LuaShared_SetTableBool("replaceTop", 1, luaVM);
    if ( exclusiveController )
      LuaShared_SetTableBool("exclusiveController", 1, luaVM);
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_RestorePopup
==============
*/
void LUI_RestorePopup(int controllerIndex, const char *menuName, int exclusiveController, lua_State *luaVM)
{
  __int64 v4; 
  LocalClientNum_t ClientFromController; 

  v4 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "popupmenu", luaVM) )
  {
    LuaShared_SetTableString("menu", menuName, luaVM);
    LuaShared_SetTableBool("immediate", 1, luaVM);
    if ( exclusiveController )
    {
      LuaShared_SetTableBool("exclusiveController", 1, luaVM);
      LuaShared_SetTableInt("controller", v4, luaVM);
    }
    LUI_EndEvent(3, luaVM);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_SetCurrentParallaxMatrix
==============
*/
void LUI_SetCurrentParallaxMatrix(tmat44_t<vec4_t> *parallaxMatrix)
{
  s_parallaxMatrix = parallaxMatrix;
}

/*
==============
LUI_SetDrawDebugBounds
==============
*/
void LUI_SetDrawDebugBounds(bool drawBounds)
{
  s_drawDebugBoundingBoxes = drawBounds;
}

/*
==============
LUI_SetScopeUIStencilEnabled
==============
*/
void LUI_SetScopeUIStencilEnabled(const bool enabled)
{
  const dvar_t *v2; 
  bool v3; 

  if ( !s_isInBuildDrawList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 361, ASSERT_TYPE_ASSERT, "(LUI_IsInBuildDrawList())", (const char *)&queryFormat, "LUI_IsInBuildDrawList()") )
    __debugbreak();
  v2 = DVARBOOL_ui_scope_stencils;
  if ( !DVARBOOL_ui_scope_stencils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_scope_stencils") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = s_scopeUIStencilEnabled;
  if ( v2->current.enabled )
    v3 = enabled;
  s_scopeUIStencilEnabled = v3;
}

/*
==============
LUI_SetTableBool
==============
*/

void __fastcall LUI_SetTableBool(const char *key, bool value, lua_State *luaVM)
{
  LuaShared_SetTableBool(key, value, luaVM);
}

/*
==============
LUI_SetTableBool
==============
*/

void __fastcall LUI_SetTableBool(__int64 key, bool value, lua_State *luaVM)
{
  LuaShared_SetTableBool(key, value, luaVM);
}

/*
==============
LUI_SetTableElement
==============
*/
void LUI_SetTableElement(const char *key, LUIElement *element, lua_State *luaVM)
{
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LUI_SetTableElement
==============
*/
void LUI_SetTableElement(__int64 key, LUIElement *element, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  LUI_PutElementOnTopOfStack(element, luaVM);
  j_lua_settable(luaVM, -3);
}

/*
==============
LUI_SetTableHandle
==============
*/
void LUI_SetTableHandle(const char *key, unsigned int handle, lua_State *luaVM)
{
  j_lua_pushlightuserdata(luaVM, (void *)handle);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LUI_SetTableHandle
==============
*/
void LUI_SetTableHandle(__int64 key, unsigned int handle, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_pushlightuserdata(luaVM, (void *)handle);
  j_lua_settable(luaVM, -3);
}

/*
==============
LUI_SetTableInt
==============
*/

void __fastcall LUI_SetTableInt(const char *key, __int64 value, lua_State *luaVM)
{
  LuaShared_SetTableInt(key, value, luaVM);
}

/*
==============
LUI_SetTableInt
==============
*/

void __fastcall LUI_SetTableInt(__int64 key, __int64 value, lua_State *luaVM)
{
  LuaShared_SetTableInt(key, value, luaVM);
}

/*
==============
LUI_SetTableMaterial
==============
*/
void LUI_SetTableMaterial(const char *key, const GfxImage *material, lua_State *luaVM)
{
  if ( !material )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )");
  j_lua_pushlightuserdata(luaVM, (void *)material);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LUI_SetTableMaterial
==============
*/
void LUI_SetTableMaterial(__int64 key, const GfxImage *material, lua_State *luaVM)
{
  if ( !material )
    j_luaL_error(luaVM, (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )");
  j_lua_pushinteger(luaVM, key);
  j_lua_pushlightuserdata(luaVM, (void *)material);
  j_lua_settable(luaVM, -3);
}

/*
==============
LUI_SetTableNil
==============
*/

void __fastcall LUI_SetTableNil(const char *key, lua_State *luaVM)
{
  LuaShared_SetTableNil(key, luaVM);
}

/*
==============
LUI_SetTableNumber
==============
*/

void __fastcall LUI_SetTableNumber(const char *key, long double value, lua_State *luaVM)
{
  LuaShared_SetTableNumber(key, value, luaVM);
}

/*
==============
LUI_SetTableNumber
==============
*/

void __fastcall LUI_SetTableNumber(__int64 key, long double value, lua_State *luaVM)
{
  LuaShared_SetTableNumber(key, value, luaVM);
}

/*
==============
LUI_SetTableString
==============
*/

void __fastcall LUI_SetTableString(const char *key, const char *value, lua_State *luaVM)
{
  LuaShared_SetTableString(key, value, luaVM);
}

/*
==============
LUI_SetTableString
==============
*/

void __fastcall LUI_SetTableString(__int64 key, const char *value, lua_State *luaVM)
{
  LuaShared_SetTableString(key, value, luaVM);
}

/*
==============
LUI_SharedTextRef_AddRef
==============
*/
void LUI_SharedTextRef_AddRef(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  unsigned __int16 v2; 
  unsigned int *p_refCount; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = index;
  if ( (_WORD)index == INVALID_INDEX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9528, ASSERT_TYPE_ASSERT, "( index ) != ( LUISharedTextRefIndex::INVALID_INDEX )", "%s != %s\n\t%u, %u", "index", "LUISharedTextRefIndex::INVALID_INDEX", 0xFFFF, 0xFFFF) )
      __debugbreak();
  }
  else if ( (unsigned __int16)index < 0x1AF4u )
  {
    goto LABEL_7;
  }
  LODWORD(v6) = 6900;
  LODWORD(v5) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9531, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_LUISharedTextRefs ) ) + 0 ) )", "i doesn't index s_LUISharedTextRefs\n\t%i not in [0, %i)", v5, v6) )
    __debugbreak();
LABEL_7:
  if ( ((unsigned __int8)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9534, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0") )
    __debugbreak();
  p_refCount = &s_LUISharedTextRefs[v2].refCount;
  if ( !*p_refCount )
    j_luaL_error(luaVM, (const char *)&queryFormat, "sharedRef.refCount > 0");
  if ( *p_refCount >= 0xFF )
  {
    LODWORD(v8) = 255;
    LODWORD(v7) = *p_refCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9538, ASSERT_TYPE_ASSERT, "( sharedRef.refCount ) < ( LUI_SHARED_TEXT_REF_MAX_REF_COUNT_PER_REF )", "%s < %s\n\t%u, %u", "sharedRef.refCount", "LUI_SHARED_TEXT_REF_MAX_REF_COUNT_PER_REF", v7, v8) )
      __debugbreak();
  }
  ++*p_refCount;
  if ( ((unsigned __int64)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9541, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
LUI_SharedTextRef_CreateRef
==============
*/
__int64 LUI_SharedTextRef_CreateRef(lua_State *luaVM)
{
  unsigned __int64 v2; 
  unsigned __int16 v3; 
  LUISharedTextRef *v5; 
  __int64 v6; 

  v2 = (unsigned __int64)s_LUISharedTextRefThreadCheck & 3;
  if ( ((unsigned __int8)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9488, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0") )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9489, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9490, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  v3 = s_LUISharedTextRefsNextFree;
  if ( (_WORD)s_LUISharedTextRefsNextFree != INVALID_INDEX )
    goto LABEL_49;
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9495, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
    __debugbreak();
  LUI_EmergencyFullGC(luaVM, "LUI_SharedTextRef limit reached (%i). Should increase limit", 6900i64);
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9497, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0") )
    __debugbreak();
  v3 = s_LUISharedTextRefsNextFree;
  if ( (_WORD)s_LUISharedTextRefsNextFree == INVALID_INDEX )
  {
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
      __debugbreak();
    if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9502, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
      __debugbreak();
    Com_PrintError(13, "LUI ERROR: Failed to allocate SharedTextRef. Restarting the Lua VM.\n");
    if ( LUI_MemErrorsFatal->current.enabled )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144462E70, 521i64);
    else
      LUI_CoD_Error(4);
    return 0xFFFFi64;
  }
  else
  {
LABEL_49:
    if ( v3 >= 0x1AF4u )
    {
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9512, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint16_t>(newIndex) ) < (unsigned)( ( sizeof( *array_counter( s_LUISharedTextRefs ) ) + 0 ) )", "static_cast<uint16_t>(newIndex) doesn't index s_LUISharedTextRefs\n\t%i not in [0, %i)", v6, 6900) )
        __debugbreak();
    }
    v5 = &s_LUISharedTextRefs[v3];
    LOWORD(s_LUISharedTextRefsNextFree) = v5->ref;
    v5->ref = LUI_Ref_Monitor_AddRef(luaVM, -10000);
    v5->refCount = 1;
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
      __debugbreak();
    if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9520, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
      __debugbreak();
    return v3;
  }
}

/*
==============
LUI_SharedTextRef_PushRefOnStack
==============
*/
void LUI_SharedTextRef_PushRefOnStack(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  unsigned __int16 v3; 
  bool v4; 
  LUISharedTextRef *v5; 
  int v6; 
  int v7; 

  v3 = index;
  if ( (unsigned __int16)index >= 0x1AF4u )
  {
    v7 = 6900;
    v6 = (unsigned __int16)index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9576, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_LUISharedTextRefs ) ) + 0 ) )", "i doesn't index s_LUISharedTextRefs\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( ((unsigned __int8)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9579, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0") )
    __debugbreak();
  v4 = s_LUISharedTextRefs[v3].refCount == 0;
  v5 = &s_LUISharedTextRefs[v3];
  if ( v4 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "sharedRef.refCount > 0");
  j_lua_rawgeti(luaVM, -10000, v5->ref);
  if ( !j_lua_isstring(luaVM, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9585, ASSERT_TYPE_ASSERT, "(lua_isstring( luaVM, -1 ))", (const char *)&queryFormat, "lua_isstring( luaVM, -1 )") )
    __debugbreak();
  if ( ((unsigned __int64)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9587, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
LUI_SharedTextRef_RemoveRef
==============
*/
void LUI_SharedTextRef_RemoveRef(lua_State *luaVM, const LUISharedTextRefIndex index)
{
  unsigned __int16 v2; 
  LUISharedTextRef *v4; 
  unsigned int refCount; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v2 = index;
  if ( (_WORD)index == INVALID_INDEX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9547, ASSERT_TYPE_ASSERT, "( index ) != ( LUISharedTextRefIndex::INVALID_INDEX )", "%s != %s\n\t%u, %u", "index", "LUISharedTextRefIndex::INVALID_INDEX", 0xFFFF, 0xFFFF) )
    __debugbreak();
  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9549, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( v2 >= 0x1AF4u )
  {
    LODWORD(v8) = 6900;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9552, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_LUISharedTextRefs ) ) + 0 ) )", "i doesn't index s_LUISharedTextRefs\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( ((unsigned __int8)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9555, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 1, 0 ) == 0") )
    __debugbreak();
  v4 = &s_LUISharedTextRefs[v2];
  refCount = v4->refCount;
  if ( !refCount )
    j_luaL_error(luaVM, (const char *)&queryFormat, "sharedRef.refCount > 0");
  v6 = refCount - 1;
  v4->refCount = v6;
  if ( !v6 )
  {
    LUI_UnrefVerify<int (lua_State *,int)>(luaVM, -10000, v4->ref, j_lua_isstring);
    LUI_Ref_Monitor_RemoveRef(luaVM, -10000, v4->ref);
    v4->ref = (unsigned __int16)s_LUISharedTextRefsNextFree;
    LOWORD(s_LUISharedTextRefsNextFree) = v2;
  }
  if ( ((unsigned __int64)s_LUISharedTextRefThreadCheck & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", s_LUISharedTextRefThreadCheck) )
    __debugbreak();
  if ( _InterlockedCompareExchange(s_LUISharedTextRefThreadCheck, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 9570, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_LUISharedTextRefThreadCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
LUI_ShouldDrawDebugBounds
==============
*/
_BOOL8 LUI_ShouldDrawDebugBounds()
{
  return s_drawDebugBoundingBoxes;
}

/*
==============
LUI_Shutdown
==============
*/
void LUI_Shutdown(void)
{
  bool v0; 
  bool v1; 
  bool v2; 
  int v3; 
  bool v4; 
  bool v5; 
  DLogContext context; 
  char buffer[4096]; 

  s_luaInitialized = 0;
  if ( LUI_luaVM )
  {
    LUI_Interface_DebugPrint("LUI: Shutting down...\n");
    R_RTT_DeleteAllSlots(LOCAL_CLIENT_0);
    R_RTT_DeleteAllSlots(LOCAL_CLIENT_1);
    LUI_Model_ResetSubscriptions();
    s_LUI_DestroyFunc(LUI_luaVM);
    LUI_CoD_OnScreenKeyboard_LuaRestarted();
    LUI_luaVM = NULL;
    v0 = !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80);
    v1 = CL_GetLocalClientActiveCount() > 1;
    v2 = LUI_CoD_InFrontend();
    v3 = s_LUIHighAllocatedElements;
    v4 = v2;
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v5 = DLog_BeginEvent(&context, "lui_hw_core");
      context.autoEndEvent = 1;
      if ( v5 && DLog_Int32(&context, "elements_high", v3) && DLog_Int32(&context, "anim_states_high", 0) && DLog_Bool(&context, "frontend", v4) && DLog_Bool(&context, "splitscreen", v1) && DLog_Bool(&context, "issp", v0) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
LUI_ToElement
==============
*/
LUIElement *LUI_ToElement(lua_State *luaVM, int index)
{
  _WORD *v2; 
  _WORD *v3; 
  unsigned __int16 v5; 
  __int64 v6; 

  v2 = j_lua_touserdata(luaVM, index);
  v3 = v2;
  if ( !v2 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 257, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
      __debugbreak();
    return 0i64;
  }
  v5 = *v2;
  if ( v5 >= 0x1194u )
    return 0i64;
  v6 = v5;
  if ( v3[1] != s_LUIElementPool.m_poolData[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_pool.h", 274, ASSERT_TYPE_ASSERT, "(userData->iteration == m_poolData[poolIndex])", "%s\n\tAttempted to access data that has already been destroyed!", "userData->iteration == m_poolData[poolIndex]") )
    __debugbreak();
  if ( v3[1] == s_LUIElementPool.m_poolData[v6] )
    return (LUIElement *)((char *)&s_LUIElementPool + 320 * v6);
  else
    return 0i64;
}

/*
==============
LUI_ToXUID
==============
*/
XUID *LUI_ToXUID(XUID *result, lua_State *luaVM, int index)
{
  const char *v4; 

  v4 = j_lua_tolstring(luaVM, index, NULL);
  XUID::FromString(result, v4);
  return result;
}

/*
==============
LUI_ToastNotificationAnnouncement
==============
*/
void LUI_ToastNotificationAnnouncement(lua_State *luaVM, char *pMsg, unsigned int uiMessageSize)
{
  ;
}

/*
==============
LUI_TryEnterCriticalSection
==============
*/
_BOOL8 LUI_TryEnterCriticalSection(const char *functionNameIn)
{
  bool v1; 

  v1 = Sys_TryEnterCriticalSection(CRITSECT_LUI);
  if ( v1 )
  {
    ++g_lui_lock_level;
    s_ownerThreadMain = Sys_IsMainThread();
    s_ownerThreadServer = Sys_IsServerThread();
    g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  }
  return v1;
}

/*
==============
LUI_UnitsToProjectedUnits
==============
*/
void LUI_UnitsToProjectedUnits(const float LUILeft, const float LUITop, const float LUIRight, const float LUIBottom, float unitScale, float *left, float *top, float *right, float *bottom)
{
  *left = LUILeft * unitScale;
  *top = LUITop * unitScale;
  *right = LUIRight * unitScale;
  *bottom = LUIBottom * unitScale;
}

/*
==============
LUI_UpdateGameMode
==============
*/
void LUI_UpdateGameMode(GameModeType currentGameMode, GameModeType previousGameMode)
{
  lua_State *v2; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 

  v2 = LUI_luaVM;
  v3 = previousGameMode;
  v4 = currentGameMode;
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "update_game_mode", LUI_luaVM) )
  {
    LuaShared_SetTableInt("currentGameMode", v4, v2);
    LuaShared_SetTableInt("previousGameMode", v3, v2);
    LUI_EndEvent(3, v2);
    LUI_LeaveCriticalSection();
  }
}

/*
==============
LUI_UsesRightToLeftAlignmentFlip
==============
*/
bool LUI_UsesRightToLeftAlignmentFlip(LUIElement *element)
{
  return (element->currentAnimationState.flags & 8) == 0;
}

/*
==============
lui_tointeger32
==============
*/

int __fastcall lui_tointeger32(lua_State *luaVM, int index)
{
  return lua_tointeger32(luaVM, index);
}

/*
==============
lui_tonumber32
==============
*/

double __fastcall lui_tonumber32(lua_State *luaVM, int index)
{
  return lua_tonumber32(luaVM, index);
}

/*
==============
lui_tounsignedinteger32
==============
*/
__int64 lui_tounsignedinteger32(lua_State *luaVM, int index)
{
  __int64 v2; 

  v2 = j_lua_tointeger(luaVM, index);
  if ( (v2 < 0 || (unsigned __int64)v2 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v2, "signed", v2) )
    __debugbreak();
  return (unsigned int)v2;
}

/*
==============
LUI_ReportErrorData
==============
*/
void LUI_ReportErrorData(const char *error)
{
  int v2; 
  int i; 
  char buffer[512]; 

  if ( !error && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 7095, ASSERT_TYPE_ASSERT, "(error)", (const char *)&queryFormat, "error") )
    __debugbreak();
  LUI_Interface_ErrorPrint("LUI: %s\n", error);
  LUI_CoD_PrintCallstack();
  LUI_ReportMemoryUsage();
  Sys_EnterCriticalSection(CRITSECT_LUI);
  if ( g_lui_lock_level < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.cpp", 6855, ASSERT_TYPE_ASSERT, "(g_lui_lock_level >= 0)", (const char *)&queryFormat, "g_lui_lock_level >= 0") )
    __debugbreak();
  ++g_lui_lock_level;
  s_ownerThreadMain = Sys_IsMainThread();
  s_ownerThreadServer = Sys_IsServerThread();
  g_lui_last_lockingThread = Sys_GetCurrentThreadContext();
  if ( LUI_luaVM )
  {
    v2 = j_lua_gettop(LUI_luaVM);
    LUI_Interface_DebugPrint("LUI_DumpStack() : luaVM = %p\n", LUI_luaVM);
    LUI_Interface_DebugPrint("There are %d item(s) on the LUI stack.\n", (unsigned int)v2);
    if ( v2 > 0 )
    {
      for ( i = 1; i <= v2; ++i )
      {
        LUI_GetLuaTypeData(LUI_luaVM, i, buffer, 0x200ui64);
        LUI_Interface_DebugPrint((const char *)&queryFormat, buffer);
      }
    }
  }
  LUI_LeaveCriticalSection();
  LUI_Interface_DebugPrint("\n");
}

